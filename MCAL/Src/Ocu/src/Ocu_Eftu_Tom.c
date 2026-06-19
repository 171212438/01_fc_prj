/**
 *   @file    Ocu_Tom.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - Eftu driver source file.
 *   @details Eftu source file, containing the variables and functions that are exported by the
 *            Eftu driver.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERHHERAL            : EFTU
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
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
*   1.4.1       09/12/2025    QXW0099       N/A          Change to SOMC mode
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
#include "Ocu_Eftu_Tom.h"
#include "Ocu_Eftu_Tom_RegOps.h"
#include "SchM_Ocu.h"
#include "Std_Types.h"
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
#include "Eftu_Tbu_RegOps.h"

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
OCU_DATA_SECTION static uint32 Ocu_aEftuMaxCounterValue[OCU_EFTU_HW_MODULES][OCU_TOM_CH_PER_MODULES];

OCU_DATA_SECTION static uint32 Ocu_aEftuMatchThreshold[OCU_EFTU_HW_MODULES][OCU_TOM_CH_PER_MODULES];

OCU_DATA_SECTION static uint8 Ocu_aEftuAction[OCU_EFTU_HW_MODULES][OCU_TOM_CH_PER_MODULES];

OCU_DATA_SECTION static uint8 Ocu_aEftuChStatus[OCU_EFTU_HW_MODULES][OCU_TOM_CH_PER_MODULES];

#define OCU_STOP_SEC_VAR_NO_INIT_32
#include "Ocu_MemMap.h"

#define OCU_START_SEC_CONST_32
#include "Ocu_MemMap.h"

OCU_DATA_SECTION static const uint32 s_aOcuTOMBase[OCU_EFTU_HW_MODULES] = EFTU_TOM_BASE_ADDRS;
OCU_DATA_SECTION static const uint32 s_aOcuTBUBase                      = EFTU_TBU_BASE_ADDRS;

#define OCU_STOP_SEC_CONST_32
#include "Ocu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

extern const Ocu_ConfigType *Ocu_ConfigPtr[OCU_MAX_PARTITIONS];

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

#if defined(OCU_EFTU_TOM_ISR_USED)
OCU_TEXT_SECTION static void Ocu_Eftu_Tom_ProcessCommonInterrupt(const uint8 u8ModuleId,
                                                                 const uint8 u8channel);
#if defined(OCU_EFTU0_TOM_0_7_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_EFTU0_TOM_0_7_ISR);
#endif
#if defined(OCU_EFTU0_TOM_8_15_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_EFTU0_TOM_8_15_ISR);
#endif
#if defined(OCU_EFTU1_TOM_0_7_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_EFTU1_TOM_0_7_ISR);
#endif
#if defined(OCU_EFTU1_TOM_8_15_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_EFTU1_TOM_8_15_ISR);
#endif
#if defined(OCU_EFTU2_TOM_0_7_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_EFTU2_TOM_0_7_ISR);
#endif
#if defined(OCU_EFTU2_TOM_8_15_ISR_USED)
OCU_TEXT_SECTION ISR(OCU_EFTU2_TOM_8_15_ISR);
#endif
#endif

LOCAL_INLINE uint32 Ocu_Eftu_Tom_CheckThresh(uint8  Module,
                                             uint8  Channel,
                                             uint32 CounterValue,
                                             uint32 Value)
{
    uint32 ret;

    if (((CounterValue - Value) & (OCU_TOM_MAX_CN0_VALUE)) > OCU_TOM_BORDR_PAST)
    {
        Ocu_aEftuChStatus[Module][Channel] = OCU_BIT_RESET;
        ret                                = Value;
    }
    else
    {
        Ocu_aEftuChStatus[Module][Channel] = OCU_BIT_SET;
        ret                                = (Value + OCU_TOM_BORDR_PAST) & (OCU_TOM_MAX_CN0_VALUE);
    }
    return ret;
}

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize Eftu Tom channels.
 *
 * @details        The even channels are used to generate trig reset signal to reset the CN0 of the
 *                 near odd channels to prevent generating an edge when CN0 matches CM0.
 *
 * @param pEftuModuleConfig           -Pointer to Eftu Tom module configuration structure
 * @param pEftuChannelConfig          -Pointer to Eftu Tom channel configuration structure
 * @param u8ChannelIdx                -Ocu channel Idx used to store parameter
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_Init(const Ocu_Eftu_ChanConfigType *pEftuModuleConfig,
                                        const Ocu_ChannelConfigType   *pEftuChannelConfig,
                                        uint8                          u8ChannelIdx)
{
    uint8                u8ChIdx;
    uint8                u8HwModule = pEftuChannelConfig->u8HwModule;
    EFTU_TOM_Type *const pTOM       = (EFTU_TOM_Type *)(s_aOcuTOMBase[u8HwModule]);

    u8ChIdx = pEftuChannelConfig->u8HwChannel;

    /* Reset trig and output channel */
    OCU_EFTU_TOM_HWA_ResetChannel(pTOM, u8ChIdx);

    /* Write channel mode to SOMC */
    OCU_EFTU_TOM_HWA_SetChannelMode(pTOM, u8ChIdx, EFTU_TOM_CHANNEL_OCU_MODE_COMPARE);

    if (pEftuChannelConfig->eTimeBase == EFTU_TOM_TIMEBASE_SEL_TBU_CNT0)
    {
        /* CM0 compare with TS0, only CCU0 needed */
        OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                        u8ChIdx,
                                        ((OCU_EFTU_COMP_CANCEL_PENDING_EVENTS << 2) |
                                         OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
        OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, 0U);
        OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, pEftuChannelConfig->u32DefaultThreshold);
    }
    else
    {

        /* CM1 compare with TS1 or TS2, only CCU1 interrupt needed */
        OCU_EFTU_TOM_HWA_SelectTimeBaseValue(pTOM, u8ChIdx, (uint8)pEftuChannelConfig->eTimeBase);
        OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                        u8ChIdx,
                                        ((OCU_EFTU_COMP_CANCEL_PENDING_EVENTS << 2) |
                                         OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
        OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
        OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, pEftuChannelConfig->u32DefaultThreshold);
    }

    /* Set clock source */
    OCU_EFTU_TOM_HWA_SetClockSource(pTOM, u8ChIdx, pEftuModuleConfig->eEftuClkSrc);
    OCU_EFTU_TOM_HWA_SetShadowClockSource(pTOM, u8ChIdx, pEftuModuleConfig->eEftuClkSrc);

    OCU_EFTU_TOM_HWA_SetInitialSignalLevel(pTOM,
                                           u8ChIdx,
                                           (uint8)(1 - pEftuChannelConfig->eDefaultPinState));

    /* Enable channel update registers CM0,CM1,CLK_SRC from SR0,SR1,CLK_SRC_SR */
    OCU_EFTU_TOM_HWA_EnableChannelUpdate(pTOM, u8ChIdx);

    /* Enable channel output, the trig channel just used to generate trig signal */
    OCU_EFTU_TOM_HWA_EnableChannelOutput(pTOM, u8ChIdx);

    /* Save the match and max value for other APIs */
    Ocu_aEftuMatchThreshold[u8HwModule][u8ChIdx]  = pEftuChannelConfig->u32DefaultThreshold;
    Ocu_aEftuMaxCounterValue[u8HwModule][u8ChIdx] = pEftuModuleConfig->u32MaxCounterValue;
}

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a Eftu Module
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 * @param u8ChannelIdx                -Ocu channel Idx used to store parameter
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_DeInit(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                          uint8                        u8ChannelIdx)
{
    uint8                u8ChIdx;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aOcuTOMBase[pEftuChannelConfig->u8HwModule]);
    uint8                u8HwModule = pEftuChannelConfig->u8HwModule;

    u8ChIdx = pEftuChannelConfig->u8HwChannel;

    /* Disable channel */
    OCU_EFTU_TOM_HWA_DisableChannel(pTOM, u8ChIdx);

    /* Disable channel output */
    OCU_EFTU_TOM_HWA_DisableChannelOutput(pTOM, u8ChIdx);

    /* Set output pins to LOW by setting SL bit as OUTEN is disabled */
    /* Set SL bit to HIGH level */
    OCU_EFTU_TOM_HWA_SetInitialSignalLevel(pTOM,
                                           u8ChIdx,
                                           (uint8)(1 - pEftuChannelConfig->eDefaultPinState));

    /* Disable channel enable update register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR */
    OCU_EFTU_TOM_HWA_DisableChannelUpdate(pTOM, u8ChIdx);

    /* Disable output channel force update */
    OCU_EFTU_TOM_HWA_DisableForceUpdate(pTOM, u8ChIdx);

    /* Disable output channel interrupts */
    OCU_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
    OCU_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

    /* Clear channel CCU0, CCU1 interrupt flags */
    OCU_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
    OCU_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);

    /* Reset channel counter */
    OCU_EFTU_TOM_HWA_SetCCU0Counter(pTOM, u8ChIdx, 0U);

    /* Reset channel compare value */
    OCU_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, 0U);
    OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
    OCU_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, 0U);
    OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, 0U);

    /* Reset the match store value */
    Ocu_aEftuMatchThreshold[u8HwModule][u8ChIdx]  = 0U;
    Ocu_aEftuMaxCounterValue[u8HwModule][u8ChIdx] = 0U;
    Ocu_aEftuAction[u8HwModule][u8ChIdx]          = 0U;
}
#endif

