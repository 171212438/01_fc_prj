/**
 *   @file    Eth_Hw_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eth - hardware specific type definition
 *   @details This file contains the Eth hardware specific type definition
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

#ifndef ETH_HW_TYPES_H
#define ETH_HW_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Std_Types.h"
#include "Eth_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/**
 * @brief ENE MAC status type definition
 *
 */
typedef enum
{
    ENET_MAC_STATUS_IDLE = 0U,
    ENET_MAC_STATUS_BUSY = 1U
} ENET_MAC_StatusType;

/**
 * @brief MAC perfect or hash filter mode type definition
 *
 */
typedef enum
{
    ENET_MAC_USE_PERFECT_FILTER = 0U,
    ENET_MAC_USE_HASH_FILTER    = 1U
} ENET_MAC_HashOrPerfectModeType;

/**
 * @brief MTL queue enable type
 *
 */
typedef enum
{
    ENET_MTL_QUEUE_DISABLE        = 0U,
    ENET_MTL_QUEUE_ENABLE_AVB     = 1U,
    ENET_MTL_QUEUE_ENABLE_GENERIC = 2U
} ENET_MTL_QueueEnableType;

/**
 * @brief  MAC PHY interface mode type
 *
 */
typedef enum
{
    ENET_MAC_PHY_MII   = 0U,
    ENET_MAC_PHY_RGMII = 1U,
    ENET_MAC_PHY_RMII  = 4U
} ENET_MAC_MiiModeType;

/**
 * @brief MAC MDIO access clock source range type
 *
 */
typedef enum
{
    ENET_MAC_CSR_CLOCK_RANGE_60_100MHZ  = 0U,
    ENET_MAC_CSR_CLOCK_RANGE_100_150MHZ = 1U,
    ENET_MAC_CSR_CLOCK_RANGE_20_35MHZ   = 2U,
    ENET_MAC_CSR_CLOCK_RANGE_35_60MHZ   = 3U,
    ENET_MAC_CSR_CLOCK_RANGE_150_250MHZ = 4U,
    ENET_MAC_CSR_CLOCK_RANGE_250_300MHZ = 5U
} ENET_MAC_CSRClockRangeType;

/**
 * @brief PTP counter rollover mode type
 *
 */
typedef enum
{
    ENET_MAC_TIMESTAMP_ROLLOVER_BINARY  = 0U,
    ENET_MAC_TIMESTAMP_ROLLOVER_DIGITAL = 1U
} ENET_MAC_TimestampRolloverType;

/**
 * @brief PTP timestamp update mode type
 *
 */
typedef enum
{
    ENET_MAC_TIMESTAMP_UPDATE_COARSE = 0U,
    ENET_MAC_TIMESTAMP_UPDATE_FINE   = 1U
} ENET_MAC_TimestampUpdateMethodType;

/**
 * @brief PTP system time offset update operation type
 *
 */
typedef enum
{
    ENET_MAC_SYSTEM_TIME_ADD_TIME      = 0U,
    ENET_MAC_SYSTEM_TIME_SUBTRACT_TIME = 1U
} ENET_MAC_SystemTimeOperationType;

/**
 * @brief ENET MTL queue type
 *
 */
typedef enum
{
    ENET_MTL_QUEUE_0 = 0U,
    ENET_MTL_QUEUE_1 = 1U
} ENET_MTL_QueueType;

/**
 * @brief MTL TX threshold type
 *
 */
typedef enum
{
    ENET_MTL_TX_THRESHOLD_32B  = 0U,
    ENET_MTL_TX_THRESHOLD_64B  = 1U,
    ENET_MTL_TX_THRESHOLD_96B  = 2U,
    ENET_MTL_TX_THRESHOLD_128B = 3U,
    ENET_MTL_TX_THRESHOLD_192B = 4U,
    ENET_MTL_TX_THRESHOLD_256B = 5U,
    ENET_MTL_TX_STORE_FORWARD  = (1U << ENET_MTL_TXQ0_OPERATION_MODE_TTC_WIDTH)
} ENET_MTL_TxThresholdType;

/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space
 *  shall be distinct
 *  0779:Identifier does not differ from other identifier(s) within the specified number of
 *  significant characters.
 *  REASON:These enumerations are distinct.
 */
/**
 * @brief MTL RX flow control threshold type
 *
 */
typedef enum
{
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_1_KB   = 0U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_1_5_KB = 1U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_2_KB   = 2U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_2_5_KB = 3U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_3_KB   = 4U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_3_5_KB = 5U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_4_KB   = 6U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_4_5_KB = 7U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_5_KB   = 8U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_5_5_KB = 9U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_6_KB   = 10U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_6_5_KB = 11U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_7_KB   = 12U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_7_5_KB = 13U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_8_KB   = 14U,
    ENET_MTL_RX_FLOWCTRL_THRESHOLD_FULL_8_5_KB = 15U
} ENET_MTL_RxFlowCtrlThresholdType;
/* PRQA S 0779 -- */

/**
 * @brief MTL RX threshold type
 *
 */
