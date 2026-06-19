/**
*   @file    Uart_GeneralTypes.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - General types for UART.
*   @details This file contains the general types for UART module.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
*   PLATFORM             : Flagchip FC7xxx
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifndef UART_IPW_TYPES_H
#define UART_IPW_TYPES_H


#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/
/**
 * @brief  UART data bit length mode
 *
 */
typedef enum
{
    UART_7_BITS_PER_CHAR  = 0x0U, /**< 7-bit data characters */
    UART_8_BITS_PER_CHAR  = 0x1U, /**< 8-bit data characters */
    UART_9_BITS_PER_CHAR  = 0x2U, /**< 9-bit data characters */
    UART_10_BITS_PER_CHAR = 0x3U  /**< 10-bit data characters */
} Uart_BitCountPerCharType;

/**
 * @brief UART stop bits number
 *
 */
typedef enum
{
    UART_ONE_STOP_BIT = 0,     /**< UART_STOPBIT_NUM_1 */
    UART_TWO_STOP_BIT          /**< UART_STOPBIT_NUM_2 */
} Uart_StopBitCountType;

/**
 * @brief UART parity check type
 *
 */
typedef enum
{
    UART_DISABLED_PARITY = 0x0U,      /**< UART_PARITY_DISABLED */
    UART_EVEN_PARITY     = 0x2U,      /**< UART_PARITY_EVEN */
    UART_ODD_PARITY      = 0x3U       /**< UART_PARITY_ODD  */
} Uart_ParityModeType;


/**
 * @brief Type of UART transfer (based on interrupts or DMA).
 *
 *
 */
typedef enum
{
    UART_USING_DMA         = 0U,    /**< The driver will use DMA to perform UART transfer */
    UART_USING_INTERRUPTS  = 1U     /**< The driver will use interrupts to perform UART transfer */
} Uart_TransferType;


/**
 * @brief Driver status type.
 *
 *
 */
typedef enum
{
    UART_STATUS_SUCCESS                    = 0x00U,  /**< Uart operation success status */
    UART_STATUS_ERROR                      = 0x01U,  /**< Uart operation failure status */
    UART_STATUS_BUSY                       = 0x02U,  /**< Uart operation busy status */
    UART_STATUS_TIMEOUT                    = 0x03U,  /**< Uart operation timeout status */
    UART_STATUS_TX_UNDERRUN                = 0x04U,  /**< TX underrun error */
    UART_STATUS_RX_OVERRUN                 = 0x05U,  /**< RX overrun error */
    UART_STATUS_ABORTED                    = 0x06U,  /**< A transfer was aborted */
    UART_STATUS_FRAMING_ERROR              = 0x07U,  /**< Framing error */
    UART_STATUS_PARITY_ERROR               = 0x08U,  /**< Parity error */
    UART_STATUS_NOISE_ERROR                = 0x09U,  /**< Noise error */
    UART_STATUS_DMA_ERROR                  = 0x0AU,  /**< DMA error */
} Uart_StatusType;


/**
 * @brief Define the enum of the Events which can trigger UART callback
 *
 * This enum should include the Events for all platforms
 *
 *
 */
typedef enum
{
    UART_EVENT_RX_FULL      = 0x00U,    /**< Rx buffer is full */
    UART_EVENT_TX_EMPTY     = 0x01U,    /**< Tx buffer is empty */
    UART_EVENT_END_TRANSFER = 0x02U,    /**< The current transfer is ending */
    UART_EVENT_ERROR        = 0x03U,    /**< An error occured during transfer */
    UART_EVENT_IDLE         = 0x04U,    /**< UART is idle */
	UART_EVENT_RX_ASY       = 0x05U     /**< UART Resive by Async */

} Uart_EventType;

/**
 * @brief Baudrate values supported by Uart driver.
 *
 *
 *
 */
typedef enum
{
    UART_BAUDRATE_1200   = 1200U,       /**< Baudrate 1200 */
    UART_BAUDRATE_2400   = 2400U,       /**< Baudrate 2400 */
    UART_BAUDRATE_4800   = 4800U,       /**< Baudrate 4800 */
    UART_BAUDRATE_7200   = 7200U,       /**< Baudrate 7200 */
    UART_BAUDRATE_9600   = 9600U,       /**< Baudrate 9600 */
    UART_BAUDRATE_14400  = 14400U,      /**< Baudrate 14400 */
    UART_BAUDRATE_19200  = 19200U,      /**< Baudrate 19200 */
    UART_BAUDRATE_28800  = 28800U,      /**< Baudrate 28800 */
    UART_BAUDRATE_38400  = 38400U,      /**< Baudrate 38400 */
    UART_BAUDRATE_57600  = 57600U,      /**< Baudrate 57600 */
    UART_BAUDRATE_115200 = 115200U,     /**< Baudrate 115200 */
    UART_BAUDRATE_230400 = 230400U,     /**< Baudrate 230400 */
    UART_BAUDRATE_460800 = 460800U,     /**< Baudrate 460800 */
    UART_BAUDRATE_921600 = 921600U,     /**< Baudrate 921600 */
    UART_BAUDRATE_1843200 = 1843200U    /**< Baudrate 1843200 */
}Uart_BaudrateType;


/**
 * @brief The Uart idle character number
 * 
 */
typedef enum
{
    UART_IDLE_CHARACTER_1  = 0U,    /**< Number of idle characters: 1 */
    UART_IDLE_CHARACTER_2,          /**< Number of idle characters: 2 */
    UART_IDLE_CHARACTER_4,          /**< Number of idle characters: 4 */
    UART_IDLE_CHARACTER_8,          /**< Number of idle characters: 8 */
    UART_IDLE_CHARACTER_16,         /**< Number of idle characters: 16 */
    UART_IDLE_CHARACTER_32,         /**< Number of idle characters: 32 */
    UART_IDLE_CHARACTER_64,         /**< Number of idle characters: 64 */
    UART_IDLE_CHARACTER_128         /**< Number of idle characters: 128 */
} Uart_IdleCharNumType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /*UART_TYPES_H*/
