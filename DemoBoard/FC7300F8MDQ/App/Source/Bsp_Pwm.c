#include "Bsp_Pwm.h"
#include "Gpio_Reg.h"
#include "Port_Reg.h"
#include "SchM_Pwm.h"

/************ Macro *******************/
#define PWM_MAX_DUTY 0x8000
#define BSP_PWM_GPIOC_OUTPUT_MASK (0x02800080U)
#define BSP_PWM_GPIOD_OUTPUT_MASK (0x00200010U)
#define BSP_PWM_GPIOE_OUTPUT_MASK (0x00002C00U)
#define BSP_PWM_GPIOH_OUTPUT_MASK (0x00400000U)

/************ Local variable *******************/
uint16 s_u16Rgb1DutyVal = 0U;
uint16 s_u16Rgb1Step = PWM_MAX_DUTY / 50;
uint8 s_u8BreathDirection = 0U;

uint16 s_u16Rgb2DutyVal = 0U;
uint16 s_u16Rgb2Step = PWM_MAX_DUTY / 200;
uint8 s_u8Rgb2OrderIndex = 0U;
Pwm_ChannelType s_u32Rgb2Order[3] = {PwmConf_PwmChannel_RGB2_BLUE, PwmConf_PwmChannel_RGB2_GREEN, PwmConf_PwmChannel_RGB2_RED};

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

