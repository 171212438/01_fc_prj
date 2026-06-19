/**
 *   @file    Ocu_Tpu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - Tpu driver source file.
 *   @details Tpu source file, containing the variables and functions that are exported by the
 *            Tpu driver.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERHHERAL            : Tpu
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
#include "Mcal.h"
#include "Ocu_Hw_Irq.h"
#include "Ocu_Tpu.h"
#include "Ocu_Tpu_E_RegOps.h"
#include "SchM_Ocu.h"
#include "Scm_RegOps.h"
#include "Std_Types.h"
#if (OCU_HAVE_TPU == STD_ON)

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
#define OCU_START_SEC_VAR_NO_INIT_32
#include "Ocu_MemMap.h"
/**
 * @brief    Array used to store the max counter value.
 */
OCU_DATA_SECTION static uint32 Ocu_aTpuMaxCounterValue[OCU_TPU_HW_MODULES];

#define OCU_STOP_SEC_VAR_NO_INIT_32
#include "Ocu_MemMap.h"

/* PRQA S 3684 ++ #Misra-C:2012 Rule-8.11 When an array with external linkage is declared, its size
 * should be explicitly specified. This rule applies to non-defining declarations only. It is
 * possible to define an array and specify its size implicitly by means of initialization. Reason:
 * The size of the object was implicitly specified when defining it*/

extern TPU_E_Type *const TPU_E_PTRS[];

/* PRQA S 3684 -- */
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

#if defined(OCU_TPU_ISR_USED)
OCU_TEXT_SECTION static void Ocu_Tpu_ProcessCommonInterrupt(const uint8 u8ModuleId,
                                                            const uint8 u8channel);

#if defined(OCU_TPU_0_7_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_TPU_0_7_ISR);
#endif
#if defined(OCU_TPU_8_15_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_TPU_8_15_ISR);
#endif
#if defined(OCU_TPU_16_23_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_TPU_16_23_ISR);
#endif
#if defined(OCU_TPU_24_31_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_TPU_24_31_ISR);
#endif
#endif

OCU_TEXT_SECTION static void OCU_Tpu_SetOutputCompare(TPU_E_Type             *pTpu,
                                                      uint8                   u8Channel,
                                                      const Ocu_PinActionType ePinAction);

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Set output compare of a Tpu channel
 *
 * @param pTpu              -Tpu base address
 * @param u8Channel         -Tpu channel number, range is 0-7.
 * @param ePinAction        -Set output pin action.
 */
