
/**
*   @file    Mcu_Rgm.c
*   @version 1.5.1
*
*   @brief AUTOSAR Mcu - Rgm driver source file.
*   @details  This is the low level driver source file, mainly implemented for the Rgm hardware IP.
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

#include "Mcu_Cfg.h"
#include "Mcal.h"
#include "Mcu_Rgm.h"
#include "Mcu_Rgm_RegOps.h"

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/** @brief RGM user defined interrupt function */
MCU_DATA_SECTION static RGM_ISRCallbackType s_pRgmIntArrayPtr[MCU_MAX_COREID_FORMAT] = MCU_DRIVER_INIT_PTR_ARRAY;

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
/**
*              Local pointer to the instance handler
*/
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static RGM_Type *const pRgm[RGM_INSTANCE_COUNT] = RGM_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
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
 * @brief This api can get RGM register that indicate the source of the most recent reset.
 *
 * @return RGM->SRS register, bit 0-31 corresponding to RGM_ResetEventType 0-31, refer to reference manual for details.
 * @note Multiple flags can be set if multiple reset events occur at the same time
 */
MCU_TEXT_SECTION uint32 RGM_GetLastResetFLag(void)
{
    uint32 u32Flag;
    uint8 u8CoreId = GET_CPU_ID();

    if(0U == u8CoreId)
    {
        u32Flag = RGM_HWA_ReadCore0SRS(pRgm[0U]);
    }
#if(MCU_MAX_COREID_FORMAT > 1U)
    else if(1U == u8CoreId)
    {
        u32Flag = RGM_HWA_ReadCore1SRS(pRgm[0U]);
    }
#if(MCU_MAX_COREID_FORMAT > 2U)
    else if(2U == u8CoreId)
    {
        u32Flag = RGM_HWA_ReadCore2SRS(pRgm[0U]);
    }
#if(MCU_MAX_COREID_FORMAT > 3U)
    else if(3U == u8CoreId)
    {
        u32Flag = RGM_HWA_ReadCore3SRS(pRgm[0U]);
    }
#endif /* (MCU_MAX_COREID_FORMAT > 3U) */
#endif /* (MCU_MAX_COREID_FORMAT > 2U) */
#endif /* (MCU_MAX_COREID_FORMAT > 1U) */
    else
    {
        u32Flag = 0xFFFFFFFFU;
    }

    return u32Flag;
}

/**
 * @brief Enable reset pin filter
 *
 * @param eClk Reset pin filter clock source
 * @param u8BusClockFilterWidth Bus clock filter width
 * @param bLpClkEn select AON clock at low power mode
 * @note If use AON32K clock, the filter width less than 3 AON32K clock.
 */
MCU_TEXT_SECTION void RGM_EnableResetFilter(RGM_FilterClkSrc eClk, uint8 u8BusClockFilterWidth, boolean bLpClkEn)
{
    uint32 u32TempVal = 0U;

    /* add robustness item */
    RGM_HWA_WriteRstfltReg(pRgm[0], 0U);

    if (RGM_RESET_FILTER_BUS_CLOCK == eClk)
    {
        u32TempVal  = (uint32)RGM_RSTFLT_RSTFLT_BUSW(u8BusClockFilterWidth);
        u32TempVal |= (uint32)RGM_RSTFLT_RSTFLT_BUS_MASK;

        RGM_HWA_WriteRstfltReg(pRgm[0], u32TempVal);
    }
    else
    {
        /* No deal with */
    }

    (void)bLpClkEn;
}

#if ( MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON )
/**
 * @brief This api can enable interrupt before an reset appear.
 *
 * @param u8C1TrigCfg Core 1 reset trigger system reset configuration
 * @param u8C2TrigCfg Core 2 reset trigger system reset configuration
 * @param u8C3TrigCfg Core 3 reset trigger system reset configuration
 */
MCU_TEXT_SECTION void RGM_EnableCxTrigSysReset(uint8 u8C1TrigCfg, uint8 u8C2TrigCfg, uint8 u8C3TrigCfg)
{
#if(MCU_MAX_COREID_FORMAT > 1U)
    uint32 u32C1TempVal = RGM_HWA_GetC1CfgReg(pRgm[0]);

    u32C1TempVal &= ~(uint32)RGM_Cx_CFG_TRIGGER_SYS_EN_MASK;
    u32C1TempVal |= (((uint32)u8C1TrigCfg) << 16U);
    RGM_HWA_WriteC1CfgReg(pRgm[0], u32C1TempVal);
#if(MCU_MAX_COREID_FORMAT > 2U)
    uint32 u32C2TempVal = RGM_HWA_GetC2CfgReg(pRgm[0]);

    u32C2TempVal &= ~(uint32)RGM_Cx_CFG_TRIGGER_SYS_EN_MASK;
    u32C2TempVal |= (((uint32)u8C2TrigCfg) << 16U);
    RGM_HWA_WriteC2CfgReg(pRgm[0], u32C2TempVal);
#if(MCU_MAX_COREID_FORMAT > 3U)
    uint32 u32C3TempVal = RGM_HWA_GetC3CfgReg(pRgm[0]);

    u32C3TempVal &= ~(uint32)RGM_Cx_CFG_TRIGGER_SYS_EN_MASK;
    u32C3TempVal |= (((uint32)u8C3TrigCfg) << 16U);
    RGM_HWA_WriteC3CfgReg(pRgm[0], u32C3TempVal);
#else
    (void)u8C3TrigCfg;
#endif /* #if(MCU_MAX_COREID_FORMAT > 3U) */
#else
    (void)u8C2TrigCfg;
    (void)u8C3TrigCfg;
#endif /* #if(MCU_MAX_COREID_FORMAT > 2U) */
#else
    (void)u8C1TrigCfg;
    (void)u8C2TrigCfg;
    (void)u8C3TrigCfg;
#endif /* #if(MCU_MAX_COREID_FORMAT > 1U) */
}
#endif /* MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON */

