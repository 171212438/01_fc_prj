/**
 *   @file    Pwm_Tom.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR PWM - hardware specific type definition
 *   @details This file contains the PWM AUTOSAR hardware specific type definition
 *
 *   @addtogroup PWM
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : EFTU
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
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                    INCLUDE FILES
==================================================================================================*/

/*
 * @file Pwm_Eftu_Tom.c
 */

#include "Pwm_Eftu_Tom.h"
#include "SchM_Pwm.h"

#if (PWM_EFTU_USED == STD_ON)
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                     LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                    GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                     LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    GLOBAL VARIABLES
==================================================================================================*/
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
#define PWM_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief PWM Eftu channel notification map
 */
PWM_DATA_SECTION static uint8 s_aEftuChannelNotifyEdge[PWM_EFTU_TOM_CHANNELS_NO] = { 0xFFU };

#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */

#define PWM_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"
/* PRQA S 0686-- */

#define PWM_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#if (defined PWM_EFTU_TOM_ISR_USED) && (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_DATA_SECTION static Pwm_NotifyType s_apPwmChannelCfgNotify[PWM_EFTU_TOM_CHANNELS_NO];
#endif /* defined PWM_EFTU_TOM_ISR_USED */

#define PWM_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

PWM_DATA_SECTION static uint32 s_aEftuCM0Value[PWM_EFTU_TOM_CHANNELS_NO];
PWM_DATA_SECTION static uint32 s_aEftuPeriodValue[PWM_EFTU_TOM_CHANNELS_NO];

#define PWM_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Pwm_MemMap.h"

#define PWM_START_SEC_CONST_32
#include "Pwm_MemMap.h"

PWM_DATA_SECTION static const uint32 s_aPwmEftuTomBase[PWM_EFTU_MODULE_NO] = EFTU_TOM_BASE_ADDRS;
#ifdef EFTU_DEADTIME_SUPPORT
PWM_DATA_SECTION static const uint32 s_aPwmEftuDtmBase[EFTU_DTM_DTV_COUNT] = EFTU_DTM_BASE_ADDRS;
#endif

#define PWM_STOP_SEC_CONST_32
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                 LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef PWM_EFTU_TOM_ISR_USED
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
PWM_TEXT_SECTION static void Pwm_Eftu_ProcessCommonInterrupt(uint8 u8EftuModule, uint8 u8EftuChannel);
#endif

#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
PWM_TEXT_SECTION ISR(PWM_EFTU0_TOM_0_7_ISR);
#endif

#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
PWM_TEXT_SECTION ISR(PWM_EFTU0_TOM_8_15_ISR);
#endif

#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
PWM_TEXT_SECTION ISR(PWM_EFTU1_TOM_0_7_ISR);
#endif

#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
PWM_TEXT_SECTION ISR(PWM_EFTU1_TOM_8_15_ISR);
#endif

#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
PWM_TEXT_SECTION ISR(PWM_EFTU2_TOM_0_7_ISR);
#endif

#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
PWM_TEXT_SECTION ISR(PWM_EFTU2_TOM_8_15_ISR);
#endif
#endif

#ifdef EFTU_DEADTIME_SUPPORT
PWM_TEXT_SECTION static void Pwm_Eftu_Dtm_InitChannel(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                                      const Pwm_Eftu_ConfigType   *pEftuChannelCfg);

#if (PWM_DE_INIT_API == STD_ON)
PWM_TEXT_SECTION static void Pwm_Eftu_Dtm_DeInitChannel(const Pwm_ChannelConfigType *pPwmChannelCfg);
#endif
#endif

#ifdef EFTU_HRPWM_SUPPORT
PWM_TEXT_SECTION static void Pwm_Hrpwm_Init(const Pwm_ChannelConfigType *pPwmChannelCfg);
#endif
/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/
#ifdef PWM_EFTU_TOM_ISR_USED
/* [SWS_Pwm_00026] */
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined
 * Reason: The object has defined in Bsp_Pwm.c file */
#if defined(PWM_EFTU_0_TOM_0_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
PWM_TEXT_SECTION ISR(PWM_EFTU0_TOM_0_7_ISR)
{
    uint8                u8TOMHwCh;
    uint8                u8Channel;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aPwmEftuTomBase[0U]);
    uint32               u32Index;
    Pwm_InstanceType     eInstance;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#else
    uint8 u8CoreId = 0U;
#endif

    for (u32Index = 0U; u32Index < Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (PWM_INSTANCE_EFTU_0_TOM_0 == eInstance)
            {
                u8Channel = (uint8)Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8HwChannelId;
                u8TOMHwCh = GET_INDEX(0U, u8Channel);
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU0_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(0U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8Channel);
                }
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU1_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(0U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8Channel);
                }
            }
        }
    }

    EXIT_INTERRUPT();
}
#endif

#if defined(PWM_EFTU_0_TOM_1_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
PWM_TEXT_SECTION ISR(PWM_EFTU0_TOM_8_15_ISR)
{
    uint8                u8TOMHwCh;
    uint8                u8Channel;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aPwmEftuTomBase[1U]);
    uint32               u32Index;
    Pwm_InstanceType     eInstance;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#else
    uint8 u8CoreId = 0U;
#endif

    for (u32Index = 0U; u32Index < Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (PWM_INSTANCE_EFTU_0_TOM_1 == eInstance)
            {
                u8Channel = (uint8)Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8HwChannelId;
                u8TOMHwCh = GET_INDEX(1U, u8Channel);
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU0_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(1U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8Channel);
                }
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU1_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(1U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8Channel);
                }
            }
        }
    }

    EXIT_INTERRUPT();
}
#endif

#if defined(PWM_EFTU_1_TOM_0_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
PWM_TEXT_SECTION ISR(PWM_EFTU1_TOM_0_7_ISR)
{
    uint8                u8TOMHwCh;
    uint8                u8Channel;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aPwmEftuTomBase[2U]);
    uint32               u32Index;
    Pwm_InstanceType     eInstance;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#else
    uint8 u8CoreId = 0U;
#endif

    for (u32Index = 0U; u32Index < Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (PWM_INSTANCE_EFTU_1_TOM_0 == eInstance)
            {
                u8Channel = (uint8)Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8HwChannelId;
                u8TOMHwCh = GET_INDEX(2U, u8Channel);
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU0_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(2U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8Channel);
                }
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU1_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(2U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8Channel);
                }
            }
        }
    }

    EXIT_INTERRUPT();
}
#endif

