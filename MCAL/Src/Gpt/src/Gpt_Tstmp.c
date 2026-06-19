/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
*   @file    Gpt_Tstmp.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Tstmp - driver API and development errors implemention.
*   @details This file contains the Gpt_Tstmp Autosar driver API and development errors implemention.
*
*   @addtogroup Gpt_Tstmp
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_TSTMP
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
*   0.5.0       17/01/2024    QXW0074       N/A          Gpt_Tstmp Initial version
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (support for selection of TSTMP0 4 modulate timer clock sources)
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   2071: [E] This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location
*/
#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"
#include "Gpt_Hw_Irq.h"
#include "Gpt_Tstmp.h"
#include "Gpt_Tstmp_RegOps.h"
#include "SchM_Gpt.h"


#if defined(GPT_TSTMP_USED)
/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/

#define GPT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
#if(GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
* @brief          Local array variable used to store the TSTMP runtime value.
*/
GPT_DATA_SECTION static uint64 Gpt_Tstmp_u64StartValue[GPT_HW_PREDEFTIMER_NUM] = {(uint64)0};
#endif

/**
* @brief          Local array variable used to store the TSTMP runtime target value.
*/
GPT_DATA_SECTION static uint64 Gpt_Tstmp_u64TargetValue[GPT_TSTMP_MODULES_NUM][GPT_TSTMP_CHANNEL_NUM] =
{
    {(uint64)0}
};
/* PRQA S 0686-- */
#define GPT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define GPT_START_SEC_CONST_UNSPECIFIED
#include "Gpt_MemMap.h"
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: it has no effect */
/** @brief Tstmp instance list */
GPT_DATA_SECTION TSTMP_Type *const TSTMP_PTRS[TSTMP_INSTANCE_COUNT] = TSTMP_BASE_PTRS;
/* PRQA S 3408, 1504 -- */
#define GPT_STOP_SEC_CONST_UNSPECIFIED
#include "Gpt_MemMap.h"
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define GPT_START_SEC_CODE

#include "Gpt_MemMap.h"

#if defined(GPT_TSTMP_ISR_USED)
GPT_TEXT_SECTION static void Gpt_Tstmp_ProcessInterrupt(uint8 u8TstmpModule, uint8 u8TstmpChannel);

#if defined(GPT_TSTMP_0_ISR_USED)
GPT_TEXT_SECTION ISR(TSTMP_0_ISR);
#endif
#if defined(GPT_TSTMP_1_ISR_USED)
GPT_TEXT_SECTION ISR(TSTMP_1_ISR);
#endif
#if defined(GPT_TSTMP_2_ISR_USED)
GPT_TEXT_SECTION ISR(TSTMP_2_ISR);
#endif
#if defined(GPT_TSTMP_3_ISR_USED)
GPT_TEXT_SECTION ISR(TSTMP_3_ISR);
#endif
#if defined(GPT_TSTMP_4_ISR_USED)
GPT_TEXT_SECTION ISR(TSTMP_4_ISR);
#endif

