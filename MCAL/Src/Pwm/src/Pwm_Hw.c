/**
 *   @file    Pwm_Hw.c
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
PwmDutycycleUpdatedEndperiod/PwmClass/PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                  INCLUDE FILES
==================================================================================================*/
/*
 * @file Pwm_Hw.c
 */
#include "Pwm_Eftu_Tom.h"
#include "Pwm_Ftu.h"
#include "Pwm_Hw.h"
#include "SchM_Pwm.h"
#include "Scm_RegOps.h"
#if (PWM_MULTICORE_ENABLED == STD_ON)
#include "SpinLock.h"
#endif
#if (PWM_GLOBALTIMEBASE_SUPPORTED == STD_ON)
#include "Ftu_Common.h"
#endif

/*==================================================================================================
*                     LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                    CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                 LOCAL VARIABLES
==================================================================================================*/
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */

#define PWM_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"
/**
 * @brief PWM channel state
 */
PWM_DATA_SECTION static uint8 s_aChannelState[PWM_NUM_CONF_CHANNELS] = PWM_CHANNEL_INTIAL_VALUE;

#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
/**
 * @brief PWM FTU instance state
 */
PWM_DATA_SECTION static uint8 s_aInstanceState[PWM_NUM_CONF_FTU_MODULES] = PWM_INSTANCE_INTIAL_VALUE;
#endif

#define PWM_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"
/**
 * @brief PWM channel duty value, the range is 0~0x8000
 */
PWM_DATA_SECTION uint16 s_aChannelDuty[PWM_NUM_CONF_CHANNELS] = { PWM_CHANNEL_DUTY_DEFAULT };

#define PWM_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#if (PWM_EFTU_USED == STD_ON)
/**
 * @brief PWM TOM cahnnel enable/disable status
 */
PWM_DATA_SECTION static uint32 s_aEftuTomEnDis[PWM_EFTU_MODULE_NO] = { 0U };
#endif

#define PWM_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

/* PRQA S 0686-- */
/*==================================================================================================
*                                GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                          LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#if (PWM_FTU_USED == STD_ON)
PWM_TEXT_SECTION static void Pwm_Ftu_Init(const Pwm_ConfigType *pPwmConfig);
#endif

#if (PWM_EFTU_USED == STD_ON)
PWM_TEXT_SECTION static void Pwm_Eftu_Init(const Pwm_ConfigType *pPwmConfig);
#endif
/*==================================================================================================
*                                LOCAL FUNCTIONS
=================================================================================================*/

#if (PWM_FTU_USED == STD_ON)
/**
 * @brief           Ftu initialize
 *
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_Ftu_Init(const Pwm_ConfigType *pPwmConfig)
{
    uint32           u32Index;
    Pwm_InstanceType eInstance;
    Pwm_ModuleType   u8ModuleIndex;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#endif

    /* FTU module initialization */
    for (u32Index = 0U; u32Index < pPwmConfig->ePwmConfigModules.u8FtuModuleCount; u32Index++)
    {
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
        if ((pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index].bModuleCoreUsed[u8CoreId] ==
             (boolean)TRUE) &&
            (s_aInstanceState[u32Index] == PWM_INSTANCE_NOINIT))
        {
#endif
            Pwm_Ftu_InitModule(&pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index]);
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
            /* save instance initial status */
            s_aInstanceState[u32Index] = PWM_INSTANCE_INITED;
        }
#endif
    }

    for (u32Index = 0U; u32Index < pPwmConfig->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == pPwmConfig->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = pPwmConfig->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (eInstance <= PWM_HW_FTU_END)
            {
                u8ModuleIndex = pPwmConfig->pHwToLogicInstanceMap[eInstance];
                Pwm_Ftu_InitChannel(
                    &pPwmConfig->pPwmConfigChannels[u32Index],
                    pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u8ModuleIndex].eAlingnment);
                /* save duty cycle value in logic channel array */
                s_aChannelDuty[u32Index] =
                    pPwmConfig->pPwmConfigChannels[u32Index].u16PwmDefaultDutyCycle;
                /* save channel status */
                s_aChannelState[u32Index] = PWM_CHANNEL_RUNNING;
            }
        }
    }
}
#endif

