/**
*   @file    Pwm_Cfg.h
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
#ifndef PWM_CFG_H
#define PWM_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Pwm_Types.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
 * @{
 * @file           Pwm_Cfg.h
 */
#define PWM_CFG_AR_RELEASE_MAJOR_VERSION          4
#define PWM_CFG_AR_RELEASE_MINOR_VERSION          6
#define PWM_CFG_AR_RELEASE_REVISION_VERSION       0
#define PWM_CFG_SW_MAJOR_VERSION                  1
#define PWM_CFG_SW_MINOR_VERSION                  5
#define PWM_CFG_SW_PATCH_VERSION                  1
#define PWM_CFG_VENDOR_ID                         174
#define PWM_CFG_MODULE_ID                         121

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       PLATFORM SPECIFIC DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief      Pwm Pre Compile Switch
 */
#define PWM_PRECOMPILE_SUPPORT                    (STD_ON)

/**
 * @brief      Switch to indicate that Pwm_DeInit API is supported
 *
 */
#define PWM_DE_INIT_API                           (STD_ON)

/**
 * @brief      Switch to indicate that Pwm_GetOutputState API is supported
 *
 */
#define PWM_GET_OUTPUT_STATE_API                  (STD_OFF)

/**
 * @brief      Switch to indicate that Pwm_SetDutyCycle API is supported
 *
 */
#define PWM_SET_DUTY_CYCLE_API                    (STD_ON)

/**
 * @brief      Switch to indicate that Pwm_SetOutputToIdle API is supported
 *
 */
#define PWM_SET_OUTPUT_TO_IDLE_API                (STD_ON)

/**
 * @brief      Switch to indicate that Pwm_SetPeriodAndDuty API is supported
 *
 */
#define PWM_SET_PERIOD_AND_DUTY_API               (STD_OFF)

/**
 * @brief      Switch to indicate that Pwm_GetVersionInfo API is supported
 *
 */
#define PWM_VERSION_INFO_API                      (STD_ON)

/**
 * @brief      Switch to indicate that Pwm_GetChannelState API is supported
 *
 */
#define PWM_GET_CHANNEL_STATE_API                 (STD_OFF)

/**
 * @brief      Switch for enabling the development error detection.
 *
 */
#define PWM_DEV_ERROR_DETECT                      (STD_ON)

/**
 * @brief      Switch to enable/disable the DET runtime error reporting.
 */
#define PWM_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS (STD_OFF)

/**
 * @brief      Switch for enabling the update of the duty cycle parameter at the end of the current period
 *
 */
#define PWM_DUTYCYCLE_UPDATED_ENDPERIOD           (STD_ON)

/**
 * @brief      Switch for enabling the update of the period parameter at the end of the current period
 *
 */
#define PWM_DUTY_PERIOD_UPDATED_ENDPERIOD         (STD_ON)

/**
 * @brief      Switch to indicate that the notifications are supported
 *
 */
#define PWM_NOTIFICATION_SUPPORTED                (STD_OFF)

/**
 * @brief      Switch for enabling the fault functionality
 *
 */
#define PWM_FAULT_SUPPORTED                       (STD_OFF)

/**
 * @brief      Switch for enabling Pwm_EnableTriggerOut()/Pwm_DisableTriggerOut() API
 *
 */
#define PWM_TRIGGER_OUT_API                       (STD_OFF)

/**
 * @brief      Switch for enabling MaskOutput API
 *
 */
#define PWM_ENABLE_MASKING_OPERATIONS             (STD_OFF)

/**
 * @brief      Switch to indicate that the notifications are supported
 *
 */
#define PWM_GLOBALTIMEBASE_SUPPORTED              (STD_OFF)

/**
 * @brief      Support for User mode.
 *             If this parameter has been configured to 'TRUE' the Pwm driver code can be executed from both supervisor and user mode.
 *
 */  
#define PWM_ENABLE_USER_MODE_SUPPORT              (STD_OFF)

/**
 * @brief      Enable/Disable multicore feature for PWM driver
 *
 */
#define PWM_MULTICORE_ENABLED                     (STD_ON)

/**
 * @brief        This is a timeout value which is used to wait till spinlock is acquired
 */
#define PWM_SPIN_LOCK_TIMEOUT                     (0x0000ffffUL)

/**
 * @brief      Specifies the InstanceId of this module instance.
 * @details    Specifies the InstanceId of this module instance.
 *             If only one instance is present it shall have the Id 0.
 *             Not used in the current implementation
 *
 */
#define PWM_INDEX                                 (0U)

/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct 
 * Reason: There are some marcos generated by configuration tool which used by user, so, this macros may not distinct */
/**
 * @brief      Symbolic Names for configured channels - legacy
 */
#define RGB1_BLUE                                 (0U)
#define RGB1_GREEN                                 (1U)
#define RGB2_RED                                 (2U)
#define Msc_Pwm_0                                 (3U)
#define Msc_Pwm_1                                 (4U)
#define Msc_Pwm_2                                 (5U)
#define Msc_Pwm_3                                 (6U)
#define Msc_Pwm_4                                 (7U)
#define RGB1_RED                                 (8U)
#define Msc_Pwm_6                                 (9U)
#define Msc_Pwm_7                                 (10U)
#define RGB2_BLUE                                 (11U)
#define RGB2_GREEN                                 (12U)

/** 
 * @brief      Symbolic Names for configured channels - ecuc 2108 compliant.
 */

