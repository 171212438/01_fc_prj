/**
 *   @file    Mcu_Wku.c
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
#include "Mcu_Wku.h"

#if defined(__cplusplus)
extern "C"
{
#endif

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
/**
 *              Local pointer to the instance handler
 */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static WKU_Type *const s_apWkuBase[WKU_INSTANCE_COUNT] = WKU_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"
/**
 * @brief WKU Enable wakeup source for single input
 *
 * @param u32Input Number of input, WKU_WakeupInputType type is wakeup source definition
 */
MCU_TEXT_SECTION void WKU_EnableWakeupSource(const uint32 u32Input)
{
    WKU_HWA_SetWakeupSource(s_apWkuBase[0U], u32Input);
}

#if (MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON)
/**
 * @brief WKU set wake up delay time
 *
 * @param bDelayEn Enable/Disable wakeup delay
 * @param u8Delaytime The delay time is 2^(u8Delaytime+3) AON_CLK cycles
 */
MCU_TEXT_SECTION void WKU_SetWakeupDelay(boolean bDelayEn, uint8 u8Delaytime)
{
    if ((boolean)TRUE == bDelayEn)
    {
        WKU_HWA_DisableDelayCounter(s_apWkuBase[0U]);
        WKU_HWA_SetDelayTime(s_apWkuBase[0U], u8Delaytime);
        WKU_HWA_EnableDelayCounter(s_apWkuBase[0U]);
    }
    else
    {
        WKU_HWA_DisableDelayCounter(s_apWkuBase[0U]);
    }
}
#endif /* ( MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON ) */

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#if defined(__cplusplus)
}
#endif

/** @} */
