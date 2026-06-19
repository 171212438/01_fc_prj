/**
*   @file    Icu_Aontimer.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Aontimer driver header file.
*   @details Aontimer header file, containing the variables and functions that are exported by the
*            Aontimer driver.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Aontimer
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/

#ifndef ICU_AONTIMER_H
#define ICU_AONTIMER_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Aontimer_Types.h"
#include "Icu_Hw.h"
/**
 * @brief Interrupt process of a AONTIMER channel
 */
#define Icu_HW_AontimerChannelIntrProcess(eAontmrInstance) \
    Icu_ChannelInterruptCallback((Icu_HwChannelType)ICU_HW_AONTIMER_CH, 0u, ICU_INPUT_LOW);

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Initialize an AONTIMER module
 *
 * @param pConfig -Pointer to AONTIMER module configuration structure
 */
ICU_TEXT_SECTION void Icu_Aontimer_Init(const Icu_AontimerModuleConfigType *pConfig);
/**
 * @brief Set activation for Aontimer
 *
 * @param eInstance     -AONTIMER instance Id
 * @param ePolarity     -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Aontimer_SetActivationCondition(
    const Icu_AontimerInstanceType      eInstance,
    const Icu_AontimerPulsePolarityType ePolarity);
#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of Aontimer
 *
 * @param eInstance     -AONTIMER instance Id
 * @return              state of the Aontimer
 */
ICU_TEXT_SECTION boolean Icu_Aontimer_GetInputState(const Icu_AontimerInstanceType eInstance);
#endif
#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize AONTIMER module
 *
 * @param eInstance -AONTIMER instance id
 */
ICU_TEXT_SECTION void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance);
#endif
#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Get Aontimer edge numbers
 *
 * @param eInstance         -AONTIMER instance Id
 * @return                  Aontimer edge numbers
 */
ICU_TEXT_SECTION Icu_EdgeNumberType Icu_Aontimer_GetEdgeNumbers(
    const Icu_AontimerInstanceType eInstance);
/**
 * @brief Reset Aontimer edge numbers
 *
 * @param eInstance          -AONTIMER instance Id
 */
ICU_TEXT_SECTION void Icu_Aontimer_ResetEdgeNumbers(const Icu_AontimerInstanceType eInstance);
/**
 * @brief Enable Aontimer edge count
 *
 * @param eInstance         -AONTIMER instance Id
 * @param ePolarity         -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Aontimer_EnableEdgeCount(const Icu_AontimerInstanceType      eInstance,
                                                   const Icu_AontimerPulsePolarityType ePolarity);
/**
 * @brief Disab Aontimer edge count
 *
 * @param eInstance         -AONTIMER instance Id
 */
ICU_TEXT_SECTION void Icu_Aontimer_DisableEdgeCount(const Icu_AontimerInstanceType eInstance);

/**
 * @brief Get AONTIMER enable status
 *
 * @param eInstance         -AONTIMER instance id
 * @return                  -AONTIMER enable status
 */
ICU_TEXT_SECTION boolean Icu_Aontimer_IsEnable(const Icu_AontimerInstanceType eInstance);
#endif
#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief Enable Aontimer edge detection
 *
 * @param eInstance     -AONTIMER instance Id
 * @param ePolarity     -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Aontimer_EnableEdgeDetection(const Icu_AontimerInstanceType eInstance,
                                                       const Icu_AontimerPulsePolarityType ePolarity);
/**
 * @brief Disable Aontimer edge detection
 *
 * @param eInstance     -AONTIMER instance Id
 */
ICU_TEXT_SECTION void Icu_Aontimer_DisableEdgeDetection(const Icu_AontimerInstanceType eInstance);
#endif

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set Aontimer to normal mode
 *
 * @param eInstance     -AONTIMER instance Id
 * @param ePolarity     -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Aontimer_SetNormalMode(const Icu_AontimerInstanceType      eInstance,
                                                 const Icu_AontimerPulsePolarityType ePolarity);
/**
 * @brief Set Aontimer to sleep mode
 *
 * @param eInstance     -AONTIMER instance Id
 */
ICU_TEXT_SECTION void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance);
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
#ifdef __cplusplus
}
#endif
#endif /*ICU_AONTIMER_H*/
/** @} */
