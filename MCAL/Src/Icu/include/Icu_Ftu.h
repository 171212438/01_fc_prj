/**
 *   @file    Icu_Ftu.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - FTU driver header file.
 *   @details FTU header file, containing the variables and functions that are exported by the
 *            FTU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU
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

#ifndef ICU_FTU_H
#define ICU_FTU_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Hw.h"
#include "Icu_Ftu_Types.h"
/**
 * @brief Interrupt process of a FTU channel
 */
#define Icu_HW_FtuChannelIntrProcess(u8Instance, u8Index, u32ChannelValue, eInputLevel)    \
    Icu_ChannelInterruptCallback(                                                          \
        (Icu_HwChannelType)(((uint32)(u8Instance) * (uint32)ICU_FTU_CHANNELS_PER_MODULE) + \
                            (uint32)(u8Index)),                                            \
        (u32ChannelValue),                                                                 \
        (Icu_InputLevelType)(eInputLevel))

#if (ICU_FTU_SUPPORT_ICM_MODE == STD_ON)
#define Icu_Hw_FtuDualCaptureProcess(u8Instance, u8Index, v1, v2)                          \
    Icu_MeasChannelInterruptCallback(                                                      \
        (Icu_HwChannelType)(((uint32)(u8Instance) * (uint32)ICU_FTU_CHANNELS_PER_MODULE) + \
                            (uint32)(u8Index)),                                            \
        (v1),                                                                              \
        (v2))
#endif

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief Overflow Interrupt process of a Ftu Channel channel
 */
#define Icu_HW_FtuOverflowIntrProcess(u8Instance, u8Index)                                 \
    Icu_OverflowCallback(                                                                  \
        (Icu_HwChannelType)(((uint32)(u8Instance) * (uint32)ICU_FTU_CHANNELS_PER_MODULE) + \
                            (uint32)(u8Index)))
#endif

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

/**
 * @brief Initialize a FTU module
 *
 * @param pConfig   -Pointer to FTU module configuration structure
 */
ICU_TEXT_SECTION void Icu_Ftu_Init(const Icu_FtuModuleConfigType *pConfig);
/**
 * @brief Initialize a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 */
ICU_TEXT_SECTION void Icu_Ftu_ChannelInit(const Icu_FtuInstanceType eFtuInstance,
                                          const uint8               u8Channel);
#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize a FTU Module
 *
 * @param eFtuInstance  -FTU instance Id
 */
ICU_TEXT_SECTION void Icu_Ftu_DeInit(const Icu_FtuInstanceType eFtuInstance);
#endif
#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set a FTU channel to sleep mode
 *
 * @param eFtuInstance  -FTU instance Id
 * @param u8Channel     -FTU channel index
 */
ICU_TEXT_SECTION void Icu_Ftu_SetSleepMode(const Icu_FtuInstanceType eFtuInstance,
                                           const uint8               u8Channel);
/**
 * @brief Set a FTU channel to normal mode
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @param eActivationEdge   -Activation edge of for the channel
 */
ICU_TEXT_SECTION void Icu_Ftu_SetNormalMode(const Icu_FtuInstanceType     eFtuInstance,
                                            const uint8                   u8Channel,
                                            const Icu_FtuInputCaptureType eActivationEdge);
#endif /* ICU_SET_MODE_API */
/**
 * @brief Set activation for a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @param eActivationEdge   -Activation edge of for the channel
 */
ICU_TEXT_SECTION void Icu_Ftu_SetActivationCondition(const Icu_FtuInstanceType     eFtuInstance,
                                                     const uint8                   u8Channel,
                                                     const Icu_FtuInputCaptureType eActivationEdge);
#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return                  state of the channel
 */
ICU_TEXT_SECTION boolean Icu_Ftu_GetInputState(const Icu_FtuInstanceType eFtuInstance,
                                               const uint8               u8Channel);

ICU_TEXT_SECTION boolean Icu_Ftu_GetInputHwState(const Icu_FtuInstanceType eFtuInstance,
                                                 const uint8               u8Channel);
#endif
/**
 * @brief Start a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @param eActivationEdge   -Activation edge of for the channel
 */
