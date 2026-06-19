/**
*   @file    CDD_Mb.h
*   @version 1.5.1

*   @brief   Mailbox - driver API and development errors definition.
*   @details This file contains the Mailbox driver API and development errors definition.
*
*   @addtogroup Mailbox
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Mailbox
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
*   0.2.0       07/09/2023    QXW0070       N/A          Mb Initial Version
==================================================================================================*/

#ifndef CDD_MB_H
#define CDD_MB_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/* [SWS_Mb_00127] */
#include "Std_Types.h"
#include "Mcal.h"
#include "CDD_Mb_Types.h"
#include "CDD_Mb_Cfg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 *       Development errors.
 *       The following errors shall be detectable by the Mailbox module depending on its
 *       configuration (development / production mode).
 *
 *       All error codes [SWS_Mb_00154][SWS_Mb_00126]
 *
 */

/**
 * @brief   API service used without Mailbox module initialization
 * */
#define MB_E_UNINIT                   ((uint8)0x0AU)

/**
 * @brief   The Mailbox module is already initialized
 * */
#define MB_E_ALREADY_INITIALIZED      ((uint8)0x0BU)

/**
 * @brief   The Mailbox module is not properly configured
 * */
#define MB_E_PARAM_CONFIG             ((uint8)0x0CU)

/**
 * @brief API service used with an invalid channel identifier or channel was not
 *        configured for the functionality of the calling API.
 *
 */
#define MB_E_PARAM_CHANNEL            ((uint8)0x0DU)
/**
 * @brief API service used with an invalid core identifier or core was not
 *        configured for the functionality of the calling API.
 *
 */
#define MB_E_PARAM_CORE               ((uint8)0x0E)
/**
 * @brief API service used with an invalid channel identifier or channel has
 *        already been locked.
 *
 */
#define MB_E_CHANNEL_LOCKED           ((uint8)0x10)
/**
 * @brief API service used with an invalid channel identifier or channel is
 *        not locked.
 *
 */
#define MB_E_CHANNEL_UNLOCKED         ((uint8)0x11)

/**
 * @brief Message queue is full.
 *
 */
#define MB_E_MESSAGE_QUEUE_FULL       ((uint8)0x13)

/**
 * @brief Message queue is empty.
 *
 */
#define MB_E_MESSAGE_QUEUE_EMPTY      ((uint8)0x14)

/**
 * @brief Message queue is busy.
 *
 */
#define MB_E_MESSAGE_QUEUE_BUSY       ((uint8)0x15)

/**
 * @brief GET Spin Lock failed.
 *
 */
#define MB_E_GET_SPIN_LOCK_FAILED     ((uint8)0x16)

/**
 * @brief API Mb_GetVersionInfo is called and the parameter versioninfo
 *        is is invalid ( e.g. NULL )
 *
 */
#define MB_E_PARAM_VINFO              ((uint8)0x19)
/**
 * @brief API service partition mapping check error
 */
#define MB_E_INV_PARTITION            ((uint8)0x1A)

/**
 * @brief API service used with an invalid buffer size.
 *
 */
#define MB_E_PARAM_BUFFER_SIZE        ((uint8)0x1B)

/**
 * @brief API IS called with invalid pointer
 *
 */
#define MB_E_PARAM_POINTER            ((uint8)0x1C)

/**
          All API's service IDs
*/
/**
 * @brief API service ID for Mb_Init function
 * */
#define MB_INIT_ID                    0x00U

/**
 * @brief API service ID for Mb_DeInit function
 * */
#define MB_DEINIT_ID                  0x01U

/**
 * @brief API service ID for Mb_SendData function
 * */
#define MB_SEND_DATA_ID               0x02U

/**
 * @brief API service ID for Mb_DoneChannel function
 * */
#define MB_DONE_CHANNEL_ID            0x03U

/**
 * @brief API service ID for Mb_SendMessage function
 * */
#define MB_SEND_MESSAGE_ID            0x04U

/**
 * @brief API service ID for Mb_GetMessage function
 * */
#define MB_GET_MESSAGE_ID             0x05U

/**
 * @brief API service ID for Mb_GetMessageCount function
 * */
