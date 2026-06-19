/**
 *   @file    Can.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CAN - driver API and development errors implemention.
 *   @details AUTOSAR CAN - driver API and development errors implemention.
 *
 *   @addtogroup CAN
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion
register -Increase support for the second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
*   0.7.1       2024-7-12      QXW0038       N/A          Fix CAN DET build issue
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can.h"
#if (CAN_DEM_SUPPORT == STD_ON)
#include "Dem.h" /*[SWS_Can_00058]*/
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#include "SchM_Can.h"
#if (CAN_TIMEOUT_AS_LOOP == STD_OFF)
#include "Os.h" /*[SWS_Can_00281]*/
#endif
#include "Can_Hal.h"
#include "CanIf_Cbk.h"
#include "Std_Types.h"
#ifdef CAN_ENABLE_WAKEUP_SUPPORT
#if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
#include "EcuM.h"
#endif /* (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON) */
#endif

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and CAN header file are of the same vendor */
#if (CAN_VENDOR_ID_PCCFG_CUR != CAN_VENDOR_ID)
#error "Can.c and Can_Cfg.h have different vendor ids"
#endif
/* Check if current file and CAN header file are of the same module */
#if (CAN_MODULE_ID_PCCFG_CUR != CAN_MODULE_ID)
#error "Can.c and Can_Cfg.h have different module ids"
#endif
/* Check if current file and CAN header file are of the same Autosar version */
#if ((CAN_AR_RELEASE_MAJOR_VERSION_PCCFG_CUR != CAN_AR_RELEASE_MAJOR_VERSION) || \
     (CAN_AR_RELEASE_MINOR_VERSION_PCCFG_CUR != CAN_AR_RELEASE_MINOR_VERSION) || \
     (CAN_AR_RELEASE_REVISION_VERSION_PCCFG_CUR != CAN_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Can.c and Can_Cfg.h are different"
#endif
/* Check if current file and CAN header file are of the same Software version */
#if ((CAN_SW_MAJOR_VERSION_PCCFG_CUR != CAN_SW_MAJOR_VERSION) || \
     (CAN_SW_MINOR_VERSION_PCCFG_CUR != CAN_SW_MINOR_VERSION) || \
     (CAN_SW_PATCH_VERSION_PCCFG_CUR != CAN_SW_PATCH_VERSION))
#error "Software Version Numbers of Can.c and Can_Cfg.h are different"
#endif

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
#define CAN_START_SEC_VAR_INIT_UNSPECIFIED
#include "Can_MemMap.h"
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined Reason: don't need to declare it */
/* PRQA S 1504 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit Reason: don't need to declare it */
CAN_DATA_SECTION Can_StatusType s_aCan_eInitStatus[CAN_ECUC_CORES_NUM] = {
    CAN_UNINIT
}; /*[SWS_Can_00103][SWDESG_CAN_014]*/

#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
CAN_DATA_SECTION const Can_ConfigType *s_pCan_pConfigCurrent = NULL_PTR;
#endif
#endif
/* PRQA S 3408 -- */
/* PRQA S 1504 -- */

#define CAN_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Can_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define CAN_START_SEC_CODE
#include "Can_MemMap.h"

