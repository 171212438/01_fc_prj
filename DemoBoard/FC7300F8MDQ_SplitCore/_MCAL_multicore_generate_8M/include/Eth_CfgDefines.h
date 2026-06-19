/**
*   @file    Eth_CfgDefines.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Eth - PreCompile configuration Eth include file.
*   @details PreCompile configuration Eth include file for Eth driver.
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
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       02/06/2023    QXW0085/32    N/A          Initialization of ETH Driver
*   0.2.0       27/09/2023    QXW0085/32    N/A          Implementation of Multicore instance
*   0.3.0       20/10/2023    QXW0085/32    N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix.
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization.
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization.
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

#ifndef ETH_CFGDEFINES_H
#define ETH_CFGDEFINES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Mcal.h"

/*==================================================================================================
                                        DEFINES AND MACROS
==================================================================================================*/

/**
* @brief [SWS_Eth_00005]Support pre-compile time, post-build time configuration.
*
*/
#define ETH_PRECOMPILE_SUPPORT                     (STD_OFF)

/**
* @brief          ETH CTRLIDX 0 available
*/
#define ETH_CTRLIDX_0                               (0U)

/**
* @brief          ETH CHANNEL IDX 0
*/
#define ETH_CHANNELIDX_0                            (0U)

/**
* @brief          ETH CHANNEL IDX 1
*/
#define ETH_CHANNELIDX_1                            (1U)

/* EthGeneral */

/**
* @brief [SWS_Eth_00008]Eth Development error detect switch
*
*/
#define ETH_DEV_ERROR_DETECT                        (STD_ON)

/**
* @brief InstanceId of this Eth driver
*
*/
#define ETH_INDEX                                   (0U)

/**
* @brief Limits the total number of supported controllers
*
*/
#define ETH_MAX_CTRLS_SUPPORTED                     (1U)

/**
* @brief Enables the transmission with PLCA (Physical Layer Collision Avoidance)
*
*/
#define ETH_ENABLE_PLCA                             (STD_OFF)

/**
* @brief Enables / Disables Eth_GetCounterValues API
*
*/
#define ETH_GET_COUNTER_VALUES_API                  (STD_ON)

/**
* @brief Enables / Disables Eth_GetTxErrorCounterValues API
*
*/
#define ETH_GET_TX_ERROR_COUNTER_VALUES_API         (STD_ON)

/**
* @brief Enables / Disables Eth_GetTxStats API
*
*/
#define ETH_GET_TX_STATS_API                        (STD_ON)

/**
* @brief Enables / Disables Eth_GetRxStats API
*
*/
#define ETH_GET_RX_STATS_API                        (STD_ON)

/**
* @brief [SWS_Eth_00176]Enables / Disables the GlobalTime APIs
*
*/
#define ETH_GLOBAL_TIME_SUPPORT                     (STD_ON)

/**
* @brief Enables / Disables the timebased schedule APIs
*
*/
#define ETH_TIME_BASED_SCHEDULE_SUPPORT             (STD_OFF)

/**
* @brief Enables/Disables optional API Eth_UpdatePhysAddrFilter
*
*/
#define ETH_UPDATE_PHYS_ADDR_FILTER                 (STD_ON)

/**
* @brief Enables / Disables version info API
*
*/
#define ETH_VERSION_INFO_API                        (STD_ON)

/**
* @brief Diagnostic Event switch
*
*/
#define ETH_DEM_EVENT_DETECT                        (STD_ON)

/**
* @brief Switch management support
*
*/
#define ETH_SWITCH_MANAGEMENT_SUPPORT               (STD_OFF)

/**
* @brief Eth fatal error notification use callback function or DEM event
*
*/
#define ETH_FATAL_ERROR_CALLBACK_NOTIFICATION       (STD_ON)

/**
* @brief The Eth transceiver needs to be configured during Eth initialization.
*
*/
#define ETH_TRANSCEIVER_PREINIT                     (STD_OFF)

/**
* @brief Eth physical address length in byte
*
*/
#define ETH_PHYS_ADDR_LEN_BYTE                      (6U)

/**
* @brief Eth MAC layer header length in byte
*
*/
#define ETH_HEADER_LEN_BYTE                         (14U)

/**
* @brief Eth hardware wait timeout loop tick
*
*/
#define ETH_TIMEOUT_LOOP_COUNT                      (1500U)

/* EthCtrlOffloading */

