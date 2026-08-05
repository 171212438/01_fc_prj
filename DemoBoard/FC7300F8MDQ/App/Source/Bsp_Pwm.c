#include "Bsp_Pwm.h"
#include "Bsp_InterruptManager.h"
#include "Gpio_Reg.h"
#include "Port_Reg.h"
#include "SchM_Pwm.h"


/************ Macro *******************/
#define PWM_MAX_DUTY              0x8000
#define BSP_PWM_WAVE_IRQ_PRIORITY (0U)
#define BSP_PWM_GPIOC_OUTPUT_MASK (0x02800080U)
#define BSP_PWM_GPIOD_OUTPUT_MASK (0x00200010U)
#define BSP_PWM_GPIOE_OUTPUT_MASK (0x00002C00U)
#define BSP_PWM_GPIOH_OUTPUT_MASK (0x00400000U)

_Static_assert((BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS >= CDD_PWM_WAVE_MIN_PERIOD_TICKS) &&
                   (BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS <= CDD_PWM_WAVE_MAX_PERIOD_TICKS),
               "Fixed PWM test period is outside the CDD range");
_Static_assert((BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS < BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS) &&
                   (BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS < BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS),
               "Fixed PWM test compare window is invalid");
_Static_assert((BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS - BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS) >= CDD_PWM_WAVE_DEAD_TIME_TICKS,
               "Fixed PWM test window is shorter than the dead time");
_Static_assert(((BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS - BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS) * 2U) == BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS,
               "Fixed PWM test command duty is not 50 percent");
_Static_assert(BSP_PWM_WAVE_CARRIER_TEST_130KHZ_PERIOD_TICKS == CDD_PWM_WAVE_MAX_PERIOD_TICKS,
               "130 kHz test point must match the supported maximum period");
_Static_assert((BSP_PWM_WAVE_CARRIER_TEST_200KHZ_PERIOD_TICKS >= CDD_PWM_WAVE_MIN_PERIOD_TICKS) &&
                   (BSP_PWM_WAVE_CARRIER_TEST_200KHZ_PERIOD_TICKS <= CDD_PWM_WAVE_MAX_PERIOD_TICKS),
               "200 kHz test point is outside the CDD period range");
_Static_assert((BSP_PWM_WAVE_CARRIER_TEST_250KHZ_PERIOD_TICKS >= CDD_PWM_WAVE_MIN_PERIOD_TICKS) &&
                   (BSP_PWM_WAVE_CARRIER_TEST_250KHZ_PERIOD_TICKS <= CDD_PWM_WAVE_MAX_PERIOD_TICKS),
               "250 kHz test point is outside the CDD period range");
_Static_assert(BSP_PWM_WAVE_CARRIER_TEST_300KHZ_PERIOD_TICKS == CDD_PWM_WAVE_MIN_PERIOD_TICKS,
               "300 kHz test point must match the supported minimum period");
_Static_assert(BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS < BSP_PWM_WAVE_CARRIER_TEST_300KHZ_PERIOD_TICKS,
               "Carrier test compare window reaches the minimum test period");
_Static_assert(BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT == 4U, "Carrier test table must contain four frequency points");
_Static_assert(BSP_PWM_WAVE_CARRIER_TEST_HOLD_10MS_CYCLES > 0U, "Carrier test hold time must be non-zero");

/************ Local variable *******************/
uint16 s_u16Rgb1DutyVal = 0U;
uint16 s_u16Rgb1Step = PWM_MAX_DUTY / 50;
uint8 s_u8BreathDirection = 0U;

uint16 s_u16Rgb2DutyVal = 0U;
uint16 s_u16Rgb2Step = PWM_MAX_DUTY / 200;
uint8 s_u8Rgb2OrderIndex = 0U;
Pwm_ChannelType s_u32Rgb2Order[3] = {PwmConf_PwmChannel_RGB2_BLUE, PwmConf_PwmChannel_RGB2_GREEN, PwmConf_PwmChannel_RGB2_RED};

typedef enum {
  BSP_PWM_WAVE_CARRIER_TEST_IDLE = 0,
  BSP_PWM_WAVE_CARRIER_TEST_WAIT_START,
  BSP_PWM_WAVE_CARRIER_TEST_WAIT_PERIOD,
  BSP_PWM_WAVE_CARRIER_TEST_HOLD
} Bsp_PwmWave_CarrierTestStateType;

