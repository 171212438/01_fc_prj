/**
 *   @file    Eftu_Tom.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TOM driver header file.
 *   @details TOM header file, containing the variables and functions that are exported by the
 *            TOM driver.
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TOM
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
*   1.0.0       19/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_TOM_H
#define EFTU_TOM_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Tom_Types.h"
#include "CDD_Eftu_Cfg.h"
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
#ifdef EFTU_TOM_USED
/**
 * @brief Initialize TOM (Timer One Module) instances.
 * @param pConfig Pointer to the configuration structure containing instance configurations.
 */
EFTU_TEXT_SECTION void Eftu_Tom_Init(const Eftu_TomConfigType *pConfig);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize TOM instances.
 *
 * @param pConfig Pointer to the TOM configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Tom_DeInit(const Eftu_TomConfigType *pConfig);
#endif /* (EFTU_DEINIT_API == STD_ON) */
#endif /* (EFTU_TOM_USED) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* EFTU_TOM_H */
/** @} */
