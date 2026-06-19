/**
 *   @file    SSI_HWA.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SSI - SSI driver hardware layer header file.
 *   @details SSI driver hardware layer header file.
 *
 *   @addtogroup SSI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SSI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2025-2027 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       2025/03/18    Flagchip054   N/A           SSI Initial Version
==================================================================================================*/

#ifndef HWA_SSI_H
#define HWA_SSI_H
#include "Ssi_Reg.h"

#define SSI_START_SEC_CODE
#include "Ssi_MemMap.h"

/**
 * @brief Enable Function Clock
 *
 * @param SSI instance value
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_Func_Enable(SSI_Type *const pSSI)
{
    pSSI->GCR |= SSI_GCR_FUNC_EN_MASK;
}

/**
 * @brief Disable Function Clock
 *
 * @param SSI Pointer to the SSI_Type structure representing the SSI peripheral instance
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_Func_Disable(SSI_Type *const pSSI)
{
    pSSI->GCR &= ~SSI_GCR_FUNC_EN_MASK;
}

/**
 * @brief Set SSI Global pre-scaler value
 *
 * @param pSSI the base address of the SSI instance
 * @param u8PreScaler the value of the PreSclaer.
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetGlobalPreScaler(SSI_Type *const pSSI, uint8 u8PreScaler)
{
    pSSI->GCR = (pSSI->GCR & ~SSI_GCR_FUNC_DIV_MASK) | SSI_GCR_FUNC_DIV(u8PreScaler);
}

/**
 * @brief Set the Lower Part of the Global Counter Window Register (GCWLR)
 *
 * This function sets the lower part of the Global Counter Window Register (GCWLR) for the specified
 * SSI peripheral.
 *
 * @param pSSI Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u32Value The value to set in the lower part of the GCWLR register
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetGlobalCounterWindowsL(SSI_Type *const pSSI,
                                                                    uint32          u32Value)
{
    pSSI->GCWLR = (u32Value & SSI_GCWLR_WIN_L_MASK);
}

/**
 * @brief Set the High Part of the Global Counter Window Register (GCWHR)
 *
 * This function sets the High part of the Global Counter Window Register (GCWHR) for the specified
 * SSI peripheral.
 *
 * @param pSSI Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u32Value The value to set in the High part of the GCWHR register
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetGlobalCounterWindowsH(SSI_Type *const pSSI,
                                                                    uint32          u32Value)
{
    pSSI->GCWHR = (u32Value & SSI_GCWHR_WIN_H_MASK);
}

/**
 * @brief Set the Global Protocol Configuration Register (GPCR)
 *
 * This function sets the Global Protocol Configuration Register (GPCR) for the specified SSI
 * peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u32Value The value to set in the GPCR register
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetGlobalProCfg(SSI_Type *const pSSI, uint32 u32Value)
{
    pSSI->GPCR = u32Value;
}

/**
 * @brief Set the Sub-instance Filter Width
 *
 * This function sets the filter width configuration in the Sub-instance Filter Register (IFR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8IfrIdx The index of the sub-instance filter register to configure
 * @param u32Value The value to set for the filter width configuration
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetSubinsFilterWidth(SSI_Type *pSsi,
                                                                uint8     u8SubInstance,
                                                                uint32    u32Value)
{
    uint32 u32RegVal                 = pSsi->SUB_INS[u8SubInstance].IFR;
    pSsi->SUB_INS[u8SubInstance].IFR = (u32RegVal & ~SSI_IFR_FLT_WIDTH_MASK) |
                                       SSI_IFR_FLT_WIDTH(u32Value);
}

/**
 * @brief Enable the Sub-instance Filter
 *
 * This function enables the filter in the Sub-instance Filter Register (IFR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8IfrIdx The index of the sub-instance filter register to configure
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SubinsFilter_Enable(SSI_Type *pSsi, uint8 u8SubInstance)
{
    pSsi->SUB_INS[u8SubInstance].IFR |= SSI_IFR_FLT_EN_MASK;
}

/**
 * @brief Enable the Sub-instance
 *
 * This function enables the sub-instance by setting the enable bit in the Sub-instance Control
 * Register (ICR) for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8IcrIdx The index of the sub-instance control register to enable
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_Subins_Enable(SSI_Type *pSsi, uint8 u8SubInstance)
{
    pSsi->SUB_INS[u8SubInstance].ICR |= SSI_ICR_SSI_EN_MASK;
}

/**
 * @brief Disable the Sub-instance
 *
 * This function Disable the sub-instance by setting the enable bit in the Sub-instance Control
 * Register (ICR) for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8IcrIdx The index of the sub-instance control register to enable
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_Subins_Disable(SSI_Type *pSsi, uint8 u8SubInstance)
{
    pSsi->SUB_INS[u8SubInstance].ICR &= ~SSI_ICR_SSI_EN_MASK;
}

/**
 * @brief Get Sensor Protocol Counter Value
 *
 * This function retrieves the counter value from the Sensor Protocol Control Register (SPCR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8SpcrIdx The index of the sensor protocol control register to read
 * @return The counter value from the specified sensor protocol control register
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetSubIntReg(SSI_Type *pSsi,
                                                        uint8     u8SubInstance,
                                                        uint32    u32Value)
{
    pSsi->SUB_INS[u8SubInstance].INTCR = u32Value;
}

/**
 * @brief Get Sensor Protocol Counter Value
 *
 * This function retrieves the counter value from the Sensor Protocol Control Register (SPCR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8SpcrIdx The index of the sensor protocol control register to read
 * @return The counter value from the specified sensor protocol control register
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_SetSubIcrReg(SSI_Type *pSsi,
                                                        uint8     u8SubInstance,
                                                        uint32    u32Value)
{
    pSsi->SUB_INS[u8SubInstance].ICR = u32Value;
}

/**
 * @brief Get the Sub-instance Protocol Selection
 *
 * This function Gets the Protocol selection configuration in the Sub-instance Control Register
 * (ICR) for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8IcrIdx The index of the sub-instance control register to configure
 * @return The value of the Sub-instance Protocol Selection
 */
