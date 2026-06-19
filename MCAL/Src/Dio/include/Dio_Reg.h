/**
*   @file    Dio_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - module register and macro definitions.
*   @details Dio module registers, and macro definitions used to manipulate the module registers.
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
#ifndef DIO_REG_H
#define DIO_REG_H

#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Std_Types.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
#define DIO_CHANNEL_MASK_U8                     ((uint8)0x1F)
#define DIO_PORTID_SHIFT_U8                     ((uint8)5UL)

/*=================================================================================================
*                               DEFINES AND MACROS
==================================================================================================*/

/**
@brief  GPIO
@details FC7300 System Memory Map
*/
#define GPIO_BASEADDR                       ((uint32)0x41000000)


#define GPIO_PORT_U32(channel)              ((uint32)((uint32)(channel) >> DIO_PORTID_SHIFT_U8))

#define GPIO_CHANNEL_U32(channel)           ((uint32)((uint32)(channel) & DIO_CHANNEL_MASK_U8))


/***********************************************************/
/*                         GPIO_PDOR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PDOR_OFFSET_ADDR32          ((uint32)0x0000UL)


/***********************************************************/
/*                         GPIO_PSOR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PSOR_OFFSET_ADDR32          ((uint32)0x0004UL)


/***********************************************************/
/*                         GPIO_PCOR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PCOR_OFFSET_ADDR32         ((uint32)0x0008UL)


/***********************************************************/
/*                         GPIO_PTOR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PTOR_OFFSET_ADDR32          ((uint32)0x000CUL)


/***********************************************************/
/*                         GPIO_PDIR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PDIR_OFFSET_ADDR32          ((uint32)0x0010UL)


/***********************************************************/
/*                         GPIO_PDDR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PDDR_OFFSET_ADDR32          ((uint32)0x0014UL)

/***********************************************************/
/*                         GPIO_PIDR                       */
/*                            OFFSET(0->4)                 */
/***********************************************************/
#define  GPIO_PIDR_OFFSET_ADDR32          ((uint32)0x0018UL)

#define GPIO_PDOR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PDOR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40)))

#define GPIO_PSOR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PSOR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40) ))

#define GPIO_PCOR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PCOR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40) ))

#define GPIO_PTOR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PTOR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40) ))

#define GPIO_PDIR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PDIR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40) ))

#define GPIO_PDDR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PDDR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40) ))

#define GPIO_PIDR_ADDR32(port)  ((uint32)(GPIO_BASEADDR + GPIO_PIDR_OFFSET_ADDR32 + ((uint32)(port) * (uint32)0x40) ))

/***********************************************************/
/*                         SELECT PIN NO.                  */
/***********************************************************/


#define PIN_NO_MASK_U32(channel)           ((uint32)((uint32)1<<GPIO_CHANNEL_U32(channel)))

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif
/* DIO_REG_H */
#endif
/** @} */