/**
 * @brief Start Eftu timer channel.
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_StartChannel(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                                uint8                        u8ChannelIdx)
{
    uint8                u8ChIdx    = pEftuChannelConfig->u8HwChannel;
    uint8                u8HwModule = pEftuChannelConfig->u8HwModule;
    EFTU_TOM_Type *const pTOM       = (EFTU_TOM_Type *)(s_aOcuTOMBase[u8HwModule]);
    EFTU_TBU_Type *const pTBU       = (EFTU_TBU_Type *)(s_aOcuTBUBase);
    uint32               dummy1;
    uint32               dummy2;
    uint32               CompareValue = Ocu_aEftuMatchThreshold[u8HwModule][u8ChIdx];
    uint32               u32CntValuepre;
    uint32               u32CntValue;
    Ocu_aEftuAction[u8HwModule][u8ChIdx] = ((uint8)pEftuChannelConfig->eOutputPinAction);
    uint8 u8Action;

    /* Start critical section for logical channel */
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_15();
    if (OCU_EFTU_TOM_HWA_GetInitialSignalLevel(pTOM, u8ChIdx) == 0)
    {
        if (Ocu_aEftuAction[u8HwModule][u8ChIdx] != 3u)
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }
    else
    {
        if ((Ocu_aEftuAction[u8HwModule][u8ChIdx] == 0u) ||
            (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 1u))
        {
            u8Action = 2 - Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
        else if (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 2u)
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }
    switch (pEftuChannelConfig->eTimeBase)
    {
        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT0:

            /* Read current counter value */
            u32CntValuepre = OCU_EFTU_TBU_GetCNT0(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue = Ocu_Eftu_Tom_CheckThresh(u8HwModule, u8ChIdx, u32CntValuepre, CompareValue);
            dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
            dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) | u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, u32CntValue);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, 0U);
            /* Clear TOM CCU1 interrupt flags */
            OCU_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
            /* Enable CCU1 interrupts */
            OCU_EFTU_TOM_HWA_EnableCCU0Interrupt(pTOM, u8ChIdx);
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT1: /* TS1 */

            /* Read current counter value */
            u32CntValuepre = OCU_EFTU_TBU_GetCNT1(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue = Ocu_Eftu_Tom_CheckThresh(u8HwModule, u8ChIdx, u32CntValuepre, CompareValue);
            dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
            dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CntValue);
            /* Clear TOM CCU1 interrupt flags */
            OCU_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);
            /* Enable CCU1 interrupts */
            OCU_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT2:
            /* Read current counter value */
            u32CntValuepre = OCU_EFTU_TBU_GetCNT2(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue = Ocu_Eftu_Tom_CheckThresh(u8HwModule, u8ChIdx, u32CntValuepre, CompareValue);
            dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
            dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CntValue);
            /* Clear TOM CCU1 interrupt flags */
            OCU_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);
            /* Enable CCU1 interrupts */
            OCU_EFTU_TOM_HWA_EnableCCU1Interrupt(pTOM, u8ChIdx);
            break;

        default:
            /* do nothing */
            break;
    }

    /* Enable channel */
    OCU_EFTU_TOM_HWA_EnableChannel(pTOM, u8ChIdx);

    /* exit critical section for logical channel*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_15();
    /* PRQA S 2962 ++ #Misra-C:2012 Rule-9.1 The value of an object with automatic
       storage duration shall not be read before it has been set. Reason: dummy variable is unused. */
    (void)dummy1;
    (void)dummy2;
    /* PRQA S 2962 -- */
}

