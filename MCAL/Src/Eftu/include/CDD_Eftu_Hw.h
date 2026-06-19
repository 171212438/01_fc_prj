/**
 *   @file    CDD_Eftu_Hw.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - EFTU SAR IP header file.
 *   @details EFTU global hardware driver API.
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : EFTU
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
*   1.0.0       14/11/2024    QXW0070       N/A          Mailbox Initial Version
==================================================================================================*/
#ifndef CDD_EFTU_HW_H
#define CDD_EFTU_HW_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Eftu.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
/**
 * @brief Initialize global hardware configuration.
 *
 * This function initializes different hardware modules based on the provided configuration pointer.
 * The initialization of specific modules is conditional on compile-time macros.
 *
 * @param pConfig Pointer to the global configuration structure containing module-specific
 * configurations.
 */
EFTU_TEXT_SECTION void Eftu_HW_Init(const Eftu_ConfigType *pConfig);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief De-initializes the hardware resources of the Eftu module.
 *
 * @param pConfig Pointer to the Eftu configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_HW_DeInit(const Eftu_ConfigType *pConfig);
#endif /* (EFTU_DEINIT_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* EFTU_HW_H */
/** @} */
