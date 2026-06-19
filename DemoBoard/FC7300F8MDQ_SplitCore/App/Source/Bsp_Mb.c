#include "Bsp_Mb.h"

static uint8 s_u8ReqFlag = 0;
static uint8 s_u8RcvMsgFlag = 0;

__attribute__((weak)) void Crypto_Cmd_Channel_DoneCb(Mb_ChannelType Channel)
{

}

__attribute__((weak)) void Crypto_Cancel_Channel_DoneCb(Mb_ChannelType Channel)
{

}



void Mb_Channel_RequestCb(Mb_ChannelType Channel, Mb_CoreType MasterCore, uint32 u32Data0, uint32 u32Data1)
{
	uint32 u32CoreID = Cpm_HWA_GetCoreId();
//	DEBUG_INFO("CORE %d: CHANNEL%d request from CORE %d DATA0: %X DATA1: %X!\r\n",
//			   u32CoreID, Channel, MasterCore, u32Data0, u32Data1);
	s_u8ReqFlag = 1;
}

void Mb_Channel_DoneCb(Mb_ChannelType Channel)
{
	uint32 u32CoreID = Cpm_HWA_GetCoreId();
//	DEBUG_INFO("CORE %d: CHANNEL%d done\r\n",
//			   u32CoreID, Channel);
}

void Mb_Channel2_ReceivedCb(void)
{
	s_u8RcvMsgFlag = 1;
}

void Mb_Channel3_ReceivedCb(void)
{
	s_u8RcvMsgFlag = 1;
}

extern ISR(MAILBOX_ISR);
void MB_IRQHandler(void)
{
	MAILBOX_ISR();
}

static uint8 s_aSendBuffer[32];
void Bsp_Mb_Init(void)
{
	//extern const Mb_ConfigType Mb_Config;
	uint32 u32Loop;
	for(u32Loop = 0; u32Loop < 32; u32Loop++)
	{
		s_aSendBuffer[u32Loop] = u32Loop;
	}
	Mb_Init(&Mb_Config);
	IntMgr_SetPriority(MB_IRQn, 5);
	IntMgr_EnableInterrupt(MB_IRQn);
}

void Bsp_Mb_1s_Task_Event(void)
{
	uint32 u32CoreID = Cpm_HWA_GetCoreId();
	if (0 == u32CoreID)
	{
		static uint8 u8Flag = 0;
		static uint32 u32Data = 0;
		if (u8Flag++ & 1)
		{
			Mb_SendData(0, MB_CORE_2, u32Data, u32Data);
		}
		else
		{
			Mb_SendData(0, MB_CORE_1, u32Data, u32Data);
		}
		u32Data++;
		Mb_SendMessage(2, s_aSendBuffer, sizeof(s_aSendBuffer));
		uint32 u32MsgCout = Mb_GetMessageCount(2);
		Mb_MessageQueueStateType eState = Mb_GetMessageQueueState(2);
//		DEBUG_INFO("CORE %d: Message Count: %d, Message State: %d\n",
//					u32CoreID, u32MsgCout, eState);
	}
	else if (1 == u32CoreID)
	{

	}
	else if (2 == u32CoreID)
	{

	}
}

static uint8 s_aRcvBuffer[32];
void Bsp_Mb_100ms_Task_Event(void)
{
	static uint32 u32Data = 0;
	uint32 u32CoreID = Cpm_HWA_GetCoreId();
	if (0 == u32CoreID)
	{

	}
	else if (1 == u32CoreID)
	{
		if (s_u8ReqFlag)
		{
			s_u8ReqFlag = 0;
			Mb_SendData(1, MB_CORE_0, u32Data, u32Data);
			u32Data++;
		}

		if (s_u8RcvMsgFlag)
		{
			s_u8RcvMsgFlag = 0;
			uint32 u32Loop;
			for(u32Loop = 0; u32Loop < 32; u32Loop++)
			{
				s_aRcvBuffer[u32Loop] = u32Loop;
			}
			Mb_GetMessage(2, s_aRcvBuffer, sizeof(s_aRcvBuffer));
			boolean bSucc = TRUE;
			for(u32Loop = 0; u32Loop < 32; u32Loop++)
			{
				if(s_aRcvBuffer[u32Loop] != u32Loop)
				{
					bSucc = FALSE;
					break;
				}
			}
			if (TRUE == bSucc)
			{
//				DEBUG_INFO("CORE %d: Receive Message Success\r\n", u32CoreID);
			}
			else
			{
//				DEBUG_INFO("CORE %d: Receive Message Failed\r\n", u32CoreID);
			}
		}
	}
	else if (2 == u32CoreID)
	{
		if (s_u8ReqFlag)
		{
			Mb_SendData(1, MB_CORE_0, u32Data, u32Data);
			u32Data++;
			s_u8ReqFlag = 0;
		}
	}
}

