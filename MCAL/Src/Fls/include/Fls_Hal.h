/**
 *   @file    Fls_Hal.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
 *   @details Definitions of Flash IP exported types.
 *
 *   @addtogroup Fls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       06/20/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/
#ifndef FLS_HAL_H
#define FLS_HAL_H

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fls.h"

/*==================================================================================================
                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

FLS_TEXT_SECTION void Fls_Hal_Init(void);

FLS_TEXT_SECTION void Fls_Hal_AbortSuspended(void);

FLS_TEXT_SECTION void Fls_Hal_Cancel(void);

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Erase(void);

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Write(const Fls_AddressType u32WriteAddr,
                                                 const Fls_AddressType u32Length,
                                                 const uint8          *pJobDataSrcPtr);

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Read(const Fls_AddressType u32ReadAddr,
                                                const Fls_AddressType u32Length,
                                                uint8                *pJobDataDestPtr);

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Compare(const Fls_AddressType u32CompareAddr,
                                                   const Fls_AddressType u32Length,
                                                   const uint8          *pJobDataSrcPtr);

FLS_TEXT_SECTION void Fls_Hal_LLDMainFunction(void);

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#endif /* FLS_HAL_H */
