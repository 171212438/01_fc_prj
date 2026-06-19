/**
*   @file    CDD_Sdadc_Hw.h
*   @version 1.5.1
*
*   @brief   AUTOSAR SDADC - hardware specific type definition
*   @details This file contains the SDADC AUTOSAR hardware specific type definition
*
*   @addtogroup SDADC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Sdadc
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
*   0.8.0       20/8/2024     QXW0084       N/A          SDADC Initial Version
==================================================================================================*/
#ifndef SDADC_HW_H
#define SDADC_HW_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "CDD_Sdadc_Regs.h"

typedef struct
{
    __IO uint32 CCR;    /**< Channel Control Register, offset: 0x0 */
    __IO uint32 CDR;    /**< Channel Data Rate Register, offset: 0x4 */
    __IO uint32 CFR;    /**< Channel Configuration Register, offset: 0x8 */
    __IO uint32 CPR;    /**< Channel Protection Register, offset: 0xc */
    __IO uint32 CBR;    /**< Channel Bias Register, offset: 0x10 */
    __IO uint32 CLLMT;  /**< Channel Low Limit Register, offset: 0x14 */
    __IO uint32 CHLMT;  /**< Channel High Limit Register, offset: 0x18 */
    __I uint32 CRDATA;  /**< Channel Result Data Register, offset: 0x1c */
    __I uint32 CMPDATA; /**< Channel Multi Purpose Data Register, offset: 0x20 */
} SDADC_ChannelRegType, *pSDADC_ChannelRegType;

#define SDADC_CHANNELCFGREG(base) ((pSDADC_ChannelRegType)((uint32)(&((SDADC_Type *)0)->CCR0) + (uint32)(base)))

/**
 * @brief Set the value of CTRL.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCTRL(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = u32Value & SDADC_CTRL_MASK;
}

/**
 * @brief Get the value of PRESCALE.
 * PRE_DIV Divider Value
 * 00b - No prescale.
 * 01b - Divided by 2.
 * 10b - Divided by 4.
 * 11b - Divided by 8.
 * @param pSdadc the base address of the SDADC instance.

 * @return uint32 the value of PRESCALE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetPRESCALE(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->CTRL & SDADC_CTRL_PRESCALE_MASK) >> SDADC_CTRL_PRESCALE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of MCLK_DIV.
 * DIV Divider Value
 * The (MCLK_DIV+1) sets the clock divider ratio for DIV block.
 * The minimum value MCLK_DIV is 1.
 * @param pSdadc the base address of the SDADC instance.

 * @return uint32 the value of MCLK_DIV.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetMCLK_DIV(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->CTRL & SDADC_CTRL_MCLK_DIV_MASK) >> SDADC_CTRL_MCLK_DIV_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Set RESET.
 * Software Reset
 * Used to reset all function blocks (filters, short circuit detect, etc) and all flags or status.
 * Note, to reset all function domain, RESET must keep high at least 3 div_clk1 cycles.
 * 0b - No reset.
 * 1b - All function blocks are reset and disabled.
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value RESET value.
 */
LOCAL_INLINE void SDADC_HWA_SetRESET(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = (pSdadc->CTRL & ~SDADC_CTRL_RESET_MASK) | SDADC_CTRL_RESET(u32Value);
}

/**
 * @brief Set MEN.
 * Main Enable
 * Setting this bit enables all Function block simultaneously if CHEN and corresponding enable bit are asserted.
 * 0b - All function blocks are disabled.
 * 1b - All function blocks are enabled simultaneously.
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value MEN value.
 */
LOCAL_INLINE void SDADC_HWA_SetMEN(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = (pSdadc->CTRL & ~SDADC_CTRL_MEN_MASK) | SDADC_CTRL_MEN(u32Value);
}

/**
 * @brief Set the value of NIER.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetNIER(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->NIER = u32Value & SDADC_NIER_MASK;
}

/**
 * @brief Set the value of ABNIER0.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetABNIER0(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->ABNIER0 = u32Value & SDADC_ABNIER0_MASK;
}

/**
 * @brief Set the value of ABNIER1.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetABNIER1(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->ABNIER1 = u32Value & SDADC_ABNIER1_MASK;
}

/**
 * @brief Set the value of NISR.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetNISR(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->NISR = u32Value & SDADC_NISR_MASK;
}

/**
 * @brief Set the value of ABNISR0.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetABNISR0(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->ABNISR0 = u32Value & SDADC_ABNISR0_MASK;
}

/**
 * @brief Set the value of ABNISR1.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetABNISR1(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->ABNISR1 = u32Value & SDADC_ABNISR1_MASK;
}

/**
 * @brief Set the value of CCRn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCCRn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR = u32Value & SDADC_CCR_MASK;
}

/**
 * @brief Set the value of CH_EN.
 * Channel Enable
 * 0b - The channel is disabled.
 * 0b - The channel is enabled.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @param u8Enable SDADC Channel Channel Enable.
 * @return uint32 the value of CH_EN.
 */
LOCAL_INLINE void SDADC_HWA_SetCH_EN(const SDADC_Type *const pSdadc, uint8 u8Channel, uint8 u8Enable)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR & ~SDADC_CCR_CH_EN_MASK) | SDADC_CCR_CH_EN(u8Enable);
}

/**
 * @brief Set the value of CDRn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCDRn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CDR = u32Value & SDADC_CDR_MASK;
}

/**
 * @brief Set the value of CFRn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCFRn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CFR = u32Value & SDADC_CFR_MASK;
}

/**
 * @brief Set the value of CPRn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCPRn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CPR = u32Value & SDADC_CPR_MASK;
}

/**
 * @brief Set the value of CBRn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCBRn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CBR = u32Value & SDADC_CBR_MASK;
}

/**
 * @brief Set the value of BIAS.
 * Bias Value
 * Bias offset for dedicated channel main filter; used for sign adjustment and compensation. It's a signed data. The main filter data after shift, will subtract this bias value.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @param u32Value Bias value.
 * @return uint32 the value of BIAS.
 */
LOCAL_INLINE void SDADC_HWA_SetBIAS(const SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CBR = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CBR & ~SDADC_CBR_BIAS_MASK) | SDADC_CBR_BIAS(u32Value);
}

/**
 * @brief Set the value of CLLMTn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCLLMTn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CLLMT = u32Value & SDADC_CLLMT_MASK;
}

/**
 * @brief Set the value of CHLMTn.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCHLMTn(SDADC_Type *const pSdadc, uint8 u8Channel, uint32 u32Value)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CHLMT = u32Value & SDADC_CHLMT_MASK;
}

/**
 * @brief Set the value of PWM_GEN.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetPWM_GEN(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->PWM_GEN = u32Value & SDADC_PWM_GEN_MASK;
}

/**
 * @brief Get the value of PATTERN.
 * PWM Generator Pattern
 * Config this before set MEN. Clear the bits during PWM generator run will terminate the PWM generator outputs after completion of the current period(indicated by bit ON=0)
 * 00b - Stopped
 * 01b - Square wave
 * 10b - Triangle
 * 11b - Sine wave
 * @param pSdadc the base address of the SDADC instance.

 * @return uint32 the value of PATTERN.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetPATTERN(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->PWM_GEN & SDADC_PWM_GEN_PATTERN_MASK) >> SDADC_PWM_GEN_PATTERN_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Set PATTERN.
 * PWM Generator Pattern
 * Config this before set MEN. Clear the bits during PWM generator run will terminate the PWM generator outputs after completion of the current period(indicated by bit ON=0)
 * 00b - Stopped
 * 01b - Square wave
 * 10b - Triangle
 * 11b - Sine wave
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value PATTERN value.
 */
LOCAL_INLINE void SDADC_HWA_SetPATTERN(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->PWM_GEN = (pSdadc->PWM_GEN & ~SDADC_PWM_GEN_PATTERN_MASK) | SDADC_PWM_GEN_PATTERN(u32Value);
}

