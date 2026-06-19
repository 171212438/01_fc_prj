/**
 *   @file    EthTrcv_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR EthTrcv - specific type definition
 *   @details This file contains the EthTrcv specific type definition
 *
 *   @addtogroup ETHTRCV
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : EthTrcv
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
*   0.2.0       27/09/2023    QXW0085       N/A          EthTrcv Initial Version
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix
*   0.6.0       15/01/2024    QXW0085       N/A          Update version
==================================================================================================*/

/* PRQA S 3630  EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON:These macros or type may be not used, but they are needed.
*/

/* PRQA S 0779 EOF
   0779:Macro identifier does not differ from other macro identifier(s) (e.g. '%1s') within the
        specified number of significant characters.
   REASON:These macros are distinct.
*/

#ifndef ETHTRCV_TYPES_H
#define ETHTRCV_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_GeneralTypes.h"
#include "EthTrcv_CfgDefines.h"
#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
#include "Icu.h"
#include "EcuM.h"
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */
#if (STD_ON == ETHTRCV_DEM_EVENT_DETECT)
#include "Dem.h"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/**
 * @brief         EthTrcv_ConnNegType
 * @details       This type specify connection negotiation of the Transceiver.
 *
 */
typedef enum
{
    ETHTRCV_CONN_NEG_AUTO   = 0x0U, /**< @brief Automatic Negotiation. */
    ETHTRCV_CONN_NEG_MASTER = 0x1U, /**< @brief Master. */
    ETHTRCV_CONN_NEG_NONE   = 0x2U, /**< @brief PLCA. */
    ETHTRCV_CONN_NEG_SLAVE  = 0x3U  /**< @brief Slave. */
} EthTrcv_ConnNegType;

/**
 * @brief         EthTrcv_PhyIfType
 * @details       This type specify PHY interface of the Transceiver.
 *
 */
typedef enum
{
    ETHTRCV_PHYIF_MII   = 0x0U, /**< @brief MII interface. */
    ETHTRCV_PHYIF_RMII  = 0x1U, /**< @brief RMII interface. */
    ETHTRCV_PHYIF_RGMII = 0x2U, /**< @brief RGMII interface. */
    ETHTRCV_PHYIF_SGMII = 0x3U  /**< @brief SGMII interface. */
} EthTrcv_PhyIfType;

/**
 * @brief         EthTrcv_PhysLayerType
 * @details       This type specify physical layer of the Transceiver.
 *
 */
typedef enum
{
    ETHTRCV_PHYS_LAYER_TYPE_1000BASE_T  = 0x0U, /**< @brief 1000BASE_T. */
    ETHTRCV_PHYS_LAYER_TYPE_1000BASE_T1 = 0x1U, /**< @brief 1000BASE_T1. */
    ETHTRCV_PHYS_LAYER_TYPE_100BASE_T1  = 0x2U, /**< @brief 100BASE_T1. */
    ETHTRCV_PHYS_LAYER_TYPE_100BASE_TX  = 0x3U, /**< @brief 100BASE_Tx. */
    ETHTRCV_PHYS_LAYER_TYPE_10BASE_T1S  = 0x4U  /**< @brief 10BASE_T1S. */
} EthTrcv_PhysLayerType;

/**
 * @brief         EthTrcv_DerivateType
 * @details       This type specify the derivate type of the Transceiver.
 *
 */
typedef enum
{
    ETHTRCV_YT8531SH            = 0x0U, /**< @brief YT8531SH. */
    ETHTRCV_RTL8211FS           = 0x1U, /**< @brief RTL8211FS. */
    ETHTRCV_RTL8211FS_RTL9010AA = 0x2U, /**< @brief RTL8211FS RTL9010AA bridge. */
    ETHTRCV_RTL8211FS_JL311X    = 0x3U, /**< @brief RTL8211FS JL311X bridge. */
    ETHTRCV_YT8531SH_JL311X     = 0x4U, /**< @brief YT8531SH JL311X bridge. */
    ETHTRCV_JL311X              = 0x5U, /**< @brief JL311X. */
    ETHTRCV_JL311X_YT8531SH     = 0x6U, /**< @brief JL311X YT8531SH bridge. */
    ETHTRCV_JL311X_RTL8211FS    = 0x7U, /**< @brief JL311X RTL8211FS bridge. */
    ETHTRCV_YT8512H             = 0x8U, /**< @brief YT8512. */
    ETHTRCV_YT8010A             = 0x9U  /**< @brief YT8010A. */
} EthTrcv_DerivateType;

/**
 * @brief         EthTrcv_ClkOutPutType
 * @details       This type specify physical layer of the Transceiver.
 *
 */
