/**
*   @file    Mcu_Wku.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Wku driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Wku hardware IP.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
#ifndef MCU_WKU_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_WKU_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Platform_Types.h"
#include "Mcu_Wku_RegOps.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANT-LIKE DEFINES
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** @brief Wku configuration type */
typedef struct
{
#if ( MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON )
    boolean bDelayEn;       /**< Enable/Disable wakeup delay */
    uint8   u8DelayTime;    /**< Wakeup delay time,the delay time is 2^(DELAYTIME + 3) AON_CLK cycles  */
#endif /* (MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON) */
    uint32 u32WkuSource;    /**< Wakeup source */
} WkuConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

void WKU_EnableWakeupSource(const uint32 u32Input);

#if ( MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON )
void WKU_SetWakeupDelay(boolean bDelayEn, uint8 u8Delaytime);
#endif /* (MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON) */

#if defined(__cplusplus)
}
#endif
/** @}*/  /* Mcu_Wku */
#endif