#if defined(PWM_EFTU_1_TOM_1_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
PWM_TEXT_SECTION ISR(PWM_EFTU1_TOM_8_15_ISR)
{
    uint8                u8TOMHwCh;
    uint8                u8Channel;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aPwmEftuTomBase[3U]);
    uint32               u32Index;
    Pwm_InstanceType     eInstance;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#else
    uint8 u8CoreId = 0U;
#endif

    for (u32Index = 0U; u32Index < Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (PWM_INSTANCE_EFTU_1_TOM_1 == eInstance)
            {
                u8Channel = (uint8)Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8HwChannelId;
                u8TOMHwCh = GET_INDEX(3U, u8Channel);
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU0_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(3U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8Channel);
                }
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU1_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(3U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8Channel);
                }
            }
        }
    }

    EXIT_INTERRUPT();
}
#endif

#if defined(PWM_EFTU_2_TOM_0_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
PWM_TEXT_SECTION ISR(PWM_EFTU2_TOM_0_7_ISR)
{
    uint8                u8TOMHwCh;
    uint8                u8Channel;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aPwmEftuTomBase[4U]);
    uint32               u32Index;
    Pwm_InstanceType     eInstance;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#else
    uint8 u8CoreId = 0U;
#endif

    for (u32Index = 0U; u32Index < Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (PWM_INSTANCE_EFTU_2_TOM_0 == eInstance)
            {
                u8Channel = (uint8)Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8HwChannelId;
                u8TOMHwCh = GET_INDEX(4U, u8Channel);
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU0_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(4U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8Channel);
                }
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU1_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(4U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8Channel);
                }
            }
        }
    }

    EXIT_INTERRUPT();
}
#endif

#if defined(PWM_EFTU_2_TOM_1_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
PWM_TEXT_SECTION ISR(PWM_EFTU2_TOM_8_15_ISR)
{
    uint8                u8TOMHwCh;
    uint8                u8Channel;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aPwmEftuTomBase[5U]);
    uint32               u32Index;
    Pwm_InstanceType     eInstance;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    uint8 u8CoreId = (uint8)GET_CPU_ID();
#else
    uint8 u8CoreId = 0U;
#endif

    for (u32Index = 0U; u32Index < Pwm_ConfigPtr[u8CoreId]->u32PwmChannelsCount; u32Index++)
    {
#if (PWM_MULTICORE_ENABLED == STD_ON)
        if (u8CoreId == Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8CoreId)
#endif
        {
            eInstance = Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].ePwmModuleInstance;
            if (PWM_INSTANCE_EFTU_2_TOM_1 == eInstance)
            {
                u8Channel = (uint8)Pwm_ConfigPtr[u8CoreId]->pPwmConfigChannels[u32Index].u8HwChannelId;
                u8TOMHwCh = GET_INDEX(5U, u8Channel);
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU0_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(5U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8Channel);
                }
                if (((s_aEftuChannelNotifyEdge[u8TOMHwCh] & PWM_TOM_CHANNEL_CCU1_FLAG) != 0U) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8Channel) == (boolean)TRUE) &&
                    (PWM_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8Channel) == (boolean)TRUE))
                {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
                    Pwm_Eftu_ProcessCommonInterrupt(5U, u8Channel);
#endif

                    /* Clear channel event interrupt flag */
                    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8Channel);
                }
            }
        }
    }

    EXIT_INTERRUPT();
}
#endif

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM Eftu interrupt common function
 *
 * @param[in]       u8EftuModule     Eftu module
 * @param[in]       u8EftuModule    Eftu channel
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_Eftu_ProcessCommonInterrupt(uint8 u8EftuModule, uint8 u8EftuChannel)
{
    uint8 u8CoreId;
#if (PWM_MULTICORE_ENABLED == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    if (NULL_PTR != Pwm_ConfigPtr[u8CoreId])
    {
        /* [FMR_Pwm_0001] */
        uint8 u8TOMHwCh = GET_INDEX(u8EftuModule, u8EftuChannel);
        if (s_apPwmChannelCfgNotify[u8TOMHwCh] != NULL_PTR)
        {
            s_apPwmChannelCfgNotify[u8TOMHwCh]();
        }
    }
}
#endif
#endif

