/**
*   @file    Eth_Hal.c
*   @version 1.5.1

*   @brief   AUTOSAR ETH - Eth hardware abstraction layer driver source file.
*   @details This file contains the implementation of Eth driver hardware abstraction layer API.
*
*   @addtogroup ETH
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETH
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       10/07/2023    QXW0085       N/A          Eth Initial Version
*   0.2.0       27/09/2023    QXW0085       N/A          Implementation of Multicore instance
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_Hal.h"
#include "Eth_Version.h"
#include "Eth_Hw.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/** @brief MAC hash table index shift */
#define ETH_MAC_HASH_TABLE_INDEX_SHIFT (31U)
/** @brief MAC hash table index mask */
#define ETH_MAC_HASH_TABLE_INDEX_MASK  (0x1U)
/** @brief MAC hash table bit shift */
#define ETH_MAC_HASH_TABLE_BIT_SHIFT   (26U)
/** @brief MAC hash table bit mask */
#define ETH_MAC_HASH_TABLE_BIT_MASK    (0x1FU)

/** The number of max MDC csr value */
#define ETH_MDC_CSR_VALUE_CNT          (6U)

/** MII write operation */
#define ETH_MII_OPT_WRITE              (ENET_MAC_MDIO_ADDRESS_GOC_0_MASK)
/** MII read operation */
#define ETH_MII_OPT_READ               (ENET_MAC_MDIO_ADDRESS_GOC_1_MASK | ENET_MAC_MDIO_ADDRESS_GOC_0_MASK)
/** Eth enable state */
#define ETH_ENABLE                     ((uint8)1U)
/** Eth disable state */
#define ETH_DISABLE                    ((uint8)0U)

/** Eth DMA descriptor words length in bytes */
#define ETH_DMA_DESC_LEN_BYTES         (16U)

/** Check destination MAC is broadcast address */
#define ETH_FRAME_IS_BOARDCAST(dstmac)                                                \
    (((dstmac)[0U] == 0xFFU) && ((dstmac)[1U] == 0xFFU) && ((dstmac)[2U] == 0xFFU) && \
     ((dstmac)[3U] == 0xFFU) && ((dstmac)[4U] == 0xFFU) && ((dstmac)[5U] == 0xFFU))

/** TX confitmation timeout value */
#define ETH_TXCOMFIRM_TIMEOUT    (2U)

/** Eth frame MAC address length in bytes */
#define ETH_FRAME_MAC_LENGTH     (6U)
/** Eth frame destination MAC address offset */
#define ETH_FRAME_DSTMAC_OFFSET  (0U)
/** Eth frame source MAC address offset */
#define ETH_FRAME_SRCMAC_OFFSET  (6U)
/** Eth frame type field offset */
#define ETH_FRAME_TYPE_OFFSET    (12U)
/** Eth frame type field length */
#define ETH_FRAME_TYPE_LENGTH    (2U)
/** Eth frame header length in bytes */
#define ETH_FRAME_HEADER_LENGTH  ETH_HEADER_LEN_BYTE
/** Eth frame payload data offset */
#define ETH_FRAME_PAYLOAD_OFFSET ETH_HEADER_LEN_BYTE

/*==================================================================================================
*                                      LOCAL TYPES
==================================================================================================*/

/**
 * @brief         Eth_DrvBufType
 * @details       Eth driver buffer type.
 *
 */
typedef struct Eth_DrvBuf
{
    uint8 *DataPtr; /**< @brief Payload data of the buffer. */
    uint16 Length;  /**< @brief Data length of current buffer. */
} Eth_DrvBufType;

/**
 * @brief         Eth_RxInfoType
 * @details       Eth received frame information type.
 *
 */
typedef struct
{
    uint8  *DataPtr;        /**< @brief Associated data pointer */
    uint32  Nanoseconds;    /**< @brief Nanoseconds part of the timestamp */
    uint32  Seconds;        /**< @brief Lower 32 bits of the 48 bits Seconds field */
    uint16  SecondsHi;      /**< @brief Upper 16 bits of the 48 bits Seconds field */
    boolean TimeStampValid; /**< @brief Time stamp valid flag. */
} Eth_RxInfoType;

/**
 * @brief         Eth_BufIdxMapType
 * @details       ETH BufIdx map.
 *
 */
typedef struct Eth_BufIdxMap
{
    uint8  *BufferPtr;      /**< TX buffers bound to BufIdx, constant after Eth_Init */
    uint32  BufIdx;         /**< TX buffers index, constant after Eth_Init */
    uint8   FifoIdx;        /**< FifoIdx for BufIdx,constant after Eth_Init */
    boolean Locked;         /**< TX Buffer locked by driver */
    boolean TxConfirmation; /**< confirm transmit state or not */
    uint8   TimeOut;        /**< confirm transmit timout */
#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    boolean TsEnable;       /**< Enable TX time stampping */
    boolean TsValid;        /**< Time stamp valid flag */
    uint16  TimeStampSecHi; /**< Time stamp seconds high 16 bits */
    uint32  TimeStampSec;   /**< Time stamp seconds low 32 bits */
    uint32  TimeStampNs;    /**< Time stamp nanoseconds */
#endif                      /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    boolean LaunchtimeValid;   /**< Launch time valid flag */
    uint8   GCLSlotOffset;     /**< Launch Slot is GCLSlotOffset add current GSN(0~8) */
    uint8   LaunchtimeSec;     /**< Launch time secseconds */
    uint32  LaunchtimeNanoSec; /**< Launch time nanoseconds */
#endif
    Eth_DMADescPtrType    DescPtr; /**< Buffer related DMA descriptor */
    struct Eth_BufIdxMap *NextPtr; /**< Next Eth_BufIdxMapType structure */
} Eth_BufIdxMapType;

/**
 * @brief         Eth_TxStateType
 * @details       This type defines transmit FIFO status of the driver.
 *
 */
typedef struct
{
    Eth_DMADescPtrType DescList;    /**< @brief DMA descriptor list start address. */
    uint16             BufferLen;   /**< @brief DMA descriptor buffer length. */
    uint16             RingSize;    /**< @brief Number of DMA descriptors in DescList. */
    uint16             BufIdxStart; /**< @brief Start BufIdx of this FIFO. */
    uint16             BufIdxCurr;  /**< @brief Current index of this FIFO. */
    Eth_BufIdxMapType *Head;        /**< @brief Head of transmit queue. */
    Eth_BufIdxMapType *Tail;        /**< @brief Tail of transmit queue. */
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    uint8 EnhanecDescMode;
#endif
} Eth_TxStateType;

/**
 * @brief         Eth_FifoStateType
 * @details       This type defines receive FIFO status of the driver.
 *
 */
typedef struct
{
    Eth_DMADescType *DescList;  /**< @brief DMA descriptor list start address. */
    uint16           BufferLen; /**< @brief DMA descriptor buffer length. */
    uint16           RingSize;  /**< @brief Number of DMA descriptors in DescList. */
    Eth_DMADescType *FirstDesc; /**< @brief First descriptor used by ETH driver. */
    Eth_DMADescType *LastDesc;  /**< @brief Last descriptor used by ETH driver. */
    Eth_RxInfoType   RxInfo;    /**< @brief Information of the last received frame */
} Eth_RxStateType;

#if (STD_ON == ETH_DEM_EVENT_DETECT)
/**
 * @brief         EthDemEventStatsType
 * @details       This type defines statistics counters of extended production errors.
 *
 */
typedef struct
{
    uint32 RxFramesLost;
    uint32 RxCrcError;
    uint32 RxUndersizeError;
    uint32 RxOversizeError;
    uint32 RxAlignmentError;
    uint32 TxSingleCollisionError;
    uint32 TxMultipleCollisionError;
    uint32 TxLateCollisionError;
} EthDemEventStatsType;
#endif /* STD_ON == ETH_DEM_EVENT_DETECT */

/**
 * @brief         Eth_HalHandleType
 * @details       ETH Hal driver handle type.
 *
 */
typedef struct
{
    ENET_Type      *EnetBase;                               /**< @brief Controller base address */
    uint8           CtrlIdx;                                /**< @brief Index of Controller. */
    uint8           EthHwIdx;                               /**< @brief Index of ENET instance. */
    uint8           EthIfIdx;                               /**< @brief Index of Eth interface. */
    uint8           FatalError;                             /**< @brief Fatal error occured. */
    boolean         TxIntEn;                                /**< @brief Tx interrupt enabled. */
    boolean         RxIntEn;                                /**< @brief Rx interrupt enabled. */
    uint8           TxRingCnt;                              /**< @brief Enabled TX channel. */
    uint8           RxRingCnt;                              /**< @brief Enabled RX channel. */
    Eth_TxStateType TxState[ETH_FEATURE_MAX_CHANNEL_COUNT]; /**< @brief TX Descriptors state. */
    Eth_RxStateType RxState[ETH_FEATURE_MAX_CHANNEL_COUNT]; /**< @brief RX Descriptors state. */

    Eth_BufIdxMapType TxBufIdxMap[ETH_CFG_MAX_TX_BUFIDX_NUM]; /**< @brief TX buffer ID map. */
    uint16            MaxTxBufCount;                          /**< Max TX buffers count */

#if (STD_ON == ETH_DEM_EVENT_DETECT)
    EthDemEventStatsType DemStatCounter;
#endif /* STD_ON == ETH_DEM_EVENT_DETECT */
} Eth_HandleType;

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define ETH_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Eth_MemMap.h"

ETH_DATA_SECTION static Eth_ModeType Eth_Ctrls_Mode[ETH_MAX_CTRLS_SUPPORTED];

ETH_DATA_SECTION static Eth_HandleType Eth_HalHandles[ETH_MAX_CTRLS_SUPPORTED];

#define ETH_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Eth_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#define ETH_START_SEC_CODE
#include "Eth_MemMap.h"

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_MemCopy(uint8 *pDst, const uint8 *pSrc, uint32 LenBytes);

