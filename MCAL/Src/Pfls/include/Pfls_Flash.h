/**
 *   @file    Pfls_Flash.h
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
#ifndef PFLS_FLASH_H
#define PFLS_FLASH_H

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
#include "Pfls.h"
#include "Pfls_Types.h"
#include "Pfls_Flash_Types.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_WaitForOperationFinish(void);
PFLS_TEXT_SECTION void               Pfls_Flash_Init(void);

#if (PFLS_CANCEL_API == STD_ON)
PFLS_TEXT_SECTION void Pfls_Flash_Cancel(void);
#endif /* PFLS_CANCEL_API == STD_ON */

PFLS_TEXT_SECTION void Pfls_Flash_MainFunctionErase(void);
PFLS_TEXT_SECTION void Pfls_Flash_MainFunctionWrite(void);

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Erase(const Pfls_PhysicalSectorType ePhySector);
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Write(const Pfls_AddressType u32LogicAddr,
                                                      const Pfls_LengthType  u32DataLength,
                                                      const uint8 *const     pDataPtr);
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Read(const Pfls_AddressType u32LogicAddr,
                                                     Pfls_LengthType        u32DataLength,
                                                     uint8                 *pDataPtr);
#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON))
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Compare(const Pfls_AddressType u32LogicAddr,
                                                        const Pfls_LengthType  u32DataLength,
                                                        const uint8 *const     pDataPtr);
#endif

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* PFLS_FLASH_H */

/** @}*/
