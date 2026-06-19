/**
 * @file flexcore_driver_wdog.c
 * @author Flagchip
 * @brief flexcore WDOG driver type definition and API
 * @version 0.1.0
 * @date 2023-12-28
 *
 * @copyright Copyright (c) 2022 Flagchip Semiconductors Co., Ltd.
 *
 */

/********************************************************************************
*   Revision History:
*
*   Version     Date          Initials       CR#          Descriptions
*   ---------   ----------    ------------   ----------   ---------------
*   0.1.0       2023-12-28    Flagchip099    N/A          Initial version
********************************************************************************/

#include "flexcore_driver_wdog.h"
#include "interrupt_manager.h"
#include "flexcore_common.h"
//static WDOG_Type *const s_apWdogBase[WDOG_INSTANCE_COUNT] = WDOG_BASE_PTRS;

/**
 * @brief UNLOCK and REFRESH CMD For MPW FC100. this may not match with FC4150 user manual
 */
#define WDOG_UNLOCK_CMD                 ((uint32_t)(0x08181982U))
#define WDOG_REFRESH_CMD                ((uint32_t)(0x20CFFC20U))
#define WDOG_TIMTOUT_DEFAULT            ((uint32_t)(0x00000400U))
#define WDOG_CS_DISABLE                 ((uint32_t)(0x00000920U))
#define WDOG_CS_RW_MASK                 ((uint32_t)(0x000393FFU))

/**
 * @brief unlock the wdog before Watch dog reconfigure set.
 * @param instance: WDOG module instance: WDOG0/WDOG1 defined in FC4150.
 */
FLEXCORECODE
void WDOG_Unlock(void)
{
    WDOG_Type *pWdog = WDOG0;
    WDOG_HWA_SetCounter(pWdog,WDOG_UNLOCK_CMD);
}

/**
 * @brief feed the watch dog by writing typical cmd to counter.
 * @param instance: WDOG module instance: WDOG0/WDOG1 defined in FC4150.
 */
FLEXCORECODE
void WDOG_Refresh(void)
{
    WDOG_Type *pWdog = WDOG0;
    WDOG_HWA_SetCounter(pWdog,WDOG_REFRESH_CMD);
}

/**
 * @brief Initialize the WDOG configuration setting. *
 * @param pWdogCfg: point to WDOG init module type.
 */
FLEXCORECODE
void WDOG_Init(WDOG_CfgType* pWdogCfg)
{
    WDOG_Type *pWdog = WDOG0;
    uint32_t u32Temp = 0U;

    //IntMgr_DisableGlobalInterrupt();

    u32Temp = WDOG_HWA_GetCs(pWdog);
    u32Temp &= ~(WDOG_CS_CLK_SEL_MASK | WDOG_CS_TST_MASK | WDOG_CS_FLAG_MASK) ;
    u32Temp |= WDOG_CS_WIN(pWdogCfg->bWinEnable)  | WDOG_CS_PRESCALER(pWdogCfg->bPrescalerEnable) |
               WDOG_CS_CLK_SEL(pWdogCfg->eClkSource) | WDOG_CS_INT(pWdogCfg->bInterruptEnable) |
               WDOG_CS_TST(pWdogCfg->eTesttype) | WDOG_CS_DBG(pWdogCfg->bEnableInDebug)  | WDOG_CS_UPDATE_MASK | WDOG_CS_ENABLE_MASK |
               WDOG_CS_WAIT(pWdogCfg->bEnableInWait)  | WDOG_CS_STOP(pWdogCfg->bEnableInStop);

    WDOG_Unlock();

    while (WDOG_HWA_GetUnlockStatus(pWdog) == false)
    {
        /* 0 indicate WDOG locked. Wait until registers are unlocked */
    }

    WDOG_HWA_SetCs(pWdog,u32Temp);

    WDOG_Unlock();

    while (WDOG_HWA_GetUnlockStatus(pWdog) == false)
    {
        /* 0 indicate WDOG locked. Wait until registers are unlocked */
    }

    /*  configure the timeout value   */
    WDOG_HWA_SetTimeout(pWdog,pWdogCfg->u16TimeoutValue);

    WDOG_Unlock();

    while (WDOG_HWA_GetUnlockStatus(pWdog) == false)
    {
        /* 0 indicate WDOG locked. Wait until registers are unlocked */
    }
    /*  configure window value   */
    WDOG_HWA_SetWindow(pWdog,pWdogCfg->u16WindowValue);

    //IntMgr_EnableGlobalInterrupt();


}

FLEXCORECODE
void WDOG_Disable(void)
{
    WDOG_Type *pWdog = WDOG0;

    if(WDOG_CS_ENABLE_MASK & WDOG_HWA_GetCs(pWdog))
    {
        /* unlock before reconfiguration */
        WDOG_Unlock();
        /* wait for unlock state */
        while (WDOG_HWA_GetUnlockStatus(pWdog) == false)
        {
            /* 0 indicate WDOG locked. Wait until registers are unlocked */
        }

        WDOG_HWA_SetTimeout(pWdog, WDOG_TIMTOUT_DEFAULT);

        /* disable watchdog */
        WDOG_HWA_SetCs(pWdog, WDOG_CS_DISABLE);

        /* wait for reconfiguring successfully */
        while (WDOG_HWA_GetReconfigureStatus(pWdog) == false)
        {
            ;
        }
    }
}

