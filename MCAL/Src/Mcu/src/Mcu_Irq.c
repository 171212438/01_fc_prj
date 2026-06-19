/**
 *   @file    Mcu_Irq.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mcu - interrupt handler layer driver source file.
 *   @details This is the interrupt handler layer driver source file for Mcu.
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
/* PRQA S 1006 EOF #Misra-C:2012 Rule-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. REASON: The use of this inline assembly is documented.. */
/* PRQA S 3006 EOF #Misra-C:2012 Rule-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. REASON: The assembly statement has been encapsulated and isolated.
 */

#ifdef __cplusplus
extern "C"
{
#endif

#include "Mcal.h"
#include "Mcu_Hw.h"

#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#if (MCU_PMC_ISR_NOTIFICATION_USED == STD_ON)
ISR(Mcu_PMC_LVD_LVW_ISR);
#endif /* (MCU_PMC_ISR_NOTIFICATION_USED == STD_ON) */

#if (MCU_ENABLE_CMU == STD_ON)
ISR(Mcu_CMU0_ISR);
ISR(Mcu_CMU1_ISR);
ISR(Mcu_CMU2_ISR);
ISR(Mcu_CMU3_ISR);
ISR(Mcu_CMU4_ISR);
#endif /* (MCU_ENABLE_CMU == STD_ON) */

#if (MCU_RGM_ISR_NOTIFICATION_USED == STD_ON)
ISR(MCU_RGM_ISR);
#endif /* (MCU_RGM_ISR_NOTIFICATION_USED) */

ISR(MCU_SCG_ISR);
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief These functions represents the ISR handler for PMC related events.

* @note  [FUNC_MCU_0014]
*/
#if (MCU_PMC_ISR_NOTIFICATION_USED == STD_ON)
MCU_TEXT_SECTION ISR(Mcu_PMC_LVD_LVW_ISR)
{
    PMC_UserIRQHandler();

    EXIT_INTERRUPT();
}
#endif /* (MCU_PMC_ISR_NOTIFICATION_USED == STD_ON) */

#if (MCU_ENABLE_CMU == STD_ON)
MCU_TEXT_SECTION ISR(Mcu_CMU0_ISR)
{
    CMU_UserIRQHandler(CMU_INSTANCE_0);
    EXIT_INTERRUPT();
}

MCU_TEXT_SECTION ISR(Mcu_CMU1_ISR)
{
    CMU_UserIRQHandler(CMU_INSTANCE_1);
    EXIT_INTERRUPT();
}

MCU_TEXT_SECTION ISR(Mcu_CMU2_ISR)
{
    CMU_UserIRQHandler(CMU_INSTANCE_2);
    EXIT_INTERRUPT();
}

MCU_TEXT_SECTION ISR(Mcu_CMU3_ISR)
{
    CMU_UserIRQHandler(CMU_INSTANCE_3);
    EXIT_INTERRUPT();
}

MCU_TEXT_SECTION ISR(Mcu_CMU4_ISR)
{
    CMU_UserIRQHandler(CMU_INSTANCE_4);
    EXIT_INTERRUPT();
}
#endif /* (MCU_ENABLE_CMU == STD_ON) */

#if (MCU_RGM_ISR_NOTIFICATION_USED == STD_ON)
MCU_TEXT_SECTION ISR(MCU_RGM_ISR)
{
    RGM_UserIRQHandler();
    EXIT_INTERRUPT();
}
#endif /* (MCU_RGM_ISR_NOTIFICATION_USED) */

/* [FUNC_MCU_0012] */
MCU_TEXT_SECTION ISR(MCU_SCG_ISR)
{
    SCG_UserIRQHandler();
    EXIT_INTERRUPT();
}

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
