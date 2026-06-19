#include "Mcal.h"
#include "Systick_Cfg.h"

ISR(Systick_Reload_ISR);
#define BSP_START_SEC_VAR_INIT_SEPERATED
#include "Bsp_MemMap.h"
BSP_DATA_SECTION static volatile VAR(uint32, SYSTICK_CODE) ticks = 0U;
#define BSP_STOP_SEC_VAR_INIT_SEPERATED
#include "Bsp_MemMap.h"

LOCAL_INLINE FUNC(void, SYSTICK_CODE) Systick_CheckTaskOpen(void)
{
    uint32 i;
    for (i = 0; i < TASK_TABLE_NUMBER; i++)
    {
        if (ticks % (ScheduleTCB[i].TaskMSCount) == 0)
        {
            ScheduleTCB[i].TaskOpen = TRUE;
            ScheduleTCB[i].PreemptAction();
        }
    }
}

LOCAL_INLINE FUNC(void, SYSTICK_CODE) Systick_ShceduleTask(void)
{
	ticks++;
    Systick_CheckTaskOpen();
}

FUNC(void, SYSTICK_CODE) task_check_clear_count(void)
{
    ticks = 0;
}

ISR(Systick_Reload_ISR)
{
	Systick_ShceduleTask();

	EXIT_INTERRUPT();
}
