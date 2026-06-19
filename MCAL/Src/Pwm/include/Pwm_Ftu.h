/**
 *   @file    Pwm_Ftu.h
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
#ifndef PWM_FTU_H
#define PWM_FTU_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                    INCLUDE FILES
==================================================================================================*/
#include "Ftu_RegOps.h"
#include "Pwm_Cfg.h"
#include "Pwm_PBcfg.h"

#if (PWM_FTU_USED == STD_ON)
/*==================================================================================================
*                                     CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                 DEFINES AND MACROS
==================================================================================================*/
/** @brief PWM channel duty max value */
#define PWM_CHANNEL_DUTY_MAX          ((uint16)0xFFFF)
/** @brief PWM channel duty max value */
#define PWM_CHANNEL_DUTY_U24_MAX      ((uint32)0xFFFFFF)
/** @brief PWM max channel duty value */
#define PWM_FTU_DUTY_100              ((uint16)0x8000)
/** @brief PWM limit channel duty value */
#define PWM_FTU_UPPER_LIMIT_DUTY_MASK ((uint16)0x7FFF)

/** @brief PWM hardware to logic map index macro */
#define PWM_GET_HW2LOGIC_MAP_INDEX(module, channel) \
    (Pwm_Ftu_ChannelType)((PWM_TOM_MODULE_CHANNELS_NO * (uint32)(module)) + (uint32)(channel))
/** @brief PWM fault hardware to logic map index macro */
#define PWM_GET_FAULT_HW2LOGIC_MAP_INDEX(module, channel) \
    (Pwm_Ftu_ChannelType)((PWM_FTU_MODULE_FAULT_NO * (uint32)(module)) + (uint32)(channel))

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

PWM_TEXT_SECTION void Pwm_Ftu_InitChannel(const Pwm_ChannelConfigType *pFtuChannel,
                                          Pwm_AlignmentType            eAlingnment);

PWM_TEXT_SECTION void Pwm_Ftu_InitModule(const Pwm_Ftu_ModuleConfigType *pConfigModule);

#if (PWM_DE_INIT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Ftu_DeInitChannel(const Pwm_ChannelConfigType *pFtuChannel);

void Pwm_Ftu_DeinitModule(const Pwm_InstanceType eInstance);
#endif /* (PWM_DE_INIT_API == STD_ON) */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Ftu_SetDutyCycle(uint16                          u16DutyCycle,
                                           const Pwm_ChannelConfigType    *pFtuChannel,
                                           const Pwm_Ftu_ModuleConfigType *pModule);
#endif /* (PWM_SET_DUTY_CYCLE_API == STD_ON) */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Ftu_SetPeriodAndDuty(Pwm_PeriodType        u32Period,
                                               uint16                u16DutyCycle,
                                               const Pwm_ConfigType *pPwmConfig,
                                               uint8                 u8Channel,
                                               uint8                 u8Module);
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON))
PWM_TEXT_SECTION void Pwm_Ftu_ClearOutputForce(const Pwm_ChannelConfigType *pConfigChannel);
PWM_TEXT_SECTION void Pwm_Ftu_SetOutputToIdle(const Pwm_ChannelConfigType *pConfigChannel);
#endif /* ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)) */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
void Pwm_Ftu_DisableNotification(const Pwm_ChannelConfigType *pConfigChannel);

PWM_TEXT_SECTION void Pwm_Ftu_EnableNotification(uint16                       u16DutyCycle,
                                                 Pwm_EdgeNotificationType     eNotification,
                                                 Pwm_AlignmentType            eAlingnment,
                                                 const Pwm_ChannelConfigType *pConfigChannel);
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_Ftu_GetOutputState(
    const Pwm_ChannelConfigType *pConfigChannel);
#endif /* (PWM_GET_OUTPUT_STATE_API == STD_ON) */

#if (PWM_TRIGGER_OUT_API == STD_ON)
PWM_TEXT_SECTION void Pwm_Ftu_EnableTriggerOut(Pwm_InstanceType eFtuModule,
                                               uint8            u8FtuChannel,
                                               boolean          bReloadTrig);

PWM_TEXT_SECTION void Pwm_Ftu_DisableTriggerOut(Pwm_InstanceType eFtuModule,
                                                uint8            u8FtuChannel,
                                                boolean          bReloadTrig);
#endif /* (PWM_TRIGGER_OUT_API == STD_ON) */

#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
PWM_TEXT_SECTION void Pwm_Ftu_MaskOutputs(Pwm_InstanceType eModuleId, uint8 u8ChannelMask);

PWM_TEXT_SECTION void Pwm_Ftu_UnMaskOutputs(Pwm_InstanceType eModuleId, uint8 u8ChannelMask);
#endif /*PWM_ENABLE_MASKING_OPERATIONS*/

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
PWM_TEXT_SECTION uint32 Pwm_Ftu_GetMaxPeriodValue(Pwm_InstanceType eInstance);
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
Pwm_PeriodType Pwm_Ftu_GetPeriodValue(Pwm_InstanceType eInstance);
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_DEV_ERROR_DETECT == STD_ON)
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION Std_ReturnType Pwm_Ftu_ValidateNotification(Pwm_AlignmentType eAlignment,
                                                             Pwm_EdgeNotificationType eNotification);
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */
#endif /*(PWM_DEV_ERROR_DETECT == STD_ON)*/

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
PWM_TEXT_SECTION void Pwm_Ftu_SetPowerState(const Pwm_Ftu_ModuleConfigType *pModule,
                                            Pwm_PowerStateType              ePowerState);
#endif /* (PWM_POWER_STATE_SUPPORTED == STD_ON) */

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))
/**
 * @brief PWM FTU common interrupt handle function
 *
 * @param u8PwmModule PWM module
 */
PWM_TEXT_SECTION void Pwm_LL_FtuNCommonProcessInt(uint8  u8Instance,
                                                  uint32 u32Overflow,
                                                  uint32 u32ChannelIntrFlag,
                                                  uint32 u32FaultFlag);
#endif

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#endif /*PWM_FTU_USED*/

#ifdef __cplusplus
}
#endif

#endif /* PWM_FTU_H */
/** @} */
