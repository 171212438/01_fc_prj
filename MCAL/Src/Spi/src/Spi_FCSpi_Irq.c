/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
*   @file    Spi_FCSpi_Irq.c
*   @version 1.5.1
*
*   @brief   AUTOSAR SPI - FCSpi Interrupt source file.
*   @details FCSpi Interrupt source file.
*
*   @addtogroup SPI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SPI
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
*   0.1.0       14/07/2023    QXW0071       N/A          SPI Initial Version
*   0.2.0       03/10/2023    QXW0071       N/A          Add support for multi-core
*   0.3.0       19/10/2023    QXW0071       N/A          Optimize code to comply with Misra-C rules
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==============================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==============================================================================*/

#include "Spi.h"
#include "Spi_FCSpi.h"

#include "Mcal.h"

/*==============================================================================
*                                      LOCAL FUNCTIONS
==============================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

/*==============================================================================
*                                      GLOBAL FUNCTIONS
==============================================================================*/
#if (SPI_ASYNC_DRIVER == STD_ON)

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler statements and C statements.
 *                     #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented
 * Reason: The data sync barriar is added to IRQ handler for ARM erratum 838869. */
#if defined(FCSPI_0_ENABLED) && (FCSPI_0_ENABLED == STD_ON)

/*================================================================================================*/
/**
* @brief   DMA Rx notification for the FCSPI 0.
* @details Non-AutoSar support function used by MCL interrupt service routine
            for the DMA Rx for FCSPI 0
*
* @pre Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON.
* @pre Pre-compile parameter FCSPI_0_ENABLED shall be STD_ON.
*
*/
/*================================================================================================*/
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_0_MODE == SPI_MODE_ASYNC_DMA) )
SPI_TEXT_SECTION void SPI_FCSPI0_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_0_HWUNIT));
}

/*================================================================================================*/
/**
* @brief   DMA Tx notification for the FCSPI 0.
* @details Non-AutoSar support function used by MCL interrupt service routine
            for the DMA Tx for FCSPI 0
*
* @pre Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON.
* @pre Pre-compile parameter FCSPI_0_ENABLED shall be STD_ON.
*
*/
/*================================================================================================*/
SPI_TEXT_SECTION void SPI_FCSPI0_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_0_HWUNIT));
}
#endif


/*================================================================================================*/
/**
* @brief   This function is the end-of-queue Rx ISR for the FCSPI 0.
* @details Non-AutoSar support function used by interrupt service
*          routine of the end-of-queue Rx for FCSPI 0
*
* @pre Pre-compile parameter SPI_ASYNC_DRIVER shall be STD_ON.
* @pre Pre-compile parameter FCSPI_0_ENABLED shall be STD_ON.
*
*/
/*================================================================================================*/

#if ( FCSPI_0_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI0_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_0_HWUNIT), FCSPI_0_OFFSET);

    EXIT_INTERRUPT();
}
#endif

#endif

#if defined(FCSPI_1_ENABLED) && (FCSPI_1_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_1_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI1_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_1_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI1_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_1_HWUNIT));
}
#endif

#if ( FCSPI_1_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI1_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_1_HWUNIT), FCSPI_1_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif

#if defined(FCSPI_2_ENABLED) && (FCSPI_2_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_2_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI2_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_2_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI2_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_2_HWUNIT));
}
#endif

#if ( FCSPI_2_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI2_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_2_HWUNIT), FCSPI_2_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif

#if defined(FCSPI_3_ENABLED) && (FCSPI_3_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_3_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI3_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_3_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI3_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_3_HWUNIT));
}
#endif

#if ( FCSPI_3_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI3_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_3_HWUNIT), FCSPI_3_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif

#if defined(FCSPI_4_ENABLED) && (FCSPI_4_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_4_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI4_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_4_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI4_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_4_HWUNIT));
}
#endif

#if ( FCSPI_4_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI4_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_4_HWUNIT), FCSPI_4_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif

#if defined(FCSPI_5_ENABLED) && (FCSPI_5_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_5_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI5_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_5_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI5_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_5_HWUNIT));
}
#endif

#if ( FCSPI_5_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI5_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_5_HWUNIT), FCSPI_5_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif

#if defined(FCSPI_6_ENABLED) && (FCSPI_6_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_6_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI6_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_6_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI6_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_6_HWUNIT));
}
#endif

#if ( FCSPI_6_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI6_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_6_HWUNIT), FCSPI_6_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif

#if defined(FCSPI_7_ENABLED) && (FCSPI_7_ENABLED == STD_ON)
#if ( (SPI_DMA_USED == STD_ON) && (FCSPI_7_MODE == SPI_MODE_ASYNC_DMA) )

SPI_TEXT_SECTION void SPI_FCSPI7_DMARxIsr(void)
{
    Spi_LL_IsrDmaRx(FCSPI_HWUNIT2FCSPI(FCSPI_7_HWUNIT));
}

SPI_TEXT_SECTION void SPI_FCSPI7_DMATxIsr(void)
{
    Spi_LL_IsrDmaTx(FCSPI_HWUNIT2FCSPI(FCSPI_7_HWUNIT));
}
#endif

#if ( FCSPI_7_MODE == SPI_MODE_ASYNC_FIFO )
SPI_TEXT_SECTION void SPI_FCSPI7_FifoIsr(void)
{
    Spi_LL_IsrFifoRx(FCSPI_HWUNIT2FCSPI(FCSPI_7_HWUNIT), FCSPI_7_OFFSET);

    EXIT_INTERRUPT();
}
#endif
#endif


#endif
/* PRQA S 1006,3006 -- */
/*================================================================================================*/
#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */



