/**
*   @file    Gpt_Ftu_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Ftu -  Gpt_Ftu header file.
*   @details Gpt_Ftu low level driver API.
*
*   @addtogroup Gpt_Ftu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_FTU
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_FTU_REGOPS_H
#define GPT_FTU_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ftu_Reg.h"
#include "Gpt_Ftu_Types.h"
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

/**
 * @brief Clear FTU counter
 *
 * @param pFtu FTU instance
 * @param u32RegValue CNT register value
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearModuleCounter(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CNT = u32RegValue;
}

/**
 * @brief Read FTU module counter value
 *
 * @param pFtu FTU instance
 * @return FTU module counter value
 */
LOCAL_INLINE uint32 GPT_FTU_HWA_ReadModuleCounter(const FTU_Type *pFtu)
{
    return (uint32)pFtu->CNT;
}

/**
 * @brief Read FTU instance channel value
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel
 * @return FTU channel value
 */
LOCAL_INLINE uint32 GPT_FTU_HWA_ReadChannelValue(const FTU_Type *pFtu, uint8 u8Channel)
{
    return (uint32)pFtu->CONTROLS[u8Channel].CnV;
}

/**
 * @brief Selects the external clock as the FTU function clock
 *
 * @param pFtu the base address of the FTU instance
 * @param eTclk FTU external clock  enumeration
 */
LOCAL_INLINE void GPT_FTU_HWA_SetExternalClkSrc(FTU_Type *pFtu, uint32 eTclk)
{
	uint32 u32RegValue = pFtu->SC;
	pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_TCKSEL_MASK)|FTU_SC_TCKSEL(eTclk);
}

/**
 * @brief Configure gtb mode
 * @param pFtu          -FTU instance
 * @param u8GtbMode     -FTU gtb mode
 */
LOCAL_INLINE void GPT_FTU_HWA_ConfigGTBMode(FTU_Type *pFtu, uint8 u8GtbMode)
{
	pFtu->CONF &= ~(uint32)FTU_CONF_GTBEEN_MASK;
    pFtu->CONF |= FTU_CONF_GTBEEN(u8GtbMode);
}

/**
 * @brief Set FTU channel value
 *
 * @param pFtu FTU instance
 * @param u8Channel channel number, range is 0-7
 * @param u32RegValue CnV register value
 */
LOCAL_INLINE void GPT_FTU_HWA_SetChannelValue(FTU_Type *pFtu, uint8 u8Channel, uint32 u32RegValue)
{
    pFtu->CONTROLS[u8Channel].CnV = u32RegValue;
}

/**
 * @brief Read FTU counter compare val
 *
 * @param pFtu FTU instance
 * @return uint32 FTU channel interrupt flag
 */
LOCAL_INLINE uint32 GPT_FTU_HWA_ReadModuleCompareValue(const FTU_Type *pFtu)
{
    return (uint32)pFtu->MOD;
}

/**
 * @brief Set FTU counter compare val
 *
 * @param pFtu FTU instance
 * @param u32RegValue MOD register value
 */
LOCAL_INLINE void GPT_FTU_HWA_SetModuleCompareValue(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->MOD = u32RegValue;
}

/**
 * @brief Clear FTU counter initial value
 *
 * @param pFtu FTU instance
 * @param u32RegValue CNTIN register value
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearModuleCounterInitialValue(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CNTIN = u32RegValue;
}

/**
 * @brief Set FTU module prescale
 *
 * @param pFtu FTU instance
 * @param ePs FTU clock prescaler enumeration
 */
LOCAL_INLINE void GPT_FTU_HWA_SetModulePrescale(FTU_Type *pFtu, Gpt_FtuPrescalerType ePs)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_PS_MASK) | FTU_SC_PS(ePs);
}

/**
 * @brief Read FTU channel interrupt flag
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 * @return FTU channel interrupt flag
 */