#ifdef EFTU_HRPWM_SUPPORT
/**
 * @brief           Eftu initialize Hrpwm channel
 *
 * @param[in]       pPwmChannelCfg     Pwm channel configuration
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_Hrpwm_Init(const Pwm_ChannelConfigType *pPwmChannelCfg)
{
    const uint32 u32Mask = HRPWM_ANA_CTRL_ANA_LOCK_MASK | HRPWM_ANA_CTRL_ANA_POWER_OK_MASK;
    uint32       u32Temp;
    HRPWM_HWA_SetPhaseGeneration(HRPWM, TRUE);
    HRPWM_HWA_SetInternalLDOEnable(HRPWM, TRUE);
    do
    {
        u32Temp = HRPWM_HWA_GetANACtrl(HRPWM);
    }
    while ((u32Temp & u32Mask) != u32Mask);
    HRPWM_HWA_SetChannelEnable(HRPWM, pPwmChannelCfg->u8HwChannelId, TRUE);
    HRPWM_HWA_SetChannelBypass(HRPWM, pPwmChannelCfg->u8HwChannelId, FALSE);
    HRPWM_HWA_SetFaultRelease(HRPWM, pPwmChannelCfg->u8HwChannelId, HRPWM_FAULT_RELEASE_BY_EFTU_SIGNAL);
}
#endif

#ifdef EFTU_DEADTIME_SUPPORT
/**
 * @brief           Eftu initialize Dtm channel
 *
 * @param[in]       pPwmChannelCfg     Pwm channel configuration
 * @param[in]       pEftuChannelCfg    Eftu Tom channel specific configuration
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_Eftu_Dtm_InitChannel(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                                      const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint8 u8DtmChIdx     = pPwmChannelCfg->u8HwChannelId % EFTU_DTM_CHn_DTV_COUNT;
    uint8 u8EftuTomIdx   = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    uint8 u8DtmModuleIdx = (uint8)((u8EftuTomIdx * 2) +
                                   (pPwmChannelCfg->u8HwChannelId / EFTU_DTM_CHn_DTV_COUNT));
    EFTU_DTM_Type *const pDTM       = (EFTU_DTM_Type *)s_aPwmEftuDtmBase[u8DtmModuleIdx];
    uint32               u32Shift   = (uint32)u8DtmChIdx << 3U;
    uint32               u32CHCtrl2 = PWM_EFTU_DTM_HWA_GetCHCTRL2(pDTM);
    u32CHCtrl2 &= ~((EFTU_DTM_CH_CTRL2_DT0_0_MASK | EFTU_DTM_CH_CTRL2_OC0_0_MASK |
                     EFTU_DTM_CH_CTRL2_POL0_0_MASK | EFTU_DTM_CH_CTRL2_SL0_0_MASK |
                     EFTU_DTM_CH_CTRL2_DT1_0_MASK | EFTU_DTM_CH_CTRL2_OC1_0_MASK |
                     EFTU_DTM_CH_CTRL2_POL1_0_MASK | EFTU_DTM_CH_CTRL2_SL1_0_MASK)
                    << u32Shift);
    /* Set the clock source for the channel */
    PWM_EFTU_DTM_HWA_SetClockSource(pDTM, pEftuChannelCfg->tEftuDtmChannelConfig.u8DtmClkSrc);

    if (pEftuChannelCfg->tEftuDtmChannelConfig.eOutput1SigOption == PWM_EFTU_DTM_OUTPUT_TRIG)
    {
        /* The output1 select DTM_OUT_T to output trig */
        PWM_EFTU_DTM_HWA_SelectCombInputLogicPath(pDTM,
                                                  u8DtmChIdx,
                                                  EFTU_DTM_COMB_INPUT_LOGIC_PATH_SEL_DTM_IN_T);

        /* Output1 select funtion XOR */
        PWM_EFTU_DTM_HWA_SetOutput1Function(pDTM, u8DtmChIdx, PWM_DTM_OUTPUT1_SELECT_XOR);

        /* Output1 select special funtion */
        PWM_EFTU_DTM_HWA_SelectOutput1(pDTM, u8DtmChIdx, EFTU_DTM_O1SEL_SPECIAL_FUNTION);

        u32CHCtrl2 |= EFTU_DTM_CH_CTRL2_DT1_0(0x1U) << u32Shift;
    }
    else
    {
        if (pEftuChannelCfg->tEftuDtmChannelConfig.bFallingDeadTimeEnable == FALSE)
        {
            /* Invert the polarity of output1 to achieve synchronization or complementarity */
            PWM_EFTU_DTM_HWA_InvertOutput1(pDTM,
                                           u8DtmChIdx,
                                           pEftuChannelCfg->tEftuDtmChannelConfig.eOutput1SigOption);
        }
        else if (pEftuChannelCfg->tEftuDtmChannelConfig.eOutput1SigOption ==
                 PWM_EFTU_DTM_COMBINE_SYNCED)
        {
            PWM_EFTU_DTM_HWA_InvertOutput1(pDTM, u8DtmChIdx, TRUE);
        }
        else
        {
            /* do nothing */
        }
    }

    if (pEftuChannelCfg->tEftuDtmChannelConfig.bRisingDeadTimeEnable == TRUE)
    {
        /* Configure rising edge dead time */
        PWM_EFTU_DTM_HWA_SetRisingEdgeDeadTime(
            pDTM,
            u8DtmChIdx,
            pEftuChannelCfg->tEftuDtmChannelConfig.u16RisingDeadTime);

        /* Enable Dead Time 0
         * Output 0 is functional of constant value */
        u32CHCtrl2 |=
            (EFTU_DTM_CH_CTRL2_DT0_0(pEftuChannelCfg->tEftuDtmChannelConfig.bRisingDeadTimeEnable) |
             EFTU_DTM_CH_CTRL2_OC0_0(EFTU_DTM_OC_FUNCTIONAL))
            << u32Shift;
    }

    if (pEftuChannelCfg->tEftuDtmChannelConfig.bFallingDeadTimeEnable == TRUE)
    {
        /* Configure rising edge dead time */
        PWM_EFTU_DTM_HWA_SetFallingEdgeDeadTime(
            pDTM,
            u8DtmChIdx,
            pEftuChannelCfg->tEftuDtmChannelConfig.u16FallingDeadTime);

        /* Enable Dead Time 1
         * Output 1 is functional of constant value
         * Invert the polarity */
        u32CHCtrl2 |=
            (EFTU_DTM_CH_CTRL2_DT1_0(pEftuChannelCfg->tEftuDtmChannelConfig.bFallingDeadTimeEnable) |
             EFTU_DTM_CH_CTRL2_OC1_0(EFTU_DTM_OC_FUNCTIONAL))
            << u32Shift;
    }

    if (pEftuChannelCfg->tEftuDtmChannelConfig.bDtmOutputSwap == TRUE)
    {
        PWM_EFTU_DTM_HWA_SetSwapEnable(pDTM,
                                       u8DtmChIdx,
                                       pEftuChannelCfg->tEftuDtmChannelConfig.bDtmOutputSwap);
    }

    /* Update the channel control register */
    PWM_EFTU_DTM_HWA_SetCHCTRL2(pDTM, u32CHCtrl2);
}

#if (PWM_DE_INIT_API == STD_ON)
/**
 * @brief           Eftu De-initialize Dtm channel
 *
 * @param[in]       pPwmChannelCfg     Pwm channel configuration
 *
 * @return          void
 *
 */
PWM_TEXT_SECTION static void Pwm_Eftu_Dtm_DeInitChannel(const Pwm_ChannelConfigType *pPwmChannelCfg)
{
    uint8 u8DtmChIdx     = pPwmChannelCfg->u8HwChannelId % EFTU_DTM_CHn_DTV_COUNT;
    uint8 u8EftuTomIdx   = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    uint8 u8DtmModuleIdx = (uint8)((u8EftuTomIdx * 2) +
                                   (pPwmChannelCfg->u8HwChannelId / EFTU_DTM_CHn_DTV_COUNT));
    EFTU_DTM_Type *const pDTM = (EFTU_DTM_Type *)s_aPwmEftuDtmBase[u8DtmModuleIdx];

    /* Reset DTM clock source */
    PWM_EFTU_DTM_HWA_SetClockSource(pDTM, 0U);

    /* Reset the channel control 1 register of correspongding channel */
    PWM_EFTU_DTM_HWA_ResetCHCTRL1(pDTM, u8DtmChIdx, PWM_DTM_CH_CTRL1_RESET_VALUE);

    /* Reset the channel control 2 register of correspongding channel */
    PWM_EFTU_DTM_HWA_ResetCHCTRL2(pDTM, u8DtmChIdx, 0xFFU);

    /* Reset the channel control 3 register of correspongding channel */
    PWM_EFTU_DTM_HWA_ResetCHCTRL3(pDTM, u8DtmChIdx, 0xFU);

    /* Reset the channel deadtime value */
    PWM_EFTU_DTM_HWA_SetRisingEdgeDeadTime(pDTM, u8DtmChIdx, 0U);
    PWM_EFTU_DTM_HWA_SetFallingEdgeDeadTime(pDTM, u8DtmChIdx, 0U);
}
#endif
#endif

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/

