/**
 *   @file    CDD_SSI.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SSI - SSI Driver source file.
 *   @details SSI driver source file, containing the Autosar API specification and other variables
 *              and functions that are exported by the SSI driver.
 *
 *   @addtogroup SSI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2025-2027 Flagchip Semiconductors Co., Ltd.
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
 *                                          INCLUDE FILES
 *  1) system and project includes
 *  2) needed interfaces from external units
 *  3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Ssi.h"
#include "Ssi_Hal.h"
#if (SSI_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*==================================================================================================
 *                                      SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SSI_VENDOR_ID_C                   174

#define SSI_AR_RELEASE_MAJOR_VERSION_C    4
#define SSI_AR_RELEASE_MINOR_VERSION_C    6
#define SSI_AR_RELEASE_REVISION_VERSION_C 0
#define SSI_SW_MAJOR_VERSION_C            1
#define SSI_SW_MINOR_VERSION_C            5
#define SSI_SW_PATCH_VERSION_C            1
/*==================================================================================================
 *                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
 *                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
 *                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                        GLOBAL VARIABLES
==================================================================================================*/

#define SSI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

/**
 * @brief          Global variable (pointer) used for storing the SSI driver configuration data.
 */
SSI_DATA_SECTION const Ssi_ConfigType *Ssi_pConfig = NULL_PTR;

#define SSI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ssi_MemMap.h"

#define SSI_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Ssi_MemMap.h"

/**
 * @brief          Global variable (pointer) used for containing the current SSI driver state.
 */
SSI_DATA_SECTION Ssi_StatusType Ssi_eInitStatus[SSI_ECUC_CORES_NUM] = { SSI_UNINIT };

#define SSI_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Ssi_MemMap.h"
/*==================================================================================================
 *                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL FUNCTIONS
==================================================================================================*/
#define SSI_START_SEC_CODE
#include "Ssi_MemMap.h"

#if (SSI_DEV_ERROR_DETECT == STD_ON)

LOCAL_INLINE Std_ReturnType Ssi_ValidateInitStatus(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (SSI_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (u8CoreId >= SSI_ECUC_CORES_NUM)
    {
        (void)Det_ReportError((uint16)SSI_MODULE_ID,
                              (uint8)SSI_INSTANCE,
                              (uint8)u8ServiceId,
                              (uint8)SSI_E_PARTITION_MAPPING);
        valid = E_NOT_OK;
    }
    else
    {
#else
    (void)u8CoreId;
#endif
        /* FUNC_Ssi_00033 SWDESG_SSI_008*/
        if (Ssi_eInitStatus[u8CoreId] == SSI_UNINIT)
        {
            (void)Det_ReportError((uint16)SSI_MODULE_ID,
                                  SSI_INSTANCE,
                                  (uint8)u8ServiceId,
                                  (uint8)SSI_E_UNINIT_U8);
            valid = E_NOT_OK;
        }
#if (SSI_SUPPORT_MULTICORE == STD_ON)
    }
#endif
    return valid;
}

/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the calls for Ssi_Init.
 *
 * @param[in]  u8CoreId The core id of the caller function
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK     The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  Ssi_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Ssi_ValidateGlobalCall(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (SSI_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (u8CoreId >= SSI_ECUC_CORES_NUM)
    {
        (void)Det_ReportError((uint16)SSI_MODULE_ID,
                              (uint8)SSI_INSTANCE,
                              (uint8)u8ServiceId,
                              (uint8)SSI_E_PARTITION_MAPPING);
        valid = E_NOT_OK;
    }
    else
    {
#else
    (void)u8CoreId;
#endif
        if (SSI_INIT_ID_U8 == u8ServiceId) /* If caller is the initialization function, ok */
        {
            /* FUNC_Ssi_00020  SWDESG_SSI_002 */
            if (Ssi_eInitStatus[u8CoreId] == SSI_INITIALIZED)
            {
                valid = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)SSI_MODULE_ID,
                                      SSI_INSTANCE,
                                      (uint8)u8ServiceId,
                                      SSI_E_ALREADY_INITIALIZED_U8);
            }
        }
        else if (SSI_DEINIT_ID_U8 == u8ServiceId)
        {
            /* FUNC_Ssi_00024 SWDESG_SSI_005 */
            if (Ssi_eInitStatus[u8CoreId] != SSI_INITIALIZED)
            {
                valid = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)SSI_MODULE_ID,
                                      SSI_INSTANCE,
                                      (uint8)u8ServiceId,
                                      SSI_E_ALREADY_UNINITIALIZED_U8);
            }
        }
        else
        {
            /* do nothong */
        }
