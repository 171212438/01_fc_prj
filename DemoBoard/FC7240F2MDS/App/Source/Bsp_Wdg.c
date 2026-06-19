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
    Wdg_174_Instance0_Init(NULL_PTR);
    Wdg_174_Instance0_SetTriggerCondition(50);
}
