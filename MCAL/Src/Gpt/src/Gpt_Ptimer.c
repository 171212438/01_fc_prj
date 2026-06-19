/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
*   @file    Gpt_Ptimer.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Ptimer - driver API and development errors implemention.
*   @details This file contains the Gpt_Tstmp Autosar driver API and development errors implemention.
*
*   @addtogroup Gpt_Ptimer
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_Ptimer
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
*   0.8.0       29/08/2024    QXW0074       N/A          Gpt_Ptimer Initial version
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
#include "Gpt_Ptimer.h"
#include "Gpt_Ptimer_RegOps.h"
#include "SchM_Gpt.h"


#if defined(GPT_PTIMER_USED)
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
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: it has no effect */
/** @brief Ptimer instance list */
GPT_DATA_SECTION Gptptimer_Type *const PTIMER_PTRS[PTIMER_INSTANCE_COUNT] = PTIMER_BASE_PTRS;
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

#if defined(GPT_PTIMER_ISR_USED)
#if defined(GPT_PTIMER_0_ISR_USED)
GPT_TEXT_SECTION ISR(PTIMER_0_ISR);
#endif
#if defined(GPT_PTIMER_1_ISR_USED)
GPT_TEXT_SECTION ISR(PTIMER_1_ISR);
#endif
#if defined(GPT_PTIMER_2_ISR_USED)
GPT_TEXT_SECTION ISR(PTIMER_2_ISR);
#endif
#if defined(GPT_PTIMER_3_ISR_USED)
GPT_TEXT_SECTION ISR(PTIMER_3_ISR);
#endif
#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
/**
 * @brief PTIMER initialization [SWDESG_GPT_121]
 *
 * @param eModule PTIMER module
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param pPtimerConf PTIMER initialization configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_Init(Gpt_ModuleType eModule, boolean bDbgModeEnable, const Gpt_ConfigChannelPtimerType *const pPtimerConf)
{
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    /* disable sequence error interrupt */
    GPT_PTIMER_HWA_DisableSeqErrInterrupt(PTIMER_PTRS[u8PtimerInstance]);
    /* disable delay interrupt */
    GPT_PTIMER_HWA_SetInterruptEnableFlag(PTIMER_PTRS[u8PtimerInstance], FALSE);
    /* clear delay interrupt flag */
    GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[u8PtimerInstance]);
    /* Set the prescaler divider value */
    GPT_PTIMER_HWA_SetDivPrescaler(PTIMER_PTRS[u8PtimerInstance], pPtimerConf->ePtimerPrescaler);
    /* Set the multiply factor */
    GPT_PTIMER_HWA_SetDivMultiply(PTIMER_PTRS[u8PtimerInstance], pPtimerConf->ePtimerMultiplication);
    /* Set the trigger source */
    GPT_PTIMER_HWA_SetTriggerSource(PTIMER_PTRS[u8PtimerInstance], GPT_PTIMER_TRGSRC_SW);
    /* Set Continuous Mode */
    GPT_PTIMER_HWA_SetContinuoiusModeFlag(PTIMER_PTRS[u8PtimerInstance], TRUE);
#if (GPT_CFG_PTIMER_DEBUG_MODE_SUPPORT == STD_ON)
    /* Set debug mode */
    GPT_PTIMER_HWA_SetDebugMode(PTIMER_PTRS[u8PtimerInstance], bDbgModeEnable);
#else
    (void)bDbgModeEnable;
