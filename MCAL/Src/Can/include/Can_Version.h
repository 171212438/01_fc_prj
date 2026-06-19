/**
*   @file    Can_Version.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CAN - driver API and development errors implemention.
*   @details AUTOSAR CAN - driver API and development errors implemention.
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
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
==================================================================================================*/
#ifndef CAN_VERSION_H
#define CAN_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifier does not differ from other macro identifier(s)
 * Reason: There are some similar MACRO name to compare the version */
#define CAN_VENDOR_ID                       174
#define CAN_MODULE_ID                       80
#define CAN_AR_RELEASE_MAJOR_VERSION        4
#define CAN_AR_RELEASE_MINOR_VERSION        6
#define CAN_AR_RELEASE_REVISION_VERSION     0
#define CAN_SW_MAJOR_VERSION                1
#define CAN_SW_MINOR_VERSION                5
#define CAN_SW_PATCH_VERSION                1
/* PRQA S 0791 --*/

#ifdef __cplusplus
}
#endif

#endif /*CAN_VERSION_H*/

/** @} */