typedef enum
{
    ETHTRCV_CLK_OUTPUT_DISABLE = 0x0U, /**< @brief Clock output disabled */
    ETHTRCV_CLK_OUTPUT_25M     = 0x1U, /**< @brief Clock output 25M */
    ETHTRCV_CLK_OUTPUT_125M    = 0x2U, /**< @brief Clock output 125M. */
} EthTrcv_ClkOutPutType;

typedef void (*EthTrcv_WakeUpCalloutType)(uint8 TrcvIdx);

/**
 * @brief         EthTrcv_MiiIfType
 * @details       This type specify the Mii interface information including MII(clause 22) and
 *                MMD(clause 45) callback functions Implemented by Eth driver, Eth controller index,
 *                transceiver index,extra bridged transceiver index and MII Pin multiplexing function
 *
 */
typedef struct
{
    Std_ReturnType (*WriteMii)(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 RegVal);
    Std_ReturnType (*ReadMii)(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 *RegValPtr);
    Std_ReturnType (*WriteMmd)(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 RegVal);
    Std_ReturnType (
        *ReadMmd)(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 *RegValPtr);
    uint8 CtrlIdx; /**< @brief The Eth controller index used for MII access to the transceiver. */
    uint8 MiiIdx;  /**< @brief The transceiver index used for MII access to the transceiver. */
    uint8 ExtraMiiIdx; /**< @brief The transceiver index used for MII access to the extra bridged
                          transceiver. */
    void (*MiiMux)(boolean BaseT1Phy); /**< @brief The Mii pins multiplexing call back function. */
} EthTrcv_MiiIfType;

/**
 * @brief         EthTrcv_SwtIfType
 * @details       The switch interface information.
 *
 */
typedef struct
{
    Std_ReturnType (*SwtWrite)(uint8 SwitchIdx, uint8 SwitchPortIdx, uint8 RegIdx, uint16 RegVal);
    Std_ReturnType (*SwtRead)(uint8 SwitchIdx, uint8 SwitchPortIdx, uint8 RegIdx, uint16 *RegValPtr);
    uint8 SwitchIdx;     /**< @brief Reference to a switch configuration container. */
    uint8 SwitchPortIdx; /**< @brief Reference to a switch port. */
} EthTrcv_SwtIfType;

/**
 * @brief         EthTrcv controller configuration type.
 * @details       Implementation specific structure of the Ethernet Transceiver configuration.
 * @implements    EthTrcv_ConfigType struct
 */
