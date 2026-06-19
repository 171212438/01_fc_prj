/**
*   @file    Can_GeneralTypes_Cfg.h
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
#ifndef CAN_GERERALTYPES_CFG_H
#define CAN_GERERALTYPES_CFG_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "ComStack_Types.h" /*[SWS_Can_00222]*/
#include "Can_Cfg.h"

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
/*CAN429*/
#define CAN_INVALID_HOH        ((Can_HwHandleType)0xFFU)
#define CAN_CANID_MASK         ((Can_IdType)0x07FFU)
#define CAN_CANFD_INV_MASK     ((Can_IdType)0xBFFFU)
#define CAN_CANFD_MASK         ((Can_IdType)0x4000U)
#define CAN_IDTYPE_MASK        ((Can_IdType)0xC000U)

#define CAN_STD_MAX_CANID               ((Can_IdType)0x07FFU)
#define CAN_EXT_MAX_CANID               (0x1FFFFFFFUL)
#define CAN_EXT_CANID_FLAG              (0x80000000UL)

#if (CAN_USE_SHORT_CAN_IDTYPE == STD_ON)
    #if (CAN_EXTENDEDID == STD_ON)
        #define CAN_FD_ID_DESCRIPTOR        ((uint32)0x40000000)
    #else /* (CAN_EXTENDEDID == STD_OFF) */
        #define CAN_FD_ID_DESCRIPTOR        ((uint16)0x4000)
    #endif /* (CAN_EXTENDEDID == STD_ON/STD_OFF) */
#else
    #define CAN_FD_ID_DESCRIPTOR            ((uint32)0x40000000)
#endif


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
#if (CAN_USE_SHORT_CAN_IDTYPE == STD_ON)
#if (CAN_EXTENDEDID == STD_ON)
/**
* @{
* @brief          Can_IdType [SWS_Can_00416]
* @details        Type for storing the Identifier Length Type: Normal or Extended.
*                   - used by "Can_MessageBufferConfigObjectType" structure.
*                 The driver does not distinguish between Extended and Mixed transmission modes.
*                 Extended transmission mode of operation behaves the same as Mixed mode.
* @implements     Can_IdType_type
*/
typedef  uint32 Can_IdType;
#else /* (CAN_EXTENDEDID == STD_OFF) */
typedef  uint16 Can_IdType;
#endif /* (CAN_EXTENDEDID == STD_ON/STD_OFF) */
#else
typedef  uint32 Can_IdType;
#endif /* CAN_USE_SHORT_CAN_IDTYPE == STD_ON */
/**@}*/

#ifdef CAN_MBCOUNTEXTENSION
#if (CAN_MBCOUNTEXTENSION == STD_ON)
/** Represents the hardware object handles of a CAN hardware unit. For CAN hardware units with more than 255 HW objects use extended range. [SWS_Can_00429][SWDESG_CAN_192]*/
typedef uint16 Can_HwHandleType;
#else /* (CAN_MBCOUNTEXTENSION==STD_OFF) */
/** Represents the hardware object handles of a CAN hardware unit. For CAN hardware units with more than 255 HW objects use extended range. */
typedef uint8 Can_HwHandleType;
#endif /* (CAN_MBCOUNTEXTENSION==STD_ON/STD_OFF) */
#else
/** Represents the hardware object handles of a CAN hardware unit. For CAN hardware units with more than 255 HW objects use extended range. */
typedef uint8 Can_HwHandleType;
#endif

/** @}*/

#endif/* CAN_GERERALTYPES_CFG_H */

