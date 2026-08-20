#include "Bsp_Pwm.h"
#include "Bsp_InterruptManager.h"
#include "Gpio_Reg.h"
#include "Port_Reg.h"
#include "SchM_Pwm.h"


/************ Macro *******************/
#define BSP_PWM_WAVE_IRQ_PRIORITY (0U)
#define BSP_PWM_GPIOC_OUTPUT_MASK (0x02800080U)
#define BSP_PWM_GPIOD_OUTPUT_MASK (0x00200010U)
#define BSP_PWM_GPIOE_OUTPUT_MASK (0x00002C00U)
#define BSP_PWM_GPIOH_OUTPUT_MASK (0x00400000U)
#define BSP_PWM_START_POLL_LIMIT (10000U)
/* The task is called every 5 us, while the Frame API contract permits one
 * accepted submission in any 20 us interval. */
#define BSP_PWM_FRAME_UPDATE_EXAMPLE_DIVIDER (4U)

/************ Local variable *******************/
static volatile Bsp_PwmWave_JobType s_ePwmWaveJob = BSP_PWM_WAVE_JOB_NONE;
static volatile Bsp_PwmWave_JobStateType s_ePwmWaveJobState = BSP_PWM_WAVE_JOB_IDLE;
static volatile Cdd_PwmWave_ResultType s_ePwmWaveLastResult = CDD_PWM_WAVE_E_UNINIT;
static volatile Cdd_PwmWave_SequenceType s_u32PwmWaveRequestedSequence = 0U;
static volatile uint32 s_u32PwmWaveCommandEpoch = 0U;
static volatile boolean s_bPwmWaveMainInProgress = FALSE;

/************ Local functions *******************/
static boolean Bsp_PwmWave_IsCore0(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
  return (0U == GET_CPU_ID()) ? TRUE : FALSE;
#else
  return TRUE;
#endif
}

static boolean Bsp_PwmWave_IsJobPending(void)
{
  boolean bPending;

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  bPending = (BSP_PWM_WAVE_JOB_PENDING == s_ePwmWaveJobState) ? TRUE : FALSE;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return bPending;
}

static void Bsp_PwmWave_RecordJob(Bsp_PwmWave_JobType eJob, Bsp_PwmWave_JobStateType eJobState, Cdd_PwmWave_ResultType eResult,
                                  Cdd_PwmWave_SequenceType u32Sequence)
{
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  s_ePwmWaveJob = eJob;
  s_ePwmWaveLastResult = eResult;
  s_u32PwmWaveRequestedSequence = u32Sequence;
  s_ePwmWaveJobState = eJobState;
  s_u32PwmWaveCommandEpoch++;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}

static uint32 Bsp_PwmWave_GetCommandEpoch(void)
{
  uint32 u32Epoch;

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  u32Epoch = s_u32PwmWaveCommandEpoch;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return u32Epoch;
}

