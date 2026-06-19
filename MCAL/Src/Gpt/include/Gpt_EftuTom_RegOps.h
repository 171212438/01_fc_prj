/**
*   @file    Gpt_EftuTom_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt -  Gpt header file.
*   @details GPT low level driver API.
*
*   @addtogroup GPT_EftuTom
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_EFTUTOM
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
*   0.8.0       28/11/2024    QXW0074       N/A          Gpt_EftuTom Initial version
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_EFTUTOM_REGOPS_H
#define GPT_EFTUTOM_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C" {
#endif
/**=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Tom_Reg.h"
#include "Gpt_EftuTom.h"
#include "Gpt_EftuTom_Types.h"

#if defined(GPT_EFTU_USED)
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
 * @brief Trigger request signal
 * @note This field is controlled by EFTU_TOM_TGC_SPEC_LOCK.
 *
 * Trigger request signal (see TGC) to update the register
 * TGC_ENDIS_STAT and TGC_OUTEN_STAT, and trigger a force update
 * when enable force update.
 *
 * @param pTOM Pointer to the base address of the EFTU_TOM type, used to access hardware registers
 */
LOCAL_INLINE void EFTU_TOM_HWA_SetHostTriggerRequest(EFTU_TOM_Type * const pTOM)
{
    pTOM->TGC_GLB_CTRL |= EFTU_TOM_TGC_GLB_CTRL_HOST_TRIG_MASK;
}

/**
 * @brief Disable the global time base
 * @note This field is controlled by EFTU_TOM_TGC_SPEC_LOCK.
 *
 * @param pTOM Base address pointer to the EFTU_TOM module, used to access the module's registers
 */
LOCAL_INLINE void EFTU_TOM_HWA_DisableGlobalTimeBase(EFTU_TOM_Type * const pTOM)
{
    pTOM->TGC_GLB_CTRL |= EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK;
}

/**
 * @brief Enable the global time base
 * @note This field is controlled by EFTU_TOM_TGC_SPEC_LOCK.
 *
 * @param pTOM Base address pointer to the EFTU_TOM module, used to access the module's registers
 */
LOCAL_INLINE void EFTU_TOM_HWA_EnableGlobalTimeBase(EFTU_TOM_Type * const pTOM)
{
    pTOM->TGC_GLB_CTRL &= ~(uint32)EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK;
}

/**
 * Enable channel
 *
 * @param pTOM Base address pointer of the EFTU_TOM peripheral to access its registers.
 * @param u8Channel The channel number to enable.
 */
LOCAL_INLINE void EFTU_TOM_HWA_EnableChannel(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->TGC_ENDIS_STAT =     (pTOM->TGC_ENDIS_STAT & ~((uint32)EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK << ((uint32)u8Channel << 1U)))
                             | ((uint32)EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0(2u) << ((uint32)u8Channel << 1U));
}

/**
 * Disable channel
 *
 * @param pTOM Base address pointer of the EFTU_TOM peripheral to access its registers.
 * @param u8Channel The channel number to disable.
 */
LOCAL_INLINE void EFTU_TOM_HWA_DisableChannel(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->TGC_ENDIS_STAT =    (pTOM->TGC_ENDIS_STAT & ~((uint32)EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK << ((uint32)u8Channel << 1U)))
                            | ((uint32)EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0(1u) << ((uint32)u8Channel << 1U));
}

/**
 * Enable the force update of an EFTU_TOM channel.
 *
 * @param pTOM Pointer to the base address of the EFTU_TOM module, used to access the module's registers.
 * @param u8Channel The channel number to enable force update.
 */
LOCAL_INLINE void EFTU_TOM_HWA_EnableForceUpdate(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->TGC_FUPD_CTRL = (pTOM->TGC_FUPD_CTRL & ~((uint32)EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0_MASK << ((uint32)u8Channel << 1U)))
                        | (EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0(2u) << ((uint32)u8Channel << 1U));
}

/**
 * Disable the force update of an EFTU_TOM channel.
 *
 * @param pTOM Pointer to the base address of the EFTU_TOM module, used to access the module's registers.
 * @param u8Channel The channel number to disable force update.
 */
LOCAL_INLINE void EFTU_TOM_HWA_DisableForceUpdate(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->TGC_FUPD_CTRL = (pTOM->TGC_FUPD_CTRL & ~((uint32)EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0_MASK << ((uint32)u8Channel << 1U)))
                        | (EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0(1u) << ((uint32)u8Channel << 1U));
}