#if (PWM_EFTU_USED == STD_ON)
/**
 * @brief           Eftu initialize
 *
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_Eftu_Init(const Pwm_ConfigType *pPwmConfig)
{
    uint32           u32Index;
    Pwm_InstanceType eInstance;
    Pwm_ChannelType  u8TomChIdx;

#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#endif
    for (u32Index = 0U; u32Index < pPwmConfig->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == pPwmConfig->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = pPwmConfig->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
            {
                u8TomChIdx = pPwmConfig->pLogicChannelToEftuMap[u32Index];
                SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_18();
                Pwm_Eftu_Tom_InitChannel(&pPwmConfig->pPwmConfigChannels[u32Index],
                                         &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
                SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_18();
#if ((PWM_GET_CHANNEL_STATE_API == STD_ON) || (PWM_NOTIFICATION_SUPPORTED == STD_ON))
                /* save duty cycle value in logic channel array */
                s_aChannelDuty[u32Index] =
                    pPwmConfig->pPwmConfigChannels[u32Index].u16PwmDefaultDutyCycle;
#endif
                /* save channel status */
                s_aChannelState[u32Index] = PWM_CHANNEL_RUNNING;
                s_aEftuTomEnDis[eInstance - PWM_INSTANCE_EFTU_0_TOM_0] |=
                    ((uint32)0x2U << ((uint32)pPwmConfig->pPwmConfigChannels[u32Index].u8HwChannelId
                                      << 1U));
            }
        }
    }
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    for (u32Index = 0U; u32Index < PWM_EFTU_MODULE_NO; u32Index++)
    {
        if (s_aEftuTomEnDis[u32Index] != 0U)
        {
            Pwm_Eftu_Tom_InitTGC(&pPwmConfig->ePwmConfigModules, u32Index, s_aEftuTomEnDis[u32Index]);
        }
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}
#endif
/*==================================================================================================
*                               GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief           PWM module high level initialization function
 *
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_058] [SWS_Pwm_20009] [SWS_Pwm_30009]
 */
PWM_TEXT_SECTION void Pwm_Hw_Init(const Pwm_ConfigType *pPwmConfig)
{
#if (PWM_FTU_USED == STD_ON)
    Pwm_Ftu_Init(pPwmConfig);
#endif

#if (PWM_EFTU_USED == STD_ON)
    Pwm_Eftu_Init(pPwmConfig);
#endif
}

#if (PWM_DE_INIT_API == STD_ON)
/**
 * @brief           PWM high level De-initialization function
 *
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_051]
 */
PWM_TEXT_SECTION void Pwm_Hw_DeInit(const Pwm_ConfigType *pPwmConfig)
{
    uint32 u32Index;
#if (PWM_EFTU_USED == STD_ON)
    Pwm_ChannelType u8TomChIdx;
#endif
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#endif

    for (u32Index = 0U; u32Index < pPwmConfig->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == pPwmConfig->pPwmConfigChannels[u32Index].u8CoreId)
        {
#endif
#if (PWM_FTU_USED == STD_ON)
            if (pPwmConfig->pPwmConfigChannels[u32Index].ePwmModuleInstance <= PWM_HW_FTU_END)
            {
                Pwm_Ftu_DeInitChannel(&pPwmConfig->pPwmConfigChannels[u32Index]);
            }
#endif
#if (PWM_EFTU_USED == STD_ON)
            if ((pPwmConfig->pPwmConfigChannels[u32Index].ePwmModuleInstance >= PWM_HW_EFTU_START) &&
                (pPwmConfig->pPwmConfigChannels[u32Index].ePwmModuleInstance <= PWM_HW_EFTU_END))
            {
                u8TomChIdx = pPwmConfig->pLogicChannelToEftuMap[u32Index];
                Pwm_Eftu_DeInit(&pPwmConfig->pPwmConfigChannels[u32Index],
                                &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
            }
#endif
            /* set duty cycle to default */
            s_aChannelDuty[u32Index] = PWM_CHANNEL_DUTY_DEFAULT;
            /* set channel status to default */
            s_aChannelState[u32Index] = PWM_CHANNEL_IDLE;
#if (PWM_MULTICORE_ENABLED == STD_ON)
        }
#endif
    }

#if (PWM_FTU_USED == STD_ON)
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
    uint8 u8PwmChannelId;
    uint8 u8InstanceIndex;
    uint8 u8ChannelMapIndex;
    uint8 u8DeinitModuleFlag = 0U;
#endif
    for (u32Index = 0U; u32Index < pPwmConfig->ePwmConfigModules.u8FtuModuleCount; u32Index++)
    {
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
        if (pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index].bModuleCoreUsed[u8CoreId] ==
            (boolean)TRUE)
        {
            /* To perform Deinit-Module, ensure that all channels in the current instance are in the
             * IDLE state. */
            u8InstanceIndex = (uint8)pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index].eInstance;
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: The input instance and channel may not be 0 */
            for (u8PwmChannelId = PWM_GET_HW2LOGIC_MAP_INDEX(u8InstanceIndex, 0);
                 u8PwmChannelId <
                 PWM_GET_HW2LOGIC_MAP_INDEX(u8InstanceIndex, PWM_FTU_MODULE_CHANNELS_NO);
                 u8PwmChannelId++)
            /* PRQA S 2985 -- */
            {
                u8ChannelMapIndex = pPwmConfig->pHwToLogicChannelMap[u8PwmChannelId];
                if ((u8ChannelMapIndex != 0xFFU) &&
                    (s_aChannelState[u8ChannelMapIndex] != PWM_CHANNEL_IDLE))
                {
                    u8DeinitModuleFlag = 1U;
                    break;
                }
            }
            if (u8DeinitModuleFlag == 0U)
            {
#endif
                Pwm_Ftu_DeinitModule(pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index].eInstance);
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
                /* save instance status */
                s_aInstanceState[u32Index] = PWM_INSTANCE_NOINIT;
            }
            else
            {
                u8DeinitModuleFlag = 0U;
            }
        }
