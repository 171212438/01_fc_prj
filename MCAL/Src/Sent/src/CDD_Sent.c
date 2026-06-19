/**
 *   @file    CDD_SENT.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SENT - SENT Driver source file.
 *   @details SENT driver source file, containing the Autosar API specification
 * and other variables and functions that are exported by the SENT driver.
 *
 *   @addtogroup SENT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SENT
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       2023/11/01    Flagchip073   N/A          SENT Initial Version
*   0.2.0       2023/11/12    Flagchip073   N/A          SENT Multicore Version
*   0.3.0       2023/11/20    Flagchip073   N/A          Add more SENT comments
*   0.4.0       2023/11/23    Flagchip073   N/A          Add SCHM files for SENT
==================================================================================================*/
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives
 * or comments, in this case, the defined MACRO used to select different
 * parameter or code properties in memmap.h
 */

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
#include "CDD_Sent.h"
#include "Sent_Hal.h"
#if (SENT_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*==================================================================================================
 *                                      SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define SENT_VENDOR_ID_C                   174

#define SENT_AR_RELEASE_MAJOR_VERSION_C    4
#define SENT_AR_RELEASE_MINOR_VERSION_C    6
#define SENT_AR_RELEASE_REVISION_VERSION_C 0
#define SENT_SW_MAJOR_VERSION_C            1
#define SENT_SW_MINOR_VERSION_C            5
#define SENT_SW_PATCH_VERSION_C            1
/* PRQA S 791-- */
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

#define SENT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

/**
 * @brief          Global variable (pointer) used for storing the SENT driver
 * configuration data.
 */
SENT_DATA_SECTION const Sent_ConfigType *Sent_pConfig = NULL_PTR;

#define SENT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sent_MemMap.h"

#define SENT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Sent_MemMap.h"

/**
 * @brief          Global variable (pointer) used for containing the current
 * SENT driver state.
 */
/* PRQA S 3408, 1514 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be
 * visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not
 * be defined with external linkage if they are referenced in only one
 * translation unit. Reason: The variable does not have external linkage */
SENT_DATA_SECTION Sent_StatusType Sent_eInitStatus[SENT_ECUC_CORES_NUM] = { SENT_UNINIT };
/* PRQA S 3408, 1514 -- */

#define SENT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Sent_MemMap.h"
/*==================================================================================================
 *                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL FUNCTIONS
==================================================================================================*/
#define SENT_START_SEC_CODE
#include "Sent_MemMap.h"

#if (SENT_DEV_ERROR_DETECT == STD_ON)

LOCAL_INLINE Std_ReturnType Sent_ValidateCoreNum(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (u8CoreId >= SENT_ECUC_CORES_NUM)
    {
        (void)Det_ReportRuntimeError((uint16)SENT_MODULE_ID,
                                     (uint8)SENT_INSTANCE,
                                     (uint8)u8ServiceId,
                                     (uint8)SENT_E_PARTITION_MAPPING);
        valid = E_NOT_OK;
    }
#endif

    return valid;
}

LOCAL_INLINE Std_ReturnType Sent_ValidateInitStatus(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    valid = Sent_ValidateCoreNum(u8CoreId, u8ServiceId);

    if ((E_OK == valid) && (Sent_eInitStatus[u8CoreId] == SENT_UNINIT))
#else
    if (Sent_eInitStatus[0] == SENT_UNINIT)
#endif
    {
        (void)Det_ReportError((uint16)SENT_MODULE_ID,
                              SENT_INSTANCE,
                              (uint8)u8ServiceId,
                              (uint8)SENT_E_UNINIT_U8);
        valid = E_NOT_OK;
    }

    return valid;
}

