#ifndef ICU_TPU_TYPE_H
#define ICU_TPU_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

typedef enum
{
    ICU_TPU = 0,
    ICU_TPU_COUNT,
} Icu_TpuInstanceType;

typedef enum
{
    ICU_TPU_CLK_TCRCLK         = 0u,
    ICU_TPU_CLK_UP_DOWN_MODE   = 3u,
    ICU_TPU_CLK_BUS_CLOCK_DIV2 = 4u,
    ICU_TPU_CLK_BUS_CLOCK      = 5u,
} Icu_TpuClockSourceType;

typedef enum
{
    ICU_TPU_TCRCLK_FITLER_MODE_TWO_SAMPLE = 0u,
    ICU_TPU_TCRCLK_FITLER_MODE_INTEGRATOR = 2u,
} Icu_TpuTCRCLKFilterModeType;

typedef enum
{
    ICU_TPU_TCRCLK_FITLER_CLOCK_BUS_CLOCK_DIV2 = 0u,
    ICU_TPU_TCRCLK_FITLER_CLOCK_CHANNELS_CLOCK = 1u,
} Icu_TpuTCRCLKFilterClockType;

typedef enum
{
    ICU_TPU_FILTER_TWO_SAMPLE   = 0U,
    ICU_TPU_FILTER_BYPASS       = 1U,
    ICU_TPU_FILTER_THREE_SAMPLE = 2U,
    ICU_TPU_FILTER_CONTINUOUS   = 3U,
} Icu_TpuFilterModeType;

typedef enum
{
    ICU_TPU_PRESCALER_DIV_1   = 0u,
    ICU_TPU_PRESCALER_DIV_2   = 1u,
    ICU_TPU_PRESCALER_DIV_4   = 2u,
    ICU_TPU_PRESCALER_DIV_8   = 3u,
    ICU_TPU_PRESCALER_DIV_16  = 4u,
    ICU_TPU_PRESCALER_DIV_32  = 5u,
    ICU_TPU_PRESCALER_DIV_64  = 6u,
    ICU_TPU_PRESCALER_DIV_128 = 7u,
    ICU_TPU_PRESCALER_DIV_256 = 8u,
} Icu_TpuPrescalerType;

typedef enum
{
    ICU_TPU_DBG_CHANNEL_NORMAL_CNT_RUN   = 0u,
    ICU_TPU_DBG_CHANNEL_NORMAL_CNT_STOP  = 1u,
    ICU_TPU_DBG_CHANNEL_DISABLE_CNT_RUN  = 2u,
    ICU_TPU_DBG_CHANNEL_DISABLE_CNT_STOP = 3u,
} Icu_TpuChannelDebugModeType;

typedef enum
{
    ICU_TPU_CH_FILTER_OPEN   = 0u,
    ICU_TPU_CH_FILTER_BYPASS = 1u
} Icu_TpuChannelFilterType;

typedef enum
{
    ICU_TPU_GTB_DISABLE,
    ICU_TPU_GTB_ENABLE,
} Icu_TpuGtbEnableType;

typedef struct
{
    const uint32                   u32HwChannel;
    const Icu_TpuChannelFilterType eFilter;
} Icu_TpuChannelConfigType;

typedef struct
{
    const Icu_TpuInstanceType          eTpuInstance;
    const Icu_TpuClockSourceType       eClockSource;
    const uint16                       u16Prescaler;
    const Icu_TpuFilterModeType        eFilterMode;
    const Icu_TpuPrescalerType         eFilterPrescaler;
    const Icu_TpuChannelDebugModeType  eDebugMode;
    const Icu_TpuTCRCLKFilterModeType  eTcrClkFilterMode;
    const Icu_TpuTCRCLKFilterClockType eTcrClkFilterClock;
    const Icu_TpuGtbEnableType         eGtbEnable;
    const uint32                       u32ChannelCount;
    const Icu_TpuChannelConfigType (*pTpuChannelsConfig)[];
    const uint8 u8InstancePartition;
} Icu_TpuModuleConfigType;

typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_TpuModuleConfigType (*pTpuModuleConfig)[];
} Icu_TpuHwConfigType;

#ifdef __cplusplus
}
#endif
#endif /*ICU_TPU_TYPE_H*/
