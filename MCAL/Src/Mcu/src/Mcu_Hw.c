/**
 *   @file    Mcu_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mcu - hardware abstraction layer driver source file.
 *   @details This is the hardware abstraction layer driver source file for Mcu.
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

#ifdef __cplusplus
extern "C"
{
#endif

#include "Mcu_Hw.h"

#if (MCU_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif /* (MCU_DEV_ERROR_DETECT == STD_ON) */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

/* clang-format off */
/** @brief MCU reset reason map to AUTOSAR reset reason map */
MCU_DATA_SECTION static const uint8 Mcu_u8ResetReason2RegMap[McuConf_McuResetReason2Reg_Max] = McuConf_McuResetReason2Reg_Map;
/* clang-format on */

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#if (MCU_INIT_CLOCK == STD_ON)
/**
 * @brief Configure PCC
 *
 * @param pccGrpConfig PCC configurations
 */
static void MCU_PCC_Init(const PCC_GrpConfigType *const pPccGrpConfig);

/**
 * @brief Configure SCG register
 *
 * @param pScgCfg SCG register configuration
 * @return SCG configuration status
 */
static SCG_StatusType MCU_SCG_Init(const SCG_ClockType *const pScgCfg);

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/**
 * @brief Configure SMC register
 *
 * @param CLOCK_SMC_pConfig CSC0 configuration
 */
static void MCU_SMC_Init(const CLOCK_SMC_ConfigType *const CLOCK_SMC_pConfig);
#else
/**
 * @brief Configure CSC0 register
 *
 * @param CLOCK_CSC0_pConfig CSC0 configuration
 */
static void MCU_CSC0_Init(const CLOCK_CSC0_ConfigType *const CLOCK_CSC0_pConfig);
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)  */

/**
 * @brief Configure SCM register
 *
 * @param CLOCK_SCM_pConfig SCM configuration
 */
static void MCU_SCM_Init(const CLOCK_SCM_ConfigType *const CLOCK_SCM_pConfig);

#if (MCU_ENABLE_CMU == STD_ON)
/**
 * @brief Configure CMU
 *
 * @param CLOCK_CMU_Config CMU configuration pointer
 */
static void MCU_CMU_Init(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config);

/**
 * @brief Enable CMU
 *
 * @param eInstance CMU instance
 * @param CMU_Config CMU configuration pointer
 */
static void MCU_CMU_Enable(const CMU_InstanceType eInstance, const CMU_CfgType *const CMU_Config);

/**
 * @brief Disable CMU
 *
 * @param eInstance CMU instance
 * @param CMU_Config CMU configuration pointer
 */
static void MCU_CMU_Disable(const CMU_InstanceType eInstance, const CMU_CfgType *const CMU_Config);
#endif /* #if (MCU_ENABLE_CMU == STD_ON) */
#endif /* (MCU_INIT_CLOCK == STD_ON) */

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#if (MCU_INIT_CLOCK == STD_ON)
/**
 * @brief Configure PCC
 *
 * @param pccGrpConfig PCC configurations
 */
MCU_TEXT_SECTION static void MCU_PCC_Init(const PCC_GrpConfigType *const pPccGrpConfig)
{
    uint32 u32PccConfigNo;

    for (u32PccConfigNo = 0U; u32PccConfigNo < pPccGrpConfig->u32PccConfigNo; u32PccConfigNo++)
    {
        PCC_SetPcc(&(pPccGrpConfig->pPccConfig)[u32PccConfigNo]);
    }
}

/**
 * @brief Configure SCG register
 *
 * @param pScgCfg SCG register configuration
 * @return SCG configuration status
 */