/**
 * @brief Set the value of EXTIS.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetEXTIS(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->EXTIS = u32Value & SDADC_EXTIS_MASK;
}

/**
 * @brief Set the value of EXTIE.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetEXTIE(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->EXTIE = u32Value & SDADC_EXTIE_MASK;
}


/**
 * @brief Get the value of EXTCTRL.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of EXTCTRL.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetEXTCTRL(SDADC_Type *const pSdadc)
{
    return pSdadc->EXTCTRL;
}

/**
 * @brief Set the value of EXTCTRL.
 * @param pSdadc the base address of the SDADC instance.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetEXTCTRL(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->EXTCTRL = u32Value & SDADC_EXTCTRL_MASK;
}

/**
 * @brief Set the value of BACSR.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the BACSR register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetBACSR(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->BACSR[0] = u32Value & SDADC_BACSR_MASK;
}

/**
 * @brief Get the value of BIAS_ON.
 * Bias On Flag
 * 0b - Bias analog is not ready for using.
 * 1b - Bias analog is ready for using.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint8 the value of BIAS_ON.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetBIAS_ON(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->BACSR[0] & SDADC_BACSR_BIAS_ON_MASK) >> SDADC_BACSR_BIAS_ON_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of BIAS_EN.
 * Bias Analog Enable
 * 0b - Bias analog is disabled.
 * 1b - Bias analog is enabled.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of BIAS_EN.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetBIAS_EN(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->BACSR[0] & SDADC_BACSR_BIAS_EN_MASK) >> SDADC_BACSR_BIAS_EN_SHIFT;    return u32TmpVal;
}

/**
 * @brief Set the value of CRTCSR.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the CRTCSR register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCRTCSR(SDADC_Type *const pSdadc, uint8 index, uint32 u32Value)
{
    pSdadc->CRTCSR[index] = u32Value & SDADC_CRTCSR_MASK;
}

/**
 * @brief Set the value of CSDR.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the CSDR register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCSDR(SDADC_Type *const pSdadc, uint8 index, uint32 u32Value)
{
    pSdadc->CSDR[index] = u32Value & SDADC_CSDR_MASK;
}

/**
 * @brief Set the value of CICFR.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the CICFR register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCICFR(SDADC_Type *const pSdadc, uint8 index, uint32 u32Value)
{
    pSdadc->CICFR[index] = u32Value & SDADC_CICFR_MASK;
}

/**
 * @brief Set the value of CMACSR.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the CMACSR register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCMACSR(SDADC_Type *const pSdadc, uint8 index, uint32 u32Value)
{
    pSdadc->CMACSR[index] = u32Value & SDADC_CMACSR_MASK;
}

/**
 * @brief Set the value of CGNR.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the CGNR register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCGNR(SDADC_Type *const pSdadc, uint8 index, uint32 u32Value)
{
    pSdadc->CGNR[index] = u32Value & SDADC_CGNR_MASK;
}

/**
 * @brief Set the value of CTSCNT.
 * @param pSdadc the base address of the SDADC instance.
 * @param index the index of the CTSCNT register.
 * @param u32Value Set Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCTSCNT(SDADC_Type *const pSdadc, uint8 index, uint32 u32Value)
{
    pSdadc->CTSCNT[index] = u32Value & SDADC_CTSCNT_MASK;
}

/**
 * @brief Get the value of CHRDY.
 * Filter Channel Ready Flag
 * bit 10-8 are for filter channel 2-0.
 * @param pSdadc the base address of the SDADC instance.

 * @return uint32 the value of CHRDY.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetCHRDY(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->MSR & SDADC_MSR_CHRDY_MASK) >> SDADC_MSR_CHRDY_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of CHON.
 * Filter Channel ON Flag
 * bit 10-8 are for filter channel 2-0.
 * @param pSdadc the base address of the SDADC instance.

 * @return uint32 the value of CHON.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetCHON(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->MSR & SDADC_MSR_CHON_MASK) >> SDADC_MSR_CHON_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Set STRIG2.
 * Software Trigger for Filter Channel 2
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value STRIG2 value.
 */
LOCAL_INLINE void SDADC_HWA_SetSTRIG2(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = (pSdadc->CTRL & ~SDADC_CTRL_STRIG2_MASK) | SDADC_CTRL_STRIG2(u32Value);
}

/**
 * @brief Set STRIG1.
 * Software Trigger for Filter Channel 1
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value STRIG1 value.
 */
LOCAL_INLINE void SDADC_HWA_SetSTRIG1(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = (pSdadc->CTRL & ~SDADC_CTRL_STRIG1_MASK) | SDADC_CTRL_STRIG1(u32Value);
}

/**
 * @brief Set STRIG0.
 * Software Trigger for Filter Channel 0
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value STRIG0 value.
 */
