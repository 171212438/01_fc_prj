/**
*   @file    Mcu_Cmu.c
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Cmu driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Cmu hardware IP.
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
extern "C" {
#endif

#include "Mcu_Cmu.h"
#include "Mcu_Scg.h"
#include "Mcu_Csc.h"
#include "Mcu_Smc.h"
#include "Mcu_Cmu_RegOps.h"


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
MCU_DATA_SECTION static CMU_ISRCallbackType s_apCmuISRCallback[CMU_INSTANCE_COUNT] = {NULL_PTR,NULL_PTR,NULL_PTR,NULL_PTR,NULL_PTR};
/* PRQA S 0686-- */

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static CMU_Type *const s_apCmuBase[CMU_INSTANCE_COUNT] = CMU_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief Check Reference clock and monitor clock status.
 *
 * @param eInstance CMU instance
 * @return CMU instance related clock status
 */
static CMU_StatusType CMU_ClkStatusCheck(CMU_InstanceType eInstance);

/**
 * @brief Get CMU interrupt type
 *
 * @param eInstance CMU instance
 * @return CMU interrupt type
 */
static CMU_InterruptType CMU_GetInterruptType(CMU_InstanceType eInstance);
/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/


#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/**
 * @brief Check Reference clock and monitor clock status.
 *
 * @param eInstance CMU instance
 * @return CMU instance related clock status
 */
MCU_TEXT_SECTION static CMU_StatusType CMU_ClkStatusCheck(CMU_InstanceType eInstance)
{
    boolean bRefClockStatus;
    boolean bMonitorClockStatus;
    CMU_StatusType eCmuClkStatus;

    if (eInstance == CMU_INSTANCE_0)
    {
        /* Instance ---- Reference CLK  ---- Monitored CLK.*/
        /* CMU0     ---- SIRC            ---- RTC_CLK.*/
        bRefClockStatus = SCG_GetClockStatus(SCG_SIRC_CLK);
#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
        bMonitorClockStatus = SMC_GetSmcClockStatus(SMC_RTC_CLK);
#else
        bMonitorClockStatus = CSC0_GetCsc0ClockStatus(CSC0_RTC_CLK);
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */
    }
    else if (eInstance == CMU_INSTANCE_1)
    {
        /* Instance ---- Reference CLK  ---- Monitored CLK.*/
        /* CMU1     ---- SIRC            ---- FOSC.*/
        bRefClockStatus = SCG_GetClockStatus(SCG_SIRC_CLK);
        bMonitorClockStatus = SCG_GetClockStatus(SCG_FOSC_CLK);
    }
    else if (eInstance == CMU_INSTANCE_2)
    {
        /* Instance ---- Reference CLK  ---- Monitored CLK.*/
        /* CMU2     ---- SIRC            ---- FIRC.*/
        bRefClockStatus = SCG_GetClockStatus(SCG_SIRC_CLK);
        bMonitorClockStatus = SCG_GetClockStatus(SCG_FIRC_CLK);
    }
    else if (eInstance == CMU_INSTANCE_3)
    {
        /* Instance ---- Reference CLK  ---- Monitored CLK.*/
        /* CMU3     ---- FIRC            ---- SIRC.*/
        bRefClockStatus = SCG_GetClockStatus(SCG_FIRC_CLK);
        bMonitorClockStatus = SCG_GetClockStatus(SCG_SIRC_CLK);
    }
    else if (eInstance == CMU_INSTANCE_4)
    {
        /* Instance ---- Reference CLK  ---- Monitored CLK.*/
        /* CMU4     ---- SIRC/FOSC       ---- SLOW CLOCK.*/
        bMonitorClockStatus = SCG_GetSysClockValid();
        if( SCG_CMU4CLK_SRC_FOSC == SCG_GetCMU4ClockSrc())
        {
            bRefClockStatus = SCG_GetClockStatus(SCG_FOSC_CLK);
        }
        else
        {
            bRefClockStatus = SCG_GetClockStatus(SCG_SIRC_CLK);
        }
    }
    else
    {
        bRefClockStatus = (boolean)FALSE;
        /* PRQA S 2983 ++ #Misra-C:2012 Rule-2.2 This assignment is redundant. The value of this object is never subsequently used.
         * Reason: Variable need operate consistencely */
        bMonitorClockStatus = (boolean)FALSE;
        /* PRQA S 2983-- */
    }

    /* Check clock status*/
    if (((boolean)TRUE == bRefClockStatus) && ((boolean)TRUE == bMonitorClockStatus))
    {
        eCmuClkStatus = CMU_VALID;
    }
    else
    {
        eCmuClkStatus = CMU_CLK_ERROR;
    }
    return eCmuClkStatus;
}

/**
 * @brief Get CMU interrupt type
 *
 * @param eInstance CMU instance
 * @return CMU interrupt type
 */
