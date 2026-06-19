/**
*   @file    Can_GeneralTypes.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CAN - driver API and development errors implemention.
*   @details AUTOSAR CAN - driver API and development errors implemention.
*
*   @addtogroup CAN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
==================================================================================================*/
#ifndef CAN_GENERAL_TYPES_H
#define CAN_GENERAL_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "ComStack_Types.h" /*[SWS_Can_00222]*/
#include "Can_GeneralTypes_Cfg.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

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
 * @brief States that are used by the several ControllerMode functions. [SWS_Can_91013][SWDESG_CAN_195]
 *
 */
typedef enum
{
    CAN_CS_UNINIT  = 0U,   /**< CAN controller state UNINIT. */
    CAN_CS_STARTED = 1U,   /**< CAN controller state STARTED. */
    CAN_CS_STOPPED = 2U,   /**< CAN controller state STOPPED. */
    CAN_CS_SLEEP   = 3U    /**< CAN controller state SLEEP. */
} Can_ControllerStateType;

/**
 * @brief CAN Function Call Result
 *
 */
typedef enum
{
    CAN_OK = 0U,/**< CAN_OK     Call Correctly                                                                   */
    CAN_NOT_OK, /**< CAN_NOT_OK Call Error return                                                                */
    CAN_BUSY    /**< CAN_BUSY   Transmit request could not be processed because no transmit object was available [SWS_Can_00039] */
} Can_ReturnType;

/**
 * @brief Error states of a CAN controller. [SWDESG_CAN_194]
 *
 */
typedef enum
{
    CAN_ERRORSTATE_ACTIVE = 0U,/**< CAN_ERRORSTATE_ACTIVE  The CAN controller takes fully part in communication                                   */
    CAN_ERRORSTATE_PASSIVE,    /**< CAN_ERRORSTATE_PASSIVE The CAN controller takes part in communication, but does not send active error frames. */
    CAN_ERRORSTATE_BUSOFF      /**< CAN_ERRORSTATE_BUSOFF  The CAN controller does not take part in                                               */
}Can_ErrorStateType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief This type unites PduId (swPduHandle), SduLength (length), SduData (sdu), and CanId (id) for any CAN L-SDU. [SWS_Can_00415][SWDESG_CAN_191]
 *
 */
typedef struct
{
    Can_IdType id;            /**< Can ID              */
    PduIdType  swPduHandle;   /**< Pdu Handler        */
    uint8      length;        /**< Data Length         */
    uint8*     sdu;           /**< Point to Data Array */
} Can_PduType;

/**
 * @brief This type defines a data structure which clearly provides an Hardware Object Handle including its corresponding CAN Controller and therefore CanDrv as well as the specific CanId. [SWS_Can_00496]
 * [SWDESG_CAN_193]
 */
typedef struct
{
    Can_IdType        CanId;         /**< Standard/Extended CAN ID of CAN L-PDU                                        */
    Can_HwHandleType  Hoh;           /**< ID of the corresponding Hardware Object Range                                */
    uint8             ControllerId;  /**< ControllerId provided by CanIf clearly identify the corresponding controller */
} Can_HwType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /*CAN_GENERAL_TYPES_H*/
/** @} */
