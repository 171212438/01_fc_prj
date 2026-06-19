/**
*   @file    Lin_FCUart_RegOps.h
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
#ifndef _LIN_FCUART_REGOPS_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall
 * not be declared REASON: It is common definition in h files */
#define _LIN_FCUART_REGOPS_H_
/* PRQA S 603, 602 -- */
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Uart_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief UART CTRL register interrupt status
 *
 */
typedef enum
{
    FCUART_CTRLTYPE_ORIE = FCUART_CTRL_ORIE_MASK, /**< FCUART_CTRLTYPE_ORIE  Overrun Interrupt
                                                     Status, 0-disable 1-enable      */
    FCUART_CTRLTYPE_NEIE = FCUART_CTRL_NEIE_MASK, /**< FCUART_CTRLTYPE_NEIE  Noise Error Interrupt
                                                     Status, 0-disable 1-enable  */
    FCUART_CTRLTYPE_FEIE = FCUART_CTRL_FEIE_MASK, /**< FCUART_CTRLTYPE_FEIE  Frame Error Interrupt
                                                     Status, 0-disable 1-enable  */
    FCUART_CTRLTYPE_PEIE = FCUART_CTRL_PEIE_MASK, /**< FCUART_CTRLTYPE_PEIE  Parity Error Interrupt
                                                     Status, 0-disable 1-enable */
    FCUART_CTRLTYPE_TIE = FCUART_CTRL_TIE_MASK,   /**< FCUART_CTRLTYPE_TIE   Transmit Interrupt
                                                     Status, 0-disable 1-enable     */
    FCUART_CTRLTYPE_TCIE = FCUART_CTRL_TCIE_MASK, /**< FCUART_CTRLTYPE_TCIE  Transmit complete
                                                     Interrupt Status, 0-disable 1-enable */
    FCUART_CTRLTYPE_RIE = FCUART_CTRL_RIE_MASK, /**< FCUART_CTRLTYPE_RIE   Receive Interrupt Status,
                                                   0-disable 1-enable      */
    FCUART_CTRLTYPE_IIE = FCUART_CTRL_IIE_MASK, /**< FCUART_CTRLTYPE_IIE   Idle Line Interrupt
                                                   Status, 0-disable 1-enable    */
    FCUART_CTRLTYPE_TE = FCUART_CTRL_TE_MASK, /**< FCUART_CTRLTYPE_TE    Transmit Status, 0-disable
                                                 1-enable               */
    FCUART_CTRLTYPE_RE = FCUART_CTRL_RE_MASK  /**< FCUART_CTRLTYPE_RE    Receive Status, 0-disable
                                                 1-enable               */
} FCUART_Ctrl_IEStaType;

/**
 * @brief  UART data bit length mode
 *
 */
typedef enum
{
    UART_BITMODE_8 = 0, /**< UART_BITMODE_8 */
    UART_BITMODE_9      /**< UART_BITMODE_9 */
} FCUART_BitModeType;

/**
 * @brief UART stop bits number
 *
 */
typedef enum
{
    UART_STOPBIT_NUM_1 = 0, /**< UART_STOPBIT_NUM_1 */
    UART_STOPBIT_NUM_2      /**< UART_STOPBIT_NUM_2 */
} FCUART_StopBitNumType;

/**
 * @brief UART parity check type
 *
 */
typedef enum
{
    UART_PARITY_EVEN = 0, /**< UART_PARITY_EVEN */
    UART_PARITY_ODD       /**< UART_PARITY_ODD  */
} FCUART_ParityType;

/**
 * @brief Lin break length type
 *
 */
typedef enum
{
    LIN_BREAKLEN_LOWER_13BITS = 0, /**< Lin break length 9 ~ 13 bits */
    LIN_BREAKLEN_HIGHER_13BITS     /**< Lin break length 12 ~ 15 bits  */
} Lin_BreakLengthType;

/**
 * @brief Lin IDLE Configure
 *
 */
typedef enum
{
    LIN_IDLECCONFIG_CHARACTER_1 = 0, /**< Lin idle character 1   character  */
    LIN_IDLECCONFIG_CHARACTER_2,     /**< Lin idle character 2   character  */
    LIN_IDLECCONFIG_CHARACTER_4,     /**< Lin idle character 4   character  */
    LIN_IDLECCONFIG_CHARACTER_8,     /**< Lin idle character 8   character  */
    LIN_IDLECCONFIG_CHARACTER_16,    /**< Lin idle character 16  character  */
    LIN_IDLECCONFIG_CHARACTER_32,    /**< Lin idle character 32  character  */
    LIN_IDLECCONFIG_CHARACTER_64,    /**< Lin idle character 64  character  */
    LIN_IDLECCONFIG_CHARACTER_128    /**< Lin idle character 128 character  */
} Lin_IdleConfigType;

