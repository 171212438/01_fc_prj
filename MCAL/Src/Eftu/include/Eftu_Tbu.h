/**
 *   @file    Eftu_Tbu.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TBU driver header file.
 *   @details TBU header file, containing the variables and functions that are exported by the
 *            TBU driver.
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TBU
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
*   1.0.0       14/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_TBU_H
#define EFTU_TBU_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Tbu_Types.h"
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
#ifdef EFTU_TBU_USED
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
/**
 * @brief Initialize the TBU (Time Base Unit) with the provided configuration.
 *
 * @param pTbuConfig Pointer to the TBU configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Tbu_Init(const Eftu_TbuConfigType *pTbuConfig);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitializes the TBU (Time Base Unit) module.
 *
 * @param pTbuConfig Pointer to the TBU configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Tbu_DeInit(const Eftu_TbuConfigType *pTbuConfig);
#endif /* (EFTU_DEINIT_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#endif /* EFTU_TBU_USED */
#ifdef __cplusplus
}
#endif

#endif /* EFTU_TBU_H */
/** @} */
