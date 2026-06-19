/**
 *     @file    CDD_TrgSel.c
 *     @version 1.5.1
 *
 *     @brief   AUTOSAR TrgSel - TRGSEL Driver source file.
 *     @details TRGSEL driver source file, containing the Autosar API specification and other
 *              variables and functions that are exported by the TRGSEL driver.
 *
 *     @addtogroup TRGSEL_MODULE
 *     @{
 */
/*==================================================================================================
*   PERIPHERAL           : Trgsel
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
*   0.1.0       17/09/2022    QXW0087       N/A          Trgsel Initial Version
*   0.2.0       15/03/2023    QXW0087       N/A          Refactor of Trgsel Driver
*   0.3.0       12/10/2023    QXW0103       N/A          Add Multicore Support，Delete Unused Drivers
*   0.4.0       13/11/2023    QXW0103       N/A          Fix Bugs, Add Default config
*   0.5.0       16/01/2024    QXW0103       N/A          Fix Bugs, Optimize Code
*   0.6.0       18/03/2024    QXW0103       N/A          Add Support For FC7240
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
/**
 *     @file            CDD_TrgSel.c
 */
#include "CDD_TrgSel.h"
#include "Mcal.h"

#include "TrgSel_Drv.h"

#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

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

#define TRGSEL_START_SEC_VAR_INIT_UNSPECIFIED
#include "TrgSel_MemMap.h"
/**
 * @brief Global variable (pointer) used for storing the TrgSel driver configuration data.
 */
/* PRQA S 3408,1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an
 * object or function with external linkage is defined. #Misra-C:2012 Rule-8.7 Functions and objects
 * should not be defined with external linkage if they are referenced in only one translation unit.
 *  Reason: It is also used in other file but hidden by the macro */
TRGSEL_DATA_SECTION const TrgSel_ConfigType *TrgSel_pConfig = NULL_PTR;
/* PRQA S 3408,1504 -- */

#define TRGSEL_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "TrgSel_MemMap.h"

/*==================================================================================================
 *                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE Std_ReturnType TrgSel_ValidateGlobalCall(uint8 u8ServiceId);
#endif
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE Std_ReturnType TrgSel_ValidatePtrInit(const TrgSel_ConfigType *ConfigPtr);
#endif
#if ((TRGSEL_DEV_ERROR_DETECT == STD_ON) && (TRGSEL_GET_VERSION_INFO_API == STD_ON))
LOCAL_INLINE Std_ReturnType TrgSel_ValidateVersionInfoCall(const Std_VersionInfoType *versioninfo);
#endif

/*==================================================================================================
 *                                        LOCAL FUNCTIONS
==================================================================================================*/
#define TRGSEL_START_SEC_CODE
#include "TrgSel_MemMap.h"

#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the calls for TrgSel_Init.
 *
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return         The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  TrgSel_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType TrgSel_ValidateGlobalCall(uint8 u8ServiceId)
{
    Std_ReturnType valid = (Std_ReturnType)E_NOT_OK;

    if (NULL_PTR != TrgSel_pConfig) /* Check if already initialized */
    {
        if (TRGSEL_INIT_ID_U8 == u8ServiceId) /* If caller is the initialization function, error */
        {
            (void)Det_ReportError((uint16)TRGSEL_MODULE_ID,
                                  0U,
                                  (uint8)u8ServiceId,
                                  TRGSEL_E_ALREADY_INITIALIZED_U8);
        }
        else
        {
            valid = (Std_ReturnType)E_OK;
        }
    }
    else
    {
        if (TRGSEL_INIT_ID_U8 == u8ServiceId) /* If caller is the initialization function, ok */
        {
            valid = (Std_ReturnType)E_OK;
        }
        else
        {
            (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)u8ServiceId, TRGSEL_E_UNINIT_U8);
        }
    }

    return valid;
}
#endif /* TRGSEL_DEV_ERROR_DETECT == STD_ON */

#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief              This function validate the initialization pointer.
 *
 * @param[in]         ConfigPtr        Pointer to a selected configuration structure.
 *
 * @return         The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
