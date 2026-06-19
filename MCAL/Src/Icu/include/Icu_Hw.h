/**
 *   @file    Icu_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - ICU Driver Hw header file.
 *   @details ICU driver header file, containing the Hw functions that are used by
 *            the ICU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer
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

#ifndef ICU_HW_H
#define ICU_HW_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu.h"
#include "Icu_Hw_Types.h"
#include "Cpm_Reg.h"
/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#if (ICU_MULTICORE_SUPPORT == STD_ON)
#define Icu_GetCoreID() GET_CPU_ID()
#endif
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define ICU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"

/**
 * @brief          Global variable (pointer) used for storing the ICU driver configuration data.
 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
ICU_DATA_SECTION extern const Icu_ConfigType *Icu_pConfig[MAX_CORE_NUM];
#else
ICU_DATA_SECTION extern const Icu_ConfigType *Icu_pConfig;
#endif

#define ICU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
/**
 * @brief Initialize hardware of ICU Modules
 *
 * @param pHwConfig -Pointer to module configuration structure
 */
ICU_TEXT_SECTION void Icu_HW_ModulesInit(const Icu_HwConfigType *pHwConfig);
#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize a hardware ICU channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_ChannelDeInit(Icu_HwType eHwType, uint32 u32ChannelOfHw);
/**
 * @brief De-initialize hardware of ICU Modules
 *
 * @param pHwConfig -Pointer to module configuration structure
 */
ICU_TEXT_SECTION void Icu_HW_ModulesDeInit(const Icu_HwConfigType *pHwConfig);
#endif
/**
 * @brief  Initialize hardware of a ICU channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_ChannelInit(Icu_HwType eHwType, uint32 u32ChannelOfHw);

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set hardware to normal mode for signal measurement channels
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eProperty         -The type of signal measurement
 * @param eActivateEdge     -The activation mode
 * @param eMode             -The method of signal measurement
 */
ICU_TEXT_SECTION void Icu_HW_SetNormalModeExt(Icu_HwType                        eHwType,
                                              uint32                            u32ChannelOfHw,
                                              Icu_SignalMeasurementPropertyType eProperty,
                                              Icu_ActivationType                eActivateEdge,
                                              Icu_SignalMeasurementModeType     eMode);
/**
 * @brief Set hardware to sleep mode
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_SetSleepMode(Icu_HwType eHwType, uint32 u32ChannelOfHw);
/**
 * @brief Set hardware to normal mode
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 */
ICU_TEXT_SECTION void Icu_HW_SetNormalMode(Icu_HwType         eHwType,
                                           uint32             u32ChannelOfHw,
                                           Icu_ActivationType eActivationEdge);
#endif /* ICU_SET_MODE_API */
/**
 * @brief Set activation for a hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 */
ICU_TEXT_SECTION void Icu_HW_SetActivationCondition(Icu_HwType         eHwType,
                                                    uint32             u32ChannelOfHw,
                                                    Icu_ActivationType eActivationEdge);
#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 * @return                  state of the channel
 * @retval                  ICU_ACTIVE  An active edge has been detected
 * @retval                  ICU_IDLE    No active edge has been detected
 */
ICU_TEXT_SECTION Icu_InputStateType Icu_HW_GetInputState(Icu_HwType         eHwType,
                                                         uint32             u32ChannelOfHw,
                                                         Icu_ActivationType eActivationEdge);

/**
 * @brief This function returns the state of the hardware channel directly
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @return                  -state of the channel
 */
ICU_TEXT_SECTION Icu_InputStateType Icu_HW_GetInputHwState(Icu_HwType eHwType, uint32 u32ChannelOfHw);
#endif
#if (ICU_TIMESTAMP_API == STD_ON)
/**
 * @brief Start time stamp of a hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param bDmaEn            -Enable Dma channel
 * @param eActivationEdge   -Activation edge of the channel
 */
ICU_TEXT_SECTION void Icu_HW_StartTimestamp(Icu_HwType eHwType,
                                            uint32     u32ChannelOfHw,
#if (ICU_TIMESTAMP_DMA == STD_ON)
                                            boolean bDmaEn,
#endif
                                            Icu_ActivationType eActivationEdge);
/**
 * @brief Stop time stamp of a hardware channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_StopTimeStamp(Icu_HwType eHwType, uint32 u32ChannelOfHw);
#endif

#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Get edge numbers of a channel from hardware
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param pEdgeNum          -Point to store the edge numbers
 * @retval                  TRUE    The channel support get edge numbers from hardware
 * @retval                  FALSE   The channel do not support get edge numbers from hardware
 */
