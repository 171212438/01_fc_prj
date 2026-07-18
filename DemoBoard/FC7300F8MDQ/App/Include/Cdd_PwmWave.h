#ifndef CDD_PWM_WAVE_H
#define CDD_PWM_WAVE_H

#include "Std_Types.h"

#define CDD_PWM_WAVE_MIN_PERIOD_TICKS (500U)
#define CDD_PWM_WAVE_MAX_PERIOD_TICKS (1154U)
#define CDD_PWM_WAVE_DEAD_TIME_TICKS  (23U)
#define CDD_PWM_WAVE_WINDOW_COUNT     (4U)

/* CH0 supplies an edge source, but the complete DTM1 zero-boundary start/stop path is unverified. */
#define CDD_PWM_WAVE_DTM_BOUNDARY_SYNC_SUPPORTED (STD_OFF)
#define CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED   (STD_OFF)

typedef uint32 Cdd_PwmWave_SequenceType;

typedef enum
{
  CDD_PWM_WAVE_STATE_RESET_SAFE = 0,
  CDD_PWM_WAVE_STATE_GPIO_LOW,
  CDD_PWM_WAVE_STATE_ARMED_LOW,
  CDD_PWM_WAVE_STATE_RUN,
  CDD_PWM_WAVE_STATE_STOP_PENDING,
  CDD_PWM_WAVE_STATE_FAULT_LATCHED
} Cdd_PwmWave_StateType;

typedef enum
{
  CDD_PWM_WAVE_PWM5_LOW = 0,
  CDD_PWM_WAVE_PWM5_HIGH
} Cdd_PwmWave_Pwm5StateType;

typedef struct
{
  uint32 u32CmpA;
  uint32 u32CmpB;
} Cdd_PwmWave_WindowType;

typedef struct
{
  uint32 u32PeriodTicks;
  Cdd_PwmWave_WindowType aWindow[CDD_PWM_WAVE_WINDOW_COUNT];
  Cdd_PwmWave_Pwm5StateType ePwm5State;
} Cdd_PwmWave_FrameType;

typedef enum
{
  CDD_PWM_WAVE_OK = 0,
  CDD_PWM_WAVE_E_UNINIT,
  CDD_PWM_WAVE_E_PARAM_POINTER,
  CDD_PWM_WAVE_E_PERIOD,
  CDD_PWM_WAVE_E_CMP,
  CDD_PWM_WAVE_E_DEAD_TIME,
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

typedef struct
{
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
 * eFTU1 TOM0 CH0, CH3-CH7 and DTM1. CH1/CH2 are reserved as the internal
 * trigger-bypass path and must remain unused. Do not call the standard Pwm
 * runtime update APIs for PWM1-PWM5 or PWM_CARRIER.
 */
Cdd_PwmWave_ResultType Cdd_PwmWave_Init(void);
Cdd_PwmWave_ResultType Cdd_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrame(const Cdd_PwmWave_FrameType *pFrame,
                                               Cdd_PwmWave_SequenceType *pSequence);
Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitPeriodChange(uint32 u32NewPeriodTicks,
                                                      Cdd_PwmWave_SequenceType *pSequence);
/* Fail-closed with E_NOT_SUPPORTED until the complete CH0-synchronous DTM path is verified. */
Cdd_PwmWave_ResultType Cdd_PwmWave_Start(void);
/* Reserved for the same verified hardware-synchronized start/stop implementation. */
Cdd_PwmWave_ResultType Cdd_PwmWave_Stop(void);

/*
 * Core0 ISR/task callable software shutoff. The eight DTM outputs are forced
 * low first; PWM5 is outside that hardware domain and is then forced low independently.
 */
Cdd_PwmWave_ResultType Cdd_PwmWave_EmergencyShutdown(void);
/* Clear keeps all outputs disabled; a new complete frame must be submitted before Start. */
Cdd_PwmWave_ResultType Cdd_PwmWave_ClearFault(void);

Cdd_PwmWave_ResultType Cdd_PwmWave_GetStatus(Cdd_PwmWave_StatusType *pStatus);
Cdd_PwmWave_ResultType Cdd_PwmWave_GetActiveFrame(Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Cdd_PwmWave_GetPendingFrame(Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_StateType Cdd_PwmWave_GetState(void);
boolean Cdd_PwmWave_IsFaultLatched(void);
/* Call from the existing Core0 20 ms task; it promotes or times out a pending frame. */
void Cdd_PwmWave_MainFunction(void);

#endif /* CDD_PWM_WAVE_H */
