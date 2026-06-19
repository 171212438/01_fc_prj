/**
*   @file    Lin_Irq.c
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this Unit
==================================================================================================*/
#include "Lin.h"
#include "Lin_FCUart.h"
#include "Mcal.h"
#include "SchM_Lin.h"

#ifdef LIN_DMA_SUPPORTED
#include "CDD_Dma.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

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

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined.
 * REASON: The object will be referenced in other modules and declared where it is used */
#if defined LIN_FCUART_0_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_0);
#endif

#if defined LIN_FCUART_1_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_1);
#endif

#if defined LIN_FCUART_2_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_2);
#endif

#if defined LIN_FCUART_3_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_3);
#endif

#if defined LIN_FCUART_4_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_4);
#endif

#if defined LIN_FCUART_5_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_5);
#endif

#if defined LIN_FCUART_6_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_6);
#endif

#if defined LIN_FCUART_7_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_7);
#endif

#if defined LIN_FCUART_8_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_8);
#endif

#if defined LIN_FCUART_9_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_9);
#endif

#ifdef LIN_FCUART_10_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_10);
#endif

#ifdef LIN_FCUART_11_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_11);
#endif

#ifdef LIN_FCUART_12_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_12);
#endif

#ifdef LIN_FCUART_13_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_13);
#endif

#ifdef LIN_FCUART_14_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_14);
#endif

#ifdef LIN_FCUART_15_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_15);
#endif

#ifdef LIN_FCUART_16_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_16);
#endif

#ifdef LIN_FCUART_17_ISR_USED
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_17);
#endif

#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * 1006:This in-line assembler construct is a language extension. The code has been ignored.
 * 3006:This function contains a mixture of in-line assembler statements and C statements.
 * REASON: The assembly statement has been encapsulated and isolated.
 */

#if defined(LIN_FCUART_0_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_0)
{
    Lin_LL_TxRxInterruptHandler(FCUART_0);
    Lin_LL_ErrorInterruptHandler(FCUART_0);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_0_ISR_USED) */

#if defined(LIN_FCUART_1_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_1)
{
    Lin_LL_TxRxInterruptHandler(FCUART_1);
    Lin_LL_ErrorInterruptHandler(FCUART_1);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_1_ISR_USED) */

#if defined(LIN_FCUART_2_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_2)
{
    Lin_LL_TxRxInterruptHandler(FCUART_2);
    Lin_LL_ErrorInterruptHandler(FCUART_2);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_2_ISR_USED) */

#if defined(LIN_FCUART_3_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_3)
{
    Lin_LL_TxRxInterruptHandler(FCUART_3);
    Lin_LL_ErrorInterruptHandler(FCUART_3);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_3_ISR_USED) */

#if defined(LIN_FCUART_4_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_4)
{
    Lin_LL_TxRxInterruptHandler(FCUART_4);
    Lin_LL_ErrorInterruptHandler(FCUART_4);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_4_ISR_USED) */

#if defined(LIN_FCUART_5_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_5)
{
    Lin_LL_TxRxInterruptHandler(FCUART_5);
    Lin_LL_ErrorInterruptHandler(FCUART_5);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_5_ISR_USED) */

#if defined(LIN_FCUART_6_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_6)
{
    Lin_LL_TxRxInterruptHandler(FCUART_6);
    Lin_LL_ErrorInterruptHandler(FCUART_6);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_6_ISR_USED) */

#if defined(LIN_FCUART_7_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_7)
{
    Lin_LL_TxRxInterruptHandler(FCUART_7);
    Lin_LL_ErrorInterruptHandler(FCUART_7);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_7_ISR_USED) */

#if defined(LIN_FCUART_8_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_8)
{
    Lin_LL_TxRxInterruptHandler(FCUART_8);
    Lin_LL_ErrorInterruptHandler(FCUART_8);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_8_ISR_USED) */
#if defined(LIN_FCUART_9_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_9)
{
    Lin_LL_TxRxInterruptHandler(FCUART_9);
    Lin_LL_ErrorInterruptHandler(FCUART_9);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_9_ISR_USED) */

#if defined(LIN_FCUART_10_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_10)
{
    Lin_LL_TxRxInterruptHandler(FCUART_10);
    Lin_LL_ErrorInterruptHandler(FCUART_10);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_10_ISR_USED) */

#if defined(LIN_FCUART_11_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_11)
{
    Lin_LL_TxRxInterruptHandler(FCUART_11);
    Lin_LL_ErrorInterruptHandler(FCUART_11);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_11_ISR_USED) */

#if defined(LIN_FCUART_12_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_12)
{
    Lin_LL_TxRxInterruptHandler(FCUART_12);
    Lin_LL_ErrorInterruptHandler(FCUART_12);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_12_ISR_USED) */

#if defined(LIN_FCUART_13_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_13)
{
    Lin_LL_TxRxInterruptHandler(FCUART_13);
    Lin_LL_ErrorInterruptHandler(FCUART_13);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_13_ISR_USED) */

#if defined(LIN_FCUART_14_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_14)
{
    Lin_LL_TxRxInterruptHandler(FCUART_14);
    Lin_LL_ErrorInterruptHandler(FCUART_14);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_14_ISR_USED) */

#if defined(LIN_FCUART_15_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_15)
{
    Lin_LL_TxRxInterruptHandler(FCUART_15);
    Lin_LL_ErrorInterruptHandler(FCUART_15);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_15_ISR_USED) */

#if defined(LIN_FCUART_16_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_16)
{
    Lin_LL_TxRxInterruptHandler(FCUART_16);
    Lin_LL_ErrorInterruptHandler(FCUART_16);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_16_ISR_USED) */

#if defined(LIN_FCUART_17_ISR_USED)
LIN_TEXT_SECTION ISR(Lin_IsrTxRx_FCUART_17)
{
    Lin_LL_TxRxInterruptHandler(FCUART_17);
    Lin_LL_ErrorInterruptHandler(FCUART_17);
    EXIT_INTERRUPT();
}
#endif /* defined(LIN_FCUART_17_ISR_USED) */
/* PRQA S 1006,3006 -- */
/* PRQA S 3408 -- */
#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
