/**
*   @file    Ocu_Ftu_RegOps.h
*   @version 1.5.1
*   
*   @brief   AUTOSAR Ocu - hardware specific type definition
*   @details This file contains the Ocu Autosar hardware specific type definition
*
*   @addtogroup Ocu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add 
                                                         Tpu support(only available on FC7240)
==================================================================================================*/
/* PRQA S 3469 EOF 
   This usage of a function-like macro looks like it could be replaced by an equivalent function call.
   REASON: Macros have higher execution efficiency
*/
/* PRQA S 2071,5087 EOF 
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3673 EOF #Misra-C:2012: Rule-8.13 A pointer should point to a const-qualified type whenever possible. 
   Reason: This usage is legal */
#ifndef OCU_FTU_REGOPS_H
#define OCU_FTU_REGOPS_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ftu_Reg.h"

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
 * @brief Configure FTU module common configuration
 *
 * @param pFtu FTU instance
 * @param u32RegValue CONF register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ConfigDBGMode(FTU_Type *pFtu)
{
    pFtu->CONF &= ~(uint32)FTU_CONF_DBG_MASK;
}

/**
 * @brief Configure FTU module debug mode
 *
 * @param pFtu FTU instance
 * @param eDbgMode debug mode enumeration
 */
LOCAL_INLINE void OCU_FTU_HWA_ConfigModuleDebugMode(FTU_Type *pFtu, uint8 eDbgMode)
{
    uint32 u32RegValue = pFtu->CONF;
    pFtu->CONF = (u32RegValue & ~(uint32)FTU_CONF_DBG_MASK) | FTU_CONF_DBG(eDbgMode);
}

/**
 * @brief Set FTU module SYNCONF register
 *
 * @param pFtu FTU instance
 * @param u32RegValue SYNCONF register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ConfigModulSYNCONFReg(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->SYNCONF = u32RegValue;
}

/**
 * @brief Read software output control
 *
 * @param pFtu FTU instance
 * @return Software output control value
 */
LOCAL_INLINE uint32 OCU_FTU_HWA_ReadOutputCtrl(FTU_Type *pFtu)
{
    return (uint32)(pFtu->SWOCTRL);
}

/**
 * @brief Configure module software output control
 *
 * @param pFtu FTU instance
 * @param u32RegVal SWOCTRL register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ConfigSoftwareOutputControl(FTU_Type *pFtu, uint32 u32RegVal)
{
    pFtu->SWOCTRL = u32RegVal;
}

/**
 * @brief Clear module software output control
 *
 * @param pFtu FTU instance
 * @param u32RegVal SWOCTRL register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ClearSoftwareOutputControl(FTU_Type *pFtu, uint32 u32RegVal)
{
    pFtu->SWOCTRL &= ~u32RegVal;
}

/**
 * @brief Configure fault operation mode and channel initialization status
 *
 * @param pFtu FTU instance
 * @param u32RegValue MODE register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ConfigFaultModeAndInitStatus(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->MODE = u32RegValue;
}

/**
 * @brief Clear FTU counter
 *
 * @param pFtu FTU instance
 * @param u32RegValue CNT register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ClearModuleCounter(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CNT = u32RegValue;
}

/**
 * @brief Read FTU module counter value
 *
 * @param pFtu FTU instance
 * @return FTU module counter value
 */
LOCAL_INLINE uint32 OCU_FTU_HWA_ReadModuleCounter(FTU_Type *pFtu)
{
    return (uint32)pFtu->CNT;
}

/**
 * @brief Set FTU channel value
 *
 * @param pFtu FTU instance
 * @param u8Channel channel number, range is 0-7
 * @param u32RegValue CnV register value
 */
LOCAL_INLINE void OCU_FTU_HWA_SetChannelValue(FTU_Type *pFtu, uint8 u8Channel, uint32 u32RegValue)
{
    pFtu->CONTROLS[u8Channel].CnV = u32RegValue;
}

/**
 * @brief Set FTU channel configuration
 *
 * @param pFtu FTU instance
 * @param u8Channel channel number, range is 0-7
 * @param u32RegValue CnSC register value
 */
