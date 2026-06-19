/**
*   @file    Ospi_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CDD Ospi - driver API and development errors definition.
*   @details This file contains the Ospi Autosar driver API and development errors definition.
*
*   @addtogroup OSPI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : OSPI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0 
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
*   ---------   ----------    -----------   ----------   ---------------
*   0.1.0       30/10/2023    QXW0122       N/A          OSPI Initial Version
==================================================================================================*/
/*==================================================================================================
*                                         ENUMS
=================================================================================================*/
#ifndef OSPI_TYPES_H
#define OSPI_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    DQS_INTER_LOOPBACK = 0,
    DQS_PAD_LOOPBACK,
    DQS_EXTERNAL_PADINPUT
}OSPI_DqsSrcSelType;

typedef enum
{
    OSPI_CLOCK_DIV_1 = 0U,
    OSPI_CLOCK_DIV_2 = 1U,
    OSPI_CLOCK_DIV_3 = 2U,
    OSPI_CLOCK_DIV_4 = 3U,
    OSPI_CLOCK_DIV_5 = 4U,
    OSPI_CLOCK_DIV_6 = 5U,
    OSPI_CLOCK_DIV_7 = 6U,
    OSPI_CLOCK_DIV_8 = 7U
}OSPI_ClockDivideType;

typedef enum
{
    OSPI_MUX_PLL0 = 0,
    OSPI_MUX_FIRC,
    OSPI_MUX_PLL1
}OSPI_ClockMuxType;

typedef enum
{
    OSPI_BIG_ENDIAN = 0,
    OSPI_LITTLE_ENDIAN,
}OSPI_EndianType;


#ifdef __cplusplus
}
#endif

#endif /* OSPI_TYPES_H */
