/**
*   @file    Mcu_Rgm.h
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Rcm driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Rgm hardware IP.
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
#ifndef MCU_RCM_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_RCM_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_Rgm_Regs.h"
#include "Cpm_Reg.h"

/**
 * @addtogroup Mcu_Rgm
 * @{
 */

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

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
*                                            MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/** @brief Rgm reset interrupt delay cycles type. */
typedef enum
{
    RGM_8_CLOCK_CYCLES   = 0x0U,
    RGM_32_CLOCK_CYCLES  = 0x1U,
    RGM_128_CLOCK_CYCLES = 0x2U,
    RGM_512_CLOCK_CYCLES = 0x3U
} RGM_ResetDelayType;

/** @brief Rgm reset pin filter clock type. */
typedef enum
{
    RGM_RESET_FILTER_DISABLE      = 0U,
    RGM_RESET_FILTER_BUS_CLOCK    = 1U
} RGM_FilterClkSrc;
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** @brief Rgm interrupt notification type */
typedef void (*RGM_ISRCallbackType)(uint32 u32SRS);
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

uint32 RGM_GetLastResetFLag(void);

void RGM_EnableResetFilter(RGM_FilterClkSrc eClk, uint8 u8BusClockFilterWidth, boolean bLpClkEn);

#if ( MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON )
void RGM_EnableCxTrigSysReset(uint8 u8C1TrigCfg, uint8 u8C2TrigCfg, uint8 u8C3TrigCfg);
#endif

void RGM_EnableInt(RGM_ResetDelayType eDelay, \
                   uint16 u16SysReset, \
                   const uint16* pCoreReset, \
                   const RGM_ISRCallbackType* pIsrNotify);

void RGM_Disable(void);

void RGM_UserIRQHandler(void);
/** @}*/ /* Mcu_Rcm */

#if defined(__cplusplus)
}
#endif
/** @}*/

#endif
