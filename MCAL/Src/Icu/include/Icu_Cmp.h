/**
*   @file    Icu_Cmp.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Cmp driver header file.
*   @details Cmp header file, containing the variables and functions that are exported by the
*            Cmp driver.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Cmp
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

#ifndef ICU_CMP_H
#define ICU_CMP_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Cmp_Types.h"

/**
 * @brief Interrupt process of a cmp channel
 */
#define Icu_HW_CmpChannelIntrProcess(eCmpInstance)                                             \
    Icu_ChannelInterruptCallback((Icu_HwChannelType)(ICU_HW_CMP0_CH + (uint32)(eCmpInstance)), \
                                 0u,                                                           \
                                 ICU_INPUT_LOW);

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Initialize a CMP module
 *
 * @param pConfig   -Pointer to CMP module configuration structure
 */
ICU_TEXT_SECTION void Icu_Cmp_Init(const Icu_CmpModuleConfigType *pConfig);

#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize a CMP module
 *
 * @param eCmpInstance  -CMP instance id
 */
ICU_TEXT_SECTION void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance);
#endif

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of Instance
 *
 * @param eCmpInstance      -Cmp instance Id
 * @param ePolarity         - input state
 * @return                  -state of the cmp Instance
 */
ICU_TEXT_SECTION boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType    eCmpInstance,
                                               const ICU_CmpOutPolarityType ePolarity);
#endif

/**
 * @brief Set activation for cmp
 *
 * @param eCmpInstance     -Cmp instance Id
 * @param ePolarity     -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Cmp_SetActivationCondition(const Icu_CmpInstanceType    eCmpInstance,
                                                     const ICU_CmpOutPolarityType ePolarity);

#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief Enable cmp edge detection
 *
 * @param eCmpInstance     -cmp instance Id
 * @param ePolarity     -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Cmp_EnableEdgeDetection(const Icu_CmpInstanceType    eCmpInstance,
                                                  const ICU_CmpOutPolarityType ePolarity);
/**
 * @brief Disable cmp edge detection
 *
 * @param eCmpInstance     -cmp instance Id
 */
ICU_TEXT_SECTION void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance);
#endif

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set CMP to normal mode
 *
 * @param eCmpInstance     -CMP instance id
 */
ICU_TEXT_SECTION void Icu_Cmp_SetNormalMode(const Icu_CmpInstanceType eCmpInstance);
/**
 * @brief Set CMP to sleep mode
 *
 * @param eCmpInstance     -CMP instance id
 */
ICU_TEXT_SECTION void Icu_Cmp_SetSleepMode(const Icu_CmpInstanceType eCmpInstance);
#endif

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief This function returns the input level of the CMP channel
 *
 * @param eCmpInstance         -CMP instance id
 * @return                     -Input level of the channel
 */
ICU_TEXT_SECTION uint8 Icu_Cmp_GetInputLevel(const Icu_CmpInstanceType eCmpInstance);
#endif

#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Enable Cmp edge count
 *
 * @param eCmpInstance         -Cmp instance Id
 * @param ePolarity         -The polarity of pulse mode
 */
ICU_TEXT_SECTION void Icu_Cmp_EnableEdgeCount(const Icu_CmpInstanceType    eCmpInstance,
                                              const ICU_CmpOutPolarityType ePolarity);

/**
 * @brief Disable CMP edge count
 *
 * @param eCmpInstance         -CMP instance id
 */
ICU_TEXT_SECTION void Icu_Cmp_DisableEdgeCount(const Icu_CmpInstanceType eCmpInstance);
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* ICU_CMP_H */

/** @} */