/**
 * @brief Set the TOM channel mode to SOMP mode
 *
 * @param pTOM Pointer to the base address of the EFTU TOM module, used to access the module's registers
 * @param u8Channel The channel number to set the mode for
 */
LOCAL_INLINE void EFTU_TOM_HWA_SetChannelToSompMode(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->Channel[u8Channel].CH_CTRL = (pTOM->Channel[u8Channel].CH_CTRL & (~(uint32)EFTU_TOM_CHn_CTRL_MODE_MASK))
                                    |  EFTU_TOM_CHn_CTRL_MODE(2u);
}

/**
 * @brief Reset the TOM channel mode to default mode
 *
 * @param pTOM Pointer to the base address of the EFTU TOM module, used to access the module's registers
 * @param u8Channel The channel number to set the mode for
 */
LOCAL_INLINE void EFTU_TOM_HWA_ResetChannelToDefaultMode(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->Channel[u8Channel].CH_CTRL = (pTOM->Channel[u8Channel].CH_CTRL & (~(uint32)EFTU_TOM_CHn_CTRL_MODE_MASK));
}

/**
 * @brief Set the shadow clock source for an EFTU TOM channel
 * @note It has different usage for different TOM channel modes.
 *
 * @param pTOM Pointer to the EFTU TOM module
 * @param u8Channel The channel number in the TOM module
 * @param u8ClockSrc The clock source value to be set
 *                      -> SOMI Mode: Reserved
 *                      -> SOMC Mode: Reserved
 *                      -> SOMP Mode
 *                          0000b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[0] resolution is selected
 *                          0001b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[1] resolution is selected
 *                          0010b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[2] resolution is selected
 *                          0011b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[3] resolution is selected
 *                          0100b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[4] resolution is selected
 *                          0101b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[5] resolution is selected
 *                          0110b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[6] resolution is selected
 *                          0111b - After its first update from the shadow register CLK_SRC_SR,
 *                                  CCM_CLK_RES[7] resolution is selected
 *                          1000b - Reserved
 *                          1001b - Reserved
 *                          1010b - Reserved
 *                          1011b - Reserved
 *                          1100b - Functional operation stopped, clock resolution tied to zero.
 *                          1101b - Reserved
 *                          1110b - Reserved
 *                          1111b - Reserved
 *                      -> SOMS Mode
 *                          0000b - CCM_CLK_RES[0] resolution is selected
 *                          0001b - CCM_CLK_RES[1] resolution is selected
 *                          0010b - CCM_CLK_RES[2] resolution is selected
 *                          0011b - CCM_CLK_RES[3] resolution is selected
 *                          0100b - CCM_CLK_RES[4] resolution is selected
 *                          0101b - CCM_CLK_RES[5] resolution is selected
 *                          0110b - CCM_CLK_RES[6] resolution is selected
 *                          0111b - CCM_CLK_RES[7] resolution is selected
 *                          1000b - Reserved
 *                          1001b - Reserved
 *                          1010b - Reserved
 *                          1011b - Reserved
 *                          1100b - Functional operation stopped, clock resolution tied to zero.
 *                          1101b - Reserved
 *                          1110b - Reserved
 *                          1111b - Reserved
 *                      -> SOMB Mode: Reserved
 */
LOCAL_INLINE void EFTU_TOM_HWA_SetShadowClockSource(EFTU_TOM_Type * const pTOM, uint8 u8Channel, uint8 u8ClockSrc)
{
    pTOM->Channel[u8Channel].CH_CTRL_SR = (pTOM->Channel[u8Channel].CH_CTRL_SR & (~(uint32)EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR_MASK))
                                        | EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR(u8ClockSrc);
}

/**
 * @brief Get the CCU0 compare value for a specific channel of the EFTU TOM module.
 *
 * @param pTOM Base address pointer to the EFTU TOM module registers.
 * @param u8Channel The channel number to select the specific channel interrupt status.
 * @return uint32_t The CCU0 compare value of the selected channel.
 */
LOCAL_INLINE uint32 EFTU_TOM_HWA_GetCompareValueCM0(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    return pTOM->Channel[u8Channel].CH_CM0;
}

/**
 * @brief Set the value of Shadow Register SR0 for a specific channel in the EFTU_TOM module
 *
 * @param pTOM Base address pointer of the EFTU_TOM module, used to access the module's registers
 * @param u8Channel Channel number of the EFTU_TOM module, used to select the specific channel to operate on
 * @param u32Value Value to be set in the Shadow Register SR0, which determines the compare or capture behavior of the channel
 */
