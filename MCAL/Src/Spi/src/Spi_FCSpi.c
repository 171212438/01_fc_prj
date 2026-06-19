/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Spi_FCSpi.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SPi - FCSpi low-level driver implementations.
 *   @details FCSpi low-level driver implementations.
 *
 *   @addtogroup SPI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SPI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2023    QXW0071       N/A          SPI Initial Version
*   0.2.0       03/10/2023    QXW0071       N/A          Add support for multi-core
*   0.3.0       19/10/2023    QXW0071       N/A          Optimize code to comply with Misra-C rules
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous
*                                                        and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/* PRQA S 2071,5087 EOF
 * REASON: Specify the segment where the data is placed
 */

/* PRQA S 488 EOF #Misra-C:2012: Rule-18.4 Performing pointer arithmetic.
 * REASON:The pointer arithmetic is necessary
 */
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Mcal.h"
#include "Spi.h"
#include "Spi_FCSpi.h"
#include "Spi_RegOps.h"

#if (SPI_DEM_ENABLE == STD_ON)
#include "Dem.h"
#endif

#if (SPI_DMA_USED == STD_ON)
#include "CDD_Dma.h"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#define FCSPI_DMA_MAX_CHTRGEN_BLC_CNT (0x7FFFu)

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
/**
 * @brief          DMA channel attributes variable.
 * @details        Store configuration of Dma channels used by Spi Tx/Rx.
 *
 */
SPI_DATA_SECTION static Dma_ChannelType Spi_DmaChannelAttr;
#endif /* SPI_DMA_USED == STD_ON */

#if (SPI_SYNC_DRIVER == STD_ON)
/**
 * @brief    Internal structure keeping a state of transfer process.
 * @details  Internal structure keeping a state of transfer process
 *           used by Spi_LL_SyncTransfer()
 */
SPI_DATA_SECTION static SPI_SyncStateType SPI_SyncTransmitState[SPI_HW_MODULE_MAX_COUNT];
#endif
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Spi_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define SPI_START_SEC_CONST_32
#include "Spi_MemMap.h"

/**
 * @brief Array indicating each SPI instance's  base address.
 */
/* PRQA S 1504 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit
 * Reason: The object "g_Spi_aInstanceBaseAddrs" is also used in other file, but it is hidden by macro
 */
SPI_DATA_SECTION const uint32 g_Spi_aInstanceBaseAddrs[SPI_MAX_HW_UNITS] = {
    FCSPI0_BASEADDR, FCSPI1_BASEADDR, FCSPI2_BASEADDR, FCSPI3_BASEADDR,
    FCSPI4_BASEADDR, FCSPI5_BASEADDR, FCSPI6_BASEADDR, FCSPI7_BASEADDR
};
/* PRQA S 1504 -- */
#define SPI_STOP_SEC_CONST_32
#include "Spi_MemMap.h"

/*======================================================================================================================
                                                GLOBAL VARIABLES
======================================================================================================================*/

#define SPI_START_SEC_VAR_NO_INIT_32
#include "Spi_MemMap.h"

/**
 * @brief   Variable used to store useless data read from RX_FIFO
 *
 */
SPI_DATA_SECTION static volatile uint32 s_Spi_u32IgnoredReadData;

#define SPI_STOP_SEC_VAR_NO_INIT_32
#include "Spi_MemMap.h"

/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 *  0791:Macro identifier does not differ from other macro identifier(s) within the specified number
 *  of significant characters.
 *  REASON:These macros are distinct.
 */
#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON)) */
#include "Spi_MemMap.h"

/**
 * @brief   Structure holding parameters indicating device state in run-time.
 *
 */
SPI_DATA_SECTION SPI_DeviceStateType g_Spi_aDeviceState[SPI_HW_MODULE_MAX_COUNT];

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON)) */
#include "Spi_MemMap.h"

/* PRQA S 0791 -- */

/*======================================================================================================================
*                                               LOCAL FUNCTION PROTOTYPES
======================================================================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
LOCAL_INLINE void     Spi_LL_Job_RestartDmaRxTransfer(SPI_DeviceStateType *pDevState);
LOCAL_INLINE void     Spi_LL_Job_RestartDmaTxTransfer(SPI_DeviceStateType *pDevState);
SPI_TEXT_SECTION void Spi_LL_Channel_InitDmaRx(SPI_DeviceStateType *pDevState,
                                               Spi_ChannelType      Channel);
SPI_TEXT_SECTION void Spi_LL_Channel_InitDmaTx(SPI_DeviceStateType *pDevState,
                                               Spi_ChannelType      Channel);
LOCAL_INLINE void Spi_LL_DmaIrqCfg(const SPI_DeviceStateType *pDevState, Spi_AsyncModeType AsyncMode);
SPI_TEXT_SECTION void Spi_LL_DmaInit(const SPI_DeviceStateType *pDevState);
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION void        Spi_LL_Pseudo_Isr(SPI_DeviceStateType *pDevState,
                                               uint32               u32IsrStatusTX,
                                               uint32               u32IsrStatusRX);
SPI_TEXT_SECTION static void Spi_LL_Job_SendDataToFifo(SPI_DeviceStateType *pDevState);
LOCAL_INLINE void            Spi_LL_Job_GetDataInFifo(SPI_DeviceStateType *pDevState);
SPI_TEXT_SECTION static void Spi_LL_Channel_InitFifoRx(SPI_DeviceStateType *pDevState,
                                                       Spi_ChannelType      Channel);
SPI_TEXT_SECTION static void Spi_LL_Channel_InitFifoTx(SPI_DeviceStateType *pDevState,
                                                       Spi_ChannelType      Channel);
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
LOCAL_INLINE void              Spi_LL_Channel_InitFifoTx_Fast(SPI_DeviceStateType *pDevState,
                                                              Spi_ChannelType      Channel);
LOCAL_INLINE void              Spi_LL_Channel_InitFifoRx_Fast(SPI_DeviceStateType *pDevState,
                                                              Spi_ChannelType      Channel);
SPI_TEXT_SECTION static void   Spi_LL_Job_SendDataToFifo_Fast(SPI_DeviceStateType *pDevState);
SPI_TEXT_SECTION static uint32 Spi_LL_AdjustDataInWordBeforeSend(
    const Spi_DataBufferType  *pDataBufferTx,
    const Spi_NumberOfDataType SendBytesCnt,
    uint32                     u32TR_Ctrl);
SPI_TEXT_SECTION static void Spi_LL_AdjustDataInWordAfterReceive(
    uint32                     u32RxData,
    Spi_DataBufferType        *pDataBufferRx,
    const Spi_NumberOfDataType ReceiveBytesCnt,
    uint32                     u32TR_Ctrl);
LOCAL_INLINE void Spi_LL_Job_GetDataInFifo_Fast(SPI_DeviceStateType *pDevState);
#endif
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_SendData(SPI_SyncStateType *pSyncTransState);
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_GetData(SPI_SyncStateType *pSyncTransState);
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_TransferOneJob(SPI_SyncStateType *pSyncTransState,
                                                                  uint8 SpiCoreID);
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_TransferOneJob_Fast(
    SPI_SyncStateType *pSyncTransState,
    uint8              SpiCoreID);
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_SendData_Fast(SPI_SyncStateType *pSyncTransState,
                                                                 const Spi_ChnlCfgType *pcChnlCfgTX);
SPI_TEXT_SECTION static uint32         Spi_LL_AdjustDataInWordBeforeSend(
            const Spi_DataBufferType  *pDataBufferTx,
            const Spi_NumberOfDataType SendBytesCnt,
            uint32                     u32TR_Ctrl);
SPI_TEXT_SECTION static void Spi_LL_AdjustDataInWordAfterReceive(
    uint32                     u32RxData,
    Spi_DataBufferType        *pDataBufferRx,
    const Spi_NumberOfDataType ReceiveBytesCnt,
    uint32                     u32TR_Ctrl);
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_GetData_Fast(SPI_SyncStateType *pSyncTransState,
                                                                const Spi_ChnlCfgType *pcChnlCfgRX);
#endif
#endif

/*==============================================================================================
*                                      LOCAL FUNCTIONS
==============================================================================================*/

/**
 * @brief   Initialize FCSPI unit in low level.
 * @details Initialize Spi Hardware module with configuration information.
 *
 * @param[in]      tVirHwUnit      Specifies which FCSPI peripheral is used
 *
 */
SPI_TEXT_SECTION void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)
{
    const Spi_DeviceAttrType *pcExDevAttrsCfg;
    const Spi_HwUnitCfgType  *pcHwCfg;
    const Spi_JobCfgType     *pcJobCfg;
    SPI_DeviceStateType      *pDevState;
    uint32                    u32JobIdx;
    uint32                    u32CFGR1;
    uint8                     u8HwIdx;

    /* Get FCSPI Hw instances */
    pDevState = &g_Spi_aDeviceState[tVirHwUnit];

    pcHwCfg                = Spi_apxSpiConfigPtr[SpiCoreID]->HWUnitConfig[tVirHwUnit].HwUnitCfg;
    pDevState->pcHwUnitCfg = pcHwCfg;
    /* Initialize Poll request flag */
    pDevState->u8PollReqFlag = 0u;

    /* Peripheral Registers */
    u8HwIdx                       = pcHwCfg->u8HwInstIdx;
    pDevState->u32FCSPIHwBaseAddr = FCSPI_IDX2BASEADDR_U32(u8HwIdx);
    /*Set default active state of all PCS to low level*/
    u32CFGR1 = (FCSPI_CFG1_ALL_PCS_ACTIVE_LOW_U32);

    /* Combine attributes of all the ExDevices that share the same SPI instance,to get a integrated
       CFGR1, than write the final CFGR1 to corresponding SPI instance's register */
    u32JobIdx = 0u;
    while (u32JobIdx <= (uint32)(Spi_apxSpiConfigPtr[SpiCoreID]->tSpiMaxValidJob))
    {
        pcJobCfg = Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[u32JobIdx].JobCfg;

        if (NULL_PTR != pcJobCfg)
        {
            if (tVirHwUnit != pcJobCfg->tVirHwUnitIdx)
            {
                /* Empty */
            }
            else
            {
                pcExDevAttrsCfg =
                    Spi_apxSpiConfigPtr[SpiCoreID]->ExDeviceConfig[pcJobCfg->tExternalDev].DeviceAttrsCfg;
                u32CFGR1 = (uint32)(u32CFGR1 | (pcExDevAttrsCfg->u32CFGR1));
            }
        }
        u32JobIdx++;
    }

    /* write reg CFG1 */
    u32CFGR1 = u32CFGR1 & FCSPI_CFG1_RWBITS_MASK_U32;
    FCSPI_HWA_WriteCFG1((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, u32CFGR1);

#if ((SPI_ASYNC_DRIVER == STD_ON) && (SPI_DMA_USED == STD_ON))
    if (1u == pcHwCfg->bUseDma)
    {
        /* Enable Tx/Rx Dma of Spi Hw unit */
        FCSPI_HWA_WriteDMA_EN((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                              (uint32)(FCSPI_DMA_EN_RFDE_MASK_U32 | FCSPI_DMA_EN_TFDE_MASK_U32));
        /* initialize DMA CFGs for Tx channel and Rx channel */
        Spi_LL_DmaInit(pDevState);
    }
#endif /* (SPI_ASYNC_DRIVER == STD_ON) && (SPI_DMA_USED == STD_ON) */

    /* Enable SPI and will work normally in Debug mode.
       If in slave mode, The SPI enablement is performed in the Spi_LL_JobTransfer instead here. */
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    if (SPI_SLAVE == pcHwCfg->eSpiHwUnitMode)
    {
        /* clear reg INT_EN bit */
        FCSPI_HWA_WriteCTRL((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, FCSPI_CTRL_DBG_EN_U32);
    }
    else
#endif
    {
        FCSPI_HWA_WriteCTRL((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                            FCSPI_CTRL_M_EN_U32 | FCSPI_CTRL_DBG_EN_U32);
    }
}

/**
 * @brief   De-initialize FCSPI Hw unit.
 *
 * @details This function de-initializes all configured values in the CTRL register.
 *
 * @param[in]      tVirHwUnit      Specifies which FCSPI peripheral is used
 */
SPI_TEXT_SECTION void Spi_LL_DeInit(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID)
{
    const Spi_HwUnitCfgType *pcHwCfg;
    uint8                    u8HwInstIdx;

    /* Get physical device handler */
    pcHwCfg = Spi_apxSpiConfigPtr[SpiCoreID]->HWUnitConfig[tVirHwUnit].HwUnitCfg;

    /* Pointer to peripheral registers */
    u8HwInstIdx = pcHwCfg->u8HwInstIdx;

    FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                               FCSPI_INT_EN_RWBITS_MASK_U32);
    FCSPI_HWA_ClearDMAEnableRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                   (FCSPI_DMA_EN_RFDE_MASK_U32 | FCSPI_DMA_EN_TFDE_MASK_U32));

    FCSPI_HWA_WriteCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx), FCSPI_CTRL_SW_RST_U32);
    /* write reg CTRL */
    FCSPI_HWA_WriteCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx), FCSPI_CTRL_RESET_U32);
}

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief     IRQ configure functions.
 * @details   Activate/deactivate TX_FIFO_Interrupt , RX_FIFO_Interrupt for async hw according to
 *            the driver operation mode (polling or interrupt).
 * @param[in]      tVirHwUnit        Specifies which FCSPI peripheral is used.
 * @param[in]      AsyncMode         Specifies the async mode of this Spi Hw unit (polling or
 *                                   interrupt).
 *
 * @pre       Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 *
 */
SPI_TEXT_SECTION void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode)
{
    SPI_DeviceStateType     *pDevState   = &g_Spi_aDeviceState[tVirHwUnit];
    const Spi_HwUnitCfgType *pcHwCfg     = pDevState->pcHwUnitCfg;
    uint8                    u8HwInstIdx = pcHwCfg->u8HwInstIdx;

    /* set the async mode for the hw */
    pDevState->eAsyncMode = AsyncMode;

    /* activate/deactivate TDF, RDF interrupts for Async HWUnits */
    if (SPI_HW_UNIT_ASYNC_U8 == pcHwCfg->u8SyncOrAsync)
    {
#if (SPI_DMA_USED == STD_ON)
        if (1u == pcHwCfg->bUseDma)
        {
            Spi_LL_DmaIrqCfg(pDevState, AsyncMode);
        }
#endif

        if (SPI_INTERRUPT_MODE == AsyncMode)
        {
#if (SPI_DMA_USED == STD_ON)
            if (1u == pcHwCfg->bUseDma)
            {
                /* clear reg INT_EN bit */
                FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                           FCSPI_INT_EN_RFIE_MASK_U32);
            }
            else
#endif

            {
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
                if (SPI_SLAVE == pcHwCfg->eSpiHwUnitMode)
                {
                    /* clear reg INT_EN bit */
                    FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                               FCSPI_INT_EN_RFIE_MASK_U32);
                }
                else
#endif

                {
                    /* set reg INT_EN bit */
                    FCSPI_HWA_SetIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                             FCSPI_INT_EN_RFIE_MASK_U32);
                }
            }
        }
        else
        {
            /* clear reg INT_EN bit*/
            FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                       FCSPI_INT_EN_RFIE_MASK_U32);
        }
        /* clear reg INT_EN bit*/
        FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                   FCSPI_INT_EN_TFIE_MASK_U32);
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief      IRQ polling functions.
 * @details    Configures DMA unit to detect received data via
 *             interrupt or by polling a bit in the INT_EN register.
 *
 * @param[in]  tVirHwUnit     Specifies which FCSPI peripheral is used
 *
 * @pre        Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 *
 */