ETH_TEXT_SECTION static void Eth_Hal_SystemLevelConfig(Eth_HandleType        *EthHandle,
                                                       const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_ResetController(Eth_HandleType        *EthHandle,
                                                               const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE Eth_DMADescPtrType Eth_Hal_NextTxDescriptor(
    Eth_DMADescPtrType     pCurDesc,
    const Eth_TxStateType *pFifoState);

ETH_TEXT_SECTION LOCAL_INLINE Eth_DMADescType *Eth_Hal_NextRxDescriptor(
    Eth_DMADescType       *pCurDesc,
    const Eth_RxStateType *pFifoState);

ETH_TEXT_SECTION static uint32 Eth_Hal_ComputeCRC(const uint8 *pData, uint32 eBitLen);

ETH_TEXT_SECTION LOCAL_INLINE uint32 Eth_Hal_BitsReverse(uint32 eData);

ETH_TEXT_SECTION static void Eth_Hal_MdioBusInit(Eth_HandleType *EthHandle, uint32 CsrBusClk);

#if (STD_ON == ETH_CTRL_ENABLE_MII) || (STD_ON == ETH_CTRL_ENABLE_MMD)
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_MdioAccess(ENET_Type    *EnetBase,
                                                          boolean       Clause45,
                                                          uint32        u32Opt,
                                                          uint8         u8PhyAddr,
                                                          uint16        u16PhyReg,
                                                          uint8         u8MmdAddr,
                                                          const uint16 *pData,
                                                          uint32        u32Timeout);
#endif

ETH_TEXT_SECTION static void Eth_Hal_DMAInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_MTLInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_MACInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr);

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
ETH_TEXT_SECTION static void Eth_Hal_SafetyInit(Eth_HandleType        *EthHandle,
                                                const Eth_CtrlCfgType *CtrlCfgPtr);
#endif

ETH_TEXT_SECTION static void Eth_Hal_TxBuffersInit(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_ReleaseTxBuffers(Eth_HandleType        *EthHandle,
                                                      const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_AllocTxBuffer(Eth_HandleType *EthHandle,
                                                             uint8           FifoIdx,
                                                             uint32         *pBufIdx);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_FreeTxBuffer(Eth_HandleType *EthHandle, uint32 BufIdx);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_SetupTxDescriptor(Eth_DMADescType *pDesc,
                                                             const uint8     *pBuffer,
                                                             uint16           FrameLen,
                                                             boolean          TxInterruptEn,
                                                             boolean          TimestampEn);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_BuildTxDescriptor(Eth_DMADescPtrType DescPtr,
                                                                 const uint8       *pBuffer,
                                                                 uint16             FrameLen,
                                                                 Eth_HandleType    *EthHandle,
                                                                 Eth_BufIdxMapType *pBufIdxMap);

ETH_TEXT_SECTION static void Eth_Hal_SetupRxDescriptor(Eth_DMADescType *pDesc, boolean ItMode);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_SendFrame(Eth_HandleType        *EthHandle,
                                                         const Eth_TxStateType *pFifoState,
                                                         Eth_BufIdxMapType     *pBufIdxMap,
                                                         const uint8           *pBuffer,
                                                         uint16                 FrameLen);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_GetTransmitStatus(Eth_HandleType    *EthHandle,
                                                                 Eth_BufIdxMapType *pBufIdxMap,
                                                                 boolean           *pTimeout);

ETH_TEXT_SECTION static void Eth_Hal_ReleaseRxDescriptors(Eth_HandleType *EthHandle, uint8 FifoIdx);

ETH_TEXT_SECTION static Eth_RxStatusType Eth_Hal_CheckNextDescAvailable(const ENET_Type *EnetBase,
                                                                        Eth_DMADescType *pCurrDesc,
                                                                        Eth_RxStateType *pFifoState);

ETH_TEXT_SECTION static Eth_RxStatusType Eth_Hal_ReadFrame(Eth_HandleType *EthHandle,
                                                           uint8           FifoIdx,
                                                           Eth_DrvBufType *pBuffers);

ETH_TEXT_SECTION static void Eth_Hal_RxBuffersInit(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_Start(Eth_HandleType        *EthHandle,
                                           const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_Stop(Eth_HandleType        *EthHandle,
                                          const Eth_CtrlCfgType *CtrlCfgPtr);

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
ETH_TEXT_SECTION static void Eth_Hal_ReadRxDescTimestamp(const ENET_Type       *EnetBase,
                                                         const Eth_DMADescType *pDesc,
                                                         Eth_RxInfoType        *pRxInfo,
                                                         boolean                TsValid);

ETH_TEXT_SECTION static void Eth_Hal_ReadTxDescTimestamp(const ENET_Type       *EnetBase,
                                                         const Eth_DMADescType *pDesc,
                                                         Eth_BufIdxMapType     *pBufIdxMap);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PTPInitSystemTime(ENET_Type *EnetBase,
                                                                 uint16     SecondsHi,
                                                                 uint32     Seconds,
                                                                 uint32     NanoSeconds);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PTPUpdateSystemTime(ENET_Type *EnetBase,
                                                                   uint32     Seconds,
                                                                   uint32     NanoSeconds,
                                                                   boolean    Sign);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PTPUpdateAddend(ENET_Type *EnetBase, uint32 Addend);

ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PtpInit(Eth_HandleType        *EthHandle,
                                                       const Eth_CtrlCfgType *CtrlCfgPtr);
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_GclWrite(ENET_Type *EnetBase,
                                                        boolean    Gcrr,
                                                        uint16     GclAddr,
                                                        uint32     GclData);

ETH_TEXT_SECTION static void Eth_Hal_BaseTimeCalculation(ENET_Type *EnetBase,
                                                         const Eth_TimeAwareShaperType *ShaperCfgPtr,
                                                         uint32 *SecondsPtr,
                                                         uint32 *NanoSecondsPtr);
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

ETH_TEXT_SECTION static void Eth_Hal_MMCInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr);

#if (STD_ON == ETH_DEM_EVENT_DETECT)
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxAlignmentError(Eth_HandleType        *EthHandle,
                                                                 const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxCRCError(Eth_HandleType        *EthHandle,
                                                           const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckTxLateCollision(Eth_HandleType        *EthHandle,
                                                                const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckTxMultipleCollision(Eth_HandleType *EthHandle,
                                                                    const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxOversizeFrame(Eth_HandleType        *EthHandle,
                                                                const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxFrameLost(Eth_HandleType        *EthHandle,
                                                            const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckTxSingleCollision(Eth_HandleType *EthHandle,
                                                                  const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxUndersizeFrame(Eth_HandleType        *EthHandle,
                                                                 const Eth_CtrlCfgType *CtrlCfgPtr);
#endif /* STD_ON == ETH_DEM_EVENT_DETECT */

ETH_TEXT_SECTION static void Eth_Hal_MACIrqHandler(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_MTLIrqHandler(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_DMAIrqHandler(Eth_HandleType        *EthHandle,
                                                   uint8                  eChannel,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr);

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
ETH_TEXT_SECTION static void Eth_Hal_MTLEccIrqHandler(Eth_HandleType        *EthHandle,
                                                      const Eth_CtrlCfgType *CtrlCfgPtr);

ETH_TEXT_SECTION static void Eth_Hal_MTLDppFsmIrqHandler(Eth_HandleType        *EthHandle,
                                                         const Eth_CtrlCfgType *CtrlCfgPtr);
#endif /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief                        Local copy data function.
 *
 * @param[in] pDst               Destination memory address.
 * @param[in] pSrc               Source memory address.
 * @param[in] LenBytes           Bytes to copy.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_MemCopy(uint8 *pDst, const uint8 *pSrc, uint32 LenBytes)
{
    uint32 u32TmpLenBytes = LenBytes;
    if (pDst != pSrc)
    {
        while (u32TmpLenBytes > 0U)
        {
            --u32TmpLenBytes;
            pDst[u32TmpLenBytes] = pSrc[u32TmpLenBytes];
        }
    }
}

/**
 * @brief                        Set the system level configurations for this controller.
 * @details                      Set the system level configurations, such as PHY interface,
 * interface clocks, clock divider.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_SystemLevelConfig(Eth_HandleType        *EthHandle,
                                                       const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_PhyIfType Phyif = ETH_CFG_PHY_INTERFACE(CtrlCfgPtr);

    if (CtrlCfgPtr->TxClkSel == ETH_TXCLK_OUTPUT_SEL_PLL0_DIV)
    {
        /* Select PLL0_DIV clock source between PLL0_CLK0 and PLL0_CLK1 */
        ENET_HWA_SCM_TxClkSrcSelect(SCM, (uint8)CtrlCfgPtr->TxClkSrcSel);
        ETH_DATA_BARRIER();

        /* Set PLL0_DIV clock source divider */
        ENET_HWA_SCM_TxClkSrcDivEnable(SCM, FALSE);
        ENET_HWA_SCM_TxClkSrcDivider(SCM, CtrlCfgPtr->TxClkSrcDiv);
        ENET_HWA_SCM_TxClkSrcDivEnable(SCM, TRUE);
    }
    else
    {
        ENET_HWA_SCM_TxClkSrcDivEnable(SCM, FALSE);
    }

    /* Select ENET TXCLK clock source */
    ENET_HWA_SCM_TxClkSelect(SCM, (uint8)CtrlCfgPtr->TxClkSel);
    /* Enable ENET TXCLK clock output */
    ENET_HWA_SCM_TxClkOutputEnable(SCM, CtrlCfgPtr->TxClkOutputEn);

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    /* Select PTP functional clock source */
    ENET_HWA_SCM_PtpClkSelect(SCM, (uint8)CtrlCfgPtr->PtpClkSrc);
#endif

    /* Set PHY interface */
    if (Phyif == ETH_PHYIF_RGMII)
    {
        /* Select RGMII functional clock source */
        ENET_HWA_SCM_RgmiiClkSelect(SCM, (uint8)CtrlCfgPtr->RgmiiClkSel);
        ENET_HWA_MAC_SetPhyMiiMode(SCM, ENET_MAC_PHY_RGMII);
    }
    else if (Phyif == ETH_PHYIF_RMII)
    {
        ENET_HWA_MAC_SetPhyMiiMode(SCM, ENET_MAC_PHY_RMII);
    }
    else if (Phyif == ETH_PHYIF_MII)
    {
        ENET_HWA_MAC_SetPhyMiiMode(SCM, ENET_MAC_PHY_MII);
    }
    else
    {
        /* Not supported, do nothing */
    }
    (void)EthHandle;
}

/**
 * @brief                        Reset the controller indicated by CtrlIdx.
 * @details                      [SWDESG_ETH_140]This function reset the controller indicated by
 *                               CtrlIdx. The PCC ENET clock must be enabled before the soft reset.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_ResetController(Eth_HandleType        *EthHandle,
                                                               const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint8          Channel;
    uint32         TimeoutTicks = ETH_TIMEOUT_LOOP_COUNT;
    Std_ReturnType RetValue     = E_OK;

    /* Disable MAC interrupts */
    ENET_HWA_MAC_SetInterruptEnable(EthHandle->EnetBase, 0U);

    /* Disable MMC interrupts */
    ENET_HWA_MAC_SetMmcRxInterruptMask(EthHandle->EnetBase, 0xFFFFFFFFU);
    ENET_HWA_MAC_SetMmcTxInterruptMask(EthHandle->EnetBase, 0xFFFFFFFFU);

    /* Disable DMA interrupts */
    for (Channel = 0U; Channel < ENET_DMA_CHANNEL_CNT; ++Channel)
    {
        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
         *  to an inappropriate essential type
         *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
         *  REASON:The parameter of hardware level function is defined as enum type, so it is
         *  necessary to cast the channel number to channel enum type.
         */
        ENET_HWA_DMA_SetEnabledInterrupts(EthHandle->EnetBase, (ENET_DMA_ChannelType)Channel, 0U);
        /* PRQA S 4342 -- */
    }

    /* DMA soft reset */
    ENET_HWA_DMA_SwReset(EthHandle->EnetBase);

    /* Wait software reset is completed */
    while (ENET_DMA_STATUS_ACTIVE == ENET_HWA_DMA_GetSwResetStatus(EthHandle->EnetBase))
    {
        --TimeoutTicks;
        if (0U == TimeoutTicks)
        {
            RetValue = E_NOT_OK;
            break;
        }
    }
    (void)CtrlCfgPtr;

    return RetValue;
}

/**
 * @brief                        Get the next DMA descriptor of the current transmit FIFO.
 * @details                      Get the next DMA descriptor of the current transmit FIFO.
 * @param[in] pCurDesc           The current DMA descriptor.
 * @param[in] pFifoState         The current FIFO state.
 * @return                       The next DMA descriptor.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE Eth_DMADescPtrType Eth_Hal_NextTxDescriptor(
    Eth_DMADescPtrType     pCurDesc,
    const Eth_TxStateType *pFifoState)
{
    uint32             pTemp;
    Eth_DMADescPtrType pNextDesc;

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    if (pFifoState->EnhanecDescMode)
    {
        pTemp = (uint32)pFifoState->DescList +
                ((uint32)sizeof(Eth_DMAEnhancedDescType) * (uint32)(pFifoState->RingSize));
        pNextDesc = (Eth_DMADescPtrType)(&((Eth_DMAEnhancedDescType *)pCurDesc)[1U]);
    }
    else
    {
#endif
        pTemp = (uint32)pFifoState->DescList +
                ((uint32)sizeof(Eth_DMADescType) * (uint32)(pFifoState->RingSize));
        pNextDesc = (Eth_DMADescPtrType)(&((Eth_DMADescType *)pCurDesc)[1U]);
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    }
#endif

    return ((uint32)pNextDesc >= pTemp) ? pFifoState->DescList : pNextDesc;
}

/**
 * @brief                        Get the next DMA descriptor of the current receive FIFO.
 * @details                      Get the next DMA descriptor of the current receive FIFO.
 * @param[in] pCurDesc           The current DMA descriptor.
 * @param[in] pFifoState         The current FIFO state.
 * @return                       The next DMA descriptor.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE Eth_DMADescType *Eth_Hal_NextRxDescriptor(
    Eth_DMADescType       *pCurDesc,
    const Eth_RxStateType *pFifoState)
{
    uint32 pTemp = (uint32)(&pFifoState->DescList[pFifoState->RingSize - 1U]);
    return ((uint32)pCurDesc >= pTemp) ? pFifoState->DescList : &pCurDesc[1U];
}

/**
 * @brief                        Compute the CRC value of given data.
 * @details                      Compute the CRC value of given data.
 * @param[in] pData              The data to be computed.
 * @param[in] eBitLen            The data length in bits.
 * @return                       CRC value.
 *
 */
ETH_TEXT_SECTION static uint32 Eth_Hal_ComputeCRC(const uint8 *pData, uint32 eBitLen)
{
    uint32 u32Crc = 0xFFFFFFFFU;
    uint32 i, j, bytes, bits;
    uint32 u32Bitlen = eBitLen;

    bytes = (u32Bitlen + 0x7U) >> 3U;
    for (i = 0U; i < bytes; ++i)
    {
        u32Crc = u32Crc ^ pData[i];
        bits   = (u32Bitlen >= 0x8U) ? 0x8U : u32Bitlen;
        for (j = 0U; j < bits; ++j)
        {
            if ((u32Crc & 0x1U) != 0U)
            {
                u32Crc = (u32Crc >> 1U) ^ 0xEDB88320U;
            }
            else
            {
                u32Crc = (u32Crc >> 1U);
            }
        }
        u32Bitlen -= bits;
    }

    return ~u32Crc;
}

/**
 * @brief                        Reverse 32 bits data.
 * @details                      Reverse 32 bits data[bit0 <=> bit31, bit1 <=> bit30 ...].
 * @param[in] eData              The data to be Reversed.
 * @return                       Reversed value.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE uint32 Eth_Hal_BitsReverse(uint32 eData)
{
    uint32 u32Tmp = eData;
    u32Tmp        = (((u32Tmp & (0xAAAAAAAAU)) >> 1U) | ((u32Tmp & (0x55555555U)) << 1U));
    u32Tmp        = (((u32Tmp & (0xCCCCCCCCU)) >> 2U) | ((u32Tmp & (0x33333333U)) << 2U));
    u32Tmp        = (((u32Tmp & (0xF0F0F0F0U)) >> 4U) | ((u32Tmp & (0x0F0F0F0FU)) << 4U));
    u32Tmp        = (((u32Tmp & (0xFF00FF00U)) >> 8U) | ((u32Tmp & (0x00FF00FFU)) << 8U));
    return ((u32Tmp >> 16U) | (u32Tmp << 16U));
}

/**
 * @brief                        Initialize the MDIO bus.
 * @details                      Initialize the MDIO bus clock.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CsrBusClk          CSR bus clock frequency.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MdioBusInit(Eth_HandleType *EthHandle, uint32 CsrBusClk)
{
    const uint32 FreqRange[ETH_MDC_CSR_VALUE_CNT] = { 35000000U,  60000000U,  100000000U,
                                                      150000000U, 250000000U, 300000000U };
    const uint8  CsrValues[ETH_MDC_CSR_VALUE_CNT] = {
        (uint8)ENET_MAC_CSR_CLOCK_RANGE_20_35MHZ,   (uint8)ENET_MAC_CSR_CLOCK_RANGE_35_60MHZ,
        (uint8)ENET_MAC_CSR_CLOCK_RANGE_60_100MHZ,  (uint8)ENET_MAC_CSR_CLOCK_RANGE_100_150MHZ,
        (uint8)ENET_MAC_CSR_CLOCK_RANGE_150_250MHZ, (uint8)ENET_MAC_CSR_CLOCK_RANGE_250_300MHZ
    };

    uint32 CsrVal = (uint32)ENET_MAC_CSR_CLOCK_RANGE_100_150MHZ;
    uint32 i;

    for (i = 0U; i < ETH_MDC_CSR_VALUE_CNT; ++i)
    {
        if (CsrBusClk <= FreqRange[i])
        {
            CsrVal = (uint32)CsrValues[i];
            break;
        }
    }

    ENET_HWA_MAC_SetMDIOAddress(EthHandle->EnetBase, ENET_MAC_MDIO_ADDRESS_CR(CsrVal));
}

#if (STD_ON == ETH_CTRL_ENABLE_MII) || (STD_ON == ETH_CTRL_ENABLE_MMD)
/**
 * @brief                        Writes the MDIO bus access register.
 * @details                      Writes the MDIO bus access register.
 * @param[in] EnetBase           ENET instance base.
 * @param[in] Clause45           Enable clause 45 mode.
 * @param[in] u32Opt             MDIO operation include the following values:
 *                               ETH_MII_OPT_WRITE,ETH_MII_OPT_READ_INCREMENT,ETH_MII_OPT_READ.
 * @param[in] u8PhyAddr          PHY device address.
 * @param[in] u16PhyReg          PHY register address.
 * @param[in] u8MmdAddr          Clause 45 MMD address.
 * @param[in] pData              Data to write.
 * @param[in] u32Timeout         Wait time out ticks.
 * @return                       E_OK: MDIO write successfully.
 *                               E_NOT_OK: MDIO write failed.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_MdioAccess(ENET_Type    *EnetBase,
                                                          boolean       Clause45,
                                                          uint32        u32Opt,
                                                          uint8         u8PhyAddr,
                                                          uint16        u16PhyReg,
                                                          uint8         u8MmdAddr,
                                                          const uint16 *pData,
                                                          uint32        u32Timeout)
{
    uint32         AddressReg, DataReg;
    Std_ReturnType Status          = E_OK;
    uint32         u32TimeoutCount = u32Timeout;

    AddressReg = ENET_HWA_MAC_GetMDIOAddress(EnetBase);

    AddressReg &= ~(ENET_MAC_MDIO_ADDRESS_PA_MASK | ENET_MAC_MDIO_ADDRESS_RDA_MASK |
                    ENET_MAC_MDIO_ADDRESS_GOC_0_MASK | ENET_MAC_MDIO_ADDRESS_GOC_1_MASK |
                    ENET_MAC_MDIO_ADDRESS_C45E_MASK);

    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     *  2985:This operation is redundant. The value of the result is always that of the left-hand
     *  operand.
     *  Reason: The redundant operation in macro is for formatting consistency.
     */
    AddressReg |= ENET_MAC_MDIO_ADDRESS_C45E(((boolean)TRUE == Clause45) ? 1U : 0U) |
                  (uint32)u32Opt | ENET_MAC_MDIO_ADDRESS_PA(u8PhyAddr) |
                  ENET_MAC_MDIO_ADDRESS_RDA(((boolean)TRUE == Clause45) ? u8MmdAddr : u16PhyReg) |
                  ENET_MAC_MDIO_ADDRESS_GB_MASK;
    /* PRQA S 2985 -- */

    if ((Clause45 == (boolean)TRUE) || (ETH_MII_OPT_WRITE == u32Opt))
    {
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         *  2985:This operation is redundant. The value of the result is always that of the left-hand
         *  operand.
         *  Reason: The redundant operation in macro is for formatting consistency.
         */
        DataReg = ENET_MAC_MDIO_DATA_RA(((boolean)TRUE == Clause45) ? u16PhyReg : 0U) |
                  ENET_MAC_MDIO_DATA_GD((ETH_MII_OPT_WRITE == u32Opt) ? *pData : 0U);
        /* PRQA S 2985 -- */

        ENET_HWA_MAC_SetMDIOData(EnetBase, DataReg);
    }

    ENET_HWA_MAC_SetMDIOAddress(EnetBase, AddressReg);

    /* [FMR_Eth_00006]Wait for completion */
    while (0U != (ENET_HWA_MAC_GetMDIOAddress(EnetBase) & ENET_MAC_MDIO_ADDRESS_GB_MASK))
    {
        --u32TimeoutCount;
        if (u32TimeoutCount == 0U)
        {
            Status = E_NOT_OK;
            break;
        }
    }

    return Status;
}
#endif

/**
 * @brief                        Initialize DMA hardware registers.
 * @details                      Initialize DMA hardware registers.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_DMAInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *EnetBase = EthHandle->EnetBase;
    uint8      u8Channel, u8SkipLen, u8ChannelCount;
    uint8      u8TxCh, u8RxCh;

    /* Set DMA mode */
    ENET_HWA_DMA_SetMode(EnetBase, ETH_CFG_CTRL_DMA_MODE(CtrlCfgPtr));
    ENET_HWA_DMA_SetInterruptMode(EnetBase, ENET_DMA_INTM_SBD_PERCH_LEVEL);
    /* Set DMA sysbus mode */
    ENET_HWA_DMA_SetSysBusMode(EnetBase, ETH_CFG_CTRL_DMA_SYSBUS_MODE(CtrlCfgPtr));

    u8SkipLen      = (uint8)((sizeof(Eth_DMADescType) - ETH_DMA_DESC_LEN_BYTES) /
                        ENET_DATA_BUS_WIDTH_BYTES);
    u8TxCh         = EthHandle->TxRingCnt;
    u8RxCh         = EthHandle->RxRingCnt;
    u8ChannelCount = (u8TxCh >= u8RxCh) ? u8TxCh : u8RxCh;

    for (u8Channel = 0U; u8Channel < u8ChannelCount; ++u8Channel)
    {
        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to
         * an inappropriate essential type 4342:An expression of 'essentially unsigned' type is
         * being cast to enum type. REASON:The parameter of hardware level function is defined as
         * enum type, so it is necessary to cast the channel number to channel enum type.
         */
        ENET_HWA_DMA_SetEnabledInterrupts(EnetBase, (ENET_DMA_ChannelType)u8Channel, 0U);
        /* Set DMA channel control */
        ENET_HWA_DMA_SetChannelCtrl(EnetBase,
                                    (ENET_DMA_ChannelType)u8Channel,
                                    ETH_CFG_CTRL_DMA_CHANNEL_CONTROL(CtrlCfgPtr, u8Channel));
        ENET_HWA_DMA_SetDescriptorSkipLength(EnetBase, (ENET_DMA_ChannelType)u8Channel, u8SkipLen);
        /* Set disable PBLx8 mode */
        ENET_HWA_DMA_Set8xPBLModeEnFlag(EnetBase, (ENET_DMA_ChannelType)u8Channel, ETH_DISABLE);

        /* Set enabled TX channel configuration */
        if (u8Channel < u8TxCh)
        {
            ENET_HWA_DMA_SetChannelTxCtrl(EnetBase,
                                          (ENET_DMA_ChannelType)u8Channel,
                                          ETH_CFG_CTRL_DMA_TX_CHANNEL_CONTROL(CtrlCfgPtr, u8Channel));
        }
        /* Set enabled RX channel configuration */
        if (u8Channel < u8RxCh)
        {
            ENET_HWA_DMA_SetChannelRxCtrl(EnetBase,
                                          (ENET_DMA_ChannelType)u8Channel,
                                          ETH_CFG_CTRL_DMA_RX_CHANNEL_CONTROL(CtrlCfgPtr, u8Channel));
        }
        /* PRQA S 4342 -- */
    }
}

/**
 * @brief                        Initialize MTL hardware registers.
 * @details                      Initialize MTL hardware registers.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MTLInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *EnetBase = EthHandle->EnetBase;
    uint32     FifoSize;
    uint8      u8Queue;

    /* PRQA S 4342,4322 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to
     *  an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  4322:An expression of 'essentially enum' type is being cast to a different enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the MTL queue number to MTL queue enum type.
     */

    for (u8Queue = 0U; u8Queue < EthHandle->TxRingCnt; ++u8Queue)
    {
        if (ETH_MTL_QUEUE_ENABLE_GENERIC == ETH_CFG_CTRL_MTL_TX_QUEUE_MODE(CtrlCfgPtr, u8Queue))
        {
            ENET_HWA_MTL_SetTxQueueQuantumOrWeight(EnetBase,
                                                   (ENET_MTL_QueueType)u8Queue,
                                                   ETH_CFG_CTRL_MTL_TX_QUEUE_WEIGHTS(CtrlCfgPtr,
                                                                                     u8Queue));
        }
        else if ((u8Queue > 0U) &&
                 (ETH_MTL_QUEUE_ENABLE_AVB == ETH_CFG_CTRL_MTL_TX_QUEUE_MODE(CtrlCfgPtr, u8Queue)))
        {
            ENET_HWA_MTL_SetTxQueueQuantumOrWeight(
                EnetBase,
                (ENET_MTL_QueueType)u8Queue,
                ETH_CFG_CTRL_MTL_TX_QUEUE_IDLE_SLOPE_CREDIT(CtrlCfgPtr, u8Queue));
            ENET_HWA_MTL_SetTxQueueSendSlopeCredit(
                EnetBase,
                (ENET_MTL_QueueType)u8Queue,
                ETH_CFG_CTRL_MTL_TX_QUEUE_SEND_SLOPE_CREDIT(CtrlCfgPtr, u8Queue));
            ENET_HWA_MTL_SetTxQueueHiCredit(EnetBase,
                                            (ENET_MTL_QueueType)u8Queue,
                                            ETH_CFG_CTRL_MTL_TX_QUEUE_HIGH_CREDIT(CtrlCfgPtr,
                                                                                  u8Queue));
            ENET_HWA_MTL_SetTxQueueLoCredit(EnetBase,
                                            (ENET_MTL_QueueType)u8Queue,
                                            (uint32)ETH_CFG_CTRL_MTL_TX_QUEUE_LOW_CREDIT(CtrlCfgPtr,
                                                                                         u8Queue));

            ENET_HWA_MTL_SetAVAlgorithmCBSEnFlag(EnetBase, (ENET_MTL_QueueType)u8Queue, ETH_ENABLE);
        }
        else
        {
            /* Nothing is needed */
        }

        /* All queues bisect the FIFO memory  */
        FifoSize = (ETH_FEATURE_TOTAL_TX_FIFO_SIZE / (256U * ETH_FEATURE_MAX_CHANNEL_COUNT)) - 1U;
        ENET_HWA_MTL_SetTxQueueSize(EnetBase, (ENET_MTL_QueueType)u8Queue, (uint8)FifoSize);
        /* Skip the transmit threshold control, when the full ENET package is prepared,
           the controller will transmit the package */
        ENET_HWA_MTL_SetTxThreshold(EnetBase, (ENET_MTL_QueueType)u8Queue, ENET_MTL_TX_STORE_FORWARD);
        /* Enable Transmit queue with the specified transmit mode */
        ENET_HWA_MTL_SetTxQueueEnStatus(
            EnetBase,
            (ENET_MTL_QueueType)u8Queue,
            (ENET_MTL_QueueEnableType)ETH_CFG_CTRL_MTL_TX_QUEUE_MODE(CtrlCfgPtr, u8Queue));
    }

    for (u8Queue = 0U; u8Queue < EthHandle->RxRingCnt; ++u8Queue)
    {
        /* Set MTL queue and DMA channel one-to-one mapping */
        ENET_HWA_MTL_SetRxDABasedDMAChannelSelectionEnFlag(EnetBase,
                                                           (ENET_MTL_QueueType)u8Queue,
                                                           ETH_DISABLE);
        ENET_HWA_MTL_SetRxDMAChannelMap(EnetBase,
                                        (ENET_MTL_QueueType)u8Queue,
                                        (ENET_DMA_ChannelType)u8Queue);

        /* All queues bisect the FIFO memory  */
        FifoSize = (ETH_FEATURE_TOTAL_RX_FIFO_SIZE / (256U * ETH_FEATURE_MAX_CHANNEL_COUNT)) - 1U;
        ENET_HWA_MTL_SetRxQueueSize(EnetBase, (ENET_MTL_QueueType)u8Queue, (uint8)FifoSize);
        /* Set the thresholds for deactivating and activating the flow control */
        ENET_HWA_MTL_SetRxDeactivateFlowCtrlThres(EnetBase,
                                                  (ENET_MTL_QueueType)u8Queue,
                                                  ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_1_KB);
        ENET_HWA_MTL_SetRxActivateFlowCtrlThres(EnetBase,
                                                (ENET_MTL_QueueType)u8Queue,
                                                ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_1_KB);
        /* Disable hardware flow control */
        ENET_HWA_MTL_SetRxHwFlowCtrlEnFlag(EnetBase, (ENET_MTL_QueueType)u8Queue, ETH_DISABLE);
        /* Configure dropping TCP/IP checksum error packets function */
        ENET_HWA_MTL_SetForwardTCPChecksumErrorPacketEnFlag(
            EnetBase,
            (ENET_MTL_QueueType)u8Queue,
            (uint8)ETH_CFG_CTRL_MTL_FORWARD_TCPIP_CHECKSUM_ERROR(CtrlCfgPtr, u8Queue));
        /* Configure forward error packets functions, if this function is enabled,
           the controller will forward packets which received when the (CRC error, GMII_ER...)
           error is generated.*/
        ENET_HWA_MTL_SetForwardErrorPacketEnFlag(
            EnetBase,
            (ENET_MTL_QueueType)u8Queue,
            (uint8)ETH_CFG_CTRL_MTL_FORWARD_ERROR_PACKETS(CtrlCfgPtr, u8Queue));
        /* Configure forward under sized good packets functions */
        ENET_HWA_MTL_SetForwardUndersizedPacketEnFlag(
            EnetBase,
            (ENET_MTL_QueueType)u8Queue,
            (uint8)ETH_CFG_CTRL_MTL_FORWARD_UNDERSIZE_GOOD_PACKETS(CtrlCfgPtr, u8Queue));
        /* Skip the receive threshold control, when the complete packet has been written,
           the controller will read and forward */
        ENET_HWA_MTL_SetRxThreshold(EnetBase, (ENET_MTL_QueueType)u8Queue, ENET_MTL_RX_STORE_FORWARD);
        /* Enable receive queue arbitration */
        ENET_HWA_MTL_SetRxQueuePacketArbitrationEnFlag(EnetBase,
                                                       (ENET_MTL_QueueType)u8Queue,
                                                       (uint8)ETH_ENABLE);
        ENET_HWA_MTL_SetRxQueueWeight(EnetBase,
                                      (ENET_MTL_QueueType)u8Queue,
                                      ETH_CFG_CTRL_MTL_RX_QUEUE_WEIGHT(CtrlCfgPtr, u8Queue));
        /* Set RX queue route, if bit 5 is set and the USP field equal to 5,
           the packet will route to the queue(x) */
        ENET_HWA_MAC_SetRxQueueSelectedPriorities(EnetBase,
                                                  (ENET_MTL_QueueType)u8Queue,
                                                  ETH_CFG_CTRL_RX_FIFO_PRIORITY_MASK(CtrlCfgPtr,
                                                                                     u8Queue));
    }

    /* MTL operation mode */
    ENET_HWA_MTL_SetOperationMode(EnetBase, ETH_CFG_CTRL_MTL_OPERATION_MODE(CtrlCfgPtr));

    /* MTL queue enable */
    for (u8Queue = 0U; u8Queue < EthHandle->RxRingCnt; ++u8Queue)
    {
        ENET_HWA_MTL_SetRxQueueEnStatus(
            EnetBase,
            (ENET_MTL_QueueType)u8Queue,
            (ENET_MTL_QueueEnableType)ETH_CFG_CTRL_MTL_RX_QUEUE_MODE(CtrlCfgPtr, u8Queue));
    }
    /* PRQA S 4342,4322 -- */
}

/**
 * @brief                        Initialize MAC hardware registers.
 * @details                      Initialize MAC hardware registers.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MACInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *EnetBase  = EthHandle->EnetBase;
    uint32     MacConfig = ETH_CFG_CTRL_MAC_CONFIGURATION(CtrlCfgPtr) & 0xFFFFFFFCU;

    /* Disable MAC interrupts */
    ENET_HWA_MAC_SetInterruptEnable(EnetBase, 0U);

    /* MAC configuration */
    ENET_HWA_MAC_SetConfiguration(EnetBase, MacConfig);

#if (STD_ON == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM)
    ENET_HWA_MAC_SetIPChecksumOffloadEnFlag(EnetBase, ETH_ENABLE);
#else
    ENET_HWA_MAC_SetIPChecksumOffloadEnFlag(EnetBase, ETH_DISABLE);
#endif

    /* MAC extended configuration */
    ENET_HWA_MAC_SetExtConfiguration(EnetBase, ETH_CFG_CTRL_MAC_EXT_CONFIGURATION(CtrlCfgPtr));

    /* MAC filter */
    ENET_HWA_MAC_SetPacketFilter(EnetBase, ETH_CFG_CTRL_MAC_PACKET_FILTER(CtrlCfgPtr));
    /* Force enable Hash or Perfect Filter */
    ENET_HWA_MAC_SetHashOrPerfectFilterEnFlag(EnetBase, ETH_ENABLE);
    /* Force Hash Multicast Filter */
    ENET_HWA_MAC_SetHashOrPerfectMulticastMode(EnetBase, ENET_MAC_USE_HASH_FILTER);

    /* Set MAC address */
    Eth_Hal_SetMacAddress(EthHandle->CtrlIdx, ETH_CFG_CTRL_MAC_ADDRESS(CtrlCfgPtr));
}

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
/**
 * @brief                        Initialize the automotive safety features.
 * @details                      Initialize the automotive safety features.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_SafetyInit(Eth_HandleType        *EthHandle,
                                                const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *EnetBase = EthHandle->EnetBase;

    /* Enable or Disable ECC protection */
    if ((boolean)TRUE == ETH_CFG_CTRL_SAFETY_ECC_ENABLE(CtrlCfgPtr))
    {
        ENET_HWA_MTL_SetEccControlTxFifoEnFlag(EnetBase, ETH_ENABLE);
        ENET_HWA_MTL_SetEccControlRxFifoEnFlag(EnetBase, ETH_ENABLE);
        ENET_HWA_MTL_SetEccControlEstEnFlag(EnetBase, ETH_ENABLE);
        ENET_HWA_MTL_SetEstMemCorrectableErrIntEnFlag(EnetBase, ETH_DISABLE);
        ENET_HWA_MTL_SetRxMemCorrectableErrIntEnFlag(EnetBase, ETH_DISABLE);
        ENET_HWA_MTL_SetTxMemCorrectableErrIntEnFlag(EnetBase, ETH_DISABLE);
    }
    else
    {
        ENET_HWA_MTL_SetEccControlTxFifoEnFlag(EnetBase, ETH_DISABLE);
        ENET_HWA_MTL_SetEccControlRxFifoEnFlag(EnetBase, ETH_DISABLE);
        ENET_HWA_MTL_SetEccControlEstEnFlag(EnetBase, ETH_DISABLE);
    }

    /* Enable or Disable Data Path Parity protection */
    if (ETH_MTL_DPP_EVEN_PARITY == ETH_CFG_CTRL_SAFETY_DPP_MODE(CtrlCfgPtr))
    {
        ENET_HWA_MTL_SetDppOddParityEnFlag(EnetBase, ETH_DISABLE);
        ENET_HWA_MTL_SetDppProtectionEnFlag(EnetBase, ETH_ENABLE);
    }
    else if (ETH_MTL_DPP_ODD_PARITY == ETH_CFG_CTRL_SAFETY_DPP_MODE(CtrlCfgPtr))
    {
        ENET_HWA_MTL_SetDppOddParityEnFlag(EnetBase, ETH_ENABLE);
        ENET_HWA_MTL_SetDppProtectionEnFlag(EnetBase, ETH_ENABLE);
    }
    else
    {
        ENET_HWA_MTL_SetDppProtectionEnFlag(EnetBase, ETH_DISABLE);
    }

    /* Enable or Disable FSM state Parity protection */
    if ((boolean)TRUE == ETH_CFG_CTRL_SAFETY_FSM_PARITY_ENABLE(CtrlCfgPtr))
    {
        ENET_HWA_MAC_SetFsmControlParityEnFlag(EnetBase, ETH_ENABLE);
    }
    else
    {
        ENET_HWA_MAC_SetFsmControlParityEnFlag(EnetBase, ETH_DISABLE);
    }

    /* Enable or Disable FSM timeout protection */
    if ((boolean)TRUE == ETH_CFG_CTRL_SAFETY_FSM_TIMEOUT_ENABLE(CtrlCfgPtr))
    {
        ENET_HWA_MAC_SetFsmActTimerCsrClockCycle(
            EnetBase,
            (uint16)(ETH_CFG_BUS_CLOCK_FREQ(CtrlCfgPtr) / 1000000U));
        ENET_HWA_MAC_SetFsmActTimerNormalTimeout(EnetBase, 2U);
        ENET_HWA_MAC_SetFsmControlTimeoutEnFlag(EnetBase, ETH_ENABLE);
    }
    else
    {
        ENET_HWA_MAC_SetFsmControlTimeoutEnFlag(EnetBase, ETH_DISABLE);
    }
}
#endif

/**
 * @brief                        Initialize TX buffers and descriptors.
 * @details                      Initialize TX buffers and descriptors.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_TxBuffersInit(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_TxStateType *pTxState;
    uint8            u8Channel;
    uint16           u16RingIndex;
    uint16           u16RingSize;
    uint16           u16BufferLen;
    uint8           *pBufStart;
    uint16           BufIdx = 0U;
    Eth_DMADescType *pDesc;

    EthHandle->TxRingCnt = ETH_CFG_NUM_TX_FIFO(CtrlCfgPtr);

    for (u8Channel = 0U; u8Channel < EthHandle->TxRingCnt; ++u8Channel)
    {
        pTxState              = &EthHandle->TxState[u8Channel];
        pBufStart             = ETH_CFG_CTRL_TX_BUF_START_ADDRESS(CtrlCfgPtr, u8Channel);
        u16BufferLen          = ETH_CFG_CTRL_TX_FIFO_BUF_LENBYTE(CtrlCfgPtr, u8Channel);
        u16RingSize           = ETH_CFG_CTRL_TX_FIFO_BUF_TOTAL(CtrlCfgPtr, u8Channel);
        pTxState->DescList    = ETH_CFG_CTRL_TX_DESC_START_ADDRESS(CtrlCfgPtr, u8Channel);
        pTxState->BufferLen   = u16BufferLen;
        pTxState->RingSize    = u16RingSize;
        pTxState->BufIdxStart = BufIdx;
        pTxState->BufIdxCurr  = BufIdx;
        pTxState->Head        = NULL_PTR;
        pTxState->Tail        = NULL_PTR;

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
        pTxState->EnhanecDescMode = (ETH_CFG_CTRL_DMA_TX_CHANNEL_CONTROL(CtrlCfgPtr, u8Channel) &
                                     ENET_DMA_CH0_TX_CONTROL_EDSE_MASK) >>
                                    ENET_DMA_CH0_TX_CONTROL_EDSE_SHIFT;
#endif
        if (u16RingSize > 0U)
        {
            for (u16RingIndex = 0U; u16RingIndex < u16RingSize; ++u16RingIndex)
            {
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
                EthHandle->TxBufIdxMap[BufIdx].LaunchtimeValid = (boolean)FALSE;
                if (pTxState->EnhanecDescMode != 0u)
                {
                    ((Eth_DMAEnhancedDescType *)(pTxState->DescList))[u16RingIndex].EDes4 = 0U;
                    ((Eth_DMAEnhancedDescType *)(pTxState->DescList))[u16RingIndex].EDes5 = 0U;
                    ((Eth_DMAEnhancedDescType *)(pTxState->DescList))[u16RingIndex].EDes6 = 0U;
                    ((Eth_DMAEnhancedDescType *)(pTxState->DescList))[u16RingIndex].EDes7 = 0U;
                    pDesc = (Eth_DMADescType *)(&(
                        ((Eth_DMAEnhancedDescType *)(pTxState->DescList))[u16RingIndex].Des0));
                }
                else
                {
#endif
                    pDesc = &(((Eth_DMADescType *)(pTxState->DescList))[u16RingIndex]);
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
                }
#endif

                pDesc->Des0                              = 0U;
                pDesc->Des1                              = 0U;
                pDesc->Des2                              = 0U;
                pDesc->Des3                              = 0U;
                pDesc->Backup0                           = 0U;
                pDesc->Backup1                           = 0U;
                EthHandle->TxBufIdxMap[BufIdx].BufferPtr = &pBufStart[u16BufferLen * u16RingIndex];
                EthHandle->TxBufIdxMap[BufIdx].BufIdx    = BufIdx;
                EthHandle->TxBufIdxMap[BufIdx].FifoIdx   = u8Channel;
                EthHandle->TxBufIdxMap[BufIdx].DescPtr   = NULL_PTR;
                EthHandle->TxBufIdxMap[BufIdx].Locked    = (boolean)FALSE;
                EthHandle->TxBufIdxMap[BufIdx].TxConfirmation = (boolean)FALSE;
                EthHandle->TxBufIdxMap[BufIdx].TimeOut        = 0U;
#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
                EthHandle->TxBufIdxMap[BufIdx].TsEnable       = (boolean)FALSE;
                EthHandle->TxBufIdxMap[BufIdx].TsValid        = (boolean)FALSE;
                EthHandle->TxBufIdxMap[BufIdx].TimeStampSecHi = 0U;
                EthHandle->TxBufIdxMap[BufIdx].TimeStampSec   = 0U;
                EthHandle->TxBufIdxMap[BufIdx].TimeStampNs    = 0U;
#endif
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
                EthHandle->TxBufIdxMap[BufIdx].LaunchtimeValid   = (boolean)FALSE;
                EthHandle->TxBufIdxMap[BufIdx].GCLSlotOffset     = 0U;
                EthHandle->TxBufIdxMap[BufIdx].LaunchtimeSec     = 0U;
                EthHandle->TxBufIdxMap[BufIdx].LaunchtimeNanoSec = 0U;
#endif
                EthHandle->TxBufIdxMap[BufIdx].NextPtr = NULL_PTR;
                ++BufIdx;
            }

            /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
             *  to an inappropriate essential type
             *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
             *  REASON:The parameter of hardware level function is defined as enum type, so it is
             *  necessary to cast the channel number to channel enum type.
             */

            ENET_HWA_DMA_SetTxDescListHeadAddr(EthHandle->EnetBase,
                                               (ENET_DMA_ChannelType)u8Channel,
                                               (uint32)EthHandle->TxState[u8Channel].DescList);
            ENET_HWA_DMA_SetTxDescListTailAddr(EthHandle->EnetBase,
                                               (ENET_DMA_ChannelType)u8Channel,
                                               (uint32)EthHandle->TxState[u8Channel].DescList);
            ENET_HWA_DMA_SetTxDescRingLength(EthHandle->EnetBase,
                                             (ENET_DMA_ChannelType)u8Channel,
                                             (uint16)(u16RingSize - (uint16)1U));
            /* PRQA S 4342 -- */
        }
    }
    EthHandle->MaxTxBufCount = (uint16)BufIdx;
}

/**
 * @brief                        Release TX buffers to unlocked state.
 * @details                      Release TX buffers to unlocked state.
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_ReleaseTxBuffers(Eth_HandleType        *EthHandle,
                                                      const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint16 u16RingSize;
    uint16 u16RingIndex;
    uint8  u8Channel;
    uint16 BufIdxStart, BufIdx;

    for (u8Channel = 0U; u8Channel < EthHandle->TxRingCnt; ++u8Channel)
    {
        u16RingSize                              = EthHandle->TxState[u8Channel].RingSize;
        BufIdxStart                              = EthHandle->TxState[u8Channel].BufIdxStart;
        BufIdx                                   = BufIdxStart;
        EthHandle->TxState[u8Channel].BufIdxCurr = BufIdxStart;
        EthHandle->TxState[u8Channel].Head       = NULL_PTR;
        EthHandle->TxState[u8Channel].Tail       = NULL_PTR;
        for (u16RingIndex = 0U; u16RingIndex < u16RingSize; ++u16RingIndex)
        {
            if (EthHandle->TxBufIdxMap[BufIdx].Locked != (boolean)FALSE)
            {
                if (EthHandle->TxBufIdxMap[BufIdx].TxConfirmation != (boolean)FALSE)
                {
                    EthIf_TxConfirmation(EthHandle->EthIfIdx, BufIdx, E_NOT_OK);
                }
                EthHandle->TxBufIdxMap[BufIdx].Locked = (boolean)FALSE;
            }
            ++BufIdx;
        }
    }
    (void)CtrlCfgPtr;
}

/**
 * @brief                        Allocate an unlocked TX buffer to application.
 * @details                      Allocate an unlocked TX buffer to application.
 * @param[in] EthHandle          Ethernet Driver handle.
 * @param[in] FifoIdx            Index of the TX FIFO of the Ethernet Driver.
 * @param[out] pBufIdx           Index of the TX buffer.
 * @return                       E_OK: Allocate TX buffer success.
 *                               E_NOT_OK: Allocate TX buffer failed.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_AllocTxBuffer(Eth_HandleType *EthHandle,
                                                             uint8           FifoIdx,
                                                             uint32         *pBufIdx)
{
    uint16         u16RingSize;
    uint16         u16RingIndex;
    uint16         BufIdxStart;
    uint16         BufIdx, BufIdxNext;
    Std_ReturnType RetValue = E_NOT_OK;

    u16RingSize = EthHandle->TxState[FifoIdx].RingSize;
    BufIdxStart = EthHandle->TxState[FifoIdx].BufIdxStart;

    ETH_ENTER_EXCLUSIVE_AREA_TX_BUFFER();
    BufIdx = EthHandle->TxState[FifoIdx].BufIdxCurr;
    for (u16RingIndex = 0U; u16RingIndex < u16RingSize; ++u16RingIndex)
    {
        BufIdxNext = (uint16)(((BufIdx + 1U) < (BufIdxStart + u16RingSize)) ? (BufIdx + 1U) :
                                                                              BufIdxStart);

        if (EthHandle->TxBufIdxMap[BufIdx].Locked == (boolean)FALSE)
        {
            *pBufIdx                               = (uint32)BufIdx;
            EthHandle->TxState[FifoIdx].BufIdxCurr = BufIdxNext;
            EthHandle->TxBufIdxMap[BufIdx].Locked  = (boolean)TRUE;
            RetValue                               = E_OK;
            break;
        }
        BufIdx = BufIdxNext;
    }
    ETH_EXIT_EXCLUSIVE_AREA_TX_BUFFER();

    return RetValue;
}

/**
 * @brief                        Release the TX buffer to unlocked state.
 * @details                      Release the TX buffer to unlocked state after the transmission.
 * @param[in] EthHandle          Ethernet Driver handle.
 * @param[in] BufIdx             Index of the TX buffer.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_FreeTxBuffer(Eth_HandleType *EthHandle, uint32 BufIdx)
{
    if (BufIdx < (uint32)EthHandle->MaxTxBufCount)
    {
        EthHandle->TxBufIdxMap[BufIdx].Locked = (boolean)FALSE;
    }
}

/**
 * @brief                        Setup the ENET DMA TX descriptor for transmission.
 * @details                      Setup the ENET DMA TX descriptor for transmission.
 * @param[in] pDesc              Pointer to the DMA descriptor.
 * @param[in] pBuffer            Pointer to the data buffer.
 * @param[in] FrameLen           Frame length to transmit.
 * @param[in] TxInterruptEn      Whether to enable the interrupt mode.
 * @param[in] TimestampEn        Whether to enable TX time stamp snapshotting.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_SetupTxDescriptor(Eth_DMADescType *pDesc,
                                                             const uint8     *pBuffer,
                                                             uint16           FrameLen,
                                                             boolean          TxInterruptEn,
                                                             boolean          TimestampEn)
{
    pDesc->Des0 = (uint32)pBuffer;
    pDesc->Des1 = 0U;

    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     *  2985:This operation is redundant. The value of the result is always that of the left-hand
     *  operand.
     *  Reason: The redundant operation in macro is for formatting consistency.
     */
    pDesc->Des2 = ENET_TDES2_BUFFER1_LEN(FrameLen);
    /* PRQA S 2985 -- */

    /* Enable TX complete interrupt */
    if ((boolean)TRUE == TxInterruptEn)
    {
        pDesc->Des2 |= ENET_TDES2_IOC_MASK;
    }

    /* Enable timestamp */
    if ((boolean)TRUE == TimestampEn)
    {
        pDesc->Des2 |= ENET_TDES2_TTSE_MASK;
    }

    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     *  2985:This operation is redundant. The value of the result is always that of the left-hand
     *  operand.
     *  Reason: The redundant operation in macro is for formatting consistency.
     */
    /* Set descriptor owner to DMA */
    pDesc->Des3 = ENET_DES3_OWN_MASK | ENET_TDES3_FL(FrameLen) | ENET_TDES3_FD_MASK |
                  ENET_TDES3_LD_MASK;
    /* PRQA S 2985 -- */

    /* Enable check offload */
#if (STD_ON == ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM)
    pDesc->Des3 |= ENET_TDES3_CIC(3U);
#endif
}

/**
 * @brief                        Setup the ENET DMA TX descriptor for transmission.
 * @details                      Setup the ENET DMA TX descriptor for transmission.
 * @param[in] DescPtr            Pointer to the DMA descriptor.
 * @param[in] pBuffer            Pointer to the data buffer.
 * @param[in] FrameLen           Frame length to transmit.
 * @param[in] EthHandle          Ethernet Driver handle.
 * @param[in] pBufIdxMap         Information of indexed TX buffer.
 * @return                       E_OK: TX descriptor is available.
 *                               E_NOT_OK: TX descriptor is owned by DMA.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_BuildTxDescriptor(Eth_DMADescPtrType DescPtr,
                                                                 const uint8       *pBuffer,
                                                                 uint16             FrameLen,
                                                                 Eth_HandleType    *EthHandle,
                                                                 Eth_BufIdxMapType *pBufIdxMap)
{
    Std_ReturnType RetValue = E_NOT_OK;

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    Eth_DMAEnhancedDescType *pEdesc;

    if (EthHandle->TxState[pBufIdxMap->FifoIdx].EnhanecDescMode != 0u)
    {
        pEdesc = (Eth_DMAEnhancedDescType *)DescPtr;
        if (0U == (pEdesc->Des3 & ENET_DES3_OWN_MASK))
        {
            if (pBufIdxMap->LaunchtimeValid == (boolean)TRUE)
            {
                /* When EST offset mode is enabled, the EST must be already enabled. */
                if (ENET_HWA_MTL_GetEstOffsetModeEnFlag(EthHandle->EnetBase) == (boolean)TRUE)
                {
                    pEdesc->EDes4 = ENET_ETDES4_LTV_MASK |
                                    ENET_ETDES4_GSN((pBufIdxMap->GCLSlotOffset +
                                                     ENET_HWA_MTL_GetEstCGSN(EthHandle->EnetBase)) &
                                                    15u) |
                                    ENET_ETDES4_LT(pBufIdxMap->LaunchtimeSec);
                }
                else
                {
                    pEdesc->EDes4 = ENET_ETDES4_LTV_MASK | ENET_ETDES4_LT(pBufIdxMap->LaunchtimeSec);
                }
                pEdesc->EDes5               = ENET_ETDES5_LT(pBufIdxMap->LaunchtimeNanoSec);
                pBufIdxMap->LaunchtimeValid = (boolean)FALSE;
            }
            else
            {
                pEdesc->EDes4 = 0U;
                pEdesc->EDes5 = 0U;
            }
            Eth_Hal_SetupTxDescriptor((Eth_DMADescType *)(&pEdesc->Des0),
                                      pBuffer,
                                      FrameLen,
                                      EthHandle->TxIntEn,
                                      pBufIdxMap->TsEnable);
            RetValue = E_OK;
        }
    }
    else
    {
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

        if (0U == (((Eth_DMADescType *)DescPtr)->Des3 & ENET_DES3_OWN_MASK))
        {
            Eth_Hal_SetupTxDescriptor((Eth_DMADescType *)DescPtr,
                                      pBuffer,
                                      FrameLen,
                                      EthHandle->TxIntEn,
                                      pBufIdxMap->TsEnable);
            RetValue = E_OK;
        }

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    }
#endif

    return RetValue;
}