#define MB_GET_MESSAGE_COUNT_ID       0x06U

/**
 * @brief API service ID for Mb_GetMessageQueueState function
 * */
#define MB_GET_MESSAGE_QUEUE_STATE_ID 0x07U

/**
 * @brief API service ID for Mb_ResetMessageQueue function
 * */
#define MB_RESET_MESSAGE_QUEUE_ID     0x08U

/**
 * @brief API service ID for Mb_ResetChannel function
 * */
#define MB_RESET_CHANNEL_ID           0x09U

/**
 * @brief API service ID for Mb_GetChannelStatus function
 * */
#define MB_GET_CHANNEL_STATE_ID       0x0AU

/**
 * @brief API service ID for Mb_GetVersionInfo function
 * */
#define MB_GETVERSIONINFO_ID          0x0BU

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Definition of api's return state [SWS_Mb_00134]
 *
 */
typedef enum
{
    MB_RET_STATE_SUCCESS, /**< @brief The operation is successful. */
    MB_RET_STATE_FAILED,  /**< @brief The operation is failed. */
    MB_RET_STATE_BUSY,    /**< @brief The channel is busy. */
    MB_RET_STATE_FULL,    /**< @brief The message queue is full. */
    MB_RET_STATE_EMPTY,   /**< @brief The message queue is empty. */
} Mb_ReturnStateType;

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#ifndef MB_PRECOMPILE_SUPPORT
#define MB_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mb_MemMap.h"

MB_DATA_SECTION extern const Mb_ConfigType Mb_Config;

#define MB_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mb_MemMap.h"
#endif

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MB_START_SEC_CODE
#include "Mb_MemMap.h"
MB_TEXT_SECTION void Mb_Init(const Mb_ConfigType *ConfigPtr);

#if (MB_DEINIT_API == STD_ON)
MB_TEXT_SECTION void Mb_DeInit(void);
#endif /* MB_DEINIT_API == STD_ON */

#if (MB_FREE_CHANNEL_API == STD_ON)
MB_TEXT_SECTION Mb_ReturnStateType Mb_SendData(Mb_ChannelType Channel,
                                               Mb_CoreType    DstCore,
                                               uint32         Data0,
                                               uint32         Data1);
MB_TEXT_SECTION void               Mb_DoneChannel(Mb_ChannelType Channel);
#endif /* MB_FREE_CHANNEL_API == STD_ON */

#if (MB_MESSAGE_QUEUE_API == STD_ON) && (MB_MESSAGE_QUEUE_COUNT > 0)
MB_TEXT_SECTION Mb_ReturnStateType       Mb_SendMessage(Mb_ChannelType Channel,
                                                        const uint8   *Buffer,
                                                        uint32         BufferLength);
MB_TEXT_SECTION Mb_ReturnStateType       Mb_GetMessage(Mb_ChannelType Channel,
                                                       uint8         *ReceiveBuffer,
                                                       uint32         ReceiveBufferLength);
MB_TEXT_SECTION uint32                   Mb_GetMessageCount(Mb_ChannelType Channel);
MB_TEXT_SECTION Mb_MessageQueueStateType Mb_GetMessageQueueState(Mb_ChannelType Channel);
MB_TEXT_SECTION Mb_ReturnStateType       Mb_ResetMessageQueue(Mb_ChannelType Channel);
#endif /* MB_MESSAGE_QUEUE_API == STD_ON */

#if (MB_RESET_CHANNEL_API == STD_ON)
MB_TEXT_SECTION void Mb_ResetChannel(Mb_ChannelType Channel);
#endif /* MB_RESET_CHANNEL_API == STD_ON */

#if (MB_GET_CHANNEL_STATUS_API == STD_ON)
MB_TEXT_SECTION Mb_ChannelStateType Mb_GetChannelState(Mb_ChannelType Channel);
#endif /* MB_GET_CHANNEL_STATUS_API == STD_ON */

#if (MB_GET_VERSION_INFO_API == STD_ON)
MB_TEXT_SECTION void Mb_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif /* MB_GET_VERSION_INFO_API == STD_ON */

#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_MB_H */
/** @} */
