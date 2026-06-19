/**
*   @file    Ocu.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ocu - OCU driver header file.
*   @details OCU driver header file, containing the Autosar API specification and other variables
*            and functions that are exported by the OCU driver.
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

#ifndef OCU_H
#define OCU_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Ocu_Hw_Types.h"
#include "Ocu_Hw.h"
#include "Ocu_Cfg.h"
/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            Instance ID of this OCU driver.
*
*/
#define OCU_INDEX                       ((uint8)0U)

/**
* @brief            API service used without module initialization
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_UNINIT                    ((uint8)0x02U)

/**
* @brief            API service used with an invalid channel identifier
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_PARAM_INVALID_CHANNEL     ((uint8)0x03U)

/**
* @brief            API Ocu_SetPinState() called with an invalid pin state or when the channel is in
*  the RUNNING state
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_PARAM_INVALID_STATE       ((uint8)0x04U)

/**
* @brief            API Ocu_SetPinAction() called with an invalid pin action
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_PARAM_INVALID_ACTION      ((uint8)0x05U)

/**
* @brief            Usage of Ocu_DisableNotification() or Ocu_EnableNotification() on a channel
* where a NULL pointer 
*                   is configured as the notification function
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_NO_VALID_NOTIF            ((uint8)0x06U)

/**
* @brief            API Ocu_Init() called while the OCU driver has already been initialized
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_ALREADY_INITIALIZED       ((uint8)0x07U)

/**
* @brief            API Ocu_GetVersionInfo() is called with a NULL parameter
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_PARAM_POINTER             ((uint8)0x08U)

/**
* @brief            API Ocu_StartChannel() called on a channel that is in state RUNNING
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_BUSY                      ((uint8)0x09U)

/**
* @brief            Ocu_SetPinState() or Ocu_SetPinAction() called for a channel that doesn't 
*                   have an associated output pin
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_PARAM_NO_PIN              ((uint8)0x0AU)


/**
* @brief            API Ocu_Init service called with wrong parameter
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_INIT_FAILED               ((uint8)0x0BU)

/**
* @brief            Ocu_SetAbsoluteThreshold() or Ocu_SetRelativeThreshold() called for with a compare 
*                   match parameter greater than maximum supported counter value for a given channel
* @details          Errors and exceptions that will be detected by the OCU driver
*/
#define OCU_E_PARAM_INVALID_VALUE       ((uint8)0x1BU)

/* API SERVICE IDs */

/**
* @brief            API service ID of Ocu_Init function
* @details          Parameters used when raising an error/exception
*/
#define OCU_INIT_ID                     ((uint8)0x00U)

/**
* @brief            API service ID of Ocu_DeInit function
* @details          Parameters used when raising an error/exception
*/
#define OCU_DEINIT_ID                   ((uint8)0x01U)

/**
* @brief            API service ID of Ocu_StartChannel function
* @details          Parameters used when raising an error/exception
*/
#define OCU_STARTCHANNEL_ID             ((uint8)0x02U)

/**
* @brief            API service ID of Ocu_StopChannel function
* @details          Parameters used when raising an error/exception
*/
#define OCU_STOPCHANNEL_ID              ((uint8)0x03U)
/**
* @brief            API service ID of Ocu_SetPinState function
* @details          Parameters used when raising an error/exception
*/
#define OCU_SETPINSTATE_ID              ((uint8)0x04U)

/**
* @brief            API service ID of Ocu_SetPinAction function
* @details          Parameters used when raising an error/exception
*/
#define OCU_SETPINACTION_ID             ((uint8)0x05U)

/**
* @brief            API service ID of Ocu_GetCounter function
* @details          Parameters used when raising an error/exception
*/
#define OCU_GETCOUNTER_ID               ((uint8)0x06U)

/**
* @brief            API service ID of Ocu_SetAbsoluteThreshold function
* @details          Parameters used when raising an error/exception
*/
#define OCU_SETABSOLUTETHRESHOLD_ID     ((uint8)0x07U)

/**
* @brief            API service ID of Ocu_SetRelativeThreshold function
* @details          Parameters used when raising an error/exception
*/
#define OCU_SETRELATIVETHRESHOLD_ID     ((uint8)0x08U)