/**
 * @brief This function initializes the module. [SWS_Can_00238][SWS_Can_00239][SWS_Can_00240]
 * [SWS_Can_00242][SWS_Can_00077][SWS_Can_00223][SWDESG_CAN_001][SWDESG_CAN_010][SWDESG_CAN_011][SWDESG_CAN_012]
 * [SWDESG_CAN_012][SWDESG_CAN_013][SWDESG_CAN_015][SWDESG_CAN_016]
 * @param Config Pointer to driver configuration.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_Init(const Can_ConfigType *Config)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    s_pCan_pConfigCurrent = Config;
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_INIT, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif /* CAN_SUPPORT_MULTICORE */
        if (CAN_READY == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_INIT,
                               (uint8)CAN_E_TRANSITION); /*[SWS_Can_00174][SWS_Can_00408][SWDESG_CAN_008]*/
        }
        else
        {
#if (CAN_PRECOMPILE_SUPPORT == STD_ON)
            if (NULL_PTR != Config)
#else
        if (NULL_PTR == Config)
#endif
            {
                Can_ReportDetError((uint8)CAN_DET_SID_INIT, (uint8)CAN_E_PARAM_POINTER);
            }
            else
            {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
#if (CAN_PRECOMPILE_SUPPORT == STD_ON)
                /* Check if pointers are correctly initialized and the driver is mapped on current
                 * partition */
                if ((NULL_PTR == Can_Config.Can_CoresMappingPtr) ||
                    (NULL_PTR == Can_Config.Can_CtrlCoresMappingPtr) ||
                    (TRUE != Can_Config.Can_CoresMappingPtr[can_currentCore]))
#else
                /* Check if pointers are correctly initialized and the driver is mapped on current
                 * partition */
                if ((NULL_PTR == Config->Can_CoresMappingPtr) ||
                    (NULL_PTR == Config->Can_CtrlCoresMappingPtr) ||
                    (TRUE != Config->Can_CoresMappingPtr[can_currentCore]))
#endif
                {
                    Can_ReportRuntimeDetError((uint8)CAN_DET_SID_INIT, (uint8)CAN_E_INV_PARTITION);
                }
                else
                {
#endif /* CAN_SUPPORT_MULTICORE */
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

#if (CAN_PRECOMPILE_SUPPORT == STD_ON)
                    Can_Hal_Init(&Can_Config, can_currentCore);
#else
    Can_Hal_Init(Config, can_currentCore); /*[SWS_Can_00021][SWS_Can_00291][SWDESG_CAN_003]*/
#endif

                    s_aCan_eInitStatus[can_currentCore] = CAN_READY; /*[SWDESG_CAN_002]*/
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                }
#endif /* CAN_SUPPORT_MULTICORE */
            }
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif /* CAN_SUPPORT_MULTICORE */
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

#if (CAN_VERSION_INFO_API == STD_ON)
/**
 * @brief This function returns the version information of this module.
 * [SWS_Can_00224][SWDESG_CAN_017][SWDESG_CAN_018]
 *
 * @param Versioninfo Pointer to where to store the version information of this module
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_GetVersionInfo(Std_VersionInfoType *Versioninfo)
{

#if (CAN_DEV_ERROR_DETECT == STD_ON)

    if (NULL_PTR == Versioninfo)
    {
        Can_ReportDetError((uint8)CAN_DET_SID_GET_VERSION_INFO,
                           (uint8)CAN_E_PARAM_POINTER); /*[SWS_Can_00177]*/
    }
    else
    {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        Versioninfo->vendorID         = (uint16)CAN_VENDOR_ID;
        Versioninfo->moduleID         = (uint16)CAN_MODULE_ID;
        Versioninfo->sw_major_version = (uint8)CAN_SW_MAJOR_VERSION;
        Versioninfo->sw_minor_version = (uint8)CAN_SW_MINOR_VERSION;
        Versioninfo->sw_patch_version = (uint8)CAN_SW_PATCH_VERSION;
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/
#endif /* (CAN_VERSION_INFO_API == STD_ON) */

/**
 * @brief This function de-initializes the module. [SWS_Can_91002][SWDESG_CAN_019]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_DeInit(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_DEINIT,
                                  (uint8)CAN_E_INV_PARTITION); /*[SWS_Can_91011]*/
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_DEINIT,
                               (uint8)CAN_E_TRANSITION); /*[SWS_Can_91012][SWDESG_CAN_020]*/
        }
        else
        {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
            /* Check if pointers are correctly initialized and the driver is mapped on current
             * partition */
            if ((NULL_PTR == s_pCan_pConfigCurrent->Can_CoresMappingPtr) ||
                (NULL_PTR == s_pCan_pConfigCurrent->Can_CtrlCoresMappingPtr) ||
                (TRUE != s_pCan_pConfigCurrent->Can_CoresMappingPtr[can_currentCore]))
            {
                Can_ReportRuntimeDetError((uint8)CAN_DET_SID_DEINIT, (uint8)CAN_E_INV_PARTITION);
            }
            else
            {
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

                /* Initialisation of usefull indicators. */
                Can_Hal_DeInit(can_currentCore);

                s_aCan_eInitStatus[can_currentCore] = CAN_UNINIT; /*[SWS_Can_91009][SWS_Can_91010]*/
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
            }
#endif
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

#if (CAN_SET_BAUDRATE_API == STD_ON)
/**
 * @brief This service shall set the baud rate configuration of the CAN controller. Depending on
 * necessary baud rate modifications the controller might have to reset
 * [SWS_CAN_00491][SWDESG_CAN_023][SWDESG_CAN_024][SWDESG_CAN_025][SWDESG_CAN_026]
 * @param Controller CAN controller, whose baud rate shall be set
 * @param BaudRateConfigID references a baud rate configuration by ID (see
 * CanControllerBaudRateConfigID)
 * @return E_OK: Service request accepted, setting of (new) baud rate started; E_NOT_OK: Service
 * request not accepted
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_SetBaudrate(uint8 Controller, const uint16 BaudRateConfigID)
{
    /* Returns the result of CAN set baudrate */
    Std_ReturnType eReturnValue = (uint8)E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_SET_BAUDRATE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* If s_aCan_eInitStatus is CAN_UNINIT then the driver was not initialised yet. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_SET_BAUDRATE,
                               (uint8)CAN_E_UNINIT); /*[SWS_CAN_00492][SWDESG_CAN_027]*/
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

            /* set the Baudrate */
            eReturnValue =
                (Std_ReturnType)Can_Hal_SetBaudrate(Controller, BaudRateConfigID, can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
    return (eReturnValue);
}
/* PRQA S 1503 --*/
#endif /* (CAN_SET_BAUDRATE_API == STD_ON) */

