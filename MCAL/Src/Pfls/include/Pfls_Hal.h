/**
 *   @file    Pfls_Hal.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pfls - AUTOSAR Module Flash Driver.
 *   @details Definitions of Flash IP exported types.
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
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
*   0.1.0       06/20/2023    QXW0054       N/A          Pfls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Pfls increases hardware operation mutex
==================================================================================================*/
#ifndef PFLS_HAL_H
#define PFLS_HAL_H

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Pfls.h"

/*==================================================================================================
                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

PFLS_TEXT_SECTION void Pfls_Hal_Init(void);

PFLS_TEXT_SECTION void Pfls_Hal_AbortSuspended(void);

PFLS_TEXT_SECTION void Pfls_Hal_Cancel(void);

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Erase(void);

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Write(const Pfls_AddressType u32WriteAddr,
                                                    const Pfls_AddressType u32Length,
                                                    const uint8           *pJobDataSrcPtr);

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Read(const Pfls_AddressType u32ReadAddr,
                                                   const Pfls_AddressType u32Length,
                                                   uint8                 *pJobDataDestPtr);

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Compare(const Pfls_AddressType u32CompareAddr,
                                                      const Pfls_AddressType u32Length,
                                                      const uint8           *pJobDataSrcPtr);

PFLS_TEXT_SECTION void Pfls_Hal_LLDMainFunction(void);

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#endif /* PFLS_HAL_H */
