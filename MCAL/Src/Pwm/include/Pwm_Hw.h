/**
*   @file    Pwm_Hw.h
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
#ifndef PWM_HW_H
#define PWM_HW_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                      INCLUDE FILES
==================================================================================================*/
#include "Pwm_Hw_Types.h"

/*==================================================================================================
*                                       CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                  DEFINES AND MACROS
==================================================================================================*/
/** @brief PWM min channel duty value */
#define PWM_FTU_DUTY_0              ((uint16)0)

/** @brief PWM channel default state */
#define PWM_CHANNEL_DEFAULT         ((uint8)0xFF)

/** @brief PWM channel duty default value */
#define PWM_CHANNEL_DUTY_DEFAULT    ((uint16)0xFFFF)

/** @brief PWM channel idle state */
#define PWM_CHANNEL_IDLE            ((uint8)0)

/** @brief PWM channel running state */
#define PWM_CHANNEL_RUNNING         ((uint8)1)

/** @brief PWM channel output force state */
#define PWM_CHANNEL_OUTPUT_FORCED   ((uint8)2)

/** @brief PWM Ftu module init state */
#define PWM_INSTANCE_INITED ((uint8)1)
#define PWM_INSTANCE_NOINIT ((uint8)0)

/*==================================================================================================
*                                  DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                        ENUMS
==================================================================================================*/

/*==================================================================================================
*                            STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                            GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                FUNCTION PROTOTYPES
==================================================================================================*/

#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

PWM_TEXT_SECTION void Pwm_Hw_Init(const Pwm_ConfigType *pPwmConfig);


#if (PWM_DE_INIT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_DeInit(const Pwm_ConfigType *pPwmConfig);
#endif /* PWM_DE_INIT_API */


#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_SetDutyCycle(uint16                u16DutyCycle,
                                          Pwm_ChannelType       u8Channel,
                                          const Pwm_ConfigType *pPwmConfig);
#endif /* PWM_SET_DUTY_CYCLE_API */


#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_SetPeriodAndDuty(Pwm_PeriodType        u32Period,
                                              uint16                u16DutyCycle,
                                              Pwm_ChannelType       u8Channel,
                                              const Pwm_ConfigType *pPwmConfig);
#endif /* PWM_SET_PERIOD_AND_DUTY_API */


#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_SetOutputToIdle(Pwm_ChannelType       u8Channel,
                                             const Pwm_ConfigType *pPwmConfig);
#endif /* PWM_SET_OUTPUT_TO_IDLE_API */


#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
Pwm_OutputStateType Pwm_Hw_GetOutputState(const Pwm_ChannelConfigType *pPwmChannelConfig);
#endif /* PWM_GET_OUTPUT_STATE_API */


#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_DisableNotification(const Pwm_ChannelConfigType *pPwmChannelConfig);

PWM_TEXT_SECTION void Pwm_Hw_EnableNotification(Pwm_EdgeNotificationType eNotification,
                                                Pwm_ChannelType          u8Channel,
                                                const Pwm_ConfigType    *pPwmConfig);
#endif /* PWM_NOTIFICATION_SUPPORTED */

#if(PWM_GLOBALTIMEBASE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION void Pwm_HW_ConfigGTB(const uint32 u32Group, boolean benable);
#endif

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
PWM_TEXT_SECTION uint16 Pwm_Hw_GetChannelState(Pwm_ChannelType u8Channel,
                                               const Pwm_ChannelConfigType *pPwmChannelConfig);
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_TRIGGER_OUT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_EnableTriggerOut(const Pwm_ChannelConfigType *pPwmChannelConfig,
                                              boolean                      bReloadTrig);

PWM_TEXT_SECTION void Pwm_Hw_DisableTriggerOut(const Pwm_ChannelConfigType *pPwmChannelConfig,
                                               boolean                      bReloadTrig);
#endif /* (PWM_TRIGGER_OUT_API == STD_ON) */

#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
PWM_TEXT_SECTION void Pwm_Hw_MaskOutputs(const Pwm_ChannelConfigType *pPwmChannelConfig);

PWM_TEXT_SECTION void Pwm_Hw_UnMaskOutputs(const Pwm_ConfigType *pPwmConfig,
                                           Pwm_ChannelType       u8Channel);
#endif /*PWM_ENABLE_MASKING_OPERATIONS*/



#if (PWM_DEV_ERROR_DETECT == STD_ON)
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION Std_ReturnType Pwm_Hw_ValidateNotification(Pwm_ChannelType          u8Channel,
                                                            const Pwm_ConfigType    *pPwmConfig,
                                                            Pwm_EdgeNotificationType eNotification);
#endif /* PWM_NOTIFICATION_SUPPORTED */


#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION uint32 Pwm_Hw_GetMaxPeriodValue(Pwm_InstanceType eInstance);
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */
#endif /*(PWM_DEV_ERROR_DETECT == STD_ON)*/

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION Std_ReturnType Pwm_Hw_ValidateIdleState(const Pwm_ConfigType *pPwmConfig);

PWM_TEXT_SECTION void Pwm_Hw_SetPowerState(const Pwm_ConfigType *pPwmConfig,
                                           Pwm_PowerStateType    ePowerState);
#endif /* PWM_POWER_STATE_SUPPORTED */

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* PWM_HW_H */

/** @} */
