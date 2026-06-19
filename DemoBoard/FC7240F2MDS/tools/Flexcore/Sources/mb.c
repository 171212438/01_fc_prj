#include "mb.h"

#define EXAMPLE_CHANNEL				0u
#define EXAMPLE_RESPONSE_CHANNEL	1u
#define USE_INTERRUPT				1

#if USE_INTERRUPT == 1
static void request_callback(MB_ReceiveType *pReceive);
static void done_callback(uint32_t u32ChannelMask);
void Mailbox_IRQHandler(void)
{
	MB_IRQProcess();
}
#endif

static MB_ReceiveType s_tRequest;
#if USE_INTERRUPT == 1
static volatile uint32_t s_u32WaitFlag = 0;
static volatile uint32_t s_u32WaitDoneFlag = 0;
static void request_callback(MB_ReceiveType *pReceive)
{
	s_tRequest.u8Channel = pReceive->u8Channel;
	s_tRequest.u8MasterCoreIndex = pReceive->u8MasterCoreIndex;
	s_tRequest.u8ChannelStatus = pReceive->u8ChannelStatus;
	s_tRequest.aData[0] = pReceive->aData[0];
	s_tRequest.aData[1] = pReceive->aData[1];
	s_u32WaitFlag = 1;
}

static void done_callback(uint32_t u32ChannelMask)
{
	s_u32WaitDoneFlag = 1;
}
#endif

void Bsp_MB_Init(void)
{
	MB_InitType tInitCfg;
	tInitCfg.u32EventMask = MB_EVENT_REQ(EXAMPLE_CHANNEL) | MB_EVENT_DONE(EXAMPLE_RESPONSE_CHANNEL);
	tInitCfg.pDoneCallback = NULL;
#if USE_INTERRUPT == 1
	tInitCfg.u32IntrMask = MB_EVENT_REQ(EXAMPLE_CHANNEL) | MB_EVENT_DONE(EXAMPLE_RESPONSE_CHANNEL);
	tInitCfg.pRequestCallback = request_callback;
	tInitCfg.pDoneCallback = done_callback;
#else
	tInitCfg.u32IntrMask = MB_EVENT_NONE;
	tInitCfg.pRequestCallback = NULL;
	tInitCfg.pDoneCallback = NULL;
#endif
	MB_Init(&tInitCfg);
#if USE_INTERRUPT == 1
	IntMgr_EnableInterrupt(MAILBOX_IRQn);
#endif
}

void Bsp_MB_Receive(uint32_t *pData0, uint32_t *pData1)
{
#if USE_INTERRUPT == 1
	while(0 == s_u32WaitFlag);
	s_u32WaitFlag = 0;
#else
	s_tRequest.u8Channel = EXAMPLE_CHANNEL;
	while(MB_STATUS_SUCCESS != MB_ReceiveChannel(&s_tRequest));
#endif
	*pData0 = s_tRequest.aData[0];
	*pData1 = s_tRequest.aData[1];
}

void Bsp_MB_Done(void)
{
	MB_DoneChannel(s_tRequest.u8Channel, MB_CORE_MASK(s_tRequest.u8MasterCoreIndex));
}

void Bsp_MB_Send(uint32_t u32Data0, uint32_t u32Data1)
{
	MB_RequestType tRequest;
	tRequest.u8Channel = EXAMPLE_RESPONSE_CHANNEL;
	tRequest.u8RequestMask 	= MB_CORE_MASK_CORE_0;
	tRequest.u8DoneMasterIndex = MB_CORE_INDEX_CORE_0;
	tRequest.u8DoneMask 		= MB_CORE_MASK_HSM;
	tRequest.u8AutoReleaseFlag = MB_CORE_MASK_HSM;
	tRequest.aData[0] = u32Data0;
	tRequest.aData[1] = u32Data1;
	MB_SendRequest(&tRequest);
}

void Bsp_MB_WaitDone(void)
{
#if USE_INTERRUPT == 1
	while(0 == s_u32WaitDoneFlag);
	s_u32WaitDoneFlag = 0;
#else
	uint32_t u32DoneMask = 0;
	while(!u32DoneMask)
	{
		if(MB_STATUS_SUCCESS !=
				MB_PollDone(MB_CHANNEL_MASK(EXAMPLE_CHANNEL), &u32DoneMask))
		{
			while(1);
		}
	}
#endif
}
