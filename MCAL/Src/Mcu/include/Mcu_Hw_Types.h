/**
 *   @file    Mcu_Hw_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mcu - hardware abstraction layer driver type.
 *   @details This is the hardware abstraction layer driver type for Mcu.
 *
 *   @addtogroup MCU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
#ifndef MCU_HW_TYPES_H
#define MCU_HW_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES

 1) needed interfaces from external units
 2) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcu_Scg.h"
#include "Mcu_Pmc.h"
#include "Mcu_Csc.h"
#include "Mcu_Scm.h"
#include "Mcu_Pcc.h"
#include "Mcu_Rgm.h"
#include "Mcu_Smc.h"
#include "Mcu_Cmu.h"
#include "Mcu_Wku.h"
#include "Mcu_CM7_RegOps.h"

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 *  @brief       This enumerated type contains the PLL0's possible states.
 *  @details     This structure is used to represent the states of PLL0.
 *  @note        [SWS_MCU_00231/00250]
 */
typedef enum
{
    MCU_PLL_LOCKED           = 0x01U, /** PLL is locked. */
    MCU_PLL_UNLOCKED         = 0x02U, /** PLL is unlocked. */
    MCU_PLL_STATUS_UNDEFINED = 0xFFU  /** PLL Status is unknown. */
} Mcu_PllStatusType;

/*==================================================================================================
==================================================================================================*/

/**
 * @brief    Power Modes encoding.
 *  @details  Supported power modes for SMC Module.
 */
#define Mcu_PowerModeType SMC_ModeType
/*==================================================================================================
==================================================================================================*/

/** @brief Reset control Module data configuration type   */
typedef struct
{
    uint8              u8BusClockFilterWidth;
    boolean            bResetfiltAonLp;
    RGM_FilterClkSrc   eFliterClkSrc;
    uint16             u16SysResetInterruptCfg;
    uint16             au16CoreResetInterruptCfg[4U];
    RGM_ResetDelayType eDelay;
    uint8              u8Core1TrigSysRstCfg;
    uint8              u8Core2TrigSysRstCfg;
    uint8              u8Core3TrigSysRstCfg;
} Mcu_RGM_ConfigType;

/** @brief AUTOSAR module configuration structure, include RCM, PMC and WKU modules  */
typedef struct
{
    /**<   Configuration for RGM (Reset Control Module)  . */
    const Mcu_RGM_ConfigType *const RGM_pResetConfig;
    /**<   Configuration for PMC (Power Management Unit)  , part of PCU. */
    const PMC_InterruptType *const PMC_pConfig;
    /**<   Configuration for WKU (Wake-up Unit). */
    const WkuConfigType *const WKU_pConfig;
} Mcu_ModuleConfigType;

/*==================================================================================================
==================================================================================================*/
/** @brief PCC configuration group, combine all applied modules PCC setting  */
typedef struct
{
    /* PCC configuration */
    uint32                       u32PccConfigNo;
    const PCC_CLKCtrlType *const pPccConfig;
} PCC_GrpConfigType;

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/** @brief clock part of CSC0 module configuration  */
typedef struct
{
    const SMC_ClkoutType      SMC_tClkOutConfig;
    const SMC_AONCLKSELType   SMC_tAonClkConfig;
    const SMC_LPWakeUpPadType SMC_tLPWakeUpPadConfig[LP_WAKEUP_PAD_NUM];
    const SMC_MixedUsedType   SMC_tMixedUsedConfig;
} CLOCK_SMC_ConfigType;
#else
/** @brief clock part of CSC0 module configuration  */
typedef struct
{
    const CSC0_ClkoutType   CSC0_tClkOutConfig;
    const CSC0_AONCLKSRType CSC0_tAonClkConfig;
#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
    const CSC0_LPWakeUpPadType CSC0_tLPWakeUpPadConfig[LP_WAKEUP_PAD_NUM];
#endif /* (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)  */
} CLOCK_CSC0_ConfigType;
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */

/** @brief clock part of SCM module configuration  */
typedef struct
{
#if (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON)
    boolean bHsAdcBiasForceEn;
#endif /* (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON) */
    const SCM_TraceClkDivType SCM_tTraceClkConfig;
#if (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)
    const SCM_SubSysClkType SCM_tSubSysClkConfig;
#else
    const SCM_HsmClkSelType SCM_tHsmClkConfig;
#endif /*(MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)*/
} CLOCK_SCM_ConfigType;

/** @brief data structure to combine all CMU modules with different clock monitor target source  */
typedef struct
{
    CMU_CfgType CMU0_Config;
    CMU_CfgType CMU1_Config;
    CMU_CfgType CMU2_Config;
    CMU_CfgType CMU3_Config;
    CMU_CfgType CMU4_Config;
} CLOCK_CMU_ConfigType;

/** @brief MCU clock configuration structure.include SCG, PCC, clock part of SMISC and CMU  */
typedef struct
{
    const SCG_ClockType *const     SCG_pClockConfig;
    const PCC_GrpConfigType *const PCC_GRP_pConfig;
#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
    const CLOCK_SMC_ConfigType *const CLOCK_SMC_pConfig;
#else
    const CLOCK_CSC0_ConfigType *const CLOCK_CSC0_pConfig;
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)   */

    const CLOCK_SCM_ConfigType *const CLOCK_SCM_pConfig;
    const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config;
} Mcu_ClockConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* MCU_HW_TYPES_H */

/** @} */
