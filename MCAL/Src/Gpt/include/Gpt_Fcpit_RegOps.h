/**
*   @file    Gpt_Fcpit_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt -  Gpt header file.
*   @details GPT low level driver API.
*
*   @addtogroup GPT_Fcpit
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_FCPIT
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
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_FCPIT_REGOPS_H
#define GPT_FCPIT_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C" {
#endif
/**=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Fcpit_Reg.h"
#include "Gpt_Fcpit.h"

#if defined(GPT_FCPIT_USED)
/*=================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*=================================================================================================
*                                             ENUMS
==================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief Set FCPIT channel value
 *
 * @param pFcpit Fcpit instance
 * @param u8Channel FCPIT channel number
 * @param u32RegValue Timer value
 */
LOCAL_INLINE void FCPIT_HWA_SetChannelValue(FCPIT_Type *pFcpit, uint8 u8Channel, uint32 u32RegValue)
{
    pFcpit->CONTROLS[u8Channel].TVAL = u32RegValue;
}

/**
 * @brief Configure FCPIT channel
 *
 * @param pFcpit Fcpit instance
 * @param u8Channel FCPIT channel number
 * @param u32RegValue TCTRL register value
 */
LOCAL_INLINE void FCPIT_HWA_ConfigChannel(FCPIT_Type *pFcpit, uint8 u8Channel, uint32 u32RegValue)
{
    pFcpit->CONTROLS[u8Channel].TCTRL = u32RegValue;
}

/**
 * @brief Read current FCPIT channel value
 *
 * @param pFcpit Fcpit instance
 * @param u8Channel FCPIT channel number
 * @return FCPIT current timer value
 */
LOCAL_INLINE uint32 FCPIT_HWA_ReadCurChannelValue(const FCPIT_Type *pFcpit, uint8 u8Channel)
{
    return pFcpit->CONTROLS[u8Channel].CVAL;
}

/**
 * @brief Read FCPIT channel timer value
 *
 * @param pFcpit Fcpit instance
 * @param u8Channel FCPIT channel number
 * @return FCPIT channel timer value
 */
LOCAL_INLINE uint32 FCPIT_HWA_ReadChannelTimerValue(const FCPIT_Type *pFcpit, uint8 u8Channel)
{
    return pFcpit->CONTROLS[u8Channel].TVAL;
}

/**
 * @brief Read FCPIT enable interrupt flag
 *
 * @param pFcpit Fcpit instance
 * @return FCPIT enable interrupt flag
 */
LOCAL_INLINE uint32 FCPIT_HWA_ReadEnableInterruptFlag(const FCPIT_Type *pFcpit)
{
    uint32 u32TempRegVal = (uint32)(pFcpit->MIER) & FCPIT_MIER_MASK;
    return (((uint32)(pFcpit->MSR & FCPIT_MSR_MASK)) & (u32TempRegVal));
}

/**
 * @brief Read FCPIT interrupt flag
 *
 * @param pFcpit Fcpit instance
 * @return FCPIT interrupt flag
 */
LOCAL_INLINE uint32 FCPIT_HWA_ReadInterruptFlag(const FCPIT_Type *pFcpit)
{
    return (uint32)(pFcpit->MSR) & FCPIT_MSR_MASK;
}

/**
 * @brief Set FCPIT channel running on debug mode
 *
 * @param pFcpit Fcpit instance
 */
LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnDebug(FCPIT_Type *pFcpit)
{
    pFcpit->MCR |= FCPIT_MCR_DBG_EN_MASK;
}

/**
 * @brief Set FCPIT channel running on low power mode
 *
 * @param pFcpit Fcpit instance
 */
LOCAL_INLINE void FCPIT_HWA_SetChannelRunOnLpm(FCPIT_Type *pFcpit)
{
    pFcpit->MCR |= FCPIT_MCR_LPM_EN_MASK;
}

/**
 * @brief Enable FCPIT module
 *
 * @param pFcpit Fcpit instance
 */
LOCAL_INLINE void FCPIT_HWA_EnableModule(FCPIT_Type *pFcpit)
{
    pFcpit->MCR |= FCPIT_MCR_M_CEN_MASK;
}

/**
 * @brief Enable FCPIT channel(n) interrupt
 *
 * @param pFcpit Fcpit instance
 * @param u32RegValue u32RegValue 0-3 bit indicate TIE0-TIE3
 */
LOCAL_INLINE void FCPIT_HWA_EnableChannelsInterrupt(FCPIT_Type *pFcpit, uint32 u32RegValue)
{
    pFcpit->MIER |= u32RegValue;
}

/**
 * @brief Enable FCPIT channel
 *
 * @param pFcpit Fcpit instance
 * @param u8Channel FCPIT channel number
 */
LOCAL_INLINE void FCPIT_HWA_EnableChannel(FCPIT_Type *pFcpit, uint8 u8Channel)
{
    pFcpit->CONTROLS[u8Channel].TCTRL |= FCPIT_TCTRL_T_EN_MASK;
}

/**
 * @brief Set FCPIT channel stop on debug mode
 *
 * @param pFcpit Fcpit instance
 */
LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnDebug(FCPIT_Type *pFcpit)
{
    pFcpit->MCR &= ~(uint32)FCPIT_MCR_DBG_EN_MASK;
}

/**
 * @brief Set FCPIT channel stop on low power mode
 *
 * @param pFcpit Fcpit instance
 */
LOCAL_INLINE void FCPIT_HWA_SetChannelStopOnLpm(FCPIT_Type *pFcpit)
{
    pFcpit->MCR &= ~(uint32)FCPIT_MCR_LPM_EN_MASK;
}

/**
 * @brief Disable FCPIT module
 *
 * @param pFcpit Fcpit instance
 */
LOCAL_INLINE void FCPIT_HWA_DisableModule(FCPIT_Type *pFcpit)
{
    pFcpit->MCR &= ~(uint32)FCPIT_MCR_M_CEN_MASK;
}

/**
 * @brief Clear FCPIT channel(n) interrupt flag
 *
 * @param pFcpit Fcpit instance
 * @param u32RegValue 0-3 bit indicate TIF0-TIF3
 */
LOCAL_INLINE void FCPIT_HWA_ClearChannelsInterruptFlag(FCPIT_Type *pFcpit, uint32 u32RegValue)
{
    pFcpit->MSR = u32RegValue;
}

/**
 * @brief Disable FCPIT channel(n) interrupt
 *
 * @param pFcpit Fcpit instance
 * @param u32RegValue u32RegValue 0-3 bit indicate TIE0-TIE3
 */
LOCAL_INLINE void FCPIT_HWA_DisableChannelsInterrupt(FCPIT_Type *pFcpit, uint32 u32RegValue)
{
    pFcpit->MIER &= ~u32RegValue;
}

/**
 * @brief Disable FCPIT channel
 *
 * @param pFcpit Fcpit instance
 * @param u8Channel FCPIT channel number
 */
LOCAL_INLINE void FCPIT_HWA_DisableChannel(FCPIT_Type *pFcpit, uint8 u8Channel)
{
    pFcpit->CONTROLS[u8Channel].TCTRL &= ~(uint32)FCPIT_TCTRL_T_EN_MASK;
}

#ifdef __cplusplus
}
#endif

#endif /*GPT_FCPIT_USED == STD_ON*/

#endif /* #ifndef GPT_FCPIT_REGOPS_H */
/** @} */
