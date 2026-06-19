/**
*   @file    CDD_Mb_PBcfg.c
*   @version 1.5.1

*   @brief   AUTOSAR Mailbox Post-Bulid configuration.
*   @details This file contains the Mailbox Autosar Post-Bulid configuration.
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
#ifdef __cplusplus
extern "C"{
#endif
/***************************************************************************************************
*                                        INCLUDE FILES
***************************************************************************************************/
#include "CDD_Mb_Cfg.h"
#include "CDD_Mb.h"
#include "CDD_Mb_Hw.h"
/***************************************************************************************************
*                                      GLOBAL VARIABLES
***************************************************************************************************/

/***************************************************************************************************
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
***************************************************************************************************/

/***************************************************************************************************
*                                       LOCAL MACROS
***************************************************************************************************/

/***************************************************************************************************
*                                      LOCAL CONSTANTS
***************************************************************************************************/

/***************************************************************************************************
*                                      LOCAL VARIABLES
***************************************************************************************************/
#define  MB_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Mb_MemMap.h"
/**
* @brief         Mailbox Ring Block.
*/
MB_DATA_SECTION static uint8 Mb_RingBlock_Buffer_MbChannel_2[1280];
MB_DATA_SECTION static uint8 Mb_RingBlock_Buffer_MbChannel_3[1280];

#define MB_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Mb_MemMap.h"

/***************************************************************************************************
*                                       GLOBAL FUNCTIONS
***************************************************************************************************/
/**
* @brief         Mailbox Notification functions.
*/
extern void Mb_Channel_RequestCb(Mb_ChannelType Channel, Mb_CoreType MasterCore, uint32 u32Data0, uint32 u32Data1);
extern void Mb_Channel_DoneCb(Mb_ChannelType Channel);
extern void Mb_Channel2_ReceivedCb(void);
extern void Mb_Channel3_ReceivedCb(void);
extern void Crypto_Cmd_Channel_DoneCb(Mb_ChannelType Channel);
extern void Crypto_Cancel_Channel_DoneCb(Mb_ChannelType Channel);


/***************************************************************************************************
*                                      GLOBAL CONSTANTS
***************************************************************************************************/
#define MB_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mb_MemMap.h"
/**
* @brief         Mailbox channel configuration.
*/
MB_DATA_SECTION static const Mb_ChannelConfigType Mb_Channel_Config[MB_MAX_CHANNEL] =
{
    {
        MB_MODE_FREE,
        0U,
        7U
    },
    {
        MB_MODE_FREE,
        1U,
        7U
    },
    {
        MB_MODE_MESSAGE_QUEUE,
        2U,
        3U
    },
    {
        MB_MODE_MESSAGE_QUEUE,
        3U,
        3U
    },
    {
        MB_MODE_FREE,
        4U,
        1U
    },
    {
        MB_MODE_FREE,
        5U,
        1U
    },
    {
        MB_MODE_FREE,
        6U,
        2U
    },
    {
        MB_MODE_FREE,
        7U,
        4U
    }
};


/**
* @brief         Mailbox free channel configuration.
*/
MB_DATA_SECTION static const Mb_FreeChannelConfigType Mb_FreeChannel_Config[MB_FREE_CHANNEL_COUNT] =
{
    {
        0U|MB_CHANNEL_AUTO_DONE|MB_FREE_CH_CFG_REQ_TO_CORE1|MB_FREE_CH_CFG_REQ_TO_CORE2|MB_FREE_CH_CFG_DONE_TO_CORE0,
        Mb_Channel_RequestCb,
        Mb_Channel_DoneCb
    },
    {
        0U|MB_CHANNEL_AUTO_DONE|MB_FREE_CH_CFG_REQ_TO_CORE0|MB_FREE_CH_CFG_DONE_TO_CORE1|MB_FREE_CH_CFG_DONE_TO_CORE2,
        Mb_Channel_RequestCb,
        Mb_Channel_DoneCb
    },
    {
        0U|MB_FREE_CH_CFG_DONE_TO_CORE0,
        NULL_PTR,
        Crypto_Cmd_Channel_DoneCb
    },
    {
        0U|MB_FREE_CH_CFG_DONE_TO_CORE0,
        NULL_PTR,
        Crypto_Cancel_Channel_DoneCb
    },
    {
        0U|MB_FREE_CH_CFG_DONE_TO_CORE1,
        NULL_PTR,
        Crypto_Cmd_Channel_DoneCb
    },
    {
        0U|MB_FREE_CH_CFG_DONE_TO_CORE0,
        NULL_PTR,
        Crypto_Cancel_Channel_DoneCb
    }
};


/**
* @brief         Mailbox message queue configuration.
*/
MB_DATA_SECTION static const Mb_MessageQueueType Mb_MessageQueue_Config[MB_MESSAGE_QUEUE_COUNT] =
{
    {
        MB_CORE_0,
        MB_CORE_1,
        {
            10U,
            128U,
            Mb_RingBlock_Buffer_MbChannel_2
        },
        Mb_Channel2_ReceivedCb
    },
    {
        MB_CORE_1,
        MB_CORE_0,
        {
            10U,
            128U,
            Mb_RingBlock_Buffer_MbChannel_3
        },
        Mb_Channel3_ReceivedCb
    }
};


/**
* @brief         Sub channel index map.
* @details       The sequence number of the channel within its respective type.
*/
MB_DATA_SECTION static const Mb_ChannelType Mb_SubChannelMap[] =
{
    0,    1,    0,    1,    2,    3,    4,    5
};


/**
* @brief         Hardware channel map.
* @details       Mapping hardware channels to Id.
*/
MB_DATA_SECTION static const Mb_ChannelType Mb_HwChannelMap[MB_MAX_HW_CHANNEL] =
{
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    MB_HW_UNUSED,
    MB_HW_UNUSED,
    MB_HW_UNUSED,
    MB_HW_UNUSED,
    MB_HW_UNUSED,
    MB_HW_UNUSED,
    MB_HW_UNUSED,
    MB_HW_UNUSED
};


/**
* @brief         Mailbox configurations.
*/
MB_DATA_SECTION const Mb_ConfigType Mb_Config =
{
    8U,
    Mb_Channel_Config,
    Mb_FreeChannel_Config,
    Mb_MessageQueue_Config,
    Mb_SubChannelMap,
    Mb_HwChannelMap
};

#define MB_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mb_MemMap.h"
/***************************************************************************************************
*                                      GLOBAL VARIABLES
***************************************************************************************************/

/***************************************************************************************************
*                                   LOCAL FUNCTION PROTOTYPES
***************************************************************************************************/

/***************************************************************************************************
*                                       LOCAL FUNCTIONS
***************************************************************************************************/

#ifdef __cplusplus
}
#endif
