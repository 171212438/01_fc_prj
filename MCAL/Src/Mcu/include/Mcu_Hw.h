/**
*   @file    Mcu_Hw.h
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
#ifndef MCU_HW_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_HW_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Mcu_Cfg.h"
#include "Cpm_Reg.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#if (MCU_PERFORM_RESET_API == STD_ON)
void Mcu_Hw_Reset(void);
#endif

#if (MCU_INIT_CLOCK == STD_ON)
Std_ReturnType Mcu_Hw_InitClock(const Mcu_ClockConfigType *const Mcu_pClockConfig);
#endif

#if (MCU_NO_PLL == STD_OFF)
Mcu_PllStatusType Mcu_Hw_ScgGetPLLStatus(void);
#endif

#if (MCU_ENABLE_CMU == STD_ON)
void Mcu_Hw_CmuEnable(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config);

void Mcu_Hw_CmuDisable(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config);

void Mcu_Hw_CmuDisableNoLp(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config);

void Mcu_Hw_CmuDisableNoStop(const CLOCK_CMU_ConfigType *const CLOCK_CMU_Config);
#endif

#if (MCU_ENABLE_RGM == STD_ON)
void Mcu_Hw_RgmInit(const Mcu_RGM_ConfigType *const pConfigPtr);

void Mcu_Hw_RgmDisable(void);
#endif

#if (MCU_ENABLE_WKU == STD_ON)
void Mcu_Hw_WkuEnable(const WkuConfigType *const pWkuConfig);
#endif /* (MCU_ENABLE_WKU == STD_ON) */

Mcu_ResetType Mcu_Hw_RgmGetResetReason(void);

Mcu_RawResetType Mcu_Hw_RgmGetResetRawValue(void);

#if (MCU_ENABLE_PMC == STD_ON)
void Mcu_Hw_PmcPowerInit(const PMC_InterruptType *const pConfigPtr);

void Mcu_Hw_PmcDisable(void);
#endif

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
void Mcu_Hw_GateOffPLLxClk1BeforeStandby(uint8 u8CoreId);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

void Mcu_Hw_SmcModeConfig(const Mcu_ModeConfigType *const pModeConfigPtr);

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif
/** @}*/

#endif /* _MCU_HW_H_ */
