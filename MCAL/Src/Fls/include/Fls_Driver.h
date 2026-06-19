/**
 *   @file    Fls_Driver.h
 *   @version 1.5.1
 *
 *   @brief   Parameter definition of flash
 *
 *   @addtogroup Fls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       20/06/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/
#ifndef FLS_DRIVER_H
#define FLS_DRIVER_H

#include "Fcfmc_Regs.h"
#include "Fls_Cfg.h"
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#ifndef DEVICE_TYPE
#error "Please include Common_Cfg.h"

#else

#if (FLS_MCU_TYPE_FC7300 == STD_ON)

/** DFlash start address */
#define DFLASH_ADDR_START 0x04000000U
/** DFlash end address */
#define DFLASH_ADDR_END   0x0403FFFFU
/** 1 DFlash Banks, every bank is 2MB */
#define DFLASH_BANK0_NUM  0x04U
/** DFlash Bank size */
#define DFLASH_BANK_SIZE  0x00040000U

#elif (FLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
/** DFlash start address */
#define DFLASH_ADDR_START 0x04000000U
/** DFlash end address */
#define DFLASH_ADDR_END   0x0405FFFFU
/** DFlash Bank size */
#define DFLASH_BANK_SIZE  0x00020000U
/** DFlash Bank0 number */
#define DFLASH_BANK0_NUM  8U
/** DFlash Bank1 number */
#define DFLASH_BANK1_NUM  9U
/** DFlash Bank2 number*/
#define DFLASH_BANK2_NUM  10U

#elif (FLS_MCU_TYPE_FC7300F4MDD == STD_ON)
/** DFlash start address */
#define DFLASH_ADDR_START 0x04000000U
/** DFlash end address */
#define DFLASH_ADDR_END   0x0403FFFFU
/** DFlash Bank size */
#define DFLASH_BANK_SIZE  0x00020000U
/** DFlash Bank0 number */
#define DFLASH_BANK0_NUM  4U
/** DFlash Bank1 number */
#define DFLASH_BANK1_NUM  5U

#elif (FLS_MCU_TYPE_FC7300F4MDS == STD_ON)
/** DFlash start address */
#define DFLASH_ADDR_START 0x04000000U
/** DFlash end address */
#define DFLASH_ADDR_END   0x0401FFFFU
/** DFlash Bank size */
#define DFLASH_BANK_SIZE  0x00020000U
/** DFlash Bank0 number */
#define DFLASH_BANK0_NUM  4U

#elif (FLS_MCU_TYPE_FC7240 == STD_ON)

/** DFlash start address */
#define DFLASH_ADDR_START 0x04000000U
/** DFlash end address */
#define DFLASH_ADDR_END   0x0401FFFFU
/** 1 DFlash Banks */
#define DFLASH_BANK0_NUM  0x02U
/** DFlash Bank size */
#define DFLASH_BANK_SIZE  0x00020000U

#else
#error "Mcu type fls not support"

#endif /* (FLS_MCU_TYPE_FC7300 == STD_ON) */

#define FLASH_HARDWARE_STATUS_ADDR (0x40020000U)
#define FLASH_HARDWARE_STATUS_MASK (0x00FF0000U)
#define FLASH_HARDWARE_STATUS_IDLE (0x000000FFU)

#endif /* Define DEVICE_TYPE */

#endif /* FLS_DRIVER_H */

/** @}*/
