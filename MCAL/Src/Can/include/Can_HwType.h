/**
*   @file    Can_HwType.h
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
#ifndef CAN_HW_TYPE_H
#define CAN_HW_TYPE_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/* can register width, one word bytes num */
#define CAN_HW_REG_WORD_LEN              0x04u


/* write uint8 to address */
#define CAN_WRITE_REG8(address, value)        ((*(volatile uint8*)(address))=  (value))
/* write uint32 to address */
#define CAN_WRITE_REG32(address, value)       ((*(volatile uint32*)(address))= (value))
/* read uint8 from address */
#define CAN_READ_REG8(address)                (*(volatile uint8*)(address))
/* read uint32 from address */
#define CAN_READ_REG32(address)               (*(volatile uint32*)(address))
/* read uint32 from address with index left 4 shift, used in message buffer read */
#define CAN_AREAD_REG32(address, i)           (CAN_READ_REG32((address)+((uint32)((i)<<2U))))
/*clear address data bit with uint8 data length */
#define CAN_BIT_CLR_REG8(address, mask)       ((*(volatile uint8*)(address))&= (~((uint8)(mask))))
/*clear address data bit with uint32 data length */
#define CAN_BIT_CLR_REG32(address, mask)    ((*(volatile uint32*)(address))&= (~((uint32)(mask))))
/*get address data bit with uint32 data length */
#define CAN_BIT_GET_REG32(address, mask)      ((*(volatile uint32*)(address))& ((uint32)(mask)))
/*set address data bit with uint8 data length */
#define CAN_BIT_SET_REG8(address, mask)       ((*(volatile uint8*)(address))|= ((uint32)(mask)))
/*set address data bit with uint32 data length */
#define CAN_BIT_SET_REG32(address, mask)      ((*(volatile uint32*)(address))|= ((uint32)(mask)))
/* read and rewrite with mask and value with uint8 data length */
#define CAN_RMW_REG8(address, mask, value)    (CAN_WRITE_REG8((address), ((CAN_READ_REG8(address)& ((uint8)~((uint8)(mask))))| (value))))
/* read and rewrite with mask and value with uint32 data length */
#define CAN_RMW_REG32(address, mask, value)   (CAN_WRITE_REG32((address), ( (CAN_READ_REG32(address) & ( (uint32)~((uint32)(mask)) ) ) | (uint32)(value) )))

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

#endif
/** @} */
