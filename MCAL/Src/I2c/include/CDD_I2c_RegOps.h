/**
 *   @file     CDD_I2c_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD I2c - hardware access layer header file.
 *   @details I2c low level driver API.
 *
 *   @addtogroup I2c
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FCIIC
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
#ifndef CDD_I2C_REGOPS_H
#define CDD_I2C_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_I2c_Reg.h"
#include "CDD_I2c_Types.h"

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief IIC Command Type Enumeration
 *
 */
typedef enum
{
    FCIIC_TX_CMD_TRANSMIT = 0, /**< FCIIC_TX_CMD_TRANSMIT                 transmit command */
    FCIIC_TX_CMD_RECEIVE,      /**< FCIIC_TX_CMD_RECEIVE                  receive command*/
    FCIIC_TX_CMD_STOP,         /**< FCIIC_TX_CMD_STOP                     stop command */
    FCIIC_TX_CMD_RECANDDISCARD, /**< FCIIC_TX_CMD_RECANDDISCARD            receive and discard data command*/
    FCIIC_TX_CMD_STARTANDTRANSMIT,        /**< FCIIC_TX_CMD_STARTANDTRANSMIT         start and then
                                             transmit data */
    FCIIC_TX_CMD_STARTANDTRANSMIT_WITHNAK /**< FCIIC_TX_CMD_STARTANDTRANSMIT_WITHNAK start and then
                                             transmit and don't care ACK */

} FCIIC_TX_CMDType;

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief        Set FCIIC MCR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMCR(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MCR = u32Value;
}

/**
 * @brief        Clear FCIIC master FIFO.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_ClearMasterFIFO(FCIIC_Type *const pFciic)
{
    volatile uint32 u32Timeout    = 0xFFFFu;
    uint32          u32EnableFlag = 0;
    while (((pFciic->MSR & FCIIC_MSR_BBF_MASK) == FCIIC_MSR_BBF_MASK) && (u32Timeout > 0))
    {
        u32Timeout = u32Timeout - 1;
    }
    if (u32Timeout != 0)
    {
        /* Save current men bit and disable iic function */
        u32EnableFlag = (pFciic->MCR & FCIIC_MCR_MEN_MASK);
        if (u32EnableFlag != 0)
        {
            pFciic->MCR &= ~FCIIC_MCR_MEN_MASK;
        }
        /* Clear the TX and RX FIFOs */
        pFciic->MCR |= (FCIIC_MCR_RRF_MASK | FCIIC_MCR_RTF_MASK);
        /* Re-enable FCIIC if it was enabled previously */
        if (u32EnableFlag != 0)
        {
            pFciic->MCR |= FCIIC_MCR_MEN_MASK;
        }
    }
}

/**
 * @brief        get FCIIC MSR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32        MSR register value.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetMSR(const FCIIC_Type *const pFciic)
{
    return pFciic->MSR;
}

/**
 * @brief        Clear FCIIC MSR register bit.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    uint32          The clear bit mask.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Master_HwA_ClearStatus(FCIIC_Type *const pFciic, uint32 u32StatusMask)
{
    pFciic->MSR = u32StatusMask; /* w1c */
}

/**
 * @brief        get FCIIC MSR register bit status.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    eStatus         The bit mask.
 *
 * @return       uint8           MSR register bit value.
 */
LOCAL_INLINE uint32 FCIIC_Master_HwA_GetStatus(const FCIIC_Type *const pFciic, uint32 eStatus)
{
    return ((pFciic->MSR & eStatus));
}