MCU_TEXT_SECTION static SCG_StatusType MCU_SCG_Init(const SCG_ClockType *const pScgCfg)
{
    SCG_StatusType eScgStatus = SCG_STATUS_SUCCESS;
    boolean        bFircSet   = (boolean)FALSE;

    /* clang-format off */
    SCG_FircType tFircCfg =
    {
        .bEnable   = TRUE,
        .bCm       = (boolean)FALSE,
        .bSten     = (boolean)FALSE,
        .bTrEn     = (boolean)FALSE,
        .u8TrimSrc = 0U,
        .eDivH     = SCG_ASYNCCLOCKDIV_BY1,
        .eDivM     = SCG_ASYNCCLOCKDIV_BY1,
        .eDivL     = SCG_ASYNCCLOCKDIV_BY2
    };
    /* clang-format on */

    /* Switch to credible clock */
    if ((uint8)SCG_CLOCK_SRC_FIRC != (uint8)SCG_GetSysClockSrc())
    {
        if ((boolean)TRUE == pScgCfg->FircConfig.bEnable)
        {
            eScgStatus = SCG_SetFIRC(&(pScgCfg->FircConfig));
            bFircSet   = (boolean)TRUE;
        }
        else
        {
            eScgStatus = SCG_SetFIRC(&tFircCfg);
        }

        if (SCG_STATUS_SUCCESS == eScgStatus)
        {
            eScgStatus = SCG_SwitchClkCtrlSrc(SCG_CLOCK_SRC_FIRC);
        }
    }

    /* Disable PLL0 first */
    if (SCG_STATUS_SUCCESS == eScgStatus)
    {
        eScgStatus = SCG_DisablePLLClock(SCG_PLL0);
    }

#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    /* Disable PLL1 */
    if (SCG_STATUS_SUCCESS == eScgStatus)
    {
        eScgStatus = SCG_DisablePLLClock(SCG_PLL1);
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

    if (SCG_STATUS_SUCCESS == eScgStatus)
    {
        /* Configure SIRC */
        (void)SCG_SetSIRC(&(pScgCfg->SircConfig));

        /* Configure SIRC32K */
        (void)SCG_SetSIRC32K(&(pScgCfg->Sirc32kconfig));

        /* Configure SOSC */
        (void)SCG_SetSOSC(&(pScgCfg->SoscConfig));

        /* Configure FOSC */
        eScgStatus = SCG_SetFOSC(&(pScgCfg->FoscConfig));
    }

    /* Configure PLL0 */
    if (SCG_STATUS_SUCCESS == eScgStatus)
    {
        eScgStatus = SCG_SetPLL0(&(pScgCfg->Pll0Config));
    }

#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    /* Configure PLL1 */
    if (SCG_STATUS_SUCCESS == eScgStatus)
    {
        eScgStatus = SCG_SetPLL1(&(pScgCfg->Pll1Config));
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

    /* Configure system clock */
    if (SCG_STATUS_SUCCESS == eScgStatus)
    {
        eScgStatus = SCG_SetClkCtrl(&(pScgCfg->ClockCtrlConfig));

        /* Configure clock out */
        SCG_SetClkOut(&(pScgCfg->ClockCtrlConfig));
    }

    /* Configure FIRC */
    if ((SCG_STATUS_SUCCESS == eScgStatus) && ((boolean)FALSE == bFircSet))
    {
        eScgStatus = SCG_SetFIRC(&(pScgCfg->FircConfig));
    }

    return eScgStatus;
}

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/**
 * @brief Configure SMC register
 *
 * @param CLOCK_SMC_pConfig CSC0 configuration
 */
MCU_TEXT_SECTION static void MCU_SMC_Init(const CLOCK_SMC_ConfigType *const CLOCK_SMC_pConfig)
{
    /* Configure SMC AONCLK */
    SMC_SetAonClkSrc(&(CLOCK_SMC_pConfig->SMC_tAonClkConfig));

    /* Configure SMC Clock out */
    SMC_SetClockout(&(CLOCK_SMC_pConfig->SMC_tClkOutConfig));

    /* Set LP wakeup pad configuration */
    SMC_SetLPWakeUpPad(CLOCK_SMC_pConfig->SMC_tLPWakeUpPadConfig);

    /* Set mixed used configuration */
    SMC_SetMixedUsedConfiguration(&(CLOCK_SMC_pConfig->SMC_tMixedUsedConfig));
}
#else
/**
 * @brief Configure CSC0 register
 *
 * @param CLOCK_CSC0_pConfig CSC0 configuration
 */
MCU_TEXT_SECTION static void MCU_CSC0_Init(const CLOCK_CSC0_ConfigType *const CLOCK_CSC0_pConfig)
{
    /* Configure CSC0 AONCLK */
    CSC0_SetAonClkSrc(&(CLOCK_CSC0_pConfig->CSC0_tAonClkConfig));

    /* Configure CSC0 Clock out */
    CSC0_SetClockout(&(CLOCK_CSC0_pConfig->CSC0_tClkOutConfig));

    /* Enable HClock */
    CSC0_EnableHClock();

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
    /* Set LP wakeup pad configuration */
    CSC0_SetLPWakeUpPad(CLOCK_CSC0_pConfig->CSC0_tLPWakeUpPadConfig);
#endif /*(MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)*/
}
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)  */

/**
 * @brief Configure SCM register
 *
 * @param CLOCK_SCM_pConfig SCM configuration
 */
MCU_TEXT_SECTION static void MCU_SCM_Init(const CLOCK_SCM_ConfigType *const CLOCK_SCM_pConfig)
{
    /* Configure SCM trace clock */
    SCM_SetTraceClockConfig(&(CLOCK_SCM_pConfig->SCM_tTraceClkConfig));

#if (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)
    SCM_SetSubSysClockConfig(&(CLOCK_SCM_pConfig->SCM_tSubSysClkConfig));
#else
    /* Configure Hsm clock */
    SCM_SetHsmClockConfig(&(CLOCK_SCM_pConfig->SCM_tHsmClkConfig));
#endif /* (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON) */

#if (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON)
    /* Configure HSADC bias force */
    SCM_SetHsadcBiasForce(CLOCK_SCM_pConfig->bHsAdcBiasForceEn);
#endif /* (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON) */
}

#if (MCU_ENABLE_CMU == STD_ON)
/**
 * @brief Configure CMU
 *
 * @param CLOCK_CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION static void MCU_CMU_Init(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config)
{
    (void)CMU_Init(CMU_INSTANCE_0, &(CLOCK_CMU_Config->CMU0_Config));
    (void)CMU_Init(CMU_INSTANCE_1, &(CLOCK_CMU_Config->CMU1_Config));
    (void)CMU_Init(CMU_INSTANCE_2, &(CLOCK_CMU_Config->CMU2_Config));
    (void)CMU_Init(CMU_INSTANCE_3, &(CLOCK_CMU_Config->CMU3_Config));
    (void)CMU_Init(CMU_INSTANCE_4, &(CLOCK_CMU_Config->CMU4_Config));
}

/**
 * @brief Enable CMU
 *
 * @param eInstance CMU instance
 * @param CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION static void MCU_CMU_Enable(const CMU_InstanceType   eInstance,
                                            const CMU_CfgType *const CMU_Config)
{
    if ((boolean)TRUE == CMU_Config->bEnable)
    {
        /* ERRATA: if disable CMU, need disable interrupt and clear interrupt flag, in this
         * situation if enable CMU, need enable interrupt */

        CMU_ClearInterruptFlag(eInstance);

        if ((boolean)TRUE == CMU_Config->bIntEnable)
        {
            CMU_EnableInterrupt(eInstance);
        }
        CMU_Enable(eInstance);
    }
    else
    {
        /* If CMU instance is not enabled according to configuration, do nothing here,
           because CMU configuration must be set before. */
    }
}

