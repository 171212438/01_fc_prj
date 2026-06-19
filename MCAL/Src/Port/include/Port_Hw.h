/**
*   @file    Port_Hw.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - Low level driver header file.
*   @details PORT Low level driver header file.
*
*   @addtogroup PORT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : PORT
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
*   0.1.0       14/07/2023    QXW0071       N/A          PORT Initial Version
*   0.2.0       15/9/2023     QXW0121       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0121       N/A          Multicore support optimization
*   0.4.0       11/10/2023    QXW0121       N/A          Multicore support optimization
==================================================================================================*/
#ifndef PORT_HW_H
#define PORT_HW_H

#ifdef __cplusplus
extern "C"
{
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Port_Cfg.h"
#include "Port_Hw_Types.h"
#include "Port_version.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                               DEFINES AND MACROS
=================================================================================================*/
#define PORT_MODE_DESC_BIT_OFFSET_MASK_U8                    ((uint8)0x0F)
#define PORT_MODE_DESC_BIT_OFFSET_U8                         (4U)

#define PORT_DRV_CHANNEL_MASK_U8                             ((uint8)0x1F)
#define PORT_DRV_PORTID_SHIFT_U8                             ((uint8)5UL)
/* Compute Port for a given channel as being Port/32, because there are 32 pins in a port */
#define PORT_DRV_PORTID_U32(channel)                         ((uint32)((uint32)(channel)>>PORT_DRV_PORTID_SHIFT_U8))

/* Compute Port channel for a given channel as being Port%32, because there are 32 pins in a port */
#define PORT_DRV_CHANNEL_U32(channel)                        ((uint32)((uint32)(channel)&PORT_DRV_CHANNEL_MASK_U8))

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/



/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/


/*=================================================================================================
*                                     FUNCTION PROTOTYPES
=================================================================================================*/

/* @brief Allocate defined section for PORT code. */
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

PORT_TEXT_SECTION Port_PinConfigType * Port_LL_GetPinConfigPtr(Port_Number ePort, Port_PinNumber u8Pin, const Port_ConfigType *pConfigPorts);

/* @brief    Initializes the PORT Digital Filter. */
PORT_TEXT_SECTION void Port_HL_InitDigitalFilter(const Port_ConfigType *pConfigPorts);

/* @brief    Initializes the PORT IP Driver. */
PORT_TEXT_SECTION void Port_HL_Init(const Port_ConfigType *pConfigPorts);

PORT_TEXT_SECTION void Port_LL_Init_Port(Port_Number ePort, const Port_PinConfigType *pConfigPorts, uint8 u8PinNum);

#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
/*
* @brief     Sets the port pin direction
*/
PORT_TEXT_SECTION Std_ReturnType Port_HL_SetPinDirection(const Port_ConfigType *pConfigPorts, Port_PinType u16Pin, Port_PinDirectionType eDirection);
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
PORT_TEXT_SECTION void Port_LL_SetPinDirection(Port_Number ePort, Port_PinNumber u8Pin, Port_PinDirectionType eDirection);
#endif

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief    Sets the port pin mode.
*/
PORT_TEXT_SECTION void Port_LL_SetPinMode(Port_Number ePort, Port_PinModeType u8PinMode, const Port_PinConfigType *pConfigOnePin);
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/**
* @brief   Refreshes port direction.
*/
PORT_TEXT_SECTION void Port_LL_RefreshPortDirection(Port_Number ePort, const Port_PinConfigType *pPortPinsConfigInfo,uint8 u8PortPinsCount);

PORT_TEXT_SECTION void Port_LL_SetGpioPinOutput(Port_Number ePort, Port_PinNumber u8Pin, const Port_PinConfigType *pConfigOnePin);

#if (STD_ON == PORT_SUPPORT_MULTICORE)
/**
* @brief   Get Lock.
*/
PORT_TEXT_SECTION Std_ReturnType Port_GetLock(uint8 u8ServiceID,Port_Number ePort, Port_PinNumber u8Pin);

/**
* @brief   Release Lock.
*/
PORT_TEXT_SECTION void Port_ReleaseLock(Port_Number ePort, const Port_RegValueType u32UsedCoreId, Port_PinNumber u8Pin);

#endif

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"


#ifdef __cplusplus
}
#endif
/* PORT_HW_H */
#endif
/** @} */