/**
 * @brief Stop Eftu timer channel.
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_StopChannel(const Ocu_ChannelConfigType *pEftuChannelConfig)
{
    uint8                u8ChIdx = pEftuChannelConfig->u8HwChannel;
    EFTU_TOM_Type *const pTOM    = (EFTU_TOM_Type *)(s_aOcuTOMBase[pEftuChannelConfig->u8HwModule]);

    /* Start critical section for logical channel*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_16();

    OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                    u8ChIdx,
                                    ((OCU_EFTU_COMP_CANCEL_PENDING_EVENTS << 2) |
                                     OCU_EFTU_LEVEL_CTRL_NO_CHANGE));

    /* Disable CCU0/1 interrupts */
    OCU_EFTU_TOM_HWA_DisableCCU0Interrupt(pTOM, u8ChIdx);
    OCU_EFTU_TOM_HWA_DisableCCU1Interrupt(pTOM, u8ChIdx);

    /* Clear TOM CCU0 and CCU1 interrupt flags */
    OCU_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, u8ChIdx);
    OCU_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, u8ChIdx);

    /* To maintain the output pin status at its current level : */
    /* SR0/SR1/CM0/CM1 have to be set to an unreachable value to disable comparison and interrupts
     * immediately */
    OCU_EFTU_TOM_HWA_SetShadowValue0(pTOM, u8ChIdx, OCU_TOM_MAX_CN0_VALUE);
    OCU_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, OCU_TOM_MAX_CN0_VALUE);
    OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, OCU_TOM_MAX_CN0_VALUE);
    OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, OCU_TOM_MAX_CN0_VALUE);

    OCU_EFTU_TOM_HWA_DisableChannel(pTOM, u8ChIdx);

    /*exit critical section for logical channel*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_16();
}

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Ocu driver function for setting the Pin State for the current Eftu channel
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 * @param ePinState                   -State of pin
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetPinState(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                               Ocu_PinStateType             ePinState)
{
    uint8                u8ChIdx = pEftuChannelConfig->u8HwChannel;
    EFTU_TOM_Type *const pTOM    = (EFTU_TOM_Type *)(s_aOcuTOMBase[pEftuChannelConfig->u8HwModule]);

    /* Start critical section for logical channel*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_17();

    /* Set output pin according to the specified pin state */
    OCU_EFTU_TOM_HWA_SetInitialSignalLevel(pTOM, u8ChIdx, (uint8)(1 - ePinState));

    /*exit critical section for logical channel*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_17();
}
#endif /* OCU_SET_PIN_STATE_API == STD_ON */

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief This function changes the output pin behaviour of the selected channel to the one
 * specified for next comparison match
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 * @param u8ChannelIdx                -Ocu channel Idx used to store parameter
 * @param ePinAction          -OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetPinAction(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                                uint8                        u8ChannelIdx,
                                                Ocu_PinActionType            ePinAction)
{
    uint8                u8ChIdx = pEftuChannelConfig->u8HwChannel;
    EFTU_TOM_Type *const pTOM    = (EFTU_TOM_Type *)(s_aOcuTOMBase[pEftuChannelConfig->u8HwModule]);
    uint8                u8HwModule = pEftuChannelConfig->u8HwModule;
    uint8                u8pinaction;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_18();

    if (OCU_EFTU_TOM_HWA_GetInitialSignalLevel(pTOM, u8ChIdx) == 0)
    {
        if (Ocu_aEftuAction[u8HwModule][u8ChIdx] != 3u)
        {
            u8pinaction = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8pinaction = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }
    else
    {
        if ((Ocu_aEftuAction[u8HwModule][u8ChIdx] == 0u) ||
            (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 1u))
        {
            u8pinaction = 2 - Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
        else if (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 2u)
        {
            u8pinaction = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8pinaction = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }
    switch (pEftuChannelConfig->eTimeBase)
    {
        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT0:
            OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                            u8ChIdx,
                                            ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) | u8pinaction));
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT1: /* TS1 */
            OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                            u8ChIdx,
                                            ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                             u8pinaction));
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT2:
            OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                            u8ChIdx,
                                            ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                             u8pinaction));
            break;

        default:
            /* do nothing */
            break;
    }

    Ocu_aEftuAction[u8HwModule][u8ChIdx] = ePinAction;

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_18();
}
#endif /* OCU_SET_PIN_ACTION_API == STD_ON */

