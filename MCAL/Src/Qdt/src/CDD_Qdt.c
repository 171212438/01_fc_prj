/**
 *   @file    CDD_QDT.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR QDT - QDT Driver source file.
 *   @details QDT driver source file, containing the Autosar API specification and other variables
 *              and functions that are exported by the QDT driver.
 *
 *   @addtogroup QDT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : QDT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2025 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       2025/03/12    Flagchip073   N/A          QDT Initial Version
==================================================================================================*/
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this
 * case, the defined MACRO used to select different parameter or code properties in memmap.h
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
#include "CDD_Qdt.h"
#include "Qdt_Hal.h"
#if (QDT_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*==================================================================================================
 *                                      SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define QDT_VENDOR_ID_C                   174

#define QDT_AR_RELEASE_MAJOR_VERSION_C    4
#define QDT_AR_RELEASE_MINOR_VERSION_C    6
#define QDT_AR_RELEASE_REVISION_VERSION_C 0
#define QDT_SW_MAJOR_VERSION_C            1
#define QDT_SW_MINOR_VERSION_C            5
#define QDT_SW_PATCH_VERSION_C            1
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

#define QDT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

/**
 * @brief          Global variable (pointer) used for storing the QDT driver configuration data.
 */
QDT_DATA_SECTION const QDT_ConfigType *Qdt_pConfig = NULL_PTR;

#define QDT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"

#define QDT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Qdt_MemMap.h"

/**
 * @brief          Global variable (pointer) used for containing the current QDT driver state.
 */
/* PRQA S 3408, 1514 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an
 * object or function with external linkage is defined. #Misra-C:2012 Rule-8.7 Functions and objects
 * should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: The variable does not have external linkage */
QDT_DATA_SECTION QDT_StatusType Qdt_eInitStatus[QDT_ECUC_CORES_NUM] = { QDT_UNINIT };
/* PRQA S 3408, 1514 -- */

#define QDT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Qdt_MemMap.h"
/*==================================================================================================
 *                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL FUNCTIONS
==================================================================================================*/
#define QDT_START_SEC_CODE
#include "Qdt_MemMap.h"

#if (QDT_DEV_ERROR_DETECT == STD_ON)

LOCAL_INLINE Std_ReturnType Qdt_ValidateInitStatus(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (u8CoreId >= QDT_ECUC_CORES_NUM)
    {
        (void)Det_ReportRuntimeError((uint16)QDT_MODULE_ID,
                                     (uint8)QDT_INSTANCE,
                                     (uint8)u8ServiceId,
                                     (uint8)QDT_E_PARTITION_MAPPING);
        valid = E_NOT_OK;
    }
#else
    (void)u8CoreId;
#endif
    /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1.4 Apparent: Dereference of an invalid pointer value.
     *  2842:Apparent: Dereference of an invalid pointer value.
     *  REASON:The CoreID is from ECUM, won't be out of the range.
     */
    if (Qdt_eInitStatus[u8CoreId] == QDT_UNINIT)
    {
        (void)Det_ReportError((uint16)QDT_MODULE_ID,
                              QDT_INSTANCE,
                              (uint8)u8ServiceId,
                              (uint8)QDT_E_UNINIT_U8);
        valid = E_NOT_OK;
    }
    /* PRQA S 2842 -- */
    return valid;
}

