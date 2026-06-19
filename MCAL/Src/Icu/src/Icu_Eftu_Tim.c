/**
*   @file    Icu_Eftu_Tim.c
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Eftu_Tim driver source file.
*   @details Eftu_Tim source file, containing the variables and functions that are exported by the
*            Eftu_Tim driver.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Eftu_Tim
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
*   1.0.0       19/11/2024    QXW0076       N/A          Icu Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Eftu_Tim.h"
#include "SchM_Icu.h"
#include "Icu_Eftu_Tim_Reg.h"
#include "Icu_Eftu_Tim_RegOps.h"
#if (ICU_SUPPORT_EFTU == STD_ON)

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
   object and an integer type 0306:Cast between a pointer to object and an integral type. REASON:
   This is the Eftu Tim base type initialization.
*/
/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall
 * be distinct Reason: Some macro length are more than 31 */
/* PRQA S 3006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
                      3006:This function contains a mixture of in-line assembler statements and C
   statements. REASON: This is the normal usage of macros.
*/
#define ICU_START_SEC_CONST_32
#include "Icu_MemMap.h"

#if (DEVICE_TYPE == FC7300F4MDD1A180T1C) || (DEVICE_TYPE == FC7300F4MDD1A320T1C) || \
    (DEVICE_TYPE == FC7300F4MDS1A180T1C) || (DEVICE_TYPE == FC7300F4MDS1A320T1C) || \
    (DEVICE_TYPE == FC7300F4MDS1P144T1C)
ICU_DATA_SECTION static EFTU_TIM_Type *const EFTU_TIM_PTRS[ICU_EFTU_INSTANCE_COUNT] = {
    (EFTU_TIM_Type *)(0x40476000u + EFTU_TIM_BASE),
};
#else
ICU_DATA_SECTION static EFTU_TIM_Type *const EFTU_TIM_PTRS[ICU_EFTU_INSTANCE_COUNT] = {
    (EFTU_TIM_Type *)(0x4083E000u + EFTU_TIM_BASE),
    (EFTU_TIM_Type *)(0x40840000u + EFTU_TIM_BASE),
    (EFTU_TIM_Type *)(0x40842000u + EFTU_TIM_BASE),
};
#endif
/* PRQA S 0306 -- */

#define ICU_STOP_SEC_CONST_32
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

#if (defined ICU_EFTU_TIM_ISR_USED)
LOCAL_INLINE void Icu_Eftu_Tim_ProcessInterrupt(const ICU_EftuInstanceType eEftuInstance,
                                                uint8                      u8StartChannel);
#endif

#if (defined ICU_EFTU_0_TIM0_3_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU0_TIM0_3_ISR);
#endif

#if (defined ICU_EFTU_0_TIM4_7_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU0_TIM4_7_ISR);
#endif

#if (defined ICU_EFTU_1_TIM0_3_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU1_TIM0_3_ISR);
#endif

#if (defined ICU_EFTU_1_TIM4_7_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU1_TIM4_7_ISR);
#endif

#if (defined ICU_EFTU_2_TIM0_3_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU2_TIM0_3_ISR);
#endif

#if (defined ICU_EFTU_2_TIM4_7_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU2_TIM4_7_ISR);

#endif

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief  Config the  channel Filter mode
 * @param eTim Pointer to the EFTU_TIM Instance
 * @param pConfig Tim channel  configuration
 */
