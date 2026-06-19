/**
 *   @file    Icu_Ftu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - FTU driver source file.
 *   @details FTU source file, containing the variables and functions that are exported by the
 *            FTU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024   QXW0076       N/A         add time stamp dma function
*   0.6.0       18/3/2024    QXW0076       N/A         verify timestamp dma feature && support for 7240.
==================================================================================================*/
/* PRQA S 2071,5087 EOF  #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location.
*/
/* PRQA S 3006,1006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
                       #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented
   1006:[E] This in-line assembler construct is a language extension. The code has been ignored.
   3006:This function contains a mixture of in-line assembler statements and C statements.
   REASON: This is the normal usage of macros.
*/

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Ftu.h"
#include "Ftu_Common.h"
#include "SchM_Icu.h"
#include "Scm_RegOps.h"

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ICU_START_SEC_CONST_32
#include "Icu_MemMap.h"
#define ICU_STOP_SEC_CONST_32
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define ICU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
@brief overflow enable flag of Ftu channel
*/
ICU_DATA_SECTION static uint8 s_aFtuOverflowFlag[ICU_TOTAL_FTU_NUMBER] = { 0 };
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON) */
/**
@brief interrupt flag of Ftu channel
*/
ICU_DATA_SECTION static uint8 s_aFtuChannelFlag[ICU_TOTAL_FTU_NUMBER] = { 0 };
#define ICU_STOP_SEC_VAR_INIT_UNSPECIFIED
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

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Set input capture of a FTU channel
 *
 * @param pFtu              -FTU instance
 * @param u8Channel         -FTU channel number, range is 0-7.
 * @param eActivationEdge   -Active edge
 *
 */
ICU_TEXT_SECTION static void Icu_Ftu_SetInputCapture(FTU_Type                     *pFtu,
                                                     uint8                         u8Channel,
                                                     const Icu_FtuInputCaptureType eActivationEdge)
{
    if (ICU_FTU_INPUT_RISING_EDGE == eActivationEdge)
    {
        FTU_HWA_SetChannelInputCaptureOnRising(pFtu, u8Channel);
    }
    else if (ICU_FTU_INPUT_FALLING_EDGE == eActivationEdge)
    {
        FTU_HWA_SetChannelInputCaptureOnFalling(pFtu, u8Channel);
    }
    else
    {
        FTU_HWA_SetChannelInputCaptureOnBoth(pFtu, u8Channel);
    }
}

#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
/**
 * @brief Set Icm mode of a FTU channel
 *
 * @param eFtuInstance      -FTU instance
 * @param u8Channel         -FTU channel number, range is 0-7.
 * @param eActivationEdge   -Active edge
 * @param eFtuIcmMode      -Ftu Icm mode
 *
 * @implements SWDESG_ICU_246
 */
ICU_TEXT_SECTION void Icu_Ftu_SetIcmMode(const Icu_FtuInstanceType     eFtuInstance,
                                         uint8                         u8Channel,
                                         const Icu_FtuInputCaptureType eActivationEdge,
                                         Icu_FtuIcmModeType            eFtuIcmMode)
{
    FTU_Type *pFtu = FTU_PTRS[eFtuInstance];
    if (ICU_FTU_ICM_PERIOD != eFtuIcmMode)
    {
        if (ICU_FTU_INPUT_RISING_EDGE == eActivationEdge)
        {
            s_aFtuChannelFlag[eFtuInstance] |= (uint8)(1u << (u8Channel + 1u));
            FTU_HWA_EnableChannelInterrupt(pFtu, (uint8)(u8Channel + 1u));
            FTU_HWA_SetChannelPolarity(pFtu, (uint8)(1U << u8Channel));
        }
        else /*ICU_FTU_INPUT_FALLING_EDGE*/
        {
            s_aFtuChannelFlag[eFtuInstance] |= (uint8)(1u << u8Channel);
            FTU_HWA_EnableChannelInterrupt(pFtu, u8Channel);
        }
        FTU_HWA_ConfigIcmMode(pFtu, u8Channel, FTU_MEASURE_MODE_DUTY_CYCLE);
        FTU_HWA_SetIcmContinuonsMode(pFtu, u8Channel);
        FTU_HWA_DisableMeasureStartImmd(pFtu, u8Channel);
        FTU_HWA_SetChannelInputCaptureOnRising(pFtu, u8Channel);
        FTU_HWA_SetChannelInputCaptureOnFalling(pFtu, (uint8)(u8Channel + 1U));
    }
    else /*ICU_FTU_ICM_PERIOD*/
    {
        FTU_HWA_SetIcmContinuonsMode(pFtu, u8Channel);
        FTU_HWA_DisableMeasureStartImmd(pFtu, u8Channel);
        FTU_HWA_ConfigIcmMode(pFtu, u8Channel, FTU_MEASURE_MODE_PERIOD);

        if (ICU_FTU_INPUT_RISING_EDGE == eActivationEdge)
        {
            FTU_HWA_SetChannelInputCaptureOnRising(pFtu, u8Channel);
        }
        else
        {
            FTU_HWA_SetChannelInputCaptureOnFalling(pFtu, u8Channel);
        }
    }
}

