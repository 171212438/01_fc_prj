/**
*   @file    Can_PBCfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Can Post-Build configuration - API
*   @details Contains the module configuration interface for Can driver.
*
*   @addtogroup CAN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
*   0.6.0       2024-03-31    QXW0112       N/A           Add FC7240 platform support
==================================================================================================*/
#ifndef CAN_PBCFG_H
#define CAN_PBCFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can_Cfg.h"

/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct
 * Reason: Some macro length are more than 31 */


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*
* @file           Can_PBcfg.c
*/
#define CAN_VENDOR_ID_PBCFG_CUR                    174
#define CAN_MODULE_ID_PBCFG_CUR                    80
#define CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_CUR     4
#define CAN_AR_RELEASE_MINOR_VERSION_PBCFG_CUR     6
#define CAN_AR_RELEASE_REVISION_VERSION_PBCFG_CUR  0
#define CAN_SW_MAJOR_VERSION_PBCFG_CUR             1
#define CAN_SW_MINOR_VERSION_PBCFG_CUR             5
#define CAN_SW_PATCH_VERSION_PBCFG_CUR             1



/* This macro defines the total of Hardware Object ( Message Buffer ) configured */
#define CAN_MAXMBCOUNT_PB   13U

/* PRQA S 0779 -- */

#ifdef __cplusplus
}
#endif


#endif /* CAN_PBCFG_H */