/* ================================================================================== */
/* =================================== Local Inline ================================= */
/**
 * @brief Get Stat Flag
 *
 * @param pUart  UART instance value
 * @param eStatusType  stat type
 * @return FCUART STAT status flag
 */
LOCAL_INLINE uint32 FCUART_LIN_HWA_GetStatus(const FCUART_Type *pUart, uint32 eStatusType)
{
    return (pUart->STAT & (uint32)eStatusType);
}

/**
 * @brief Start transmit
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_StartTransmit(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_TE_MASK; /* start transmit */
}

/**
 * @brief clear transmit
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_ClearTransmit(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_TE_MASK; /* clear transmit */
}

/**
 * @brief Start receive
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_StartReceive(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_RE_MASK; /* start receive */
}

/**
 * @brief clear receive
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_ClearReceive(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_RE_MASK; /* clear receive */
}

/**
 * @brief clear receive transmit
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_ClearReceiveTransmit(FCUART_Type *pUart)
{
    pUart->CTRL &= ~(FCUART_CTRL_RE_MASK | FCUART_CTRL_TE_MASK); /* clear receive */
}

/**
 * @brief Start receive transmit
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_StartReceiveTransmit(FCUART_Type *pUart)
{
    pUart->CTRL |= (FCUART_CTRL_RE_MASK | FCUART_CTRL_TE_MASK); /* start receive */
}

/**
 * @brief Enable Receive Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableReceiveInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_RIE_MASK; /* Receive Interrupt Enable    */
}

/**
 * @brief Disable Receive Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableReceiveInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_RIE_MASK; /* Receive Interrupt Enable    */
}

/**
 * @brief Enable Transmit Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableTransmitInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_TIE_MASK; /* Transmit Interrupt Enable    */
}

/**
 * @brief Disable Transmit Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableTransmitInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_TIE_MASK; /* Transmit Interrupt Enable    */
}

/**
 * @brief Enable Transmit Complete Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableTransmitCompleteInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_TCIE_MASK; /* Transmit Complete Interrupt Enable    */
}

/**
 * @brief Disable Transmit Complete Interrupt
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_TCIE_MASK; /* Transmit Interrupt Enable    */
}

/**
 * @brief Enable Error Interrupt(Parity Error Exclude)
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableErrorInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_ORIE_MASK | /* Overrun Interrupt Enable */
                   FCUART_CTRL_NEIE_MASK | /* Noise Error Interrupt Enable */
                   FCUART_CTRL_FEIE_MASK; /* Frame Error Interrupt Enable                         */
}

/**
 * @brief Disable Error Interrupt(Parity Error Exclude)
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableErrorInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~(FCUART_CTRL_ORIE_MASK | /* Overrun Interrupt Enable */
                     FCUART_CTRL_NEIE_MASK | /* Noise Error Interrupt Enable */
                     FCUART_CTRL_FEIE_MASK); /* Frame Error Interrupt Enable */
}

/**
 * @brief Set FCUART Ctrl register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetCtrl(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->CTRL = u32Value;
}

#if (LIN_BRKD_SUPPORT == STD_ON)
/**
 * @brief Set FCUART Break Delimiter length
 *
 * @param pUart UART instance value
 * @param eBDType Break delimiter length
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetBreakDelimiter(FCUART_Type *pUart, Lin_BreakDelimiterType eBDType)
{
    pUart->CTRL |= FCUART_CTRL_BRKD(eBDType);
}
#endif

/**
 * @brief Set FCUART Baud register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetBaud(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->BAUD = u32Value;
}

/**
 * @brief Set FCUART Fifo register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetFifo(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->FIFO = u32Value;
}

/**
 * @brief Attach FCUART Fifo register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_AttachFifo(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->FIFO |= u32Value;
}

/**
 * @brief Set FCUART WaterMark register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetWaterMark(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->WATERMARK = u32Value;
}

/**
 * @brief Read FCUART STAT register
 *
 * @param pUart UART instance value
 * @return STAT read value
 */
LOCAL_INLINE uint32 FCUART_LIN_HWA_ReadSTAT(const FCUART_Type *pUart)
{
    return pUart->STAT;
}

/**
 * @brief Write 1 Clear FCUART STAT register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_WriteClearSTAT(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->STAT = ((pUart->STAT & FCUART_CHANGE_MASK) | u32Value);
}

/**
 * @brief Set Data Value
 *
 * @param pUart  UART instance value
 * @param u32Data Set data
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetData(FCUART_Type *pUart, uint32 u32Data)
{
    pUart->DATA = u32Data; /* data 32 bit */
}

