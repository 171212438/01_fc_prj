/**
 *   @file    Fls_Flash.h
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
#ifndef FLS_FLASH_H
#define FLS_FLASH_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fls.h"
#include "Fls_Types.h"
#include "Fls_Flash_Types.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_WaitForOperationFinish(void);
FLS_TEXT_SECTION void              Fls_Flash_Init(void);

#if (FLS_CANCEL_API == STD_ON)
FLS_TEXT_SECTION void Fls_Flash_Cancel(void);
#endif /* FLS_CANCEL_API == STD_ON */

FLS_TEXT_SECTION void Fls_Flash_MainFunctionErase(void);
FLS_TEXT_SECTION void Fls_Flash_MainFunctionWrite(void);

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Erase(const Fls_PhysicalSectorType ePhySector);
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Write(const Fls_AddressType u32LogicAddr,
                                                   const Fls_LengthType  u32DataLength,
                                                   const uint8 *const    pDataPtr);
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Read(const Fls_AddressType u32LogicAddr,
                                                  Fls_LengthType        u32DataLength,
                                                  uint8                *pDataPtr);
#if ((FLS_COMPARE_API == STD_ON) || (FLS_BLANK_CHECK_API == STD_ON))
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Compare(const Fls_AddressType u32LogicAddr,
                                                     const Fls_LengthType  u32DataLength,
                                                     const uint8 *const    pDataPtr);
#endif

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* FLS_FLASH_H */

/** @}*/