ICU_TEXT_SECTION boolean Icu_HW_GetEdgeNumbers(Icu_HwType          eHwType,
                                               uint32              u32ChannelOfHw,
                                               Icu_EdgeNumberType *pEdgeNum);
/**
 * @brief Reset hardware edge numbers of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_ResetEdgeNumbers(Icu_HwType eHwType, uint32 u32ChannelOfHw);
/**
 * @brief Enable hardware edge numbers of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 */
ICU_TEXT_SECTION void Icu_HW_EnableEdgeCount(Icu_HwType         eHwType,
                                             uint32             u32ChannelOfHw,
                                             Icu_ActivationType eActivationEdge);
/**
 * @brief Disable hardware edge numbers of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_DisableEdgeCount(Icu_HwType eHwType, uint32 u32ChannelOfHw);
#endif /* ICU_EDGE_COUNT_API == STD_ON */

#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief Enable hardware edge detection of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eActivationEdge   -Activation edge of the channel
 */
ICU_TEXT_SECTION void Icu_HW_EnableEdgeDetection(Icu_HwType         eHwType,
                                                 uint32             u32ChannelOfHw,
                                                 Icu_ActivationType eActivationEdge);
/**
 * @brief Disable hardware edge detection of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_DisableEdgeDetection(Icu_HwType eHwType, uint32 u32ChannelOfHw);
#endif /* ICU_EDGE_DETECT_API */

#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Start hardware signal measurement of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param eProperty            -Measurement property
 * @param eActivateEdge     -Channel activate edge
 * @param eMode              -Channel Measurement mode
 */
ICU_TEXT_SECTION void Icu_HW_StartSignalMeasurement(Icu_HwType eHwType,
                                                    uint32     u32ChannelOfHw,
                                                    Icu_SignalMeasurementPropertyType eProperty,
                                                    Icu_ActivationType                eActivateEdge,
                                                    Icu_SignalMeasurementModeType     eMode);
/**
 * @brief Stop hardware signal measurement of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 */
ICU_TEXT_SECTION void Icu_HW_StopSignalMeasurement(
    Icu_HwType eHwType,
    uint32     u32ChannelOfHw); /**
                             * @brief Get overflow value of the channel
                             *
                             * @param eHwType           -Module type of the channel
                             * @retval                  overflow count
                             */
ICU_TEXT_SECTION Icu_ValueType Icu_HW_GetOverflowValue(Icu_HwType eHwType);

#endif /* ICU_SIGNAL_MEASUREMENT_API */

#if (ICU_SIGNAL_MEASUREMENT_API == STD_ON) || (ICU_GET_DUTY_CYCLE_VALUES_API == STD_ON)
ICU_TEXT_SECTION Icu_ValueType Icu_HW_GetHwMeasurementTimeValue(Icu_HwType eHwType,
                                                                uint32     u32ChannelOfHw);
ICU_TEXT_SECTION Icu_ValueType Icu_HW_GetHwMeasurementPeriodValue(Icu_HwType eHwType,
                                                                  uint32     u32ChannelOfHw);
#endif /* ICU_SIGNAL_MEASUREMENT_API  || ICU_GET_DUTY_CYCLE_VALUES_API */

#if (ICU_GET_INPUT_LEVEL_API == STD_ON)
/**
 * @brief Get hardware input level of the channel
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * @param pLevel            -Point to store the input level
 * @retval                  TRUE    The channel support get input level from hardware
 * @retval                  FALSE   The channel do not support get input level from hardware
 */
ICU_TEXT_SECTION boolean Icu_HW_GetInputLevel(Icu_HwType          eHwType,
                                              uint32              u32ChannelOfHw,
                                              Icu_InputLevelType *pLevel);
#endif

#if (ICU_GTB_SUPPORT == STD_ON)
/**
 * @brief Start the FTU GTB Function
 *
 * @param u32Group     -- FTU GTB Group.
 * */
ICU_TEXT_SECTION void Icu_HW_StartGTB(const uint32 u32Group);
/**
 * @brief Stop the FTU GTB Function
 *
 * @param u32Group     -- FTU GTB Group.
 * */
ICU_TEXT_SECTION void Icu_HW_StopGTB(const uint32 u32Group);
#endif

#if (ICU_TIMESTAMP_DMA == STD_ON)
/*
 * @brief Get the addr of the time stamp data source;
 *
 * @param eHwType           -Module type of the channel
 * @param u32ChannelOfHw    -Channel index of module
 * */
ICU_TEXT_SECTION uint32 Icu_HW_GetSrcAddr(Icu_HwType eHwType, uint32 u32ChannelOfHw);
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif
/** @} */
