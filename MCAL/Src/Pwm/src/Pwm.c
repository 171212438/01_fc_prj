/**
 *   @file    Pwm.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR PWM - hardware specific type definition
 *   @details This file contains the PWM AUTOSAR hardware specific type definition
 *
 *   @addtogroup PWM
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : PWM
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
*   0.1.0       24/5/2023     QXW0076       N/A          PWM Initial Version
*   0.2.0       27/9/2023     QXW0074       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0074       N/A          Optimization code
*   0.4.0       20/10/2023    QXW0074       N/A          Optimization code and EB plugins
*   0.5.0       12/01/2024    QXW0074       N/A          add Phase Shift and global time base feature
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width
                                                          of FTU1/2 change to 24bit)
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          optimization the implement of
                                                         PwmDutycycleUpdatedEndperiod / PwmClass /
                                                         PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
/*
 * @file           Pwm.c
 * [SWS_Pwm_50075]
 */
#include "Pwm.h"
#include "Pwm_Hw.h"
#include "SchM_Pwm.h"
#if ((PWM_DEV_ERROR_DETECT == STD_ON) || (PWM_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

#ifndef PWM_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (PWM_AR_RELEASE_MAJOR_VERSION != PWM_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef PWM_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (PWM_SW_MAJOR_VERSION != PWM_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef PWM_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (PWM_SW_MINOR_VERSION != PWM_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef PWM_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (PWM_SW_PATCH_VERSION != PWM_CFG_SW_PATCH_VERSION)
#error "Software patch version is not matched. "
#endif

#if (PWM_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != PWM_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define PWM_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"
/**
 * @brief Pointer to the top level configuration structure - valid only when the driver is in the
 *        initialized state
 *
 */
PWM_DATA_SECTION const Pwm_ConfigType *Pwm_ConfigPtr[MAX_CORE_NUM] = { NULL_PTR };

#define PWM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
#define PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

/**
 * @brief Variable storing the current power state of the Pwm driver
 *
 */
PWM_DATA_SECTION static Pwm_PowerStateType Pwm_eCurrentPowerState[MAX_CORE_NUM];

/**
 * @brief Variable storing the target power state of the Pwm driver
 *
 */
PWM_DATA_SECTION static Pwm_PowerStateType Pwm_eTargetPowerState[MAX_CORE_NUM];

#define PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

#endif

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#if (PWM_DEV_ERROR_DETECT == STD_ON)
PWM_TEXT_SECTION LOCAL_INLINE void Pwm_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId);
#endif

#if (PWM_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION LOCAL_INLINE void Pwm_ReportDetRuntimeError(uint8 u8ServiceId, uint8 u8ErrorId);
#endif
#endif

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
 * @brief       Validate idle state
 *
 * @param[in]   pPwmConfig      PWM configuration which configured from configuration tool or others
 *
 * @return      Std_ReturnType  Standard return type.
 * @retval      E_OK:           The PWM has no channel in running state.
 * @retval      E_NOT_OK:       The PWM has channel in running state.
 *
 */
PWM_TEXT_SECTION LOCAL_INLINE Std_ReturnType Pwm_ValidateIdleState(
    const Pwm_ConfigType *const pPwmConfig);
#endif

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (PWM_DEV_ERROR_DETECT == STD_ON)
PWM_TEXT_SECTION LOCAL_INLINE void Pwm_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    (void)Det_ReportError((uint16)PWM_MODULE_ID, (uint8)PWM_INDEX, (uint8)u8ServiceId, (uint8)u8ErrorId);
}
#endif

#if (PWM_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION LOCAL_INLINE void Pwm_ReportDetRuntimeError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    (void)Det_ReportRuntimeError((uint16)PWM_MODULE_ID,
                                 (uint8)PWM_INDEX,
                                 (uint8)u8ServiceId,
                                 (uint8)u8ErrorId);
}
#endif
#endif

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION LOCAL_INLINE Std_ReturnType Pwm_ValidateIdleState(
    const Pwm_ConfigType *const pPwmConfig)
{
    Std_ReturnType retVal;

    retVal = Pwm_Hw_ValidateIdleState(pPwmConfig);

    return retVal;
}
#endif

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief           PWM driver initialization
 *
 * @param[in]       ConfigPtr   PWM configuration which configured from configuration tool or others
 *
 * @return          void
 * [SWDESG_PWM_029] [SWS_Pwm_00095] [SWS_Pwm_00007] [SWS_Pwm_00062] [SWS_Pwm_10009]
 * [SWS_Pwm_00052] [SWS_Pwm_00118] [SWS_Pwm_00121]
 */
