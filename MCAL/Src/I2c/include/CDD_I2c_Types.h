/**
 *   @file     CDD_I2c_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD I2c - driver struct and development errors definition.
 *   @details This file contains the I2c Autosar driver API and development errors definition.
 *
 *   @addtogroup I2c
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : I2c
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       14/07/2023    qxw0100       N/A          I2c Initial Version
*   0.2.0       27/09/2023    qxw0100       N/A          Add multicore support
*   0.3.0       09/10/2023    qxw0100       N/A          Fix notification channel bug
*   0.4.0       17/11/2023    qxw0100       N/A          Fix error status bug
*   0.5.0       17/01/2024    qxw0100       N/A          Fix status bug
*   0.6.0       18/01/2024    qxw0100       N/A          Add channel fault clear function
                                                         Add NACK signal for user choice
*   1.2.1       23/06/2025    qxw0120       N/A          Update subaddress mode
*   1.4.0       10/09/2025    qxw0120       N/A          Optimize code， increase the use of FIFO
==================================================================================================*/
#ifndef CDD_I2C_TYPES_H
#define CDD_I2C_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Mcal.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief I2C slave mode
 * */
#define I2C_SLAVE_MODE           ((uint8)0x00U)

/**
 * @brief I2C master mode
 * */
#define I2C_MASTER_MODE          ((uint8)0x01U)

/**
 * @brief I2C un-init
 * */
#define I2C_MODE_UNINIT          ((uint8)0x02U)

/* [SWS_CDD_I2C_00081] */
/**
 * @brief IIC read data
 * */
#define I2C_DIR_READ             (0x1U)

/**
 * @brief IIC write data
 * */
#define I2C_DIR_WRITE            (0x0U)

/**
 * @brief IIC direction mask
 * */
#define I2C_DIR_MASK             (0x1U)

/**
 * @brief IIC subAddress max size allowed
 * */
#define I2C_SUB_ADDRESS_MAX_SIZE (0x4U)

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/
/**
 * @brief   IIC channel status enum.
 * [SWS_CDD_I2C_00067]
 *
 */
typedef enum
{
    I2C_CH_IDLE = 0U,      /**< I2C channel is idle */
    I2C_CH_SENDING,        /**< I2C channel is sending */
    I2C_CH_RECEIVING,      /**< I2C channel is receiving */
    I2C_CH_LISTENING_READ, /**< I2C channel is listening */
    I2C_CH_LISTENING,      /**< I2C channel is listening */
    I2C_CH_ERROR_PRESENT,  /**< I2C channel is error present */
    I2C_CH_CLOSED,         /**< I2C channel is closed */
} I2c_ChannelStatusType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief   IIC initial data struct define. [SWS_CDD_I2C_00082]
 *
 */
typedef struct
{
    uint8 u8MasterMode; /**< bMasterMode=1 master mode */
    uint8 u8SlaveAddr;  /**< if bMasterMode=0, this is used, and address format is 7bits , not ended
                           with R/W bit */
    uint8 u8HwIndex;    /**< define the index select by user    */
} FCIIC_InitType;

/**
 * @brief   IIC initial register struct define. [SWS_CDD_I2C_00083]
 *
 */
typedef struct
{
    uint32 MCR;             /**< Master Control                             */
    uint32 MDER;            /**< MDER Receive and transmit data dma enable  */
    uint32 MCFGR0;          /**< Master Configuration 0                     */
    uint32 MCFGR1;          /**< Master Configuration 1                     */
    uint32 MCFGR2;          /**< Master Configuration 2                     */
    uint32 MCFGR3;          /**< Master Configuration 3                     */
    uint32 MCCR;            /**< Master Clock Configuration                 */
    uint32 MFCR;            /**< MFCR Receive & transmit FIFO Watermark     */
    uint32 SCR;             /**< Slave Control                              */
    uint32 SDER;            /**< SDER Receive and transmit data dma enable  */
    uint32 SCFGR1;          /**< Slave Configuration 1                      */
    uint32 SCFGR2;          /**< Slave Configuration 2                      */
    uint32 SAMR;            /**< Slave Address Match                        */
    uint8  u8TxDmaInstance; /**< DMA instance used for transmit data        */
    uint8  u8TxDmaChannel;  /**< DMA channel used for transmit data         */
    uint8  u8RxDmaInstance; /**< DMA instance used for receive data          */
    uint8  u8RxDmaChannel;  /**< DMA channel used for receive data          */
} FCIIC_RegCfgType;

/**
 * @brief   This structure contains the hardware channel configuration parameters. [SWS_CDD_I2C_00084]
 *
 */
typedef struct
{
    uint8                   I2c_CoreId;    /**< @brief Reference ECU partition. */
    const FCIIC_InitType   *tFCI2c_Config; /**< Incidates init mode.       */
    const FCIIC_RegCfgType *tFCI2c_reg;    /**< Init registers for I2c.    */
} I2c_InitChannelConfigType;

/**
 * @brief   This structure contains IIC initialization data. [SWS_CDD_I2C_00085]
 *
 */
typedef struct
{
    uint8 I2c_MaxHwUnit; /**< @brief The maximum number of configured I2C Hw unit in the current
                            configuration structure. */
    const I2c_InitChannelConfigType (
        *I2c_pParmConfig)[]; /**< @brief Pointer to I2c hardware unit configuration */
} I2c_ConfigType;

/**
 * @brief   IIC request struct define. [SWS_CDD_I2C_00086]
 *
 */
typedef struct
{
    uint8  u8SlaveAddress; /**< @brief 7bit Slave address.*/
    uint8  u8Direction;    /**< @brief Read or write.*/
    uint16 u16Len;         /**< @brief the length of read or write.*/
    uint8  subAddressSize; /*!< Size of the sub-address in bytes. Max is 4 bytes. */
    uint32 subAddress;     /*!< Sub-address for targeted register. Sent MSB first. */
    uint16 u16BufferSize;  /**< Buffer size.*/
    uint8 *BufferPtr;      /**< @brief Pointer to buffer.*/

} I2c_RequestType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* CDD_I2C_TYPES_H */

/** @} */
