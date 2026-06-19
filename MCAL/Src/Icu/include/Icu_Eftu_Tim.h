/**
 *   @file    Icu_Eftu_Tim.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - Eftu_Tim driver header file.
 *   @details Eftu_Tim header file, containing the variables and functions that are exported by the
 *           EFTU driver.
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
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.0.0       19/11/2024    QXW0076       N/A          Eftu_Tim Initial Version
==================================================================================================*/
#ifndef ICU_EFTU_TIM_H
#define ICU_EFTU_TIM_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Eftu_Tim_Types.h"

#if (ICU_SUPPORT_EFTU == STD_ON)

/**
 * @brief Interrupt process of a EFTU_Tim channel
 */
#define Icu_HW_EFtuTimChannelIntrProcess(eEftuInstance, u8Index, u32ChannelValue)                   \
    Icu_ChannelInterruptCallback(                                                                   \
        (Icu_HwChannelType)(((uint32)(u8Index) +                                                    \
                             ((uint32)(eEftuInstance) * (uint32)ICU_EFTU_TIM_CHANNELS_PER_MODULE) + \
                             (uint32)ICU_HW_EFTU_CH_START)),                                        \
        (u32ChannelValue),                                                                          \
        (ICU_INPUT_LOW))

#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Initialize the hardware channel
 * @param eEftuInstance Eftu Instance
 * @param pConfig  Pointer to the configuration structure
 *
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_InitHwChannel(const ICU_EftuInstanceType          eEftuInstance,
                                                 const Icu_EftuTimChannelConfigType *pConfig);

/**
 * @brief De-Initialize the hardware channel
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_DeinitHwChannel(const ICU_EftuInstanceType eEftuInstance,
                                                   const uint8                u8TimChannel);

/**
 * @brief  Configure the channel to sleep mode
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_SetSleepMode(const ICU_EftuInstanceType eEftuInstance,
                                                const uint8                u8TimChannel);

/**
 * @brief  Configure the channel to normal mode
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_SetNormalMode(const ICU_EftuInstanceType eEftuInstance,
                                                 const uint8                u8TimChannel);

/**
 * @brief  Configure the channel activated edge
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @param eTimActiveEdge  Tim active edge
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_SetActivationCondition(
    const ICU_EftuInstanceType      eEftuInstance,
    const uint8                     u8TimChannel,
    const ICU_EftuTimActiveEdgeType eTimActiveEdge);

/**
 * @brief  Get the channel Input state
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 */
ICU_TEXT_SECTION boolean Icu_Eftu_Tim_GetInputState(const ICU_EftuInstanceType eEftuInstance,
                                                    const uint8                u8TimChannel);

/**
 * @brief  Get the channel Input state from hardware directly.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 */
ICU_TEXT_SECTION boolean Icu_Eftu_Tim_GetInputHwState(const ICU_EftuInstanceType eEftuInstance,
                                                      const uint8                u8TimChannel);

/**
 * @brief  Configure the channel Tiem mode and start the channel.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @param eTimActiveEdge  Tim active edge
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_StartChannelTiemMode(
    const ICU_EftuInstanceType      eEftuInstance,
    const uint8                     u8TimChannel,
    const ICU_EftuTimActiveEdgeType eTimActiveEdge);

/**
 * @brief  Configure the channel Tpwm mode and start the channel.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @param eTimActiveEdge  Tim active edge
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_StartChannelTpwmMode(
    const ICU_EftuInstanceType      eEftuInstance,
    const uint8                     u8TimChannel,
    const ICU_EftuTimActiveEdgeType eTimActiveEdge);

/**
 * @brief  Stop the channel function.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 */
ICU_TEXT_SECTION void Icu_Eftu_Tim_StopChannel(const ICU_EftuInstanceType eEftuInstance,
                                               const uint8                u8TimChannel);

/**
 * @brief  Get the channel input level.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @return  The input level
 */
ICU_TEXT_SECTION Icu_EftuTimInputLevelType Icu_Eftu_Tim_GetInputLevel(
    const ICU_EftuInstanceType eEftuInstance,
    const uint8                u8TimChannel);

/**
 * @brief  Get the channel time measurement result directly.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @return  The measurement result
 */
ICU_TEXT_SECTION uint32 Icu_Eftu_Tim_HwGetTimeElapsed(const ICU_EftuInstanceType eEftuInstance,
                                                      const uint8                u8TimChannel);

/**
 * @brief  Get the channel period measurement result Period directly.
 * @param eEftuInstance Eftu Instance
 * @param u8TimChannel  Tim channel index
 * @return  The measurement result
 */
ICU_TEXT_SECTION uint32 Icu_Eftu_Tim_HwGetPeriodElapsed(const ICU_EftuInstanceType eEftuInstance,
                                                        const uint8                u8TimChannel);

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#endif /* ICU_SUPPORT_EFTU */

#ifdef __cplusplus
}
#endif
#endif /* ICU_EFTU_TIM_H */
/** @} */