/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the calls for Qdt_Init.
 *
 * @param[in]  u8CoreId The core id of the caller function
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK     The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  Qdt_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Qdt_ValidateGlobalCall(uint8 u8CoreId, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if (QDT_INIT_ID_U8 == u8ServiceId) /* If caller is the initialization function, ok */
    {
        if (Qdt_eInitStatus[u8CoreId] == QDT_INITIALIZED)
        {
            valid = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                  QDT_INSTANCE,
                                  (uint8)u8ServiceId,
                                  QDT_E_ALREADY_INITIALIZED_U8);
        }
    }
    else if (QDT_DEINIT_ID_U8 == u8ServiceId)
    {
        if (Qdt_eInitStatus[u8CoreId] != QDT_INITIALIZED)
        {
            valid = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                  QDT_INSTANCE,
                                  (uint8)u8ServiceId,
                                  QDT_E_ALREADY_UNINITIALIZED_U8);
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
LOCAL_INLINE Std_ReturnType Qdt_ValidatePtrInit(uint8 u8CoreId, const QDT_ConfigType *pConfigPtr)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (QDT_PRECOMPILE_SUPPORT == STD_OFF)
    if (NULL_PTR == pConfigPtr)
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)QDT_MODULE_ID,
                              QDT_INSTANCE,
                              (uint8)QDT_INIT_ID_U8,
                              (uint8)QDT_E_INIT_FAILED_U8);
    }
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    else if ((u8CoreId >= QDT_ECUC_CORES_NUM) || (NULL_PTR == pConfigPtr->Qdt_CoresMappingPtr) ||
             (NULL_PTR == pConfigPtr->Qdt_CtrlCoresMappingPtr) ||
             (TRUE != pConfigPtr->Qdt_CoresMappingPtr[u8CoreId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)QDT_MODULE_ID,
                              QDT_INSTANCE,
                              (uint8)QDT_INIT_ID_U8,
                              (uint8)QDT_E_PARTITION_MAPPING);
    }
#else
    else
    {
        /* do nothing */
    }

    (void)u8CoreId;
