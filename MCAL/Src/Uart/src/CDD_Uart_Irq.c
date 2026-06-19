/**
*   @file    CDD_Uart_Irq.c
*   @version 1.5.1

*   @brief   AUTOSAR UART - UART Interrupt source file.
*   @details This file contains the UART Interrupt source file.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Uart_Reg.h"
#include "Uart_Irq.h"
#include "CDD_Uart_PBcfg.h"
#include "CDD_Uart_Cfg.h"
#include "LLD_Uart.h"
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * 1006:This in-line assembler construct is a language extension. The code has been ignored.
 * 3006:This function contains a mixture of in-line assembler statements and C statements.
 * REASON: The assembly statement has been encapsulated and isolated.
 */
#if (FCUART_INSTANCE_COUNT > 0U)
#ifdef UART_INSTANCE_USING_0
/* Implementation of Uart0 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_0_IRQHandler)
{
    Uart_LLD_IrqHandler(0U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 1U)
#ifdef UART_INSTANCE_USING_1
/* Implementation of Uart1 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_1_IRQHandler)
{
    Uart_LLD_IrqHandler(1U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 2U)
#ifdef UART_INSTANCE_USING_2
/* Implementation of Uart2 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_2_IRQHandler)
{
    Uart_LLD_IrqHandler(2U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 3U)
#ifdef UART_INSTANCE_USING_3
/* Implementation of Uart3 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_3_IRQHandler)
{
    Uart_LLD_IrqHandler(3U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 4U)
#ifdef UART_INSTANCE_USING_4
/* Implementation of Uart4 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_4_IRQHandler)
{
    Uart_LLD_IrqHandler(4U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 5U)
#ifdef UART_INSTANCE_USING_5
/* Implementation of Uart5 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_5_IRQHandler)
{
    Uart_LLD_IrqHandler(5U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 6U)
#ifdef UART_INSTANCE_USING_6
/* Implementation of Uart6 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_6_IRQHandler)
{
    Uart_LLD_IrqHandler(6U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 7U)
#ifdef UART_INSTANCE_USING_7
/* Implementation of Uart7 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_7_IRQHandler)
{
    Uart_LLD_IrqHandler(7U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 8U)
#ifdef UART_INSTANCE_USING_8
/* Implementation of Uart8 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_8_IRQHandler)
{
    Uart_LLD_IrqHandler(8U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 9U)
#ifdef UART_INSTANCE_USING_9
/* Implementation of Uart9 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_9_IRQHandler)
{
    Uart_LLD_IrqHandler(9U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 10U)
#ifdef UART_INSTANCE_USING_10
/* Implementation of Uart10 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_10_IRQHandler)
{
    Uart_LLD_IrqHandler(10U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 11U)
#ifdef UART_INSTANCE_USING_11
/* Implementation of Uart11 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_11_IRQHandler)
{
    Uart_LLD_IrqHandler(11U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 12U)
#ifdef UART_INSTANCE_USING_12
/* Implementation of Uart12 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_12_IRQHandler)
{
    Uart_LLD_IrqHandler(12U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 13U)
#ifdef UART_INSTANCE_USING_13
/* Implementation of Uart13 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_13_IRQHandler)
{
    Uart_LLD_IrqHandler(13U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 14U)
#ifdef UART_INSTANCE_USING_14
/* Implementation of Uart14 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_14_IRQHandler)
{
    Uart_LLD_IrqHandler(14U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 15U)
#ifdef UART_INSTANCE_USING_15
/* Implementation of Uart15 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_15_IRQHandler)
{
    Uart_LLD_IrqHandler(15U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 16U)
#ifdef UART_INSTANCE_USING_16
/* Implementation of Uart16 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_16_IRQHandler)
{
    Uart_LLD_IrqHandler(16U);
    EXIT_INTERRUPT();
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 17U)
#ifdef UART_INSTANCE_USING_17
/* Implementation of Uart17 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_17_IRQHandler)
{
    Uart_LLD_IrqHandler(17U);
    EXIT_INTERRUPT();
}
#endif
#endif
/* PRQA S 1006,3006 -- */