/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the
 * calls for Sent_Init.
 *
 * @param[in]  u8CoreId The core id of the caller function
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK     The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  Sent_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Sent_ValidateGlobalCall(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if (SENT_INIT_ID_U8 == u8ServiceId) /* If caller is the initialization function, ok */
    {
        if (Sent_eInitStatus[u8CoreId] == SENT_INITIALIZED)
        {
            valid = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)SENT_MODULE_ID,
                                  SENT_INSTANCE,
                                  (uint8)u8ServiceId,
                                  SENT_E_ALREADY_INITIALIZED_U8);
        }
    }
    else if (SENT_DEINIT_ID_U8 == u8ServiceId)
    {
        if (Sent_eInitStatus[u8CoreId] != SENT_INITIALIZED)
        {
            valid = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)SENT_MODULE_ID,
                                  SENT_INSTANCE,
                                  (uint8)u8ServiceId,
                                  SENT_E_ALREADY_UNINITIALIZED_U8);
        }
    }
    else
    {
        /* do nothong */
    }

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
LOCAL_INLINE Std_ReturnType Sent_ValidatePtrInit(uint8 u8CoreId, const Sent_ConfigType *pConfigPtr)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (SENT_PRECOMPILE_SUPPORT == STD_OFF)
    if (NULL_PTR == pConfigPtr)
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SENT_MODULE_ID,
                              SENT_INSTANCE,
                              (uint8)SENT_INIT_ID_U8,
                              (uint8)SENT_E_INIT_FAILED_U8);
    }
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    else if ((u8CoreId >= SENT_ECUC_CORES_NUM) || (NULL_PTR == pConfigPtr->Sent_CoresMappingPtr) ||
             (NULL_PTR == pConfigPtr->Sent_CtrlCoresMappingPtr) ||
             (TRUE != pConfigPtr->Sent_CoresMappingPtr[u8CoreId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SENT_MODULE_ID,
                              SENT_INSTANCE,
                              (uint8)SENT_INIT_ID_U8,
                              (uint8)SENT_E_PARTITION_MAPPING);
    }
#else
    else
    {
        /* do nothing */
    }

    (void)u8CoreId;
#endif
#elif (SENT_PRECOMPILE_SUPPORT == STD_ON)
    if (NULL_PTR != pConfigPtr) /* Check if instance1 already initialized */
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SENT_MODULE_ID,
                              SENT_INSTANCE,
                              (uint8)SENT_INIT_ID_U8,
                              (uint8)SENT_E_INIT_FAILED_U8);
    }
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    else if ((u8CoreId >= SENT_ECUC_CORES_NUM) || (NULL_PTR == SentConfig.Sent_CoresMappingPtr) ||
             (NULL_PTR == SentConfig.Sent_CtrlCoresMappingPtr) ||
             (TRUE != SentConfig.Sent_CoresMappingPtr[u8CoreId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)SENT_MODULE_ID,
                              SENT_INSTANCE,
                              (uint8)SENT_INIT_ID_U8,
                              (uint8)SENT_E_PARTITION_MAPPING);
    }
    else
    {
        /* do nothing */
    }
#else
    else
    {
        /* do nothing */
    }

    (void)u8CoreId;
#endif
#endif

    return valid;
}