/**
 * @brief This function performs software triggered state transitions of the CAN controller State
 * machine. [SWS_Can_00230][SWDESG_CAN_031] [SWDESG_CAN_032][SWDESG_CAN_033][SWDESG_CAN_039]
 * @param Controller CAN controller for which the status shall be changed
 * @param Transition Transition value to request new CAN controller state
 * @return E_OK: request accepted; E_NOT_OK: request not accepted, a development error occurred
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_SetControllerMode(uint8                   Controller,
                                                      Can_ControllerStateType Transition)
{
    /* Returns the result of Transition mode. */
    Std_ReturnType eReturnValue = E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_SET_CONTROLLER_MODE,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_00198]*/
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /*[SWS_Can_00017]*/
            eReturnValue = (Std_ReturnType)
                Can_Hal_SetControllerMode(Controller, Transition, (boolean)TRUE, can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT==STD_ON)  */
    return (eReturnValue);
}
/* PRQA S 1503 --*/

/**
 * @brief This function disables all interrupts for this CAN controller. [SWS_Can_00419][SWS_Can_00425]
 * [SWS_Can_00231][SWS_Can_00202][SWS_Can_00204][SWDESG_CAN_043][SWDESG_CAN_044][SWDESG_CAN_045][SWDESG_CAN_049][SWDESG_CAN_050]
 * @param Controller CAN controller for which interrupts shall be disabled.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_DisableControllerInterrupts(uint8 Controller)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_DISABLE_CONTROLLER_INTERRUPTS,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_DISABLE_CONTROLLER_INTERRUPTS,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_00205][SWDESG_CAN_046]*/
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Call the FLEXCAN function for disabling interrupts. */

            Can_Hal_DisableControllerInterrupts(Controller, can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

/**
 * @brief This function enables all allowed interrupts.
 * [SWS_Can_00202][SWS_Can_00232][SWDESG_CAN_051] [SWDESG_CAN_052][SWDESG_CAN_053]
 * @param Controller CAN controller for which interrupts shall be re-enabled
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_EnableControllerInterrupts(uint8 Controller)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_ENABLE_CONTROLLER_INTERRUPTS,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_ENABLE_CONTROLLER_INTERRUPTS,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_00209][SWDESG_CAN_054]*/
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Call the FLEXCAN function for enabling interrupts. */

            Can_Hal_EnableControllerInterrupts(Controller, can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

#ifdef CAN_ENABLE_WAKEUP_SUPPORT
#if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief This function checks if a wakeup has occurred for the given controller
 *
 * @param Controller Controller to be checked for a wakeup.
 * @return E_OK: API call has been accepted; E_NOT_OK: API call has not been accepted
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_CheckWakeup(uint8 Controller)
{
    Std_ReturnType eReturnValue = E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_CBK_CHECK_WAKEUP, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_CBK_CHECK_WAKEUP, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

            eReturnValue = (Std_ReturnType)CanHal_CheckWakeup(Controller, can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return eReturnValue;
}
/* PRQA S 1503 --*/
#endif
#endif
/**
 * @brief This service obtains the error state of the CAN controller.
 * [SWS_Can_91004][SWDESG_CAN_061][SWDESG_CAN_065]
 *
 * @param ControllerId Abstracted CanIf ControllerId which is assigned to a CAN controller, which is
 * requested for ErrorState.
 * @param ErrorStatePtr Pointer to a memory location, where the error state of the CAN controller
 * will be stored.
 * @return E_OK: Error state request has been accepted; E_NOT_OK: Error state request has not been
 * accepted.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerErrorState(uint8               ControllerId,
                                                            Can_ErrorStateType *ErrorStatePtr)
{
    Std_ReturnType eReturnValue = E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_GET_CONTROLLER_ERROR_STATE,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_GET_CONTROLLER_ERROR_STATE,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_91005][SWDESG_CAN_062]*/
        }
        else
        {
            if (NULL_PTR == ErrorStatePtr)
            {
                Can_ReportDetError((uint8)CAN_DET_SID_GET_CONTROLLER_ERROR_STATE,
                                   (uint8)CAN_E_PARAM_POINTER); /*[SWS_Can_91007][SWDESG_CAN_064]*/
            }
            else
            {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
                /*[SWS_Can_91008]*/
                eReturnValue = (Std_ReturnType)CanHal_GetControllerErrorState(ControllerId,
                                                                              ErrorStatePtr,
                                                                              can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
            }
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return eReturnValue;
}
/* PRQA S 1503 --*/

/**
 * @brief This service reports about the current status of the requested CAN controller.
 * [SWS_Can_91014][SWDESG_CAN_066][SWDESG_CAN_067]
 *
 * @param Controller CAN controller for which the status shall be requested.
 * @param ControllerModePtr Pointer to a memory location, where the current mode of the CAN
 * controller will be stored. [SWS_Can_91015]
 * @return E_OK: Controller mode request has been accepted; E_NOT_OK: Controller mode request has
 * not been accepted
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerMode(uint8                    Controller,
                                                      Can_ControllerStateType *ControllerModePtr)
{
    Std_ReturnType eReturnValue = E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_GET_CONTROLLER_MODE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_GET_CONTROLLER_MODE,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_91016][SWDESG_CAN_068]*/
        }
        else
        {
            if (NULL_PTR == ControllerModePtr)
            {
                Can_ReportDetError((uint8)CAN_DET_SID_GET_CONTROLLER_MODE,
                                   (uint8)CAN_E_PARAM_POINTER); /*[SWS_Can_91018][SWDESG_CAN_070]*/
            }
            else
            {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

                eReturnValue = (Std_ReturnType)CanHal_GetControllerMode(Controller,
                                                                        ControllerModePtr,
                                                                        can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
            }
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return eReturnValue;
}
/* PRQA S 1503 --*/

/**
 * @brief This function is called by CanIf to pass a CAN message to CanDrv for transmission.
 * [SWS_Can_00233][SWS_Can_00275][SWDESG_CAN_071][SWDESG_CAN_072][SWDESG_CAN_086][SWDESG_CAN_196]
 *
 * @param Hth information which HW-transmit handle shall be used for transmit. Implicitly this is
 * also the information about the controller to use because the Hth numbers are unique inside one
 * hardware unit.
 * @param PduInfo Pointer to SDU user memory, Data Length and Identifier.
 * [SWS_Can_00427][SWS_Can_00100][SWS_Can_00212]
 * @return E_OK: Write command has been accepted E_NOT_OK: development error occurred CAN_BUSY: No
 * TX hardware buffer available or pre-emptive call of Can_Write that can't be implemented
 * re-entrant (see Can_ReturnType)
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo)
{
    /* Variable for return status */
    Std_ReturnType eReturnValue = E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_WRITE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_WRITE,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_00216][SWDESG_CAN_074] */
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

            /* Call the FLEXCAN function for transmitting data. */
            eReturnValue = (Std_ReturnType)Can_Hal_Write(Hth, PduInfo, can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return (eReturnValue);
}
/* PRQA S 1503 --*/

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * @brief This function is called by CanIf to abort message transmitting for current hardware
 * transmit handle [SWDESG_CAN_087]
 *
 * @param Hth information which HW-transmit handle shall be used for transmit. Implicitly this is
 * also the information about the controller to use because the Hth numbers are unique inside one
 * hardware unit.
 * @return E_OK: Abort command has been accepted E_NOT_OK: development error occurred
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_TransmitAbort(Can_HwHandleType Hth)
{
    /* Variable for return status */
    Std_ReturnType eReturnValue = E_NOT_OK;
    uint8          can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_TRANSMIT_ABORT, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_TRANSMIT_ABORT, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

            /* Call the FLEXCAN function for transmitting data. */
            eReturnValue = (Std_ReturnType)Can_Hal_TransmitAbort(Hth, can_currentCore);

#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return (eReturnValue);
}
/* PRQA S 1503 --*/
#endif /* #if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) */

#if (CAN_TXPOLL_SUPPORTED == STD_ON)

/**
 * @brief This function performs the polling of TX confirmation when CAN_TX_PROCESSING is set to
 * POLLING. [SWS_Can_00280][SWDESG_CAN_088][SWDESG_CAN_089]
 * [SWS_Can_00225][SWS_Can_00178][SWDESG_CAN_090][SWDESG_CAN_091]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_MainFunction_Write(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_WRITE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_WRITE, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Poll all controllers for Tx MB statuses. */
            Can_Hal_MainFunctionWritePoll(can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

#endif /*(CAN_TXPOLL_SUPPORTED == STD_ON)   */

#if (CAN_RXPOLL_SUPPORTED == STD_ON)

/**
 * @brief This function performs the polling of RX indications when CAN_RX_PROCESSING is set to
 * POLLING. [SWS_Can_00280][SWS_Can_00396]
 * [SWS_Can_00060][SWS_Can_00012][SWS_Can_00099][SWS_Can_00226][SWS_Can_00180][SWDESG_CAN_094][SWDESG_CAN_095][SWDESG_CAN_097][SWDESG_CAN_098]
 * [SWDESG_CAN_100]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_MainFunction_Read(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_READ, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Poll all controllers for Rx MB statuses. [SWDESG_CAN_099] */
            Can_Hal_MainFunctionReadPoll(can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

#endif /* (CAN_RXPOLL_SUPPORTED == STD_ON) */

#if (CAN_BUSOFFPOLL_SUPPORTED == STD_ON)

/**
 * @brief This function performs the polling of bus-off events that are configured statically as 'to
 * be polled'. [SWS_Can_00280][SWS_Can_00099]
 * [SWS_Can_00227][SWDESG_CAN_101][SWDESG_CAN_102][SWDESG_CAN_103]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_MainFunction_BusOff(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_BUS_OFF,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_BUS_OFF, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            Can_Hal_BusOffPoll(can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/
#endif /* (CAN_BUSOFFPOLL_SUPPORTED == STD_ON) */

#if (CAN_ERROR_POLLING_ENABLE == STD_ON)

/**
 * @brief This function performs the polling of error events that are configured statically as 'to
 * be polled'. [FUNC_Can_0072][SWS_Can_00280]
 * [SWS_Can_00099][SWDESG_CAN_198][SWDESG_CAN_199][SWDESG_CAN_200]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_MainFunction_Error(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_ERROR,
                                  (uint8)CAN_E_INV_PARTITION); /*[SWDESG_CAN_201]*/
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_ERROR,
                               (uint8)CAN_E_UNINIT); /*[SWDESG_CAN_202]*/
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            Can_Hal_ErrorPoll(can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

#endif

#ifdef CAN_WAKEUPPOLL_SUPPORTED
#if (CAN_WAKEUPPOLL_SUPPORTED == STD_ON)

/**
 * @brief This function performs the polling of wake-up events that are configured statically as 'to
 * be polled'. [SWS_Can_00280][SWS_Can_00099]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_MainFunction_Wakeup(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_WAKEUP,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_WAKEUP, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            Can_Hal_WakeupPoll(can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/
#endif /* (CAN_WAKEUPPOLL_SUPPORTED  == STD_ON) */
#endif

/**
 * @brief This function performs the polling of CAN controller mode transitions. [SWS_Can_00280]
 * [SWS_Can_00099][SWS_Can_00368][SWDESG_CAN_108][SWDESG_CAN_109][SWDESG_CAN_110][SWDESG_CAN_111]
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION void Can_MainFunction_Mode(void)
{
    uint8 can_currentCore;

#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_MODE, (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_MAIN_FUNCTION_MODE, (uint8)CAN_E_UNINIT);
        }
        else
        {
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
            /* Check for main function mode. */
            Can_Hal_ModePoll(can_currentCore);
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
}
/* PRQA S 1503 --*/

/**
 * @brief          This service returns the Rx error counter for a CAN controller.
 * [FUNC_Can_0069][SWS_Can_00511][SWDESG_CAN_112][SWDESG_CAN_116]
 *
 * @param[in]      Controller: CAN controller, whose current Rx error counter shall be acquired.
 * @param[out]     RxErrorCounterPtr: Pointer to a memory location, where the current Rx error
 * counter of the CAN controller will be stored. [SWS_Can_00515]
 * @return         Std_ReturnType
 * @retval         E_OK  Rx error counter available.
 * @retval         E_NOT_OK  Wrong Controller, or Rx error counter not available.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerRxErrorCounter(uint8  ControllerId,
                                                                uint8 *RxErrorCounterPtr)
{
    Std_ReturnType eRet = E_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    uint8 can_currentCore;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_GET_RX_ERROR_COUNTER,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_GET_RX_ERROR_COUNTER,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_00512][SWDESG_CAN_113]*/
        }
        else
        {
            if (NULL_PTR == RxErrorCounterPtr)
            {
                Can_ReportDetError((uint8)CAN_DET_SID_GET_RX_ERROR_COUNTER,
                                   (uint8)CAN_E_PARAM_POINTER); /*[SWS_Can_00514][SWDESG_CAN_115]*/
            }
            else
            {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                if (can_currentCore == s_pCan_pConfigCurrent->Can_CtrlCoresMappingPtr[ControllerId])
                {
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
                    *RxErrorCounterPtr = Can_Hal_GetControllerRxErrorCounter(ControllerId);
                    eRet               = E_OK;
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                }
#endif
            }
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return (eRet);
}
/* PRQA S 1503 --*/

/**
 * @brief          This service returns the Tx error counter for a CAN controller.
 * [FUNC_Can_0067][SWS_Can_00516][SWDESG_CAN_117][SWDESG_CAN_121]
 *
 *
 * @param[in]      Controller: CAN controller, whose current Tx error counter shall be acquired.
 * @param[out]     TxErrorCounterPtr: Pointer to a memory location, where the current Tx error
 * counter of the CAN controller will be stored. [SWS_Can_00520]
 * @return         Std_ReturnType
 * @retval         E_OK  Rx error counter available.
 * @retval         E_NOT_OK  Wrong Controller, or Rx error counter not available.
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
CAN_TEXT_SECTION Std_ReturnType Can_GetControllerTxErrorCounter(uint8  ControllerId,
                                                                uint8 *TxErrorCounterPtr)
{
    Std_ReturnType eRet = E_NOT_OK;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    uint8 can_currentCore;
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    can_currentCore = GET_CPU_ID();
#else
    can_currentCore = 0U;
#endif
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    /* Check if can_currentCore is a valid partition index*/
    if (can_currentCore >= CAN_ECUC_CORES_NUM)
    {
        Can_ReportRuntimeDetError((uint8)CAN_DET_SID_GET_TX_ERROR_COUNTER,
                                  (uint8)CAN_E_INV_PARTITION);
    }
    else
    {
#endif
        /* Test whether the driver is already initialised. */
        if (CAN_UNINIT == s_aCan_eInitStatus[can_currentCore])
        {
            Can_ReportDetError((uint8)CAN_DET_SID_GET_TX_ERROR_COUNTER,
                               (uint8)CAN_E_UNINIT); /*[SWS_Can_00517][SWDESG_CAN_118]*/
        }
        else
        {
            if (NULL_PTR == TxErrorCounterPtr)
            {
                Can_ReportDetError((uint8)CAN_DET_SID_GET_TX_ERROR_COUNTER,
                                   (uint8)CAN_E_PARAM_POINTER); /*[SWS_Can_00519][SWDESG_CAN_120]*/
            }
            else
            {
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                if (can_currentCore == s_pCan_pConfigCurrent->Can_CtrlCoresMappingPtr[ControllerId])
                {
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
                    *TxErrorCounterPtr = Can_Hal_GetControllerTxErrorCounter(ControllerId);
                    eRet               = E_OK;
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#if (CAN_SUPPORT_MULTICORE == STD_ON)
                }
#endif
            }
        }
#if (CAN_SUPPORT_MULTICORE == STD_ON)
    }
#endif
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

    return (eRet);
}
/* PRQA S 1503 --*/

#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
