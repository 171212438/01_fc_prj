/**
 *   @file    Icu_Port.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - PORT driver header file.
 *   @details PORT header file, containing the variables and functions that are exported by the
 *            PORT driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : PORT
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/

#ifndef ICU_PORT_HEARD_H
#define ICU_PORT_HEARD_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Port_Types.h"

/**
 * @brief Interrupt process of a PORT channel
 *
 */
#define Icu_HW_PortChannelIntrProcess(ePortInstance, u8Index)                                  \
    Icu_ChannelInterruptCallback(                                                              \
        (Icu_HwChannelType)((uint32)ICU_HW_PORT_CH_START +                                     \
                            ((uint32)(ePortInstance) * (uint32)ICU_PORT_CHANNELS_PER_MODULE) + \
                            (uint32)(u8Index)),                                                \
        (0u),                                                                                  \
        (ICU_INPUT_LOW))
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Init a PORT module of ICU
 *
 * @param ePortInstance     -Port instance
 */
ICU_TEXT_SECTION void Icu_Port_Init(const Icu_PortInstanceType ePortInstance);
#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief Deinit a port module of Icu
 *
 * @param ePortInstance     -Port instance
 */
ICU_TEXT_SECTION void Icu_Port_DeInit(const Icu_PortInstanceType ePortInstance);
#endif
/**
 * @brief Init a port channel of Icu
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 */
ICU_TEXT_SECTION void Icu_Port_ChannelInit(const Icu_PortInstanceType ePortInstance,
                                           const uint8                u8Channel);
/**
 * @brief Start a port channel of Icu
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 * @param eIntConfig        -Pin IRQC configuration value
 */
ICU_TEXT_SECTION void Icu_Port_ChannelStart(const Icu_PortInstanceType  ePortInstance,
                                            const uint8                 u8Channel,
                                            const Icu_PortIntConfigType eIntConfig);
/**
 * @brief Stop a port channel of Icu
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 */
ICU_TEXT_SECTION void Icu_Port_ChannelStop(const Icu_PortInstanceType ePortInstance,
                                           const uint8                u8Channel);
/**
 * @brief Set activation edge of a port channel
 *
 * @param ePortInstance         -Port instance
 * @param u8Channel             -Pin number
 * @param eActivationEdge       -Pin IRQC configuration value
 */
ICU_TEXT_SECTION void Icu_Port_SetActivationCondition(const Icu_PortInstanceType  ePortInstance,
                                                      const uint8                 u8Channel,
                                                      const Icu_PortIntConfigType eActivationEdge);

#if (ICU_SET_MODE_API == STD_ON)

/**
 * @brief Set Pin to Sleep Mode
 *
 * @param ePortInstance     -Port instance
 * @param u8Channel         -Pin number
 */
ICU_TEXT_SECTION void Icu_Port_SetSleepMode(const Icu_PortInstanceType ePortInstance,
                                            const uint8                u8Channel);
#endif
#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the port channel
 *
 * @param ePortInstance         -Port instance
 * @param u8Channel             -Pin number
 * @return                      state of the channel
 */
ICU_TEXT_SECTION boolean Icu_Port_GetInputState(const Icu_PortInstanceType ePortInstance,
                                                const uint8                u8Channel);
#endif
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief This function returns the input level of the port channel
 *
 * @param ePortInstance         -Port instance
 * @param u8Channel             -Pin number
 * @return                      input level of the channel
 */
ICU_TEXT_SECTION boolean Icu_Port_GetInputLevel(const Icu_PortInstanceType ePortInstance,
                                                const uint8                u8Channel);
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif /*ICU_PORT_H*/
/** @} */
