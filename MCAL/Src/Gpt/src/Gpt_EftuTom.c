/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
*   @file    Gpt_EftuTom.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Tpu - driver API and development errors implemention.
*   @details This file contains the Gpt_Tpu Autosar driver API and development errors implemention.
*
*   @addtogroup Gpt_EftuTom
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_EFTUTOM
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
*   0.8.0       28/11/2024    QXW0074       N/A          Gpt_EftuTom Initial version
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"
#include "Gpt_Hw_Irq.h"
#include "Gpt_EftuTom.h"
#include "Gpt_EftuTom_RegOps.h"

#include "Eftu_Common_Types.h"

#include "SchM_Gpt.h"

#if defined(GPT_EFTU_USED)

/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define GPT_START_SEC_CONST_UNSPECIFIED
#include "Gpt_MemMap.h"
/** @brief EFTU TOM instance list */
GPT_DATA_SECTION EFTU_TOM_Type *const EFTU_TOM_PTRS[EFTU_INSTANCE_COUNT * EFTU_TOM_INSTANCE_COUNT] =
{
        EFTU_TOM_0_0, EFTU_TOM_0_1,
        EFTU_TOM_1_0, EFTU_TOM_1_1,
        EFTU_TOM_2_0, EFTU_TOM_2_1
};
#define GPT_STOP_SEC_CONST_UNSPECIFIED
#include "Gpt_MemMap.h"
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/
#define GPT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
/**
* @brief          Local array variable used to record the interrupt enable state of EFTU TOM channel.
*/
GPT_DATA_SECTION static uint8 Gpt_EftuTom_u8IntEnRecord[EFTU_INSTANCE_COUNT * EFTU_TOM_INSTANCE_COUNT] =
{
        0U,0U,0U,0U,0U,0U
};

#define GPT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
/*=================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

#if  defined(GPT_EFTU_ISR_USED)
#if defined(GPT_EFTU_0_TOM_0_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_EFTU_0_TOM_0_ISR);
#endif
#if defined(GPT_EFTU_1_TOM_0_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_EFTU_1_TOM_0_ISR);
#endif
#if defined(GPT_EFTU_2_TOM_0_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_EFTU_2_TOM_0_ISR);
#endif
#if defined(GPT_EFTU_0_TOM_1_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_EFTU_0_TOM_1_ISR);
#endif
#if defined(GPT_EFTU_1_TOM_1_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_EFTU_1_TOM_1_ISR);
#endif
#if defined(GPT_EFTU_2_TOM_1_ISR_USED)
GPT_TEXT_SECTION ISR(GPT_EFTU_2_TOM_1_ISR);
#endif
#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
#if defined(GPT_EFTU_ISR_USED)

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
#if defined(GPT_EFTU_0_TOM_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_EFTU_0_TOM_0_ISR)
{
    uint8 u8EftuChannel;

    for (u8EftuChannel = 0U; u8EftuChannel < GPT_EFTU_CHANNEL_NUM; u8EftuChannel++)
    {
        /* [FMR_Gpt_0001] */
        if (((Gpt_EftuTom_u8IntEnRecord[GPT_EFTU_0_TOM_0] & (1U << u8EftuChannel)) != (uint8)0U) &&
            ((boolean)TRUE == EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_PTRS[GPT_EFTU_0_TOM_0], u8EftuChannel)))
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[GPT_EFTU_0_TOM_0], u8EftuChannel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8EftuChannel, (uint8)GPT_EFTU_MODULE + ((uint8)GPT_EFTU_CHANNEL_NUM * GPT_EFTU_0_TOM_0));
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
#endif

#if defined(GPT_EFTU_1_TOM_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_EFTU_1_TOM_0_ISR)
{
    uint8 u8EftuChannel;

    for (u8EftuChannel = 0U; u8EftuChannel < GPT_EFTU_CHANNEL_NUM; u8EftuChannel++)
    {
        /* [FMR_Gpt_0001] */
        if (((Gpt_EftuTom_u8IntEnRecord[GPT_EFTU_1_TOM_0] & (1U << u8EftuChannel)) != (uint8)0U) &&
            ((boolean)TRUE == EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_PTRS[GPT_EFTU_1_TOM_0], u8EftuChannel)))
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[GPT_EFTU_1_TOM_0], u8EftuChannel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8EftuChannel, (uint8)GPT_EFTU_MODULE + ((uint8)GPT_EFTU_CHANNEL_NUM * GPT_EFTU_1_TOM_0));
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
#endif

