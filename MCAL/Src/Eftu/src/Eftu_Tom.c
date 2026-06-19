/**
 *   @file    Eftu_Tom.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TOM driver source file.
 *   @details TOM source file, containing the variables and functions that are exported by the
 *            TOM driver.
 *
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
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Tom_Types.h"
#include "Eftu_Tom.h"
#include "Eftu_Tom_Reg.h"
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#ifdef EFTU_TOM_USED
#define EFTU_START_SEC_CONST_UNSPECIFIED
#include "Eftu_MemMap.h"
/* Defines a global static array that stores pointers to EFTU_TOM_Type. */
EFTU_DATA_SECTION static EFTU_TOM_Type *const TOM_PTRS[EFTU_INSTANCE_COUNT][EFTU_TOM_INSTANCE_COUNT] = {
    { EFTU_TOM_0_0, EFTU_TOM_0_1 },
    { EFTU_TOM_1_0, EFTU_TOM_1_1 },
    { EFTU_TOM_2_0, EFTU_TOM_2_1 }
};
#define EFTU_STOP_SEC_CONST_UNSPECIFIED
#include "Eftu_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
LOCAL_INLINE void EFTU_TOM_HWA_SetActionTimeBase(EFTU_TOM_Type *pTom, uint32 u32Value);
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Set the action time base for the EFTU TOM module.
 *
 * @param pTom Pointer to the EFTU_TOM_Type structure, representing the base address of the EFTU TOM
 * module.
 * @param u32Value The value to be written to the TGC_ACT_TB register to set the action time base.
 */
LOCAL_INLINE void EFTU_TOM_HWA_SetActionTimeBase(EFTU_TOM_Type *pTom, uint32 u32Value)
{
    /* Write the value to the TGC_ACT_TB register to set the action time base */
    pTom->TGC_ACT_TB = u32Value;
}
/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
/**
 * @brief Initialize TOM (Timer One Module) instances.
 * @param pConfig Pointer to the configuration structure containing instance configurations.
 */
EFTU_TEXT_SECTION void Eftu_Tom_Init(const Eftu_TomConfigType *pConfig)
{
    uint32 u32Loop;

    /* Loop through each TOM instance configuration */
    for (u32Loop = 0U; u32Loop < pConfig->u8InstanceCount; u32Loop++)
    {
        /* Get the configuration for the current instance */
        const Eftu_TomInsConfigType *pTomInsConfig = &pConfig->pTomConfig[u32Loop];

        /* Get the pointer to the TOM module based on the configuration */
        EFTU_TOM_Type *pTom = TOM_PTRS[pTomInsConfig->eEftuInstance][pTomInsConfig->eTomInstance];

        /* Set the action time base for the TOM module */
        EFTU_TOM_HWA_SetActionTimeBase(pTom,
                                       pTomInsConfig->u32TimeBaseValue |
                                           EFTU_TOM_TGC_ACT_TB_TBU_SEL(pTomInsConfig->eTbuSelection));
    }
}
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize TOM instances.
 *
 * @param pConfig Pointer to the TOM configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Tom_DeInit(const Eftu_TomConfigType *pConfig)
{
    uint32 u32Loop;

    /* Iterate through all configured TOM instances */
    for (u32Loop = 0U; u32Loop < pConfig->u8InstanceCount; u32Loop++)
    {
        /* Get the configuration information for the current TOM instance */
        const Eftu_TomInsConfigType *pTomInsConfig = &pConfig->pTomConfig[u32Loop];

        /* Get the base address of the current TOM instance */
        EFTU_TOM_Type *pTom = TOM_PTRS[pTomInsConfig->eEftuInstance][pTomInsConfig->eTomInstance];

        /* Set the action time base to 0, effectively stopping the TIMING function */
        EFTU_TOM_HWA_SetActionTimeBase(pTom, 0U);
    }
}
#endif /* (EFTU_DEINIT_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"

#endif