PWM_TEXT_SECTION void Pwm_Init(const Pwm_ConfigType *ConfigPtr)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR != Pwm_ConfigPtr[u8CoreId])
        {
            Pwm_ReportDetError((uint8)PWM_INIT_ID, (uint8)PWM_E_ALREADY_INITIALIZED);
        }
#if (PWM_PRECOMPILE_SUPPORT == STD_OFF)
        else if (NULL_PTR == ConfigPtr)
#elif (PWM_PRECOMPILE_SUPPORT == STD_ON)
        else if (NULL_PTR != ConfigPtr)
#endif
        {
            Pwm_ReportDetError((uint8)PWM_INIT_ID, (uint8)PWM_E_INIT_FAILED);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
#if (PWM_PRECOMPILE_SUPPORT == STD_OFF)
            Pwm_ConfigPtr[u8CoreId] = ConfigPtr;
#elif (PWM_PRECOMPILE_SUPPORT == STD_ON)
            (void)ConfigPtr;
            Pwm_ConfigPtr[u8CoreId] = &Pwm_Config;
#endif
            Pwm_Hw_Init(Pwm_ConfigPtr[u8CoreId]);
#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
            /* [SWS_Pwm_00161] */
            Pwm_eCurrentPowerState[u8CoreId] = PWM_FULL_POWER;
            Pwm_eTargetPowerState[u8CoreId]  = PWM_NODEFINE_POWER;
#endif
        }
    }
}

/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
#if (PWM_DE_INIT_API == STD_ON)
/**
 * @brief           PWM driver De-initialization
 *
 * @return          void
 * [SWDESG_PWM_001] [SWS_Pwm_00096] [SWS_Pwm_00010] [SWS_Pwm_00011] [SWS_Pwm_00012]
 * [SWS_Pwm_10080] [SWS_Pwm_20080]
 */
PWM_TEXT_SECTION void Pwm_DeInit(void)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_002] */
            Pwm_ReportDetError((uint8)PWM_DEINIT_ID, (uint8)PWM_E_UNINIT);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            Pwm_Hw_DeInit(Pwm_ConfigPtr[u8CoreId]);
            /* set global configuration pointer back to NULL */
            Pwm_ConfigPtr[u8CoreId] = NULL_PTR;
        }
    }
}
#endif /* (PWM_DE_INIT_API == STD_ON) */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/**
 * @brief           Set PWM duty cycle
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 * @param[in]       DutyCycle       Input PWM duty cycle value, the range is from 0x0000 to 0x8000
 *
 * @return          void
 * [SWDESG_PWM_036] [SWS_Pwm_00088] [SWS_Pwm_00070] [SWS_Pwm_00058] [SWS_Pwm_00059]
 * [SWS_Pwm_91000] [SWS_Pwm_00013] [SWS_Pwm_00014] [SWS_Pwm_00016] [SWS_Pwm_00017]
 * [SWS_Pwm_00018] [SWS_Pwm_10082] [SWS_Pwm_20082]
 */