/**
 * @brief           Eftu initialize channel
 *
 * @param[in]       pPwmChannelCfg     Pwm channel configuration
 * @param[in]       pEftuChannelCfg    Eftu Tom channel specific configuration
 *
 * @return          void
 * [SWDESG_PWM_161]
 */
PWM_TEXT_SECTION void Pwm_Eftu_Tom_InitChannel(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                               const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint32 u32ChCtrlValue;
    uint32 u32DutyVal;
    uint32 u32CM0;
    uint32 u32CM1;
    uint8  u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    uint8  u8TOMHwCh    = GET_INDEX(u8EftuTomIdx, pPwmChannelCfg->u8HwChannelId);
    uint8  u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];

    /* Reset channel */
    PWM_EFTU_TOM_HWA_ResetChannel(pTOM, (uint8)(1U << u8ChIdx));

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* disable CCU0/CCU1 Irq */
    PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

    /* clear interrupt flag */
    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);

#ifdef PWM_EFTU_TOM_ISR_USED
    /* save callback notification pointer */
    s_apPwmChannelCfgNotify[u8TOMHwCh] = pPwmChannelCfg->pPwmChannelNotification;
#endif
#endif

    /* Init channel configuration:
     * Channel mode select SOMP
     * Up/Down counter mdoe
     * Reset source of CCU0
     * Trigger output selection
     * Channel clock source select */
    u32ChCtrlValue = (uint32)(((uint32)(PWM_TOM_CHANNEL_MODE_SOMP << EFTU_TOM_CHn_CTRL_MODE_SHIFT)) |
                              ((uint32)(pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode
                                        << EFTU_TOM_CHn_CTRL_UDMODE_SHIFT)) |
                              ((uint32)((uint8)pEftuChannelCfg->tEftuTomChannelConfig.bPwmTomCntRstCcu0
                                        << EFTU_TOM_CHn_CTRL_RST_CCU0_SHIFT)) |
                              ((uint32)(pEftuChannelCfg->tEftuTomChannelConfig.u8ChTrigOut
                                        << EFTU_TOM_CHn_CTRL_TRIGOUT_SHIFT)));
    PWM_EFTU_TOM_HWA_SetChannelConfiguration(pTOM, u8ChIdx, u32ChCtrlValue);

    /* Write shadow clock source */
    PWM_EFTU_TOM_HWA_SetShadowClockSource(pTOM,
                                          u8ChIdx,
                                          pEftuChannelCfg->tEftuTomChannelConfig.u8TomChClkSrc);

    /* Save channel period value */
    s_aEftuPeriodValue[u8TOMHwCh] = pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue;
    if (pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode == PWM_CENTER_ALIGNED)
    {
        s_aEftuCM0Value[u8TOMHwCh] = pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue >>
                                     ((uint16)1U);
        /* In CPWM mode, the SL is opposite with the channel polarity */
        PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(
            pTOM,
            u8ChIdx,
            (EFTU_TOM_SignalLevelType)pPwmChannelCfg->ePwmPolarity);
        /* for CPWM,duty cycle = (2*CM1 - 1)/(period), period = 2*(CM0 - 1). */
        u32CM1 = (uint32)(((((uint64)pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue *
                             (uint64)pPwmChannelCfg->u16PwmDefaultDutyCycle) >>
                            15U)) >>
                          1U);
        u32CM0 = pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue >> ((uint16)1U);
    }
    else
    {
        s_aEftuCM0Value[u8TOMHwCh] = pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue;
        u32DutyVal = (uint32)(((uint64)pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue *
                               (uint64)pPwmChannelCfg->u16PwmDefaultDutyCycle) >>
                              15U);
        PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(
            pTOM,
            u8ChIdx,
            (EFTU_TOM_SignalLevelType)(1 - pPwmChannelCfg->ePwmPolarity));
        if (pPwmChannelCfg->ePhaseShiftMode == PWM_PHASESHIFT_ENABLE)
        {
            u32CM0 = pPwmChannelCfg->u32PwmPhaseShiftCount;
            if (pPwmChannelCfg->u16PwmDefaultDutyCycle == 0U)
            {
                u32CM0 = PWM_TOM_MAX_VALUE;
                u32CM1 = 0u;
            }
            else if (pPwmChannelCfg->u16PwmDefaultDutyCycle == 0x8000u)
            {
                u32CM0 = 0u;
                u32CM1 = PWM_TOM_MAX_VALUE;
            }
            else
            {
                if ((pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyVal) > s_aEftuCM0Value[u8TOMHwCh])
                {
                    u32CM1 = pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyVal -
                             s_aEftuCM0Value[u8TOMHwCh];
                }
                else
                {
                    u32CM1 = pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyVal;
                }
            }
        }
        else
        {
            /* For EPWM, Duty cycle = CM1/(CM0-1). */
            u32CM1 = u32DutyVal;
            u32CM0 = pEftuChannelCfg->tEftuTomChannelConfig.u32PeriodValue;
        }
        if ((pEftuChannelCfg->tEftuTomChannelConfig.u8ChTrigOut == 1u) &&
            ((uint8)pEftuChannelCfg->tEftuTomChannelConfig.bPwmTomCntRstCcu0 == 0u))
        {
            /* When RST_CCU0 is 1, the CCU0 counter is reset to period, ensure the first period can
             * output. */
            PWM_EFTU_TOM_HWA_SetCCU0Counter(pTOM, u8ChIdx, u32CM0);
        }
    }

    if (pEftuChannelCfg->tHrpwmChannelConfig.bHrpwmSupport == TRUE)
    {
        PWM_EFTU_TOM_HWA_SetHRPWMSupport(pTOM, u8ChIdx, TRUE);
        u32CM1 = (uint32)((u32CM1 << 0x5U) +
                          pEftuChannelCfg->tHrpwmChannelConfig.u8HrpwmDutyMicroStep);
        u32CM0 = (uint32)((u32CM0 << 0x5U) +
                          pEftuChannelCfg->tHrpwmChannelConfig.u8HrpwmPeriodMicroStep);
    }

    /* Set duty cycle CM1 value */
    PWM_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CM1);
    PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32CM1);

    /* In SOMP mode, if the period is fixed, the SR0 can use to generate TOM_OUT_T */
    if (pEftuChannelCfg->tEftuDtmChannelConfig.eOutput1SigOption == PWM_EFTU_DTM_OUTPUT_TRIG)
    {
        /* The channel is fixed period, SR0 dose not necessary to update CM0. SR0 can be used to
         * define an additional output signal and interrupt trig. */
        PWM_EFTU_TOM_HWA_SetTomModeCtrl(pTOM, u8ChIdx, EFTU_TOM_TMCB_SR0_TRIG);

        /* Write period CM0 value */
        PWM_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, u32CM0);
        PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM,
                                         u8ChIdx,
                                         pEftuChannelCfg->tEftuTomChannelConfig.u32TrigDelay);
    }
    else
    {
        /* Write period CM0 value */
        PWM_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, u32CM0);
        PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, u32CM0);
    }

