/**
 *   @file    Ocu_Ftu.c
 *   @version 1.5.1
 *   @brief   AUTOSAR Ocu - FTU driver source file.
 *   @details FTU source file, containing the variables and functions that are exported by the
 *            FTU driver.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERHHERAL            : FTU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add
                                                         Tpu support(only available on FC7240)
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Ocu_Hw_Irq.h"
#include "Ocu_Ftu.h"
#include "Ocu_Hw.h"
#include "SchM_Ocu.h"
#include "Ocu_Ftu_RegOps.h"
#include "Mcal.h"

#ifndef USER_MODE_REG_PROT_ENABLED
#define USER_MODE_REG_PROT_ENABLED (STD_OFF)
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define OCU_START_SEC_VAR_NO_INIT_8
#include "Ocu_MemMap.h"
/**
 * @brief    Array used to store the action information.
 */
OCU_DATA_SECTION static uint8 Ocu_aFtuOcuAction[OCU_MAX_CHANNELS];
#define OCU_STOP_SEC_VAR_NO_INIT_8
#include "Ocu_MemMap.h"

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
#define OCU_START_SEC_VAR_NO_INIT_32
#include "Ocu_MemMap.h"
/**
 * @brief    Array used to store the max counter value.
 */
OCU_DATA_SECTION static uint32 Ocu_aFtuMaxCounterValue[OCU_MAX_CHANNELS];
#define OCU_STOP_SEC_VAR_NO_INIT_32
#include "Ocu_MemMap.h"
#endif
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

#if defined(OCU_FTU_ISR_USED)
OCU_TEXT_SECTION static void Ocu_Ftu_ProcessCommonInterrupt(const uint8 u8ModuleId,
                                                            const uint8 u8ChannelId);
#if defined(OCU_FTU_0_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_0_ISR);
#endif
#if defined(OCU_FTU_1_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_1_ISR);
#endif
#if defined(OCU_FTU_2_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_2_ISR);
#endif
#if defined(OCU_FTU_3_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_3_ISR);
#endif
#if defined(OCU_FTU_4_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_4_ISR);
#endif
#if defined(OCU_FTU_5_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_5_ISR);
#endif
#if defined(OCU_FTU_6_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_6_ISR);
#endif
#if defined(OCU_FTU_7_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_7_ISR);
#endif
#if defined(OCU_FTU_8_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_8_ISR);
#endif
#if defined(OCU_FTU_9_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_9_ISR);
#endif
#if defined(OCU_FTU_10_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_10_ISR);
#endif
#if defined(OCU_FTU_11_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_FTU_11_ISR);
#endif
#endif

OCU_TEXT_SECTION static void OCU_Ftu_SetOutputCompare(FTU_Type               *pFtu,
                                                      uint8                   u8Channel,
                                                      const Ocu_PinActionType ePinAction);

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Set output compare of a FTU channel
 *
 * @param pFtu              -FTU instance
 * @param u8HwChannel       -FTU channel number, range is 0-7.
 * @param ePinAction        -Set output pin action.
 */