#endif
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief PTIMER De-initiailization [SWDESG_GPT_122]
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_DeInit(Gpt_ModuleType eModule)
{
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    /* disable sequence error interrupt */
    GPT_PTIMER_HWA_DisableSeqErrInterrupt(PTIMER_PTRS[u8PtimerInstance]);
    /* disable delay interrupt */
    GPT_PTIMER_HWA_SetInterruptEnableFlag(PTIMER_PTRS[u8PtimerInstance], FALSE);
    /* clear delay interrupt flag */
    GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[u8PtimerInstance]);
    /* Set the prescaler divider value */
    GPT_PTIMER_HWA_SetDivPrescaler(PTIMER_PTRS[u8PtimerInstance], GPT_PTIMER_PRE_DIVIDE_BY_1);
    /* Set the multiply factor */
    GPT_PTIMER_HWA_SetDivMultiply(PTIMER_PTRS[u8PtimerInstance], GPT_PTIMER_PRE_DIVIDER_MULT_BY_1);
    /* Set the trigger source */
    GPT_PTIMER_HWA_SetTriggerSource(PTIMER_PTRS[u8PtimerInstance], GPT_PTIMER_TRGSRC_TRGSEL);
    /* Set Continuous Mode */
    GPT_PTIMER_HWA_SetContinuoiusModeFlag(PTIMER_PTRS[u8PtimerInstance], FALSE);
}
#endif

/**
 * @brief PTIMER start timer [SWDESG_GPT_123]
 *
 * @param eModule PTIMER module
 * @param u32Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_StartTimer(Gpt_ModuleType eModule, uint32 u32Value)
{
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_42();
    /* Set the Ptimer max counter period */
    GPT_PTIMER_HWA_SetMaxCount(PTIMER_PTRS[u8PtimerInstance], (uint16)(u32Value - 0x1U));
    /* Set the ptimer interrupt period */
    GPT_PTIMER_HWA_SetInterruptDelay(PTIMER_PTRS[u8PtimerInstance], (uint16)(u32Value - 0x1U));
    /* clear delay interrupt flag */
    GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[u8PtimerInstance]);
    /* Enable Ptimer */
    GPT_PTIMER_HWA_Enable(PTIMER_PTRS[u8PtimerInstance]);
    /* Load the buffered values into register */
    GPT_PTIMER_HWA_LoadValue(PTIMER_PTRS[u8PtimerInstance]);
    /* Generate software trigger to resets and restarts the counter [SWS_Gpt_00329] */
    GPT_PTIMER_HWA_GenerateSwTrigger(PTIMER_PTRS[u8PtimerInstance]);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_42();
}

/**
 * @brief PTIMER stop timer [SWDESG_GPT_124]
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_StopTimer(Gpt_ModuleType eModule)
{
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_43();
    /* Disable Ptimer */
    GPT_PTIMER_HWA_Disable(PTIMER_PTRS[u8PtimerInstance]);
    /* clear delay interrupt flag */
    GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[u8PtimerInstance]);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_43();
}

/**
 * @brief PTIMER get elapsed value [SWDESG_GPT_125]
 *
 * @param eModule PTIMER module
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue PTIMER target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_Ptimer_GetTimeElapsed(Gpt_ModuleType eModule,
                                                    boolean *pbReturnChannelRollover, uint32 *pu32TargetValue)
{
    uint32 u32ReturnValue;
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_44();
    /* Get period value */
    *pu32TargetValue = (uint32)GPT_PTIMER_HWA_GetMaxCount(PTIMER_PTRS[u8PtimerInstance]) + (uint32)0x1U;
    /* Get current value of the counter [SWS_Gpt_00361] */
    u32ReturnValue = (uint32)GPT_PTIMER_HWA_GetCounterValue(PTIMER_PTRS[u8PtimerInstance]);
    /*Check interrupt status flag*/
    if (TRUE == GPT_PTIMER_HWA_GetInterruptFlag(PTIMER_PTRS[u8PtimerInstance]))
    {
        /* Channel counter was roll-over */
        *pbReturnChannelRollover = (boolean)TRUE;
        if ((uint32)0x0U != GPT_PTIMER_HWA_CheckIntEnableState(PTIMER_PTRS[u8PtimerInstance]))
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
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_44();
    return u32ReturnValue;
}

