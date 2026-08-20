#ifndef CDD_PWM_WAVE_H
#define CDD_PWM_WAVE_H

#include "Std_Types.h"

#define CDD_PWM_WAVE_MIN_PERIOD_TICKS (500U)
#define CDD_PWM_WAVE_MAX_PERIOD_TICKS (1154U)
#define CDD_PWM_WAVE_DEAD_TIME_TICKS  (23U)
#define CDD_PWM_WAVE_WINDOW_COUNT     (4U)
/* PWM5 TOGGLE uses one carrier period LOW plus one carrier period HIGH. */
#define CDD_PWM_WAVE_PWM5_CARRIER_PERIODS (2U)

/* LU0 samples the run request on CH0; DTM0/1 use the synchronized inverse as shutoff. */
#define CDD_PWM_WAVE_DTM_BOUNDARY_SYNC_SUPPORTED (STD_ON)
#define CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED   (STD_OFF)

typedef uint32 Cdd_PwmWave_SequenceType;

typedef enum {
  CDD_PWM_WAVE_STATE_RESET_SAFE = 0,
  CDD_PWM_WAVE_STATE_GPIO_LOW,
  CDD_PWM_WAVE_STATE_ARMED_LOW,
  CDD_PWM_WAVE_STATE_RUN,
  CDD_PWM_WAVE_STATE_STOP_PENDING,
  CDD_PWM_WAVE_STATE_FAULT_LATCHED
} Cdd_PwmWave_StateType;

typedef enum {
  CDD_PWM_WAVE_PWM5_LOW = 0,
  CDD_PWM_WAVE_PWM5_HIGH,
  CDD_PWM_WAVE_PWM5_TOGGLE  /* Independent CH3 alternates LOW/HIGH every current CH0 carrier period. */
} Cdd_PwmWave_Pwm5StateType;

typedef struct {
  uint32 u32CmpA;
  uint32 u32CmpB;
} Cdd_PwmWave_WindowType;

/* CmpA == CmpB is the exact 0% endpoint. Positive windows narrower than
 * CDD_PWM_WAVE_DEAD_TIME_TICKS are accepted and clamped to S4-S7 100% with
 * their complementary S20-S23 outputs at 0%. */

typedef struct {
  uint32 u32PeriodTicks;
  Cdd_PwmWave_WindowType aWindow[CDD_PWM_WAVE_WINDOW_COUNT];
  Cdd_PwmWave_Pwm5StateType ePwm5State;
} Cdd_PwmWave_FrameType;

typedef enum {
  CDD_PWM_WAVE_OK = 0,
  CDD_PWM_WAVE_E_UNINIT,
  CDD_PWM_WAVE_E_PARAM_POINTER,
  CDD_PWM_WAVE_E_PERIOD,
  CDD_PWM_WAVE_E_CMP,
  CDD_PWM_WAVE_E_DEAD_TIME, /* Retained for result-code compatibility; no longer returned for narrow windows. */
  CDD_PWM_WAVE_E_PWM5,
  CDD_PWM_WAVE_E_STATE,
  CDD_PWM_WAVE_E_BUSY,
  CDD_PWM_WAVE_E_FAULT_ACTIVE,
  CDD_PWM_WAVE_E_WRONG_CORE,
  CDD_PWM_WAVE_E_NO_FRAME,
  CDD_PWM_WAVE_E_HW_CONFIG,
  CDD_PWM_WAVE_E_HW_TIMEOUT,
  CDD_PWM_WAVE_E_NOT_SUPPORTED
} Cdd_PwmWave_ResultType;

#define CDD_PWM_WAVE_FAULT_SOFTWARE_REQUEST (0x00000001U)
#define CDD_PWM_WAVE_FAULT_HW_TIMEOUT       (0x00000002U)
#define CDD_PWM_WAVE_FAULT_HW_CONFIG        (0x00000004U)

typedef struct {
  Cdd_PwmWave_StateType eState;
  boolean bActiveFrameValid;
  boolean bPendingFrameValid;
  boolean bStartPending;
  boolean bFaultLatched;
  boolean bFaultInputConfigured;
  boolean bRawFaultActive;
  Cdd_PwmWave_SequenceType u32ActiveSequence;
  Cdd_PwmWave_SequenceType u32PendingSequence;
  uint32 u32FaultFlags;
} Cdd_PwmWave_StatusType;

