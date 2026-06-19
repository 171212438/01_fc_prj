/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file Gpt_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt - hardware abstraction layer driver source file.
 *   @details This is the hardware abstraction layer driver source file for CAN.
 *
 *   @addtogroup Gpt
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT
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
*   0.1.0       23/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.5.0       17/01/2024    QXW0074       N/A          add Gpt_Tstmp support
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
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
#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Gpt.h"
#include "Gpt_Hw.h"
#include "Scm_RegOps.h"
#if (GPT_FTU_GTB_SUPPORT == STD_ON)
#include "Ftu_Common.h"
#endif
/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define GPT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief          Local array variable used to store the predef-timer Initialization state
 */
GPT_DATA_SECTION static uint8 Gpt_Hw_u8PredefTimerInitState[GPT_HW_PREDEFTIMER_NUM] = { (uint8)0,
                                                                                        (uint8)0,
                                                                                        (uint8)0,
                                                                                        (uint8)0 };
#endif
#define GPT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/
/**
 * @brief Initialize channel [SWDESG_GPT_062]
 *
 * @param pChannelConfig Channel configuration pointer
 * @param pHw2ChannelMap Hardware to logic channel map pointer
 */
GPT_TEXT_SECTION void Gpt_HL_Init(const Gpt_ConfigChannelType *pChannelConfig,
                                  const Gpt_ChannelType       *pHw2ChannelMap)
{
    if (NULL_PTR != pChannelConfig)
    {
        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {
#if defined(GPT_FTU_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                Gpt_LL_Ftu_Init(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                pChannelConfig->tGptChannelCommonConfig.bGptDebugModeEnable,
                                (const Gpt_ConfigChannelFtuType *)&pChannelConfig
                                    ->tGptChannelHwSpecificConfig.tGptFtuChannelConfig,
                                (uint8)pChannelConfig->tGptChannelCommonConfig.eGtbEn,
                                pHw2ChannelMap,
                                pChannelConfig->tGptChannelCommonConfig.eGptChannelMode);
                break;
#endif
#if defined(GPT_TPU_USED)
            case GPT_MODULE_TPU:
                Gpt_LL_Tpu_Init(pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                pChannelConfig->tGptChannelCommonConfig.bGptDebugModeEnable,
                                &pChannelConfig->tGptChannelHwSpecificConfig.tGptTpuChannelConfig,
                                (uint8)pChannelConfig->tGptChannelCommonConfig.eGtbEn,
                                pChannelConfig->tGptChannelCommonConfig.eGptChannelMode);
                break;
#endif
#if defined(GPT_FCPIT_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                Gpt_LL_Fcpit_Init(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                  pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                  pChannelConfig->tGptChannelCommonConfig.bGptDebugModeEnable,
                                  &pChannelConfig->tGptChannelHwSpecificConfig.tGptFcpitChannelConfig);
                break;
#endif
#if defined(GPT_AONTIMER_USED)
            case GPT_MODULE_AONTIMER:
                Gpt_LL_Aontimer_Init(
                    &pChannelConfig->tGptChannelHwSpecificConfig.tGptAontimerChannelConfig,
                    pChannelConfig->tGptChannelCommonConfig.bGptDebugModeEnable);
                break;
#endif
#if defined(GPT_RTC_USED)
            case GPT_MODULE_RTC:
                Gpt_LL_Rtc_Init(pChannelConfig->tGptChannelCommonConfig.eGptChannelMode);
                break;
#endif
#if defined(GPT_TSTMP_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
#if (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_OFF)
                Gpt_LL_Tstmp_Init(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                  pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
#else
                Gpt_LL_Tstmp_Init(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                  pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                  &pChannelConfig->tGptChannelHwSpecificConfig.tGptTstmpChannelConfig);
#endif /* (GPT_CFG_TSTMP0_MODX_CLKSEL_SUPPORT == STD_ON) */
                break;
#endif
#if defined(GPT_PTIMER_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                Gpt_LL_Ptimer_Init(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    pChannelConfig->tGptChannelCommonConfig.bGptDebugModeEnable,
                    &pChannelConfig->tGptChannelHwSpecificConfig.tGptPtimerChannelConfig);
                break;
#endif
#if defined(GPT_EFTU_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                Gpt_LL_EftuTom_Init(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                    &pChannelConfig->tGptChannelHwSpecificConfig.tGptEftuTomChannelConfig,
                    pChannelConfig->tGptChannelCommonConfig.eGtbEn);
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour*/
                break;
        }
    }
    (void)pHw2ChannelMap;
}