#endif
    }
#endif
}
#endif /* PWM_DE_INIT_API */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/**
 * @brief           PWM high level set duty cycle function
 *
 * @param[in]       u16DutyCycle    PWM duty cycle value
 * @param[in]       u8Channel       PWM channel number
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_060]
 */
PWM_TEXT_SECTION void Pwm_Hw_SetDutyCycle(uint16                u16DutyCycle,
                                          Pwm_ChannelType       u8Channel,
                                          const Pwm_ConfigType *pPwmConfig)
{
    Pwm_InstanceType eInstance = pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance;
#if (PWM_FTU_USED == STD_ON)
    if (eInstance <= PWM_HW_FTU_END)
    {
        Pwm_ModuleType u8ModuleIndex = pPwmConfig->pHwToLogicInstanceMap[eInstance];
#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
        if (PWM_CHANNEL_IDLE == (s_aChannelState[u8Channel] & PWM_CHANNEL_RUNNING))
        {
            /* If the channel is in idle state, calling this function should clear output force first */
            Pwm_Ftu_ClearOutputForce(&pPwmConfig->pPwmConfigChannels[u8Channel]);
        }
#endif
        Pwm_Ftu_SetDutyCycle(u16DutyCycle,
                             &pPwmConfig->pPwmConfigChannels[u8Channel],
                             &pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u8ModuleIndex]);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
    {
        Pwm_ChannelType u8TomChIdx = pPwmConfig->pLogicChannelToEftuMap[u8Channel];
#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
        if (PWM_CHANNEL_IDLE == (s_aChannelState[u8Channel] & PWM_CHANNEL_RUNNING))
        {
            /* If the channel is in idle state, calling this function should clear output force first */
            Pwm_Eftu_ClearOutputIdle(&pPwmConfig->pPwmConfigChannels[u8Channel],
                                     &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
        }
#endif
        Pwm_Eftu_SetDutyCycle(u16DutyCycle,
                              &pPwmConfig->pPwmConfigChannels[u8Channel],
                              &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
    }
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_10();

    /* save duty cycle value in logic channel array */
    s_aChannelDuty[u8Channel] = u16DutyCycle;

    /* set channel status to running */
    s_aChannelState[u8Channel] |= PWM_CHANNEL_RUNNING;

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_10();
}
#endif /* PWM_SET_DUTY_CYCLE_API */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
 * @brief           PWM high level set period and duty cycle function
 *
 * @param[in]       u32Period       PWM period value
 * @param[in]       u16DutyCycle    PWM duty cycle value
 * @param[in]       u8Channel       PWM channel number
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_062]
 */
PWM_TEXT_SECTION void Pwm_Hw_SetPeriodAndDuty(Pwm_PeriodType        u32Period,
                                              uint16                u16DutyCycle,
                                              Pwm_ChannelType       u8Channel,
                                              const Pwm_ConfigType *pPwmConfig)
{
    Pwm_InstanceType eInstance = pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance;
    uint16           u16TempDutyCycle = u16DutyCycle;

#if (PWM_FTU_USED == STD_ON)
    if (eInstance <= PWM_HW_FTU_END)
    {
        Pwm_ModuleType u8ModuleIndex = pPwmConfig->pHwToLogicInstanceMap[eInstance];

        if (0U == u32Period)
        {
            u16TempDutyCycle = 0U;
        }
#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
        else if (PWM_CHANNEL_IDLE == (s_aChannelState[u8Channel] & PWM_CHANNEL_RUNNING))
        {
            /* If the channel is in idle state, calling this function should clear output force first */
            Pwm_Ftu_ClearOutputForce(&pPwmConfig->pPwmConfigChannels[u8Channel]);
        }
        else
        {
            /* do nothing */
        }
#endif

        SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_11();
        /* set channel status to running */
        s_aChannelState[u8Channel] |= PWM_CHANNEL_RUNNING;

        /* save duty cycle value in logic channel array */
        s_aChannelDuty[u8Channel] = u16TempDutyCycle;

        SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_11();

        /* set period and duty cycle */
        Pwm_Ftu_SetPeriodAndDuty(u32Period, u16TempDutyCycle, pPwmConfig, u8Channel, u8ModuleIndex);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
    {
        Pwm_ChannelType u8TomChIdx = pPwmConfig->pLogicChannelToEftuMap[u8Channel];
#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
        if (PWM_CHANNEL_IDLE == (s_aChannelState[u8Channel] & PWM_CHANNEL_RUNNING))
        {
            /* If the channel is in idle state, calling this function should clear output force first */
            Pwm_Eftu_ClearOutputIdle(&pPwmConfig->pPwmConfigChannels[u8Channel],
                                     &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
        }
#endif
        if (0U == u32Period)
        {
            u16TempDutyCycle = 0U;
        }
        SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_20();
        /* set channel status to running */
        s_aChannelState[u8Channel] |= PWM_CHANNEL_RUNNING;

        /* save duty cycle value in logic channel array */
        s_aChannelDuty[u8Channel] = u16TempDutyCycle;

        SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_20();
        Pwm_Eftu_SetPeriodAndDuty(u32Period,
                                  u16TempDutyCycle,
                                  &pPwmConfig->pPwmConfigChannels[u8Channel],
                                  &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
    }
#endif
}
#endif /* PWM_SET_PERIOD_AND_DUTY_API */

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/**
 * @brief           PWM high level set output to idle state function
 *
 * @param[in]       u8Channel       PWM channel number
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_061]
 */
PWM_TEXT_SECTION void Pwm_Hw_SetOutputToIdle(Pwm_ChannelType       u8Channel,
                                             const Pwm_ConfigType *pPwmConfig)
{
    Pwm_InstanceType eInstance = pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance;

    if (PWM_CHANNEL_RUNNING == (s_aChannelState[u8Channel] & PWM_CHANNEL_RUNNING))
    {
#if (PWM_FTU_USED == STD_ON)
        if (eInstance <= PWM_HW_FTU_END)
        {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
            Pwm_Ftu_DisableNotification(&pPwmConfig->pPwmConfigChannels[u8Channel]);
#endif /* PWM_NOTIFICATION_SUPPORTED */

            Pwm_Ftu_SetOutputToIdle(&pPwmConfig->pPwmConfigChannels[u8Channel]);
        }
#endif
#if (PWM_EFTU_USED == STD_ON)
        if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
        {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
            Pwm_Eftu_DisableNotification(&pPwmConfig->pPwmConfigChannels[u8Channel]);
#endif /* PWM_NOTIFICATION_SUPPORTED */
            Pwm_Eftu_SetOutputToIdle(&pPwmConfig->pPwmConfigChannels[u8Channel]);
        }
#endif
        SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_12();
        /* set channel status to idle */
        s_aChannelState[u8Channel] &= ~PWM_CHANNEL_RUNNING;

        /* set duty cycle value to 0 */
        s_aChannelDuty[u8Channel] = PWM_FTU_DUTY_0;

        SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_12();
    }
}
#endif /* PWM_SET_OUTPUT_TO_IDLE_API */

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/**
 * @brief           PWM high level get output state function
 *
 * @param[in]       pPwmChannelConfig   PWM channel configuration pointer
 *
 * @return          PWM channel output state
 * [SWDESG_PWM_057]
 */
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_Hw_GetOutputState(
    const Pwm_ChannelConfigType *pPwmChannelConfig)
{
    Pwm_OutputStateType ePwmChannelState = PWM_LOW;
#if (PWM_FTU_USED == STD_ON)
    if (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        ePwmChannelState = Pwm_Ftu_GetOutputState(pPwmChannelConfig);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= pPwmChannelConfig->ePwmModuleInstance) &&
        (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_EFTU_END))
    {
        ePwmChannelState = Pwm_Eftu_GetOutputState(pPwmChannelConfig);
    }
#endif
    return ePwmChannelState;
}
#endif /* PWM_GET_OUTPUT_STATE_API */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM high level disable notification function
 *
 * @param[in]       pPwmChannelConfig PWM channel configuration pointer
 * [SWDESG_PWM_052]
 */
PWM_TEXT_SECTION void Pwm_Hw_DisableNotification(const Pwm_ChannelConfigType *pPwmChannelConfig)
{
#if (PWM_FTU_USED == STD_ON)
    if (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        Pwm_Ftu_DisableNotification(pPwmChannelConfig);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= pPwmChannelConfig->ePwmModuleInstance) &&
        (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_EFTU_END))
    {
        Pwm_Eftu_DisableNotification(pPwmChannelConfig);
    }
#endif
}

/**
 * @brief           PWM high level enable notification function
 *
 * @param[in]       eNotification   PWM edge detected type to generate notification
 * @param[in]       u8Channel       PWM channel number
 * @param[in]       pPwmConfig      PWM channel configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_054]
 */
PWM_TEXT_SECTION void Pwm_Hw_EnableNotification(Pwm_EdgeNotificationType eNotification,
                                                Pwm_ChannelType          u8Channel,
                                                const Pwm_ConfigType    *pPwmConfig)
{
    Pwm_InstanceType eInstance = pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance;
#if (PWM_FTU_USED == STD_ON)
    if (eInstance <= PWM_HW_FTU_END)
    {
        uint8 u8ModuleIndex = pPwmConfig->pHwToLogicInstanceMap[eInstance];
        Pwm_Ftu_EnableNotification(
            s_aChannelDuty[u8Channel],
            eNotification,
            pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u8ModuleIndex].eAlingnment,
            &pPwmConfig->pPwmConfigChannels[u8Channel]);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
    {
        Pwm_ChannelType u8TomChIdx = pPwmConfig->pLogicChannelToEftuMap[u8Channel];
        Pwm_Eftu_EnableNotification(s_aChannelDuty[u8Channel],
                                    eNotification,
                                    &pPwmConfig->pPwmConfigChannels[u8Channel],
                                    &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx]);
    }
#endif
}

#endif /* PWM_NOTIFICATION_SUPPORTED */

#if (PWM_GLOBALTIMEBASE_SUPPORTED == STD_ON)
/*
 * @brief           Config FTU global time base function
 *
 * @param[in]       u32Group    FTU global time base group number
 * @param[in]       benable     enable/disable FTU global time base function.
 *
 * @return          void
 * [SWDESG_PWM_091] [SWDESG_PWM_092]
 * */
PWM_TEXT_SECTION void Pwm_HW_ConfigGTB(const uint32 u32Group, boolean benable)
{
    FtuCommon_ConfigGTB(u32Group << 16U, benable);
}
#endif

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
/**
 * @brief           PWM high level get channel state
 *
 * @param[in]       u8Channel   PWM channel number
 * @param[in]       eInstance   PWM hardware instance
 *
 * @return          channel state
 * [SWDESG_PWM_056]
 */
PWM_TEXT_SECTION uint16 Pwm_Hw_GetChannelState(Pwm_ChannelType              u8Channel,
                                               const Pwm_ChannelConfigType *pPwmChannelConfig)
{
    uint16 u16State = 0;

#if (PWM_FTU_USED == STD_ON)
    if (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        if (0U != Pwm_Ftu_GetPeriodValue(pPwmChannelConfig->ePwmModuleInstance))
        {
            u16State = s_aChannelDuty[u8Channel];
        }
        else
        {
            u16State = 0U;
        }
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= pPwmChannelConfig->ePwmModuleInstance) &&
        (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_EFTU_END))
    {
        if (0U != Pwm_Eftu_GetPeriodValue(pPwmChannelConfig))
        {
            u16State = s_aChannelDuty[u8Channel];
        }
        else
        {
            u16State = 0U;
        }
    }
#endif
    return u16State;
}
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_TRIGGER_OUT_API == STD_ON)
/**
 * @brief           PWM high level enable trigger out function
 *
 * @param[in]       pPwmChannelConfig   PWM channel configuration pointer
 * @param[in]       bReloadTrig         Enable PWM channel reload trigger out
 *
 * @return          void
 * [SWDESG_PWM_055]
 */
