#ifndef _BSP_PWM_H_
#define _BSP_PWM_H_

#include "Bsp_McalHeader.h"

#define BSP_PWM_DWT_CORE_CLOCK_HZ (300000000U)

#define BSP_PWM_WAVE_MIN_PERIOD_TICKS (500U)
#define BSP_PWM_WAVE_MAX_PERIOD_TICKS (1154U)
#define BSP_PWM_WAVE_DEAD_TIME_TICKS  (23U)
#define BSP_PWM_WAVE_WINDOW_COUNT     (4U)
/* PWM5 TOGGLE uses one carrier period LOW plus one carrier period HIGH. */
#define BSP_PWM_WAVE_PWM5_CARRIER_PERIODS (2U)

/* LU0 samples the run request on CH0; DTM0/1 use the synchronized inverse as shutoff. */
#define BSP_PWM_WAVE_DTM_BOUNDARY_SYNC_SUPPORTED (STD_ON)
#define BSP_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED   (STD_OFF)

typedef enum {
  BSP_PWM_WAVE_STATE_RESET_SAFE = 0,
  BSP_PWM_WAVE_STATE_ARMED_LOW,
  BSP_PWM_WAVE_STATE_RUN,
  BSP_PWM_WAVE_STATE_FAULT_LATCHED
} Bsp_PwmWave_StateType;

typedef enum {
  BSP_PWM_WAVE_OUTPUT_LOW = 0,
  BSP_PWM_WAVE_OUTPUT_FRAME
} Bsp_PwmWave_OutputRequestType;

typedef enum {
  BSP_PWM_WAVE_PWM5_LOW = 0,
  BSP_PWM_WAVE_PWM5_HIGH,
  BSP_PWM_WAVE_PWM5_TOGGLE  /* Independent CH3 alternates LOW/HIGH every current CH0 carrier period. */
} Bsp_PwmWave_Pwm5StateType;

typedef struct {
  uint32 u32CmpA;
  uint32 u32CmpB;
} Bsp_PwmWave_WindowType;

/* CmpA == CmpB is the exact 0% endpoint. Positive windows narrower than
 * BSP_PWM_WAVE_DEAD_TIME_TICKS are accepted and clamped to S4-S7 100% with
 * their complementary S20-S23 outputs at 0%. */
typedef struct {
  uint32 u32PeriodTicks;
  Bsp_PwmWave_WindowType aWindow[BSP_PWM_WAVE_WINDOW_COUNT];
  Bsp_PwmWave_Pwm5StateType ePwm5State;
} Bsp_PwmWave_FrameType;

typedef enum {
  BSP_PWM_WAVE_OK = 0,
  BSP_PWM_WAVE_E_UNINIT,
  BSP_PWM_WAVE_E_PARAM_POINTER,
  BSP_PWM_WAVE_E_PERIOD,
  BSP_PWM_WAVE_E_CMP,
  BSP_PWM_WAVE_E_DEAD_TIME,  /* Retained for result-code compatibility; no longer returned for narrow windows. */
  BSP_PWM_WAVE_E_PWM5,
  BSP_PWM_WAVE_E_STATE,
  BSP_PWM_WAVE_E_BUSY,
  BSP_PWM_WAVE_E_FAULT_ACTIVE,
  BSP_PWM_WAVE_E_WRONG_CORE,
  BSP_PWM_WAVE_E_NO_FRAME,
  BSP_PWM_WAVE_E_HW_CONFIG,
  BSP_PWM_WAVE_E_HW_TIMEOUT,
  BSP_PWM_WAVE_E_NOT_SUPPORTED,
  BSP_PWM_WAVE_E_OUTPUT_REQUEST
} Bsp_PwmWave_ResultType;

#define BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST (0x00000001U)
#define BSP_PWM_WAVE_FAULT_HW_TIMEOUT       (0x00000002U)
#define BSP_PWM_WAVE_FAULT_HW_CONFIG        (0x00000004U)

typedef struct {
  Bsp_PwmWave_StateType eState;
  boolean bFrameConfigured;
  boolean bCommonUpdatePending;  /* TRUE only while IRQ172 has not yet published common UPEN. */
  boolean bFaultLatched;
  uint32 u32FaultFlags;
} Bsp_PwmWave_StatusType;

void Bsp_Pwm_Init(void);
void Bsp_Pwm_10ms_Task_Event(void);
void Bsp_Pwm_20ms_Task_Event(void);
void Bsp_Pwm_5ms_Task_Event(void);
void Bsp_Pwm_20us_Task_Event(void);

/* After Bsp_Pwm_Init(), Core0 exclusively owns eFTU1 TOM0 CH0, CH3-CH7,
 * DTM0/DTM1, LU0 LG0, the configured TRGSEL routes and eFTU1 FLT0. TOM0
 * CH1/CH2 and DTM0 CH0-CH2 must remain unused. No core may use standard Pwm
 * or TrgSel runtime-update APIs on these resources. */

/* The only normal output-control entry.
 *
 * OUTPUT_FRAME requires a complete pFrame. In ARMED_LOW it first confirms the
 * complete Frame at a carrier boundary and then releases DTM shutoff at a later
 * CH0 boundary; in RUN it publishes the Frame without a separate Start action.
 * Fixed-period window updates are latest-wins: OK confirms the eight Shadow
 * writes and UPEN command, not their later transfer into working registers.
 * RUN-time fast Frames are not range-checked per window; the owner guarantees
 * CmpA <= CmpB < Period. Period changes still validate Period, write all twelve
 * Shadows and return after arming the one-shot CH0/CH3 boundary IRQ. The IRQ
 * publishes UPEN and immediately closes the software transaction; it does not
 * read back or prove the later working-register load. Calls from the single
 * Core0 owner shall be separated by at least 20 us. BUSY asks the caller to
 * retry on its next activation. A RUN-time PWM5 mode change remains on the
 * fully validated cold path.
 * OUTPUT_LOW ignores pFrame and synchronously requests/validates low output at
 * a CH0 boundary. The caller must stop producing OUTPUT_FRAME requests first.
 * The runtime owner is one Core0 task; IRQ172 priority 0 preempts that task. */
Bsp_PwmWave_ResultType Bsp_PwmWave_ApplyRequest(Bsp_PwmWave_OutputRequestType eOutputRequest, const Bsp_PwmWave_FrameType *pFrame);

/* Core0 ISR/task callable software shutoff. DTM1 and DTM0 channel 3 are forced
 * low, then the five TOM channels are disabled immediately. SOFTWARE_REQUEST
 * remains latched for the system lifetime; only a system reset permits output. */
Bsp_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void);

/* Clear restores ARMED_LOW only for recoverable hardware faults. A software
 * EmergencyShutdown is permanent until system reset and returns E_FAULT_ACTIVE. */
Bsp_PwmWave_ResultType Bsp_PwmWave_ClearFault(void);

Bsp_PwmWave_ResultType Bsp_PwmWave_GetStatus(Bsp_PwmWave_StatusType *pStatus);

#endif /* _BSP_PWM_H_ */