/**
 * @brief                        Setup the ENET DMA RX descriptor for reception.
 * @details                      Setup the ENET DMA RX descriptor for reception.
 * @param[in] pDesc              Pointer to the DMA descriptor.
 * @param[in] bItMode            Whether to enable the interrupt mode.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_SetupRxDescriptor(Eth_DMADescType *pDesc, boolean ItMode)
{
    pDesc->Des0 = pDesc->Backup0;
    pDesc->Des1 = 0U;
    pDesc->Des2 = pDesc->Backup1;
    pDesc->Des3 = ENET_RDES3_BUFFER1_VALID_MASK;

    if (pDesc->Backup1 != 0U)
    {
        pDesc->Des3 |= ENET_RDES3_BUFFER2_VALID_MASK;
    }

    if ((boolean)TRUE == ItMode)
    {
        pDesc->Des3 |= ENET_RDES3_IOC_MASK;
    }
    pDesc->Des3 |= ENET_DES3_OWN_MASK;
}

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *  3006:These functions contains a mixture of in-line assembler statements and C statements.
 *  Reason: The assembly statement has been encapsulated and isolated.
 */

/**
 * @brief                        Send frame.
 * @details                      Pass frame to DMA,and enable DMA transmission.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] pFifoState         TX FIFO buffer state of the Ethernet Driver.
 * @param[inout] pBufIdxMap      Information of indexed TX buffer.
 * @param[in] pBuffer            Buffer to transmit.
 * @param[in] FrameLen           Frame length to transmit.
 * @return                       E_OK: Send frame success.
 *                               E_NOT_OK: Send frame failed.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_SendFrame(Eth_HandleType        *EthHandle,
                                                         const Eth_TxStateType *pFifoState,
                                                         Eth_BufIdxMapType     *pBufIdxMap,
                                                         const uint8           *pBuffer,
                                                         uint16                 FrameLen)
{
    Std_ReturnType     RetValue;
    Eth_DMADescPtrType pDesc;
    Eth_DMADescPtrType pTailDesc;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */
    pDesc = (Eth_DMADescPtrType)ENET_HWA_DMA_GetTxDescListTailAddr(
        EthHandle->EnetBase,
        (ENET_DMA_ChannelType)pBufIdxMap->FifoIdx);
    /* PRQA S 4342 -- */

    RetValue = Eth_Hal_BuildTxDescriptor(pDesc, pBuffer, FrameLen, EthHandle, pBufIdxMap);
    if (E_OK == RetValue)
    {
        pTailDesc = Eth_Hal_NextTxDescriptor(pDesc, pFifoState);

        /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
         *  1006:This in-line assembler construct is a language extension.
         *  Reason: The use of this inline assembly is documented.
         */
        ETH_DATA_BARRIER();
        /* PRQA S 1006 -- */

        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
         *  to an inappropriate essential type
         *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
         *  REASON:The parameter of hardware level function is defined as enum type, so it is
         *  necessary to cast the channel number to channel enum type.
         */
        /* Set tail descriptor to start transfer */
        ENET_HWA_DMA_SetTxDescListTailAddr(EthHandle->EnetBase,
                                           (ENET_DMA_ChannelType)pBufIdxMap->FifoIdx,
                                           (uint32)pTailDesc);
        /* PRQA S 4342 -- */

        pBufIdxMap->DescPtr = pDesc;
    }

    return RetValue;
}
/* PRQA S 3006 -- */

/**
 * @brief                        Get transmit status.
 * @details                      Get the transmit status of the DMA send request in the transmit queue.
 * @param[in] EnetBase           ENET instance base.
 * @param[inout] pBufIdxMap      Information of indexed TX buffer.
 * @param[out] pTimeout          Transmit frame timeout.
 * @return                       E_OK: Transmit status had been gotten.
 *                               E_NOT_OK: Transmit status is uncertain.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_GetTransmitStatus(Eth_HandleType    *EthHandle,
                                                                 Eth_BufIdxMapType *pBufIdxMap,
                                                                 boolean           *pTimeout)
{
    Std_ReturnType   RetValue = E_OK;
    Eth_DMADescType *pDesc;

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    if (EthHandle->TxState[pBufIdxMap->FifoIdx].EnhanecDescMode)
    {
        pDesc = (Eth_DMADescType *)(&(((Eth_DMAEnhancedDescType *)pBufIdxMap->DescPtr)->Des0));
    }
    else
    {
#endif
        pDesc = (Eth_DMADescType *)pBufIdxMap->DescPtr;
#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
    }
#endif

    if ((pDesc->Des3 & ENET_DES3_OWN_MASK) == (uint32)0U)
    {
#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
        /* Transmit complete, get TX time stamp */
        if ((pDesc->Des3 & ENET_TDES3_TTSS_MASK) != 0U)
        {
            Eth_Hal_ReadTxDescTimestamp(EthHandle->EnetBase, pDesc, pBufIdxMap);
        }
