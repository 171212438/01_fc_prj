/**
*   @file    Ocu_Tpu.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ocu - TPU driver header file.
*   @details TPU header file, containing the variables and functions that are exported by the
*            TPU driver.
*
*   @addtogroup Ocu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : TPU
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

#ifndef OCU_TPU_H
#define OCU_TPU_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ocu_Tpu_Types.h"
#include "Ocu_Types.h"
#include "Ocu_Hw_Types.h"
#if (OCU_HAVE_TPU == STD_ON)
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if defined(OCU_TPU_0_7_ISR_USED) || defined(OCU_TPU_8_15_ISR_USED) || \
    defined(OCU_TPU_16_23_ISR_USED) || defined(OCU_TPU_24_31_ISR) 
#define OCU_TPU_ISR_USED
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
 * @brief Initialize TPU Modules and channels.
 * 
 * @param pTpuModuleConfig   -Pointer to TPU module configuration structure
 */
OCU_TEXT_SECTION void Ocu_Tpu_ModuleInit(const Ocu_Tpu_ModuleConfigType *pTpuModuleConfig);

/**
 * @brief Initialize Tpu Modules and channels.
 * 
 * @param pTpuChannelConfig          -Pointer to Tpu channel configuration structures
 */
OCU_TEXT_SECTION void Ocu_Tpu_ChannelInit(const Ocu_ChannelConfigType *pTpuChannelConfig);

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a TPU Module
 * 
 * @param u8HwModuleId               -Input TPU module number
 */
OCU_TEXT_SECTION void Ocu_Tpu_DeInit(const uint8 u8HwModuleId);
#endif

/**
 * @brief Start TPU timer channel.
 *
 * @param u8ChannelIdx  -TPU channel Id
 * @param u8HwModule    -TPU module hardware number
 * @param u8HwChannel   -TPU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel);

/**
 * @brief Stop TPU timer channel.
 *
 * @param u8HwModule    -TPU module hardware number
 * @param u8HwChannel   -TPU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel);

#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief Ocu driver function reads and sends back the counter value of the selected channel.
 *
 * @param  u8HwModule     -TPU module hardware number
 * @return                -The current value of CNT register
 */
OCU_TEXT_SECTION uint32 Ocu_Tpu_GetCounter(uint8 u8HwModule);
#endif

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief This function changes the output pin behaviour of the selected channel to the one specified
 * for next comparison match
 * 
 * @param ePinAction          -OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE
 * @param u8HwModule          -Tpu module hardware number
 * @param u8HwChannel         -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetPinAction(Ocu_PinActionType ePinAction, 
                                           uint8             u8HwModule, 
                                           uint8             u8HwChannel);
#endif

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Ocu driver function for setting the Pin State for the current Tpu channel
 * 
 * @param u8HwModule    -TPU module hardware number
 * @param u8HwChannel   -TPU channel hardware number
 * @param ePinState     -State of pin
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetPinState(uint8            u8HwModule,
                                          uint8            u8HwChannel,
                                          Ocu_PinStateType ePinState);
#endif

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief This function sets the comparison threshold of the selected channel using an absolute input
 * data
 *
 * @param SetThreshold      -Struct contains u8ChannelNumber, ReferenceValue, AbsoluteValue and
 * Ocu_ReturnType
 * @param u8ModuleId       -Tpu module hardware number
 * @param u8ChannelId      -Tpu channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Tpu_SetAbsoluteThreshold(Ocu_SetThresholdType *SetThreshold, 
                                                   uint8                 u8ModuleId, 
                                                   uint8                 u8ChannelId);
#endif

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
                                                   uint8                 u8ChannelId);
#endif

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief Ocu_Tpu_GetMaxCountValue
 *
 * @param u8HwModule             -Index of channel in (*pChannelsConfig)[]
 * @return Ocu_ValueType         -Max counter value for given channel
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Tpu_GetMaxCountValue(uint8 u8HwModule);
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#endif

#ifdef __cplusplus
}
#endif

#endif /* OCU_TPU_H */

/** @} */