PWM_TEXT_SECTION void Pwm_Hw_EnableTriggerOut(const Pwm_ChannelConfigType *pPwmChannelConfig,
                                              boolean                      bReloadTrig)
{
#if (PWM_FTU_USED == STD_ON)
    if (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        Pwm_Ftu_EnableTriggerOut(pPwmChannelConfig->ePwmModuleInstance,
                                 pPwmChannelConfig->u8HwChannelId,
                                 bReloadTrig);
    }
#endif
}

/**
 * @brief           PWM high level disable trigger out function
 *
 * @param[in]       pPwmChannelConfig   PWM channel configuration pointer
 * @param[in]       bReloadTrig         Disable PWM channel reload trigger out
 *
 * @return          void
 * [SWDESG_PWM_053]
 */
PWM_TEXT_SECTION void Pwm_Hw_DisableTriggerOut(const Pwm_ChannelConfigType *pPwmChannelConfig,
                                               boolean                      bReloadTrig)
{
#if (PWM_FTU_USED == STD_ON)
    if (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        Pwm_Ftu_DisableTriggerOut(pPwmChannelConfig->ePwmModuleInstance,
                                  pPwmChannelConfig->u8HwChannelId,
                                  bReloadTrig);
    }
#endif
}
#endif /*PWM_TRIGGER_OUT_API*/

