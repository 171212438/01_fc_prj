/**
*   @file    Ocu_Hw.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ocu - Ocu driver HW header file.
*   @details OCU driver header file, containing the Hw functions that are used by
*            the OCU driver.
*
*   @addtogroup Ocu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU, TPU, EFTU
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
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/

#ifndef OCU_HW_H
#define OCU_HW_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*         INCLUDE FILES
==================================================================================================*/
#include "Ocu_Hw_Types.h"

/*==================================================================================================
*                                         CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                          ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                               GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                   FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"
/**
 * @brief Initialize OCU hardware modules and channles
 * 
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_Init(const Ocu_ConfigType * pOcuConfig, const uint8 u8Channel);

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize a hardware OCU channel
 * 
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_DeInit(const Ocu_ConfigType * pOcuConfig, const uint8 u8Channel);
#endif /* OCU_DEINIT_API */

/**
 * @brief Hardware level start an OCU channel.
 *
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_StartChannel(const Ocu_ConfigType *pOcuConfig,
                                          Ocu_ChannelType       u8Channel);    

/**
 * @brief Hardware level stop an OCU channel.
 * 
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 */
OCU_TEXT_SECTION void Ocu_Hw_StopChannel(const Ocu_ConfigType *pOcuConfig,
                                         Ocu_ChannelType       u8Channel);    

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Hardware level set Pin state
 * 
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 * @param ePinState  -Expected Pin State for the given channel
 */
OCU_TEXT_SECTION void Ocu_Hw_SetPinState(const Ocu_ConfigType *pOcuConfig,
                                         Ocu_ChannelType       u8Channel,
                                         Ocu_PinStateType      ePinState);
#endif /* OCU_SET_PIN_STATE_API */

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief Hardware level set Pin action
 * 
 * @param pOcuConfig -Pointer to module configuration structure
 * @param u8Channel  -Ocu channel id in top configuration structure
 * @param ePinAction -Expected Pin Action for the given channel
 */
OCU_TEXT_SECTION void Ocu_Hw_SetPinAction(const Ocu_ConfigType *pOcuConfig,
                                          Ocu_ChannelType       u8Channel, 
                                          Ocu_PinActionType     ePinAction);
#endif /* OCU_SET_PIN_ACTION_API */

#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief Hardware level get timer counter value
 * 
 * @param pOcuConfig     -Pointer to module configuration structure
 * @param u8Channel      -Ocu channel id in top configuration structure
 * @return Ocu_ValueType -Counter value
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Hw_GetCounter(const Ocu_ConfigType *pOcuConfig,
                                                 Ocu_ChannelType       u8Channel);
#endif /* OCU_GET_COUNTER_API */

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief Hardware level set absolute threshold
 * 
 * @param pOcuConfig      -Pointer to module configuration structure
 * @param u8Channel Ocu   -channel id in top configuration structure
 * @param ReferenceValue  -Reference value for the counting interval
 * @param AbsoluteValue   -Absolute value for the counting interval
 * @return Ocu_ReturnType -Whether a comparison match occurred during the current reference interval
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_Hw_SetAbsoluteThreshold(const Ocu_ConfigType *pOcuConfig,
                                                            Ocu_ChannelType       u8Channel,
                                                            Ocu_ValueType         ReferenceValue,
                                                            Ocu_ValueType         AbsoluteValue);
#endif/* OCU_SET_ABSOLUTE_THRESHOLD_API*/

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) 
/**
 * @brief Hardware level set relative threshold
 * 
 * @param pOcuConfig      -Pointer to module configuration structure
 * @param u8Channel       -Ocu channel id in top configuration structure
 * @param RelativeValue   -Reference value for the counting interval
 * @return Ocu_ReturnType -Whether a comparison match occurred during the current reference interval
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_Hw_SetRelativeThreshold(const Ocu_ConfigType *pOcuConfig,
                                                            Ocu_ChannelType      u8Channel,
                                                            Ocu_ValueType        RelativeValue);
#endif/*OCU_SET_RELATIVE_THRESHOLD_API */

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief Hardware level get max counter
 *
 * @param pOcuConfig     -Pointer to module configuration structure
 * @param u8Channel      -Ocu channel id in top configuration structure
 * @return Ocu_ValueType -Max counter value for given channel
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_Hw_GetMaxCountValue(const Ocu_ConfigType *pOcuConfig,
                                                       Ocu_ChannelType       u8Channel);
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* OCU_HW_H */

/** @} */
