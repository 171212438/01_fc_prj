/**
*   @file    Mcu_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Post Build configuration Mcu source file.
*   @details Post Build configuration file for Mcu driver.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Mcu.h"
#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif 

/*==================================================================================================
                                    GLOBAL VARIABLES DECLARATION
==================================================================================================*/


/*==================================================================================================
                                        LOCAL VARIABLES
==================================================================================================*/
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

/** @brief MCU_Demo_FOSC24M SCG configuration. */
MCU_DATA_SECTION static const SCG_ClockType SCG_ClockConfig0 =
{
    /* SIRC Configuration */
    {FALSE, FALSE, FALSE, FALSE, SCG_ASYNCCLOCKDIV_BY1, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY4, 0U, 0U,NULL_PTR}, 
    /* SIRC32k Configuration */
    {TRUE}, 
    /* FIRC Configuration */
    {TRUE, FALSE, FALSE, FALSE, SCG_ASYNCCLOCKDIV_BY1, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY4, 0U, 0U,NULL_PTR}, 
    /* FOSC Configuration */
    {FALSE, FALSE, FALSE, TRUE, FALSE, SCG_ASYNCCLOCKDIV_BY1, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY4, 50U,24000000U,NULL_PTR}, 
    /* PLL0 Configuration */
    {TRUE, FALSE, FALSE, FALSE, FALSE, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY4, 11U, 239U, SCG_PLLSOURCE_FOSC,SCG_PLLPSTDIV_BY2,NULL_PTR}, 
    /* PLL1 Configuration */
    {TRUE, FALSE, FALSE, FALSE, FALSE, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY2, SCG_ASYNCCLOCKDIV_BY4, 11U, 299U, SCG_PLLSOURCE_FOSC,SCG_PLLPSTDIV_BY2,NULL_PTR}, 
    /* SOSC Configuration */
    {FALSE, FALSE, FALSE, FALSE, FALSE, 64U,32768U,NULL_PTR}, 
    /* System clock Configuration */
    {TRUE, SCG_CLOCK_SRC_PLL0, SCG_CLOCK_DIV_BY4, SCG_CLOCK_DIV_BY2, SCG_CLOCK_DIV_BY1, SCG_CLOCKOUT_SRC_OFF, SCG_NVMCLK_SRC_SIRC,SCG_CMU4CLK_SRC_SIRC}
};


    /** @brief MCU_Demo_FOSC24M CSC0 configuration. */
MCU_DATA_SECTION static const CLOCK_CSC0_ConfigType CLOCK_CSC0_Config0 =
{
    /* CSC0 clock out Configuration */
    {FALSE, CSC0_CLKOUT_SCG_CLKOUT, CSC0_CLKOUT_DIV_BY1}, 
    /* AON RTC AON32K Configuration */
    {CSC0_AON32K_SIRCDIV_32K_CLK, CSC0_RTC_SIRCDIV_32K_CLK, CSC0_AON_SIRCDIV_128K_CLK}, 
    /* Wake up pad Configuration */
    {
        {0U,CSC0_LPWAKEUP_PAD_DISABLE, CSC0_LPWAKEUP_PADPOL_KEEP }, 
        {1U,CSC0_LPWAKEUP_PAD_DISABLE, CSC0_LPWAKEUP_PADPOL_KEEP }, 
        {2U,CSC0_LPWAKEUP_PAD_DISABLE, CSC0_LPWAKEUP_PADPOL_KEEP }, 
        {3U,CSC0_LPWAKEUP_PAD_DISABLE, CSC0_LPWAKEUP_PADPOL_KEEP }, 
        {4U,CSC0_LPWAKEUP_PAD_DISABLE, CSC0_LPWAKEUP_PADPOL_KEEP } 
    } 
};


/** @brief MCU_Demo_FOSC24M SCM configuration. */
MCU_DATA_SECTION static const CLOCK_SCM_ConfigType CLOCK_SCM_Config0 =
{
    /* Trace Configuration */
    {FALSE, FALSE, FALSE, SCM_TRACE_CLOCK_DIV_1, SCM_TRACE_CORE_CLK},
    /* SCM Subsystem clock Configuration */
    {FALSE, TRUE, FALSE }
};