OCU_TEXT_SECTION static void OCU_Ftu_SetOutputCompare(FTU_Type               *pFtu,
                                                      uint8                   u8Channel,
                                                      const Ocu_PinActionType ePinAction)
{
    if (OCU_SET_LOW == ePinAction)
    {
        OCU_FTU_HWA_SetChannelOutputCompareOnLow(pFtu, u8Channel);
    }
    else if (OCU_SET_HIGH == ePinAction)
    {
        OCU_FTU_HWA_SetChannelOutputCompareOnHigh(pFtu, u8Channel);
    }
    else if (OCU_TOGGLE == ePinAction)
    {
        OCU_FTU_HWA_SetChannelOutputCompareTOGGLE(pFtu, u8Channel);
    }
    else
    {
        OCU_FTU_HWA_ClearChannelEdgeConfig(pFtu, u8Channel);
    }
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize FTU Modules and channels.
 *
 * @param pFtuChannelConfig          -Pointer to FTU channel configuration structure
 * @param pFtuModuleConfig           -Pointer to FTU module configuration structure
 * @param u8Channel                  -Input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_Ftu_Init(const Ocu_ChannelConfigType    *pFtuChannelConfig,
                                   const Ocu_Ftu_ModuleConfigType *pFtuModuleConfig,
                                   const uint8                     u8Channel)
{
    uint8             u8HwModuleId;
    uint8             u8HwChannel;
    uint32            u32RegSwoctrl;
    Ocu_PinActionType ePinAction;

    /*initialize register for used module*/
    u8HwModuleId = pFtuModuleConfig->u8ModuleId;

    /* Disable write protection */
    OCU_FTU_HWA_DisableWriteProtection(FTU_PTRS[u8HwModuleId]);

    /* Disable clock */
    OCU_FTU_HWA_SetModuleClkSrc(FTU_PTRS[u8HwModuleId], 0U);

    /* Disable timer overflow */
    OCU_FTU_HWA_DisableOverflowInterrupt(FTU_PTRS[u8HwModuleId]);

    /* Disable CPWM */
    OCU_FTU_HWA_DisableModuleCpwmMode(FTU_PTRS[u8HwModuleId]);

    /* Write FTUn_MODE register*/
    OCU_FTU_HWA_ConfigFaultModeAndInitStatus(FTU_PTRS[u8HwModuleId], ((uint32)0U));

    /* write FTUn_CONF register to config Debug Mode */
    OCU_FTU_HWA_ConfigModuleDebugMode(FTU_PTRS[u8HwModuleId], (uint8)(pFtuModuleConfig->eDbgMode));

    /* write FTUn_SYNCONF register */
    OCU_FTU_HWA_ConfigModulSYNCONFReg(FTU_PTRS[u8HwModuleId], ((uint32)0U));

    /* Set Counter register to 0 and Initial Counter Value to 0 */
    OCU_FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[u8HwModuleId], ((uint32)0U));
    OCU_FTU_HWA_ClearModuleCounter(FTU_PTRS[u8HwModuleId], ((uint32)0U));

    /* write the Ftu Modulo Value  */
    OCU_FTU_HWA_SetModuleCompareValue(FTU_PTRS[u8HwModuleId], pFtuModuleConfig->u32MaxCounterValue);

    /*initialize register for used channel*/
    u32RegSwoctrl = OCU_FTU_HWA_ReadOutputCtrl(FTU_PTRS[u8HwModuleId]);
    u8HwChannel   = pFtuChannelConfig->u8HwChannel;

    /* Read ELSB:ELSA bits */
    ePinAction = (Ocu_PinActionType)(pFtuChannelConfig->eOutputPinAction);

    /* set FTU output compare action when counter reaches CV */
    Ocu_aFtuOcuAction[u8Channel] = (uint8)ePinAction;

    /* write default threshold to FTUn_CnV */
    OCU_FTU_HWA_SetChannelValue(FTU_PTRS[u8HwModuleId],
                                u8HwChannel,
                                pFtuChannelConfig->u32DefaultThreshold);

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
    /* Store the max counter value */
    Ocu_aFtuMaxCounterValue[u8Channel] = pFtuModuleConfig->u32MaxCounterValue;
#endif

    /* If pin is used, it should be enter software control mode */
    if ((boolean)TRUE == pFtuChannelConfig->bOcuOutputPinUsed)
    {
        if (OCU_HIGH == pFtuChannelConfig->eDefaultPinState)
        {
            u32RegSwoctrl |= (uint32)(((uint32)1U)
                                      << (u8HwChannel + OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET));
        }
        else
        {
            u32RegSwoctrl &= (uint32)(~(
                uint32)(((uint32)1U) << (u8HwChannel + OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET)));
        }
        u32RegSwoctrl |= (uint32)(((uint32)1U) << u8HwChannel);
    }

    /* FTUEN=1 active buffer mechanism */
    OCU_FTU_HWA_SetModuleUpdateRegBySync(FTU_PTRS[u8HwModuleId]);

    /* Write SWOCTRL with calculated value*/
    OCU_FTU_HWA_ConfigSoftwareOutputControl(FTU_PTRS[u8HwModuleId], u32RegSwoctrl);

    /* enable FTU output */
    OCU_FTU_HWA_EnableChannelsOutput(FTU_PTRS[u8HwModuleId], (uint8)(1U << u8HwChannel));

    /* set the prescaler with the wanted value */
    OCU_FTU_HWA_SetModulePrescale(FTU_PTRS[u8HwModuleId], pFtuModuleConfig->ePrescaler);

    /* set timer clock */
    if (OCU_FTU_BUS_CLK == pFtuModuleConfig->eClkSrc)
    {
        OCU_FTU_HWA_SetModuleClkSrc(FTU_PTRS[u8HwModuleId], (uint8)OCU_FTU_BUS_CLK);
    }
    else if (OCU_FTU_NO_CLK == pFtuModuleConfig->eClkSrc)
    {
        OCU_FTU_HWA_SetModuleClkSrc(FTU_PTRS[u8HwModuleId], (uint8)OCU_FTU_NO_CLK);
    }
    else
    {
        OCU_FTU_HWA_SetModuleClkSrc(FTU_PTRS[u8HwModuleId], (uint8)OCU_FTU_PCC_CLK);
        if (pFtuModuleConfig->eClkSrc > OCU_FTU_PCC_CLK)
        {
            OCU_FTU_HWA_SetExternalClkSrc(FTU_PTRS[u8HwModuleId],
                                          (uint32)(pFtuModuleConfig->eClkSrc) - 4U);
        }
    }
}

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a FTU Module
 *
 * @param u8HwChannel          -FTU hardware channel
 * @param u8HwModule           -FTU hardware module
 * @param u8Channel            -Input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_Ftu_DeInit(const uint8 u8HwChannel,
                                     const uint8 u8HwModuleId,
                                     const uint8 u8Channel)
{
    /* Disable timer */
    OCU_FTU_HWA_SetModuleClkSrc(FTU_PTRS[u8HwModuleId], (uint8)OCU_FTU_NO_CLK);

    /* De-init module configuration */
    OCU_FTU_HWA_DeinitModuleCommon(FTU_PTRS[u8HwModuleId]);

    /* Reset FTUn_CnSC */
    OCU_FTU_HWA_SetChannelConfig(FTU_PTRS[u8HwModuleId], u8HwChannel, 0U);

    /* Set CnV register to 0 */
    OCU_FTU_HWA_SetChannelValue(FTU_PTRS[u8HwModuleId], u8HwChannel, 0U);

    /* Reset CHOCV */
    OCU_FTU_HWA_ClearSoftwareOutputControl(
        FTU_PTRS[u8HwModuleId],
        (uint32)(((uint32)1U) << (u8HwChannel + OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET)));

    /* Disable output */
    OCU_FTU_HWA_DisableChannelsOutput(FTU_PTRS[u8HwModuleId], (uint8)(1U << u8HwChannel));

    /* Reset CH0OC */
    OCU_FTU_HWA_ClearSoftwareOutputControl(FTU_PTRS[u8HwModuleId],
                                           (uint32)(((uint32)1U) << u8HwChannel));

    /* Reset FTUEN bit */
    OCU_FTU_HWA_ClearModuleUpdateRegBySync(FTU_PTRS[u8HwModuleId]);

    /*  Set CNTIN and CNT registers to 0 */
    OCU_FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[u8HwModuleId], (uint32)0U);
    OCU_FTU_HWA_ClearModuleCounter(FTU_PTRS[u8HwModuleId], (uint32)0U);

    /* Clear MOD */
    OCU_FTU_HWA_SetModuleCompareValue(FTU_PTRS[u8HwModuleId], 0U);

    /* Clear DBGMODE  */
    OCU_FTU_HWA_ConfigDBGMode(FTU_PTRS[u8HwModuleId]);

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
    /* Reset Ocu_aFtuMaxCounterValue */
    Ocu_aFtuMaxCounterValue[u8Channel] = 0U;
