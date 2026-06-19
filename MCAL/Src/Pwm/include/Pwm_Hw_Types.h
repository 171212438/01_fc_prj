/**
*   @file    Pwm_Hw_Types.h
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
#ifndef PWM_HW_TYPES_H
#define PWM_HW_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Pwm_Eftu_Types.h"
#include "Pwm_Ftu_Types.h"
#include "Pwm_Types.h"
#include "Cpm_Reg.h"
#include "Mcal.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                         CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                            PLATFORM SPECIFIC DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
*                                    DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                         ENUMS
==================================================================================================*/
/**
 * @brief Output state of a PWM channel.
 * [SWS_Pwm_00108]
 */
typedef enum
{
    /** @brief Pwm level is logic high */
    PWM_HIGH = 0,/**< PWM_HIGH */
    /** @brief Pwm level is logic low */
	PWM_LOW    /**< PWM_LOW */
} Pwm_OutputStateType;

/**
 * @brief Definition of the type of edge notification of a PWM channel
 * [SWS_Pwm_00109]
 */
typedef enum
{
    /** @brief A notification will be generated on the rising edge */
    PWM_RISING_EDGE = 0,/**< PWM_RISING_EDGE */
    /** @brief A notification will be generated on the falling edge */
    PWM_FALLING_EDGE,   /**< PWM_FALLING_EDGE */
    /** @brief A notification will be generated on any state transition */
    PWM_BOTH_EDGES      /**< PWM_BOTH_EDGES */
} Pwm_EdgeNotificationType;

/**
 * @brief Power state currently active or set as target power state.
 * [SWS_Pwm_00197]
 */
typedef enum
{
    /** @brief Pwm full power mode */
    PWM_FULL_POWER = 0,/**< PWM_FULL_POWER */
    /** @brief Pwm low power mode */
    PWM_LOW_POWER,     /**< PWM_LOW_POWER */
    /** @brief Pwm no define power mode */
    PWM_NODEFINE_POWER /**< PWM_NODEFINE_POWER */
} Pwm_PowerStateType;

/**
 * @brief Result of the requests related to power state transitions.
 * [SWS_Pwm_00165]
 */
typedef enum
{
    /** @brief Power state change executed.*/
    PWM_SERVICE_ACCEPTED = 0,/**< PWM_SERVICE_ACCEPTED */
    /** @brief Module not initialized.*/
    PWM_NOT_INIT,            /**< PWM_NOT_INIT */
    /** @brief Wrong API call sequence.*/
    PWM_SEQUENCE_ERROR,      /**< PWM_SEQUENCE_ERROR */
    /** @brief The HW module has a failure which prevents it to enter the required power state.*/
    PWM_HW_FAILURE,          /**< PWM_HW_FAILURE */
    /** @brief Module does not support the requested power state.*/
    PWM_POWER_STATE_NOT_SUPP,/**< PWM_POWER_STATE_NOT_SUPP */
    /** @brief Module cannot transition directly from the current power state to the requested power state*/
    PWM_TRANS_NOT_POSSIBLE   /**< PWM_TRANS_NOT_POSSIBLE */
} Pwm_PowerStateRequestResultType;

/**
 * @brief Defines the class of a PWM channel
 * [SWS_Pwm_00110]
 */
typedef enum
{
    PWM_VARIABLE_PERIOD = 0,/**< The PWM channel has a variable period. The duty cycle and the period can be changed. */
    PWM_FIXED_PERIOD,       /**< The PWM channel has a fixed period. Only the duty cycle can be changed. */
    PWM_FIXED_PERIOD_SHIFTED/**< The PWM channel has a fixed shifted period. Impossible to change it ( only if supported by hardware) */
} Pwm_ChannelClassType;

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief Numeric identifier of a PWM channel.
* [SWS_Pwm_00106]
*/
typedef uint8 Pwm_ChannelType;

/**
* @brief PWM hardware instance type
*/
typedef uint8 Pwm_ModuleType;

/**
* @brief PWM global time base group type
* [FUNC_Pwm_0018]
*/
typedef uint32 Pwm_GtbGroupType;

/**
 * @brief Channel notification typedef
 */
typedef void (*Pwm_NotifyType)(void);

/**
* @brief Different hardware peripheral module configuration type
*/
typedef struct
{
    const uint8                             u8FtuModuleCount;
    const Pwm_Ftu_ModuleConfigType          *pFtuModuleCfg;
    const uint8                             u8EftuChannelCount;
    const Pwm_Eftu_ConfigType               *pEftuChannelCfg;
    const Pwm_Eftu_TomGlobal_ConfigType     *pEftuTomGlobalConfig;
} Pwm_ModuleConfigType;

/**
* @brief PWM channel configuration structure type
* [SWS_Pwm_00203]
*/
typedef struct
{
    const Pwm_InstanceType          ePwmModuleInstance;     /**< Module instance */
    const Pwm_ChannelType           u8HwChannelId;          /**< Channel id*/
    const Pwm_ChannelClassType      ePwmChannelClass;       /**< Channel class type*/
    const Pwm_OutputStateType       ePwmPolarity;           /**< PWM signal polarity: High or low */
    const Pwm_OutputStateType       ePwmIdleState;          /**< PWM signal idle state: High or low */
    const uint16                    u16PwmDefaultDutyCycle; /**< Default value for duty cycle: [0-0x8000] (0-100%) */
    const uint32                    u32PwmPhaseShiftCount;  /**< Phase shift count value */
    const Pwm_NotifyType            pPwmChannelNotification;/**< Pointer to notification function */
    const Pwm_Ftu_CombineType       eFtuCombineMode;        /**< Pwm channel combine or not */
    const Pwm_PhaseShiftType        ePhaseShiftMode;        /**< Pwm channel phase shift or not */
    const uint8                     u8CoreId;               /**< Only useful if multicore is enabled. Core assigned to PWM channel */
} Pwm_ChannelConfigType;

/**
 * @brief This is the type of data structure containing the initialization data for the PWM driver.
 * [SWS_Pwm_00111] [SWS_Pwm_00061]
 */
typedef struct
{
    const Pwm_ChannelConfigType *pPwmConfigChannels;    /** @brief Channel configurations pointer */
    const uint32                 u32PwmChannelsCount;   /** @brief Channel configurations count */
    const Pwm_ModuleConfigType   ePwmConfigModules;     /** @brief Module configurations pointer */
    const Pwm_ChannelType       *pHwToLogicChannelMap;  /** @brief Logic channel number to HW channel map */
    const Pwm_ModuleType        *pHwToLogicInstanceMap; /** @brief Logic channel number to HW instance map */
    const Pwm_ChannelType       *pLogicChannelToEftuMap;/** @brief Logic channel number to EFTU logic channel map */
    const Pwm_GtbGroupType      *pPwm_ConfigGtbGroup;   /** @brief Configurations for Pwm Gtb Groups */
} Pwm_ConfigType;
/*==================================================================================================
*                              GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                 FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* PWM_HW_TYPES_H */

/** @} */