#if (UART_HAS_DMA_ENABLED == STD_ON)
#if (FCUART_INSTANCE_COUNT > 0U)
#ifdef UART_INSTANCE_USING_0
UART_TEXT_SECTION void Uart_0_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(0);
}
UART_TEXT_SECTION void Uart_0_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(0);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 1U)
#ifdef UART_INSTANCE_USING_1
UART_TEXT_SECTION void Uart_1_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(1);
}
UART_TEXT_SECTION void Uart_1_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(1);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 2U)
#ifdef UART_INSTANCE_USING_2
UART_TEXT_SECTION void Uart_2_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(2);
}
UART_TEXT_SECTION void Uart_2_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(2);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 3U)
#ifdef UART_INSTANCE_USING_3
UART_TEXT_SECTION void Uart_3_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(3);
}
UART_TEXT_SECTION void Uart_3_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(3);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 4U)
#ifdef UART_INSTANCE_USING_4
UART_TEXT_SECTION void Uart_4_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(4);
}
UART_TEXT_SECTION void Uart_4_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(4);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 5U)
#ifdef UART_INSTANCE_USING_5
UART_TEXT_SECTION void Uart_5_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(5);
}
UART_TEXT_SECTION void Uart_5_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(5);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 6U)
#ifdef UART_INSTANCE_USING_6
UART_TEXT_SECTION void Uart_6_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(6);
}
UART_TEXT_SECTION void Uart_6_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(6);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 7U)
#ifdef UART_INSTANCE_USING_7
UART_TEXT_SECTION void Uart_7_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(7);
}
UART_TEXT_SECTION void Uart_7_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(7);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 8U)
#ifdef UART_INSTANCE_USING_8
UART_TEXT_SECTION void Uart_8_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(8);
}
UART_TEXT_SECTION void Uart_8_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(8);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 9U)
#ifdef UART_INSTANCE_USING_9
UART_TEXT_SECTION void Uart_9_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(9);
}
UART_TEXT_SECTION void Uart_9_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(9);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 10U)
#ifdef UART_INSTANCE_USING_10
UART_TEXT_SECTION void Uart_10_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(10);
}
UART_TEXT_SECTION void Uart_10_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(10);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 11U)
#ifdef UART_INSTANCE_USING_11
UART_TEXT_SECTION void Uart_11_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(11);
}
UART_TEXT_SECTION void Uart_11_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(11);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 12U)
#ifdef UART_INSTANCE_USING_12
UART_TEXT_SECTION void Uart_12_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(12);
}
UART_TEXT_SECTION void Uart_12_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(12);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 13U)
#ifdef UART_INSTANCE_USING_13
UART_TEXT_SECTION void Uart_13_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(13);
}
UART_TEXT_SECTION void Uart_13_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(13);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 14U)
#ifdef UART_INSTANCE_USING_14
UART_TEXT_SECTION void Uart_14_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(14);
}
UART_TEXT_SECTION void Uart_14_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(14);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 15U)
#ifdef UART_INSTANCE_USING_15
UART_TEXT_SECTION void Uart_15_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(15);
}
UART_TEXT_SECTION void Uart_15_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(15);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 16U)
#ifdef UART_INSTANCE_USING_16
UART_TEXT_SECTION void Uart_16_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(16);
}
UART_TEXT_SECTION void Uart_16_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(16);
}
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 17U)
#ifdef UART_INSTANCE_USING_17
UART_TEXT_SECTION void Uart_17_DmaRxCompleteCallback(void)
{
    Uart_LLD_CompleteReceiveUsingDma(17);
}
UART_TEXT_SECTION void Uart_17_DmaTxCompleteCallback(void)
{
    Uart_LLD_CompleteSendUsingDma(17);
}
#endif
#endif

#endif /*(UART_HAS_DMA_ENABLED == STD_ON)*/

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

#ifdef __cplusplus
}

/** @} */

#endif