LOCAL_INLINE void OCU_FTU_HWA_SetChannelConfig(FTU_Type *pFtu, uint8 u8Channel, uint32 u32RegValue)
{
    pFtu->CONTROLS[u8Channel].CnSC = u32RegValue;
}

/**
 * @brief Set FTU counter compare val
 *
 * @param pFtu FTU instance
 * @param u32RegValue MOD register value
 */
LOCAL_INLINE void OCU_FTU_HWA_SetModuleCompareValue(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->MOD = u32RegValue;
}

/**
 * @brief Clear FTU counter initial value
 *
 * @param pFtu FTU instance
 * @param u32RegValue CNTIN register value
 */
LOCAL_INLINE void OCU_FTU_HWA_ClearModuleCounterInitialValue(FTU_Type *pFtu, uint32 u32RegValue)
{
    pFtu->CNTIN = u32RegValue;
}

/**
 * @brief Set FTU module prescale
 *
 * @param pFtu FTU instance
 * @param ePs FTU clock prescaler enumeration
 */
LOCAL_INLINE void OCU_FTU_HWA_SetModulePrescale(FTU_Type *pFtu, Ocu_FtuPrescalerType ePs)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_PS_MASK) | FTU_SC_PS(ePs);
}

/**
 * @brief Check FTU channel interrupt flag and interrupt enable
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number
 * @return If channel interrupt flag exist and interrupt enable ,return TRUE, else return FALSE
 */
LOCAL_INLINE boolean OCU_FTU_HWA_ReadChannelInterruptFlagAndEnable(FTU_Type *pFtu, uint8 u8Channel)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an inappropriate essential type.
       Reason: The conversion from _bool to unsigned char is safety */
    return (boolean)((uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK) == (uint32)(pFtu->CONTROLS[u8Channel].CnSC & (uint32)(FTU_CSC_CHF_MASK | FTU_CSC_CHIE_MASK)));
    /* PRQA S 4304 -- */
}

/**
 * @brief Enable FTU channel interrupt
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_EnableChannelInterrupt(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_CHIE_MASK;
}


/**
 * @brief Clear FTU channel interrupt flag
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_ClearChannelInterruptFlag(FTU_Type *pFtu, uint8 u8Channel)
{
    uint32 u32RegVal = pFtu->STATUS;
    u32RegVal &= ~(uint32)FTU_STATUS_CHNF((uint32)1u << (uint32)u8Channel);
    pFtu->STATUS = u32RegVal & FTU_STATUS_MASK;
}

/**
 * @brief Set FTU module clock source
 *
 * @param pFtu FTU instance
 * @param u8ClkSrc FTU module clock source type
 */
LOCAL_INLINE void OCU_FTU_HWA_SetModuleClkSrc(FTU_Type *pFtu, uint8 u8ClkSrc)
{
    uint32 u32RegValue = pFtu->SC;
    pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_CLKS_MASK) | FTU_SC_CLKS(u8ClkSrc);
}

/**
 * @brief Disable FTU module overflow interrupt
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void OCU_FTU_HWA_DisableOverflowInterrupt(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_TOIE_MASK;
}


/**
 * @brief De-init module configuration
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void OCU_FTU_HWA_DeinitModuleCommon(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)(FTU_SC_TOF_MASK | FTU_SC_TOIE_MASK | FTU_SC_RF_MASK | FTU_SC_RIE_MASK | FTU_SC_CPWMS_MASK);
}


/**
 * @brief Disable channel interrupt
 *
 * @param pFtu FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_DisableChannelInterrupt(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_CHIE_MASK;
}

/**
 * @brief Clear MODE[FTUEN], this field define different free running counter and synchronization behavior.
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void OCU_FTU_HWA_ClearModuleUpdateRegBySync(FTU_Type *pFtu)
{
    pFtu->MODE &= ~(uint32)FTU_MODE_FTUEN_MASK;
}

/**
 * @brief Set MODE[FTUEN], this field define different free running counter and synchronization behavior.
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void OCU_FTU_HWA_SetModuleUpdateRegBySync(FTU_Type *pFtu)
{
    pFtu->MODE |= (uint32)FTU_MODE_FTUEN_MASK;
}

/**
 * @brief Disable write protection
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void OCU_FTU_HWA_DisableWriteProtection(FTU_Type *pFtu)
{
    if (0u != (pFtu->FMS & FTU_FMS_WPEN_MASK))
    {
        pFtu->MODE |= (uint32)FTU_MODE_WPDIS_MASK;
    }
}

/**
 * @brief Enable FTU module channel(n) output
 *
 * @param pFtu FTU instance
 * @param u8Channel 0-7 bit indicate 0-7 channel
 */