#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
#if (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_OFF)
/**
 * @brief TSTMP initialization [SWDESG_GPT_106]
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_Init(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

    /* disable interrupt */
    TSTMP_HWA_DisableModMatchInterrupt(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* disable MOD counting on */
    TSTMP_HWA_DisableModCounter(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* clear MOD match flag */
    TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* set the counting mode */
    TSTMP_HWA_SetModCounterMode(TSTMP_PTRS[u8TstmpInstance], u8Channel, TSTMP_MODE_PERIOD_RUNNING);
}
#else
/**
 * @brief TSTMP initialization [SWDESG_GPT_106]
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 * @param pTstmpConfig TSTMP configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_Init(Gpt_ModuleType eModule, uint8 u8Channel, const Gpt_ConfigChannelTstmpType *pTstmpConfig)
{
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

#if (GPT_CFG_TSTMP0_SIRC1M_CHANGE_SUPPORT == STD_ON)
    uint32 u32RegVal = 0U;
    uint32 u32ClkVal = 0U;
    uint32 u32DivVal = 0U;
    uint32 u32WaitCycles;
    uint32 i = 0U;

    /* Get clock source to determine wait cycle */
    u32ClkVal = (TSTMP_HWA_GetSmcTstmp0CLkCfgReg() & SMC_TSTMP0_CLK_CFG_SEL_MASK)>>SMC_TSTMP0_CLK_CFG_SEL_SHIFT;
    u32DivVal = (TSTMP_HWA_GetSmcTstmp0CLkCfgReg() & SMC_TSTMP0_CLK_CFG_DIV_MASK)>>SMC_TSTMP0_CLK_CFG_DIV_SHIFT;
    if((((uint32)pTstmpConfig->eTstmpModClkSrc != u32ClkVal) || ((uint32)pTstmpConfig->eTstmpFunClkPrescaler != u32DivVal)) && (pTstmpConfig->eTstmpModClkSrc != AON_CLK))
    {
        if((uint32)SIRC_1M == u32ClkVal)
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_1M;
        }
        else if ((uint32)FOSC_DIVL == u32ClkVal)
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_250K;
        }
        else
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_32K;
        }
        TSTMP_HWA_DisableTstmp0Clk();
        /* Set EN to 0 and wait for 4 clock cycles at least */
        for(i=0U; i<u32WaitCycles; i++)
        {
            __asm volatile("nop");
        }

        u32RegVal = (uint32)( SMC_TSTMP0_CLK_CFG_DIV(pTstmpConfig->eTstmpFunClkPrescaler) |
                                SMC_TSTMP0_CLK_CFG_SEL(pTstmpConfig->eTstmpModClkSrc) );

        TSTMP_HWA_SetSmcTstmp0CLkCfgReg(u32RegVal);
        /* Set EN to 1 and wait for 4 clock cycles at least */
        TSTMP_HWA_EnableTstmp0Clk();

        if(SIRC_1M == pTstmpConfig->eTstmpModClkSrc)
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_1M;
        }
        else if (FOSC_DIVL == pTstmpConfig->eTstmpModClkSrc)
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_250K;
        }
        else
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_32K;
        }
        for(i=0U; i<u32WaitCycles; i++)
        {
            __asm volatile("nop");
        }
    }
    else
    {
        /* Do nothing */
    }
#endif

    /* disable interrupt */
    TSTMP_HWA_DisableModMatchInterrupt(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* disable MOD counting on */
    TSTMP_HWA_DisableModCounter(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    if(eModule == GPT_MODULE_TSTMP_0)
    {
        /* set the modulate timer counter clock source */
        TSTMP_HWA_SetModCounterClockSource(TSTMP_PTRS[u8TstmpInstance],u8Channel, pTstmpConfig->eTstmpModClkSrc);
    }
    else
    {
        /* Do nothing */
    }
    /* clear MOD match flag */
    TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* set the counting mode */
    TSTMP_HWA_SetModCounterMode(TSTMP_PTRS[u8TstmpInstance], u8Channel, TSTMP_MODE_PERIOD_RUNNING);
}
#endif /* (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_OFF) */
#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initiailization [SWDESG_GPT_107]
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

#if (GPT_CFG_TSTMP0_SIRC1M_CHANGE_SUPPORT == STD_ON)
    uint32 u32RegVal = 0U;
    uint32 u32ClkVal = 0U;
    uint32 u32DivVal = 0U;
    uint32 u32WaitCycles;
    uint32 i = 0U;

    /* Get clock source to determine wait cycle */
    u32ClkVal = (TSTMP_HWA_GetSmcTstmp0CLkCfgReg() & SMC_TSTMP0_CLK_CFG_SEL_MASK)>>SMC_TSTMP0_CLK_CFG_SEL_SHIFT;
    u32DivVal = (TSTMP_HWA_GetSmcTstmp0CLkCfgReg() & SMC_TSTMP0_CLK_CFG_DIV_MASK)>>SMC_TSTMP0_CLK_CFG_DIV_SHIFT;
    if(((uint32)SIRC_1M != u32ClkVal) || ((uint32)GPT_TSTMP_DIV_1 != u32DivVal))
    {
        if((uint32)SIRC_1M == u32ClkVal)
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_1M;
        }
        else if ((uint32)FOSC_DIVL == u32ClkVal)
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_250K;
        }
        else
        {
            u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_32K;
        }
        TSTMP_HWA_DisableTstmp0Clk();
        /* Set EN to 0 and wait for 4 clock cycles at least */
        for(i=0U; i<u32WaitCycles; i++)
        {
            __asm volatile("nop");
        }

        u32RegVal = (uint32)( SMC_TSTMP0_CLK_CFG_DIV(GPT_TSTMP_DIV_1) |
                                SMC_TSTMP0_CLK_CFG_SEL(SIRC_1M) );

        TSTMP_HWA_SetSmcTstmp0CLkCfgReg(u32RegVal);

        TSTMP_HWA_EnableTstmp0Clk();

        u32WaitCycles = GPT_TSTMP0_DUMMY_CYCLES_1M;
        /* Set EN to 1 and wait for 4 clock cycles at least */
        for(i=0U; i<u32WaitCycles; i++)
        {
            __asm volatile("nop");
        }
    }
    else
    {
        /* Do nothing */
    }