/**
 * @brief Get timer elapsed [SWDESG_GPT_061]
 *
 * @param pChannelConfig Channel configuration pointer
 * @param pChannelInfo Channel information pointer
 * @return Gpt_ValueType Elapsed value
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_HL_GetTimeElapsed(const Gpt_ConfigChannelType *pChannelConfig,
                                                     Gpt_HwChannelInfoType       *pChannelInfo)
{
    uint32 u32ReturnValue = 0U;
    if ((NULL_PTR != pChannelConfig) && (NULL_PTR != pChannelInfo))
    {
        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {
#if defined(GPT_FTU_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                u32ReturnValue = Gpt_LL_Ftu_GetTimeElapsed(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                    &(pChannelInfo->bChannelRollover),
                    &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_TPU_USED)
            case GPT_MODULE_TPU:
                u32ReturnValue = Gpt_LL_Tpu_GetTimeElapsed(
                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                    &(pChannelInfo->bChannelRollover),
                    &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_FCPIT_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                u32ReturnValue = Gpt_LL_FCPit_GetTimeElapsed(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                    &(pChannelInfo->bChannelRollover),
                    &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_AONTIMER_USED)
            case GPT_MODULE_AONTIMER:
                u32ReturnValue = Gpt_LL_Aontimer_GetTimeElapsed(&(pChannelInfo->bChannelRollover),
                                                                &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_RTC_USED)
            case GPT_MODULE_RTC:
                u32ReturnValue = Gpt_LL_Rtc_GetTimeElapsed(&(pChannelInfo->bChannelRollover),
                                                           &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_TSTMP_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                u32ReturnValue = Gpt_LL_Tstmp_GetTimeElapsed(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                    &(pChannelInfo->bChannelRollover),
                    &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_PTIMER_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                u32ReturnValue = Gpt_LL_Ptimer_GetTimeElapsed(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    &(pChannelInfo->bChannelRollover),
                    &(pChannelInfo->tTargetTime));
                break;
#endif
#if defined(GPT_EFTU_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                u32ReturnValue = Gpt_LL_EftuTom_GetTimeElapsed(
                    pChannelConfig->tGptChannelCommonConfig.eGptModule,
                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                    &(pChannelInfo->bChannelRollover),
                    &(pChannelInfo->tTargetTime));
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour*/
                break;
        }
    }
    return ((Gpt_ValueType)u32ReturnValue);
}

#if (GPT_FTU_GTB_SUPPORT == STD_ON)
/*
 * @brief Config the FTU GTB Function [SWDESG_GPT_067]
 *
 * @param u32Group  -- FTU GTB Group
 * @param benable -- enable/disable Ftu Gtb function.
 * */
GPT_TEXT_SECTION void Gpt_HW_ConfigGTB(const uint32 u32Group, boolean benable)
{
    FtuCommon_ConfigGTB(u32Group, benable);
}
#endif

/**
 * @brief Start timer [SWDESG_GPT_064]
 *
 * @param pChannelConfig Channel configuration pointer
 * @param u32Value Start timer value
 */
GPT_TEXT_SECTION void Gpt_HL_StartTimer(const Gpt_ConfigChannelType *pChannelConfig,
                                        Gpt_ValueType                u32Value)
{
    if (NULL_PTR != pChannelConfig)
    {
        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {
#if defined(GPT_FTU_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                Gpt_LL_Ftu_StartTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                      pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                      (uint32)u32Value);
                break;
#endif
#if defined(GPT_TPU_USED)
            case GPT_MODULE_TPU:
                Gpt_LL_Tpu_StartTimer(pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                      (uint32)u32Value);
                break;
#endif
#if defined(GPT_FCPIT_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                Gpt_LL_FCPit_StartTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                        pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                        (uint32)u32Value);
                break;
#endif
#if defined(GPT_AONTIMER_USED)
            case GPT_MODULE_AONTIMER:
                Gpt_LL_Aontimer_StartTimer((uint16)u32Value);
                break;
#endif
#if defined(GPT_RTC_USED)
            case GPT_MODULE_RTC:
                Gpt_LL_Rtc_StartTimer((uint32)u32Value);
                break;
#endif
#if defined(GPT_TSTMP_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                Gpt_LL_Tstmp_StartTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                        pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                        (uint32)u32Value);
                break;
#endif
#if defined(GPT_PTIMER_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                Gpt_LL_Ptimer_StartTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                         (uint32)u32Value);
                break;
#endif
#if defined(GPT_EFTU_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                Gpt_LL_EftuTom_StartTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                          pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                          (uint32)u32Value);
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour*/
                break;
        }
    }
}