#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
/**
 * @brief           PWM high level mask output
 *
 * @param[in]       pPwmChannelConfig   PWM channel configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_059]
 */
PWM_TEXT_SECTION void Pwm_Hw_MaskOutputs(const Pwm_ChannelConfigType *pPwmChannelConfig)
{
#if (PWM_FTU_USED == STD_ON)
    if (pPwmChannelConfig->ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        uint8 u8Mask;
        if (PWM_FTU_COMBINE_DISABLE != pPwmChannelConfig->eFtuCombineMode)
        {
            u8Mask = (3U << (pPwmChannelConfig->u8HwChannelId));
        }
        else
        {
            u8Mask = (1U << (pPwmChannelConfig->u8HwChannelId));
        }

        Pwm_Ftu_MaskOutputs(pPwmChannelConfig->ePwmModuleInstance, u8Mask);
    }
#endif
}

/**
 * @brief           PWM high level clear mask output,  it will disable the forced channel.
 *
 * @param[in]       pPwmChannelConfig   PWM channel configuration pointer
 *
 * @return          void
 * [SWDESG_PWM_064]
 */
PWM_TEXT_SECTION void Pwm_Hw_UnMaskOutputs(const Pwm_ConfigType *pPwmConfig, Pwm_ChannelType u8Channel)
{
#if (PWM_FTU_USED == STD_ON)
    if (pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance <= PWM_HW_FTU_END)
    {
        uint8 u8Mask;
        if (PWM_FTU_COMBINE_DISABLE != pPwmConfig->pPwmConfigChannels[u8Channel].eFtuCombineMode)
        {
            u8Mask = (3U << (pPwmConfig->pPwmConfigChannels[u8Channel].u8HwChannelId));
        }
        else
        {
            u8Mask = (1U << (pPwmConfig->pPwmConfigChannels[u8Channel].u8HwChannelId));
        }

        Pwm_Ftu_UnMaskOutputs(pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance, u8Mask);
    }
#endif
}
#endif /*PWM_ENABLE_MASKING_OPERATIONS*/

