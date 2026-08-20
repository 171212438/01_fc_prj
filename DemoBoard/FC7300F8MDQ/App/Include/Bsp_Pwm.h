#ifndef _BSP_PWM_H_
#define _BSP_PWM_H_

#include "Bsp_McalHeader.h"
#include "Cdd_PwmWave.h"

typedef enum {
  BSP_PWM_WAVE_JOB_NONE = 0,
  BSP_PWM_WAVE_JOB_START_WITH_FRAME,
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
void Bsp_Pwm_5us_Task_Event(void);

/*
 * Except for the pure ValidateFrame helper, normal control APIs are
 * non-reentrant and owned by one Core0 task context. RequestUpdate returns OK
 * when the CDD has staged/armed the latest shadow update; pSequence is valid
 * only on OK. High-rate Frame updates do not create BSP jobs and intermediate
 * sequences may be superseded before the slow diagnostic path observes them.
 * GetControlStatus() reports lifecycle commands only. EmergencyShutdown
 * intentionally replaces any lifecycle job. Bsp_Pwm_Init() itself leaves the
 * outputs in ARMED_LOW; Core0 startup calls Bsp_PwmWave_Start() after its board
 * and SysTick initialization sequence.
 */
Cdd_PwmWave_ResultType Bsp_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame);
/* Single synchronous Start path. It resubmits the active frame after a normal
 * Stop; when no active frame exists, it uses the loaded PWM_CARRIER default
 * period, zero-width PWM1-PWM4 windows and PWM5 LOW. */
Cdd_PwmWave_ResultType Bsp_PwmWave_Start(void);
/* The only frame-submit API. The caller supplies one complete, self-consistent
 * frame for any period, window or PWM5 update. In ARMED_LOW this is load-only;
 * in RUN, same-period updates use a latest-wins 20 us data path. A period
 * change can briefly return BUSY while its one-shot common-boundary arm is
 * still pending. Use one Core0 task owner; a faster scheduler such as the 5 us
 * example must divide down so no more than one call is accepted in any 20 us
 * interval. IRQ172 remains priority 0 and preempts that task. Do not poll BSP
 * job completion for Frame updates. */
Cdd_PwmWave_ResultType Bsp_PwmWave_RequestUpdate(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence);
/* Stop the 20 us Frame producer first; retry BUSY after its final Frame drains. */
Cdd_PwmWave_ResultType Bsp_PwmWave_Stop(void);
/* Core0 ISR/task callable; it preempts any pending upper-layer job. */
Cdd_PwmWave_ResultType Bsp_PwmWave_EmergencyShutdown(void);
/* A successful clear removes the active frame; the unified Start path rebuilds
 * the generated-period, zero-width default frame when it is called next. */
Cdd_PwmWave_ResultType Bsp_PwmWave_ClearFault(void);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetControlStatus(Bsp_PwmWave_ControlStatusType *pStatus);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetActiveFrame(Cdd_PwmWave_FrameType *pFrame);
Cdd_PwmWave_ResultType Bsp_PwmWave_GetPendingFrame(Cdd_PwmWave_FrameType *pFrame);
/*
 * Polls only the cold Start lifecycle command. Frame updates never enter this
 * state machine and the 20 us task must not call this function.
 */
void Bsp_PwmWave_MainFunction(void);

#endif /* _BSP_PWM_H_ */
