/**
 *   @file    CDD_Msc_Cfg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Msc - High level header of MSC driver.
 *   @details This file contains declarations of the functions defined by AutoSAR.
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

#ifndef CDD_MSC_CFG_H
#define CDD_MSC_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Platform_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/**
 * @brief   MSC Precompile support
 */
#define MSC_PRECOMPILE_SUPPORT (STD_ON)

/**
 * @brief   No of Channels configured.
 */
#define MSC_HW_MAX_MODULES 2U

/* Symbolic names of configured MSC Channels */
#define MscConf_MscChannel_MscChannel_0     0U
#define MscConf_MscChannel_MscChannel_1     1U

/**
* @brief        All CoreIDs are supported by MSC driver.
*/

#define MSC_MAX_PARTITIONS     ((uint32)3U)

#define MSC_UNINIT_ARRAY  {MSC_UNINIT, MSC_UNINIT, MSC_UNINIT}

#define MSC_CFG_PTR_INIT_ARRAY  {NULL_PTR, NULL_PTR, NULL_PTR}

#define MSC_RXBUSY_AVAILABLE (STD_OFF)

/**
 * @details Msc signal polarity identical.
 */
#define MSC_POLARITY_IDENTICAL (0U)

/**
 * @details Msc signal polarity interted.
 */
#define MSC_POLARITY_INVERTED  (1U)

/**
 * @details SSL[x] is taken from TCDAR.DL[x].
 */
#define MSC_TRANS_SOURCE_DATA_REG       0x0U

/**
 * @details SSL[x] is taken from the ALTINL input line x.
 */
#define MSC_TRANS_SOURCE_DATA_ALTIN     0x2U

/**
 * @details SSL[x] is taken from the ALTINL input line x in inverted state.
 */
#define MSC_TRANS_SOURCE_DATA_ALTIN_INV 0x3U

/*==================================================================================================
                                             ENUMS
==================================================================================================*/
typedef enum
{
    /**@details Single Data Frame transfer selection (SW transmission). */
    MSC_TX_TRIGGER_SINGLE = 0x00,
    /**@details Continuous Data Frame transfer selection (HW PWM transmission). */
    MSC_TX_TRIGGER_CONTINUOUS = 0x01
} Msc_TransmissionTriggerType;

typedef enum
{
    /**@details Clock ChipSelect and Data are active high.*/
    MSC_TX_NMPOL = 0x00,
    /**@details ChipSelect and Data are active high, Clock is active low. */
    MSC_TX_INVPOL_FSC = 0x01,
    /**@details Clock and Data are active high, ChipSelect is active low. */
    MSC_TX_INVPOL_EN = 0x02,
    /**@details ChipSelect and Clock are active high, Data is active low. */
    MSC_TX_INVPOL_SO = 0x03,
    /**@details Data is active high, Clock and ChipSelect are active low. */
    MSC_TX_INVPOL_FSC_EN = 0x04,
    /**@details ChipSelectis active high, Clock and Data are active low. */
    MSC_TX_INVPOL_FSC_SO = 0x05,
    /**@details Clock is active high, ChipSelect and Data are active low. */
    MSC_TX_INVPOL_EN_SO = 0x06,
    /**@details Clock ChipSelect and Data are active low. */
    MSC_TX_INVPOL_FSC_EN_SO = 0x07,
} Msc_TransmissionPolarityType;

typedef enum
{
    /**@details Indicate that MSC channel clock is present only on downstream transmission. */
    MSC_FCL_PARTITION_ACTIVE = 0x00,
    /**@details Indicates that MSC channel clock is always present. */
    MSC_FCL_ALWAYS_ACTIVE = 0x01,
} Msc_FclActiveType;

typedef enum
{
    MSC_RX_12_BIT_LENGTH = 0x00U, /**@details 12-bit frame selected. */
    MSC_RX_16_BIT_LENGTH = 0x01U  /**@details 16-bit frame selected. */
} MSC_ReceiveFrameType;

typedef enum
{
    /**@details Check for Even Parity. */
    MSC_RX_PARITY_EVEN = 0x00,
    /**@details Check for Odd Parity. */
    MSC_RX_PARITY_ODD = 0x01,
} Msc_RxDataParityType;

typedef enum
{
    MSC_RECEIVE_DISABLED     = 0x00U, /**@details Receiving channel is disabled. */
    MSC_BAUDRATE_FMSC_DIV4   = 0x01U, /**@details Baud rate=fmsc/4. */
    MSC_BAUDRATE_FMSC_DIV8   = 0x02U, /**@details Baud rate=fmsc/8. */
    MSC_BAUDRATE_FMSC_DIV16  = 0x03U, /**@details Baud rate=fmsc/16. */
    MSC_BAUDRATE_FMSC_DIV32  = 0x04U, /**@details Baud rate=fmsc/32. */
    MSC_BAUDRATE_FMSC_DIV64  = 0x05U, /**@details Baud rate=fmsc/64. */
    MSC_BAUDRATE_FMSC_DIV128 = 0x06U, /**@details Baud rate=fmsc/128. */
    MSC_BAUDRATE_FMSC_DIV256 = 0x07U  /**@details Baud rate=fmsc/256. */
} MSC_ReceiveBaudDivType;