SPI_TEXT_SECTION void Spi_LL_IrqPoll(Spi_HWUnitType tVirHwUnit)
{
    SPI_DeviceStateType *pDevState;
    uint32               u32TransStat = 0u;
#if (SPI_DMA_USED == STD_ON)
    const Spi_HwUnitCfgType *pcHwCfg;
#endif

    pDevState = FCSPI_HWUNIT2FCSPI(tVirHwUnit);

    if ((SPI_HW_UNIT_ASYNC_U8 == pDevState->pcHwUnitCfg->u8SyncOrAsync) &&
        (SPI_POLLING_MODE == pDevState->eAsyncMode))
    {
#if (SPI_DMA_USED == STD_ON)
        pcHwCfg = pDevState->pcHwUnitCfg;
#endif
        /* Set poll request flag */
        pDevState->u8PollReqFlag = 1u;

#if (SPI_DMA_USED == STD_ON)
        if (1u == pcHwCfg->bUseDma)
        {
            if (0u == Dma_CheckIfTransferCompleted(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel))
            {
                /* Empty */
            }
            else
            {
                /* Set poll RX request flag */
                pDevState->u32PollRXReqFlag = 1u;
                if (1u == pDevState->u8PollReqFlag)
                {
                    Dma_ClearDoneFlag(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel);
                    Spi_LL_IsrDmaRx(pDevState);
                    /* Clear poll request flag */
                    pDevState->u8PollReqFlag = 0u;
                }
            }

            if (0u == Dma_CheckIfTransferCompleted(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel))
            {
                /* Empty */
            }
            else
            {

                /* Set poll TX request flag */
                pDevState->u32PollTXReqFlag = 1u;
                if (1u == pDevState->u8PollReqFlag)
                {
                    Dma_ClearDoneFlag(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel);
                    Spi_LL_IsrDmaTx(pDevState);
                    /* Clear poll request flag */
                    pDevState->u8PollReqFlag = 0u;
                }
                else
                {
                    /* Empty */
                }
            }
        }
        else
#endif /* (SPI_DMA_USED == STD_ON) */

        {
            /* read reg STATUS */
            u32TransStat = FCSPI_HWA_GetStatus((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
            pDevState->u32PollTXReqFlag = u32TransStat & FCSPI_STATUS_TX_FF_MASK_U32;
            pDevState->u32PollRXReqFlag = u32TransStat & FCSPI_STATUS_RX_FF_MASK_U32;
            if (1u == pDevState->u8PollReqFlag)
            {
                if ((0u != pDevState->u32PollTXReqFlag) || (0u != pDevState->u32PollRXReqFlag))
                {
                    /* Emulate IRQ in FIFO mode */
                    Spi_LL_IsrFifoRx(pDevState, pDevState->pcHwUnitCfg->u8HwInstIdx);
                }
                else
                {
                    /* Empty */
                }
                /* Clear poll request flag */
                pDevState->u8PollReqFlag = 0u;
            }
        }
    }
    else
    {
        /* Empty */
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

/**
 * @brief   This function is called by DMA ISR for Rx DMA channels.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the FCSPI
 *          peripherals
 *
 * @param[in]     pDevState     Specifies which FCSPI peripheral is used
 *
 * @pre  Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 *       and SPI_DMA_USED must be STD_ON
 *
 */

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
SPI_TEXT_SECTION void Spi_LL_IsrDmaTx(SPI_DeviceStateType *pDevState)
{
    Spi_AsyncModeType eAsyncMode   = pDevState->eAsyncMode;
    uint32            u32IsrStatus = (uint32)FALSE;
    uint32            u32TRCTRL    = pDevState->u32CurFrameTRCTRL;

    if (SPI_POLLING_MODE == eAsyncMode)
    {
        /* Operation mode is SPI_POLLING_MODE: set u8IsrStatus to poll TX request flag*/
        u32IsrStatus = (uint8)pDevState->u32PollTXReqFlag;
        /* Clear poll TX request flag */
        pDevState->u32PollTXReqFlag = (uint8)FALSE;
    }
    else
    {
        /* Operation mode is SPI_INTERRUPT_MODE: set u8IsrStatus to enabled*/
        u32IsrStatus = (uint8)TRUE;
    }

    /* Check if a poll request was made or if the operation mode is SPI_INTERRUPT_MODE */
    if (0u != u32IsrStatus)
    {
        if (0u != pDevState->tLeftDataFrameCnt)
        {
            /* Channel not finished => update TX pointers */
            Spi_LL_Job_RestartDmaTxTransfer(pDevState);
        }
        else
        {
            /* reached the end of channel => move to the next channel */
            if (0u != pDevState->tLeftChnlsTX)
            {
                FCSPI_HWA_ClearDMAEnableRegBit((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                                               FCSPI_DMA_EN_TFDE_MASK_U32);
                /* Increase Channel indexes */
                pDevState->tLeftChnlsTX--;

                pDevState->pcCurChnlIdxPointerTx++;

                /* prepare next channel transmission */
                Spi_LL_Channel_InitDmaTx(pDevState, *(pDevState->pcCurChnlIdxPointerTx));
                FCSPI_HWA_SetDmaEn((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                                   FCSPI_DMA_EN_TFDE_MASK_U32);
            }
            else
            {
                /* clear the CS assertion directly into the next TX frame */
                u32TRCTRL &= ~(FCSPI_TRCTRL_CONT_EN_U32 | FCSPI_TRCTRL_CONT_GO_U32);

                /* write reg TR_CTRL */
                FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr),
                                         (u32TRCTRL & FCSPI_TRCTRL_RWBITS_MASK_U32));
            }
        }
    }
    else
    {
        /*No poll request*/
        /* Empty */
    }
}
#endif /* ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON)) */

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
/**
 * @brief   This function is called by DMA ISR for Rx DMA channels.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the FCSPI
 *          peripherals
 *
 * @param[in]     pDevState     Specifies which FCSPI peripheral is used
 *
 * @pre  Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 *       and SPI_DMA_USED must be STD_ON
 *
 */
SPI_TEXT_SECTION void Spi_LL_IsrDmaRx(SPI_DeviceStateType *pDevState)
{
    Spi_AsyncModeType eAsyncMode   = pDevState->eAsyncMode;
    uint8             u32IsrStatus = (uint8)FALSE;

    if (SPI_POLLING_MODE == eAsyncMode)
    {
        /* Operation mode is SPI_POLLING_MODE: set u8IsrStatus to poll RX request flag*/
        u32IsrStatus = (uint8)pDevState->u32PollRXReqFlag;
        /* Clear poll RX request flag */
        pDevState->u32PollRXReqFlag = (uint8)FALSE;
    }
    else
    {
        /* Operation mode is SPI_INTERRUPT_MODE: set u8IsrStatus to enabled*/
        u32IsrStatus = (uint8)TRUE;
    }

    /* Check if a poll request was made or if the operation mode is SPI_INTERRUPT_MODE */
    if (0u != u32IsrStatus)
    {
        if (0u != pDevState->tRxFrameCnt)
        {
            /* Channel not finished => update TX pointers */
            Spi_LL_Job_RestartDmaRxTransfer(pDevState);
        }
        else
        {
            /* reached the end of channel => move to the next channel */
            if (0u != pDevState->tLeftChnlsRx)
            {
                FCSPI_HWA_ClearDMAEnableRegBit((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                                               FCSPI_DMA_EN_TFDE_MASK_U32);
                /* Increase Channel indexes */
                pDevState->tLeftChnlsRx--;

                pDevState->pcCurChnlIdxPointerRX++;

                /* prepare next channel transmission */
                Spi_LL_Channel_InitDmaRx(pDevState, *(pDevState->pcCurChnlIdxPointerRX));
            }
            else
            {
                /* finish job transfer */
                Spi_AfterOneJobTransferDone(pDevState->pcCurJobCfg);
            }
        }
    }
    else
    {
        /* Driver is initialized but there was no poll request*/
        /* Empty */
    }
}
#endif /* ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON)) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function initializes channel related informations in FCSPI HW Unit structure.
 * @details The function must be called before starting the async transfer of a
 *          channel.
 *
 * @param[in]     pDevState     Specifies device involved in transmission
 * @param[in]     Channel     ID of the channel to be transmitted.
 */
SPI_TEXT_SECTION static void Spi_LL_Channel_InitFifoTx(SPI_DeviceStateType *pDevState,
                                                       Spi_ChannelType      Channel)
{
    uint8                    SpiCoreID = GET_CPU_ID();
    const Spi_ChnlAttrsType *pcChnlAttrsCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelAttrsConfig[Channel].ChannelAttrsCfg;
    const Spi_ChnlCfgType *pcChnlCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
    const Spi_ChannelStateType *pChnlStat = pcChnlCfg->pChannelState;
    uint32                      u32TRCTRL;
    uint32                      u32FIFOWTMRegVal;
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    const Spi_HwUnitCfgType *pHwUnitCfg;
#endif
    /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be assigned to an
                        object with a narrower essential type or of a different essential type
                        category.
                        Reason: The number of transfer byte count will not exceed the uint16 limit */
    uint32 u32ChannelTransferByteCnt = pChnlStat->tTransferByteCnt;

    pDevState->tLeftDataFrameCnt = u32ChannelTransferByteCnt;
    /* PRQA S 4461 -- */
    u32TRCTRL = (pDevState->u32DeviceTRCTRL | pcChnlAttrsCfg->u32ChnlTRCTRL) &
                FCSPI_TRCTRL_RWBITS_MASK_U32;
    /* Store the current TR_CTRL for this channel */
    pDevState->u32CurFrameTRCTRL = u32TRCTRL;
    /* Get the FIFO watermark for this channel */
    u32FIFOWTMRegVal = (pcChnlAttrsCfg->u32ChnlFIFOWTM) & FCSPI_FIFOWTM_RWBITS_MASK_U32;

    /* Get TX buffers of this channel */
    if (0u != ((pChnlStat->u8DefaultTransFlag) & ((uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8)))
    {
        pDevState->pCurChnlTxBuffer = NULL_PTR;
        /* integrate default transmit value in the command */
        pDevState->u32ChnlDefaultData = pcChnlCfg->u32DefaultTransData;
    }
    else
    {
        pDevState->pCurChnlTxBuffer = pcChnlCfg->pcChnlTxRxBuffer->pSpiTxBuf;
    }

    /**
     * @note The call is blocking till the HW exits the running state.
     */
    if (FCSPI_TRCTRL_CONT_EN_U32 == (u32TRCTRL & FCSPI_TRCTRL_CONT_MASK_U32))
    {
        if ((uint8)FALSE == pDevState->u8FirstChnlOfJobFlag)
        {
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr),
                                     u32TRCTRL | FCSPI_TRCTRL_CONT_GO_U32);
        }
        else
        {
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr), u32TRCTRL);
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr),
                                     FCSPI_TRCTRL_CONT_GO_U32);
            pDevState->u8FirstChnlOfJobFlag = (uint8)FALSE;
        }
    }
    else
    {
        /* write reg TR_CTRL */
        FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr), u32TRCTRL);
    }

    /* write reg FIFO_WTM */
    u32ChannelTransferByteCnt -= 1u;
    if (u32ChannelTransferByteCnt < (u32FIFOWTMRegVal & FCSPI_FIFO_WTM_TXWATER_MASK_U32))
    {
        FCSPI_HWA_SetFIFOWTM((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, u32ChannelTransferByteCnt);
    }
    else
    {
        FCSPI_HWA_SetFIFOWTM((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, u32FIFOWTMRegVal);
    }

#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    pHwUnitCfg = pDevState->pcHwUnitCfg;
    if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
    {
        /* set reg INT_EN bit */
        FCSPI_HWA_SetIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                                 FCSPI_INT_EN_RFIE_MASK_U32);
    }
#endif /* SPI_SLAVE_MODE_SUPPORT == STD_ON */
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function initializes channel related informations in FCSPI HW Unit structure.
 * @details The function must be called before starting the async transfer of a
 *          channel.
 *
 * @param[in]     pDevState     Specifies device involved in transmission
 * @param[in]     Channel       ID of the channel to be transmitted.
 */
SPI_TEXT_SECTION static void Spi_LL_Channel_InitFifoRx(SPI_DeviceStateType *pDevState,
                                                       Spi_ChannelType      Channel)
{
    uint8                  SpiCoreID = GET_CPU_ID();
    const Spi_ChnlCfgType *pcChnlCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
    /* identify the RX buffers */
    /* Rx buffer will be NULL if discarding read values */
    pDevState->pCurChnlRxBuffer = pcChnlCfg->pcChnlTxRxBuffer->pSpiRxBuf;
    pDevState->tRxFrameCnt      = pcChnlCfg->pChannelState->tTransferByteCnt;
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function fills the FCSPI FIFO.
 * @details This function fills FCSPI FIFO Transmit buffer with the
 *          predefined data assigned or transmit the default
 *          buffer values in case of the lack of transmit
 *          data buffer.
 *
 * @param[in]     pDevState     Specifies which FCSPI module is used
 *
 * @pre Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 */
SPI_TEXT_SECTION static void Spi_LL_Job_SendDataToFifo(SPI_DeviceStateType *pDevState)
{
    Spi_NumberOfDataType      tFramesCnt;
    const Spi_ChnlAttrsType  *pcChnlAttrCfg;
    const Spi_HwUnitCfgType  *pHwUnitCfg                = pDevState->pcHwUnitCfg;
    const Spi_DataBufferType *pDataBufferTx             = pDevState->pCurChnlTxBuffer;
    uint32                    u32CurrentFCSPIHWBaseAddr = pDevState->u32FCSPIHwBaseAddr;
    uint32                    u32BufferFullTX;
    uint32                    u32AvaiableFifoWtmRegVal;
    uint16                    u16BufferFullTX;
    uint8                     SpiCoreID = GET_CPU_ID();
    uint8                     u8CurrentChnlBufAccessLength;

    pcChnlAttrCfg = Spi_apxSpiConfigPtr[SpiCoreID]
                        ->ChannelAttrsConfig[*(pDevState->pcCurChnlIdxPointerTx)]
                        .ChannelAttrsCfg;
    u8CurrentChnlBufAccessLength = pcChnlAttrCfg->u8ChnlBufAccessLength;

    /* Calculate the number of frames to be sent */
    tFramesCnt = pDevState->tLeftDataFrameCnt / u8CurrentChnlBufAccessLength;

#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
    {
        if (tFramesCnt <= SPI_FIFO_SIZE_FCSPI)
        {
            /* read reg FIFO_STATUS */
            if (tFramesCnt >
                (Spi_NumberOfDataType)((uint32)SPI_FIFO_SIZE_FCSPI -
                                       FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(FCSPI_HWA_GetFifoStatus(
                                           (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(
                                               pHwUnitCfg->u8HwInstIdx)))))
            {
                /* read reg FIFO_STATUS */
                tFramesCnt =
                    (Spi_NumberOfDataType)((uint32)SPI_FIFO_SIZE_FCSPI -
                                           FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(FCSPI_HWA_GetFifoStatus(
                                               (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(
                                                   pHwUnitCfg->u8HwInstIdx))));
            }
            else
            {
                /* Empty */
            }
        }
        else
        {
            /* read reg FIFO_STATUS */
            tFramesCnt =
                (Spi_NumberOfDataType)((uint32)SPI_FIFO_SIZE_FCSPI -
                                       FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(FCSPI_HWA_GetFifoStatus(
                                           (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(
                                               pHwUnitCfg->u8HwInstIdx))));
        }
    }
    else
#endif
    {
        u32AvaiableFifoWtmRegVal =
            (((pcChnlAttrCfg->u32ChnlFIFOWTM) & FCSPI_FIFO_WTM_TXWATER_MASK_U32) + 1u -
             FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(FCSPI_HWA_GetFifoStatus(
                 (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx))));
        if (tFramesCnt > u32AvaiableFifoWtmRegVal)
        {
            /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be
            assigned to an object with a narrower essential type or of a different essential type
            category.
            Reason: The process ensure that it will not exceed the uint16 limit */
            tFramesCnt = u32AvaiableFifoWtmRegVal;
            /* PRQA S 4461 -- */
        }
        else
        {
            if ((0u == (uint32)(pDevState->tLeftChnlsTX)))
            {
                /* signal the end of job for the current FCSPI Unit */
                pDevState->bJobEndFlag = (boolean)TRUE;
            }
            if (tFramesCnt < u32AvaiableFifoWtmRegVal)
            {
                FCSPI_HWA_SetFIFOWTM((FCSPI_Type *)u32CurrentFCSPIHWBaseAddr,
                                     ((pcChnlAttrCfg->u32ChnlFIFOWTM) &
                                      FCSPI_FIFO_WTM_TXWATER_MASK_U32) +
                                         tFramesCnt - u32AvaiableFifoWtmRegVal);
            }
        }
    }

    pDevState->tLeftDataFrameCnt -= u8CurrentChnlBufAccessLength * tFramesCnt;
    pDevState->tFrameCntAlreadySend = tFramesCnt;

    // Spi_LL_WriteTxFifo(pDevState, bJobEndFlag);
    if (NULL_PTR != pDataBufferTx)
    {
        pDevState->pCurChnlTxBuffer += u8CurrentChnlBufAccessLength * tFramesCnt;
        /* write the information from the buffer */
        switch (u8CurrentChnlBufAccessLength)
        {
            case SPI_DATA_RW_8_BITS_PER_UNIT:
                while (tFramesCnt > 0u)
                {
                    tFramesCnt--;
                    FCSPI_HWA_WriteTxData((FCSPI_Type *)u32CurrentFCSPIHWBaseAddr, (*pDataBufferTx));
                    pDataBufferTx++;
                }
                break;

            case SPI_DATA_RW_16_BITS_PER_UNIT:
                while (tFramesCnt > 0u)
                {
                    tFramesCnt--;
                    u16BufferFullTX = (uint16)(((uint16)pDataBufferTx[1] << 8) | pDataBufferTx[0]);
                    /* write reg TX_DATA */
                    FCSPI_HWA_WriteTxData((FCSPI_Type *)u32CurrentFCSPIHWBaseAddr, u16BufferFullTX);
                    pDataBufferTx += 2u;
                }
                break;

            default:
                while (tFramesCnt > 0u)
                {
                    tFramesCnt--;
                    u32BufferFullTX = (uint32)(((uint32)pDataBufferTx[3] << 24) |
                                               ((uint32)pDataBufferTx[2] << 16) |
                                               ((uint32)pDataBufferTx[1] << 8) | pDataBufferTx[0]);
                    /* write reg TX_DATA */
                    FCSPI_HWA_WriteTxData((FCSPI_Type *)u32CurrentFCSPIHWBaseAddr, u32BufferFullTX);
                    pDataBufferTx += 4u;
                }
                break;
        }
    }
    else
    {
        /* write the default value */
        while (tFramesCnt > 0u)
        {
            tFramesCnt--;
            /* default transmit value already integrated in pDevState->u32CurrentCmd */
            /* write reg TX_DATA */
            FCSPI_HWA_WriteTxData((FCSPI_Type *)u32CurrentFCSPIHWBaseAddr,
                                  pDevState->u32ChnlDefaultData);
        }
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function drains the FCSPI FIFO.
 * @details This function retrieves the received data from FCSPI FIFO.
 *
 * @param[in]     pDevState     Specifies which FCSPI module is used.
 *
 * @pre     Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 */
LOCAL_INLINE void Spi_LL_Job_GetDataInFifo(SPI_DeviceStateType *pDevState)
{
    uint8 SpiCoreID = GET_CPU_ID();

    Spi_DataBufferType  *pBufferRx;
    Spi_NumberOfDataType tFramesCnt;
    uint8                u8CurrentChnlBufAccessLength = Spi_apxSpiConfigPtr[SpiCoreID]
                                             ->ChannelAttrsConfig[*(pDevState->pcCurChnlIdxPointerRX)]
                                             .ChannelAttrsCfg->u8ChnlBufAccessLength;

    uint16                   u16BufferFullRX;
    uint32                   u32BufferFullRX;
    const Spi_HwUnitCfgType *pHwUnitCfg         = pDevState->pcHwUnitCfg;
    Spi_NumberOfDataType     DiscardFramesCount = 0U;
    Spi_NumberOfDataType     TempFramesCount    = 0U;

    tFramesCnt = pDevState->tRxFrameCnt / u8CurrentChnlBufAccessLength;

    /* Check if the received data fits into the remaining buffer space */
    /* read reg reg FIFO_STATUS */
    /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be assigned to an
                        object with a narrower essential type or of a different essential type
                        category.
                        Reason: The process ensure that it will not exceed the uint16 limit */
    TempFramesCount = FCSPI_FIFOSTATUS_RXCOUNT_VAL_U32(
        FCSPI_HWA_GetFifoStatus((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx)));
    /* PRQA S 4461 -- */
    if (TempFramesCount > tFramesCnt)
    {
        /* Too much data, buffer overflow detected */
        /* Set the number of frames to be discarded */
        DiscardFramesCount = TempFramesCount - tFramesCnt;
    }
    else
    {
        /* Set the number of frames received */
        tFramesCnt = TempFramesCount;
        /* No overflow detected, continue normal flow */
    }

    pDevState->tRxFrameCnt -= u8CurrentChnlBufAccessLength * tFramesCnt;
    pBufferRx = pDevState->pCurChnlRxBuffer;

    if (NULL_PTR != pBufferRx)
    {
        /* read the deserialized information */
        do
        {
            if (0u != tFramesCnt)
            {
                if (SPI_DATA_RW_8_BITS_PER_UNIT == u8CurrentChnlBufAccessLength)
                {
                    /* read reg RX_DATA */
                    *pBufferRx = (Spi_DataBufferType)FCSPI_HWA_ReadRxData(
                        (FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
                    pBufferRx++;
                }
                else if (SPI_DATA_RW_16_BITS_PER_UNIT == u8CurrentChnlBufAccessLength)
                {
                    u16BufferFullRX = (uint16)FCSPI_HWA_ReadRxData(
                        (FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
                    pBufferRx[0] = (uint8)(u16BufferFullRX);
                    pBufferRx[1] = (uint8)(u16BufferFullRX >> 8u);
                    pBufferRx += 2u;
                    /* read reg RX_DATA */
                }
                else /* SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
                {
                    u32BufferFullRX = (uint32)FCSPI_HWA_ReadRxData(
                        (FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
                    pBufferRx[0] = (uint8)(u32BufferFullRX);
                    pBufferRx[1] = (uint8)(u32BufferFullRX >> 8u);
                    pBufferRx[2] = (uint8)(u32BufferFullRX >> 16u);
                    pBufferRx[3] = (uint8)(u32BufferFullRX >> 24u);
                    pBufferRx += 4u;
                    /* read reg RX_DATA */
                }

                tFramesCnt--;
            }
        }
        while (0u < tFramesCnt);
        /* update current RX buffer pointer */
        pDevState->pCurChnlRxBuffer = pBufferRx;
    }
    else
    {
        /* discard the information read */
        do
        {
            /* read reg rx data */
            s_Spi_u32IgnoredReadData = FCSPI_HWA_ReadRxData(
                (FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
            tFramesCnt--;
        }
        while (0u < tFramesCnt);
    }
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
    {
        /* Check if there are any frames to discard */
        if (0u != DiscardFramesCount)
        {
            /* Discard all the surplus frames */
            do
            {
                /* read reg rx data */
                s_Spi_u32IgnoredReadData = FCSPI_HWA_ReadRxData(
                    (FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
                DiscardFramesCount--;
            }
            while (0u < DiscardFramesCount);
            /* PRQA S 2995 -- */
        }
        if ((Spi_NumberOfDataType)0u == pDevState->tRxFrameCnt)
        {
            pDevState->bJobEndFlag = (boolean)TRUE;
        }
    }
#else
    (void)DiscardFramesCount;
#endif
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function sets the Job's attributes and send all the data through the SPI bus.
 * @details This function is in charge to setup the Job attribute,
 *          and to send all data though the SPI Bus.
 *
 * @param[in]     pcJobCfg    Specifies the Job for which we will set the
 *                            register values
 *
 * @pre  Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 *
 */
SPI_TEXT_SECTION void Spi_LL_JobTransfer(const Spi_JobCfgType *pcJobCfg)
{
    SPI_DeviceStateType   *pDevState       = &g_Spi_aDeviceState[pcJobCfg->tVirHwUnitIdx];
    const Spi_ChannelType *pcChnlListOfJob = pcJobCfg->pcChnlsArray;
#if (SPI_DMA_USED == STD_ON)
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    uint32 u32FifoStatus;
#endif
#endif
    const Spi_HwUnitCfgType *pHwUnitCfg = pDevState->pcHwUnitCfg;

    /* start job notification to assert the non-cs pin,
        when non-cs pin is used as chipselect*/
    if (NULL_PTR == pcJobCfg->pfStartNotification)
    {
        /* Empty*/
    }
    else
    {
        pcJobCfg->pfStartNotification();
    }

    pDevState->u8FirstChnlOfJobFlag = (uint8)TRUE;
    /* initialize starting channel index */
    pDevState->tLeftChnlsTX          = pcJobCfg->tChnlCntOfJob - (Spi_ChannelType)1u;
    pDevState->tLeftChnlsRx          = pcJobCfg->tChnlCntOfJob - (Spi_ChannelType)1u;
    pDevState->pcCurChnlIdxPointerTx = pcChnlListOfJob;
    pDevState->pcCurChnlIdxPointerRX = pcChnlListOfJob;

    /* update reg CLK_CFG */
    pDevState->u32DeviceCLKCFG = pcJobCfg->pcDeviceAttrs->DeviceAttrsCfg->u32CLK_CFG;
    FCSPI_HWA_WriteCLK_CFG((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr), pDevState->u32DeviceCLKCFG);

    pDevState->u32DeviceTRCTRL = pcJobCfg->pcDeviceAttrs->DeviceAttrsCfg->u32TR_CTRL;

    /* memorize the current job */
    pDevState->pcCurJobCfg = pcJobCfg;
#if (SPI_DMA_USED == STD_ON)
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
    if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
    {
        /* read reg FIFO_STATUS */
        u32FifoStatus = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));
        if (0u != u32FifoStatus)
        {
            /* Clear all data in FIFO */
            /* set reg CTRL bit */
            FCSPI_HWA_SetCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                              FCSPI_CTRL_RST_TF_U32);
            FCSPI_HWA_SetCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                              FCSPI_CTRL_RST_RF_U32);
        }
    }
#endif /* SPI_SLAVE_MODE_SUPPORT == STD_ON */

    if (0u != pHwUnitCfg->bUseDma)
    {
        pDevState->bJobEndFlag = (boolean)FALSE;
        /* initialize the transfer parameters for the first channel */
        Spi_LL_Channel_InitDmaTx(pDevState, *pcChnlListOfJob);
        Spi_LL_Channel_InitDmaRx(pDevState, *pcChnlListOfJob);
    }
    else
#endif /* (SPI_DMA_USED == STD_ON) */

    {
        pDevState->bJobEndFlag = (boolean)FALSE;

#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
        if ((TRUE == pcJobCfg->WorkaroundNeeded) && (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode))
        {
            Spi_LL_Channel_InitFifoTx_Fast(pDevState, *pcChnlListOfJob);
            Spi_LL_Channel_InitFifoRx_Fast(pDevState, *pcChnlListOfJob);
            Spi_LL_Job_SendDataToFifo_Fast(pDevState);
        }
        else
#endif
        {
            Spi_LL_Channel_InitFifoTx(pDevState, *pcChnlListOfJob);
            Spi_LL_Channel_InitFifoRx(pDevState, *pcChnlListOfJob);
            Spi_LL_Job_SendDataToFifo(pDevState);
        }

        if (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode)
        {
            /* Enable transmit interrupt for interrupt mode */
            if (SPI_INTERRUPT_MODE == pDevState->eAsyncMode)
            {
                /* set reg bit int en */
                FCSPI_HWA_SetIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                                         FCSPI_INT_EN_TFIE_MASK_U32);
            }
        }
    }

    if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
    {
        FCSPI_HWA_SetCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                          FCSPI_CTRL_M_EN_U32);
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief   This function initializes channel related informations in FCSPI HW Unit structure when
 *          CONT = 1, SCK_PHA = 1.
 * @details The function must be called before starting the async transfer of a channel.
 *
 * @param[in]     pDevState     Specifies device involved in transmission
 * @param[in]     Channel     ID of the channel to be transmitted.
 */
LOCAL_INLINE void Spi_LL_Channel_InitFifoTx_Fast(SPI_DeviceStateType *pDevState,
                                                 Spi_ChannelType      Channel)
{
    uint8                    SpiCoreID = GET_CPU_ID();
    const Spi_ChnlAttrsType *pcChnlAttrsCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelAttrsConfig[Channel].ChannelAttrsCfg;
    /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be cast
     * to a different essential type category or a wider essential type
       Reason: It is allowed to cast the value */
    const Spi_ChnlCfgType *pcChnlCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
    /* PRQA S 4394 -- */
    const Spi_ChannelStateType *pChnlStat = pcChnlCfg->pChannelState;
    uint32                      u32TRCTRL;
    uint32                      u32FrameSize = 0u;

    pDevState->tLeftDataFrameCnt = pChnlStat->tTransferByteCnt;
    /* PRQA S 4461,4391 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be assigned
    to anobject with a narrower essential type or of a different essential type category.
    #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be cast to a different
    essential type category or a wider essential type.
    Reason: The number of transfer byte count will not exceed the uint16 limit */
    u32FrameSize = (uint32)(((pChnlStat->tTransferByteCnt * 8u) - 1u)) &
                   FCSPI_TRCTRL_FRAMESZ_MASK_U32;
    /* PRQA S 4461,4391 -- */
    u32TRCTRL = (pDevState->u32DeviceTRCTRL | pcChnlAttrsCfg->u32ChnlTRCTRL) &
                FCSPI_TRCTRL_RWBITS_MASK_U32;
    u32TRCTRL = (u32TRCTRL | u32FrameSize) & (~FCSPI_TRCTRL_CONT_EN_U32);
    /* Store the current TR_CTRL for this channel */
    pDevState->u32CurFrameTRCTRL = u32TRCTRL;

    /* Get TX buffers of this channel */
    if (0u != ((pChnlStat->u8DefaultTransFlag) & ((uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8)))
    {
        pDevState->pCurChnlTxBuffer = NULL_PTR;
        /* integrate default transmit value in the command */
        pDevState->u32ChnlDefaultData = pcChnlCfg->u32DefaultTransData;
    }
    else
    {
        pDevState->pCurChnlTxBuffer = pcChnlCfg->pcChnlTxRxBuffer->pSpiTxBuf;
    }

    /* write reg TR_CTRL */
    FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr), u32TRCTRL);

    /* write reg FIFO_WTM */
    FCSPI_HWA_SetFIFOWTM((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                         FCSPI_FIFO_WTM_TXRXWATER_DEFAULT_U32);
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief   This function initializes channel related informations in FCSPI HW Unit structure when
 *          CONT = 1, SCK_PHA = 1.
 * @details The function must be called before starting the async transfer of a channel.
 *
 * @param[in]     pDevState     Specifies device involved in transmission
 * @param[in]     Channel       ID of the channel to be transmitted.
 */
LOCAL_INLINE void Spi_LL_Channel_InitFifoRx_Fast(SPI_DeviceStateType *pDevState,
                                                 Spi_ChannelType      Channel)
{
    uint8                  SpiCoreID = GET_CPU_ID();
    const Spi_ChnlCfgType *pcChnlCfg;
    pcChnlCfg = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
    /* identify the RX buffers */
    /* Rx buffer will be NULL if discarding read values */
    pDevState->pCurChnlRxBuffer = pcChnlCfg->pcChnlTxRxBuffer->pSpiRxBuf;
    pDevState->tRxFrameCnt      = pcChnlCfg->pChannelState->tTransferByteCnt;
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief   This function put data to the FCSPI TX FIFO when CONT = 1, SCK_PHA = 1.
 * @details This function fills FCSPI FIFO Transmit buffer with the
 *          predefined data assigned or transmit the default
 *          buffer values in case of the lack of transmit
 *          data buffer.
 *
 * @param[in]     pDevState     Specifies which FCSPI module is used
 *
 * @pre Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON
 */
SPI_TEXT_SECTION static void Spi_LL_Job_SendDataToFifo_Fast(SPI_DeviceStateType *pDevState)
{
    const Spi_DataBufferType *pDataBufferTx = pDevState->pCurChnlTxBuffer;
    uint32                    TxData;

    if (NULL_PTR != pDataBufferTx)
    {
        TxData = Spi_LL_AdjustDataInWordBeforeSend(pDataBufferTx,
                                                   pDevState->tLeftDataFrameCnt,
                                                   pDevState->u32CurFrameTRCTRL);
        if (pDevState->tLeftDataFrameCnt >= 4u)
        {
            pDevState->pCurChnlTxBuffer += 4u;
            pDevState->tLeftDataFrameCnt -= 4u;
        }
        else
        {
            pDevState->tLeftDataFrameCnt = 0u;
        }
    }
    else
    {
        TxData = pDevState->u32ChnlDefaultData;
        if (pDevState->tLeftDataFrameCnt > 4u)
        {
            pDevState->tLeftDataFrameCnt -= 4u;
        }
        else
        {
            pDevState->tLeftDataFrameCnt = 0u;
        }
    }
    pDevState->tFrameCntAlreadySend = 1u;
    FCSPI_HWA_WriteTxData((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, TxData);

    if (pDevState->tLeftDataFrameCnt == 0u)
    {
        pDevState->bJobEndFlag = TRUE;
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function is called by TDF or RDF ISRs for the FCSPI units working in FIFO mode.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the FCSPI
 *          peripherals.
 *
 * @param[in]     pDevState     Specifies which FCSPI peripheral is used
 * @param[in]     u8HwInstIdx   Specifies which Hw instance is used
 *
 * @implements Spi_FCSpi_IsrFifoRx_Activity
 */

SPI_TEXT_SECTION void Spi_LL_IsrFifoRx(SPI_DeviceStateType *pDevState, uint8 u8HwInstIdx)
{
    Spi_AsyncModeType AsyncMode      = pDevState->eAsyncMode;
    uint32            u32IsrStatusTX = 0u;
    uint32            u32IsrStatusRX = 0u;

    uint8                    SpiCoreID  = GET_CPU_ID();
    const Spi_HwUnitCfgType *pHwUnitCfg = pDevState->pcHwUnitCfg;

    /* Check if the driver has been initialized */
    if (NULL_PTR != Spi_apxSpiConfigPtr[SpiCoreID])
    {
        if (SPI_POLLING_MODE != AsyncMode)
        {
            if (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode)
            {
                /*Not in pooling mode: read status register and interrupts enabled register */

                /* read reg STATUS */
                u32IsrStatusTX = FCSPI_HWA_GetStatus((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr)) &
                                 FCSPI_STATUS_TX_FF_MASK_U32;

                /* read reg STATUS */
                u32IsrStatusRX = FCSPI_HWA_GetStatus((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr)) &
                                 FCSPI_STATUS_RX_FF_MASK_U32;

                /* read reg INT_EN */
                u32IsrStatusTX &= FCSPI_HWA_ReadIntEnReg(
                                      (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx)) &
                                  FCSPI_INT_EN_TFIE_MASK_U32;

                /* read reg INT_EN */
                u32IsrStatusRX &= FCSPI_HWA_ReadIntEnReg(
                                      (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx)) &
                                  FCSPI_INT_EN_RFIE_MASK_U32;
            }
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
            else
            {
                /*Not in pooling mode: read status register and interrupts enabled register */
                /* read reg STATUS */
                u32IsrStatusRX = FCSPI_HWA_GetStatus((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr)) &
                                 FCSPI_STATUS_RX_FF_MASK_U32;

                /* read reg INT_EN */
                u32IsrStatusRX &= FCSPI_HWA_ReadIntEnReg(
                                      (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx)) &
                                  FCSPI_INT_EN_RFIE_MASK_U32;
                /* Need to verify the RX FIFO is not empty */

                /* read reg RX_STATUS */
                u32IsrStatusRX &= ~(FCSPI_HWA_ReadRxStatus((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(
                                        pHwUnitCfg->u8HwInstIdx)) &
                                    FCSPI_RX_STATUS_RX_EMPTY_MASK_U32);
            }
#endif
        }
        else
        {
            /* Operation mode is SPI_POLLING_MODE: set u32IsrStatus to poll request flag */
            if (1u == pDevState->u8PollReqFlag)
            {
                u32IsrStatusTX = pDevState->u32PollTXReqFlag;
                u32IsrStatusRX = pDevState->u32PollRXReqFlag;
                /* Clear poll request flag */
                pDevState->u8PollReqFlag = 0u;
            }
        }

        /* check if any enabled isr had been triggered */
        if ((0u != u32IsrStatusTX) || (0u != u32IsrStatusRX))
        {
            /*
             * check if any enabled isr had been triggered, copy data from FIFO
             * and prepare next channel transmission, perform the next chunk transmission
             */
            Spi_LL_Pseudo_Isr(pDevState, u32IsrStatusTX, u32IsrStatusRX);

            if ((boolean)TRUE == pDevState->bJobEndFlag)
            {
                if ((0u == pDevState->tRxFrameCnt) && (0u == pDevState->tLeftChnlsRx))
                {
                    /* finish job transfer */
                    Spi_AfterOneJobTransferDone(pDevState->pcCurJobCfg);
                }
            }
        }
        else
        {
            /* Driver has been initialized and received an unconfigured interrupt, clear status flags */

            /* write reg STATUS */
            FCSPI_HWA_SetStatus((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr),
                                FCSPI_STATUS_INT_W1C_U32);
            /* Disable transmit interrupt */

            /* clear reg bit INT_EN */
            FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                                       FCSPI_INT_EN_TFIE_MASK_U32);
        }
    }
    else
    {
        /* Driver has not been initialized, clear status flags and Reset the FCSPI Regs*/
        /* Reset the FCSPI Regs and Transmit/Receive FIFO */

        FCSPI_HWA_ClearIntEnRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                   FCSPI_INT_EN_RWBITS_MASK_U32);
        FCSPI_HWA_ClearDMAEnableRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx),
                                       (FCSPI_DMA_EN_RFDE_MASK_U32 | FCSPI_DMA_EN_TFDE_MASK_U32));

        /* write reg CTRL */
        FCSPI_HWA_WriteCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx), FCSPI_CTRL_SW_RST_U32);

        /* write reg CTRL */
        FCSPI_HWA_WriteCTRL((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(u8HwInstIdx), FCSPI_CTRL_RESET_U32);
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function is called by TDF or RDF ISRs for the FCSPI units working in FIFO mode.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the FCSPI
 *          peripherals.
 *
 * @param[in]     pDevState          Specifies which FCSPI peripheral is used
 * @param[in]     u32IsrStatusTX     Status of Tx interrupt flag
 * @param[in]     u32IsrStatusRX     Status of Rx interrupt flag
 */
SPI_TEXT_SECTION void Spi_LL_Pseudo_Isr(SPI_DeviceStateType *pDevState,
                                        uint32               u32IsrStatusTX,
                                        uint32               u32IsrStatusRX)
{
    /* Get current command */
    uint32                   u32TRCTRL  = pDevState->u32CurFrameTRCTRL;
    const Spi_HwUnitCfgType *pHwUnitCfg = pDevState->pcHwUnitCfg;

    if (0u != u32IsrStatusRX)
    {
        /* Copy data from FCSPI FIFO to channels */
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
        if ((pDevState->pcCurJobCfg->WorkaroundNeeded == TRUE) &&
            (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode))
        {
            Spi_LL_Job_GetDataInFifo_Fast(pDevState);
        }
        else
#endif
        {
            Spi_LL_Job_GetDataInFifo(pDevState);
        }
        /* check for the channel switch */
        if ((0u == pDevState->tRxFrameCnt) && (0u != pDevState->tLeftChnlsRx))
        {
            /* reached the end of channel => move to the next channel */
            /* Increase Channel indexes */
            pDevState->tLeftChnlsRx--;

            pDevState->pcCurChnlIdxPointerRX++;

            if (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode)
            {
                /* prepare next channel transmission */
                Spi_LL_Channel_InitFifoRx(pDevState, *(pDevState->pcCurChnlIdxPointerRX));
            }
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
            else
            {
                /* reached the end of channel => move to the next channel */
                /* Increase Channel indexes */
                pDevState->tLeftChnlsTX--;

                pDevState->pcCurChnlIdxPointerTx++;
                /* prepare next channel transmission */
                Spi_LL_Channel_InitFifoTx(pDevState, *(pDevState->pcCurChnlIdxPointerTx));
                /* prepare next channel transmission */
                Spi_LL_Channel_InitFifoRx(pDevState, *(pDevState->pcCurChnlIdxPointerRX));
            }
#endif /* SPI_SLAVE_MODE_SUPPORT == STD_ON */
        }
#if (SPI_SLAVE_MODE_SUPPORT == STD_ON)
        if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
        {
            if ((boolean)FALSE == pDevState->bJobEndFlag)
            {
                /* perform the next chunk transmission */
                Spi_LL_Job_SendDataToFifo(pDevState);
            }
        }
#endif /* SPI_SLAVE_MODE_SUPPORT == STD_ON */
    }

    if (0u != u32IsrStatusTX)
    {
        if ((boolean)TRUE == pDevState->bJobEndFlag)
        {
            /* Disable transmit interrupt for interrupt mode if end of job*/
            if (SPI_INTERRUPT_MODE == pDevState->eAsyncMode)
            {
                /* clear reg bit INT_EN */
                FCSPI_HWA_ClearIntEnRegBit(
                    (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx),
                    FCSPI_INT_EN_TFIE_MASK_U32);
            }
            /* Force the CS disabling because last data unit for the last channel of the Job is
             * transmited */
            u32TRCTRL = u32TRCTRL &
                        (~(FCSPI_TRCTRL_CONT_EN_U32 |
                           FCSPI_TRCTRL_CONT_GO_U32)); /* clear the continuous CS assertion */

            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr), u32TRCTRL);
        }
        else
        {
            /* check for the channel switch */
            if ((0u == pDevState->tLeftDataFrameCnt) && (0u != pDevState->tLeftChnlsTX))
            {
                /* reached the end of channel => move to the next channel */
                /* Increase Channel indexes */
                pDevState->tLeftChnlsTX--;

                pDevState->pcCurChnlIdxPointerTx++;

                if (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode)
                {
                    /* prepare next channel transmission */
                    Spi_LL_Channel_InitFifoTx(pDevState, *(pDevState->pcCurChnlIdxPointerTx));
                }
            }
            else
            {
                /* perform the next chunk transmission */
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
                if ((pDevState->pcCurJobCfg->WorkaroundNeeded == TRUE) &&
                    (SPI_MASTER == pHwUnitCfg->eSpiHwUnitMode))
                {
                    Spi_LL_Job_SendDataToFifo_Fast(pDevState);
                }
                else
#endif
                {
                    Spi_LL_Job_SendDataToFifo(pDevState);
                }
            }
        }
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief   This function retrieves the received data from FCSPI FIFO when CONT=1,SCK_PHA=1.
 * @details This function retrieves the received data from FCSPI FIFO when CONT=1,SCK_PHA=1.
 *
 * @param[in]     pDevState     Indicate the state of this SPI HW uint.
 *
 * @pre     Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON,
 *          SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE shall be STD_OFF
 */
LOCAL_INLINE void Spi_LL_Job_GetDataInFifo_Fast(SPI_DeviceStateType *pDevState)
{
    Spi_DataBufferType *pBufferRx = pDevState->pCurChnlRxBuffer;
    uint32              u32RxData = 0u;

    if (NULL_PTR != pBufferRx)
    {
        u32RxData = FCSPI_HWA_ReadRxData((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr);
        Spi_LL_AdjustDataInWordAfterReceive(u32RxData,
                                            pBufferRx,
                                            pDevState->tRxFrameCnt,
                                            pDevState->u32CurFrameTRCTRL);
        if (pDevState->tRxFrameCnt <= 4u)
        {
            pDevState->tRxFrameCnt = 0u;
        }
        else
        {
            pDevState->tRxFrameCnt -= 4u;
            pDevState->pCurChnlRxBuffer += 4u;
        }
    }
    else
    {
        /* read reg rx data */
        s_Spi_u32IgnoredReadData = FCSPI_HWA_ReadRxData((FCSPI_Type *)(pDevState->u32FCSPIHwBaseAddr));

        if (pDevState->tRxFrameCnt >= 4u)
        {
            pDevState->tRxFrameCnt -= 4u;
        }
        else
        {
            pDevState->tRxFrameCnt = 0u;
        }
    }
}
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
/**
 * @brief         Transmit one job synchronously.
 * @details       Transmit one job synchronously
 *
 * @param[in]     pSyncTransState   indicate current transmitting Job's state and channel
 *                                  information in it.
 *
 * @return        Std_ReturnType
 */
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_TransferOneJob(SPI_SyncStateType *pSyncTransState,
                                                                  uint8 SpiCoreID)
{
    Spi_ChannelType          ChnlIndexTx      = (Spi_ChannelType)0;
    Spi_ChannelType          ChnlIndexRx      = (Spi_ChannelType)0;
    const Spi_ChnlAttrsType *pcChnlAttrsCfgTX = NULL_PTR;
    const Spi_ChnlCfgType   *pcChnlCfgTX;
    uint8                    u8FirstChnlOfJobFlag = (uint8)TRUE;
    uint32                   u32BaseAddr          = pSyncTransState->u32FCSPIHwBaseAddr;
    sint32                   s32Timeout           = SPI_TIMEOUT_COUNTER;
    Std_ReturnType           eRet                 = (Std_ReturnType)E_OK;
    Std_ReturnType           eTransRet;
    uint32                   u32RxTxStatus = 0u;

    /* Transmit one channel in this block */
    while ((Spi_ChannelType)0 < pSyncTransState->tChnlCntTX)
    {
        pSyncTransState->tChnlCntTX--;

        ChnlIndexTx = *pSyncTransState->pcChnlIdxListTX;
        pcChnlAttrsCfgTX =
            Spi_apxSpiConfigPtr[SpiCoreID]->ChannelAttrsConfig[ChnlIndexTx].ChannelAttrsCfg;
        pcChnlCfgTX = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[ChnlIndexTx].ChannelCfg;

        pSyncTransState->u32ChnlFinalTRCTRL = (pSyncTransState->u32JobTRCTRL |
                                               pcChnlAttrsCfgTX->u32ChnlTRCTRL) &
                                              FCSPI_TRCTRL_RWBITS_MASK_U32;
        pSyncTransState->u32SyncDefaultData  = pcChnlCfgTX->u32DefaultTransData;
        pSyncTransState->u8TxBufAccessLength = pcChnlAttrsCfgTX->u8ChnlBufAccessLength;

        if (0u == (pSyncTransState->u32ChnlFinalTRCTRL & FCSPI_TRCTRL_CONT_EN_U32))
        {
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)u32BaseAddr, pSyncTransState->u32ChnlFinalTRCTRL);
        }
        else
        {
            if ((uint8)FALSE == u8FirstChnlOfJobFlag)
            {
                /* reset the command after the previous channnel, in continuous transmit mode, CONTC
                 * must set after the init commmand */
                /* write reg TR_CTRL */
                FCSPI_HWA_SetTxRxControl((FCSPI_Type *)u32BaseAddr,
                                         (pSyncTransState->u32ChnlFinalTRCTRL |
                                          FCSPI_TRCTRL_CONT_GO_U32));
            }
            else
            {
                /* write reg TR_CTRL */
                FCSPI_HWA_SetTxRxControl((FCSPI_Type *)u32BaseAddr,
                                         pSyncTransState->u32ChnlFinalTRCTRL);
                /* write reg TR_CTRL */
                FCSPI_HWA_SetTxRxControl((FCSPI_Type *)u32BaseAddr, FCSPI_TRCTRL_CONT_GO_U32);
            }
        }

        /* retrieve TX buffers and the transmitted length */
        if (1u ==
            (pcChnlCfgTX->pChannelState->u8DefaultTransFlag & (uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8))
        {
            pSyncTransState->pSyncBufferTX = NULL_PTR;
        }
        else
        {
            pSyncTransState->pSyncBufferTX = pcChnlCfgTX->pcChnlTxRxBuffer->pSpiTxBuf;
        }

        pSyncTransState->tTxDatRwUnitCnt = pcChnlCfgTX->pChannelState->tTransferByteCnt;

        if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrsCfgTX->u8ChnlBufAccessLength)
        {
            /* empty */
        }
        else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrsCfgTX->u8ChnlBufAccessLength)
        {
            pSyncTransState->tTxDatRwUnitCnt /= 2u;
        }
        else /* (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrsCfgTX->u8ChnlBufAccessLength) */
        {
            pSyncTransState->tTxDatRwUnitCnt /= 4u;
        }

        /* if the channel is the first of Job then retrieve RX buffers and the received length */
        if ((uint8)TRUE == u8FirstChnlOfJobFlag)
        {
            pSyncTransState->tChnlCntRX--;
            ChnlIndexRx                    = *pSyncTransState->pcChnlIdxListRX;
            pSyncTransState->pSyncBufferRX = Spi_apxSpiConfigPtr[SpiCoreID]
                                                 ->ChannelConfig[ChnlIndexRx]
                                                 .ChannelCfg->pcChnlTxRxBuffer->pSpiRxBuf;
            pSyncTransState->u8RxBufAccessLength = Spi_apxSpiConfigPtr[SpiCoreID]
                                                       ->ChannelAttrsConfig[ChnlIndexRx]
                                                       .ChannelAttrsCfg->u8ChnlBufAccessLength;
            pSyncTransState->tRxDatRwUnitCnt = pSyncTransState->tTxDatRwUnitCnt;
        }

        s32Timeout = SPI_TIMEOUT_COUNTER;
        /* read reg FIFO_STATUS */
        u32RxTxStatus = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);
        u32RxTxStatus &= (FCSPI_FIFO_STATUS_RXCNT_MASK_U32 | FCSPI_FIFO_STATUS_TXCNT_MASK_U32);

        while ((pSyncTransState->tTxDatRwUnitCnt >
                (Spi_NumberOfDataType)0) || /* if not send all of one channel */
               /* all channel data has pushed to the fifo */
               (((uint8)TRUE == pSyncTransState->u8PushJobAllTxDatToFifo) &&
                (pSyncTransState->tRxDatRwUnitCnt > 0u)) ||
               /* push all job tx, need read */
               /* some data need tx/rx from fcspi fifo, when push all channel tx data to fifo, if
                  not 0, need read, if zero, all send alredy, all data recved */
               (u32RxTxStatus != 0u))
        {
            /* read reg fifo status */
            u32RxTxStatus = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);
            u32RxTxStatus &= (FCSPI_FIFO_STATUS_RXCNT_MASK_U32 | FCSPI_FIFO_STATUS_TXCNT_MASK_U32);

            eTransRet = Spi_LL_Sync_SendData(pSyncTransState);

            if ((Std_ReturnType)E_OK == eTransRet)
            {
                /* reset the timeout */
                s32Timeout = SPI_TIMEOUT_COUNTER;
            }

            eTransRet = Spi_LL_Sync_GetData(pSyncTransState);

            if ((Std_ReturnType)E_OK == eTransRet)
            {
                /* reset the timeout */
                s32Timeout = SPI_TIMEOUT_COUNTER;
            }

            s32Timeout--;

            /* end the loop if timeout expired */
            if ((sint32)0 >= s32Timeout)
            {
                /* force the end of the outer loop too */
                pSyncTransState->tChnlCntTX = 0U;
                pSyncTransState->tChnlCntRX = 0U;
                eRet                        = (Std_ReturnType)E_NOT_OK;
                break;
            }
        }

        pSyncTransState->pcChnlIdxListTX++;
        u8FirstChnlOfJobFlag = (uint8)FALSE;
    } /* while (ChannelsCountTX) */

    return eRet;
}
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief         Transmit one job synchronously when CONT = 1 , SCK_PHA = 1.
 * @details       Transmit one job synchronously when CONT = 1 , SCK_PHA = 1.
 *
 * @param[in]     pSyncTransState   indicate current transmitting Job's state and channel
 *                                  information in it.
 *
 * @return        Std_ReturnType
 */
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_TransferOneJob_Fast(
    SPI_SyncStateType *pSyncTransState,
    uint8              SpiCoreID)
{
    Spi_ChannelType          ChnlIndexTx      = (Spi_ChannelType)0;
    Spi_ChannelType          ChnlIndexRx      = (Spi_ChannelType)0;
    const Spi_ChnlAttrsType *pcChnlAttrsCfgTX = NULL_PTR;
    const Spi_ChnlCfgType   *pcChnlCfgTX;
    uint32                   u32BaseAddr = pSyncTransState->u32FCSPIHwBaseAddr;
    sint32                   s32Timeout  = SPI_TIMEOUT_COUNTER;
    Std_ReturnType           eRet        = (Std_ReturnType)E_OK;
    Std_ReturnType           eTransRet;
    uint32                   u32RxTxStatus = 0u;
    uint32                   u32FrameSize  = 0u;

    pSyncTransState->tChnlCntTX = 0u;

    ChnlIndexTx = *pSyncTransState->pcChnlIdxListTX;
    pcChnlAttrsCfgTX = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelAttrsConfig[ChnlIndexTx].ChannelAttrsCfg;
    pcChnlCfgTX = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[ChnlIndexTx].ChannelCfg;
    /* PRQA S 4391 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be cast
    to a different essential type category or a wider essential type.
    Reason: It is allowed to cast the value */
    u32FrameSize = (uint32)((pcChnlCfgTX->pChannelState->tTransferByteCnt * 8u) - 1u) &
                   FCSPI_TRCTRL_FRAMESZ_MASK_U32;
    /* PRQA S 4391 -- */
    pSyncTransState->u32ChnlFinalTRCTRL = (pSyncTransState->u32JobTRCTRL |
                                           pcChnlAttrsCfgTX->u32ChnlTRCTRL | u32FrameSize) &
                                          (~FCSPI_TRCTRL_CONT_EN_U32) & FCSPI_TRCTRL_RWBITS_MASK_U32;
    pSyncTransState->u32SyncDefaultData  = pcChnlCfgTX->u32DefaultTransData;
    pSyncTransState->u8TxBufAccessLength = pcChnlAttrsCfgTX->u8ChnlBufAccessLength;

    /* write reg TR_CTRL */
    FCSPI_HWA_SetTxRxControl((FCSPI_Type *)u32BaseAddr, pSyncTransState->u32ChnlFinalTRCTRL);

    /* retrieve TX buffers and the transmitted length */
    if (1u == (pcChnlCfgTX->pChannelState->u8DefaultTransFlag & (uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8))
    {
        pSyncTransState->pSyncBufferTX = NULL_PTR;
    }
    else
    {
        pSyncTransState->pSyncBufferTX = pcChnlCfgTX->pcChnlTxRxBuffer->pSpiTxBuf;
    }

    pSyncTransState->tTxDatRwUnitCnt = pcChnlCfgTX->pChannelState->tTransferByteCnt;
    if (pcChnlCfgTX->pChannelState->tTransferByteCnt <= 4u)
    {
        pSyncTransState->tTxDatRwUnitCnt = 1u;
    }
    else if ((pcChnlCfgTX->pChannelState->tTransferByteCnt % 4u) == 0u)
    {
        pSyncTransState->tTxDatRwUnitCnt /= 4u;
    }
    else
    {
        pSyncTransState->tTxDatRwUnitCnt /= 4u;
        pSyncTransState->tTxDatRwUnitCnt++;
    }

    pSyncTransState->tChnlCntRX--;
    ChnlIndexRx = *pSyncTransState->pcChnlIdxListRX;
    pSyncTransState->pSyncBufferRX =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[ChnlIndexRx].ChannelCfg->pcChnlTxRxBuffer->pSpiRxBuf;
    pSyncTransState->u8RxBufAccessLength = Spi_apxSpiConfigPtr[SpiCoreID]
                                               ->ChannelAttrsConfig[ChnlIndexRx]
                                               .ChannelAttrsCfg->u8ChnlBufAccessLength;
    pSyncTransState->tRxDatRwUnitCnt = pSyncTransState->tTxDatRwUnitCnt;

    s32Timeout = SPI_TIMEOUT_COUNTER;
    /* read reg FIFO_STATUS */
    u32RxTxStatus = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);
    u32RxTxStatus &= (FCSPI_FIFO_STATUS_RXCNT_MASK_U32 | FCSPI_FIFO_STATUS_TXCNT_MASK_U32);

    while ((pSyncTransState->tTxDatRwUnitCnt >
            (Spi_NumberOfDataType)0) || /* if not send all of one channel */
           /* all channel data has pushed to the fifo */
           (((uint8)TRUE == pSyncTransState->u8PushJobAllTxDatToFifo) &&
            (pSyncTransState->tRxDatRwUnitCnt > 0u)) ||
           /* push all job tx, need read */
           (u32RxTxStatus !=
            0u)) /* some data need tx/rx from fcspi fifo, when push all channel tx data to fifo, if
                    not 0, need read, if zero, all send alredy, all data recved */
    {
        /* read reg fifo status */
        u32RxTxStatus = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);
        u32RxTxStatus &= (FCSPI_FIFO_STATUS_RXCNT_MASK_U32 | FCSPI_FIFO_STATUS_TXCNT_MASK_U32);

        eTransRet = Spi_LL_Sync_SendData_Fast(pSyncTransState, pcChnlCfgTX);

        if ((Std_ReturnType)E_OK == eTransRet)
        {
            /* reset the timeout */
            s32Timeout = SPI_TIMEOUT_COUNTER;
        }

        eTransRet = Spi_LL_Sync_GetData_Fast(pSyncTransState, pcChnlCfgTX);

        if ((Std_ReturnType)E_OK == eTransRet)
        {
            /* reset the timeout */
            s32Timeout = SPI_TIMEOUT_COUNTER;
        }

        s32Timeout--;

        /* end the loop if timeout expired */
        if ((sint32)0 >= s32Timeout)
        {
            /* force the end of the outer loop too */
            pSyncTransState->tChnlCntTX = 0U;
            pSyncTransState->tChnlCntRX = 0U;
            eRet                        = (Std_ReturnType)E_NOT_OK;
            break;
        }
    }
    return eRet;
}
#endif
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief         Write data in Tx buffer to TX_FIFO.
 * @details       Write data in Tx buffer to TX_FIFO.
 *
 * @param[in]     pSyncTransState        indicating the data format to be transmitted.
 *
 * @return        Std_ReturnType
 *
 * @pre           Pre-compile parameter SPI_SYNC_DRIVER should be STD_ON.
 */
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_SendData_Fast(SPI_SyncStateType *pSyncTransState,
                                                                 const Spi_ChnlCfgType *pcChnlCfgTX)
{
    uint32         u32FifoStatusRegValue;
    uint32         WordsNumInTxFifo;
    uint32         WordsNumInRxFifo;
    uint32         u32TxData;
    Std_ReturnType eStatus     = (Std_ReturnType)E_NOT_OK;
    uint32         u32BaseAddr = pSyncTransState->u32FCSPIHwBaseAddr;
    /* PRQA S 3678 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type
       whenever possible
       Reason: That object can not be declared with const type */
    Spi_DataBufferType *pDataBufferTx = pSyncTransState->pSyncBufferTX;
    /* PRQA S 3678 -- */

    /* Read reg FIFO_STATUS */
    u32FifoStatusRegValue = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);
    WordsNumInTxFifo      = FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(u32FifoStatusRegValue);
    WordsNumInRxFifo      = FCSPI_FIFOSTATUS_RXCOUNT_VAL_U32(u32FifoStatusRegValue);

    /* there is something to write and Transmit FIFO not full */
    if ((pSyncTransState->tTxDatRwUnitCnt > 0u) &&
        ((WordsNumInTxFifo + WordsNumInRxFifo) < (SPI_FIFO_SIZE_FCSPI - 1u)))
    {
        if (NULL_PTR != pDataBufferTx)
        {
            if (((Spi_NumberOfDataType)1u != pSyncTransState->tTxDatRwUnitCnt) ||
                ((pcChnlCfgTX->pChannelState->tTransferByteCnt % 4u) == 0u))
            {
                u32TxData = Spi_LL_AdjustDataInWordBeforeSend(pDataBufferTx,
                                                              4u,
                                                              pSyncTransState->u32ChnlFinalTRCTRL);
                pSyncTransState->pSyncBufferTX += 4u;
            }
            else
            {
                u32TxData = Spi_LL_AdjustDataInWordBeforeSend(
                    pDataBufferTx,
                    pcChnlCfgTX->pChannelState->tTransferByteCnt % 4u,
                    pSyncTransState->u32ChnlFinalTRCTRL);
            }
        }
        else
        {
            u32TxData = pSyncTransState->u32SyncDefaultData;
        }

        FCSPI_HWA_WriteTxData((FCSPI_Type *)u32BaseAddr, u32TxData);

        pSyncTransState->tTxDatRwUnitCnt--;

        if (0u == (pSyncTransState->tTxDatRwUnitCnt))
        {
            pSyncTransState->u8PushJobAllTxDatToFifo = (uint8)TRUE;
        }
        else
        {
            /* Empty */
        }
        eStatus = (Std_ReturnType)E_OK;
    }
    else
    {
        /* Empty */
    }
    return eStatus;
}
#endif
#endif

#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/* @brief          Adjust the data so that SPI can send data in the order that user expects.
 *
 * @details        For example, Send 7 bytes totally, the first 4 bytes can be send in the right
 *                 order by enabling hardware feature: BYTE SWAP. But the last 3 bytes will not be
 *                 sent in the order user desired. For example, when enable Byte Swap, the last 3
 *                 bytes user wants to send is [0x01,0x02,0x03], the real signal in 'Serial data
 *                 Out' wire will be "0x02 0x03 0x00". This is caused by
 *                 1. The method SPI hardware used to put the data from memory to TX FIFO
 *                 2. The use of Byte Swap.
 *                 3. The access width of Register TX_DATA is 32 bits.
 *                 This function is used to adjust the last several bytes in one word,so that SPI
 *                 can send data in the order that user expects.
 *
 * @param[in]      pDataBufferTx  The Tx buffer address storing the data that user going to send.
 * @param[in]      SendBytesCnt   Total bytes number that user want to send in this channel
 *
 * @return         uint32         The value that will be written into TX_DATA subsequently.
 *
 */
SPI_TEXT_SECTION static uint32 Spi_LL_AdjustDataInWordBeforeSend(
    const Spi_DataBufferType  *pDataBufferTx,
    const Spi_NumberOfDataType SendBytesCnt,
    uint32                     u32TR_Ctrl)
{
    uint32 u32ReturnData;
    VAR_ALIGN(Spi_DataBufferType TempArry[4], 4)
    uint8 ValidDataCnt = 0u;
    /* PRQA S 3678, 311 ++ #Misra-C:2012 Rule-11.8 Performing pointer arithmetic.
                           #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type
                           whenever possible
                           Reason: Pointer conversion is inevitable in certain scenarios, and we
                           will ensure its rationality in use. */
    Spi_DataBufferType *pDataBufferTxPtr = (Spi_DataBufferType *)pDataBufferTx;
    /* PRQA S 3678, 311 -- */
    /* PRQA S 3305, 310 ++ #Misra-C:2012 Rule-11.3 Performing pointer arithmetic.
    Reason: A different pointer cast and arithmetic should be performed here unavoidably.
    */
    uint32 *TempPtr = (uint32 *)&TempArry[0];
    /* PRQA S 3305, 310 -- */

    if (SendBytesCnt >= 4u)
    {
        if ((u32TR_Ctrl & FCSPI_TRCTRL_LSB_U32) != FCSPI_TRCTRL_LSB_U32)
        {
            u32ReturnData = (uint32)((uint32)((uint32)pDataBufferTxPtr[3] << 24) |
                                     (uint32)((uint32)pDataBufferTxPtr[2] << 16) |
                                     (uint32)((uint32)pDataBufferTxPtr[1] << 8) |
                                     (uint32)pDataBufferTxPtr[0]);
        }
        else
        {
            u32ReturnData = (uint32)((uint32)((uint32)pDataBufferTxPtr[0] << 24) |
                                     (uint32)((uint32)pDataBufferTxPtr[1] << 16) |
                                     (uint32)((uint32)pDataBufferTxPtr[2] << 8) |
                                     (uint32)pDataBufferTxPtr[3]);
        }
    }
    else
    {
        if ((u32TR_Ctrl & FCSPI_TRCTRL_LSB_U32) != FCSPI_TRCTRL_LSB_U32)
        {
            *TempPtr = 0;
            /* PRQA S 4461 ++ #Misra Rule 10.3: A non-constant expression of 'essentially unsigned'
            type (unsigned short) is being converted to narrower unsigned type, 'unsigned char' on
            assignment.
            Reason: The value of an expression should not be assigned to objects with narrower types
            or different types. There is no problem doing this because the value will not exceed the
            range of the type. */
            ValidDataCnt = SendBytesCnt % 4u;
            /* PRQA S 4461 -- */

            /* PRQA S 1862 ++ #Misra Rule 10.4: A cast shall not be performed between a pointer to
            object type and a pointer to a different object type
            Reason: The program will guarantee the legality of these type usage. */
            while (ValidDataCnt > 0)
            /* PRQA S 1862 -- */
            {
                TempArry[4u - ValidDataCnt] = *pDataBufferTxPtr;
                pDataBufferTxPtr++;
                ValidDataCnt--;
            }
            u32ReturnData = *TempPtr;
        }
        else
        {
            switch (SendBytesCnt)
            {
                case 1:
                    u32ReturnData = (uint32)(pDataBufferTxPtr[0] << 24);
                    break;
                case 2:
                    u32ReturnData = (uint32)(((pDataBufferTxPtr[0] << 8) | (pDataBufferTxPtr[1]))
                                             << 16);
                    break;
                case 3:
                    u32ReturnData = (uint32)(((pDataBufferTxPtr[0] << 16) |
                                              (pDataBufferTxPtr[1] << 8) | pDataBufferTxPtr[2])
                                             << 8);
                    break;
                default:
                    u32ReturnData = 0;
                    break;
            }
        }
    }

    return u32ReturnData;
}
#endif

#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief         Adjust the data so that SPI driver can put data into Rx buffer in the order comply
 * with true signal.
 *
 * @param[in]      pDataBufferRx  The Tx buffer address storing the data that user going to recieve.
 * @param[in]      ReceiveBytesCnt   Total bytes number that user want to send/recieve in this channel
 *
 */
SPI_TEXT_SECTION static void Spi_LL_AdjustDataInWordAfterReceive(
    uint32                     u32RxData,
    Spi_DataBufferType        *pDataBufferRx,
    const Spi_NumberOfDataType ReceiveBytesCnt,
    uint32                     u32TR_Ctrl)
{
    uint32 u32Data = u32RxData;
    /* PRQA S 3678 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type
                       whenever possible
                       Reason: That object can not be declared with const type */
    uint8 *TempPtr = (uint8 *)&u32Data;
    /* PRQA S 3678 -- */
    uint8 ValidDataCnt = 0u;
    uint8 u8Index      = 0u;

    if (ReceiveBytesCnt >= 4u)
    {
        if ((u32TR_Ctrl & FCSPI_TRCTRL_LSB_U32) != FCSPI_TRCTRL_LSB_U32)
        {
            pDataBufferRx[0] = (uint8)(u32Data);
            pDataBufferRx[1] = (uint8)(u32Data >> 8u);
            pDataBufferRx[2] = (uint8)(u32Data >> 16u);
            pDataBufferRx[3] = (uint8)(u32Data >> 24u);
        }
        else
        {
            pDataBufferRx[3] = (uint8)(u32Data);
            pDataBufferRx[2] = (uint8)(u32Data >> 8u);
            pDataBufferRx[1] = (uint8)(u32Data >> 16u);
            pDataBufferRx[0] = (uint8)(u32Data >> 24u);
        }
    }
    else
    {
        if ((u32TR_Ctrl & FCSPI_TRCTRL_LSB_U32) != FCSPI_TRCTRL_LSB_U32)
        {
            /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be
            assigned to an object with a narrower essential type or of a different essential type
            category.
            Reason: The number of transfer byte count will not exceed the uint8 limit */
            ValidDataCnt = ReceiveBytesCnt % 4u;
            /* PRQA S 4461 -- */
            for (u8Index = 0; u8Index < ValidDataCnt; u8Index++)
            {
                *(pDataBufferRx + u8Index) = *(TempPtr + 4u - ValidDataCnt + u8Index);
            }
        }
        else
        {
            for (u8Index = 0; u8Index < ReceiveBytesCnt; u8Index++)
            {
                pDataBufferRx[u8Index] = (uint8)((u32Data & 0xff000000u) >> 24u);
                u32Data                = u32Data << 8u;
            }
        }
    }
}
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
/**
 * @brief         Read RX_FIFO to receive data and store them in Rx buffer when CONT = 1, SCK_PHA = 1.
 *
 * @param[in]     pSyncTransState        indicating the transferring state.
 *
 * @return        Std_ReturnType
 *
 * @pre           Pre-compile parameter SPI_SYNC_DRIVER should be STD_ON.
 */
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_GetData_Fast(SPI_SyncStateType *pSyncTransState,
                                                                const Spi_ChnlCfgType *pcChnlCfgRX)
{
    uint32              u32FifoStatusRegVal;
    Spi_DataBufferType *pDataBufferRx = pSyncTransState->pSyncBufferRX;
    uint32              u32BaseAddr   = pSyncTransState->u32FCSPIHwBaseAddr;
    Std_ReturnType      eStatus       = (Std_ReturnType)E_NOT_OK;
    uint32              u32RxData     = 0u;

    /* remain data to read and rx fifo has data */
    if (0u < pSyncTransState->tRxDatRwUnitCnt)
    {
        /* Read reg FIFO_STATUS */
        u32FifoStatusRegVal = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);

        if (0u != (u32FifoStatusRegVal & FCSPI_FIFO_STATUS_RXCNT_MASK_U32)) /* fifo rx has data */
        {
            u32RxData = FCSPI_HWA_ReadRxData((FCSPI_Type *)u32BaseAddr);
            /* Read Data from RX FIFO */
            if (NULL_PTR != pDataBufferRx)
            {
                if (((Spi_NumberOfDataType)1u != pSyncTransState->tRxDatRwUnitCnt) ||
                    ((pcChnlCfgRX->pChannelState->tTransferByteCnt % 4u) == 0u))
                {
                    Spi_LL_AdjustDataInWordAfterReceive(u32RxData,
                                                        pDataBufferRx,
                                                        4u,
                                                        pSyncTransState->u32ChnlFinalTRCTRL);
                    pSyncTransState->pSyncBufferRX += 4u;
                }
                else
                {
                    Spi_LL_AdjustDataInWordAfterReceive(
                        u32RxData,
                        pDataBufferRx,
                        pcChnlCfgRX->pChannelState->tTransferByteCnt % 4u,
                        pSyncTransState->u32ChnlFinalTRCTRL);
                }
            }
            else /* NULL_PTR == pDataBufferRx */
            {
            }

            pSyncTransState->tRxDatRwUnitCnt--;
            eStatus = (Std_ReturnType)E_OK;
        }
        else
        {
            /* Empty */
        }
    }
    else
    {
        /* Empty */
    }
    return eStatus;
}
#endif
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
/**
 * @brief         Transfer a sequence synchronously.
 * @details       Transfer a sequence synchronously.
 *
 * @param[in]     Sequence        Specifies which Sequence is going to be transfer.
 *
 * @return        Std_ReturnType
 *
 * @pre           Pre-compile parameter SPI_SYNC_DRIVER should be STD_ON.
 */
SPI_TEXT_SECTION Std_ReturnType Spi_LL_SyncTransfer(Spi_SequenceType Sequence, uint8 SpiCoreID)
{
    const Spi_JobCfgType      *pcJobCfg;
    const SPI_DeviceStateType *pcDevStat;
    const Spi_JobType         *pcJobArray; /* Job list of the sequence */
    Spi_JobStateType          *pJobStat;
    SPI_SyncStateType         *pSyncState;
    Spi_JobType                tJobsNum; /* Total Jobs num  of the sequence */
    uint32                     u32TR_CTRLVal;
    uint32                     u32CLK_CFGVal;
    Std_ReturnType             tSyncRet;
    Std_ReturnType             tRet      = (Std_ReturnType)E_OK;
    uint32                     u32JobIdx = 0u;

    pcJobArray = Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg->pcJobsArray;
    tJobsNum   = Spi_apxSpiConfigPtr[SpiCoreID]->SequenceConfig[Sequence].SequenceCfg->tNumJobs;

    while (0u < tJobsNum)
    {
        /* the job is going to transmit, set it's status to pending */
        pJobStat             = &g_SPI_tChnJobSeqHwState.aJobStats[pcJobArray[u32JobIdx]];
        pJobStat->eJobResult = SPI_JOB_PENDING;

        pcJobCfg = Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[pcJobArray[u32JobIdx]].JobCfg;

        /* when job start, need to call the start notification function */
        if (NULL_PTR != pcJobCfg->pfStartNotification)
        {
            pcJobCfg->pfStartNotification();
        }

        pcDevStat = &g_Spi_aDeviceState[pcJobCfg->tVirHwUnitIdx];
        /* Set the state of SPI hw unit linked to this job to busy */
        g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[pcJobCfg->tVirHwUnitIdx].Status = SPI_BUSY;

        u32TR_CTRLVal = pcJobCfg->pcDeviceAttrs->DeviceAttrsCfg->u32TR_CTRL;
        u32CLK_CFGVal = pcJobCfg->pcDeviceAttrs->DeviceAttrsCfg->u32CLK_CFG;

        /* write reg clk cfg */
        FCSPI_HWA_WriteCLK_CFG((FCSPI_Type *)(pcDevStat->u32FCSPIHwBaseAddr), u32CLK_CFGVal);

        pSyncState                          = &SPI_SyncTransmitState[pcJobCfg->tVirHwUnitIdx];
        pSyncState->pcChnlIdxListTX         = pcJobCfg->pcChnlsArray;
        pSyncState->pcChnlIdxListRX         = pcJobCfg->pcChnlsArray;
        pSyncState->u32FCSPIHwBaseAddr      = pcDevStat->u32FCSPIHwBaseAddr;
        pSyncState->tChnlCntTX              = pcJobCfg->tChnlCntOfJob;
        pSyncState->tChnlCntRX              = pcJobCfg->tChnlCntOfJob;
        pSyncState->u8PushJobAllTxDatToFifo = (uint8)FALSE;
        pSyncState->u32JobTRCTRL            = u32TR_CTRLVal;
#if (SPI_SUP_CONT_EN_SECOND_EDGE_SAMPLE == STD_OFF)
        if (TRUE == pcJobCfg->WorkaroundNeeded)
        {
            tSyncRet = Spi_LL_Sync_TransferOneJob_Fast(pSyncState, SpiCoreID);
        }
        else
#endif
        {
            tSyncRet = Spi_LL_Sync_TransferOneJob(pSyncState, SpiCoreID);
        }

        g_SPI_tChnJobSeqHwState.aHwUnitSchedQueue[pcJobCfg->tVirHwUnitIdx].Status = SPI_IDLE;

        if ((Std_ReturnType)E_OK == tSyncRet)
        {
            pJobStat->eJobResult = SPI_JOB_OK; /* Job is done set the status as OK */
            if (NULL_PTR == pcJobCfg->pfnJobEndNotify)
            {
                /* Empty */
            }
            else
            {
                /* call end notification function */
                pcJobCfg->pfnJobEndNotify();
            }
        }
        else
        {
            /* timeout, fail */
            do
            {
                /* set current and left job status to fail */
                g_SPI_tChnJobSeqHwState.aJobStats[pcJobArray[u32JobIdx]].eJobResult = SPI_JOB_FAILED;

                if (NULL_PTR ==
                    Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[pcJobArray[u32JobIdx]].JobCfg->pfnJobEndNotify)
                {
                    /* Empty */
                }
                else
                {
                    Spi_apxSpiConfigPtr[SpiCoreID]
                        ->JobConfig[pcJobArray[u32JobIdx]]
                        .JobCfg->pfnJobEndNotify();
                }

                u32JobIdx++;
                tJobsNum--;
            }
            while ((Spi_JobType)0 < tJobsNum);

            tJobsNum = 1u; /* needed to end correctly the outer loop */
            tRet     = (Std_ReturnType)E_NOT_OK;
        }
        /* iterate to next job in sequence */

        u32JobIdx++;
        tJobsNum--;
    } /* while (JobsCount > 0u) */

#if (SPI_DEM_ENABLE == STD_ON)
    if ((Std_ReturnType)E_OK != tRet)
    {
        if ((uint32)STD_ON == Spi_apxSpiConfigPtr[SpiCoreID]->Spi_E_Hardware_ErrorCfg.state)
        {
            (void)Dem_SetEventStatus(
                (Dem_EventIdType)Spi_apxSpiConfigPtr[SpiCoreID]->Spi_E_Hardware_ErrorCfg.id,
                DEM_EVENT_STATUS_FAILED);
        }
        else
        {
            /* Empty */
        }
    }
    else
    {
        if ((uint32)STD_ON == Spi_apxSpiConfigPtr[SpiCoreID]->Spi_E_Hardware_ErrorCfg.state)
        {
            (void)Dem_SetEventStatus(
                (Dem_EventIdType)Spi_apxSpiConfigPtr[SpiCoreID]->Spi_E_Hardware_ErrorCfg.id,
                DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            /* Empty */
        }
    }
#endif

    return tRet;
}
#endif /* SPI_SYNC_DRIVER == STD_ON */

#if (SPI_SYNC_DRIVER == STD_ON)
/**
 * @brief         Write data in Tx buffer to TX_FIFO.
 * @details       Write data in Tx buffer to TX_FIFO.
 *
 * @param[in]     pSyncTransState        indicating the data format to be transmitted.
 *
 * @return        Std_ReturnType
 *
 * @pre           Pre-compile parameter SPI_SYNC_DRIVER should be STD_ON.
 */
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_SendData(SPI_SyncStateType *pSyncTransState)
{
    uint32              u32FifoStatusRegValue;
    uint32              WordsNumInTxFifo;
    uint32              WordsNumInRxFifo;
    uint32              u32TempTransferData;
    Std_ReturnType      eStatus             = (Std_ReturnType)E_NOT_OK;
    uint32              u32BaseAddr         = pSyncTransState->u32FCSPIHwBaseAddr;
    Spi_DataBufferType *pDataBufferTx       = pSyncTransState->pSyncBufferTX;
    uint8               u8TxBufAccessLength = pSyncTransState->u8TxBufAccessLength;

    /* Read reg FIFO_STATUS */
    u32FifoStatusRegValue = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);
    WordsNumInTxFifo      = FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(u32FifoStatusRegValue);
    WordsNumInRxFifo      = FCSPI_FIFOSTATUS_RXCOUNT_VAL_U32(u32FifoStatusRegValue);

    /* there is something to write and Transmit FIFO not full */
    if ((pSyncTransState->tTxDatRwUnitCnt > 0u) &&
        ((WordsNumInTxFifo + WordsNumInRxFifo) < (SPI_FIFO_SIZE_FCSPI - 1u)))
    {
        pSyncTransState->tTxDatRwUnitCnt--;

        if (NULL_PTR != pDataBufferTx)
        {
            if (SPI_DATA_RW_8_BITS_PER_UNIT == u8TxBufAccessLength)
            {

                u32TempTransferData = *((uint8 *)pDataBufferTx);
                pDataBufferTx++;
            }
            else if (SPI_DATA_RW_16_BITS_PER_UNIT == u8TxBufAccessLength)
            {
                u32TempTransferData = (uint16)(((uint16)pDataBufferTx[1] << 8) | pDataBufferTx[0]);
                pDataBufferTx += 2u;
            }
            else /* SPI_DATA_RW_32_BITS_PER_UNIT == u8TxBufAccessLength */
            {
                u32TempTransferData =
                    (uint32)(((uint32)pDataBufferTx[3] << 24) | ((uint32)pDataBufferTx[2] << 16) |
                             ((uint32)pDataBufferTx[1] << 8) | ((uint32)pDataBufferTx[0]));
                pDataBufferTx += 4u;
            }
        }
        else
        {

            u32TempTransferData = pSyncTransState->u32SyncDefaultData;
        }

        pSyncTransState->pSyncBufferTX = pDataBufferTx;
        /* write reg tx data */
        FCSPI_HWA_WriteTxData((FCSPI_Type *)u32BaseAddr, u32TempTransferData);

        if (0u == (pSyncTransState->tTxDatRwUnitCnt | pSyncTransState->tChnlCntTX))
        {
            pSyncTransState->u8PushJobAllTxDatToFifo = (uint8)TRUE;
        }
        else
        {
            /* Empty */
        }
        eStatus = (Std_ReturnType)E_OK;
    }
    else
    {
        /* Empty */
    }
    return eStatus;
}
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
/**
 * @brief         Read RX_FIFO to receive data.
 * @details       Read RX_FIFO to receive data.
 *
 * @param[in]     pSyncTransState        indicating the data format to be transmitted.
 *
 * @return        Std_ReturnType
 *
 * @pre           Pre-compile parameter SPI_SYNC_DRIVER should be STD_ON.
 */
SPI_TEXT_SECTION static Std_ReturnType Spi_LL_Sync_GetData(SPI_SyncStateType *pSyncTransState)
{
    uint32              u32FifoStatusRegVal;
    uint32              u32TRCTRLRegValue;
    Spi_DataBufferType *pDataBufferRx       = pSyncTransState->pSyncBufferRX;
    uint16              u16DataBufferRx     = 0;
    uint32              u32DataBufferRx     = 0;
    uint32              u32BaseAddr         = pSyncTransState->u32FCSPIHwBaseAddr;
    uint8               u8RxBufAccessLength = pSyncTransState->u8RxBufAccessLength;
    Std_ReturnType      eStatus             = (Std_ReturnType)E_NOT_OK;

    uint8 SpiCoreID = GET_CPU_ID();

    /* remain data to read and rx fifo has data */
    if (0u < pSyncTransState->tRxDatRwUnitCnt)
    {
        /* Read reg FIFO_STATUS */
        u32FifoStatusRegVal = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);

        if (0u != (u32FifoStatusRegVal & FCSPI_FIFO_STATUS_RXCNT_MASK_U32)) /* fifo rx has data */
        {
            pSyncTransState->tRxDatRwUnitCnt--;

            /* Read Data from RX FIFO */
            if (NULL_PTR != pDataBufferRx)
            {
                if (SPI_DATA_RW_32_BITS_PER_UNIT == u8RxBufAccessLength)
                {
                    /* Read reg RX_DATA */
                    u32DataBufferRx  = FCSPI_HWA_ReadRxData((FCSPI_Type *)u32BaseAddr);
                    pDataBufferRx[0] = (uint8)(u32DataBufferRx);
                    pDataBufferRx[1] = (uint8)(u32DataBufferRx >> 8u);
                    pDataBufferRx[2] = (uint8)(u32DataBufferRx >> 16u);
                    pDataBufferRx[3] = (uint8)(u32DataBufferRx >> 24u);
                    pDataBufferRx += 4u;
                }
                else if (SPI_DATA_RW_16_BITS_PER_UNIT == u8RxBufAccessLength)
                {
                    /* Read reg RX_DATA */
                    u16DataBufferRx  = (uint16)FCSPI_HWA_ReadRxData((FCSPI_Type *)u32BaseAddr);
                    pDataBufferRx[0] = (uint8)(u16DataBufferRx);
                    pDataBufferRx[1] = (uint8)(u16DataBufferRx >> 8u);
                    pDataBufferRx += 2u;
                }
                else
                {
                    /* Read reg RX_DATA */
                    *pDataBufferRx = (Spi_DataBufferType)FCSPI_HWA_ReadRxData(
                        (FCSPI_Type *)u32BaseAddr);
                    pDataBufferRx++;
                }
            }
            else /* NULL_PTR == pDataBufferRx */
            {

                /* Discard data if RX buffer is NULL_PTR */
                s_Spi_u32IgnoredReadData = FCSPI_HWA_ReadRxData((FCSPI_Type *)u32BaseAddr);
            }

            /* Update pSyncBufferRX pointer to next address */
            pSyncTransState->pSyncBufferRX = pDataBufferRx;

            if (((Spi_NumberOfDataType)0 == pSyncTransState->tRxDatRwUnitCnt) &&
                (pSyncTransState->tChnlCntRX > (Spi_ChannelType)0))
            {
                /* Update channel count RX */
                pSyncTransState->tChnlCntRX--;
                pSyncTransState->pcChnlIdxListRX++;
                pSyncTransState->u8RxBufAccessLength =
                    Spi_apxSpiConfigPtr[SpiCoreID]
                        ->ChannelAttrsConfig[*pSyncTransState->pcChnlIdxListRX]
                        .ChannelAttrsCfg->u8ChnlBufAccessLength;
                u8RxBufAccessLength = pSyncTransState->u8RxBufAccessLength;
                pSyncTransState->tRxDatRwUnitCnt =
                    Spi_apxSpiConfigPtr[SpiCoreID]
                        ->ChannelConfig[*pSyncTransState->pcChnlIdxListRX]
                        .ChannelCfg->pChannelState->tTransferByteCnt;
                pSyncTransState->pSyncBufferRX = Spi_apxSpiConfigPtr[SpiCoreID]
                                                     ->ChannelConfig[*pSyncTransState->pcChnlIdxListRX]
                                                     .ChannelCfg->pcChnlTxRxBuffer->pSpiRxBuf;

                if (SPI_DATA_RW_8_BITS_PER_UNIT == u8RxBufAccessLength)
                {
                    /* Empty */
                }
                else if (SPI_DATA_RW_16_BITS_PER_UNIT == u8RxBufAccessLength)
                {
                    pSyncTransState->tRxDatRwUnitCnt /= 2u;
                }
                else /* SPI_DATA_RW_32_BITS_PER_UNIT == u8RxBufAccessLength */
                {
                    pSyncTransState->tRxDatRwUnitCnt /= 4u;
                }
            }

            eStatus = (Std_ReturnType)E_OK;
        }
        else
        {
            /* Empty */
        }

        /* read reg TR_CTRL */
        u32TRCTRLRegValue = FCSPI_HWA_GetTxRxControl((FCSPI_Type *)u32BaseAddr);

        /* read reg fifo status */
        u32FifoStatusRegVal = FCSPI_HWA_GetFifoStatus((FCSPI_Type *)u32BaseAddr);

        /*
         * if all data has push to fifo, Continuous mode enabled, and fifo has clear,
         * it means all data of job has send, and recv data has handled, clear the bit
         */
        if (((uint8)TRUE == pSyncTransState->u8PushJobAllTxDatToFifo) &&
            (0u != (u32TRCTRLRegValue & FCSPI_TRCTRL_CONT_EN_U32)) && (0u == u32FifoStatusRegVal))
        {
            pSyncTransState->u32ChnlFinalTRCTRL &= ~(FCSPI_TRCTRL_CONT_EN_U32 |
                                                     FCSPI_TRCTRL_CONT_GO_U32); /* clear cont  */
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)u32BaseAddr, pSyncTransState->u32ChnlFinalTRCTRL);
        }
        else
        {
            /* Empty */
        }
    }
    else
    {
        /* Empty */
    }
    return eStatus;
}
#endif

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
/**
 * @brief   Initialize DMA channels.
 * @details Initialize DMA Tx/Rx cahnnels for SPI Hw unit.
 *
 * @param[in]     pDevState     Pointer indicating which Spi Hw unit and Dma channel is used.
 *
 */
/* PRQA S 3673 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type whenever
 *                 possible
 *                 Reason: This usage is legal */
SPI_TEXT_SECTION void Spi_LL_DmaInit(const SPI_DeviceStateType *pDevState)
{
    const Spi_HwUnitCfgType *pcHwCfg = pDevState->pcHwUnitCfg;

    /*Configuration here is temperary, they will be updated to actual configuration later */
    Spi_DmaChannelAttr.eDmaDSIZE = DMA_TRAN_SIZE_4B;
    Spi_DmaChannelAttr.eDmaSSIZE = DMA_TRAN_SIZE_4B;

    Spi_DmaChannelAttr.u32DmaNBYTES = 4u;

    /* Disable destination and source address increment*/
    Spi_DmaChannelAttr.s16SrcDataOffset  = 0;
    Spi_DmaChannelAttr.s16DestDataOffset = 0;

    /* Disable destination and source circular buffer*/
    Spi_DmaChannelAttr.bDmaSrcCircularBufferEn  = FALSE;
    Spi_DmaChannelAttr.bDmaDestCircularBufferEn = FALSE;

    /* Disable destination and source inner loop offset */
    Spi_DmaChannelAttr.bDmaSILOE = FALSE;
    Spi_DmaChannelAttr.bDmaDILOE = FALSE;

    Spi_DmaChannelAttr.u16DmaOuterLoopCounter = 1u; /* Set OuterLoopCounter to 1 for now */

    /* Tx Dma channel: Set reg TX_FIFO address as Dma Destination address */
    Spi_DmaChannelAttr.bDmaAutoStopEnable = TRUE;
    Spi_DmaChannelAttr.u32DmaSADDR        = 0u;
    Spi_DmaChannelAttr.u32DmaDADDR = FCSPI_BASEADDR2TX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr);
    (void)Dma_ConfigChannel(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, &Spi_DmaChannelAttr);

    /* Rx Dma channel: Set reg RX_FIFO address as Dma soure address*/
    Spi_DmaChannelAttr.u32DmaSADDR = FCSPI_BASEADDR2RX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr);
    Spi_DmaChannelAttr.u32DmaDADDR = 0u;
    (void)Dma_ConfigChannel(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, &Spi_DmaChannelAttr);
}
#endif /* (SPI_DMA_USED == STD_ON) */
/* PRQA S 3673 -- */

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
/**
 * @brief   Configure DMA complete interrupt.
 * @details This function is called to configure DMA complete interrupt of DMA Tx/Rx channel.
 *          If driver is in interrupt mode, DMA transfer complete interrupt will be enabled.
 *          If driver is in polling mode, DMA transfer complete interrupt will be disabled.
 *
 * @param[in]     pDevState        Pointer indicating which Spi Hw unit and Dma channel is used.
 * @param[in]     AsyncMode        Indicating which async mode the driver is configured to.
 *                                 (interrupt or polling).
 *
 * @pre   Pre-compile parameter SPI_DMA_USED and SPI_ASYNC_DRIVER both shall be STD_ON.
 */
LOCAL_INLINE void Spi_LL_DmaIrqCfg(const SPI_DeviceStateType *pDevState, Spi_AsyncModeType AsyncMode)
{
    const Spi_HwUnitCfgType *pcHwCfg = pDevState->pcHwUnitCfg;

    if (SPI_INTERRUPT_MODE == AsyncMode)
    {
        Dma_SetCfgCompleteInterrupt(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, TRUE);
        Dma_SetCfgCompleteInterrupt(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, TRUE);
    }
    else
    {
        Dma_SetCfgCompleteInterrupt(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, FALSE);
        Dma_SetCfgCompleteInterrupt(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, FALSE);
    }
}
#endif

/**
 * @brief   Initialize Dma Tx channel.
 * @details This function is called to initilize DMA Tx channel according to configuration of Spi
 *          channel.
 *
 * @param[in]     pDevState        Pointer indicating which Spi Hw unit and Dma channel is used.
 * @param[in]     Channel          Channel ID.
 *
 * @pre   Pre-compile parameter SPI_DMA_USED and SPI_ASYNC_DRIVER both shall be STD_ON.
 */
#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
SPI_TEXT_SECTION void Spi_LL_Channel_InitDmaTx(SPI_DeviceStateType *pDevState, Spi_ChannelType Channel)
{
    uint8                    SpiCoreID = GET_CPU_ID();
    const Spi_HwUnitCfgType *pcHwCfg   = pDevState->pcHwUnitCfg;
    const Spi_ChnlAttrsType *pcChnlAttrCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelAttrsConfig[Channel].ChannelAttrsCfg;
    const Spi_ChnlCfgType *pcChnlCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
    const Spi_ChannelStateType *pChanlStat = pcChnlCfg->pChannelState;
    /* PRQA S 3678 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type
     *                 whenever possible
     *                 Reason: That object can not be declared with const type */
    Spi_DataBufferType *pDataBufferTx;
    /* PRQA S 3678 -- */
    Spi_NumberOfDataType tFrmCnt;
    uint32               u32TRCTRL;
    Dma_ChannelType      tDmaChnlCfg = { .u32DmaNBYTES = (uint32)(0x00u),
                                         .s32DmaILOFF  = (sint32)0u,
                                         .bDmaSILOE    = FALSE,
                                         .bDmaDILOE    = FALSE };

    /* Get the current TR_CTRL command for this channel */
    u32TRCTRL = (pDevState->u32DeviceTRCTRL | pcChnlAttrCfg->u32ChnlTRCTRL);
    /* Store the current command for this channel */
    pDevState->u32CurFrameTRCTRL = u32TRCTRL;
    u32TRCTRL                    = u32TRCTRL & FCSPI_TRCTRL_RWBITS_MASK_U32;

    /* set TR_CTRL register */
    if (0u != (u32TRCTRL & FCSPI_TRCTRL_CONT_EN_U32))
    {
        if ((uint8)TRUE == pDevState->u8FirstChnlOfJobFlag)
        {
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, u32TRCTRL);

            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                                     FCSPI_TRCTRL_CONT_GO_U32);
            pDevState->u8FirstChnlOfJobFlag = (uint8)FALSE;
        }
        else
        {
            /* write reg TR_CTRL */
            FCSPI_HWA_SetTxRxControl((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                                     (u32TRCTRL | FCSPI_TRCTRL_CONT_GO_U32));
        }
    }
    else
    {
        /* write reg TR_CTRL */
        FCSPI_HWA_SetTxRxControl((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr, u32TRCTRL);
    }
    /* set FIFO_WTM register */
    FCSPI_HWA_SetFIFOWTM((FCSPI_Type *)pDevState->u32FCSPIHwBaseAddr,
                         FCSPI_FIFO_WTM_TXRXWATER_DEFAULT_U32);

    if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
    {
        tFrmCnt = pChanlStat->tTransferByteCnt;
    }
    else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
    {
        tFrmCnt = pChanlStat->tTransferByteCnt / 2u;
    }
    else
    {
        tFrmCnt = pChanlStat->tTransferByteCnt / 4u;
    }

    /* Configure DMA according to which data is gonging to be send:Default data or data in Tx buffer*/
    if (0u == ((pChanlStat->u8DefaultTransFlag) & ((uint8)SPI_CHANNEL_FLAG_TX_DEFAULT_U8)))
    {
        pDataBufferTx = pcChnlCfg->pcChnlTxRxBuffer->pSpiTxBuf;
        Dma_SetCfgSaddr(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (uint32)pDataBufferTx);

        if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            /* overwrite the default src next offset */
            /* 1 bytes src transfer size, 1 bytes dest transfer size */
            /* 1 bytes src offset */
            Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (sint16)1u);
            Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8TxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_1B);
            Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8TxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_1B);
            /* dest address */
            /* Compiler_Warning: It is intended for the address of the element to be passed
                                to the function as an unsigned integer*/
            Dma_SetCfgDaddr(pcHwCfg->eDmaInstance,
                            pcHwCfg->u8TxDmaChannel,
                            FCSPI_BASEADDR2TX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
            /* 1 bytes to transfer */
            tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x01u);
            (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                    pcHwCfg->u8TxDmaChannel,
                                                    &tDmaChnlCfg);
        }
        else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            /* overwrite the default src next offset */
            /* 2 bytes src transfer size, 2 bytes dest transfer size */
            /* 2 bytes src offset */
            Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (sint16)2u);
            Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8TxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_2B);
            Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8TxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_2B);
            /* dest address */
            /* Compiler_Warning: It is intended for the address of the element to be passed
                                to the function as an unsigned integer*/
            Dma_SetCfgDaddr(pcHwCfg->eDmaInstance,
                            pcHwCfg->u8TxDmaChannel,
                            FCSPI_BASEADDR2TX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
            /* 2 bytes to transfer */
            tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x02u);
            (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                    pcHwCfg->u8TxDmaChannel,
                                                    &tDmaChnlCfg);
        }
        else /* SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
        {
            /* overwrite the default src next offset */
            /* 4 bytes src transfer size, 4 bytes dest transfer size */
            /* 4 bytes src offset */
            Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (sint16)4u);
            Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8TxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_4B);
            Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8TxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_4B);
            /* dest address */
            /* Compiler_Warning: It is intended for the address of the element to be passed
                                to the function as an unsigned integer*/
            Dma_SetCfgDaddr(pcHwCfg->eDmaInstance,
                            pcHwCfg->u8TxDmaChannel,
                            FCSPI_BASEADDR2TX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
            /* 4 bytes to transfer */
            tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x04u);
            (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                    pcHwCfg->u8TxDmaChannel,
                                                    &tDmaChnlCfg);
        }

        Dma_SetCfgDoff(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (sint16)0u);
    }
    else /* Default data */
    {
        /* Set address of Default data as DMA source address */
        Dma_SetCfgSaddr(pcHwCfg->eDmaInstance,
                        pcHwCfg->u8TxDmaChannel,
                        (uint32)(&pcChnlCfg->u32DefaultTransData));

        /* overwrite the default src next offset */
        /* 1 bytes src transfer size, 1 bytes dest transfer size */
        /* 1 bytes src offset */
        Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (sint16)0u);
        Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                 pcHwCfg->u8TxDmaChannel,
                                 (uint8)0x00u,
                                 DMA_TRAN_SIZE_1B);
        Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                 pcHwCfg->u8TxDmaChannel,
                                 (uint8)0x00u,
                                 DMA_TRAN_SIZE_1B);

        /* dest address */
        /* Compiler_Warning: It is intended for the address of the element to be passed
                        to the function as an unsigned integer*/
        Dma_SetCfgDaddr(pcHwCfg->eDmaInstance,
                        pcHwCfg->u8TxDmaChannel,
                        FCSPI_BASEADDR2TX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));

        /* 1 bytes to transfer */
        tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x01u);
        (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                pcHwCfg->u8TxDmaChannel,
                                                &tDmaChnlCfg);
        Dma_SetCfgDoff(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (sint16)0u);
    }

    /* get the number of frames to be sent through DMA */
    if (FCSPI_DMA_MAX_CHTRGEN_BLC_CNT < tFrmCnt)
    {
        /* DMA outer loop count is on 9 bits, if e_link field is used */
        pDevState->tLeftDataFrameCnt = tFrmCnt - FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;

        if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            /* Empty */
        }
        else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            pDevState->tLeftDataFrameCnt *= 2u;
        }
        else /* SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
        {
            pDevState->tLeftDataFrameCnt *= 4u;
        }

        tFrmCnt = FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;
        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (uint16)(tFrmCnt));
    }
    else
    {
        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (uint16)(tFrmCnt));
        pDevState->tLeftDataFrameCnt = 0u;
    }

    /* start TX! */
    /* Disable SPT TX enable bit and it will be set after RX DMA setup done */

    /* clear reg bit dma en */
    FCSPI_HWA_ClearDMAEnableRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pcHwCfg->u8HwInstIdx),
                                   (uint32)(FCSPI_DMA_EN_TFDE_MASK_U32));
    /* TX HW request */
    Dma_EnableHwRequest(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel);
}
#endif /* SPI_DMA_USED == STD_ON */

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
/**
 * @brief   Initialize Dma Rx channel.
 * @details This function is called to initilize DMA Rx channel according to configuration of Spi
 *          channel.
 *
 * @param[in]     pDevState        Pointer indicating which Spi Hw unit and Dma channel is used.
 * @param[in]     Channel          Channel ID.
 *
 * @pre   Pre-compile parameter SPI_DMA_USED and SPI_ASYNC_DRIVER both shall be STD_ON.
 */