/**
 * @brief        get FCIIC MIER register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32        MIER register value.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetMIER(const FCIIC_Type *const pFciic)
{
    return (pFciic->MIER & FCIIC_MIER_MASK);
}

/**
 * @brief        Enable FCIIC MIER register bit.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Mask         The enable bit mask.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Master_HwA_EnableInterrupt(FCIIC_Type *const pFciic, uint32 u32Mask)
{
    pFciic->MIER |= u32Mask;
}

/**
 * @brief        Disable FCIIC MIER register bit.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Mask         The disable bit mask.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Master_HwA_DisableInterrupt(FCIIC_Type *const pFciic, uint32 u32Mask)
{
    pFciic->MIER &= ~u32Mask;
}

/**
 * @brief        Set FCIIC MDER register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The set value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMDER(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MDER = u32Value;
}

/**
 * @brief        Get FCIIC DMA status.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Mask         The get mask.
 *
 * @return       uint32          The DMA status.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetDmaStatus(const FCIIC_Type *const pFciic, uint32 u32Mask)
{
    return (pFciic->MDER & u32Mask);
}

/**
 * @brief        Set FCIIC MCFGR0 register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMCFGR0(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MCFGR0 = u32Value;
}

/**
 * @brief        Set FCIIC MCFGR1 register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMCFGR1(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MCFGR1 = u32Value;
}

/**
 * @brief        Get FCIIC MCFGR1 register value.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32          The MCFGR1 register value.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetMCFGR1(const FCIIC_Type *const pFciic)
{
    return pFciic->MCFGR1;
}

/**
 * @brief        Set FCIIC MCFGR2 register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMCFGR2(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MCFGR2 = u32Value;
}

/**
 * @brief        Set FCIIC MCFGR3 register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMCFGR3(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MCFGR3 = u32Value;
}

/**
 * @brief        Set FCIIC MCCR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMCCR(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MCCR = u32Value;
}

/**
 * @brief        Set FCIIC MFCR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetMFCR(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->MFCR = u32Value;
}

/**
 * @brief        Set FCIIC MFCR register rxwater.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u8Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetRxWatermark(FCIIC_Type *const pFciic, uint8 u8Value)
{
    pFciic->MFCR = ((pFciic->MFCR & ~FCIIC_MFCR_RXWATER_MASK) | FCIIC_MFCR_RXWATER(u8Value));
}

/**
 * @brief        Set FCIIC MFCR register txwater.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u8Value        The written value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetTxWatermark(FCIIC_Type *const pFciic, uint8 u8Value)
{
    pFciic->MFCR = ((pFciic->MFCR & ~FCIIC_MFCR_TXWATER_MASK) | FCIIC_MFCR_TXWATER(u8Value));
}

/**
 * @brief        Get FCIIC master transmit fifo count.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32          The fifo contain data count.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetTxCount(const FCIIC_Type *const pFciic)
{
    return (pFciic->MFSR & FCIIC_MFSR_TXCOUNT_MASK) >> FCIIC_MFSR_TXCOUNT_SHIFT;
}

/**
 * @brief        Get FCIIC master receive fifo count.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32          The fifo contain data count.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetRxCount(const FCIIC_Type *const pFciic)
{
    return (pFciic->MFSR & FCIIC_MFSR_RXCOUNT_MASK) >> FCIIC_MFSR_RXCOUNT_SHIFT;
}

/**
 * @brief        Set FCIIC MTDR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    tCmdType        The command type.
 * @param[in]    u8Data          The data value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Master_HwA_Transmit(FCIIC_Type *const pFciic,
                                            FCIIC_TX_CMDType  tCmdType,
                                            uint8             u8Data)
{
    pFciic->MTDR = FCIIC_MTDR_CMD(tCmdType) | FCIIC_MTDR_DATA(u8Data);
}

/**
 * @brief        Get FCIIC MRDR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint8           The data received.
 */
LOCAL_INLINE uint8 FCIIC_Master_HwA_Receive(const FCIIC_Type *const pFciic)
{
    return (uint8)(pFciic->MRDR & 0xFFU);
}

/**
 * @brief        Set FCIIC SCR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetSCR(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->SCR = u32Value;
}

/**
 * @brief        get FCIIC SSR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32        SSR register value.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetSSR(const FCIIC_Type *const pFciic)
{
    return pFciic->SSR;
}

/**
 * @brief        Clear FCIIC SSR register bit.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    eStatus         The clear bit offset.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Slave_HwA_ClearStatus(FCIIC_Type *const pFciic, uint32 u32StatusMask)
{
    pFciic->SSR = u32StatusMask; /* w1c */
}

/**
 * @brief        get FCIIC SIER register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32        SIER register value.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetSIER(const FCIIC_Type *const pFciic)
{
    return (pFciic->SIER & FCIIC_SIER_MASK);
}

/**
 * @brief        Enable FCIIC SIER register bit.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Mask         The enable bit mask.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Slave_HwA_EnableInterrupt(FCIIC_Type *const pFciic, uint32 u32Mask)
{
    pFciic->SIER |= u32Mask;
}

/**
 * @brief        Disable FCIIC SIER register bit.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Mask         The disable bit mask.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Slave_HwA_DisableInterrupt(FCIIC_Type *const pFciic, uint32 u32Mask)
{
    pFciic->SIER &= ~u32Mask;
}

/**
 * @brief        Set FCIIC SDER register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetSDER(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->SDER = u32Value;
}

/**
 * @brief        Set FCIIC SDER register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetSDER(const FCIIC_Type *const pFciic)
{
    return pFciic->SDER;
}

/**
 * @brief        Set FCIIC SCFGR1 register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetSCFGR1(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->SCFGR1 = u32Value;
}

/**
 * @brief        Set FCIIC SCFGR2 register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetSCFGR2(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->SCFGR2 = u32Value;
}

/**
 * @brief        Set FCIIC SAMR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_HwA_SetSAMR(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->SAMR = u32Value;
}

/**
 * @brief        Get FCIIC slave received address.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint32          The received address.
 */
LOCAL_INLINE uint32 FCIIC_HwA_GetSASR(const FCIIC_Type *const pFciic)
{
    return (pFciic->SASR & FCIIC_SASR_RADDR_MASK);
}

/**
 * @brief        Set FCIIC STAR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u32Value        The register value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Slave_HwA_NACK(FCIIC_Type *const pFciic, uint32 u32Value)
{
    pFciic->STAR = u32Value;
}

/**
 * @brief        Set FCIIC STAR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 * @param[in]    u8Data          The data value.
 *
 * @return       void.
 */
LOCAL_INLINE void FCIIC_Slave_HwA_Transmit(FCIIC_Type *const pFciic, uint8 u8Data)
{
    pFciic->STDR = FCIIC_STDR_DATA(u8Data);
}

/**
 * @brief        Get FCIIC SRDR register.
 *
 * @param[in]    pFciic          The FCIIC instance value.
 *
 * @return       uint8           The data received.
 */
LOCAL_INLINE uint8 FCIIC_Slave_HwA_Receive(const FCIIC_Type *const pFciic)
{
    return (uint8)(pFciic->SRDR & 0xFFU);
}

#ifdef __cplusplus
}
#endif

#endif /* CDD_I2C_REGOPS_H */

/** @}*/
