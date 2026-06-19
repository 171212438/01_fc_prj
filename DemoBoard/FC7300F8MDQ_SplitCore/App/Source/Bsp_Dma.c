#include "Bsp_Dma.h"

extern ISR(DMA0_Done_Isr);
extern ISR(DMA1_Done_Isr);
extern ISR(DMA2_Done_Isr);
#if ((defined DMA_CHANNEL3_IRQ) && (STD_ON == DMA_CHANNEL3_IRQ))
extern ISR(DMA3_Done_Isr);
#endif
#if ((defined DMA_CHANNEL4_IRQ) && (STD_ON == DMA_CHANNEL4_IRQ))
extern ISR(DMA4_Done_Isr);
#endif
#if ((defined DMA_CHANNEL5_IRQ) && (STD_ON == DMA_CHANNEL5_IRQ))
extern ISR(DMA5_Done_Isr);
#endif
#if ((defined DMA_CHANNEL6_IRQ) && (STD_ON == DMA_CHANNEL6_IRQ))
extern ISR(DMA6_Done_Isr);
#endif
#if ((defined DMA_CHANNEL7_IRQ) && (STD_ON == DMA_CHANNEL7_IRQ))
extern ISR(DMA7_Done_Isr);
#endif
#if ((defined DMA_CHANNEL8_IRQ) && (STD_ON == DMA_CHANNEL8_IRQ))
extern ISR(DMA8_Done_Isr);
#endif

#if(DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
/* PRQA S 3408, 1514 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: It is just for testing or demonstration */
uint32 TlibSrcBuf[6] = {0x1122, 0x3344, 0x5566, 0x7788, 0x99AA, 0xBBCC};
uint32 TlibDesBuf[30] __attribute__((aligned(128)));
uint32 TlibSrcBuf1[6] = {0x1122, 0x3344, 0x5566, 0x7788, 0x99AA, 0xBBCC};
uint32 TlibDesBuf1[30] __attribute__((aligned(128)));
uint32 TlibSrcBuf2[6] = {0x1122, 0x3344, 0x5566, 0x7788, 0x99AA, 0xBBCC};
uint32 TlibDesBuf2[30] __attribute__((aligned(128)));
#ifdef DMA_TEST_CHTOCH
uint32 TlibSrcBuf6[6] = {0x1122, 0x3344, 0x5566, 0x7788, 0x99AA, 0xBBCC};
uint32 TlibDesBuf6[30];
#endif

