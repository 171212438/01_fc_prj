/**
*   @file    Uart_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - Specific type definition
*   @details This file contains the uART specific type definition.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
*   PLATFORM             : FlagchUART_TEXT_SECTION void Uart_FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : FlagchUART_TEXT_SECTION void Uart_Semiconductors
*
*   Copyright 2020-2023 FlagchUART_TEXT_SECTION void Uart_Semiconductors Co., Ltd.
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

#ifndef UART_TYPES_H
#define UART_TYPES_H


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
#include "Uart_GeneralTypes.h"
#include "CDD_Uart_Defines.h"

#if (UART_HAS_DMA_ENABLED == STD_ON)
#include "CDD_Dma.h"
#endif
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

#if ((UART_DEV_ERROR_DETECT == STD_ON) || (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON))

/**
* @brief            Driver not initialized
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_UNINIT               ((uint8)0x01U)

/**
* @brief Invalid channel given as parameter
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_INVALID_CHANNEL      ((uint8)0x02U)

/**
* @brief Invalid channel given as parameter
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_INVALID_POINTER      ((uint8)0x03U)

/**
* @brief Driver already initialized
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_ALREADY_INITIALIZED  ((uint8)0x04U)

/**
* @brief Invalid coreid
*
*/
#define UART_E_PARAM_CONFIG         ((uint8)0x05U)

/**
* @brief Channel is busy, therefore the service can not be executed
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_CHANNEL_BUSY         ((uint8)0x06U)

/**
* @brief Parameter has a wrong value
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_INVALID_PARAMETER    ((uint8)0x07U)

/**
* @brief Timeout occured
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_TIMEOUT              ((uint8)0x08U)

/**
* @brief Invalid pointer for init function parameter
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_INIT_FAILED          ((uint8)0x09U)

/**
* @brief De-Init function for specific HW channel finish unsuccessfully
* @details Errors reported by Det_ReportError() and Det_ReportRuntimeError().
*
*/
#define UART_E_DEINIT_FAILED         ((uint8)0x10U)



/**< @brief API service ID for UART_Init() function
* @details          Parameters used when raising an error or exception.
*
*/
#define UART_INIT_ID                 ((uint8)0x00U)

/**
* @brief API service ID for UART_DeInit() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_DEINIT_ID               ((uint8)0x01U)

/**
* @brief API service ID for UART_SetBaudrate() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_SETBAUDRATE_ID          ((uint8)0x02U)

/**
* @brief API service ID for UART_GetBaudrate() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_GETBAUDRATE_ID          ((uint8)0x03U)

/**
* @brief API service ID for UART_SyncSend() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_SYNCSEND_ID             ((uint8)0x04U)

/**
* @brief API service ID for UART_AsyncReceive() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_ASYNCSEND_ID            ((uint8)0x05U)

/**
* @brief API service ID for UART_SyncReceive() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_SYNCRECEIVE_ID          ((uint8)0x06U)

/**
* @brief API service ID for UART_AsyncSend() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_ASYNCRECEIVE_ID         ((uint8)0x07U)

/**
* @brief API service ID for Uart_AbortTransfer() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_ABORTTRANSFER_ID                ((uint8)0x08U)

/**
* @brief API service ID for UART_GetStatus() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_GETSTATUS_ID            ((uint8)0x09U)

/**
* @brief API service ID for Uart_GetVersionInfo() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_VERSIONINFO_ID          ((uint8)0x0AU)

/**
* @brief API service ID for UART_SetTransBuffer() function
* @details Parameters used when raising an error or exception.
*
*/
#define UART_SETTRANSBUFFER_ID            ((uint8)0x0BU)
#endif /*EV_ERROR_DETECT == STD_ON) || (UART_DET_RUNTIME_REPORT_ERROR_STATUS == STD_ON)) */

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/
/**
* @brief          The type operation of an Uart channel.
*/
/* implements     Uart_DirectionType_enum */
typedef enum
{
    UART_SEND    = (uint8)0x00U, /**<  The sending operation */
    UART_RECEIVE = (uint8)0x01U  /**<  The receiving operation */
} Uart_DirectionType;

typedef enum
{
	UART_RXFiFo_Enable  = 0U,
	UART_RXFiFo_Disable  = 1U,
} Uart_RxFiFoType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Callback for all peripherals which support UART features
 *
 *
 */
typedef void (*Uart_CallbackType)(const uint8 HwInstance,
		                          const uint16 size,
								  const uint8 *DataBuffer,
                                  const Uart_EventType Event);

/*!
 * @brief Runtime status of the UART driver.
 *
 * Note that the caller provides memory for the driver structures during
 * initialization because the driver does not statically allocate memory.
 *
 * Implements : Uart_StateStructureType
 */
