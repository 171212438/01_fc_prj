/**
*   @file    EthTrcv_CfgDefines.h
*   @version 1.5.1
*
*   @brief   AUTOSAR EthTrcv - PreCompile configuration EthTrcv include file.
*   @details PreCompile configuration EthTrcv include file for EthTrcv driver.
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
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.2.0       27/09/2023    QXW0085       N/A          EthTrcv Initial Version
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of EthTrcv Driver
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix
*   0.6.0       21/03/2024    QXW0085       N/A          Update version
==================================================================================================*/

 /* PRQA S 0791 EOF
    0791:Macro identifier does not differ from other macro identifier(s) (e.g. '%1s') within the
    specified number of significant characters.
    REASON:These macros are automatically generated, and they are distinct.
 */

#ifndef ETHTRCV_CFGDEFINES_H
#define ETHTRCV_CFGDEFINES_H

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

#define ETHTRCV_PRECOMPILE_SUPPORT                      (STD_ON)

/* EthTrcvGeneral */

/**
* @brief EthTrcv Dev error detect switch
*
*/
#define ETHTRCV_DEV_ERROR_DETECT                        (STD_ON)

/**
* @brief Enable/disable the APIs for cable diagnostic
*
*/
#define ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API             (STD_OFF)

/**
* @brief Enables the transmission with PLCA (Physical Layer Collision Avoidance)
*
*/
#define ETHTRCV_ENABLE_PLCA                             (STD_OFF)

/**
* @brief Enables / Disables EthTrcv_GetBaudRate API
*
*/
#define ETHTRCV_GET_BAUD_RATE_API                       (STD_ON)

/**
* @brief Enables / Disables API to obtain the recent wake-up reason detected by the used Ethernet hardware (e.g. PHY)
*
*/
#define ETHTRCV_GET_BUS_WU_REASON_API                   (STD_OFF)

/**
* @brief Enables / Disables EthTrcv_GetDuplexMode API
*
*/
#define ETHTRCV_GET_DUPLEX_MODE_API                     (STD_ON)

/**
* @brief Enables / Disables EthTrcv_GetLinkState API
*
*/
#define ETHTRCV_GET_LINK_STATE_API                      (STD_ON)

/**
* @brief Enables/Disables optional API EthTrcv_GetPhyIdentifier
*
*/
#define ETHTRCV_GET_PHY_IDENTIFIER_API                  (STD_ON)

/**
* @brief Enables / Disables EthTrcv_SetTransceiverWakeupMode API
*
*/
#define ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API         (STD_OFF)

/**
* @brief Enables / Disables EthTrcv_GetTransceiverWakeupMode API
*
*/
#define ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API         (STD_OFF)

/**
* @brief Enables / Disables EthTrcv_TransceiverLinkStateRequest API
*
*/
#define ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API       (STD_ON)

/**
* @brief InstanceId of this EthTrcvdriver
*
*/
#define ETHTRCV_INDEX                                   (0U)

/**
* @brief Limits the total number of supported transceivers
*
*/
#define ETHTRCV_MAX_TRCVS_SUPPORTED                     (1U)

/**
* @brief Enables / Disables EthTrcv_SetPhyTestMode API
*
*/
#define ETHTRCV_SET_PHY_TEST_MODE_API                   (STD_ON)

/**
* @brief Enables / Disables EthTrcvStartAutoNegotiationApi API
*
*/
#define ETHTRCV_START_AUTONEGOTIATION_API               (STD_ON)

/**
* @brief Enables / Disables  version info API
*
*/
#define ETHTRCV_VERSION_INFO_API                        (STD_ON)

/**
* @brief Enables / Disables version info API macro implementation
*
*/
#define ETHTRCV_VERSION_INFO_API_MACRO                  (STD_OFF)

/**
* @brief Configures wake-up to polling or interrupt or to not used/not supported
*
*/
#define ETHTRCV_WAKEUP_NOT_SUPPORTED                    (0U)

#define ETHTRCV_WAKEUP_BY_INTERRUPT                     (1U)

#define ETHTRCV_WAKEUP_BY_POLLING                       (2U)

#define ETHTRCV_WAKEUP_BY_ASYNCHRONOUS_CHECK            (3U)

#define ETHTRCV_WAKEUP_SUPPORT_TYPE                     (ETHTRCV_WAKEUP_NOT_SUPPORTED)

/**
* @brief Diagnostic Event switch
*
*/
#define ETHTRCV_DEM_EVENT_DETECT                        (STD_ON)

/**
* @brief The number of ECU partitions supported by EthTrcv driver
*
*/
#define ETHTRCV_NUM_ECU_PARTITIONS                      (3U)

/**
* @brief ECU partitions check switch
*
*/
#define ETHTRCV_CHECK_ECU_PARTITION                     (STD_ON)

#ifdef __cplusplus
}
#endif

#endif /* ETHTRCV_CFG_H */

/** @} */
