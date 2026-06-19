
/**
 *   @file    Icu_Fcpit.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - Fcpit driver source file.
 *   @details Fcpit source file, containing the variables and functions that are exported by the
 *            Fcpit driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fcpit
*   PLATFORM             : Flagchip FC4150
*   AUTOSAR VERSION      : 4.3.1
*   AUTOSAR REVISION     : ASR_REL_4_3_1
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
*   0.1.0       09/05/2023    QXW0076      N/A          Initial Version
*   1.3.0       27/06/2024    QXW0076       N/A          Safety version
==================================================================================================*/

#ifndef ICU_FCPIT_H
#define ICU_FCPIT_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Fcpit_Types.h"

/**
 * @brief Interrupt process of a FCPIT channel
 */

#define Icu_HW_FcpitChannelIntrProcess(eFcpitInstance, u8Index, u32ChannelValue)                  \
    Icu_ChannelInterruptCallback(                                                                 \
        (Icu_HwChannelType)(((uint32)(u8Index) +                                                  \
                             ((uint32)(eFcpitInstance) * (uint32)ICU_FCPIT_CHANNELS_PER_MODULE) + \
                             (uint32)ICU_HW_FCPIT_CH_START)),                                     \
        (u32ChannelValue),                                                                        \
        (ICU_INPUT_LOW))
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Initialize a FCPIT module
 *
 * @param pConfig   -Pointer to FCPIT module configuration structure
 */
ICU_TEXT_SECTION void Icu_Fcpit_Init(const Icu_FcpitModuleConfigType *pConfig);

/**
 * @brief DeInitialize a FCPIT module
 *
 * @param pConfig   -Pointer to FCPIT module configuration structure
 */
ICU_TEXT_SECTION void Icu_Fcpit_DeInit(const Icu_FcpitModuleConfigType *pConfig);

/**
 * @brief Initialize an Fcpit hardware channel
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param pConfig        -The channel configuration
 */
ICU_TEXT_SECTION void Icu_Fcpit_InitHwChannel(const Icu_FcpitInstanceType       eFcpitInstance,
                                              const Icu_FcpitChannelConfigType *pConfig);

/**
 * @brief start a Fcpit hardware channel.
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 */
ICU_TEXT_SECTION void Icu_Fcpit_StartFcpitChannel(const Icu_FcpitInstanceType eFcpitInstance,
                                                  const uint8                 u8Fcpitchannel);

/**
 * @brief stop a Fcpit hardware channel.
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 */
ICU_TEXT_SECTION void Icu_Fcpit_StopFcpitChannel(const Icu_FcpitInstanceType eFcpitInstance,
                                                 const uint8                 u8Fcpitchannel);

/**
 * @brief Set a Fcpit hardware channel to normal mode.
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 */
ICU_TEXT_SECTION void Icu_Fcpit_SetNormalMode(const Icu_FcpitInstanceType eFcpitInstance,
                                              const uint8                 u8Fcpitchannel);

/**
 * @brief Set a Fcpit hardware channel to sleep mode .
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 */
ICU_TEXT_SECTION void Icu_Fcpit_SetSleepMode(const Icu_FcpitInstanceType eFcpitInstance,
                                             const uint8                 u8Fcpitchannel);

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif /*ICU_FCPIT_H*/
/** @} */