SPI_TEXT_SECTION void Spi_LL_Channel_InitDmaRx(SPI_DeviceStateType *pDevState, Spi_ChannelType Channel)
{
    uint8 SpiCoreID = GET_CPU_ID();

    const Spi_HwUnitCfgType *pcHwCfg = pDevState->pcHwUnitCfg;
    const Spi_ChnlAttrsType *pcChnlAttrCfg;
    const Spi_ChnlCfgType   *pcChnlCfg =
        Spi_apxSpiConfigPtr[SpiCoreID]->ChannelConfig[Channel].ChannelCfg;
    /* PRQA S 3678 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type
     *                 whenever possible'
     *                 Reason: That object can not be declared with const type */
    Spi_DataBufferType *pDataBufferRx;
    /* PRQA S 3678 -- */
    Spi_NumberOfDataType tFrmCnt;
    Dma_ChannelType      tDmaChnlCfg = { .u32DmaNBYTES = (uint32)(0x00u),
                                         .s32DmaILOFF  = (sint32)0u,
                                         .bDmaSILOE    = FALSE,
                                         .bDmaDILOE    = FALSE };

    /* Set the TCR parameters for this channel */
    pcChnlAttrCfg = Spi_apxSpiConfigPtr[SpiCoreID]->ChannelAttrsConfig[Channel].ChannelAttrsCfg;
    tFrmCnt       = pcChnlCfg->pChannelState->tTransferByteCnt;

    if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
    {
        /* Empty */
    }
    else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
    {
        tFrmCnt /= 2u;
    }
    else /* SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
    {
        tFrmCnt /= 4u;
    }

    /* get the number of frames to be sent through DMA */
    if (FCSPI_DMA_MAX_CHTRGEN_BLC_CNT < tFrmCnt)
    {
        /* DMA outer loop count is on 9 bits, if e_link field is used */
        pDevState->tRxFrameCnt = tFrmCnt - FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;
        if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            /* Empty */
        }
        else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            pDevState->tRxFrameCnt *= 2u;
        }
        else /* SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
        {
            pDevState->tRxFrameCnt *= 4u;
        }

        tFrmCnt = FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;
    }
    else
    {
        pDevState->tRxFrameCnt = 0u;
    }

    /* Configure RX DMA */
    /* Rx buffer will be NULL if discarding read values */
    pDataBufferRx = pcChnlCfg->pcChnlTxRxBuffer->pSpiRxBuf;

    if (NULL_PTR != pDataBufferRx)
    {
        /* dest address - RX buffer */
        /* Compiler_Warning: It is intended for the address of the element to be passed
                              to the function as an unsigned integer*/
        Dma_SetCfgDaddr(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (uint32)pDataBufferRx);
        if (SPI_DATA_RW_8_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            /* update RX transfer size; 1bytes offset for destination address */
            Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance,
                                       pcHwCfg->u8RxDmaChannel,
                                       (uint16)(tFrmCnt));
            Dma_SetCfgDoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)1u);
            /* Compiler_Warning: It is intended for the address of the element to be passed
                                  to the function as an unsigned integer*/
            Dma_SetCfgSaddr(pcHwCfg->eDmaInstance,
                            pcHwCfg->u8RxDmaChannel,
                            FCSPI_BASEADDR2RX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
            /* overwrite the default src next offset */
            /* 1 bytes src transfer size, 1 bytes dest transfer size */
            /* no src offset */
            Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)0u);
            Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8RxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_1B);
            Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8RxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_1B);
            /* 1 bytes to transfer */
            tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x01u);
            (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                    pcHwCfg->u8RxDmaChannel,
                                                    &tDmaChnlCfg);
        }
        else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            /* update RX transfer size; 2bytes offset for destination address */
            Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance,
                                       pcHwCfg->u8RxDmaChannel,
                                       (uint16)(tFrmCnt));
            Dma_SetCfgDoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)2u);

            /* Compiler_Warning: It is intended for the address of the element to be passed
                                  to the function as an unsigned integer*/
            Dma_SetCfgSaddr(pcHwCfg->eDmaInstance,
                            pcHwCfg->u8RxDmaChannel,
                            FCSPI_BASEADDR2RX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
            /* overwrite the default src next offset */
            /* 2 bytes src transfer size, 2 bytes dest transfer size */
            /* no src offset */
            Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)0u);
            Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8RxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_2B);
            Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8RxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_2B);
            /* 2 bytes to transfer */
            tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x02u);
            (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                    pcHwCfg->u8RxDmaChannel,
                                                    &tDmaChnlCfg);
        }
        else /* SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
        {
            /* update RX transfer size; 4bytes offset for destination address */
            Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance,
                                       pcHwCfg->u8RxDmaChannel,
                                       (uint16)(tFrmCnt));
            Dma_SetCfgDoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)4u);
            /* Compiler_Warning: It is intended for the address of the element to be passed
                                  to the function as an unsigned integer*/
            Dma_SetCfgSaddr(pcHwCfg->eDmaInstance,
                            pcHwCfg->u8RxDmaChannel,
                            FCSPI_BASEADDR2RX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
            /* overwrite the default src next offset */
            /* 4 bytes src transfer size, 4 bytes dest transfer size */
            /* no src offset */
            Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)0u);
            Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8RxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_4B);
            Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                     pcHwCfg->u8RxDmaChannel,
                                     (uint8)0x00u,
                                     DMA_TRAN_SIZE_4B);
            /* 4 bytes to transfer */
            tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x04u);
            (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                    pcHwCfg->u8RxDmaChannel,
                                                    &tDmaChnlCfg);
        }

        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (uint16)(tFrmCnt));
    }
    else
    {
        /* dest address - discard read */
        /* Compiler_Warning: It is intended for the address of the element to be passed
                              to the function as an unsigned integer*/
        Dma_SetCfgDaddr(pcHwCfg->eDmaInstance,
                        pcHwCfg->u8RxDmaChannel,
                        (uint32)&s_Spi_u32IgnoredReadData);
        /* update RX transfer size; 1bytes offset for destination address */
        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (uint16)(tFrmCnt));
        Dma_SetCfgDoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)0u);
        /* Compiler_Warning: It is intended for the address of the element to be passed
                          to the function as an unsigned integer*/
        Dma_SetCfgSaddr(pcHwCfg->eDmaInstance,
                        pcHwCfg->u8RxDmaChannel,
                        FCSPI_BASEADDR2RX_DATA_ADDR32(pDevState->u32FCSPIHwBaseAddr));
        /* overwrite the default src next offset */
        /* 1 bytes src transfer size, 1 bytes dest transfer size */
        /* no src offset */
        Dma_SetCfgSoff(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (sint16)0u);
        Dma_SetCfgSModuloAndSize(pcHwCfg->eDmaInstance,
                                 pcHwCfg->u8RxDmaChannel,
                                 (uint8)0x00u,
                                 DMA_TRAN_SIZE_1B);
        Dma_SetCfgDModuloAndSize(pcHwCfg->eDmaInstance,
                                 pcHwCfg->u8RxDmaChannel,
                                 (uint8)0x00u,
                                 DMA_TRAN_SIZE_1B);
        /* 1 bytes to transfer */
        tDmaChnlCfg.u32DmaNBYTES = (uint32)(0x01u);
        (void)Dma_SetChannelLoopOffsetAndNBYTES(pcHwCfg->eDmaInstance,
                                                pcHwCfg->u8RxDmaChannel,
                                                &tDmaChnlCfg);
    }

    /* start RX */
    /* Peripheral Registers */
    Dma_EnableHwRequest(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel);
    /* Enable SPI DMA TX */
    /* set reg bit dma en */
    FCSPI_HWA_SetDmaEn((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pcHwCfg->u8HwInstIdx),
                       (uint32)(FCSPI_DMA_EN_TFDE_MASK_U32));
}
#endif /* SPI_DMA_USED == STD_ON */

