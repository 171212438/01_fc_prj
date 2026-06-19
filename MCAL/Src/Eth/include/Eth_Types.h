/**
 *   @file    Eth_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eth - specific type definition
 *   @details This file contains the Eth specific type definition
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

#ifndef ETH_TYPES_H
#define ETH_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Std_Types.h"
#include "Eth_GeneralTypes.h"
#include "Eth_CfgDefines.h"
#if (STD_ON == ETH_DEM_EVENT_DETECT)
#include "Dem.h"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/* Eth driver service IDs definition */
#define ETH_DRV_SID_INIT                    0x01
#define ETH_DRV_SID_SETCONTROLLERMODE       0x03
#define ETH_DRV_SID_GETCONTROLLERMODE       0x04
#define ETH_DRV_SID_WRITEMII                0x05
#define ETH_DRV_SID_READMII                 0x06
#define ETH_DRV_SID_GETPHYSADDR             0x08
#define ETH_DRV_SID_PROVIDETXBUFFER         0x09
#define ETH_DRV_SID_TRANSMIT                0x0A
#define ETH_DRV_SID_RECEIVE                 0x0B
#define ETH_DRV_SID_TXCONFIRMATION          0x0C
#define ETH_DRV_SID_GETVERSIONINFO          0x0D
#define ETH_DRV_SID_IRQHANDLER              0x0F
#define ETH_DRV_SID_TXIRQHANDLER            0x10
#define ETH_DRV_SID_RXIRQHANDLER            0x11
#define ETH_DRV_SID_UPDATEADDRFILTER        0x12
#define ETH_DRV_SID_SETPHYSADDR             0x13
#define ETH_DRV_SID_GETCOUNTERVALUES        0x14
#define ETH_DRV_SID_GETRXSTATS              0x15
#define ETH_DRV_SID_GETCURRENTTIME          0x16
#define ETH_DRV_SID_ENABLEEGRESSTIMESTAMP   0x17
#define ETH_DRV_SID_GETEGRESSTIMESTAMP      0x18
#define ETH_DRV_SID_GETINGRESSTIMESTAMP     0x19
#define ETH_DRV_SID_SETCORRECTIONTIME       0x1A
#define ETH_DRV_SID_SETGLOBALTIME           0x1B
#define ETH_DRV_SID_GETTXSTATS              0x1C
#define ETH_DRV_SID_GETTXERRORCOUNTERVALUES 0x1D
#define ETH_DRV_SID_MAINFUNCTION            0x20
#define ETH_DRV_SID_WRITEMMD                0x21
#define ETH_DRV_SID_READMMD                 0x22
#define ETH_DRV_SID_TIMEAWARESHAPER         0x23
#define ETH_DRV_SID_TBS_CONFIG              0x24
#define ETH_DRV_SID_TBS_SETLAUNCHTIME       0x25

/* [SWS_Eth_00016]Eth DET error codes */
#define ETH_E_INV_CTRL_IDX                  ((uint8)0x01)
#define ETH_E_UNINIT                        ((uint8)0x02)
#define ETH_E_PARAM_POINTER                 ((uint8)0x03)
#define ETH_E_INV_PARAM                     ((uint8)0x04)
#define ETH_E_INV_MODE                      ((uint8)0x05)
#define ETH_E_COMMUNICATION                 ((uint8)0x06)
#define ETH_E_INV_PARTITION                 ((uint8)0x10)
#define ETH_E_NOT_SUPPORT                   ((uint8)0x11)
#define ETH_E_UNEXPECTED_ISR                ((uint8)0x12)
#define ETH_E_ALREADY_INITIALIZED           ((uint8)0x13)

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief         Eth_PhyIfType
 * @details       This type specify PHY interface of the controller.
 *
 */
typedef enum
{
    ETH_PHYIF_MII   = 0x0U, /**< @brief MII interface. */
    ETH_PHYIF_RMII  = 0x1U, /**< @brief RMII interface. */
    ETH_PHYIF_RGMII = 0x2U, /**< @brief RGMII interface. */
} Eth_PhyIfType;

/**
 * @brief         Eth_MTLQueueEnableType.
 * @details       ETH MTL queue enable mode.
 *
 */
typedef enum
{
    ETH_MTL_QUEUE_DISABLE        = 0U, /**< @brief MTL Queue not enabled. */
    ETH_MTL_QUEUE_ENABLE_AVB     = 1U, /**< @brief MTL Queue enabled for AV. */
    ETH_MTL_QUEUE_ENABLE_GENERIC = 2U  /**< @brief MTL Queue enabled for DCB/Generic. */
} Eth_MTLQueueEnableType;