/** @brief MCU_Demo_FOSC24M CMU configuration. */
MCU_DATA_SECTION static const CLOCK_CMU_ConfigType CLOCK_CMU_Config0 =
{
    /* CMU0 Configuration */
    {FALSE, FALSE, FALSE, FALSE, (uint8)0U, (uint8)1U, FALSE, (uint32)475U, (uint32)531U, (uint32)188100U, NULL_PTR}, 
    /* CMU1 Configuration */
    {FALSE, FALSE, FALSE, FALSE, (uint8)0U, (uint8)1U, FALSE, (uint32)1708U, (uint32)1895U, (uint32)900U, NULL_PTR}, 
    /* CMU2 Configuration */
    {FALSE, FALSE, FALSE, FALSE, (uint8)0U, (uint8)1U, FALSE, (uint32)5324U, (uint32)5891U, (uint32)700U, NULL_PTR}, 
    /* CMU3 Configuration */
    {FALSE, FALSE, FALSE, FALSE, (uint8)0U, (uint8)1U, FALSE, (uint32)543U, (uint32)606U, (uint32)4600U, NULL_PTR},
    /* CMU4 Configuration */
    {FALSE, FALSE, FALSE, FALSE, (uint8)0U, (uint8)1U, FALSE, (uint32)1661U, (uint32)1843U, (uint32)700U, NULL_PTR}
};

/** @brief MCU_Demo_FOSC24M PCC register configuration. */
MCU_DATA_SECTION static const PCC_CLKCtrlType PCC_Config0[43U] =
{
    {(uint32)0x20, (uint32)0x800000}, /* DMA0 */
    {(uint32)0x28, (uint32)0x800000}, /* DMA_MUX0 */
    {(uint32)0x4C, (uint32)0x800000}, /* ROMC */
    {(uint32)0x98, (uint32)0x800000}, /* TRGSEL0 */
    {(uint32)0x9C, (uint32)0x800000}, /* TRGSEL1 */
    {(uint32)0xA0, (uint32)0x800000}, /* TRGSEL2 */
    {(uint32)0xA4, (uint32)0x800000}, /* TRGSEL3 */
    {(uint32)0xA8, (uint32)0x800000}, /* CRC0 */
    {(uint32)0xC4, (uint32)0x800000}, /* CMU0 */
    {(uint32)0xC8, (uint32)0x800000}, /* CMU1 */
    {(uint32)0xCC, (uint32)0x800000}, /* CMU2 */
    {(uint32)0xD0, (uint32)0x800000}, /* CMU3 */
    {(uint32)0xD4, (uint32)0x800000}, /* CMU4 */
    {(uint32)0xDC, (uint32)0x800000}, /* PTIMER0 */
    {(uint32)0xE0, (uint32)0x800000}, /* PTIMER1 */
    {(uint32)0xEC, (uint32)0x900000}, /* ADC0 */
    {(uint32)0xF0, (uint32)0x900000}, /* ADC1 */
    {(uint32)0xFC, (uint32)0x800000}, /* WKU */
    {(uint32)0x10C, (uint32)0x900000}, /* TMU */
    {(uint32)0x150, (uint32)0xe00000}, /* SENT0 */
    {(uint32)0x170, (uint32)0x900000}, /* FTU0 */
    {(uint32)0x17C, (uint32)0x900000}, /* FTU3 */
    {(uint32)0x188, (uint32)0x900000}, /* FCSPI0 */
    {(uint32)0x18C, (uint32)0x900000}, /* FCSPI1 */
    {(uint32)0x190, (uint32)0x900000}, /* FCSPI2 */
    {(uint32)0x198, (uint32)0x900000}, /* FCIIC0 */
    {(uint32)0x1A8, (uint32)0x900000}, /* FCUART2 */
    {(uint32)0x1E0, (uint32)0x800000}, /* FREQM */
    {(uint32)0x1FC, (uint32)0x800000}, /* STCU */
    {(uint32)0x200, (uint32)0x900000}, /* FLEXCAN0 */
    {(uint32)0x210, (uint32)0x900000}, /* FLEXCAN1 */
    {(uint32)0x36C, (uint32)0x800000}, /* TRGSEL4 */
    {(uint32)0x370, (uint32)0x800000}, /* TRGSEL5 */
    {(uint32)0x37C, (uint32)0x900000}, /* FCSPI3 */
    {(uint32)0x380, (uint32)0x900000}, /* FCSPI4 */
    {(uint32)0x384, (uint32)0x900000}, /* FCSPI5 */
    {(uint32)0x3FC, (uint32)0x900000}, /* FTU4 */
    {(uint32)0x404, (uint32)0x900000}, /* FTU6 */
    {(uint32)0x408, (uint32)0x900000}, /* FTU7 */
    {(uint32)0x41C, (uint32)0x900000}, /* FCIIC1 */
    {(uint32)0x420, (uint32)0x900000}, /* FCUART4 */
    {(uint32)0x424, (uint32)0x900000}, /* FCUART5 */
    {(uint32)0x450, (uint32)0x900001}, /* MSC0 */
};

