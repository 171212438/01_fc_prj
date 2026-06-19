/**
*   @file    Mcu_Pcc.c
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Pcc driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Pcc hardware IP.
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
#ifdef __cplusplus
extern "C" {
#endif

#include "Mcu_Pcc.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/**
 * @brief set PCC one peripheral clock configuration.
 *
 * @param pPccConfig the PCC initialize value point set by user.
 *
 * @note  [FMR_MCU_0001]
 */
MCU_TEXT_SECTION void PCC_SetPcc(const PCC_CLKCtrlType *const pPccConfig)
{
    /*   Disable PCC gate    */
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to object and an integer type
     * Reason: Pointer to register addressing map operation could not be avoid */
    *((volatile uint32 *)(PCC_BASE + pPccConfig->u32RegOffset)) &= (uint32)(~PCC_CGC_MASK);
    /*   Set PCC register     */
    *((volatile uint32 *)(PCC_BASE + pPccConfig->u32RegOffset))  = pPccConfig->u32RegVal;
    /* PRQA S 0306 -- */
}

#if ( MCU_CFG_PCC_DWP_SUPPORT == STD_ON )
/**
 * @brief get PCC DWP configuration.
 *
 * @return Cpu Domain write protection
 */
MCU_TEXT_SECTION uint8 PCC_GetPccDwp(uint32 u32OffSet)
{
    uint8 u8RetVal = 0xFFU;
    uint8 u8RegVal = 0U;

    u8RegVal = (uint8)((uint32)((*((volatile uint32 *)(PCC_BASE + u32OffSet)))&PCC_DWP_MASK)>>PCC_DWP_SHIFT);
    if(0U == u8RegVal)
    {
        /* All Cpu*/
        u8RetVal = 0x0FU;
    }
    else
    {
        u8RetVal = u8RegVal - 1U;
    }
    return u8RetVal;
}
#endif /* ( MCU_CFG_PCC_DWP_SUPPORT == STD_ON ) */



#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"



#ifdef __cplusplus
}
#endif

/** @} */