static void Bsp_PwmWave_RecordJob(Bsp_PwmWave_JobType eJob,
                                  Bsp_PwmWave_JobStateType eJobState,
                                  Cdd_PwmWave_ResultType eResult,
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

static void Bsp_PwmWave_RecordJobIfCurrent(uint32 u32ExpectedEpoch,
                                           Bsp_PwmWave_JobType eJob,
                                           Bsp_PwmWave_JobStateType eJobState,
                                           Cdd_PwmWave_ResultType eResult,
                                           Cdd_PwmWave_SequenceType u32Sequence)
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

static void Bsp_PwmWave_FinishPendingJob(Bsp_PwmWave_JobType eJob,
                                         Cdd_PwmWave_SequenceType u32Sequence,
                                         Cdd_PwmWave_ResultType eResult)
{
  /* EmergencyShutdown may have preempted the normal Core0 control task. */
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((BSP_PWM_WAVE_JOB_PENDING == s_ePwmWaveJobState) &&
      (eJob == s_ePwmWaveJob) &&
      (u32Sequence == s_u32PwmWaveRequestedSequence)) {
    s_ePwmWaveLastResult = eResult;
    s_ePwmWaveJobState = (CDD_PWM_WAVE_OK == eResult)
                             ? BSP_PWM_WAVE_JOB_COMPLETED
                             : BSP_PWM_WAVE_JOB_FAILED;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}

static Cdd_PwmWave_ResultType Bsp_PwmWave_GetFaultResult(
    const Cdd_PwmWave_StatusType *pStatus)
{
  if (0U != (pStatus->u32FaultFlags & CDD_PWM_WAVE_FAULT_HW_CONFIG)) {
    return CDD_PWM_WAVE_E_HW_CONFIG;
  }
  if (0U != (pStatus->u32FaultFlags & CDD_PWM_WAVE_FAULT_HW_TIMEOUT)) {
    return CDD_PWM_WAVE_E_HW_TIMEOUT;
  }
  return CDD_PWM_WAVE_E_FAULT_ACTIVE;
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
  return ((((PORTC->PCR[7U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTC->PCR[23U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTC->PCR[25U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTD->PCR[4U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTD->PCR[21U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[10U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[11U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTE->PCR[13U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((PORTH->PCR[22U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(1U)) &&
           ((GPIOC->PDDR & BSP_PWM_GPIOC_OUTPUT_MASK) == BSP_PWM_GPIOC_OUTPUT_MASK) &&
           ((GPIOD->PDDR & BSP_PWM_GPIOD_OUTPUT_MASK) == BSP_PWM_GPIOD_OUTPUT_MASK) &&
           ((GPIOE->PDDR & BSP_PWM_GPIOE_OUTPUT_MASK) == BSP_PWM_GPIOE_OUTPUT_MASK) &&
           ((GPIOH->PDDR & BSP_PWM_GPIOH_OUTPUT_MASK) == BSP_PWM_GPIOH_OUTPUT_MASK) &&
           ((GPIOC->PIDR & BSP_PWM_GPIOC_OUTPUT_MASK) == 0U) &&
           ((GPIOD->PIDR & BSP_PWM_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PIDR & BSP_PWM_GPIOE_OUTPUT_MASK) == 0U) &&
           ((GPIOH->PIDR & BSP_PWM_GPIOH_OUTPUT_MASK) == 0U) &&
           ((GPIOC->PDIR & BSP_PWM_GPIOC_OUTPUT_MASK) == 0U) &&
           ((GPIOD->PDIR & BSP_PWM_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PDIR & BSP_PWM_GPIOE_OUTPUT_MASK) == 0U) &&
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
    Bsp_PwmWave_RecordJob(BSP_PWM_WAVE_JOB_NONE,
                          BSP_PWM_WAVE_JOB_IDLE,
                          CDD_PWM_WAVE_E_UNINIT,
                          0U);
    ePwmWaveResult = Cdd_PwmWave_Init();
    if (CDD_PWM_WAVE_OK == ePwmWaveResult) {
      Bsp_Pwm_SetOutputPinModes();
      ePwmWaveResult = Cdd_PwmWave_ConfirmArmedLow();
      if (CDD_PWM_WAVE_OK != ePwmWaveResult) {
        (void)Cdd_PwmWave_EmergencyShutdown();
        if (TRUE == Bsp_Pwm_ForceOutputPinsGpioLow()) {
          DEBUG_INFO("Bsp_Pwm: physical ARMED_LOW check failed; GPIO-low fallback verified.\r\n");
        } else {
          DEBUG_INFO("Bsp_Pwm: GPIO-low fallback verification failed; outputs remain fault-latched.\r\n");
        }
      }
    } else {
      /* Fail closed: Port_Init keeps all nine output pins as GPIO low. */
      DEBUG_INFO("Bsp_Pwm: CDD ARMED_LOW failed, output pins remain GPIO low.\r\n");
    }
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    s_ePwmWaveLastResult = ePwmWaveResult;
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }
}

Cdd_PwmWave_ResultType Bsp_PwmWave_ValidateFrame(
    const Cdd_PwmWave_FrameType *pFrame)
{
  return Cdd_PwmWave_ValidateFrame(pFrame);
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestStart(
    const Cdd_PwmWave_FrameType *pFrame,
    Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_StatusType tStatus;
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;
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
    } else if ((TRUE == tStatus.bPendingFrameValid) ||
               (TRUE == tStatus.bStartPending)) {
      eResult = CDD_PWM_WAVE_E_BUSY;
    } else if (CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) {
      eResult = CDD_PWM_WAVE_E_STATE;
    } else {
      eResult = Cdd_PwmWave_SubmitFrame(pFrame, &u32Sequence);
    }
  }

  if (CDD_PWM_WAVE_OK == eResult) {
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                   BSP_PWM_WAVE_JOB_START_WITH_FRAME,
                                   BSP_PWM_WAVE_JOB_PENDING,
                                   CDD_PWM_WAVE_OK,
                                   u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                   BSP_PWM_WAVE_JOB_START_WITH_FRAME,
                                   BSP_PWM_WAVE_JOB_FAILED,
                                   eResult,
                                   0U);
  }

  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestUpdate(
    const Cdd_PwmWave_FrameType *pFrame,
    Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;
  uint32 u32CommandEpoch;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  u32CommandEpoch = Bsp_PwmWave_GetCommandEpoch();
  if (TRUE == Bsp_PwmWave_IsJobPending()) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  eResult = Cdd_PwmWave_SubmitFrame(pFrame, &u32Sequence);
  if (CDD_PWM_WAVE_OK == eResult) {
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                   BSP_PWM_WAVE_JOB_FRAME_UPDATE,
                                   BSP_PWM_WAVE_JOB_PENDING,
                                   CDD_PWM_WAVE_OK,
                                   u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                   BSP_PWM_WAVE_JOB_FRAME_UPDATE,
                                   BSP_PWM_WAVE_JOB_FAILED,
                                   eResult,
                                   0U);
  }

  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestPeriodChange(
    uint32 u32PeriodTicks,
    Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;
  uint32 u32CommandEpoch;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  u32CommandEpoch = Bsp_PwmWave_GetCommandEpoch();
  if (TRUE == Bsp_PwmWave_IsJobPending()) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  eResult = Cdd_PwmWave_SubmitPeriodChange(u32PeriodTicks, &u32Sequence);
  if (CDD_PWM_WAVE_OK == eResult) {
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                   BSP_PWM_WAVE_JOB_PERIOD_CHANGE,
                                   BSP_PWM_WAVE_JOB_PENDING,
                                   CDD_PWM_WAVE_OK,
                                   u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                   BSP_PWM_WAVE_JOB_PERIOD_CHANGE,
                                   BSP_PWM_WAVE_JOB_FAILED,
                                   eResult,
                                   0U);
  }

  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_Start(void)
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

  eResult = Cdd_PwmWave_Start();
  Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                 BSP_PWM_WAVE_JOB_START_ACTIVE_FRAME,
                                 (CDD_PWM_WAVE_OK == eResult)
                                     ? BSP_PWM_WAVE_JOB_COMPLETED
                                     : BSP_PWM_WAVE_JOB_FAILED,
                                 eResult,
                                 0U);
  return eResult;
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
  Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                 BSP_PWM_WAVE_JOB_STOP,
                                 (CDD_PWM_WAVE_OK == eResult)
                                     ? BSP_PWM_WAVE_JOB_COMPLETED
                                     : BSP_PWM_WAVE_JOB_FAILED,
                                 eResult,
                                 0U);
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void)
{
  Cdd_PwmWave_ResultType eResult = Cdd_PwmWave_EmergencyShutdown();

  if (CDD_PWM_WAVE_E_WRONG_CORE != eResult) {
    Bsp_PwmWave_RecordJob(BSP_PWM_WAVE_JOB_EMERGENCY_SHUTDOWN,
                          (CDD_PWM_WAVE_OK == eResult)
                              ? BSP_PWM_WAVE_JOB_COMPLETED
                              : BSP_PWM_WAVE_JOB_FAILED,
                          eResult,
                          0U);
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
  Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch,
                                 BSP_PWM_WAVE_JOB_CLEAR_FAULT,
                                 (CDD_PWM_WAVE_OK == eResult)
                                     ? BSP_PWM_WAVE_JOB_COMPLETED
                                     : BSP_PWM_WAVE_JOB_FAILED,
                                 eResult,
                                 0U);
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_GetControlStatus(
    Bsp_PwmWave_ControlStatusType *pStatus)
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

Cdd_PwmWave_ResultType Bsp_PwmWave_GetActiveFrame(
    Cdd_PwmWave_FrameType *pFrame)
{
  return Cdd_PwmWave_GetActiveFrame(pFrame);
}

Cdd_PwmWave_ResultType Bsp_PwmWave_GetPendingFrame(
    Cdd_PwmWave_FrameType *pFrame)
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
  if ((FALSE == s_bPwmWaveMainInProgress) &&
      (BSP_PWM_WAVE_JOB_PENDING == s_ePwmWaveJobState)) {
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
    Bsp_PwmWave_FinishPendingJob(eJob,
                                 u32Sequence,
                                 Bsp_PwmWave_GetFaultResult(&tStatus));
  } else if (TRUE == tStatus.bPendingFrameValid) {
    if (u32Sequence != tStatus.u32PendingSequence) {
      (void)Cdd_PwmWave_EmergencyShutdown();
      Bsp_PwmWave_FinishPendingJob(eJob,
                                   u32Sequence,
                                   CDD_PWM_WAVE_E_HW_CONFIG);
    }
  } else if ((FALSE == tStatus.bActiveFrameValid) ||
             (u32Sequence != tStatus.u32ActiveSequence)) {
    /* The accepted frame disappeared or was replaced outside this owner. */
    (void)Cdd_PwmWave_EmergencyShutdown();
    Bsp_PwmWave_FinishPendingJob(eJob,
                                 u32Sequence,
                                 CDD_PWM_WAVE_E_HW_CONFIG);
  } else if (BSP_PWM_WAVE_JOB_START_WITH_FRAME == eJob) {
    if ((CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) ||
        (TRUE == tStatus.bStartPending)) {
      (void)Cdd_PwmWave_EmergencyShutdown();
      Bsp_PwmWave_FinishPendingJob(eJob,
                                   u32Sequence,
                                   CDD_PWM_WAVE_E_HW_CONFIG);
    } else {
      eResult = Cdd_PwmWave_Start();
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, eResult);
    }
  } else if ((BSP_PWM_WAVE_JOB_FRAME_UPDATE == eJob) ||
             (BSP_PWM_WAVE_JOB_PERIOD_CHANGE == eJob)) {
    if ((CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) &&
        (CDD_PWM_WAVE_STATE_RUN != tStatus.eState)) {
      (void)Cdd_PwmWave_EmergencyShutdown();
      Bsp_PwmWave_FinishPendingJob(eJob,
                                   u32Sequence,
                                   CDD_PWM_WAVE_E_HW_CONFIG);
    } else {
      Bsp_PwmWave_FinishPendingJob(eJob,
                                   u32Sequence,
                                   CDD_PWM_WAVE_OK);
    }
  } else {
    (void)Cdd_PwmWave_EmergencyShutdown();
    Bsp_PwmWave_FinishPendingJob(eJob,
                                 u32Sequence,
                                 CDD_PWM_WAVE_E_HW_CONFIG);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  s_bPwmWaveMainInProgress = FALSE;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}

void Bsp_Pwm_20ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0 == GET_CPU_ID()) {
#endif
    Cdd_PwmWave_MainFunction();
    Bsp_PwmWave_MainFunction();
    Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_BLUE, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_GREEN, s_u16Rgb1DutyVal);
    Pwm_SetDutyCycle(PwmConf_PwmChannel_RGB1_RED, s_u16Rgb1DutyVal);
    if (0U == s_u8BreathDirection) {
      s_u16Rgb1DutyVal += s_u16Rgb1Step;
      if (s_u16Rgb1DutyVal > PWM_MAX_DUTY) {
        s_u16Rgb1DutyVal = PWM_MAX_DUTY;
        s_u8BreathDirection = 1U;
      }
    } else {
      if (s_u16Rgb1DutyVal > s_u16Rgb1Step) {
        s_u16Rgb1DutyVal -= s_u16Rgb1Step;
      } else {
        s_u16Rgb1DutyVal = 0U;
        s_u8BreathDirection = 0U;
      }
    }
#if (PWM_MULTICORE_ENABLED == STD_ON)
  }
#endif
}

void Bsp_Pwm_5ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (2 == GET_CPU_ID()) {
#endif
    if (s_u16Rgb2DutyVal > PWM_MAX_DUTY) {
      s_u16Rgb2DutyVal = 0U;
      Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], 0);
      s_u8Rgb2OrderIndex++;
      if (s_u8Rgb2OrderIndex > 2) {
        s_u8Rgb2OrderIndex = 0U;
      }
    } else {
      s_u16Rgb2DutyVal += s_u16Rgb2Step;
      if (s_u16Rgb2DutyVal > PWM_MAX_DUTY) {
        Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], PWM_MAX_DUTY);
      } else {
        Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], s_u16Rgb2DutyVal);
      }
    }
#if (PWM_MULTICORE_ENABLED == STD_ON)
  }
#endif
}
