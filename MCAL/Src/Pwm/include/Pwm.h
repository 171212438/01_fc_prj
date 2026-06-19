/**
*   @file    Pwm.h
*   @version 1.5.1
*
*   @brief   AUTOSAR PWM - hardware specific type definition
*   @details This file contains the PWM AUTOSAR hardware specific type definition
*
*   @addtogroup PWM
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Pwm
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
*                                                        (update global time base, the timer width of FTU1/2 change to 24bit)
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          optimization the implement of PwmDutycycleUpdatedEndperiod/PwmClass/PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifndef PWM_H
#define PWM_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "Pwm_Cfg.h"
#include "Pwm_PBcfg.h"
#include "Pwm_Hw_Types.h"
#include "Pwm_version.h"
#include "Std_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
#define Pwm_Main_PowerTransitionManager()   ((void)0)
#endif /*PWM_POWER_STATE_SUPPORTED*/

#define PWM_DUTY_CYCLE_100                  ((uint16)0x8000U)

#define PWM_INIT_CORE_USED_VALID            ((uint8)0x01U)

#define PWM_INIT_CORE_USED_INVALID          ((uint8)0x00U)

/* [SWS_Pwm_00201] */
/**
* @brief initialization function called failed
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_INIT_FAILED                   (0x10U)

/**
* @brief function called without module initialization
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_20002] [SWS_Pwm_00117]
*/
#define PWM_E_UNINIT                        (0x11U)

/**
* @brief function called with invalid channel parameter
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_30002] [SWS_Pwm_00047]
*/
#define PWM_E_PARAM_CHANNEL                 (0x12U)

/**
* @brief set period function called with the channel which is unchangeable
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_40002]
*/
#define PWM_E_PERIOD_UNCHANGEABLE           (0x13U)

/**
* @brief initialization function called again
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_50002]
*/
#define PWM_E_ALREADY_INITIALIZED           (0x14U)

/**
* @brief function called with invalid pointer parameter
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_PARAM_POINTER                 (0x15U)

/**
* @brief set power state function called when the channel is disengaged
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_00202]
*/
#define PWM_E_NOT_DISENGAGED                (0x16U)

/**
* @brief power state function is not support
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_00174]
*/
#define PWM_E_POWER_STATE_NOT_SUPPORTED     (0x17U)

/**
* @brief the requested power state cannot be directly reached from the current power state
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_TRANSITION_NOT_POSSIBLE       (0x18U)

/**
* @brief the HW unit has not been previously prepared for the target power state by use of the API Pwm_PreparePowerState().
* @details Errors and exceptions that will be detected by the PWM driver
* [SWS_Pwm_00176]
*/
#define PWM_E_PERIPHERAL_NOT_PREPARED       (0x19U)

/**
* @brief the pointer to notification function is error
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_PARAM_NOTIFICATION            (0x30U)

/**
* @brief the pointer to notification function is null
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_PARAM_NOTIFICATION_NULL       (0x31U)

/**
* @brief invalid duty cycle range value
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_DUTYCYCLE_RANGE               (0x32U)

/**
* @brief Generated when the requested resource is configured to be unavailable on the current core.
* @details Only multi-core configuration is available.
*/
#define PWM_E_PARAM_CONFIG                  (0x40U)

/**
* @brief function called with invalid Gtb Group parameter
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_E_PARAM_GROUP                   (0x42U)

/**
* @brief initialization function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_INIT_ID                         (0x00U)

/**
* @brief De-initialization function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_DEINIT_ID                       (0x01U)

/**
* @brief set duty cycle function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_SETDUTYCYCLE_ID                 (0x02U)

/**
* @brief set period and duty cycle function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_SETPERIODANDDUTY_ID             (0x03U)

/**
* @brief set output to idle function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_SETOUTPUTTOIDLE_ID              (0x04U)

/**
* @brief get output state function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_GETOUTPUTSTATE_ID               (0x05U)

/**
* @brief disable notification function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_DISABLENOTIFICATION_ID          (0x06U)

/**
* @brief enable notification function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_ENABLENOTIFICATION_ID           (0x07U)

/**
* @brief get version function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_GETVERSIONINFO_ID               (0x08U)

/**
* @brief set power state function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_SETPOWERSTATE_ID                (0x09U)

/**
* @brief get current power state function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_GETCURRENTPOWERSTATE_ID         (0x0AU)

/**
* @brief get target power state function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_GETTARGETPOWERSTATE_ID          (0x0BU)

/**
* @brief prepare power state function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_PREPAREPOWERSTATE_ID            (0x0CU)

/**
* @brief get channel state function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_GETCHANNELSTATE_ID              (0x20U)

/**
* @brief enable trigger function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_ENABLETRIGGER_ID                (0x21U)

/**
* @brief disable trigger function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_DISABLETRIGGER_ID               (0x22U)

/**
* @brief mask output function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_MASKOUTPUT_ID                   (0x23U)

/**
* @brief unmask output function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_UNMASKOUTPUT_ID                 (0x24U)

/**
* @brief Enable global time base function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_STARTGLOBALTIME_ID              (0x30U)

/**
* @brief Disable global time base function id
* @details Errors and exceptions that will be detected by the PWM driver
*/
#define PWM_STOPGLOBALTIME_ID               (0x31U)