/**
 * @brief ENET TX_CLK pin output selection type.
 *
 */
typedef enum
{
    ETH_TXCLK_OUTPUT_SEL_OFF      = 0U, /*!< ENET TX Clock Source Off */
    ETH_TXCLK_OUTPUT_SEL_PLL0_DIV = 1U, /*!< ENET TX Clock Select PLL0_DIV */
    ETH_TXCLK_OUTPUT_SEL_FOSC_CLK = 2U, /*!< ENET TX Clock Select FOSC */
    ETH_TXCLK_OUTPUT_SEL_TX_CLK   = 3U  /*!< ENET TX Clock Select ENET TX CLK */
} Eth_TxClkOutputSelType;

/**
 * @brief ENET TX_CLK output source PLL0_DIV source selection type.
 *
 */
typedef enum
{
    ETH_TXCLK_PLL0_DIV_PLL0_CLK0 = 0U, /*!< Select PLL0_CLK0 as the_source of PLL0_DIV */
    ETH_TXCLK_PLL0_DIV_PLL0_CLK1 = 1U, /*!< Select PLL0_CLK1 as the_source of PLL0_DIV */
} Eth_TxClkDivSrcSelType;

/**
 * @brief ENET RGMII clock source selection type
 *
 */
typedef enum
{
    ETH_RGMII_SEL_PLL0_CLK1 = 0U, /*!< RGMII Clock Select PLL0 CLK1 */
    ETH_RGMII_SEL_REF_CLK   = 1U, /*!< RGMII Clock Select ENET REF CLK */
    ETH_RGMII_SEL_PLL0_DIVH = 2U, /*!< RGMII Clock Select PLL0_DIVH */
    ETH_RGMII_SEL_PLL1_DIVH = 3U  /*!< RGMII Clock Select PLL1_DIVH */
} Eth_RgmiiClkSelType;

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief Eth PTP clock selection type
 *
 */
typedef enum
{
    ETH_PTP_CLK_SEL_PCC     = 0U, /*!< Select from PCC clock */
    ETH_PTP_CLK_SEL_TX_CLK  = 1U, /*!< Select from ETH_TX clock pin input */
    ETH_PTP_CLK_SEL_REF_CLK = 2U  /*!< Select from ETH_REF clock pin input */
} Eth_PtpClkSelType;
#endif

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
/**
 * @brief         Eth_MTLDppModeType.
 * @details       ETH MTL Data Path Parity Protection enable mode.
 *
 */
typedef enum
{
    ETH_MTL_DPP_DISABLE_PARITY = 0U, /**< @brief Disable Data Path Parity Protection. */
    ETH_MTL_DPP_EVEN_PARITY    = 1U, /**< @brief Even Data Path Parity Protection. */
    ETH_MTL_DPP_ODD_PARITY     = 2U  /**< @brief Odd Data Path Parity Protection. */
} Eth_MTLDppModeType;
#endif /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */

#if (STD_ON == ETH_CTRL_ENABLE_MII)
typedef void (*Eth_ReadMiiCbkType)(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 RegVal);
typedef void (*Eth_WriteMiiCbkType)(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx);
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

/**
 * @brief         Eth_DMADescType
 * @details       DMA descriptor type.
 *
 */
typedef struct
{
    __IO uint32 Des0;    /**< @brief DMA Descriptor word 0. */
    __IO uint32 Des1;    /**< @brief DMA Descriptor word 1. */
    __IO uint32 Des2;    /**< @brief DMA Descriptor word 2. */
    __IO uint32 Des3;    /**< @brief DMA Descriptor word 3. */
    uint32      Backup0; /**< @brief DMA Descriptor backup data0. */
    uint32      Backup1; /**< @brief DMA Descriptor backup data1. */
} Eth_DMADescType;

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
/**
 * @brief         Eth_DMAEnhancedDescType
 * @details       DMA Enhanced descriptor type.
 *
 */
typedef struct
{
    __IO uint32 EDes4;   /**< @brief DMA Enhanced Descriptor word 0. */
    __IO uint32 EDes5;   /**< @brief DMA Enhanced Descriptor word 1. */
    __IO uint32 EDes6;   /**< @brief DMA Enhanced Descriptor word 2. */
    __IO uint32 EDes7;   /**< @brief DMA Enhanced Descriptor word 3. */
    __IO uint32 Des0;    /**< @brief DMA Descriptor word 0. */
    __IO uint32 Des1;    /**< @brief DMA Descriptor word 1. */
    __IO uint32 Des2;    /**< @brief DMA Descriptor word 2. */
    __IO uint32 Des3;    /**< @brief DMA Descriptor word 3. */
    uint32      Backup0; /**< @brief DMA Descriptor backup data0. */
    uint32      Backup1; /**< @brief DMA Descriptor backup data1. */
} Eth_DMAEnhancedDescType;