#endif
        *pTimeout = (boolean)FALSE;
    }
    else
    {
        if (pBufIdxMap->TimeOut == 0U)
        {
            /* Transmit timeout */
            *pTimeout = (boolean)TRUE;
        }
        else
        {
            --pBufIdxMap->TimeOut;
            RetValue = E_NOT_OK;
        }
    }
    return RetValue;
}

/**
 * @brief                        Release RX descriptors to DMA.
 * @details                      Prepare the RX descriptors,and set owner to DMA.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] FifoIdx            Index of the RX FIFO of the Ethernet Driver.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_ReleaseRxDescriptors(Eth_HandleType *EthHandle, uint8 FifoIdx)
{
    Eth_RxStateType       *pFifoState = &(EthHandle->RxState[FifoIdx]);
    Eth_DMADescType       *pStart     = pFifoState->FirstDesc;
    const Eth_DMADescType *pEnd       = pFifoState->LastDesc;
    Eth_DMADescType       *pDesc;

    if ((pStart != NULL_PTR) && (pEnd != NULL_PTR))
    {
        pDesc = pStart;

        while (pDesc != pEnd)
        {
            Eth_Hal_SetupRxDescriptor(pDesc, EthHandle->RxIntEn);
            pDesc = Eth_Hal_NextRxDescriptor(pDesc, pFifoState);
        }
        Eth_Hal_SetupRxDescriptor(pDesc, EthHandle->RxIntEn);

        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
         *  to an inappropriate essential type
         *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
         *  REASON:The parameter of hardware level function is defined as enum type, so it is
         *  necessary to cast the channel number to channel enum type.
         */
        ENET_HWA_DMA_SetRxDescListTailAddr(EthHandle->EnetBase,
                                           (ENET_DMA_ChannelType)FifoIdx,
                                           (uint32)pDesc);
        /* PRQA S 4342 -- */
    }
    pFifoState->FirstDesc = NULL_PTR;
    pFifoState->LastDesc  = NULL_PTR;
}

ETH_TEXT_SECTION static Eth_RxStatusType Eth_Hal_CheckNextDescAvailable(const ENET_Type *EnetBase,
                                                                        Eth_DMADescType *pCurrDesc,
                                                                        Eth_RxStateType *pFifoState)
{
    Eth_RxStatusType RxStatus;
    Eth_DMADescType *pDesc;
#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    boolean TsValid;
#else
    (void)EnetBase;
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

    pDesc = Eth_Hal_NextRxDescriptor(pCurrDesc, pFifoState);

    /** Check following descriptor is context descriptor or not */
    if ((pDesc->Des3 & ENET_DES3_OWN_MASK) == 0U)
    {
        if (0U != (pDesc->Des3 & ENET_DES3_CTXT_MASK))
        {
            pFifoState->LastDesc = pDesc;
#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
            TsValid = (0U != (((Eth_DMADescType *)pCurrDesc)->Des1 &
                              ENET_RDES1_TIMESTAMP_AVAILABLE_MASK)) ?
                          (boolean)TRUE :
                          (boolean)FALSE;
            Eth_Hal_ReadRxDescTimestamp(EnetBase, pDesc, &pFifoState->RxInfo, TsValid);
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */
            pDesc = Eth_Hal_NextRxDescriptor(pDesc, pFifoState);
        }
    }

    if ((pDesc->Des3 & ENET_DES3_OWN_MASK) == 0U)
    {
        RxStatus = ETH_RECEIVED_MORE_DATA_AVAILABLE;
    }
    else
    {
        RxStatus = ETH_RECEIVED;
    }
    return RxStatus;
}

/**
 * @brief                        Read frame from indexed FIFO.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] FifoIdx            Index of the RX FIFO.
 * @param[in] pBuffers           The buffer chain of Eth_DrvBufType to save received data.
 *                               A valid buffer must be ended with NULL pointer.
 *                               The member TotalLen of the first buffer will be assigned by driver.
 *                               The member Length of available buffers will be assigned by driver.
 *                               The member DataPtr of available buffers will be filled by DMA.
 * @return                       ETH_RECEIVED: A frame has been received.
 *                               ETH_NOT_RECEIVED: No frame is received.
 *                               ETH_RECEIVED_MORE_DATA_AVAILABLE: A frame has been received,
 *                               and more frames are available.
 *
 */
ETH_TEXT_SECTION static Eth_RxStatusType Eth_Hal_ReadFrame(Eth_HandleType *EthHandle,
                                                           uint8           FifoIdx,
                                                           Eth_DrvBufType *pBuffers)
{
    const ENET_Type *EnetBase   = EthHandle->EnetBase;
    Eth_RxStateType *pFifoState = &(EthHandle->RxState[FifoIdx]);
    Eth_DMADescType *pDescTail, *pDesc;
    Eth_RxStatusType RxStatus = ETH_NOT_RECEIVED;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */
    pDescTail = (Eth_DMADescType *)ENET_HWA_DMA_GetRxDescListTailAddr(EnetBase,
                                                                      (ENET_DMA_ChannelType)FifoIdx);
    /* PRQA S 4342 -- */

    pDesc = Eth_Hal_NextRxDescriptor(pDescTail, pFifoState);

    pFifoState->FirstDesc = NULL_PTR;
    pFifoState->LastDesc  = NULL_PTR;

    while (((pDesc->Des3 & ENET_DES3_OWN_MASK) == 0U) && (pBuffers != NULL_PTR))
    {
        /* Only the descriptor with both LD and FD set is regarded as complete descriptor */
        if ((pDesc->Des3 & (ENET_RDES3_LD_MASK | ENET_RDES3_FD_MASK)) ==
            (ENET_RDES3_LD_MASK | ENET_RDES3_FD_MASK))
        {
            if (pFifoState->FirstDesc != NULL_PTR)
            {
                /* Release all incomplete descriptors before the current complete descriptor */
                Eth_Hal_ReleaseRxDescriptors(EthHandle, FifoIdx);
            }

            pFifoState->FirstDesc      = pDesc;
            pFifoState->LastDesc       = pDesc;
            pBuffers->Length           = (uint16)(pDesc->Des3 & ENET_RDES3_PACKET_LENGTH_MASK);
            pBuffers->DataPtr          = (uint8 *)pDesc->Backup0;
            pFifoState->RxInfo.DataPtr = pBuffers->DataPtr;

            RxStatus = Eth_Hal_CheckNextDescAvailable(EnetBase, pDesc, pFifoState);
            break;
        }
        else
        {
            /* No complete descriptor found, add all incomplete descriptors to the list to be
             * released (FirstDesc to LastDesc) */
            if (pFifoState->FirstDesc == NULL_PTR)
            {
                /* FirstDesc is NULL_PTR, mark this incomplete descriptor as the first descriptor to
                 * be released */
                pFifoState->FirstDesc = pDesc;
            }
            /* Mark this descriptor as the last descriptor to be released */
            pFifoState->LastDesc = pDesc;
            pDesc                = Eth_Hal_NextRxDescriptor(pDesc, pFifoState);
        }
    }

    /** If receive failed, release RX descriptors from FirstDesc to LastDesc */
    if (ETH_NOT_RECEIVED == RxStatus)
    {
        Eth_Hal_ReleaseRxDescriptors(EthHandle, FifoIdx);
    }
    return RxStatus;
}

/**
 * @brief                        Initialize RX buffers and descriptors.
 * @details                      Initialize RX buffers and descriptors.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_RxBuffersInit(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type       *EnetBase = EthHandle->EnetBase;
    uint8            u8Channel;
    uint16           u16RingIndex;
    uint16           u16RingSize;
    uint16           u16BufferLen;
    uint32           u32BufStart;
    Eth_DMADescType *pRxDesc;

    EthHandle->RxRingCnt = ETH_CFG_NUM_RX_FIFO(CtrlCfgPtr);

    for (u8Channel = 0U; u8Channel < EthHandle->RxRingCnt; ++u8Channel)
    {
        u32BufStart  = (uint32)ETH_CFG_CTRL_RX_BUF_START_ADDRESS(CtrlCfgPtr, u8Channel);
        u16BufferLen = ETH_CFG_CTRL_RX_FIFO_BUF_LENBYTE(CtrlCfgPtr, u8Channel);
        u16RingSize  = ETH_CFG_CTRL_RX_FIFO_BUF_TOTAL(CtrlCfgPtr, u8Channel);
        EthHandle->RxState[u8Channel].DescList =
            (Eth_DMADescPtrType)ETH_CFG_CTRL_RX_DESC_START_ADDRESS(CtrlCfgPtr, u8Channel);
        EthHandle->RxState[u8Channel].BufferLen = u16BufferLen;
        EthHandle->RxState[u8Channel].RingSize  = u16RingSize;
        pRxDesc = (Eth_DMADescType *)EthHandle->RxState[u8Channel].DescList;

        if (u16RingSize > (uint16)0U)
        {

            for (u16RingIndex = 0U; u16RingIndex < u16RingSize; ++u16RingIndex)
            {
                /* [FMR_Eth_00002]Use Backup0 to save the receive data buffer backup address. */
                pRxDesc[u16RingIndex].Backup0 = u32BufStart +
                                                ((uint32)u16BufferLen * (uint32)u16RingIndex);
                pRxDesc[u16RingIndex].Backup1 = 0U;
                Eth_Hal_SetupRxDescriptor(&pRxDesc[u16RingIndex], EthHandle->RxIntEn);
            }

            /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
             *  to an inappropriate essential type
             *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
             *  REASON:The parameter of hardware level function is defined as enum type, so it is
             *  necessary to cast the channel number to channel enum type.
             */
            ENET_HWA_DMA_SetRxDescListHeadAddr(EnetBase,
                                               (ENET_DMA_ChannelType)u8Channel,
                                               (uint32)pRxDesc);
            ENET_HWA_DMA_SetRxDescListTailAddr(EnetBase,
                                               (ENET_DMA_ChannelType)u8Channel,
                                               (uint32)(&pRxDesc[u16RingSize - 1U]));
            ENET_HWA_DMA_SetRxDescRingLength(EnetBase,
                                             (ENET_DMA_ChannelType)u8Channel,
                                             (uint16)(u16RingSize - (uint16)1U));
            ENET_HWA_DMA_SetRxBufferSize(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         EthHandle->RxState[u8Channel].BufferLen);
            /* PRQA S 4342 -- */
        }
    }
}

/**
 * @brief                        Start transmission and reception.
 * @details                      Start transmission and reception by enable MAC and DMA.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_Start(Eth_HandleType        *EthHandle,
                                           const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type             *EnetBase = EthHandle->EnetBase;
    uint8                  u8Channel;
    uint16                 u16RingIndex;
    const Eth_RxStateType *pFifoState;
    Eth_DMADescType       *pRxDesc;

    if ((boolean)TRUE == EthHandle->RxIntEn)
    {
        for (u8Channel = 0U; u8Channel < EthHandle->RxRingCnt; ++u8Channel)
        {
            pFifoState = &EthHandle->RxState[u8Channel];
            pRxDesc    = (Eth_DMADescType *)pFifoState->DescList;
            for (u16RingIndex = 0U; u16RingIndex < pFifoState->RingSize; ++u16RingIndex)
            {
                pRxDesc[u16RingIndex].Des3 |= ENET_RDES3_IOC_MASK;
            }
        }
    }

    /* Enable MAC transmission and reception */
    ENET_HWA_MAC_SetTxEnFlag(EnetBase, (uint8)ETH_ENABLE);
    ENET_HWA_MAC_SetRxEnFlag(EnetBase, (uint8)ETH_ENABLE);

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel or MTL queue number to enum type.
     */

    /* Flush Transmit Queues FIFO  */
    for (u8Channel = 0U; u8Channel < EthHandle->TxRingCnt; ++u8Channel)
    {
        ENET_HWA_MTL_FlushTxQueue(EnetBase, (ENET_MTL_QueueType)u8Channel);
    }

    /* Enable DMA transmission */
    for (u8Channel = 0U; u8Channel < EthHandle->TxRingCnt; ++u8Channel)
    {
        ENET_HWA_DMA_StartTx(EnetBase, (ENET_DMA_ChannelType)u8Channel);
        ENET_HWA_DMA_ClearTxProcessStoppedFlag(EnetBase, (ENET_DMA_ChannelType)u8Channel);
    }

    /* Enable DMA reception */
    for (u8Channel = 0U; u8Channel < EthHandle->RxRingCnt; ++u8Channel)
    {
        ENET_HWA_DMA_StartRx(EnetBase, (ENET_DMA_ChannelType)u8Channel);
        ENET_HWA_DMA_ClearRxProcessStoppedFlag(EnetBase, (ENET_DMA_ChannelType)u8Channel);
    }

    /* Enable interrupts */
    if ((boolean)TRUE == EthHandle->TxIntEn)
    {
        for (u8Channel = 0U; u8Channel < EthHandle->TxRingCnt; ++u8Channel)
        {
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_NORMAL_INTERRUPT);
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_ABNORMAL_INTERRUPT);
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_TX_INTERRUPT);
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_FATAL_BUS_ERROR_INTERRUPT);
        }
    }
    if ((boolean)TRUE == EthHandle->RxIntEn)
    {
        for (u8Channel = 0U; u8Channel < EthHandle->RxRingCnt; ++u8Channel)
        {
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_NORMAL_INTERRUPT);
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_ABNORMAL_INTERRUPT);
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_RX_INTERRUPT);
            ENET_HWA_DMA_EnableInterrupt(EnetBase,
                                         (ENET_DMA_ChannelType)u8Channel,
                                         ENET_DMA_FATAL_BUS_ERROR_INTERRUPT);
        }
    }
    (void)CtrlCfgPtr;
    /* PRQA S 4342 -- */
}

/**
 * @brief                        Stop transmission and reception.
 * @details                      Stop transmission and reception by disable MAC and DMA.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_Stop(Eth_HandleType *EthHandle, const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type             *EnetBase = EthHandle->EnetBase;
    uint8                  u8Channel;
    uint16                 u16RingIndex;
    Eth_DMADescType       *pRxDesc;
    const Eth_RxStateType *pFifoState;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel or MTL queue number to enum type.
     */

    /* Disable interrupts */
    for (u8Channel = 0U; u8Channel < ETH_FEATURE_MAX_CHANNEL_COUNT; ++u8Channel)
    {
        ENET_HWA_DMA_SetEnabledInterrupts(EnetBase, (ENET_DMA_ChannelType)u8Channel, 0U);
    }

    /* Disable DMA transmission */
    for (u8Channel = 0U; u8Channel < EthHandle->TxRingCnt; ++u8Channel)
    {
        ENET_HWA_DMA_StopTx(EnetBase, (ENET_DMA_ChannelType)u8Channel);
        ENET_HWA_MTL_FlushTxQueue(EnetBase, (ENET_MTL_QueueType)u8Channel);
    }

    /* Disable MAC transmission and reception */
    ENET_HWA_MAC_SetTxEnFlag(EnetBase, (uint8)ETH_DISABLE);
    ENET_HWA_MAC_SetRxEnFlag(EnetBase, (uint8)ETH_DISABLE);

    /* Disable DMA reception */
    for (u8Channel = 0U; u8Channel < EthHandle->RxRingCnt; ++u8Channel)
    {
        ENET_HWA_DMA_StopRx(EnetBase, (ENET_DMA_ChannelType)u8Channel);
        ENET_HWA_DMA_SetRxPacketFlushEnFlag(EnetBase, (ENET_DMA_ChannelType)u8Channel, ETH_ENABLE);

        /* Clear RX descriptor IOC bit */
        if ((boolean)TRUE == EthHandle->RxIntEn)
        {
            pFifoState = &EthHandle->RxState[u8Channel];
            pRxDesc    = (Eth_DMADescType *)pFifoState->DescList;
            for (u16RingIndex = 0U; u16RingIndex < pFifoState->RingSize; ++u16RingIndex)
            {
                pRxDesc[u16RingIndex].Des3 &= ~ENET_RDES3_IOC_MASK;
            }
        }
    }
    (void)CtrlCfgPtr;
    /* PRQA S 4342 -- */
}

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief                        Read time stamp from RX descriptor.
 * @details                      Read time stamp from RX descriptor.
 * @param[in] EnetBase           ENET instance base.
 * @param[in] pDesc              Pointer to DMA descriptor.
 * @param[in] pRxInfo            Information of received frame.
 * @param[in] TsValid            time stamp valid or not.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_ReadRxDescTimestamp(const ENET_Type       *EnetBase,
                                                         const Eth_DMADescType *pDesc,
                                                         Eth_RxInfoType        *pRxInfo,
                                                         boolean                TsValid)
{
    uint32 CurrSeconds;

    pRxInfo->Nanoseconds = pDesc->Des0;
    pRxInfo->Seconds     = pDesc->Des1;
    CurrSeconds          = ENET_HWA_MAC_GetSystemTimeSeconds(EnetBase);
    pRxInfo->SecondsHi   = ENET_HWA_MAC_GetSystemTimeHigherWordSeconds(EnetBase);

    if (pRxInfo->Seconds > CurrSeconds)
    {
        pRxInfo->SecondsHi = (uint16)(pRxInfo->SecondsHi - 1U);
    }
    pRxInfo->TimeStampValid = TsValid;
}

/**
 * @brief                        Read time stamp from TX descriptor.
 * @details                      Read time stamp from TX descriptor.
 * @param[in] EnetBase           ENET instance base.
 * @param[in] pDesc              Pointer to DMA descriptor.
 * @param[in] pBufIdxMap         Information of indexed TX buffer.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_ReadTxDescTimestamp(const ENET_Type       *EnetBase,
                                                         const Eth_DMADescType *pDesc,
                                                         Eth_BufIdxMapType     *pBufIdxMap)
{
    uint32 u32CurrTimeSec;

    if ((pDesc->Des3 & ENET_TDES3_LD_MASK) != 0U)
    {
        pBufIdxMap->TimeStampNs    = pDesc->Des0;
        pBufIdxMap->TimeStampSec   = pDesc->Des1;
        pBufIdxMap->TimeStampSecHi = ENET_HWA_MAC_GetSystemTimeHigherWordSeconds(EnetBase);
        u32CurrTimeSec             = ENET_HWA_MAC_GetSystemTimeSeconds(EnetBase);
        if (pBufIdxMap->TimeStampSec > u32CurrTimeSec)
        {
            pBufIdxMap->TimeStampSecHi = (uint16)(pBufIdxMap->TimeStampSecHi - 1U);
        }
        pBufIdxMap->TsValid = (boolean)TRUE;
    }
    else
    {
        pBufIdxMap->TimeStampNs  = 0u;
        pBufIdxMap->TimeStampSec = 0u;
        pBufIdxMap->TsValid      = (boolean)FALSE;
    }
}

/**
 * @brief                       Initialize the PTP system time.
 * @details                     Initialize the PTP system time.
 * @param[in] EnetBase          ENET controller instance
 * @param[in] SecondsHi         System time Seconds high 16 bits
 * @param[in] Seconds           System time Seconds low 32 bits value
 * @param[in] NanoSeconds       System time NanoSeconds
 * @return                      E_OK : Initialize time success.
 *                              E_NOT_OK : Initialize time timeout.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PTPInitSystemTime(ENET_Type *EnetBase,
                                                                 uint16     SecondsHi,
                                                                 uint32     Seconds,
                                                                 uint32     NanoSeconds)
{
    uint32 Timeout = ETH_TIMEOUT_LOOP_COUNT;
    ENET_HWA_MAC_SetSystemTimeHigherWordSeconds(EnetBase, SecondsHi);
    ENET_HWA_MAC_SetSystemTimeSecondsUpdateValue(EnetBase, Seconds);
    ENET_HWA_MAC_SetSystemTimeNanoSecondsUpdateValue(EnetBase, NanoSeconds);
    ENET_HWA_MAC_SetTimeUpdateOperation(EnetBase, ENET_MAC_SYSTEM_TIME_ADD_TIME);
    ENET_HWA_MAC_InitTimestamp(EnetBase);
    /* [FMR_Eth_00006] */
    while ((ENET_MAC_STATUS_IDLE != ENET_HWA_MAC_GetTimestampInitStatus(EnetBase)) && (Timeout > 0U))
    {
        --Timeout;
    }
    return (Timeout > 0U) ? E_OK : E_NOT_OK;
}

/**
 * @brief                       Update the PTP system time.
 * @details                     Update the PTP system time.
 * @param[in] EnetBase          ENET controller instance
 * @param[in] Seconds           Diff time Seconds value
 * @param[in] NanoSeconds       Diff time NanoSeconds
 * @param[in] Sign              Positive (True) Or negative (False)
 * @return                      E_OK : Update time success.
 *                              E_NOT_OK : Update time timeout.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PTPUpdateSystemTime(ENET_Type *EnetBase,
                                                                   uint32     Seconds,
                                                                   uint32     NanoSeconds,
                                                                   boolean    Sign)
{
    uint32         Timeout = ETH_TIMEOUT_LOOP_COUNT;
    Std_ReturnType Status  = E_OK;
    uint32         UpdateSeconds;
    uint32         UpdateNanoseconds;

    if ((Seconds != 0U) || (NanoSeconds != 0U))
    {
        if ((boolean)TRUE == Sign)
        {
            UpdateSeconds     = Seconds;
            UpdateNanoseconds = NanoSeconds;
            ENET_HWA_MAC_SetTimeUpdateOperation(EnetBase, ENET_MAC_SYSTEM_TIME_ADD_TIME);
        }
        else
        {
            UpdateSeconds     = (Seconds > 0U) ? (0xFFFFFFFFU - (Seconds - 1U)) : 0U;
            UpdateNanoseconds = (NanoSeconds > 0U) ? (1000000000U - NanoSeconds) : 0U;
            ENET_HWA_MAC_SetTimeUpdateOperation(EnetBase, ENET_MAC_SYSTEM_TIME_SUBTRACT_TIME);
        }
        ENET_HWA_MAC_SetSystemTimeSecondsUpdateValue(EnetBase, UpdateSeconds);
        ENET_HWA_MAC_SetSystemTimeNanoSecondsUpdateValue(EnetBase, UpdateNanoseconds);
        ENET_HWA_MAC_UpdateTimestamp(EnetBase);
        /* [FMR_Eth_00006] */
        while ((ENET_MAC_STATUS_IDLE != ENET_HWA_MAC_GetTimestampUpdateStatus(EnetBase)) &&
               (Timeout > 0U))
        {
            --Timeout;
        }
        Status = (Timeout > 0U) ? E_OK : E_NOT_OK;
    }
    return Status;
}

/**
 * @brief                       Update the PTP time stamp Addend.
 * @details                     Update the PTP time stamp Addend.
 * @param[in] EnetBase          ENET controller instance
 * @param[in] Addend            New time stamp Addend value.
 * @return                      E_OK : Update Addend success.
 *                              E_NOT_OK : Update Addend timeout.
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PTPUpdateAddend(ENET_Type *EnetBase, uint32 Addend)
{
    uint32 Timeout = ETH_TIMEOUT_LOOP_COUNT;

    ENET_HWA_MAC_SetTimestampAddend(EnetBase, Addend);
    ENET_HWA_MAC_UpdateAddendRegister(EnetBase);
    /* [FMR_Eth_00006] */
    while ((ENET_MAC_STATUS_IDLE != ENET_HWA_MAC_GetAddendRegisterUpdateStatus(EnetBase)) &&
           (Timeout > 0U))
    {
        --Timeout;
    }
    return (Timeout > 0U) ? E_OK : E_NOT_OK;
}

