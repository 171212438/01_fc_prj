/**
*   @file    Eth_PBcfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Eth - Post Build configuration Eth header file.
*   @details Post Build configuration header file for Eth driver.
*
*   @addtogroup ETH
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETH
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       02/06/2023    QXW0085/32    N/A          Initialization of ETH Driver
*   0.2.0       27/09/2023    QXW0085/32    N/A          Implementation of Multicore instance
*   0.3.0       20/10/2023    QXW0085/32    N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

#ifndef ETH_PBCFG_H
#define ETH_PBCFG_H
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_Types.h"

/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/* Eth Initialization Configuration */
extern const Eth_ConfigType Eth_Config;

#ifdef __cplusplus
}
#endif
#endif /* ETH_PBCFG_H */

/** @} */
