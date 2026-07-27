#include "Systick.h"
#include "Systick_Hw.h"

FUNC(void, SYSTICK_CODE) Systick_Init(P2CONST(Systick_ConfigType, AUTOMATIC, SYSTICK_APPL_CONST) ConfigPtr)
{
  SystickLL_Init(ConfigPtr);
}

FUNC(void, SYSTICK_CODE) Systick_Enable(void)
{
  SystickLL_Enable();
}

FUNC(void, SYSTICK_CODE) Systick_Disable(void)
{
  SystickLL_Disable();
}

FUNC(void, SYSTICK_CODE) Systick_DeInit(void)
{
  SystickLL_DeInit();
}


#define BSP_START_SEC_RAMCODE
#include "Bsp_MemMap.h"
BSP_TEXT_SECTION FUNC(void, SYSTICK_CODE) Systick_RunTask(void)
{
  uint32 i;
  for (i = 0; i < TASK_TABLE_NUMBER; i++) {
    if (ScheduleTCB[i].TaskOpen == TRUE) {
      ScheduleTCB[i].MainAction();
      ScheduleTCB[i].TaskOpen = FALSE;
    }
  }
}
#define BSP_STOP_SEC_RAMCODE
#include "Bsp_MemMap.h"
