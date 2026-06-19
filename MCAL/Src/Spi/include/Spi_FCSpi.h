/**
*   @file    Spi_FCSpi.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Spi - Low level driver header file.
*   @details Spi Low level driver header file.
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
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/

#ifndef SPI_FCSPI_H
#define SPI_FCSPI_H

#include "Spi_Cfg.h"


#ifdef __cplusplus
extern "C"{
#endif

/*==============================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==============================================================================*/

/*==============================================================================
*                                          CONSTANTS
==============================================================================*/
#define SPI_START_SEC_CONST_32
#include "Spi_MemMap.h"
/* spi hardware module base address mapping array */
SPI_DATA_SECTION extern const uint32 g_Spi_aInstanceBaseAddrs[8];
#define SPI_STOP_SEC_CONST_32
#include "Spi_MemMap.h"
 /*==============================================================================
*                                      DEFINES AND MACROS
==============================================================================*/

/**
* @brief Macros used for low-level FCSPI register manipulation (begin section).
*/
#define SPI_FIFO_SIZE_FCSPI   ((uint8)8u)


#define FCSPI_IDX2BASEADDR_U32(index) \
    ((uint32)g_Spi_aInstanceBaseAddrs[(index)])


/* Control Register */
#define FCSPI_CTRL_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x10u))

#define FCSPI_STATUS_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x14u))


/* Interrupt Enable Register */
#define FCSPI_INTEN_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x18u))

/* DMA Enable Register */
#define FCSPI_BASEADDR2DER_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x1Cu))

#define FCSPI_DMA_EN_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x1Cu))

/* Configuration Register 0 */
#define FCSPI_CFG0_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x20u))

/* Configuration Register 1 */
#define FCSPI_CFG1_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x24u))

/* Data Match Register 0 */
#define FCSPI_DMR0_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x30u))

/* Data Match Register 1 */

#define FCSPI_DATA_MATCH1_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x34u))

/* Clock Configuration Register */
#define FCSPI_BASEADDR2CLKCFG_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x40u))

#define FCSPI_CLKCFG_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x40u))

/* FIFO Control Register */
#define FCSPI_BASEADDR2FIFOWTM_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x58u))

#define FCSPI_FIFOWTM_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x58u))

/* FIFO Status Register */
#define FCSPI_BASEADDR2FIFOSTATUS_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x5Cu))

#define FCSPI_FIFOSTATUS_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x5Cu))

/* Transmit Command Register */
#define FCSPI_BASEADDR2TRCTRL_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x60u))


#define FCSPI_IDX2TRCTRL_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x60u))

/* Transmit Data Register */
#define FCSPI_BASEADDR2TX_DATA_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x64u))


#define FCSPI_TX_DATA_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x64u))

/* Receive Status Register */
#define FCSPI_BASEADDR2RX_STATUS_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x70u))


#define FCSPI_RXSTATUS_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x70u))

/* Receive Data Register */
#define FCSPI_BASEADDR2RX_DATA_ADDR32(base_addr) \
    ((uint32)((base_addr) + 0x74u))


#define FCSPI_RX_DATA_ADDR32(index) \
    ((uint32) ((uint32)g_Spi_aInstanceBaseAddrs[(index)] + 0x74u))

/**
* @brief Macros used for low-level FCSPI register read/writes operations (begin section).
*/

/* ---------- Read transfer count register to manage queue --Start ---------- */

/* Read TXCOUNT FIFO value - Nibble */

#define FCSPI_FIFOSTATUS_TXCOUNT_VAL_U32(value) \
    ((value) & FCSPI_FIFO_STATUS_TXCNT_MASK_U32)

/* Read RXCOUNT FIFO value - Nibble */

#define FCSPI_FIFOSTATUS_RXCOUNT_VAL_U32(value) \
    (((value) & FCSPI_FIFO_STATUS_RXCNT_MASK_U32) >> FCSPI_FIFO_STATUS_RXCNT_OFFSET_U32 )


/*==============================================================================
*                                          CONSTANTS
==============================================================================*/


/*==============================================================================
*                                      DEFINES AND MACROS
==============================================================================*/
#if (SPI_ASYNC_DRIVER == STD_ON)
/**
* @brief  Map hw index to FCSPI device structure.
*/
#define FCSPI_HWUNIT2FCSPI(HwUnit)    (&g_Spi_aDeviceState[(HwUnit)])
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