#endif
/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize a FTU Module
 *
 * @param pConfig   -Pointer to FTU module configuration structure
 *
 * @implements SWDESG_ICU_110
 */
ICU_TEXT_SECTION void Icu_Ftu_Init(const Icu_FtuModuleConfigType *pConfig)
{
    uint32    u32TempRegValue;
    FTU_Type *pFtuPtr = FTU_PTRS[pConfig->eFtuInstance];
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
    uint32 u32Loop;
#endif
    FtuCommon_ConfigType tFtuCommonConfig;
    /* set FTU filter prescale */
    FTU_HWA_SetModuleFilterPrescale(pFtuPtr, (uint8)pConfig->efilterPrescaler);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
    for (u32Loop = 0; u32Loop < (uint32)ICU_TOTAL_FTU_NUMBER; u32Loop++)
    {
        s_aFtuOverflowFlag[u32Loop] = 0;
    }
#endif
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The bit shift of the ftu filter bit depends
     * on the hardware.
     */
    u32TempRegValue = FTU_FILTER_CH0FVAL(pConfig->aInputFilter[0]) |
                      FTU_FILTER_CH1FVAL(pConfig->aInputFilter[1]) |
                      FTU_FILTER_CH2FVAL(pConfig->aInputFilter[2]) |
                      FTU_FILTER_CH3FVAL(pConfig->aInputFilter[3]);
    /* PRQA S 2985 -- */
    /* set FTU input capture filter value */
    FTU_HWA_ConfigInputCaptureFilter(pFtuPtr, u32TempRegValue);
    /*config Ftu Debug mode*/
    FTU_HWA_ConfigDebugMode(pFtuPtr, (uint8)pConfig->eDebugMode);
    /*config Ftu Gtb mode*/
    FTU_HWA_ConfigGTBMode(pFtuPtr, (uint8)pConfig->eGtbEn);
    /* set timer clock */
    if (ICU_FTU_BUS_CLK == pConfig->eClkSrc)
    {
        tFtuCommonConfig.eClockSource = FTU_MDOULE_INTERNAL_CLK;
    }
    else if (ICU_FTU_NO_CLK == pConfig->eClkSrc)
    {
        tFtuCommonConfig.eClockSource = FTU_MDOULE_NO_CLK;
    }
    else
    {
        tFtuCommonConfig.eClockSource         = FTU_MDOULE_EXTERNAL_CLK;
        tFtuCommonConfig.u8ExternalClockIndex = (uint8)pConfig->eClkSrc -
                                                (uint8)ICU_FTU_EXTERNAL_CLK0;
    }
    tFtuCommonConfig.u32ModuloValue = pConfig->u32Period;
    tFtuCommonConfig.u8Instance     = (uint8)pConfig->eFtuInstance;
    tFtuCommonConfig.u8Prescaler    = (uint8)pConfig->ePrescaler;
    FtuCommon_Init(FTU_COMMON_MASTER_ICU, &tFtuCommonConfig);
}