typedef enum
{
    MSC_EN_SELECTION_0 = 0x00,
    MSC_EN_SELECTION_1 = 0x01,
    MSC_EN_SELECTION_2 = 0x02,
    MSC_EN_SELECTION_3 = 0x03,
} Msc_ENxActiveType;

typedef enum
{
    MSC_ENC = 0x00,
    MSC_ENL = 0x01,
    MSC_ENH = 0x02,
} Msc_ENxType;

typedef enum
{
    MSC_SDI_SEL_SDI0 = 0x0U, /**@details SDI0 input is selected for SDI. */
    MSC_SDI_SEL_SDI1 = 0x1U, /**@details SDI1 input is selected for SDI. */
    MSC_SDI_SEL_SDI2 = 0x2U, /**@details SDI2 input is selected for SDI. */
    MSC_SDI_SEL_SDI3 = 0x3U, /**@details SDI3 input is selected for SDI. */
    MSC_SDI_SEL_SDI4 = 0x4U, /**@details SDI4 input is selected for SDI. */
    MSC_SDI_SEL_SDI5 = 0x5U, /**@details SDI5 input is selected for SDI. */
    MSC_SDI_SEL_SDI6 = 0x6U, /**@details SDI6 input is selected for SDI. */
    MSC_SDI_SEL_SDI7 = 0x7U  /**@details SDI7 input is selected for SDI. */
} MSC_SDISelectionType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef void (*Msc_NotifyType)(void); /**< @brief Notification function pointer definition */

#define CDD_MSC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Msc_MemMap.h"

typedef struct
{
    uint8 u8DataSource[32];
} Msc_TransmissionSourceConfigType;

/**
 * @brief          MSC channel configuration type structure.
 * @details        This is the type of the external data structure containing
 *                 the overall initialization data for one MSC Channel.
 *                 A pointer to such a structure is provided to the MSC channel
 *                 initialization routine for configuration of the MSC hardware
 *                 channel.
 */
typedef struct
{
    uint32                           u32ChannelCoreId;    /**@details MSC Channel core id.*/
    uint8                            u8AllocatedPartition; /**@details MSC Channel is allocated partition or not.*/
    uint8                            u8ChannelId;         /**@details MSC Hw channel ID. */
    uint8                            u8PassiveLength;     /**@details Frame Passive length. */
    uint8                            u8PTFNumber;         /**@details The number of passive time frames that are inserted in repetition mode between two data frames. */
    Msc_TransmissionTriggerType      eWorkMode;           /**@details MSC work mode. */
    uint8                            u8SelSRH;            /**@details Select bit SRH. */
    uint8                            u8SRHDataBitLength;  /**@details Bit length of SRH. */
    uint8                            u8SelSRL;            /**@details Select bit SRL. */
    uint8                            u8SRLDataBitLength;  /**@details Bit length of SRL. */
    uint8                            u8DelayControl;      /**@details Hardware Receive Interrupt Delay Control. */
    Msc_RxDataParityType             eParity;             /**@details Parity mode. */
    MSC_ReceiveBaudDivType           eBaudDiv;            /**@details Baudrate. */
    MSC_ReceiveFrameType             eRsvFrameType;       /**@details Frame type. */
    uint8                            u8SDIPolarity;       /**@details Input polarity. */
    MSC_SDISelectionType             eSDIsel;             /**@details SDI seletion. */
    Msc_ENxActiveType                eENC;                /**@details ENC seletion. */
    Msc_ENxActiveType                eENL;                /**@details ENL seletion. */
    Msc_ENxActiveType                eENH;                /**@details ENH seletion. */
    Msc_FclActiveType                eFclCtrl;            /**@details FCL Control. */
    uint32                           u32Emergencyload;    /**@details Emergency load enable. */
    Msc_TransmissionPolarityType     ePolarity;           /**@details Polarity. */
    uint8                            u8TOIntEnable;       /**@details Enable the interrupt of timeout. */
    uint16                           u16TimeoutValue;     /**@details Timeout value of timeout interrupt. */
    uint8                            u8InjEnable0;        /**@details Injection0 enable. */
    uint8                            u8InjPosition0;      /**@details Injection0 position. */
    uint8                            u8InjEnable1;        /**@details Injection1 enable. */
    uint8                            u8InjPosition1;      /**@details Injection1 position. */
    Msc_TransmissionSourceConfigType tTransSelConfig;     /**@details Transmission source selection. */
    Msc_NotifyType                   pMscToNotification;  /**@details Timeout interrupt notification. */
    Msc_NotifyType                   pMscRxNotification;  /**@details Receive interrupt notification. */
} Msc_ChannelConfigType;

typedef Msc_ChannelConfigType const *Msc_ChannelConfigTypePtr;

/**
 * @brief          MSC driver configuration type structure.
 * @details        This is the type of the pointer to the external data
 *                 MSC Channels.
 *                 A pointer of such a structure is provided to the MSC driver
 *                 initialization routine for configuration of the MSC hardware
 *                 channel.
 * @api
 */
typedef struct
{
    uint32 PartitionCoreId;              /**!< @brief Partition core id is assigned for this configuration */
    /**
     * @brief     Hardware channel.
     * @details   Constant pointer of the constant external data
     *            structure containing the overall initialization data
     *            for all the MSC Channels.
     */
    const Msc_ChannelConfigType *const Msc_Channel[MSC_HW_MAX_MODULES];
} Msc_ConfigType;

#define CDD_MSC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_MSC_CFG_H */