#if (PWM_DEV_ERROR_DETECT == STD_ON)
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM validate edge detected type to generate notification
 *
 * @param[in]       u8Channel       PWM channel number
 * @param[in]       pPwmConfig      PWM module configuration pointer
 * @param[in]       eNotification   PWM edge detected type to generate notification
 *
 * @return          PWM function return type
 * [SWDESG_PWM_066]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_Hw_ValidateNotification(Pwm_ChannelType          u8Channel,
                                                            const Pwm_ConfigType    *pPwmConfig,
                                                            Pwm_EdgeNotificationType eNotification)
{
    Std_ReturnType   u8RetVal  = (Std_ReturnType)E_OK;
    Pwm_InstanceType eInstance = pPwmConfig->pPwmConfigChannels[u8Channel].ePwmModuleInstance;
#if (PWM_FTU_USED == STD_ON)
    if (eInstance <= PWM_HW_FTU_END)
    {
        uint8 u8ModuleIndex = pPwmConfig->pHwToLogicInstanceMap[eInstance];
        u8RetVal            = Pwm_Ftu_ValidateNotification(
            pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u8ModuleIndex].eAlingnment,
            eNotification);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
    {
        Pwm_ChannelType u8TomChIdx = pPwmConfig->pLogicChannelToEftuMap[u8Channel];
        u8RetVal                   = Pwm_Eftu_ValidateNotification(
            &pPwmConfig->ePwmConfigModules.pEftuChannelCfg[u8TomChIdx],
            eNotification);
    }
#endif
    return u8RetVal;
}
#endif /* PWM_NOTIFICATION_SUPPORTED */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
 * @brief           PWM high level get max period value
 * @param[in]       eInstance   PWM hardware instance
 *
 * @return          Max period value
 * [SWDESG_PWM_159]
 */