PWM_TEXT_SECTION void Pwm_SetDutyCycle(Pwm_ChannelType ChannelNumber, uint16 DutyCycle)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_038] */
            Pwm_ReportDetError((uint8)PWM_SETDUTYCYCLE_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            Pwm_ReportDetError((uint8)PWM_SETDUTYCYCLE_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else if (DutyCycle > PWM_DUTY_CYCLE_100)
        {
            /* [SWDESG_PWM_037] */
            Pwm_ReportDetError((uint8)PWM_SETDUTYCYCLE_ID, (uint8)PWM_E_DUTYCYCLE_RANGE);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_SetDutyCycle(DutyCycle, ChannelNumber, Pwm_ConfigPtr[u8CoreId]);
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}
#endif /* (PWM_SET_DUTY_CYCLE_API == STD_ON) */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
 * @brief           Set PWM period value and duty cycle
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 * @param[in]       Period          Input PWM period value
 * @param[in]       DutyCycle       Input PWM duty cycle value, the range is from 0x0000 to 0x8000
 *
 * @return          void
 * [SWDESG_PWM_042] [SWS_Pwm_00088] [SWS_Pwm_00070] [SWS_Pwm_00058] [SWS_Pwm_00059]
 * [SWS_Pwm_91001] [SWS_Pwm_00019] [SWS_Pwm_00076] [SWS_Pwm_00020] [SWS_Pwm_00041]
 * [SWS_Pwm_10083] [SWS_Pwm_20083] [SWS_Pwm_00150]
 */
PWM_TEXT_SECTION void Pwm_SetPeriodAndDuty(Pwm_ChannelType ChannelNumber,
                                           Pwm_PeriodType  Period,
                                           uint16          DutyCycle)
{
#if (PWM_DEV_ERROR_DETECT == STD_ON)
    uint32 u32PeriodMaxValue;
#endif
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_044] */
            Pwm_ReportDetError((uint8)PWM_SETPERIODANDDUTY_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_043] */
            Pwm_ReportDetError((uint8)PWM_SETPERIODANDDUTY_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
        {
            u32PeriodMaxValue = Pwm_Hw_GetMaxPeriodValue(
                Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].ePwmModuleInstance);
            if (PWM_VARIABLE_PERIOD !=
                Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].ePwmChannelClass)
            {
                /* [SWDESG_PWM_043] [SWS_Pwm_00045] */
                Pwm_ReportDetError((uint8)PWM_SETPERIODANDDUTY_ID, (uint8)PWM_E_PERIOD_UNCHANGEABLE);
            }
            else if (Period > u32PeriodMaxValue)
            {
                Pwm_ReportDetError((uint8)PWM_SETPERIODANDDUTY_ID, (uint8)PWM_E_PERIODVALUE);
            }
            else if (DutyCycle > PWM_DUTY_CYCLE_100)
            {
                /* [SWDESG_PWM_043] */
                Pwm_ReportDetError((uint8)PWM_SETPERIODANDDUTY_ID, (uint8)PWM_E_DUTYCYCLE_RANGE);
            }
            else
#endif /* PWM_DEV_ERROR_DETECT */
            {
#if (PWM_MULTICORE_ENABLED == STD_ON)
                if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
                {
#endif
                    Pwm_Hw_SetPeriodAndDuty(Period, DutyCycle, ChannelNumber, Pwm_ConfigPtr[u8CoreId]);
#if (PWM_MULTICORE_ENABLED == STD_ON)
                }
#endif
            }
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        }
#endif /* PWM_DEV_ERROR_DETECT */
    }
}
#endif /* PWM_SET_PERIOD_AND_DUTY_API */

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/**
 * @brief           Set PWM channel output idle state
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 *
 * @return          void
 * [SWDESG_PWM_039] [SWS_Pwm_00088] [SWS_Pwm_91002] [SWS_Pwm_00021]
 * [SWS_Pwm_10084] [SWS_Pwm_20084] [SWS_Pwm_10086] [SWS_Pwm_20086] [SWS_Pwm_00119]
 */
PWM_TEXT_SECTION void Pwm_SetOutputToIdle(Pwm_ChannelType ChannelNumber)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_041] */
            Pwm_ReportDetError((uint8)PWM_SETOUTPUTTOIDLE_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_040] */
            Pwm_ReportDetError((uint8)PWM_SETOUTPUTTOIDLE_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_SetOutputToIdle(ChannelNumber, Pwm_ConfigPtr[u8CoreId]);
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}
#endif /* PWM_SET_OUTPUT_TO_IDLE_API */

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/**
 * @brief           Get PWM channel output level state
 *
 * @param[in]       ChannelNumber  Input PWM channel number
 *
 * @return          PWM output state value
 * [SWDESG_PWM_021] [SWS_Pwm_00088] [SWS_Pwm_00100] [SWS_Pwm_00022] [SWS_Pwm_10085]
 * [SWS_Pwm_20085] [SWS_Pwm_30051]
 */
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_GetOutputState(Pwm_ChannelType ChannelNumber)
{
    uint8               u8CoreId;
    Pwm_OutputStateType retVal = (Pwm_OutputStateType)PWM_LOW;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_023] */
            Pwm_ReportDetError((uint8)PWM_GETOUTPUTSTATE_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_022] */
            Pwm_ReportDetError((uint8)PWM_GETOUTPUTSTATE_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            retVal = Pwm_Hw_GetOutputState(
                &(Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber]));
        }
    }
    return (Pwm_OutputStateType)retVal;
}
#endif /* PWM_GET_OUTPUT_STATE_API */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           Disable PWM channel notification
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 *
 * @return          void
 * [SWDESG_PWM_003] [SWS_Pwm_00088] [SWS_Pwm_91003] [SWS_Pwm_00023]
 * [SWS_Pwm_10112] [SWS_Pwm_20112] [SWS_Pwm_20115]
 * [SWS_Pwm_30115]
 */