OCU_TEXT_SECTION static void OCU_Tpu_SetOutputCompare(TPU_E_Type             *pTpu,
                                                      uint8                   u8Channel,
                                                      const Ocu_PinActionType ePinAction)
{
    if (OCU_SET_LOW == ePinAction)
    {
        OCU_TPU_E_HWA_SetOPAC1(pTpu, u8Channel, OCU_TPUE_MATCH_SET_OUTPUT_LOW);
    }
    else if (OCU_SET_HIGH == ePinAction)
    {
        OCU_TPU_E_HWA_SetOPAC1(pTpu, u8Channel, OCU_TPUE_MATCH_SET_OUTPUT_HIGH);
    }
    else if (OCU_TOGGLE == ePinAction)
    {
        OCU_TPU_E_HWA_SetOPAC1(pTpu, u8Channel, OCU_TPUE_MATCH_TOGGLE_OUTPUT);
    }
    else
    {
        OCU_TPU_E_HWA_SetOPAC1(pTpu, u8Channel, OCU_TPUE_NO_CHANGE_OUTPUT);
    }
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize Tpu Modules.
 *
 * @param pTpuModuleConfig           -Pointer to Tpu module configuration structure
 */
OCU_TEXT_SECTION void Ocu_Tpu_ModuleInit(const Ocu_Tpu_ModuleConfigType *pTpuModuleConfig)
{
    uint8 u8HwModuleId;
    u8HwModuleId = pTpuModuleConfig->u8TpuModuleId;

    /* Set channel filter source, mode and prescaler when TCR clock sourse selects TCRCLK */
    if (pTpuModuleConfig->eTCR1ClkSrc == OCU_TPU_CLK_TCRCLK)
    {
        /* Set the clock source of TCRCLK filter */
        OCU_TPU_E_HWA_SetTCRClkFilter(TPU_E_PTRS[u8HwModuleId],
                                      ((uint32)(pTpuModuleConfig->eOcuTcrClkFilterClock)) |
                                          ((uint32)(pTpuModuleConfig->eOcuTcrClkFilterMode)));

        /* Set channel filter mode and prescaler when channel filter clock selects CHANNELS_CLOCK */
        if (pTpuModuleConfig->eOcuTcrClkFilterClock == OCU_TPU_CHANNELS_CLOCK)
        {
            /* Set channel digital filter mode */
            OCU_TPU_E_HWA_SetFilterCtrl(TPU_E_PTRS[u8HwModuleId],
                                        (uint32)pTpuModuleConfig->eOcuChannelFilterMode);
            /* Set channel digital filter source and prescaler */
            if (pTpuModuleConfig->eOcuChannelFilterPrescaler == OCU_TPU_DIV_256)
            {
                OCU_TPU_E_HWA_SetFilterClkSrc(TPU_E_PTRS[u8HwModuleId], (uint8)0U);
                OCU_TPU_E_HWA_SetFilterPrescaler(TPU_E_PTRS[u8HwModuleId], (uint8)OCU_TPU_DIV_128);
            }
            else
            {
                OCU_TPU_E_HWA_SetFilterClkSrc(TPU_E_PTRS[u8HwModuleId], (uint8)1U);
                OCU_TPU_E_HWA_SetFilterPrescaler(TPU_E_PTRS[u8HwModuleId],
                                                 (uint8)pTpuModuleConfig->eOcuChannelFilterPrescaler);
            }
        }
    }
    else
    {
        /* Do nothing */
    }

    /* Set TCR clock source and prescaler. All clocks can be set with a prescaler less than 256 */
    if (pTpuModuleConfig->u16TCR1Prescaler < 256U)
    {
        OCU_TPU_E_HWA_SetTCR1ClkControl(TPU_E_PTRS[u8HwModuleId], pTpuModuleConfig->eTCR1ClkSrc);
        OCU_TPU_E_HWA_SetTCR1Prescaler(TPU_E_PTRS[u8HwModuleId],
                                       (uint32)(pTpuModuleConfig->u16TCR1Prescaler - 1U));
    }
    /* Set TCR clock source with TPU_CLK_BUS_CLOCK_DIV2 when clock source prescaler bigger than 256*/
    else
    {
        OCU_TPU_E_HWA_SetTCR1ClkControl(TPU_E_PTRS[u8HwModuleId], OCU_TPU_CLK_BUS_CLOCK_DIV2);
        OCU_TPU_E_HWA_SetTCR1Prescaler(TPU_E_PTRS[u8HwModuleId],
                                       (uint32)((pTpuModuleConfig->u16TCR1Prescaler / 2) - 1U));
    }

    /* Set the debug mode */
    OCU_TPU_E_HWA_SetHalt(TPU_E_PTRS[u8HwModuleId], (uint32)pTpuModuleConfig->eTpuDbgMode);

    /* Set the max value of TCR1 */
    OCU_TPU_E_HWA_SetTCR1MaxCnt(TPU_E_PTRS[u8HwModuleId], pTpuModuleConfig->u32MaxTCR1Value);

    /* Store the max counter value */
    Ocu_aTpuMaxCounterValue[u8HwModuleId] = pTpuModuleConfig->u32MaxTCR1Value;

    /* Disable TCR1 overflow interrupt */
    OCU_TPU_E_HWA_EnableTCR1OVFIRQ(TPU_E_PTRS[u8HwModuleId], (boolean)FALSE);

    /* Clear the TCR1 overflow flag */
    OCU_TPU_E_HWA_ClearTCR1Overflow(TPU_E_PTRS[u8HwModuleId]);

    /* global time base enable */
    SCM_HWA_EnableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
}

/**
 * @brief Initialize Tpu Modules and channels.
 *
 * @param pTpuChannelConfig          -Pointer to Tpu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Tpu_ChannelInit(const Ocu_ChannelConfigType *pTpuChannelConfig)
{
    uint8 u8HwChannelId;
    uint8 u8HwModuleId;
    u8HwChannelId = pTpuChannelConfig->u8HwChannel;
    u8HwModuleId  = pTpuChannelConfig->u8HwModule;

    /* Disable match */
    OCU_TPU_E_HWA_EnableMatch(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)FALSE);

    /* Disable channel interrupt */
    OCU_TPU_E_HWA_EnableChEventInt(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)FALSE);

    /* Clear flag */
    OCU_TPU_E_HWA_ClearMatch1CFGFlg(TPU_E_PTRS[u8HwModuleId], u8HwChannelId);
    OCU_TPU_E_HWA_ClearMatch1Event(TPU_E_PTRS[u8HwModuleId], u8HwChannelId);
    OCU_TPU_E_HWA_ClearTransDetect1Event(TPU_E_PTRS[u8HwModuleId], u8HwChannelId);
    OCU_TPU_E_HWA_ClearMatch2CFGFlg(TPU_E_PTRS[u8HwModuleId], u8HwChannelId);
    OCU_TPU_E_HWA_ClearTransDetect2Event(TPU_E_PTRS[u8HwModuleId], u8HwChannelId);

    /* Channel filter bypass */
    OCU_TPU_E_HWA_OpenChFilter(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)TRUE);

    /* Set channel mode with predefine mode */
    OCU_TPU_E_HWA_SetPDCM(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, OCU_TPUE_SM_ST);

    OCU_TPU_E_HWA_SetMatchER1(TPU_E_PTRS[u8HwModuleId],
                              u8HwChannelId,
                              pTpuChannelConfig->u32DefaultThreshold);

    /* Set output polarity according to the configuration */
    if (pTpuChannelConfig->eDefaultPinState == OCU_HIGH)
    {
        OCU_TPU_E_HWA_SetOutputSelHigh(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)TRUE);
    }
    else
    {
        OCU_TPU_E_HWA_SetOutputSelHigh(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)FALSE);
    }

    /* Do not detect transition */
    OCU_TPU_E_HWA_SetIPAC1(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, 0u);
    OCU_TPU_E_HWA_SetIPAC2(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, 0u);

    /* Set the output action */
    OCU_Tpu_SetOutputCompare(TPU_E_PTRS[u8HwModuleId],
                             u8HwChannelId,
                             pTpuChannelConfig->eOutputPinAction);

    /* Set match type to equal only, and set time base to TCR1 */
    OCU_TPU_E_HWA_SetChTBS1(TPU_E_PTRS[u8HwModuleId],
                            u8HwChannelId,
                            OCU_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1);
    OCU_TPU_E_HWA_SetChTBS2(TPU_E_PTRS[u8HwModuleId],
                            u8HwChannelId,
                            OCU_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1);

    /* Enable output buffer */
    OCU_TPU_E_HWA_EnableChOutputBuf(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)TRUE);

    /* Enable service request */
    OCU_TPU_E_HWA_EnableSrvReq(TPU_E_PTRS[u8HwModuleId], u8HwChannelId, (boolean)TRUE);
}

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a Tpu Module
 *
 * @param u8HwModuleId               -Input Tpu module number
 */
