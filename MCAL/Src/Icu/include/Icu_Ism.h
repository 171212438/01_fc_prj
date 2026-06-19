
/**
 *   @file    Icu_Ism.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ISM driver source file.
 *   @details ISM source file, containing the variables and functions that are exported by the
 *            ISM driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ISM
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
*   0.6.0       15/04/2023    QXW0076      N/A          Initial Version
==================================================================================================*/

#ifndef ICU_ISM_H
#define ICU_ISM_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "Icu_Hw.h"
#include "Icu_Ism_Types.h"

#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
/**
 * @brief Enable the Ism module.
 */
ICU_TEXT_SECTION void Icu_Ism_Enable(void);

/**
 * @brief Disable the Ism module.
 */
ICU_TEXT_SECTION void Icu_Ism_Disable(void);

/**
 * @brief Initialize an Ism hardware channel
 *
 * @param pConfig        -The  channel configuration.
 */
ICU_TEXT_SECTION void Icu_Ism_InitHwChannel(const Icu_IsmChannelConfigType *pConfig);

/**
 * @brief Deinitialize an Ism hardware channel.
 *
 * @param pConfig        -The Ism channel configuration.
 */
ICU_TEXT_SECTION void Icu_Ism_DeInitHwChannel(const Icu_IsmChannelConfigType *pConfig);

/**
 * @brief start Lam hardware channel.
 * @param u8Lamchannel          -The Lam channel index
 * @param eWindowEventType        -The Lam channel event type.
 */
ICU_TEXT_SECTION void Icu_Ism_StartLamChannel(uint8                           u8Lamchannel,
                                              ICU_ISM_LAM_EventWindowEdgeType eWindowEventType);

/**
 * @brief stop an Lam hardware channel.
 * @param u8Lamchannel          - The Lam channel index
 */
ICU_TEXT_SECTION void Icu_Ism_StopLamChannel(uint8 u8Lamchannel);

/**
 * @brief Get the time value of the Lam channel.
 * @param u8Lamchannel          - The Lam channel index
 * @return                      - The Lam channel value
 */
ICU_TEXT_SECTION uint32 Icu_Ism_GetTimeElapsed(uint8 u8Lamchannel);

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the Ism channel
 *
 * @param eIsmInstance      -Ism instance Id
 * @param u8Channel         -Ism channel index
 * @return                  state of the channel
 */
ICU_TEXT_SECTION boolean Icu_Ism_GetInputHwState(const Icu_IsmInstanceType eIsmInstance,
                                                 const uint8               u8Channel);
#endif
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif /*ICU_ISM_H*/
/** @} */