/*==============================================================================
*                                            ENUMS
==============================================================================*/


/*==============================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==============================================================================*/
/**
* @brief This structure holds runtime configuration parameters for Spi handler.
*/
typedef struct {
    const Spi_HwUnitCfgType *pcHwUnitCfg;                         /**< @brief Reference to the corresponding hw config instance. */

#if (SPI_ASYNC_DRIVER == STD_ON)
    uint32                  u32DeviceTRCTRL;                      /**< @brief TCR register used to define different transfer attributes for external device. */
    uint32                  u32DeviceCLKCFG;                      /**< @brief CLKCFG register used to define different transfer attributes for external device. */
    Spi_DataBufferType      *pCurChnlTxBuffer;                    /**< @brief Pointer to the Tx buffer of the channel currently in transmission. */
    Spi_DataBufferType      *pCurChnlRxBuffer;                    /**< @brief Pointer to the Rx buffer of the channel currently in transmission. */
    uint32                  u32ChnlDefaultData;                   /**< @brief The frame default data value to be used for the channel in transmission. */
    const Spi_ChannelType   *pcCurChnlIdxPointerTx;               /**< @brief Position in ChannelIndexList to the channel in transmission. */
    const Spi_ChannelType   *pcCurChnlIdxPointerRX;               /**< @brief Position in ChannelIndexList to the channel in transmission. */
    Spi_ChannelType         tLeftChnlsTX;                         /**< @brief Number of channels in a pending async job, not yet transmitted. */
    Spi_ChannelType         tLeftChnlsRx;                         /**< @brief Number of channels in a pending async job, not yet transmitted. */
    Spi_NumberOfDataType    tLeftDataFrameCnt;                    /**< @brief Number of frames in a pending channel, not yet transmitted. */
    Spi_NumberOfDataType    tFrameCntAlreadySend;                 /**< @brief Number of sent frames, which must be read back in the next ISR call. */
    const Spi_JobCfgType    *pcCurJobCfg;                         /**< @brief Reference to the current job. */
    boolean                 bJobEndFlag;                          /**< @brief Indicates if this is the last chunk of data in the job. */
#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

    uint32                  u32FCSPIHwBaseAddr;                   /**< @brief Memory mapped registers base address. */
    uint32                  u32CurFrameTRCTRL;                    /**< @brief The frame command value to be used for the transmission. */
    Spi_AsyncModeType       eAsyncMode;                           /**< @brief Asynchronous operating mode of the FCSPI unit. */
    Spi_NumberOfDataType    tRxFrameCnt;                          /**< @brief Received frame count. */
    uint8                   u8PollReqFlag;                        /**< @brief Flag that indicates a poll request enable*/
    uint32                  u32PollTXReqFlag;                     /**< @brief Flag that indicates a poll request TX */
    uint32                  u32PollRXReqFlag;                     /**< @brief Flag that indicates a poll request RX*/
    uint8                   u8FirstChnlOfJobFlag;                 /**< @brief Flag that indicates the first channel of job*/
} SPI_DeviceStateType;

/**
* @brief Internal structure keeping a state of transfer process.
* @details  Internal structure keeping a state of transfer process
*           used by Spi_LL_SyncTransfer()
*/
#if (SPI_SYNC_DRIVER == STD_ON)
typedef struct {
    uint32                    u32FCSPIHwBaseAddr;                   /**< @brief Memory mapped register base address. */
    Spi_DataBufferType        *pSyncBufferTX;                       /**< @brief Pointer to the Tx buffer of the channel currently in transmission. */
    Spi_DataBufferType        *pSyncBufferRX;                       /**< @brief Pointer to the Rx buffer of the channel currently in transmission. */
    uint32                    u32SyncDefaultData;                   /**< @brief The frame default data value to be used for the channel in transmission. */
    uint8                     u8TxBufAccessLength;                     /**< @brief The data width value to be used for the transmission. */
    uint8                     u8RxBufAccessLength;                     /**< @brief The data width value to be used for the data receive.*/
    Spi_ChannelType           tChnlCntTX;                           /**< @brief Number of channels in a pending job, not yet transmitted. */
    Spi_ChannelType           tChnlCntRX;                           /**< @brief Number of channels in a pending job, not yet receive. */
    Spi_NumberOfDataType      tTxDatRwUnitCnt;                      /**< @brief read unit count of unsend data from memory for a pending channel */
    Spi_NumberOfDataType      tRxDatRwUnitCnt;                      /**< @brief Number of frames in a pending channel, not yet receive. */
    const Spi_ChannelType     *pcChnlIdxListTX;                     /**< @brief Position in ChannelIndexList of TX channel*/
    const Spi_ChannelType     *pcChnlIdxListRX;                     /**< @brief Position in ChannelIndexList of RX channel*/
    uint8                     u8PushJobAllTxDatToFifo;              /**< @brief Indicates if this is the last chunk of data in the job. */
    uint32                    u32ChnlFinalTRCTRL;                   /**< @brief The frame command value to be used for the transmission. */
    uint32                    u32JobTRCTRL;                         /**< @brief The command value for external device. */
}SPI_SyncStateType;
#endif /* (SPI_SYNC_DRIVER == STD_ON) */
/*==============================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==============================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct 
 * Reason: These macros have the same first 30 characters,but they are differrent in follow characters.Modern compiler will recognize the difference. */

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
    #define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON)) */
