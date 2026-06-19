/**
*   @file    Wdg_Irq.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - Software Watchdog Timer (WDOG) ISR functions
*   @details Contains WDG ISR functions 
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
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by user without hardware timer and optimization code
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Wdg_LLD_Types.h"
#include "Mcal.h"
#include "Wdg_Irq.h"
#include "Wdg_Reg.h"
#include "Wdg_RegOps.h"
#include "SchM_Wdg.h"
#include "Wdg_Version.h"

/*==================================================================================================
*                                       SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef WDG_AR_RELEASE_MAJOR_VERSION
    #error "Autosar release major version is not defined. "
#elif (WDG_AR_RELEASE_MAJOR_VERSION != WDG_CFG_AR_RELEASE_MAJOR_VERSION)
    #error "Autosar release major version is not matched. "
#endif

#ifndef WDG_AR_RELEASE_MINOR_VERSION
    #error "Autosar release minor version is not defined. "
#elif (WDG_AR_RELEASE_MINOR_VERSION != WDG_CFG_AR_RELEASE_MINOR_VERSION)
    #error "Autosar release minor version is not matched. "
#endif

#ifndef WDG_AR_RELEASE_REVISION_VERSION
    #error "Autosar release revision version is not defined. "
#elif (WDG_AR_RELEASE_REVISION_VERSION != WDG_CFG_AR_RELEASE_REVISION_VERSION)
    #error "Autosar release revision version is not matched. "
#endif

#ifndef WDG_SW_MAJOR_VERSION
    #error "Software major version is not defined. "
#elif (WDG_SW_MAJOR_VERSION != WDG_CFG_SW_MAJOR_VERSION)
    #error "Software major version is not matched. "
#endif

#ifndef WDG_SW_MINOR_VERSION
    #error "Software minor version is not defined. "
#elif (WDG_SW_MINOR_VERSION != WDG_CFG_SW_MINOR_VERSION)
    #error "Software minor version is not matched. "
#endif

#ifndef WDG_SW_PATCH_VERSION
    #error "Software patch version is not defined. "
#elif (WDG_SW_PATCH_VERSION != WDG_CFG_SW_PATCH_VERSION)
    #error "Software patch major version is not matched. "
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define WDG_START_SEC_CONST_32
#include "Wdg_MemMap.h"

#if ((defined WDG_ISR0_USED)|| (defined WDG_ISR1_USED) || (defined WDG_ISR2_USED) || (defined WDG_ISR3_USED))
/* PRQA S 3684 ++ #Misra-C:2012 Rule-8.11 When an array with external linkage is declared, its size should be explicitly specified.
 * This rule applies to non-defining declarations only. It is possible to define an array and specify its size implicitly by means of initialization.
 * Reason: The size of the object "g_WDOG_aBASE_ADDR32" was implicitly specified when defining it*/
WDG_DATA_SECTION extern WDOG_Type*const g_WDOG_aBASE_ADDR32[];
/* PRQA S 3684 -- */
#endif

#define WDG_STOP_SEC_CONST_32
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
/* [SWS_Wdg_00168] [SWDESG_WDG_003] */
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else 
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#if ((defined WDG_ISR0_USED)|| (defined WDG_ISR1_USED) || (defined WDG_ISR2_USED) || (defined WDG_ISR3_USED))
WDG_TEXT_SECTION void Wdg_Irq_ProcessInterrupt(Wdg_HWL_InstanceType eInstance);
#endif

#ifdef WDG_ISR0_USED
WDG_TEXT_SECTION ISR(Wdg0_Interrupt_Isr);
#endif /* WDG_ISR0_USED */

#ifdef WDG_ISR1_USED
WDG_TEXT_SECTION ISR(Wdg1_Interrupt_Isr);
#endif /* WDG_ISR1_USED */

#ifdef WDG_ISR2_USED
WDG_TEXT_SECTION ISR(Wdg2_Interrupt_Isr);
#endif /* WDG_ISR2_USED */

#ifdef WDG_ISR3_USED
WDG_TEXT_SECTION ISR(Wdg3_Interrupt_Isr);
#endif /* WDG_ISR2_USED */

#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else 
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else 
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

/* PRQA S 1504,1505 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit
 * Reason: The function does not have external linkage */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated. */
/**
*   @brief This function process WDG interrupt. [SWDESG_WDG_077] [FMR_WDG_0002]
*
*   @param eInstance Hardware WDG instance.
* 
*/
#if ((defined WDG_ISR0_USED) || (defined WDG_ISR1_USED) || (defined WDG_ISR2_USED) || (defined WDG_ISR3_USED))
WDG_TEXT_SECTION void Wdg_Irq_ProcessInterrupt(Wdg_HWL_InstanceType eInstance)
{
    uint32 u32WdgCSRegisterVal;

    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_02();

    u32WdgCSRegisterVal = WDOG_HWA_GetCs((WDOG_Type *)g_WDOG_aBASE_ADDR32[eInstance]);

    /* Clear the interrupt flag  */    
    WDOG_HWA_SetCs((WDOG_Type *)g_WDOG_aBASE_ADDR32[eInstance], (u32WdgCSRegisterVal | WDOG_CS_FLAG_MASK));

    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_02();

    /* Check for spurious interrupt */
    if((((u32WdgCSRegisterVal & WDOG_CS_INT_MASK) >> WDOG_CS_INT_SHIFT) == TRUE) && \
            (((u32WdgCSRegisterVal & WDOG_CS_FLAG_MASK) >> WDOG_CS_FLAG_SHIFT) == TRUE))
    {
        Wdg_ProcessInterrupt(eInstance);
    }
}
#endif
/* PRQA S 3006 -- */
/* PRQA S 1504,1505 -- */

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
#ifdef WDG_ISR0_USED
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.
 */
/**
*   @brief This function process the interrupt of WDG0.
*
*/
WDG_TEXT_SECTION ISR(Wdg0_Interrupt_Isr)
{
    Wdg_Irq_ProcessInterrupt(WDG_HWL_INSTANCE0);
    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     * Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}
/* PRQA S 3006 -- */
/* PRQA S 1503 -- */
#endif /* WDG_ISR0_USED */

#ifdef WDG_ISR1_USED
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.
 */
/**
*   @brief This function process the interrupt of WDG1.
*
*/
WDG_TEXT_SECTION ISR(Wdg1_Interrupt_Isr)
{
    Wdg_Irq_ProcessInterrupt(WDG_HWL_INSTANCE1);
    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     * Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}
/* PRQA S 3006 -- */
/* PRQA S 1503 -- */
#endif /* WDG_ISR1_USED */

#ifdef WDG_ISR2_USED
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.
 */
/**
*   @brief This function process the interrupt of WDG2.
*
*/
WDG_TEXT_SECTION ISR(Wdg2_Interrupt_Isr)
{
    Wdg_Irq_ProcessInterrupt(WDG_HWL_INSTANCE2);
    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     * Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}
/* PRQA S 3006 -- */
/* PRQA S 1503 -- */
#endif /* WDG_ISR2_USED */

#ifdef WDG_ISR3_USED
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.
 */
/**
*   @brief This function process the interrupt of WDG3.
*
*/
WDG_TEXT_SECTION ISR(Wdg3_Interrupt_Isr)
{
    Wdg_Irq_ProcessInterrupt(WDG_HWL_INSTANCE3);
    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     * Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}
/* PRQA S 3006 -- */
/* PRQA S 1503 -- */
#endif /* WDG_ISR3_USED */
/* PRQA S 3006,1006 -- */
#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else 
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#ifdef __cplusplus
}
#endif

/** @} */