LOCAL_INLINE void EFTU_TOM_HWA_SetShadowValueSR0(EFTU_TOM_Type * const pTOM, uint8 u8Channel, uint32 u32Value)
{
    pTOM->Channel[u8Channel].CH_SR0 = u32Value & EFTU_TOM_CHn_SR0_SR0_MASK;
}

/**
 * @brief Get the current value of the CCU0 counter
 *
 * @param pTOM Base address pointer of the EFTU_TOM module, used to access the module's registers
 * @param u8Channel Channel number, used to select the specific counter channel
 * @return uint32_t The current value of the CCU0 counter
 */
LOCAL_INLINE uint32 EFTU_TOM_HWA_GetCCU0Counter(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    return pTOM->Channel[u8Channel].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
}

/**
 * @brief Set the current count value of the CCU0 counter
 *
 * @param pTOM Base address pointer of the EFTU_TOM peripheral, used to access the peripheral's registers
 * @param u8Channel Channel number, specifying which channel's counter needs to be set
 * @param u32Value The count value to be set, this value will be written to the counter register
 */
LOCAL_INLINE void EFTU_TOM_HWA_SetCCU0Counter(EFTU_TOM_Type * const pTOM, uint8 u8Channel, uint32 u32Value)
{
    pTOM->Channel[u8Channel].CH_CN0 = u32Value & EFTU_TOM_CHn_CN0_CN0_MASK;
}

/**
 * @brief Get the interrupt flag for a specific channel of the EFTU TOM module.
 *
 * @param pTOM Base address pointer to the EFTU TOM module registers.
 * @param u8Channel The channel number to select the specific channel interrupt status.
 * @return uint32_t The interrupt status flag of the selected channel.
 */
LOCAL_INLINE uint32 EFTU_TOM_HWA_GetInterruptFlag(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    return pTOM->Channel[u8Channel].CH_IRQ_ST;
}

/**
 * @brief Clear the interrupt flag for a specific EFTU TOM channel
 *
 * @param pTOM Pointer to the EFTU_TOM peripheral structure, used to access and modify the peripheral registers
 * @param u8Channel The channel number of the EFTU TOM, specifying the exact channel whose interrupt flag needs to be cleared
 * @param u32Flag The interrupt flag to be cleared, written to the interrupt status register to clear the flag
 */
LOCAL_INLINE void EFTU_TOM_HWA_ClearInterruptFlag(EFTU_TOM_Type * const pTOM, uint8 u8Channel, uint32 u32Flag)
{
    pTOM->Channel[u8Channel].CH_IRQ_ST = u32Flag;
}

/**
 * @brief Enable CCU0 Interrupt
 *
 * This function enables the CCU0 interrupt by setting the corresponding interrupt enable bit for a specific channel.
 *
 * @param pTOM Base address pointer of the EFTU_TOM peripheral to access its registers
 * @param u8Channel The channel number for which the CCU0 interrupt is to be enabled
 */
LOCAL_INLINE void EFTU_TOM_HWA_EnableCCU0Interrupt(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->Channel[u8Channel].CH_IRQ_EN |= EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK;
}

/**
 * @brief Disable CCU0 Interrupt
 *
 * This function enables the CCU0 interrupt by setting the corresponding interrupt enable bit for a specific channel.
 *
 * @param pTOM Base address pointer of the EFTU_TOM peripheral to access its registers
 * @param u8Channel The channel number for which the CCU0 interrupt is to be disable
 */
LOCAL_INLINE void EFTU_TOM_HWA_DisableCCU0Interrupt(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    pTOM->Channel[u8Channel].CH_IRQ_EN &= ~EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK;
}

/**
 * @brief Check EFTU TOM channel CCU0 interrupt flag and interrupt enable.
 *
 * @param pTOM Base address pointer of the EFTU_TOM peripheral to access its registers
 * @param u8Channel The channel number for which the CCU0 interrupt is to be disable
 * return boolean If channel CCU0 interrupt flag exist and CCU0 interrupt enable ,return TRUE, else return FALSE
 */
LOCAL_INLINE boolean EFTU_TOM_HWA_ReadChannelCCU0InterruptFlagAndEnable(EFTU_TOM_Type * const pTOM, uint8 u8Channel)
{
    return (boolean)(((pTOM->Channel[u8Channel].CH_IRQ_EN & EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK) == EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK) && ((pTOM->Channel[u8Channel].CH_IRQ_ST & EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK) == EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK));
}

#ifdef __cplusplus
}
#endif

#endif /*GPT_TPU_USED == STD_ON*/

#endif /* #ifndef GPT_TPU_REGOPS_H */
/** @} */