/**
 * @brief   Restart the DMA transmission, refreshing the size.
 * @details Source and destination addresses are already set into the active TCDs.
 *
 * @param[in]     pDevState      Specifies which FCSPI module is used
 *
 * @pre     The function can be called only if Spi_FCSpi_JobTransferDmaStart() was
 *          previously called to initialize the DMA configuration.
 */
#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
LOCAL_INLINE void Spi_LL_Job_RestartDmaTxTransfer(SPI_DeviceStateType *pDevState)
{
    uint8 SpiCoreID = GET_CPU_ID();

    Spi_NumberOfDataType     tFrmCnt;
    const Spi_ChnlAttrsType *pcChnlAttr = Spi_apxSpiConfigPtr[SpiCoreID]
                                              ->ChannelAttrsConfig[*(pDevState->pcCurChnlIdxPointerTx)]
                                              .ChannelAttrsCfg;
    const Spi_HwUnitCfgType *pcHwCfg = pDevState->pcHwUnitCfg;

    if (SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttr->u8ChnlBufAccessLength)
    {
        tFrmCnt = pDevState->tLeftDataFrameCnt / 4u;
    }
    else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttr->u8ChnlBufAccessLength)
    {
        tFrmCnt = pDevState->tLeftDataFrameCnt / 2u;
    }
    else
    {
        tFrmCnt = pDevState->tLeftDataFrameCnt;
    }

    /* get the number of frames to be sent through DMA */
    if (FCSPI_DMA_MAX_CHTRGEN_BLC_CNT < tFrmCnt)
    {
        /* DMA outer loop count is on 9 bits, if e_link field is used */
        pDevState->tLeftDataFrameCnt = tFrmCnt - FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;
        if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttr->u8ChnlBufAccessLength)
        {
            pDevState->tLeftDataFrameCnt *= 2u;
        }
        else if (SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttr->u8ChnlBufAccessLength)
        {
            pDevState->tLeftDataFrameCnt *= 4u;
        }
        else
        {
            /* Empty */
        }
        tFrmCnt = FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;

        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel, (uint16)(tFrmCnt));
    }
    else
    {
        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance,
                                   pcHwCfg->u8TxDmaChannel,
                                   (uint16)(tFrmCnt)); /* update tx size */
        pDevState->tLeftDataFrameCnt = 0u;
    }

    pcHwCfg = pDevState->pcHwUnitCfg;
    /* disable tx, after rx setup done, it take effect */
    /* clear reg bit dma en */
    FCSPI_HWA_ClearDMAEnableRegBit((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pcHwCfg->u8HwInstIdx),
                                   (uint32)(FCSPI_DMA_EN_TFDE_MASK_U32));

    Dma_EnableHwRequest(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel); /* enable tx */

    Dma_StartChannel(pcHwCfg->eDmaInstance, pcHwCfg->u8TxDmaChannel);
}
#endif

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
/**
 * @brief   Restart the DMA transmission, refreshing the size.
 * @details Source and destination addresses are already set into the active TCDs.
 *
 * @param[in]     pDevState      Specifies which FCSPI module is used
 *
 * @pre     The function can be called only if Spi_FCSpi_JobTransferDmaStart() was
 *          previously called to initialize the DMA configuration.
 */
