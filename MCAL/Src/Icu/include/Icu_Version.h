/**
 *   @file    Icu_Version.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - version definition.
 *   @details This file contains the ICU version definition.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer Cmp
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024   QXW0076       N/A         add time stamp dma function
*   0.6.0       18/3/2024    QXW0076       N/A         verify timestamp dma feature && support for 7240.
==================================================================================================*/

#ifndef ICU_VERSION_H
#define ICU_VERSION_H
#ifdef __cplusplus
extern "C"
{
#endif

#define ICU_AR_RELEASE_MAJOR_VERSION    4
#define ICU_AR_RELEASE_MINOR_VERSION    6
#define ICU_AR_RELEASE_REVISION_VERSION 0
#define ICU_SW_MAJOR_VERSION            1
#define ICU_SW_MINOR_VERSION            5
#define ICU_SW_PATCH_VERSION            1
#define ICU_VENDOR_ID                   0xAE
#define ICU_MODULE_ID                   122

#ifdef __cplusplus
}
#endif

#endif /*ICU_VERSION_H*/

/** @} */
