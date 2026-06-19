/**
*   @file    Uart_RegOps.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - Hardware access layer header file.
*   @details Uart hardware access layer header file.
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
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to
variable length reception
==================================================================================================*/

#ifndef UART_REGOPS_H_
#define UART_REGOPS_H_
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Uart_Reg.h"
#include "Uart_GeneralTypes.h"

/********* Local inline function ************/
/**
 * @brief Get Stat Flag
 *
 * @param pUart  UART instance value
 * @param eStatusType  stat type
 * @return FCUART STAT status flag
 */
LOCAL_INLINE uint32 FCUART_UART_HWA_GetStatus(FCUART_Type *pUart, uint32 eStatusType)
{
    return (pUart->STAT & (uint32)eStatusType);
}

/**
 * @brief Clear Stat Flag
 *
 * @param pUart  UART instance value
 * @param u32StatusType  stat type
 */
LOCAL_INLINE void FCUART_UART_HWA_ClearStatus(FCUART_Type *pUart, uint32 u32StatusType)
{
    pUart->STAT = (u32StatusType | (pUart->STAT & FCUART_CHANGE_MASK));
}

/**
 * @brief Enable Receive Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_RIE_MASK; /* Receive Interrupt Enable    */
}

/**
 * @brief Disable Receive Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_RIE_MASK; /* Receive Interrupt Enable    */
}

/**
 * @brief Enable Error Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableErrorInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_ORIE_MASK | /* Overrun Interrupt Enable */
                   FCUART_CTRL_NEIE_MASK | /* Noise Error Interrupt Enable */
                   FCUART_CTRL_FEIE_MASK | /* Frame Error Interrupt Enable */
                   FCUART_CTRL_PEIE_MASK; /* Parity Error Interrupt Enable                        */
}

/**
 * @brief Disable Error Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableErrorInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~(FCUART_CTRL_ORIE_MASK | /* Overrun Interrupt Enable */
                     FCUART_CTRL_NEIE_MASK | /* Noise Error Interrupt Enable */
                     FCUART_CTRL_FEIE_MASK | /* Frame Error Interrupt Enable */
                     FCUART_CTRL_PEIE_MASK); /* Parity Error Interrupt Enable */
}

/**
 * @brief Get FCUART Ctrl register specified value
 *
 * @param pUart UART instance value
 * @return Register value
 */
LOCAL_INLINE uint32 FCUART_UART_HWA_GetCtrlReg(FCUART_Type *pUart, uint32 u32Value)
{
    return (pUart->CTRL & (uint32)u32Value);
}

/**
 * @brief Enable Transmit Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_TIE_MASK; /* Transmit Interrupt Enable    */
}

/**
 * @brief Disable Transmit Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_TIE_MASK; /* Transmit Interrupt Enable    */
}

/**
 * @brief Enable Transmit Complete Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_TCIE_MASK; /* Transmit Complete Interrupt Enable    */
}

/**
 * @brief Disable Transmit Complete Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_TCIE_MASK; /* Transmit Interrupt Enable    */
}

/**
 * @brief Set FCUART Baud register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_UART_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->BAUD = u32Value;
}

/**
 * @brief Sets the UART baud rate oversampling ratio.
 *
 * @param pUart UART instance value
 * @param OverSamplingRatio The oversampling ratio "OSR"
 */
LOCAL_INLINE void FCUART_UART_HWA_SetOversamplingRatio(FCUART_Type *pUart, uint32 OverSamplingRatio)
{
    pUart->BAUD = (pUart->BAUD & ~FCUART_BAUD_OVR_SAMP_MASK) |
                  FCUART_BAUD_OVR_SAMP(OverSamplingRatio);
}

/**
 * @brief Sets the UART baud rate modulo divisor.
 *
 * @param pUart UART instance value
 * @param baudRateDivisor The baud rate modulo division "SBR"
 */
LOCAL_INLINE void FCUART_UART_HWA_SetBaudRateDivisor(FCUART_Type *pUart, uint32 baudRateDivisor)
{
    pUart->BAUD = (pUart->BAUD & ~FCUART_BAUD_SBR_MASK) | FCUART_BAUD_SBR(baudRateDivisor);
}

/**
 * @brief Enable Both Edge Sampling
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableBothEdgeSampling(FCUART_Type *pUart)
{
    pUart->BAUD |= FCUART_BAUD_BEDGE_SAMP_MASK;
}

/*!
 * @brief Configures the number of bits per character in the UART controller.
 *
 * This function configures the number of bits per character in the UART controller.
 *
 * @param pUart UART instance value
 * @param BitCountPerChar  Number of bits per char (7, 8, 9, or 10, depending on the UART instance)
 * @param Parity  Specifies whether parity bit is enabled
 */