#if (OCU_GET_COUNTER_API == STD_ON)
/**
* @brief Ocu driver function reads and sends back the counter value of the selected channel.
*
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure

* @return u32ReturnValue              -The current value of CNT register
*/
OCU_TEXT_SECTION uint32 Ocu_Eftu_Tom_GetCounter(const Ocu_ChannelConfigType *pEftuChannelConfig)
{
    uint32               u32ReturnValue = 0u;
    EFTU_TBU_Type *const pTBU           = (EFTU_TBU_Type *)(s_aOcuTBUBase);

    switch (pEftuChannelConfig->eTimeBase)
    {
        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT0:

            /* Read current counter value */
            u32ReturnValue = (OCU_EFTU_TBU_GetCNT0(pTBU) & OCU_TOM_MAX_CN0_VALUE);
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT1: /* TS1 */

            /* Read current counter value */
            u32ReturnValue = (OCU_EFTU_TBU_GetCNT1(pTBU) & OCU_TOM_MAX_CN0_VALUE);
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT2:
            /* Read current counter value */
            u32ReturnValue = (OCU_EFTU_TBU_GetCNT2(pTBU) & OCU_TOM_MAX_CN0_VALUE);
            break;

        default:
            /* do nothing */
            break;
    }

    return u32ReturnValue;
}
#endif /*OCU_GET_COUNTER_API == STD_ON*/

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief This function sets the comparison threshold of the selected channel using an absolute
 * input data
 *
 * @param SetThreshold                -Struct contains u8ChannelNumber, ReferenceValue,
 * AbsoluteValue and Ocu_ReturnType
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetAbsoluteThreshold(Ocu_SetThresholdType *SetThreshold,
                                                        const Ocu_ChannelConfigType *pEftuChannelConfig)
{
    uint32               u32CntValuepre = 0u;
    uint32               u32CntValue;
    volatile uint32      dummy1;
    volatile uint32      dummy2;
    uint8                u8ChIdx    = pEftuChannelConfig->u8HwChannel;
    uint8                u8HwModule = pEftuChannelConfig->u8HwModule;
    EFTU_TOM_Type *const pTOM       = (EFTU_TOM_Type *)(s_aOcuTOMBase[u8HwModule]);
    EFTU_TBU_Type *const pTBU       = (EFTU_TBU_Type *)(s_aOcuTBUBase);
    uint8                u8Action;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_19();

    if (OCU_EFTU_TOM_HWA_GetInitialSignalLevel(pTOM, u8ChIdx) == 0)
    {
        if (Ocu_aEftuAction[u8HwModule][u8ChIdx] != 3u)
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }
    else
    {
        if ((Ocu_aEftuAction[u8HwModule][u8ChIdx] == 0u) ||
            (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 1u))
        {
            u8Action = 2 - Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
        else if (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 2u)
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }

    /* Read current counter value */
    dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
    dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);

    /* Read current counter value */
    switch (pEftuChannelConfig->eTimeBase)
    {
        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT0:

            u32CntValuepre = OCU_EFTU_TBU_GetCNT0(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue    = Ocu_Eftu_Tom_CheckThresh(u8HwModule,
                                                   u8ChIdx,
                                                   u32CntValuepre,
                                                   SetThreshold->u32AbsoluteValue);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) | u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, u32CntValue);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, 0U);
            u32CntValuepre = OCU_EFTU_TBU_GetCNT0(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT1:

            u32CntValuepre = OCU_EFTU_TBU_GetCNT1(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue    = Ocu_Eftu_Tom_CheckThresh(u8HwModule,
                                                   u8ChIdx,
                                                   u32CntValuepre,
                                                   SetThreshold->u32AbsoluteValue);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CntValue);
            u32CntValuepre = OCU_EFTU_TBU_GetCNT1(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT2:

            u32CntValuepre = OCU_EFTU_TBU_GetCNT2(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue    = Ocu_Eftu_Tom_CheckThresh(u8HwModule,
                                                   u8ChIdx,
                                                   u32CntValuepre,
                                                   SetThreshold->u32AbsoluteValue);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CntValue);
            u32CntValuepre = OCU_EFTU_TBU_GetCNT2(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            break;

        default:
            /* do nothing */
            break;
    }

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_19();

    Ocu_aEftuMatchThreshold[u8HwModule][u8ChIdx] = SetThreshold->u32AbsoluteValue;

    if (SetThreshold->u32ReferenceValue <= SetThreshold->u32AbsoluteValue)
    {
        if ((SetThreshold->u32ReferenceValue <= u32CntValuepre) &&
            (u32CntValuepre <= SetThreshold->u32AbsoluteValue))
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
        if ((SetThreshold->u32AbsoluteValue < u32CntValuepre) &&
            (u32CntValuepre < SetThreshold->u32ReferenceValue))
        {
            SetThreshold->eInterval = OCU_CM_OUT_REF_INTERVAL;
        }
        else
        {
            SetThreshold->eInterval = OCU_CM_IN_REF_INTERVAL;
        }
    }
    (void)dummy1;
    (void)dummy2;
}
#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON */

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief The function sets the value of the channel threshold relative to the current value of the
 * counter.
 *
 * @param SetThreshold                -Struct contains u8ChannelNumber, ReferenceValue,
 * AbsoluteValue and Ocu_ReturnType
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetRelativeThreshold(Ocu_SetThresholdType *SetThreshold,
                                                        const Ocu_ChannelConfigType *pEftuChannelConfig)
{
    uint32               u32CntValuePreUpdate = 0u;
    uint32               u32CntValuePostUpdate;
    uint32               u32CmpMatchValue = 0u;
    uint32               u32CntValue;
    volatile uint32      dummy1;
    volatile uint32      dummy2;
    uint8                u8ChIdx    = pEftuChannelConfig->u8HwChannel;
    uint8                u8HwModule = pEftuChannelConfig->u8HwModule;
    EFTU_TOM_Type *const pTOM       = (EFTU_TOM_Type *)(s_aOcuTOMBase[u8HwModule]);
    EFTU_TBU_Type *const pTBU       = (EFTU_TBU_Type *)(s_aOcuTBUBase);
    uint8                u8Action;

    /*enter critical section TODO check*/
    SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_20();

    if (OCU_EFTU_TOM_HWA_GetInitialSignalLevel(pTOM, u8ChIdx) == 0)
    {
        if (Ocu_aEftuAction[u8HwModule][u8ChIdx] != 3u)
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }
    else
    {
        if ((Ocu_aEftuAction[u8HwModule][u8ChIdx] == 0u) ||
            (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 1u))
        {
            u8Action = 2 - Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
        else if (Ocu_aEftuAction[u8HwModule][u8ChIdx] == 2u)
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8HwModule][u8ChIdx];
        }
    }

    switch (pEftuChannelConfig->eTimeBase)
    {
        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT0:
            u32CntValuePreUpdate = OCU_EFTU_TBU_GetCNT0(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CmpMatchValue     = (u32CntValuePreUpdate + (SetThreshold->u32RelativeValue)) %
                               Ocu_aEftuMaxCounterValue[u8HwModule][u8ChIdx];

            u32CntValue =
                Ocu_Eftu_Tom_CheckThresh(u8HwModule, u8ChIdx, u32CntValuePreUpdate, u32CmpMatchValue);
            dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
            dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) | u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, u32CntValue);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, 0U);
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT1:
            u32CntValuePreUpdate = OCU_EFTU_TBU_GetCNT1(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CmpMatchValue     = (u32CntValuePreUpdate + (SetThreshold->u32RelativeValue)) %
                               Ocu_aEftuMaxCounterValue[u8HwModule][u8ChIdx];
            u32CntValue =
                Ocu_Eftu_Tom_CheckThresh(u8HwModule, u8ChIdx, u32CntValuePreUpdate, u32CmpMatchValue);
            dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
            dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CntValue);
            break;

        case EFTU_TOM_TIMEBASE_SEL_TBU_CNT2:
            u32CntValuePreUpdate = OCU_EFTU_TBU_GetCNT2(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CmpMatchValue     = (u32CntValuePreUpdate + (SetThreshold->u32RelativeValue)) %
                               Ocu_aEftuMaxCounterValue[u8HwModule][u8ChIdx];
            u32CntValue =
                Ocu_Eftu_Tom_CheckThresh(u8HwModule, u8ChIdx, u32CntValuePreUpdate, u32CmpMatchValue);
            dummy1 = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8ChIdx);
            dummy2 = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8ChIdx);
            if (Ocu_aEftuChStatus[u8HwModule][u8ChIdx] == OCU_BIT_RESET)
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
            }
            else
            {
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8ChIdx,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            }
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8ChIdx, 0U);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CntValue);
            break;

        default:
            /* do nothing */
            break;
    }

    Ocu_aEftuMatchThreshold[u8HwModule][u8ChIdx] = u32CmpMatchValue;

    /* Has the counter crossed compare value */
    if (u32CntValuePreUpdate > u32CmpMatchValue)
    {
        /* Update the TOM shadow register */
        OCU_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32CmpMatchValue);
    }
    else
    {
        /* Update the TOM compare and shadow registers */
        OCU_EFTU_TOM_HWA_SetShadowValue1(pTOM, u8ChIdx, u32CmpMatchValue);
        OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8ChIdx, u32CmpMatchValue);
    }

    /* re-Read Counter register */
    u32CntValuePostUpdate = OCU_EFTU_TOM_HWA_GetCCU0Counter(pTOM, u8ChIdx);

    /*exit critical section*/
    SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_20();

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
        if ((u32CmpMatchValue < u32CntValuePostUpdate) &&
            (u32CntValuePostUpdate < u32CntValuePreUpdate))
        {
            SetThreshold->eInterval = OCU_CM_OUT_REF_INTERVAL;
        }
        else
        {
            SetThreshold->eInterval = OCU_CM_IN_REF_INTERVAL;
        }
    }
    (void)dummy1;
    (void)dummy2;
}
#endif /* OCU_SET_RELATIVE_THRESHOLD_API == STD_ON */

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief Ocu_Eftu_Tom_GetMaxCountValue
 *
 * @param u8ChannelIdx                -Ocu channel Idx used to store parameter
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Eftu_Tom_GetMaxCountValue(
    const Ocu_ChannelConfigType *pEftuChannelConfig)
{
    Ocu_ValueType u32CountValue;
    uint8         u8ChIdx = pEftuChannelConfig->u8HwChannel;

    /* Get the max value */
    u32CountValue = Ocu_aEftuMaxCounterValue[pEftuChannelConfig->u8HwModule][u8ChIdx];

    return u32CountValue;
}
#endif