OCU_TEXT_SECTION void Ocu_Tpu_DeInit(const uint8 u8HwModuleId)
{
    /* Trigger a software reset */
    OCU_TPU_E_HWA_TrigReset(TPU_E_PTRS[u8HwModuleId]);

    /* Reset Ocu_aFtuMaxCounterValue */
    Ocu_aTpuMaxCounterValue[u8HwModuleId] = 0U;
}
#endif

/**
 * @brief Start Tpu timer channel.
 *
 * @param u8ChannelIdx  -Tpu channel Id
 * @param u8HwModule    -Tpu module hardware number
 * @param u8HwChannel   -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel)
{
    /* Start critical section for logical channel */
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_12();

    /* Enable channel interrupt */
    OCU_TPU_E_HWA_EnableChEventInt(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)TRUE);

    /* Enable service request */
    OCU_TPU_E_HWA_EnableSrvReq(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)TRUE);

    /* Enable match */
    OCU_TPU_E_HWA_EnableMatch(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)TRUE);

    /* exit critical section for logical channel*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_12();
    (void)u8ChannelIdx;
}

/**
 * @brief Stop Tpu timer channel.
 *
 * @param u8HwModule    -Tpu module hardware number
 * @param u8HwChannel   -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel)
{
    /* Start critical section for logical channel*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_13();

    /* Disable channel interrupt */
    OCU_TPU_E_HWA_EnableChEventInt(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)FALSE);

    /* Disable match */
    OCU_TPU_E_HWA_EnableMatch(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)FALSE);

    /* Clear channel event trigger interrupt */
    OCU_TPU_E_HWA_ClearChEventISRFlg(TPU_E_PTRS[u8HwModule], u8HwChannel);

    /* Clear match event flag */
    OCU_TPU_E_HWA_ClearMatch1Event(TPU_E_PTRS[u8HwModule], u8HwChannel);

    /*exit critical section for logical channel*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_13();
}

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Ocu driver function for setting the Pin State for the current Tpu channel
 *
 * @param u8HwModule    -Tpu module hardware number
 * @param u8HwChannel   -Tpu channel hardware number
 * @param ePinState     -State of pin
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetPinState(uint8            u8HwModule,
                                          uint8            u8HwChannel,
                                          Ocu_PinStateType ePinState)
{
    /* Set the OPOL according to the ePinState */
    if (ePinState == OCU_HIGH)
    {
        OCU_TPU_E_HWA_SetOutputSelHigh(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)TRUE);
    }
    else
    {
        OCU_TPU_E_HWA_SetOutputSelHigh(TPU_E_PTRS[u8HwModule], u8HwChannel, (boolean)FALSE);
    }
}
#endif /* OCU_SET_PIN_STATE_API == STD_ON */

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief This function changes the output pin behaviour of the selected channel to the one
 * specified for next comparison match
 *
 * @param ePinAction          -OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE
 * @param u8HwModule          -Tpu module hardware number
 * @param u8HwChannel         -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetPinAction(Ocu_PinActionType ePinAction,
                                           uint8             u8HwModule,
                                           uint8             u8HwChannel)
{
    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_09();

    /* Set Tpu output compare action when counter reaches ER1 */
    OCU_Tpu_SetOutputCompare(TPU_E_PTRS[u8HwModule], u8HwChannel, ePinAction);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_09();
}
#endif /* OCU_SET_PIN_ACTION_API == STD_ON */