PWM_TEXT_SECTION void Pwm_DisableNotification(Pwm_ChannelType ChannelNumber)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_005] [SWS_Pwm_10051] [SWS_Pwm_20051] */
            Pwm_ReportDetError((uint8)PWM_DISABLENOTIFICATION_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_004] [SWS_Pwm_10051] [SWS_Pwm_20051] */
            Pwm_ReportDetError((uint8)PWM_DISABLENOTIFICATION_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_DisableNotification(
                    &(Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber]));
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}
#endif /* PWM_NOTIFICATION_SUPPORTED */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           Enable PWM channel notification
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 * @param[in]       Notification    PWM channel notification function pointer
 *
 * @return          void
 * [SWDESG_PWM_009] [SWS_Pwm_00088] [SWS_Pwm_91004] [SWS_Pwm_00024]
 * [SWS_Pwm_00081] [SWS_Pwm_10113] [SWS_Pwm_20113] [SWS_Pwm_00025]
 * [SWS_Pwm_10115]
 */
PWM_TEXT_SECTION void Pwm_EnableNotification(Pwm_ChannelType          ChannelNumber,
                                             Pwm_EdgeNotificationType Notification)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_011] */
            Pwm_ReportDetError((uint8)PWM_ENABLENOTIFICATION_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_010] */
            Pwm_ReportDetError((uint8)PWM_ENABLENOTIFICATION_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else if (NULL_PTR ==
                 Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].pPwmChannelNotification)
        {
            Pwm_ReportDetError((uint8)PWM_ENABLENOTIFICATION_ID,
                               (uint8)PWM_E_PARAM_NOTIFICATION_NULL);
        }
        else if (E_OK !=
                 Pwm_Hw_ValidateNotification(ChannelNumber, Pwm_ConfigPtr[u8CoreId], Notification))
        {

            Pwm_ReportDetError((uint8)PWM_ENABLENOTIFICATION_ID, (uint8)PWM_E_PARAM_NOTIFICATION);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
#endif
            {
                Pwm_Hw_EnableNotification(Notification, ChannelNumber, Pwm_ConfigPtr[u8CoreId]);
            }
        }
    }
}
#endif /* PWM_NOTIFICATION_SUPPORTED */

#if (PWM_VERSION_INFO_API == STD_ON)
/**
 * @brief           PWM get version information
 *
 * @param[in]       pVersioninfo    PWM module version information value pointer
 *
 * @return          void
 * [SWDESG_PWM_027] [SWS_Pwm_00088] [SWS_Pwm_00103]
 */
PWM_TEXT_SECTION void Pwm_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if (PWM_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == pVersioninfo)
    {
        /* [SWDESG_PWM_028] [SWS_Pwm_00104] */
        Pwm_ReportDetError((uint8)PWM_GETVERSIONINFO_ID, (uint8)PWM_E_PARAM_POINTER);
    }
    else
#endif /* PWM_DEV_ERROR_DETECT */
    {
        (pVersioninfo)->vendorID = (uint16)PWM_VENDOR_ID;
        (pVersioninfo)->moduleID = (uint16)PWM_MODULE_ID;

        (pVersioninfo)->sw_major_version = (uint8)PWM_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)PWM_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)PWM_SW_PATCH_VERSION;
    }
}
#endif /* PWM_VERSION_INFO_API */

#if (PWM_GLOBALTIMEBASE_SUPPORTED == STD_ON)
/* PRQA S 2995, 2991 ++ #Misra-C:2012 Rule-2.2: There shall be no dead code.
 *                      #Misra-C:2012 Rule-14.3: Controlling expressions shall not be invariant.
 * Reason: Misreporting during testing. It's not an always true condition.*/
/**
 * @brief           Enable the global time base function
 *
 * @param[in]       u32Group    Global time base Group number
 *
 * @return          void
 * [SWDESG_PWM_085] [SWS_Pwm_00088] [FUNC_Pwm_0019] [FUNC_Pwm_0022]
 */
PWM_TEXT_SECTION void Pwm_StartGlobalTime(const uint32 u32Group)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_087] */
            Pwm_ReportDetError((uint8)PWM_STARTGLOBALTIME_ID, (uint8)PWM_E_UNINIT);
        }
        else if (u32Group >= PWM_NUM_CONF_GTB_GROUPS)
        {
            /* [SWDESG_PWM_086] */
            Pwm_ReportDetError((uint8)PWM_STARTGLOBALTIME_ID, (uint8)PWM_E_PARAM_GROUP);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            Pwm_HW_ConfigGTB(Pwm_ConfigPtr[u8CoreId]->pPwm_ConfigGtbGroup[u32Group], TRUE);
        }
    }
}