/**
 * @brief Get Data Value
 *
 * @param pUart  UART instance value
 * @return the data value
 */
LOCAL_INLINE uint8 FCUART_LIN_HWA_GetData(const FCUART_Type *pUart)
{
    uint8 u8Data;
    /* PRQA S 311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or volatile
     * qualification from the type pointed to by a pointer REASON: A point const should be performed
     * Here Unavoidably.*/
    u8Data = *((volatile uint8 *)&pUart->DATA); /* data 32 bit */
    /* PRQA S 311 -- */
    return u8Data;
}

/**
 * @brief Get Data Register Value
 *
 * @param pUart  UART instance value
 * @return the data register value
 */
LOCAL_INLINE uint32 FCUART_LIN_HWA_GetDataRegStatus(const FCUART_Type *pUart)
{
    return pUart->DATA;
}

/**
 * @brief Reset the instance by software.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SoftwareReset(FCUART_Type *pUart)
{
    pUart->RST |= FCUART_RST_RST_MASK;
    pUart->RST &= ~FCUART_RST_RST_MASK;
}

/**
 * @brief Disable lin break detect interrupt.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableBreakDetectInterrupt(FCUART_Type *pUart)
{
    pUart->BAUD &= ~FCUART_BAUD_LBKDIE_MASK;
}

/**
 * @brief Enable lin break detect interrupt.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableBreakDetectInterrupt(FCUART_Type *pUart)
{
    pUart->BAUD |= FCUART_BAUD_LBKDIE_MASK;
}

/**
 * @brief Disable lin break Length.
 *
 * @param pUart  UART instance value
 * @param Lin_BreakLengthType eBreakLen.
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetBreakLength(FCUART_Type *pUart, Lin_BreakLengthType eBreakLen)
{
    if (eBreakLen == LIN_BREAKLEN_LOWER_13BITS)
    {
        pUart->STAT = (pUart->STAT & FCUART_CHANGE_MASK) & (~FCUART_STAT_BCGL_MASK);
    }
    else
    {
        pUart->STAT = (pUart->STAT & FCUART_CHANGE_MASK) | FCUART_STAT_BCGL_MASK;
    }
}

/**
 * @brief Set lin break detect feature enable.
 *        For example, in 8 bit mode, the LIN break character is 11 bit times long.
 *
 * @param pUart  UART instance value
 * @param bEnable  Enable cmd, FALSE for disable, TRUE for enable.
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetLinBreakDetectEnable(FCUART_Type *pUart, boolean bEnable)
{
    if (TRUE == bEnable)
    {
        pUart->STAT = (pUart->STAT & FCUART_CHANGE_MASK) | FCUART_STAT_LBKDE_MASK;
    }
    else
    {
        pUart->STAT = (pUart->STAT & FCUART_CHANGE_MASK) & (~FCUART_STAT_LBKDE_MASK);
    }
}

/**
 * @brief Send a lin break field.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SendBreakField(FCUART_Type *pUart)
{
    pUart->DATA = FCUART_DATA_FETSC_MASK;
}

/**
 * @brief Enable uart receive active interrupt.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableReceiveActiveInterrupt(FCUART_Type *pUart)
{
    pUart->BAUD |= FCUART_BAUD_RIAEIE_MASK;
}

/**
 * @brief Disable uart receive active interrupt.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableReceiveActiveInterrupt(FCUART_Type *pUart)
{
    pUart->BAUD &= ~FCUART_BAUD_RIAEIE_MASK;
}

/**
 * @brief Get UART baud register value.
 * @param pUart UART instance value
 * @return the baud register value
 */
LOCAL_INLINE uint32 FCUART_LIN_HWA_GetBaud(const FCUART_Type *pUart)
{
    return pUart->BAUD;
}

