/**
 *   @file    Icu_Tpu.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - TPU driver header file.
 *   @details TPU header file, containing the variables and functions that are exported by the
 *            TPU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TPU
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
*   0.7.0       15/04/2023    QXW0070       N/A          Initial Version
==================================================================================================*/
#ifndef ICU_TPU_H
#define ICU_TPU_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Tpu_Types.h"
#if (ICU_SUPPORT_TPU == STD_ON)

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define ICU_TPU_MAX_COUNT 0xFFFFFFu
/**
 * @brief Interrupt process of a single capture channel
 */
#define Icu_HW_TpuSingleCaptureProcess(tpu, ch, v)                                                 \
    Icu_ChannelInterruptCallback(                                                                  \
        (Icu_HwChannelType)((uint32)ICU_HW_TPU_CH_START +                                          \
                            ((uint32)(tpu) * (uint32)ICU_TPU_CHANNELS_PER_MODULE) + (uint32)(ch)), \
        (v),                                                                                       \
        (ICU_INPUT_LOW))
/**
 * @brief Interrupt process of a dual capture channel
 */
#define Icu_HW_TpuDualCaptureProcess(tpu, ch, v1, v2)                                              \
    Icu_MeasChannelInterruptCallback(                                                              \
        (Icu_HwChannelType)((uint32)ICU_HW_TPU_CH_START +                                          \
                            ((uint32)(tpu) * (uint32)ICU_TPU_CHANNELS_PER_MODULE) + (uint32)(ch)), \
        (v1),                                                                                      \
        (v2))

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief Overflow Interrupt process of a Ftu Channel channel
 */
#define Icu_HW_TpuOverflowIntrProcess(tpu, ch)            \
    Icu_OverflowCallback(                                 \
        (Icu_HwChannelType)((uint32)ICU_HW_TPU_CH_START + \
                            ((uint32)(tpu) * (uint32)ICU_TPU_CHANNELS_PER_MODULE) + (uint32)(ch)))
#endif
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/** @brief Channel Input Pin Action Control.  */
typedef enum
{
    ICU_TPUE_NO_TRANSITIONS           = 0U,
    ICU_TPUE_DETECT_RISING_EDGE_ONLY  = 1U,
    ICU_TPUE_DETECT_FALLING_EDGE_ONLY = 2U,
    ICU_TPUE_DETECT_EITHER_EDGE_ONLY  = 3U,
    ICU_TPUE_DETECT_SIGNAL_0_ON_MATCH = 4U,
    ICU_TPUE_DETECT_SIGNAL_1_ON_MATCH = 5U,
} ICU_TPUE_IPACType;

/** @brief Channel time base selection of part 1.  */
typedef enum
{
    ICU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR1 = 0U,
    ICU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR2 = 1U,
    ICU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR2_MATCHBASE_TCR1 = 2U,
    ICU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR2_MATCHBASE_TCR2 = 3U,
    ICU_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1       = 4U,
    ICU_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR2       = 5U,
    ICU_TPUE_EQUAL_ONLY_CAPBASE_TCR2_MATCHBASE_TCR1       = 6U,
    ICU_TPUE_EQUAL_ONLY_CAPBASE_TCR2_MATCHBASE_TCR2       = 7U,
} ICU_TPUE_TimeBaseSelctionType;

/** @brief PDCM Encoding.  */
typedef enum
{
    ICU_TPUE_EM_B_ST  = 0U,
    ICU_TPUE_EM_B_DT  = 1U,
    ICU_TPUE_EM_NB_ST = 2U,
    ICU_TPUE_EM_NB_DT = 3U,
    ICU_TPUE_M2_ST    = 4U,
    ICU_TPUE_M2_DT    = 5U,
    ICU_TPUE_BM_ST    = 6U,
    ICU_TPUE_BM_DT    = 7U,
    ICU_TPUE_M2_O_ST  = 8U,
    ICU_TPUE_M2_O_DT  = 9U,
    ICU_TPUE_SM_ST    = 12U,
    ICU_TPUE_SM_DT    = 13U,
    ICU_TPUE_SM_ST_E  = 14U,
} ICU_TPUE_PDCMEncodeType;
/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

ICU_TEXT_SECTION void Icu_Tpu_Init(const Icu_TpuModuleConfigType *pConfig);
#if (ICU_DE_INIT_API == STD_ON)
ICU_TEXT_SECTION void Icu_Tpu_DeInit(const Icu_TpuModuleConfigType *pConfig);
#endif
ICU_TEXT_SECTION void Icu_Tpu_ChannelInit(const Icu_TpuInstanceType eTpuInstance,
                                          const uint32              u32Channel);
#if (ICU_SET_MODE_API == STD_ON)
ICU_TEXT_SECTION void Icu_Tpu_SetSleepMode(const Icu_TpuInstanceType eTpuInstance,
                                           const uint32              u32Channel);
ICU_TEXT_SECTION void Icu_Tpu_SetNormalMode(const Icu_TpuInstanceType eTpuInstance,
                                            const uint32              u32Channel,
                                            const ICU_TPUE_IPACType   eIpac1,
                                            const ICU_TPUE_IPACType   eIpac2);
#endif
ICU_TEXT_SECTION void Icu_Tpu_SetActivationCondition(const Icu_TpuInstanceType eTpuInstance,
                                                     const uint32              u32Channel,
                                                     const ICU_TPUE_IPACType   eIpac1,
                                                     const ICU_TPUE_IPACType   eIpac2);
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
ICU_TEXT_SECTION Icu_InputLevelType Icu_Tpu_GetInputLevel(const Icu_TpuInstanceType eTpuInstance,
                                                          const uint32              u32Channel);
#endif
ICU_TEXT_SECTION boolean Icu_Tpu_GetInputState(const Icu_TpuInstanceType eTpuInstance,
                                               const uint32              u32Channel);
ICU_TEXT_SECTION void    Icu_Tpu_StartChannel(const Icu_TpuInstanceType eTpuInstance,
                                              const uint32              u32Channel,
                                              const ICU_TPUE_IPACType   eIpac1,
                                              const ICU_TPUE_IPACType   eIpac2);
ICU_TEXT_SECTION void    Icu_Tpu_StopChannel(const Icu_TpuInstanceType eTpuInstance,
                                             const uint32              u32Channel);

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
ICU_TEXT_SECTION void Icu_Tpu_EnableOverflow(const Icu_TpuInstanceType eTpuInstance,
                                             const uint32              u32Channel);
ICU_TEXT_SECTION void Icu_Tpu_DisableOverflow(const Icu_TpuInstanceType eTpuInstance,
                                              const uint32              u32Channel);
#endif
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#endif

#ifdef __cplusplus
}
#endif
#endif /*ICU_TPU_H*/
/** @} */