sint32 s32CFG_SLAST;
sint32 s32CFG_DLAST;
Dma_ChannelType TlibChannelConfig;
Dma_ChannelType TlibChannelConfig6;
uint32 Chl0_cnt;
uint32 Chl1_cnt;
uint16 test_outloopcnt;
uint8 Chl0_flg;
Std_ReturnType Tlib_Dma_InitStatus;
#endif
/* PRQA S 3408, 1514 -- */
/************ Global functions *******************/
#define DMA_START_SEC_CODE
#include "Dma_MemMap.h"
void Tlib_Dma_Channel0_Init(void)
{
    Std_ReturnType ret;
    #if (DMA_TEST_TYPE==MEMCPY)&&(DMA_TEST_SWITCH   == DMA_TEST_SWITCH_ON)
    TlibChannelConfig.u32DmaSADDR = (uint32)((uint32)&TlibSrcBuf[0]);
    TlibChannelConfig.u32DmaDADDR = (uint32)((uint32)&TlibDesBuf[0]);
    TlibChannelConfig.u32DmaNBYTES = 4;
    TlibChannelConfig.u16DmaOuterLoopCounter = 6;
    TlibChannelConfig.eDmaSSIZE = DMA_TRAN_SIZE_4B;
    TlibChannelConfig.eDmaDSIZE = DMA_TRAN_SIZE_4B;
    TlibChannelConfig.s16SrcDataOffset = 4U;
    TlibChannelConfig.s16DestDataOffset = 4U;
    TlibChannelConfig.bDmaSILOE = FALSE;
    TlibChannelConfig.bDmaDILOE = FALSE;
    TlibChannelConfig.s32DmaILOFF = 0;
    TlibChannelConfig.bDmaAutoStopEnable = FALSE;
    TlibChannelConfig.bDmaSrcCircularBufferEn = FALSE;
    TlibChannelConfig.u32DmaSrcCircBufferSize = 0;
    TlibChannelConfig.bDmaDestCircularBufferEn = FALSE;
    TlibChannelConfig.u32DmaDestCircBufferSize = 0;
    /* PRQA S 2982 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
     * Reason: It is just for testing or demonstration */
    ret = Dma_CalculateSrcChannelLastOffset(&TlibChannelConfig, &s32CFG_SLAST);
    ret = Dma_CalculateDesChannelLastOffset(&TlibChannelConfig, &s32CFG_DLAST);
    /* PRQA S 2982 -- */
    TlibChannelConfig.s32DmaSLAST = s32CFG_SLAST;
    TlibChannelConfig.s32DmaDLAST = s32CFG_DLAST;
    ret = Dma_ConfigChannel(DMA_TEST_SW_CHANNEL_ID, &TlibChannelConfig);
    #endif

    #if (DMA_TEST_TYPE==CIRCULARBUFFER)&&(DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
    if (0 == Cpm_HWA_GetCoreId())
    {
        TlibChannelConfig.u32DmaSADDR = (uint32)((uint32)&TlibSrcBuf[0]);
        TlibChannelConfig.u32DmaDADDR = (uint32)((uint32)&TlibDesBuf[0]);
    }
    else if (1 == Cpm_HWA_GetCoreId())
    {
        TlibChannelConfig.u32DmaSADDR = (uint32)((uint32)&TlibSrcBuf1[0]);
        TlibChannelConfig.u32DmaDADDR = (uint32)((uint32)&TlibDesBuf1[0]);
    }
    else
    {
        TlibChannelConfig.u32DmaSADDR = (uint32)((uint32)&TlibSrcBuf2[0]);
        TlibChannelConfig.u32DmaDADDR = (uint32)((uint32)&TlibDesBuf2[0]);
    }

    TlibChannelConfig.u32DmaNBYTES = 12;
    TlibChannelConfig.u16DmaOuterLoopCounter = 2;
    TlibChannelConfig.eDmaSSIZE = DMA_TRAN_SIZE_4B;
    TlibChannelConfig.eDmaDSIZE = DMA_TRAN_SIZE_4B;
    TlibChannelConfig.s16SrcDataOffset = 4U;
    TlibChannelConfig.s16DestDataOffset = 4U;
    TlibChannelConfig.bDmaSILOE = FALSE;
    TlibChannelConfig.bDmaDILOE = FALSE;
    TlibChannelConfig.s32DmaILOFF = 0;
    TlibChannelConfig.bDmaAutoStopEnable = FALSE;
    TlibChannelConfig.bDmaSrcCircularBufferEn = FALSE;
    TlibChannelConfig.u32DmaSrcCircBufferSize = 0;
    TlibChannelConfig.bDmaDestCircularBufferEn = TRUE;
    TlibChannelConfig.u32DmaDestCircBufferSize = 35;
    ret = Dma_CalculateSrcChannelLastOffset(&TlibChannelConfig, &s32CFG_SLAST);
    TlibChannelConfig.s32DmaSLAST = s32CFG_SLAST;
    TlibChannelConfig.s32DmaDLAST = 0;
    if (3 == Cpm_HWA_GetCoreId())
    {
        #ifdef DMA_TEST_SW_CHANNEL_ID_CORE3
        ret = Dma_ConfigChannel(DMA_INSTANCE_1, DMA_TEST_SW_CHANNEL_ID_CORE2, &TlibChannelConfig);
        #endif
    }
    else if (2 == Cpm_HWA_GetCoreId())
    {
    	ret = Dma_ConfigChannel(DMA_INSTANCE_1, DMA_TEST_SW_CHANNEL_ID, &TlibChannelConfig);
    }
    else if (1 == Cpm_HWA_GetCoreId())
	{
		ret = Dma_ConfigChannel(DMA_INSTANCE_0, 1u, &TlibChannelConfig);
	}
    else
    {
        ret = Dma_ConfigChannel(DMA_INSTANCE_0, DMA_TEST_SW_CHANNEL_ID, &TlibChannelConfig);
    }
    #endif
    if (ret == E_NOT_OK)
    {
        Tlib_Dma_InitStatus = E_NOT_OK;
    }
    else
    {
        Tlib_Dma_InitStatus = E_OK;
    }
    #ifdef DMA_TEST_CHTOCH
    /*Dma_SetOuterLinkChannel(0, 6);*/
    Dma_SetInnerLinkChannel(0, DMA_TEST_CHTOCH);
    #endif
}
#ifdef DMA_TEST_CHTOCH
static void Tlib_Dma_Channel6_Init(void)
{
    TlibChannelConfig6.u32DmaSADDR = (uint32)&TlibSrcBuf6[0];
    TlibChannelConfig6.u32DmaDADDR = (uint32)&TlibDesBuf6[0];
    TlibChannelConfig6.u32DmaNBYTES = 4;
    TlibChannelConfig6.u16DmaOuterLoopCounter = 6;
    TlibChannelConfig6.eDmaSSIZE = DMA_TRAN_SIZE_4B;
    TlibChannelConfig6.eDmaDSIZE = DMA_TRAN_SIZE_4B;
    TlibChannelConfig6.u16SrcDataOffset = 4U;
    TlibChannelConfig6.u16DestDataOffset = 4U;
    TlibChannelConfig6.bDmaSILOE = FALSE;
    TlibChannelConfig6.bDmaDILOE = FALSE;
    TlibChannelConfig6.s32DmaILOFF = 0;
    TlibChannelConfig6.bDmaAutoStopEnable = FALSE;
    TlibChannelConfig6.bDmaSrcCircularBufferEn = FALSE;
    TlibChannelConfig6.u32DmaSrcCircBufferSize = 0;
    TlibChannelConfig6.bDmaDestCircularBufferEn = FALSE;
    TlibChannelConfig6.u32DmaDestCircBufferSize = 0;
    /* PRQA S 2982 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
     * Reason: It is just for testing or demonstration */
    (void)Dma_CalculateSrcChannelLastOffset(&TlibChannelConfig6, &s32CFG_SLAST);
    (void)Dma_CalculateDesChannelLastOffset(&TlibChannelConfig6, &s32CFG_DLAST);
    /* PRQA S 2982 -- */
    TlibChannelConfig6.s32DmaSLAST = s32CFG_SLAST;
    TlibChannelConfig6.s32DmaDLAST = s32CFG_DLAST;
    (void)Dma_ConfigChannel(DMA_TEST_SW_CHANNEL_ID6, &TlibChannelConfig6);
}
#endif
void Bsp_Dma_Init(void)
{
    uint8 u8PartitionId = DMA_GET_CPU_ID();
    if (0 == Cpm_HWA_GetCoreId())
    {
        Dma_Init(Dma_pConfig[u8PartitionId]);
        IntMgr_EnableInterrupt(DMA0_IRQn);
        IntMgr_EnableInterrupt(DMA_Error_IRQn);
        #if(DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
        #ifdef DMA_TEST_CHTOCH
        Tlib_Dma_Channel6_Init();
        #endif
        Tlib_Dma_Channel0_Init();
        Dma_StartChannel(DMA_INSTANCE_0, DMA_TEST_SW_CHANNEL_ID);
        #endif
    }
    else if (1 == Cpm_HWA_GetCoreId())
	{
		Dma_Init(Dma_pConfig[u8PartitionId]);
		IntMgr_EnableInterrupt(DMA1_IRQn);
		Tlib_Dma_Channel0_Init();
		Dma_StartChannel(DMA_INSTANCE_0, 1u);
	}
    else if (2 == Cpm_HWA_GetCoreId())
    {
        Dma_Init(Dma_pConfig[u8PartitionId]);
        IntMgr_EnableInterrupt(DMA0_IRQn);
        IntMgr_EnableInterrupt(DMA1_IRQn);
        IntMgr_EnableInterrupt(DMA2_IRQn);
        IntMgr_EnableInterrupt(DMA3_IRQn);
        IntMgr_EnableInterrupt(DMA4_IRQn);
        Tlib_Dma_Channel0_Init();
        Dma_StartChannel(DMA_INSTANCE_1, DMA_TEST_SW_CHANNEL_ID);
    }
}

