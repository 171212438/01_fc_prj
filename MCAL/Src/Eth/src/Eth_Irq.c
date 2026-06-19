/**
*   @file    Eth_Irq.c
*   @version 1.5.1

*   @brief   AUTOSAR ETH - ETH Interrupt source file..
*   @details This file contains the implementation of ETH Interrupt source.
*
*   @addtogroup ETH
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETH
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       10/07/2023    QXW0085       N/A          Eth Initial Version
*   0.2.0       27/09/2023    QXW0085       N/A          Implementation of Multicore instance
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

/* PRQA S 3006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *  3006:These functions contains a mixture of in-line assembler statements and C statements.
 *  Reason: The assembly statement has been encapsulated and isolated.
 */

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eth_Hal.h"
#include "Eth_Version.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define ETH_START_SEC_CODE
#include "Eth_MemMap.h"

ETH_TEXT_SECTION ISR(Eth_System_ISR);
ETH_TEXT_SECTION ISR(Eth_Rx_CHannel0_ISR);
ETH_TEXT_SECTION ISR(Eth_Tx_CHannel0_ISR);
ETH_TEXT_SECTION ISR(Eth_Rx_CHannel1_ISR);
ETH_TEXT_SECTION ISR(Eth_Tx_CHannel1_ISR);

/**
 * @brief                        Eth driver system interrupt handler.
 * @details                      [FUNC_Eth_00073][SWDESG_ETH_118]void Eth_System_ISR(void)
 *
 */
ETH_TEXT_SECTION ISR(Eth_System_ISR)
{
    uint8 CoreId = Eth_GetPartitionID();

    /* [FUNC_Eth_00075][FMR_Eth_00004][SWDESG_ETH_119]Check the controller enabled state. */
    if (ETH_MODE_ACTIVE == Eth_Hal_GetControllerMode(ETH_CTRLIDX_0))
    {
        /* [FUNC_Eth_00076][FUNC_Eth_00077][SWDESG_ETH_120]Check the driver initialization state. */
        if (ETH_CONFIG_PTR(CoreId) != NULL_PTR)
        {
#if (STD_ON == ETH_CHECK_ECU_PARTITION)
            /* [SWDESG_ETH_318]Check the ECUC partition map */
            if (ETH_CFG_PARTITION_ID(ETH_CTRLIDX_0, CoreId) == CoreId)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
            {
                /* [FUNC_Eth_00074]Handle the system events of the ethernet controller. */
                Eth_Hal_ProcessSystemInterrupt(ETH_CTRLIDX_0,
                                               ETH_CFG_CTRL_CFG_PTR(ETH_CTRLIDX_0, CoreId));
            }
        }
        else
        {
            /* [FUNC_Eth_00076]Eth is initialized by another core, do nothing. */
        }
    }
    else
    {
        /* [FUNC_Eth_00075][FMR_Eth_00004]The controller is disabled, clear the interrupt status. */
        Eth_Hal_ClearSystemInterruptStatus(ETH_CTRLIDX_0);
    }

    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     *  1006:This in-line assembler construct is a language extension.
     *  Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}

/**
 * @brief                        Eth driver DMA RX channel 0 interrupt handler.
 * @details                      [FUNC_Eth_00078][SWDESG_ETH_121]void Eth_Rx_CHannel0_ISR(void)
 *
 */
ETH_TEXT_SECTION ISR(Eth_Rx_CHannel0_ISR)
{
    uint8 CoreId = Eth_GetPartitionID();

    /* [FUNC_Eth_00080][FMR_Eth_00004][SWDESG_ETH_122]Check the controller enabled state. */
    if (ETH_MODE_ACTIVE == Eth_Hal_GetControllerMode(ETH_CTRLIDX_0))
    {
        /* [FUNC_Eth_00081][FUNC_Eth_00082][SWDESG_ETH_123]Check the driver initialization state. */
        if (ETH_CONFIG_PTR(CoreId) != NULL_PTR)
        {
#if (STD_ON == ETH_CHECK_ECU_PARTITION)
            /* [SWDESG_ETH_319]Check the ECUC partition map */
            if (ETH_CFG_PARTITION_ID(ETH_CTRLIDX_0, CoreId) == CoreId)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
            {
                /* [FUNC_Eth_00079]Handle the receive DMA channel 0 event. */
                Eth_Hal_ProcessRxInterrupt(ETH_CTRLIDX_0,
                                           ETH_CHANNELIDX_0,
                                           ETH_CFG_CTRL_CFG_PTR(ETH_CTRLIDX_0, CoreId));
            }
        }
        else
        {
            /* [FUNC_Eth_00081]Eth is initialized by another core, do nothing. */
        }
    }
    else
    {
        /* [FUNC_Eth_00080][FMR_Eth_00004]The controller is disabled, clear the interrupt status. */
        Eth_Hal_ClearRxInterruptStatus(ETH_CTRLIDX_0, ETH_CHANNELIDX_0);
    }

    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     *  1006:This in-line assembler construct is a language extension.
     *  Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}

/**
 * @brief                        ENET driver DMA TX channel 0 interrupt handler.
 * @details                      [FUNC_Eth_00083][SWDESG_ETH_124]void Eth_Tx_CHannel0_ISR(void)
 *
 */