/**
 * @brief Initialize a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 * @implements SWDESG_ICU_111
 */
ICU_TEXT_SECTION void Icu_Ftu_ChannelInit(const Icu_FtuInstanceType eFtuInstance,
                                          const uint8               u8Channel)
{
    FTU_Type *pFtuPtr = FTU_PTRS[eFtuInstance];

    /* disable interrupt on this channel*/
    s_aFtuChannelFlag[eFtuInstance] &= (uint8)(~(1u << u8Channel));
    FTU_HWA_DisableChannelInterrupt(pFtuPtr, u8Channel);
    /* clear interrupt flags */
    FTU_HWA_ClearChannelInterruptFlag(pFtuPtr, (uint8)(1u << u8Channel));
}

#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize a FTU Module
 *
 * @param eFtuInstance  -FTU instance Id
 *
 * @implements SWDESG_ICU_112
 */
ICU_TEXT_SECTION void Icu_Ftu_DeInit(const Icu_FtuInstanceType eFtuInstance)
{
    FtuCommon_DeInit(FTU_COMMON_MASTER_ICU, (uint8)eFtuInstance);
}
#endif

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set a FTU channel to sleep mode
 *
 * @param eFtuInstance  -FTU instance Id
 * @param u8Channel     -FTU channel index
 *
 * @implements SWDESG_ICU_113
 */
ICU_TEXT_SECTION void Icu_Ftu_SetSleepMode(const Icu_FtuInstanceType eFtuInstance,
                                           const uint8               u8Channel)
{
    /* Disable Ftu mod on the output pin */
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_28();
    FTU_HWA_ClearChannelEdgeConfig(FTU_PTRS[eFtuInstance], u8Channel);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
    s_aFtuOverflowFlag[eFtuInstance] &= ~(1u << u8Channel);
    if (0u == s_aFtuOverflowFlag[eFtuInstance])
    {
        FtuCommon_DisableOverflow(FTU_COMMON_MASTER_ICU, (uint8)eFtuInstance);
    }
#endif
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_28();
}

/**
 * @brief Set a FTU channel to normal mode
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @param eActivationEdge   -Activation edge of for the channel
 *
 * @implements SWDESG_ICU_114
 */
ICU_TEXT_SECTION void Icu_Ftu_SetNormalMode(const Icu_FtuInstanceType     eFtuInstance,
                                            const uint8                   u8Channel,
                                            const Icu_FtuInputCaptureType eActivationEdge)
{
    /* Set the Ftu channel to the configured activation type */
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_27();
    /* set FTU input capture action when counter reaches CV */
    Icu_Ftu_SetInputCapture(FTU_PTRS[eFtuInstance], u8Channel, eActivationEdge);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_27();
}
#endif /* ICU_SET_MODE_API */

/**
 * @brief Set activation for a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @param eActivationEdge   -Activation edge of for the channel
 *
 * @implements SWDESG_ICU_115
 */
ICU_TEXT_SECTION void Icu_Ftu_SetActivationCondition(const Icu_FtuInstanceType     eFtuInstance,
                                                     const uint8                   u8Channel,
                                                     const Icu_FtuInputCaptureType eActivationEdge)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_26();
    /* set FTU input capture action when counter reaches CV */
    Icu_Ftu_SetInputCapture(FTU_PTRS[eFtuInstance], u8Channel, eActivationEdge);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_26();
}

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return                  state of the channel
 *
 * @implements SWDESG_ICU_116
 */