LOCAL_INLINE void Icu_Eftu_Tim_ConfigChannelFilterParameter(const ICU_EftuInstanceType eEftuInstance,
                                                            const Icu_EftuTimChannelConfigType *pConfig)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    switch (pConfig->eRisingEdgeMode)
    {
        case ICU_EFTU_TIM_FILTERMODE_IMMEDIATEEDGEPROPAGATION:
        {
            ICU_EFTU_TIM_HWA_DisableChFltRe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltReCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltReExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_FILTERMODE_INDIVIDUALDEGLITCHTIMEUPDOWN:
        {
            ICU_EFTU_TIM_HWA_EnableChFltRe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltReCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltReExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_FILTERMODE_INDIVIDUALDEGLITCHTIMEHOLD:
        {
            ICU_EFTU_TIM_HWA_EnableChFltRe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_EnableChFltReCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltReExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_FILTERMODE_RESETCOUNTR:
        {
            ICU_EFTU_TIM_HWA_EnableChFltRe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltReCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_EnableChFltReExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
            /* PRQA S 2016 ++ #Misra-C:Rule-16.4 Every switch statement shall have a default label
             * Reason: It doesn't go to the default branch */
        default:
            break;
            /* PRQA S 2016 -- */
    }
    /*fall edge*/
    switch (pConfig->eFallingEdgeMode)
    {
        case ICU_EFTU_TIM_FILTERMODE_IMMEDIATEEDGEPROPAGATION:
        {
            ICU_EFTU_TIM_HWA_DisableChFltFe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltFeCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltFeExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_FILTERMODE_INDIVIDUALDEGLITCHTIMEUPDOWN:
        {
            ICU_EFTU_TIM_HWA_EnableChFltFe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltFeCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltFeExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_FILTERMODE_INDIVIDUALDEGLITCHTIMEHOLD:
        {
            ICU_EFTU_TIM_HWA_EnableChFltFe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_EnableChFltFeCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltFeExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_FILTERMODE_RESETCOUNTR:
        {
            ICU_EFTU_TIM_HWA_EnableChFltFe(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_DisableChFltFeCounter(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_EnableChFltFeExbit(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
            /* PRQA S 2016 ++ #Misra-C:Rule-16.4 Every switch statement shall have a default label
             * Reason: It doesn't go to the default branch */
        default:
            break;
            /* PRQA S 2016 -- */
    }
    ICU_EFTU_TIM_HWA_SetChFltReValue(pTim,
                                     pConfig->u8RisingEdgeFilterTime,
                                     (uint8)pConfig->eChannelIndex);
    ICU_EFTU_TIM_HWA_SetChFltFeValue(pTim,
                                     pConfig->u8FallingEdgeFilterTime,
                                     (uint8)pConfig->eChannelIndex);
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize the hardware channel
 * @param eEftuInstance Eftu Instance
 * @param pConfig  Pointer to the configuration structure
 *
 * @implements SWDESG_ICU_250
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_InitHwChannel(const ICU_EftuInstanceType          eEftuInstance,
                                                 const Icu_EftuTimChannelConfigType *pConfig)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    /*FLT config*/
    if (pConfig->bEnFilter == TRUE)
    {
        ICU_EFTU_TIM_HWA_EnableFlt(pTim, (uint8)pConfig->eChannelIndex);
        ICU_EFTU_TIM_HWA_SetChFltSrc(pTim, pConfig->eFltClockSrc, (uint8)pConfig->eChannelIndex);
        Icu_Eftu_Tim_ConfigChannelFilterParameter(eEftuInstance, pConfig);
    }
    /*F_IN() config*/
    switch (pConfig->eInputSrc)
    {
        case ICU_EFTU_TIM_INPUT_TIM_IN_X:
        {
            ICU_EFTU_TIM_HWA_UnLock(pTim);
            ICU_EFTU_TIM_HWA_ClearVal(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_Lock(pTim);
            ICU_EFTU_TIM_HWA_ClearchCicrl(pTim, (uint8)pConfig->eChannelIndex);
            break;
        }
        case ICU_EFTU_TIM_INPUT_TIM_IN_X_1:
        {
            ICU_EFTU_TIM_HWA_UnLock(pTim);
            ICU_EFTU_TIM_HWA_ClearVal(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_Lock(pTim);
            ICU_EFTU_TIM_HWA_SetchCicrl(pTim, (uint8)pConfig->eChannelIndex);

            break;
        }
        case ICU_EFTU_TIM_INPUT_TIM_IN_AUX_IN:
        {
            ICU_EFTU_TIM_HWA_UnLock(pTim);
            ICU_EFTU_TIM_HWA_SetVal(pTim, (uint8)pConfig->eChannelIndex);
            ICU_EFTU_TIM_HWA_Lock(pTim);
            break;
        }
            /* PRQA S 2016 ++ #Misra-C:Rule-16.4 Every switch statement shall have a default label
             * Reason: It doesn't go to the default branch */
        default:
            break;
            /* PRQA S 2016 -- */
    }
    /*Clock config*/
    ICU_EFTU_TIM_HWA_SetChannelClockSrc(pTim,
                                        pConfig->eTimChannelClockSrc,
                                        (uint8)pConfig->eChannelIndex);
    if (pConfig->eTimChannelRefTimeBase !=
        (ICU_EftuTimGprSrcType)ICU_EFTU_TIM_GPTSEL_CNTS_OR_CNT) /*Signal Detect, Signal Counter or
                                                                   TimeStamp*/
    {
        ICU_EFTU_TIM_HWA_SetCntsSel(pTim, ICU_EFTU_TIM_CNTS_TBUTS0, (uint8)pConfig->eChannelIndex);
        ICU_EFTU_TIM_HWA_SetGPR0Sel(pTim,
                                    pConfig->eTimChannelRefTimeBase,
                                    (uint8)pConfig->eChannelIndex);
        ICU_EFTU_TIM_HWA_SetGPR1Sel(pTim,
                                    pConfig->eTimChannelRefTimeBase,
                                    (uint8)pConfig->eChannelIndex);
    }
    else /*Signal Measurement*/
    {
        ICU_EFTU_TIM_HWA_SetCntsSel(pTim, ICU_EFTU_TIM_CNTS_CNT, (uint8)pConfig->eChannelIndex);
        ICU_EFTU_TIM_HWA_SetGPR0Sel(pTim,
                                    ICU_EFTU_TIM_GPTSEL_CNTS_OR_CNT,
                                    (uint8)pConfig->eChannelIndex);
        ICU_EFTU_TIM_HWA_SetGPR1Sel(pTim,
                                    ICU_EFTU_TIM_GPTSEL_CNTS_OR_CNT,
                                    (uint8)pConfig->eChannelIndex);
    }
}

/**
 * @brief De-Initialize the hardware channel
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 *
 * @implements SWDESG_ICU_251
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_DeinitHwChannel(const ICU_EftuInstanceType eEftuInstance,
                                                   const uint8                u8TimChannel)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    ICU_EFTU_TIM_HWA_DisableChannel(pTim, u8TimChannel);
    ICU_EFTU_TIM_HWA_UnLock(pTim);
    ICU_EFTU_TIM_HWA_ResetChannel(pTim, u8TimChannel);
    ICU_EFTU_TIM_HWA_Lock(pTim);
}

/**
 * @brief  Configure the channel to sleep mode
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 *
 * @implements SWDESG_ICU_252
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_SetSleepMode(const ICU_EftuInstanceType eEftuInstance,
                                                const uint8                u8TimChannel)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    ICU_EFTU_TIM_HWA_DisNewValueIrq(pTim, u8TimChannel);
    ICU_EFTU_TIM_HWA_ClearNewValFlag(pTim, u8TimChannel);
}

/**
 * @brief  Configure the channel to normal mode
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 *
 * @implements SWDESG_ICU_253
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_SetNormalMode(const ICU_EftuInstanceType eEftuInstance,
                                                 const uint8                u8TimChannel)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    ICU_EFTU_TIM_HWA_ClearNewValFlag(pTim, u8TimChannel);
    ICU_EFTU_TIM_HWA_EnNewValueIrq(pTim, u8TimChannel);
}

/**
 * @brief  Configure the channel activated edge
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @param eTimActiveEdge  Tim active edge
 *
 * @implements SWDESG_ICU_254
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_SetActivationCondition(
    const ICU_EftuInstanceType      eEftuInstance,
    const uint8                     u8TimChannel,
    const ICU_EftuTimActiveEdgeType eTimActiveEdge)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    switch (eTimActiveEdge)
    {
        case ICU_EFTU_TIM_ACTIVE_RISINGEDGE:
        {
            ICU_EFTU_TIM_HWA_ClearIngnoreEdge(pTim, u8TimChannel);
            ICU_EFTU_TIM_HWA_ConfigRisingActiveEdge(pTim, u8TimChannel);
            break;
        }
        case ICU_EFTU_TIM_ACTIVE_FALLINGEDGE:
        {
            ICU_EFTU_TIM_HWA_ClearIngnoreEdge(pTim, u8TimChannel);
            ICU_EFTU_TIM_HWA_ConfigFallingActiveEdge(pTim, u8TimChannel);
            break;
        }
        case ICU_EFTU_TIM_ACTIVE_BOTHEDGE:
        {
            ICU_EFTU_TIM_HWA_EnIngnoreEdge(pTim, u8TimChannel);
            break;
        }
            /* PRQA S 2016 ++ #Misra-C:Rule-16.4 Every switch statement shall have a default label
             * Reason: It doesn't go to the default branch */
        default:
            break;
            /* PRQA S 2016 -- */
    }
}

/**
 * @brief  Get the channel Input state
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 *
 * @implements SWDESG_ICU_255
 */
ICU_TEXT_SECTION boolean Icu_Eftu_Tim_GetInputState(const ICU_EftuInstanceType eEftuInstance,
                                                    const uint8                u8TimChannel)
{
    boolean        bState = FALSE;
    EFTU_TIM_Type *pTim   = EFTU_TIM_PTRS[eEftuInstance];
    if (ICU_EFTU_TIM_HWA_GetNewValueIrqEnable(pTim, u8TimChannel) == 0U)
    {
        if (ICU_EFTU_TIM_HWA_GetNewValueFlag(pTim, u8TimChannel) != 0U)
        {
            ICU_EFTU_TIM_HWA_ClearNewValFlag(pTim, u8TimChannel);
            bState = TRUE;
        }
        else
        {
            /* Nothing for misra */
        }
    }
    else
    {
        /* Nothing for misra */
    }
    return bState;
}

/**
 * @brief  Get the channel Input state from hardware directly.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 *
 * @implements SWDESG_ICU_256
 */
ICU_TEXT_SECTION boolean Icu_Eftu_Tim_GetInputHwState(const ICU_EftuInstanceType eEftuInstance,
                                                      const uint8                u8TimChannel)
{
    boolean        bState = FALSE;
    EFTU_TIM_Type *pTim   = EFTU_TIM_PTRS[eEftuInstance];
    if (ICU_EFTU_TIM_HWA_GetNewValueFlag(pTim, u8TimChannel) != 0U)
    {
        ICU_EFTU_TIM_HWA_ClearNewValFlag(pTim, u8TimChannel);
        bState = TRUE;
    }
    else
    {
        /* Nothing for misra */
    }
    return bState;
}

/**
 * @brief  Configure the channel Tiem mode and start the channel.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @param eTimActiveEdge  Tim active edge
 *
 * @implements SWDESG_ICU_257
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_StartChannelTiemMode(const ICU_EftuInstanceType eEftuInstance,
                                                        const uint8                u8TimChannel,
                                                        const ICU_EftuTimActiveEdgeType eTimActiveEdge)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    switch (eTimActiveEdge)
    {
        case ICU_EFTU_TIM_ACTIVE_RISINGEDGE:
        {
            ICU_EFTU_TIM_HWA_ClearIngnoreEdge(pTim, u8TimChannel);
            ICU_EFTU_TIM_HWA_ConfigRisingActiveEdge(pTim, u8TimChannel);
            break;
        }
        case ICU_EFTU_TIM_ACTIVE_FALLINGEDGE:
        {
            ICU_EFTU_TIM_HWA_ClearIngnoreEdge(pTim, u8TimChannel);
            ICU_EFTU_TIM_HWA_ConfigFallingActiveEdge(pTim, u8TimChannel);
            break;
        }
        case ICU_EFTU_TIM_ACTIVE_BOTHEDGE:
        {
            ICU_EFTU_TIM_HWA_EnIngnoreEdge(pTim, u8TimChannel);
            break;
        }
            /* PRQA S 2016 ++ #Misra-C:Rule-16.4 Every switch statement shall have a default label
             * Reason: It doesn't go to the default branch */
        default:
            break;
            /* PRQA S 2016 -- */
    }
    ICU_EFTU_TIM_HWA_SetChannelMode(pTim, ICU_EFTU_TIM_MODE_INPUTEVENT, u8TimChannel);
    ICU_EFTU_TIM_HWA_EnNewValueIrq(pTim, u8TimChannel);
    ICU_EFTU_TIM_HWA_EnableChannel(pTim, u8TimChannel);
}

/**
 * @brief  Configure the channel Tpwm mode and start the channel.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @param eTimActiveEdge  Tim active edge
 *
 * @implements SWDESG_ICU_258
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_StartChannelTpwmMode(const ICU_EftuInstanceType eEftuInstance,
                                                        const uint8                u8TimChannel,
                                                        const ICU_EftuTimActiveEdgeType eTimActiveEdge)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    switch (eTimActiveEdge)
    {
        case ICU_EFTU_TIM_ACTIVE_RISINGEDGE:
        {
            ICU_EFTU_TIM_HWA_ConfigRisingActiveEdge(pTim, u8TimChannel);
            break;
        }
        case ICU_EFTU_TIM_ACTIVE_FALLINGEDGE:
        {
            ICU_EFTU_TIM_HWA_ConfigFallingActiveEdge(pTim, u8TimChannel);
            break;
        }
            /* PRQA S 2016 ++ #Misra-C:Rule-16.4 Every switch statement shall have a default label
             * Reason: It doesn't go to the default branch */
        default:
            break;
            /* PRQA S 2016 -- */
    }
    ICU_EFTU_TIM_HWA_SetChannelMode(pTim, ICU_EFTU_TIM_MODE_PWMMEASUREMENT, u8TimChannel);
    ICU_EFTU_TIM_HWA_EnableChannel(pTim, u8TimChannel);
}

/**
 * @brief  Stop the channel function.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 *
 * @implements SWDESG_ICU_259
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_StopChannel(const ICU_EftuInstanceType eEftuInstance,
                                               const uint8                u8TimChannel)
{
    EFTU_TIM_Type *pTim = EFTU_TIM_PTRS[eEftuInstance];
    ICU_EFTU_TIM_HWA_DisableChannel(pTim, u8TimChannel);
    ICU_EFTU_TIM_HWA_DisNewValueIrq(pTim, u8TimChannel);
}

/**
 * @brief  Get the channel input level.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @return  The input level
 *
 * @implements SWDESG_ICU_260
 */
ICU_TEXT_SECTION Icu_EftuTimInputLevelType Icu_Eftu_Tim_GetInputLevel(
    const ICU_EftuInstanceType eEftuInstance,
    const uint8                u8TimChannel)
{
    const EFTU_TIM_Type      *pTim           = EFTU_TIM_PTRS[eEftuInstance];
    uint32                    u32InputMask   = ICU_EFTU_TIM_HWA_GetInputLevel(pTim);
    Icu_EftuTimInputLevelType eRetInputLevel = ICU_EFTU_TIM_INPUT_LEVEL_LOW;
    if ((u32InputMask & (uint32)((uint32)1U << (u8TimChannel + 16U))) != 0U)
    {
        eRetInputLevel = ICU_EFTU_TIM_INPUT_LEVEL_HIGH;
    }
    return eRetInputLevel;
}

/**
 * @brief  Get the channel time measurement result directly.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @return  The measurement result
 *
 * @implements SWDESG_ICU_261
 */
ICU_TEXT_SECTION uint32 Icu_Eftu_Tim_HwGetTimeElapsed(const ICU_EftuInstanceType eEftuInstance,
                                                      const uint8                u8TimChannel)
{
    uint32         u32Elapsed = 0U;
    EFTU_TIM_Type *pTim       = EFTU_TIM_PTRS[eEftuInstance];
    if (ICU_EFTU_TIM_HWA_GetNewValueFlag(pTim, u8TimChannel) != 0U)
    {
        u32Elapsed = ICU_EFTU_TIM_HWA_GetChGPR0(pTim, u8TimChannel);
        ICU_EFTU_TIM_HWA_ClearNewValFlag(pTim, u8TimChannel);
    }
    return u32Elapsed;
}

/**
 * @brief  Get the channel period measurement result Period directly.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @return  The measurement result
 */
ICU_TEXT_SECTION uint32 Icu_Eftu_Tim_HwGetPeriodElapsed(const ICU_EftuInstanceType eEftuInstance,
                                                        const uint8                u8TimChannel)
{
    uint32         u32Time = 0U;
    EFTU_TIM_Type *pTim    = EFTU_TIM_PTRS[eEftuInstance];
    if (ICU_EFTU_TIM_HWA_GetNewValueFlag(pTim, u8TimChannel) != 0U)
    {
        u32Time = ICU_EFTU_TIM_HWA_GetChGPR1(pTim, u8TimChannel);
    }
    return u32Time;
}

#if (defined ICU_EFTU_TIM_ISR_USED)
LOCAL_INLINE void Icu_Eftu_Tim_ProcessInterrupt(const ICU_EftuInstanceType eEftuInstance,
                                                uint8                      u8StartChannel)
{
    /* SWS_Icu_00119,SWS_Icu_00149,SWS_Icu_00150 */
    EFTU_TIM_Type *pTim       = EFTU_TIM_PTRS[eEftuInstance];
    uint32         u32IntMask = 0U;
    for (uint8 u8TimChannel = u8StartChannel; u8TimChannel < (u8StartChannel + 4u); u8TimChannel++)
    {
        if ((ICU_EFTU_TIM_HWA_GetNewValueFlag(pTim, u8TimChannel) != 0U) &&
            (ICU_EFTU_TIM_HWA_GetNewValueIrqEnable(pTim, u8TimChannel) != 0U))
        {
            u32IntMask |= (uint32)((uint32)1U << u8TimChannel);
        }
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((Icu_pConfig[u8CoreID] != NULL_PTR) && (u32IntMask != 0U))
#else
    if ((Icu_pConfig != NULL_PTR) && (u32IntMask != 0U))
#endif
    {
        /* PRQA S 3205 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type
         * declarations Reason: u32Rvalue will be used by Assemble instructions */
        volatile uint32 u32Rvalue;
        /* PRQA S 3205 -- */
        uint32 u32Channel;
        while ((u32IntMask != (uint32)0U))
        {
            /* PRQA S 1006 ++ #Misra-C:2012: Dir-4.2 All usage of assembly language should be
           documented. Reason: Here we use a Assemble instruction to reduce code execution time */
            ASM_KEYWORD volatile("rbit %0,%1" : "=r"(u32Rvalue) : "r"(u32IntMask));
            ASM_KEYWORD volatile("clz %0,%1" : "=r"(u32Channel) : "r"(u32Rvalue));
            uint32 u32ChannelValue = ICU_EFTU_TIM_HWA_GetChGPR0Full(pTim, (uint8)u32Channel);
            /* PRQA S 1006 -- */
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
            to an inappropriate essential type. Reason: The relative register bits can be safely
            converted to the enumeration type */
            /* PRQA S 4393,4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
             * essential type. Reason: No problem doing this conversion as the value is within the
             * range of the cast type.
             */
            Icu_HW_EFtuTimChannelIntrProcess((ICU_EftuInstanceType)eEftuInstance,
                                             u32Channel,
                                             u32ChannelValue);
            /* PRQA S 4543 -- */
            /* PRQA S 4393,4394 -- */
            /* PRQA S 4342 -- */
            /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one
            operand of an operator in which the usual arithmetic conversions are performed then the
            other operand shall not have wider essential type. Reason: It is safety to multiply the
            u32IntMask here */
            u32IntMask &= ~(1u << u32Channel);
            /* PRQA S 1891 -- */
            ICU_EFTU_TIM_HWA_ClearNewValFlag(pTim, (uint8)u32Channel);
        }
    }
    else
    {
        /*do nothing*/
    }
}
#endif
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. Reason: this must call asm */
#if (defined ICU_EFTU_0_TIM0_3_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU0_TIM0_3_ISR)
{
    Icu_Eftu_Tim_ProcessInterrupt(ICU_EFTU_0, 0U);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_EFTU_0_TIM4_7_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU0_TIM4_7_ISR)
{
    Icu_Eftu_Tim_ProcessInterrupt(ICU_EFTU_0, 4U);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_EFTU_1_TIM0_3_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU1_TIM0_3_ISR)
{
    Icu_Eftu_Tim_ProcessInterrupt(ICU_EFTU_1, 0U);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_EFTU_1_TIM4_7_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU1_TIM4_7_ISR)
{
    Icu_Eftu_Tim_ProcessInterrupt(ICU_EFTU_1, 4U);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_EFTU_2_TIM0_3_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU2_TIM0_3_ISR)
{
    Icu_Eftu_Tim_ProcessInterrupt(ICU_EFTU_2, 0U);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_EFTU_2_TIM4_7_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_EFTU2_TIM4_7_ISR)
{
    Icu_Eftu_Tim_ProcessInterrupt(ICU_EFTU_2, 4U);
    EXIT_INTERRUPT();
}
#endif
/* PRQA S 1006 -- */

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#endif /* ICU_SUPPORT_EFTU */
#ifdef __cplusplus
}
#endif
/** @} */