LOCAL_INLINE void SDADC_HWA_SetSTRIG0(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = (pSdadc->CTRL & ~SDADC_CTRL_STRIG0_MASK) | SDADC_CTRL_STRIG0(u32Value);
}

/**
 * @brief Set STRIG.
 * Software Trigger for Filter Channel 0
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value STRIG value.
 */
LOCAL_INLINE void SDADC_HWA_SetSTRIG(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->CTRL = (pSdadc->CTRL & ~SDADC_CTRL_STRIG_MASK) | SDADC_CTRL_STRIG(u32Value);
}

/**
 * @brief Set INTG_STRIG.
 * Integration Software Trigger for channels
 * Setting this bit will trigger to start of the integration when the integration is enabled.
 * Clearing this bit will stop integration. So it works like a level event.
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value INTG_STRIG value.
 */
LOCAL_INLINE void SDADC_HWA_SetINTG_STRIG(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->EXTCTRL = (pSdadc->EXTCTRL & ~SDADC_EXTCTRL_INTG_STRIG_MASK) | SDADC_EXTCTRL_INTG_STRIG(u32Value);
}

/**
 * @brief Get the value of TSRDM.
 * Timestamp Information Read Mode
 * 00b - Default mode, timestamp information can only be got by reading CTSINFOn register captured by trigger event. FIFO is used for conversion results only and can be pop from FIFO by reading CRDATAn.
 *
 * 01b - Direct mode. Timestamp information is saved in CRDATAn[15:0]. Conversion result is not saved in FIFO(FIFO pop and push are gated), it is cut, round to 16-bit and saved in CRDATAn[31:16] once conversion completes. In this mode, application can read conversion result and timestamp information at same time.
 *
 * 10b - FIFO gating mode. The FIFO is gated before the timestamp trigger event(none active trigger level), a timestamp trigger event(rising edge or falling edge) will capture the current timestamp and save it in TSTAMP[15:0] of CTSINFOn register and CRDATAn[15:0] is bypass to TSTAMP[15:0]. This trigger will also capture last conversion result and save it in FIFO, and then following conversion results are push to FIFO one by one until trigger level is not active again, the 24 bits result out from FIFO is cut/ round to 16 bits and sent to CRDATAn[31:16]. In this mode, application read CRDATAn will get both  conversion result and captured timestamp information at same time after the trigger.
 *
 * 11b - Reserved.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of TSRDM.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetTSRDM(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (pSdadc->CTSCNT[u8Channel] & SDADC_CTSCNT_TSRDM_MASK) >> SDADC_CTSCNT_TSRDM_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of TSTRGM.
 * Timestamp Counter Trigger Mode
 * 00/11b - Trigger is ignored.
 * 01b - Rising edge effective. Trigger level low will gating conversion results push to FIFO if TSRDM is 2'b10. Trigger level high will allow conversion results push to FIFO if TSRDM is 2'b10.
 * 10b - Falling edge effective. Trigger level High will gating conversion results push to FIFO if TSRDM is 2'b10. Trigger level low will allow conversion results push to FIFO if TSRDM is 2'b10.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of TSTRGM.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetTSTRGM(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (pSdadc->CTSCNT[u8Channel] & SDADC_CTSCNT_TSTRGM_MASK) >> SDADC_CTSCNT_TSTRGM_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of RDFMT.
 * Result Data Format
 * 0b - Left justified, signed, for the case where input bitstream is signed
 * 1b - Left justified, unsigned, for the case where input bitstream is unsigned
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of RDFMT.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetRDFMT(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CFR & SDADC_CFR_RDFMT_MASK) >> SDADC_CFR_RDFMT_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of RDATA.
 * Result Data
 * Read this register to get the conversion results. Bit[31] is sign bit if RDFMT is signed and only support 32bit read.
 * The data format may changed by TSRDM.
 * When TSRDM=2'b00, read CRDATA will pop data from FIFO. RDATA[31:8] is a 24-bit conversion results and RDATA[7:0] is 8'h00. At this case, CRDATA can only be read when FIFO is enabled and not empty.
 * When TSRDM=2'b01, read CRDATA will feedback latest conversion result and timestamp info, RDATA[31:16] is a cut and round 16-bit latest conversion result(update on last COC) and RDATA[15:0] is latest timestamp counter value. FIFO is not used.At this case, CRDATA can only be read at any time.
 * When TSRDM=2'b10, read CRDATA will pop data from FIFO and a timestamp info captured by trigger will also be included. RDATA[31:16] is a cut and round 16-bit result from FIFO and RDATA[15:0] is captured timestamp counter value. FIFO is used and gated by timestamp trigger. At this case, CRDATA can only be read when FIFO is enabled and not empty.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of RDATA.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetRDATA(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CRDATA & SDADC_CRDATA_RDATA_MASK) >> SDADC_CRDATA_RDATA_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of CTRL.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of CTRL.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetCTRL(const SDADC_Type *const pSdadc)
{
    return pSdadc->CTRL & SDADC_CTRL_MASK;
}

/**
 * @brief Get the value of NIER.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of NIER.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetNIER(const SDADC_Type *const pSdadc)
{
    return pSdadc->NIER & SDADC_NIER_MASK;
}

/**
 * @brief Get the value of ABNIER0.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of ABNIER0.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetABNIER0(const SDADC_Type *const pSdadc)
{
    return pSdadc->ABNIER0 & SDADC_ABNIER0_MASK;
}

/**
 * @brief Get the value of ABNIER1.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of ABNIER1.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetABNIER1(const SDADC_Type *const pSdadc)
{
    return pSdadc->ABNIER1 & SDADC_ABNIER1_MASK;
}

/**
 * @brief Get the value of EXTIE.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of EXTIE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetEXTIE(const SDADC_Type *const pSdadc)
{
    return pSdadc->EXTIE & SDADC_EXTIE_MASK;
}

/**
 * @brief Get the value of NISR.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of NISR.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetNISR(const SDADC_Type *const pSdadc)
{
    return pSdadc->NISR & SDADC_NISR_MASK;
}

/**
 * @brief Get the value of ABNISR0.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of ABNISR0.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetABNISR0(const SDADC_Type *const pSdadc)
{
    return pSdadc->ABNISR0 & SDADC_ABNISR0_MASK;
}

/**
 * @brief Get the value of ABNISR1.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of ABNISR1.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetABNISR1(const SDADC_Type *const pSdadc)
{
    return pSdadc->ABNISR1 & SDADC_ABNISR1_MASK;
}

/**
 * @brief Get the value of EXTIS.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of EXTIS.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetEXTIS(const SDADC_Type *const pSdadc)
{
    return pSdadc->EXTIS & SDADC_EXTIS_MASK;
}


/**
 * @brief Set FRDYIE (Filter Ready Interrupt Enable) in the NIER register.
 * @param pSdadc the base address of the SDADC instance.
 * @param uint32 u32Value FRDYIE value.
 */
