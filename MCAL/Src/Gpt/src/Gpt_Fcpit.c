/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
*   @file    Gpt_FCPit.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_FCPit - driver API and development errors implemention.
*   @details This file contains the Gpt_FCPit Autosar driver API and development errors implemention.
*
*   @addtogroup Gpt_FCPit
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_FCPIT
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
*   0.1.0       17/12/2021    QXW0032       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
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
#include "Gpt_Fcpit.h"
#include "Gpt_Fcpit_RegOps.h"
#include "SchM_Gpt.h"

#if defined(GPT_FCPIT_USED)

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
/** @brief Fcpit instance list */
GPT_DATA_SECTION FCPIT_Type *const FCPIT_PTRS[FCPIT_INSTANCE_COUNT] = FCPIT_BASE_PTRS;
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

#if defined(GPT_FCPIT_ISR_USED)
GPT_TEXT_SECTION static void Gpt_FCPit_ProcessCommonInterrupt(uint8 u8FcpitModule, uint32 u32IntFlag);

#if  defined(GPT_FCPIT_0_ISR_USED)
GPT_TEXT_SECTION ISR(FCPIT_0_ISR);
#endif
#if  defined(GPT_FCPIT_1_ISR_USED)
GPT_TEXT_SECTION ISR(FCPIT_1_ISR);
#endif

#endif
/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
#if defined(GPT_FCPIT_ISR_USED)
/**
 * @brief Process common interrupt function [SWDESG_GPT_131]
 *
 * @param u8FcpitModule FCPIT module
 * @param u32IntFlag FCPIT interrupt channel flag
 */
GPT_TEXT_SECTION static void Gpt_FCPit_ProcessCommonInterrupt(uint8 u8FcpitModule, uint32 u32IntFlag)
{

    uint8 u8ChannelIdx = 0;

    for (u8ChannelIdx = 0; u8ChannelIdx < GPT_FCPIT_CHANNEL_NUM; u8ChannelIdx++)
    {
        if ((u32IntFlag & ((uint32)1u << u8ChannelIdx)) != 0x0u)
        {
            /*Clear interrupt flag [SWS_Gpt_00327]*/
            FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitModule], ((uint32)1u << u8ChannelIdx));
            /* Call GPT upper layer handler */
            Gpt_Hw_ProcessCommonInterrupt(u8ChannelIdx, (uint8)GPT_FCPIT_MODULE + ((uint8)GPT_FCPIT_CHANNEL_NUM * u8FcpitModule));
        }
    }

}

/* [SWS_Gpt_00186] */
/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
#if  defined(GPT_FCPIT_0_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(FCPIT_0_ISR)
{
    /* [FMR_Gpt_0001] */
    uint32 u32IntFlag = FCPIT_HWA_ReadEnableInterruptFlag(FCPIT_PTRS[GPT_FCPIT_0]);
    if (0x0UL != u32IntFlag)
    {
        Gpt_FCPit_ProcessCommonInterrupt(GPT_FCPIT_0, u32IntFlag);
    }

    EXIT_INTERRUPT();
}
#endif

#if  defined(GPT_FCPIT_1_ISR_USED)
/**
 * @brief Construct a new ISR object [SWS_Gpt_00206] [FUNC_Gpt_0036]
 *
 */
GPT_TEXT_SECTION ISR(FCPIT_1_ISR)
{
    /* [FMR_Gpt_0001] */
    uint32 u32IntFlag = FCPIT_HWA_ReadEnableInterruptFlag(FCPIT_PTRS[GPT_FCPIT_1]);
    if (0x0UL != u32IntFlag)
    {
        Gpt_FCPit_ProcessCommonInterrupt(GPT_FCPIT_1, u32IntFlag);
    }

    EXIT_INTERRUPT();
}
#endif
/* PRQA S 1503 -- */
/* PRQA S 3006,1006 -- */
#endif

/**
 * @brief Initialize FCPIT timer [SWDESG_GPT_093]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param bDbgMode FCPIT debug mode flag
 * @param pFcpitConfig FCPIT initialization configuration pointer
 */