#endif
#elif (QDT_PRECOMPILE_SUPPORT == STD_ON)
    if (NULL_PTR != pConfigPtr) /* Check if instance1 already initialized */
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)QDT_MODULE_ID,
                              QDT_INSTANCE,
                              (uint8)QDT_INIT_ID_U8,
                              (uint8)QDT_E_INIT_FAILED_U8);
    }
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    else if ((u8CoreId >= QDT_ECUC_CORES_NUM) || (NULL_PTR == QdtConfig.Qdt_CoresMappingPtr) ||
             (NULL_PTR == QdtConfig.Qdt_CtrlCoresMappingPtr) ||
             (TRUE != QdtConfig.Qdt_CoresMappingPtr[u8CoreId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)QDT_MODULE_ID,
                              QDT_INSTANCE,
                              (uint8)QDT_INIT_ID_U8,
                              (uint8)QDT_E_PARTITION_MAPPING);
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
 * @details    This service is a non reentrant function used for validating the calls for Qdt_Init.
 *
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  QDT_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Qdt_ValidateControllerChannelIndex(uint8 u8CoreId,
                                                               uint8 u8Instance,
                                                               uint8 u8Channel,
                                                               uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    valid = Qdt_ValidateInitStatus(u8CoreId, u8ServiceId);

    if (E_OK == valid)
    {
        if (u8Instance >= Qdt_pConfig->u8InstanceCount)
        {
            (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                  QDT_INSTANCE,
                                  (uint8)u8ServiceId,
                                  QDT_E_INVALID_CHANNEL_U8);
            valid = E_NOT_OK;
        }
        else
        {
            if (u8Channel >= Qdt_pConfig->pQdtInstanceCfg[u8Instance]->u8ChannelCount)
            {
                (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                      QDT_INSTANCE,
                                      (uint8)u8ServiceId,
                                      QDT_E_INVALID_CHANNEL_U8);
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
LOCAL_INLINE Std_ReturnType Qdt_ValidateCommonPointer(const void *pPointer, uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if (NULL_PTR == pPointer)
    {
        (void)Det_ReportError((uint16)QDT_MODULE_ID, QDT_INSTANCE, u8ServiceId, QDT_E_PARAM_U8);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}

#endif /* (QDT_DEV_ERROR_DETECT == STD_ON)*/

/*==================================================================================================
 *                                        GLOBAL FUNCTIONS
==================================================================================================*/

/*!
 * @brief        Function that initializes the QDT module.
 * @details      This function sets the QDTCR register with the value of "pConfigPtr" and set
 *               the channel's priority, ECP and DPA
 *
 * @param[in]    pConfigPtr - pointer to QDT configuration structure
 *
 * @return       void
 * [FUNC_Qdt_00026] [SWDES_Qdt_0023]
 */
QDT_TEXT_SECTION void Qdt_Init(const QDT_ConfigType *pConfigPtr)
{
    uint8 qdt_currentCore;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00032] [SWDES_Qdt_0029] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateGlobalCall(qdt_currentCore, QDT_INIT_ID_U8))
    {
        /* [FUNC_Qdt_00033] [SWDES_Qdt_0030] */
        if ((Std_ReturnType)E_OK == Qdt_ValidatePtrInit(qdt_currentCore, pConfigPtr))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */
/* [FUNC_Qdt_00027] [SWDES_Qdt_0024] */
#if (QDT_PRECOMPILE_SUPPORT == STD_ON)
            Qdt_pConfig = &QdtConfig;

            (void)pConfigPtr;

#else
    Qdt_pConfig = pConfigPtr;
#endif /* QDT_PRECOMPILE_SUPPORT */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00028] [SWDES_Qdt_0025] */
            QDT_Hal_Init(Qdt_pConfig, qdt_currentCore);
            Qdt_eInitStatus[qdt_currentCore] = QDT_INITIALIZED;

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

/* [FUNC_Qdt_00038] [SWDES_Qdt_0035] */
/* [FUNC_Qdt_00039] [SWDES_Qdt_0036] */
#if (QDT_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the QDT driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to their
 *                 power on reset state, and de-initialize the QDT driver.
 *
 * @return         void
 * @implements     QDT_DeInit_Activity
 * [FUNC_Qdt_00034] [SWDES_Qdt_0031]
 */
QDT_TEXT_SECTION void Qdt_DeInit(void)
{
    uint8 qdt_currentCore;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    if (qdt_currentCore >= QDT_ECUC_CORES_NUM)
    {
        (void)Det_ReportRuntimeError((uint16)QDT_MODULE_ID,
                                     (uint8)QDT_INSTANCE,
                                     (uint8)QDT_DEINIT_ID_U8,
                                     (uint8)QDT_E_PARTITION_MAPPING);
    }
    else
    {
#endif
        /* [FUNC_Qdt_00036] [SWDES_Qdt_0033] */
        if ((Std_ReturnType)E_OK == Qdt_ValidateGlobalCall(qdt_currentCore, QDT_DEINIT_ID_U8))
        {
#endif
            /* Set the global configuration pointer to NULL */
            /* Qdt_pConfig = NULL_PTR; */
            /* [FUNC_Qdt_00035] [SWDES_Qdt_0032] */
            QDT_Hal_DeInit(qdt_currentCore);
            /* [FUNC_Qdt_00040] [SWDES_Qdt_0037] */
            Qdt_eInitStatus[qdt_currentCore] = QDT_UNINIT;

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif
}
#endif

#if (QDT_GET_VERSION_INFO_API == STD_ON)
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
 * @implements QDT_GetVersionInfo_Activity
 * [FUNC_Qdt_00041] [SWDES_Qdt_0038]
 */
QDT_TEXT_SECTION void Qdt_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00042] [SWDES_Qdt_0039] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pVersioninfo, QDT_GETVERSIONINFO_ID_U8))
    {
#endif
        (pVersioninfo)->vendorID         = (uint16)QDT_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint8)QDT_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)QDT_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)QDT_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)QDT_SW_PATCH_VERSION;
#if (QDT_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* QDT_GET_VERSION_INFO_API == STD_ON */

/**
 * @brief This service Re-start a measurement in Single Measurement Mode.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00043] [SWDES_Qdt_0040]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_ReStartMeasurement(uint8 u8ControllerID, uint8 u8ChannelID)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Qdt_ValidateControllerChannelIndex(qdt_currentCore,
                                                                   u8ControllerID,
                                                                   u8ChannelID,
                                                                   QDT_RESTART_MEASUREMENT_ID_U8))
    {
        /* [FUNC_Qdt_00044] [SWDES_Qdt_0041] */
        /* [FUNC_Qdt_00045] [SWDES_Qdt_0042] */
        if ((QDT_CHANNEL_ICDM_MODE >
             Qdt_pConfig->pQdtInstanceCfg[u8ControllerID]->pQdtChannelCfg[u8ChannelID]->eChannelMode) ||
            (QDT_CHANNEL_ICEXPENM_MODE <
             Qdt_pConfig->pQdtInstanceCfg[u8ControllerID]->pQdtChannelCfg[u8ChannelID]->eChannelMode) ||
            (FALSE != Qdt_pConfig->pQdtInstanceCfg[u8ControllerID]
                          ->pQdtChannelCfg[u8ChannelID]
                          ->uMode.pICDMConfig->bContinueMeasure))
        {
            (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                  QDT_INSTANCE,
                                  (uint8)QDT_RESTART_MEASUREMENT_ID_U8,
                                  QDT_E_PARAM_U8);
        }
        else
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00046] [SWDES_Qdt_0043] */
            eRet = QDT_Hal_ReStartMeasurement(u8ControllerID, u8ChannelID, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the channel flag, used for polling method.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 * @param[out]   pSet                The pointer of getting if the flag is set.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00047] [SWDES_Qdt_0044]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetChannelFlag(uint8    u8ControllerID,
                                                   uint8    u8ChannelID,
                                                   boolean *pSet)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00048] [SWDES_Qdt_0045] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pSet, QDT_GET_CHANNEL_FLAG_ID_U8))
    {
        if ((Std_ReturnType)E_OK ==
            Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_CHANNEL_FLAG_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00050] [SWDES_Qdt_0047] */
            eRet = QDT_Hal_GetChannelFlag(u8ControllerID, u8ChannelID, pSet, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service clear the channel flag, used for polling method.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00051] [SWDES_Qdt_0047]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_ClearChannelFlag(uint8 u8ControllerID, uint8 u8ChannelID)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_CLEAR_CHANNEL_FLAG_ID_U8))
    {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

        /* Init QDT HW module registers */
        /* [FUNC_Qdt_00052] [SWDES_Qdt_0048] */
        eRet = QDT_Hal_ClearChannelFlag(u8ControllerID, u8ChannelID, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    }
#endif

    return eRet;
}