#include "Spi_MemMap.h"

/**
* @brief Keep the hw module internal fields.
*/

SPI_DATA_SECTION extern SPI_DeviceStateType g_Spi_aDeviceState[SPI_HW_MODULE_MAX_COUNT];

#if ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON))
    #define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && (SPI_ASYNC_DRIVER == STD_ON)) */
#include "Spi_MemMap.h"
/* PRQA S 791 -- */
/*==============================================================================
*                                    FUNCTION PROTOTYPES
==============================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

SPI_TEXT_SECTION void Spi_LL_Init(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID);

SPI_TEXT_SECTION void Spi_LL_DeInit(Spi_HWUnitType tVirHwUnit, uint8 SpiCoreID);

#if (SPI_ASYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION void Spi_LL_JobTransfer(const Spi_JobCfgType *pcJobCfg);
SPI_TEXT_SECTION void Spi_LL_IrqConfig(Spi_HWUnitType tVirHwUnit, Spi_AsyncModeType AsyncMode);
SPI_TEXT_SECTION void Spi_LL_IrqPoll(Spi_HWUnitType tVirHwUnit);
SPI_TEXT_SECTION void Spi_LL_IsrFifoRx(SPI_DeviceStateType *pDevState, uint8 u8HwInstIdx);

#if (SPI_DMA_USED == STD_ON)
SPI_TEXT_SECTION void Spi_LL_IsrDmaTx(SPI_DeviceStateType *pDevState);
SPI_TEXT_SECTION void Spi_LL_IsrDmaRx(SPI_DeviceStateType *pDevState);
#endif /* (SPI_DMA_USED == STD_ON) */

#endif /* (SPI_ASYNC_DRIVER == STD_ON) */

#if ((SPI_CANCEL_API == STD_ON) && (SPI_SLAVE_MODE_SUPPORT == STD_ON))
SPI_TEXT_SECTION void Spi_LL_SlaveModeCancel(Spi_SequenceType Sequence);
#endif

#if (SPI_SYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION Std_ReturnType Spi_LL_SyncTransfer(Spi_SequenceType Sequence, uint8 SpiCoreID);
#endif /* (SPI_SYNC_DRIVER == STD_ON) */

#if (SPI_ASYNC_DRIVER == STD_ON)
SPI_TEXT_SECTION  void                Spi_ScheduleJobsOnHwUnit(Spi_HwScheduleQueueType *pQueue, Spi_JobType tJob, const Spi_JobCfgType *pcJobPrm);
SPI_TEXT_SECTION Std_ReturnType       Spi_LinkJobsToSequence(Spi_SequenceType tSequence, const Spi_SeqCfgType *pcSeq);
SPI_TEXT_SECTION void                 Spi_StartFirstJobScheduleNext(Spi_HwScheduleQueueType *pHWUnitQueue);
#if (SPI_CANCEL_API == STD_ON)
SPI_TEXT_SECTION void                 Spi_UnlinkRemainJobsInSeq(Spi_JobType tRemainCnt, const Spi_SeqCfgType *pcSeq);
#endif
#endif

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* SPI_FCSPI_H */

/** @} */