/**
 * @brief                       Initialize and start PTP module.
 * @details                     Initialize and start PTP module.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr        Pointer to the controller configuration.
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_PtpInit(Eth_HandleType        *EthHandle,
                                                       const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type     *EnetBase = EthHandle->EnetBase;
    Std_ReturnType Status;

    /* Disable timestamp interrupt */
    ENET_HWA_MAC_SetTimestampInterruptEnFlag(EnetBase, (uint8)ETH_DISABLE);
    /* Set PTP control register to reset value */
    ENET_HWA_MAC_SetTimestampControl(EnetBase, 0x00002000U);

    /* The PTP reference clock setting is moved to MCU SCM module */

    /* Timestamping control configuration */
    ENET_HWA_MAC_SetTimestampControl(EnetBase, ETH_CFG_CTRL_PTP_CONTROL(CtrlCfgPtr));
    /* Force digital rollover mode */
    ENET_HWA_MAC_SetIimestampRolloverCtrl(EnetBase, ENET_MAC_TIMESTAMP_ROLLOVER_DIGITAL);
    /* Force fine update mode */
    ENET_HWA_MAC_SetTimestampUpdateMethod(EnetBase, ENET_MAC_TIMESTAMP_UPDATE_FINE);
    /* Enable timestamping */
    ENET_HWA_MAC_SetTimestampEnFlag(EnetBase, ETH_ENABLE);
    /* Set MAC_Sub_Second_Increment value */
    ENET_HWA_MAC_SetSubSecondIncrementReg(EnetBase,
                                          ETH_CFG_CTRL_PTP_SUBSECONDS_INCREMENT(CtrlCfgPtr));

    /* Set MAC_Timestamp_Addend value,and wait complete */
    Status = Eth_Hal_PTPUpdateAddend(EnetBase, ETH_CFG_CTRL_PTP_TIMESTAMP_ADDEND(CtrlCfgPtr));
    if (Status == E_OK)
    {
        /* Set Egress and Ingress sync correction */
        ENET_HWA_MAC_SetTimestampEgressCorrectionInNanoseconds(
            EnetBase,
            (sint32)ETH_CFG_CTRL_PTP_EGRESS_CORR_NANOSECONDS(CtrlCfgPtr));
        ENET_HWA_MAC_SetTimestampEgressCorrectionInSubNanoseconds(EnetBase, (sint8)0U);
        ENET_HWA_MAC_SetTimestampIngressCorrectionInNanoseconds(
            EnetBase,
            (sint32)ETH_CFG_CTRL_PTP_INGRESS_CORR_NANOSECONDS(CtrlCfgPtr));
        ENET_HWA_MAC_SetTimestampIngressCorrectionInSubNanoseconds(EnetBase, (sint8)0U);

        /* Initialize PTP system time. */
        Status = Eth_Hal_PTPInitSystemTime(EnetBase,
                                           ETH_CFG_CTRL_PTP_INIT_TIME_SECONDSHI(CtrlCfgPtr),
                                           ETH_CFG_CTRL_PTP_INIT_TIME_SECONDS(CtrlCfgPtr),
                                           ETH_CFG_CTRL_PTP_INIT_TIME_NANOSECONDS(CtrlCfgPtr));
    }
    if (Status == E_OK)
    {
        ENET_HWA_MAC_SetTimestampInterruptEnFlag(EnetBase, ETH_ENABLE);
    }
    else
    {
        ENET_HWA_MAC_SetTimestampEnFlag(EnetBase, (uint8)ETH_DISABLE);
    }

    return Status;
}
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/**
 * @brief                        Initialize Time Aware Shaper.
 * @details                      Initialize Time Aware Shaper.
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *
 */
ETH_TEXT_SECTION static Std_ReturnType Eth_Hal_GclWrite(ENET_Type *EnetBase,
                                                        boolean    Gcrr,
                                                        uint16     GclAddr,
                                                        uint32     GclData)
{
    Std_ReturnType RetValue   = E_OK;
    uint32         u32Timeout = ETH_TIMEOUT_LOOP_COUNT;

    ENET_HWA_MTL_SetGclData(EnetBase, GclData);
    ENET_HWA_MTL_SetEstGateControlListAddress(EnetBase, GclAddr);
    ENET_HWA_MTL_SetGateControlReleatedRegistersEnFlag(EnetBase, (uint8)Gcrr);
    ENET_HWA_MTL_SetGclOperation(EnetBase, ENET_MTL_GCL_WRITE);
    ENET_HWA_MTL_SetGclOperationStartFlag(EnetBase, TRUE);

    /* [FMR_Eth_00006] */
    while (0U != ENET_HWA_MTL_GetGclOperationBusyState(EnetBase))
    {
        --u32Timeout;
        if (u32Timeout == 0U)
        {
            RetValue = E_NOT_OK;
            break;
        }
    };

    return RetValue;
}

/**
 * @brief                        Calculate the base time of the Time Aware Shaper.
 * @details                      Due to the possible large deviation between the base time and the
 *                               PTP time maintained in the Eth controller when the shaper is
 *                               initialized, time adaptation is required based on the cycle time of
 *                               the shaper (RealBaseTime = BaseTime + N × CycleTime, where N is an
 *                               integer).
 *
 * @param[in] EnetBase           ENET instance base address.
 * @param[in] ShaperCfgPtr       Pointer to the configuration structure of the Time Aware Shaper.
 * @param[out] SecondsPtr        The variable to save the base time seconds.
 * @param[out] NanoSecondsPtr    The variable to save the base time nanoseconds.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_BaseTimeCalculation(ENET_Type *EnetBase,
                                                         const Eth_TimeAwareShaperType *ShaperCfgPtr,
                                                         uint32 *SecondsPtr,
                                                         uint32 *NanoSecondsPtr)
{
    uint32 u32CurrTimeSec;
    uint32 u32CurrTimeNs;
    uint32 u32TempValue;
    uint64 u64CurrTime;
    uint64 u64BaseTime;
    uint64 u64CycleTime;
    uint64 u64DiffTime;
    uint64 u64Div;

    ETH_ENTER_EXCLUSIVE_AREA_GETTIME();
    u32TempValue   = ENET_HWA_MAC_GetSystemTimeSeconds(EnetBase);
    u32CurrTimeNs  = ENET_HWA_MAC_GetSystemTimeNanoSeconds(EnetBase);
    u32CurrTimeSec = ENET_HWA_MAC_GetSystemTimeSeconds(EnetBase);
    ETH_EXIT_EXCLUSIVE_AREA_GETTIME();

    /* Check nanoseconds overflow */
    if ((u32CurrTimeNs > 900000000U) && (u32CurrTimeSec != u32TempValue))
    {
        u32CurrTimeSec = u32TempValue;
    }

    u64CurrTime  = (uint64)(((uint64)u32CurrTimeSec * 1000000000ULL) + (uint64)u32CurrTimeNs);
    u64BaseTime  = (uint64)(((uint64)ShaperCfgPtr->BaseTimeSeconds * 1000000000ULL) +
                           (uint64)ShaperCfgPtr->BaseTimeNanoseconds);
    u64CycleTime = (uint64)(((uint64)ShaperCfgPtr->CycleTimeSeconds * 1000000000ULL) +
                            (uint64)ShaperCfgPtr->CycleTimeNanoseconds);

    if (u64CurrTime <= u64BaseTime)
    {
        *SecondsPtr     = ShaperCfgPtr->BaseTimeSeconds;
        *NanoSecondsPtr = ShaperCfgPtr->BaseTimeNanoseconds;
    }
    else
    {
        u64DiffTime     = u64CurrTime - u64BaseTime;
        u64Div          = (u64DiffTime / u64CycleTime) + 1U;
        u64BaseTime     = u64BaseTime + (u64Div * u64CycleTime);
        *SecondsPtr     = (uint32)(u64BaseTime / 1000000000U);
        *NanoSecondsPtr = (uint32)(u64BaseTime % 1000000000U);
    }
}

/**
 * @brief                        Initialize Time Aware Shaper.
 * @details                      [SWDESG_ETH_353]This is the implementation of IEEE 802.1Qbv
 *                               (Enhancements to Scheduled Traffic) and IEEE802.1Qbu (Frame
 *                               Preemption). Note that, this function needs to be called after the
 *                               time synchronization.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] TimeAwareShaperIdx Index of the time aware shaper configurations.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_TimeAwareShaperInit(uint8                  CtrlIdx,
                                                            const Eth_CtrlCfgType *CtrlCfgPtr,
                                                            uint8 TimeAwareShaperIdx)
{
    ENET_Type                     *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;
    Std_ReturnType                 RetValue = E_OK;
    uint32                         TmpValue;
    uint32                         BaseTimeSeconds;
    uint32                         BaseTimeNanoseconds;
    uint16                         GclIdx;
    const Eth_TimeAwareShaperType *ShaperCfgPtr =
        ETH_CFG_CTRL_TIME_AWARE_SHAPER_PTR(CtrlCfgPtr, TimeAwareShaperIdx);

    Eth_Hal_BaseTimeCalculation(EnetBase, ShaperCfgPtr, &BaseTimeSeconds, &BaseTimeNanoseconds);

    if ((boolean)TRUE == ShaperCfgPtr->EnablePreemption)
    {
        ENET_HWA_MTL_SetPreemptionClassification(EnetBase, ShaperCfgPtr->PreemptionClassification);
        ENET_HWA_MTL_SetPreemptionReleaseAdvance(EnetBase, ShaperCfgPtr->ReleaseAdvanceTime);
        ENET_HWA_MTL_SetPreemptionHoldAdvance(EnetBase, ShaperCfgPtr->HoldAdvanceTime);
        ENET_HWA_MAC_SetFramePreemptionEnFlag(EnetBase, ETH_ENABLE);
    }

    for (GclIdx = 0U; GclIdx < ShaperCfgPtr->GateControlListLength; ++GclIdx)
    {
        TmpValue = (uint32)ETH_CFG_CTRL_GCL_GATE_CONTROL(ShaperCfgPtr, GclIdx);
        TmpValue = ((TmpValue & ENET_EST_GATE_MASK) << ENET_EST_INTERVAL_WIDTH) |
                   (ETH_CFG_CTRL_GCL_TIME_INTERVAL(ShaperCfgPtr, GclIdx) & ENET_EST_INTERVAL_MASK);
        RetValue = Eth_Hal_GclWrite(EnetBase, (boolean)FALSE, GclIdx, TmpValue);
        if (E_OK != RetValue)
        {
            break;
        }
    }

    if (E_OK == RetValue)
    {
        RetValue =
            Eth_Hal_GclWrite(EnetBase, (boolean)TRUE, (uint16)ENET_MTL_GCL_BTR_HIGH, BaseTimeSeconds);
    }
    if (E_OK == RetValue)
    {
        RetValue = Eth_Hal_GclWrite(EnetBase,
                                    (boolean)TRUE,
                                    (uint16)ENET_MTL_GCL_BTR_LOW,
                                    BaseTimeNanoseconds);
    }
    if (E_OK == RetValue)
    {
        RetValue = Eth_Hal_GclWrite(EnetBase,
                                    (boolean)TRUE,
                                    (uint16)ENET_MTL_GCL_CTR_HIGH,
                                    (uint32)ShaperCfgPtr->CycleTimeSeconds);
    }
    if (E_OK == RetValue)
    {
        RetValue = Eth_Hal_GclWrite(EnetBase,
                                    (boolean)TRUE,
                                    (uint16)ENET_MTL_GCL_CTR_LOW,
                                    ShaperCfgPtr->CycleTimeNanoseconds);
    }
    if (E_OK == RetValue)
    {
        RetValue = Eth_Hal_GclWrite(EnetBase,
                                    (boolean)TRUE,
                                    (uint16)ENET_MTL_GCL_TER,
                                    ShaperCfgPtr->TimeExtension);
    }
    if (E_OK == RetValue)
    {
        RetValue = Eth_Hal_GclWrite(EnetBase,
                                    (boolean)TRUE,
                                    (uint16)ENET_MTL_GCL_LLR,
                                    (uint32)ShaperCfgPtr->GateControlListLength);
    }
    if (E_OK == RetValue)
    {
        TmpValue = (ENET_HWA_MTL_GetEstControl(EnetBase) & (~ENET_MTL_EST_CONTROL_DFBS_MASK)) |
                   ENET_MTL_EST_CONTROL_SSWL_MASK | ENET_MTL_EST_CONTROL_DDBF_MASK |
                   ENET_MTL_EST_CONTROL_EEST_MASK;
        ENET_HWA_MTL_SetEstControl(EnetBase, TmpValue);
    }

    return RetValue;
}
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
/**
 * @brief                       Configure TBS control register.
 * @details                     Configures the Time Based Scheduling control register with the
 * provided parameters.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TBSCfgPtr         Pointer to the TBS configuration.
 * @return Std_ReturnType       Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_TBSConfigureCtrl(uint8                  CtrlIdx,
                                                         const Eth_CtrlCfgType *CtrlCfgPtr,
                                                         const Eth_TBSCfgType  *TBSCfgPtr)
{
    uint32         tbsCtrlValue;
    Std_ReturnType RetValue = E_OK;
    ENET_Type     *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    if (TBSCfgPtr->EstOffsetMode == (boolean)TRUE)
    {
        if ((ETH_CFG_CTRL_TIME_AWARE_SHAPER_NUM(CtrlCfgPtr) == 0U) ||
            ((ENET_HWA_MTL_GetEstControl(EnetBase) & ENET_MTL_EST_CONTROL_EEST_MASK) == 0U))
        {
            RetValue = E_NOT_OK;
        }
    }

    if (RetValue == E_OK)
    {
        /* Configure LEOS (Launch Expiry Offset) */
        tbsCtrlValue = ENET_MTL_TBS_CTRL_LEOS(TBSCfgPtr->LaunchExpiryOffset >> 8U);

        /* Configure LEGOS (Launch Expiry GSN Offset) */
        tbsCtrlValue |= ENET_MTL_TBS_CTRL_LEGOS(TBSCfgPtr->LaunchExpiryGsnOffset);

        /* Configure LEOV (Launch Expiry Offset Valid) */
        tbsCtrlValue |= ENET_MTL_TBS_CTRL_LEOV(TBSCfgPtr->LaunchExpiryOffsetValid ? ETH_ENABLE :
                                                                                    ETH_DISABLE);

        /* Configure ESTM (EST Offset Mode) */
        tbsCtrlValue |= ENET_MTL_TBS_CTRL_ESTM(TBSCfgPtr->EstOffsetMode ? ETH_ENABLE : ETH_DISABLE);

        /* Write configured value to TBS control register */
        ENET_HWA_MTL_SetTBSCtrl(EnetBase, tbsCtrlValue);
    }

    return RetValue;
}

/**
 * @brief                        Set launch time of the indexed buffer resource.
 * @details                      Save the launch time to the buffer resource structure.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] BufIdx             Index of the buffer resource to be transmitted.
 * @param[in] LaunchTimePtr      Pointer to the TBS launch time structure.
 * @return Std_ReturnType        Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION void Eth_Hal_TBSSetLaunchTime(uint8                        CtrlIdx,
                                               Eth_BufIdxType               BufIdx,
                                               const Eth_TBSLaunchTimeType *LaunchTimePtr)
{
    Eth_BufIdxMapType *pBufIdxMap = &(Eth_HalHandles[CtrlIdx].TxBufIdxMap[BufIdx]);

    if ((boolean)TRUE == pBufIdxMap->Locked)
    {
        pBufIdxMap->LaunchtimeValid   = LaunchTimePtr->LaunchtimeValid;
        pBufIdxMap->GCLSlotOffset     = LaunchTimePtr->GCLSlotOffset;
        pBufIdxMap->LaunchtimeSec     = LaunchTimePtr->LaunchtimeSec;
        pBufIdxMap->LaunchtimeNanoSec = LaunchTimePtr->LaunchtimeNanoSec;
    }
}
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

/**
 * @brief                        Initialize MMC hardware registers.
 * @details                      Initialize MMC hardware registers.
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MMCInit(Eth_HandleType        *EthHandle,
                                             const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *EnetBase = EthHandle->EnetBase;

    ENET_HWA_MAC_SetMmcRxInterruptMask(EnetBase, 0xFFFFFFFFU);
    ENET_HWA_MAC_SetMmcTxInterruptMask(EnetBase, 0xFFFFFFFFU);
    ENET_HWA_MAC_SetMmcCounterResetOnReadEnFlag(EnetBase,
                                                (uint8)ETH_CFG_CTRL_MMC_RESET_ON_READ(CtrlCfgPtr));
    ENET_HWA_MAC_SetMmcCounterStopRolloverEnFlag(EnetBase,
                                                 (uint8)ETH_CFG_CTRL_MMC_STOP_ROLLOVER(CtrlCfgPtr));
    ENET_HWA_MAC_ResetMmcCounters(EnetBase);

#if (STD_ON == ETH_DEM_EVENT_DETECT)
    EthHandle->DemStatCounter.RxFramesLost             = 0U;
    EthHandle->DemStatCounter.RxCrcError               = 0U;
    EthHandle->DemStatCounter.RxUndersizeError         = 0U;
    EthHandle->DemStatCounter.RxOversizeError          = 0U;
    EthHandle->DemStatCounter.RxAlignmentError         = 0U;
    EthHandle->DemStatCounter.TxSingleCollisionError   = 0U;
    EthHandle->DemStatCounter.TxMultipleCollisionError = 0U;
    EthHandle->DemStatCounter.TxLateCollisionError     = 0U;
#endif /* STD_ON == ETH_DEM_EVENT_DETECT */
}

/**
 * @brief                        Report transmission to EthIf layer.
 * @details                      [SWDESG_ETH_167]Report transmission to EthIf layer in protected
 *                               context.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] FifoIdx            Index of the FIFO channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ReportTransmission(uint8                  CtrlIdx,
                                                 uint8                  FifoIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_HandleType    *EthHandle = &Eth_HalHandles[CtrlIdx];
    Eth_BufIdxMapType *pBufIdxMap;
    boolean            Timeout;

    ETH_ENTER_EXCLUSIVE_AREA_TX_REPORT();
    pBufIdxMap = EthHandle->TxState[FifoIdx].Head;
    while (pBufIdxMap != NULL_PTR)
    {
        if (E_OK == Eth_Hal_GetTransmitStatus(EthHandle, pBufIdxMap, &Timeout))
        {
            if ((boolean)TRUE == pBufIdxMap->TxConfirmation)
            {
                /* [SWS_Eth_00243][SWS_Eth_00256] */
                EthIf_TxConfirmation(EthHandle->EthIfIdx,
                                     pBufIdxMap->BufIdx,
                                     ((boolean)TRUE == Timeout) ? E_NOT_OK : E_OK);
            }
            EthHandle->TxState[FifoIdx].Head = pBufIdxMap->NextPtr;
            Eth_Hal_FreeTxBuffer(EthHandle, pBufIdxMap->BufIdx);
        }
        else
        {
            break;
        }
        pBufIdxMap = pBufIdxMap->NextPtr;
    }
    ETH_EXIT_EXCLUSIVE_AREA_TX_REPORT();
    (void)CtrlCfgPtr;
}

/**
 * @brief                        Report reception to EthIf layer.
 * @details                      [SWDESG_ETH_168]Report reception to EthIf layer.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] FifoIdx            Index of the FIFO channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION Eth_RxStatusType Eth_Hal_ReportReception(uint8                  CtrlIdx,
                                                          uint8                  FifoIdx,
                                                          const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_RxStatusType    RetValue;
    Eth_DrvBufType      DrvBuf;
    Eth_FrameType       FrameType;
    boolean             IsBoardCast;
    const uint8        *SrcMac;
    const Eth_DataType *Payload;
    Eth_HandleType     *EthHandle = &Eth_HalHandles[CtrlIdx];
#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
    uint8  *MgmtPtr;
    boolean MgmtOnly = FALSE;
#endif

    ETH_ENTER_EXCLUSIVE_AREA_RECEIVE();
    RetValue = Eth_Hal_ReadFrame(EthHandle, FifoIdx, &DrvBuf);
    ETH_EXIT_EXCLUSIVE_AREA_RECEIVE();

    if (RetValue != ETH_NOT_RECEIVED)
    {
        /* [FMR_Eth_00003]Check the received packet length. */
        if (DrvBuf.Length > ETH_CFG_CTRL_RX_FIFO_BUF_LENBYTE(CtrlCfgPtr, FifoIdx))
        {
            DrvBuf.Length = ETH_CFG_CTRL_RX_FIFO_BUF_LENBYTE(CtrlCfgPtr, FifoIdx);
        }
        SrcMac      = &(DrvBuf.DataPtr[ETH_FRAME_SRCMAC_OFFSET]);
        IsBoardCast = ETH_FRAME_IS_BOARDCAST(DrvBuf.DataPtr) ? (boolean)TRUE : (boolean)FALSE;

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
        /* [SWS_Eth_00247]Inspects the Ethernet frame for management information */
        MgmtPtr = &(DrvBuf.DataPtr[ETH_FRAME_TYPE_OFFSET]);
        (void)ETH_CFG_SWT_RX_PROCESS_FRAME(CtrlCfgPtr, CtrlIdx, 0U, &MgmtPtr, &DrvBuf.Length, &MgmtOnly);
        if (MgmtOnly == FALSE)
        {
            FrameType = (uint16)(((uint16)MgmtPtr[0U] << 8U) | (uint16)MgmtPtr[1U]);
            Payload   = (const Eth_DataType *)&MgmtPtr[ETH_FRAME_TYPE_LENGTH];
#else
        FrameType = (uint16)(((uint16)DrvBuf.DataPtr[ETH_FRAME_TYPE_OFFSET] << 8U) |
                             (uint16)DrvBuf.DataPtr[ETH_FRAME_TYPE_OFFSET + 1U]);
        Payload   = (const Eth_DataType *)&DrvBuf.DataPtr[ETH_FRAME_PAYLOAD_OFFSET];
#endif

            /* [SWS_Eth_00153][SWS_Eth_00244]Report a successful reception */
            EthIf_RxIndication(EthHandle->EthIfIdx,
                               FrameType,
                               IsBoardCast,
                               SrcMac,
                               Payload,
                               (uint16)(DrvBuf.Length - (uint16)ETH_FRAME_HEADER_LENGTH));

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
        }
        (void)ETH_CFG_SWT_RX_FINISHED_INDICATION(CtrlCfgPtr, CtrlIdx, 0U);
#endif

        ETH_ENTER_EXCLUSIVE_AREA_RECEIVE();
        Eth_Hal_ReleaseRxDescriptors(EthHandle, FifoIdx);
        ETH_EXIT_EXCLUSIVE_AREA_RECEIVE();
    }

    return RetValue;
}