#ifdef EFTU_HRPWM_SUPPORT
    if (pEftuChannelCfg->tHrpwmChannelConfig.bHrpwmSupport == TRUE)
    {
        Pwm_Hrpwm_Init(pPwmChannelCfg);
    }
#endif

#ifdef EFTU_DEADTIME_SUPPORT
    if (pEftuChannelCfg->tEftuDtmChannelConfig.bDeadTimeUsed == TRUE)
    {
        Pwm_Eftu_Dtm_InitChannel(pPwmChannelCfg, pEftuChannelCfg);
    }
#endif
}

/**
 * @brief           Eftu initialize Tom TGC registers
 *
 * @param[in]       u8TomModuleNo     Pwm Eftu Tom module number
 * @param[in]       u32EnDis          Value to write to the TGC register
 *
 * @return          void
 * [SWDESG_PWM_162]
 */
PWM_TEXT_SECTION void Pwm_Eftu_Tom_InitTGC(const Pwm_ModuleConfigType *pPwmConfigModules,
                                           const uint8                 u8TomModuleNo,
                                           const uint32                u32EnDis)
{
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8TomModuleNo];
    if (pPwmConfigModules->pEftuTomGlobalConfig[u8TomModuleNo].bPwmTomGlbEn == TRUE)
    {
        PWM_EFTU_TOM_HWA_EnableGlobalTimeBase(pTOM);
    }
    /* Enable channel output */
    PWM_EFTU_TOM_HWA_SetChannelOutputEnDisOnUpdateTrig(pTOM, u32EnDis);

    /* Enable channel */
    PWM_EFTU_TOM_HWA_SetChannelEnDisOnUpdateTrig(pTOM, u32EnDis);

    /* Set host trig */
    PWM_EFTU_TOM_HWA_EnDisForceUpdate(pTOM, u32EnDis);
    PWM_EFTU_TOM_HWA_SetHostTriggerRequest(pTOM);
    PWM_EFTU_TOM_HWA_EnDisForceUpdate(pTOM, ~u32EnDis);
}

#if (PWM_DE_INIT_API == STD_ON)
/**
 * @brief           PWM Eftu low level De-initialization function
 *
 * @param[in]       pPwmChannelCfg     Eftu channel configuration
 * @param[in]       pEftuChannelCfg    Eftu Tom channel specific configuration
 *
 * @return          void
 * [SWDESG_PWM_163]
 */
PWM_TEXT_SECTION void Pwm_Eftu_DeInit(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                      const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint32 u32ChCtrlValue;
    uint8  u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    uint8  u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    uint8  u8TOMHwCh    = GET_INDEX(u8EftuTomIdx, pPwmChannelCfg->u8HwChannelId);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];

    /* Disable channel */
    PWM_EFTU_TOM_HWA_DisableChannelOnUpdateTrig(pTOM, u8ChIdx);

    /* Disable channel output. DeInit shall set the state of the PWM output signals to the idle state */
    PWM_EFTU_TOM_HWA_DisableChannelOutputOnUpdateTrig(pTOM, u8ChIdx);

    /* Disable channel enable update register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR */
    PWM_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);

    /* Reset channel configuration */
    u32ChCtrlValue = (pPwmChannelCfg->ePwmIdleState) << EFTU_TOM_CHn_CTRL_SL_SHIFT;
    PWM_EFTU_TOM_HWA_ResetChannelConfiguration(pTOM, u8ChIdx, u32ChCtrlValue);
    PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(
        pTOM,
        u8ChIdx,
        (EFTU_TOM_SignalLevelType)pPwmChannelCfg->ePwmIdleState);
    PWM_EFTU_TOM_HWA_SetShadowClockSource(pTOM, u8ChIdx, 0U);

    /* Reset channel counter */
    PWM_EFTU_TOM_HWA_SetCCU0Counter(pTOM, u8ChIdx, 0U);

    /* Reset all counter relative registers */
    PWM_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, 0U);
    PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, 0U);
    PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, 0U);
    PWM_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);

    /* Disable output channel interrupts */
    PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

    /* clear interrupt flag */
    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);

#ifdef EFTU_HRPWM_SUPPORT
    if (pEftuChannelCfg->tHrpwmChannelConfig.bHrpwmSupport == TRUE)
    {
        HRPWM_HWA_SetChannelEnable(HRPWM, u8ChIdx, FALSE);
        HRPWM_HWA_SetInternalLDOEnable(HRPWM, FALSE);
        HRPWM_HWA_SetPhaseGeneration(HRPWM, FALSE);
    }
#endif

#ifdef EFTU_DEADTIME_SUPPORT
    if (pEftuChannelCfg->tEftuDtmChannelConfig.bDeadTimeUsed == TRUE)
    {
        /* De-initialize deadtime module */
        Pwm_Eftu_Dtm_DeInitChannel(pPwmChannelCfg);
    }
#endif
    PWM_EFTU_TOM_HWA_DisableGlobalTimeBase(pTOM);

    /* Set host trig */
    PWM_EFTU_TOM_HWA_EnableForceUpdate(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_SetHostTriggerRequest(pTOM);
    PWM_EFTU_TOM_HWA_DisableForceUpdate(pTOM, u8ChIdx);

    s_aEftuCM0Value[u8TOMHwCh]    = 0U;
    s_aEftuPeriodValue[u8TOMHwCh] = 0U;
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    s_aEftuChannelNotifyEdge[u8TOMHwCh] = 0xFFU;
#endif
}
#endif /* PWM_DE_INIT_API */

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/**
 * @brief           PWM low level set duty cycle value
 *
 * @param[in]       u16DutyCycle        PWM duty cycle value
 * @param[in]       pPwmChannelCfg      Eftu channel configuration
 * @param[in]       pEftuChannelCfg     Eftu Tom channel specific configuration
 *
 * @return          void
 * [SWDESG_PWM_164]
 */