LOCAL_INLINE void FCUART_UART_HWA_SetBitCountPerChar(FCUART_Type             *pUart,
                                                     Uart_BitCountPerCharType BitCountPerChar,
                                                     boolean                  Parity)
{
    uint32 TmpBitCountPerChar = (uint32)BitCountPerChar;
    if (Parity != 0U)
    {
        TmpBitCountPerChar += 1U;
    }

    if (TmpBitCountPerChar == (uint32)UART_10_BITS_PER_CHAR)
    {
        pUart->BAUD = (pUart->BAUD & ~FCUART_BAUD_10BIT_MODE_MASK) |
                      ((uint32)1U << FCUART_BAUD_10BIT_MODE_SHIFT);
    }
    else
    {
        if (UART_7_BITS_PER_CHAR == BitCountPerChar)
        {
            /* Check if parity is enabled or not*/
            if (Parity != 0U)
            {
                /* clear M7 to make sure not 7-bit mode (7BMS = 0) and config 8 bits (M = 0) */
                pUart->CTRL &= ~(FCUART_CTRL_7BMS_MASK | FCUART_CTRL_BMSEL_MASK);
            }
            else
            {
                /* config 7-bits (7BMS = 1)*/
                pUart->CTRL = (pUart->CTRL & ~FCUART_CTRL_7BMS_MASK) |
                              ((uint32)1U << FCUART_CTRL_7BMS_SHIFT);
            }
        }
        else
        {
            TmpBitCountPerChar -= 1U;
            /* config 8-bit (M=0) or 9-bits (M=1) */
            pUart->CTRL = (pUart->CTRL & ~FCUART_CTRL_BMSEL_MASK) |
                          (TmpBitCountPerChar << FCUART_CTRL_BMSEL_SHIFT);
        }
        /* clear M10 to make sure not 10-bit mode */
        pUart->BAUD &= ~FCUART_BAUD_10BIT_MODE_MASK;
    }
}

/**
 * @brief Write 1 Clear FCUART STAT register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_UART_HWA_WriteClearSTAT(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->STAT = (u32Value | (pUart->STAT & FCUART_CHANGE_MASK));
}

/**
 * @brief Set Parity
 *
 * @param pUart  UART instance value
 * @param eParityType   Parity mode (enabled, disable, odd, even)
 */
LOCAL_INLINE void FCUART_UART_HWA_SetParity(FCUART_Type *pUart, Uart_ParityModeType eParityType)
{
    pUart->CTRL = (pUart->CTRL & ~FCUART_CTRL_PE_MASK) |
                  (((uint32)eParityType >> 1U) << FCUART_CTRL_PE_SHIFT);
    pUart->CTRL = (pUart->CTRL & ~FCUART_CTRL_PT_MASK) |
                  (((uint32)eParityType & 1U) << FCUART_CTRL_PT_SHIFT);
}

/**
 * @brief Set Bit Mode and Parity
 *
 * @param pUart  UART instance value
 * @param eStopBit  stop bits number 1 or 2 bits
 */
LOCAL_INLINE void FCUART_UART_HWA_SetStopBit(FCUART_Type *pUart, Uart_StopBitCountType eStopBit)
{
    uint32 u32RegVal = pUart->BAUD;
    pUart->BAUD      = ((u32RegVal & (~FCUART_BAUD_SBNS_MASK)) | FCUART_BAUD_SBNS(eStopBit));
}

/**
 * @brief Enable Rxfifo
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableRxFiFo(FCUART_Type *pUart)
{
    pUart->FIFO |= FCUART_FIFO_RXFEN_MASK;
}

/**
 * @brief Enable Transmit DMA
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableTransmitDMA(FCUART_Type *pUart)
{
    pUart->BAUD |= FCUART_BAUD_TDMAEN_MASK;
}

/**
 * @brief Disable Transmit DMA
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableTransmitDMA(FCUART_Type *pUart)
{
    pUart->BAUD &= ~FCUART_BAUD_TDMAEN_MASK;
}

/**
 * @brief Enable Receive DMA
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableReceiveDMA(FCUART_Type *pUart)
{
    pUart->BAUD |= FCUART_BAUD_RDMAEN_MASK;
}

/**
 * @brief Disable Receive DMA
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableReceiveDMA(FCUART_Type *pUart)
{
    pUart->BAUD &= ~FCUART_BAUD_RDMAEN_MASK;
}

/**
 * @brief Clear FCUART Tx Fifo register
 *
 * @param pUart UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_FlushTxBuffer(FCUART_Type *pUart)
{
    pUart->FIFO |= FCUART_FIFO_TXFLUSH_MASK;
}

/**
 * @brief Clear FCUART Rx Fifo register
 *
 * @param pUart UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_FlushRxBuffer(FCUART_Type *pUart)
{
    pUart->FIFO |= FCUART_FIFO_RXFLUSH_MASK;
}

/**
 * @brief Set Data Value
 *
 * @param pUart  UART instance value
 * @param u32Data Set data
 */
LOCAL_INLINE void FCUART_UART_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)
{
    pUart->DATA = u32Data; /* data 32 bit */
}

/**
 * @brief Get Data Value
 *
 * @param pUart  UART instance value
 * @return the data value
 */
LOCAL_INLINE uint8 FCUART_UART_HWA_GetData(const FCUART_Type *pUart)
{
    uint8 u8Data;

    u8Data = *((volatile uint8 *)&pUart->DATA); /* data 32 bit */

    return u8Data;
}

