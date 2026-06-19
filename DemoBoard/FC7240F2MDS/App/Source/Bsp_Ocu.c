#include "Bsp_Ocu.h"

/************ Interrupt Map *******************/
#if (defined OCU_FTU_6_ISR_USED)
extern ISR(OCU_FTU_6_ISR);
void FTU6_IRQHandler(void)
{
    OCU_FTU_6_ISR();
}
#endif

/************ Callback functions *******************/
void Ocu_Notification_channel_0(void)
{
    __asm("nop");
}

/************ Global functions *******************/
void Bsp_Ocu_Init(void)
{
	IntMgr_SetPriority(FTU6_IRQn, 4);
	IntMgr_EnableInterrupt(FTU6_IRQn);

    Ocu_Init(&Ocu_Config);
	Ocu_StartChannel(OcuConf_OcuChannel_OcuChannel_0);
	Ocu_StopChannel(OcuConf_OcuChannel_OcuChannel_0);
    Ocu_DeInit();
}