/**
 * @brief Set over sample.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetOvrSample(FCUART_Type *pUart, uint32 u32OverSample)
{
    uint32 u32RegVal = pUart->BAUD;
    pUart->BAUD      = (u32RegVal & (~(uint32)FCUART_BAUD_OVR_SAMP_MASK)) |
                  FCUART_BAUD_OVR_SAMP(u32OverSample);
}

/**
 * @brief Set SBR.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetSBR(FCUART_Type *pUart, uint32 u32SBR)
{
    uint32 u32RegVal = pUart->BAUD;
    pUart->BAUD      = (u32RegVal & (~(uint32)FCUART_BAUD_SBR_MASK)) | FCUART_BAUD_SBR(u32SBR);
}

/**
 * @brief Get Ctrl register value.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE uint32 FCUART_LIN_HWA_GetCtrl(const FCUART_Type *pUart)
{
    return pUart->CTRL;
}

/**
 * @brief Set uart receive active interrupt status.
 *
 * @param pUart  UART instance value
 * @param uint8 u8Data to be configured
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetIdleConfig(FCUART_Type *pUart, Lin_IdleConfigType eType)
{
    uint32 u32RegVal = pUart->CTRL;
    pUart->CTRL = ((u32RegVal & (~(uint32)FCUART_CTRL_IDLECFG_MASK)) | FCUART_CTRL_IDLECFG(eType));
}

/**
 * @brief Enable uart idle line interrupt.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_EnableIdleInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL |= FCUART_CTRL_IIE_MASK;
}

/**
 * @brief Disable uart idle line interrupt.
 *
 * @param pUart  UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_DisableIdleInterrupt(FCUART_Type *pUart)
{
    pUart->CTRL &= ~FCUART_CTRL_IIE_MASK;
}

/**
 * @brief Get Fifo Flag
 *
 * @param pUart  UART instance value
 * @param eFifoType  Fifo stat type
 * @return FCUART fifo status flag
 */
LOCAL_INLINE uint32 FCUART_LIN_HWA_GetFifoFlag(const FCUART_Type *pUart, uint32 eFifoType)
{
    return (pUart->FIFO & (uint32)eFifoType);
}

/**
 * @brief Clear Fifo Flag
 *
 * @param pUart  UART instance value
 * @param eFifoType  Fifo stat type
 */
LOCAL_INLINE void FCUART_LIN_HWA_ClearFifoFlag(FCUART_Type *pUart, uint32 eFifoType)
{
    pUart->FIFO = (eFifoType | (pUart->FIFO & FCUART_FIFO_CHANGE_MASK));
}

/**
 * @brief Clear FCUART Tx Rx Fifo register
 *
 * @param pUart UART instance value
 */
LOCAL_INLINE void FCUART_LIN_HWA_ClearTxRxFifo(FCUART_Type *pUart)
{
    pUart->FIFO = ((FCUART_FIFO_TXFLUSH_MASK | FCUART_FIFO_RXFLUSH_MASK) |
                   (pUart->FIFO & FCUART_FIFO_CHANGE_MASK));
}

/**
 * @brief Set FCUART Tx WaterMark register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetTxWaterMark(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->WATERMARK &= ~FCUART_WATERMARK_TXWATER_MASK;
    pUart->WATERMARK |= FCUART_WATERMARK_TXWATER(u32Value);
}

/**
 * @brief Set FCUART Rx WaterMark register
 *
 * @param pUart UART instance value
 * @param u32Value written value
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetRxWaterMark(FCUART_Type *pUart, uint32 u32Value)
{
    pUart->WATERMARK &= ~FCUART_WATERMARK_RXWATER_MASK;
    pUart->WATERMARK |= FCUART_WATERMARK_RXWATER(u32Value);
}

/**
 * @brief Get FCUART WaterMark Rxcount
 *
 * @param pUart UART instance value
 * @return Rxcount value
 */
LOCAL_INLINE uint8 FCUART_LIN_HWA_GetFifoRxCount(FCUART_Type *pUart)
{
    return ((uint8)(((pUart->WATERMARK) & FCUART_WATERMARK_RXCOUNT_MASK) >>
                    FCUART_WATERMARK_RXCOUNT_SHIFT));
}

/**
 * @brief Set FCUART inverse feature.
 *
 * @param pUart  UART instance value
 * @param bEnable   false for disable, true for enable.
 */
LOCAL_INLINE void FCUART_LIN_HWA_SetReceiveDataInverse(FCUART_Type *pUart, uint8 u8Enable)
{
    if (u8Enable != 0)
    {
        pUart->STAT = (FCUART_STAT_RXINV_MASK | (pUart->STAT & FCUART_CHANGE_MASK));
    }
    else
    {
        pUart->STAT = (pUart->STAT & FCUART_CHANGE_MASK) & (~FCUART_STAT_RXINV_MASK);
    }
}

LOCAL_INLINE uint8 FCUART_LIN_HWA_GetReceiveDataInverse(FCUART_Type *pUart)
{
    return (pUart->STAT & FCUART_STAT_RXINV_MASK) >> FCUART_STAT_RXINV_SHIFT;
}

LOCAL_INLINE uint8 FCUART_LIN_HWA_GetReceiveActiveFlag(FCUART_Type *pUart)
{
    return (pUart->STAT & FCUART_STAT_RAF_MASK) >> FCUART_STAT_RAF_SHIFT;
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _LIN_FCUART_REGOPS_H_ */