typedef struct
{
    uint8 EcucPartition; /**< @brief The referenced ECUC partition ID. */
    uint8 EthIfTrcvIdx;  /**< @brief Index of the transceiver within the context of the Ethernet
                              Interface. */
    boolean ActAsSlavePassiveEnabled; /**< @brief Acting as a passive communication slave on the
                                         corresponding ComM channel. */
    boolean ForceSleepEnabled; /**< @brief Specifies if the Ethernet hardware (PHY) support to go to
                                  sleep without the confirmation of the Ethernet hardware (PHY) of
                                  the linked Ethernet communication partner. */
    boolean SoftResetOnInit;   /**< @brief Specifies if software reset is enabled(TRUE) or
                                  disabled(FALSE)   on initialization.*/
    uint16 SoftResetReadRepetitions; /**< @brief The repetitions to wait after a software reset. */
    EthTrcv_ConnNegType ConnNeg; /**< @brief The connection negotiation of the Ethernet transceiver link. */
    EthTrcv_DuplexModeType DuplexMode; /**< @brief The duplex mode of the Ethernet transceiver link. */
    EthTrcv_BaudRateType  MacLayerSpeed; /**< @brief Defines the baud rate of the MAC layer. */
    EthTrcv_PhyIfType     PhyIf;         /**< @brief PHY interface connected to ECU. */
    EthTrcv_PhysLayerType PhysLayer;     /**< @brief Specifies the physical layer type of the
                                            transceiver link.*/

#if (STD_ON == ETHTRCV_ENABLE_PLCA)
    uint8 PlcaLocalNodeId; /**< @brief Configuration parameter for the transceiver node ID when the
                                PLCA mode for 10BASE-T1S is used.*/
    uint8 PlcaMaxBurstCount; /**< @brief Defines maximum packets allowed to be transmitted within a
                                TO. The maximum burst count could differ per ECU within a PLCA mixed
                                  segment.*/
    uint8 PlcaMaxBurstTimer; /**< @brief Limits the burst frames in bit time. The maximum burst time
                                  could differ per ECU within a PLCA mixed segment.*/
    uint8 PlcaNodeCount; /**< @brief Defines the number of communication participants on the mixed
                              segment. */
    uint8 PlcaTransmitOpportunityTimer; /**< @brief Timer for the transmission in bit time to
                                           evaluate if a Transmission Opportunity is yield or not.
                                         */
#endif                                  /* STD_ON == ETHTRCV_ENABLE_PLCA */

    uint8 SleepRequestNumberOfRepetitions; /**< @brief Specifies the repetitions to trigger a Sleep. */
    uint16 SleepRequestRepetitionPeriod; /**< @brief Specifies the repetition period in seconds of
                                            repetitions for a Sleep Request. */
    uint16 SleepModeExecutionDelay; /**< @brief Specifies the time delay in seconds to execute a
                                       sleep (see OA TC10) for a Ethernet hardware (PHY). */

    EthTrcv_BaudRateType TrcvSpeed; /**< @brief Specifies the speed of the Ethernet transceiver link
                                       in [MBit/s]. If AutoNegotiation is enabled. */

    boolean WakeupLocalEnabled;  /**< @brief Specifies if local wake-up is enabled or disabled. */
    boolean WakeupRemoteEnabled; /**< @brief Specifies if remote wake-up is enabled or disabled. */
    boolean WakeupForwardLocalEnabled; /**< @brief Specifies if remote wake up forwarding is enabled
                                          (TRUE) or disabled (FALSE) . */
    boolean WakeupForwardRemoteEnabled; /**< @brief Specifies if local wake up forwarding is enabled
                                           (TRUE) or disabled (FALSE) . */
    uint32 WakeupLocalDetectionTime; /**< @brief Defines the time in seconds when a local wake-up. */
    uint32 WakeupLocalDurationTime;  /**< @brief Defines the duration time in seconds how long a
                                        local wake-up  should be present on the local wake-up
                                        connection. */
    boolean WakeupSleepOnDatalineEnabled; /**< @brief Specifies if wake-up on data line according to
                                             OA TC10 is supported by the used Ethernet hardware (PHY). */
    uint8 WakeupRequestNumberOfRepetitions; /**< @brief Specifies the repetitions to trigger a
                                               wake-up request. */
    uint16 WakeUpRequestRepetitionPeriod; /**< @brief Specifies the repetition period in seconds of
                                             a wake-up request. */

    EthTrcv_DerivateType DerivateType; /**< @brief Specifies the transceiver chip derivate type. */
    boolean RgmiiTxDelayEnabled; /**< @brief Enable or disable the TX clock delay in RGMII mode. */
    uint8   RgmiiTxDelayValue;   /**< @brief Specifies the TX clock delay value in RGMII mode. */
    boolean RgmiiRxDelayEnabled; /**< @brief Enable or disable the RX clock delay in RGMII mode. */
    uint8   RgmiiRxDelayValue;   /**< @brief Specifies the RX clock delay value in RGMII mode. */

    EthTrcv_ClkOutPutType ClkOutPut; /**< @brief Clock output mode of the transceiver. */
    uint16 WaitLinkupRepetitions; /**< @brief Specifies the repetitions to wait the transceiver link up */

    const EthTrcv_MiiIfType *MiiIfPtr; /**< @brief The MII interface configuration between an
                                          Ethernet Controller and the Ethernet Transceiver. */
    const EthTrcv_SwtIfType *SwtIfPrt; /**< @brief The switch interface configuration between an
                                          Ethernet Controller and the Ethernet Transceiver. */

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
    EthTrcv_WakeUpCalloutType WakeupCallout; /**< @brief Configuration of the call-out name. */
    Icu_ChannelType IcuChannel; /**< @brief Reference to the IcuChannel to enable/disable the
                                   interrupts for wakeups. */
#endif                          /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

    /* DEM */
#if (STD_ON == ETHTRCV_DEM_EVENT_DETECT)
    Mcal_DemErrorType Cfg_Dem_EAccess; /**< @brief DEM access error. */
#endif                                 /* STD_ON == ETHTRCV_DEM_EVENT_DETECT */
} EthTrcv_TrcvCfgType;

/**
 * @brief         EthTrcv configuration type.
 * @details       Implementation specific structure of the Ethernet Transceiver configuration.
 * @implements    EthTrcv_ConfigType_struct
 */
typedef struct
{
    uint8                      NumTransceivers; /**< @brief The number of enabled transceiver. */
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;      /**< @brief Transceiver configurations. */
} EthTrcv_ConfigType;

#ifdef __cplusplus
}
#endif

#endif /*ETHTRCV_TYPES_H*/

/** @} */
