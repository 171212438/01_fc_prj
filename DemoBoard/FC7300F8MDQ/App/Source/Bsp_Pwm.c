#include "Bsp_Pwm_Internal.h"
#include "Bsp_InterruptManager.h"
#include "Bsp_Dwt.h"


/************ Macro *******************/
#define BSP_PWM_WAVE_IRQ_PRIORITY (0U)

volatile Dwt_DemoResultType g_tDwtDemoResult;
volatile Bsp_PwmWave_IrqDwtResultType g_tDwtIrq172Result;

/************ Module variable *******************/
/* Never cleared by software. It blocks accidental PWM re-initialization after
 * an EmergencyShutdown; only a system reset restores the zero initializer. */
volatile boolean Bsp_PwmWave_gbEmergencyLatched = FALSE;
volatile uint32 Bsp_PwmWave_gu32Irq172MeasureCount = 0U;

/************ Global functions *******************/
void Bsp_Pwm_Init(void)
{
  Bsp_PwmWave_ResultType ePwmWaveResult;

  if (TRUE == Bsp_PwmWave_gbEmergencyLatched) {
    return;
  }

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
    ePwmWaveResult = Bsp_PwmWave_InitInternal();
    if (BSP_PWM_WAVE_OK == ePwmWaveResult) {
      /* Port_Init() permanently assigns all nine pads to eFTU. Confirm the
       * generated mux and BSP-controlled ARMED_LOW state before IRQ/requests. */
      ePwmWaveResult = Bsp_PwmWave_ConfirmArmedLowInternal();
      if (BSP_PWM_WAVE_OK == ePwmWaveResult) {
#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
        IntMgr_EnableInterrupt(eFTU1_TOM_0TO7_IRQn);
#else
        ePwmWaveResult = BSP_PWM_WAVE_E_HW_CONFIG;
#endif
      }
      if (BSP_PWM_WAVE_OK != ePwmWaveResult) {
        (void)Bsp_PwmWave_EmergencyShutdown();
        DEBUG_INFO("Bsp_Pwm: eFTU ARMED_LOW check failed; outputs remain permanently fault-latched.\r\n");
      }
    } else {
      /* Pwm_Init() has already run and must not be repeated. Latch the BSP
       * even when the hardware engine cannot complete initialization. */
      (void)Bsp_PwmWave_EmergencyShutdown();
      DEBUG_INFO("Bsp_Pwm: ARMED_LOW initialization failed; PWM restart is blocked until system reset.\r\n");
    }

    if (BSP_PWM_WAVE_OK == ePwmWaveResult) {
      g_tDwtDemoResult.bInitOk = Bsp_Dwt_Init();
      g_tDwtIrq172Result.bInitOk = FALSE;
      g_tDwtIrq172Result.u32RawCycles = 0U;
      g_tDwtIrq172Result.u32NetCycles = 0U;
      g_tDwtIrq172Result.u32MaxNetCycles = 0U;
      g_tDwtIrq172Result.u64ElapsedNanoseconds = 0ULL;
      g_tDwtIrq172Result.u32SampleCount = 0U;
      if (TRUE == g_tDwtDemoResult.bInitOk) {
        g_tDwtDemoResult.u32OverheadCycles = Bsp_Dwt_CalibrateOverheadCycles();
        g_tDwtIrq172Result.u32OverheadCycles = g_tDwtDemoResult.u32OverheadCycles;
        g_tDwtIrq172Result.bInitOk = TRUE;
      } else {
        g_tDwtDemoResult.u32OverheadCycles = 0U;
        g_tDwtDemoResult.u32RawCycles = 0U;
        g_tDwtDemoResult.u32NetCycles = 0U;
        g_tDwtDemoResult.u64ElapsedNanoseconds = 0ULL;
        g_tDwtDemoResult.u32Irq172Count = 0U;
        g_tDwtIrq172Result.u32OverheadCycles = 0U;
      }
    }
  }
}

void Bsp_Pwm_10ms_Task_Event(void)
{
}

void Bsp_Pwm_20ms_Task_Event(void)
{
  Bsp_Pwm_20us_Task_Event();
}

void Bsp_Pwm_5ms_Task_Event(void)
{
}

void Bsp_Pwm_20us_Task_Event(void)
{
  static const Bsp_PwmWave_FrameType atPwmWaveDemoFrames[2U] = {
    {
      900U,
      {
        {0U, 300U},
        {0U, 300U},
        {0U, 300U},
        {0U, 300U},
      },
      BSP_PWM_WAVE_PWM5_TOGGLE,
    },
    {
      600U,
      {
        {0U, 300U},
        {0U, 300U},
        {0U, 300U},
        {0U, 300U},
      },
      BSP_PWM_WAVE_PWM5_TOGGLE,
    },
  };
  static uint8 u8PwmWaveDemoFrameIndex = 0U;
  const Bsp_PwmWave_FrameType *pPwmWaveDemoFrame;
  uint32 u32StartCycles;
  uint32 u32OverheadCycles;
  uint32 u32RawCycles;
  uint32 u32NetCycles;
  uint32 u32Irq172Count;
  uint64 u64ElapsedNanoseconds;
  Bsp_PwmWave_ResultType eTargetResult;

#if (PWM_MULTICORE_ENABLED == STD_ON)
  /* This test owns shared eFTU1 resources and must run only on Core0. */
  if (0U != GET_CPU_ID()) {
    return;
  }
#endif

  pPwmWaveDemoFrame = &atPwmWaveDemoFrames[u8PwmWaveDemoFrameIndex];
  u32OverheadCycles = g_tDwtDemoResult.u32OverheadCycles;

  /* D19/PTB10 timing marker: both flips stay outside the DWT window. */
  // (void)Dio_FlipChannel(DioConf_DioChannel_DioChannel_B10);
  Bsp_PwmWave_gu32Irq172MeasureCount = 0U;
  u32StartCycles = Bsp_Dwt_MeasureStart();

  /* Test demo: alternate 750/600 ticks after each accepted request. Comment
   * out this call when PWM test output is not required. BUSY keeps the same
   * target for the next activation while the common update is in flight. */
  eTargetResult = Bsp_PwmWave_ApplyRequest(BSP_PWM_WAVE_OUTPUT_FRAME, pPwmWaveDemoFrame);

  u32RawCycles = Bsp_Dwt_MeasureElapsedCycles(u32StartCycles);
  u32Irq172Count = Bsp_PwmWave_gu32Irq172MeasureCount;
  // (void)Dio_FlipChannel(DioConf_DioChannel_DioChannel_B10);
  if (BSP_PWM_WAVE_OK == eTargetResult) {
    u8PwmWaveDemoFrameIndex = (0U == u8PwmWaveDemoFrameIndex) ? 1U : 0U;
  }
  if (u32RawCycles >= u32OverheadCycles) {
    u32NetCycles = u32RawCycles - u32OverheadCycles;
  } else {
    u32NetCycles = 0U;
  }
  u64ElapsedNanoseconds = Bsp_Dwt_CyclesToNanoseconds(u32NetCycles, BSP_PWM_DWT_CORE_CLOCK_HZ);

  g_tDwtDemoResult.u32RawCycles = u32RawCycles;
  g_tDwtDemoResult.u32NetCycles = u32NetCycles;
  g_tDwtDemoResult.u64ElapsedNanoseconds = u64ElapsedNanoseconds;
  g_tDwtDemoResult.u32TargetResult = (uint32)eTargetResult;
  g_tDwtDemoResult.u32Irq172Count = u32Irq172Count;
}