ICU_TEXT_SECTION boolean Icu_Ftu_GetInputState(const Icu_FtuInstanceType eFtuInstance,
                                               const uint8               u8Channel)
{
    boolean   bState  = FALSE;
    FTU_Type *pFtuPtr = FTU_PTRS[eFtuInstance];
    if ((uint32)0u == FTU_HWA_ReadChannelInterruptEnable(pFtuPtr, u8Channel))
    {
        if (0u != FTU_HWA_ReadChannelInterruptFlag(pFtuPtr, u8Channel))
        {
            bState = (boolean)TRUE;
            /* Clear interrupt flag */
            SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_29();
            FTU_HWA_ClearChannelInterruptFlag(pFtuPtr, (uint8)(1u << u8Channel));
            SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_29();
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
 * @brief This function returns the state of the FTU channel from hardware
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return                  state of the channel
 *
 * @implements SWDESG_ICU_244
 */
ICU_TEXT_SECTION boolean Icu_Ftu_GetInputHwState(const Icu_FtuInstanceType eFtuInstance,
                                                 const uint8               u8Channel)
{
    boolean   bState  = FALSE;
    FTU_Type *pFtuPtr = FTU_PTRS[eFtuInstance];
    if (0u != FTU_HWA_ReadChannelInterruptFlag(pFtuPtr, u8Channel))
    {
        bState = (boolean)TRUE;
        /* Clear interrupt flag */
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_96();
        FTU_HWA_ClearChannelInterruptFlag(pFtuPtr, (uint8)(1u << u8Channel));
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_96();
    }
    else
    {
        /* Nothing for misra */
    }
    return bState;
}
#endif /*ICU_GET_INPUT_STATE_API == STD_ON*/

/**
 * @brief Start a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @param eActivationEdge   -Activation edge of for the channel
 *
 * @implements SWDESG_ICU_117
 */
ICU_TEXT_SECTION void Icu_Ftu_StartChannel(const Icu_FtuInstanceType     eFtuInstance,
                                           const uint8                   u8Channel,
                                           const Icu_FtuInputCaptureType eActivationEdge)
{
    FTU_Type *pFtuPtr = FTU_PTRS[eFtuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_20();
    /* Clear interrupt flag */
    FTU_HWA_ClearChannelInterruptFlag(pFtuPtr, (uint8)(1u << u8Channel));
    /* Enable interrupts on the Ftu channel */
    s_aFtuChannelFlag[eFtuInstance] |= (1u << u8Channel);
    FTU_HWA_EnableChannelInterrupt(pFtuPtr, u8Channel);

    Icu_Ftu_SetInputCapture(pFtuPtr, u8Channel, eActivationEdge);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_20();
}

/**
 * @brief Stop a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 * @implements SWDESG_ICU_118
 */
ICU_TEXT_SECTION void Icu_Ftu_StopChannel(const Icu_FtuInstanceType eFtuInstance,
                                          const uint8               u8Channel)
{
    FTU_Type *pFtuPtr = FTU_PTRS[eFtuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_24();
    /* Stop Channel*/
    FTU_HWA_ClearChannelEdgeConfig(pFtuPtr, u8Channel);
    /* Disable Interrupts on the Ftu channel */
    s_aFtuChannelFlag[eFtuInstance] &= ~(1u << u8Channel);
    FTU_HWA_DisableChannelInterrupt(pFtuPtr, u8Channel);
    FTU_HWA_ClearChannelInterruptFlag(pFtuPtr, (uint8)(1u << u8Channel));
    FTU_HWA_DisableChannelDma(pFtuPtr, u8Channel);
    FTU_HWA_SetChannelValue(pFtuPtr, u8Channel, 0U);
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
    if (0U == (u8Channel & 0x1U))
    {
        if (0U != FTU_HWA_GetIcmMode(pFtuPtr, u8Channel))
        {
            FTU_HWA_ClearIcmMode(pFtuPtr, u8Channel);
            FTU_HWA_DisableChannelInterrupt(pFtuPtr, u8Channel + 1U);
            FTU_HWA_ClearChannelEdgeConfig(pFtuPtr, u8Channel + 1U);
        }
    }
#endif
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_24();
}

#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get the Maximum count value of the Ftu instance
 *
 * @param eFtuInstance      -FTU instance Id
 * @return        Maximum count value of the Ftu instance.
 *
 * @implements SWDESG_ICU_119
 */
ICU_TEXT_SECTION Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance)
{
    Icu_ValueType tMaxCount;
    tMaxCount = FTU_HWA_ReadMaxCount(FTU_PTRS[eFtuInstance]);
    return tMaxCount;
}
#endif

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get the input level of FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return        Input level of the FTU channel
 *
 * @implements SWDESG_ICU_124
 */
ICU_TEXT_SECTION Icu_FtuInputLevelType Icu_Ftu_GetInputLevel(const Icu_FtuInstanceType eFtuInstance,
                                                             const uint8               u8Channel)
{
    Icu_FtuInputLevelType eInputLevel =
        (0u != FTU_HWA_ReadInputState(FTU_PTRS[eFtuInstance], u8Channel)) ? ICU_FTU_INPUT_HIGH :
                                                                            ICU_FTU_INPUT_LOW;
    return eInputLevel;
}
#endif

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief Enable the overflow interrupt of the channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 * @implements SWDESG_ICU_121
 */
ICU_TEXT_SECTION void Icu_Ftu_EnableOverflow(const Icu_FtuInstanceType eFtuInstance,
                                             const uint8               u8Channel)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_22();
    s_aFtuOverflowFlag[eFtuInstance] |= 1u << u8Channel;
    FtuCommon_EnableOverflow(FTU_COMMON_MASTER_ICU, (uint8)eFtuInstance);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_22();
}
/**
 * @brief Disable the overflow interrupt of the channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 * @implements SWDESG_ICU_122
 */
ICU_TEXT_SECTION void Icu_Ftu_DisableOverflow(const Icu_FtuInstanceType eFtuInstance,
                                              const uint8               u8Channel)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_23();
    s_aFtuOverflowFlag[eFtuInstance] &= ~(1u << u8Channel);
    if (0u == s_aFtuOverflowFlag[eFtuInstance])
    {
        FtuCommon_DisableOverflow(FTU_COMMON_MASTER_ICU, (uint8)eFtuInstance);
    }
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_23();
}
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON) */

#if (ICU_TIMESTAMP_DMA == STD_ON)
/**
 * @brief Get the addr of the source register.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 *@return The address of the source data.
 * @implements SWDESG_ICU_127
 */
ICU_TEXT_SECTION uint32 Icu_Ftu_GetSrcAddr(const Icu_FtuInstanceType eFtuInstance,
                                           const uint8               u8Channel)
{
    return FTU_HWA_GetCVnaddr(FTU_PTRS[eFtuInstance], u8Channel);
}
/**
 * @brief Enable the ftu channel dma function.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @implements SWDESG_ICU_128
 * */
ICU_TEXT_SECTION void Icu_Ftu_EnableChnDma(const Icu_FtuInstanceType eFtuInstance,
                                           const uint8               u8Channel)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_25();
    FTU_HWA_EnableChannelDma(FTU_PTRS[eFtuInstance], u8Channel);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_25();
}