#endif

    /* Disable TSTMP MOD(n) match interrupt */
    TSTMP_HWA_DisableModMatchInterrupt(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* Disable TSTMP MOD(n) counter */
    TSTMP_HWA_DisableModCounter(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* Clear TSTMP MOD(n) match value set*/
    TSTMP_HWA_SetModMatchValue(TSTMP_PTRS[u8TstmpInstance], u8Channel, (uint32)0U);
    /* reset the counting mode */
    TSTMP_HWA_SetModCounterMode(TSTMP_PTRS[u8TstmpInstance], u8Channel, TSTMP_MODE_ALWAYS_RUNNING);
#if (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_ON)
    if(eModule == GPT_MODULE_TSTMP_0)
    {
        /* reset the modulate timer counter clock source */
        TSTMP_HWA_SetModCounterClockSource(TSTMP_PTRS[u8TstmpInstance],u8Channel, SIRC_1M);
    }
    else
    {
        /* Do nothing */
    }
#endif /* (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_ON)*/
    /* clear MOD match flag */
    TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_PTRS[u8TstmpInstance], u8Channel);
}
#endif

/**
 * @brief TSTMP start timer [SWDESG_GPT_108]
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 * @param u32Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)
{
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_30();
    /* set MOD match value */
    TSTMP_HWA_SetModMatchValue(TSTMP_PTRS[u8TstmpInstance], u8Channel, u32Value);
    /* Record the timestamp of the start count */
    Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel] = TSTMP_HWA_ReadTstmpValue(TSTMP_PTRS[u8TstmpInstance]) + (uint64)u32Value;
    /* clear MOD(n) match flag */
    TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* enable interrupt */
    TSTMP_HWA_EnableModMatchInterrupt(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* enable MOD counting on */
    TSTMP_HWA_EnableModCounter(TSTMP_PTRS[u8TstmpInstance],u8Channel);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_30();
}

/**
 * @brief TSTMP stop timer [SWDESG_GPT_109]
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_31();
    /* disable interrupt */
    TSTMP_HWA_DisableModMatchInterrupt(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    /* disable MOD counting on */
    TSTMP_HWA_DisableModCounter(TSTMP_PTRS[u8TstmpInstance],u8Channel);
    /* clear MOD(n) match flag */
    TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_PTRS[u8TstmpInstance], u8Channel);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_31();
}

/**
 * @brief TSTMP get elapsed value [SWDESG_GPT_110]
 *
 * @param eModule TSTMP module
 * @param u8Channel TSTMP channel for current module
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue TSTMP target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Tstmp_GetTimeElapsed(Gpt_ModuleType eModule, uint8 u8Channel,
                                                    boolean *pbReturnChannelRollover, uint32 *pu32TargetValue)
{
    uint32 u32ReturnValue;
    uint64 u64CounterValue;
    uint64 u64CounterMaxValue;

    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_32();
    /* Get period value */
    *pu32TargetValue = TSTMP_HWA_GetModMatchValue(TSTMP_PTRS[u8TstmpInstance], u8Channel);

    /* Get free-running timer counter value */
    u64CounterValue = TSTMP_HWA_ReadTstmpValue(TSTMP_PTRS[u8TstmpInstance]);

    u64CounterMaxValue = GPT_TSTMP_32BIT_CNT_MAX_VALUE_U64;

    /* Calculate the elapsed time [SWS_Gpt_00361] */
    if((u64CounterValue < Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel]) && ((Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel] - u64CounterValue) <= *pu32TargetValue))
    {
        /* Timer in between ISRs period */
        /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be assigned to an
                                   object with a narrower essential type or of a different essential type category.
                   Reason: The number of return value will not exceed the uint32 limit */
        u32ReturnValue = *pu32TargetValue - (Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel] - u64CounterValue);
        /* PRQA S 4461 -- */
    }
    else if(u64CounterValue > Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel])
    {
        /* Counter value passed the set-up Target value - might have roll-over */
        if (((u64CounterMaxValue - u64CounterValue) + Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel]) <= *pu32TargetValue)
        {
            /* New compare value was read by register read - isr served in time - we have roll-over */
            /* PRQA S 4461 ++ #Misra-C:2012 Rule-10.3 The value of an expression shall not be assigned to an
                                           object with a narrower essential type or of a different essential type category.
                           Reason: The number of return value will not exceed the uint32 limit */
            u32ReturnValue = *pu32TargetValue - \
                              ((uint32)(u64CounterMaxValue - u64CounterValue) + Gpt_Tstmp_u64TargetValue[u8TstmpInstance][u8Channel] + (uint32)1U);
            /* PRQA S 4461 -- */
        }
        else
        {
            /* There is an delay in serving ISR or updating u32CompareValue - report last timer time */
            u32ReturnValue = *pu32TargetValue;
        }
    }
    else
    {
        u32ReturnValue = *pu32TargetValue;
    }

    /*Check interrupt status flag*/
    if ((TSTMP_HWA_ReadModMatchFlag(TSTMP_PTRS[u8TstmpInstance]) & ((uint32)0x1U << u8Channel)) != (uint32)0x0U)
    {
        /* Channel counter was roll-over */
        *pbReturnChannelRollover = (boolean)TRUE;
    }
    else
    {
        /* Channel counter was not roll-over */
        *pbReturnChannelRollover = (boolean)FALSE;
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_32();
    return u32ReturnValue;
}

