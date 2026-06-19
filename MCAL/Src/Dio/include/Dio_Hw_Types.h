/**
*   @file    Dio_Hw_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - hardware specific type definition
*   @details This file contains the DIO Autosar hardware specific type definition
*
*   @addtogroup DIO
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DIO
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
*   0.1.0       14/07/2023    QXW0071       N/A          DIO Initial Version
*   0.2.0       27/09/2023    QXW0105       N/A          DIO Support Multi-Core
*   0.3.0       20/10/2023    QXW0105       N/A          N/A
*   0.4.0       20/11/2023    QXW0105       N/A          optimize code
==================================================================================================*/
#ifndef DIO_HW_TYPES_H
#define DIO_HW_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif
/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Gpio_Reg.h"


/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/



/**
* @brief          Type of a DIO port representation.
*
* @implements     Dio_PortType_typedef
*
* @api
*/
typedef uint8 Dio_PortType;

/**
* @brief          Type of a DIO channel representation.
*
* @implements     Dio_ChannelType_typedef
*
* @api
*/
typedef uint16 Dio_ChannelType;

/**
* @brief          Type of a DIO port levels representation.
*
* @implements     Dio_PortLevelType_typedef
*
* @api
*/
typedef uint32 Dio_PortLevelType;

/**
* @brief          Type of a DIO channel levels representation.
*
* @implements     Dio_LevelType_typedef
*
* @api
*/
typedef uint8 Dio_LevelType;

/**
* @brief          Type of a DIO channel group representation.
*
* @implements     Dio_ChannelGroupType_struct
*
* @api
*/
typedef struct
{
    Dio_PortType       port;      /**< @brief Port identifier.  */
    uint8              offset;    /**< @brief Bit offset within the port. */
    Dio_PortLevelType  mask;      /**< @brief Group mask. */
} Dio_ChannelGroupType;

/**
* @brief          Configuration of a DIO channel/channel group representation.
*
* @implements     Dio_CoreConfigInfoType
*
* @api
*/
typedef struct
{
    Dio_PortType       u8Port;
    Dio_ChannelType    u16Channel;
    const uint32       *pCoreUsed;
} Dio_CoreConfigInfoType;

/**
* @brief
*
* @note
*
* @implements     Dio_ConfigType_struct
*
* @api
*/
typedef struct
{
    const Dio_ChannelGroupType *pChannelGroupList;
} Dio_ConfigType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/


/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/


#ifdef __cplusplus
}
#endif
/* _HW_TYPES_H */
#endif
/** @} */

