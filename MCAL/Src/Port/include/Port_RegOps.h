/**
*   @file    Port_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - Hardware access layer header file.
*   @details PORT Hardware access layer header file.
*
*   @addtogroup PORT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : PORT
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
*   0.1.0       14/07/2023    QXW0071       N/A          PORT Initial Version
*   0.2.0       15/9/2023     QXW0121       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0121       N/A          Multicore support optimization
*   0.4.0       11/10/2023    QXW0121       N/A          Multicore support optimization
==================================================================================================*/
#ifndef PORT_REGOPS_H
#define PORT_REGOPS_H

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Port_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

/**
 * @brief Configure pin
 *
 * @param pPort Port instance
 * @param u8Pin Pin number
 * @param u32PcrReg Pin PCR register value
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_ConfigPin(PORT_Type *pPort, uint8 u8Pin, uint32 u32PcrReg)
{
    pPort->PCR[u8Pin] = u32PcrReg;
}

/**
 * @brief Clear Interrupt Status Flag
 *
 * @param pPort Port instance
 * @param u8Pin Pin number
 * @param u32PcrReg Pin PCR register value
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_ClearIrqFlag(PORT_Type *pPort, uint8 u8Pin)
{
    pPort->PCR[u8Pin] |= (uint32) PORT_PCR_ISF_MASK;
}


/**
 * @brief Get Port Control Reg value
 *
 * @param pPort Port instance
 * @param u8Pin Pin number
 */
PORT_TEXT_SECTION LOCAL_INLINE uint32 PORT_HWA_ReadPcrValue(const PORT_Type *pPort, uint8 u8Pin)
{
    return pPort->PCR[u8Pin];
}

/**
 * @brief Set pin pull enable
 *
 * @param pPort Port instance
 * @param u8Pin Pin number
 * @param u8PeValue Pin PE configuration value(1/0)
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_SetPinPullEnable(PORT_Type *pPort, uint8 u8Pin, uint8 u8PeValue)
{
    if (u8PeValue == (uint8)STD_ON)
    {
        pPort->PCR[u8Pin] |= (uint32) PORT_PCR_PE_MASK;
    }
    else
    {
        pPort->PCR[u8Pin] &= ~ (uint32) PORT_PCR_PE_MASK;
    }
}

/**
 * @brief Set pin pull mode
 *
 * @param pPort Port instance
 * @param u8Pin Pin number
 * @param u8PsValue Pin PS configuration value(1/0)
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_SetPinPullMode(PORT_Type *pPort, uint8 u8Pin, uint8 u8PsValue)
{
    if (u8PsValue == (uint8)STD_ON)
    {
        pPort->PCR[u8Pin] |= (uint32) PORT_PCR_PS_MASK;
    }
    else
    {
        pPort->PCR[u8Pin] &= ~ (uint32) PORT_PCR_PS_MASK;
    }
}

/**
 * @brief Set port digital filter clock source
 *
 * @param pPort Port instance
 * @param eClkSrc Digital filter clock source
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_SetDigitalFilterClkSrc(PORT_Type *pPort, uint8 eClkSrc)
{
    pPort->DFCR |= PORT_DFCR_CS(eClkSrc);
}

/**
 * @brief Configure digital filter width
 * @param pPort Port instance
 * @param u32FilterWidth Digital filter length value,range:0-31
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_ConfigDigitalFilterWidth(PORT_Type *pPort, uint32 u32FilterWidth)
{
    pPort->DFWR = PORT_DFWR_FILT(u32FilterWidth);
}

/**
 * @brief Set port digital filter enable
 *
 * @param pPort Port instance
 * @param u8RegBit DFER register bit
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_SetDigitalFilterEnable(PORT_Type *pPort, uint32 u32FilterPinMask)
{
    pPort->DFER |= u32FilterPinMask;
}

/**
 * @brief Set DWP
 *
 * @param pPort Port instance
 * @param u8Pin Pin number
 * @param u8PsValue Pin DWP configuration value
 */
PORT_TEXT_SECTION LOCAL_INLINE void PORT_HWA_SetDWP(PORT_Type *pPort, uint8 u8Pin, uint8 u8PsValue)
{
	uint32 u32TempRegVal = (uint32)(pPort->PCR[u8Pin]);
	pPort->PCR[u8Pin] = ((u32TempRegVal & ~(uint32)PORT_PCR_DWP_MASK) | PORT_PCR_DWP(u8PsValue));
}

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif


#endif /* #ifndef PORT_REGOPS_H */
