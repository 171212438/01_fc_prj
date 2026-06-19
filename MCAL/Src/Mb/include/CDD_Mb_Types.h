/**
 *   @file    CDD_Mb_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD_Mb - driver API and development errors definition.
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
*   0.2.0       06/09/2023    QXW0070       N/A          Mb Initial Version
*   0.4.0       19/10/2023    QXW0070       N/A          Change the value of MB_CHANNEL_AUTO_DONE
==================================================================================================*/

#ifndef CDD_MB_TYPES_H
#define CDD_MB_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"
#include "CDD_Mb_Cfg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief          Configuration parameters for a free channel
 * @details        Configuration parameters for a free channel,
 *                 each bit represents a corresponding configuration
 *                 [SWS_Mb_00156]
 *
 */

#define MB_FREE_CH_CFG_REQ_TO_CORE0 \
    1U /**< @brief Core0 can receive request events issued by this channel. */
#define MB_FREE_CH_CFG_REQ_TO_CORE1 \
    2U /**< @brief Core1 can receive request events issued by this channel. */
#define MB_FREE_CH_CFG_REQ_TO_CORE2 \
    4U /**< @brief Core2 can receive request events issued by this channel. */
#define MB_FREE_CH_CFG_REQ_TO_CORE3 \
    8U /**< @brief Core3 can receive request events issued by this channel. */

#define MB_FREE_CH_CFG_DONE_TO_CORE0 \
    0x100U /**< @brief Core0 can receive done events issued by this channel. */
#define MB_FREE_CH_CFG_DONE_TO_CORE1 \
    0x200U /**< @brief Core1 can receive done events issued by this channel. */
#define MB_FREE_CH_CFG_DONE_TO_CORE2 \
    0x400U /**< @brief Core2 can receive done events issued by this channel. */
#define MB_FREE_CH_CFG_DONE_TO_CORE3 \
    0x800U /**< @brief Core3 can receive done events issued by this channel. */
#define MB_CHANNEL_AUTO_DONE                                             \
    0x10000000U /**< @brief The receiver automatically send done event \ \
                 *          after receiving the message */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Numeric identifier of Cores [SWS_Mb_00155]
 *
 */
typedef enum
{
    MB_CORE_0, /**< @brief The destination/source of the data is CORE0. */
#if MB_MAX_HW_INTR_CHANNEL == 2
    MB_CORE_HSM, /**< @brief The destination/source of the data is HSM. */
#elif MB_MAX_HW_INTR_CHANNEL == 3
    MB_CORE_1,   /**< @brief The destination/source of the data is CORE1. */
    MB_CORE_HSM, /**< @brief The destination/source of the data is HSM. */
#elif MB_MAX_HW_INTR_CHANNEL == 4
    MB_CORE_1,   /**< @brief The destination/source of the data is CORE1. */
    MB_CORE_2,   /**< @brief The destination/source of the data is CORE2. */
    MB_CORE_HSM, /**< @brief The destination/source of the data is HSM. */
#elif MB_MAX_HW_INTR_CHANNEL == 5
    MB_CORE_1,   /**< @brief The destination/source of the data is CORE1. */
    MB_CORE_2,   /**< @brief The destination/source of the data is CORE2. */
    MB_CORE_HSM, /**< @brief The destination/source of the data is HSM. */
    MB_CORE_3,   /**< @brief The destination/source of the data is CORE3. */
#endif
    MB_CORE_NUM,
} Mb_CoreType;

/**
 * @brief Definition of the channel mode [SWS_Mb_00132]
 *
 */
typedef enum
{
    MB_MODE_FREE = 0U,    /**< @brief This channel operates in Free Channel mode. */
    MB_MODE_MESSAGE_QUEUE /**< @brief This channel operates in Message Queue mode. */
} Mb_ChannelModeType;

/**
 * @brief Definition of the message queue state [SWS_Mb_00133]
 *
 */
