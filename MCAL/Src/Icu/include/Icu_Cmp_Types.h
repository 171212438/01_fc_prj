
/**
*   @file    Icu_Cmp_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - cmp driver header file.
*   @details cmp driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : cmp
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

#ifndef ICU_CMP_TYPE_H
#define ICU_CMP_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/

/*===============================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
===============================================================================================*/
/**
 * @brief Cmp Instance
 *
 */
typedef enum
{
    ICU_CMP0 = 0U, /*!< CMP instance 0 is selected */
    ICU_CMP1 = 1U, /*!< CMP instance 1 is selected */
    ICU_CMP2 = 2U, /*!< CMP instance 2 is selected */
} Icu_CmpInstanceType;

/**
 * @brief The mode of the CMP instance
 *
 */
typedef enum
{
    ICU_CMP_MOD_DISABLE    = 0U,              /*!< CMP function mode is disable */
    ICU_CMP_MOD_CONTINUOUS = 1U,              /*!< CMP function mode is continuous */
    ICU_CMP_MOD_SAMPLE_NONFILTER_EXTCLK = 2U, /*!< CMP function mode is sampled,non-filtered mode 1*/
    ICU_CMP_MOD_SAMPLE_NONFILTER_INTCLK = 3U, /*!< CMP function mode is sampled,non-filtered mode 2*/
    ICU_CMP_MOD_SAMPLE_FILTER_EXTCLK = 4U,    /*!< CMP function mode is sampled,filtered mode 1*/
    ICU_CMP_MOD_SAMPLE_FILTER_INTCLK = 5U,    /*!< CMP function mode is sampled,filtered mode 2*/
    ICU_CMP_MOD_WINDOW               = 6U,    /*!< CMP function mode is windowed mode */
    ICU_CMP_MOD_WINDOW_RESAMPLE      = 7U,    /*!< CMP function mode is windowed,re-sampled mode */
    ICU_CMP_MOD_WINDOW_FILTER        = 8U,    /*!< CMP function mode is windowed,filtered mode */
} Icu_CmpModSelType;

/**
 * @brief The instance index of the CMP DAC enable select
 */
typedef enum
{
    ICU_CMP_DACENABLE_DCR  = 0U, /*!< CMP Dac is enabled by DCR[DAC_EN] */
    ICU_CMP_DACENABLE_CCR0 = 1U, /*!< CMP Dac is enabled by CCR0[EN] */
} Icu_CmpDacEnableSrcType;

/**
 * @brief The instance index of the CMP output invert
 */
typedef enum
{
    ICU_CMPOUT_NOINVERT = 0U, /*!< CMP output do not Invert*/
    ICU_CMPOUT_INVERT   = 1U, /*!< CMP output  Invert */
} Icu_CmpInvertType;

/**
 * @brief The instance index of the CMP output select
 */
typedef enum
{
    ICU_CMP_FILTEROUT = 0U, /*!< CMP filter(CMPOUT_FILTER) output  */
    ICU_CMP_WINOUT    = 1U, /*!< CMP Unfilter(CMPOUT_WIN) output  */
} Icu_CmpOutSelectType;

/**
 * @brief The CMP window level (CMPOUT_WIN) when close the window,just for Window mode.
 */
typedef enum
{
    ICU_CMP_HOLD    = 0U, /*!<  CMPOUT_WIN holds the last sample value when window close  */
    ICU_CMP_USERDEF = 1U, /*!<  User define CMPOUT_WIN  when window close  */
} Icu_CmpOutWinLevelType;

/**
 * @brief  The CMP window level (CMPOUT_WIN)  defined by the user.
 */
typedef enum
{
    ICU_CMP_OUTWIN0 = 0U, /*!< CMP window output is 0  */
    ICU_CMP_OUTWIN1 = 1U, /*!< CMP window output is 1  */
} Icu_CmpOutWinUserDefType;

/**
 * @brief  Whether invert the  WINDOW/SAMPLE signal.
 *
 */
typedef enum
{
    ICU_CMP_WINNOINV = 0U, /*!< WINDOW/SAMPLE signal is not inverted.  */
    ICU_CMP_WININV   = 1U, /*!< WINDOW/SAMPLE signal is  inverted.  */
} Icu_CmpWinInvType;