/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
*  0791:Macro identifier does not differ from other macro identifier(s) within the specified number
*  of significant characters.
*  REASON:These macros are automatically generated by configuration tool, and they are distinct.
*/

/**
* @brief [SWS_Eth_00216][SWS_Eth_00217]Enables / Disables hardware offloading for ICMP checksums
*
*/
#define ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_ICMP       (STD_ON)

/**
* @brief [SWS_Eth_00216][SWS_Eth_00217]Enables / Disables hardware offloading for IPV4 checksums
*
*/
#define ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_IPV4       (STD_ON)

/**
* @brief [SWS_Eth_00216][SWS_Eth_00217]Enables / Disables hardware offloading for TCP checksums
*
*/
#define ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_TCP        (STD_ON)

/**
* @brief [SWS_Eth_00216][SWS_Eth_00217]Enables / Disables hardware offloading for UDP checksums
*
*/
#define ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM_UDP        (STD_ON)

/**
* @brief Enables / Disables hardware offloading for checksums
*
*/
#define ETH_CTRL_ENABLE_OFFLOAD_CHECKSUM            (STD_ON)

/* PRQA S 0791 -- */

/**
* @brief Enables / Disables MDIO clause 22 read write
*
*/
#define ETH_CTRL_ENABLE_MII                         (STD_ON)

/**
* @brief Enables / Disables MDIO clause 45 read write
*
*/
#define ETH_CTRL_ENABLE_MMD                         (STD_ON)

/**
* @brief The maximum number of buffers configured in the egress path
*
*/
#define ETH_CFG_MAX_TX_BUFIDX_NUM                   (12U)

/**
* @brief The maximum number of buffers configured in the ingress path
*
*/
#define ETH_CFG_MAX_RX_BUFIDX_NUM                   (32U)

/* Configuration limits */

/**
* @brief Limits the max length bytes of FIFO buffers
*
*/
#define ETH_LIMIT_MAX_FIFO_BUF_LENBYTES             (1536U)

/**
* @brief Limits the min length bytes of FIFO buffers
*
*/
#define ETH_LIMIT_MIN_FIFO_BUF_LENBYTES             (64U)

/**
* @brief Limits the max count of FIFO buffers
*
*/
#define ETH_LIMIT_MAX_FIFO_BUF_COUNTS               (64U)

/**
* @brief Limits the min count of FIFO buffers
*
*/
#define ETH_LIMIT_MIN_FIFO_BUF_COUNTS               (4U)

/* Hardware features */

/**
* @brief Hardware feature max channel count of Eth controllers
*
*/
#define ETH_FEATURE_MAX_CHANNEL_COUNT               (2U)

/**
* @brief Hardware feature safety function support
*
*/
#define ETH_FEATURE_SAFETY_SUPPORT                  (STD_ON)

/**
* @brief Hardware feature time aware shaper function support
*
*/
#define ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT       (STD_ON)

/**
* @brief Hardware feature total transmit fifo memory size
*
*/
#define ETH_FEATURE_TOTAL_TX_FIFO_SIZE              (8192U)

/**
* @brief Hardware feature total receive fifo memory size
*
*/
#define ETH_FEATURE_TOTAL_RX_FIFO_SIZE              (8192U)

/**
* @brief The number of ECU partitions supported by Eth driver
*
*/
#define ETH_NUM_ECU_PARTITIONS                      MAX_CORE_NUM

/**
* @brief ECU partitions check switch
*
*/
#define ETH_CHECK_ECU_PARTITION                     (STD_ON)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/**
* @brief         Eth_FatalErrorType.
* @details       Eth fatal errors type.
*
*/
typedef enum
{
    ETH_FATAL_BUS_ERROR         = 0U,    /**< @brief Fatal bus error. */
    ETH_MTL_TXMEM_ECC_ERROR     = 1U,    /**< @brief TX memory ECC error. */
    ETH_MTL_RXMEM_ECC_ERROR     = 2U,    /**< @brief RX memory ECC error. */
    ETH_MTL_ESTMEM_ECC_ERROR    = 3U,    /**< @brief EST memory ECC error. */
    ETH_DATA_PATH_PARITY_ERROR  = 4U,    /**< @brief Data Path Parity error. */
    ETH_FSM_STATE_PARITY_ERROR  = 5U,    /**< @brief FSM state Parity error. */
    ETH_FSM_STATE_TIMEOUT_ERROR = 6U     /**< @brief FSM state time out error. */
} Eth_FatalErrorType;

/*==================================================================================================
                                        FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ETH_CFGDEFINES_H */

/** @} */