MCU_TEXT_SECTION static CMU_InterruptType CMU_GetInterruptType(CMU_InstanceType eInstance)
{
    uint32 u32Temp;
    CMU_InterruptType eStatus = CMU_INTERRUPT_NONE;

    const CMU_Type *const pCmu = s_apCmuBase[eInstance];

    u32Temp = CMU_HWA_GetST(pCmu);
    if ((u32Temp & CMU_ST_LOC_MASK) != 0U)
    {
        eStatus = CMU_INTERRUPT_LOC;
    }
    else if ((u32Temp & CMU_ST_MIS_MASK) != 0U)
    {
        eStatus = CMU_INTERRUPT_MIS;
    }
    else
    {
        /* do nothing */
    }

    return eStatus;
}
/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/
/**
 * @brief Initialize CMU
 *
 * @param eInstance CMU instance
 * @param pInitCfg CMU configuration pointer
 * @return Function return status
 */
MCU_TEXT_SECTION CMU_StatusType CMU_Init(CMU_InstanceType eInstance, const CMU_CfgType *const pInitCfg)
{
    CMU_StatusType eStatus = CMU_VALID;
    CMU_Type *const pCmu = s_apCmuBase[eInstance];
    uint32 u32Temp;

    if(pInitCfg->bEnable == (boolean)TRUE)
    {
        /* Disable CMU */
        CMU_HWA_DisableCmu(pCmu);

        /* Check Reference clock and monitor clock status.*/
        eStatus= CMU_ClkStatusCheck(eInstance);

        if (eStatus == CMU_VALID)
        {
            CMU_HWA_SetRefWindow(pCmu, pInitCfg->u32RefWindow);
            CMU_HWA_SetMinCnts(pCmu, pInitCfg->u32Min);
            CMU_HWA_SetMaxCnts(pCmu, pInitCfg->u32Max);

            /* Program program PERIOD[EN] and PERIOD[WINDOW]. */
            CMU_HWA_SetPeriodWindow(pCmu, pInitCfg->u8PerMonitorWindow);
            CMU_HWA_SetPeriodEnable(pCmu, (uint8)pInitCfg->bPerMonitorEnable);

            /* Clear interrupt flag */
            CMU_HWA_ClearST(pCmu);

            /* Program DIV,IRQ_EN,LP_EN,STOP_EN,ENABLE */
            u32Temp = (uint32)( CMU_CTRL_REF_DIV(pInitCfg->u8RefDiv)  |
                                CMU_CTRL_IRQ_EN(pInitCfg->bIntEnable) |
#if (MCU_CFG_CMU_LP_SUPPORT == STD_ON)
                                CMU_CTRL_LP_EN(pInitCfg->bLpen)       |
#endif /* (MCU_CFG_CMU_LP_SUPPORT == STD_ON) */
                                CMU_CTRL_STOP_EN(pInitCfg->bSten));

            CMU_HWA_SetCtrlReg(pCmu, u32Temp);

            /* Configure notification notify pointer */
            s_apCmuISRCallback[eInstance] =  pInitCfg->pNotify;

            /* Enable CMU */
            CMU_HWA_EnableCmu(pCmu);
        }
    }
    else
    {
        /* Do not operate CMU because it's PCC clock may not enabled. */
    }

    return eStatus;
}

/**
 * @brief Enable CMU function
 *
 * @param eInstance CMU instance
 */
MCU_TEXT_SECTION void CMU_Enable(CMU_InstanceType eInstance)
{
    CMU_Type *const pCmu = s_apCmuBase[eInstance];

    CMU_HWA_EnableCmu(pCmu);
}

/**
 * @brief Disable CMU function
 *
 * @param eInstance CMU instance
 */
MCU_TEXT_SECTION void CMU_Disable(CMU_InstanceType eInstance)
{
    CMU_Type *const pCmu = s_apCmuBase[eInstance];

    CMU_HWA_DisableCmu(pCmu);
}

/**
 * @brief Enable CMU interrupt
 *
 * @param eInstance CMU instance
 */
MCU_TEXT_SECTION void CMU_EnableInterrupt(CMU_InstanceType eInstance)
{
    CMU_Type *const pCmu = s_apCmuBase[eInstance];

    /* Enable interrupt */
    CMU_HWA_EnableInt(pCmu);
}

/**
 * @brief Disable CMU interrupt
 *
 * @param eInstance CMU instance
 */
MCU_TEXT_SECTION void CMU_DisableInterrupt(CMU_InstanceType eInstance)
{
    CMU_Type *const pCmu = s_apCmuBase[eInstance];

    /* Disable interrupt */
    CMU_HWA_DisableInt(pCmu);

    /* Clear interrupt flag */
    CMU_HWA_ClearST(pCmu);
}

/**
 * @brief Clear interrupt flag
 *
 * @param eInstance CMU instance
 */
MCU_TEXT_SECTION void CMU_ClearInterruptFlag(CMU_InstanceType eInstance)
{
    CMU_Type *const pCmu = s_apCmuBase[eInstance];

    /* Clear interrupt flag */
    CMU_HWA_ClearST(pCmu);
}


/***************CMU IRQ Functions*****************/
MCU_TEXT_SECTION void CMU_UserIRQHandler(CMU_InstanceType eInstance)
{
    CMU_InterruptType eStatus;
    CMU_Type *const pCmu = s_apCmuBase[eInstance];

    eStatus = CMU_GetInterruptType(eInstance);
    CMU_HWA_ClearST(pCmu);

    if (s_apCmuISRCallback[eInstance] != NULL_PTR)
    {
        s_apCmuISRCallback[eInstance](eInstance, eStatus);
    }


}

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

