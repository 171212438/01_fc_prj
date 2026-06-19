/**
*   @file    Comstack_Types_Cfg.h
*   @version 0.3.0
*
*   @brief   AUTOSAR ComStack - hardware specific type definition
*   @details This file contains the ComStack Autosar hardware specific type definition
*
*   @addtogroup ComStack
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Com
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 0.3.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
#ifndef COMSTACK_TYPES_CFG_H
#define COMSTACK_TYPES_CFG_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define COMSTACK_INVALID_NETWORK_HANDLE    (0xFFU)

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef uint8    NetworkHandleType;
typedef uint8    PNCHandleType;

/**
* @brief   This type serve as a unique identifier of a PDU within a software module.
*          Allowed ranges: uint8 .. uint16
* @implements PduIdType_type
*/
typedef uint16       PduIdType;

/**
* @brief   This type serve as length information of a PDU in bytes.
*          Allowed ranges: uint8 .. uint32
* @implements PduLengthType_Type
*/
typedef uint32       PduLengthType;

#endif  /* COMSTACK_TYPES_CFG_H */
