/**
 *   @file    Wdg_LLD.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Wdg - low level layer header file.
 *   @details watchdog low level header file.
 *
 *   @addtogroup WDG
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : WDG
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
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       07/14/2023    QXW0074       N/A          WDG Initial Version
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by
user without hardware timer and optimization code
==================================================================================================*/

#ifndef WDG_LLD_H
#define WDG_LLD_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Wdg_LLD_Types.h"
#include "Wdg_Cfg.h"
#include "Wdg_HLD.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                    FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: The enumeration parameters defined by the type "WDOG_ClkSelType" and type "WDOG_TestType"
 * are used in the Wdg_174_Instance_PBcfg c file */
/** @brief  WDOG clock source select, mapping with WDOG_CS[CLK_SEL] bit filed definition. */
typedef enum
{
    WDOG_BUS_CLK = 0x00U,  /* Bus clock */
    WDOG_AON_CLK = 0x01U,  /* AON clock, if choose this clock need to configure AON clock in SMISC
                              setting */
    WDOG_FOSC_CLK = 0x02U, /* FOSC clock */
    WDOG_SIRC_CLK = 0x03U  /* SIRC clock */
} WDOG_ClkSelType;

/** @brief  WDOG test mode, mapping with WDOG_CS[TST] bit filed definition. */
typedef enum
{
    WDOG_TST_DISABLED  = 0x00U, /* Test mode disabled */
    WDOG_USER_MODE     = 0x01U, /* User mode enabled. (Test mode disabled.) */
    WDOG_TST_MODE_LOW  = 0x02U, /* Test mode enabled, only the low byte is used. */
    WDOG_TST_MODE_HIGH = 0x03U  /* Test mode enabled, only the high byte is used. */
} WDOG_TestType;

/** @brief  WDOG delay time to generate the reset. */
typedef enum
{
    WDOG_REACTION_INT_128_CYCLE = 0x00U, /* Need to enable the timeout interrupt, and the delay to
                                            generate the reset is configured to 128 bus clock cycles */
    WDOG_REACTION_INT_256_CYCLE = 0x01U, /* Need to enable the timeout interrupt, and the delay to
                                            generate the reset is configured to 256 bus clock cycles */
    WDOG_REACTION_INT_512_CYCLE = 0x02U, /* Need to enable the timeout interrupt, and the delay to
                                            generate the reset is configured to 512 bus clock cycles */
    WDOG_REACTION_INT_1024_CYCLE =
        0x03U, /* Need to enable the timeout interrupt, and the delay to generate the reset is
                  configured to 1024 bus clock cycles */
} WDOG_TimeoutReactionType;
/* PRQA S 1535 -- */

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

/* Initialize the hardware of WDG module. */
WDG_TEXT_SECTION uint32 Wdg_LLD_Init(const Wdg_LLDConfigType   *pWdgLLDConfigPtr,
                                     const Wdg_HWL_InstanceType eInstance,
                                     boolean                   *pUnlockFailed,
                                     boolean                   *pReconfigFailed);

/* This function triggers the watchdog hardware. */
WDG_TEXT_SECTION void Wdg_LLD_Trigger(const Wdg_HWL_InstanceType eInstance);

/* The function checks if the WDG configuration update is allowed by hardware. */
WDG_TEXT_SECTION Std_ReturnType Wdg_LLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance);
#if (WDG_DIRECT_SERVICE == STD_ON)
/* The function checks if triggers the watchdog hardware is allowed by hardware  */
WDG_TEXT_SECTION Std_ReturnType Wdg_LLD_ValidateTrigger(const Wdg_HWL_InstanceType eInstance);
#endif

#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* WDG_WDOG_H */

/** @} */
