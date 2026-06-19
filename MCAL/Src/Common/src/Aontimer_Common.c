/**
 *   @file    Aontimer_Common.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Aontimer - common source file.
 *   @details Aontimer module common source file.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : AONTIMER
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3218 EOF
   File scope static, '%1s', is only accessed in one function.
   REASON: This is a normal usage.
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Common_Cfg.h"
#include "Aontimer_Reg.h"

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

#if ((defined ICU_AONTIMER_USED) && (defined GPT_AONTIMER_USED))
#error "ICU and GPT resource conflict for Aontimer hw unit"
#endif

#if ((defined ICU_AONTIMER_USED) && (defined OCU_AONTIMER_USED))
#error "ICU and OCU resource conflict for Aontimer hw unit"
#endif

#if ((defined GPT_AONTIMER_USED) && (defined OCU_AONTIMER_USED))
#error "GPT and OCU resource conflict for Aontimer hw unit"
#endif

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
 * @brief base address array for Aontimer
 */
/* PRQA S 0306 ++
   0306:Cast between a pointer to object and an integral type.
   REASON: This is the ENET base type initialization.
*/
COMMON_DATA_SECTION AONTIMER_Type *const AONTIMER_PTRS[AONTIMER_INSTANCE_COUNT] = { AONTIMER };
/* PRQA S 0306 -- */
#define COMMON_STOP_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
