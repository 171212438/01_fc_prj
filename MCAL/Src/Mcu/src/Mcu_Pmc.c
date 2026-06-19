/**
 *   @file    Mcu_Pmc.c
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Mcu - Pmc driver source file.
 *   @details  This is the low level driver source file, mainly implemented for the Pmc hardware IP.
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

#include "Mcu_Pmc.h"
#include "Mcu_Pmc_RegOps.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
/**
 *              Local pointer to the instance handler
 */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static PMC_Type *const s_apPmcBase[PMC_INSTANCE_COUNT] = PMC_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION PMC_ISRCallbackType PMC_ErrorNotify = NULL_PTR;

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/

#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/**
 * @brief Initialize PMC function
 *
 * @param pInterruptCfg Initialization structure of PMC
 */
MCU_TEXT_SECTION void Pmc_Init(const PMC_InterruptType *const pInterruptCfg)
{
    uint32 u32RegVal;

    /* Clear LVCSR all flag and status */
    PMC_HWA_SetLVCSRRegister(s_apPmcBase[0], PMC_LVCSR_ALLFLAG_MASK);

    /* Get CONFIG register value */
    u32RegVal = PMC_HWA_GetPmcConfiguration(s_apPmcBase[0]);

    u32RegVal &= ~(uint32)(PMC_CONFIG_RPM_VDD2P5_EN_MASK | PMC_CONFIG_LVD_IE_MASK |
                           PMC_CONFIG_HVD_IE_MASK);
    u32RegVal |= (uint32)(PMC_CONFIG_RPM_VDD2P5_EN(pInterruptCfg->u8PmcRpmV25En) |
                          PMC_CONFIG_LVD_IE(pInterruptCfg->u8PmcLvdIntEn) |
                          PMC_CONFIG_HVD_IE(pInterruptCfg->u8PmcHvdIntEn));
    PMC_HWA_SetPmcConfiguration(s_apPmcBase[0], u32RegVal);
}

/**
 * @brief Disable PMC function
 *
 */
MCU_TEXT_SECTION void Pmc_Disable(void)
{
    /* Disable all configuration*/
    PMC_HWA_SetPmcConfiguration(s_apPmcBase[0], 0U);

    /* Clear LVCSR all flag and status */
    PMC_HWA_SetLVCSRRegister(s_apPmcBase[0], PMC_LVCSR_ALLFLAG_MASK);
}

/**
 * @brief PMC_UserIRQHandler function
 *
 */
MCU_TEXT_SECTION void PMC_UserIRQHandler(void)
{
    uint32  u32RegVal;
    uint32  u32ConfigRegVal;
    boolean bLVDIntEn;
    boolean bHVDIntEn;

    u32RegVal       = PMC_HWA_GetLVCSRRegister(s_apPmcBase[0]);
    u32ConfigRegVal = PMC_HWA_GetPmcConfiguration(s_apPmcBase[0]);
    bLVDIntEn = (boolean)((u32ConfigRegVal & PMC_CONFIG_LVD_IE_MASK) >> PMC_CONFIG_LVD_IE_SHIFT);
    bHVDIntEn = (boolean)((u32ConfigRegVal & PMC_CONFIG_HVD_IE_MASK) >> PMC_CONFIG_HVD_IE_SHIFT);

    /* HVD fault happen/disappear */
    if ((bHVDIntEn == TRUE) && (0U != (u32RegVal & PMC_LVCSR_HVD_FLAG_MASK)))
    {
        /* Clear HVD FLAG */
        PMC_HWA_SetLVCSRRegister(s_apPmcBase[0], (u32RegVal & PMC_LVCSR_HVD_FLAG_MASK));

        if (PMC_ErrorNotify != NULL_PTR)
        {
            PMC_ErrorNotify(u32RegVal);
        }
        else
        {
            /* No interrupt notification */
        }
    }
    /* LVD fault happen/disappear */
    else if ((bLVDIntEn == TRUE) && (0U != (u32RegVal & PMC_LVCSR_LVD_FLAG_MASK)))
    {
        /* Clear LVD FLAG */
        PMC_HWA_SetLVCSRRegister(s_apPmcBase[0], (u32RegVal & PMC_LVCSR_LVD_FLAG_MASK));

        if (PMC_ErrorNotify != NULL_PTR)
        {
            PMC_ErrorNotify(u32RegVal);
        }
        else
        {
            /* No interrupt notification */
        }
    }
    else
    {
        /* Some error */
    }
}

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
