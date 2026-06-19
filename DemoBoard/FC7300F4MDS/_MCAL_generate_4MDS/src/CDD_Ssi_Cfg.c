/**
*   @file   CDD_Ssi_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR SSI - Data structures for the SSI driver.
*   @details Precompile structure configuration for the driver initalization.
*
*   @addtogroup SSI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Ssi_Cfg.h"
#include "CDD_Ssi.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file             CDD_Ssi_Cfg.c
* @requirements
*/
#define SSI_CFG_VENDOR_ID_C                     174
#define SSI_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define SSI_CFG_AR_RELEASE_MINOR_VERSION_C      6
#define SSI_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define SSI_CFG_SW_MAJOR_VERSION_C              1
#define SSI_CFG_SW_MINOR_VERSION_C              5
#define SSI_CFG_SW_PATCH_VERSION_C              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if config source file and SSI header file are of the same vendor */
#if (SSI_CFG_VENDOR_ID_C != SSI_VENDOR_ID)
#error "CDD_Ssi_Cfg.c and CDD_Ssi_Cfg.h have different vendor IDs"
#endif
/* Check if config source file and SSI header file are of the same Autosar version */
#if ((SSI_CFG_AR_RELEASE_MAJOR_VERSION_C != SSI_AR_RELEASE_MAJOR_VERSION) || \
     (SSI_CFG_AR_RELEASE_MINOR_VERSION_C != SSI_AR_RELEASE_MINOR_VERSION) || \
     (SSI_CFG_AR_RELEASE_REVISION_VERSION_C != SSI_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of CDD_Ssi_Cfg.c and CDD_Ssi.h are different"
#endif
/* Check if config source file and SSI header file are of the same Software version */
#if ((SSI_CFG_SW_MAJOR_VERSION_C != SSI_SW_MAJOR_VERSION) || \
     (SSI_CFG_SW_MINOR_VERSION_C != SSI_SW_MINOR_VERSION) || \
     (SSI_CFG_SW_PATCH_VERSION_C != SSI_SW_PATCH_VERSION))
#error "Software Version Numbers of CDD_Ssi_Cfg.c and CDD_Ssi.h are different"
#endif
/*==================================================================================================
                                       EXTRERN FUNCTIONS
==================================================================================================*/
#define SSI_START_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Ssi_MemMap.h"
/* PRQA S 5087 -- */

/**
* @brief         Statement of Ssi transfer complete ISR callout functions Configured.
*
**/

SSI_TEXT_SECTION extern void SsiNotification(Ssi_MessageDataType *pMsg);


#define SSI_STOP_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Ssi_MemMap.h"
/* PRQA S 5087 -- */
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                      LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
#define SSI_START_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Ssi_MemMap.h"
/* PRQA S 5087 -- */
/**
* @brief         Definition of SSI Subinstances transfer attribute as Configured.
* @details       SSI Notification functions defined inside the Plugin.
*
**/
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: it has no effect */
/* PRQA S 3408, 1504 -- */

/**
* @brief         Definition of SSI attribute as Configured.
* @details       Definition of SSI attribute as Configured.
*
**/


SSI_DATA_SECTION static const Ssi_SubinstanceConfigType SsiSubinstanceConfig_0_0 =
{
        0U,    /* Logic Ssi Subinstance ID */
        0U,    /* Hardware Ssi Subinstance ID */
        0U,    /* The general PWM timeout counter */
        (boolean)TRUE,    /* Sub-instance enable flag  */
        (boolean)TRUE,    /* Read message With Interrupt Type. */
        (boolean)TRUE,    /* Filter enable flag  */
        (boolean)FALSE,    /* Internal comparison enable flag  */
        (boolean)TRUE,    /* Windows range check enable flag   */
        (boolean)FALSE,    /* Invert the general PWM input enable flag */
        SSI_AK,    /* Protocol mode selection */
        SSI_DIGITAL_PAD,    /* Channel selection mode */
        SSI_RES_50OHM,    /* Resistance selection mode */
        SSI_INM_VLD,    /* Channel switch mode */
        &SsiNotification,    /* Ssi Notification. */
        15,    /* Filter width */
};

SSI_DATA_SECTION static const Ssi_SubinstanceConfigType* const aSubinstanceConfig_0[1] = {&SsiSubinstanceConfig_0_0};

SSI_DATA_SECTION static const Ssi_InstanceConfigType SsiInstanceConfig_0 =
{
    0U,    /* Logic Ssi Instance ID */
    0U,    /* Hardware Ssi Instance ID */
    1U,    /* The number of the configured subinstance */
    6U,    /* divider clock setting  */
    0U,    /* PWM Reference Pulse Width  */
    1U, /* AK Protocol Interval Error Threshold Configuration */
    1U, /* AK Protocol Period Error Threshold Configuration */
    0U, /* PWM Protocol Period Error Threshold Configuration */
    (boolean)TRUE, /* Controller enable flag */
    1U,    /* Low global window value  */
    16777215U,    /* High global window value  */
    (Ssi_SubinstanceConfigType**)aSubinstanceConfig_0,    /**< Pointer to an array of sub-instance
                                                       configurations */
};

SSI_DATA_SECTION static const Ssi_InstanceConfigType* const aInstanceConfig[1] = {&SsiInstanceConfig_0};
/*==================================================================================================*/



SSI_DATA_SECTION const Ssi_ConfigType SsiConfig =
{
        
        1U,    /* The number of the configured instance */
        (Ssi_InstanceConfigType**)aInstanceConfig,    /* The array of instance configuration */
        /* The driver is mapped in all partitions by default (no partition defined at EcuC level) */
        NULL_PTR,
        NULL_PTR

};


#define SSI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Ssi_MemMap.h"
/* PRQA S 5087 -- */
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

