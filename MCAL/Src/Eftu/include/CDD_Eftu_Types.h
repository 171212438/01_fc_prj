/**
 *   @file    CDD_Eftu_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD_Eftu - driver API and development errors definition.
 *   @details This file contains the EFTU global driver API and development errors definition.
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
*   1.0.0       14/11/2024    QXW0070       N/A          EFTU Global Initial Version
==================================================================================================*/

#ifndef CDD_EFTU_TYPES_H
#define CDD_EFTU_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "CDD_Eftu_Cfg.h"
#include "Eftu_Tbu_Types.h"
#include "Eftu_Cmu_Types.h"
#include "Eftu_Ccm_Types.h"
#include "Eftu_Tom_Types.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Structure for Eftu Global Configuration
 *
 */
typedef struct
{
    Eftu_CcmConfigType  *pCcmConfig;     /*!< Pointer to Ccm module configuration */
    Eftu_TbuConfigType  *pTbuConfig;     /*!< Pointer to Tbu module configuration */
    Eftu_CmuConfigType  *pCmuConfig;     /*!< Pointer to Cmu module configuration */
    Eftu_CcmGtomMuxType *pGtomMuxConfig; /*!< Pointer to Ccm to Gtom multiplexer configuration */
    Eftu_CcmTrigMuxType *pTrigMuxConfig; /*!< Pointer to Ccm trigger multiplexer configuration */
    Eftu_TomConfigType  *pTomConfig;     /*!< Pointer to Tom module configuration */
} Eftu_ConfigType;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif
#endif /* CDD_EFTU_TYPES_H */

/** @} */