#define  PwmConf_PwmChannel_RGB1_BLUE             (0U)
#define  PwmConf_PwmChannel_RGB1_GREEN             (1U)
#define  PwmConf_PwmChannel_RGB2_RED             (2U)
#define  PwmConf_PwmChannel_Msc_Pwm_0             (3U)
#define  PwmConf_PwmChannel_Msc_Pwm_1             (4U)
#define  PwmConf_PwmChannel_Msc_Pwm_2             (5U)
#define  PwmConf_PwmChannel_Msc_Pwm_3             (6U)
#define  PwmConf_PwmChannel_Msc_Pwm_4             (7U)
#define  PwmConf_PwmChannel_RGB1_RED             (8U)
#define  PwmConf_PwmChannel_Msc_Pwm_6             (9U)
#define  PwmConf_PwmChannel_Msc_Pwm_7             (10U)
#define  PwmConf_PwmChannel_RGB2_BLUE             (11U)
#define  PwmConf_PwmChannel_RGB2_GREEN             (12U)

/* PRQA S 0791 -- */


/**
 * @brief      Define to indicate Ftu is used
 *
 */
#define PWM_FTU_1_USED
#define PWM_FTU_2_USED
#define PWM_FTU_USED                            (STD_ON)

/**
 * @brief      Define to indicate EFTU is used
 *
 */
#define PWM_EFTU_0_TOM_0_USED
#define PWM_EFTU_0_TOM_1_USED
#define PWM_EFTU_USED                           (STD_ON)


/**
 * @brief This define specifies the deadtime feature used or not.
 * 
 */
#define EFTU_DEADTIME_SUPPORT

/**
 * @brief Number of configured Pwm channels
 */
#define PWM_NUM_CONF_CHANNELS           (13U)
#define PWM_NUM_CONF_FTU_MODULES        (2U)

#if(PWM_GLOBALTIMEBASE_SUPPORTED == STD_ON)
/**
 * @brief Number of configured Pwm global time base group
 */
#define PWM_NUM_CONF_GTB_GROUPS         (0U)
#endif

/**
 * @brief    Init state of PWM channels
 */
#define PWM_CHANNEL_INTIAL_VALUE        {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}

/**
 * @brief    Init state of PWM FTU instances
 */
#define PWM_INSTANCE_INTIAL_VALUE       {0U, 0U}

/**
 * @brief This define specifies the number of fault channels per module 
 * 
 */
#define PWM_FTU_MODULE_FAULT_NO         (2U)

/**
 * @brief maximum number of FTU modules configurable on this platform 
 * 
 */
#define PWM_FTU_MODULE_NO               (6U)

/**
 * @brief This define specifies the number of channels per each module 
 * 
 */
#define PWM_FTU_MODULE_CHANNELS_NO      (8U)

/**
 * @brief maximum number of FTU hardware channels 
 * 
 */
#define PWM_FTU_CHANNELS_NO             (PWM_FTU_MODULE_CHANNELS_NO * PWM_FTU_MODULE_NO)

/**
 * @brief maximum number of EFTU TOM modules configurable on this platform 
 * 
 */
#define PWM_EFTU_MODULE_NO              (2U)

/**
 * @brief maximum number of EFTU TOM modules configurable on this platform 
 * 
 */
#define PWM_TOM_MODULE_CHANNELS_NO      (8U)

/**
 * @brief maximum number of EFTU TOM hardware channels 
 * 
 */
#define PWM_EFTU_TOM_CHANNELS_NO        (PWM_EFTU_MODULE_NO * PWM_TOM_MODULE_CHANNELS_NO)

/**
 * @brief maximum number of hardware channels and modules configurable on this platform = modules * channels 
 * 
 */
#define PWM_HW_MODULES_NO_U8            (PWM_FTU_MODULE_NO + PWM_EFTU_MODULE_NO)

/**
 * @brief maximum number of hardware channels and modules configurable on this platform = modules * channels 
 * 
 */
#define PWM_HW_CHANNELS_NO_U8           (PWM_FTU_CHANNELS_NO + PWM_EFTU_TOM_CHANNELS_NO)

/** 
 * @brief Symbolic Name for period det error 
 * 
 */
#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) 
    #define PWM_E_PERIODVALUE           (0x1AU)
#endif

/**
 * @brief PWM module core used number
 *
 */
#define PWM_CORE_USED_U8                1U

/**
 * @brief PWM FTU module have 24bit counter
 *
 */
#define PWM_FTU_HAVE_24BIT_CNT          (STD_ON)

/**
 * @brief PWM FTU module have UPDOWN_DIS
 *
 */
#define PWM_FTU_HAVE_UPDOWNDIS          (STD_ON)

/**
 * @brief PWM FTU module start and end instance name
 *
 */
#define PWM_HW_FTU_START                (PWM_INSTANCE_FTU_0)
#define PWM_HW_FTU_END                  (PWM_INSTANCE_FTU_5)

/**
 * @brief PWM FTU module start and end instance name
 *
 */
#define PWM_HW_EFTU_START               (PWM_INSTANCE_EFTU_0_TOM_0)
#define PWM_HW_EFTU_END                 (PWM_INSTANCE_EFTU_0_TOM_1)

/**
 * @brief   Switch to enable that power state mode is supported
 *
 */

#define PWM_POWER_STATE_SUPPORTED              (STD_OFF)

#define PWM_POWER_STATE_ASYNCH_MODE_SUPPORTED  (STD_OFF)

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief      Pwm Period type (the value of the period is platform dependent and thus configurable)
 * @implements Pwm_PeriodType_typedef
 * [SWS_Pwm_00107]
 */
typedef uint32 Pwm_PeriodType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define PWM_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"


#define PWM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif    /*PWM_CFG_H*/

/** @} */

/** @} */

