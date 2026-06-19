/**
*   @file    Port.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - driver API and development errors implemention.
*   @details This file contains the Port Autosar driver API and development errors implemention.
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
==================================================================================================*/
#ifndef PORT_H
#define PORT_H

#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Port_Cfg.h"
#include "Mcal.h"
#include "Std_Types.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/
/* Instance IDs */
/**
* @brief   Instance ID of port driver.
*
*/
#define PORT_INSTANCE_ID              ((uint8)0x0)

/* Service IDs */
/*
* @brief   Service ID of port driver.
*/

/**
* @brief   API service ID for PORT Init function.
* @details Parameters used when raising an error/exception.
*
* @api
*
*/
#define PORT_INIT_ID                    ((uint8)0x00)
/**
* @brief   API service ID for PORT set pin direction function.
* @details Parameters used when raising an error/exception.
*
* @api
*
*/
#define PORT_SETPINDIRECTION_ID         ((uint8)0x01)
/**
* @brief   API service ID for PORT refresh pin direction function.
* @details Parameters used when raising an error/exception.
*
* @api
*
*/
#define PORT_REFRESHPINDIRECTION_ID     ((uint8)0x02)
/**
* @brief   API service ID for PORT get version info function.
* @details Parameters used when raising an error/exception.
*
* @api
*
*/
#define PORT_GETVERSIONINFO_ID          ((uint8)0x03)
/**
* @brief   API service ID for PORT set pin mode.
* @details Parameters used when raising an error/exception.
*
* @api
*
*/
#define PORT_SETPINMODE_ID              ((uint8)0x04)

/* Errors IDs */
/**
* @brief   Error ID of port driver.
* @details The following errors and exception are detectable by the PORT driver
*          if development error detection is enabled.
*
*/

/**
* @brief   Invalid Port Pin ID requested.
* @details Det Error value, returned by Port_SetPinDirection and Port_PinMode
*          if an wrong PortPin ID is passed.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_PARAM_PIN                ((uint8)0x0A)
/**
* @brief   Port Pin Direction not configured as changeable.
* @details Det Error value, returned by Port_SetPinDirection
*          if the passed PortPin have unchangeable direction.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_DIRECTION_UNCHANGEABLE   ((uint8)0x0B)
/**
* @brief   API Port_Init() service called with wrong parameter.
* @details Det Error value, returned by Port_Init function
*          if Port_Init is called with wrong parameter.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_INIT_FAILED              ((uint8)0x0C)
/**
* @brief   API Port_SetPinMode() service called when mode is invalid.
* @details Det Error value, returned by Port_SetPinMode function
*          if the passed PortPinMode is invalid.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_PARAM_INVALID_MODE       ((uint8)0x0D)
/**
* @brief   API Port_SetPinMode() service called when mode is unchangeable.
* @details Det Error value, returned by Port_SetPinMode function
*          if the passed PortPin have a unchangeable Mode.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_MODE_UNCHANGEABLE        ((uint8)0x0E)
/**
* @brief   API service called without module initialization.
* @details Det Error value, returned by a function if API service called
*          prior to module initialization.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_UNINIT                   ((uint8)0x0F)
/**
* @brief   API service called with NULL Pointer Parameter.
* @details Det Error value, returned by Port_GetVersionInfo function
*          if API is called with NULL Pointer Parameter.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_PARAM_POINTER            ((uint8)0x10)

/**
* @brief   API service called with get lock failed.
* @details Det Error value, returned by get lock failed.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_GET_SPIN_LOCK_FAILED     ((uint8)0x11)

/* Port spin lock timeout */
/**
* @brief   Time out of get spin lock.
*
*/
#define PORT_SPIN_LOCK_TIMEOUT          ((uint16)0xFFFFU)
/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/


/*=================================================================================================
*                                              ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/


/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/


/*=================================================================================================
*                                     FUNCTION PROTOTYPES
=================================================================================================*/

/* Allocate defined section for PORT code */
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

/*
* Initializes the Port Driver module.
*/
PORT_TEXT_SECTION void Port_Init(const Port_ConfigType *ConfigPointer);

#if (STD_ON == PORT_SET_PIN_DIRECTION_API)
/*
* Sets the port pin direction.
* Function disabled in the frozen pin configuration.
*/
PORT_TEXT_SECTION void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction);
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
/*
* Sets the port pin mode.
*/
PORT_TEXT_SECTION void Port_SetPinMode(Port_PinType PinId, Port_PinModeType PinMuxMode);
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_VERSION_INFO_API)
/*
* Returns the version information of this module.
*/
PORT_TEXT_SECTION void Port_GetVersionInfo(Std_VersionInfoType *VersionInfoPointer);
#endif /* (STD_ON == PORT_VERSION_INFO_API) */

/*
* Refreshes port direction.
*/
PORT_TEXT_SECTION void Port_RefreshPortDirection(void);

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* PORT_H */

/** @} */
