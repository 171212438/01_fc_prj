/**
*   @file    CDD_Msc_Irq.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Msc - File used by MSC that contain the ISRs.
*   @details This file contains the ISR functions used to serve the MSC interrupts.
*
*   @addtogroup MSC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MSC
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
*   0.6.0       09/11/2023    QXW0084       N/A          MSC Initial Version
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*
* @file           CDD_Msc_Irq.c
*/
#include "Mcal.h"
#include "CDD_Msc_LLD.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
/**
* @brief          MSC controller interrupts
* @details        MSC controller interrupts
*
*
*
*
*/
#define CDD_MSC_START_SEC_CODE
#include "Msc_MemMap.h"

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated. */
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 [E] This in-line assembler construct is a language extension. The code has been ignored.
 * Reason: The assembly statement has been encapsulated and isolated.*/
#if defined(MSC_0_ISR_USED)
CDD_MSC_TEXT_SECTION ISR(Msc_Isr_MSC_0);
#endif  /* defined(MSC_0_ISR_USED) */

#if defined(MSC_1_ISR_USED)
CDD_MSC_TEXT_SECTION ISR(Msc_Isr_MSC_1);
#endif  /* defined(MSC_1_ISR_USED) */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* PRQA S 1503 EOF #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user */
#define MSC_0 0U
#define MSC_1 1U

#if defined(MSC_0_ISR_USED)
CDD_MSC_TEXT_SECTION ISR(Msc_Isr_MSC_0)
{

    Msc_LLD_InterruptHandler(MSC_0);
    EXIT_INTERRUPT();
}
#endif  /* defined(MSC_0_ISR_USED) */

#if defined(MSC_1_ISR_USED)
CDD_MSC_TEXT_SECTION ISR(Msc_Isr_MSC_1)
{
    Msc_LLD_InterruptHandler(MSC_1);
    EXIT_INTERRUPT();
}
#endif  /* defined(MSC_1_ISR_USED) */

/* PRQA S 1006 -- */
/* PRQA S 3006 -- */

#define CDD_MSC_STOP_SEC_CODE
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif

/*! @} */