/**
 * @brief           Disable the global time base function
 *
 * @param[in]       u32Group    Global time base Group number
 *
 * @return          void
 * [SWDESG_PWM_088] [SWS_Pwm_00088] [FUNC_Pwm_0020] [FUNC_Pwm_0023]
 */
PWM_TEXT_SECTION void Pwm_StopGlobalTime(const uint32 u32Group)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_090] [FUNC_Pwm_0024] */
            Pwm_ReportDetError((uint8)PWM_STOPGLOBALTIME_ID, (uint8)PWM_E_UNINIT);
        }
        else if (u32Group >= PWM_NUM_CONF_GTB_GROUPS)
        {
            /* [SWDESG_PWM_089] [FUNC_Pwm_0024] [FUNC_Pwm_0025] */
            Pwm_ReportDetError((uint8)PWM_STOPGLOBALTIME_ID, (uint8)PWM_E_PARAM_GROUP);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            Pwm_HW_ConfigGTB(Pwm_ConfigPtr[u8CoreId]->pPwm_ConfigGtbGroup[u32Group], FALSE);
        }
    }
}
/* PRQA S 2995, 2991 -- */
#endif

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
/**
 * @brief           Get PWM channel state
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 *
 * @return          PWM channel state
 * [SWDESG_PWM_015] [SWS_Pwm_00088] [FUNC_Pwm_0001]
 */
PWM_TEXT_SECTION uint16 Pwm_GetChannelState(Pwm_ChannelType ChannelNumber)
{
    uint16 u16DutyCycle = 0U;
    uint8  u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_017] */
            Pwm_ReportDetError((uint8)PWM_GETCHANNELSTATE_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_016] */
            Pwm_ReportDetError((uint8)PWM_GETCHANNELSTATE_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            u16DutyCycle = Pwm_Hw_GetChannelState(
                ChannelNumber,
                &Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber]);
        }
    }
    return u16DutyCycle;
}
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_TRIGGER_OUT_API == STD_ON)
/**
 * @brief           PWM enable FTU trigger output.
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 * @param[in]       bReloadTrig     Enable PWM channel reload trigger out
 *
 * @return          void
 * [SWDESG_PWM_012] [SWS_Pwm_00088] [FUNC_Pwm_0059] [FUNC_Pwm_0060] [FUNC_Pwm_0061]
 * [FUNC_Pwm_0062]
 */
PWM_TEXT_SECTION void Pwm_EnableTriggerOut(Pwm_ChannelType ChannelNumber, boolean bReloadTrig)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_013] [FUNC_Pwm_0063] */
            Pwm_ReportDetError((uint8)PWM_ENABLETRIGGER_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_014] [FUNC_Pwm_0064] */
            Pwm_ReportDetError((uint8)PWM_ENABLETRIGGER_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else if (PWM_HW_FTU_END <
                 Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].ePwmModuleInstance)
        {
            /* [SWDESG_PWM_014] [FUNC_Pwm_0064] */
            Pwm_ReportDetError((uint8)PWM_ENABLETRIGGER_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* (PWM_DEV_ERROR_DETECT == STD_ON) */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_EnableTriggerOut(&(Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber]),
                                        bReloadTrig);
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}

/**
 * @brief           PWM disable FTU trigger output
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 * @param[in]       bReloadTrig     Disable PWM channel reload trigger out
 *
 * @return          void
 * [SWDESG_PWM_006] [SWS_Pwm_00088] [FUNC_Pwm_0058]
 */