#endif
    Ocu_aFtuOcuAction[u8Channel] = 0U;
}
#endif

/**
 * @brief Start FTU timer channel.
 *
 * @param u8ChannelIdx  -FTU channel Id
 * @param u8HwModule    -FTU module hardware number
 * @param u8HwChannel   -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)
{
    boolean bRegVal = FALSE;

    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type
     * Reason: No problem doing this as the value is within range of the cast type */
    /* set FTU output compare action when counter reaches CV */
    OCU_Ftu_SetOutputCompare(FTU_PTRS[u8HwModule],
                             u8HwChannel,
                             (Ocu_PinActionType)Ocu_aFtuOcuAction[u8ChannelIdx]);

    /* PRQA S 4342 -- */

    /* Release software control */
    OCU_FTU_HWA_ClearSoftwareOutputControl(FTU_PTRS[u8HwModule],
                                           (uint32)(((uint32)1U) << ((uint8)u8HwChannel)));

    /* Read FTU channel interrupt flag, clear interrupt flag must read CSC register first */
    bRegVal = (boolean)OCU_FTU_HWA_ReadChannelInterruptFlag(FTU_PTRS[u8HwModule], u8HwChannel);

    /* clear interrupt flag */
    if ((boolean)TRUE == bRegVal)
    {
        /* Start critical section for logical channel */
        SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_02();
        OCU_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[u8HwModule], u8HwChannel);
        /* exit critical section for logical channel*/
        SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_02();
    }

    /* enable interrupts for the given channel */
    OCU_FTU_HWA_EnableChannelInterrupt(FTU_PTRS[u8HwModule], u8HwChannel);
}