LOCAL_INLINE void Spi_LL_Job_RestartDmaRxTransfer(SPI_DeviceStateType *pDevState)
{
    Spi_NumberOfDataType     tFrmCnt;
    const Spi_ChnlAttrsType *pcChnlAttrCfg;
    const Spi_HwUnitCfgType *pcHwCfg = pDevState->pcHwUnitCfg;

    uint8 SpiCoreID = GET_CPU_ID();

    pcChnlAttrCfg = Spi_apxSpiConfigPtr[SpiCoreID]
                        ->ChannelAttrsConfig[*(pDevState->pcCurChnlIdxPointerRX)]
                        .ChannelAttrsCfg;
    if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
    {
        tFrmCnt = pDevState->tRxFrameCnt / 2u;
    }
    else if (SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
    {
        tFrmCnt = pDevState->tRxFrameCnt / 4u;
    }
    else
    {
        tFrmCnt = pDevState->tRxFrameCnt;
    }

    /* get the number of frames to be sent through DMA */
    if (FCSPI_DMA_MAX_CHTRGEN_BLC_CNT < tFrmCnt)
    {
        /* DMA outer loop count is on 9 bits, if e_link field is used */
        pDevState->tRxFrameCnt = tFrmCnt - FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;

        if (SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            pDevState->tRxFrameCnt *= 4u;
        }
        else if (SPI_DATA_RW_16_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength)
        {
            pDevState->tRxFrameCnt *= 2u;
        }
        else /* SPI_DATA_RW_32_BITS_PER_UNIT == pcChnlAttrCfg->u8ChnlBufAccessLength */
        {
            /* Empty */
        }

        tFrmCnt = FCSPI_DMA_MAX_CHTRGEN_BLC_CNT;

        /* update RX transfer size */
        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (uint16)(tFrmCnt));
    }
    else
    {
        /* update RX transfer size */
        Dma_UpdateOuterLoopCounter(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel, (uint16)(tFrmCnt));
        pDevState->tRxFrameCnt = 0u;
    }

    Dma_EnableHwRequest(pcHwCfg->eDmaInstance, pcHwCfg->u8RxDmaChannel);
    /* set reg bit dma en */
    FCSPI_HWA_SetDmaEn((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pcHwCfg->u8HwInstIdx),
                       (uint32)(FCSPI_DMA_EN_TFDE_MASK_U32));
}
#endif