#if defined(OCU_EFTU_TOM_ISR_USED)

LOCAL_INLINE uint32 Ocu_Eftu_Tom_CheckThreshISR(uint8  Module,
                                                uint8  Channel,
                                                uint32 CounterValue,
                                                uint32 AbsoluteValue)
{
    uint32 ret;

    if (Ocu_aEftuChStatus[Module][Channel] == OCU_BIT_SET)
    {
        ret = AbsoluteValue;
    }
    else
    {
        ret = (AbsoluteValue + OCU_TOM_BORDR_PAST) & (OCU_TOM_MAX_CN0_VALUE);
    }
    return ret;
}

/**
 * @brief Process common interrupt function
 *
 * @param u8ModuleId Eftu module
 * @param u8ChannelId Eftu channel for current module
 */
OCU_TEXT_SECTION static void Ocu_Eftu_Tom_ProcessCommonInterrupt(const uint8 u8ModuleId,
                                                                 const uint8 u8channel)
{
    Ocu_ChannelType      u8ChannelsModOffset;
    EFTU_TOM_Type *const pTOM = (EFTU_TOM_Type *)(s_aOcuTOMBase[u8ModuleId]);
    EFTU_TBU_Type *const pTBU = (EFTU_TBU_Type *)(s_aOcuTBUBase);
    volatile uint32      dummy1;
    volatile uint32      dummy2;
    uint32               u32CntValuepost;
    uint32               u32CntValue;
    uint8                u8Action;

    u8ChannelsModOffset = (Ocu_ChannelType)(OCU_FTU_HW_CHANNELS + OCU_TPU_HW_CHANNELS +
                                            (OCU_TOM_CH_PER_MODULES * u8ModuleId) + u8channel);

    if (OCU_EFTU_TOM_HWA_GetInitialSignalLevel(pTOM, u8channel) == 0)
    {
        if (Ocu_aEftuAction[u8ModuleId][u8channel] != 3u)
        {
            u8Action = Ocu_aEftuAction[u8ModuleId][u8channel] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8ModuleId][u8channel];
        }
    }
    else
    {
        if ((Ocu_aEftuAction[u8ModuleId][u8channel] == 0u) ||
            (Ocu_aEftuAction[u8ModuleId][u8channel] == 1u))
        {
            u8Action = 2 - Ocu_aEftuAction[u8ModuleId][u8channel];
        }
        else if (Ocu_aEftuAction[u8ModuleId][u8channel] == 2u)
        {
            u8Action = Ocu_aEftuAction[u8ModuleId][u8channel] + 1u;
        }
        else
        {
            u8Action = Ocu_aEftuAction[u8ModuleId][u8channel];
        }
    }

    if ((OCU_EFTU_TOM_HWA_GetTomModeCtrl(pTOM, u8channel) >> 2u) == OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0)
    {
        /* EFTU_TOM_SEL_TBU_TS0 */
        dummy1          = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8channel);
        dummy2          = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8channel);
        u32CntValuepost = OCU_EFTU_TBU_GetCNT0(pTBU) & OCU_TOM_MAX_CN0_VALUE;
        u32CntValue     = Ocu_Eftu_Tom_CheckThreshISR(u8ModuleId,
                                                  u8channel,
                                                  u32CntValuepost,
                                                  Ocu_aEftuMatchThreshold[u8ModuleId][u8channel]);
        if (Ocu_aEftuChStatus[u8ModuleId][u8channel] == OCU_BIT_RESET)
        {
            Ocu_aEftuChStatus[u8ModuleId][u8channel] = OCU_BIT_SET;
            OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                            u8channel,
                                            ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) |
                                             OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8channel, u32CntValue);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8channel, 0U);
            Ocu_Hw_ProcessCommonInterrupt((Ocu_ChannelType)u8ChannelsModOffset);
        }
        else
        {
            Ocu_aEftuChStatus[u8ModuleId][u8channel] = OCU_BIT_RESET;
            OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                            u8channel,
                                            ((OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0 << 2) | u8Action));
            OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8channel, u32CntValue);
            OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8channel, 0U);
        }
    }
    else
    {
        if (OCU_EFTU_TOM_HWA_GetTimeBaseValue(pTOM, u8channel) == 0)
        {
            /* EFTU_TOM_SEL_TBU_TS1 */
            dummy1          = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8channel);
            dummy2          = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8channel);
            u32CntValuepost = OCU_EFTU_TBU_GetCNT1(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue     = Ocu_Eftu_Tom_CheckThreshISR(u8ModuleId,
                                                      u8channel,
                                                      u32CntValuepost,
                                                      Ocu_aEftuMatchThreshold[u8ModuleId][u8channel]);
            if (Ocu_aEftuChStatus[u8ModuleId][u8channel] == OCU_BIT_RESET)
            {
                Ocu_aEftuChStatus[u8ModuleId][u8channel] = OCU_BIT_SET;
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8channel,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
                OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8channel, 0U);
                OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8channel, u32CntValue);
                Ocu_Hw_ProcessCommonInterrupt((Ocu_ChannelType)u8ChannelsModOffset);
            }
            else
            {
                Ocu_aEftuChStatus[u8ModuleId][u8channel] = OCU_BIT_RESET;
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8channel,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
                OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8channel, 0U);
                OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8channel, u32CntValue);
            }
        }
        else
        {
            /* EFTU_TOM_SEL_TBU_TS2 */
            dummy1          = OCU_EFTU_TOM_HWA_ReadShadowValue0(pTOM, u8channel);
            dummy2          = OCU_EFTU_TOM_HWA_ReadShadowValue1(pTOM, u8channel);
            u32CntValuepost = OCU_EFTU_TBU_GetCNT2(pTBU) & OCU_TOM_MAX_CN0_VALUE;
            u32CntValue     = Ocu_Eftu_Tom_CheckThreshISR(u8ModuleId,
                                                      u8channel,
                                                      u32CntValuepost,
                                                      Ocu_aEftuMatchThreshold[u8ModuleId][u8channel]);
            if (Ocu_aEftuChStatus[u8ModuleId][u8channel] == OCU_BIT_RESET)
            {
                Ocu_aEftuChStatus[u8ModuleId][u8channel] = OCU_BIT_SET;
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8channel,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 OCU_EFTU_LEVEL_CTRL_NO_CHANGE));
                OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8channel, 0U);
                OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8channel, u32CntValue);
                Ocu_Hw_ProcessCommonInterrupt((Ocu_ChannelType)u8ChannelsModOffset);
            }
            else
            {
                Ocu_aEftuChStatus[u8ModuleId][u8channel] = OCU_BIT_RESET;
                OCU_EFTU_TOM_HWA_SetTomModeCtrl(pTOM,
                                                u8channel,
                                                ((OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2 << 2) |
                                                 u8Action));
                OCU_EFTU_TOM_HWA_SetCCU0Compare(pTOM, u8channel, 0U);
                OCU_EFTU_TOM_HWA_SetCCU1Compare(pTOM, u8channel, u32CntValue);
            }
        }
    }

    /* Clear channel event interrupt flag */
    OCU_EFTU_TOM_HWA_ClearCCU0Flag(pTOM, (uint8)u8channel);
    OCU_EFTU_TOM_HWA_ClearCCU1Flag(pTOM, (uint8)u8channel);

    (void)dummy1;
    (void)dummy2;
}

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined
 * Reason: The object has defined in Bsp_Ocu.c file */