#if(GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief TSTMP start predef timer [SWDESG_GPT_111]
 *
 * @param ePredefTimer The selected PredefTimer type
 * @param eModule TSTMP module
 */
GPT_TEXT_SECTION void Gpt_LL_Tstmp_StartPredefTimer(Gpt_PredefTimerType ePredefTimer, Gpt_ModuleType eModule)
{
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_33();
    /* Record the timestamp of the start count */
    Gpt_Tstmp_u64StartValue[ePredefTimer] = TSTMP_HWA_ReadTstmpValue(TSTMP_PTRS[u8TstmpInstance]);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_33();
}

/**
 * @brief TSTMP get predef timer value [SWDESG_GPT_112]
 *
 * @param ePredefTimer The selected PredefTimer type
 * @param eModule TSTMP module
 * @param u32MaxCount max count for for current TSTMP channel
 * @return uint32 Predef timer value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Tstmp_GetPredefTimerValue(Gpt_PredefTimerType ePredefTimer, Gpt_ModuleType eModule, uint32 u32MaxCount)
{
    uint32 u32ReturnValue;
    uint32 u32TstmpClkMult;
    uint64 u64CounterValue;
    uint64 u64SpendValue;
    uint8 u8TstmpInstance;
    u8TstmpInstance = (uint8)eModule - (uint8)GPT_MODULE_TSTMP_0;

    /* Get free-running timer counter value */
    u64CounterValue = TSTMP_HWA_ReadTstmpValue(TSTMP_PTRS[u8TstmpInstance]);
    if(eModule == GPT_MODULE_TSTMP_0)
    {
        if(ePredefTimer == GPT_PREDEF_TIMER_100US_32BIT)
        {
            u64SpendValue = (uint64)((u64CounterValue / 100U) - (Gpt_Tstmp_u64StartValue[ePredefTimer] / 100U));
        }
        else
        {
            u64SpendValue = (uint64)(u64CounterValue - Gpt_Tstmp_u64StartValue[ePredefTimer]);
        }
    }
    else
    {
        if(ePredefTimer == GPT_PREDEF_TIMER_100US_32BIT)
        {
            u32TstmpClkMult = (uint32)(GPT_TSTMP_PREDEFTIMER_CLK_MULT * 100U);
        }
        else
        {
            u32TstmpClkMult = GPT_TSTMP_PREDEFTIMER_CLK_MULT;
        }
        u64SpendValue = (uint64)((u64CounterValue / u32TstmpClkMult) - (Gpt_Tstmp_u64StartValue[ePredefTimer] / u32TstmpClkMult));
    }
    u32ReturnValue = (uint32)(u64SpendValue % u32MaxCount);

    return u32ReturnValue;
}
#endif

