/**
 *   @file    Tpu_Common.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Tpu - common source file.
 *   @details Tpu module common source file.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TPU
*   PLATFORM             : Flagchip FC7XXX
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
*   0.7.0       12/04/2024    QXW0070       N/A          Initial Version
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Common_Cfg.h"
#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
#include "Tpu_E_Reg.h"
#include "Tpu_H_Reg.h"

#if (USE_GPT_MODULE == STD_ON)
#include "Gpt_Cfg.h"
#endif

#if (USE_ICU_MODULE == STD_ON)
#include "Icu_Cfg.h"
#endif

#if (USE_OCU_MODULE == STD_ON)
#include "Ocu_Cfg.h"
#endif

/*==================================================================================================
*                                       CONFLICT CHECKS
==================================================================================================*/
#if ((USE_GPT_MODULE == STD_ON) || (USE_ICU_MODULE == STD_ON) || (USE_OCU_MODULE == STD_ON))
#if ((defined ICU_TPU_USED) || (defined GPT_TPU_USED) || (defined OCU_TPU_USED))
#if ((defined ICU_TPU_USED) && (defined GPT_TPU_USED))
#error "ICU and GPT resource conflict for TPU hw unit"
#endif /*((defined ICU_TPU_USED) && (defined GPT_TPU_USED))*/

#if ((defined ICU_TPU_USED) && (defined OCU_TPU_USED))
#error "ICU and OCU resource conflict for TPU hw unit"
#endif

#if ((defined GPT_TPU_USED) && (defined OCU_TPU_USED))
#error "GPT and OCU resource conflict for TPU hw unit"
#endif
#endif /*((defined ICU_TPU_USED) || (defined GPT_TPU_USED) || (defined OCU_TPU_USED))*/

#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

#define COMMON_START_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
/**
 * @brief base address array for TPU engine side
 */
COMMON_DATA_SECTION TPU_E_Type *const TPU_E_PTRS[] = TPU_E_BASE_PTRS;
/**
 * @brief base address array for TPU host side
 */
COMMON_DATA_SECTION TPU_H_Type *const TPU_H_PTRS[] = TPU_H_BASE_PTRS;
#define COMMON_STOP_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"

#endif /* ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A)) */

#ifdef __cplusplus
}
#endif
/** @} */

