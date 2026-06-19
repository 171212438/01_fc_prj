/**
*   @file    Uart_Irq.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - IRQ functions.
*   @details This file contains the UART interrupt and interrupt service functions.
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
*   ---------   ----------    ------------- ----------   ------------------
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifndef FCUART_IRQ_H
#define FCUART_IRQ_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Uart_Reg.h"
#include "Mcal.h"
#include "CDD_Uart_PBcfg.h"

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

#if (FCUART_INSTANCE_COUNT > 0U)
#ifdef UART_INSTANCE_USING_0
/* Implementation of Uart0 handler named in startup code. */
UART_TEXT_SECTION UART_TEXT_SECTION ISR(UART_0_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 1U)
#ifdef UART_INSTANCE_USING_1
/* Implementation of Uart1 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_1_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 2U)
#ifdef UART_INSTANCE_USING_2
/* Implementation of Uart2 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_2_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 3U)
#ifdef UART_INSTANCE_USING_3
/* Implementation of Uart3 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_3_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 4U)
#ifdef UART_INSTANCE_USING_4
/* Implementation of Uart4 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_4_IRQHandler);
#endif
#ifdef UART_INSTANCE_USING_MSC
/* Implementation of Uart_Msc handler named in startup code. */
UART_TEXT_SECTION ISR(UART_MSC_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 5U)
#ifdef UART_INSTANCE_USING_5
/* Implementation of Uart5 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_5_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 6U)
#ifdef UART_INSTANCE_USING_6
/* Implementation of Uart6 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_6_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 7U)
#ifdef UART_INSTANCE_USING_7
/* Implementation of Uart7 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_7_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 8U)
#ifdef UART_INSTANCE_USING_8
/* Implementation of Uart8 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_8_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 9U)
#ifdef UART_INSTANCE_USING_9
/* Implementation of Uart9 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_9_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 10U)
#ifdef UART_INSTANCE_USING_10
/* Implementation of Uart10 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_10_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 11U)
#ifdef UART_INSTANCE_USING_11
/* Implementation of Uart11 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_11_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 12U)
#ifdef UART_INSTANCE_USING_12
/* Implementation of Uart12 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_12_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 13U)
#ifdef UART_INSTANCE_USING_13
/* Implementation of Uart13 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_13_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 14U)
#ifdef UART_INSTANCE_USING_14
/* Implementation of Uart14 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_14_IRQHandler);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 15U)
#ifdef UART_INSTANCE_USING_15
/* Implementation of Uart15 handler named in startup code. */
UART_TEXT_SECTION ISR(UART_15_IRQHandler);
#endif
#endif


#if (UART_HAS_DMA_ENABLED == STD_ON)
#if (FCUART_INSTANCE_COUNT > 0U)
#ifdef UART_INSTANCE_USING_0
UART_TEXT_SECTION void Uart_0_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_0_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 1U)
#ifdef UART_INSTANCE_USING_1
UART_TEXT_SECTION void Uart_1_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_1_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 2U)
#ifdef UART_INSTANCE_USING_2
UART_TEXT_SECTION void Uart_2_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_2_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 3U)
#ifdef UART_INSTANCE_USING_3
UART_TEXT_SECTION void Uart_3_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_3_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 4U)
#ifdef UART_INSTANCE_USING_4
UART_TEXT_SECTION void Uart_4_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_4_DmaTxCompleteCallback(void);
#endif
#ifdef UART_INSTANCE_USING_MSC
/* Implementation of Uart_Msc handler named in startup code. */
UART_TEXT_SECTION void Uart_MSC_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_MSC_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 5U)
#ifdef UART_INSTANCE_USING_5
UART_TEXT_SECTION void Uart_5_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_5_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 6U)
#ifdef UART_INSTANCE_USING_6
UART_TEXT_SECTION void Uart_6_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_6_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 7U)
#ifdef UART_INSTANCE_USING_7
UART_TEXT_SECTION void Uart_7_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_7_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 8U)
#ifdef UART_INSTANCE_USING_8
UART_TEXT_SECTION void Uart_8_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_8_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 9U)
#ifdef UART_INSTANCE_USING_9
UART_TEXT_SECTION void Uart_9_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_9_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 10U)
#ifdef UART_INSTANCE_USING_10
UART_TEXT_SECTION void Uart_10_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_10_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 11U)
#ifdef UART_INSTANCE_USING_11
UART_TEXT_SECTION void Uart_11_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_11_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 12U)
#ifdef UART_INSTANCE_USING_12
UART_TEXT_SECTION void Uart_12_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_12_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 13U)
#ifdef UART_INSTANCE_USING_13
UART_TEXT_SECTION void Uart_13_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_13_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 14U)
#ifdef UART_INSTANCE_USING_14
UART_TEXT_SECTION void Uart_14_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_14_DmaTxCompleteCallback(void);
#endif
#endif

#if (FCUART_INSTANCE_COUNT > 15U)
#ifdef UART_INSTANCE_USING_15
UART_TEXT_SECTION void Uart_15_DmaRxCompleteCallback(void);
UART_TEXT_SECTION void Uart_15_DmaTxCompleteCallback(void);
#endif
#endif
#endif /*(UART_HAS_DMA_ENABLED == STD_ON)*/

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* UART_IRQ_H */