/**
 * @brief Disable the ftu channel dma function.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 * @implements SWDESG_ICU_129
 * */
ICU_TEXT_SECTION void Icu_Ftu_DisableChnDma(const Icu_FtuInstanceType eFtuInstance,
                                            const uint8               u8Channel)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_21();
    FTU_HWA_DisableChannelDma(FTU_PTRS[eFtuInstance], u8Channel);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_21();
}
#endif

#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
/**
 * @brief Get time value directly from hardware register.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return                     - time value
 *
 * @implements SWDESG_ICU_245
 * */
ICU_TEXT_SECTION uint32 Icu_Ftu_HwGetTimeElapsed(const Icu_FtuInstanceType eFtuInstance,
                                                 const uint8               u8Channel)
{
    FTU_Type *pFtuPtr      = FTU_PTRS[eFtuInstance];
    uint32    u32timeValue = 0U;
    if ((uint32)0u != FTU_HWA_ReadChannelInterruptFlag(pFtuPtr, u8Channel))
    {
        uint32 u32PreFirstEdgeValue  = FTU_HWA_ReadChannelValue(pFtuPtr, (u8Channel + 1u));
        uint32 u32PreSecondEdgeValue = FTU_HWA_ReadChannelValue(pFtuPtr, (u8Channel));
        uint32 u32FirstEdgeValue     = FTU_HWA_ReadChannelValue(pFtuPtr, (u8Channel + 1u));
        uint32 u32SecondEdgeValue    = FTU_HWA_ReadChannelValue(pFtuPtr, (u8Channel));
        if ((u32PreFirstEdgeValue == u32FirstEdgeValue) &&
            (u32PreSecondEdgeValue == u32SecondEdgeValue))
        {
            if (u32SecondEdgeValue > u32FirstEdgeValue)
            {
                u32timeValue = u32SecondEdgeValue - u32FirstEdgeValue;
            }
            else
            {
                uint32 u32ModuloValue = FTU_HWA_ReadMaxCount(pFtuPtr) + 1u;
                u32timeValue          = u32SecondEdgeValue + u32ModuloValue - u32FirstEdgeValue;
            }
        }
        FTU_HWA_ClearChannelInterruptFlag(pFtuPtr, (uint8)(1u << u8Channel));
    }
    else
    {
        /*Do nothing*/
    }
    return u32timeValue;
}
#endif