SSI_TEXT_SECTION LOCAL_INLINE uint8 SSI_HWA_GetSubinsProtSel(SSI_Type *pSsi, uint8 u8SubInstance)
{
    return ((pSsi->SUB_INS[u8SubInstance].ICR & SSI_ICR_PROT_SEL_MASK) >> SSI_ICR_PROT_SEL_SHIFT);
}

/**
 * @brief Get Sensor Protocol Counter Value
 *
 * This function retrieves the counter value from the Sensor Protocol Control Register (SPCR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8SpcrIdx The index of the sensor protocol control register to read
 * @return The counter value from the specified sensor protocol control register
 */
SSI_TEXT_SECTION LOCAL_INLINE uint32 SSI_HWA_GetSensorProtocolCnt(SSI_Type *pSsi, uint8 u8SubInstance)
{
    return (pSsi->SUB_INS[u8SubInstance].SPCR & SSI_SPCR_CNT_MASK);
}

/**
 * @brief Get High Pulse Counter Value
 *
 * This function retrieves the high pulse counter value from the High Pulse Control Register (HPCR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8HpcrIdx The index of the high pulse control register to read
 * @return The high pulse counter value from the specified high pulse control register
 */
SSI_TEXT_SECTION LOCAL_INLINE uint32 SSI_HWA_GetHighPulseCnt(SSI_Type *pSsi, uint8 u8SubInstance)
{
    return (pSsi->SUB_INS[u8SubInstance].HPCR & SSI_HPCR_HPULSE_MASK);
}

/**
 * @brief Get AK Manchester Code Value
 *
 * This function retrieves the AK man Manchester value from the AK Protocol Register (AKPR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8AkprIdx The index of the AK Protocol register to read
 * @return The AK Manchester code value from the specified AK Protocol register
 */
SSI_TEXT_SECTION LOCAL_INLINE uint32 SSI_HWA_GetAkMancodeVal(SSI_Type *pSsi, uint8 u8SubInstance)
{
    return (pSsi->SUB_INS[u8SubInstance].AKPR & SSI_AKPR_MCODE_MASK);
}

/**
 * @brief Get AK Manchester Decode Counter Value
 *
 * This function retrieves the AK Manchester decode counter value from the AK Protocol Register
 * (AKPR) for a specified sub-instance index in the SSI peripheral. The counter value is extracted
 * and right-shifted by the appropriate number of bits to align it correctly.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8AkprIdx The index of the AK Protocol register to read
 * @return The AK Manchester decode counter value from the specified AK Protocol register
 */
SSI_TEXT_SECTION LOCAL_INLINE uint32 SSI_HWA_GetAkManDecodeCnt(SSI_Type *pSsi, uint8 u8SubInstance)
{
    return ((pSsi->SUB_INS[u8SubInstance].AKPR & SSI_AKPR_MCODE_CNT_MASK) >> SSI_AKPR_MCODE_CNT_SHIFT);
}

