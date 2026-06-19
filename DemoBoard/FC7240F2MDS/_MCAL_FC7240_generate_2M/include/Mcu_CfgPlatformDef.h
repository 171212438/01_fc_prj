/**
 *   @file    Mcu_CfgPlatformDef.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - Module configuration interface for Mcu driver.
 *   @details Contains the module configuration interface for Mcu driver.
 *
 *   @addtogroup MCU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/


#ifndef MCU_CFG_PLATFORM_DEF_H
#define MCU_CFG_PLATFORM_DEF_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* [FUNC_MCU_0020] */
/********************** SCG Related Defines **********************/
/**
 * @brief    SCG system clock sirc Support
 */
#define MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT (STD_ON)

/**
 * @brief    SCG sleep wdg register Support
 */
#define MCU_CFG_SCG_SLEEP_WDG_SUPPORT (STD_ON)

/**
 * @brief    SCG sirc autotrim control Support
 */
#define MCU_CFG_SCG_SIRC_AUTOTRIM_CTRL_SUPPORT (STD_ON)

/**
 * @brief    SCG firc autotrim control Support
 */
#define MCU_CFG_SCG_FIRC_AUTOTRIM_CTRL_SUPPORT (STD_ON)

/**
 * @brief    SCG pll clock1 Support
 */
#define MCU_CFG_SCG_PLL_CLK1_SUPPORT (STD_OFF)

/**
 * @brief    SCG pll loss lock Support
 */
#define MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT (STD_ON)

/**
 * @brief    SCG pll0 clock 2 Support
 */
#define MCU_CFG_SCG_PLL0_CLK2_SUPPORT (STD_OFF)

/**
 * @brief    SCG pll1 Support
 */
#define MCU_CFG_SCG_PLL1_SUPPORT (STD_ON)

/********************** SMC Related Defines **********************/
/**
 * @brief    SMC CoreLP Support
 */
#define MCU_CFG_SMC_CORELP_SUPPORT (STD_OFF)

/**
 * @brief    SMC Init API Support
 */
#define MCU_CFG_SMC_INIT_API_SUPPORT (STD_OFF)

/**
 * @brief    SMC Power Good Support
 */
#define MCU_CFG_SMC_LP_GOOD_SUPPORT (STD_OFF)

/**
 * @brief    SMC CMP0 LpWakeup Support
 */
#define MCU_CFG_SMC_CMP0_LPWAKEUP_SUPPORT (STD_OFF)

/**
 * @brief    SMC ADC2 LpWakeup Support
 */
#define MCU_CFG_SMC_ADC2_LPWAKEUP_SUPPORT (STD_OFF)

/**
 * @brief    SMC SRAM2 Retention Mode Support
 */
#define MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT (STD_OFF)

/********************** CMU Related Defines **********************/
/**
 * @brief    CMU LP Support
 */
#define MCU_CFG_CMU_LP_SUPPORT (STD_ON)


/********************** CSC0 Related Defines **********************/
/**
 * @brief    CSC0 wake up pad Support
 */
#define MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT (STD_ON)

/**
 * @brief    CSC0 Init API Support
 */
#define MCU_CFG_CSC0_INIT_API_SUPPORT (STD_ON)

/**
 * @brief    CSC0 register 7300 Support
 */
#define MCU_CFG_CSC0_REG_7300_SUPPORT (STD_OFF)

/**
 * @brief    CSC0 register 7300GT Support
 */
#define MCU_CFG_CSC0_REG_7300GT_SUPPORT (STD_OFF)

/**
 * @brief    CSC0 register 7240 Support
 */
#define MCU_CFG_CSC0_REG_7240_SUPPORT (STD_ON)

/********************** SCM Related Defines **********************/
/**
 * @brief    SCM FC7300GT Support
 */
#define MCU_CFG_SCM_7300GT_SUPPORT (STD_OFF)

/**
 * @brief    SCM FC73004MDDT1C/FC73004MDST1C Support
 */
#define MCU_CFG_SCM_7300GT_LITE_SUPPORT (STD_OFF)

/**
 * @brief    SCM FC7300 Support
 */
#define MCU_CFG_SCM_7300_SUPPORT (STD_OFF)

/**
 * @brief    SCM subsystem Support
 */
#define MCU_CFG_SCM_SUBSYSTEM_SUPPORT (STD_ON)

/**
 * @brief    SCM HSADC Bias Force enable Support
 */
#define MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT (STD_OFF)

/********************** PCC Related Defines **********************/
/**
 * @brief    PCC DWP Support
 */
#define MCU_CFG_PCC_DWP_SUPPORT (STD_OFF)


/********************** RGM Related Defines **********************/
/**
 * @brief    RGM MultiCore Support
 */
#define MCU_CFG_RGM_MULTICORE_SUPPORT (STD_OFF)

/**
 * @brief    RGM Core3 Support
 */
#define MCU_CFG_RGM_C3_SUPPORT (STD_OFF)

/**
 * @brief    RGM pin and watchdog reset interrupt Support
 */
#define MCU_CFG_RGM_PIN_WDG1_RESET_INT_SUPPORT (STD_ON)

/**
 * @brief    RGM pin reset interrupt Support
 */
#define MCU_CFG_RGM_PIN_RESET_INT_SUPPORT (STD_OFF)

/********************** WKU Related Defines **********************/
/**
 * @brief    WKU wake up delay Support
 */
#define MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT (STD_ON)

/**
 * @brief    WKU register 7300 Support
 */
#define MCU_CFG_WKU_REG_7300_SUPPORT (STD_OFF)

/**
 * @brief    WKU register 7300GT Support
 */
#define MCU_CFG_WKU_REG_7300GT_SUPPORT (STD_OFF)

/**
 * @brief    WKU register 7300GT Lite Support
 */
#define MCU_CFG_WKU_REG_7300GT_LITE_SUPPORT (STD_OFF)

/**
 * @brief    WKU register 7240 Support
 */
#define MCU_CFG_WKU_REG_7240_SUPPORT (STD_ON)



/********************** PMC Related Defines **********************/
/**
 * @brief    PMC register 7300 Support
 */
#define MCU_CFG_PMC_REG_7300_SUPPORT (STD_OFF)

/**
 * @brief    PMC register 7300GT Support
 */
#define MCU_CFG_PMC_REG_7300GT_SUPPORT (STD_OFF)

/**
 * @brief    PMC register 7300GT Lite Support
 */
#define MCU_CFG_PMC_REG_7300GT_LITE_SUPPORT (STD_OFF)

/**
 * @brief    PMC register 7240 Support
 */
#define MCU_CFG_PMC_REG_7240_SUPPORT (STD_ON)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* MCU_CFG_PLATFORM_DEF_H */

/** @} */