/**
 * @brief Stop FTU timer channel.
 *
 * @param u8HwModule    -FTU module hardware number
 * @param u8HwChannel   -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel)
{
    /* Start critical section for logical channel*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_03();

    /* clear bit ELSB:ELSA */
    OCU_FTU_HWA_ClearChannelEdgeConfig(FTU_PTRS[u8HwModule], u8HwChannel);

    /*clear CHF bit*/
    OCU_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[u8HwModule], u8HwChannel);

    /* Disable interrupts for the given channel*/
    OCU_FTU_HWA_DisableChannelInterrupt(FTU_PTRS[u8HwModule], u8HwChannel);

    /*exit critical section for logical channel*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_03();
}

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Ocu driver function for setting the Pin State for the current Ftu channel
 *
 * @param u8HwModule    -FTU module hardware number
 * @param u8HwChannel   -FTU channel hardware number
 * @param ePinState     -State of pin
 */
OCU_TEXT_SECTION void Ocu_Ftu_SetPinState(uint8            u8HwModule,
                                          uint8            u8HwChannel,
                                          Ocu_PinStateType ePinState)
{
    uint32 u32RegSwoctrl;

    /*read current configuration value of SWOCTRL register*/
    u32RegSwoctrl = OCU_FTU_HWA_ReadOutputCtrl(FTU_PTRS[u8HwModule]);

    /*set output pin to its configured state*/
    if (OCU_HIGH == ePinState)
    {
        u32RegSwoctrl |= (uint32)(((uint32)1U)
                                  << (u8HwChannel + OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET));
    }
    else
    {
        u32RegSwoctrl &= (uint32)(~(uint32)(((uint32)1U)
                                            << (u8HwChannel + OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET)));
    }
    /* Enable software control */
    u32RegSwoctrl |= (uint32)(((uint32)1U) << (u8HwChannel));

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_05();

    OCU_FTU_HWA_ConfigSoftwareOutputControl(FTU_PTRS[u8HwModule], u32RegSwoctrl);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_05();
}
#endif /* OCU_SET_PIN_STATE_API == STD_ON */

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief This function changes the output pin behaviour of the selected channel to the one
 * specified for next comparison match
 *
 * @param u8ChannelIndex      -Index for Ftu channels
 * @param ePinAction          -OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE
 * @param u8ModuleId          -FTU module hardware number
 * @param u8ChannelId         -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_SetPinAction(const uint8       u8ChannelIndex,
                                           Ocu_PinActionType ePinAction,
                                           uint8             u8ModuleId,
                                           uint8             u8ChannelId)
{
    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_04();
    Ocu_aFtuOcuAction[u8ChannelIndex] = (uint8)ePinAction;

    /* set FTU output compare action when counter reaches CV */
    OCU_Ftu_SetOutputCompare(FTU_PTRS[u8ModuleId], u8ChannelId, ePinAction);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_04();
}
#endif /* OCU_SET_PIN_ACTION_API == STD_ON */

#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief Ocu driver function reads and sends back the counter value of the selected channel.
 *
 * @param  u8HwModule     -FTU module hardware number
 * @return u32ReturnValue -The current value of CNT register
 */