LOCAL_INLINE Std_ReturnType  TrgSel_ValidatePtrInit(const TrgSel_ConfigType *ConfigPtr)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
#if (TRGSEL_PRECOMPILE_SUPPORT == STD_OFF)
    if (NULL_PTR == ConfigPtr)
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)TRGSEL_MODULE_ID,
                              0U,
                              (uint8)TRGSEL_INIT_ID_U8,
                              (uint8)TRGSEL_E_INIT_FAILED_U8);
    }
    else
    {
        /** do nothing */
    }
#elif (TRGSEL_PRECOMPILE_SUPPORT == STD_ON)
    if (NULL_PTR != ConfigPtr)
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)TRGSEL_MODULE_ID,
                              0U,
                              (uint8)TRGSEL_INIT_ID_U8,
                              (uint8)TRGSEL_E_INIT_FAILED_U8);
    }
    else
    {
        /** do nothing */
    }
#endif
#endif

    return valid;
}
#endif

#if ((TRGSEL_DEV_ERROR_DETECT == STD_ON) && (TRGSEL_GET_VERSION_INFO_API == STD_ON))
/**
 * @brief       This function validates the versionInfo parameter
 *
 * @param[in]   versioninfo  Pointer to a buffer where the results for version shall be saved
 *
 *
 * @return         The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
/* PRQA S 3673 ++ #Misra-C:2012 Rule-8.13 A pointer should point to a const-qualified type whenever possible
* Reason: This usage is legal */
LOCAL_INLINE Std_ReturnType TrgSel_ValidateVersionInfoCall(const Std_VersionInfoType *versioninfo)
{
    Std_ReturnType valid = (Std_ReturnType)E_OK;

    if (NULL_PTR == versioninfo)
    {
        (void)Det_ReportError((uint16)TRGSEL_MODULE_ID,
                              0U,
                              TRGSEL_GETVERSIONINFO_ID_U8,
                              TRGSEL_E_PARAM_VINFO_U8);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}
#endif /* (TRGSEL_DEV_ERROR_DETECT == STD_ON) && (TRGSEL_GET_VERSION_INFO_API == STD_ON */
/* PRQA S 3673 -- */
#if ((TRGSEL_DEV_ERROR_DETECT == STD_ON) && (TRGSEL_CONFIG_TRGSEL_API == STD_ON))
/**
* @brief          Validate parameters for TrgSel_ConfigInput
*
*
* @param[in]      registerIndex       index of the trgmux register
* @param[in]      selNumber           selection of trgmux input
* @param[in]      trigger             triger input
*
* @return         Std_ReturnType  Call is valid or not
* @retval         E_OK            Caller of the function can continue its execution
* @retval         E_NOT_OK        Caller of the function should drop execution
*
* @api
*
* @note
* @implements TrgSel_ValidateChannelConfigCall_Activity
*/
LOCAL_INLINE  Std_ReturnType TrgSel_ValidateTrgMuxConfigCall
(
            TrgSel_OutputType TriggerOutput,
            TrgSel_SourceType TriggerSource
)
{
    /* Variable to store the value returned by the function */
    Std_ReturnType retVal = (Std_ReturnType)E_OK;
    boolean bLockVal = (boolean)FALSE;

    /* get lock value */
    bLockVal = (boolean)TrgSel_HL_Get_Lock(TriggerOutput);

    if ((boolean)TRUE == bLockVal)
    {
        retVal = E_NOT_OK;
        (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_TRGSEL_LOCKED_U8);
    }
    else
    {
        /* Check that the registerIndex is in valid range */
        if (TriggerOutput < TRGSEL0_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL0_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_1_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL1_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_2_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL2_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL3_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
#ifdef TRGSEL_FC7240_SUPPORT
        else if (TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL4_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_5_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL5_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
        else if (TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL4_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_5_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL5_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_6_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL6_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_7_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL7_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }
        else if (TriggerOutput < TRGSEL0_8_MAX_OUTPUTS)
        {
            if(TriggerSource >= TRGSEL8_NUM_SOURCES)
            {
                retVal = E_NOT_OK;
                (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_TRGSEL_SEL_U8);
            }
        }      
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
        else
        {
            retVal = E_NOT_OK;
            (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_ID_U8, TRGSEL_E_INVALID_REGINDEX_U8);
        }
    }
    return retVal;
}

/**
* @brief          Validate parameters for TrgSel_ConfigInput
*
*
* @param[in]      registerIndex       index of the trgmux register
* @param[in]      selNumber           selection of trgmux input
* @param[in]      trigger             triger input
*
* @return         Std_ReturnType  Call is valid or not
* @retval         E_OK            Caller of the function can continue its execution
* @retval         E_NOT_OK        Caller of the function should drop execution
*
* @api
*
* @note
* @implements TrgSel_EnableLock_Activity
*/
LOCAL_INLINE  Std_ReturnType TrgSel_ValidateTrgMuxConfigLockCall
(
            TrgSel_OutputType TriggerOutput
)
{
    /* Variable to store the value returned by the function */
    Std_ReturnType u8retVal = (Std_ReturnType)E_NOT_OK;

    /* Check that the registerIndex is in valid range */
#ifdef TRGSEL_FC7240_SUPPORT
    if ((uint16)TriggerOutput > TRGSEL0_5_MAX_OUTPUTS)
    {
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
    if ((uint16)TriggerOutput > TRGSEL0_8_MAX_OUTPUTS)
    {
#else
    if ((uint16)TriggerOutput > TRGSEL0_3_MAX_OUTPUTS)
    {
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
        (void)Det_ReportError((uint16)TRGSEL_MODULE_ID, 0U, (uint8)TRGSEL_TRGSEL_CONFIG_LOCK_U8, TRGSEL_E_INVALID_REGINDEX_U8);
    }
    else
    {
        /* parameters are valid */
        u8retVal = (Std_ReturnType)E_OK;
    }

    return u8retVal;
}
#endif /* (TRGSEL_DEV_ERROR_DETECT == STD_ON) && (TRGSEL_CONFIG_TRGSEL_API == STD_ON) */

/*==================================================================================================
 *                                        GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief          This function initializes the TRGSEL hardware components.
 * @details        This service is a non reentrant function used for driver initialization.
 *        The  Initialization function  shall initialize  all relevant  registers of  the configured
 *        hardware with the  values of the  structure referenced by  the parameter ConfigPtr.
 *        If  the  hardware  allows  for   only  one  usage   of  the  register,   the  driver module
 *        implementing that functionality is responsible for initializing the register.
 *        The initialization function of this module shall always have a pointer as a parameter, even
 *        though for Variant PC no configuration set shall be given.
 *        Instead a NULL pointer shall be passed to the initialization function.
 *
 * @param[in]         ConfigPtr        Pointer to a selected configuration structure.
 *
 * @return             void
 * @implements         TrgSel_Init_Activity
 *
 * @api
 *
 *
 */
TRGSEL_TEXT_SECTION void TrgSel_Init(const TrgSel_ConfigType *ConfigPtr)
{
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType u8Ret;

    u8Ret = TrgSel_ValidateGlobalCall(TRGSEL_INIT_ID_U8);

    if (E_OK == u8Ret)
    {
        u8Ret = TrgSel_ValidatePtrInit(ConfigPtr);
        if (E_OK == u8Ret)
        {
#endif /* (TRGSEL_DEV_ERROR_DETECT == STD_ON */

#if (TRGSEL_PRECOMPILE_SUPPORT == STD_ON)
            TrgSel_pConfig = &TrgSel_Config;
            (void)ConfigPtr;
#else
            TrgSel_pConfig = ConfigPtr;
#endif /* TRGSEL_PRECOMPILE_SUPPORT */
            /* Init TRGSEL registers */
            TrgSel_HL_Init(TrgSel_pConfig);
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}

#if (TRGSEL_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the TrgSel driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to their
 *                 power on reset state, and de-initialize the TRGSEL driver.
 *
 * @param[in]      void
 * @return         void
 * @implements     TrgSel_DeInit_Activity
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
TRGSEL_TEXT_SECTION void TrgSel_DeInit(void)
{
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    /* Validate call of function */
    if ((TrgSel_ValidateGlobalCall(TRGSEL_DEINIT_ID_U8) == E_OK))
    {
#endif
        /* Set the global configuration pointer to NULL */
        TrgSel_pConfig = NULL_PTR;
        TrgSel_HL_DeInit();
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    }
    /* End validation of global call */
#endif
}
/* PRQA S 1503 -- */
#endif/*#if (TRGSEL_DEINIT_API == STD_ON)*/


#if (TRGSEL_GET_VERSION_INFO_API == STD_ON)
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
 * @param[out]    versioninfo      Pointer to location to store version info
 *
 * @return void
 *
 * @api
 *
 * @implements TrgSel_GetVersionInfo_Activity
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
TRGSEL_TEXT_SECTION void TrgSel_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK == TrgSel_ValidateVersionInfoCall(pVersioninfo))
    {
#endif
        (pVersioninfo)->vendorID         = (uint16)TRGSEL_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint8)TRGSEL_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)TRGSEL_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)TRGSEL_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)TRGSEL_SW_PATCH_VERSION;
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
/* PRQA S 1503 -- */
#endif /* TRGSEL_GET_VERSION_INFO_API == STD_ON */

#if (TRGSEL_CONFIG_TRGSEL_API == STD_ON)
/**
* @brief       TrgSel_ConfigInput
* @details     This function is used for configuring a trigger in a TRGSEL register
*
* @param[in]   TriggerOutput - trigger to be configured.
* @param[in]   TriggerSource - number of the input configured(sel0,sel1,sel2,sel3).
*
* @param[out]
* @return      void
*
* @api
* @implements     TrgSel_ConfigInput_Activity
*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
TRGSEL_TEXT_SECTION void TrgSel_ConfigInput(TrgSel_OutputType TriggerOutput, TrgSel_SourceType TriggerSource)
{
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType u8Ret;
    u8Ret = TrgSel_ValidateGlobalCall(TRGSEL_TRGSEL_CONFIG_ID_U8);

    if(E_OK == u8Ret)
    {
        u8Ret = TrgSel_ValidateTrgMuxConfigCall(TriggerOutput, TriggerSource);
        if (E_OK == u8Ret)
        {
#endif
            /* Call IPW config channel function*/
            TrgSel_HL_Config_Sel(TriggerOutput, TriggerSource);
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}
/**
* @brief       TrgSel_EnableLock
* @details     This function is used for enabling lock of a TRGSEL register
*
* @param[in]   TriggerOutput - TRGSEL register index.
*
* @param[out]
* @return      void
*
* @api
* @implements     TrgSel_EnableLock_Activity
*/
TRGSEL_TEXT_SECTION void TrgSel_EnableLock(TrgSel_OutputType TriggerOutput)
{
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType u8Ret;
    u8Ret = TrgSel_ValidateGlobalCall(TRGSEL_TRGSEL_CONFIG_LOCK_U8);
    if(E_OK == u8Ret)
    {
        u8Ret = TrgSel_ValidateTrgMuxConfigLockCall(TriggerOutput);
        if(E_OK == u8Ret)
        {
#endif
            if (TrgSel_HL_Get_Lock(TriggerOutput) == FALSE)
            {
                /* Call IPW config channel function*/
                TrgSel_HL_Enable_Lock(TriggerOutput);
            }
            /* end validation */
#if (TRGSEL_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif
}
#endif /*(TRGSEL_CONFIG_TRGSEL_API == STD_ON)*/

#define TRGSEL_STOP_SEC_CODE
#include "TrgSel_MemMap.h"
/* PRQA S 1503 --*/
#ifdef __cplusplus
}
#endif

/* End of file */
/** @} */