PWM_TEXT_SECTION void Pwm_Eftu_SetDutyCycle(uint16                       u16DutyCycle,
                                            const Pwm_ChannelConfigType *pPwmChannelCfg,
                                            const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint32 u32DutyValue;
    uint32 u32Period;
    uint8  u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    uint8  u8TOMHwCh    = GET_INDEX(u8EftuTomIdx, pPwmChannelCfg->u8HwChannelId);
    uint8  u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];
    uint32               u32CM1;

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_13();

    u32Period = s_aEftuPeriodValue[u8TOMHwCh];
    if (pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode == PWM_CENTER_ALIGNED)
    {
        u32DutyValue = (uint32)(((((uint64)u32Period) * ((uint64)u16DutyCycle)) >> 15U) >> 1U);
    }
    else
    {
        u32DutyValue = (uint32)((((uint64)u32Period) * ((uint64)u16DutyCycle)) >> 15U);
    }

    if (pPwmChannelCfg->ePhaseShiftMode == PWM_PHASESHIFT_DISABLE)
    {
#if (PWM_DUTYCYCLE_UPDATED_ENDPERIOD == STD_ON)
        /* Update the period and duty cycle at the end of the period through shadow registers */
        PWM_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32DutyValue);
        PWM_EFTU_TOM_HWA_EnableChannelUpdate(pTOM, u8ChIdx);
#else
        /* Update duty cycle immediately and cut the current waveform */
        PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32DutyValue);

        /* Cut the current waveform */
        PWM_EFTU_TOM_HWA_EnableForceUpdateResetCN0(pTOM, u8ChIdx);

        /* Set host trig */
        PWM_EFTU_TOM_HWA_EnableForceUpdate(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_SetHostTriggerRequest(pTOM);
        PWM_EFTU_TOM_HWA_DisableForceUpdate(pTOM, u8ChIdx);

        PWM_EFTU_TOM_HWA_DisableForceUpdateResetCN0(pTOM, u8ChIdx);
#endif
    }
    else
    {
#if (PWM_DUTYCYCLE_UPDATED_ENDPERIOD == STD_ON)
        /* Update the period and duty cycle at the end of the peroid through shadow registers */
        if (u32DutyValue == 0U)
        {
            /* Disable channel enable update register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR */
            PWM_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);
            PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, PWM_TOM_MAX_VALUE);
            PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, 0U);
            /* Enable channel enable update register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR */
            PWM_EFTU_TOM_HWA_EnableChannelUpdate(pTOM, u8ChIdx);
        }
        else if (u16DutyCycle == 0x8000)
        {
            PWM_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);
            PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, 0U);
            PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, PWM_TOM_MAX_VALUE);
            PWM_EFTU_TOM_HWA_EnableChannelUpdate(pTOM, u8ChIdx);
        }
        else
        {
            PWM_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);
            if ((pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyValue) > u32Period)
            {
                u32CM1 = pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyValue - u32Period;
            }
            else
            {
                u32CM1 = pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyValue;
            }
            PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, pPwmChannelCfg->u32PwmPhaseShiftCount);
            PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32CM1);
            PWM_EFTU_TOM_HWA_EnableChannelUpdate(pTOM, u8ChIdx);
        }
#else
        /* Update the period and duty cycle immediately */
        if (u32DutyValue == 0U)
        {
            PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, PWM_TOM_MAX_VALUE);
            PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, 0U);
        }
        else if (u16DutyCycle == 0x8000u)
        {
            PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, 0U);
            PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, PWM_TOM_MAX_VALUE);
        }
        else
        {
            if ((pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyValue) > u32Period)
            {
                u32CM1 = pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyValue - u32Period;
            }
            else
            {
                u32CM1 = pPwmChannelCfg->u32PwmPhaseShiftCount + u32DutyValue;
            }
            PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, pPwmChannelCfg->u32PwmPhaseShiftCount);
            PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32CM1);
        }
        /* Cut the current waveform */
        PWM_EFTU_TOM_HWA_EnableForceUpdateResetCN0(pTOM, u8ChIdx);

        /* Set host trig */
        PWM_EFTU_TOM_HWA_EnableForceUpdate(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_SetHostTriggerRequest(pTOM);
        PWM_EFTU_TOM_HWA_DisableForceUpdate(pTOM, u8ChIdx);

        PWM_EFTU_TOM_HWA_DisableForceUpdateResetCN0(pTOM, u8ChIdx);
#endif
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_13();
}
#endif /* (PWM_SET_DUTY_CYCLE_API == STD_ON) */

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
 * @brief           PWM Eftu low level set period and duty cycle function
 *
 * @param[in]       u16Period       PWM Eftu period value
 * @param[in]       u16DutyCycle    PWM Eftu duty cycle value
 * @param[in]       pPwmChannelCfg     Eftu channel configuration
 * @param[in]       pEftuChannelCfg    Eftu Tom channel specific configuration
 *
 * @return          void
 * [SWDESG_PWM_165]
 */
