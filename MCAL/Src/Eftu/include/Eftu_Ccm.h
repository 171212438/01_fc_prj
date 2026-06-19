/**
 *   @file    Eftu_Ccm.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - CCM driver header file.
 *   @details CCM header file, containing the variables and functions that are exported by the
 *            CCM driver.
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CCM
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
*   1.0.0       15/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_CCM_H
#define EFTU_CCM_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Ccm_Types.h"
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
#ifdef EFTU_GTOM_MUX_USED
/**
 * @brief Initialize GTOM MUX configuration
 *
 * @param pGtomMux Pointer to the GTOM MUX configuration structure
 */
EFTU_TEXT_SECTION void Eftu_Ccm_GtomMuxInit(const Eftu_CcmGtomMuxType *pGtomMux);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize GTOM Mux for EFTU Global CCM.
 *
 * This function resets the configuration of all GTOM Muxes to their default state.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_GtomMuxDeInit(void);
#endif /* EFTU_DEINIT_API */
#endif /* EFTU_GTOM_MUX_USED */
#ifdef EFTU_TRIGGER_MUX_USED
/**
 * @brief Initialize the trigger multiplexer configuration.
 *
 * This function configures the trigger multiplexer and enable registers based on the provided
 * configuration structure. It sets up the trigger routing and enables/disables specific triggers.
 *
 * @param pTrigMux Pointer to the trigger multiplexer configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_TrigMuxInit(const Eftu_CcmTrigMuxType *pTrigMux);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize the trigger multiplexer.
 *
 * This function resets the trigger multiplexer to its default state by disabling all triggers.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_TrigMuxDeInit(void);
#endif /* EFTU_DEINIT_API */
#endif /* EFTU_TRIGGER_MUX_USED */
#ifdef EFTU_CCM_USED
/**
 * @brief Initialize the global CCM (Clock Configuration Module) configuration.
 * @param pConfig Pointer to the CCM configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_Init(const Eftu_CcmConfigType *pConfig);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize the CCM module.
 *
 * This function de-initializes the CCM module by resetting the configuration of each CCM instance.
 *
 * @param pConfig Pointer to the CCM configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_DeInit(const Eftu_CcmConfigType *pConfig);
#endif /* EFTU_DEINIT_API */
#endif /* EFTU_CCM_USED */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* EFTU_CCM_H */
/** @} */