ETH_TEXT_SECTION ISR(Eth_Tx_CHannel0_ISR)
{
    uint8 CoreId = Eth_GetPartitionID();

    /* [FUNC_Eth_00085][FMR_Eth_00004][SWDESG_ETH_125]Check the controller enabled state. */
    if (ETH_MODE_ACTIVE == Eth_Hal_GetControllerMode(ETH_CTRLIDX_0))
    {
        /* [FUNC_Eth_00086][FUNC_Eth_00087][SWDESG_ETH_126]Check the driver initialization state. */
        if (ETH_CONFIG_PTR(CoreId) != NULL_PTR)
        {
#if (STD_ON == ETH_CHECK_ECU_PARTITION)
            /* [SWDESG_ETH_320]Check the ECUC partition map */
            if (ETH_CFG_PARTITION_ID(ETH_CTRLIDX_0, CoreId) == CoreId)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
            {
                /* [FUNC_Eth_00084]Handle the transmit DMA channel 0 event. */
                Eth_Hal_ProcessTxInterrupt(ETH_CTRLIDX_0,
                                           ETH_CHANNELIDX_0,
                                           ETH_CFG_CTRL_CFG_PTR(ETH_CTRLIDX_0, CoreId));
            }
        }
        else
        {
            /* [FUNC_Eth_00086][FMR_Eth_00004]Eth is initialized by another core, do nothing. */
        }
    }
    else
    {
        /* [FUNC_Eth_00085]The controller is disabled, clear the interrupt status. */
        Eth_Hal_ClearTxInterruptStatus(ETH_CTRLIDX_0, ETH_CHANNELIDX_0);
    }

    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     *  1006:This in-line assembler construct is a language extension.
     *  Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}

/**
 * @brief                        Eth driver DMA RX channel 1 interrupt handler.
 * @details                      [FUNC_Eth_00088][SWDESG_ETH_127]void Eth_Rx_CHannel1_ISR(void)
 *
 */
ETH_TEXT_SECTION ISR(Eth_Rx_CHannel1_ISR)
{
    uint8 CoreId = Eth_GetPartitionID();

    /* [FUNC_Eth_00090][FMR_Eth_00004][SWDESG_ETH_128]Check the controller enabled state. */
    if (ETH_MODE_ACTIVE == Eth_Hal_GetControllerMode(ETH_CTRLIDX_0))
    {
        /* [FUNC_Eth_00091][FUNC_Eth_00092][SWDESG_ETH_129]Check the driver initialization state. */
        if (ETH_CONFIG_PTR(CoreId) != NULL_PTR)
        {
#if (STD_ON == ETH_CHECK_ECU_PARTITION)
            /* [SWDESG_ETH_321]Check the ECUC partition map */
            if (ETH_CFG_PARTITION_ID(ETH_CTRLIDX_0, CoreId) == CoreId)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
            {
                /* [FUNC_Eth_00089]Handle the receive DMA channel 1 event. */
                Eth_Hal_ProcessRxInterrupt(ETH_CTRLIDX_0,
                                           ETH_CHANNELIDX_1,
                                           ETH_CFG_CTRL_CFG_PTR(ETH_CTRLIDX_0, CoreId));
            }
        }
        else
        {
            /* [FUNC_Eth_00091]Eth is initialized by another core, do nothing. */
        }
    }
    else
    {
        /* [FUNC_Eth_00090][FMR_Eth_00004]The controller is disabled, clear the interrupt status. */
        Eth_Hal_ClearRxInterruptStatus(ETH_CTRLIDX_0, ETH_CHANNELIDX_1);
    }

    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     *  1006:This in-line assembler construct is a language extension.
     *  Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}

/**
 * @brief                        ENET driver DMA TX channel 1 interrupt handler.
 * @details                      [FUNC_Eth_00093][SWDESG_ETH_130]void Eth_Tx_CHannel1_ISR(void)
 *
 */
ETH_TEXT_SECTION ISR(Eth_Tx_CHannel1_ISR)
{
    uint8 CoreId = Eth_GetPartitionID();

    /* [FUNC_Eth_00095][FMR_Eth_00004][SWDESG_ETH_131]Check the controller enabled state. */
    if (ETH_MODE_ACTIVE == Eth_Hal_GetControllerMode(ETH_CTRLIDX_0))
    {
        /* [FUNC_Eth_00096][FUNC_Eth_00097][SWDESG_ETH_132]Check the driver initialization state. */
        if (ETH_CONFIG_PTR(CoreId) != NULL_PTR)
        {
#if (STD_ON == ETH_CHECK_ECU_PARTITION)
            /* [SWDESG_ETH_322]Check the ECUC partition map */
            if (ETH_CFG_PARTITION_ID(ETH_CTRLIDX_0, CoreId) == CoreId)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
            {
                /* [FUNC_Eth_00094]Handle the transmit DMA channel 1 event. */
                Eth_Hal_ProcessTxInterrupt(ETH_CTRLIDX_0,
                                           ETH_CHANNELIDX_1,
                                           ETH_CFG_CTRL_CFG_PTR(ETH_CTRLIDX_0, CoreId));
            }
        }
        else
        {
            /* [FUNC_Eth_00096]Eth is initialized by another core, do nothing. */
        }
    }
    else
    {
        /* [FUNC_Eth_00095][FMR_Eth_00004]The controller is disabled, clear the interrupt status. */
        Eth_Hal_ClearTxInterruptStatus(ETH_CTRLIDX_0, ETH_CHANNELIDX_1);
    }

    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     *  1006:This in-line assembler construct is a language extension.
     *  Reason: The use of this inline assembly is documented.
     */
    EXIT_INTERRUPT();
    /* PRQA S 1006 -- */
}

#define ETH_STOP_SEC_CODE
#include "Eth_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
