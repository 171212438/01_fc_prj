/**
*   @file    CDD_Eftu_Hw.c
*   @version 1.5.1

*   @brief   AUTOSAR Eftu - driver API and development errors implemention.
*   @details This file contains the Hw functions that are used by the EFTU global
*            driver.
*
*   @addtogroup Eftu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EFTU
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   1.0.0       14/11/2023    QXW0070       N/A          EFTU Global Initial Version
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Eftu_Hw.h"
#include "Eftu_Ccm.h"
#include "Eftu_Tbu.h"
#include "Eftu_Cmu.h"
#include "Eftu_Tom.h"
#include "CDD_Eftu_Cfg.h"

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
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"

/**
 * @brief Initialize global hardware configuration.
 *
 * This function initializes different hardware modules based on the provided configuration pointer.
 * The initialization of specific modules is conditional on compile-time macros. [SWS_Eftu_00004]
 *
 * @param pConfig Pointer to the global configuration structure containing module-specific
 * configurations.
 */
EFTU_TEXT_SECTION void Eftu_HW_Init(const Eftu_ConfigType *pConfig)
{
    /** Check and initialize CCM module if required */
#ifdef EFTU_CCM_USED
    if (NULL_PTR != pConfig->pCcmConfig)
    {
        Eftu_Ccm_Init(pConfig->pCcmConfig);
    }
#endif /* EFTU_CCM_USED */

    /** Check and initialize TBU module if required */
#ifdef EFTU_TBU_USED
    if (NULL_PTR != pConfig->pTbuConfig)
    {
        Eftu_Tbu_Init(pConfig->pTbuConfig);
    }
#endif /* EFTU_TBU_USED */

    /** Always initialize CMU module */
    Eftu_Cmu_Init(pConfig->pCmuConfig);

    /** Check and initialize GTOM MUX module if required */
#ifdef EFTU_GTOM_MUX_USED
    if (NULL_PTR != pConfig->pGtomMuxConfig)
    {
        Eftu_Ccm_GtomMuxInit(pConfig->pGtomMuxConfig);
    }
#endif /* EFTU_GTOM_MUX_USED */

    /** Check and initialize TRIGGER MUX module if required */
#ifdef EFTU_TRIGGER_MUX_USED
    if (NULL_PTR != pConfig->pTrigMuxConfig)
    {
        Eftu_Ccm_TrigMuxInit(pConfig->pTrigMuxConfig);
    }
#endif /* EFTU_TRIGGER_MUX_USED */

    /** Check and initialize TOM module if required */
#ifdef EFTU_TOM_USED
    if (NULL_PTR != pConfig->pTomConfig)
    {
        Eftu_Tom_Init(pConfig->pTomConfig);
    }
#endif /* EFTU_TOM_USED */
}

#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief De-initializes the hardware resources of the Eftu module.
 *
 * @param pConfig Pointer to the Eftu configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_HW_DeInit(const Eftu_ConfigType *pConfig)
{
    /* De-initialize CCM if used and configuration is valid */
#ifdef EFTU_CCM_USED
    if (NULL_PTR != pConfig->pCcmConfig)
    {
        Eftu_Ccm_DeInit(pConfig->pCcmConfig);
    }
#endif /* EFTU_CCM_USED */

    /* De-initialize TBU if used and configuration is valid */
#ifdef EFTU_TBU_USED
    if (NULL_PTR != pConfig->pTbuConfig)
    {
        Eftu_Tbu_DeInit(pConfig->pTbuConfig);
    }
#endif /* EFTU_TBU_USED */

    /* Unconditionally de-initialize CMU */
    Eftu_Cmu_DeInit();

    /* De-initialize GTOM MUX if used */
#ifdef EFTU_GTOM_MUX_USED
    Eftu_Ccm_GtomMuxDeInit();
#endif /* EFTU_GTOM_MUX_USED */

    /* De-initialize Trigger MUX if used */
#ifdef EFTU_TRIGGER_MUX_USED
    Eftu_Ccm_TrigMuxDeInit();
#endif /* EFTU_TRIGGER_MUX_USED */

    /* De-initialize TOM if used and configuration is valid */
#ifdef EFTU_TOM_USED
    if (NULL_PTR != pConfig->pTomConfig)
    {
        Eftu_Tom_DeInit(pConfig->pTomConfig);
    }
#endif /* EFTU_TOM_USED */
}
#endif /* EFTU_DEINIT_API == STD_ON */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef __cplusplus
}
#endif /* __cplusplus */