/**
 * @brief Disable CMU
 *
 * @param eInstance CMU instance
 * @param CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION static void MCU_CMU_Disable(const CMU_InstanceType   eInstance,
                                             const CMU_CfgType *const CMU_Config)
{
    uint32 i;

    if ((boolean)TRUE == CMU_Config->bEnable)
    {
        /* ERRATA: if disable CMU, need disable interrupt and clear interrupt flag */
        CMU_DisableInterrupt(eInstance);

        /* Disable CMU */
        CMU_Disable(eInstance);

        if (CMU_INSTANCE_0 == eInstance)
        {
            /* CMU0 disable need delay 120us upon  */
            for (i = 0U; i < 20000U; i++)
            {
                /* PRQA S 1006 ++ #Misra-C:2012 Rule-4.2 This in-line assembler construct is a
                 * language extension. The code has been ignored. REASON: The use of this inline
                 * assembly is documented. */
                MCAL_NOP();
                /* PRQA S 1006 -- */
            }
        }
    }
    else
    {
        /* If CMU instance is not enabled according to configuration, do nothing here. */
    }
}
#endif /* #if (MCU_ENABLE_CMU == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief  HW functions for MCU_InitClock, this function would call peripheral clock initialize
 * functions like SCG clock initialization, PCC initialization…
 *
 * @param  Mcu_pClockConfig MCU module configuration, contains SCG,PCC,CSC0,SCM,CMU.. configuration
 * @return Function status
 * @note   [FUNC_MCU_0030]
 */
