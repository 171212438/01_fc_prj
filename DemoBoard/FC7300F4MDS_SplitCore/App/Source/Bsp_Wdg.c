#include "Bsp_Wdg.h"

/************ Global functions *******************/
#ifdef WDG_ISR0_USED
extern ISR(Wdg0_Interrupt_Isr);
void WDOG0_IRQHandler(void)
{
    Wdg0_Interrupt_Isr();
}
#endif

#ifdef WDG_ISR1_USED
extern ISR(Wdg1_Interrupt_Isr);
void WDOG1_IRQHandler(void)
{
    Wdg1_Interrupt_Isr();
}
#endif

void Bsp_Wdg_Init(void)
{
    if (0 == GET_CPU_ID())
    {
        Wdg_174_Instance0_Init(NULL_PTR);
        Wdg_174_Instance0_SetTriggerCondition(50);
#ifdef WDG_ISR0_USED
        IntMgr_EnableInterrupt(WDOG0_IRQn);
#endif
    }
    else if (1 == GET_CPU_ID())
    {
#if (WDG_INSTANCE1 == STD_ON)
        Wdg_174_Instance1_Init(NULL_PTR);
        Wdg_174_Instance1_SetTriggerCondition(50);
#ifdef WDG_ISR1_USED
        IntMgr_EnableInterrupt(WDOG1_IRQn);
#endif
#endif
    }
}
