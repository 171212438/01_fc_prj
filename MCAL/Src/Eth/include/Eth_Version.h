/**
*   @file    Eth_Version.h
*   @version 1.5.1

*   @brief   AUTOSAR ETH - version definition.
*   @details This file contains the ETH version definition.
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

#ifndef ETH_VERSION_H
#define ETH_VERSION_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/* [SWS_Eth_00006]Vendor ID and Version number included by Eth.h */
#define ETH_VENDOR_ID                   174
#define ETH_MODULE_ID                   88
#define ETH_AR_RELEASE_MAJOR_VERSION    4
#define ETH_AR_RELEASE_MINOR_VERSION    6
#define ETH_AR_RELEASE_REVISION_VERSION 0
#define ETH_SW_MAJOR_VERSION            1
#define ETH_SW_MINOR_VERSION            5
#define ETH_SW_PATCH_VERSION            1

#ifdef __cplusplus
}
#endif

#endif /*ETH_VERSION_H*/

/** @} */