MCU_TEXT_SECTION Std_ReturnType Mcu_Hw_InitClock(const Mcu_ClockConfigType *const Mcu_pClockConfig)
{
    Std_ReturnType bStatus;

    /* Initialize SCG */
    bStatus = (Std_ReturnType)MCU_SCG_Init(Mcu_pClockConfig->SCG_pClockConfig);

    if (bStatus == E_OK)
    {
        /* Initialize PCC */
        MCU_PCC_Init(Mcu_pClockConfig->PCC_GRP_pConfig);

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
        /* Initialize SMC Clock */
        MCU_SMC_Init(Mcu_pClockConfig->CLOCK_SMC_pConfig);
#else
        /* Initialize CSC0 */
        MCU_CSC0_Init(Mcu_pClockConfig->CLOCK_CSC0_pConfig);
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)  */

        /* Initialize SCM */
        MCU_SCM_Init(Mcu_pClockConfig->CLOCK_SCM_pConfig);
#if (MCU_ENABLE_CMU == STD_ON)
        /* Initialize CMU */
        MCU_CMU_Init(Mcu_pClockConfig->CLOCK_CMU_Config);
#endif /* (MCU_ENABLE_CMU == STD_ON) */
    }
    return bStatus;
}
#endif /* (MCU_INIT_CLOCK == STD_ON) */

#if (MCU_PERFORM_RESET_API == STD_ON)
/**
 * @brief The function initiates a system reset request to reset the SoC.
 *
 */
MCU_TEXT_SECTION void Mcu_Hw_Reset(void)
{
    CM7_GenerateSystemReset();
}
#endif

#if (MCU_NO_PLL == STD_OFF)
/**
 * @brief Get status of PLL
 *
 * @param bPll0En Pll0 status
 * @param bPll1En Pll0 status
 * @return PLL status
 */
MCU_TEXT_SECTION Mcu_PllStatusType Mcu_Hw_ScgGetPLLStatus(void)
{
    Mcu_PllStatusType ePllStatus = MCU_PLL_UNLOCKED;
    boolean           bPll0EnStatus;
    boolean           bPll0LockStatus;
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    boolean bPll1EnStatus;
    boolean bPll1LockStatus;
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

    bPll0EnStatus   = SCG_GetPllEnableStatus(SCG_PLL0_CLK);
    bPll0LockStatus = SCG_GetClockStatus(SCG_PLL0_CLK);
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    bPll1EnStatus   = SCG_GetPllEnableStatus(SCG_PLL1_CLK);
    bPll1LockStatus = SCG_GetClockStatus(SCG_PLL1_CLK);
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

    if ((boolean)TRUE == bPll0EnStatus)
    {
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
        if ((boolean)TRUE == bPll1EnStatus)
        {
            if (((boolean)TRUE == bPll0LockStatus) && ((boolean)TRUE == bPll1LockStatus))
            {
                ePllStatus = MCU_PLL_LOCKED;
            }
            else
            {
                ePllStatus = MCU_PLL_UNLOCKED;
            }
        }
        else
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
        {
            if ((boolean)TRUE == bPll0LockStatus)
            {
                ePllStatus = MCU_PLL_LOCKED;
            }
            else
            {
                ePllStatus = MCU_PLL_UNLOCKED;
            }
        }
    }
    else
    {
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
        if ((boolean)TRUE == bPll1EnStatus)
        {
            if ((boolean)TRUE == bPll1LockStatus)
            {
                ePllStatus = MCU_PLL_LOCKED;
            }
            else
            {
                ePllStatus = MCU_PLL_UNLOCKED;
            }
        }
        else
        {
            ePllStatus = MCU_PLL_UNLOCKED;
        }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
    }

    return ePllStatus;
}
#endif

