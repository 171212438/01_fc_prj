#include "Systick_Reg.h"
#include "Systick_Hw.h"

FUNC(void, SYSTICK_CODE) SystickLL_Init
(
    P2CONST(Systick_ConfigType, AUTOMATIC, SISTYICK_APPL_CONST) pCfgPtr
)
{
//	FC100_SCB->SHPR3 |= FC100_SCB_SHPR3_PRI_15(pCfgPtr->Priority);
	FC100_SysTick->CSR = 0U;  //Disable Systick
	FC100_SysTick->CVR = 0U;  //Clear Current Value Register
	FC100_SysTick->RVR = FC100_SysTick_RVR_RELOAD(pCfgPtr->u32ReloadValue);
	FC100_SysTick->CSR = FC100_SysTick_CSR_CLKSOURCE(pCfgPtr->ClockSource) | FC100_SysTick_CSR_TICKINT(1);
}

FUNC(void, SYSTICK_CODE) SystickLL_Enable(void)
{
	FC100_SysTick->CSR |= FC100_SysTick_CSR_ENABLE(1);
}

FUNC(void, SYSTICK_CODE) SystickLL_Disable(void)
{
	FC100_SysTick->CSR &= ~(FC100_SysTick_CSR_ENABLE(1));
}

FUNC(void, SYSTICK_CODE) SystickLL_DeInit(void)
{
	FC100_SysTick->CSR = 0U;  //Disable Systick
	FC100_SysTick->CVR = 0U;  //Clear Current Value Register
	FC100_SysTick->RVR = 0U;
}
