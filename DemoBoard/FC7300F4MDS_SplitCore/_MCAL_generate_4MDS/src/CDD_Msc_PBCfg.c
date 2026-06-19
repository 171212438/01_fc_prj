/**
*   @file    CDD_Msc_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Msc - CDD_Msc precompile configuration parameters.
*   @details This file contains the Msc precompile configuration parameters.
*
*   @addtogroup MSC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MSC
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
==================================================================================================*/

#include "Mcal.h"
#include "CDD_Msc.h"
#include "CDD_Msc_LLD.h"
#include "CDD_Msc_PBCfg.h"

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

/**
* @brief         Msc Receive Notification functions.
* @details       MSc Receive Notification functions defined inside the Plugin.
*
*/
CDD_MSC_TEXT_SECTION extern void Msc_ReceiveNotification0(void);


#define CDD_MSC_STOP_SEC_CODE
#include "Msc_MemMap.h"

#define CDD_MSC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Msc_MemMap.h"


#define MSC_UNALLOCATEDPAR_CORE_ID ((uint32)0xFFU)
/**
* @brief        All CoreIDs are supported by MSC driver.
*/
#define MSC_ECUCPARTITION_0_CORE_ID     ((uint32)0U)

/**
* @brief        All CoreIDs are supported by Msc driver.
*/
#define Msc_MAX_PARTITIONS     ((uint32)2U)


/**
* @brief          Configuration for Msc Channel 0 - Variant elements
*/
CDD_MSC_DATA_SECTION static const Msc_ChannelConfigType Msc_MscChannel_0_EcucPartition_0=
{
    /* Partition core id of channel */
    MSC_ECUCPARTITION_0_CORE_ID,
    /**@details MSC Channel is allocated partition or not.*/
    TRUE,
    /**@details MSC Hw channel ID. */
    0U,
    /**@details Frame Passive length. */
    3U,
    /**@details The number of passive time frames that are inserted in repetition mode between two data frames. */
    2U,
    /**@details MSC work mode. */
    MSC_TX_TRIGGER_CONTINUOUS,
    /**@details Select SRH. */
    FALSE,
    /**@details Bit length of SRH. */
    0U,
    /**@details Select SRL. */
    TRUE,
    /**@details Bit length of SRH. */
    16U,
    /**@details Hardware Receive Interrupt Delay Control. */
    FALSE,
    /**@details Parity mode. */
    MSC_RX_PARITY_EVEN,
    /**@details Baudrate. */
    MSC_BAUDRATE_FMSC_DIV128,
    /**@details Frame type. */
    MSC_RX_12_BIT_LENGTH,
    /**@details Input polarity. */
    MSC_POLARITY_IDENTICAL,
    /**@details SDI seletion. */
    MSC_SDI_SEL_SDI0,
    /**@details ENC seletion. */
    MSC_EN_SELECTION_0,
    /**@details ENL seletion. */
    MSC_EN_SELECTION_0,
    /**@details ENH seletion. */
    MSC_EN_SELECTION_0,
    /**@details FCL Control. */
    MSC_FCL_ALWAYS_ACTIVE,
    /**@details Emergency Load. */
    0x0U,
    /**@details Polarity. */
    MSC_TX_INVPOL_EN,
    /**@details Enable the interrupt of timeout. */
    FALSE,
    /**@details Timeout value of timeout interrupt. */
    0U,
        /**@details Injection0 enable. */
    FALSE,
    /**@details Injection0 Position. */
    0U,
        /**@details Injection1 enable. */
    FALSE,
    /**@details Injection1 Position. */
    0U,
    /**@details Transmission source selection. */
    {{
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
        MSC_TRANS_SOURCE_DATA_REG,
    }},
    /**@details notification of the timeout interrupt. */
    NULL_PTR,
    /**@details notification of the receive interrupt. */
    Msc_ReceiveNotification0,
};



CDD_MSC_DATA_SECTION static const Msc_ConfigType Msc_Config_EcucPartition_0 =
{
    MSC_ECUCPARTITION_0_CORE_ID,            /** Core Id */
    {
        /**
        * @brief   Configuration for Msc Channel 0.
        */
        &Msc_MscChannel_0_EcucPartition_0,
    }
};

CDD_MSC_DATA_SECTION const Msc_ConfigType * const Msc_ConfigPredefine[MSC_MAX_PARTITIONS] =
{
    &Msc_Config_EcucPartition_0,
    NULL_PTR,
};

#define CDD_MSC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
