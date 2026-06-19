/**
 *   @file    Pfls_Driver.h
 *   @version 1.5.1
 *
 *   @brief   Parameter definition of flash
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
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
*   1.4.0       09/29/2025    QXW0054       N/A          Pfls Initial Version
==================================================================================================*/
#ifndef PFLS_DRIVER_H
#define PFLS_DRIVER_H

#include "Pfcfmc_Regs.h"
#include "Pfls_Cfg.h"
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#ifndef DEVICE_TYPE
#error "Please include Common_Cfg.h"

#else

#if (PFLS_MCU_TYPE_FC7300 == STD_ON)

/** PFLASH start address */
#define PFLASH_ADDR_START 0x01000000U
/** PFLASH end address */
#define PFLASH_ADDR_END   0X017FFFFFU
/** PFLASH Bank size */
#define PFLASH_BANK_SIZE  0x00200000U

#elif (PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
/** PFLASH start address */
#define PFLASH_ADDR_START         0x01000000U
/** PFLASH end address */
#define PFLASH_ADDR_END           0X017FFFFFU
/** PFLASH Bank size */
#define PFLASH_BANK_SIZE          0x00100000U
/** PFLASH protect start address */
#define PFLASH_PROTECT_START_ADDR PFLASH_ADDR_START
/** PFLASH protect len **/
#define PFLASH_PROTECT_LEN        0xC0000U
/** PFLASH protect reg addr **/
#define PFLASH_PROTECT_ADDR       0x40014034U

#elif ((PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
/** PFLASH start address */
#define PFLASH_ADDR_START         0x01000000U
/** PFLASH end address */
#define PFLASH_ADDR_END           0x013FFFFFU
/** PFLASH Bank size */
#define PFLASH_BANK_SIZE          0x00100000U
/** PFLASH protect start address */
#define PFLASH_PROTECT_START_ADDR PFLASH_ADDR_START
/** PFLASH protect len **/
#define PFLASH_PROTECT_LEN        0xC0000U
/** PFLASH protect reg addr **/
#define PFLASH_PROTECT_ADDR       0x40014034U

#elif (PFLS_MCU_TYPE_FC7240 == STD_ON)

/** PFLASH start address */
#define PFLASH_ADDR_START 0x01000000U
/** PFLASH end address */
#define PFLASH_ADDR_END   0x011FFFFFU
/** PFLASH Bank size */
#define PFLASH_BANK_SIZE  0x00100000U

#else
#error "Mcu type pfls not support"

#endif /* (PFLS_MCU_TYPE_FC7300 == STD_ON) */

#define FLASH_256KB_SIZE           (0x00040000U)

#define FLASH_HARDWARE_STATUS_ADDR (0x40020000U)
#define FLASH_HARDWARE_STATUS_MASK (0x00FF0000U)
#define FLASH_HARDWARE_STATUS_IDLE (0x000000FFU)

#endif /* Define DEVICE_TYPE */

#endif /* PFLS_DRIVER_H */

/** @}*/
