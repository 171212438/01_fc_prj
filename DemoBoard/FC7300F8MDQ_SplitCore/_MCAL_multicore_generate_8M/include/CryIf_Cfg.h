/**
*   @file    Cryif_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Cryif - Module configuration interface for Cryif driver.
*   @details Contains the module configuration interface for Cryif driver.
*
*   @addtogroup Cryif
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : HSM
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       15/02/2024    QXW0051       N/A          CRYPTO Initial Version
*   0.6.0       23/03/2024    QXW0071       N/A          Add Support For FC7240
==================================================================================================*/

#ifndef CRYIF_CFG_H
#define CRYIF_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           CryIf_cfg.h
*/
#define CRYIF_VENDOR_ID_CFG                    174U
#define CRYIF_AR_REL_MAJ_VER_CFG               4U
#define CRYIF_AR_REL_MIN_VER_CFG               6U
#define CRYIF_AR_REL_REV_VER_CFG               0U
#define CRYIF_SW_MAJOR_VERSION_CFG             1U
#define CRYIF_SW_MINOR_VERSION_CFG             5U
#define CRYIF_SW_PATCH_VERSION_CFG             1U
#define CRYIF_PRODUCT_ID_CFG                   51U
#define CRYIF_AR_MODULE_ID_CFG                 112U

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS - AUTOSAR
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS - NON-AUTOSAR
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        INCLUDE INTERNAL FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
*                                     FILE VERSION CHECKS - INTERNAL
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Switches the Development Error functionality ON or OFF.
* @details Switches the Development Error Detection and Notification ON or OFF.
*/
#define CRYIF_DEV_ERROR_DETECT            (STD_OFF)
/**
* @brief Switches the Version Information API functionality ON or OFF.
* @details Switches the Crypto_GetVersionInfo function ON or OFF.
*/
#define CRYIF_VERSION_INFO_API            (STD_OFF)

/**
* @brief Define number of crypto keys configured
* @details 
*/
#define CRYIF_MAXKEY_CONFIGURED           (1U)

/**
* @brief Define number of channels configured
* @details 
*/
#define CRYIF_MAXCHANNELS_CONFIGURED      (2U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* CRYIF_CFG_H */

/** @} */