#if (defined ICU_FTU_ISR_USED)
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
/**
 * @brief FTU Icm mode odd channel interrupt process
 *
 * @param u8Instance                 -FTU instance Id
 * @param u8Index                    -Ftu channel
 * @param u32ChannelValue            -Channel value
 * @param u32InputState              -Input State
 */
ICU_TEXT_SECTION static void Icu_Ftu_Icm_OddProcessInterrupt(uint8              u8Instance,
                                                             uint8              u8Index,
                                                             uint32             u32ChannelValue,
                                                             Icu_InputLevelType eInputLevel)
{
    uint32 u32FirstEdgeValue, u32SecondEdgeValue;
    if (0U != FTU_HWA_GetIcmMode(FTU_PTRS[u8Instance], (u8Index - 1u)))
    {
        u32FirstEdgeValue  = FTU_HWA_ReadChannelValue(FTU_PTRS[u8Instance], (u8Index - 1u));
        u32SecondEdgeValue = FTU_HWA_ReadChannelValue(FTU_PTRS[u8Instance], (u8Index));
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
        an inappropriate essential type. Reason: The relative register bits can be safely converted
        to the enumeration type */
        /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        Icu_Hw_FtuDualCaptureProcess(u8Instance, u8Index, u32FirstEdgeValue, u32SecondEdgeValue);
        /* PRQA S 4394 -- */
        /* PRQA S 4342 -- */
    }
    else
    {
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
          an inappropriate essential type. Reason: The relative register bits can be safely
          converted to the enumeration type */
        /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        Icu_HW_FtuChannelIntrProcess(u8Instance, u8Index, u32ChannelValue, eInputLevel);
        /* PRQA S 4394 -- */
        /* PRQA S 4342 -- */
    }
}

/**
 * @brief FTU Icm mode even channel interrupt process
 *
 * @param u8Instance                 -FTU instance Id
 * @param u8Index                    -Ftu channel
 * @param u32ChannelValue            -Channel value
 * @param u32InputState              -Input State
 */
ICU_TEXT_SECTION static void Icu_Ftu_Icm_EvenProcessInterrupt(uint8              u8Instance,
                                                              uint8              u8Index,
                                                              uint32             u32ChannelValue,
                                                              Icu_InputLevelType eInputLevel)
{
    uint32 u32FirstEdgeValue, u32SecondEdgeValue;
    if (0U != FTU_HWA_GetIcmMode(FTU_PTRS[u8Instance], (u8Index)))
    {
        u32FirstEdgeValue  = FTU_HWA_ReadChannelValue(FTU_PTRS[u8Instance], (u8Index + 1u));
        u32SecondEdgeValue = FTU_HWA_ReadChannelValue(FTU_PTRS[u8Instance], (u8Index));
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
           an inappropriate essential type. Reason: The relative register bits can be safely
           converted to the enumeration type */
        /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        Icu_Hw_FtuDualCaptureProcess(u8Instance, u8Index, u32FirstEdgeValue, u32SecondEdgeValue);
        /* PRQA S 4394 -- */
        /* PRQA S 4342 -- */
    }
    else
    {
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
           an inappropriate essential type. Reason: The relative register bits can be safely
           converted to the enumeration type */
        /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        Icu_HW_FtuChannelIntrProcess(u8Instance, u8Index, u32ChannelValue, eInputLevel);
        /* PRQA S 4394 -- */
        /* PRQA S 4342 -- */
    }
}
#endif