/*==================================================================================================
*                                         ENUMS
==================================================================================================*/


/*==================================================================================================
*                             STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                             GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                   FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

PWM_TEXT_SECTION void Pwm_Init(const Pwm_ConfigType *ConfigPtr);

#if (PWM_DE_INIT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_DeInit(void);
#endif/* ( PWM_DE_INIT_API == STD_ON) */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_SetDutyCycle(Pwm_ChannelType ChannelNumber, uint16 DutyCycle);
#endif/* ( PWM_SET_DUTY_CYCLE_API == STD_ON) */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION void Pwm_SetPeriodAndDuty(Pwm_ChannelType ChannelNumber,
                                           Pwm_PeriodType  Period,
                                           uint16          DutyCycle);
#endif/* ( PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_SetOutputToIdle(Pwm_ChannelType ChannelNumber);
#endif/* ( PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) */

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_GetOutputState(Pwm_ChannelType ChannelNumber);
#endif/* ( PWM_GET_OUTPUT_STATE_API == STD_ON) */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION void Pwm_EnableNotification(Pwm_ChannelType          ChannelNumber,
                                             Pwm_EdgeNotificationType Notification);

PWM_TEXT_SECTION void Pwm_DisableNotification(Pwm_ChannelType ChannelNumber);
#endif/* ( PWM_NOTIFICATION_SUPPORTED == STD_ON) */

#if (PWM_VERSION_INFO_API == STD_ON)
PWM_TEXT_SECTION void Pwm_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif/* ( PWM_VERSION_INFO_API == STD_ON) */

#if(PWM_GLOBALTIMEBASE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION void Pwm_StartGlobalTime(const uint32 u32Group);
PWM_TEXT_SECTION void Pwm_StopGlobalTime(const uint32 u32Group);
#endif
#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
PWM_TEXT_SECTION uint16 Pwm_GetChannelState(Pwm_ChannelType ChannelNumber);
#endif/* ( PWM_GET_CHANNEL_STATE_API == STD_ON) */


#if ( PWM_TRIGGER_OUT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_EnableTriggerOut(Pwm_ChannelType ChannelNumber, boolean bReloadTrig);

PWM_TEXT_SECTION void Pwm_DisableTriggerOut(Pwm_ChannelType ChannelNumber, boolean bReloadTrig);
#endif/* ( PWM_TRIGGER_OUT_API == STD_ON) */

#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
PWM_TEXT_SECTION void Pwm_MaskOutputs(Pwm_ChannelType ChannelNumber);

PWM_TEXT_SECTION void Pwm_UnMaskOutputs(Pwm_ChannelType ChannelNumber);
#endif/* ( PWM_ENABLE_MASKING_OPERATIONS == STD_ON) */


#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION Std_ReturnType Pwm_SetPowerState(Pwm_PowerStateRequestResultType *Result);

PWM_TEXT_SECTION Std_ReturnType Pwm_GetCurrentPowerState(Pwm_PowerStateType              *CurrentPowerState,
                                                         Pwm_PowerStateRequestResultType *Result);

PWM_TEXT_SECTION Std_ReturnType Pwm_GetTargetPowerState(Pwm_PowerStateType              *TargetPowerState,
                                                        Pwm_PowerStateRequestResultType *Result);

PWM_TEXT_SECTION Std_ReturnType Pwm_PreparePowerState(Pwm_PowerStateType               PowerState,
                                                      Pwm_PowerStateRequestResultType *Result);
#endif /*PWM_POWER_STATE_SUPPORTED*/

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* PWM_H */

/** @} */