GPT_TEXT_SECTION void Gpt_LL_Fcpit_Init(Gpt_ModuleType eModule, uint8 u8Channel, boolean bDbgMode,
                                        const Gpt_ConfigChannelFcpitType *const pFcpitConfig)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    uint32 u32CtrlRegValue = 0u;
    /* Enable FCPIT module */
    FCPIT_HWA_EnableModule(FCPIT_PTRS[u8FcpitInstance]);

    /* Disable FCPIT channel */
    FCPIT_HWA_DisableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);

    #if (GPT_FCPIT_ENABLE_EXT_TRIGGERS==STD_ON)
    /* Configures Trigger */
    u32CtrlRegValue |= pFcpitConfig->u32FcpitTriggerConfig;
    #endif

    /* Disable interrupts*/
    FCPIT_HWA_DisableChannelsInterrupt(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Clear channel interrupts flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Set Compare Value to 0xFFFFFFFFu */
    FCPIT_HWA_SetChannelValue(FCPIT_PTRS[u8FcpitInstance], u8Channel, 0xFFFFFFFFu);

    if ((boolean)TRUE == bDbgMode)
    {
        /* Set FCPIT channel running on debug mode */
        FCPIT_HWA_SetChannelRunOnDebug(FCPIT_PTRS[u8FcpitInstance]);
    }
    else
    {
        /* Set FCPIT channel stop on debug mode */
        FCPIT_HWA_SetChannelStopOnDebug(FCPIT_PTRS[u8FcpitInstance]);
    }

    /* Check chain mode */
    if ((boolean)TRUE == pFcpitConfig->bFcpitChainMode)
    {
        /* PRQA S 2984 ++ #QAC Rule 5.10 The operation is redundant. The value of the result is always '%1s'.
               Reason:  The normal bitwise operation and improve the code readability*/
        /* Enable Chain Mode*/
        u32CtrlRegValue |= (uint32)FCPIT_TCTRL_CHAIN_MASK;
        /* PRQA S 2984 -- */
    }
    else
    {
        /* Disable Chain Mode */
        /* PRQA S 2984 ++ #QAC Rule 5.10 The operation is redundant. The value of the result is always '%1s'.
           Reason:  The normal bitwise operation and improve the code readability,and has no effect on other bits*/
        u32CtrlRegValue &= ~(uint32)FCPIT_TCTRL_CHAIN_MASK;
        /* PRQA S 2984 -- */
    }

    /* Configure FCPIT channel control register */
    FCPIT_HWA_ConfigChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel, u32CtrlRegValue);

    /* Enable FCPIT channel running on low power mode */
    FCPIT_HWA_SetChannelRunOnLpm(FCPIT_PTRS[u8FcpitInstance]);

}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initializatoin [SWDESG_GPT_088]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_DeInit(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    /* Enable FCPIT module */
    FCPIT_HWA_EnableModule(FCPIT_PTRS[u8FcpitInstance]);

    /* Reset Status and Control Register */
    FCPIT_HWA_ConfigChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel, (uint32)0u);

    /* Disable channel interrupts*/
    FCPIT_HWA_DisableChannelsInterrupt(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Clear Interrupt Flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Configure debug mode to power on configuration */
    FCPIT_HWA_SetChannelStopOnDebug(FCPIT_PTRS[u8FcpitInstance]);

    /* Set FCPIT channel stop on low power mode */
    FCPIT_HWA_SetChannelStopOnLpm(FCPIT_PTRS[u8FcpitInstance]);

    /* Disable hardware module clock */
    FCPIT_HWA_DisableModule(FCPIT_PTRS[u8FcpitInstance]);

}
#endif

/**
 * @brief Start FCPIT timer [SWDESG_GPT_095]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param u32Value FCPIT start value
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_StartTimer(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32Value)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_08();

    /* Disable FCPIT channel */
    FCPIT_HWA_DisableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);

    /* Set FCPIT channel value */
    FCPIT_HWA_SetChannelValue(FCPIT_PTRS[u8FcpitInstance], u8Channel, (u32Value - (uint32)1u));
    /* Clear channel interrupts flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));
    /* FCPit timer enable */
    FCPIT_HWA_EnableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_08();
}

/**
 * @brief Stop FCPIT timer [SWDESG_GPT_097]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_StopTimer(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_14();

    /* Disable FCPIT channel */
    FCPIT_HWA_DisableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);

    /* Clear interrupt flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_14();
}

/**
 * @brief Get FCPIT elapsed value [SWDESG_GPT_092]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param pbReturnChannelRollover Channel roll-over flag
 * @param pu32TargetValue FCPIT target value
 * @return uint32 Elapsed value
 */