/**
 * @brief EST TBS configuration type.
 * @details Configuration parameters for EST Time Based Scheduling control.
 */
typedef struct
{
    uint32  LaunchExpiryOffset;      /**< @brief Launch Expiry Offset nanoseconds(0 - 999999999) */
    uint8   LaunchExpiryGsnOffset;   /**< @brief Launch Expiry GSN Offset (LEGOS) */
    boolean LaunchExpiryOffsetValid; /**< @brief Launch Expiry Offset Valid flag (LEOV) */
    boolean EstOffsetMode;           /**< @brief EST Offset Mode Enable (ESTM) */
} Eth_TBSCfgType;

/**
 * @brief EST TBS launch time type.
 * @details Configuration parameters for launch time of Time Based Scheduling.
 */
typedef struct
{
    boolean LaunchtimeValid;   /**< @brief Launch Time valid */
    uint8   GCLSlotOffset;     /**< @brief Launch Time GSN slot Offset */
    uint8   LaunchtimeSec;     /**< @brief Launch Time Offset seconds */
    uint32  LaunchtimeNanoSec; /**< @brief Launch Time Offset nanoseconds(0 - 999999999) */
} Eth_TBSLaunchTimeType;
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

typedef void *Eth_DMADescPtrType;

/**
 * @brief         ETH DMA channel configuration type.
 * @details       ETH DMA channel configuration type.
 * @implements    Eth_DMAChConfigType_struct
 */
typedef struct
{
    uint32 Control;   /**< @brief DMA channel control register value. */
    uint32 TxControl; /**< @brief DMA TX channel control register value. */
    uint32 RxControl; /**< @brief DMA RX channel control register value. */
} Eth_DMAChConfigType;

/**
 * @brief         ETH FIFO configuration type.
 * @details       ETH FIFO configuration type.
 * @implements    Eth_FifoConfigType_struct
 */
typedef struct
{
    uint16             FifoBufLenByte;  /**< @brief FIFO buf length. */
    uint16             FifoBufTotal;    /**< @brief FIFO total count. */
    Eth_DMADescPtrType DescListAddress; /**< @brief Descriptor start address,
                                          length = sizeof(Eth_DMADescType) * FifoBufTotal. */
    uint8 *FifoBufStartAddress;         /**< @brief FIFO buf start address,
                                            length = FifoBufLenByte * FifoBufTotal. */
    uint8 PriorityMask;                 /**< @brief Priority mask of the FIFO. */
} Eth_FifoConfigType;

/**
 * @brief         ETH MTL queue configuration type.
 * @details       ETH MTL queue configuration type.
 * @implements    Eth_MTLQueueCfgType_struct
 */
typedef struct
{
    Eth_MTLQueueEnableType TxQueueMode;     /**< @brief MTL TX queue mode. */
    uint32                 TxQueueWeights;  /**< @brief MTL TX queue weights,max 0x64. */
    uint32                 IdleSlopeCredit; /*!< Idle slope credit for AVB queues */
    uint32                 SendSlopeCredit; /*!< Send slope credit for AVB queues */
    uint32                 HiCredit;        /*!< High credit limit for AVB queues */
    sint32                 LoCredit;        /*!< Low credit limit for AVB queues */
    Eth_MTLQueueEnableType RxQueueMode;     /**< @brief MTL TX queue mode . */
    boolean ForwardTCPIPChecksumErr;        /**< @brief Forward TCP checksum error packets. */
    boolean ForwardErrorPackets;            /**< @brief Forward error packets . */
    boolean ForwardUndersizedGood;          /**< @brief Forward undersized good packets. */
    uint8   RxQueueWeight;                  /**< @brief RX queue Weight. */
} Eth_MTLQueueCfgType;

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/**
 * @brief         ETH Gate Control type.
 * @details       ETH Gate Control item type of the Gate Control List.
 * @implements    Eth_GateControlType_struct
 */
typedef struct
{
    uint8  GateControl;  /**< @brief The Gate Control state. */
    uint32 TimeInterval; /**< @brief The Gate Control time interval. */
} Eth_GateControlType;

/**
 * @brief         ETH Time Aware Shaper type.
 * @details       ETH Time Aware Shaper configuration type.
 * @implements    Eth_TimeAwareShaperType_struct
 */