OCU_TEXT_SECTION uint32 Ocu_Ftu_GetCounter(uint8 u8HwModule)
{
    uint32 u32ReturnValue;
    u32ReturnValue = (uint32)(OCU_FTU_HWA_ReadModuleCounter(FTU_PTRS[u8HwModule]));
    return (u32ReturnValue);
}
#endif /*OCU_GET_COUNTER_API == STD_ON*/

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief This function sets the comparison threshold of the selected channel using an absolute
 * input data
 *
 * @param SetThreshold      -Struct contains u8ChannelNumber, ReferenceValue, AbsoluteValue and
 * Ocu_ReturnType
 * @param u8ModuleId       -FTU module hardware number
 * @param u8ChannelId      -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType *SetThreshold,
                                                   uint8                 u8ModuleId,
                                                   uint8                 u8ChannelId)
{
    uint32 u32CntValuePostUpdate;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_07();

    /* Set timeout value to FTU_CV_ADDR32 register*/
    OCU_FTU_HWA_SetChannelValue(FTU_PTRS[u8ModuleId], u8ChannelId, SetThreshold->u32AbsoluteValue);

    /* Read Counter value post update and a constant configurable delay to PostUpdate value to
     * compensate for the execution of the API
     */
    u32CntValuePostUpdate = (uint32)OCU_FTU_HWA_ReadModuleCounter(FTU_PTRS[u8ModuleId]);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_07();

    if (SetThreshold->u32ReferenceValue <= SetThreshold->u32AbsoluteValue)
    {
        if ((SetThreshold->u32ReferenceValue <= u32CntValuePostUpdate) &&
            (u32CntValuePostUpdate <= SetThreshold->u32AbsoluteValue))
        {
            SetThreshold->eInterval = OCU_CM_IN_REF_INTERVAL;
        }
        else
        {
            SetThreshold->eInterval = OCU_CM_OUT_REF_INTERVAL;
        }
    }
    else
    {
        /*check if post-update value is outside the compare match interval*/
        if ((u32CntValuePostUpdate < SetThreshold->u32ReferenceValue) &&
            (u32CntValuePostUpdate > SetThreshold->u32AbsoluteValue))
        {
            SetThreshold->eInterval = OCU_CM_OUT_REF_INTERVAL;
        }
        else
        {
            SetThreshold->eInterval = OCU_CM_IN_REF_INTERVAL;
        }
    }
}
#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON */

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief The function sets the value of the channel threshold relative to the current value of the
 * counter.
 *
 * @param SetThreshold      -Struct contains u8ChannelNumber, ReferenceValue, AbsoluteValue and
 * Ocu_ReturnType
 * @param u8ModuleId       -FTU module hardware number
 * @param u8ChannelId      -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_SetRelativeThreshold(Ocu_SetThresholdType *SetThreshold,
                                                   uint8                 u8ModuleId,
                                                   uint8                 u8ChannelId)
{
    uint32 u32CntValuePreUpdate;
    uint32 u32CntValuePostUpdate;
    uint32 u32CmpMatchValue;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_06();

    /* Read Counter register */
    u32CntValuePreUpdate = OCU_FTU_HWA_ReadModuleCounter(FTU_PTRS[u8ModuleId]);

    /* PRQA S 4391 ++ #Misra:2012 Rule-10.8 The value of a composite expression shall not be cast to
     * a different essential type category or a wider essential type
     * Reason: It is allowed to cast the value which read from register address to a different type
     */
    /* Calculate u32CmpMatchValue, matching can occur at current cycle or next cycle */
    u32CmpMatchValue = (u32CntValuePreUpdate + (SetThreshold->u32RelativeValue)) %
                       Ocu_aFtuMaxCounterValue[SetThreshold->u8ChannelNumber];

    /* PRQA S 4391 -- */

    /* Set relative value to FTU_CnV register*/
    OCU_FTU_HWA_SetChannelValue(FTU_PTRS[u8ModuleId], u8ChannelId, u32CmpMatchValue);

    /* re-Read Counter register */
    u32CntValuePostUpdate = OCU_FTU_HWA_ReadModuleCounter(FTU_PTRS[u8ModuleId]);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_06();

    if (u32CntValuePreUpdate <= u32CmpMatchValue)
    {
        if ((u32CntValuePreUpdate <= u32CntValuePostUpdate) &&
            (u32CntValuePostUpdate <= u32CmpMatchValue))
        {
            SetThreshold->eInterval = OCU_CM_IN_REF_INTERVAL;
        }
        else
        {
            SetThreshold->eInterval = OCU_CM_OUT_REF_INTERVAL;
        }
    }
    else
    {
        if ((u32CntValuePostUpdate < u32CntValuePreUpdate) &&
            (u32CntValuePostUpdate > u32CmpMatchValue))
        {
            SetThreshold->eInterval = OCU_CM_OUT_REF_INTERVAL;
        }
        else
        {
            SetThreshold->eInterval = OCU_CM_IN_REF_INTERVAL;
        }
    }
}
#endif /* OCU_SET_RELATIVE_THRESHOLD_API == STD_ON */

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief Ocu_Ftu_GetMaxCountValue
 *
 * @param u8IdxChannelConfig     -Index of Ftu channel that configure to Ocu
 * @return Ocu_ValueType         -Max counter value for given channel
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Ftu_GetMaxCountValue(Ocu_ChannelType u8IdxChannelConfig)
{
    Ocu_ValueType ReturnMaxCountValue;

    ReturnMaxCountValue = Ocu_aFtuMaxCounterValue[u8IdxChannelConfig];
    return ReturnMaxCountValue;
}
#endif