#if defined(GPT_EFTU_2_TOM_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_EFTU_2_TOM_0_ISR)
{
    uint8 u8EftuChannel;

    for (u8EftuChannel = 0U; u8EftuChannel < GPT_EFTU_CHANNEL_NUM; u8EftuChannel++)
    {
        /* [FMR_Gpt_0001] */
        if (((Gpt_EftuTom_u8IntEnRecord[GPT_EFTU_2_TOM_0] & (1U << u8EftuChannel)) != (uint8)0U) &&
            ((boolean)TRUE == EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_PTRS[GPT_EFTU_2_TOM_0], u8EftuChannel)))
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[GPT_EFTU_2_TOM_0], u8EftuChannel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8EftuChannel, (uint8)GPT_EFTU_MODULE + ((uint8)GPT_EFTU_CHANNEL_NUM * GPT_EFTU_2_TOM_0));
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
#endif

#if defined(GPT_EFTU_0_TOM_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_EFTU_0_TOM_1_ISR)
{
    uint8 u8EftuChannel;

    for (u8EftuChannel = 0U; u8EftuChannel < GPT_EFTU_CHANNEL_NUM; u8EftuChannel++)
    {
        /* [FMR_Gpt_0001] */
        if (((Gpt_EftuTom_u8IntEnRecord[GPT_EFTU_0_TOM_1] & (1U << u8EftuChannel)) != (uint8)0U) &&
            ((boolean)TRUE == EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_PTRS[GPT_EFTU_0_TOM_1], u8EftuChannel)))
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[GPT_EFTU_0_TOM_1], u8EftuChannel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8EftuChannel, (uint8)GPT_EFTU_MODULE + ((uint8)GPT_EFTU_CHANNEL_NUM * GPT_EFTU_0_TOM_1));
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
#endif

#if defined(GPT_EFTU_1_TOM_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(GPT_EFTU_1_TOM_1_ISR)
{
    uint8 u8EftuChannel;

    for (u8EftuChannel = 0U; u8EftuChannel < GPT_EFTU_CHANNEL_NUM; u8EftuChannel++)
    {
        /* [FMR_Gpt_0001] */
        if (((Gpt_EftuTom_u8IntEnRecord[GPT_EFTU_1_TOM_1] & (1U << u8EftuChannel)) != (uint8)0U) &&
            ((boolean)TRUE == EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_PTRS[GPT_EFTU_1_TOM_1], u8EftuChannel)))
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[GPT_EFTU_1_TOM_1], u8EftuChannel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8EftuChannel, (uint8)GPT_EFTU_MODULE + ((uint8)GPT_EFTU_CHANNEL_NUM * GPT_EFTU_1_TOM_1));
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
#endif

#if defined(GPT_EFTU_2_TOM_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied sfor user*/
GPT_TEXT_SECTION ISR(GPT_EFTU_2_TOM_1_ISR)
{
    uint8 u8EftuChannel;

    for (u8EftuChannel = 0U; u8EftuChannel < GPT_EFTU_CHANNEL_NUM; u8EftuChannel++)
    {
        /* [FMR_Gpt_0001] */
        if (((Gpt_EftuTom_u8IntEnRecord[GPT_EFTU_2_TOM_1] & (1U << u8EftuChannel)) != (uint8)0U) &&
            ((boolean)TRUE == EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_PTRS[GPT_EFTU_2_TOM_1], u8EftuChannel)))
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[GPT_EFTU_2_TOM_1], u8EftuChannel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8EftuChannel, (uint8)GPT_EFTU_MODULE + ((uint8)GPT_EFTU_CHANNEL_NUM * GPT_EFTU_2_TOM_1));
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif
#endif

