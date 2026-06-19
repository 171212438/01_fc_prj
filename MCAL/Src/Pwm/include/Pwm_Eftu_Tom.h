/**
 *   @file    Pwm_Eftu_Tom.h
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
*                                                        (update global time base, the timer width
of FTU1/2 change to 24bit)
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          optimization the implement of
PwmDutycycleUpdatedEndperiod/PwmClass/PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifndef PWM_EFTU_TOM_H
#define PWM_EFTU_TOM_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                    INCLUDE FILES
==================================================================================================*/
#include "Pwm_Eftu_Dtm_RegOps.h"
#include "Pwm_Eftu_Tom_RegOps.h"
#include "Pwm_Hrpwm_RegOps.h"
#include "Pwm_Cfg.h"
#include "Pwm_PBcfg.h"

#if (PWM_EFTU_USED == STD_ON)
/*==================================================================================================
*                                     CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                 DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief TOM Channel Mode Select
 *
 */
#define PWM_TOM_CHANNEL_MODE_SOMP    0x2U

/**
 * @brief DTM Channel output1 function select
 *
 */
#define PWM_DTM_OUTPUT1_SELECT_XOR   0x1U

/**
 * @brief DTM CH_CTRL1 deinit value
 *
 */
#define PWM_DTM_CH_CTRL1_RESET_VALUE 0x3BU

/**
 * @brief TOM counter max value
 *
 */
#define PWM_TOM_MAX_VALUE            0xFFFFFFU

/**
 * @brief Parameter used to determine whether the duty cycle is 0% or 100%
 *
 */
#define PWM_TOM_LIMIT_DUTY_MASK      ((uint16)0x7FFFU)

/**
 * @brief TOM Mode Control Bits. SR0_TRIG, SR0 used for TOM_OUT_T.
 *
 */
#define EFTU_TOM_TMCB_SR0_TRIG       ((uint8)0x08U)

/** @brief PWM hardware to logic map index macro */
#define GET_INDEX(module, channel) \
    (uint8)((PWM_TOM_MODULE_CHANNELS_NO * (uint32)(module)) + (uint32)(channel))

#if (defined(PWM_EFTU_0_TOM_0_ISR_USED) || defined(PWM_EFTU_0_TOM_1_ISR_USED) || \
     defined(PWM_EFTU_1_TOM_0_ISR_USED) || defined(PWM_EFTU_1_TOM_1_ISR_USED) || \
     defined(PWM_EFTU_2_TOM_0_ISR_USED) || defined(PWM_EFTU_2_TOM_1_ISR_USED))
#define PWM_EFTU_TOM_ISR_USED
#endif

/*==================================================================================================
*                                     ENUMS
==================================================================================================*/

/*==================================================================================================
*                          STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                          GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                              FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

PWM_TEXT_SECTION void Pwm_Eftu_Tom_InitChannel(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                               const Pwm_Eftu_ConfigType   *pEftuChannelCfg);
PWM_TEXT_SECTION void Pwm_Eftu_Tom_InitTGC(const Pwm_ModuleConfigType *pPwmConfigModules,
                                           const uint8                 u8TomModuleNo,
                                           const uint32                u32EnDis);

#if (PWM_DE_INIT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Eftu_DeInit(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                      const Pwm_Eftu_ConfigType   *pEftuChannelCfg);
#endif /* (PWM_DE_INIT_API == STD_ON) */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Eftu_SetDutyCycle(uint16                       u16DutyCycle,
                                            const Pwm_ChannelConfigType *pPwmChannelCfg,
                                            const Pwm_Eftu_ConfigType   *pEftuChannelCfg);
#endif /* (PWM_SET_DUTY_CYCLE_API == STD_ON) */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Eftu_SetPeriodAndDuty(Pwm_PeriodType               u32Period,
                                                uint16                       u16DutyCycle,
                                                const Pwm_ChannelConfigType *pPwmChannelCfg,
                                                const Pwm_Eftu_ConfigType   *pEftuChannelCfg);
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Eftu_ClearOutputIdle(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                               const Pwm_Eftu_ConfigType   *pEftuChannelCfg);
PWM_TEXT_SECTION void Pwm_Eftu_SetOutputToIdle(const Pwm_ChannelConfigType *pPwmChannelCfg);
#endif /* ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)) */

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_Eftu_GetOutputState(
    const Pwm_ChannelConfigType *pPwmChannelCfg);
#endif /* (PWM_GET_OUTPUT_STATE_API == STD_ON) */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION void Pwm_Eftu_DisableNotification(const Pwm_ChannelConfigType *pPwmChannelCfg);

PWM_TEXT_SECTION void Pwm_Eftu_EnableNotification(uint16                       u16DutyCycle,
                                                  Pwm_EdgeNotificationType     eNotification,
                                                  const Pwm_ChannelConfigType *pPwmChannelCfg,
                                                  const Pwm_Eftu_ConfigType   *pEftuChannelCfg);
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
PWM_TEXT_SECTION Pwm_PeriodType Pwm_Eftu_GetPeriodValue(const Pwm_ChannelConfigType *pConfigChannel);
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION Std_ReturnType Pwm_Eftu_ValidateNotification(
    const Pwm_Eftu_ConfigType *pEftuChannelCfg,
    Pwm_EdgeNotificationType   eNotification);
#endif /* PWM_NOTIFICATION_SUPPORTED == STD_ON */

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#endif /* PWM_EFTU_USED */

#ifdef __cplusplus
}
#endif

#endif /* (PWM_EFTU_USED == STD_ON) */
/** @} */