typedef struct
{
    uint32 BaseTimeSeconds;                     /**< @brief The upper 32 bits of the start time
                                                            to execute Gate Control. */
    uint32 BaseTimeNanoseconds;                 /**< @brief The lowper 32 bits of the start time
                                                            to execute Gate Control. */
    uint16 GateControlListLength;               /**< @brief The number of items in the
                                                            Gate Control list. */
    uint16 CycleTimeSeconds;                    /**< @brief The upper 8 bits of the cycle time
                                                            to repeat Gate Control list. */
    uint32 CycleTimeNanoseconds;                /**< @brief The lowper 32 bits of the cycle time
                                                            to repeat Gate Control list. */
    uint32 TimeExtension;                       /**< @brief The time in nanoseconds the current Gate
                                                            Control List can be extended before
                                                            switching to the new List. */
    boolean EnablePreemption;                   /**< @brief Enable frame preemption. */
    uint8   PreemptionClassification;           /**< @brief Indicates the Queues be classified as
                                                            preemptable or express. */
    uint16 ReleaseAdvanceTime;                  /**< @brief The maximum time between issuing a
                                                            RELEASE and the MAC being ready to
                                                            resume transmission of preemptable
                                                            frames. */
    uint16 HoldAdvanceTime;                     /**< @brief The maximum time between issuing a HOLD
                                                            and the MAC ceasing to transmit any
                                                            preemptable frame. */
    const Eth_GateControlType *GateControlList; /**< @brief The Gate Control list items. */
} Eth_TimeAwareShaperType;
#endif

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
/**
 * @brief         ETH switch management interface type.
 * @details       This structure holds function Pointers to the switch management interface.
 * @implements    Eth_SwtManagementType_struct [SWS_Eth_00120]
 */
typedef struct
{
    void (*TxAdaptBufLen)(uint16 *LengthPtr);
    Std_ReturnType (
        *TxPrepareFrame)(uint8 CtrlIdx, Eth_BufIdxType BufIdx, uint8 **DataPtr, uint16 *LengthPtr);
    Std_ReturnType (
        *TxProcessFrame)(uint8 CtrlIdx, Eth_BufIdxType BufIdx, uint8 **DataPtr, uint16 *LengthPtr);
    Std_ReturnType (*TxFinishedIndication)(uint8 CtrlIdx, Eth_BufIdxType BufIdx);
    Std_ReturnType (*RxProcessFrame)(uint8          CtrlIdx,
                                     Eth_BufIdxType BufIdx,
                                     uint8        **DataPtr,
                                     uint16        *LengthPtr,
                                     boolean       *IsMgmtFrameOnlyPtr);
    Std_ReturnType (*RxFinishedIndication)(uint8 CtrlIdx, Eth_BufIdxType BufIdx);
} Eth_SwtManagementType;
#endif

/**
 * @brief         Eth controller configuration type.
 * @details       Implementation specific structure of the controller configuration.
 * @implements    Eth_CtrlCfgType_struct
 */