#if (MCU_ENABLE_CMU == STD_ON)
/**
 * @brief Enable CMU
 *
 * @param CLOCK_CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION void Mcu_Hw_CmuEnable(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config)
{
    MCU_CMU_Enable(CMU_INSTANCE_0, &CLOCK_CMU_Config->CMU0_Config);
    MCU_CMU_Enable(CMU_INSTANCE_1, &CLOCK_CMU_Config->CMU1_Config);
    MCU_CMU_Enable(CMU_INSTANCE_2, &CLOCK_CMU_Config->CMU2_Config);
    MCU_CMU_Enable(CMU_INSTANCE_3, &CLOCK_CMU_Config->CMU3_Config);
    MCU_CMU_Enable(CMU_INSTANCE_4, &CLOCK_CMU_Config->CMU4_Config);
}

/**
 * @brief Disable CMU
 *
 * @param CLOCK_CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION void Mcu_Hw_CmuDisable(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config)
{
    MCU_CMU_Disable(CMU_INSTANCE_0, &CLOCK_CMU_Config->CMU0_Config);
    MCU_CMU_Disable(CMU_INSTANCE_1, &CLOCK_CMU_Config->CMU1_Config);
    MCU_CMU_Disable(CMU_INSTANCE_2, &CLOCK_CMU_Config->CMU2_Config);
    MCU_CMU_Disable(CMU_INSTANCE_3, &CLOCK_CMU_Config->CMU3_Config);
    MCU_CMU_Disable(CMU_INSTANCE_4, &CLOCK_CMU_Config->CMU4_Config);
}

/**
 * @brief Disable CMU which not support low power
 *
 * @param CLOCK_CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION void Mcu_Hw_CmuDisableNoLp(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config)
{
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    uint8   i                              = 0U;
    uint8   u8CoreId                       = GET_CPU_ID();
    uint8   au8PccDwp[CMU_INSTANCE_NUM]    = { 0U };
    boolean bDisableFlag[CMU_INSTANCE_NUM] = { (boolean)FALSE,
                                               (boolean)FALSE,
                                               (boolean)FALSE,
                                               (boolean)FALSE,
                                               (boolean)FALSE };

    au8PccDwp[0U] = PCC_GetPccDwp(PCC_CMU0_OFFSET);
    au8PccDwp[1U] = PCC_GetPccDwp(PCC_CMU1_OFFSET);
    au8PccDwp[2U] = PCC_GetPccDwp(PCC_CMU2_OFFSET);
    au8PccDwp[3U] = PCC_GetPccDwp(PCC_CMU3_OFFSET);
    au8PccDwp[4U] = PCC_GetPccDwp(PCC_CMU4_OFFSET);

    for (i = 0U; i < CMU_INSTANCE_NUM; i++)
    {
        if (0U == u8CoreId)
        {
            /* PCC dwp is all cpu or cpu0, change by cpu0 */
            if ((u8CoreId == au8PccDwp[i]) || (0x0FU == au8PccDwp[i]))
            {
                bDisableFlag[i] = (boolean)TRUE;
            }
        }
        else if (u8CoreId == au8PccDwp[i])
        {
            bDisableFlag[i] = (boolean)TRUE;
        }
        else
        {
            /* do effectively nothing here */
        }
    }
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */

#if (MCU_CFG_CMU_LP_SUPPORT == STD_ON)
    if (
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
        ((boolean)TRUE == bDisableFlag[0U]) &&
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
        ((boolean)FALSE == CLOCK_CMU_Config->CMU0_Config.bLpen))
#else
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    if ((boolean)TRUE == bDisableFlag[0U])
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
#endif /* (MCU_CFG_CMU_LP_SUPPORT == STD_ON) */
    {
        MCU_CMU_Disable(CMU_INSTANCE_0, &CLOCK_CMU_Config->CMU0_Config);
    }

#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    if ((boolean)TRUE == bDisableFlag[1U])
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
    {
        /* CMU1 do not support in low power mode */
        MCU_CMU_Disable(CMU_INSTANCE_1, &CLOCK_CMU_Config->CMU1_Config);
    }

#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    if ((boolean)TRUE == bDisableFlag[2U])
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
    {
        /* CMU2 do not support in low power mode */
        MCU_CMU_Disable(CMU_INSTANCE_2, &CLOCK_CMU_Config->CMU2_Config);
    }