PWM_TEXT_SECTION void Pwm_DisableTriggerOut(Pwm_ChannelType ChannelNumber, boolean bReloadTrig)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_008] */
            Pwm_ReportDetError((uint8)PWM_DISABLETRIGGER_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            Pwm_ReportDetError((uint8)PWM_DISABLETRIGGER_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else if (PWM_HW_FTU_END <
                 Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].ePwmModuleInstance)
        {
            /* [SWDESG_PWM_007] */
            Pwm_ReportDetError((uint8)PWM_DISABLETRIGGER_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* (PWM_DEV_ERROR_DETECT == STD_ON) */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_DisableTriggerOut(&(Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber]),
                                         bReloadTrig);
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}
#endif /* PWM_TRIGGER_OUT_API */

#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
/**
 * @brief           PWM set mask output, it will force the channel to its inactive state
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 *
 * @return          void
 * [SWDESG_PWM_030] [SWS_Pwm_00088] [FUNC_Pwm_0050] [FUNC_Pwm_0052] [FUNC_Pwm_0053]
 */
PWM_TEXT_SECTION void Pwm_MaskOutputs(Pwm_ChannelType ChannelNumber)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_032] [FUNC_Pwm_0055] */
            Pwm_ReportDetError((uint8)PWM_MASKOUTPUT_ID, (uint8)PWM_E_UNINIT);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_031] [FUNC_Pwm_0056] */
            Pwm_ReportDetError((uint8)PWM_MASKOUTPUT_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else if (PWM_HW_FTU_END <
                 Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].ePwmModuleInstance)
        {
            /* [SWDESG_PWM_031] [FUNC_Pwm_0056] */
            Pwm_ReportDetError((uint8)PWM_MASKOUTPUT_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* (PWM_DEV_ERROR_DETECT == STD_ON) */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_MaskOutputs(&(Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber]));
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}

/**
 * @brief           PWM clear mask output,  it will disable the forced channel.
 *
 * @param[in]       ChannelNumber   Input PWM channel number
 *
 * @return          void
 * [SWDESG_PWM_048] [SWS_Pwm_00088] [FUNC_Pwm_0051] [FUNC_Pwm_0054]
 */
PWM_TEXT_SECTION void Pwm_UnMaskOutputs(Pwm_ChannelType ChannelNumber)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_050] [FUNC_Pwm_0055] */
            Pwm_ReportDetError((uint8)PWM_UNMASKOUTPUT_ID, (uint8)PWM_E_UNINIT);
        }
        else if (PWM_HW_FTU_END <
                 Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].ePwmModuleInstance)
        {
            /* [SWDESG_PWM_049] [FUNC_Pwm_0056] */
            Pwm_ReportDetError((uint8)PWM_UNMASKOUTPUT_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else if (ChannelNumber >= Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount)
        {
            /* [SWDESG_PWM_049] [FUNC_Pwm_0056] */
            Pwm_ReportDetError((uint8)PWM_UNMASKOUTPUT_ID, (uint8)PWM_E_PARAM_CHANNEL);
        }
        else
#endif /* (PWM_DEV_ERROR_DETECT == STD_ON) */
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[ChannelNumber].u8CoreId)
            {
#endif
                Pwm_Hw_UnMaskOutputs(Pwm_ConfigPtr[u8CoreId], ChannelNumber);
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }
}
#endif /* PWM_ENABLE_MASKING_OPERATIONS */

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
 * @brief           PWM set power state
 *
 * @param[in]       Result      Set power state result
 *
 * @return          Call function result
 * [SWDESG_PWM_045] [SWS_Pwm_00088] [SWS_Pwm_00154] [SWS_Pwm_00155] [SWS_Pwm_00156] [SWS_Pwm_00157]
 * [SWS_Pwm_00158] [SWS_Pwm_00166] [SWS_Pwm_00167] [SWS_Pwm_00168] [SWS_Pwm_00169]
 * [SWS_Pwm_00170] [SWS_Pwm_00171]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_SetPowerState(Pwm_PowerStateRequestResultType *Result)
{
    Std_ReturnType                  retVal   = (Std_ReturnType)E_NOT_OK;
    Pwm_PowerStateRequestResultType eTempVal = PWM_NOT_INIT;
    uint8                           u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Result)
        {
            /* [SWDESG_PWM_046] */
            Pwm_ReportDetError((uint8)PWM_SETPOWERSTATE_ID, (uint8)PWM_E_PARAM_POINTER);
        }
        else if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_047] [SWS_Pwm_00172] */
            Pwm_ReportDetError((uint8)PWM_SETPOWERSTATE_ID, (uint8)PWM_E_UNINIT);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            if (Pwm_eCurrentPowerState[u8CoreId] == Pwm_eTargetPowerState[u8CoreId])
            {
                /* [SWS_Pwm_00160] */
                eTempVal = PWM_SERVICE_ACCEPTED;
                retVal   = (Std_ReturnType)E_OK;
            }
            else
            {
                if (PWM_NODEFINE_POWER == Pwm_eTargetPowerState[u8CoreId])
                {
                    /* [SWDESG_PWM_046] [SWS_Pwm_00159] [SWS_Pwm_00196] */
#if (PWM_DEV_ERROR_DETECT == STD_ON)
                    Pwm_ReportDetError((uint8)PWM_SETPOWERSTATE_ID,
                                       (uint8)PWM_E_PERIPHERAL_NOT_PREPARED);
#endif
                    eTempVal = PWM_SEQUENCE_ERROR;
                }
                else
                {
                    if ((PWM_LOW_POWER != Pwm_eTargetPowerState[u8CoreId]) &&
                        (PWM_FULL_POWER != Pwm_eTargetPowerState[u8CoreId]))
                    {
                        /* [SWDESG_PWM_046] [SWS_Pwm_00159] [SWS_Pwm_00194] */
#if (PWM_DEV_ERROR_DETECT == STD_ON)
                        Pwm_ReportDetError((uint8)PWM_SETPOWERSTATE_ID,
                                           (uint8)PWM_E_POWER_STATE_NOT_SUPPORTED);
#endif
                        eTempVal = PWM_POWER_STATE_NOT_SUPP;
                    }
                    else
                    {
                        retVal = Pwm_ValidateIdleState(Pwm_ConfigPtr[u8CoreId]);
                        if ((Std_ReturnType)E_OK == retVal)
                        {
                            Pwm_Hw_SetPowerState(Pwm_ConfigPtr[u8CoreId],
                                                 Pwm_eTargetPowerState[u8CoreId]);
                            eTempVal                         = PWM_SERVICE_ACCEPTED;
                            Pwm_eCurrentPowerState[u8CoreId] = Pwm_eTargetPowerState[u8CoreId];
                            Pwm_eTargetPowerState[u8CoreId]  = PWM_NODEFINE_POWER;
                            retVal                           = (Std_ReturnType)E_OK;
                        }
                        else
                        {
                            /* [SWDESG_PWM_046] [SWS_Pwm_00159] [SWS_Pwm_00200] [SWS_Pwm_00173] */
#if (PWM_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                            Pwm_ReportDetRuntimeError((uint8)PWM_SETPOWERSTATE_ID,
                                                      (uint8)PWM_E_NOT_DISENGAGED);
#endif
                            eTempVal = PWM_HW_FAILURE;
                        }
                    }
                }
            }
        }
        if (NULL_PTR != Result)
        {
            *Result = eTempVal;
        }
    }
    return retVal;
}

