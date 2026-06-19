#ifndef SYSTICK_CFG_H
#define SYSTICK_CFG_H

#include "Systick_Type.h"

#define TASK_TABLE_NUMBER 7

extern VAR(Systick_TcbType, SYSTICK_VAR) ScheduleTCB[];

extern CONST(Systick_ConfigType, SYSTICK_CONST) Systick_Config;

#define BSP_START_SEC_RAMCODE
#include "Bsp_MemMap.h"

FUNC(void, SYSTICK_CODE) task_500us(void);
FUNC(void, SYSTICK_CODE) task_5ms(void);
FUNC(void, SYSTICK_CODE) task_10ms(void);
FUNC(void, SYSTICK_CODE) task_20ms(void);
FUNC(void, SYSTICK_CODE) task_100ms(void);
FUNC(void, SYSTICK_CODE) task_1000ms(void);
FUNC(void, SYSTICK_CODE) task_5000ms(void);
FUNC(void, SYSTICK_CODE) task_check_clear_count(void);

#define BSP_STOP_SEC_RAMCODE
#include "Bsp_MemMap.h"

#endif /* SYSTICK_CFG_H */