#if (OCU_GET_COUNTER_API == STD_ON)
/**
* @brief Ocu driver function reads and sends back the counter value of the selected channel.
*
* @param  u8HwModule     -Tpu module hardware number

* @return u32ReturnValue -The current value of CNT register
*/
OCU_TEXT_SECTION uint32 Ocu_Tpu_GetCounter(uint8 u8HwModule)
{
    uint32 u32ReturnValue;

    /* Get TCR1 value */
    u32ReturnValue = (uint32)(OCU_TPU_E_HWA_GetTCR1CntVal(TPU_E_PTRS[u8HwModule]));

    return u32ReturnValue;
}
#endif /*OCU_GET_COUNTER_API == STD_ON*/

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief This function sets the comparison threshold of the selected channel using an absolute
 * input data
 *
 * @param SetThreshold      -Struct contains u8ChannelNumber, ReferenceValue, AbsoluteValue and
 * Ocu_ReturnType
 * @param u8ModuleId        -Tpu module hardware number
 * @param u8ChannelId       -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetAbsoluteThreshold(Ocu_SetThresholdType *SetThreshold,
                                                   uint8                 u8ModuleId,
                                                   uint8                 u8ChannelId)
{
    uint32 u32CntValuePostUpdate;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_11();

    /* Set match value*/
    OCU_TPU_E_HWA_SetMatchER1(TPU_E_PTRS[u8ModuleId], u8ChannelId, SetThreshold->u32AbsoluteValue);

    /* Read Counter value post update and a constant configurable delay to PostUpdate value to
    compensate for the execution of the API*/
    u32CntValuePostUpdate = OCU_TPU_E_HWA_GetTCR1CntVal(TPU_E_PTRS[u8ModuleId]);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_11();

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
 * @param u8ModuleId        -Tpu module hardware number
 * @param u8ChannelId       -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetRelativeThreshold(Ocu_SetThresholdType *SetThreshold,
                                                   uint8                 u8ModuleId,
                                                   uint8                 u8ChannelId)
{
    uint32 u32CntValuePreUpdate;
    uint32 u32CntValuePostUpdate;
    uint32 u32CmpMatchValue;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_10();

    /* Read Counter register */
    u32CntValuePreUpdate = OCU_TPU_E_HWA_GetTCR1CntVal(TPU_E_PTRS[u8ModuleId]);

    u32CmpMatchValue = (u32CntValuePreUpdate + (SetThreshold->u32RelativeValue)) %
                       Ocu_aTpuMaxCounterValue[u8ModuleId];

    /* Set relative value to Tpu_CnV register*/
    OCU_TPU_E_HWA_SetMatchER1(TPU_E_PTRS[u8ModuleId], u8ChannelId, u32CmpMatchValue);

    /* re-Read Counter register */
    u32CntValuePostUpdate = OCU_TPU_E_HWA_GetTCR1CntVal(TPU_E_PTRS[u8ModuleId]);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_10();

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
 * @brief Ocu_Tpu_GetMaxCountValue
 *
 * @param u8HwModule             -Index of Tpu module
 * @return Ocu_ValueType         -Max counter value for given channel
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Tpu_GetMaxCountValue(uint8 u8HwModule)
{
    Ocu_ValueType u32CountValue;

    /* Get the max value of TCR1 */
    u32CountValue = Ocu_aTpuMaxCounterValue[u8HwModule];

    return u32CountValue;
}
#endif

#if defined(OCU_TPU_ISR_USED)
/**
 * @brief Process common interrupt function
 *
 * @param u8ModuleId Tpu module
 * @param u8ChannelId Tpu channel for current module
 */
OCU_TEXT_SECTION static void Ocu_Tpu_ProcessCommonInterrupt(const uint8 u8ModuleId,
                                                            const uint8 u8channel)
{
    Ocu_ChannelType u8ChannelsModOffset;

    if (OCU_TPU_E_HWA_GetChMatchRecLatch1Status(TPU_E_PTRS[u8ModuleId], u8channel) == (boolean)TRUE)
    {
        /*enter critical section TODO check*/
        SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_14();

        /* Clear channel event interrupt flag */
        OCU_TPU_E_HWA_ClearChEventISRFlg(TPU_E_PTRS[u8ModuleId], (uint8)u8channel);

        /* in match1 */
        OCU_TPU_E_HWA_ClearMatch1Event(TPU_E_PTRS[u8ModuleId], u8channel);

        /*exit critical section*/
        SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_14();

        u8ChannelsModOffset = (Ocu_ChannelType)(OCU_FTU_HW_CHANNELS + u8channel);
        Ocu_Hw_ProcessCommonInterrupt((Ocu_ChannelType)u8ChannelsModOffset);

        /* Enable match configuration */
        OCU_TPU_E_HWA_EnableMatchConfiguration(TPU_E_PTRS[u8ModuleId], u8channel);
    }
}

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined
 * Reason: The object has defined in Bsp_Ocu.c file */
#if defined(OCU_TPU_0_7_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_TPU_0_7_ISR)
{
    uint8 u8Channel;

    for (u8Channel = (uint8)OCU_TPU_CH_0; u8Channel < ((uint8)OCU_TPU_CH_7 + 1u); u8Channel++)
    {
        if (OCU_TPU_E_HWA_GetChEventInterruptFlagAndEnable(TPU_E_PTRS[OCU_TPU_0], u8Channel) ==
            (boolean)TRUE)
        {
            Ocu_Tpu_ProcessCommonInterrupt(OCU_TPU_0, u8Channel);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_TPU_8_15_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_TPU_8_15_ISR)
{
    uint8 u8Channel;

    for (u8Channel = (uint8)OCU_TPU_CH_8; u8Channel <= (uint8)OCU_TPU_CH_15; u8Channel++)
    {
        if (OCU_TPU_E_HWA_GetChEventInterruptFlagAndEnable(TPU_E_PTRS[OCU_TPU_0], u8Channel) ==
            (boolean)TRUE)
        {
            Ocu_Tpu_ProcessCommonInterrupt(OCU_TPU_0, u8Channel);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_TPU_16_23_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_TPU_16_23_ISR)
{
    uint8 u8Channel;

    for (u8Channel = (uint8)OCU_TPU_CH_16; u8Channel <= (uint8)OCU_TPU_CH_23; u8Channel++)
    {
        if (OCU_TPU_E_HWA_GetChEventInterruptFlagAndEnable(TPU_E_PTRS[OCU_TPU_0], u8Channel) ==
            (boolean)TRUE)
        {
            Ocu_Tpu_ProcessCommonInterrupt(OCU_TPU_0, u8Channel);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_TPU_24_31_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_TPU_24_31_ISR)
{
    uint8 u8Channel;

    for (u8Channel = (uint8)OCU_TPU_CH_24; u8Channel <= (uint8)OCU_TPU_CH_31; u8Channel++)
    {
        if (OCU_TPU_E_HWA_GetChEventInterruptFlagAndEnable(TPU_E_PTRS[OCU_TPU_0], u8Channel) ==
            (boolean)TRUE)
        {
            Ocu_Tpu_ProcessCommonInterrupt(OCU_TPU_0, u8Channel);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#endif

/* PRQA S 3408 -- */

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#endif

#ifdef __cplusplus
}
#endif

/** @} */