#if (STD_ON == ETH_DEM_EVENT_DETECT)
/**
 * @brief                        Get receive alignment error status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxAlignmentError(Eth_HandleType        *EthHandle,
                                                                 const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.RxAlignmentError;

    EthHandle->DemStatCounter.RxAlignmentError = ENET_HWA_MAC_GetRxAlignmentErrorPacketCnt(
        EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.RxAlignmentError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_EAlignment, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get receive CRC error status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxCRCError(Eth_HandleType        *EthHandle,
                                                           const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.RxCrcError;

    EthHandle->DemStatCounter.RxCrcError = ENET_HWA_MAC_GetRxCRCErrorPacketCnt(EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.RxCrcError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ECrc, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get transmit late collision status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckTxLateCollision(Eth_HandleType        *EthHandle,
                                                                const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.TxLateCollisionError;

    EthHandle->DemStatCounter.TxLateCollisionError = ENET_HWA_MAC_GetTxLateCollisionPacketCnt(
        EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.TxLateCollisionError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ELateCollision, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get transmit multiple collision status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckTxMultipleCollision(Eth_HandleType *EthHandle,
                                                                    const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.TxMultipleCollisionError;

    EthHandle->DemStatCounter.TxMultipleCollisionError =
        ENET_HWA_MAC_GetTxMultipleCollisionGoodPacketCnt(EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.TxMultipleCollisionError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_EMultipleCollision, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get receive over size frame status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None.
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxOversizeFrame(Eth_HandleType        *EthHandle,
                                                                const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.RxOversizeError;

    EthHandle->DemStatCounter.RxOversizeError = ENET_HWA_MAC_GetRxOverSizeGood(EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.RxOversizeError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_EOverSizeFrame, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get receive frame lost status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxFrameLost(Eth_HandleType        *EthHandle,
                                                            const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.RxFramesLost;

    EthHandle->DemStatCounter.RxFramesLost = ENET_HWA_MAC_GetRxFIFOOverflowPacketCnt(
        EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.RxFramesLost != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ERxFramesLost, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get transmit single collision status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckTxSingleCollision(Eth_HandleType        *EthHandle,
                                                                  const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.TxSingleCollisionError;

    EthHandle->DemStatCounter.TxSingleCollisionError =
        ENET_HWA_MAC_GetTxSingleCollisionGoodPacketCnt(EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.TxSingleCollisionError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESingleCollision, DEM_EVENT_STATUS_PREFAILED);
    }
}

/**
 * @brief                        Get receive under size frame status.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       None
 *
 */
ETH_TEXT_SECTION LOCAL_INLINE void Eth_Hal_CheckRxUndersizeFrame(Eth_HandleType        *EthHandle,
                                                                 const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32 u32Temp = EthHandle->DemStatCounter.RxUndersizeError;

    EthHandle->DemStatCounter.RxUndersizeError = ENET_HWA_MAC_GetRxUndersizePacketGood(
        EthHandle->EnetBase);
    if (EthHandle->DemStatCounter.RxUndersizeError != u32Temp)
    {
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_EUnderSizeFrame, DEM_EVENT_STATUS_PREFAILED);
    }
}

#endif /* STD_ON == ETH_DEM_EVENT_DETECT */

/* PRQA S 3673 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type whenever
 *  possible
 *  3673:The object addressed by the pointer parameter is not modified and so the pointer could be of
 *  type 'pointer to const'.
 *  REASON:These parameters are not used yet, and may be used in the future
 */

/**
 * @brief                        MAC interrupt handler.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MACIrqHandler(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr)
{
    (void)EthHandle;
    (void)CtrlCfgPtr;
}

/**
 * @brief                        MTL interrupt handler.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MTLIrqHandler(Eth_HandleType        *EthHandle,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr)
{
    (void)EthHandle;
    (void)CtrlCfgPtr;
}

/* PRQA S 3673 -- */

/**
 * @brief                        DMA interrupt handler.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] eChannel           DMA channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_DMAIrqHandler(Eth_HandleType        *EthHandle,
                                                   uint8                  eChannel,
                                                   const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32     u32IntEn;
    uint32     u32IntStatus;
    ENET_Type *pEnet = EthHandle->EnetBase;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */

    u32IntEn     = ENET_HWA_DMA_GetEnabledInterrupts(pEnet, (ENET_DMA_ChannelType)eChannel);
    u32IntStatus = ENET_HWA_DMA_GetCurrentStatus(pEnet, (ENET_DMA_ChannelType)eChannel);

    /* [FMR_Eth_00004]Handle DMA Abnormal Interrupts */
    if ((0U != (u32IntStatus & ENET_DMA_CH0_STATUS_AIS_MASK)) &&
        (0U != (u32IntEn & ENET_DMA_CH0_INTERRUPT_ENABLE_AIE_MASK)))
    {
        if (0UL != (u32IntStatus & ENET_DMA_CH0_STATUS_FBE_MASK))
        {
            ENET_HWA_DMA_DisableInterrupt(pEnet,
                                          (ENET_DMA_ChannelType)eChannel,
                                          ENET_DMA_ABNORMAL_INTERRUPT);
            ENET_HWA_DMA_DisableInterrupt(pEnet,
                                          (ENET_DMA_ChannelType)eChannel,
                                          ENET_DMA_NORMAL_INTERRUPT);
            ENET_HWA_DMA_DisableInterrupt(pEnet, (ENET_DMA_ChannelType)eChannel, ENET_DMA_RX_INTERRUPT);
            ENET_HWA_DMA_DisableInterrupt(pEnet, (ENET_DMA_ChannelType)eChannel, ENET_DMA_TX_INTERRUPT);

            EthHandle->FatalError = 1U;
            (void)Eth_Hal_SetControllerMode(EthHandle->CtrlIdx, ETH_MODE_DOWN, CtrlCfgPtr);
            EthIf_CtrlModeIndication(EthHandle->EthIfIdx, ETH_MODE_DOWN);

            /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
            ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_FATAL_BUS_ERROR);
#else
            Eth_ReportDemEvent(CtrlCfgPtr, Dem_EAccess, DEM_EVENT_STATUS_FAILED);
#endif
        }
        else
        {
            /* No Fatal Bus Error */
        }
        /* Clear Abnormal Interrupt status */
        ENET_HWA_DMA_ClearAllAbnormalInterruptFlags(pEnet, (ENET_DMA_ChannelType)eChannel);
    }

    /* [FMR_Eth_00004]Handle DMA Normal Interrupts */
    if ((0U != (u32IntStatus & ENET_DMA_CH0_STATUS_NIS_MASK)) &&
        (0U != (u32IntEn & ENET_DMA_CH0_INTERRUPT_ENABLE_NIE_MASK)))
    {

        /* Clear Normal Interrupt status */
        ENET_HWA_DMA_ClearAllNormalInterruptFlags(pEnet, (ENET_DMA_ChannelType)eChannel);
    }

    /* PRQA S 4342 -- */
}

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
/**
 * @brief                        MTL ECC interrupt handler.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MTLEccIrqHandler(Eth_HandleType        *EthHandle,
                                                      const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32     MtlEccIntStatus;
    uint32     MtlEccControl;
    ENET_Type *pEnet = EthHandle->EnetBase;

    MtlEccControl   = ENET_HWA_MTL_GetEccControl(pEnet);
    MtlEccIntStatus = ENET_HWA_MTL_GetEccInterruptStatus(pEnet);

    /* Clear ECC error interrupt status */
    ENET_HWA_MTL_ClearEccInterruptStatus(pEnet, MtlEccIntStatus);

    /* [FMR_Eth_00004]Handle ECC errors for MTL TX memory */
    if (((MtlEccIntStatus & (ENET_MTL_ECC_INTERRUPT_STATUS_TXAMS_MASK |
                             ENET_MTL_ECC_INTERRUPT_STATUS_TXUES_MASK)) != 0U) &&
        (0U != (MtlEccControl & ENET_MTL_ECC_CONTROL_MTXEE_MASK)))
    {
        EthHandle->FatalError = 1U;
        /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
        ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_MTL_TXMEM_ECC_ERROR);
#else
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESafety, DEM_EVENT_STATUS_FAILED);
#endif
    }

    /* [FMR_Eth_00004]Handle ECC errors for MTL RX memory */
    if (((MtlEccIntStatus & (ENET_MTL_ECC_INTERRUPT_STATUS_RXAMS_MASK |
                             ENET_MTL_ECC_INTERRUPT_STATUS_RXUES_MASK)) != 0U) &&
        (0U != (MtlEccControl & ENET_MTL_ECC_CONTROL_MRXEE_MASK)))
    {
        EthHandle->FatalError = 1U;
        /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
        ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_MTL_RXMEM_ECC_ERROR);
#else
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESafety, DEM_EVENT_STATUS_FAILED);
#endif
    }

    /* [FMR_Eth_00004]Handle ECC errors for MTL EST memory */
    if (((MtlEccIntStatus & (ENET_MTL_ECC_INTERRUPT_STATUS_EAMS_MASK |
                             ENET_MTL_ECC_INTERRUPT_STATUS_EUES_MASK)) != 0U) &&
        (0U != (MtlEccControl & ENET_MTL_ECC_CONTROL_MESTEE_MASK)))
    {
        EthHandle->FatalError = 1U;
        /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
        ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_MTL_ESTMEM_ECC_ERROR);
#else
        Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESafety, DEM_EVENT_STATUS_FAILED);
#endif
    }
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
    (void)CtrlCfgPtr;
#endif
}

/**
 * @brief                        MAC DPP FSM interrupt handler.
 *
 * @param[in] EthHandle          Eth driver handle of the controller indexed by CtrlIdx.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION static void Eth_Hal_MTLDppFsmIrqHandler(Eth_HandleType        *EthHandle,
                                                         const Eth_CtrlCfgType *CtrlCfgPtr)
{
    uint32     DppFsmIntStatus;
    ENET_Type *pEnet = EthHandle->EnetBase;

    /* Clear interrupt status on read */
    DppFsmIntStatus = ENET_HWA_MAC_GetDppFsmIntStatus(pEnet);

    /* [FMR_Eth_00004]Handle Data Path Parity errors */
    if ((boolean)FALSE != ENET_HWA_MTL_GetDppProtectionEnFlag(pEnet))
    {
        if (0U != (DppFsmIntStatus & (ENET_MAC_DPP_FSM_INTERRUPT_STATUS_RDPES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_MPES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_MTSPES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_ARPES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_MTBUPES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_MTFCPES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_MRWCPES_MASK)))
        {
            EthHandle->FatalError = 1U;
            /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
            ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_DATA_PATH_PARITY_ERROR);
#else
            Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESafety, DEM_EVENT_STATUS_FAILED);
#endif
        }
    }

    /* [FMR_Eth_00004]Handle FSM state error */
    if ((boolean)FALSE != ENET_HWA_MAC_GetFsmControlParityEnFlag(pEnet))
    {
        if (0U != (DppFsmIntStatus & ENET_MAC_DPP_FSM_INTERRUPT_STATUS_FSMPES_MASK))
        {
            EthHandle->FatalError = 1U;
            /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
            ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_FSM_STATE_PARITY_ERROR);
#else
            Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESafety, DEM_EVENT_STATUS_FAILED);
#endif
        }
    }

    /* [FMR_Eth_00004] */
    if ((boolean)FALSE != ENET_HWA_MAC_GetFsmControlTimeoutEnFlag(pEnet))
    {
        /* Handle FSM timeout and Application/CSR Interface Timeout errors */
        if (0U != (DppFsmIntStatus & (ENET_MAC_DPP_FSM_INTERRUPT_STATUS_TTES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_RTES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_ATES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_PTES_MASK |
                                      ENET_MAC_DPP_FSM_INTERRUPT_STATUS_MSTTES_MASK)))
        {
            EthHandle->FatalError = 1U;
            /* Notify the upper layer using callback or DEM event */
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
            ETH_FATAL_ERROR_NOTIFICATION(EthHandle->CtrlIdx, ETH_FSM_STATE_TIMEOUT_ERROR);
#else
            Eth_ReportDemEvent(CtrlCfgPtr, Dem_ESafety, DEM_EVENT_STATUS_FAILED);
#endif
        }
    }
#if (STD_ON == ETH_FATAL_ERROR_CALLBACK_NOTIFICATION)
    (void)CtrlCfgPtr;
#endif
}
#endif /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */

#define ETH_STOP_SEC_CODE
#include "Eth_MemMap.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define ETH_START_SEC_CODE
#include "Eth_MemMap.h"

/**
 * @brief                        Get the max TX buffer count of the indexed controller.
 * @details                      [SWDESG_ETH_138]Get the maximum number of transmit buffers of the
 *                                               indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @return                       The max buffer count.
 *
 */
ETH_TEXT_SECTION uint32 Eth_Hal_TxBuffersCount(uint8 CtrlIdx)
{
    return (uint32)Eth_HalHandles[CtrlIdx].MaxTxBufCount;
}

/**
 * @brief                        Get the FIFO ID corresponding to the priority.
 * @details                      [SWDESG_ETH_139]Get the FIFO ID corresponding to the priority.
 *
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] Priority           The TX FIFO priority.
 * @return                       The index of TX FIFO.
 *
 */
ETH_TEXT_SECTION uint8 Eth_Hal_TxPriorityToFifoId(const Eth_CtrlCfgType *CtrlCfgPtr, uint8 Priority)
{
    uint8 Channel, FifoId = ETH_INVALID_FIFO_IDX;
    for (Channel = 0U; Channel < ETH_CFG_CTRL_NUM_TX_CHANNEL(CtrlCfgPtr); ++Channel)
    {
        if (0U != (ETH_CFG_CTRL_TX_FIFO_PRIORITY_MASK(CtrlCfgPtr, Channel) & (1U << Priority)))
        {
            FifoId = Channel;
            break;
        }
    }
    return FifoId;
}

/**
 * @brief                        Check whether the controller is accessible.
 * @details                      [SWDESG_ETH_141]This function check whether the controller is
 *                               accessible.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @return                       TRUE: The controller is accessible.
 *                               FALSE: The controller is not accessible.
 *
 */
ETH_TEXT_SECTION boolean Eth_Hal_CheckAccessController(uint8 CtrlIdx)
{
    /* The controller is always accessible */
    (void)CtrlIdx;
    return (boolean)TRUE;
}

/**
 * @brief                        Initialize the handle type and the system level configuration.
 * @details                      Initialize the variables of Eth_HandleType, and configure the
 *                               SCM_ENET and SCM_PERI_CLKDIV registers to configure the clock,
 *                               interface, and other options of Ethernet.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       E_OK The controller is initialized successfully.
 *                               E_NOT_OK The controller is initialized failed.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_PreInit(uint8 CtrlIdx, const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_HandleType *EthHandle                             = &Eth_HalHandles[CtrlIdx];
    ENET_Type      *Eth_BaseAddr[ETH_MAX_CTRLS_SUPPORTED] = ENET_BASE_PTRS;
    uint32          u32Index;
    uint8          *TempPtr = (uint8 *)EthHandle;

    /* Initialize the Eth handle structure */
    for (u32Index = 0U; u32Index < sizeof(Eth_HandleType); ++u32Index)
    {
        TempPtr[u32Index] = 0U;
    }
    /* There is only one Ethernet controller, CtrlIdx, EthHwIdx, and EthIfIdx are always 0. */
    EthHandle->CtrlIdx    = CtrlIdx;
    EthHandle->EthHwIdx   = CtrlIdx;
    EthHandle->EnetBase   = Eth_BaseAddr[EthHandle->EthHwIdx];
    EthHandle->EthIfIdx   = ETH_CFG_ETHIF_CTRLIDX(CtrlCfgPtr);
    EthHandle->FatalError = 0U;
    EthHandle->TxIntEn    = ETH_CFG_CTRL_ENABLE_TX_INTERRUPT(CtrlCfgPtr);
    EthHandle->RxIntEn    = ETH_CFG_CTRL_ENABLE_RX_INTERRUPT(CtrlCfgPtr);
    EthHandle->TxRingCnt  = ETH_CFG_CTRL_NUM_TX_CHANNEL(CtrlCfgPtr);
    EthHandle->RxRingCnt  = ETH_CFG_CTRL_NUM_RX_CHANNEL(CtrlCfgPtr);

    Eth_Hal_SystemLevelConfig(EthHandle, CtrlCfgPtr);

#if (STD_ON == ETH_TRANSCEIVER_PREINIT)
    if (CtrlCfgPtr->Preinit_Func != NULL_PTR)
    {
        Eth_PreInitMdioFunctionsType MdioFuncs;
        Eth_Hal_MdioBusInit(EthHandle, ETH_CFG_BUS_CLOCK_FREQ(CtrlCfgPtr));
#if (STD_ON == ETH_CTRL_ENABLE_MII)
        MdioFuncs.ReadMii  = &Eth_Hal_ReadMii;
        MdioFuncs.WriteMii = &Eth_Hal_WriteMii;
#endif
#if (STD_ON == ETH_CTRL_ENABLE_MMD)
        MdioFuncs.ReadMmd  = &Eth_Hal_ReadMmd;
        MdioFuncs.WriteMmd = &Eth_Hal_WriteMmd;
#endif
        CtrlCfgPtr->Preinit_Func(CtrlIdx, &MdioFuncs);
    }
#endif
}

/**
 * @brief                        Initialize the indexed controller.
 * @details                      [SWDESG_ETH_142]Initialize the MDIO,DMA,MTL,MAC,Aotomotive-Safety,
 *                               MMC,PTP registers and transmit/receiver buffers.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       E_OK The controller is initialized successfully.
 *                               E_NOT_OK The controller is initialized failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_InitController(uint8                  CtrlIdx,
                                                       const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Std_ReturnType  RetValue;
    Eth_HandleType *EthHandle = &Eth_HalHandles[CtrlIdx];

    Eth_Ctrls_Mode[CtrlIdx] = ETH_MODE_DOWN;

    RetValue = Eth_Hal_ResetController(EthHandle, CtrlCfgPtr);
    if (RetValue == E_OK)
    {
        Eth_Hal_MdioBusInit(EthHandle, ETH_CFG_BUS_CLOCK_FREQ(CtrlCfgPtr));

        Eth_Hal_DMAInit(EthHandle, CtrlCfgPtr);

        Eth_Hal_MTLInit(EthHandle, CtrlCfgPtr);

        Eth_Hal_MACInit(EthHandle, CtrlCfgPtr);

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
        Eth_Hal_SafetyInit(EthHandle, CtrlCfgPtr);
#endif

        Eth_Hal_RxBuffersInit(EthHandle, CtrlCfgPtr);

        Eth_Hal_TxBuffersInit(EthHandle, CtrlCfgPtr);

        Eth_Hal_MMCInit(EthHandle, CtrlCfgPtr);

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
        RetValue = Eth_Hal_PtpInit(EthHandle, CtrlCfgPtr);
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */
    }

    return RetValue;
}

/**
 * @brief                        Set the controller mode.
 * @details                      [SWDESG_ETH_143]Set the state of the indexed controller,the
 * function is protected.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlMode           The controller mode.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       E_OK Set mode successfully.
 *                               E_NOT_OK CtrlMode is invalid.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_SetControllerMode(uint8                  CtrlIdx,
                                                          Eth_ModeType           CtrlMode,
                                                          const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Std_ReturnType  RetValue = E_OK;
    Eth_ModeType    CurrentMode;
    Eth_HandleType *EthHandle = &Eth_HalHandles[CtrlIdx];

    ETH_ENTER_EXCLUSIVE_AREA_CTRLMODE();
    CurrentMode = Eth_Hal_GetControllerMode(CtrlIdx);

    if (ETH_MODE_ACTIVE == CtrlMode)
    {
        if (CurrentMode != ETH_MODE_ACTIVE)
        {
            /* Check fatal error status. If the mode is switched to ETH_MODE_DOWN due to a fatal
             * error, such as fatal bus error or automotive safety error, the controller needs to
             * be reset and reconfigured to recovery from the error state.
             */
            if (EthHandle->FatalError != 0U)
            {
                EthHandle->FatalError = 0U;
                RetValue              = Eth_Hal_InitController(CtrlIdx, CtrlCfgPtr);
            }

            if (E_OK == RetValue)
            {
                Eth_Hal_Start(EthHandle, CtrlCfgPtr);
            }
        }
        Eth_Ctrls_Mode[CtrlIdx] = ETH_MODE_ACTIVE;
    }
    else if (ETH_MODE_DOWN == CtrlMode)
    {
        Eth_Hal_Stop(EthHandle, CtrlCfgPtr);
        Eth_Ctrls_Mode[CtrlIdx] = ETH_MODE_DOWN;

        /* [SWS_Eth_00280][SWS_Eth_00281]Release all locked transmit buffers */
        Eth_Hal_ReleaseTxBuffers(EthHandle, CtrlCfgPtr);
    }
    else
    {
        RetValue = E_NOT_OK;
    }
    ETH_EXIT_EXCLUSIVE_AREA_CTRLMODE();

    return RetValue;
}

/**
 * @brief                        Get the state of the indexed controller.
 * @details                      [SWDESG_ETH_144]Get the controller mode of the indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @return                       ETH_MODE_DOWN: The controller is disabled.
 *                               ETH_MODE_ACTIVE: The controller is enabled.
 *
 */
ETH_TEXT_SECTION Eth_ModeType Eth_Hal_GetControllerMode(uint8 CtrlIdx)
{
    uint32 value = ENET_HWA_MAC_GetConfiguration(Eth_HalHandles[CtrlIdx].EnetBase);
    return ((value & (ENET_MAC_CONFIGURATION_RE_MASK | ENET_MAC_CONFIGURATION_TE_MASK)) != 0U) ?
               ETH_MODE_ACTIVE :
               ETH_MODE_DOWN;
}