#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    if ((boolean)TRUE == bDisableFlag[3U])
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
    {
        /* CMU3 do not support in low power mode */
        MCU_CMU_Disable(CMU_INSTANCE_3, &CLOCK_CMU_Config->CMU3_Config);
    }

#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    if ((boolean)TRUE == bDisableFlag[4U])
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
    {
        /* CMU4 do not support in low power mode */
        MCU_CMU_Disable(CMU_INSTANCE_4, &CLOCK_CMU_Config->CMU4_Config);
    }
}

/**
 * @brief Disable CMU which not support stop mode
 *
 * @param CLOCK_CMU_Config CMU configuration pointer
 */
MCU_TEXT_SECTION void Mcu_Hw_CmuDisableNoStop(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config)
{
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    uint8   i                              = 0U;
    uint8   u8CoreId                       = GET_CPU_ID();
    uint8   au8PccDwp[CMU_INSTANCE_NUM]    = { 0U };
    boolean bDisableFlag[CMU_INSTANCE_NUM] = { (boolean)FALSE,
                                               (boolean)FALSE,
                                               (boolean)FALSE,
                                               (boolean)FALSE,
                                               (boolean)FALSE };

    au8PccDwp[0U] = PCC_GetPccDwp(PCC_CMU0_OFFSET);
    au8PccDwp[1U] = PCC_GetPccDwp(PCC_CMU1_OFFSET);
    au8PccDwp[2U] = PCC_GetPccDwp(PCC_CMU2_OFFSET);
    au8PccDwp[3U] = PCC_GetPccDwp(PCC_CMU3_OFFSET);
    au8PccDwp[4U] = PCC_GetPccDwp(PCC_CMU4_OFFSET);

    for (i = 0U; i < CMU_INSTANCE_NUM; i++)
    {
        if (0U == u8CoreId)
        {
            /* PCC dwp is all cpu or cpu0, change by cpu0 */
            if ((u8CoreId == au8PccDwp[i]) || (0x0FU == au8PccDwp[i]))
            {
                bDisableFlag[i] = (boolean)TRUE;
            }
        }
        else if (u8CoreId == au8PccDwp[i])
        {
            bDisableFlag[i] = (boolean)TRUE;
        }
        else
        {
            /* do effectively nothing here */
        }
    }
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */

    if (
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
        ((boolean)TRUE == bDisableFlag[0U]) &&
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
        ((boolean)FALSE == CLOCK_CMU_Config->CMU0_Config.bSten))
    {
        MCU_CMU_Disable(CMU_INSTANCE_0, &CLOCK_CMU_Config->CMU0_Config);
    }

    if (
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
        ((boolean)TRUE == bDisableFlag[1U]) &&
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
        ((boolean)FALSE == CLOCK_CMU_Config->CMU1_Config.bSten))
    {
        MCU_CMU_Disable(CMU_INSTANCE_1, &CLOCK_CMU_Config->CMU1_Config);
    }

    if (
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
        ((boolean)TRUE == bDisableFlag[2U]) &&
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
        ((boolean)FALSE == CLOCK_CMU_Config->CMU2_Config.bSten))
    {
        MCU_CMU_Disable(CMU_INSTANCE_2, &CLOCK_CMU_Config->CMU2_Config);
    }

    if (
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
        ((boolean)TRUE == bDisableFlag[3U]) &&
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
        ((boolean)FALSE == CLOCK_CMU_Config->CMU3_Config.bSten))
    {
        MCU_CMU_Disable(CMU_INSTANCE_3, &CLOCK_CMU_Config->CMU3_Config);
    }

    if (
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
        ((boolean)TRUE == bDisableFlag[4U]) &&
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
        ((boolean)FALSE == CLOCK_CMU_Config->CMU4_Config.bSten))
    {
        MCU_CMU_Disable(CMU_INSTANCE_4, &CLOCK_CMU_Config->CMU4_Config);
    }
}
#endif

#if (MCU_ENABLE_RGM == STD_ON)
/**
 * @brief Initialize RGM (reset related functions)
 *
 * @param pConfigPtr RGM configurations
 */