typedef enum
{
    MB_MESSAGE_QUEUE_EMPTY = 0U, /**< @brief The message queue is empty. */
    MB_MESSAGE_QUEUE_FULL,       /**< @brief The message queue is full. */
    MB_MESSAGE_QUEUE_HALF_FULL   /**< @brief The message queue is half full. */
} Mb_MessageQueueStateType;

/**
 * @brief Definition of mailbox channel state [SWS_Mb_00140]
 *
 */
typedef enum
{
    MB_CHANNEL_IDLE = 0U, /**< @brief The current channel is idle. */
    MB_CHANNEL_BUSY       /**< @brief The current channel is busy. */
} Mb_ChannelStateType;

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Numeric identifier of an Mailbox channel [SWS_Mb_00129]
 *
 */
typedef uint32 Mb_ChannelType;

/**
 * @brief          Configuration parameters for a ring block
 * @details        Related configurations of ring block
 *                 for a message queue mode channel [SWS_Mb_00135]
 *
 */
typedef struct
{
    const uint32 u32BlockNum;  /**< @brief The number of ring blocks. */
    const uint32 u32BlockSize; /**< @brief The size of each block. */
    uint8       *pBuffer;      /**< @brief The pointer to the memory pool of the ring block. */
} Mb_RingBlockType;

/**
 * @brief          The special configuration for a channel configured in free channel mode.
 *                    [SWS_Mb_00136]
 *
 */
typedef struct
{
    uint32 u32ConfigFlag; /**< @brief Channel configuration parameters. */
    /**< @brief Callback for request.[SWS_Mb_00113][SWS_Mb_00114][SWS_Mb_00115] */
    void (*pRequestCallback)(Mb_ChannelType Channel,
                             Mb_CoreType    MasterCore,
                             uint32         u32Data0,
                             uint32         u32Data1);
    void (*pDone)(Mb_ChannelType Channel); /**< @brief Callback for done.
                                              [SWS_Mb_00113][SWS_Mb_00114][SWS_Mb_00118] */
} Mb_FreeChannelConfigType;

/**
 * @brief          The special configuration for a channel configured in message queue mode.
 *                    [SWS_Mb_00137]
 *
 */
typedef struct
{
    Mb_CoreType      SenderCore;     /**< @brief The sender of messages. */
    Mb_CoreType      ReceiverCore;   /**< @brief The receiver of messages. */
    Mb_RingBlockType RingBlock;      /**< @brief The ring block of the message queue */
    void (*pReceivedCallback)(void); /**< @brief Callback for receive. [SWS_Mb_00121] */
} Mb_MessageQueueType;

/**
 * @brief          The common configuration of a mailbox channel [SWS_Mb_00138]
 *
 */
typedef struct
{
    Mb_ChannelModeType eChannelMode;        /**< @brief The mode of the channel. */
    uint16             u16MbHwChannel;      /**< @brief The hardware channel used by the channel. */
    uint16             u16ChannelPartition; /**< @brief The partitions that can use the channel. */
} Mb_ChannelConfigType;

/**
 * @brief          Structure for Configuration data.
 * @details        Data structure containing the set of configuration parameters required
 *                 for initializing the Mailbox channels and Mailbox HW Unit(s). [SWS_Mb_00128]
 */
typedef struct
{
    const Mb_ChannelType tChannelCount; /**< @brief The maximum number of configured channels */
    const Mb_ChannelConfigType *pChannelConfig; /**< @brief The general configuration of channels. */
    const Mb_FreeChannelConfigType *pFreeChannel; /**< @brief The specific configuration of channels
                                                   *          configured as a free channel. */
    const Mb_MessageQueueType *pMessageQueue;     /**< @brief The specific configuration of channels
                                                   *          configured as a message queue */
    const Mb_ChannelType *pMbSubChannelMap;       /**< @brief Map of channel IDs to the index of the
                                                     respective type */
    const Mb_ChannelType *pMbHwChannelMap;        /**< @brief Map of hardware index to channel ID */
} Mb_ConfigType;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* CDD_MB_TYPES_H */

/** @} */