/**
 * @brief Initialize EFTU TOM timer [SWDESG_GPT_135]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 * @param pEftuTomConfig EFTU TOM initialization configuration pointer
 * @param eGtbEn EFTU TOM Gtb mode
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_Init(Gpt_ModuleType eModule, uint8 u8Channel, const Gpt_ConfigChannelEftuTomType *const pEftuTomConfig, Gpt_GtbType eGtbEn)
{
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    /* disable CCU0 interrupt on this channel*/
    EFTU_TOM_HWA_DisableCCU0Interrupt(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* clear CCU0 interrupt flag */
    EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
    /* set the specified channel mode to SOMP mode */
    EFTU_TOM_HWA_SetChannelToSompMode(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* set the specified channel shadow clock source */
    EFTU_TOM_HWA_SetShadowClockSource(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint8)pEftuTomConfig->eEftuTomClkSrc);
    /* set CN0 counter to 0 [SWS_Gpt_00329] */
    EFTU_TOM_HWA_SetCCU0Counter(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)0U);
    /* set the global enable control of EFTU TOM */
    if (GPT_GTB_En == eGtbEn)
    {
        EFTU_TOM_HWA_EnableGlobalTimeBase(EFTU_TOM_PTRS[u8EftuTomInstance]);
    }
    else
    {
        EFTU_TOM_HWA_DisableGlobalTimeBase(EFTU_TOM_PTRS[u8EftuTomInstance]);
    }
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief EFTU TOM timer De-initializatoin [SWDESG_GPT_136]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    /* disable CCU0 interrupt on this channel*/
    EFTU_TOM_HWA_DisableCCU0Interrupt(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* clear CCU0 interrupt flag */
    EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
    /* Reset the specified channel mode to default mode */
    EFTU_TOM_HWA_ResetChannelToDefaultMode(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* set the specified channel shadow clock source to default clock source */
    EFTU_TOM_HWA_SetShadowClockSource(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint8)GPT_EFTU_CMU_CLK_RES_0);
    /* set the value of Shadow Register SR0 for a specific channel to 0 */
    EFTU_TOM_HWA_SetShadowValueSR0(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)0U);
    /* set CN0 counter to 0 */
    EFTU_TOM_HWA_SetCCU0Counter(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)0U);
    /* disable the global time base  */
    EFTU_TOM_HWA_DisableGlobalTimeBase(EFTU_TOM_PTRS[u8EftuTomInstance]);
    /* enable force update, set host trigger request, then disable force update */
    EFTU_TOM_HWA_EnableForceUpdate(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    EFTU_TOM_HWA_SetHostTriggerRequest(EFTU_TOM_PTRS[u8EftuTomInstance]);
    EFTU_TOM_HWA_DisableForceUpdate(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
}
#endif

/**
 * @brief Start EFTU TOM timer [SWDESG_GPT_137]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 * @param u32Value EFTU TOM channel start value
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)
{
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_47();
    /* clear CCU0 interrupt flag */
    EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
    /* set the shadow register SR0 value for timer counting */
    EFTU_TOM_HWA_SetShadowValueSR0(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, u32Value);
    /* set CN0 counter to 0 [SWS_Gpt_00329] */
    EFTU_TOM_HWA_SetCCU0Counter(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)0U);
    /* enable force update, set host trigger request, then disable force update */
    EFTU_TOM_HWA_EnableForceUpdate(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    EFTU_TOM_HWA_SetHostTriggerRequest(EFTU_TOM_PTRS[u8EftuTomInstance]);
    EFTU_TOM_HWA_DisableForceUpdate(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* enable the timer channel */
    EFTU_TOM_HWA_EnableChannel(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_47();
}

/**
 * @brief Stop EFTU TOM timer [SWDESG_GPT_138]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_48();
    /* disable the timer channel */
    EFTU_TOM_HWA_DisableChannel(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* clear CCU0 interrupt flag */
    EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_48();
}

/**
 * @brief Get EFTU TOM channel elapsed value [SWDESG_GPT_139]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue TPU target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_EftuTom_GetTimeElapsed(Gpt_ModuleType eModule, uint8 u8Channel, boolean *pbReturnChannelRollover,
                                                    uint32 *pu32TargetValue)
{
    uint32 u32ReturnValue ;
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_49();
    /* Get period value */
    *pu32TargetValue = EFTU_TOM_HWA_GetCompareValueCM0(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    /* Get the CCU0 counter value of the current TOM channel [SWS_Gpt_00361] */
    u32ReturnValue = EFTU_TOM_HWA_GetCCU0Counter(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);

    /*Check interrupt status flag*/
    if (EFTU_TOM_HWA_GetInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel) == (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK)
    {
        /* Channel counter was roll-over */
        *pbReturnChannelRollover = (boolean)TRUE;
        if((Gpt_EftuTom_u8IntEnRecord[u8EftuTomInstance] & (1U << u8Channel)) != (uint8)0U)
        {
            u32ReturnValue = *pu32TargetValue;
        }
        else
        {
            /* Do nothing */
        }
    }
    else
    {
        /* Channel counter was not rollover */
        *pbReturnChannelRollover = (boolean)FALSE;
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_49();
    return u32ReturnValue;
}

/**
 * @brief Enable interrupt of the specified EFTU TOM channel [SWDESG_GPT_140]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_EnableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50();
    /* clear CCU0 interrupt flag */
    EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
    /* Enable CCU0 interrupt */
    EFTU_TOM_HWA_EnableCCU0Interrupt(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    Gpt_EftuTom_u8IntEnRecord[u8EftuTomInstance] |= ((uint8)(1U << u8Channel));
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50();
}

/**
 * @brief Disable interrupt of the specified EFTU TOM channel [SWDESG_GPT_141]
 *
 * @param eModule EFTU TOM module
 * @param u8Channel channel for current EFTU TOM module
 */
GPT_TEXT_SECTION void Gpt_LL_EftuTom_DisableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8EftuTomInstance;
    u8EftuTomInstance = (uint8)(eModule - GPT_MODULE_EFTU_0_TOM_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51();
    /* clear CCU0 interrupt flag */
    EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel, (uint32)EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK);
    /* Disable CCU0 interrupt */
    EFTU_TOM_HWA_DisableCCU0Interrupt(EFTU_TOM_PTRS[u8EftuTomInstance], u8Channel);
    Gpt_EftuTom_u8IntEnRecord[u8EftuTomInstance] &= ~((uint8)(1U << u8Channel));
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51();
}
#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif/*defined GPT_EFTU_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