#if ((SPI_CANCEL_API == STD_ON) && (SPI_SLAVE_MODE_SUPPORT == STD_ON))
/**
 * @brief   Cancel the sequence of fcspi that working asynchronously in slave mode.
 * @details Cancel the sequence of fcspi that working asynchronously in slave mode.
 *
 * @param[in]     Sequence      Specifies which sequence is going to be canceled.
 *
 * @pre     Precompile parameter SPI_CANCEL_API and SPI_SLAVE_MODE_SUPPORT both shall be STD_ON.
 *
 */
SPI_TEXT_SECTION void Spi_LL_SlaveModeCancel(Spi_SequenceType Sequence)
{
    const Spi_JobCfgType      *pcJobParm;
    Spi_JobType                tJobId;
    const SPI_DeviceStateType *pDevState;
    uint32                     u32FifoStatus;
    const Spi_HwUnitCfgType   *pHwUnitCfg;
    FCSPI_Type                *pSpi    = NULL_PTR;
    uint32                     cfg1    = 0u;
    uint32                     inten   = 0u;
    uint32                     dmaen   = 0u;
    uint32                     clkcfg  = 0u;
    uint32                     fifowtm = 0u;
    uint32                     trctrl  = 0u;

    uint8 SpiCoreID = GET_CPU_ID();

    if (NULL_PTR != (g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).pcCurJobIdxPointer)
    {
        tJobId     = *((g_SPI_tChnJobSeqHwState.aSeqStats[Sequence]).pcCurJobIdxPointer);
        pcJobParm  = Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[tJobId].JobCfg;
        pDevState  = &g_Spi_aDeviceState[pcJobParm->tVirHwUnitIdx];
        pHwUnitCfg = pDevState->pcHwUnitCfg;
        pSpi       = (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32((pHwUnitCfg->u8HwInstIdx));

        if (SPI_SLAVE == pHwUnitCfg->eSpiHwUnitMode)
        {
#if (SPI_DMA_USED == STD_ON)
            if (0u != pHwUnitCfg->bUseDma)
            {
                /* stop dma */
                Dma_DisableHwRequest(pHwUnitCfg->eDmaInstance,
                                     pHwUnitCfg->u8TxDmaChannel); /* disable tx first */
                Dma_DisableHwRequest(pHwUnitCfg->eDmaInstance,
                                     pHwUnitCfg->u8RxDmaChannel); /* disable rx */
            }
#endif

            /* read reg fifo status */
            u32FifoStatus = FCSPI_HWA_GetFifoStatus(
                (FCSPI_Type *)FCSPI_IDX2BASEADDR_U32((pHwUnitCfg->u8HwInstIdx)));
            u32FifoStatus &= (FCSPI_FIFO_STATUS_TXCNT_MASK_U32 | FCSPI_FIFO_STATUS_RXCNT_MASK_U32);
            if (0u != u32FifoStatus)
            {
                inten   = pSpi->INT_EN;
                dmaen   = pSpi->DMA_EN;
                clkcfg  = pSpi->CLK_CFG;
                fifowtm = pSpi->FIFO_WTM;
                cfg1    = pSpi->CFG1;
                trctrl  = pSpi->TR_CTRL;

                pSpi->CTRL |= FCSPI_CTRL_SW_RST_U32;
                pSpi->CTRL &= ~FCSPI_CTRL_SW_RST_U32;

                pSpi->INT_EN   = inten;
                pSpi->DMA_EN   = dmaen;
                pSpi->CLK_CFG  = clkcfg;
                pSpi->FIFO_WTM = fifowtm;
                pSpi->CFG1     = cfg1;
                pSpi->TR_CTRL  = trctrl;

                FCSPI_HWA_EnableDebug((FCSPI_Type *)FCSPI_IDX2BASEADDR_U32(pHwUnitCfg->u8HwInstIdx));
            }
            else
            {
                /* Empty */
            }
            /* finish job transfer */
            Spi_AfterOneJobTransferDone(pcJobParm);
        }
        else
        {
            /* Empty */
        }
    }
}
#endif

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function is called in order to mark the jobs of a sequence as ready to be transmitted.
 * @details For each job in sequence, the function checks if it is already
 *          linked to another pending sequence.
 *          If at least one job is already linked, the function returns E_NOT_OK.
 *          Elsewhere, all jobs in sequence are locked (linked to the current
 *          sequence)
 *
 * @param[in]      tSequence        The sequence ID.
 * @param[in]      pcSeq            The sequence configuration.
 *
 * @return Std_ReturnType
 * @retval E_OK       The given sequence does not share its jobs with some
 *                    other sequences, and all its jobs were successfully
 *                    locked.
 * @retval E_NOT_OK   The given sequence shares its jobs with some other
 *                    sequences. No lock performed for its jobs.
 *
 * @pre    Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON.
 *
 */
SPI_TEXT_SECTION Std_ReturnType Spi_LinkJobsToSequence(Spi_SequenceType      tSequence,
                                                       const Spi_SeqCfgType *pcSeq)
{
    Std_ReturnType    eStatus = (Std_ReturnType)E_OK;
    Spi_JobType       tJobIdx = (Spi_JobType)0;
    Spi_JobStateType *pJobState;

    /* use an optimized implementation for one job sequences */
    if (1u == pcSeq->tNumJobs)
    {
        pJobState = &g_SPI_tChnJobSeqHwState.aJobStats[pcSeq->pcJobsArray[tJobIdx]];
        if (NULL_PTR == pJobState->pAsyncCurSeqStat) /* not link to anyone */
        {
            /* link to current sequence */
            pJobState->pAsyncCurSeqStat = &(g_SPI_tChnJobSeqHwState.aSeqStats[tSequence]);
        }
        else
        {
            /* the job is already locked by a pending sequence */
            eStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    else
    {
        while (tJobIdx < pcSeq->tNumJobs)
        {
            pJobState = &g_SPI_tChnJobSeqHwState.aJobStats[pcSeq->pcJobsArray[tJobIdx]];
            /*
             * driver user often assign one job to only one sequence,
             * so don't use one loop alone to find the locked job
             */
            if (NULL_PTR == pJobState->pAsyncCurSeqStat)
            {
                pJobState->pAsyncCurSeqStat = &(g_SPI_tChnJobSeqHwState.aSeqStats[tSequence]);
            }
            else
            {
                /*
                 * find job JobIdx already locked by a pending sequence,
                 * now rollback all the previous locks
                 */
                while (tJobIdx > 0u)
                {
                    tJobIdx--;
                    g_SPI_tChnJobSeqHwState.aJobStats[pcSeq->pcJobsArray[tJobIdx]].pAsyncCurSeqStat =
                        NULL_PTR;
                }

                eStatus = (Std_ReturnType)E_NOT_OK;
                break;
            }

            /* next job */
            tJobIdx++;
        }
    }
    return eStatus;
}

#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
#if (SPI_CANCEL_API == STD_ON)
/**
 * @brief   This function is called to release the jobs at the end of an async sequence transmission.
 * @details Mark the linked sequence for all jobs as NULL_PTR.
 *
 * @param[in]      tRemainCnt        The starting job
 * @param[in]      pcSeq             The sequence configuration
 *
 * @pre  Pre-compile parameter SPI_CANCEL_API and SPI_ASYNC_DRIVER both shall be STD_ON.
 *
 */
SPI_TEXT_SECTION void Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq)
{
    Spi_JobType tJobsCntOfSeq = pcSeq->tNumJobs;
    Spi_JobType tJobIdx       = tJobsCntOfSeq - tRemainCnt;

    while (tJobIdx < tJobsCntOfSeq)
    {
        g_SPI_tChnJobSeqHwState.aJobStats[pcSeq->pcJobsArray[tJobIdx]].pAsyncCurSeqStat = NULL_PTR;
        ++tJobIdx;
    }
}
#endif /* (SPI_CANCEL_API == STD_ON) */
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function will schedule a job for a given HW unit.
 * @details If the hw is not busy, the transfer is started and the HW unit is
 *          marked as busy.
 *          If the hw is busy (another job is in progress), the new job is
 *          scheduled in a waiting job list, according to its priority.
 *
 * @param[in]      pQueue           HW Unit to be used by the job
 * @param[in]      tJob             ID of the scheduled job
 * @param[in]      pcJobPrm         Configuration of the scheduled job
 *
 * @pre  Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON.
 *
 */
SPI_TEXT_SECTION void Spi_ScheduleJobsOnHwUnit(Spi_HwScheduleQueueType *pQueue,
                                               Spi_JobType              tJob,
                                               const Spi_JobCfgType    *pcJobPrm)
{
    sint8 s8Priority = pcJobPrm->s8Priority;

    if (SPI_IDLE == pQueue->Status)
    {
        /* idle unit => the job can be started */
        pQueue->Status = SPI_BUSY;

        /* mark the job as pending */
        g_SPI_tChnJobSeqHwState.aJobStats[tJob].eJobResult = SPI_JOB_PENDING;
        Spi_LL_JobTransfer(pcJobPrm);
    }
    else /* the hw is busy, add it to the tail of the priority wait queue */
    {
        if (SPI_JOB_NULL != (pQueue->aSchedJobsLastNode[s8Priority])) /* the queue isn't empty */
        {
            /* add the item at the end of the list */
            g_SPI_tChnJobSeqHwState.aJobStats[(pQueue->aSchedJobsLastNode[s8Priority])]
                .tAsyncNextWaitSchedJobIdx = tJob;
        }
        else
        {
            /* the first node of the queue, set the head */
            pQueue->aSchedJobsFirstNode[s8Priority] = tJob;
        }

        /* set the new tail of the list */
        pQueue->aSchedJobsLastNode[s8Priority] = tJob;

        /* the new item will be the last element in the list */
        g_SPI_tChnJobSeqHwState.aJobStats[tJob].tAsyncNextWaitSchedJobIdx = SPI_JOB_NULL;

        if (pQueue->s8MaxSchedJobPriority < s8Priority)
        {
            pQueue->s8MaxSchedJobPriority = s8Priority;
        }
        else
        {
            /* Empty */
        }
    }
}
#endif /* ( SPI_ASYNC_DRIVER == STD_ON ) */

#if (SPI_ASYNC_DRIVER == STD_ON)
/**
 * @brief   This function starts the transfer of the first scheduled job for a given HW unit.
 * @details If the list of scheduled jobs is not empty, pop the first job and
 *          start the transfer. Elsewhere, mark the HW unit as IDLE.
 *
 * @param[in]      pHWUnitQueue     The HW Unit used for scheduling
 *
 * @pre  Pre-compile parameter SPI_LEVEL_DELIVERED shall be SPI_LEVEL_1 or SPI_LEVEL_2.
 *
 */
SPI_TEXT_SECTION void Spi_StartFirstJobScheduleNext(Spi_HwScheduleQueueType *pHWUnitQueue)
{
    Spi_JobType  Job;
    Spi_JobType *pJobListHead;
    sint8        s8Priority;
    sint8        s8MaxSchedJobPriority = pHWUnitQueue->s8MaxSchedJobPriority;

    uint8 SpiCoreID = GET_CPU_ID();

    if (0 > s8MaxSchedJobPriority)
    {
        /* no job waiting => mark the hw as IDLE */
        pHWUnitQueue->Status = SPI_IDLE;
    }
    else
    {
        /* a job is waiting => get the job ID from the highest priority queue */
        pJobListHead = &pHWUnitQueue->aSchedJobsFirstNode[s8MaxSchedJobPriority];
        Job          = *pJobListHead;

        /* set the new head of the list */
        *pJobListHead = g_SPI_tChnJobSeqHwState.aJobStats[Job].tAsyncNextWaitSchedJobIdx;

        /* if the list is empty, set the tail accordingly and adjust the
           scheduled priority level */
        if (SPI_JOB_NULL == *pJobListHead)
        {
            /* reset the tail */
            pHWUnitQueue->aSchedJobsLastNode[s8MaxSchedJobPriority] = SPI_JOB_NULL;

            /* find the first non empty scheduling queue */
            for (s8Priority = s8MaxSchedJobPriority - 1; s8Priority >= 0; s8Priority--)
            {
                if (SPI_JOB_NULL != pHWUnitQueue->aSchedJobsFirstNode[s8Priority])
                {
                    /* there is a scheduled Job for this priority level */
                    break;
                }
                else
                {
                    /* Empty */
                }
            }

            /* Priority is set on the highest priority queue having
               scheduled jobs, or -1 if no other jobs scheduled     */
            pHWUnitQueue->s8MaxSchedJobPriority = s8Priority;
        }
        else
        {
            /* Empty */
        }

        /* mark the job as pending */
        g_SPI_tChnJobSeqHwState.aJobStats[Job].eJobResult = SPI_JOB_PENDING;

        Spi_LL_JobTransfer(Spi_apxSpiConfigPtr[SpiCoreID]->JobConfig[Job].JobCfg);
    }
}
#endif /* ( SPI_ASYNC_DRIVER == STD_ON ) */

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
