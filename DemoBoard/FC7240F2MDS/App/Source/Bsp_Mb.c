#include "Bsp_Mb.h"
#include "Mb_RegOps.h"

void Mb_Channel1_RequestCb(Mb_ChannelType Channel, Mb_CoreType MasterCore, uint32 u32Data0, uint32 u32Data1)
{
	DEBUG_INFO("CHANNEL%d request from CORE %d DATA0: %X DATA1: %X!\r\n",
			   Channel, MasterCore, u32Data0, u32Data1);
}

void Mb_Channel0_DoneCb(Mb_ChannelType Channel)
{
	DEBUG_INFO("CHANNEL%d done\r\n", Channel);
}

extern ISR(MAILBOX_ISR);
void MB_IRQHandler(void)
{
	MAILBOX_ISR();
}

void Bsp_Mb_Init(void)
{
//	*(volatile uint32 *)(0x40014094u) |= 0x10u;
//	*(volatile uint32 *)(0x40014068u) |= 0x040000;
	Mb_Init(&Mb_Config);
	IntMgr_SetPriority(MB_IRQn, 5);
	IntMgr_EnableInterrupt(MB_IRQn);
//	while(0 == MB_HWA_GetFlagMask(1, MB_EVENT_REQ(0)));
}

void Bsp_Mb_1s_Task_Event(void)
{

}