LOCAL_INLINE uint32 GPT_FTU_HWA_ReadChannelInterruptFlag(const FTU_Type *pFtu, uint8 u8Channel)
{
    return (pFtu->CONTROLS[u8Channel].CnSC & (uint32)FTU_CSC_CHF_MASK);
}

/**
 * @brief Read FTU channel interrupt flag and interrupt enable state
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number
 * @return uint32 channel interrupt flag and interrupt enable state
 */
LOCAL_INLINE uint32 GPT_FTU_HWA_ReadChannelInterruptFlagAndEnable(const FTU_Type *pFtu, uint8 u8Channel)
{
    return (uint32)(pFtu->CONTROLS[u8Channel].CnSC & (uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK));
}

/**
 * @brief Disable FTU module CPWM mode
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void GPT_FTU_HWA_DisableModuleCpwmMode(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_CPWMS_MASK;
}

/**
 * @brief Enable FTU channel interrupt
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void GPT_FTU_HWA_EnableChannelInterrupt(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_CHIE_MASK;
}

/**
 * @brief Disable FTU module fault mode
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void GPT_FTU_HWA_DisableModuleFaultMode(FTU_Type *pFtu)
{
    pFtu->MODE &= ~(uint32)FTU_MODE_FAULTM_MASK;
}

/**
 * @brief Configure FTU module debug mode
 *
 * @param pFtu FTU instance
 * @param eDbgMode debug mode enumeration
 */
LOCAL_INLINE void GPT_FTU_HWA_ConfigModuleDebugMode(FTU_Type *pFtu, Gpt_FtuDebugModeType eDbgMode)
{
    uint32 u32RegValue = pFtu->CONF;
    pFtu->CONF = (u32RegValue & ~(uint32)FTU_CONF_DBG_MASK) | FTU_CONF_DBG(eDbgMode);
}

/**
 * @brief Set FTU module clock source
 *
 * @param pFtu FTU instance
 * @param eClkSrc FTU module clock source type
 */
LOCAL_INLINE void GPT_FTU_HWA_SetModuleClkSrc(FTU_Type *pFtu, Gpt_FtuModuleClkSrcType eClkSrc)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_CLKS_MASK) | FTU_SC_CLKS(eClkSrc);
}

/**
 * @brief Disable FTU module overflow interrupt
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void GPT_FTU_HWA_DisableOverflowInterrupt(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_TOIE_MASK;
}

/**
 * @brief Clear FTU channel interrupt flag
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearChannelInterruptFlag(FTU_Type *pFtu, uint8 u8Channel)
{
    uint32 u32RegVal = pFtu->STATUS;
    u32RegVal &= ~(uint32)FTU_STATUS_CHNF((uint32)1u << (uint32)u8Channel);
    pFtu->STATUS = u32RegVal & FTU_STATUS_MASK;
}

/**
 * @brief Configure channel to output mode and signal not bind to pad
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void GPT_FTU_HWA_SetOutputMode(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Clear channel output mode
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearOutputMode(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSA_MASK;
}

/**
 * @brief Disable channel interrupt
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void GPT_FTU_HWA_DisableChannelInterrupt(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_CHIE_MASK;
}

/**
 * @brief Clear MODE[FTUEN], this field define different free running counter and synchronization behavior.
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearModuleUpdateRegBySync(FTU_Type *pFtu)
{
    pFtu->MODE &= ~(uint32)FTU_MODE_FTUEN_MASK;
}

/**
 * @brief Clear channel flag
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearChannelFlag(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_CHF_MASK;
}


/**
 * @brief Clear FTU module all fault flag
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void GPT_FTU_HWA_ClearModuleAllFaultFlag(FTU_Type *pFtu)
{
    pFtu->FMS &= ~(uint32)(FTU_FMS_FAULTF_MASK | FTU_FMS_FAULTF1_MASK | FTU_FMS_FAULTF0_MASK);
}

#ifdef __cplusplus
}
#endif


#endif /* #ifndef GPT_FTU_REGOPS_H */
/** @} */