#if defined(GPT_TSTMP_ISR_USED)
/**
 * @brief Process TSTMP interrupt function [SWDESG_GPT_132]
 *
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION static void Gpt_Tstmp_ProcessInterrupt(uint8 u8TstmpModule, uint8 u8TstmpChannel)
{
    uint32 u32ModSetVal;
    uint64 u64GlobalTstmpValue;
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_29();
    /* disable interrupt */
    TSTMP_HWA_DisableModMatchInterrupt(TSTMP_PTRS[u8TstmpModule], u8TstmpChannel);
    /* clear MOD(n) match flag [SWS_Gpt_00327] */
    TSTMP_HWA_ClearSingleModMatchFlag(TSTMP_PTRS[u8TstmpModule], u8TstmpChannel);
    /* enable interrupt */
    TSTMP_HWA_EnableModMatchInterrupt(TSTMP_PTRS[u8TstmpModule], u8TstmpChannel);
    /* update TSTMP target value */
    u64GlobalTstmpValue = TSTMP_HWA_ReadTstmpValue(TSTMP_PTRS[u8TstmpModule]);
    u32ModSetVal = TSTMP_HWA_GetModMatchValue(TSTMP_PTRS[u8TstmpModule], u8TstmpChannel);
    Gpt_Tstmp_u64TargetValue[u8TstmpModule][u8TstmpChannel] = ((((u64GlobalTstmpValue - Gpt_Tstmp_u64TargetValue[u8TstmpModule][u8TstmpChannel]) / u32ModSetVal) + 1u) * u32ModSetVal) + Gpt_Tstmp_u64TargetValue[u8TstmpModule][u8TstmpChannel];
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_29();
    /* Call GPT upper layer handler */
    Gpt_Hw_ProcessCommonInterrupt(u8TstmpChannel, (uint8)GPT_TSTMP_MODULE + ((uint8)GPT_TSTMP_CHANNEL_NUM * u8TstmpModule));
}

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
#if defined(GPT_TSTMP_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(TSTMP_0_ISR)
{
    uint8 u8Tstmpchannel;
    for (u8Tstmpchannel = 0U; u8Tstmpchannel < GPT_TSTMP_CHANNEL_NUM; u8Tstmpchannel++)
    {
        if (TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_PTRS[GPT_TSTMP_0],u8Tstmpchannel)==TRUE)
        {
            Gpt_Tstmp_ProcessInterrupt(GPT_TSTMP_0, u8Tstmpchannel);
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_TSTMP_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(TSTMP_1_ISR)
{
    uint8 u8Tstmpchannel;
    for (u8Tstmpchannel = 0U; u8Tstmpchannel < GPT_TSTMP_CHANNEL_NUM; u8Tstmpchannel++)
    {
        if (TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_PTRS[GPT_TSTMP_1],u8Tstmpchannel)==TRUE)
        {
            Gpt_Tstmp_ProcessInterrupt(GPT_TSTMP_1, u8Tstmpchannel);
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_TSTMP_2_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(TSTMP_2_ISR)
{
    uint8 u8Tstmpchannel;
    for (u8Tstmpchannel = 0U; u8Tstmpchannel < GPT_TSTMP_CHANNEL_NUM; u8Tstmpchannel++)
    {
        if (TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_PTRS[GPT_TSTMP_2],u8Tstmpchannel)==TRUE)
        {
            Gpt_Tstmp_ProcessInterrupt(GPT_TSTMP_2, u8Tstmpchannel);
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_TSTMP_3_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(TSTMP_3_ISR)
{
    uint8 u8Tstmpchannel;
    for (u8Tstmpchannel = 0U; u8Tstmpchannel < GPT_TSTMP_CHANNEL_NUM; u8Tstmpchannel++)
    {
        if (TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_PTRS[GPT_TSTMP_3],u8Tstmpchannel)==TRUE)
        {
            Gpt_Tstmp_ProcessInterrupt(GPT_TSTMP_3, u8Tstmpchannel);
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_TSTMP_4_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(TSTMP_4_ISR)
{
    uint8 u8Tstmpchannel;
    for (u8Tstmpchannel = 0U; u8Tstmpchannel < GPT_TSTMP_CHANNEL_NUM; u8Tstmpchannel++)
    {
        if (TSTMP_HWA_ReadTstmpInterruptFlagAndEnable(TSTMP_PTRS[GPT_TSTMP_4],u8Tstmpchannel)==TRUE)
        {
            Gpt_Tstmp_ProcessInterrupt(GPT_TSTMP_4, u8Tstmpchannel);
        }
        else
        {
            /* Do nothing */
        }
    }
    EXIT_INTERRUPT();
}
#endif

/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif/*defined GPT_TSTMP_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
