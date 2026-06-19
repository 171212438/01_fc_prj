/**
*   @file    Dio.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - driver API and development errors implemention.
*   @details This file contains the Dio Autosar driver API and development errors implemention.
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
*   0.3.0       27/09/2023    QXW0105       N/A          DIO Support Multi-Core
*   0.4.0       20/11/2023    QXW0105       N/A          optimize code
==================================================================================================*/
#ifndef DIO_H
#define DIO_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Dio_Cfg.h"
#include "Mcal.h"
#include "Std_Types.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/**
 * @brief          Invalid channel name requested.
 *
 * @implements     Dio_ErrorCodes_define
 *
 * @api
 */
#define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)0x0A)

/**
 * @brief          API service called with "NULL pointer" parameter.
 *
 * @implements     Dio_ErrorCodes_define
 *
 * @api
 */
#define DIO_E_PARAM_CONFIG             ((uint8)0x10)

/**
 * @brief          Invalid port name requested.
 *
 * @implements     Dio_ErrorCodes_define
 *
 * @api
 */
#define DIO_E_PARAM_INVALID_PORT_ID    ((uint8)0x14)

/**
 * @brief          Invalid ChannelGroup id passed.
 *
 * @implements     Dio_ErrorCodes_define
 *
 * @api
 */
#define DIO_E_PARAM_INVALID_GROUP_ID   ((uint8)0x1F)

/**
 * @brief          API service called with a NULL pointer.
 * @details        In case of this error, the API service shall return
 *                 immediately without any further action, beside reporting
 *                 this development error.
 *
 * @implements     Dio_ErrorCodes_define
 *
 * @api
 */
#define DIO_E_PARAM_POINTER            ((uint8)0x20)

/**
 * @brief          API service called with invalid channel level value.
 * @details        In case of this error, the API service shall return
 *                 immediately without any further action, beside reporting
 *                 this development error.
 *
 * @implements     Dio_ErrorCodes_define
 *
 * @api
 */
#define DIO_E_PARAM_LEVEL              ((uint8)0x21)

/**
 * @brief          API service ID for @p Dio_ReadChannel() function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_READCHANNEL_ID             ((uint8)0x00)

/**
 * @brief          API service ID for @p Dio_WriteChannel() function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */

#define DIO_WRITECHANNEL_ID            ((uint8)0x01)

/**
 * @brief          API service ID for @p Dio_FlipChannel() function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_FLIPCHANNEL_ID             ((uint8)0x11)

/**
 * @brief          API service ID for @p Dio_ReadPort() function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_READPORT_ID                ((uint8)0x02)

/**
 * @brief          API service ID for @p Dio_WritePort() function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_WRITEPORT_ID               ((uint8)0x03)

/**
 * @brief          API service ID for @p Dio_ReadChannel() Group function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_READCHANNELGROUP_ID        ((uint8)0x04)

/**
 * @brief          API service ID for @p Dio_WriteChannel() Group function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_WRITECHANNELGROUP_ID       ((uint8)0x05)

/**
 * @brief          API service ID for DIO Get Version() Info function.
 * @details        Parameters used when raising an error/exception.
 *
 * @api
 */
#define DIO_GETVERSIONINFO_ID          ((uint8)0x12)

/**
* @brief          API service ID for @p Dio_MaskedWritePort() Info function.
* @details        Parameters used when raising an error/exception.
*
* @api
*/
#define DIO_MASKEDWRITEPORT_ID         ((uint8)0x13)

/**
 * @brief          Instance ID of the Dio driver.
 *
 * @implements     .
 *
 * @api
 */
#define DIO_INSTANCE_ID                ((uint8)0x00)

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/**
 * @brief check if the chip has the pin corresponding to ChannelId
 */
#define DIO_CHECK_PORT_CHANNEL_VALID(ChannelId)               \
    (Dio_u32ValidPortPins[ChannelId >> DIO_PORTID_SHIFT_U8] & \
     (uint32)((Dio_PortLevelType)1 << ((ChannelId) & DIO_CHANNEL_MASK_U8)))

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

#ifdef CPU_TYPE
#if (CPU_TYPE == CPU_TYPE_64)
/**
 * @brief size of pointer type. on CPU_TYPE_32, the size is 32bits.
 */
typedef uint64 pointerSizeType;

#elif (CPU_TYPE == CPU_TYPE_32)
/**
 * @brief size of pointer type. on CPU_TYPE_32, the size is 32bits.
 */
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type has been used in file Dio.c */
typedef uint32 pointerSizeType;
/* PRQA S 1535 -- */
#elif (CPU_TYPE == CPU_TYPE_16)
/**
 * @brief size of pointer type. on CPU_TYPE_16, the size is 16bits.
 */
typedef uint16 pointerSizeType;
#endif
#endif

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#define DIO_START_SEC_CODE
#include "Dio_MemMap.h"

DIO_TEXT_SECTION Dio_LevelType Dio_ReadChannel(const Dio_ChannelType ChannelId);

DIO_TEXT_SECTION void Dio_WriteChannel(const Dio_ChannelType ChannelId, const Dio_LevelType Level);

#if (STD_ON == DIO_FLIP_CHANNEL_API)
DIO_TEXT_SECTION Dio_LevelType Dio_FlipChannel(const Dio_ChannelType ChannelId);
#endif /* (STD_ON == DIO_FLIP_CHANNEL_API) */

DIO_TEXT_SECTION Dio_PortLevelType Dio_ReadPort(const Dio_PortType PortId);

DIO_TEXT_SECTION void Dio_WritePort(const Dio_PortType PortId, const Dio_PortLevelType Level);

DIO_TEXT_SECTION Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr);

DIO_TEXT_SECTION void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr,
                                            const Dio_PortLevelType     Level);

#if (STD_ON == DIO_MASKED_WRITE_PORT_API)
DIO_TEXT_SECTION void Dio_MaskedWritePort(Dio_PortType      PortId,
                                          Dio_PortLevelType Level,
                                          Dio_PortLevelType Mask);
#endif /* (STD_ON == DIO_MASKED_WRITE_PORT_API) */

#if (STD_ON == DIO_VERSION_INFO_API)
DIO_TEXT_SECTION void Dio_GetVersionInfo(Std_VersionInfoType *VersionInfo);
#endif /* (STD_ON == DIO_VERSION_INFO_API) */

#define DIO_STOP_SEC_CODE
#include "Dio_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* DIO_H */

/** @} */
