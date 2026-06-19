/**
*   @file    Ocu_Ftu.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ocu - FTU driver header file.
*   @details FTU header file, containing the variables and functions that are exported by the
*            FTU driver.
*
*   @addtogroup Ocu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add 
                                                         Tpu support(only available on FC7240)
==================================================================================================*/

#ifndef OCU_FTU_H
#define OCU_FTU_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ocu_Ftu_Types.h"
#include "Ocu_Types.h"
#include "Ocu_Hw_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if defined(OCU_FTU_0_ISR_USED) || defined(OCU_FTU_1_ISR_USED) || defined(OCU_FTU_2_ISR_USED) || \
     defined(OCU_FTU_3_ISR_USED) || defined(OCU_FTU_4_ISR_USED) || defined(OCU_FTU_5_ISR_USED) || \
     defined(OCU_FTU_6_ISR_USED) || defined(OCU_FTU_7_ISR_USED) || defined(OCU_FTU_8_ISR_USED) || \
     defined(OCU_FTU_9_ISR_USED) || defined(OCU_FTU_10_ISR_USED) || defined(OCU_FTU_11_ISR_USED)
#define OCU_FTU_ISR_USED
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
 * @brief Initialize FTU Modules and channels.
 * 
 * @param pFtuChannelConfig          -Pointer to FTU channel configuration structure
 * @param pFtuModuleConfig           -Pointer to FTU module configuration structure
 * @param u8Channel                  -Input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_Ftu_Init(const Ocu_ChannelConfigType     *pFtuChannelConfig,
                                   const Ocu_Ftu_ModuleConfigType  *pFtuModuleConfig,
                                   const uint8                      u8Channel);

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a FTU Module
 * 
 * @param pFtuChannelConfig          -Pointer to FTU channel configuration structure
 * @param Ocu_Ftu_ModuleConfigType   -Pointer to FTU module configuration structure
 * @param u8Channel                  -Input OCU channel number
 */
OCU_TEXT_SECTION void Ocu_Ftu_DeInit(const uint8 u8HwChannel,
                                     const uint8 u8HwModuleId,
                                     const uint8 u8Channel);
#endif

/**
 * @brief Start FTU timer channel.
 *
 * @param u8ChannelIdx  -FTU channel Id
 * @param u8HwModule    -FTU module hardware number
 * @param u8HwChannel   -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_StartChannel(uint8 u8ChannelIdx, uint8 u8HwModule, uint8 u8HwChannel);

/**
 * @brief Stop FTU timer channel.
 *
 * @param u8HwModule    -FTU module hardware number
 * @param u8HwChannel   -FTU channel hardware number
 */
OCU_TEXT_SECTION void Ocu_Ftu_StopChannel(uint8 u8HwModule, uint8 u8HwChannel);

#if (OCU_GET_COUNTER_API == STD_ON)
/**
* @brief Ocu driver function reads and sends back the counter value of the selected channel.
*
* @param  u8HwModule     -FTU module hardware number
* @return u32ReturnValue -The current value of CNT register
*/
OCU_TEXT_SECTION uint32 Ocu_Ftu_GetCounter(uint8 u8HwModule);
#endif

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief This function changes the output pin behaviour of the selected channel to the one
 * specified for next comparison match
 * 
 * @param u8ChannelIndex      -Index for Ftu channels
 * @param ePinAction          -OCU_SET_LOW, OCU_SET_HIGH, OCU_TOGGLE, OCU_DISABLE
 * @param u8ModuleId          -FTU module hardware number
 * @param u8ChannelId         -FTU channel hardware number
*/
OCU_TEXT_SECTION void Ocu_Ftu_SetPinAction(const uint8       u8ChannelIndex,
                                           Ocu_PinActionType ePinAction,
                                           uint8             u8ModuleId,
                                           uint8             u8ChannelId);
#endif

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Ocu driver function for setting the Pin State for the current Ftu channel
 * 
 * @param u8HwModule    -FTU module hardware number
 * @param u8HwChannel   -FTU channel hardware number
 * @param ePinState     -State of pin
*/
OCU_TEXT_SECTION void Ocu_Ftu_SetPinState(uint8            u8HwModule,
                                          uint8            u8HwChannel,
                                          Ocu_PinStateType ePinState);
#endif

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
* @brief This function sets the comparison threshold of the selected channel using an absolute
* input data
*
* @param SetThreshold      -Struct contains u8ChannelNumber, ReferenceValue, AbsoluteValue and
* Ocu_ReturnType
 * @param u8ModuleId       -FTU module hardware number
 * @param u8ChannelId      -FTU channel hardware number
*/
OCU_TEXT_SECTION void Ocu_Ftu_SetAbsoluteThreshold(Ocu_SetThresholdType *SetThreshold,
                                                    uint8                u8ModuleId,
                                                    uint8                u8ChannelId);
#endif

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
* @brief The function sets the value of the channel threshold relative to the current value of the
* counter.
*
* @param SetThreshold      -Struct contains u8ChannelNumber, ReferenceValue, AbsoluteValue and
* Ocu_ReturnType
 * @param u8ModuleId       -FTU module hardware number
 * @param u8ChannelId      -FTU channel hardware number
*/
OCU_TEXT_SECTION void Ocu_Ftu_SetRelativeThreshold(Ocu_SetThresholdType *SetThreshold,
                                                   uint8                 u8ModuleId,
                                                   uint8                 u8ChannelId);
#endif

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
* @brief Ocu_Ftu_GetMaxCountValue
*
* @param u8IdxChannelConfig     -Index of channel in (*pChannelsConfig)[]
* @return Ocu_ValueType         -Max counter value for given channel
*/
OCU_TEXT_SECTION Ocu_ValueType Ocu_Ftu_GetMaxCountValue(Ocu_ChannelType u8IdxChannelConfig);
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*OCU_FTU_H*/

/** @} */