GPT_TEXT_SECTION uint32 Gpt_LL_FCPit_GetTimeElapsed(Gpt_ModuleType eModule, uint8 u8Channel, boolean *pbReturnChannelRollover,
                                                    uint32 *pu32TargetValue)
{
    uint32 u32ReturnValue;
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);

    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_09();
    *pu32TargetValue = FCPIT_HWA_ReadChannelTimerValue(FCPIT_PTRS[u8FcpitInstance], u8Channel) + (uint32)1U;
    /* [SWS_Gpt_00361] */
    u32ReturnValue = *pu32TargetValue - FCPIT_HWA_ReadCurChannelValue(FCPIT_PTRS[u8FcpitInstance], u8Channel);

    /*Check interrupt status flag*/
    if ((FCPIT_HWA_ReadInterruptFlag(FCPIT_PTRS[u8FcpitInstance]) & (uint32)((uint32)1U << (uint32)u8Channel)) != (uint32)0U)
    {
        /* Channel counter was roll-over */
        *pbReturnChannelRollover = (boolean)TRUE;
        if((FCPIT_HWA_ReadEnableInterruptFlag(FCPIT_PTRS[u8FcpitInstance]) & (uint32)((uint32)1U << (uint32)u8Channel)) != (uint32)0U)
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
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_09();
    return u32ReturnValue;
}

/**
 * @brief Enable FCPIT interrupt [SWDESG_GPT_090]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPit_EnableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_15();
    /* Clear interrupt flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Enable interrupt */
    FCPIT_HWA_EnableChannelsInterrupt(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_15();
}

/**
 * @brief Disable FCPIT interrupt [SWDESG_GPT_089]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPIT_DisableInterrupt(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_16();

    /* Clear FCPit interrupt flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Disable FCPit interrupt */
    FCPIT_HWA_DisableChannelsInterrupt(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_16();
}

#if(GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Start predef timer [SWDESG_GPT_094]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param bDbgModeEnable Enable/Disable debug mode flag
 * @param u32MaxValue FCPIT max value
 */
GPT_TEXT_SECTION void Gpt_LL_FCPIT_StartPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel, boolean bDbgModeEnable, uint32 u32MaxValue)
{
    uint32 u32CtrlRegValue = 0u;
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_10();
    /* Enable FCPIT module */
    FCPIT_HWA_EnableModule(FCPIT_PTRS[u8FcpitInstance]);

    /* Disable FCPIT channel */
    FCPIT_HWA_DisableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);

    /* Disable interrupts*/
    FCPIT_HWA_DisableChannelsInterrupt(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    /* Clear channel interrupts flag */
    FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_PTRS[u8FcpitInstance], ((uint32)1u << (uint32)u8Channel));

    if ((boolean)TRUE == bDbgModeEnable)
    {
        /* Set FCPIT channel running on debug mode */
        FCPIT_HWA_SetChannelRunOnDebug(FCPIT_PTRS[u8FcpitInstance]);
    }
    else
    {
        /* Set FCPIT channel stop on debug mode */
        FCPIT_HWA_SetChannelStopOnDebug(FCPIT_PTRS[u8FcpitInstance]);
    }

    /* Configure FCPIT channel control register */
    FCPIT_HWA_ConfigChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel, u32CtrlRegValue);

    /* Set FCPIT channel value */
    FCPIT_HWA_SetChannelValue(FCPIT_PTRS[u8FcpitInstance], u8Channel, u32MaxValue);

    /* FCPit timer enable */
    FCPIT_HWA_EnableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_10();
}

/**
 * @brief Get predef timer value [SWDESG_GPT_091]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 * @param u32MaxValue FCPIT max value
 * @return
 */
GPT_TEXT_SECTION uint32 Gpt_LL_FCPIT_GetPredefTimerValue(Gpt_ModuleType eModule, uint8 u8Channel, uint32 u32MaxValue)
{
    uint32 u32ReturnValue = 0U;
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    /* Read counter registers */
    u32ReturnValue = FCPIT_HWA_ReadCurChannelValue(FCPIT_PTRS[u8FcpitInstance], u8Channel);
    if (u32ReturnValue < u32MaxValue)
    {
        u32ReturnValue = u32MaxValue - u32ReturnValue + (uint32)1u;
    }
    else
    {
        u32ReturnValue = 0;
    }

    return  u32ReturnValue;
}

/**
 * @brief Stop predef timer [SWDESG_GPT_096]
 *
 * @param eModule FCPIT module
 * @param u8Channel FCPIT channel
 */
GPT_TEXT_SECTION void Gpt_LL_FCPIT_StopPredefTimer(Gpt_ModuleType eModule, uint8 u8Channel)
{
    uint8 u8FcpitInstance;
    u8FcpitInstance = (uint8)(eModule - GPT_MODULE_FCPIT_0);
    /* Disable FCPIT channel */
    FCPIT_HWA_DisableChannel(FCPIT_PTRS[u8FcpitInstance], u8Channel);
}
#endif


#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif/*defined GPT_FCPIT_USED*/

#ifdef __cplusplus
}
#endif

/** @} */