typedef enum {
  BSP_PWM_WAVE_TEST_OWNER_NONE = 0,
  BSP_PWM_WAVE_TEST_OWNER_FIXED,
  BSP_PWM_WAVE_TEST_OWNER_CARRIER
} Bsp_PwmWave_TestOwnerType;

typedef struct {
  uint32 u32PeriodTicks;
  uint16 u16TargetFrequencyKHz;
} Bsp_PwmWave_CarrierTestPointType;

volatile boolean g_bPwmWaveFixedTestStopRequest = FALSE;
volatile boolean g_bPwmWaveCarrierTestStopRequest = FALSE;

static volatile Bsp_PwmWave_JobType s_ePwmWaveJob = BSP_PWM_WAVE_JOB_NONE;
static volatile Bsp_PwmWave_JobStateType s_ePwmWaveJobState = BSP_PWM_WAVE_JOB_IDLE;
static volatile Cdd_PwmWave_ResultType s_ePwmWaveLastResult = CDD_PWM_WAVE_E_UNINIT;
static volatile Cdd_PwmWave_SequenceType s_u32PwmWaveRequestedSequence = 0U;
static volatile uint32 s_u32PwmWaveCommandEpoch = 0U;
static volatile boolean s_bPwmWaveMainInProgress = FALSE;
static boolean s_bPwmWaveFixedTestAwaitingRun = FALSE;
static Cdd_PwmWave_SequenceType s_u32PwmWaveFixedTestSequence = 0U;
static Bsp_PwmWave_TestOwnerType s_ePwmWaveTestOwner = BSP_PWM_WAVE_TEST_OWNER_NONE;
static Bsp_PwmWave_CarrierTestStateType s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_IDLE;
static Cdd_PwmWave_SequenceType s_u32PwmWaveCarrierTestSequence = 0U;
static uint16 s_u16PwmWaveCarrierTestHold10msCycles = 0U;
static uint8 s_u8PwmWaveCarrierTestIndex = 0U;
static const Cdd_PwmWave_FrameType s_tPwmWaveFixedTestFrame = {
  BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS,
  {
    {BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS, BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS},
    {BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS, BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS},
    {BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS, BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS},
    {BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS, BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS},
  },
  CDD_PWM_WAVE_PWM5_TEST_TOGGLE
};
static const Bsp_PwmWave_CarrierTestPointType s_atPwmWaveCarrierTestPoints[BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT] = {
    {BSP_PWM_WAVE_CARRIER_TEST_130KHZ_PERIOD_TICKS, 130U},
    {BSP_PWM_WAVE_CARRIER_TEST_200KHZ_PERIOD_TICKS, 200U},
    {BSP_PWM_WAVE_CARRIER_TEST_250KHZ_PERIOD_TICKS, 250U},
    {BSP_PWM_WAVE_CARRIER_TEST_300KHZ_PERIOD_TICKS, 300U},
};

_Static_assert((sizeof(s_atPwmWaveCarrierTestPoints) / sizeof(s_atPwmWaveCarrierTestPoints[0])) == BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT,
               "Carrier test point count mismatch");

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

static boolean Bsp_PwmWave_IsFixedTestFrame(const Cdd_PwmWave_FrameType *pFrame)
{
  uint8 u8Index;

  if ((BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS != pFrame->u32PeriodTicks) || (CDD_PWM_WAVE_PWM5_TEST_TOGGLE != pFrame->ePwm5State)) {
    return FALSE;
  }
  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS != pFrame->aWindow[u8Index].u32CmpA) ||
        (BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS != pFrame->aWindow[u8Index].u32CmpB)) {
      return FALSE;
    }
  }
  return TRUE;
}