LOCAL_INLINE void SDADC_HWA_SetFRDYIE(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->NIER = (pSdadc->NIER & ~SDADC_NIER_FRDYIE_MASK) | SDADC_NIER_FRDYIE(u32Value);
}

/**
 * @brief Set COCIE (Conversion Complete Interrupt Enable) in the NIER register.
 * @param pSdadc the base address of the SDADC instance.
 * @param uint32 u32Value COCIE value.
 */
LOCAL_INLINE void SDADC_HWA_SetCOCIE(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->NIER = (pSdadc->NIER & ~SDADC_NIER_COCIE_MASK) | SDADC_NIER_COCIE(u32Value);
}

/**
 * @brief Set FOVFIE (Filter Overflow Interrupt Enable) in the ABNIER1 register.
 * @param pSdadc the base address of the SDADC instance.
 * @param uint32 u32Value FOVFIE value.
 */
LOCAL_INLINE void SDADC_HWA_SetFOVFIE(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->ABNIER1 = (pSdadc->ABNIER1 & ~SDADC_ABNIER1_FOVFIE_MASK) | SDADC_ABNIER1_FOVFIE(u32Value);
}

/**
 * @brief Set FUNFIE (Filter Underflow Interrupt Enable) in the ABNIER1 register.
 * @param pSdadc the base address of the SDADC instance.
 * @param uint32 u32Value FUNFIE value.
 */
LOCAL_INLINE void SDADC_HWA_SetFUNFIE(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->ABNIER1 = (pSdadc->ABNIER1 & ~SDADC_ABNIER1_FUNFIE_MASK) | SDADC_ABNIER1_FUNFIE(u32Value);
}