/**
 * @brief Stop timer [SWDESG_GPT_066]
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_StopTimer(const Gpt_ConfigChannelType *pChannelConfig)
{
    if (NULL_PTR != pChannelConfig)
    {

        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {
#if defined(GPT_FTU_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                Gpt_LL_Ftu_StopTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                     pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_TPU_USED)
            case GPT_MODULE_TPU:
                Gpt_LL_Tpu_StopTimer(pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_FCPIT_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                Gpt_LL_FCPit_StopTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                       pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_AONTIMER_USED)
            case GPT_MODULE_AONTIMER:
                Gpt_LL_Aontimer_StopTimer();
                break;
#endif
#if defined(GPT_RTC_USED)
            case GPT_MODULE_RTC:
                Gpt_LL_Rtc_StopTimer();
                break;
#endif
#if defined(GPT_TSTMP_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                Gpt_LL_Tstmp_StopTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                       pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_PTIMER_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                Gpt_LL_Ptimer_StopTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule);
                break;
#endif
#if defined(GPT_EFTU_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                Gpt_LL_EftuTom_StopTimer(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                         pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour*/
                break;
        }
    }
}

/**
 * @brief Enable interrupt [SWDESG_GPT_059]
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_EnableInterrupt(const Gpt_ConfigChannelType *pChannelConfig)
{
    if (NULL_PTR != pChannelConfig)
    {
        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {
#if defined(GPT_FCPIT_ISR_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                Gpt_LL_FCPit_EnableInterrupt(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                             pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_AONTIMER_ISR_USED)
            case GPT_MODULE_AONTIMER:
                Gpt_LL_Aontimer_EnableInterrupt();
                break;
#endif
#if defined(GPT_RTC_ISR_USED)
            case GPT_MODULE_RTC:
                break;
#endif
#if defined(GPT_PTIMER_ISR_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                Gpt_LL_Ptimer_EnableInterrupt(pChannelConfig->tGptChannelCommonConfig.eGptModule);
                break;
#endif
#if defined(GPT_EFTU_ISR_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                Gpt_LL_EftuTom_EnableInterrupt(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                               pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_TSTMP_ISR_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                break;
#endif
#if defined(GPT_FTU_ISR_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                break;
#endif
#if defined(GPT_TPU_ISR_USED)
            case GPT_MODULE_TPU:
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour */
                break;
        }
    }
}

/**
 * @brief Disable interrupt [SWDESG_GPT_058]
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_DisableInterrupt(const Gpt_ConfigChannelType *pChannelConfig)
{
    if (NULL_PTR != pChannelConfig)
    {

        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {
#if defined(GPT_FCPIT_ISR_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                Gpt_LL_FCPIT_DisableInterrupt(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                              pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_AONTIMER_ISR_USED)
            case GPT_MODULE_AONTIMER:
                Gpt_LL_Aontimer_DisableInterrupt();
                break;
#endif
#if defined(GPT_RTC_ISR_USED)
            case GPT_MODULE_RTC:
                break;
#endif
#if defined(GPT_PTIMER_ISR_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                Gpt_LL_Ptimer_DisableInterrupt(pChannelConfig->tGptChannelCommonConfig.eGptModule);
                break;
#endif
#if defined(GPT_EFTU_ISR_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                Gpt_LL_EftuTom_DisableInterrupt(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                                pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_TSTMP_ISR_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                break;
#endif
#if defined(GPT_FTU_ISR_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                break;
#endif
#if defined(GPT_TPU_ISR_USED)
            case GPT_MODULE_TPU:
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour */
                break;
        }
    }
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initialization [SWDESG_GPT_057]
 *
 * @param pChannelConfig Channel configuration pointer
 */
