#include "Bsp_Icu.h"

/************ Interrupt Map *******************/
#ifdef ICU_PORT_A_ISR_USED
extern ISR(ICU_PORT_A_ISR);
void PORTA_IRQHandler(void)
{
	ICU_PORT_A_ISR();
}
#endif

#ifdef ICU_PORT_D_ISR_USED
extern ISR(ICU_PORT_D_ISR);
void PORTD_IRQHandler(void)
{
	ICU_PORT_D_ISR();
}
#endif

#ifdef ICU_PORT_B_ISR_USED
extern ISR(ICU_PORT_B_ISR);
void PORTB_IRQHandler(void)
{
	ICU_PORT_B_ISR();
}
#endif


/************ Callback functions *******************/
void Icu_Key1_Edge_Detect(void)
{
    __asm("nop");
}

void Icu_Key2_Edge_Detect(void)
{
    __asm("nop");
}

void Icu_Key3_Edge_Detect(void)
{
    __asm("nop");
}

void Bsp_Icu_Init(void)
{

		Icu_Init(&Icu_Config);
		IntMgr_SetPriority(PORTD_IRQn, 5);
		IntMgr_EnableInterrupt(PORTD_IRQn);
		IntMgr_SetPriority(PORTA_IRQn, 4);
		IntMgr_EnableInterrupt(PORTA_IRQn);
		IntMgr_SetPriority(PORTB_IRQn, 4);
		IntMgr_EnableInterrupt(PORTB_IRQn);

		Icu_EnableNotification(IcuConf_IcuChannel_IcuChannel_Key3);
		Icu_EnableEdgeDetection(IcuConf_IcuChannel_IcuChannel_Key3);

		Icu_EnableNotification(IcuConf_IcuChannel_IcuChannel_Key2);
		Icu_EnableEdgeDetection(IcuConf_IcuChannel_IcuChannel_Key2);

		Icu_EnableNotification(IcuConf_IcuChannel_IcuChannel_Key1);
		Icu_EnableEdgeDetection(IcuConf_IcuChannel_IcuChannel_Key1);
}