/**
 * @brief This service get the edge number value in ICENM Mode.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 * @param[out]   pNumber             The pointer of getting the edge number value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00053] [SWDES_Qdt_0049]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetEdgeNumber(uint8   u8ControllerID,
                                                  uint8   u8ChannelID,
                                                  uint32 *pNumber)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00054] [SWDES_Qdt_0050] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pNumber, QDT_GET_EDGE_NUMBER_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_EDGE_NUMBER_ID_U8))
        {
            if (QDT_CHANNEL_ICENM_MODE !=
                Qdt_pConfig->pQdtInstanceCfg[u8ControllerID]->pQdtChannelCfg[u8ChannelID]->eChannelMode)
            {
                (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                      QDT_INSTANCE,
                                      (uint8)QDT_GET_EDGE_NUMBER_ID_U8,
                                      QDT_E_PARAM_U8);
            }
            else
            {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */
                /* [FUNC_Qdt_00055] [SWDES_Qdt_0051] */
                eRet = QDT_Hal_GetEdgeNumber(u8ControllerID, u8ChannelID, pNumber, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the CV counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 * @param[out]   pCV                 The pointer of getting the CV counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00056] [SWDES_Qdt_0052]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetCV(uint8 u8ControllerID, uint8 u8ChannelID, uint32 *pCV)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00057] [SWDES_Qdt_0053] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pCV, QDT_GET_CV_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_CV_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00058] [SWDES_Qdt_0054] */
            eRet = QDT_Hal_GetCV(u8ControllerID, u8ChannelID, pCV, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the REV counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pREVCNT             The pointer of getting the REV counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00059] [SWDES_Qdt_0055]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetREVCNT(uint8 u8ControllerID, uint32 *pREVCNT)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00060] [SWDES_Qdt_0056] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pREVCNT, QDT_GET_REVCNT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_REVCNT_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00061] [SWDES_Qdt_0057] */
            eRet = QDT_Hal_GetREVCNT(u8ControllerID, pREVCNT, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the REV HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pREVCNTH            The pointer of getting the REV HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00062] [SWDES_Qdt_0058]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetREVCNT_HOLD(uint8 u8ControllerID, uint32 *pREVCNTH)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00063] [SWDES_Qdt_0059] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pREVCNTH, QDT_GET_REVCNT_HOLD_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_REVCNT_HOLD_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00064] [SWDES_Qdt_0060] */
            eRet = QDT_Hal_GetREVCNT_HOLD(u8ControllerID, pREVCNTH, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the POS counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSCNT             The pointer of getting the POS counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00065] [SWDES_Qdt_0061]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetPOSCNT(uint8 u8ControllerID, uint32 *pPOSCNT)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00066] [SWDES_Qdt_0062] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pPOSCNT, QDT_GET_POSCNT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSCNT_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00067] [SWDES_Qdt_0063] */
            eRet = QDT_Hal_GetPOSCNT(u8ControllerID, pPOSCNT, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service reset the POS counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_ResetPOSCNT(uint8 u8ControllerID)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSCNT_ID_U8))
    {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

        eRet = QDT_Hal_ResetPOSCNT(u8ControllerID, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    }
#endif

    return eRet;
}

