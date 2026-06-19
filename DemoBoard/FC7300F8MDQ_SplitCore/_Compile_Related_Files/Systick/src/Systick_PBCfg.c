#include "Systick_Cfg.h"

CONST(Systick_ConfigType, SYSTICK_CONST) Systick_Config =
{
	(Systick_PriorityType)0x0F,
	(uint32)(300000000U / 10000U),
	SYSTICK_CLK_SRC_CORE
};

LOCAL_INLINE FUNC(void, SYSTICK_VAR) task_dummy(void)
{}

#define BSP_START_SEC_VAR_INIT_SEPERATED
#include "Bsp_MemMap.h"
BSP_DATA_SECTION VAR(Systick_TcbType, SYSTICK_VAR) ScheduleTCB[TASK_TABLE_NUMBER] = {
/* TaskMSCount  TaskOpen     OtherAction              MainAction   */
   {2,           0,           task_dummy,              task_500us    },         /* 500us    */
   {50,          0,           task_dummy,              task_5ms    },           /* 5ms    */
   {100,         0,           task_dummy,              task_10ms   },           /* 10ms   */
   {200,         0,           task_dummy,              task_20ms   },           /* 20ms   */
   {1000,        0,           task_dummy,              task_100ms  },           /* 100ms  */
   {10000,       0,           task_dummy,              task_1000ms },           /* 1000ms */
   {50000,       0,           task_check_clear_count,  task_5000ms }            /* 5000ms */
};
#define BSP_STOP_SEC_VAR_INIT_SEPERATED
#include "Bsp_MemMap.h"
