#ifndef _BSP_PWM_H_
#define _BSP_PWM_H_

#include "Bsp_McalHeader.h"
#include "Cdd_PwmWave.h"

typedef enum
{
  BSP_PWM_WAVE_JOB_NONE = 0,
  BSP_PWM_WAVE_JOB_START_WITH_FRAME,
  BSP_PWM_WAVE_JOB_FRAME_UPDATE,
  BSP_PWM_WAVE_JOB_PERIOD_CHANGE,
  BSP_PWM_WAVE_JOB_START_ACTIVE_FRAME,
  BSP_PWM_WAVE_JOB_STOP,
  BSP_PWM_WAVE_JOB_EMERGENCY_SHUTDOWN,
  BSP_PWM_WAVE_JOB_CLEAR_FAULT
} Bsp_PwmWave_JobType;

typedef enum
{
  BSP_PWM_WAVE_JOB_IDLE = 0,
  BSP_PWM_WAVE_JOB_PENDING,
  BSP_PWM_WAVE_JOB_COMPLETED,
  BSP_PWM_WAVE_JOB_FAILED
} Bsp_PwmWave_JobStateType;

typedef struct
{
  Bsp_PwmWave_JobType eJob;
  Bsp_PwmWave_JobStateType eJobState;
  Cdd_PwmWave_ResultType eLastResult;
  Cdd_PwmWave_SequenceType u32RequestedSequence;
  Cdd_PwmWave_StatusType tDriverStatus;
} Bsp_PwmWave_ControlStatusType;


/************ Global functions *******************/
void Bsp_Pwm_Init(void);
void Bsp_Pwm_20ms_Task_Event(void);
void Bsp_Pwm_5ms_Task_Event(void);

/*
 * Except for the pure ValidateFrame helper, normal control APIs are
 * non-reentrant and owned by one Core0 task context. Request APIs return
 * OK when the CDD accepts the shadow update; pSequence is valid only on OK.
 * Async success requires GetControlStatus() == OK plus all of: expected eJob,
 * matching returned sequence, eJobState == COMPLETED and eLastResult == OK.
 * EmergencyShutdown intentionally replaces the job and sequence, which
 * cancels the request. No API below starts PWM automatically at power-up.
 */
Cdd_PwmWave_ResultType Bsp_PwmWave_ValidateFrame(
    const Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestStart(
    const Cdd_PwmWave_FrameType *pFrame,
    Cdd_PwmWave_SequenceType *pSequence);
/* In ARMED_LOW this is load-only; in RUN it updates the running frame. */
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestUpdate(
    const Cdd_PwmWave_FrameType *pFrame,
    Cdd_PwmWave_SequenceType *pSequence);
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestPeriodChange(
    uint32 u32PeriodTicks,
    Cdd_PwmWave_SequenceType *pSequence);
/* Restart the currently active frame after a normal Stop. */
Cdd_PwmWave_ResultType Bsp_PwmWave_Start(void);
Cdd_PwmWave_ResultType Bsp_PwmWave_Stop(void);
/* Core0 ISR/task callable; it preempts any pending upper-layer job. */
Cdd_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void);
/* A successful clear removes the active frame; submit a new frame before Start. */
Cdd_PwmWave_ResultType Bsp_PwmWave_ClearFault(void);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetControlStatus(
    Bsp_PwmWave_ControlStatusType *pStatus);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetActiveFrame(
    Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetPendingFrame(
    Cdd_PwmWave_FrameType *pFrame);
/*
 * Polls sequence completion and performs the deferred Start. It does not call
 * Cdd_PwmWave_MainFunction(), so a faster Core0 control task may call it when
 * less than 20 ms command-completion latency is required. Overlapping calls
 * are dropped by an internal non-reentrancy guard.
 */
void Bsp_PwmWave_MainFunction(void);

#endif /* _BSP_PWM_H_ */
