/**
*   @file    Eth_Cfg.h
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
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
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
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

#ifndef ETH_CFG_H
#define ETH_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_PBcfg.h"
#include "Eth_CfgDefines.h"

/*==================================================================================================
*                                       VERSION INFORMATION
==================================================================================================*/

#define ETH_CFG_AR_RELEASE_MAJOR_VERSION            4
#define ETH_CFG_AR_RELEASE_MINOR_VERSION            6
#define ETH_CFG_AR_RELEASE_REVISION_VERSION         0
#define ETH_CFG_SW_MAJOR_VERSION                    1
#define ETH_CFG_SW_MINOR_VERSION                    5
#define ETH_CFG_SW_PATCH_VERSION                    1
#define ETH_CFG_VENDOR_ID                           174
#define ETH_CFG_MODULE_ID                           88

/*==================================================================================================
                                        FUNCTION PROTOTYPES
==================================================================================================*/

/**
* @brief                        The callback function to notify the fatal errors to the upper layer.
*
* @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
* @param[in] ErrType            The error type defined in Eth_FatalErrorType.
*
*/
extern void Eth_Fatal_Error_Callback(uint8 CtrlIdx, Eth_FatalErrorType ErrType);

#define ETH_FATAL_ERROR_NOTIFICATION(CtrlIdx,ErrType)   Eth_Fatal_Error_Callback(CtrlIdx,ErrType)

#ifdef __cplusplus
}
#endif

#endif /* ETH_CFG_H */

/** @} */