LOCAL_INLINE void OCU_FTU_HWA_EnableChannelsOutput(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->SC |= (uint32)FTU_SC_CHNOUTEN(u8Channel);
}

/**
 * @brief Disable FTU module channel(n) output
 *
 * @param pFtu FTU instance
 * @param u8Channel 0-7 bit indicate 0-7 channel
 */
LOCAL_INLINE void OCU_FTU_HWA_DisableChannelsOutput(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->SC &= ~(uint32)FTU_SC_CHNOUTEN(u8Channel);
}

/**
 * @brief Disable FTU module cpwm mode
 *
 * @param pFtu FTU instance
 */
LOCAL_INLINE void OCU_FTU_HWA_DisableModuleCpwmMode(FTU_Type *pFtu)
{
    pFtu->SC &= ~(uint32)FTU_SC_CPWMS_MASK;
}

/**
 * @brief Selects the external clock as the FTU function clock
 *
 * @param pFtu the base address of the FTU instance
 * @param eTclk FTU external clock  enumeration
 */
LOCAL_INLINE void OCU_FTU_HWA_SetExternalClkSrc(FTU_Type *pFtu, uint32 eTclk)
{
	uint32 u32RegValue = pFtu->SC;
	pFtu->SC = (u32RegValue & ~(uint32)FTU_SC_TCKSEL_MASK)|FTU_SC_TCKSEL(eTclk);
}

/**
 * @brief Read FTU channel interrupt flag
 *
 * @param pFtu the base address of the FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 * @return FTU channel interrupt flag
 */
LOCAL_INLINE boolean OCU_FTU_HWA_ReadChannelInterruptFlag(FTU_Type *pFtu, uint8 u8Channel)
{
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an inappropriate essential type.
       Reason: The conversion from _bool to unsigned char is safety */
    return (boolean)((0u != (pFtu->CONTROLS[u8Channel].CnSC & (uint32)FTU_CSC_CHF_MASK))?TRUE:FALSE);
    /* PRQA S 4342 -- */
}

/**
 * @brief Read FTU channel interrupt enable flag
 *
 * @param pFtu the base address of the FTU instance
 * @param u8Channel FTU channel number, range is 0-7.
 * @return FTU channel interrupt flag
 */
LOCAL_INLINE boolean OCU_FTU_HWA_ReadChannelInterruptEnable(FTU_Type *pFtu, uint8 u8Channel)
{
    /* PRQA S 4304 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an inappropriate essential type.
       Reason: The conversion from _bool to unsigned char is safety */
    return (boolean)(0u != (pFtu->CONTROLS[u8Channel].CnSC & (uint32)FTU_CSC_CHIE_MASK));
    /* PRQA S 4304 -- */
}

/**
 * @brief Configure output compare mode channel to capture on rising edge only
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_SetChannelOutputCompareTOGGLE(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Configure output compare mode channel to capture on falling edge only
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_SetChannelOutputCompareOnLow(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Configure output compare mode channel to capture on both edge
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_SetChannelOutputCompareOnHigh(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_ELSA_MASK;
}

/**
 * @brief Channel (n) Edge and Level Select
 *
 * @param pFtu          -FTU instance
 * @param u8Channel     -FTU channel number, range is 0-7.
 */
LOCAL_INLINE void OCU_FTU_HWA_ClearChannelEdgeConfig(FTU_Type *pFtu, uint8 u8Channel)
{
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_MSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC |= (uint32)FTU_CSC_MSA_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSB_MASK;
    pFtu->CONTROLS[u8Channel].CnSC &= ~(uint32)FTU_CSC_ELSA_MASK;
}

#ifdef __cplusplus
}
#endif


#endif /* #ifndef OCU_FTU_REGOPS_H */
/** @} */