void Bsp_Dma_20ms_Task_Event(void)
{
    #if (DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
    if (3 == Cpm_HWA_GetCoreId())
    {
        #ifdef DMA_TEST_SW_CHANNEL_ID_CORE2
        Dma_StartChannel(DMA_TEST_SW_CHANNEL_ID_CORE2);
        test_outloopcnt = Dma_GetCurrentOuterLoopCounter(DMA_TEST_SW_CHANNEL_ID_CORE2);
        #endif
    }
    else if (2 == Cpm_HWA_GetCoreId())
    {
    	Dma_StartChannel(DMA_INSTANCE_1, DMA_TEST_SW_CHANNEL_ID);
    	test_outloopcnt = Dma_GetCurrentOuterLoopCounter(DMA_INSTANCE_1, DMA_TEST_SW_CHANNEL_ID);
    }
    else if (1 == Cpm_HWA_GetCoreId())
	{
		Dma_StartChannel(DMA_INSTANCE_0, 1u);
		test_outloopcnt = Dma_GetCurrentOuterLoopCounter(DMA_INSTANCE_0, 1u);
	}
    else
    {
        Dma_StartChannel(DMA_INSTANCE_0, DMA_TEST_SW_CHANNEL_ID);
        test_outloopcnt = Dma_GetCurrentOuterLoopCounter(DMA_INSTANCE_0, DMA_TEST_SW_CHANNEL_ID);
    }

    #endif
}
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 * Reason: It is just for testing or demonstration */
#if ((defined DMA_CHANNEL0_IRQ) && (STD_ON == DMA_CHANNEL0_IRQ))
void DMA0_IRQHandler(void)
{
    DMA0_Done_Isr();
}
#endif /* DMA_CHANNEL0_IRQ */