/**
 * @brief This service get the POS HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSCNTH            The pointer of getting the POS HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00068] [SWDES_Qdt_0064]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetPOSCNT_HOLD(uint8 u8ControllerID, uint32 *pPOSCNTH)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00069] [SWDES_Qdt_0065] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pPOSCNTH, QDT_GET_POSCNT_HOLD_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSCNT_HOLD_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00070] [SWDES_Qdt_0066] */
            eRet = QDT_Hal_GetPOSCNT_HOLD(u8ControllerID, pPOSCNTH, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the POS DIFF counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDCNT            The pointer of getting the POS DIFF counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00071] [SWDES_Qdt_0067]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetPOSDCNT(uint8 u8ControllerID, uint32 *pPOSDCNT)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00072] [SWDES_Qdt_0068] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pPOSDCNT, QDT_GET_POSDCNT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSDCNT_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00073] [SWDES_Qdt_0069] */
            eRet = QDT_Hal_GetPOSDCNT(u8ControllerID, pPOSDCNT, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the POS DIFF HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDCNTH           The pointer of getting the POS DIFF HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00074] [SWDES_Qdt_0070]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetPOSDCNT_HOLD(uint8 u8ControllerID, uint32 *pPOSDCNTH)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00075] [SWDES_Qdt_0071] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pPOSDCNTH, QDT_GET_POSDCNT_HOLD_ID_U8))
    {
        if ((Std_ReturnType)E_OK ==
            Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSDCNT_HOLD_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00076] [SWDES_Qdt_0072] */
            eRet = QDT_Hal_GetPOSDCNT_HOLD(u8ControllerID, pPOSDCNTH, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the LE counter value.
 *
 * @param pSentHandle  The structure of the QDT processing handle.
 * @param pLECNT The pointer of getting the LE counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00077] [SWDES_Qdt_0073]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetLECNT(uint8 u8ControllerID, uint32 *pLECNT)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00078] [SWDES_Qdt_0074] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pLECNT, QDT_GET_LECNT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_LECNT_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00079] [SWDES_Qdt_0075] */
            eRet = QDT_Hal_GetLECNT(u8ControllerID, pLECNT, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the LE HOLD counter value.
 *
 * @param pSentHandle  The structure of the QDT processing handle.
 * @param pLECNTH      The pointer of getting the LE HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00080] [SWDES_Qdt_0076]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetLECNT_HOLD(uint8 u8ControllerID, uint32 *pLECNTH)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00081] [SWDES_Qdt_0077] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pLECNTH, QDT_GET_LECNT_HOLD_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_LECNT_HOLD_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00082] [SWDES_Qdt_0078] */
            eRet = QDT_Hal_GetLECNT_HOLD(u8ControllerID, pLECNTH, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the POSDTMR counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDTMRCNT         The pointer of getting the POSDTMR counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00080] [SWDES_Qdt_0076]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetPOSDTMRCNT(uint8 u8ControllerID, uint32 *pPOSDTMRCNT)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00081] [SWDES_Qdt_0077] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pPOSDTMRCNT, QDT_GET_POSDTMRCNT_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSDTMRCNT_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00082] [SWDES_Qdt_0078] */
            eRet = QDT_Hal_GetPOSDTMRCNT(u8ControllerID, pPOSDTMRCNT, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the POSDTMR HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDTMRCNTH        The pointer of getting the POSDTMR HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00083] [SWDES_Qdt_0079]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetPOSDTMRCNT_HOLD(uint8 u8ControllerID, uint32 *pPOSDTMRCNTH)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00084] [SWDES_Qdt_0080] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pPOSDTMRCNTH, QDT_GET_POSDTMRCNT_HOLD_ID_U8))
    {
        if ((Std_ReturnType)E_OK ==
            Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_POSDTMRCNT_HOLD_ID_U8))
        {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

            /* Init QDT HW module registers */
            /* [FUNC_Qdt_00085] [SWDES_Qdt_0081] */
            eRet = QDT_Hal_GetPOSDTMRCNT_HOLD(u8ControllerID, pPOSDTMRCNTH, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif

    return eRet;
}

/**
 * @brief This service get the speed from the sensor in QUAD mode.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pSpeed              The pointer of getting the speed value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 * [FUNC_Qdt_00086] [SWDES_Qdt_0082]
 */
QDT_TEXT_SECTION QDT_ReturnType Qdt_GetSpeed(uint8 u8ControllerID, float32 *pSpeed)
{
    uint8          qdt_currentCore;
    QDT_ReturnType eRet = QDT_RETURN_E_NOT_OK;

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    qdt_currentCore = GET_CPU_ID();
#else
    qdt_currentCore = 0U;
#endif

#if (QDT_DEV_ERROR_DETECT == STD_ON)
    /* [FUNC_Qdt_00087] [SWDES_Qdt_0083] */
    if ((Std_ReturnType)E_OK == Qdt_ValidateCommonPointer(pSpeed, QDT_GET_SPEED_ID_U8))
    {
        if ((Std_ReturnType)E_OK == Qdt_ValidateInitStatus(qdt_currentCore, QDT_GET_SPEED_ID_U8))
        {
            if (FALSE == Qdt_pConfig->pQdtInstanceCfg[u8ControllerID]->bEnQuadMode)
            {
                (void)Det_ReportError((uint16)QDT_MODULE_ID,
                                      QDT_INSTANCE,
                                      (uint8)QDT_GET_SPEED_ID_U8,
                                      QDT_E_PARAM_U8);
            }
            else
            {
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */
                /* [FUNC_Qdt_00088] [SWDES_Qdt_0084] */
                eRet = QDT_Hal_GetSpeed(u8ControllerID, pSpeed, qdt_currentCore);

#if (QDT_DEV_ERROR_DETECT == STD_ON)
            }
        }
    }
#endif /* (QDT_DEV_ERROR_DETECT == STD_ON */

    return eRet;
}

#define QDT_STOP_SEC_CODE
#include "Qdt_MemMap.h"

/* End of file */
/** @} */