GPT_TEXT_SECTION void Gpt_HL_DeInit(const Gpt_ConfigChannelType *pChannelConfig)
{
    if (NULL_PTR != pChannelConfig)
    {
        switch (pChannelConfig->tGptChannelCommonConfig.eGptModule)
        {

#if defined(GPT_FTU_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                Gpt_LL_Ftu_DeInit(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                  pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_TPU_USED)
            case GPT_MODULE_TPU:
                Gpt_LL_Tpu_DeInit(pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_FCPIT_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                Gpt_LL_FCPit_DeInit(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_AONTIMER_USED)
            case GPT_MODULE_AONTIMER:
                Gpt_LL_Aontimer_DeInit();
                break;
#endif
#if defined(GPT_RTC_USED)
            case GPT_MODULE_RTC:
                Gpt_LL_Rtc_DeInit();
                break;
#endif
#if defined(GPT_TSTMP_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                Gpt_LL_Tstmp_DeInit(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                    pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
#if defined(GPT_PTIMER_USED)
            case GPT_MODULE_PTIMER_0:
            case GPT_MODULE_PTIMER_1:
            case GPT_MODULE_PTIMER_2:
            case GPT_MODULE_PTIMER_3:
                Gpt_LL_Ptimer_DeInit(pChannelConfig->tGptChannelCommonConfig.eGptModule);
                break;
#endif
#if defined(GPT_EFTU_USED)
            case GPT_MODULE_EFTU_0_TOM_0:
            case GPT_MODULE_EFTU_0_TOM_1:
            case GPT_MODULE_EFTU_1_TOM_0:
            case GPT_MODULE_EFTU_1_TOM_1:
            case GPT_MODULE_EFTU_2_TOM_0:
            case GPT_MODULE_EFTU_2_TOM_1:
                Gpt_LL_EftuTom_DeInit(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                      pChannelConfig->tGptChannelCommonConfig.u8GptChannel);
                break;
#endif
            default:
                /*This switch branch is empty because it shall not be executed for normal behaviour */
                break;
        }
    }
}
#endif

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/**
 * @brief Change next timeout value [SWDESG_GPT_056]
 *
 * @param pChannelConfig Channel configuration pointer
 * @param u32Value Next timeout value
 * @return Std_ReturnType Function return type
 */
GPT_TEXT_SECTION Std_ReturnType Gpt_HL_ChangeNextTimeoutValue(
    const Gpt_ConfigChannelType *pChannelConfig,
    Gpt_ValueType                u32Value)
{
    Std_ReturnType u8ReturnValue = (Std_ReturnType)E_NOT_OK;

    if (pChannelConfig->tGptChannelCommonConfig.eGptModule < GPT_MODULE_TPU)
    {
        /* PRQA S 4442 ++
        4442:An expression of 'essentially unsigned' type (%1s) is being converted to enum type '%2s'
        on assignment. reason: The program will guarantee the legality of these type conversions.
        */
        Gpt_LL_Ftu_ChangeNextTimeoutValue(pChannelConfig->tGptChannelCommonConfig.eGptModule,
                                          pChannelConfig->tGptChannelCommonConfig.u8GptChannel,
                                          (uint32)u32Value);
        /* PRQA S 4442 -- */
        u8ReturnValue = (Std_ReturnType)E_OK;
    }

    return u8ReturnValue;
}

#endif /* GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON */

#if (GPT_GET_RTC_COUNTER_VALUE_API == STD_ON)
/**
 * @brief Get the RTC current Seconds register value
 *
 * @return Gpt_ValueType RTC counter value
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_HL_GetRtcCounterValue(void)
{
    uint32 u32ReturnValue = 0U;

    u32ReturnValue = Gpt_LL_Rtc_GetSecondsValue();

    return u32ReturnValue;
}
#endif /* GPT_GET_RTC_COUNTER_VALUE_API == STD_ON */

#if (GPT_RESET_RTC_COUNTER_API == STD_ON)
/**
 * @brief Reset the RTC Seconds register value
 *
 */
GPT_TEXT_SECTION void Gpt_HL_ResetRtcCounter(void)
{
    Gpt_LL_Rtc_ResetSeconds();
}
#endif /* GPT_RESET_RTC_COUNTER_API == STD_ON */

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Start predef timer [SWDESG_GPT_063]
 *
 * @param pConfigPtr Predef configuration pointer
 * @param u8CoreId the processor identification number
 */
GPT_TEXT_SECTION void Gpt_HL_StartPredefTimer(const Gpt_ConfigType *pConfigPtr, uint8 u8CoreId)
{
    Gpt_ChannelType                    u8Channel;
    const Gpt_ConfigPredefChannelType *pChannelConfig;

    for (u8Channel = 0U; u8Channel < GPT_HW_PREDEFTIMER_NUM; u8Channel++)
    {
        pChannelConfig =
            (const Gpt_ConfigPredefChannelType *)pConfigPtr->pGptChannelPredefConfig[u8Channel];
        if ((NULL_PTR != pChannelConfig) && (pChannelConfig->u8GptPredefChannelPartition == u8CoreId))
        {
            Gpt_Hw_u8PredefTimerInitState[u8Channel] = (uint8)1U;
            switch (pChannelConfig->eGptPredefModule)
            {
#if defined(GPT_FTU_USED)
                case GPT_MODULE_FTU_0:
                case GPT_MODULE_FTU_1:
                case GPT_MODULE_FTU_2:
                case GPT_MODULE_FTU_3:
                case GPT_MODULE_FTU_4:
                case GPT_MODULE_FTU_5:
                case GPT_MODULE_FTU_6:
                case GPT_MODULE_FTU_7:
                case GPT_MODULE_FTU_8:
                case GPT_MODULE_FTU_9:
                case GPT_MODULE_FTU_10:
                case GPT_MODULE_FTU_11:
                    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not
                       be cast to an inappropriate essential type. reason: The program will
                       guarantee the legality of these type conversions */
                    Gpt_LL_Ftu_StartPredefTimer(
                        pChannelConfig->eGptPredefModule,
                        pChannelConfig->bGptPredefDebugModeEnable,
                        (Gpt_FtuModuleClkSrcType)pChannelConfig->u8GptPredefClockSource,
                        (Gpt_FtuPrescalerType)pChannelConfig->u8GptPredefPrescaler);
                    /* PRQA S 4342 --*/
                    break;
#endif
#if defined(GPT_AONTIMER_USED)
                case GPT_MODULE_AONTIMER:
                    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not
                       be cast to an inappropriate essential type. reason: The program will
                       guarantee the legality of these type conversions */
                    Gpt_LL_Aontimer_StartPredefTimer(
                        (Gpt_AontimerClkSrcType)pChannelConfig->u8GptPredefClockSource,
                        (Gpt_AontimerPrescalerType)pChannelConfig->u8GptPredefPrescaler,
                        pChannelConfig->bGptPredefDebugModeEnable);
                    /* PRQA S 4342 --*/
                    break;
#endif
#if defined(GPT_FCPIT_USED)
                case GPT_MODULE_FCPIT_0:
                case GPT_MODULE_FCPIT_1:
                    Gpt_LL_FCPIT_StartPredefTimer(pChannelConfig->eGptPredefModule,
                                                  pChannelConfig->u8GptPredefChannel,
                                                  pChannelConfig->bGptPredefDebugModeEnable,
                                                  pChannelConfig->u32MaxValue);
                    break;
#endif
#if defined(GPT_TSTMP_USED)
                case GPT_MODULE_TSTMP_0:
                case GPT_MODULE_TSTMP_1:
                case GPT_MODULE_TSTMP_2:
                case GPT_MODULE_TSTMP_3:
                case GPT_MODULE_TSTMP_4:
                    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not
                       be cast to an inappropriate essential type. reason: The program will
                       guarantee the legality of these type conversions */
                    Gpt_LL_Tstmp_StartPredefTimer((Gpt_PredefTimerType)u8Channel,
                                                  pChannelConfig->eGptPredefModule);
                    /* PRQA S 4342 --*/
                    break;
#endif
                default:
                    /*This switch branch is empty because it shall not be executed for normal behaviour*/
                    break;
            }
        }
    }
}

/**
 * @brief Get predef timer value [SWDESG_GPT_060]
 *
 * @param ePredefTimer The selected PredefTimer type
 * @param pChannelConfig Predef timer configuration pointer
 * @param u32TimeValuePtr Timer value pointer
 * @return Std_ReturnType API status return type
 */
GPT_TEXT_SECTION Std_ReturnType Gpt_HL_GetPredefTimerValue(
    Gpt_PredefTimerType                ePredefTimer,
    const Gpt_ConfigPredefChannelType *pChannelConfig,
    uint32                            *u32TimeValuePtr)
{
    Std_ReturnType returnValue = (Std_ReturnType)E_OK;
    if (Gpt_Hw_u8PredefTimerInitState[ePredefTimer] == (uint8)1U)
    {
        switch (pChannelConfig->eGptPredefModule)
        {
#if defined(GPT_FTU_USED)
            case GPT_MODULE_FTU_0:
            case GPT_MODULE_FTU_1:
            case GPT_MODULE_FTU_2:
            case GPT_MODULE_FTU_3:
            case GPT_MODULE_FTU_4:
            case GPT_MODULE_FTU_5:
            case GPT_MODULE_FTU_6:
            case GPT_MODULE_FTU_7:
            case GPT_MODULE_FTU_8:
            case GPT_MODULE_FTU_9:
            case GPT_MODULE_FTU_10:
            case GPT_MODULE_FTU_11:
                *u32TimeValuePtr = Gpt_LL_Ftu_GetPredefTimerValue(pChannelConfig->eGptPredefModule);
                break;
#endif
#if defined(GPT_AONTIMER_USED)
            case GPT_MODULE_AONTIMER:
                *u32TimeValuePtr = Gpt_LL_Aontimer_GetPredefTimerValue();
                break;
#endif
#if defined(GPT_FCPIT_USED)
            case GPT_MODULE_FCPIT_0:
            case GPT_MODULE_FCPIT_1:
                *u32TimeValuePtr = Gpt_LL_FCPIT_GetPredefTimerValue(pChannelConfig->eGptPredefModule,
                                                                    pChannelConfig->u8GptPredefChannel,
                                                                    pChannelConfig->u32MaxValue);
                break;
#endif
#if defined(GPT_TSTMP_USED)
            case GPT_MODULE_TSTMP_0:
            case GPT_MODULE_TSTMP_1:
            case GPT_MODULE_TSTMP_2:
            case GPT_MODULE_TSTMP_3:
            case GPT_MODULE_TSTMP_4:
                *u32TimeValuePtr = Gpt_LL_Tstmp_GetPredefTimerValue(ePredefTimer,
                                                                    pChannelConfig->eGptPredefModule,
                                                                    pChannelConfig->u32MaxValue);
                break;
#endif
            default:
                returnValue = (Std_ReturnType)E_NOT_OK;
                /* This switch branch shall not be executed for normal behaviour */
                break;
        }
    }
    else
    {
        returnValue      = (Std_ReturnType)E_NOT_OK;
        *u32TimeValuePtr = (uint32)0U;
    }
    return returnValue;
}

/**
 * @brief Stop predef timer [SWDESG_GPT_065]
 *
 * @param pConfigPtr GPT configuration pointer
 * @param u8CoreId the processor identification number
 */
GPT_TEXT_SECTION void Gpt_HL_StopPredefTimer(const Gpt_ConfigType *pConfigPtr, uint8 u8CoreId)
{
    Gpt_ChannelType                    u8Channel;
    const Gpt_ConfigPredefChannelType *pChannelConfig;

    for (u8Channel = 0U; u8Channel < GPT_HW_PREDEFTIMER_NUM; u8Channel++)
    {
        pChannelConfig =
            (const Gpt_ConfigPredefChannelType *)pConfigPtr->pGptChannelPredefConfig[u8Channel];
        if ((NULL_PTR != pChannelConfig) && (pChannelConfig->u8GptPredefChannelPartition == u8CoreId))
        {
            Gpt_Hw_u8PredefTimerInitState[u8Channel] = 0U;
            switch (pChannelConfig->eGptPredefModule)
            {
#if defined(GPT_FTU_USED)
                case GPT_MODULE_FTU_0:
                case GPT_MODULE_FTU_1:
                case GPT_MODULE_FTU_2:
                case GPT_MODULE_FTU_3:
                case GPT_MODULE_FTU_4:
                case GPT_MODULE_FTU_5:
                case GPT_MODULE_FTU_6:
                case GPT_MODULE_FTU_7:
                case GPT_MODULE_FTU_8:
                case GPT_MODULE_FTU_9:
                case GPT_MODULE_FTU_10:
                case GPT_MODULE_FTU_11:
                    break;
#endif
#if defined(GPT_AONTIMER_USED)
                case GPT_MODULE_AONTIMER:
                    Gpt_LL_Aontimer_StopPredefTimer();
                    break;
#endif
#if defined(GPT_FCPIT_USED)
                case GPT_MODULE_FCPIT_0:
                case GPT_MODULE_FCPIT_1:
                    Gpt_LL_FCPIT_StopPredefTimer(pChannelConfig->eGptPredefModule,
                                                 pChannelConfig->u8GptPredefChannel);
                    break;
#endif
#if defined(GPT_TSTMP_USED)
                case GPT_MODULE_TSTMP_0:
                case GPT_MODULE_TSTMP_1:
                case GPT_MODULE_TSTMP_2:
                case GPT_MODULE_TSTMP_3:
                case GPT_MODULE_TSTMP_4:
                    break;
#endif
                default:
                    /*This switch branch is empty because it shall not be executed for normal behavior*/
                    break;
            }
        }
    }
}

#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
