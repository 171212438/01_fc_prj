/**
*   @file     CDD_I2c.h
*   @version 1.5.1

*   @brief   AUTOSAR CDD I2c - Complex driver header of I2c module.
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
#ifndef CDD_I2C_H
#define CDD_I2C_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_I2c_Hw.h"
#include "Mcal.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/* [SWS_CDD_I2C_00060] */

/**
 * @brief API service called with wrong parameter job
 *
 */
#define I2C_E_PARAM_JOB                      ((uint8)0x01U)

/**
 * @brief API service called with wrong parameter sequence
 *
 */
#define I2C_E_PARAM_SEQUENCE                 ((uint8)0x02U)

/**
 * @brief API service called with wrong parameter length
 *
 */
#define I2C_E_PARAM_LENGTH                   ((uint8)0x03U)

/**
 * @brief API service called with wrong parameter channel
 *
 */
#define I2C_E_PARAM_UNIT                     ((uint8)0x04U)

/**
 * @brief API service called with wrong parameter address
 *
 */
#define I2C_E_PARAM_ADDRESS                  ((uint8)0x05U)

/**
 * @brief API service called with an unexpected value for the pointer
 *
 */
#define I2C_E_PARAM_POINTER                  ((uint8)0x06U)

/**
 * @brief API service used without module initialization
 *
 */
#define I2C_E_UNINIT                         ((uint8)0x07U)

/**
 * @brief API service used while the I2C Driver is busy
 *
 */
#define I2C_E_BUSY                           ((uint8)0x08U)

/**
 * @brief API I2C_Init service called while the I2C Driver has already been initialized
 *
 */
#define I2C_E_ALREADY_INITIALIZED            ((uint8)0x09U)

/**
 * @brief API service called with wrong core id
 *
 */
#define I2C_E_INV_CTRL_IDX                   ((uint8)0x0AU)

/* [SWS_CDD_I2C_00075] */

/**
 * @brief Bus is busy for a period of time larger than the configured timeout
 *
 */
#define I2C_E_TIMEOUT_FAILURE                ((uint8)0x01U)

/**
 * @brief Error is reported if NACK was received
 *
 */
#define I2C_E_NACK_RECEIVED                  ((uint8)0x02U)

/**
 * @brief Error is reported if the master loses arbitration. This usually happens if the SDA is
 * stuck low or another master has won the arbitration procedure
 *
 */
#define I2C_E_ARBITRATION_FAILURE            ((uint8)0x03U)

/**
 * @brief Error is reported in case of FIFO underflow or overflow
 *
 */
#define I2C_E_FIFO_HANDLING                  ((uint8)0x04U)

/**
 * @brief Error is reported if the SCL line is stuck low
 *
 */
#define I2C_E_BUS_FAILURE                    ((uint8)0x05U)

/**
 * @brief Error is reported if the application layer direction is inconsistent with the physical
 * layer direction
 *
 */
#define I2C_E_DIRECTION_FAILURE              ((uint8)0x06U)

/**
 * @brief Error is reported if Transmit or Receive Error
 *
 */
#define I2C_E_SLAVE_TR_FAILURE               ((uint8)0x07U)

/**
 * @brief Error is reported if Transmit or Receive Error
 *
 */
#define I2C_E_SLAVE_BE_FAILURE               ((uint8)0x08U)

/**
 * @brief Error is reported if Transmit or Receive Error
 *
 */
#define I2C_E_SLAVE_DMA_TRANSMIT_NUMBER_LESS ((uint8)0x09U)

/**
 * @brief Error is reported if Transmit or Receive Error
 *
 */
#define I2C_E_SLAVE_DMA_RECEIVE_NUMBER_MORE  ((uint8)0x0AU)

/**
 * @brief Error is reported if Transmit or Receive Error
 *
 */
#define I2C_E_SLAVE_DMA_RECEIVE_NUMBER_LESS  ((uint8)0x0BU)

/**
 * @brief Error is reported if Transmit or Receive Error
 *
 */
#define I2C_E_SLAVE_DMA_TRANSMIT_NUMBER_MORE ((uint8)0x0CU)

/**
 * @brief Errors due to inconsistencies between the operation data request method and the configured
 * function
 *
 */
#define I2C_E_REQUEST_METHOD                 ((uint8)0x0DU)

/**
 * @brief Errors due to Turn on DMA support, but do not enable DMA
 *
 */
#define I2C_E_DISABLE_DMA                    ((uint8)0x0EU)

/**
 * @brief state machine error
 *
 */
#define I2C_E_STATEMACHINE_ERROR             ((uint8)0x0FU)

/**
 * @brief This type defines a range of specific status for I2C Driver
 *
 */