/**
 * @brief This api can enable interrupt before an reset appear.
 *
 * @param eDelay Enumeration of delay cycles
 * @param u16SysReset System reset event source
 * @param u16CoreReset Core reset event source
 * @param pIsrNotify Interrupt function
 */
MCU_TEXT_SECTION void RGM_EnableInt(RGM_ResetDelayType eDelay, \
                                    uint16 u16SysReset, \
                                    const uint16* pCoreReset, \
                                    const RGM_ISRCallbackType* pIsrNotify)
{
    /* Clear SRIE register first */
    RGM_HWA_WriteSrieReg(pRgm[0], 0U);

    RGM_HWA_SetResetDelay(pRgm[0], eDelay);
    RGM_HWA_EnableSysResetInterrupt(pRgm[0], u16SysReset);

    /* support core 0 RGM interrupt */
    RGM_HWA_EnableCore0ResetInterrupt(pRgm[0], pCoreReset[0U]);
    s_pRgmIntArrayPtr[0U] = pIsrNotify[0U];

#if(MCU_MAX_COREID_FORMAT > 1U)
    /* support core 1 RGM interrupt */
    RGM_HWA_EnableCore1ResetInterrupt(pRgm[0], pCoreReset[1U]);
    s_pRgmIntArrayPtr[1U] = pIsrNotify[1U];
#if(MCU_MAX_COREID_FORMAT > 2U)
    /* support core 2 RGM interrupt */
    RGM_HWA_EnableCore2ResetInterrupt(pRgm[0], pCoreReset[2U]);
    s_pRgmIntArrayPtr[2U] = pIsrNotify[2U];
#if(MCU_MAX_COREID_FORMAT > 3U)
    /* support core 3 RGM interrupt */
    RGM_HWA_EnableCore3ResetInterrupt(pRgm[0], pCoreReset[3U]);
    s_pRgmIntArrayPtr[3U] = pIsrNotify[3U];
#endif /* (MCU_MAX_COREID_FORMAT > 3U) */
#endif /* (MCU_MAX_COREID_FORMAT > 2U) */
#endif /* (MCU_MAX_COREID_FORMAT > 1U) */
}

/**
 * @brief Disable Rgm function.
 *
 * @note Do not change SRS and SSRS status
 */
MCU_TEXT_SECTION void RGM_Disable(void)
{
    /* Disable all configuration */
    RGM_HWA_WriteSrieReg(pRgm[0], 0U);
    RGM_HWA_WriteRstfltReg(pRgm[0], 0U);
    RGM_HWA_WriteC0CfgReg(pRgm[0], RGM_Cx_CFG_TRIGGER_SYS_EN_MASK);

#if(MCU_MAX_COREID_FORMAT > 1U)
    RGM_HWA_WriteC1CfgReg(pRgm[0], 0U);
#if(MCU_MAX_COREID_FORMAT > 2U)
    RGM_HWA_WriteC2CfgReg(pRgm[0], 0U);
#if(MCU_MAX_COREID_FORMAT > 3U)
    RGM_HWA_WriteC3CfgReg(pRgm[0], 0U);
#endif /* (MCU_MAX_COREID_FORMAT > 3U) */
#endif /* (MCU_MAX_COREID_FORMAT > 2U) */
#endif /* (MCU_MAX_COREID_FORMAT > 1U) */
}

/**
 * @brief RGM interrupt entry for core 0/1/2
 *
 */
MCU_TEXT_SECTION void RGM_UserIRQHandler(void)
{
    uint32 u32LastResetFlag;
    uint8 u8CoreId = GET_CPU_ID();

    u32LastResetFlag = RGM_GetLastResetFLag();

    if ((0U == u8CoreId) && (s_pRgmIntArrayPtr[u8CoreId]!= NULL_PTR))
    {
        s_pRgmIntArrayPtr[u8CoreId](u32LastResetFlag);
    }

#if (MCU_MAX_COREID_FORMAT > 1U)
    if ((1U == u8CoreId) && (s_pRgmIntArrayPtr[u8CoreId]!= NULL_PTR))
    {
        s_pRgmIntArrayPtr[u8CoreId](u32LastResetFlag);
    }
#if (MCU_MAX_COREID_FORMAT > 2U)
    if ((2U == u8CoreId) && (s_pRgmIntArrayPtr[u8CoreId]!= NULL_PTR))
    {
        s_pRgmIntArrayPtr[u8CoreId](u32LastResetFlag);
    }
#if (MCU_MAX_COREID_FORMAT > 3U)
    if ((3U == u8CoreId) && (s_pRgmIntArrayPtr[u8CoreId]!= NULL_PTR))
    {
        s_pRgmIntArrayPtr[u8CoreId](u32LastResetFlag);
    }
#endif /* (MCU_MAX_COREID_FORMAT > 3U) */
#endif /* (MCU_MAX_COREID_FORMAT > 2U) */
#endif /* (MCU_MAX_COREID_FORMAT > 1U) */
}




#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */


