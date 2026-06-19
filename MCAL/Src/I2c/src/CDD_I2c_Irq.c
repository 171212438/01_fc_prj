/* PRQA S 0292  EOF
 * REASON: using @ in comment
 */
/**
*   @file    CDD_I2c_Irq.c
*   @version 1.5.1

*   @brief   AUTOSAR CDD I2c- Complex driver I2c SAR ip
*   @details I2c interrupt handler
*
*   @addtogroup I2c
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : I2c
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
*   0.1.0       14/07/2023    qxw0100       N/A          I2c Initial Version
*   0.2.0       27/09/2023    qxw0100       N/A          Add multicore support
*   0.3.0       09/10/2023    qxw0100       N/A          Fix notification channel bug
*   0.4.0       17/11/2023    qxw0100       N/A          Fix error status bug
*   0.5.0       17/01/2024    qxw0100       N/A          Fix status bug
*   0.6.0       18/01/2024    qxw0100       N/A          Add channel fault clear function
                                                         Add NACK signal for user choice
*   1.2.1       23/06/2025    qxw0120       N/A          Update subaddress mode
*   1.4.0       10/09/2025    qxw0120       N/A          Optimize code， increase the use of FIFO
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/* PRQA S 2071,5087 EOF
 * REASON: Specify the segment where the data is placed
 */
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "I2c_version.h"
#include "CDD_I2c.h"
#include "CDD_I2c_Hw.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
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
#define I2C_START_SEC_CODE
#include "I2c_MemMap.h"

#define I2C_STOP_SEC_CODE
#include "I2c_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define I2C_START_SEC_CODE
#include "I2c_MemMap.h"

#if defined(FCI2C_0)
/* PRQA S 1006,3006 ++
   1006:This in-line assembler construct is a language extension. The code has been ignored.
   3006:This function contains a mixture of in-line assembler statements and C statements.
   REASON: This memory barrier is needed to ensure the consistency of data written.
*/
/**
 * @brief        FCIIC0 ISR.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCI2C_0_ISR(void)
{
    FCIIC_LL_IRQnHandler(0u);
    EXIT_INTERRUPT();
}
/* PRQA S 1006,3006 -- */

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        FCIIC0 DMA transmit interrupt callback.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC0_DMATxIsr(void)
{
    FCIIC_LL_Dma_IRQnHandler(0u);
}

/**
 * @brief        FCIIC0 DMA receive interrupt callback.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC0_DMARxIsr(void)
{
    FCIIC_LL_Dma_IRQnHandler(0u);
}
#endif /* STD_ON == I2C_DMA_USED */
#endif /* defined(FCI2C_0) */

#if defined(FCI2C_1)
/**
 * @brief        FCIIC0 ISR.
 *
 * @return       void.
 */
/* PRQA S 1006,3006 ++
   1006:This in-line assembler construct is a language extension. The code has been ignored.
   3006:This function contains a mixture of in-line assembler statements and C statements.
   REASON: This memory barrier is needed to ensure the consistency of data written.
*/
I2C_TEXT_SECTION void FCI2C_1_ISR(void)
{
    FCIIC_LL_IRQnHandler(1u);
    EXIT_INTERRUPT();
}
/* PRQA S 1006,3006 -- */

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        FCIIC1 DMA transmit interrupt callback.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC1_DMATxIsr(void)
{
    FCIIC_LL_Dma_IRQnHandler(1u);
}

/**
 * @brief        FCIIC1 DMA receive interrupt callback.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC1_DMARxIsr(void)
{
    FCIIC_LL_Dma_IRQnHandler(1u);
}
#endif /* STD_ON == I2C_DMA_USED */
#endif /* defined(FCI2C_1) */

#define I2C_STOP_SEC_CODE
#include "I2c_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
