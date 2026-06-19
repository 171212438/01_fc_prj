/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Gpt_Aontimer.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt_Aontimer - driver API and development errors implemention.
 *   @details This file contains the Gpt_Aontimer Autosar driver API and development errors
 * implemention.
 *
 *   @addtogroup Gpt_Aontimer
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Gpt_AONTIMER
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       23/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add
Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   2071: [E] This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 0306 EOF
   0306:Cast between a pointer to object and an integral type.
   REASON: AONTIMER is the Aontimer base type initialization.
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"
#include "Gpt_Hw_Irq.h"
#include "Gpt_Aontimer.h"
#include "Gpt_Aontimer_RegOps.h"
#include "SchM_Gpt.h"

#if defined(GPT_AONTIMER_USED)
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

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define GPT_START_SEC_CODE

#include "Gpt_MemMap.h"

#if defined(GPT_AONTIMER_ISR_USED)
GPT_TEXT_SECTION ISR(AONTIMER_ISR);
#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
/**
 * @brief AONTIMER initialization [SWDESG_GPT_083]
 *
 * @param pAontiemrConf AONTIMER initialization configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_Init(const Gpt_ConfigChannelAontimerType *const pAontiemrConf,
                                           boolean bDbgModeEnable)
{
#if (GPT_STANDBY_WAKEUP_SUPPORT == STD_ON)

    if ((uint32)(AONTIMER_CSR_TIE_MASK | AONTIMER_CSR_TCF_MASK) !=
        AONTIMER_HWA_CheckIntFlagAndEnable(AONTIMER))
    {
#endif
        /* Stop Channel to Configure Channel. This shall be be executed before any other setup is made */
        AONTIMER_HWA_DisableTimer(AONTIMER);

        /* Disable interrupts*/
        AONTIMER_HWA_DisableModuleInterrupt(AONTIMER);

        /* Clear pending interrupts */
        AONTIMER_HWA_ClearInterruptFlag(AONTIMER);

        /* Configures the mode of AONTIMER is Time Counter */
        AONTIMER_HWA_DisablePulseMode(AONTIMER);
#if (GPT_STANDBY_WAKEUP_SUPPORT == STD_ON)
    }
#endif
    if ((boolean)TRUE == bDbgModeEnable)
    {
        /* enable debug mode */
        AONTIMER_HWA_ConfigDebugMode(AONTIMER, 1u);
    }
    else
    {
        AONTIMER_HWA_ConfigDebugMode(AONTIMER, 0u);
    }

    if (GPT_AONTIMER_PRESCALER_BYPASS == pAontiemrConf->eAontimerPrescaler)
    {
        /* Enable bypass mode */
        AONTIMER_HWA_EnableBypassMode(AONTIMER);
    }
    else
    {
        /* Set Prescaler */
        AONTIMER_HWA_SetPrescale(AONTIMER, pAontiemrConf->eAontimerPrescaler);

        /* Prescaler/glitch is enable */
        AONTIMER_HWA_DisableBypassMode(AONTIMER);
    }

    /* Set Clock Source */
    AONTIMER_HWA_SelectModuleClkSrc(AONTIMER, pAontiemrConf->eAontimerClkSrc);

    /* Set Compare Value to 0xFFFF */
    AONTIMER_HWA_SetModuleCompareValue(AONTIMER, (uint32)0xFFFFU);
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initiailization [SWDESG_GPT_078]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_DeInit(void)
{

    /* Disable hardware module clock.  */
    AONTIMER_HWA_DisableTimer(AONTIMER);

    /* Disable channel interrupts*/
    AONTIMER_HWA_DisableModuleInterrupt(AONTIMER);

    /* Clear PCS register */
    AONTIMER_HWA_ConfigModulePrescale(AONTIMER, 0U);
}
#endif

/**
 * @brief AONTIMER start timer [SWDESG_GPT_085]
 *
 * @param u16Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StartTimer(uint16 u16Value)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_00();

    /* Disable AONTIMER timer [SWS_Gpt_00329] */
    AONTIMER_HWA_DisableTimer(AONTIMER);

    /* Set Compare Value */
    AONTIMER_HWA_SetModuleCompareValue(AONTIMER, ((uint32)u16Value - 0x1u));
    /* Clear Interrupt Flag */
    AONTIMER_HWA_ClearInterruptFlag(AONTIMER);
    /* Enable AONTIMER timer */
    AONTIMER_HWA_EnableTimer(AONTIMER);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_00();
}

/**
 * @brief AONTIMER stop timer [SWDESG_GPT_087]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StopTimer(void)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_01();

    /* Disable AONTIMER timer */
    AONTIMER_HWA_DisableTimer(AONTIMER);
    /* Clear Interrupt Flag */
    AONTIMER_HWA_ClearInterruptFlag(AONTIMER);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_01();
}

/**
 * @brief AONTIMER get elapsed value [SWDESG_GPT_082]
 *
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue AONTIMER target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Aontimer_GetTimeElapsed(boolean *pbReturnChannelRollover,
                                                       uint32  *pu32TargetValue)
{
    uint32 u32ReturnValue;

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_03();
    /* Read AONTIMER compare value */
    *pu32TargetValue = AONTIMER_HWA_ReadCompareValue(AONTIMER) + (uint32)0x1U;

    /* The Counter Register returns the current value of the AONTIMER at the time this register was
     * last written. */
    AONTIMER_HWA_SetModuleCounterValue(AONTIMER, (uint32)0U);

    /* Read AONTIMER current counter value [SWS_Gpt_00361] */
    u32ReturnValue = AONTIMER_HWA_ReadCounterCurrentValue(AONTIMER);

    /*Check interrupt status flag*/
    if ((uint32)0x1U == AONTIMER_HWA_CheckIntFlag(AONTIMER))
    {
        /* Channel counter was roll-over */
        *pbReturnChannelRollover = (boolean)TRUE;
        if ((uint32)0x0U != AONTIMER_HWA_CheckIntEnableState(AONTIMER))
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
        /* Channel counter was not roll-over */
        *pbReturnChannelRollover = (boolean)FALSE;
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_03();

    return u32ReturnValue;
}

/**
 * @brief AONTIMER enable interrupt [SWDESG_GPT_080]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_EnableInterrupt(void)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_02();

    if ((uint32)0x0U == AONTIMER_HWA_CheckIntEnableState(AONTIMER))
    {
        /* Clear interrupt flag */
        AONTIMER_HWA_ClearInterruptFlag(AONTIMER);

        /* Enable AONTIMER interrupt */
        AONTIMER_HWA_EnableModuleInterrupt(AONTIMER);
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_02();
}

/**
 * @brief AONTIMER diable interrupt [SWDESG_GPT_079]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_DisableInterrupt(void)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_06();

    /* Disable AONTIMER interrupt */
    AONTIMER_HWA_DisableModuleInterrupt(AONTIMER);

    /* Clear interrupt flag */
    AONTIMER_HWA_ClearInterruptFlag(AONTIMER);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_06();
}

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief AONTIMER start predef timer [SWDESG_GPT_084]
 *
 * @param eClkSrc AONTIMER clock source
 * @param ePrescaler AONTIMER timer prescaler
 * @param bDbgModeEnable AONTIMER debug mode
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StartPredefTimer(const Gpt_AontimerClkSrcType    eClkSrc,
                                                       const Gpt_AontimerPrescalerType ePrescaler,
                                                       boolean bDbgModeEnable)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_04();

    /* Disable AONTIMER timer */
    AONTIMER_HWA_DisableTimer(AONTIMER);

    /* Disable Timer Interrupt */
    AONTIMER_HWA_DisableModuleInterrupt(AONTIMER);

    /* Select Time Counter Mode */
    AONTIMER_HWA_DisablePulseMode(AONTIMER);

    /* CNR is reset on overflow */
    AONTIMER_HWA_SetCounterResetOnOverflow(AONTIMER);

    if (GPT_AONTIMER_PRESCALER_BYPASS == ePrescaler)
    {
        /* Enable bypass mode */
        AONTIMER_HWA_EnableBypassMode(AONTIMER);
    }
    else
    {
        /* Set prescaler */
        AONTIMER_HWA_SetPrescale(AONTIMER, ePrescaler);

        /* Prescaler/glitch is enable */
        AONTIMER_HWA_DisableBypassMode(AONTIMER);
    }

    if ((boolean)TRUE == bDbgModeEnable)
    {
        /* enable debug mode */
        AONTIMER_HWA_ConfigDebugMode(AONTIMER, 1u);
    }
    else
    {
        AONTIMER_HWA_ConfigDebugMode(AONTIMER, 0u);
    }

    /* Select Prescaler Clock source */
    AONTIMER_HWA_SelectModuleClkSrc(AONTIMER, eClkSrc);

    /* Set Compare Value to 0xffff */
    AONTIMER_HWA_SetModuleCompareValue(AONTIMER, (uint32)0xFFFFU);

    /* Enable Timer */
    AONTIMER_HWA_EnableTimer(AONTIMER);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_04();
}

/**
 * @brief AONTIMER get predef timer value [SWDESG_GPT_081]
 *
 * @return uint32 Predef timer value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Aontimer_GetPredefTimerValue(void)
{
    uint32 u32ReturnValue = 0U;
    if ((uint32)0x1U == AONTIMER_HWA_ReadTimerStatus(AONTIMER))
    {
        /* The Counter Register returns the current value of the AONTIMER at the time this register
         * was last written. */
        AONTIMER_HWA_SetModuleCounterValue(AONTIMER, (uint32)0U);
    }

    /* Read current counter value */
    u32ReturnValue = AONTIMER_HWA_ReadCounterCurrentValue(AONTIMER);

    return u32ReturnValue;
}

/**
 * @brief Stop predef timer [SWDESG_GPT_086]
 *
 */
GPT_TEXT_SECTION void Gpt_LL_Aontimer_StopPredefTimer(void)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_05();
    /* Disable hardware module clock. This shall be be executed before any other setup is made */
    AONTIMER_HWA_DisableTimer(AONTIMER);

    /* Disable channel interrupts*/
    AONTIMER_HWA_DisableModuleInterrupt(AONTIMER);

    /* Clear Interrupt Flag */
    AONTIMER_HWA_ClearInterruptFlag(AONTIMER);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_05();
}
#endif

#if defined(GPT_AONTIMER_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* [SWS_Gpt_00186] */
/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION ISR(AONTIMER_ISR)
{
    /* [FMR_Gpt_0001] */
    if ((uint32)(AONTIMER_CSR_TIE_MASK | AONTIMER_CSR_TCF_MASK) ==
        AONTIMER_HWA_CheckIntFlagAndEnable(AONTIMER))
    {
        /*Clear interrupt flag [SWS_Gpt_00327]*/
        AONTIMER_HWA_ClearInterruptFlag(AONTIMER);
        /* Call GPT upper layer handler */
        Gpt_Hw_ProcessCommonInterrupt(0U, (uint8)GPT_AONTIMER_MODULE);
    }
    else
    {
        /* Do nothing */
    }

    EXIT_INTERRUPT();
}
/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /*defined GPT_AONTIMER_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