/**
 * @brief  User define the CMPO event to close the window
 */
typedef enum
{
    ICU_CMP_WIN_NOCLOSED = 0U, /*!<  WINDOW signal can not be closed by CMPO event when window mode */
    ICU_CMP_WIN_CLOSED = 1U,   /*!<  WINDOW signal can  be closed by CMPO event when window mode */

} Icu_CmpWinCloseType;

/**
 * @brief The instance index of the CMP Event caused window close
 */
typedef enum
{
    ICU_CMP_RISINGEDGE  = 0U, /*!< CMP output event RisingEdge causes window close  */
    ICU_CMP_FALLINGEDGE = 1U, /*!< CMP output event FallingEdge causes window close  */
    ICU_CMP_BOTHEDGES   = 2U, /*!< CMP output event bothEdges causes window close  */
} ICU_CmpCloseWinEventType;

/**
 * @brief The instance index of the CMP filter count numbers
 */
typedef enum
{
    ICU_CMP_FILTERCNT_0 = 0U, /*!< CMP filter is bypassed  */
    ICU_CMP_FILTERCNT_1 = 1U, /*!< CMP filter is 1 consecutive sample  */
    ICU_CMP_FILTERCNT_2 = 2U, /*!< CMP filter is 2 consecutive sample  */
    ICU_CMP_FILTERCNT_3 = 3U, /*!< CMP filter is 3 consecutive sample  */
    ICU_CMP_FILTERCNT_4 = 4U, /*!< CMP filter is 4 consecutive sample  */
} Icu_CmpFilterCntType;

/**
 * @brief The instance index of the CMP hysteresis control
 */
typedef enum
{
    ICU_CMP_HYSTCTRL_0 = 0U, /*!< CMP  0 hysteresis internal  */
    ICU_CMP_HYSTCTRL_1 = 1U, /*!< CMP  1 hysteresis internal  */
    ICU_CMP_HYSTCTRL_2 = 2U, /*!< CMP  2 hysteresis internal  */
    ICU_CMP_HYSTCTRL_3 = 3U, /*!< CMP  3 hysteresis internal  */
} ICU_CmpHystCtrlType;

/**
 * @brief The source of the CMP input
 */
typedef enum
{
    ICU_CMP_INSRCSEL_DAC = 0U, /*!< CMP input source is DAC */
    ICU_CMP_INSRCSEL_MUX = 1U, /*!< CMP input source is analog 1-8 mux */
} Icu_CmpInSrcSelType;

/**
 * @brief The instance index of the CMP input mux
 */
typedef enum
{
    ICU_CMP_INSEL_MUX_IN0 = 0U, /*!< CMP input mux from IN0(CMP0,CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN1 = 1U, /*!< CMP input mux from IN1(CMP0,CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN2 = 2U, /*!< CMP input mux from IN2(CMP0,CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN3 = 3U, /*!< CMP input mux from IN3(CMP0,CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN4 = 4U, /*!< CMP input mux from IN4(CMP0,CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN5 = 5U, /*!< CMP input mux from IN5(CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN6 = 6U, /*!< CMP input mux from IN6(CMP1,CMP2) */
    ICU_CMP_INSEL_MUX_IN7 = 7U, /*!< CMP input mux from IN7(CMP1,CMP2) */
} Icu_CmpMuxSelType;

/**
 * @brief The instance index of high power mode select
 */
typedef enum
{
    ICU_CMP_LOWSPEEDMOD  = 0U, /*!< CMP low speed mode */
    ICU_CMP_HIGHSPEEDMOD = 1U, /*!< CMP high speed mode */
} ICU_CmpSpeedModSelType;

/**
 * @brief The instance index of DAC high voltage reference select
 */
typedef enum
{
    ICU_CMP_DACVINREF_H0 = 0U, /*!< CMP DAC high voltage input reference vrefh0 */
    ICU_CMP_DACVINREF_H1 = 1U  /*!< CMP DAC high voltage input reference vrefh1 */
} ICU_CmpDacVinRefSelType;

/**
 * @brief Define CMP interrupt mode
 */