/**
 * @brief Get Count Value
 *
 * @param pUart  UART instance value
 * @return the data value
 */

LOCAL_INLINE uint16 FCUART_UART_HWA_GetRxFiFoCount(const FCUART_Type *pUart)
{

    return (uint16)((pUart->WATERMARK & FCUART_WATERMARK_RXCOUNT_MASK) >>
                    FCUART_WATERMARK_RXCOUNT_SHIFT);
}

/**
 * @brief Set R8T9 bit
 *
 * @param pUart  UART instance value
 * @return the data value
 */
LOCAL_INLINE void FCUART_UART_HWA_SetR8T9(FCUART_Type *pUart, uint8 u8Data)
{
    uint32 u32RegVal = pUart->CTRL;
    pUart->CTRL      = ((u32RegVal & (~FCUART_CTRL_R8T9_MASK)) | FCUART_CTRL_R8T9(u8Data));
}

/**
 * @brief Get R8T9 bit
 *
 * @param pUart  UART instance value
 * @return the data value
 */
LOCAL_INLINE uint8 FCUART_UART_HWA_GetR8T9(const FCUART_Type *pUart)
{
    return (uint8)((pUart->CTRL & FCUART_CTRL_R8T9_MASK) >> FCUART_CTRL_R8T9_SHIFT);
}

/**
 * @brief Set R9T8 bit
 *
 * @param pUart  UART instance value
 * @return the data value
 */
LOCAL_INLINE void FCUART_UART_HWA_SetR9T8(FCUART_Type *pUart, uint8 u8Data)
{
    uint32 u32RegVal = pUart->CTRL;
    pUart->CTRL      = ((u32RegVal & (~FCUART_CTRL_R9T8_MASK)) | FCUART_CTRL_R9T8(u8Data));
}

/**
 * @brief Get R9T8 bit
 *
 * @param pUart  UART instance value
 * @return the data value
 */
LOCAL_INLINE uint8 FCUART_UART_HWA_GetR9T8(const FCUART_Type *pUart)
{
    return (uint8)((pUart->CTRL & FCUART_CTRL_R9T8_MASK) >> FCUART_CTRL_R9T8_SHIFT);
}

/**
 * @brief Reset the instance by software.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_SoftwareReset(FCUART_Type *pUart)
{
    pUart->RST |= FCUART_RST_RST_MASK;
    pUart->RST &= ~FCUART_RST_RST_MASK;
}

/**
 * @brief Set fcuart TX Transfer enable or disable.
 *
 * @param pUart  UART instance value
 * @param bEnable  Enable cmd, FALSE for disable, TRUE for enable.
 */
LOCAL_INLINE void FCUART_UART_HWA_SetTxTransfer(FCUART_Type *pUart, boolean bEnable)
{
    if (TRUE == bEnable)
    {
        pUart->CTRL |= FCUART_CTRL_TE_MASK;
    }
    else
    {
        pUart->CTRL &= ~FCUART_CTRL_TE_MASK;
    }
}

/**
 * @brief Set fcuart RX Transfer enable or disable.
 *
 * @param pUart  UART instance value
 * @param bEnable  Enable cmd, FALSE for disable, TRUE for enable.
 */
LOCAL_INLINE void FCUART_UART_HWA_SetRxTransfer(FCUART_Type *pUart, boolean bEnable)
{
    if (TRUE == bEnable)
    {
        pUart->CTRL |= FCUART_CTRL_RE_MASK;
    }
    else
    {
        pUart->CTRL &= ~FCUART_CTRL_RE_MASK;
    }
}

/**
 * @brief Enable the FCUART loop mode.
 *
 * @param pUart     UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableLoopMode(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_LOOPMS_MASK;
}

/**
 * @brief Enable the FCUART hardware flow control.
 *
 * @param pUart     UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableHwFlowControl(FCUART_Type *pUart)
{
    pUart->MODIR |= (FCUART_MODIR_RXRTSEN_MASK | FCUART_MODIR_TXCTSEN_MASK);
}

/**
 * @brief Enable the FCUART idle interrupt.
 *
 * @param pUart     UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_EnableIdleInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_IIE_MASK; /* Receive Interrupt Enable    */
}

/**
 * @brief Set the idle character number.
 *
 * @param pUart     UART instance value
 * @param eIdleCharNum  Idle character number
 */
LOCAL_INLINE void FCUART_UART_HWA_SetIdleConfig(FCUART_Type *pUart, Uart_IdleCharNumType eIdleCharNum)
{
    pUart->CTRL |= FCUART_CTRL_IDLECFG(eIdleCharNum); /* Receive Interrupt Enable    */
}

/**
 * @brief Disable the FCUART idle interrupt.
 *
 * @param pUart     UART instance value
 */
LOCAL_INLINE void FCUART_UART_HWA_DisableIdleInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_IIE_MASK; /* Receive Interrupt Enable    */
}

/** @}*/

#ifdef __cplusplus
}
#endif

#endif /* #ifndef UART_REGOPS_H_ */