static boolean Bsp_PwmWave_IsCarrierTestFrame(const Cdd_PwmWave_FrameType *pFrame, uint32 u32ExpectedPeriodTicks)
{
  return ((u32ExpectedPeriodTicks == pFrame->u32PeriodTicks) && (CDD_PWM_WAVE_PWM5_TEST_TOGGLE == pFrame->ePwm5State) &&
          (CDD_PWM_WAVE_OK == Cdd_PwmWave_ValidateFrame(pFrame)))
             ? TRUE
             : FALSE;
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

static boolean Bsp_PwmWave_TestForceLow(void)
{
  if (CDD_PWM_WAVE_OK == Bsp_PwmWave_EmergencyShutdown()) {
    return TRUE;
  }

  return Bsp_Pwm_ForceOutputPinsGpioLow();
}

static void Bsp_PwmWave_ResetTestState(void)
{
  g_bPwmWaveFixedTestStopRequest = FALSE;
  g_bPwmWaveCarrierTestStopRequest = FALSE;
  s_bPwmWaveFixedTestAwaitingRun = FALSE;
  s_u32PwmWaveFixedTestSequence = 0U;
  s_ePwmWaveTestOwner = BSP_PWM_WAVE_TEST_OWNER_NONE;
  s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_IDLE;
  s_u32PwmWaveCarrierTestSequence = 0U;
  s_u16PwmWaveCarrierTestHold10msCycles = 0U;
  s_u8PwmWaveCarrierTestIndex = 0U;
}

static void Bsp_PwmWave_FixedTestAbort(const char *pReason)
{
  boolean bLowConfirmed;

  Bsp_PwmWave_ResetTestState();
  bLowConfirmed = Bsp_PwmWave_TestForceLow();
  if (TRUE == bLowConfirmed) {
    DEBUG_INFO("PWM fixed test %s; all outputs confirmed low.\r\n", pReason);
  } else {
    DEBUG_INFO("CRITICAL: PWM fixed test %s; output-low state unconfirmed.\r\n", pReason);
  }
}

static void Bsp_PwmWave_CarrierTestAbort(const char *pReason)
{
  boolean bLowConfirmed;

  Bsp_PwmWave_ResetTestState();
  bLowConfirmed = Bsp_PwmWave_TestForceLow();
  if (TRUE == bLowConfirmed) {
    DEBUG_INFO("PWM carrier frequency test %s; all outputs confirmed low.\r\n", pReason);
  } else {
    DEBUG_INFO("CRITICAL: PWM carrier frequency test %s; output-low state unconfirmed.\r\n", pReason);
  }
}

static Cdd_PwmWave_ResultType Bsp_PwmWave_CarrierTestRequestCurrentPoint(void)
{
  Cdd_PwmWave_ResultType eResult;
  Cdd_PwmWave_SequenceType u32Sequence;

  if (s_u8PwmWaveCarrierTestIndex >= BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT) {
    return CDD_PWM_WAVE_E_HW_CONFIG;
  }

  eResult = Bsp_PwmWave_RequestPeriodChange(s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u32PeriodTicks, &u32Sequence);
  if (CDD_PWM_WAVE_OK == eResult) {
    s_u32PwmWaveCarrierTestSequence = u32Sequence;
    s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_WAIT_PERIOD;
  }
  return eResult;
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
    Bsp_PwmWave_ResetTestState();
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

Cdd_PwmWave_ResultType Bsp_PwmWave_FixedTestStart(Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (BSP_PWM_WAVE_TEST_OWNER_NONE != s_ePwmWaveTestOwner) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  eResult = Bsp_PwmWave_RequestStart(&s_tPwmWaveFixedTestFrame, &u32Sequence);
  if (CDD_PWM_WAVE_OK == eResult) {
    g_bPwmWaveFixedTestStopRequest = FALSE;
    s_ePwmWaveTestOwner = BSP_PWM_WAVE_TEST_OWNER_FIXED;
    s_u32PwmWaveFixedTestSequence = u32Sequence;
    s_bPwmWaveFixedTestAwaitingRun = TRUE;
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
  }
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_CarrierFrequencyTestStart(Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_SequenceType u32Sequence;
  Cdd_PwmWave_ResultType eResult;

  if (FALSE == Bsp_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if ((BSP_PWM_WAVE_TEST_OWNER_NONE != s_ePwmWaveTestOwner) || (BSP_PWM_WAVE_CARRIER_TEST_IDLE != s_ePwmWaveCarrierTestState)) {
    return CDD_PWM_WAVE_E_BUSY;
  }

  /* Start from the board-proven 200 kHz frame. After RUN confirmation the
   * monitor submits 130 kHz as the first dynamic period change. */
  eResult = Bsp_PwmWave_RequestStart(&s_tPwmWaveFixedTestFrame, &u32Sequence);
  if (CDD_PWM_WAVE_OK == eResult) {
    g_bPwmWaveFixedTestStopRequest = FALSE;
    g_bPwmWaveCarrierTestStopRequest = FALSE;
    s_u8PwmWaveCarrierTestIndex = 0U;
    s_u16PwmWaveCarrierTestHold10msCycles = 0U;
    s_u32PwmWaveCarrierTestSequence = u32Sequence;
    s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_WAIT_START;
    s_ePwmWaveTestOwner = BSP_PWM_WAVE_TEST_OWNER_CARRIER;
    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
  }
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_FixedTestStop(void)
{
  Cdd_PwmWave_StatusType tStatus;
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
  if ((CDD_PWM_WAVE_OK == eResult) && (CDD_PWM_WAVE_STATE_ARMED_LOW == tStatus.eState) && (FALSE == tStatus.bFaultLatched) &&
      (FALSE == tStatus.bStartPending) && (FALSE == tStatus.bPendingFrameValid)) {
    /* Make the board-test command idempotent, but only after a fresh physical-low check. */
    eResult = Cdd_PwmWave_ConfirmArmedLow();
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_STOP,
                                   (CDD_PWM_WAVE_OK == eResult) ? BSP_PWM_WAVE_JOB_COMPLETED : BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
    if (CDD_PWM_WAVE_OK == eResult) {
      Bsp_PwmWave_ResetTestState();
    }
    return eResult;
  }

  eResult = Bsp_PwmWave_Stop();
  if (CDD_PWM_WAVE_OK == eResult) {
    Bsp_PwmWave_ResetTestState();
  }
  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestStart(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
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
    } else if ((TRUE == tStatus.bPendingFrameValid) || (TRUE == tStatus.bStartPending)) {
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
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_START_WITH_FRAME, BSP_PWM_WAVE_JOB_PENDING, CDD_PWM_WAVE_OK,
                                   u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_START_WITH_FRAME, BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
  }

  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestUpdate(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
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
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_FRAME_UPDATE, BSP_PWM_WAVE_JOB_PENDING, CDD_PWM_WAVE_OK, u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_FRAME_UPDATE, BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
  }

  return eResult;
}

Cdd_PwmWave_ResultType Bsp_PwmWave_RequestPeriodChange(uint32 u32PeriodTicks, Cdd_PwmWave_SequenceType *pSequence)
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
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_PERIOD_CHANGE, BSP_PWM_WAVE_JOB_PENDING, CDD_PWM_WAVE_OK, u32Sequence);
  } else {
    Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_PERIOD_CHANGE, BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
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
  Bsp_PwmWave_RecordJobIfCurrent(u32CommandEpoch, BSP_PWM_WAVE_JOB_START_ACTIVE_FRAME,
                                 (CDD_PWM_WAVE_OK == eResult) ? BSP_PWM_WAVE_JOB_COMPLETED : BSP_PWM_WAVE_JOB_FAILED, eResult, 0U);
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

static void Bsp_PwmWave_FixedTestMonitor(void)
{
  Bsp_PwmWave_ControlStatusType tStatus;
  Cdd_PwmWave_FrameType tActiveFrame;
  Cdd_PwmWave_ResultType eResult;
  Cdd_PwmWave_ResultType eFrameResult;

  if (BSP_PWM_WAVE_TEST_OWNER_FIXED != s_ePwmWaveTestOwner) {
    return;
  }

  if (TRUE == s_bPwmWaveFixedTestAwaitingRun) {
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_START_WITH_FRAME != tStatus.eJob) ||
        (s_u32PwmWaveFixedTestSequence != tStatus.u32RequestedSequence)) {
      Bsp_PwmWave_FixedTestAbort("aborted before RUN");
      return;
    } else if (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) {
      eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);
      eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
      if ((CDD_PWM_WAVE_OK == eResult) && (BSP_PWM_WAVE_JOB_START_WITH_FRAME == tStatus.eJob) &&
          (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) && (CDD_PWM_WAVE_OK == tStatus.eLastResult) &&
          (s_u32PwmWaveFixedTestSequence == tStatus.u32RequestedSequence) && (CDD_PWM_WAVE_STATE_RUN == tStatus.tDriverStatus.eState) &&
          (s_u32PwmWaveFixedTestSequence == tStatus.tDriverStatus.u32ActiveSequence) && (CDD_PWM_WAVE_OK == eFrameResult) &&
          (TRUE == Bsp_PwmWave_IsFixedTestFrame(&tActiveFrame))) {
        DEBUG_INFO("PWM fixed test RUN confirmed, sequence %d; initial carrier 200 kHz/PWM5 100 kHz, later PWM5=fc/2.\r\n",
                   (int)s_u32PwmWaveFixedTestSequence);
      } else {
        Bsp_PwmWave_FixedTestAbort("RUN confirmation failed");
        return;
      }
      s_bPwmWaveFixedTestAwaitingRun = FALSE;
    } else if (BSP_PWM_WAVE_JOB_FAILED == tStatus.eJobState) {
      DEBUG_INFO("PWM fixed test failed after acceptance, result %d.\r\n", (int)tStatus.eLastResult);
      Bsp_PwmWave_FixedTestAbort("failed after acceptance");
      return;
    } else if (BSP_PWM_WAVE_JOB_PENDING != tStatus.eJobState) {
      Bsp_PwmWave_FixedTestAbort("entered an invalid job state");
      return;
    }
  }

  if (TRUE == g_bPwmWaveFixedTestStopRequest) {
    eResult = Bsp_PwmWave_FixedTestStop();
    if (CDD_PWM_WAVE_E_BUSY != eResult) {
      g_bPwmWaveFixedTestStopRequest = FALSE;
      if (CDD_PWM_WAVE_OK == eResult) {
        DEBUG_INFO("PWM fixed test Stop complete; all outputs confirmed low.\r\n");
      } else {
        DEBUG_INFO("PWM fixed test stop rejected, result %d.\r\n", (int)eResult);
        Bsp_PwmWave_FixedTestAbort("normal Stop failed");
      }
    }
  }
}

static void Bsp_PwmWave_CarrierFrequencyTestMonitor(void)
{
  Bsp_PwmWave_ControlStatusType tStatus;
  Cdd_PwmWave_FrameType tActiveFrame;
  Cdd_PwmWave_ResultType eResult;
  Cdd_PwmWave_ResultType eFrameResult;
  const Bsp_PwmWave_CarrierTestPointType *pTestPoint;

  if (BSP_PWM_WAVE_TEST_OWNER_CARRIER != s_ePwmWaveTestOwner) {
    return;
  }
  if (BSP_PWM_WAVE_CARRIER_TEST_IDLE == s_ePwmWaveCarrierTestState) {
    Bsp_PwmWave_CarrierTestAbort("lost test state ownership");
    return;
  }

  if (TRUE == g_bPwmWaveCarrierTestStopRequest) {
    eResult = Bsp_PwmWave_FixedTestStop();
    if (CDD_PWM_WAVE_E_BUSY == eResult) {
      return;
    }

    g_bPwmWaveCarrierTestStopRequest = FALSE;
    if (CDD_PWM_WAVE_OK == eResult) {
      DEBUG_INFO("PWM carrier frequency test Stop complete; all outputs confirmed low.\r\n");
    } else {
      DEBUG_INFO("PWM carrier frequency test Stop rejected, result %d.\r\n", (int)eResult);
      Bsp_PwmWave_CarrierTestAbort("normal Stop failed");
    }
    return;
  }

  if (BSP_PWM_WAVE_CARRIER_TEST_WAIT_START == s_ePwmWaveCarrierTestState) {
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_START_WITH_FRAME != tStatus.eJob) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence)) {
      Bsp_PwmWave_CarrierTestAbort("aborted before initial RUN");
    } else if (BSP_PWM_WAVE_JOB_PENDING == tStatus.eJobState) {
      return;
    } else if (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) {
      eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);
      eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
      if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_START_WITH_FRAME != tStatus.eJob) ||
          (BSP_PWM_WAVE_JOB_COMPLETED != tStatus.eJobState) || (CDD_PWM_WAVE_OK != tStatus.eLastResult) ||
          (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence) || (CDD_PWM_WAVE_STATE_RUN != tStatus.tDriverStatus.eState) ||
          (s_u32PwmWaveCarrierTestSequence != tStatus.tDriverStatus.u32ActiveSequence) || (CDD_PWM_WAVE_OK != eFrameResult) ||
          (FALSE == Bsp_PwmWave_IsFixedTestFrame(&tActiveFrame))) {
        Bsp_PwmWave_CarrierTestAbort("initial RUN confirmation failed");
        return;
      }

      eResult = Bsp_PwmWave_CarrierTestRequestCurrentPoint();
      if (CDD_PWM_WAVE_OK == eResult) {
        DEBUG_INFO("PWM carrier frequency test requested target %d kHz, period %d ticks, sequence %d.\r\n",
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u16TargetFrequencyKHz,
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u32PeriodTicks, (int)s_u32PwmWaveCarrierTestSequence);
      } else {
        DEBUG_INFO("PWM carrier frequency test first period request rejected, result %d.\r\n", (int)eResult);
        Bsp_PwmWave_CarrierTestAbort("first period request failed");
      }
    } else {
      DEBUG_INFO("PWM carrier frequency test initial Start failed, result %d.\r\n", (int)tStatus.eLastResult);
      Bsp_PwmWave_CarrierTestAbort("initial Start failed");
    }
    return;
  }

  if (s_u8PwmWaveCarrierTestIndex >= BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT) {
    Bsp_PwmWave_CarrierTestAbort("test index is invalid");
    return;
  }
  pTestPoint = &s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex];

  if (BSP_PWM_WAVE_CARRIER_TEST_WAIT_PERIOD == s_ePwmWaveCarrierTestState) {
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_PERIOD_CHANGE != tStatus.eJob) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence)) {
      Bsp_PwmWave_CarrierTestAbort("period request was replaced");
    } else if (BSP_PWM_WAVE_JOB_PENDING == tStatus.eJobState) {
      return;
    } else if (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) {
      eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);
      eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
      if ((CDD_PWM_WAVE_OK == eResult) && (BSP_PWM_WAVE_JOB_PERIOD_CHANGE == tStatus.eJob) &&
          (BSP_PWM_WAVE_JOB_COMPLETED == tStatus.eJobState) && (CDD_PWM_WAVE_OK == tStatus.eLastResult) &&
          (s_u32PwmWaveCarrierTestSequence == tStatus.u32RequestedSequence) && (CDD_PWM_WAVE_STATE_RUN == tStatus.tDriverStatus.eState) &&
          (s_u32PwmWaveCarrierTestSequence == tStatus.tDriverStatus.u32ActiveSequence) && (CDD_PWM_WAVE_OK == eFrameResult) &&
          (TRUE == Bsp_PwmWave_IsCarrierTestFrame(&tActiveFrame, pTestPoint->u32PeriodTicks))) {
        s_u16PwmWaveCarrierTestHold10msCycles = 0U;
        s_ePwmWaveCarrierTestState = BSP_PWM_WAVE_CARRIER_TEST_HOLD;
        DEBUG_INFO(
            "PWM carrier frequency test confirmed target %d kHz, period %d ticks; about 10 ms hold starts, PWM5 LOW/HIGH follows one "
            "carrier period.\r\n",
            (int)pTestPoint->u16TargetFrequencyKHz, (int)pTestPoint->u32PeriodTicks);
      } else {
        Bsp_PwmWave_CarrierTestAbort("active period confirmation failed");
      }
    } else {
      DEBUG_INFO("PWM carrier frequency test period update failed, result %d.\r\n", (int)tStatus.eLastResult);
      Bsp_PwmWave_CarrierTestAbort("period update failed");
    }
    return;
  }

  if (BSP_PWM_WAVE_CARRIER_TEST_HOLD == s_ePwmWaveCarrierTestState) {
    eFrameResult = Bsp_PwmWave_GetActiveFrame(&tActiveFrame);
    eResult = Bsp_PwmWave_GetControlStatus(&tStatus);
    if ((CDD_PWM_WAVE_OK != eResult) || (BSP_PWM_WAVE_JOB_PERIOD_CHANGE != tStatus.eJob) ||
        (BSP_PWM_WAVE_JOB_COMPLETED != tStatus.eJobState) || (CDD_PWM_WAVE_OK != tStatus.eLastResult) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.u32RequestedSequence) || (CDD_PWM_WAVE_STATE_RUN != tStatus.tDriverStatus.eState) ||
        (s_u32PwmWaveCarrierTestSequence != tStatus.tDriverStatus.u32ActiveSequence) || (CDD_PWM_WAVE_OK != eFrameResult) ||
        (FALSE == Bsp_PwmWave_IsCarrierTestFrame(&tActiveFrame, pTestPoint->u32PeriodTicks))) {
      Bsp_PwmWave_CarrierTestAbort("lost RUN ownership while holding a test point");
      return;
    }

    s_u16PwmWaveCarrierTestHold10msCycles++;
    if (s_u16PwmWaveCarrierTestHold10msCycles >= BSP_PWM_WAVE_CARRIER_TEST_HOLD_10MS_CYCLES) {
      s_u16PwmWaveCarrierTestHold10msCycles = 0U;
      s_u8PwmWaveCarrierTestIndex++;
      if (s_u8PwmWaveCarrierTestIndex >= BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT) {
        s_u8PwmWaveCarrierTestIndex = 0U;
      }

      eResult = Bsp_PwmWave_CarrierTestRequestCurrentPoint();
      if (CDD_PWM_WAVE_OK == eResult) {
        DEBUG_INFO("PWM carrier frequency test requested target %d kHz, period %d ticks, sequence %d.\r\n",
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u16TargetFrequencyKHz,
                   (int)s_atPwmWaveCarrierTestPoints[s_u8PwmWaveCarrierTestIndex].u32PeriodTicks, (int)s_u32PwmWaveCarrierTestSequence);
      } else {
        DEBUG_INFO("PWM carrier frequency test next period request rejected, result %d.\r\n", (int)eResult);
        Bsp_PwmWave_CarrierTestAbort("next period request failed");
      }
    }
    return;
  }

  Bsp_PwmWave_CarrierTestAbort("entered an invalid test state");
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
  } else if ((BSP_PWM_WAVE_JOB_FRAME_UPDATE == eJob) || (BSP_PWM_WAVE_JOB_PERIOD_CHANGE == eJob)) {
    if ((CDD_PWM_WAVE_STATE_ARMED_LOW != tStatus.eState) && (CDD_PWM_WAVE_STATE_RUN != tStatus.eState)) {
      (void)Cdd_PwmWave_EmergencyShutdown();
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_E_HW_CONFIG);
    } else {
      Bsp_PwmWave_FinishPendingJob(eJob, u32Sequence, CDD_PWM_WAVE_OK);
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
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0 == GET_CPU_ID()) {
#endif
    Bsp_PwmWave_CarrierFrequencyTestMonitor();  // @FWPP
#if (PWM_MULTICORE_ENABLED == STD_ON)
  }