static void Bsp_PwmWave_RecordJobIfCurrent(uint32 u32ExpectedEpoch, Bsp_PwmWave_JobType eJob, Bsp_PwmWave_JobStateType eJobState,
                                           Cdd_PwmWave_ResultType eResult, Cdd_PwmWave_SequenceType u32Sequence)
{
  /* Do not overwrite an EmergencyShutdown that preempted a normal command. */
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (u32ExpectedEpoch == s_u32PwmWaveCommandEpoch) {
    s_ePwmWaveJob = eJob;
    s_ePwmWaveLastResult = eResult;
    s_u32PwmWaveRequestedSequence = u32Sequence;
    s_ePwmWaveJobState = eJobState;
    s_u32PwmWaveCommandEpoch++;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}

static void Bsp_PwmWave_FinishPendingJob(Bsp_PwmWave_JobType eJob, Cdd_PwmWave_SequenceType u32Sequence, Cdd_PwmWave_ResultType eResult)
{
  /* EmergencyShutdown may have preempted the normal Core0 control task. */
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((BSP_PWM_WAVE_JOB_PENDING == s_ePwmWaveJobState) && (eJob == s_ePwmWaveJob) && (u32Sequence == s_u32PwmWaveRequestedSequence)) {
    s_ePwmWaveLastResult = eResult;
    s_ePwmWaveJobState = (CDD_PWM_WAVE_OK == eResult) ? BSP_PWM_WAVE_JOB_COMPLETED : BSP_PWM_WAVE_JOB_FAILED;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}

static Cdd_PwmWave_ResultType Bsp_PwmWave_GetFaultResult(const Cdd_PwmWave_StatusType *pStatus)
{
  if (0U != (pStatus->u32FaultFlags & CDD_PWM_WAVE_FAULT_HW_CONFIG)) {
    return CDD_PWM_WAVE_E_HW_CONFIG;
  }
  if (0U != (pStatus->u32FaultFlags & CDD_PWM_WAVE_FAULT_HW_TIMEOUT)) {
    return CDD_PWM_WAVE_E_HW_TIMEOUT;
  }
  return CDD_PWM_WAVE_E_FAULT_ACTIVE;
}

static Cdd_PwmWave_ResultType Bsp_PwmWave_RequestStartFrame(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_StatusType tStatus;
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  uint32 u32CommandEpoch;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  u32CommandEpoch = Bsp_PwmWave_GetCommandEpoch();
  if (TRUE == Bsp_PwmWave_IsJobPending()) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  eResult = Cdd_PwmWave_GetStatus(&tStatus);
  if (CDD_PWM_WAVE_OK == eResult) {
    if (TRUE == tStatus.bFaultLatched) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
    } else if ((TRUE == tStatus.bPendingFrameValid) || (TRUE == tStatus.bStartPending)) {
      eResult = CDD_PWM_WAVE_E_BUSY;
    } else if (CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) {
      eResult = CDD_PWM_WAVE_E_STATE;
    }
  }

  if (CDD_PWM_WAVE_OK == eResult) {
    /* Start loads its complete frame through the same public Submit chain as
     * every runtime period/window update. */
    eResult = Bsp_PwmWave_RequestUpdate(pFrame, &u32Sequence);
  }

  if (CDD_PWM_WAVE_OK == eResult) {
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_START_WITH_FRAME, BSP_PWM_WAVE_JOB_PENDING, CDD_PWM_WAVE_OK, u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_START_WITH_FRAME, BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
  }

  return eResult;
}

static void Bsp_Pwm_SetOutputPinModes(void)
{
  /* PWM5: eFTU1 TOM0 CH3 direct output. */
  Port_SetPinMode(PortConf_PortContainer_7_PortPin_22, PORT246_eFTU1_OUT_S3); /* PTH22 */

  /* PWM1-PWM4: eFTU1 TOM0 CH4-CH7 through DTM1 complementary outputs. */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_7, PORT71_eFTU1_OUT_S4);    /* PTC7 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_11, PORT139_eFTU1_OUT_S5);  /* PTE11 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_10, PORT138_eFTU1_OUT_S6);  /* PTE10 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_13, PORT141_eFTU1_OUT_S7);  /* PTE13 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_25, PORT89_eFTU1_OUT_S20);  /* PTC25 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_23, PORT87_eFTU1_OUT_S21);  /* PTC23 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_19, PORT117_eFTU1_OUT_S22); /* PTD21 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_4, PORT100_eFTU1_OUT_S23);  /* PTD4 */
}