PWM_TEXT_SECTION void Pwm_Eftu_SetPeriodAndDuty(Pwm_PeriodType               u32Period,
                                                uint16                       u16DutyCycle,
                                                const Pwm_ChannelConfigType *pPwmChannelCfg,
                                                const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint8  u8EftuChannel;
    uint32 u32DutyValue;
    uint16 u16TempDuty  = u16DutyCycle;
    uint8  u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    uint8  u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];

    u8EftuChannel = GET_INDEX(u8EftuTomIdx, pPwmChannelCfg->u8HwChannelId);

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_14();

    /* save channel period value for later use */
    s_aEftuPeriodValue[u8EftuChannel] = u32Period;

    /* Calculate the duty value which will be write to the register */
    /* Only the variable period channels can call this API */
    if (pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode == PWM_CENTER_ALIGNED)
    {
        /* for CPWM,duty cycle = (2*CM1 - 1)/(period), period = 2*(CM0 - 1). */
        s_aEftuCM0Value[u8EftuChannel] = u32Period >> ((uint16)1U);
        u32DutyValue = (uint32)((((((uint64)u32Period) * ((uint64)u16TempDuty)) >> 15U)) >> 1U);
    }
    else
    {
        /* For EPWM, Duty cycle = CM1/(CM0-1), period = CM0 - 1. */
        s_aEftuCM0Value[u8EftuChannel] = u32Period;
        u32DutyValue = (uint32)((((uint64)u32Period) * ((uint64)u16TempDuty)) >> 15U);
    }

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* Disable interrupts when period is 0 or duty cycle is 0%/100% because there is no edges */
    if ((u32DutyValue == 0U) || (u16DutyCycle == 0x8000U))
    {
        /* Disable output channel interrupts */
        PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

        /* clear interrupt flag */
        PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);
    }
    else
    {
        /* Recover the interrupt if the previou period is 0 or duty cycle is 0%/100% */
        if (s_aEftuChannelNotifyEdge[u8EftuChannel] != 0xFFU)
        {
            /* The notification has been enabled, clear interrupt flags */
            PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
            PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);
            if (s_aEftuChannelNotifyEdge[u8EftuChannel] == PWM_TOM_CHANNEL_CCU0_CCU1_FLAG)
            {
                if (pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode == PWM_CENTER_ALIGNED)
                {
                    PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
                    PWM_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
                }
                else
                {
                    PWM_EFTU_TOM_HWA_EnableCCU0Interrupt(pTOM, u8ChIdx);
                    PWM_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
                }
            }
            else if (s_aEftuChannelNotifyEdge[u8EftuChannel] == PWM_TOM_CHANNEL_CCU0_FLAG)
            {
                PWM_EFTU_TOM_HWA_EnableCCU0Interrupt(pTOM, u8ChIdx);
                PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);
            }
            else if (s_aEftuChannelNotifyEdge[u8EftuChannel] == PWM_TOM_CHANNEL_CCU1_FLAG)
            {
                PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
                PWM_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
            }
            else
            {
                /* Do nothing */
            }
        }
    }
#endif

#if (PWM_DUTY_PERIOD_UPDATED_ENDPERIOD == STD_ON)
    /* Update the period and duty cycle at the end of the period through shadow registers */
    PWM_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, s_aEftuCM0Value[u8EftuChannel]);
    PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32DutyValue);
    PWM_EFTU_TOM_HWA_EnableChannelUpdate(pTOM, u8ChIdx);
#else
    /* Update the period and duty cycle immediately */
    PWM_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, s_aEftuCM0Value[u8EftuChannel]);
    PWM_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32DutyValue);
    /* Cut the current waveform */
    PWM_EFTU_TOM_HWA_EnableForceUpdateResetCN0(pTOM, u8ChIdx);

    /* Set host trig */
    PWM_EFTU_TOM_HWA_EnableForceUpdate(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_SetHostTriggerRequest(pTOM);
    PWM_EFTU_TOM_HWA_DisableForceUpdate(pTOM, u8ChIdx);

    PWM_EFTU_TOM_HWA_DisableForceUpdateResetCN0(pTOM, u8ChIdx);
#endif

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_14();
}
#endif /* (PWM_SET_PERIOD_AND_DUTY_API == STD_ON) */

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)

/**
 * @brief           PWM Eftu low level clear output to idle function
 *
 * @param[in]       pPwmChannelCfg      Eftu channel configuration
 * @param[in]       pEftuChannelCfg     Eftu Tom channel specific configuration
 *
 * @return          void
 * [SWDESG_PWM_166]
 */
PWM_TEXT_SECTION void Pwm_Eftu_ClearOutputIdle(const Pwm_ChannelConfigType *pPwmChannelCfg,
                                               const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint8 u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    uint8 u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];
    if (PWM_EFTU_TOM_HWA_ReadChannelOutput(pTOM, u8ChIdx) == 0U)
    {
        /* The channel is disable, recover the SL and enable channel */
        if (pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode == PWM_CENTER_ALIGNED)
        {
            PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(
                pTOM,
                u8ChIdx,
                (EFTU_TOM_SignalLevelType)pPwmChannelCfg->ePwmPolarity);
            PWM_EFTU_TOM_HWA_SetInitialSignalLevel(
                pTOM,
                u8ChIdx,
                (EFTU_TOM_SignalLevelType)pPwmChannelCfg->ePwmPolarity);
        }
        else
        {
            if (pPwmChannelCfg->ePhaseShiftMode == PWM_PHASESHIFT_ENABLE)
            {
                PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(
                    pTOM,
                    u8ChIdx,
                    (EFTU_TOM_SignalLevelType)pPwmChannelCfg->ePwmPolarity);
                PWM_EFTU_TOM_HWA_SetInitialSignalLevel(
                    pTOM,
                    u8ChIdx,
                    (EFTU_TOM_SignalLevelType)pPwmChannelCfg->ePwmPolarity);
            }
            else
            {
                PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(
                    pTOM,
                    u8ChIdx,
                    (EFTU_TOM_SignalLevelType)(1 - pPwmChannelCfg->ePwmPolarity));
                PWM_EFTU_TOM_HWA_SetInitialSignalLevel(
                    pTOM,
                    u8ChIdx,
                    (EFTU_TOM_SignalLevelType)(1 - pPwmChannelCfg->ePwmPolarity));
            }
        }
        /* Enable channel output */
        PWM_EFTU_TOM_HWA_EnableChannelOutput(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_EnableChannelOutputOnUpdateTrig(pTOM, u8ChIdx);
    }
}

/**
 * @brief           PWM Eftu low level set output to idle function
 *
 * @param[in]       pPwmChannelCfg     Eftu channel configuration
 *
 * @return          void
 * [SWDESG_PWM_167]
 */
PWM_TEXT_SECTION void Pwm_Eftu_SetOutputToIdle(const Pwm_ChannelConfigType *pPwmChannelCfg)
{
    uint8 u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    uint8 u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_15();

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /* Disable output channel interrupts */
    PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

    /* clear interrupt flag */
    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);