#endif
}

void Bsp_Pwm_20ms_Task_Event(void)
{
#if (PWM_MULTICORE_ENABLED == STD_ON)
  if (0 == GET_CPU_ID()) {
#endif
    Cdd_PwmWave_MainFunction();
    Bsp_PwmWave_MainFunction();
    if ((BSP_PWM_WAVE_CARRIER_TEST_WAIT_START == s_ePwmWaveCarrierTestState) ||
        (BSP_PWM_WAVE_CARRIER_TEST_WAIT_PERIOD == s_ePwmWaveCarrierTestState)) {
      Bsp_PwmWave_CarrierFrequencyTestMonitor();
    }
    Bsp_PwmWave_FixedTestMonitor();
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
  // FWPP
// #if (PWM_MULTICORE_ENABLED == STD_ON)
//   if (2 == GET_CPU_ID()) {
// #endif
//     if (s_u16Rgb2DutyVal > PWM_MAX_DUTY) {
//       s_u16Rgb2DutyVal = 0U;
//       Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], 0);
//       s_u8Rgb2OrderIndex++;
//       if (s_u8Rgb2OrderIndex > 2) {
//         s_u8Rgb2OrderIndex = 0U;
//       }
//     } else {
//       s_u16Rgb2DutyVal += s_u16Rgb2Step;
//       if (s_u16Rgb2DutyVal > PWM_MAX_DUTY) {
//         Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], PWM_MAX_DUTY);
//       } else {
//         Pwm_SetDutyCycle(s_u32Rgb2Order[s_u8Rgb2OrderIndex], s_u16Rgb2DutyVal);
//       }
//     }
// #if (PWM_MULTICORE_ENABLED == STD_ON)
//   }
// #endif
}