/** @brief MCU_Demo_FOSC24M PCC configuration. */
MCU_DATA_SECTION static const PCC_GrpConfigType PCC_GrpConfig0 =
{
    (uint8)43U,          /* Count of PCC peripheral */
    PCC_Config0          /* Register Configuration */
};

/** @brief All clock configuration. */
MCU_DATA_SECTION static const Mcu_ClockConfigType Mcu_ClockConfig[1U] =
{
    /* MCU_Demo_FOSC24M clock configuration. */
    {
        &SCG_ClockConfig0,          /* SCG configurations */
        &PCC_GrpConfig0,          /* PCC configurations */
        &CLOCK_CSC0_Config0,          /* CSC0 configurations */
        &CLOCK_SCM_Config0,          /* SCM configurations */
        &CLOCK_CMU_Config0          /* CMU configurations */
    }
};

/** @brief RGM Module configuration */
MCU_DATA_SECTION static const Mcu_RGM_ConfigType RGM_ResetConfig =
{
    /* Reset Pin Filter Bus Clock Width (RSTFLT_BUSW) */
    (uint8)16U,

    /* Reset Pin Filter Using AON32K clock in low power mode (RSTFLT_AON_LP) */
    (boolean)FALSE,

    /* Reset Pin Filter ENABLE Using AON32K clock or Bus clock (RSTFLT_AON/RSTFLT_BUS) */
    RGM_RESET_FILTER_DISABLE,

    /* System Reset Interrupt Enable Register (SRIE_INT) */
    0U,

    /* System Core Reset Interrupt Enable Register (Cx_CFG) */
    {0x0000U,0x0000U,0x0000U,0x0000U},

    /* System Reset Interrupt Enable Register (SRIE_DELAY) */
    RGM_8_CLOCK_CYCLES,
    /* Core 1 Reset Trigger System Reset Register (RGM_C1_CFG) */
    0U,
    /* Core 2 Reset Trigger System Reset Register (RGM_C2_CFG) */
    0U,
    /* Core 3 Reset Trigger System Reset Register (RGM_C3_CFG) */
    0U
};

/** @brief PMC Module configurations */
MCU_DATA_SECTION static const PMC_InterruptType PMC_Config =
{
    FALSE,
    FALSE,
    FALSE
};

/** @brief WKU Module configurations */
MCU_DATA_SECTION static const WkuConfigType WKU_Config =
{
    /* Wakeup delay enable/disable */
    FALSE,
    /* Wakeup delay time */
    1U,
    /* Wakeup source */
    WKU_INPUT_GPIOA |
    0U
};

/** @brief Definition of MCU mode sections in the configuration structure. */
MCU_DATA_SECTION static const Mcu_ModeConfigType Mcu_Mode_Config[7U] =
{
    {
        (uint8)0U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_RUN          /* Power Mode */
    },
    {
        (uint8)1U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_WAIT          /* Power Mode */
    },
    {
        (uint8)2U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_STOP          /* Power Mode */
    },
    {
        (uint8)3U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_STANDBY_0          /* Power Mode */
    },
    {
        (uint8)4U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_STANDBY_1          /* Power Mode */
    },
    {
        (uint8)5U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_STANDBY_2          /* Power Mode */
    },
    {
        (uint8)6U,          /* The ID for Power Mode configuration. */
        (Mcu_PowerModeType)SMC_MODE_STANDBY_3          /* Power Mode */
    }
};


/** @brief System Module configurations */
MCU_DATA_SECTION static const Mcu_ModuleConfigType Mcu_ModuleConfig =
{
    /* Configuration for RCM Reset. */
    &RGM_ResetConfig,

    /* Configuration for PMC (Power Management Control). */
    &PMC_Config,

    /* Configuration for WKU (Wake-up Unit). */
    &WKU_Config
};


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
/* [FUNC_MCU_0032] */
/** @brief MCU configurations */
MCU_DATA_SECTION const Mcu_ConfigType Mcu_Config =
{
#if (MCU_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /* Pointer to DEM error reporting configurations. */
    &Mcu_Dem_Config,
#endif

#if (MCU_INIT_CLOCK == STD_ON)
    /* Count of Clock configurations */
    1U,
    /* Pointer to Clock configurations */
    Mcu_ClockConfig,
#endif

    /* Pointer to Low Level Mcu driver configuration */
    &Mcu_ModuleConfig,

    /* Number of RAM Sections configurations */
    (Mcu_RamSectionType)0U,

#ifndef MCU_MAX_NORAMCONFIGS
    /* Pointer to RAM Section configurations. */
    NULL_PTR,
#endif

    /* Number of Power Modes configurations */
    (Mcu_ModeType)7U,

    /* Pointer to Power Mode configurations */
    Mcu_Mode_Config,

};


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