/**
 * @brief                        Get the MAC address of the indexed controller.
 * @details                      [SWDESG_ETH_145]Get the MAC address of the indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] PhysAddrPtr       The variable to save MAC address.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_GetMacAddress(uint8 CtrlIdx, uint8 *PhysAddrPtr)
{
    uint32          MacAddressLow, MacAddressHigh;
    Eth_HandleType *EthHandle = &Eth_HalHandles[CtrlIdx];

    MacAddressLow   = ENET_HWA_MAC_GetMacAddr0Low(EthHandle->EnetBase);
    MacAddressHigh  = ENET_HWA_MAC_GetMacAddr0High(EthHandle->EnetBase);
    PhysAddrPtr[0U] = (uint8)(MacAddressLow & 0xFFU);
    PhysAddrPtr[1U] = (uint8)((MacAddressLow >> 8U) & 0xFFU);
    PhysAddrPtr[2U] = (uint8)((MacAddressLow >> 16U) & 0xFFU);
    PhysAddrPtr[3U] = (uint8)(MacAddressLow >> 24U);
    PhysAddrPtr[4U] = (uint8)(MacAddressHigh & 0xFFU);
    PhysAddrPtr[5U] = (uint8)((MacAddressHigh >> 8U) & 0xFFU);
}

/**
 * @brief                        Set the MAC address of the indexed controller.
 * @details                      [SWDESG_ETH_146]Set the MAC address of the indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] PhysAddrPtr        MAC address.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_SetMacAddress(uint8 CtrlIdx, const uint8 *PhysAddrPtr)
{
    uint32          MacAddressLow, MacAddressHigh;
    Eth_HandleType *EthHandle = &Eth_HalHandles[CtrlIdx];

    /* Entering the critical section is to prevent the Eth_Transmit from using an incorrect
     * MAC address during MAC modifications.
     */
    ETH_ENTER_EXCLUSIVE_AREA_SET_MAC();
    MacAddressHigh = (uint32)PhysAddrPtr[4U] | ((uint32)PhysAddrPtr[5U] << 8U) |
                     ENET_MAC_ADDRESS0_HIGH_AE_MASK;
    ENET_HWA_MAC_SetAddr0High(EthHandle->EnetBase, MacAddressHigh);

    MacAddressLow = (uint32)PhysAddrPtr[0U] | ((uint32)PhysAddrPtr[1U] << 8U) |
                    ((uint32)PhysAddrPtr[2U] << 16U) | ((uint32)PhysAddrPtr[3U] << 24U);
    ENET_HWA_MAC_SetMacAddr0Low(EthHandle->EnetBase, MacAddressLow);
    ETH_EXIT_EXCLUSIVE_AREA_SET_MAC();
}

/**
 * @brief                        Completely open the filter.
 * @details                      [SWDESG_ETH_147]Completely open the filter.All multicast and
 *                               broadcast frames will be forwarded to the application.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_OpenMacAddressFilter(uint8 CtrlIdx)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    /* Completely open the filter by setting the following bits:
     * Reset DBF bit of MAC_Packet_Filter
     * Set PM bit of MAC_Packet_Filter
     */
    ENET_HWA_MAC_SetBroadcastPacketDisableFlag(EnetBase, (uint8)ETH_DISABLE);
    ENET_HWA_MAC_SetPassAllMulticastEnFlag(EnetBase, ETH_ENABLE);
}

/**
 * @brief                        Reduce the filter to the controllers unique unicast MAC address.
 * @details                      [SWDESG_ETH_148]Reduce the filter to the controllers unique unicast
 *                               MAC address. All multicast and broadcast frames will be dropped.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_CloseMacAddressFilter(uint8 CtrlIdx)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    /* Close the filter by setting the following bits:
     * Set DBF bit of MAC_Packet_Filter
     * Reset PM bit of MAC_Packet_Filter
     * Reset RA bit of MAC_Packet_Filter
     * Reset PR bit of MAC_Packet_Filter
     * Reset HMC bit of MAC_Packet_Filter
     */
    ENET_HWA_MAC_SetBroadcastPacketDisableFlag(EnetBase, ETH_ENABLE);
    ENET_HWA_MAC_SetPassAllMulticastEnFlag(EnetBase, (uint8)ETH_DISABLE);
    ENET_HWA_MAC_SetReceiveAllEnFlag(EnetBase, (uint8)ETH_DISABLE);
    ENET_HWA_MAC_SetPromiscuousModeEnFlag(EnetBase, (uint8)ETH_DISABLE);
    ENET_HWA_MAC_SetHashOrPerfectMulticastMode(EnetBase, ENET_MAC_USE_PERFECT_FILTER);
}

/**
 * @brief                        Set the filter to user configuration hash filter mode.
 * @details                      [SWDESG_ETH_149]Set the filter to user configuration hash filter
 *                               mode. The Settings such as Reaeive all,pass all multicast,broadcast
 *                               and promiscuous mode,are based on user configuration.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] MacFilter          MAC packet filter register value.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_MacAddressUserModeHashFilter(uint8 CtrlIdx, uint32 MacFilter)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    ENET_HWA_MAC_SetPacketFilter(EnetBase, MacFilter);
    ENET_HWA_MAC_SetHashOrPerfectFilterEnFlag(EnetBase, ETH_ENABLE);
    ENET_HWA_MAC_SetHashOrPerfectMulticastMode(EnetBase, ENET_MAC_USE_HASH_FILTER);
}

/**
 * @brief                        Set the MAC address filter.
 * @details                      [SWDESG_ETH_150]Set the MAC address filter by set the MAC hash table.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] PhysAddrPtr        MAC address.
 * @param[in] Action             Add or remove the MAC address from hash table.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_SetMacAddressFilter(uint8                CtrlIdx,
                                                  const uint8         *PhysAddrPtr,
                                                  Eth_FilterActionType Action)
{
    uint32     CrcValue, HashIndex, HashBit, HashValue;
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    CrcValue = Eth_Hal_ComputeCRC(PhysAddrPtr, 48U);
    CrcValue = Eth_Hal_BitsReverse(CrcValue);

    /* PRQA S 2985 ++ #Misra-C:2012 Dir-2.2 There shall be no dead code
     *  2985:This operation is redundant. The value of the result is always that of the left-hand
     *  operand.
     *  Reason: The redundant operation in macro is for formatting consistency.
     */
    HashIndex = (CrcValue >> ETH_MAC_HASH_TABLE_INDEX_SHIFT) & ETH_MAC_HASH_TABLE_INDEX_MASK;
    HashBit   = (CrcValue >> ETH_MAC_HASH_TABLE_BIT_SHIFT) & ETH_MAC_HASH_TABLE_BIT_MASK;
    /* PRQA S 2985 -- */

    if (HashIndex == 0U)
    {
        HashValue = ENET_HWA_MAC_GetHashTableFirst32Bits(EnetBase);
        if (ETH_ADD_TO_FILTER == Action)
        {
            HashValue |= (uint32)1U << HashBit;
        }
        else
        {
            HashValue &= ~((uint32)1U << HashBit);
        }
        ENET_HWA_MAC_SetHashTableFirst32Bits(EnetBase, HashValue);
    }
    else
    {
        HashValue = ENET_HWA_MAC_GetHashTableSecond32Bits(EnetBase);
        if (ETH_ADD_TO_FILTER == Action)
        {
            HashValue |= (uint32)1U << HashBit;
        }
        else
        {
            HashValue &= ~((uint32)1U << HashBit);
        }
        ENET_HWA_MAC_SetHashTableSecond32Bits(EnetBase, HashValue);
    }
}

#if (STD_ON == ETH_CTRL_ENABLE_MII)
/**
 * @brief                        Write the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_151]Write the specified transceiver register through
 * the MII interface clause 22.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] RegIdx             Index of the register.
 * @param[in] RegVal             Value to write.
 * @return                       E_OK: Write successfully.
 *                               E_NOT_OK: Write failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_WriteMii(uint8        CtrlIdx,
                                                 uint8        TrcvIdx,
                                                 uint8        RegIdx,
                                                 const uint16 RegVal)
{
    uint16 u16RegVal = RegVal;
    return Eth_Hal_MdioAccess(Eth_HalHandles[CtrlIdx].EnetBase,
                              (boolean)FALSE,
                              ETH_MII_OPT_WRITE,
                              TrcvIdx,
                              (uint16)RegIdx,
                              0U,
                              &u16RegVal,
                              ETH_TIMEOUT_LOOP_COUNT);
}

/**
 * @brief                        Read the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_152]Read the specified transceiver register through the
 *                               MII interface clause 22 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] RegIdx             Index of the register.
 * @param[out] RegValPtr         The variable to save register value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_ReadMii(uint8   CtrlIdx,
                                                uint8   TrcvIdx,
                                                uint8   RegIdx,
                                                uint16 *RegValPtr)
{
    Std_ReturnType Status;

    Status = Eth_Hal_MdioAccess(Eth_HalHandles[CtrlIdx].EnetBase,
                                (boolean)FALSE,
                                ETH_MII_OPT_READ,
                                TrcvIdx,
                                (uint16)RegIdx,
                                0U,
                                RegValPtr,
                                ETH_TIMEOUT_LOOP_COUNT);
    if (Status == E_OK)
    {
        *RegValPtr = (uint16)ENET_HWA_MAC_GetMDIOData(Eth_HalHandles[CtrlIdx].EnetBase);
    }
    return Status;
}
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#if (STD_ON == ETH_CTRL_ENABLE_MMD)
/**
 * @brief                        Write the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_153]Write the specified transceiver register through
 * the MII interface clause 45 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the register.
 * @param[in] RegVal             Value to write.
 * @return                       E_OK: Write successfully.
 *                               E_NOT_OK: Write failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_Hal_WriteMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, const uint16 RegVal)
{
    uint16 u16RegVal = RegVal;
    return Eth_Hal_MdioAccess(Eth_HalHandles[CtrlIdx].EnetBase,
                              (boolean)TRUE,
                              ETH_MII_OPT_WRITE,
                              TrcvIdx,
                              (uint16)RegIdx,
                              Mmd,
                              &u16RegVal,
                              ETH_TIMEOUT_LOOP_COUNT);
}

/**
 * @brief                        Read the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_154]Read the specified transceiver register through the
 *                               MII interface clause 45 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the register.
 * @param[out] RegValPtr         The variable to save register value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_Hal_ReadMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 *RegValPtr)
{
    Std_ReturnType Status;

    Status = Eth_Hal_MdioAccess(Eth_HalHandles[CtrlIdx].EnetBase,
                                (boolean)TRUE,
                                ETH_MII_OPT_READ,
                                TrcvIdx,
                                (uint16)RegIdx,
                                Mmd,
                                RegValPtr,
                                ETH_TIMEOUT_LOOP_COUNT);
    if (Status == E_OK)
    {
        *RegValPtr = (uint16)ENET_HWA_MAC_GetMDIOData(Eth_HalHandles[CtrlIdx].EnetBase);
    }
    return Status;
}
#endif /* STD_ON == ETH_CTRL_ENABLE_MMD */

/**
 * @brief                        Read the drop counter values.
 * @details                      [SWDESG_ETH_155]Reads a list with drop counter values of the
 *                               corresponding controller. The meaning of these values is described
 *                               at Eth_CounterType.0xFFFFFFFFU is an invalid value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] CounterPtr        The variable to save counter value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetCounterValues(uint8 CtrlIdx, Eth_CounterType *CounterPtr)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    CounterPtr->DropPktBufOverrun = ENET_HWA_MAC_GetRxFIFOOverflowPacketCnt(EnetBase);
    CounterPtr->DropPktCrc        = ENET_HWA_MAC_GetRxCRCErrorPacketCnt(EnetBase);
    CounterPtr->UndersizePkt      = ENET_HWA_MAC_GetRxUndersizePacketGood(EnetBase);
    CounterPtr->OversizePkt       = ENET_HWA_MAC_GetRxOverSizeGood(EnetBase);
    CounterPtr->AlgnmtErr         = ENET_HWA_MAC_GetRxAlignmentErrorPacketCnt(EnetBase);
    CounterPtr->SqeTestErr        = 0xFFFFFFFFU;
    CounterPtr->DiscInbdPkt       = 0xFFFFFFFFU;
    CounterPtr->ErrInbdPkt        = ENET_HWA_MAC_GetRxReceiveErrorPacketCnt(EnetBase);
    CounterPtr->DiscOtbdPkt       = 0xFFFFFFFFU;
    CounterPtr->ErrOtbdPkt        = ENET_HWA_MAC_GetTxPacketGoodBad(EnetBase) -
                             ENET_HWA_MAC_GetTxPacketCntGood(EnetBase);
    CounterPtr->SnglCollPkt = ENET_HWA_MAC_GetTxSingleCollisionGoodPacketCnt(EnetBase);
    CounterPtr->MultCollPkt = ENET_HWA_MAC_GetTxMultipleCollisionGoodPacketCnt(EnetBase);
    CounterPtr->DfrdPkt     = ENET_HWA_MAC_GetTxDeferredPacketCnt(EnetBase);
    CounterPtr->LatCollPkt  = ENET_HWA_MAC_GetTxLateCollisionPacketCnt(EnetBase);
    CounterPtr->HwDepCtr0   = 0xFFFFFFFFU;
    CounterPtr->HwDepCtr1   = 0xFFFFFFFFU;
    CounterPtr->HwDepCtr2   = 0xFFFFFFFFU;
    CounterPtr->HwDepCtr3   = 0xFFFFFFFFU;
    return E_OK;
}

/**
 * @brief                        Read the RX statistics counter values.
 * @details                      [SWDESG_ETH_156]Reads a list with receive counter values according
 *                               to IETF RFC2819.The meaning of these values is described at
 *                               Eth_RxStatsType. 0xFFFFFFFFU is an invalid value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] RxStats           The variable to save Rx stats value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetRxStats(uint8 CtrlIdx, Eth_RxStatsType *RxStats)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    RxStats->RxStatsDropEvents     = ENET_HWA_MAC_GetRxFIFOOverflowPacketCnt(EnetBase);
    RxStats->RxStatsOctets         = ENET_HWA_MAC_GetRxOctetCntGoodBad(EnetBase);
    RxStats->RxStatsPkts           = ENET_HWA_MAC_GetRxPacketCntGoodBad(EnetBase);
    RxStats->RxStatsBroadcastPkts  = ENET_HWA_MAC_GetRxBroadcastPacketGood(EnetBase);
    RxStats->RxStatsMulticastPkts  = ENET_HWA_MAC_GetRxMulticastPacketGood(EnetBase);
    RxStats->RxStatsCrcAlignErrors = ENET_HWA_MAC_GetRxCRCErrorPacketCnt(EnetBase) +
                                     ENET_HWA_MAC_GetRxAlignmentErrorPacketCnt(EnetBase);
    RxStats->RxStatsUndersizePkts        = ENET_HWA_MAC_GetRxUndersizePacketGood(EnetBase);
    RxStats->RxStatsOversizePkts         = ENET_HWA_MAC_GetRxOverSizeGood(EnetBase);
    RxStats->RxStatsFragments            = ENET_HWA_MAC_GetRxRuntErrorPacketCnt(EnetBase);
    RxStats->RxStatsJabbers              = ENET_HWA_MAC_GetRxJabberErrorPacketCnt(EnetBase);
    RxStats->RxStatsCollisions           = 0xFFFFFFFFU;
    RxStats->RxStatsPkts64Octets         = ENET_HWA_MAC_GetRx64OctetPacketGoodBad(EnetBase);
    RxStats->RxStatsPkts65to127Octets    = ENET_HWA_MAC_GetRx65To127OctetPacketGoodBad(EnetBase);
    RxStats->RxStatsPkts128to255Octets   = ENET_HWA_MAC_GetRx128To255OctetPacketGoodBad(EnetBase);
    RxStats->RxStatsPkts256to511Octets   = ENET_HWA_MAC_GetRx256To511OctetPacketGoodBad(EnetBase);
    RxStats->RxStatsPkts512to1023Octets  = ENET_HWA_MAC_GetRx512To1023OctetPacketGoodBad(EnetBase);
    RxStats->RxStatsPkts1024to1518Octets = ENET_HWA_MAC_GetRx1024ToMaxOctetPacketGoodBad(EnetBase);
    RxStats->RxUnicastFrames             = ENET_HWA_MAC_GetRxUnicastPacketGood(EnetBase);
    return E_OK;
}

/**
 * @brief                        Read the TX statistics counter values.
 * @details                      [SWDESG_ETH_157]Returns the list of Transmission Statistics out of
 *                               IETF RFC1213 defined with Eth_TxStatsType, where the maximal
 *                               possible value shall denote an invalid value,e.g. this counter is
 *                               not available.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] TxStats           The variable to save Tx stats value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetTxStats(uint8 CtrlIdx, Eth_TxStatsType *TxStats)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    TxStats->TxNumberOfOctets = ENET_HWA_MAC_GetTxOctetCntGoodBad(EnetBase);
    TxStats->TxNUcastPkts     = ENET_HWA_MAC_GetTxMulticastPacketGoodBad(EnetBase) +
                            ENET_HWA_MAC_GetTxBroadcastPacketGoodBad(EnetBase);
    TxStats->TxUniCastPkts = ENET_HWA_MAC_GetTxUnicastPacketGoodBad(EnetBase);
    return E_OK;
}

/**
 * @brief                        Read the transmission error counter values.
 * @details                      [SWDESG_ETH_158]Returns the list of transmission error counters out
 *                               of IETF RFC1213 and RFC1643 defined with
 *                               Eth_TxErrorCounterValuesType. 0xFFFFFFFFU is an invalid value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] TxErrorCounterValues The variable to save Tx error counters value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetTxErrorCounterValues(
    uint8                         CtrlIdx,
    Eth_TxErrorCounterValuesType *TxErrorCounterValues)
{
    ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;

    TxErrorCounterValues->TxDroppedNoErrorPkts = 0xFFFFFFFFU;
    TxErrorCounterValues->TxDroppedErrorPkts   = ENET_HWA_MAC_GetTxPacketGoodBad(EnetBase) -
                                               ENET_HWA_MAC_GetTxPacketCntGood(EnetBase);
    TxErrorCounterValues->TxDeferredTrans = ENET_HWA_MAC_GetTxDeferredPacketCnt(EnetBase);
    TxErrorCounterValues->TxSingleCollision = ENET_HWA_MAC_GetTxSingleCollisionGoodPacketCnt(EnetBase);
    TxErrorCounterValues->TxMultipleCollision = ENET_HWA_MAC_GetTxMultipleCollisionGoodPacketCnt(
        EnetBase);
    TxErrorCounterValues->TxLateCollision     = ENET_HWA_MAC_GetTxLateCollisionPacketCnt(EnetBase);
    TxErrorCounterValues->TxExcessiveCollison = ENET_HWA_MAC_GetTxExcessiveCollisionPacketCnt(
        EnetBase);
    return E_OK;
}

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief                        Get current PTP system time.
 * @details                      [SWDESG_ETH_159]Get current PTP system time maintained by the
 *                               Ethernet controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] timeQualPtr       The quality of timestamp.
 * @param[out] timeStampPtr      The system time value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetCurrentTime(uint8                  CtrlIdx,
                                                       Eth_TimeStampQualType *timeQualPtr,
                                                       Eth_TimeStampType     *timeStampPtr)
{
    const ENET_Type *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;
    uint32           u32TempValue;

    if ((boolean)TRUE == ENET_HWA_MAC_GetTimestampEnFlag(EnetBase))
    {
        /* Use atomic operations to ensure time consistency. */
        ETH_ENTER_EXCLUSIVE_AREA_GETTIME();
        u32TempValue              = ENET_HWA_MAC_GetSystemTimeSeconds(EnetBase);
        timeStampPtr->nanoseconds = ENET_HWA_MAC_GetSystemTimeNanoSeconds(EnetBase);
        timeStampPtr->seconds     = ENET_HWA_MAC_GetSystemTimeSeconds(EnetBase);
        timeStampPtr->secondsHi   = ENET_HWA_MAC_GetSystemTimeHigherWordSeconds(EnetBase);
        ETH_EXIT_EXCLUSIVE_AREA_GETTIME();

        /* Check nanoseconds overflow */
        if ((timeStampPtr->nanoseconds > 900000000U) && (timeStampPtr->seconds != u32TempValue))
        {
            timeStampPtr->seconds = u32TempValue;
        }

        *timeQualPtr = ETH_VALID;
    }
    else
    {
        *timeQualPtr = ETH_INVALID;
    }
    return E_OK;
}

/**
 * @brief                        Enable egress time stamping on a dedicated message.
 * @details                      [SWDESG_ETH_160]Enable egress time stamping on a dedicated message.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] BufIdx             Index of the message buffer.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_EnableEgressTimeStamp(uint8 CtrlIdx, Eth_BufIdxType BufIdx)
{
    Eth_HandleType *EthHandle               = &Eth_HalHandles[CtrlIdx];
    EthHandle->TxBufIdxMap[BufIdx].TsEnable = (boolean)TRUE;
}

/**
 * @brief                        Get PTP time stamp of egressed frame.
 * @details                      [SWDESG_ETH_161]Get the time stamp of the transmitted frame on the
 *                               egress path.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] timeQualPtr       The quality of time stamp.
 * @param[out] timeStampPtr      The time stamp value.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_GetEgressTimeStamp(uint8                  CtrlIdx,
                                                 Eth_BufIdxType         BufIdx,
                                                 Eth_TimeStampQualType *timeQualPtr,
                                                 Eth_TimeStampType     *timeStampPtr)
{
    const Eth_BufIdxMapType *pBufIdxMap = &Eth_HalHandles[CtrlIdx].TxBufIdxMap[BufIdx];
    timeStampPtr->secondsHi             = pBufIdxMap->TimeStampSecHi;
    timeStampPtr->seconds               = pBufIdxMap->TimeStampSec;
    timeStampPtr->nanoseconds           = pBufIdxMap->TimeStampNs;
    *timeQualPtr = (pBufIdxMap->TsValid == (boolean)TRUE) ? ETH_VALID : ETH_INVALID;
}

/**
 * @brief                        Get PTP time stamp of ingressed frame.
 * @details                      [SWDESG_ETH_162]Get the time stamp of the received  frame on the
 *                               ingress path.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[out] timeQualPtr       The quality of time stamp.
 * @param[out] timeStampPtr      The time stamp value.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_GetIngressTimeStamp(uint8                  CtrlIdx,
                                                  const Eth_CtrlCfgType *CtrlCfgPtr,
                                                  const Eth_DataType    *DataPtr,
                                                  Eth_TimeStampQualType *timeQualPtr,
                                                  Eth_TimeStampType     *timeStampPtr)
{
    const Eth_RxInfoType *RxInfo;
    uint8                 FifoIdx;
    uint32                pData = (uint32)DataPtr;

    pData -= ETH_FRAME_HEADER_LENGTH;
    for (FifoIdx = 0U; FifoIdx < ETH_CFG_NUM_RX_FIFO(CtrlCfgPtr); ++FifoIdx)
    {
        RxInfo = &Eth_HalHandles[CtrlIdx].RxState[FifoIdx].RxInfo;
        if (pData == (uint32)RxInfo->DataPtr)
        {
            timeStampPtr->nanoseconds = RxInfo->Nanoseconds;
            timeStampPtr->seconds     = RxInfo->Seconds;
            timeStampPtr->secondsHi   = RxInfo->SecondsHi;
            *timeQualPtr = ((boolean)TRUE == RxInfo->TimeStampValid) ? ETH_VALID : ETH_INVALID;
        }
    }
}

/**
 * @brief                        Set PTP system time correction.
 * @details                      [SWDESG_ETH_163]Set PTP system time offset and ratio correction. If
 *                               the secondsHi field of timeOffsetPtr or rateRatioPtr is nonzero
 *                               value, that is, the time difference or time ratio is too large,
 * this API will return E_NOT_OK, please call Eth_Hal_SetGlobalTime first.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] timeOffsetPtr      The PTP time offset value.
 * @param[in] rateRatioPtr       The PTP time ratio bias.
 * @return                       E_OK: Set correction time successfully.
 *                               E_NOT_OK: Set correction time failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_SetCorrectionTime(uint8                      CtrlIdx,
                                                          const Eth_TimeIntDiffType *timeOffsetPtr,
                                                          const Eth_RateRatioType   *rateRatioPtr)
{
    ENET_Type     *EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;
    Std_ReturnType Status   = E_NOT_OK;
    uint32         Addend;
    uint64         IngressDeltaTime, OriginDeltaTime;
    float64        NewAddend;

    if ((timeOffsetPtr->diff.secondsHi == 0U) &&
        (rateRatioPtr->IngressTimeStampDelta.diff.secondsHi == 0U) &&
        (rateRatioPtr->OriginTimeStampDelta.diff.secondsHi == 0U))
    {
        Status = Eth_Hal_PTPUpdateSystemTime(EnetBase,
                                             timeOffsetPtr->diff.seconds,
                                             timeOffsetPtr->diff.nanoseconds,
                                             timeOffsetPtr->sign);
        if (Status == E_OK)
        {
            IngressDeltaTime = ((uint64)rateRatioPtr->IngressTimeStampDelta.diff.nanoseconds) +
                               ((uint64)rateRatioPtr->IngressTimeStampDelta.diff.seconds *
                                1000000000ULL);
            OriginDeltaTime = ((uint64)rateRatioPtr->OriginTimeStampDelta.diff.nanoseconds) +
                              ((uint64)rateRatioPtr->OriginTimeStampDelta.diff.seconds *
                               1000000000ULL);
            if ((IngressDeltaTime != 0ULL) && (OriginDeltaTime != 0ULL))
            {
                Addend = ENET_HWA_MAC_GetTimestampAddend(EnetBase);
                NewAddend = ((float64)IngressDeltaTime / (float64)OriginDeltaTime * (float64)Addend);
                Status = Eth_Hal_PTPUpdateAddend(EnetBase, (uint32)NewAddend);
            }
            else
            {
                Status = E_NOT_OK;
            }
        }
    }
    return Status;
}

/**
 * @brief                        Set PTP system time.
 * @details                      [SWDESG_ETH_164]Set PTP system time to a target value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] timeStampPtr       The PTP time value to set.
 * @return                       E_OK: Set PTP time successfully.
 *                               E_NOT_OK: Set PTP time failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_SetGlobalTime(uint8                    CtrlIdx,
                                                      const Eth_TimeStampType *timeStampPtr)
{
    return Eth_Hal_PTPInitSystemTime(Eth_HalHandles[CtrlIdx].EnetBase,
                                     timeStampPtr->secondsHi,
                                     timeStampPtr->seconds,
                                     timeStampPtr->nanoseconds);
}
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

/**
 * @brief                        Provides access to a transmit buffer of the FIFO related to the
 *                               specified priority.
 * @details                      [SWDESG_ETH_165]Get a transmit buffer resource from the resource
 *                               pool maintained by the ETH driver.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] FifoIdx            Index of the transmit FIFO.
 * @param[out] BufIdxPtr         Index to the granted buffer resource. To be used for subsequent
 *                               requests.
 * @param[out] BufPtr            Pointer to the granted buffer.
 * @param[inout] LenBytePtr      In: desired length in bytes, out: granted length in bytes.
 * @return                       BUFREQ_OK: success.
 *                               BUFREQ_E_BUSY: all buffers in use.
 *                               BUFREQ_E_OVFL: requested buffer too large.
 *
 */