static boolean Bsp_Pwm_AreOutputPinsGpioLow(void)
{
  return ((((PORTC->PCR[7U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) && ((PORTC->PCR[23U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTC->PCR[25U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) && ((PORTD->PCR[4U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTD->PCR[21U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) && ((PORTE->PCR[10U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[11U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) && ((PORTE->PCR[13U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTH->PCR[22U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((GPIOC->PDDR & BSP_PWM_GPIOC_OUTPUT_MASK) == BSP_PWM_GPIOC_OUTPUT_MASK) &&
           ((GPIOD->PDDR & BSP_PWM_GPIOD_OUTPUT_MASK) == BSP_PWM_GPIOD_OUTPUT_MASK) &&
           ((GPIOE->PDDR & BSP_PWM_GPIOE_OUTPUT_MASK) == BSP_PWM_GPIOE_OUTPUT_MASK) &&
           ((GPIOH->PDDR & BSP_PWM_GPIOH_OUTPUT_MASK) == BSP_PWM_GPIOH_OUTPUT_MASK) && ((GPIOC->PIDR & BSP_PWM_GPIOC_OUTPUT_MASK) == 0U) &&
           ((GPIOD->PIDR & BSP_PWM_GPIOD_OUTPUT_MASK) == 0U) && ((GPIOE->PIDR & BSP_PWM_GPIOE_OUTPUT_MASK) == 0U) &&
           ((GPIOH->PIDR & BSP_PWM_GPIOH_OUTPUT_MASK) == 0U) && ((GPIOC->PDIR & BSP_PWM_GPIOC_OUTPUT_MASK) == 0U) &&
           ((GPIOD->PDIR & BSP_PWM_GPIOD_OUTPUT_MASK) == 0U) && ((GPIOE->PDIR & BSP_PWM_GPIOE_OUTPUT_MASK) == 0U) &&
           ((GPIOH->PDIR & BSP_PWM_GPIOH_OUTPUT_MASK) == 0U)))
             ? TRUE
             : FALSE;
}

static boolean Bsp_Pwm_ForceOutputPinsGpioLow(void)
{
  /* Prepare a driven-low GPIO state before reconnecting the pads to GPIO. */
  GPIOC->PCOR = BSP_PWM_GPIOC_OUTPUT_MASK;
  GPIOD->PCOR = BSP_PWM_GPIOD_OUTPUT_MASK;
  GPIOE->PCOR = BSP_PWM_GPIOE_OUTPUT_MASK;
  GPIOH->PCOR = BSP_PWM_GPIOH_OUTPUT_MASK;
  GPIOC->PDDR |= BSP_PWM_GPIOC_OUTPUT_MASK;
  GPIOD->PDDR |= BSP_PWM_GPIOD_OUTPUT_MASK;
  GPIOE->PDDR |= BSP_PWM_GPIOE_OUTPUT_MASK;
  GPIOH->PDDR |= BSP_PWM_GPIOH_OUTPUT_MASK;
  GPIOC->PIDR &= ~BSP_PWM_GPIOC_OUTPUT_MASK;
  GPIOD->PIDR &= ~BSP_PWM_GPIOD_OUTPUT_MASK;
  GPIOE->PIDR &= ~BSP_PWM_GPIOE_OUTPUT_MASK;
  GPIOH->PIDR &= ~BSP_PWM_GPIOH_OUTPUT_MASK;
  MCAL_DATA_SYNC_BARRIER();

  Port_SetPinMode(PortConf_PortContainer_7_PortPin_22, PORT246_GPIO); /* PTH22 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_7, PORT71_GPIO);   /* PTC7 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_11, PORT139_GPIO); /* PTE11 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_10, PORT138_GPIO); /* PTE10 */
  Port_SetPinMode(PortConf_PortContainer_4_PortPin_13, PORT141_GPIO); /* PTE13 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_25, PORT89_GPIO);  /* PTC25 */
  Port_SetPinMode(PortConf_PortContainer_2_PortPin_23, PORT87_GPIO);  /* PTC23 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_19, PORT117_GPIO); /* PTD21 */
  Port_SetPinMode(PortConf_PortContainer_3_PortPin_4, PORT100_GPIO);  /* PTD4 */
  MCAL_DATA_SYNC_BARRIER();

  return Bsp_Pwm_AreOutputPinsGpioLow();
}

/************ Global functions *******************/
void Bsp_Pwm_Init(void)
{
  Cdd_PwmWave_ResultType ePwmWaveResult;

  Pwm_Init(NULL_PTR);

#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0U == GET_CPU_ID())
#endif
  {
#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
    IntMgr_DisableInterrupt(eFTU1_TOM_0TO7_IRQn);
    BSP_SetInterrupt(0U, (uint32)eFTU1_TOM_0TO7_IRQn);
    IntMgr_SetPriority(eFTU1_TOM_0TO7_IRQn, BSP_PWM_WAVE_IRQ_PRIORITY);
#endif
    Bsp_PwmWave_RecordJob(BSP_PWM_WAVE_JOB_NONE, BSP_PWM_WAVE_JOB_IDLE, CDD_PWM_WAVE_E_UNINIT, 0U);

    ePwmWaveResult = Cdd_PwmWave_Init();
    if (CDD_PWM_WAVE_OK == ePwmWaveResult) {
      Bsp_Pwm_SetOutputPinModes();

      ePwmWaveResult = Cdd_PwmWave_ConfirmArmedLow();
      if (CDD_PWM_WAVE_OK == ePwmWaveResult) {
#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
        IntMgr_EnableInterrupt(eFTU1_TOM_0TO7_IRQn);
#else
        ePwmWaveResult = CDD_PWM_WAVE_E_HW_CONFIG;
#endif
      }
      if (CDD_PWM_WAVE_OK != ePwmWaveResult) {
        (void)Cdd_PwmWave_EmergencyShutdown();
        if (TRUE == Bsp_Pwm_ForceOutputPinsGpioLow()) {
          DEBUG_INFO("Bsp_Pwm: physical ARMED_LOW check failed; GPIO-low fallback verified.\r\n");
        } else {
          DEBUG_INFO("Bsp_Pwm: GPIO-low fallback verification failed; outputs remain fault-latched.\r\n");
        }
      }
    } else {
      DEBUG_INFO("Bsp_Pwm: CDD ARMED_LOW failed, output pins remain GPIO low.\r\n");
    }

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    s_ePwmWaveLastResult = ePwmWaveResult;
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }
}

Cdd_PwmWave_ResultType Bsp_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame)
{
  return Cdd_PwmWave_ValidateFrame(pFrame);
}

Cdd_PwmWave_ResultType Bsp_PwmWave_Start(void)
{
  const Pwm_ConfigType *pPwmConfig;
  Bsp_PwmWave_ControlStatusType tStatus;
  Cdd_PwmWave_FrameType tStartFrame = {0};
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;
  Pwm_ChannelType u8EftuChannel;
  uint32 u32PollCount;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }

  /* Preserve an earlier initialization/capture fault instead of replacing
   * its emergency-shutdown job with a new failed Start request. */
  eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
  if (CDD_PWM_WAVE_OK != eResult) {
    return eResult;
  }
  if (TRUE == tStatus.tDriverStatus.bFaultLatched) {
    return Bsp_PwmWave_GetFaultResult(&tStatus.tDriverStatus);
  }
  if ((TRUE == tStatus.tDriverStatus.bPendingFrameValid) || (TRUE == tStatus.tDriverStatus.bStartPending) ||
      (BSP_PWM_WAVE_JOB_PENDING == tStatus.eJobState)) {
    return CDD_PWM_WAVE_E_BUSY;
  }
  if (CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.tDriverStatus.eState) {
    return CDD_PWM_WAVE_E_STATE;
  }

  if (TRUE == tStatus.tDriverStatus.bActiveFrameValid) {
    eResult = Bsp_PwmWave_GetActiveFrame(&tStartFrame);
    if (CDD_PWM_WAVE_OK != eResult) {
      return eResult;
    }
  } else {
    pPwmConfig = Pwm_ConfigPtr[0U];
    if ((NULL_PTR == pPwmConfig) || (NULL_PTR == pPwmConfig->pLogicChannelToEftuMap) ||
        (NULL_PTR == pPwmConfig->ePwmConfigModules.pEftuChannelCfg) ||
        (PwmConf_PwmChannel_PWM_CARRIER >= pPwmConfig->u32PwmChannelsCount)) {
      return CDD_PWM_WAVE_E_HW_CONFIG;
    }

    u8EftuChannel = pPwmConfig->pLogicChannelToEftuMap[PwmConf_PwmChannel_PWM_CARRIER];
    if (u8EftuChannel >= pPwmConfig->ePwmConfigModules.u8EftuChannelCount) {
      return CDD_PWM_WAVE_E_HW_CONFIG;
    }

    /* Aggregate zero initialization gives PWM1-PWM4 zero-width windows and
     * PWM5 LOW. The carrier period always follows the loaded generated config. */
    tStartFrame.u32PeriodTicks = pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8EftuChannel].tEftuTomChannelConfig.u32PeriodValue;
    tStartFrame.ePwm5State = CDD_PWM_WAVE_PWM5_LOW;
  }

  eResult = Bsp_PwmWave_ValidateFrame(&tStartFrame);
  if (CDD_PWM_WAVE_OK != eResult) {
    return eResult;
  }

  eResult = Bsp_PwmWave_RequestStartFrame(&tStartFrame, &u32Sequence);
  if (CDD_PWM_WAVE_OK != eResult) {
    return eResult;
  }

  /* Poll only the BSP completion layer here: GetStatus refreshes hardware
   * application without consuming the 20 ms CDD timeout counter. Once the
   * frame is active, Bsp_PwmWave_MainFunction() performs synchronous Start. */
  for (u32PollCount = 0U; u32PollCount < BSP_PWM_START_POLL_LIMIT; u32PollCount++) {
    Bsp_PwmWave_MainFunction();
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
    if (CDD_PWM_WAVE_OK != eResult) {
      (void)Bsp_PwmWave_EmergencyShutdown();
      return eResult;
    }
    if (TRUE == tStatus.tDriverStatus.bFaultLatched) {
      return Bsp_PwmWave_GetFaultResult(&tStatus.tDriverStatus);
    }
    if ((BSP_PWM_WAVE_JOB_START_WITH_FRAME != tStatus.eJob) || (u32Sequence != tStatus.u32RequestedSequence)) {
      (void)Bsp_PwmWave_EmergencyShutdown();
      return CDD_PWM_WAVE_E_HW_CONFIG;
    }
    if (BSP_PWM_WAVE_JOB_FAILED == tStatus.eJobState) {
      if (CDD_PWM_WAVE_OK == tStatus.eLastResult) {
        (void)Bsp_PwmWave_EmergencyShutdown();
        return CDD_PWM_WAVE_E_HW_CONFIG;
      }
      return tStatus.eLastResult;
    }
    if (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) {
      if ((CDD_PWM_WAVE_OK == tStatus.eLastResult) && (CDD_PWM_WAVE_STATE_RUN == tStatus.tDriverStatus.eState) &&
          (TRUE == tStatus.tDriverStatus.bActiveFrameValid) && (u32Sequence == tStatus.tDriverStatus.u32ActiveSequence)) {
        return CDD_PWM_WAVE_OK;
      }
      (void)Bsp_PwmWave_EmergencyShutdown();
      return CDD_PWM_WAVE_E_HW_CONFIG;
    }
  }

  (void)Bsp_PwmWave_EmergencyShutdown();
  return CDD_PWM_WAVE_E_HW_TIMEOUT;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestUpdate(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
{
  /* The 20 us data plane deliberately bypasses the BSP job/epoch ledger.
   * CDD owns Frame serialization and returns the submission sequence. */
  return Cdd_PwmWave_SubmitFrame(pFrame, pSequence);
}

Cdd_PwmWave_ResultType Bsp_PwmWave_Stop(void)
{
  Cdd_PwmWave_ResultType eResult;
  uint32 u32CommandEpoch;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  u32CommandEpoch = Bsp_PwmWave_GetCommandEpoch();
  if (TRUE == Bsp_PwmWave_IsJobPending()) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  eResult = Cdd_PwmWave_Stop();
  Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_STOP,
                                 (CDD_PWM_WAVE_OK == eResult) ? BSP_PWM_WAVE_JOB_COMPLETED : BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void)
{
  Cdd_PwmWave_ResultType eResult = Cdd_PwmWave_EmergencyShutdown();

  if (CDD_PWM_WAVE_E_WRONG_CORE != eResult) {
    Bsp_PwmWave_RecordJob(BSP_PWM_WAVE_JOB_EMERGENCY_SHUTDOWN,
                          (CDD_PWM_WAVE_OK == eResult) ? BSP_PWM_WAVE_JOB_COMPLETED : BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
  }
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_ClearFault(void)
{
  Cdd_PwmWave_ResultType eResult;
  uint32 u32CommandEpoch;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  u32CommandEpoch = Bsp_PwmWave_GetCommandEpoch();
  if (TRUE == Bsp_PwmWave_IsJobPending()) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  eResult = Cdd_PwmWave_ClearFault();
  Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_CLEAR_FAULT,
                                 (CDD_PWM_WAVE_OK == eResult) ? BSP_PWM_WAVE_JOB_COMPLETED : BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_GetControlStatus(Bsp_PwmWave_ControlStatusType *pStatus)
{
  Cdd_PwmWave_ResultType eResult;

  if (NULL_PTR == pStatus) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  eResult = Cdd_PwmWave_GetStatus(&pStatus->tDriverStatus);
  pStatus->eJob = s_ePwmWaveJob;
  pStatus->eJobState = s_ePwmWaveJobState;
  pStatus->eLastResult = s_ePwmWaveLastResult;
  pStatus->u32RequestedSequence = s_u32PwmWaveRequestedSequence;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_GetActiveFrame(Cdd_PwmWave_FrameType *pFrame)
{
  return Cdd_PwmWave_GetActiveFrame(pFrame);
}

Cdd_PwmWave_ResultType Bsp_PwmWave_GetPendingFrame(Cdd_PwmWave_FrameType *pFrame)
{
  return Cdd_PwmWave_GetPendingFrame(pFrame);
}

void Bsp_PwmWave_MainFunction(void)
{
  Cdd_PwmWave_StatusType tStatus;
  Bsp_PwmWave_JobType eJob;
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((FALSE == s_bPwmWaveMainInProgress) && (BSP_PWM_WAVE_JOB_PENDING == s_ePwmWaveJobState)) {
    s_bPwmWaveMainInProgress = TRUE;
    eJob = s_ePwmWaveJob;
    u32Sequence = s_u32PwmWaveRequestedSequence;
  } else {
    eJob = BSP_PWM_WAVE_JOB_NONE;
    u32Sequence = 0U;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (BSP_PWM_WAVE_JOB_NONE == eJob) {
    return;
  }

  eResult = Cdd_PwmWave_GetStatus(&tStatus);
  if (CDD_PWM_WAVE_OK != eResult) {
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, eResult);
  } else if (TRUE == tStatus.bFaultLatched) {
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, Bsp_PwmWave_GetFaultResult(&tStatus));
  } else if (TRUE == tStatus.bPendingFrameValid) {
    if (u32Sequence != tStatus.u32PendingSequence) {
      (void)Cdd_PwmWave_EmergencyShutdown();
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
    }
  } else if ((FALSE == tStatus.bActiveFrameValid) || (u32Sequence != tStatus.u32ActiveSequence)) {
    /* The accepted frame disappeared or was replaced outside this owner. */
    (void)Cdd_PwmWave_EmergencyShutdown();
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
  } else if (BSP_PWM_WAVE_JOB_START_WITH_FRAME == eJob) {
    if ((CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) || (TRUE == tStatus.bStartPending)) {
      (void)Cdd_PwmWave_EmergencyShutdown();
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
    } else {
      eResult = Cdd_PwmWave_Start();
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, eResult);
    }
  } else {
    (void)Cdd_PwmWave_EmergencyShutdown();
    Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  s_bPwmWaveMainInProgress = FALSE;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}

void Bsp_Pwm_10ms_Task_Event(void)
{
}

void Bsp_Pwm_20ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0 == GET_CPU_ID()) {
#endif
    Cdd_PwmWave_MainFunction();
#if (PWM_MULTICORE_ENABLED == STD_ON)
  }
#endif
}

void Bsp_Pwm_5ms_Task_Event(void)
{
}

void Bsp_Pwm_5us_Task_Event(void)
{
  static Cdd_PwmWave_FrameType s_tExampleFrame;
  static uint8 s_u8ExampleDivider = 0U;
  static boolean s_bExampleFrameValid = FALSE;
  static boolean s_bExampleHighDuty = FALSE;
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;
  uint32 u32QuarterPeriod;

  s_u8ExampleDivider++;
  if (s_u8ExampleDivider < BSP_PWM_FRAME_UPDATE_EXAMPLE_DIVIDER) {
    return;
  }
  s_u8ExampleDivider = 0U;

  /* One-time seed from the confirmed active Frame keeps Period, PWM5 state
   * and the other three windows unchanged. Replace this waveform generation
   * block with the application control result in production. */
  if (FALSE == s_bExampleFrameValid) {
    eResult = Bsp_PwmWave_GetActiveFrame(&s_tExampleFrame);
    if (CDD_PWM_WAVE_OK != eResult) {
      return;
    }
    s_bExampleFrameValid = TRUE;
  }

  /* Example: alternate PWM1 between 25% and 75% every accepted 20 us Frame.
   * A complete Frame is still submitted through the single public chain. */
  u32QuarterPeriod = s_tExampleFrame.u32PeriodTicks >> 2U;
  s_tExampleFrame.aWindow[0U].u32CmpA = 0U;
  s_tExampleFrame.aWindow[0U].u32CmpB =
      (TRUE == s_bExampleHighDuty) ? (s_tExampleFrame.u32PeriodTicks - u32QuarterPeriod) : u32QuarterPeriod;

  eResult = Bsp_PwmWave_RequestUpdate(&s_tExampleFrame, &u32Sequence);
  if (CDD_PWM_WAVE_OK == eResult) {
    s_bExampleHighDuty = (TRUE == s_bExampleHighDuty) ? FALSE : TRUE;
  } else if (CDD_PWM_WAVE_E_BUSY != eResult) {
    s_bExampleFrameValid = FALSE;
  }
}