PWM_TEXT_SECTION uint32 Pwm_Hw_GetMaxPeriodValue(Pwm_InstanceType eInstance)
{
    uint32 u32MaxPeriod = 0U;
#if (PWM_FTU_USED == STD_ON)
    if (eInstance <= PWM_HW_FTU_END)
    {
        u32MaxPeriod = Pwm_Ftu_GetMaxPeriodValue(eInstance);
    }
#endif
#if (PWM_EFTU_USED == STD_ON)
    if ((PWM_HW_EFTU_START <= eInstance) && (eInstance <= PWM_HW_EFTU_END))
    {
        u32MaxPeriod = PWM_TOM_CHANNEL_DUTY_U24_MAX;
    }
#endif
    return u32MaxPeriod;
}
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#endif /*(PWM_DEV_ERROR_DETECT == STD_ON)*/

#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
 * @brief           PWM validate idle state
 *
 * @param[in]       pPwmConfig      PWM module configuration pointer
 *
 * @return          PWM function return type
 * [SWDESG_PWM_065]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_Hw_ValidateIdleState(const Pwm_ConfigType *pPwmConfig)
{
    uint32         u32Index = 0U;
    Std_ReturnType retVal   = (Std_ReturnType)E_OK;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#endif
    for (u32Index = 0U; u32Index < pPwmConfig->u32PwmChannelsCount; u32Index++)
    {
        if (PWM_CHANNEL_RUNNING == (s_aChannelState[u32Index] & PWM_CHANNEL_RUNNING))
        {
#if (PWM_MULTICORE_ENABLED == STD_ON)
            if (pPwmConfig->pPwmConfigChannels[u32Index].u8CoreId == u8CoreId)
            {
#endif
                retVal = (Std_ReturnType)E_NOT_OK;
                break;
#if (PWM_MULTICORE_ENABLED == STD_ON)
            }
#endif
        }
    }

    return retVal;
}

/**
 * @brief           PWM set power state
 *
 * @param[in]       pPwmConfig      PWM module configuration pointer
 * @param[in]       ePowerState     PWM power state enumeration
 *
 * @return          void
 * [SWDESG_PWM_063]
 */
PWM_TEXT_SECTION void Pwm_Hw_SetPowerState(const Pwm_ConfigType *pPwmConfig,
                                           Pwm_PowerStateType    ePowerState)
{
    uint32 u32Index;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#endif
#if (PWM_FTU_USED == STD_ON)
    for (u32Index = 0U; u32Index < pPwmConfig->ePwmConfigModules.u8FtuModuleCount; u32Index++)
    {
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
        if (pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index].bModuleCoreUsed[u8CoreId] ==
            (boolean)TRUE)
        {
#endif
            /* call FTU function */
            Pwm_Ftu_SetPowerState(&pPwmConfig->ePwmConfigModules.pFtuModuleCfg[u32Index],
                                  ePowerState);
#if ((PWM_MULTICORE_ENABLED == STD_ON) && (PWM_CORE_USED_U8 > 1U))
        }
#endif
    }
#endif
}
#endif /* (PWM_POWER_STATE_SUPPORTED == STD_ON) */

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