/**
 * @brief Get PWM Decode Value
 *
 * This function retrieves the PWM decode value from the PWM Protocol Register (PWMPR)
 * for a specified sub-instance index in the SSI peripheral.
 *
 * @param pSsi Pointer to the SSI_Type structure representing the SSI peripheral instance
 * @param u8PwmprIdx The index of the PWM Protocol register to read
 * @return The PWM decode value from the specified PWM Protocol register
 */
SSI_TEXT_SECTION LOCAL_INLINE uint32 SSI_HWA_GetPwmDecodeVal(SSI_Type *pSsi, uint8 u8SubInstance)
{
    return (pSsi->SUB_INS[u8SubInstance].PWMPR & SSI_PWMPR_PCODE_MASK);
}

/**
 * @brief Get the ready flag status of SSI sub-instance.
 *
 * This function reads the ISR register of the specified SSI sub-instance and returns
 * the status of all ready-related flag bits. The ready flags include protocol error,
 * pulse width error, interval error, decode error, SPC range error, SPC timeout error,
 * wheel stop flag, and SPC valid flag.
 *
 * @param[in] pSsi Pointer to the SSI peripheral base address.
 * @param[in] u8SubInstance SSI sub-instance index (0-3).
 * @return uint32 Combined status of ready flag bits. Each bit set to 1 indicates the corresponding
 * event has occurred.
 */
SSI_TEXT_SECTION LOCAL_INLINE uint32 SSI_HWA_GetReadyFlag(SSI_Type *pSsi, uint8 u8SubInstance)
{
    uint32 u32Status = SSI_ISR_PROT_ERR(1) | SSI_ISR_PULSE_WIDTH_ERR(1) | SSI_ISR_INTERVAL_ERR(1) |
                       SSI_ISR_DECODE_ERR(1) | SSI_ISR_SPC_RANGE_ERR(1) |
                       SSI_ISR_SPC_TIMEOUT_ERR(1) | SSI_ISR_WHL_STOP(1) | SSI_ISR_SPC_VLD(1);
    return (pSsi->SUB_INS[u8SubInstance].ISR & u32Status);
}

/**
 * @brief Clear the ready flags of SSI sub-instance.
 *
 * This function clears all ready-related flag bits in the ISR register of the specified
 * SSI sub-instance by writing 1 to the corresponding bits (write-1-to-clear mechanism).
 * The flags to be cleared include: protocol error, pulse width error, interval error,
 * decode error, SPC range error, SPC timeout error, wheel stop flag, and SPC valid flag.
 *
 * @param[in] pSsi Pointer to the SSI peripheral base address.
 * @param[in] u8SubInstance SSI sub-instance index (0-3).
 */
SSI_TEXT_SECTION LOCAL_INLINE void SSI_HWA_ClearReadyFlag(SSI_Type *pSsi, uint8 u8SubInstance)
{
    uint32 u32Val = SSI_ISR_PROT_ERR(1) | SSI_ISR_PULSE_WIDTH_ERR(1) | SSI_ISR_INTERVAL_ERR(1) |
                    SSI_ISR_DECODE_ERR(1) | SSI_ISR_SPC_RANGE_ERR(1) | SSI_ISR_SPC_TIMEOUT_ERR(1) |
                    SSI_ISR_WHL_STOP(1) | SSI_ISR_SPC_VLD(1);
    pSsi->SUB_INS[u8SubInstance].ISR |= u32Val;
}

/**
 * @brief Unlock the MB_INTn registers
 *
 * @param u8CoreIndex the index of the core
 * @param u32Mask the unlock bits
 */
SSI_TEXT_SECTION LOCAL_INLINE boolean SSI_HWA_GetIntCmpReadyFlag(SSI_Type *pSsi, uint8 u8SubInstance)
{
    boolean bRet;
    if ((pSsi->SUB_INS[u8SubInstance].ISR & SSI_ISR_CMP_IOK_MASK) == SSI_ISR_CMP_IOK(1))
    {
        bRet = TRUE;
    }
    else
    {
        bRet = FALSE;
    }

    return bRet;
}

#define SSI_STOP_SEC_CODE
#include "Ssi_MemMap.h"

/** @}*/

#endif /* _HWA_SSI_H_ */
