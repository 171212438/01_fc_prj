/**
*   @file    Dio_Hw.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - Low level driver header file.
*   @details DIO Low level driver header file.
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
*   0.1.0       12/07/2023    QXW0071       N/A          DIO Initial Version
*   0.2.0       27/09/2023    QXW0105       N/A          DIO Support Multi-Core
*   0.3.0       20/10/2023    QXW0105       N/A          N/A
==================================================================================================*/
#ifndef DIO_HW_H
#define DIO_HW_H

#ifdef __cplusplus
extern "C"
{
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Dio_Cfg.h"
#include "Dio_Hw_Types.h"
#include "Port_Hw.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

#define DIO_USER_MODE_SOFTWARE_LOCKED      (STD_OFF)


/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/


/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/


/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#define DIO_START_SEC_CODE
#include "Dio_MemMap.h"


/**
* @brief   Read the channel level
*/
DIO_TEXT_SECTION Dio_LevelType Dio_HL_ReadChannel(const Dio_ChannelType u16ChannelId);

/**
* @brief   Write the level to the channel
*/
DIO_TEXT_SECTION void Dio_HL_WriteChannel(const Dio_ChannelType u16ChannelId, const Dio_LevelType u8Level);

#if (STD_ON == DIO_FLIP_CHANNEL_API)
/**
* @brief   Flip the level of the channel
*/
DIO_TEXT_SECTION Dio_LevelType Dio_HL_FlipChannel(const Dio_ChannelType u16ChannelId);
#endif /* (STD_ON == DIO_FLIP_CHANNEL_API) */

/**
* @brief   Read the port level
*/
DIO_TEXT_SECTION Dio_PortLevelType Dio_HL_ReadPort(const Dio_PortType u8PortId);

/**
* @brief   Write the port level
*/
DIO_TEXT_SECTION void Dio_HL_WritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level);

/**
* @brief   Read the level of the channels group
*/
DIO_TEXT_SECTION Dio_PortLevelType Dio_HL_ReadChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr);

/**
* @brief   Write the level of the channels group
*/
DIO_TEXT_SECTION void Dio_HL_WriteChannelGroup(const Dio_ChannelGroupType *pChannelGroupIdPtr, const Dio_PortLevelType u32Level);

#if (STD_ON == DIO_MASKED_WRITE_PORT_API)
/**
* @brief   Write the port level with mask
*/
DIO_TEXT_SECTION void Dio_HL_MaskedWritePort(const Dio_PortType u8PortId, const Dio_PortLevelType u32Level, const Dio_PortLevelType u32Mask);
#endif /* (STD_ON == DIO_MASKED_WRITE_PORT_API) */

#if ((DIO_SUPPORT_MULTICORE == STD_ON) && (STD_ON == DIO_DEV_ERROR_DETECT))
DIO_TEXT_SECTION Std_ReturnType Dio_HL_ValidatePinAuth(const Dio_ChannelType u16ChannelId,
                                                       const Dio_CoreConfigInfoType pCoreConfigInfo[]);

DIO_TEXT_SECTION Std_ReturnType Dio_HL_ValidatePortAuth(const Dio_PortType      u8PortId,
                                                        const Dio_PortLevelType u32Mask);
#endif

#define DIO_STOP_SEC_CODE
#include "Dio_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* DIO_HW_H */
/** @} */