MCU_TEXT_SECTION void Mcu_Hw_RgmInit(const Mcu_RGM_ConfigType *const pConfigPtr)
{
    RGM_ISRCallbackType pIsrNotificationArrayPtr[MCU_MAX_COREID_FORMAT] = MCU_DRIVER_INIT_PTR_ARRAY;

#if (MCU_RGM_ISR_NOTIFICATION_USED == STD_ON)
#if (MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON)
    pIsrNotificationArrayPtr[0U] = MCU_RGM_DELAY_NOTIFICATION_CPU0;
#if (MCU_MAX_COREID_FORMAT > 1U)
    pIsrNotificationArrayPtr[1U] = MCU_RGM_DELAY_NOTIFICATION_CPU1;
#if (MCU_MAX_COREID_FORMAT > 2U)
    pIsrNotificationArrayPtr[2U] = MCU_RGM_DELAY_NOTIFICATION_CPU2;
#if (MCU_MAX_COREID_FORMAT > 3U)
    pIsrNotificationArrayPtr[3U] = MCU_RGM_DELAY_NOTIFICATION_CPU3;
#endif /* (MCU_MAX_COREID_FORMAT > 3U) */
#endif /* (MCU_MAX_COREID_FORMAT > 2U) */
#endif /* (MCU_MAX_COREID_FORMAT > 1U) */
#else
    pIsrNotificationArrayPtr[0U] = MCU_RGM_DELAY_NOTIFICATION;
#endif /* ( MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON ) */
#endif /* (MCU_RGM_ISR_NOTIFICATION_USED == STD_ON) */

    /* Configure reset filter */
    RGM_EnableResetFilter(pConfigPtr->eFliterClkSrc,
                          pConfigPtr->u8BusClockFilterWidth,
                          pConfigPtr->bResetfiltAonLp);
#if (MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON)
    /* Configure core 1, core2 and core 3 reset trigger system reset */
    RGM_EnableCxTrigSysReset(pConfigPtr->u8Core1TrigSysRstCfg,
                             pConfigPtr->u8Core2TrigSysRstCfg,
                             pConfigPtr->u8Core3TrigSysRstCfg);
#endif
    /* Enable interrupt */
    RGM_EnableInt(pConfigPtr->eDelay,
                  pConfigPtr->u16SysResetInterruptCfg,
                  pConfigPtr->au16CoreResetInterruptCfg,
                  pIsrNotificationArrayPtr);
}

/**
 * @brief Diasble RGM (reset related functions)
 *
 */
MCU_TEXT_SECTION void Mcu_Hw_RgmDisable(void)
{
    RGM_Disable();
}
#endif /* #if (MCU_ENABLE_RGM == STD_ON) */

#if (MCU_ENABLE_WKU == STD_ON)
/**
 * @brief Configure wake-up source
 *
 * @param pWkuConfig input wake-up configuration
 */
MCU_TEXT_SECTION void Mcu_Hw_WkuEnable(const WkuConfigType *const pWkuConfig)
{
#if (MCU_CFG_PCC_DWP_SUPPORT == STD_ON)
    uint8 u8CoreId = GET_CPU_ID();
    uint8 u8PccDwp = 0U;

    u8PccDwp = PCC_GetPccDwp(PCC_WKU0_OFFSET);
    if (0U == u8CoreId)
    {
        /* PCC dwp is all cpu or cpu0, change by cpu0 */
        if ((u8CoreId == u8PccDwp) || (0x0FU == u8PccDwp))
        {
            WKU_EnableWakeupSource(pWkuConfig->u32WkuSource);
        }
    }
    else if (u8CoreId == u8PccDwp)
    {
        WKU_EnableWakeupSource(pWkuConfig->u32WkuSource);
    }
    else
    {
        /* do effectively nothing here */
    }
#if (MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON)
    WKU_SetWakeupDelay(pWkuConfig->bDelayEn, pWkuConfig->u8DelayTime);
#endif /* MCU_CFG_WKU_WAKEUP_DELAY_SUPPORT == STD_ON */

#else
    WKU_EnableWakeupSource(pWkuConfig->u32WkuSource);
    WKU_SetWakeupDelay(pWkuConfig->bDelayEn, pWkuConfig->u8DelayTime);
#endif /* (MCU_CFG_PCC_DWP_SUPPORT == STD_ON) */
}
#endif /* (MCU_ENABLE_WKU == STD_ON) */