ICU_TEXT_SECTION void Icu_Ftu_StartChannel(const Icu_FtuInstanceType     eFtuInstance,
                                           const uint8                   u8Channel,
                                           const Icu_FtuInputCaptureType eActivationEdge);
/**
 * @brief Stop a FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 */
ICU_TEXT_SECTION void Icu_Ftu_StopChannel(const Icu_FtuInstanceType eFtuInstance,
                                          const uint8               u8Channel);
#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get the Maximum count value of the Ftu instance
 *
 * @param eFtuInstance      -FTU instance Id
 * @return        Maximum count value of the Ftu instance.
 */
ICU_TEXT_SECTION Icu_ValueType Icu_Ftu_GetInstanceMaxCount(const Icu_FtuInstanceType eFtuInstance);
#endif

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get the input level of FTU channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return        Input level of the FTU channel
 */
ICU_TEXT_SECTION Icu_FtuInputLevelType Icu_Ftu_GetInputLevel(const Icu_FtuInstanceType eFtuInstance,
                                                             const uint8               u8Channel);
#endif

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief Enable the overflow interrupt of the channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 */
ICU_TEXT_SECTION void Icu_Ftu_EnableOverflow(const Icu_FtuInstanceType eFtuInstance,
                                             const uint8               u8Channel);
/**
 * @brief Disable the overflow interrupt of the channel
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 */
ICU_TEXT_SECTION void Icu_Ftu_DisableOverflow(const Icu_FtuInstanceType eFtuInstance,
                                              const uint8               u8Channel);
#endif

#if (ICU_TIMESTAMP_DMA == STD_ON)
/*
 * @brief Get the addr of the source register.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 *
 * */
ICU_TEXT_SECTION uint32 Icu_Ftu_GetSrcAddr(const Icu_FtuInstanceType eFtuInstance,
                                           const uint8               u8Channel);

/*
 * @brief Enable the ftu channel dma function.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * */
ICU_TEXT_SECTION void Icu_Ftu_EnableChnDma(const Icu_FtuInstanceType eFtuInstance,
                                           const uint8               u8Channel);

/*
 * @brief Disable the ftu channel dma function.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * */
ICU_TEXT_SECTION void Icu_Ftu_DisableChnDma(const Icu_FtuInstanceType eFtuInstance,
                                            const uint8               u8Channel);
#endif

/**
 * @brief Set Icm mode of a FTU channel.
 *
 * @param eFtuInstance      -FTU instance
 * @param u8Channel         -FTU channel number, range is 0-7.
 * @param eActivationEdge   -Active edge
 * @param eFtuIcmMode      -Ftu Icm mode
 */
ICU_TEXT_SECTION void Icu_Ftu_SetIcmMode(const Icu_FtuInstanceType     eFtuInstance,
                                         uint8                         u8Channel,
                                         const Icu_FtuInputCaptureType eActivationEdge,
                                         Icu_FtuIcmModeType            eFtuIcmMode);

/*
 * @brief Get time value directly from hardware register.
 *
 * @param eFtuInstance      -FTU instance Id
 * @param u8Channel         -FTU channel index
 * @return                     - time value
 * */
ICU_TEXT_SECTION uint32 Icu_Ftu_HwGetTimeElapsed(const Icu_FtuInstanceType eFtuInstance,
                                                 const uint8               u8Channel);

#if (defined ICU_FTU_ISR_USED)
/**
 * @brief FTU interrupt process
 *
 * @param eFtuInstance          -FTU instance Id
 * @param bOverflow              -Overflow flag
 * @param u32ChannelIntrFlag    -Channel interrupt flag
 * @param pChannelValue            -Point to the array of channel value
 * @param u32InputState            -Input State
 */
ICU_TEXT_SECTION void Icu_Ftu_ProcessInterrupt(uint8   u8Instance,
                                               uint32  u32Overflow,
                                               uint32  u32ChannelIntrFlag,
                                               uint32 *pChannelValue,
                                               uint32  u32InputState);
#endif
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
#ifdef __cplusplus
}
#endif
#endif /* ICU_FTU_H */
/** @} */