/**
 * @brief Set TSVLD_IE.
 * Timestamp Valid Interrupt Enable for channels
 * @param pSdadc the base address of the SDADC instance.
 * @param uint32 u32Value TSVLD_IE2 value.
 */
LOCAL_INLINE void SDADC_HWA_SetTSVLD_IE(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->EXTIE = (pSdadc->EXTIE & ~SDADC_EXTIE_TSVLD_IE_MASK) | SDADC_EXTIE_TSVLD_IE(u32Value);
}

/**
 * @brief Clear TSVLD.
 * Timestamp Valid flag clear for channels
 * @param pSdadc the base address of the SDADC instance.
 * @param uint32 u32Value TSVLD clear value.
 */
LOCAL_INLINE void SDADC_HWA_ClearTSVLD(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->EXTIS = SDADC_EXTIS_TSVLD(u32Value);
}

/**
 * @brief Get TSVLD.
 * Get Timestamp Valid flag clear for channels
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of TSVLD.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetTSVLD(SDADC_Type *const pSdadc)
{
    return (pSdadc->EXTIS & SDADC_EXTIS_TSVLD_MASK) >> SDADC_EXTIS_TSVLD_SHIFT;
}

/**
 * @brief Get the value of FIFO_EN.
 * FIFO Enable
 * 0b - FIFO is disabled for the channel.
 * 1b - FIFO is enabled for the channel.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of FIFO_EN.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetFIFO_EN(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR & SDADC_CCR_FIFO_EN_MASK) >> SDADC_CCR_FIFO_EN_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of DMA_EN.
 * DMA Enable
 * 0b - DMA is disabled for the channel.
 * 1b - DMA is enabled for the channel.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of DMA_EN.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetDMA_EN(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR & SDADC_CCR_DMA_EN_MASK) >> SDADC_CCR_DMA_EN_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of FRDYIE (Filter Ready Interrupt Enable) from the NIER register.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of FRDYIE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetFRDYIE(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->NIER & SDADC_NIER_FRDYIE_MASK) >> SDADC_NIER_FRDYIE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of COCIE (Conversion Complete Interrupt Enable) from the NIER register.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of COCIE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetCOCIE(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->NIER & SDADC_NIER_COCIE_MASK) >> SDADC_NIER_COCIE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of FOVFIE (Filter Overflow Interrupt Enable) from the ABNIER1 register.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of FOVFIE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetFOVFIE(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->ABNIER1 & SDADC_ABNIER1_FOVFIE_MASK) >> SDADC_ABNIER1_FOVFIE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of FUNFIE (Filter Underflow Interrupt Enable) from the ABNIER1 register.
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of FUNFIE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetFUNFIE(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->ABNIER1 & SDADC_ABNIER1_FUNFIE_MASK) >> SDADC_ABNIER1_FUNFIE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of TSVLD_IE
 * @param pSdadc the base address of the SDADC instance.
 * @return uint32 the value of TSVLD_IE.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetTSVLD_IE(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->EXTIE & SDADC_EXTIE_TSVLD_IE_MASK) >> SDADC_EXTIE_TSVLD_IE_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of FIFO_EMPTY.
 * FIFO Empty Flag
 * bit 18-16 are for filter channel 2-0.
 * @param pSdadc the base address of the SDADC instance.

 * @return uint32 the value of FIFO_EMPTY.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetFIFO_EMPTY(const SDADC_Type *const pSdadc)
{
    uint32 u32TmpVal = (pSdadc->MSR & SDADC_MSR_FIFO_EMPTY_MASK) >> SDADC_MSR_FIFO_EMPTY_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of FWMK.
 * FIFO Water Mark
 * Controls the watermark of the FIFO used to set FRDYn. When the number of results in the FIFO is greater than FWMK value, the FRDYn flag will be set. A DMA request or interrupt can also be generated if related DMA_EN and FRDYIE bit-field is set.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of FWMK.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetFWMK(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CFR & SDADC_CFR_FWMK_MASK) >> SDADC_CFR_FWMK_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get the value of TSINFO.
 * The Latest Captured Conversion Result
 * Copied from saved conversion result.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of TSINFO.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetTSINFO(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    return pSdadc->CTSINFO[u8Channel];
}

/**
 * @brief Get the value of TSCNT.
 * Timestamp Counter Value
 * TSCNT is clocked with the modulator clock and is cleared when a new result value has been generated.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of TSCNT.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetTSCNT(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (pSdadc->CTSCNT[u8Channel] & SDADC_CTSCNT_TSCNT_MASK) >> SDADC_CTSCNT_TSCNT_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Set the value of DMA_EN.
 * Channel Enable
 * 0b - The channel dma is disabled.
 * 0b - The channel dma is enabled.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @param u8Enable SDADC Channel Channel Enable.
 * @return uint32 the value of DMA_EN.
 */
