/**
 *   @file    Ocu_Eftu_Tom.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - EFTU driver header file.
 *   @details EFTU header file, containing the variables and functions that are exported by the
 *            EFTU driver.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : EFTU
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
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
*   1.4.1       09/12/2025    QXW0099       N/A          Change to SOMC mode
==================================================================================================*/

#ifndef OCU_EFTU_TOM_H
#define OCU_EFTU_TOM_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ocu_Eftu_Tom_Types.h"
#include "Ocu_Types.h"
#include "Ocu_Hw_Types.h"
#if (OCU_EFTU_HW_CHANNEL_MAX > 0)
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if defined(OCU_EFTU0_TOM_0_7_ISR_USED) || defined(OCU_EFTU0_TOM_8_15_ISR_USED) || \
    defined(OCU_EFTU1_TOM_0_7_ISR_USED) || defined(OCU_EFTU1_TOM_8_15_ISR_USED) || \
    defined(OCU_EFTU2_TOM_0_7_ISR_USED) || defined(OCU_EFTU2_TOM_8_15_ISR_USED)
#define OCU_EFTU_TOM_ISR_USED
#endif
/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

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
                                        uint8                          u8ChannelIdx);

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a Eftu Module
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 * @param u8ChannelIdx                -Ocu channel Idx used to store parameter
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_DeInit(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                          uint8                        u8ChannelIdx);
#endif

/**
 * @brief Start Eftu timer channel.
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_StartChannel(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                                uint8                        u8ChannelIdx);

/**
 * @brief Stop Eftu timer channel.
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_StopChannel(const Ocu_ChannelConfigType *pEftuChannelConfig);

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Ocu driver function for setting the Pin State for the current Eftu channel
 *
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 * @param ePinState                   -State of pin
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetPinState(const Ocu_ChannelConfigType *pEftuChannelConfig,
                                               Ocu_PinStateType             ePinState);
#endif

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
                                                Ocu_PinActionType            ePinAction);
#endif

#if (OCU_GET_COUNTER_API == STD_ON)
/**
* @brief Ocu driver function reads and sends back the counter value of the selected channel.
*
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure

* @return u32ReturnValue              -The current value of CNT register
*/
OCU_TEXT_SECTION uint32 Ocu_Eftu_Tom_GetCounter(const Ocu_ChannelConfigType *pEftuChannelConfig);
#endif

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief This function sets the comparison threshold of the selected channel using an absolute
 * input data
 *
 * @param SetThreshold                -Struct contains u8ChannelNumber, ReferenceValue,
 * AbsoluteValue and Ocu_ReturnType
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetAbsoluteThreshold(
    Ocu_SetThresholdType        *SetThreshold,
    const Ocu_ChannelConfigType *pEftuChannelConfig);
#endif

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief The function sets the value of the channel threshold relative to the current value of the
 * counter.
 *
 * @param SetThreshold                -Struct contains u8ChannelNumber, ReferenceValue,
 * AbsoluteValue and Ocu_ReturnType
 * @param pEftuChannelConfig          -Pointer to Eftu channel configuration structure
 */
OCU_TEXT_SECTION void Ocu_Eftu_Tom_SetRelativeThreshold(
    Ocu_SetThresholdType        *SetThreshold,
    const Ocu_ChannelConfigType *pEftuChannelConfig);
#endif

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief Ocu_Eftu_GetMaxCountValue
 *
 * @param u8ChannelIdx                -Ocu channel Idx used to store parameter
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Eftu_Tom_GetMaxCountValue(
    const Ocu_ChannelConfigType *pEftuChannelConfig);
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#endif /* #if (OCU_EFTU_HW_CHANNEL_MAX > 0) */

#ifdef __cplusplus
}
#endif

#endif /*OCU_EFTU_TOM_H*/

/** @} */