#if defined(OCU_FTU_ISR_USED)
/**
 * @brief Process common interrupt function
 *
 * @param u8ModuleId FTU module
 * @param u8ChannelId FTU channel for current module
 */
OCU_TEXT_SECTION static void Ocu_Ftu_ProcessCommonInterrupt(const uint8 u8ModuleId,
                                                            const uint8 u8ChannelId)
{
    boolean             bChfStatus;          /* Status of channel flag bit*/
    boolean             bChieStatus;         /* Status of channel interrupt enable bit */
    Ocu_Ftu_ChannelType u8ChannelsModOffset; /* Encode channel ID and module ID to a u8 variable */

    /*get Channel flag status*/
    bChieStatus = OCU_FTU_HWA_ReadChannelInterruptEnable(FTU_PTRS[u8ModuleId], u8ChannelId);

    bChfStatus = OCU_FTU_HWA_ReadChannelInterruptFlag(FTU_PTRS[u8ModuleId], u8ChannelId);

    u8ChannelsModOffset = (uint8)(((Ocu_Ftu_ChannelType)OCU_FTU_MODULE_CHANNELS_NO *
                                   (Ocu_Ftu_ChannelType)u8ModuleId) +
                                  u8ChannelId);
    if ((((boolean)FALSE) != bChieStatus) && (((boolean)FALSE) != bChfStatus))
    {
        Ocu_Hw_ProcessCommonInterrupt((Ocu_ChannelType)u8ChannelsModOffset);
    }

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_08();

    /*clear CHF bit*/
    OCU_FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[u8ModuleId], u8ChannelId);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_08();
}

/* PRQA S 3006, 1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                    Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined
 * Reason: The object has defined in Bsp_Ocu.c file
 */
#if defined(OCU_FTU_0_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_0_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_0], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_0, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_1_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_1_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_1], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_1, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_2_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_2_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_2], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_2, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_3_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_3_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_3], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_3, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_4_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_4_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_4], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_4, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_5_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_5_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_5], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_5, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_6_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_6_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_6], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_6, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_7_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_7_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_7], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_7, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if ((DEVICE_SERIES == FC7300F4MDSxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F8MDTxxxxT1B))
#if defined(OCU_FTU_8_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_8_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_8], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_8, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_9_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_9_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_9], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_9, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_10_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_10_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_10], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_10, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_FTU_11_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_FTU_11_ISR)
{
    uint8 u8FTUchannel = 0U;

    for (u8FTUchannel = 0U; u8FTUchannel < OCU_FTU_MODULE_CHANNELS_NO; u8FTUchannel++)
    {
        if ((boolean)TRUE ==
            OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_PTRS[OCU_FTU_11], u8FTUchannel))
        {
            Ocu_Ftu_ProcessCommonInterrupt(OCU_FTU_11, u8FTUchannel);
        }
        else
        {
            /* Do nothing*/
        }
    }
    EXIT_INTERRUPT();
}
#endif
#endif

#endif
/* PRQA S 3006, 1006 -- */
/* PRQA S 3408 -- */

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