/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the
 * calls for Sent_Init.
 *
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  SENT_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Sent_ValidateControllerChannelIndex(uint8 u8CoreId,
                                                                uint8 u8Instance,
                                                                uint8 u8Channel,
                                                                uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    valid = Sent_ValidateInitStatus(u8CoreId, u8ServiceId);

    if (E_OK == valid)
    {
        if (u8Instance >= Sent_pConfig->u8InstanceCount)
        {
            (void)Det_ReportError((uint16)SENT_MODULE_ID,
                                  SENT_INSTANCE,
                                  (uint8)u8ServiceId,
                                  SENT_E_INVALID_CHANNEL_U8);
            valid = E_NOT_OK;
        }
        else
        {
            if (u8Channel >= Sent_pConfig->pSentInstanceCfg[u8Instance]->u8ChannelCount)
            {
                (void)Det_ReportError((uint16)SENT_MODULE_ID,
                                      SENT_INSTANCE,
                                      (uint8)u8ServiceId,
                                      SENT_E_INVALID_CHANNEL_U8);
                valid = E_NOT_OK;
            }
        }
    }

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
LOCAL_INLINE Std_ReturnType Sent_ValidateCommonPointer(const void *pPointer, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if (NULL_PTR == pPointer)
    {
        (void)Det_ReportError((uint16)SENT_MODULE_ID, SENT_INSTANCE, u8ServiceId, SENT_E_PARAM_U8);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}

#endif /* (SENT_DEV_ERROR_DETECT == STD_ON)*/

/*==================================================================================================
 *                                        GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief        Function that initializes the SENT module.
 * @details      This function sets the SENTCR register with the value of
 * "pConfigPtr" and set the channel's priority, ECP and DPA
 *
 * @param[in]    pConfigPtr - pointer to SENT configuration structure
 *
 * @return       void
 *
 */
SENT_TEXT_SECTION void Sent_Init(const Sent_ConfigType *pConfigPtr)
{
    uint8 sent_currentCore;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    sent_currentCore = GET_CPU_ID();
#else
    sent_currentCore = 0U;
#endif

#if (SENT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Sent_ValidateGlobalCall(sent_currentCore, SENT_INIT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Sent_ValidatePtrInit(sent_currentCore, pConfigPtr))
        {
#endif /* (SENT_DEV_ERROR_DETECT == STD_ON */

#if (SENT_PRECOMPILE_SUPPORT == STD_ON)
            Sent_pConfig = &SentConfig;

            (void)pConfigPtr;

#else
    Sent_pConfig = pConfigPtr;
#endif /* SENT_PRECOMPILE_SUPPORT */

            /* Init SENT HW module registers */
            Sent_Hal_Init(Sent_pConfig, sent_currentCore);
            Sent_eInitStatus[sent_currentCore] = SENT_INITIALIZED;

#if (SENT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

#if (SENT_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the SENT driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to
 * their power on reset state, and de-initialize the SENT driver.
 *
 * @return         void
 * @implements     SENT_DeInit_Activity
 */
SENT_TEXT_SECTION void Sent_DeInit(void)
{
    uint8 sent_currentCore;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    sent_currentCore = GET_CPU_ID();
#else
    sent_currentCore = 0U;
#endif

#if (SENT_DEV_ERROR_DETECT == STD_ON)
#if (SENT_SUPPORT_MULTICORE == STD_ON)
    if ((Std_ReturnType)E_OK == Sent_ValidateCoreNum(sent_currentCore, SENT_DEINIT_ID_U8))
    {
#endif
        if ((Std_ReturnType)E_OK == Sent_ValidateGlobalCall(sent_currentCore, SENT_DEINIT_ID_U8))
        {
#endif
            /* Set the global configuration pointer to NULL */
            /* Sent_pConfig = NULL_PTR; */

            Sent_Hal_DeInit(sent_currentCore);
            Sent_eInitStatus[sent_currentCore] = SENT_UNINIT;

#if (SENT_DEV_ERROR_DETECT == STD_ON)
#if (SENT_SUPPORT_MULTICORE == STD_ON)
        }
#endif
    }
#endif
}
#endif

#if (SENT_GET_VERSION_INFO_API == STD_ON)
/*===============================================================================================*/
/**
 * @brief   This service returns the version information of this module.
 * @details This  service is Non reentrant and returns the version information
 * of this module. The version information includes:
 *          - Module Id
 *          - Vendor Id
 *          - Vendor specific version numbers
 *          If source code for caller and callee of this function is available
 * this function should be realized as a macro. The macro should be defined in
 * the modules header file.
 *
 * @param[out]    pVersioninfo      Pointer to location to store version info
 *
 * @return void
 *
 * @api
 *
 * @implements SENT_GetVersionInfo_Activity
 *
 */
SENT_TEXT_SECTION void Sent_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if (SENT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Sent_ValidateCommonPointer(pVersioninfo, SENT_GETVERSIONINFO_ID_U8))
    {
#endif
        (pVersioninfo)->vendorID         = (uint16)SENT_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint8)SENT_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)SENT_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)SENT_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)SENT_SW_PATCH_VERSION;
#if (SENT_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* SENT_GET_VERSION_INFO_API == STD_ON */

/**
 * @brief   This service request the SPC pulse.
 * @details The transmission occurs depending on an SPC Pulse (a synchronization
 * signal) from the receiver module, and the SPC Pulse is implemented as a low
 * pulse. When the sensor receives the coordination signal from SOC and then it
 * starts transmitting the messages.
 *
 * @param[in]    u8ControllerID      The sent controller index
 * @param[in]    u8ChannelID         The sent channel index
 *
 * @return void
 *
 * @api
 *
 * @implements Sent_RequestSpcPulse_Activity
 *
 */
SENT_TEXT_SECTION void Sent_RequestSpcPulse(uint8 u8ControllerID, uint8 u8ChannelID)
{
    uint8 sent_currentCore;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    sent_currentCore = GET_CPU_ID();
#else
    sent_currentCore = 0U;
#endif

#if (SENT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Sent_ValidateControllerChannelIndex(sent_currentCore,
                                                                    u8ControllerID,
                                                                    u8ChannelID,
                                                                    SENT_REQUEST_SPC_ID_U8))
    {
        if ((FALSE == Sent_pConfig->pSentInstanceCfg[u8ControllerID]
                          ->pSentChannelCfg[u8ChannelID]
                          ->pSpcModeCfg->bSpcModeEn) ||
            (SENT_SPC_EXTERNAL_TRIGGER == Sent_pConfig->pSentInstanceCfg[u8ControllerID]
                                              ->pSentChannelCfg[u8ChannelID]
                                              ->pSpcModeCfg->eSpcTrigger))
        {
            (void)Det_ReportError((uint16)SENT_MODULE_ID,
                                  SENT_INSTANCE,
                                  (uint8)SENT_REQUEST_SPC_ID_U8,
                                  SENT_E_PARAM_U8);
        }
        else
        {
#endif /* (SENT_DEV_ERROR_DETECT == STD_ON */

            /* Init SENT HW module registers */
            (void)SENT_Hal_RequestSPCPulse(u8ControllerID, u8ChannelID, sent_currentCore);

#if (SENT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

/**
 * @brief   This function performs the polling of reading fast message when
 * FastMsgReadType is set to Polling.
 * @details If FastMsgReadType is set to Polling, should call this API in
 * period.
 *
 * @return void
 *
 * @api
 *
 * @implements Sent_MainFunctionFastMessageRead_Activity
 *
 */
SENT_TEXT_SECTION void Sent_MainFunctionFastMessageRead(void)
{
    uint8 sent_currentCore;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    sent_currentCore = GET_CPU_ID();
#else
    sent_currentCore = 0U;
#endif

#if (SENT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Sent_ValidateInitStatus(sent_currentCore, SENT_FAST_MSG_READ_ID_U8))
    {
#endif /* (SENT_DEV_ERROR_DETECT == STD_ON */

        /* Init SENT HW module registers */
        SENT_Hal_MainFunctionFastMsgRead(sent_currentCore);

#if (SENT_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

/**
 * @brief   This function performs the polling of reading Slow message when
 * SlowMsgReadType is set to Polling.
 * @details If SlowMsgReadType is set to Polling, should call this API in
 * period.
 *
 * @return void
 *
 * @api
 *
 * @implements Sent_MainFunctionSlowMessageRead_Activity
 *
 */
SENT_TEXT_SECTION void Sent_MainFunctionSlowMessageRead(void)
{
    uint8 sent_currentCore;

#if (SENT_SUPPORT_MULTICORE == STD_ON)
    sent_currentCore = GET_CPU_ID();
#else
    sent_currentCore = 0U;
#endif

#if (SENT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Sent_ValidateInitStatus(sent_currentCore, SENT_SLOW_MSG_READ_ID_U8))
    {
#endif /* (SENT_DEV_ERROR_DETECT == STD_ON */

        /* Init SENT HW module registers */
        SENT_Hal_MainFunctionSlowMsgRead(sent_currentCore);

#if (SENT_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

#define SENT_STOP_SEC_CODE
#include "Sent_MemMap.h"

/* End of file */
/** @} */
