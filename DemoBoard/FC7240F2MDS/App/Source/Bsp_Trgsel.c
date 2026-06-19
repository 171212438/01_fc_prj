#include "Bsp_Trgsel.h"

/************ Global functions *******************/
void Bsp_Trgsel_Init(void)
{
    TrgSel_Init(&TrgSel_Config);
}

void Bsp_Trgsel_1s_Task_Event(void)
{
	TrgSel_ConfigInput(TRGSEL5_TARGET_AONTIMER0_CLK3,TRGSEL5_SRC_TRGSEL_IN8);
	TrgSel_EnableLock(TRGSEL5_TARGET_AONTIMER0_CLK3);
}
