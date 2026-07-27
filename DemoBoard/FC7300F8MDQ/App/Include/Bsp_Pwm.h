#ifndef _BSP_PWM_H_
#define _BSP_PWM_H_

#include "Bsp_McalHeader.h"
#include "Cdd_PwmWave.h"

/*
 * Fixed waveform board test at the configured 150 MHz eFTU clock:
 * 750 ticks = 5 us (200 kHz), [100, 475) = 375 ticks (50% command window).
 * PWM1-PWM4 start with their existing 200 kHz windows. PWM5 uses one carrier
 * period LOW plus one carrier period HIGH (initially 5 us LOW/5 us HIGH) and
 * follows later carrier-period changes.
 */
#define BSP_PWM_WAVE_FIXED_TEST_PERIOD_TICKS (750U)
#define BSP_PWM_WAVE_FIXED_TEST_CMPA_TICKS   (100U)
#define BSP_PWM_WAVE_FIXED_TEST_CMPB_TICKS   (475U)

/* Dynamic carrier board test at the configured 150 MHz eFTU clock.
 * 1154 ticks is approximately 129.983 kHz; the other three points are exact.
 * After the active sequence/frame confirms a point, it is held for one 10 ms
 * test-monitor interval before the next request. This test exercises period-only
 * updates, so the valid [100, 475) PWM1-PWM4 compare window stays in ticks and
 * its duty ratio intentionally changes with Period. */
#define BSP_PWM_WAVE_CARRIER_TEST_130KHZ_PERIOD_TICKS (1154U)
#define BSP_PWM_WAVE_CARRIER_TEST_200KHZ_PERIOD_TICKS (750U)
#define BSP_PWM_WAVE_CARRIER_TEST_250KHZ_PERIOD_TICKS (600U)
#define BSP_PWM_WAVE_CARRIER_TEST_300KHZ_PERIOD_TICKS (500U)
#define BSP_PWM_WAVE_CARRIER_TEST_STEP_COUNT          (4U)
#define BSP_PWM_WAVE_CARRIER_TEST_HOLD_10MS_CYCLES    (1U)

/*
 * Set TRUE from the debugger or a Core0 test command; the periodic monitor retries
 * while Start is pending, so this is a normal zero-point Stop, not an immediate
 * cancellation of an already accepted Start.
 */
extern volatile boolean g_bPwmWaveFixedTestStopRequest;
extern volatile boolean g_bPwmWaveCarrierTestStopRequest;

typedef enum {
  BSP_PWM_WAVE_JOB_NONE = 0,
  BSP_PWM_WAVE_JOB_START_WITH_FRAME,
  BSP_PWM_WAVE_JOB_FRAME_UPDATE,
  BSP_PWM_WAVE_JOB_PERIOD_CHANGE,
  BSP_PWM_WAVE_JOB_START_ACTIVE_FRAME,
  BSP_PWM_WAVE_JOB_STOP,
  BSP_PWM_WAVE_JOB_EMERGENCY_SHUTDOWN,
  BSP_PWM_WAVE_JOB_CLEAR_FAULT
} Bsp_PwmWave_JobType;

typedef enum {
  BSP_PWM_WAVE_JOB_IDLE = 0,
  BSP_PWM_WAVE_JOB_PENDING,
  BSP_PWM_WAVE_JOB_COMPLETED,
  BSP_PWM_WAVE_JOB_FAILED
} Bsp_PwmWave_JobStateType;

typedef struct {
  Bsp_PwmWave_JobType eJob;
  Bsp_PwmWave_JobStateType eJobState;
  Cdd_PwmWave_ResultType eLastResult;
  Cdd_PwmWave_SequenceType u32RequestedSequence;
  Cdd_PwmWave_StatusType tDriverStatus;
} Bsp_PwmWave_ControlStatusType;


/************ Global functions *******************/
void Bsp_Pwm_Init(void);
void Bsp_Pwm_10ms_Task_Event(void);
void Bsp_Pwm_20ms_Task_Event(void);
void Bsp_Pwm_5ms_Task_Event(void);

/*
 * Except for the pure ValidateFrame helper, normal control APIs are
 * non-reentrant and owned by one Core0 task context. Request APIs return
 * OK when the CDD accepts the shadow update; pSequence is valid only on OK.
 * Async success requires GetControlStatus() == OK plus all of: expected eJob,
 * matching returned sequence, eJobState == COMPLETED and eLastResult == OK.
 * EmergencyShutdown intentionally replaces the job and sequence, which
 * cancels the request. No API below starts PWM by itself; the board-test
 * autostart switch in main_multicore.c is an explicit caller.
 */
Cdd_PwmWave_ResultType Bsp_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame);
/* Board-test helpers; Start is asynchronous, while Stop is safe to request repeatedly. */
Cdd_PwmWave_ResultType Bsp_PwmWave_FixedTestStart(Cdd_PwmWave_SequenceType *pSequence);
Cdd_PwmWave_ResultType Bsp_PwmWave_FixedTestStop(void);
/* Starts from the proven 200 kHz frame, then loops 130 -> 200 -> 250 -> 300 kHz.
 * PWM5 remains TEST_TOGGLE and follows every accepted carrier-period update. */
Cdd_PwmWave_ResultType Bsp_PwmWave_CarrierFrequencyTestStart(Cdd_PwmWave_SequenceType *pSequence);
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestStart(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence);
/* In ARMED_LOW this is load-only; in RUN it updates the running frame. */
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestUpdate(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence);
/* Preserves PWM5 state; TEST_TOGGLE follows the new carrier period and is
 * applied at a common CH0/CH3 zero through a one-shot carrier notification. */
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestPeriodChange(uint32 u32PeriodTicks, Cdd_PwmWave_SequenceType *pSequence);
/* Restart the currently active frame after a normal Stop. */
Cdd_PwmWave_ResultType Bsp_PwmWave_Start(void);
Cdd_PwmWave_ResultType Bsp_PwmWave_Stop(void);
/* Core0 ISR/task callable; it preempts any pending upper-layer job. */
Cdd_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void);
/* A successful clear removes the active frame; submit a new frame before Start. */
Cdd_PwmWave_ResultType Bsp_PwmWave_ClearFault(void);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetControlStatus(Bsp_PwmWave_ControlStatusType *pStatus);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetActiveFrame(Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetPendingFrame(Cdd_PwmWave_FrameType *pFrame);
/*
 * Polls sequence completion and performs the deferred Start. It does not call
 * Cdd_PwmWave_MainFunction(), so a faster Core0 control task may call it when
 * less than 20 ms command-completion latency is required. Overlapping calls
 * are dropped by an internal non-reentrancy guard.
 */
void Bsp_PwmWave_MainFunction(void);

#endif /* _BSP_PWM_H_ */