/**
 * @brief Enable PTIMER interrupt [SWDESG_GPT_126]
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_EnableInterrupt(Gpt_ModuleType eModule)
{
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_45();
    /* Clear delay interrupt flag */
    GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[u8PtimerInstance]);
    /* Enable delay interrupt */
    GPT_PTIMER_HWA_SetInterruptEnableFlag(PTIMER_PTRS[u8PtimerInstance], TRUE);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_45();
}

/**
 * @brief Disable PTIMER interrupt [SWDESG_GPT_127]
 *
 * @param eModule PTIMER module
 */
GPT_TEXT_SECTION void Gpt_LL_Ptimer_DisableInterrupt(Gpt_ModuleType eModule)
{
    uint8 u8PtimerInstance;
    u8PtimerInstance = (uint8)(eModule - GPT_MODULE_PTIMER_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_46();
    /* Clear delay interrupt flag */
    GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[u8PtimerInstance]);
    /* Disable delay interrupt */
    GPT_PTIMER_HWA_SetInterruptEnableFlag(PTIMER_PTRS[u8PtimerInstance], FALSE);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_46();
}

#if defined(GPT_PTIMER_ISR_USED)

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
#if defined(GPT_PTIMER_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION ISR(PTIMER_0_ISR)
{
    if (TRUE == GPT_PTIMER_HWA_GetInterruptEnableBitAndFlag(PTIMER_PTRS[GPT_PTIMER_0]))
    {
        /* Clear delay interrupt flag [SWS_Gpt_00327] */
        GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[GPT_PTIMER_0]);
        /* Call GPT upper layer handler */
        Gpt_Hw_ProcessCommonInterrupt(0U, (uint8)GPT_PTIMER_MODULE + GPT_PTIMER_0);
    }
    else
    {
        /* Do nothing */
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_PTIMER_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION ISR(PTIMER_1_ISR)
{
    if (TRUE == GPT_PTIMER_HWA_GetInterruptEnableBitAndFlag(PTIMER_PTRS[GPT_PTIMER_1]))
    {
        /* Clear delay interrupt flag [SWS_Gpt_00327] */
        GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[GPT_PTIMER_1]);
        /* Call GPT upper layer handler */
        Gpt_Hw_ProcessCommonInterrupt(0U, (uint8)GPT_PTIMER_MODULE + GPT_PTIMER_1);
    }
    else
    {
        /* Do nothing */
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_PTIMER_2_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206]
 *
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION ISR(PTIMER_2_ISR)
{
    if (TRUE == GPT_PTIMER_HWA_GetInterruptEnableBitAndFlag(PTIMER_PTRS[GPT_PTIMER_2]))
    {
        /* Clear delay interrupt flag [SWS_Gpt_00327] */
        GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[GPT_PTIMER_2]);
        /* Call GPT upper layer handler */
        Gpt_Hw_ProcessCommonInterrupt(0U, (uint8)GPT_PTIMER_MODULE + GPT_PTIMER_2);
    }
    else
    {
        /* Do nothing */
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(GPT_PTIMER_3_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
/* [SWS_Gpt_00186] */
GPT_TEXT_SECTION ISR(PTIMER_3_ISR)
{
    if (TRUE == GPT_PTIMER_HWA_GetInterruptEnableBitAndFlag(PTIMER_PTRS[GPT_PTIMER_3]))
    {
        /* Clear delay interrupt flag [SWS_Gpt_00327] */
        GPT_PTIMER_HWA_ClearInterruptFlag(PTIMER_PTRS[GPT_PTIMER_3]);
        /* Call GPT upper layer handler */
        Gpt_Hw_ProcessCommonInterrupt(0U, (uint8)GPT_PTIMER_MODULE + GPT_PTIMER_3);
    }
    else
    {
        /* Do nothing */
    }
    EXIT_INTERRUPT();
}
#endif

/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif/*defined GPT_PTIMER_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