#if defined(OCU_EFTU0_TOM_0_7_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_EFTU0_TOM_0_7_ISR)
{
    uint8                u8Channel;
    uint8                u8hwch;
    EFTU_TOM_Type *const pTOM          = (EFTU_TOM_Type *)(s_aOcuTOMBase[OCU_EFTU_0_TOM_0]);
    uint8                u8CoreId      = (uint8)Ocu_GetCoreID();
    uint8                u8NumChannles = (uint8)Ocu_ConfigPtr[u8CoreId]->nNumChannels + 1u;

    for (u8Channel = (uint8)OCU_TOM_CH_0; u8Channel < (u8NumChannles); u8Channel++)
    {
        if ((*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwModule == OCU_EFTU_0_TOM_0)
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                u8hwch = (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwChannel;
                if (((OCU_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)) ||
                    ((OCU_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)))
                {
                    Ocu_Eftu_Tom_ProcessCommonInterrupt(OCU_EFTU_0_TOM_0, u8hwch);
                }
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_EFTU0_TOM_8_15_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_EFTU0_TOM_8_15_ISR)
{
    uint8                u8Channel;
    uint8                u8hwch;
    EFTU_TOM_Type *const pTOM          = (EFTU_TOM_Type *)(s_aOcuTOMBase[OCU_EFTU_0_TOM_1]);
    uint8                u8CoreId      = (uint8)Ocu_GetCoreID();
    uint8                u8NumChannles = (uint8)Ocu_ConfigPtr[u8CoreId]->nNumChannels + 1u;

    for (u8Channel = (uint8)0U; u8Channel < (u8NumChannles); u8Channel++)
    {
        if ((*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwModule == OCU_EFTU_0_TOM_1)
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                u8hwch = (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwChannel;
                if (((OCU_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)) ||
                    ((OCU_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)))
                {
                    Ocu_Eftu_Tom_ProcessCommonInterrupt(OCU_EFTU_0_TOM_1, u8hwch);
                }
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_EFTU1_TOM_0_7_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_EFTU1_TOM_0_7_ISR)
{
    uint8                u8Channel;
    uint8                u8hwch;
    EFTU_TOM_Type *const pTOM          = (EFTU_TOM_Type *)(s_aOcuTOMBase[OCU_EFTU_1_TOM_0]);
    uint8                u8CoreId      = (uint8)Ocu_GetCoreID();
    uint8                u8NumChannles = (uint8)Ocu_ConfigPtr[u8CoreId]->nNumChannels + 1u;

    for (u8Channel = (uint8)0U; u8Channel < (u8NumChannles); u8Channel++)
    {
        if ((*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwModule == OCU_EFTU_1_TOM_0)
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                u8hwch = (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwChannel;
                if (((OCU_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)) ||
                    ((OCU_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)))
                {
                    Ocu_Eftu_Tom_ProcessCommonInterrupt(OCU_EFTU_1_TOM_0, u8hwch);
                }
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_EFTU1_TOM_8_15_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_EFTU1_TOM_8_15_ISR)
{
    uint8                u8Channel;
    uint8                u8hwch;
    EFTU_TOM_Type *const pTOM          = (EFTU_TOM_Type *)(s_aOcuTOMBase[OCU_EFTU_1_TOM_1]);
    uint8                u8CoreId      = (uint8)Ocu_GetCoreID();
    uint8                u8NumChannles = (uint8)(Ocu_ConfigPtr[u8CoreId]->nNumChannels + 1u);

    for (u8Channel = (uint8)0U; u8Channel < (u8NumChannles); u8Channel++)
    {
        if ((*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwModule == OCU_EFTU_1_TOM_1)
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                u8hwch = (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwChannel;
                if (((OCU_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)) ||
                    ((OCU_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)))
                {
                    Ocu_Eftu_Tom_ProcessCommonInterrupt(OCU_EFTU_1_TOM_1, u8hwch);
                }
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_EFTU2_TOM_0_7_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_EFTU2_TOM_0_7_ISR)
{
    uint8                u8Channel;
    uint8                u8hwch;
    EFTU_TOM_Type *const pTOM          = (EFTU_TOM_Type *)(s_aOcuTOMBase[OCU_EFTU_2_TOM_0]);
    uint8                u8CoreId      = (uint8)Ocu_GetCoreID();
    uint8                u8NumChannles = (uint8)(Ocu_ConfigPtr[u8CoreId]->nNumChannels + 1u);

    for (u8Channel = (uint8)0U; u8Channel < (u8NumChannles); u8Channel++)
    {
        if ((*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwModule == OCU_EFTU_2_TOM_0)
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                u8hwch = (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwChannel;
                if (((OCU_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)) ||
                    ((OCU_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)))
                {
                    Ocu_Eftu_Tom_ProcessCommonInterrupt(OCU_EFTU_2_TOM_0, u8hwch);
                }
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if defined(OCU_EFTU2_TOM_8_15_ISR_USED)
/**
 * @brief Construct a new ISR object
 *
 */
OCU_TEXT_SECTION ISR(OCU_EFTU2_TOM_8_15_ISR)
{
    uint8                u8Channel;
    uint8                u8hwch;
    EFTU_TOM_Type *const pTOM          = (EFTU_TOM_Type *)(s_aOcuTOMBase[OCU_EFTU_2_TOM_1]);
    uint8                u8CoreId      = (uint8)Ocu_GetCoreID();
    uint8                u8NumChannles = (uint8)(Ocu_ConfigPtr[u8CoreId]->nNumChannels + 1u);

    for (u8Channel = (uint8)0U; u8Channel < (u8NumChannles); u8Channel++)
    {
        if ((*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwModule == OCU_EFTU_2_TOM_1)
        {
#if (OCU_MULTICORE_SUPPORT == STD_ON)
            if (Ocu_ConfigPtr[u8CoreId]->OcuChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                u8hwch = (*Ocu_ConfigPtr[u8CoreId]->pOcuChannelsConfig)[u8Channel].u8HwChannel;
                if (((OCU_EFTU_TOM_HWA_GetCCU1InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU1InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)) ||
                    ((OCU_EFTU_TOM_HWA_GetCCU0InterruptEnable(pTOM, u8hwch) == (boolean)TRUE) &&
                     (OCU_EFTU_TOM_HWA_GetCCU0InterruptFlag(pTOM, u8hwch) == (boolean)TRUE)))
                {
                    Ocu_Eftu_Tom_ProcessCommonInterrupt(OCU_EFTU_2_TOM_1, u8hwch);
                }
            }
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