typedef enum
{
    ENET_MTL_RX_THRESHOLD_64B  = 0U,
    ENET_MTL_RX_THRESHOLD_32B  = 1U,
    ENET_MTL_RX_THRESHOLD_96B  = 2U,
    ENET_MTL_RX_THRESHOLD_128B = 3U,
    ENET_MTL_RX_STORE_FORWARD  = (1U << ENET_MTL_RXQ0_OPERATION_MODE_RTC_WIDTH)
} ENET_MTL_RxThresholdType;

/**
 * @brief Gcl related registers
 *
 */
typedef enum
{
    ENET_MTL_GCL_BTR_LOW  = 0x0U, /**< @brief Base Time Register low 32 bits. */
    ENET_MTL_GCL_BTR_HIGH = 0x1U, /**< @brief Base Time Register high 32 bits. */
    ENET_MTL_GCL_CTR_LOW  = 0x2U, /**< @brief Cycle Time low 32 bits. */
    ENET_MTL_GCL_CTR_HIGH = 0x3U, /**< @brief Cycle Time high 8 bits. */
    ENET_MTL_GCL_TER      = 0x4U, /**< @brief Time Extension. */
    ENET_MTL_GCL_LLR      = 0x5U  /**< @brief Gate Control List Length. */
} ENET_MTL_GclRegistersType;

/**
 * @brief Gate Control List operation type
 *
 */
typedef enum
{
    ENET_MTL_GCL_WRITE = 0x0U, /**< @brief Write operation. */
    ENET_MTL_GCL_READ  = 0x1U  /**< @brief Read operation. */
} ENET_MTL_GclOperationType;

/**
 * @brief ENET DMA channel index type
 *
 */
typedef enum
{
    ENET_DMA_CHANNEL_0 = 0x0U,
    ENET_DMA_CHANNEL_1 = 0x1U
} ENET_DMA_ChannelType;

/**
 * @brief ENET DMA running status
 *
 */
typedef enum
{
    ENET_DMA_STATUS_IDLE   = 0x0U, /**< @brief The ENET DMA engine is stopped. */
    ENET_DMA_STATUS_ACTIVE = 0x1U  /**< @brief The ENET DMA engine is running. */
} ENET_DMA_StatusType;

/**
 * @brief The interrupt mode of ENET DMA
 *
 */
typedef enum
{
    ENET_DMA_INTM_SBD_PERCH_PULSE = 0U,          /**< @brief sbd_perch_* are pulse signals
                                                             and sbd_inter_o will assert. */
    ENET_DMA_INTM_SBD_PERCH_LEVEL = 1U,          /**< @brief sbd_perch_* are level signals and
                                                             sbd_inter_o will not assert. */
    ENET_DMA_INTM_SBD_PERCH_LEVEL_REENTRANT = 2U /**< @brief sbd_perch_* are level signals and
                                                             will regenerate if the same event
                                                             occur again before the signals
                                                             cleared. sbd_inter_o will not
                                                             assert. */
} ENET_DMA_IntModeType;

/**
 * @brief ENET DMA interrupt flag type
 *
 */
typedef enum
{
    ENET_DMA_TX_INTERRUPT                       = ENET_DMA_CH0_INTERRUPT_ENABLE_TIE_MASK,
    ENET_DMA_TX_STOPPED_INTERRUPT               = ENET_DMA_CH0_INTERRUPT_ENABLE_TXSE_MASK,
    ENET_DMA_TX_BUFFER_UNAVAILABLE_INTERRUPT    = ENET_DMA_CH0_INTERRUPT_ENABLE_TBUE_MASK,
    ENET_DMA_RX_INTERRUPT                       = ENET_DMA_CH0_INTERRUPT_ENABLE_RIE_MASK,
    ENET_DMA_RX_BUFFER_UNAVAILABLE_INTERRUPT    = ENET_DMA_CH0_INTERRUPT_ENABLE_RBUE_MASK,
    ENET_DMA_RX_STOPPED_INTERRUPT               = ENET_DMA_CH0_INTERRUPT_ENABLE_RSE_MASK,
    ENET_DMA_RX_WATCHDOG_TIMEOUT_INTERRUPT      = ENET_DMA_CH0_INTERRUPT_ENABLE_RWTE_MASK,
    ENET_DMA_EARLY_TX_INTERRUPT                 = ENET_DMA_CH0_INTERRUPT_ENABLE_ETIE_MASK,
    ENET_DMA_EARLY_RX_INTERRUPT                 = ENET_DMA_CH0_INTERRUPT_ENABLE_ERIE_MASK,
    ENET_DMA_FATAL_BUS_ERROR_INTERRUPT          = ENET_DMA_CH0_INTERRUPT_ENABLE_FBEE_MASK,
    ENET_DMA_CONTEXT_DESCRIPTOR_ERROR_INTERRUPT = ENET_DMA_CH0_INTERRUPT_ENABLE_CDEE_MASK,
    ENET_DMA_ABNORMAL_INTERRUPT                 = ENET_DMA_CH0_INTERRUPT_ENABLE_AIE_MASK,
    ENET_DMA_NORMAL_INTERRUPT                   = ENET_DMA_CH0_INTERRUPT_ENABLE_NIE_MASK
} ENET_DMA_InterruptFlagType;

/** @}*/

#endif /* ETH_HW_TYPES_H */