typedef enum
{
    ICU_CMP_OUT_NONE         = 0u, /*!< CMP out detect none  */
    ICU_CMP_OUT_RISING_EDGE  = 1U, /*!< CMP out detect rising edge  */
    ICU_CMP_OUT_FALLING_EDGE = 2U, /*!< CMP out detect falling edge  */
    ICU_CMP_OUT_BOTH_EDGE    = 3U, /*!< CMP out detect both edge  */
} ICU_CmpOutPolarityType;

/**
 * @brief  Cmp input Channel Config Type
 *
 */
typedef struct
{
    Icu_CmpInSrcSelType eInChannelSrc;  /*!<The source of the CMP input*/
    Icu_CmpMuxSelType   eChannelMuxSel; /*!<The instance index of the CMP input mux*/

} Icu_CmpInChannelConfigType;

/**
 * @brief Cmp Dac config
 *
 */
typedef struct
{
    Icu_CmpDacEnableSrcType eCmpDacEnSrc;  /*!<The CMP DAC enable register select*/
    uint8                   u8DcrDacEn;    /*!<Enable DAC by DCR  register*/
    ICU_CmpDacVinRefSelType eCmpDacRefSel; /*!<The DAC high voltage reference select*/
    uint8 u8DacData; /*!<The  DACO = (Vin/256) * (DAC_DATA + 1), so the DACO range is from Vin/256 to Vin*/
} Icu_CmpDacConfigType;

/**
 * @brief  Cmpout Pin Config Type
 *
 */
typedef struct
{
    uint8                bCmpOutPinEn;  /*!<The CMPO output enable*/
    Icu_CmpOutSelectType eCmpOutPinSel; /*!<The CMPO output select*/

} Icu_CmpOutPinConfigType;

/**
 * @brief Cmp Window Config Type
 */
typedef struct
{
    Icu_CmpOutWinLevelType   eCmpWinlevel;      /*!<whether user can define Cmp*/
    Icu_CmpOutWinUserDefType eCmpWinUerdef;     /*!<The  CMPOUT_WIN defined by user*/
    Icu_CmpWinCloseType      eCmpWinClose;      /*!<whether the CMPO event can close the Window*/
    ICU_CmpCloseWinEventType eCmpWinCloseEvent; /*!<The CMPO Event caused window close*/
    Icu_CmpWinInvType        eCmpWinInvSample;  /*!<Whether invert the  WINDOW/SAMPLE signal.*/
} Icu_CmpWinConfigtType;

/**
 * @brief Cmp Module Config Type
 *
 */
typedef struct
{
    uint8                            u8CmpStopen;     /*!< CMP enable in Stop mode */
    Icu_CmpInvertType                u8InvCmpOut;     /*!< Inverst the Cmpout */
    ICU_CmpSpeedModSelType           u8HighSpeedmode; /*!< Enable the High speed mode */
    uint8                            u8Filtper;       /*!< the filter of the sample clock*/
    const Icu_CmpInstanceType        eCmpInstance;    /*!< CMP Instance */
    const Icu_CmpModSelType          eCmpMode;        /*!< The mode of the CMP instance*/
    const Icu_CmpFilterCntType       eCmpFilterCnt;   /*!< The filter cnt*/
    const ICU_CmpHystCtrlType        eCmpHystCtrl;    /*!<Comparator hard block hysteresis control*/
    const Icu_CmpInChannelConfigType sCmpInPconfig; /*!< The config of the Positive input signal */
    const Icu_CmpInChannelConfigType sCmpInNconfig; /*!< The config of the negative input signal */
    const Icu_CmpDacConfigType       sCmpDacConfig; /*!< The config of the Cmp Dac */
    const Icu_CmpOutPinConfigType    sCmpOutPinConfig; /*!< The config of the Cmpo Pin */
    const Icu_CmpWinConfigtType      sCmpWinConfig;    /*!< The config of the Cmp Window  */
    const uint8                      u8InstancePartition;
    const uint32                     u32WaitReadyTime; /*!< The ready time of the Cmp */
} Icu_CmpModuleConfigType;

/**
 * @brief Cmp HW Config Type
 *
 */
typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_CmpModuleConfigType (*pCmpModuleConfig)[];
} Icu_CmpHwConfigType;

#ifdef __cplusplus
}
#endif
#endif /* ICU_CMP_TYPE_H */
/** @} */