#endif
    /* Disable channel output */
    PWM_EFTU_TOM_HWA_DisableChannelOutput(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_DisableChannelOutputOnUpdateTrig(pTOM, u8ChIdx);

    /* The channel is disable, recover the SL and enable channel */
    if (pPwmChannelCfg->ePwmIdleState == PWM_HIGH)
    {
        PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(pTOM, u8ChIdx, EFTU_TOM_SIGNAL_LEVEL_LOW);
        PWM_EFTU_TOM_HWA_SetInitialSignalLevel(pTOM, u8ChIdx, EFTU_TOM_SIGNAL_LEVEL_LOW);
    }
    else
    {
        PWM_EFTU_TOM_HWA_SetShadowInitialSignalLevel(pTOM, u8ChIdx, EFTU_TOM_SIGNAL_LEVEL_HIGH);
        PWM_EFTU_TOM_HWA_SetInitialSignalLevel(pTOM, u8ChIdx, EFTU_TOM_SIGNAL_LEVEL_HIGH);
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_15();
}
#endif /*((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_API == STD_ON))*/

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/**
 * @brief           PWM Eftu low level get output state
 *
 * @param[in]       pPwmChannelCfg  Eftu channel configuration
 *
 * @return          PWM Eftu channel output state
 * [SWDESG_PWM_168]
 */
PWM_TEXT_SECTION Pwm_OutputStateType Pwm_Eftu_GetOutputState(
    const Pwm_ChannelConfigType *pPwmChannelCfg)
{
    Pwm_OutputStateType eOutputVal;
    uint8               u8ChIdx = pPwmChannelCfg->u8HwChannelId;
    uint8 u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];

    if (PWM_EFTU_TOM_HWA_GetOutputLevel(pTOM, u8ChIdx) == 1U)
    {
        eOutputVal = PWM_HIGH;
    }
    else
    {
        eOutputVal = PWM_LOW;
    }

    return eOutputVal;
}
#endif

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM Eftu low level disable notification function
 *
 * @param[in]       pPwmChannelCfg  Eftu channel configuration
 *
 * @return          void
 * [SWDESG_PWM_169]
 */
PWM_TEXT_SECTION void Pwm_Eftu_DisableNotification(const Pwm_ChannelConfigType *pPwmChannelCfg)
{
    uint8 u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    uint8 u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_16();

    s_aEftuChannelNotifyEdge[GET_INDEX(u8EftuTomIdx, pPwmChannelCfg->u8HwChannelId)] = 0xFFU;

    /* Disable output channel interrupts */
    PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

    /* clear interrupt flag */
    PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
    PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_16();
}

/**
 * @brief           PWM Eftu low level enable notification
 *
 * @param[in]       u16DutyCycle    channel duty cycle
 * @param[in]       eNotification   PWM edge detected to generate notification
 * @param[in]       pPwmChannelCfg  Eftu channel configuration
 * @param[in]       pConfigChannel  Eftu channel configuration
 *
 * @return          void
 * [SWDESG_PWM_170]
 */
PWM_TEXT_SECTION void Pwm_Eftu_EnableNotification(uint16                       u16DutyCycle,
                                                  Pwm_EdgeNotificationType     eNotification,
                                                  const Pwm_ChannelConfigType *pPwmChannelCfg,
                                                  const Pwm_Eftu_ConfigType   *pEftuChannelCfg)
{
    uint8 u8EftuChannel;
    uint8 u8ChIdx      = pPwmChannelCfg->u8HwChannelId;
    uint8 u8EftuTomIdx = (uint8)(pPwmChannelCfg->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)s_aPwmEftuTomBase[u8EftuTomIdx];
    u8EftuChannel             = GET_INDEX(u8EftuTomIdx, pPwmChannelCfg->u8HwChannelId);
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_17();

    /* The duty cycle is not 0% or 100% */
    if ((u16DutyCycle & PWM_TOM_LIMIT_DUTY_MASK) != 0U)
    {
        /* clear interrupt flag */
        PWM_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
        PWM_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);
        if (((eNotification == (uint8)PWM_RISING_EDGE) && (pPwmChannelCfg->ePwmPolarity == PWM_HIGH)) ||
            ((eNotification == (uint8)PWM_FALLING_EDGE) && (pPwmChannelCfg->ePwmPolarity == PWM_LOW)))
        {
            PWM_EFTU_TOM_HWA_EnableCCU0Interrupt(pTOM, u8ChIdx);
            PWM_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);
            /* Update notification state machine */
            s_aEftuChannelNotifyEdge[u8EftuChannel] = PWM_TOM_CHANNEL_CCU0_FLAG;
        }
        else if (eNotification == (uint8)PWM_BOTH_EDGES)
        {
            if (pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode == PWM_CENTER_ALIGNED)
            {
                PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
                PWM_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
                /* Update notification state machine */
                s_aEftuChannelNotifyEdge[u8EftuChannel] = PWM_TOM_CHANNEL_CCU1_FLAG;
            }
            else
            {
                PWM_EFTU_TOM_HWA_EnableCCU0Interrupt(pTOM, u8ChIdx);
                PWM_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
                /* Update notification state machine */
                s_aEftuChannelNotifyEdge[u8EftuChannel] = PWM_TOM_CHANNEL_CCU0_CCU1_FLAG;
            }
        }
        else
        {
            PWM_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
            PWM_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
            /* Update notification state machine */
            s_aEftuChannelNotifyEdge[u8EftuChannel] = PWM_TOM_CHANNEL_CCU1_FLAG;
        }
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_17();
}
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */

#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
/**
 * @brief           Get period value about Eftu channel
 *
 * @param[in]       pConfigChannel   Eftu channel configuration
 *
 * @return          Period value
 * [SWDESG_PWM_171]
 */
PWM_TEXT_SECTION Pwm_PeriodType Pwm_Eftu_GetPeriodValue(const Pwm_ChannelConfigType *pConfigChannel)
{
    uint8 u8EftuTomIdx = (uint8)(pConfigChannel->ePwmModuleInstance - PWM_INSTANCE_EFTU_0_TOM_0);
    return (Pwm_PeriodType)s_aEftuPeriodValue[GET_INDEX(u8EftuTomIdx, pConfigChannel->u8HwChannelId)];
}
#endif /* PWM_GET_CHANNEL_STATE_API */

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief           PWM FTU low level validate notification function
 *
 * @param[in]       pEftuChannelCfg             Eftu Tom channel specific configuraiton
 * @param[in]       eNotification               Eftu edge detected type to generate notification
 *
 * @return          PWM FTU function return type
 * [SWDESG_PWM_172]
 */
PWM_TEXT_SECTION Std_ReturnType Pwm_Eftu_ValidateNotification(
    const Pwm_Eftu_ConfigType *pEftuChannelCfg,
    Pwm_EdgeNotificationType   eNotification)
{
    Std_ReturnType    u8RetVal   = (Std_ReturnType)E_OK;
    Pwm_AlignmentType eAlignment = pEftuChannelCfg->tEftuTomChannelConfig.eEftuAlignedMode;
    if ((PWM_CENTER_ALIGNED == eAlignment) && (PWM_BOTH_EDGES != eNotification))
    {
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    return u8RetVal;
}
#endif /* PWM_NOTIFICATION_SUPPORTED == STD_ON */

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#endif /*(PWM_EFTU_USED == STD_ON) */

#ifdef __cplusplus
}
#endif

/** @} */