ETH_TEXT_SECTION BufReq_ReturnType Eth_Hal_ProvideTxBuffer(uint8                  CtrlIdx,
                                                           const Eth_CtrlCfgType *CtrlCfgPtr,
                                                           uint8                  FifoIdx,
                                                           Eth_BufIdxType        *BufIdxPtr,
                                                           uint8                **BufPtr,
                                                           uint16                *LenBytePtr)
{
    BufReq_ReturnType BufReq    = BUFREQ_OK;
    Eth_HandleType   *EthHandle = &Eth_HalHandles[CtrlIdx];
    uint16            BufferLen = EthHandle->TxState[FifoIdx].BufferLen;
    uint16            FrameLen  = *LenBytePtr;
    uint32            BufIdx;

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
    /* [SWS_Eth_00247]Adapt buffer length with switch management */
    uint8 *MgmtPtr;
    uint16 MgmtLen;

    ETH_CFG_SWT_TX_ADAPT_BUFFER_LENGTH(CtrlCfgPtr, &FrameLen);
    MgmtLen = (uint16)(FrameLen - *LenBytePtr);
#else
    (void)CtrlCfgPtr;
#endif

    if (((uint32)FrameLen + (uint32)ETH_FRAME_HEADER_LENGTH) <= (uint32)BufferLen)
    {
        /* [SWS_Eth_00078]Allocate a transmit buffer and lock the buffer. */
        if (E_OK == Eth_Hal_AllocTxBuffer(EthHandle, FifoIdx, &BufIdx))
        {
            *BufIdxPtr  = BufIdx;
            *LenBytePtr = (uint16)(BufferLen - (uint16)ETH_FRAME_HEADER_LENGTH);

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
            /* [SWS_Eth_00247]Prepares the Ethernet frame for common Ethernet communication */
            MgmtPtr  = &(EthHandle->TxBufIdxMap[BufIdx].BufferPtr[ETH_FRAME_TYPE_OFFSET]);
            FrameLen = (uint16)(*LenBytePtr - MgmtLen);
            if (E_OK == ETH_CFG_SWT_TX_PREPARE_FRAME(CtrlCfgPtr, CtrlIdx, BufIdx, &MgmtPtr, &FrameLen))
            {
                *BufPtr     = &MgmtPtr[ETH_FRAME_TYPE_LENGTH];
                *LenBytePtr = FrameLen;
            }
            else
            {
                /* Free the buffer if EthSwt_EthTxPrepareFrame return an error */
                ETH_ENTER_EXCLUSIVE_AREA_TX_FREE();
                Eth_Hal_FreeTxBuffer(EthHandle, BufIdx);
                ETH_EXIT_EXCLUSIVE_AREA_TX_FREE();
                BufReq = BUFREQ_E_NOT_OK;
            }
#else
            *BufPtr = &EthHandle->TxBufIdxMap[BufIdx].BufferPtr[ETH_FRAME_PAYLOAD_OFFSET];
#endif

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
            EthHandle->TxBufIdxMap[BufIdx].TsEnable = (boolean)FALSE;
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */
        }
        else
        {
            /* [SWS_Eth_00080][SWDESG_ETH_088]All buffers are busy, no resource is available. */
            BufReq = BUFREQ_E_BUSY;
        }
    }
    else
    {
        /* [SWS_Eth_00079][SWDESG_ETH_087]
         * Requested buffer length is larger than the max length of the buffer resource.
         */
        *LenBytePtr = (uint16)(BufferLen - (uint16)ETH_FRAME_HEADER_LENGTH);
        BufReq      = BUFREQ_E_OVFL;
    }
    return BufReq;
}

/**
 * @brief                        Triggers transmission of a previously filled transmit buffer.
 * @details                      [SWDESG_ETH_166]Build the Ethernet header with the given physical
 *                               target address (MAC address) and trigger the transmission of a
 *                               previously filled transmit buffer.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] BufIdx             Index of the buffer resource.
 * @param[in] FrameType          Ethernet frame type.
 * @param[in] TxConfirmation     Activates transmission confirmation.
 * @param[in] LenByte            Data length in byte.
 * @param[in] PhysAddrPtr        Physical target address (MAC address) in network byte order.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transmission failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_Transmit(uint8                  CtrlIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr,
                                                 Eth_BufIdxType         BufIdx,
                                                 Eth_FrameType          FrameType,
                                                 boolean                TxConfirmation,
                                                 uint16                 LenByte,
                                                 const uint8           *PhysAddrPtr)
{
    Std_ReturnType     RetValue   = E_NOT_OK;
    Eth_HandleType    *EthHandle  = &Eth_HalHandles[CtrlIdx];
    Eth_BufIdxMapType *pBufIdxMap = &(EthHandle->TxBufIdxMap[BufIdx]);
    uint8             *BufferPtr  = pBufIdxMap->BufferPtr;
    Eth_TxStateType   *pFifoState = &(EthHandle->TxState[pBufIdxMap->FifoIdx]);
#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
    uint8 *MgmtPtr;
#endif

    ETH_ENTER_EXCLUSIVE_AREA_TRANSMIT();
    /* [SWDESG_ETH_095]The transmit buffer must be locked by the driver. */
    if ((boolean)TRUE == pBufIdxMap->Locked)
    {
        /* Build ethernet header */
        Eth_Hal_MemCopy(&BufferPtr[ETH_FRAME_DSTMAC_OFFSET], PhysAddrPtr, ETH_FRAME_MAC_LENGTH);

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
        /* [SWS_Eth_00247]Inserts management information into the Ethernet frame */
        MgmtPtr = &BufferPtr[ETH_FRAME_TYPE_OFFSET];
        /* PRQA S 1339 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified
         *  1339:Evaluating the address of the parameter 'LenByte'.
         *  REASON: The value of this parameter needs to be modified here, and it will be used later.
         */
        if (E_OK == ETH_CFG_SWT_TX_PROCESS_FRAME(CtrlCfgPtr, CtrlIdx, BufIdx, &MgmtPtr, &LenByte))
        /* PRQA S 1339 -- */
        {
            if (E_OK == ETH_CFG_SWT_TX_FINISHED_INDICATION(CtrlCfgPtr, CtrlIdx, BufIdx))
            {
                MgmtPtr[0U] = (uint8)((uint16)FrameType >> 8U);
                MgmtPtr[1U] = (uint8)((uint16)FrameType & 0xFFU);
#else
        BufferPtr[ETH_FRAME_TYPE_OFFSET]      = (uint8)((uint16)FrameType >> 8U);
        BufferPtr[ETH_FRAME_TYPE_OFFSET + 1U] = (uint8)((uint16)FrameType & 0xFFU);
#endif
                /* [SWDESG_ETH_096]Bind BufIdx to DMA descriptor and send frame, if no DMA
                 * descriptor is available, return E_NOT_OK.
                 */
                RetValue = Eth_Hal_SendFrame(EthHandle,
                                             pFifoState,
                                             pBufIdxMap,
                                             BufferPtr,
                                             (uint16)(LenByte + ETH_FRAME_HEADER_LENGTH));
                if (E_OK == RetValue)
                {
                    pBufIdxMap->TxConfirmation = TxConfirmation;
                    pBufIdxMap->TimeOut        = ETH_TXCOMFIRM_TIMEOUT;

                    /* Add pBufIdxMap to transmit queue */
                    if (pFifoState->Head == NULL_PTR)
                    {
                        pFifoState->Head = pBufIdxMap;
                    }
                    else
                    {
                        pFifoState->Tail->NextPtr = pBufIdxMap;
                    }
                    pFifoState->Tail          = pBufIdxMap;
                    pFifoState->Tail->NextPtr = NULL_PTR;
                }

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
            }
        }
#endif
    }
    ETH_EXIT_EXCLUSIVE_AREA_TRANSMIT();

#if (STD_OFF == ETH_SWITCH_MANAGEMENT_SUPPORT)
    (void)CtrlCfgPtr;
#endif
    return RetValue;
}

/**
 * @brief                        Eth driver scheduled main function.
 * @details                      [SWDESG_ETH_169]The function checks for controller errors and lost
 *                               frames. Used for polling state changes. Calls
 *                               EthIf_CtrlModeIndication when the controller mode changed.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_MainFunction(uint8 CtrlIdx, const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_ModeType    CtrlMode;
    Eth_HandleType *EthHandle = &Eth_HalHandles[CtrlIdx];

    /* [SWS_Eth_00240]Polling controller state changes */
    CtrlMode = Eth_Hal_GetControllerMode(CtrlIdx);
    if (Eth_Ctrls_Mode[CtrlIdx] != CtrlMode)
    {
        Eth_Ctrls_Mode[CtrlIdx] = CtrlMode;
        EthIf_CtrlModeIndication(EthHandle->EthIfIdx, CtrlMode);
    }

#if (STD_ON == ETH_DEM_EVENT_DETECT)
    /* [SWS_Eth_00222][SWDESG_ETH_110]Check for frame alignment errors */
    Eth_Hal_CheckRxAlignmentError(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00172][SWS_Eth_00219][SWDESG_ETH_111]Check for CRC errors */
    Eth_Hal_CheckRxCRCError(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00225][SWDESG_ETH_112]Check for late frame collision */
    Eth_Hal_CheckTxLateCollision(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00224][SWDESG_ETH_113]Check for multiple frame collision */
    Eth_Hal_CheckTxMultipleCollision(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00221][SWDESG_ETH_114]Check for frame Size overflow */
    Eth_Hal_CheckRxOversizeFrame(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00169][SWS_Eth_00174][SWDESG_ETH_115]Check for lost frames */
    Eth_Hal_CheckRxFrameLost(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00223][SWDESG_ETH_116]Check for single frame collision */
    Eth_Hal_CheckTxSingleCollision(EthHandle, CtrlCfgPtr);

    /* [SWS_Eth_00220][SWDESG_ETH_117]Check for frame Size underflow  */
    Eth_Hal_CheckRxUndersizeFrame(EthHandle, CtrlCfgPtr);

#endif /* STD_ON == ETH_DEM_EVENT_DETECT */
}

/**
 * @brief                        Process the system interrupt event.
 * @details                      [SWDESG_ETH_170]Handle the system interrupt events.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ProcessSystemInterrupt(uint8 CtrlIdx, const Eth_CtrlCfgType *CtrlCfgPtr)
{
    Eth_HandleType  *EthHandle = &Eth_HalHandles[CtrlIdx];
    ENET_Type *const EnetBase  = EthHandle->EnetBase;
    uint8            u8Channel;

    if ((boolean)TRUE == ENET_HWA_DMA_GetMACIntStatus(EnetBase))
    {
        Eth_Hal_MACIrqHandler(EthHandle, CtrlCfgPtr);
    }
    if ((boolean)TRUE == ENET_HWA_DMA_GetMTLIntStatus(EnetBase))
    {
        Eth_Hal_MTLIrqHandler(EthHandle, CtrlCfgPtr);
    }

    for (u8Channel = 0U; u8Channel < ENET_DMA_CHANNEL_CNT; ++u8Channel)
    {
        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
         *  to an inappropriate essential type
         *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
         *  REASON:The parameter of hardware level function is defined as enum type, so it is
         *  necessary to cast the channel number to channel enum type.
         */
        if ((boolean)TRUE ==
            ENET_HWA_DMA_GetDMAChannelIntStatus(EnetBase, (ENET_DMA_ChannelType)u8Channel))
        {
            Eth_Hal_DMAIrqHandler(EthHandle, u8Channel, CtrlCfgPtr);
        }
        /* PRQA S 4342 -- */
    }

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
    /* Handle uncorrectable errors */
    if ((boolean)TRUE == ENET_HWA_DMA_GetMTLSafetyUncorrectableIntStatus(EnetBase))
    {
        Eth_Hal_MTLEccIrqHandler(EthHandle, CtrlCfgPtr);
    }
    else if ((boolean)TRUE == ENET_HWA_DMA_GetMTLSafetyCorrectableIntStatus(EnetBase))
    {
        Eth_Hal_MTLEccIrqHandler(EthHandle, CtrlCfgPtr);
    }
    else
    {
        /* Doing nothing. */
    }
    if ((boolean)TRUE == ENET_HWA_DMA_GetDMAEccUncorrectableIntStatus(EnetBase))
    {
        /* DMA DCACHE and TSO memorys are not supported */
    }
    else if ((boolean)TRUE == ENET_HWA_DMA_GetDMAEccCorrectableIntStatus(EnetBase))
    {
        /* DMA DCACHE and TSO memorys are not supported */
    }
    else
    {
        /* Doing nothing. */
    }
    if ((boolean)TRUE == ENET_HWA_DMA_GetMACSafetyUncorrectableIntStatus(EnetBase))
    {
        Eth_Hal_MTLDppFsmIrqHandler(EthHandle, CtrlCfgPtr);
    }
#endif /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */
}

/**
 * @brief                        Process the transmission interrupt event.
 * @details                      [SWDESG_ETH_171]Handle the transmission interrupt events.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] ChIdx              Index of the TX channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ProcessTxInterrupt(uint8                  CtrlIdx,
                                                 uint8                  ChIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *const EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;
    uint32           IntEnabled;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */

    /* [FMR_Eth_00004]Check the Tx interrupt status and interrupt enable status. */
    IntEnabled = (ENET_HWA_DMA_GetEnabledInterrupts(EnetBase, (ENET_DMA_ChannelType)ChIdx) &
                  ENET_DMA_CH0_INTERRUPT_ENABLE_TIE_MASK);
    if (((ENET_HWA_DMA_GetCurrentStatus(EnetBase, (ENET_DMA_ChannelType)ChIdx) &
          ENET_DMA_CH0_STATUS_TI_MASK) == ENET_DMA_CH0_STATUS_TI_MASK) &&
        (IntEnabled == ENET_DMA_CH0_INTERRUPT_ENABLE_TIE_MASK))
    {
        ENET_HWA_DMA_ClearTxInterruptFlag(EnetBase, (ENET_DMA_ChannelType)ChIdx);
        Eth_Hal_ReportTransmission(CtrlIdx, ChIdx, CtrlCfgPtr);
    }

    /* PRQA S 4342 -- */
}

/**
 * @brief                        Process the reception interrupt event.
 * @details                      [SWDESG_ETH_172]Handle the reception interrupt events.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] ChIdx              Index of the RX channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ProcessRxInterrupt(uint8                  CtrlIdx,
                                                 uint8                  ChIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr)
{
    ENET_Type *const EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;
    uint32           IntEnabled;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */

    /* [FMR_Eth_00004]Check the Tx interrupt status and interrupt enable status. */
    IntEnabled = (ENET_HWA_DMA_GetEnabledInterrupts(EnetBase, (ENET_DMA_ChannelType)ChIdx) &
                  ENET_DMA_CH0_INTERRUPT_ENABLE_RIE_MASK);
    if (((ENET_HWA_DMA_GetCurrentStatus(EnetBase, (ENET_DMA_ChannelType)ChIdx) &
          ENET_DMA_CH0_STATUS_RI_MASK) == ENET_DMA_CH0_STATUS_RI_MASK) &&
        (IntEnabled == ENET_DMA_CH0_INTERRUPT_ENABLE_RIE_MASK))
    {
        ENET_HWA_DMA_ClearRxInterruptFlag(EnetBase, (ENET_DMA_ChannelType)ChIdx);

        while (ETH_RECEIVED_MORE_DATA_AVAILABLE == Eth_Hal_ReportReception(CtrlIdx, ChIdx, CtrlCfgPtr))
        {
            /* do nothing */
        }
    }

    /* PRQA S 4342 -- */
}

/**
 * @brief                        Clear the system interrupt status.
 * @details                      [SWDESG_ETH_173]Clear the system interrupt status.
 *
 * @param[in] CtrlIdx            The controller index.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ClearSystemInterruptStatus(uint8 CtrlIdx)
{
    ENET_Type *const EnetBase = Eth_HalHandles[CtrlIdx].EnetBase;
    uint8            u8Channel;

    if ((boolean)TRUE == ENET_HWA_DMA_GetMACIntStatus(EnetBase))
    {
        /* Clear MAC interrupts */
    }
    if ((boolean)TRUE == ENET_HWA_DMA_GetMTLIntStatus(EnetBase))
    {
        /* Clear MTL interrupts */
    }

    for (u8Channel = 0U; u8Channel < ENET_DMA_CHANNEL_CNT; ++u8Channel)
    {
        /* Clear DMA channel interrupts */

        /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
         *  to an inappropriate essential type
         *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
         *  REASON:The parameter of hardware level function is defined as enum type, so it is
         *  necessary to cast the channel number to channel enum type.
         */
        if ((boolean)TRUE ==
            ENET_HWA_DMA_GetDMAChannelIntStatus(EnetBase, (ENET_DMA_ChannelType)u8Channel))
        {
            ENET_HWA_DMA_ClearAllNormalInterruptFlags(EnetBase, (ENET_DMA_ChannelType)u8Channel);
            ENET_HWA_DMA_ClearAllAbnormalInterruptFlags(EnetBase, (ENET_DMA_ChannelType)u8Channel);
        }
        /* PRQA S 4342 -- */
    }

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
    uint32 u32IntStatus;
    if ((boolean)TRUE == ENET_HWA_DMA_GetMTLSafetyUncorrectableIntStatus(EnetBase))
    {
        /* Clear ECC error interrupt status */
        u32IntStatus = ENET_HWA_MTL_GetEccInterruptStatus(EnetBase);
        ENET_HWA_MTL_ClearEccInterruptStatus(EnetBase, u32IntStatus);
    }
    else if ((boolean)TRUE == ENET_HWA_DMA_GetMTLSafetyCorrectableIntStatus(EnetBase))
    {
        /* Clear ECC error interrupt status */
        u32IntStatus = ENET_HWA_MTL_GetEccInterruptStatus(EnetBase);
        ENET_HWA_MTL_ClearEccInterruptStatus(EnetBase, u32IntStatus);
    }
    else
    {
        /* Doing nothing */
    }
    if ((boolean)TRUE == ENET_HWA_DMA_GetMACSafetyUncorrectableIntStatus(EnetBase))
    {
        /* Clear interrupt status on read */
        (void)ENET_HWA_MAC_GetDppFsmIntStatus(EnetBase);
    }
#endif /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */
}

/**
 * @brief                        Clear the transmission interrupt status.
 * @details                      [SWDESG_ETH_174]Clear the transmission interrupt status.
 *
 * @param[in] CtrlIdx            The controller index.
 * @param[in] ChIdx              The channel index.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ClearTxInterruptStatus(uint8 CtrlIdx, uint8 ChIdx)
{
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */
    ENET_HWA_DMA_ClearTxInterruptFlag(Eth_HalHandles[CtrlIdx].EnetBase, (ENET_DMA_ChannelType)ChIdx);
    /* PRQA S 4342 -- */
}

/**
 * @brief                        Clear the reception interrupt status.
 * @details                      [SWDESG_ETH_175]Clear the reception interrupt status.
 *
 * @param[in] CtrlIdx            The controller index.
 * @param[in] ChIdx              The channel index.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ClearRxInterruptStatus(uint8 CtrlIdx, uint8 ChIdx)
{
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast
     *  to an inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON:The parameter of hardware level function is defined as enum type, so it is
     *  necessary to cast the channel number to channel enum type.
     */
    ENET_HWA_DMA_ClearRxInterruptFlag(Eth_HalHandles[CtrlIdx].EnetBase, (ENET_DMA_ChannelType)ChIdx);
    /* PRQA S 4342 -- */
}

#define ETH_STOP_SEC_CODE
#include "Eth_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
