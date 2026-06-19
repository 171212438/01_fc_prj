/**
*   @file    CDD_Eftu.c
*   @version 1.5.1

*   @brief   AUTOSAR Eftu - driver API and development errors implemention.
*   @details This file contains the EFTU global driver API and development errors implemention.
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
#include "CDD_Eftu_Version.h"
#include "CDD_Eftu_Types.h"
#include "CDD_Eftu.h"
#include "CDD_Eftu_Hw.h"

#if EFTU_DEV_ERROR_DETECT == STD_ON
#include "Det.h"
#endif
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Mailbox configuration header file are of the same Autosar version */
#if ((EFTU_AR_RELEASE_MAJOR_VERSION != EFTU_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (EFTU_AR_RELEASE_MINOR_VERSION != EFTU_CFG_AR_RELEASE_MINOR_VERSION) || \
     (EFTU_AR_RELEASE_REVISION_VERSION != EFTU_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of CDD_Eftu.h and CDD_Eftu_Cfg.h are different"
#endif

/* Check if current file and Mailbox configuration header file are of the same software version */
#if ((EFTU_SW_MAJOR_VERSION != EFTU_CFG_SW_MAJOR_VERSION) || \
     (EFTU_SW_MINOR_VERSION != EFTU_CFG_SW_MINOR_VERSION) || \
     (EFTU_SW_PATCH_VERSION != EFTU_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of CDD_EftuGloba.h and CDD_Eftu_Cfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
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
#ifdef EFTU_PRECOMPILE_SUPPORT
#define EFTU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Eftu_MemMap.h"

EFTU_DATA_SECTION extern const Eftu_ConfigType Eftu_Config;

#define EFTU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Eftu_MemMap.h"
#endif
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define EFTU_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Eftu_MemMap.h"
EFTU_DATA_SECTION static const Eftu_ConfigType *Eftu_Cfg_Ptr;
#define EFTU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Eftu_MemMap.h"
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
 * @brief Initialize the Eftu module
 *
 * This function initializes the Eftu module based on the provided configuration pointer.
 * Before initialization, it performs error checks to ensure the module has not been initialized
 * already, and that the provided configuration pointer is valid. [SWS_Eftu_00001][SWS_Eftu_00002]
 * [SWS_Eftu_00006]
 *
 * @param ConfigPtr Pointer to the Eftu configuration structure
 */
EFTU_TEXT_SECTION void Eftu_Init(const Eftu_ConfigType *ConfigPtr)
{
    /* Perform development error detection if EFTU_DEV_ERROR_DETECT is set to STD_ON */
#if (EFTU_DEV_ERROR_DETECT == STD_ON)
    /* Check if the module has already been initialized */
    if (NULL_PTR != Eftu_Cfg_Ptr)
    {
        /* Report an error if the module has already been initialized [SWS_Eftu_00005] */
        (void)Det_ReportError((uint16)EFTU_MODULE_ID,
                              (uint8)0U,
                              (uint8)EFTU_INIT_ID,
                              (uint8)EFTU_E_ALREADY_INITIALIZED);
    }
    /* Depending on whether precompile support is enabled, perform different checks [SWS_Eftu_00007] */
#ifdef EFTU_PRECOMPILE_SUPPORT
    else if (NULL_PTR != ConfigPtr)
#else
    else if (NULL_PTR == ConfigPtr)
#endif /* EFTU_PRECOMPILE_SUPPORT*/
    {
        /* Report an error if the configuration pointer is invalid */
        (void)Det_ReportError((uint16)EFTU_MODULE_ID,
                              (uint8)0U,
                              (uint8)EFTU_INIT_ID,
                              (uint8)EFTU_E_PARAM_CONFIG);
    }
    /* If no errors, proceed with initialization */
    else
#endif /* (EFTU_DEV_ERROR_DETECT == STD_ON) */
    {
        /* Depending on whether precompile support is enabled, perform different initialization logic */
#ifdef EFTU_PRECOMPILE_SUPPORT
        /* Initialize the module using the precompiled configuration */
        Eftu_Cfg_Ptr = &Eftu_Config;
        (void)ConfigPtr;
#else
        /* Initialize the module using the provided configuration pointer */
        Eftu_Cfg_Ptr = ConfigPtr;
#endif /* EFTU_PRECOMPILE_SUPPORT */
        /* Call the hardware initialization function [SWS_Eftu_00003] */
        Eftu_HW_Init(Eftu_Cfg_Ptr);
    }
}

#if (EFTU_DEINIT_API == STD_ON) /* [SWS_Eftu_00011][SWS_Eftu_00012][SWS_Eftu_00013] */
/**
 * @brief Deinitialize the Eftu module.
 *
 * This function deinitializes the Eftu module, including hardware deinitialization and resetting
 * the configuration pointer. If development error detection is enabled, it checks if the
 * configuration pointer is NULL. [SWS_Eftu_00008][SWS_Eftu_00009]
 */
EFTU_TEXT_SECTION void Eftu_DeInit(void)
{
#if (EFTU_DEV_ERROR_DETECT == STD_ON)
    /* Check if the module has been initialized */
    if (NULL_PTR == Eftu_Cfg_Ptr)
    {
        /* Report an uninitialized error [SWS_Eftu_00010] */
        (void)Det_ReportError((uint16)EFTU_MODULE_ID, 0U, (uint8)EFTU_DEINIT_ID, EFTU_E_UNINIT);
    }
    else
#endif /* EFTU_DEV_ERROR_DETECT */
    {
        /* Perform hardware deinitialization and reset the configuration pointer */
        Eftu_HW_DeInit(Eftu_Cfg_Ptr);
        Eftu_Cfg_Ptr = NULL_PTR;
    }
}
#endif /* EFTU_DEINIT_API == STD_ON */

#if (EFTU_GET_VERSION_INFO_API == STD_ON) /* [SWS_Eftu_00016][SWS_Eftu_00017] */
/**
 * @brief Get the module version information.
 *
 * This function fills the version information structure with the vendor ID, module ID,
 * software major version, minor version, and patch version.
 * If the development error detection is enabled and the provided pointer is NULL,
 * an error will be reported using Det_ReportError. [SWS_Eftu_00014]
 *
 * @param versioninfo Pointer to the version information structure to be filled.
 */
EFTU_TEXT_SECTION void Eftu_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (EFTU_DEV_ERROR_DETECT == STD_ON)
    /* Check if the version info pointer is NULL and report an error if it is
     * [SWS_Eftu_00015] */
    if (NULL_PTR == versioninfo)
    {
        (void)Det_ReportError((uint16)EFTU_MODULE_ID,
                              (uint8)0U,
                              (uint8)EFTU_GETVERSIONINFO_ID,
                              (uint8)EFTU_E_PARAM_VINFO);
    }
    else
#endif /* EFTU_DEV_ERROR_DETECT */
    {
        /* Fill the version information structure */
        (versioninfo)->vendorID         = (uint16)EFTU_VENDOR_ID;
        (versioninfo)->moduleID         = (uint16)EFTU_MODULE_ID;
        (versioninfo)->sw_major_version = (uint8)EFTU_SW_MAJOR_VERSION;
        (versioninfo)->sw_minor_version = (uint8)EFTU_SW_MINOR_VERSION;
        (versioninfo)->sw_patch_version = (uint8)EFTU_SW_PATCH_VERSION;
    }
}
#endif /* (EFTU_GET_VERSION_INFO_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef __cplusplus
}
#endif

/** @} */