/**
* @brief            API service ID of Ocu_DisableNotification function
* @details          Parameters used when raising an error/exception
*/
#define OCU_DISABLENOTIFICATION_ID      ((uint8)0x0AU)

/**
* @brief            API service ID of Ocu_EnableNotification function
* @details          Parameters used when raising an error/exception
*/
#define OCU_ENABLENOTIFICATION_ID       ((uint8)0x0BU)


/**
* @brief            API service ID of Ocu_GetVersionInfo function
* @details          Parameters used when raising an error/exception
*/
#define OCU_GETVERSIONINFO_ID           ((uint8)0x09U)

/*==================================================================================================
*                            STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define OCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"

#if (OCU_PRECOMPILE_SUPPORT != STD_ON)
OCU_CONF_PB
#endif

#define OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

/**
 * @brief Initialize the OCU driver
 * 
 * @param ConfigPtr -Pointer to a selected configuration structure
 */
OCU_TEXT_SECTION void Ocu_Init(const Ocu_ConfigType* ConfigPtr);

#if (OCU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize the OCU module.
 *
 */
OCU_TEXT_SECTION void Ocu_DeInit(void);
#endif

/**
 * @brief Service to start an OCU channel
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 */
OCU_TEXT_SECTION Std_ReturnType Ocu_StartChannel(Ocu_ChannelType ChannelNumber);

/**
 * @brief Service to stop an OCU channel
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 */
OCU_TEXT_SECTION void Ocu_StopChannel(Ocu_ChannelType ChannelNumber);

#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief Service to set immediately the level of the pin associated to an OCU channel
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 *        PinState      -Output PinState OCU_LOW: 
 *                                       OCU_HIGH: 
 */
OCU_TEXT_SECTION void Ocu_SetPinState(Ocu_ChannelType  ChannelNumber, Ocu_PinStateType PinState);
#endif

#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief Instructs the driver what actions should be automatically performed by the hardware when
 * comparing matches
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 *        PinAction     -Pin Action OCU_SET_LOW:
 *                                  OCU_SET_HIGH
 *                                  OCU_TOGGLE
 *                                  OCU_DISABLE
 */
OCU_TEXT_SECTION void Ocu_SetPinAction(Ocu_ChannelType ChannelNumber, Ocu_PinActionType PinAction);
#endif

#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief Read the current value of the counter
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 */
OCU_TEXT_SECTION Ocu_ValueType Ocu_GetCounter(Ocu_ChannelType ChannelNumber);
#endif

#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief Set the value of the channel threshold using an absolute input data
 *
 * @param ChannelNumber  -Numeric identifier of the OCU channel
 * @param ReferenceValue -Value given by the upper layer and used as a base to determine whether to
 * call the notification before the function exits or not
 * @param AbsoluteValue  -Value to compare with the content of the counter. This value is in ticks.
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_SetAbsoluteThreshold(Ocu_ChannelType ChannelNumber,
                                                         Ocu_ValueType   ReferenceValue,
                                                         Ocu_ValueType   AbsoluteValue);
#endif

#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief Set the value of the channel threshold relative to the current value of the counter
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 * @param RelativeValue -Value to use for computing the new threshold
 */
OCU_TEXT_SECTION Ocu_ReturnType Ocu_SetRelativeThreshold(Ocu_ChannelType ChannelNumber,
                                                         Ocu_ValueType   RelativeValue);
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief Disable notifications from an OCU channel
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 */
OCU_TEXT_SECTION void Ocu_DisableNotification(Ocu_ChannelType ChannelNumber);
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief Enable notifications from an OCU channel
 *
 * @param ChannelNumber -Numeric identifier of the OCU channel
 */
OCU_TEXT_SECTION void Ocu_EnableNotification(Ocu_ChannelType ChannelNumber);
#endif

#if (OCU_VERSION_INFO_API == STD_ON)
/**
 * @brief Return the version information of this module
 *
 * @param versioninfo -Pointer to where to store the version information of this module 
 */
OCU_TEXT_SECTION void Ocu_GetVersionInfo(Std_VersionInfoType * versioninfo);
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* OCU_H */

/** @} */
