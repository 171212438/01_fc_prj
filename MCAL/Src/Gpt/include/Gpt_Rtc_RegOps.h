/**
*   @file    Gpt_Rtc_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Rtc -  Gpt header file.
*   @details Gpt_Rtc low level driver API.
*
*   @addtogroup Gpt_Rtc
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Gpt_RTC
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
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_RTC_REGOPS_H
#define GPT_RTC_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C" {
#endif
/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Gpt_Rtc_Reg.h"

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

/**
 * @brief Read second value
 *
 * @param pRtc Rtc instance
 * @return Second value
 */
LOCAL_INLINE uint32 RTC_HWA_ReadSecondValue(const Gpt_RTCRegType *pRtc)
{
    return (uint32)pRtc->SR;
}

/**
 * @brief Read target alarm value
 *
 * @param pRtc Rtc instance
 * @return Target alarm value
 */
LOCAL_INLINE uint32 RTC_HWA_ReadTargetAlarmValue(const Gpt_RTCRegType *pRtc)
{
    return (uint32)pRtc->TAR;
}

/**
 * @brief Read RTC status
 *
 * @param pRtc Rtc instance
 * @return RTC flag status
 */
LOCAL_INLINE uint32 RTC_HWA_ReadIntFlag(const Gpt_RTCRegType *pRtc)
{
    return ((uint32)pRtc->STR & (uint32)(RTC_STR_TAF_MASK | RTC_STR_TOF_MASK));
}

/**
 * @brief Read RTC alarm interrupt enable bit
 *
 * @param pRtc Rtc instance
 * @return Alarm interrupt enable
 */
LOCAL_INLINE uint32 RTC_HWA_ReadAlarmInterruptEnableBit(const Gpt_RTCRegType *pRtc)
{
    return (((uint32)pRtc->IER & (uint32)RTC_IER_TAIE_MASK) >> RTC_IER_TAIE_SHIFT);
}

/**
 * @brief Read RTC alarm flag
 *
 * @param pRtc Rtc instance
 * @return Alarm flag
 */
LOCAL_INLINE uint32 RTC_HWA_ReadAlarmFlag(const Gpt_RTCRegType *pRtc)
{
    return (((uint32)pRtc->STR & (uint32)RTC_STR_TAF_MASK) >> RTC_STR_TAF_SHIFT);
}

/**
 * @brief Set RTC alarm value
 *
 * @param pRtc Rtc instance
 * @param u32Value TAR register value
 */
LOCAL_INLINE void RTC_HWA_SetAlarmCounterValue(Gpt_RTCRegType *pRtc, uint32 u32Value)
{
    pRtc->TAR = u32Value;
}

/**
 * @brief Enable RTC time counter
 *
 * @param pRtc Rtc instance
 */
LOCAL_INLINE void RTC_HWA_EnableRtcCounter(Gpt_RTCRegType *pRtc)
{
    pRtc->STR |= (uint32)RTC_STR_TCE_MASK;
}

/**
 * @brief Enable alarm interrupt
 *
 * @param pRtc Rtc instance
 */
LOCAL_INLINE void RTC_HWA_EnableAlarmInterrupt(Gpt_RTCRegType *pRtc)
{
    pRtc->IER |= (uint32)RTC_IER_TAIE_MASK;
}

/**
 * @brief Disable RTC time counter
 *
 * @param pRtc Rtc instance
 */
LOCAL_INLINE void RTC_HWA_DisableRtcCounter(Gpt_RTCRegType *pRtc)
{
    pRtc->STR &= ~(uint32)RTC_STR_TCE_MASK;
}

/**
 * @brief Disable alarm interrupt
 *
 * @param pRtc Rtc instance
 */
LOCAL_INLINE void RTC_HWA_DisableAlarmInterrupt(Gpt_RTCRegType *pRtc)
{
    pRtc->IER &= ~(uint32)RTC_IER_TAIE_MASK;
}

/**
 * @brief Disable overflow interrupt
 *
 * @param pRtc Rtc instance
 */
LOCAL_INLINE void RTC_HWA_DisableOverflowInvalidInterrupt(Gpt_RTCRegType *pRtc)
{
    pRtc->IER &= ~(uint32)(RTC_IER_TOIE_MASK);
}

/**
 * @brief Stop and clear RTC clock
 *
 * @param pRtc Rtc instance
 */
LOCAL_INLINE void RTC_HWA_ClearAndStopRTCClock(Gpt_RTCRegType *pRtc)
{
    pRtc->STR &= ~(uint32)(RTC_STR_TCE_MASK);
    pRtc->CR |= (uint32)RTC_CR_SWRST_MASK;
    pRtc->CR &= ~(uint32)RTC_CR_SWRST_MASK;
    pRtc->IER = (uint32)0U;
}



#ifdef __cplusplus
}
#endif


#endif /* #ifndef GPT_RTC_REGOPS_H */

/** @} */