#if (SSI_SUPPORT_MULTICORE == STD_ON)
    }
#endif
    return valid;
}

/**
 * @brief       This function validate the initialization pointer.
 *
 * @param[in]   pConfigPtr        Pointer to a selected configuration structure.
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
LOCAL_INLINE Std_ReturnType Ssi_ValidatePtrInit(uint8 u8CoreId, const Ssi_ConfigType *pConfigPtr)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (SSI_PRECOMPILE_SUPPORT == STD_OFF)
    /* FUNC_Ssi_00001 SWDESG_SSI_003 */
    if (NULL_PTR == pConfigPtr)
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SSI_MODULE_ID,
                              SSI_INSTANCE,
                              (uint8)SSI_INIT_ID_U8,
                              (uint8)SSI_E_INIT_FAILED_U8);
    }
#if (SSI_SUPPORT_MULTICORE == STD_ON)
    /* SWDESG_SSI_034 SWDESG_SSI_035*/
    else if ((NULL_PTR == pConfigPtr->Ssi_CoresMappingPtr) ||
             (NULL_PTR == pConfigPtr->Ssi_CtrlCoresMappingPtr) ||
             (TRUE != pConfigPtr->Ssi_CoresMappingPtr[u8CoreId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SSI_MODULE_ID,
                              SSI_INSTANCE,
                              (uint8)SSI_INIT_ID_U8,
                              (uint8)SSI_E_PARTITION_MAPPING);
    }
#endif
    else
    {
        /* do nothing */
    }

    (void)u8CoreId;

#else
    /* FUNC_Ssi_00001 SWDESG_SSI_003 */
    if (NULL_PTR != pConfigPtr) /* Check if instance1 already initialized */
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SSI_MODULE_ID,
                              SSI_INSTANCE,
                              (uint8)SSI_INIT_ID_U8,
                              (uint8)SSI_E_INIT_FAILED_U8);
    }
#if (SSI_SUPPORT_MULTICORE == STD_ON)
    /* SWDESG_SSI_034 SWDESG_SSI_035*/
    else if ((NULL_PTR == SsiConfig.SSI_CoresMappingPtr) ||
             (NULL_PTR == SsiConfig.SSI_CtrlCoresMappingPtr) ||
             (TRUE != SsiConfig.SSI_CoresMappingPtr[u8CoreId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SSI_MODULE_ID,
                              SSI_INSTANCE,
                              (uint8)SSI_INIT_ID_U8,
                              (uint8)SSI_E_PARTITION_MAPPING);
    }
#endif
    else
    {
        /* do nothing */
    }

    (void)u8CoreId;
#endif

    return valid;
}

/**
 * @brief       This function validates the common pointer parameter
 *
 * @param[in]   pPointer  Pointer to a buffer
 *
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
LOCAL_INLINE Std_ReturnType Ssi_ValidateCommonPointer(const void *pPointer, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    /* FUNC_Ssi_00030 SWDESG_SSI_006*/
    if (NULL_PTR == pPointer)
    {
        (void)Det_ReportError((uint16)SSI_MODULE_ID, SSI_INSTANCE, u8ServiceId, SSI_E_PARAM_U8);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}

#endif /* (SSI_DEV_ERROR_DETECT == STD_ON)*/

/*==================================================================================================
 *                                        GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief        Function that initializes the SSI module.
 * @details      This function sets the SSICR register with the value of "pConfigPtr" and set
 *               the channel's priority, ECP and DPA
 *
 * @param[in]    pConfigPtr - pointer to SSI configuration structure
 *
 * @return       void
 *
 * @implements     FUNC_Ssi_00012 FUNC_Ssi_00013 FUNC_Ssi_00021
 * 
 */