LOCAL_INLINE void SDADC_HWA_SetDMA_EN(const SDADC_Type *const pSdadc, uint8 u8Channel, uint8 u8Enable)
{
    SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR = (SDADC_CHANNELCFGREG(pSdadc)[u8Channel].CCR & ~SDADC_CCR_DMA_EN_MASK) | SDADC_CCR_DMA_EN(u8Enable);
}


/**
 * @brief Set TRGSIGN_OEN.
 * Sign Signal Related Trigger Out Enable
 * 0b - disabled.
 * 1b - Related trigger is enabled and will be set once SIGN falling edge is got.
 * @param pSdadc the base address of the SDADC instance.

 * @param uint32 u32Value TRGSIGN_OEN value.
 */
LOCAL_INLINE void SDADC_HWA_SetTRGSIGN_OEN(SDADC_Type *const pSdadc, uint32 u32Value)
{
    pSdadc->PWM_GEN = (pSdadc->PWM_GEN & ~SDADC_PWM_GEN_TRGSIGN_OEN_MASK) | SDADC_PWM_GEN_TRGSIGN_OEN(u32Value);
}

/**
 * @brief Set the value of CTRGSIGN_OEN.
 * Channel Sign Signal Related Trigger Out Enable
 * 0b - disabled.
 * 1b - Related trigger is enabled and will be set once TSIGN falling edge is got.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @param u8Enable Value.
 */
LOCAL_INLINE void SDADC_HWA_SetCTRGSIGN_OEN(SDADC_Type *const pSdadc, uint8 u8Channel, uint8 u8Enable)
{
    pSdadc->CRTCSR[u8Channel] = (pSdadc->CRTCSR[u8Channel] & ~SDADC_CRTCSR_CTRGSIGN_OEN_MASK) | SDADC_CRTCSR_CTRGSIGN_OEN(u8Enable);
}

/**
 * @brief Set the TSTMP_LOCK register value
 *
 * @param  u32Val value to be set
 */
LOCAL_INLINE void SCM_HWA_Set_TSTMP_LOCK(uint32 u32Val)
{
    SCM_TSTMP_LOCK = u32Val;
}

/**
 * @brief return the TSTMP_LOCK register value
 *
 */
LOCAL_INLINE uint32 SCM_HWA_Get_TSTMP_LOCK(void)
{
    return SCM_TSTMP_LOCK;
}

/**
 * @brief Flush the FIFO for a specific channel.
 * This function reads all data from the FIFO until it is empty.
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel the channel number to flush the FIFO for.
 */
LOCAL_INLINE void SDADC_HWA_FlushFIFO(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    if (SDADC_HWA_GetFIFO_EN(pSdadc, u8Channel) != 0u)
    {
        while ((SDADC_HWA_GetFIFO_EMPTY(pSdadc) & (1u << u8Channel)) == 0u)
        {
            (void)SDADC_HWA_GetRDATA(pSdadc, u8Channel);
        }
    }
}

/**
 * @brief Get the value of SD_CAP.
 * Sign Delay Capture Value
 * Indicates the results value counted between the negedge of SSIGN and the first received positive value
 * @param pSdadc the base address of the SDADC instance.
 * @param u8Channel SDADC Channel.
 * @return uint32 the value of SD_CAP.
 */
LOCAL_INLINE uint32 SDADC_HWA_GetSD_CAP(const SDADC_Type *const pSdadc, uint8 u8Channel)
{
    uint32 u32TmpVal = (pSdadc->CSDR[u8Channel] & SDADC_CSDR_SD_CAP_MASK) >> SDADC_CSDR_SD_CAP_SHIFT;
    return u32TmpVal;
}

#ifdef __cplusplus
}
#endif

#endif /* ADC_HW_H */

/** @} */