/**
 * @brief FTU interrupt process
 *
 * @param u8Instance          -FTU instance Id
 * @param u32Overflow              -Overflow flag
 * @param u32ChannelIntrFlag    -Channel interrupt flag
 * @param pChannelValue            -Point to the array of channel value
 * @param u32InputState            -Input State
 *
 * @implements SWS_Icu_00149,SWS_Icu_00150
 */
ICU_TEXT_SECTION void Icu_Ftu_ProcessInterrupt(uint8   u8Instance,
                                               uint32  u32Overflow,
                                               uint32  u32ChannelIntrFlag,
                                               uint32 *pChannelValue,
                                               uint32  u32InputState)
{
    /* SWS_Icu_00119 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((Icu_pConfig[u8CoreID] != NULL_PTR) && ((u32Overflow != 0U) || (u32ChannelIntrFlag != 0U)))
#else
    if ((Icu_pConfig != NULL_PTR) && ((u32Overflow != 0U) || (u32ChannelIntrFlag != 0U)))
#endif
    {
        uint8 u8Index;
        for (u8Index = 0; u8Index < FTU_CHANNEL_CONTROLS_COUNT; u8Index++)
        {
            uint32 u32Flag = (uint32)1u << u8Index;
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            uint8 u8OverflowFlag = 0u;
            /* Check overflow status of channel*/
            /* PRQA S 4342 ++
                4342:An expression of 'essentially unsigned' type (%1s) is being cast to enum type
               '%2s'. REASON: The program will guarantee the legality of these type conversions.
            */
            if ((0u != u32Overflow) && (0u != (s_aFtuOverflowFlag[u8Instance] & (1u << u8Index))))
            {
                u8OverflowFlag = 1u;
            }
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON) */
            if ((0u != (u32ChannelIntrFlag & u32Flag)) &&
                (0u != (s_aFtuChannelFlag[u8Instance] & u32Flag)))
            {
                uint32 u32ChannelValue = pChannelValue[u8Index];
                Icu_FtuInputLevelType eInputLevel = (0u != (u32InputState & ((uint32)1u << u8Index))) ?
                                                        ICU_FTU_INPUT_HIGH :
                                                        ICU_FTU_INPUT_LOW;
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
                uint32 u32CntMin = FTU_HWA_GetModuleInitialValue(FTU_PTRS[u8Instance]);
                uint32 u32CntMax = FTU_HWA_ReadMaxCount(FTU_PTRS[u8Instance]);
                if ((0u != u8OverflowFlag) &&
                    ((u32ChannelValue - u32CntMin) < (u32CntMax - u32ChannelValue)))
                {
                    u8OverflowFlag = 0u;
                    Icu_HW_FtuOverflowIntrProcess((Icu_FtuInstanceType)u8Instance, u8Index);
                }
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON) */
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
                if (0u != (u8Index & 0x1u)) /*Odd*/
                {
                    Icu_Ftu_Icm_OddProcessInterrupt(u8Instance, u8Index, u32ChannelValue, eInputLevel);
                }
                else
                {
                    Icu_Ftu_Icm_EvenProcessInterrupt(u8Instance, u8Index, u32ChannelValue, eInputLevel);
#else
                Icu_HW_FtuChannelIntrProcess((Icu_FtuInstanceType)u8Instance,
                                             u8Index,
                                             u32ChannelValue,
                                             eInputLevel);
#endif
#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
                }
#endif
            }
            /* PRQA S 4342 -- */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
            if (0u != u8OverflowFlag)
            {
                Icu_HW_FtuOverflowIntrProcess((Icu_FtuInstanceType)u8Instance, u8Index);
            }
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON) */
        }
    }
}
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