typedef struct
{
    uint32 BusClkFreq;    /**< @brief Eth interface bus clock. */
    uint8  EcucPartition; /**< @brief The referenced ECUC partition ID. */
    uint8  EthIfIdx;      /**< @brief Index of the controller within the
                                    context of the Ethernet Interface. */
    boolean EnableMii;    /**< @brief Enable MII clause 22 access. */
    boolean EnableMmd;    /**< @brief Enable MII clause 45 access. */
#if (STD_ON == ETH_CTRL_ENABLE_MII)
    Eth_ReadMiiCbkType  ReadMiiCbk;  /**< @brief EthTrcv_ReadMiiIndication. */
    Eth_WriteMiiCbkType WriteMiiCbk; /**< @brief EthTrcv_WriteMiiIndication. */
#endif
#if (STD_ON == ETH_TRANSCEIVER_PREINIT)
    Eth_TrcvPreInitFunctionType Preinit_Func; /**< @brief Function ptr for preinit. */
#endif
    boolean TxInterruptEn; /**< @brief Enable TX interrupt. */
    boolean RxInterruptEn; /**< @brief Enable RX interrupt. */

    uint8                     EgressFifoCount;   /**< @brief TX FIFO rings count. */
    uint8                     IngressFifoCount;  /**< @brief RX FIFO rings count. */
    const Eth_FifoConfigType *EgressFifoCfgPtr;  /**< @brief Egress FIFO configuration. */
    const Eth_FifoConfigType *IngressFifoCfgPtr; /**< @brief Ingress FIFO configuration. */

    /* MAC */
    Eth_PhyIfType PhyIf;                              /**< @brief PHY interface. */
    uint8         MacAddress[ETH_PHYS_ADDR_LEN_BYTE]; /**< @brief MAC address. */
    uint32        MacConfiguration;    /**< @brief MAC configuration register value. */
    uint32        MacExtConfiguration; /**< @brief MAC extended config register. */
    uint32        MacFilterRegValue;   /**< @brief MAC packet filter register value. */

    /* DMA */
    uint32                     DmaMode;          /**< @brief DMA mode register value. */
    uint32                     DmaSysBusMode;    /**< @brief DMA sysbus mode register value. */
    const Eth_DMAChConfigType *DMAChannelCfgPtr; /**< @brief DMA channel configurations. */

    /* MTL */
    uint32                     MtlOperationMode; /**< @brief MTL operation mode register. */
    const Eth_MTLQueueCfgType *MTLQueueCfgPtr;   /**< @brief MTL queues configurations. */

    /* MMC */
    boolean MMCResetOnRead;  /**< @brief counters reset to 0 after read. */
    boolean MMCStopRollover; /**< @brief counters does not roll over to zero
                                         after reaching the maximum value. */

    /* SystemConfig */
    boolean                TxClkOutputEn;
    uint8                  TxClkSrcDiv;
    Eth_TxClkDivSrcSelType TxClkSrcSel;
    Eth_TxClkOutputSelType TxClkSel;
    Eth_RgmiiClkSelType    RgmiiClkSel;

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
    /* PTP */
    Eth_PtpClkSelType PtpClkSrc;              /**< @brief PTP clock source. */
    uint32            PtpCtrl;                /**< @brief PTP control register. */
    Eth_TimeStampType InitTime;               /**< @brief PTP initialize time. */
    uint32            SubSecondInc;           /**< @brief MAC_Sub_Second_Increment value. */
    uint32            TimestampAddend;        /**< @brief MAC_Timestamp_Addend value. */
    uint32            EgressCorrNanoseconds;  /**< @brief Egress_Corr_Nanosecond value. */
    uint32            IngressCorrNanoseconds; /**< @brief Ingress_Corr_Nanosecond value. */
#endif                                        /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
    uint8                          NumTimeAwareShaper; /**< @brief Number of Time aware shapers. */
    const Eth_TimeAwareShaperType *TimeAwareShaperPtr; /**< @brief Time aware shaper. */
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
    const Eth_SwtManagementType *SwtMgmtPtr;
#endif

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
    boolean            SafetyEccEn;        /**< @brief ECC Error Protection. */
    boolean            SafetyFsmParityEn;  /**< @brief FSM parity protection. */
    boolean            SafetyFsmTimeoutEn; /**< @brief FSM time out protection. */
    Eth_MTLDppModeType SafetyDppMode;      /**< @brief Data Path Parity Protection. */
#if (STD_ON == ETH_DEM_EVENT_DETECT)
    Mcal_DemErrorType Cfg_Dem_ESafety; /**< @brief DEM safety error. */
#endif                                 /* STD_ON == ETH_DEM_EVENT_DETECT */
#endif                                 /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */

    /* DEM */
#if (STD_ON == ETH_DEM_EVENT_DETECT)
    Mcal_DemErrorType Cfg_Dem_EAccess;            /**< @brief DEM access error. */
    Mcal_DemErrorType Cfg_Dem_EAlignment;         /**< @brief DEM alignment error. */
    Mcal_DemErrorType Cfg_Dem_ECrc;               /**< @brief DEM CRC error. */
    Mcal_DemErrorType Cfg_Dem_ELateCollision;     /**< @brief DEM late collision. */
    Mcal_DemErrorType Cfg_Dem_EMultipleCollision; /**< @brief DEM multiple collision. */
    Mcal_DemErrorType Cfg_Dem_EOverSizeFrame;     /**< @brief DEM over size frame. */
    Mcal_DemErrorType Cfg_Dem_ERxFramesLost;      /**< @brief DEM RX frames lost. */
    Mcal_DemErrorType Cfg_Dem_ESingleCollision;   /**< @brief DEM single collision. */
    Mcal_DemErrorType Cfg_Dem_EUnderSizeFrame;    /**< @brief DEM under size frame. */
#endif                                            /* STD_ON == ETH_DEM_EVENT_DETECT */
} Eth_CtrlCfgType;

/**
 * @brief         Eth driver initialization type.
 * @details       Implementation specific structure of the post build configuration.
 * @implements    Eth_ConfigType_struct [SWS_Eth_00156]
 */
typedef struct
{
    uint8                  NumController; /**< @brief The number of enabled controller. */
    const Eth_CtrlCfgType *CtrlPtr;       /**< @brief Controller configurations. */
} Eth_ConfigType;

#ifdef __cplusplus
}
#endif

#endif /* ETH_TYPES_H */

/** @} */