/*
 * Runtime ownership: after Cdd_PwmWave_Init(), Core0 exclusively owns
 * eFTU1 TOM0 CH0, CH3-CH7, the complete DTM0 and DTM1 instances,
 * LU0 LG0, TRGSEL0 register 0 (LU0_INPUT0A-D), TRGSEL0_OUT2 and eFTU1_FLT0.
 * Pwm_Init supplies a shifted CH3 baseline; this CDD safely converts CH3 to
 * an independent two-carrier-period channel while keeping TRIGOUT=0. For
 * TOGGLE, CH3 uses CM0=2*CH0 period and CM1=CH0 period. Carrier-period
 * changes use a one-shot CH0 CCU0 notification. The callback arms UPEN in
 * CH3's second old carrier cycle so CH0 and CH3 load at their next common zero.
 * DTM0 channels 0-2 and TOM0 CH1/CH2 must remain unused. Do not call the
 * standard Pwm or TrgSel runtime update APIs for those resources from any core.
 */
Cdd_PwmWave_ResultType Cdd_PwmWave_Init(void);
Cdd_PwmWave_ResultType Cdd_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame);
/* Change PWM5 state only in ARMED_LOW. TOGGLE follows the carrier:
 * one carrier period LOW plus one carrier period HIGH. This complete-frame
 * API is the only frame-submit path for period, window and PWM5 changes.
 * In RUN, OK means that the latest shadow frame was staged/armed; a sequence
 * may be superseded by a later same-period submission before slow readback.
 * The integration contract is one Core0 task owner and no more than one
 * accepted submission in any 20 us interval; IRQ172 remains enabled at
 * priority 0 and preempts that task. Sequence values are short-lived
 * transaction tokens: compare them only together with the current
 * pending/active-valid flag and never persist them as identities. */
Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrame(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence);
/* Call immediately after BSP switches all nine pads to eFTU; Start remains blocked until it passes. */
Cdd_PwmWave_ResultType Cdd_PwmWave_ConfirmArmedLow(void);
/* Synchronous: settles at CH0 zero; PWM5 toggle must be observed both low and high. */
Cdd_PwmWave_ResultType Cdd_PwmWave_Start(void);
/* Synchronous: stop the 20 us producer first. The function allows up to three
 * CH0 wraps to drain the final Frame, then two wraps to settle Stop and requires
 * all nine pads low. BUSY may be retried; a stalled carrier latches HW_TIMEOUT. */
Cdd_PwmWave_ResultType Cdd_PwmWave_Stop(void);

/*
 * Core0 ISR/task callable software shutoff. DTM1 and DTM0 channel 3 are forced
 * low, then the five TOM channels are disabled immediately.
 */
Cdd_PwmWave_ResultType Cdd_PwmWave_EmergencyShutdown(void);
/* Clear restores ARMED_LOW only for previously confirmed eFTU pads; then submit a new frame. */
Cdd_PwmWave_ResultType Cdd_PwmWave_ClearFault(void);

Cdd_PwmWave_ResultType Cdd_PwmWave_GetStatus(Cdd_PwmWave_StatusType *pStatus);
Cdd_PwmWave_ResultType Cdd_PwmWave_GetActiveFrame(Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Cdd_PwmWave_GetPendingFrame(Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_StateType Cdd_PwmWave_GetState(void);
boolean Cdd_PwmWave_IsFaultLatched(void);
/* Dedicated IRQ172 callback for the one-shot CH0 CCU0 common-boundary arm. */
void Cdd_PwmWave_CarrierBoundaryNotification(void);
/*
 * Dedicated eFTU1 TOM0 CH0 CCU0 fast path. TRUE means the carrier event was
 * acknowledged and dispatched; the IRQ172 wrapper never calls the generic ISR.
 */
boolean Cdd_PwmWave_TryHandleCarrierBoundaryInterrupt(void);
/* Slow diagnostic service only; never call it from the 20 us Frame task. */
void Cdd_PwmWave_MainFunction(void);

#endif /* CDD_PWM_WAVE_H */