/**
 * @brief This type defines a range of specific status for I2C Driver
 * [SWS_CDD_I2C_00076]
 *
 */
typedef enum
{
    I2C_UNINIT = 0, /**< @brief The I2C Driver is not initialized or not usable. */
    I2C_IDLE   = 1, /**< @brief The I2C Driver is not currently transmitting any Job. */
    I2C_BUSY   = 2, /**< @brief The I2c Driver is performing a Job (transmit). */
} I2c_StatusType;

/**
 * @brief API service ID for I2c_Init function
 * */
#define I2C_INIT_ID           ((uint8)0x00U)

/**
 * @brief API service ID for I2c_DeInit function
 * */
#define I2C_DEINIT_ID         ((uint8)0x01U)

/**
 * @brief API service ID for I2c_SyncTransmit function
 * */
#define I2C_SYNCTRANSMIT_ID   ((uint8)0x02U)

/**
 * @brief API service ID for I2c_AsyncTransmit function
 * */
#define I2C_ASYNCTRANSMIT_ID  ((uint8)0x03U)

/**
 * @brief API service ID for I2c_GetStatus function
 * */
#define I2C_GETSTATUS_ID      ((uint8)0x04U)

/**
 * @brief API service ID for I2c_ClearStatus function
 * */
#define I2C_CLEARSTATUS_ID    ((uint8)0x05U)

/**
 * @brief API service ID for I2c_StartListening function
 * */
#define I2C_STARTLISTENING_ID ((uint8)0x06U)

/**
 * @brief API service ID for I2c_IsTimeout function
 * */
#define I2C_ISTIMEOUT_ID      ((uint8)0x07U)
/**
 * @brief API service ID for I2c_GetVersionInfo function
 * */
#define I2C_GETVERSIONINFO_ID ((uint8)0x0AU)

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define I2C_START_SEC_CODE
#include "I2c_MemMap.h"

/**
 * @brief        IIC initial.
 *
 * @param[in]    pI2cCfg  The IIC configuration type.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void I2c_Init(const I2c_ConfigType *pI2cCfg);

/**
 * @brief        IIC de-initial.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void I2c_DeInit(void);

/**
 * @brief        IIC master send or receive message at polling mode.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    pRequestPtr     The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr);

/**
 * @brief        IIC master send or receive message at asynchronous mode.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    pRequestPtr     The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_AsyncTransmit(uint8                  u8Channel,
                                                  const I2c_RequestType *pRequestPtr);

/**
 * @brief        IIC slave send or receive message.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    pRequestPtr     The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_StartListening(uint8                  u8Channel,
                                                   const I2c_RequestType *pRequestPtr);

/**
 * @brief        IIC get status.
 *
 * @param[in]    u8Channel              The IIC channel.
 *
 * @return       I2c_ChannelStatusType  The channel status.
 */
I2C_TEXT_SECTION I2c_ChannelStatusType I2c_GetStatus(uint8 u8Channel);

/**
 * @brief        IIC clear channel fault status.
 * [SWS_CDD_I2C_00112]
 *
 * @param[in]    u8Channel                  The IIC channel.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_ClearStatus(uint8 u8Channel);

/**
 * @brief        IIC check timeout.
 *
 * @param[in]    u8Channel              The IIC channel.
 * @param[in]    u32Times               The transmission time is considered a timeout,The actual
 * time is equal to the query period multiplied by u32Times.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            no timeout.
 * @retval       E_NOT_OK        timeout.
 */
I2C_TEXT_SECTION Std_ReturnType I2c_IsTimeout(uint8 u8Channel, uint32 u32Times);

#if defined(FCI2C_0)
/**
 * @brief        FCIIC0 ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCI2C_0_ISR(void);

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        FCIIC0 DMA Tx ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC0_DMATxIsr(void);

/**
 * @brief        FCIIC0 DMA Rx ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC0_DMARxIsr(void);
#endif /* STD_ON == I2C_DMA_USED */
#endif /* defined(FCI2C_0) */

#if defined(FCI2C_1)
/**
 * @brief        FCIIC1 ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCI2C_1_ISR(void);

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        FCIIC1 DMA Tx ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC1_DMATxIsr(void);

/**
 * @brief        FCIIC1 DMA Rx ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC1_DMARxIsr(void);
#endif /* STD_ON == I2C_DMA_USED */
#endif /* defined(FCI2C_1) */

#if (I2C_VERSION_INFO_API == STD_ON)
/**
 * @brief        IIC get version.
 *
 * @param[in]    pVersionInfo    The IIC version type.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void I2c_GetVersionInfo(Std_VersionInfoType *pVersionInfo);
#endif /* #if I2C_VERSION_INFO_API == STD_ON */

#define I2C_STOP_SEC_CODE
#include "I2c_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_I2C_H */

/** @} */