SSI_TEXT_SECTION void Ssi_Init(const Ssi_ConfigType *pConfigPtr)
{
    uint8 ssi_currentCore;

#if (SSI_SUPPORT_MULTICORE == STD_ON)
    ssi_currentCore = GET_CPU_ID();
#else
    ssi_currentCore = 0U;
#endif

#if (SSI_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Ssi_ValidateGlobalCall(ssi_currentCore, SSI_INIT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Ssi_ValidatePtrInit(ssi_currentCore, pConfigPtr))
        {
#endif /* (SSI_DEV_ERROR_DETECT == STD_ON */

#if (SSI_PRECOMPILE_SUPPORT == STD_ON)
            Ssi_pConfig = &SsiConfig;

            (void)pConfigPtr;

#else
    Ssi_pConfig = pConfigPtr;
#endif /* SSI_PRECOMPILE_SUPPORT */

            /* FUNC_Ssi_00014 FUNC_Ssi_00017 SWDESG_SSI_001 */
            /* Init SSI HW module registers */
            Ssi_Hal_Init(Ssi_pConfig, ssi_currentCore);
            Ssi_eInitStatus[ssi_currentCore] = SSI_INITIALIZED;

#if (SSI_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

/* FUNC_Ssi_00027 */
#if (SSI_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the SSI driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to their
 *                 power on reset state, and de-initialize the SSI driver.
 *
 * @return         void
 * @implements     FUNC_Ssi_00022 FUNC_Ssi_00026 FUNC_Ssi_00028
 * 
 * 
 */
SSI_TEXT_SECTION void Ssi_DeInit(void)
{
    uint8 ssi_currentCore;

#if (SSI_SUPPORT_MULTICORE == STD_ON)
    ssi_currentCore = GET_CPU_ID();
#else
    ssi_currentCore = 0U;
#endif

#if (SSI_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Ssi_ValidateGlobalCall(ssi_currentCore, SSI_DEINIT_ID_U8))
    {
#endif
        /* FUNC_Ssi_00023  SWDESG_SSI_004 */
        /* Set the global configuration pointer to NULL */
        /* Ssi_pConfig = NULL_PTR; */
        Ssi_Hal_DeInit(ssi_currentCore);
        Ssi_eInitStatus[ssi_currentCore] = SSI_UNINIT;

#if (SSI_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif

#if (SSI_GET_VERSION_INFO_API == STD_ON)
/*===============================================================================================*/
/**
 * @brief   This service returns the version information of this module.
 * @details This  service is Non reentrant and returns the version information of this module.
 *          The version information includes:
 *          - Module Id
 *          - Vendor Id
 *          - Vendor specific version numbers
 *          If source code for caller and callee of this function is available this function should
 *          be realized as a macro. The macro should be defined in the modules header file.
 *
 * @param[out]    pVersioninfo      Pointer to location to store version info
 *
 * @return void
 *
 * @api
 *
 * @implements FUNC_Ssi_00029 SWDESG_SSI_007
 *
 */
SSI_TEXT_SECTION void Ssi_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if (SSI_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Ssi_ValidateCommonPointer(pVersioninfo, SSI_GETVERSIONINFO_ID_U8))
    {
#endif
        (pVersioninfo)->vendorID         = (uint16)SSI_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint16)SSI_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)SSI_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)SSI_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)SSI_SW_PATCH_VERSION;
#if (SSI_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* SSI_GET_VERSION_INFO_API == STD_ON */

/**
 * @brief   This function performs the polling of reading fast message when FastMsgReadType is set
 * to Polling.
 * @details If FastMsgReadType is set to Polling, should call this API in period.
 *
 * @return void
 *
 * @api
 *
 * @implements FUNC_Ssi_00031 FUNC_Ssi_00032
 *
 */
SSI_TEXT_SECTION void Ssi_MainFunctionMessageRead(void)
{
    uint8 ssi_currentCore;

#if (SSI_SUPPORT_MULTICORE == STD_ON)
    ssi_currentCore = GET_CPU_ID();
#else
    ssi_currentCore = 0U;
#endif

#if (SSI_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Ssi_ValidateInitStatus(ssi_currentCore, SSI_MSG_READ_ID_U8))
    {
#endif /* (SSI_DEV_ERROR_DETECT == STD_ON */

        /* Init SSI HW module registers */
        Ssi_Hal_MainFunctionMsgRead(ssi_currentCore);

#if (SSI_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

#define SSI_STOP_SEC_CODE
#include "Ssi_MemMap.h"

/* End of file */
/** @} */
