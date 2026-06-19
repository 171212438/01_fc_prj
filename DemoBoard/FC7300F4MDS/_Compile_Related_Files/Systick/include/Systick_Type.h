#ifndef SYSTICK_TYPES_H
#define SYSTICK_TYPES_H

#include "Std_Types.h"

#define SYSTICK_CODE
#define SYSTICK_CONST
#define SYSTICK_APPL_DATA
#define SYSTICK_APPL_CONST
#define SYSTICK_VAR

typedef enum {
	SYSTICK_CLK_SRC_CORE_DIV_16 = 0U,
	SYSTICK_CLK_SRC_CORE
}Systick_ClockSourceType;

typedef uint8 Systick_PriorityType;
typedef P2FUNC(void, SYSTICK_CODE, Systick_PreemptTask)(void);
typedef P2FUNC(void, SYSTICK_CODE, Systick_ScheduleTask)(void);

typedef struct {
	VAR(Systick_PriorityType, SYSTICK_VAR) Priority;
	VAR(uint32, SYSTICK_VAR) u32ReloadValue;
	VAR(Systick_ClockSourceType, SYSTICK_VAR) ClockSource;
}Systick_ConfigType;

typedef struct {
    CONST(uint16, SYSTICK_CONST)                TaskMSCount;     /* when match this, task mask open */
    VAR(boolean, SYSTICK_VAR)                   TaskOpen;
    CONST(Systick_PreemptTask, SYSTICK_CONST)   PreemptAction;   /* special function when task open */
    CONST(Systick_ScheduleTask, SYSTICK_CONST)  MainAction;      /* main function when task open */
}Systick_TcbType;

#endif /* SYSTICK_TYPES_H */