/**
 * @brief Get reset reason
 *
 * @return Reset reason
 */
MCU_TEXT_SECTION Mcu_ResetType Mcu_Hw_RgmGetResetReason(void)
{
    Mcu_ResetType eResetReason = MCU_RESET_UNDEFINED;
    uint32        u32TempReg;
    uint16        u16Index;
    uint32        u32BitMask;
    uint8         bMutiRstCnt = 0U;

    /* Check reset reasons from SRS Status Register. */
    u32TempReg = (uint32)RGM_GetLastResetFLag();
    if (0U == u32TempReg)
    {
        eResetReason = MCU_NO_RESET_REASON;
    }

    if ((MCU_RAW_RESET_POR | MCU_RAW_RESET_LVR) == (u32TempReg & MCU_RAW_RESET_ALLBIT))
    {
        /* POR reset will assert LVR and POR bit field in related status register.
        LVR reset without POR will only assert the LVR bit field filter
        Adjust POR reset and LVR reset    */
        eResetReason = MCU_POWER_ON_RESET;
    }

    if (MCU_RESET_UNDEFINED == eResetReason)
    {
        for (u16Index = 0U; u16Index < McuConf_McuResetReason2Reg_Max; u16Index++)
        {
            u32BitMask = ((uint32)1U << u16Index);
            if (u32BitMask == (u32TempReg & u32BitMask))
            {
                /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be
                 * cast to an inappropriate essential type Reason: No problem doing this as the
                 * value is within range of the cast type. */
                eResetReason = (Mcu_ResetType)Mcu_u8ResetReason2RegMap[u16Index];
                /* PRQA S 4342-- */
                bMutiRstCnt++;
            }
            if (bMutiRstCnt > 1U)
            {
                eResetReason = MCU_MULTIPLE_RESET_REASON;
                /* Multiple reset reason */
                break;
            }
        }
    }

    return (Mcu_ResetType)eResetReason;
}

/**
 * @brief This function returns the Raw Reset value.
 *
 * @return Register value with the Reset status.
 */
MCU_TEXT_SECTION Mcu_RawResetType Mcu_Hw_RgmGetResetRawValue(void)
{
    return (Mcu_RawResetType)RGM_GetLastResetFLag();
}

#if (MCU_ENABLE_PMC == STD_ON)
/**
 * @brief This function configure the Power Management Controller
 *
 * @param pConfigPtr Pointer to PMC configuration structure.
 */
MCU_TEXT_SECTION void Mcu_Hw_PmcPowerInit(const PMC_InterruptType *const pConfigPtr)
{
    /* PMC init */
    Pmc_Init(pConfigPtr);

    /* [FUNC_MCU_0002] */
#if (MCU_PMC_ISR_NOTIFICATION_USED == STD_ON)
    PMC_ErrorNotify = MCU_PMC_VOLTAGE_ERROR_NOTIFICATION;
#endif
}

/**
 * @brief Disable PMC (PMC functions)
 *
 */
MCU_TEXT_SECTION void Mcu_Hw_PmcDisable(void)
{
    /* Disable PMC and clear flags */
    Pmc_Disable();
}
#endif /* (MCU_ENABLE_PMC == STD_ON) */

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
/**
 * @brief This function gate off Pllx_Clk1 before entry standby mode.
 *
 * @param u8CoreId Core ID.
 */
MCU_TEXT_SECTION void Mcu_Hw_GateOffPLLxClk1BeforeStandby(uint8 u8CoreId)
{
    if (0U == u8CoreId)
    {
        /* Core 0 gate off Pllx_Clk1 */
        SCG_GateOffPllxClk1BeforeStandby();
    }
    else
    {
        /* Other core ignore */
    }
}

#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

/**
 * @brief This function switches the mode by writing SMC_PMCTRL and SMC_STOPCTRL.
 *
 * @param pModeConfigPtr Pointer to mode configuration structure.
 */
MCU_TEXT_SECTION void Mcu_Hw_SmcModeConfig(const Mcu_ModeConfigType *const pModeConfigPtr)
{
    SMC_SetSystemMode(pModeConfigPtr->u32PowerMode);
}

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
