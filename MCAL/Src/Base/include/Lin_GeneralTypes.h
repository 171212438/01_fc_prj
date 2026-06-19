/**
*   @file    Lin_GeneralTypes.h
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/
/* [SWS_Lin_00245] */
#ifndef LIN_GENERAL_TYPES_H
#define LIN_GENERAL_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif
/**
* @file           Lin_GeneralTypes.h
*/
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Lin_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/**
@{
* @brief Parameters that shall be published within the modules header file.
*       The integration of incompatible files shall be avoided.
*/
#define LIN_GENERALTYPES_AR_RELEASE_MAJOR_VERSION      4
#define LIN_GENERALTYPES_AR_RELEASE_MINOR_VERSION      6
#define LIN_GENERALTYPES_AR_RELEASE_PATCH_VERSION      0

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief          Checksum models for the LIN Frame.
* @details        This type is used to specify the Checksum model to be
*                 used for the LIN Frame.
*/
/* [SWS_Lin_00229] */
typedef enum
{
    LIN_ENHANCED_CS = 0U,    /**< @brief Enhanced checksum model.*/
    LIN_CLASSIC_CS           /**< @brief Classic checksum model.*/
} Lin_FrameCsModelType;

/**
* @brief          Frame response types.
* @details        This type is used to specify whether the frame
*                 processor is required to transmit the response
*                 part of the LIN frame.
*/
/* [SWS_Lin_00230] [FUNC_Lin_0009] */
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
typedef enum
{
    LIN_MASTER_RESPONSE = 0,    /**< @brief Response is generated from
                                            this (master) node.*/
    LIN_SLAVE_RESPONSE,         /**< @brief Response is generated from a
                                            remote slave node.*/
    LIN_SLAVE_TO_SLAVE          /**< @brief Response is generated from another
                                              node and is irrelevant for this node.*/
} Lin_FrameResponseType;
#else
typedef enum
{
    LIN_FRAMERESPONSE_TX = 0,    /**< @brief Response is generated from
                                            this node.*/
    LIN_FRAMERESPONSE_RX,        /**< @brief Response is generated from another node and is
                                            relevant for this node*/
    LIN_FRAMERESPONSE_IGNORE     /**< @brief Response is generated from another
                                            node and is irrelevant for this node.*/
} Lin_FrameResponseType;
#endif

/**
* @brief          LIN Frame and Channel states operation.
* @details        LIN operation states for a LIN channel or frame, as returned
*                 by the API service Lin_GetStatus().
*                 part of the LIN frame.
*                 All the specifications refer to AUTOSAR_LINDriver Docs.
*/
/* [SWS_Lin_00233] */
typedef enum
{
    LIN_NOT_OK = 0U,     /**< @brief Development or production erroroccurred.*/
    LIN_TX_OK,           /**< @brief Successful transmission.*/
    LIN_TX_BUSY,         /**< @brief Ongoing transmission (Header or Response).*/
    LIN_TX_HEADER_ERROR, /**< @brief Erroneous header transmission such as:
                                     - Mismatch between sent and read back data
                                     - Identifier parity error
                                     - Physical bus error.*/
    LIN_TX_ERROR,        /**< @brief Erroneous transmission such as:
                                     - Mismatch between sent and read back data
                                     - Physical bus error.*/
    LIN_RX_OK,           /**< @brief Reception of correct response.*/
    LIN_RX_BUSY,         /**< @brief Ongoing reception:
                                    at least one response byte has
                                    been received, but the checksum
                                    byte has not been received.*/
    LIN_RX_ERROR,        /**< @brief Erroneous reception such as:
                                     - Framing error
                                     - Overrun error
                                     - Checksum error
                                     - Short response.*/
    LIN_RX_NO_RESPONSE,  /**< @brief No response byte has been received so far.*/
    LIN_OPERATIONAL,     /**< @brief Normal operation;
                                     - The related LIN channel is ready
                                       to transmit next header
                                     - No data from previous frameavailable
                                       (e.g. after initialization).*/
    LIN_CH_SLEEP         /**< @brief Sleep mode operation;
                                     - In this mode wake-up detection
                                       from slave nodes is enabled.*/
} Lin_StatusType;

/**
* @brief          LIN Slave error type.
* @details        This type represents the slave error types that are detected during header reception
*                 and response transmission / reception
* @implements     Lin_SlaveErrorType_enum
*/
/* [SWS_Lin_91140] */
typedef enum
{
    LIN_ERR_HEADER = 0U,    /**< @brief Error in header */
    LIN_ERR_RESP_STOPBIT,   /**< @brief Framing error in response */
    LIN_ERR_RESP_CHKSUM,    /**< @brief Checksum error */
    LIN_ERR_RESP_DATABIT,   /**< @brief Monitoring error of transmitted data bit in response */
    LIN_ERR_NO_RESP,        /**< @brief No response */
    LIN_ERR_INC_RESP        /**< @brief Incomplete response */
} Lin_SlaveErrorType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Data length of a LIN Frame.
* @details        This type is used to specify the number of SDU data bytes to copy.
*/
/* [SWS_Lin_00231] */
typedef uint8 Lin_FrameDlType;

/**
* @brief          The LIN identifier (0..0x3F) with its parity bits(bit6,bit7).
* @details        Represents all valid protected Identifier used by Lin_SendHeader().
* @implements     Lin_FramePidType_typedef
*/
/* [SWS_Lin_00228] */
typedef uint8 Lin_FramePidType;

/**
* @brief          The LIN identifier (0..0x3F) with its parity bits(bit6,bit7).
* @details        This Type is used to provide PID, checksum model,
*                 data length and SDU pointer from the LIN Interface
*                 to the LIN driver.
*/
/* [SWS_Lin_00014] [SWS_Lin_00015] [SWS_Lin_00232] */
typedef struct
{
    Lin_FramePidType      Pid;     /**< @brief LIN frame identifier.*/
    Lin_FrameCsModelType  Cs;      /**< @brief Checksum model type.*/
    Lin_FrameResponseType Drc;     /**< @brief Response type.*/
    Lin_FrameDlType       Dl;      /**< @brief Data length.*/
    uint8                *SduPtr;  /**< @brief Pointer to Sdu.*/
} Lin_PduType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* LIN_GENERAL_TYPES_H */

/** @} */