/**
 * @brief           Get PWM current power state
 *
 * @param[in]       CurrentPowerState   Get current power state
 * @param[in]       Result              Get current power state result
 *
 * @return          Call function result
 * [SWDESG_PWM_018] [SWS_Pwm_00088] [SWS_Pwm_00155] [SWS_Pwm_00156] [SWS_Pwm_00157]
 * [SWS_Pwm_00177] [SWS_Pwm_00178] [SWS_Pwm_00179]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_GetCurrentPowerState(Pwm_PowerStateType *CurrentPowerState,
                                                         Pwm_PowerStateRequestResultType *Result)
{
    Std_ReturnType                  retVal   = (Std_ReturnType)E_NOT_OK;
    Pwm_PowerStateRequestResultType eTempVal = PWM_NOT_INIT;
    uint8                           u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
        if ((NULL_PTR == Result) || (NULL_PTR == CurrentPowerState))
        {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
            /* [SWDESG_PWM_019] */
            Pwm_ReportDetError((uint8)PWM_GETCURRENTPOWERSTATE_ID, (uint8)PWM_E_PARAM_POINTER);
#endif
        }
        else
        {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
            if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
            {
                /* [SWDESG_PWM_020] */
                Pwm_ReportDetError((uint8)PWM_GETCURRENTPOWERSTATE_ID, (uint8)PWM_E_UNINIT);
            }
            else
#endif /* PWM_DEV_ERROR_DETECT */
            {
                *CurrentPowerState = Pwm_eCurrentPowerState[u8CoreId];
                eTempVal           = PWM_SERVICE_ACCEPTED;
                retVal             = (Std_ReturnType)E_OK;
            }
        }
        if (NULL_PTR != Result)
        {
            *Result = eTempVal;
        }
    }
    return retVal;
}