#if ((defined DMA_CHANNEL1_IRQ) && (STD_ON == DMA_CHANNEL1_IRQ))
void DMA1_IRQHandler(void)
{
    DMA1_Done_Isr();
}
#endif /* DMA_CHANNEL1_IRQ */

#if ((defined DMA_CHANNEL2_IRQ) && (STD_ON == DMA_CHANNEL2_IRQ))
void DMA2_IRQHandler(void)
{
    DMA2_Done_Isr();
}
#endif /* DMA_CHANNEL2_IRQ */

#if ((defined DMA_CHANNEL3_IRQ) && (STD_ON == DMA_CHANNEL3_IRQ))
void DMA3_IRQHandler(void)
{
    DMA3_Done_Isr();
}
#endif /* DMA_CHANNEL3_IRQ */

#if ((defined DMA_CHANNEL4_IRQ) && (STD_ON == DMA_CHANNEL4_IRQ))
void DMA4_IRQHandler(void)
{
    DMA4_Done_Isr();
}
#endif /* DMA_CHANNEL4_IRQ */

#if ((defined DMA_CHANNEL5_IRQ) && (STD_ON == DMA_CHANNEL5_IRQ))
void DMA5_IRQHandler(void)
{
    DMA5_Done_Isr();
}
#endif /* DMA_CHANNEL5_IRQ */

#if ((defined DMA_CHANNEL6_IRQ) && (STD_ON == DMA_CHANNEL6_IRQ))
void DMA6_IRQHandler(void)
{
    DMA6_Done_Isr();
}
#endif /* DMA_CHANNEL6_IRQ */

#if ((defined DMA_CHANNEL7_IRQ) && (STD_ON == DMA_CHANNEL7_IRQ))
void DMA7_IRQHandler(void)
{
    DMA7_Done_Isr();
}
#endif /* DMA_CHANNEL7_IRQ */

#if ((defined DMA_CHANNEL8_IRQ) && (STD_ON == DMA_CHANNEL8_IRQ))
void DMA8_IRQHandler(void)
{
    DMA8_Done_Isr();
}
#endif /* DMA_CHANNEL8_IRQ */

#if ((defined DMA_CHANNEL_ERROR_IRQ) && (STD_ON == DMA_CHANNEL_ERROR_IRQ))
void DMA_Error_IRQHandler(void)
{
    DMA_Error_Isr();
}
#endif

void Dma_Channel0_CompleteIsr(void)
{
    #if(DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
    Chl0_cnt++;
    #endif
}

void Dma_Channel1_CompleteIsr(void)
{
    #if(DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
    Chl1_cnt++;
    #endif
}

void Dma_Channel0_ErrorIsr(void)
{
    #if(DMA_TEST_SWITCH == DMA_TEST_SWITCH_ON)
    Chl0_flg++;
    #endif
}
/* PRQA S 3408 -- */

#define DMA_STOP_SEC_CODE
#include "Dma_MemMap.h"