typedef struct
{
    uint32 BaudRate;                                        /**<  Variable that indicates if structure belongs to an instance already initialized.*/
    const uint8 * TxBuff;                                   /**<  The buffer of data being sent.*/
    uint8 * RxBuff;                                         /**<  The buffer of received data.*/
    volatile uint32 TxSize;                                 /**<  The remaining number of bytes to be transmitted. */
    volatile uint32 RxSize;                                 /**<  The remaining number of bytes to be received. */
    volatile boolean IsTxBusy;                              /**<  True if there is an active transmit.*/
    volatile boolean IsRxBusy;                              /**<  True if there is an active receive.*/
    volatile Uart_StatusType TransmitStatus;                /**<  Status of last driver transmit operation */
    volatile Uart_StatusType ReceiveStatus;                 /**<  Status of last driver receive operation */
}  Uart_StateStructureType;


/*! @brief UART configuration structure
 *
 * Implements : Uart_UserConfigType
 */
typedef struct
{
    uint32 BaudRate;                                    /**< Baudrate value*/
    uint32 BaudRateDivisor;                             /**< Baud clock divisor*/
    uint8 BaudOverSamplingRatio;                        /**< Over sampling ratio*/

    Uart_ParityModeType ParityMode;                     /**< Parity mode, disabled (default), even, odd */
    Uart_StopBitCountType StopBitsCount;                /**< Number of stop bits, 1 stop bit (default) or 2 stop bits */
    Uart_BitCountPerCharType BitCountPerChar;           /**< Number of bits in a character (8-default, 9 or 10);
                                                             for 9/10 bits chars, users must provide appropriate buffers
                                                             to the send/receive functions (bits 8/9 in subsequent bytes);
                                                             for DMA transmission only 8-bit char is supported. */
    Uart_TransferType TransferType;                     /**< Type of UART transfer (interrupt/dma based) */
#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
    Uart_IdleCharNumType IdleCharNum;                   /**< Number of idle characters to detect */
#endif /* UART_ENABLE_TIMEOUT_INTERRUPT */
    Uart_CallbackType Callback;                         /**< Callback to invoke for handle uart event */
#if (UART_HAS_DMA_ENABLED == STD_ON)
    Dma_InstanceType eRxDmaInstance;                    /**< DMA instance number for DMA-based rx */
    uint32 RxDMAChannel;                                /**< DMA channel number for DMA-based rx.
                                                             If DMA mode is not used this field will be ignored. */
    Dma_InstanceType eTxDmaInstance;                    /**< DMA instance number for DMA-based tx*/
    uint32 TxDMAChannel;                                /**< DMA channel number for DMA-based tx.
                                                             If DMA mode is not used this field will be ignored. */
#endif
    Uart_StateStructureType *StateStruct;
    uint8 *InternalBuffer;
    uint8 *TOUserBuffer;
    uint16 *AsyncRead_Position;
    uint16 InternalBufferSize;
    uint16 ToUserBufferSize;
    Uart_RxFiFoType RxFiFoEnable;
} Uart_UserConfigType;

/**
* @internal
* @brief   Structure which brings together all the hardware
*          specific information regarding a channel
* @details This structure contains a pointer to the
*          UART_TEXT_SECTION void Uart_configuration structure, the type of hardware instance and
*          the number of it.
*/
typedef struct
{
    uint32 UartHwChannel;                   /**< Uart Hardware Channel.*/
    const Uart_UserConfigType * UserConfig; /**< Pointer to the UART_TEXT_SECTION void Uart_configuration structure.*/
}
Uart_HwConfigType;

/**
* @brief          Uart channel configuration type structure.
* @details        This is the type of the external data structure containing
*                 the overall initialization data for one Uart Channel.
*                 A pointer to such a structure is provided to the Uart channel
*                 initialization routine for configuration of the Uart hardware
*                 channel.
*
*
*/
/* implements     Uart_ChannelConfigType_structure */
typedef struct
{
    uint8 UartChannelId;                            /**<  Uart channel configured  */
#if (UART_MULTICORE_SUPPORT == STD_ON)
    uint32 ChannelCoreId;                           /**<  Core id on which the Uart channel has been assigned  */
#endif
    uint32 ChannelClockFrequency;                   /**<  The clock frequency configured on the given channel  */
    const Uart_HwConfigType* UartChannelConfig;     /**<  Pointer to a lower level channel configuration  */
} Uart_ChannelConfigType;

/**
* @brief          Uart driver configuration type structure.
* @details        This is the type of the pointer to the external data
*                 Uart Channels.
*                 A pointer of such a structure is provided to the Uart driver
*                 initialization routine for configuration of the Uart hardware
*                 channel.
*
*
*
*/
/* implements     Uart_ConfigType_structure */
typedef struct
{
#if (UART_MULTICORE_SUPPORT == STD_ON)
    uint32 PartitionCoreId;                                 /**<  Partition configured of the core  */
#endif
    /**
     * @brief     Hardware channel.
     * @details   Constant pointer of the constant external data
     *            structure containing the overall initialization data
     *            for all the configured Uart Channels.
     */
    const Uart_ChannelConfigType *Configs[UART_CH_MAX_CONFIG];
} Uart_ConfigType;

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

#endif /* UART_Types_H */