/**
 * @brief           Get PWM target power state
 *
 * @param[in]       TargetPowerState    Get target power state
 * @param[in]       Result              Get target power state result
 *
 * @return          Call function result
 * [SWDESG_PWM_024] [SWS_Pwm_00088] [SWS_Pwm_00155] [SWS_Pwm_00156] [SWS_Pwm_00157]
 * [SWS_Pwm_00180] [SWS_Pwm_00181] [SWS_Pwm_00182]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_GetTargetPowerState(Pwm_PowerStateType *TargetPowerState,
                                                        Pwm_PowerStateRequestResultType *Result)
{
    Std_ReturnType                  retVal   = E_NOT_OK;
    Pwm_PowerStateRequestResultType eTempVal = PWM_NOT_INIT;
    uint8                           u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
        if ((NULL_PTR == Result) || (NULL_PTR == TargetPowerState))
        {
            /* [SWDESG_PWM_025] */
#if (PWM_DEV_ERROR_DETECT == STD_ON)
            Pwm_ReportDetError((uint8)PWM_GETTARGETPOWERSTATE_ID, (uint8)PWM_E_PARAM_POINTER);
#endif
        }
        else
        {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
            if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
            {
                /* [SWDESG_PWM_026] */
                Pwm_ReportDetError((uint8)PWM_GETTARGETPOWERSTATE_ID, (uint8)PWM_E_UNINIT);
            }
            else
#endif /* PWM_DEV_ERROR_DETECT */
            {
                *TargetPowerState = Pwm_eTargetPowerState[u8CoreId];
                eTempVal          = PWM_SERVICE_ACCEPTED;
                retVal            = (Std_ReturnType)E_OK;
            }
        }
        if (NULL_PTR != Result)
        {
            *Result = eTempVal;
        }
    }
    return retVal;
}

/**
 * @brief           Prepare PWM power state
 *
 * @param[in]       PowerState      Prepare PWM power state
 * @param[in]       Result          Prepare PWM power state result
 *
 * @return          Call function result
 * [SWDESG_PWM_033] [SWS_Pwm_00088] [SWS_Pwm_00155] [SWS_Pwm_00156] [SWS_Pwm_00157]
 * [SWS_Pwm_00163] [SWS_Pwm_00183] [SWS_Pwm_00184]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_PreparePowerState(Pwm_PowerStateType               PowerState,
                                                      Pwm_PowerStateRequestResultType *Result)
{
    Std_ReturnType                  retVal   = E_NOT_OK;
    Pwm_PowerStateRequestResultType eTempVal = PWM_NOT_INIT;
    uint8                           u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    if (u8CoreId < MAX_CORE_NUM)
#endif
    {
#if (PWM_DEV_ERROR_DETECT == STD_ON)
        if (NULL_PTR == Result)
        {
            Pwm_ReportDetError((uint8)PWM_PREPAREPOWERSTATE_ID, (uint8)PWM_E_PARAM_POINTER);
        }
        else if (NULL_PTR == Pwm_ConfigPtr[u8CoreId])
        {
            /* [SWDESG_PWM_035] [SWS_Pwm_00186] */
            Pwm_ReportDetError((uint8)PWM_PREPAREPOWERSTATE_ID, (uint8)PWM_E_UNINIT);
        }
        else
#endif /* PWM_DEV_ERROR_DETECT */
        {
            if (Pwm_eCurrentPowerState[u8CoreId] != PowerState)
            {
                /* [SWS_Pwm_00160] */
                if ((PWM_LOW_POWER != PowerState) && (PWM_FULL_POWER != PowerState))
                {
                    /* [SWDESG_PWM_034] [SWS_Pwm_00159] [SWS_Pwm_00187] */
                    eTempVal = PWM_POWER_STATE_NOT_SUPP;
#if (PWM_DEV_ERROR_DETECT == STD_ON)
                    Pwm_ReportDetError((uint8)PWM_PREPAREPOWERSTATE_ID,
                                       (uint8)PWM_E_POWER_STATE_NOT_SUPPORTED);
#endif
                }
                else
                {
                    eTempVal                        = PWM_SERVICE_ACCEPTED;
                    Pwm_eTargetPowerState[u8CoreId] = PowerState;
                    retVal                          = (Std_ReturnType)E_OK;
                }
            }
            else
            {
                eTempVal                        = PWM_SEQUENCE_ERROR;
                Pwm_eTargetPowerState[u8CoreId] = PowerState;
                retVal                          = (Std_ReturnType)E_NOT_OK;
            }
        }

        if (NULL_PTR != Result)
        {
            *Result = eTempVal;
        }
    }
    return retVal;
}
#endif /*PWM_POWER_STATE_SUPPORTED*/
/* PRQA S 1503 --*/

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
