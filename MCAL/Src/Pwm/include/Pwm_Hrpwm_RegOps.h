/**
*   @file    Pwm_Hrpwm_RegOps.h
*   @version 1.5.1
*   
*   @brief   AUTOSAR Pwm - hardware specific type definition
*   @details This file contains the Pwm Autosar hardware specific type definition
*
*   @addtogroup Pwm
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : HRPWM
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.9.0       19/12/2024    QXW0119       N/A          Add HRPWM support
==================================================================================================*/
#ifndef PWM_HRPWM_REGOPS_H
#define PWM_HRPWM_REGOPS_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Pwm_Hrpwm_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* Define the unlock write code for the HRPWM module, used to unlock HRPWM registers for configuration */
#define HRPWM_UNLOCK_WRITE_CODE            0x10248888U
/* Define the lock write code for the HRPWM module, used to lock HRPWM registers to protect configuration */
#define HRPWM_LOCK_WRITE_CODE              0x1024CAFEU

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief Selection of Fault Release by Software Control
 *
 */
typedef enum
{
    HRPWM_FAULT_RELEASE_BY_EFTU_SIGNAL      = 0U,   /* The fault bypass release occurs by a fault signal from EFTU,
                                                       without software. */
    HRPWM_FAULT_RELEASE_BY_SOFTWARE,                /* The fault bypass release occurs by software writing FAULT_STATUS. */
} HRPWM_FaultReleaseType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief Enable or disable an HRPWM channel
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param u8Channel The HRPWM channel number to control
 * @param bEnable True to enable the channel, False to disable the channel
 */
LOCAL_INLINE void HRPWM_HWA_SetChannelEnable(HRPWM_Type * const pHrpwm, uint8 u8Channel, boolean bEnable)
{
    pHrpwm->EN_CTRL = (pHrpwm->EN_CTRL & (~(1U << u8Channel))) | ((uint32)bEnable << u8Channel);
}

/**
 * @brief Set bypass mode for an HRPWM channel
 *  
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param u8Channel The HRPWM channel number to control
 * @param bBypass True to enable bypass mode, False to disable bypass mode
 */
LOCAL_INLINE void HRPWM_HWA_SetChannelBypass(HRPWM_Type * const pHrpwm, uint8 u8Channel, boolean bBypass)
{
    pHrpwm->BYPASS_CTRL = (pHrpwm->BYPASS_CTRL & (~(1U << u8Channel))) | ((uint32)bBypass << u8Channel);
}

/**
 * @brief Enable or disable the internal LDO
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param bEnable True to enable the internal LDO, False to disable the internal LDO
 */
LOCAL_INLINE void HRPWM_HWA_SetInternalLDOEnable(HRPWM_Type * const pHrpwm, boolean bEnable)
{
    pHrpwm->ANA_CTRL = (pHrpwm->ANA_CTRL & (~HRPWM_ANA_CTRL_PH_LDOEN_MASK)) | HRPWM_ANA_CTRL_PH_LDOEN(bEnable);
}

/**
 * @brief Set bypass mode for the internal LDO
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param bEnable True to enable LDO bypass mode, False to disable LDO bypass mode
 */
LOCAL_INLINE void HRPWM_HWA_SetInternalLDOBypass(HRPWM_Type * const pHrpwm, boolean bEnable)
{
    pHrpwm->ANA_CTRL = (pHrpwm->ANA_CTRL & (~HRPWM_ANA_CTRL_PH_LDOBYPASSEN_MASK)) | HRPWM_ANA_CTRL_PH_LDOBYPASSEN(bEnable);
}

/**
 * @brief Enable or disable phase generation
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param bEnable True to enable phase generation, False to disable phase generation
 */
LOCAL_INLINE void HRPWM_HWA_SetPhaseGeneration(HRPWM_Type * const pHrpwm, boolean bEnable)
{
    pHrpwm->ANA_CTRL = (pHrpwm->ANA_CTRL & (~HRPWM_ANA_CTRL_PH_EN_MASK)) | HRPWM_ANA_CTRL_PH_EN(bEnable);
}

/**
 * @brief Set the value of the ANA_CTRL register
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param u32Value The value to set for the ANA_CTRL register
 */
LOCAL_INLINE void HRPWM_HWA_SetANACtrl(HRPWM_Type * const pHrpwm, uint32 u32Value)
{
    pHrpwm->ANA_CTRL = u32Value;
}

/**
 * @brief Get the value of the ANA_CTRL register
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @return uint32 The value of the ANA_CTRL register
 */
LOCAL_INLINE uint32 HRPWM_HWA_GetANACtrl(HRPWM_Type * const pHrpwm)
{
    return pHrpwm->ANA_CTRL;
}

/**
 * @brief Check if the analog power is OK
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @return true If the analog power is OK, otherwise false
 */
LOCAL_INLINE boolean HRPWM_HWA_GetAnolagPowerOK(HRPWM_Type * const pHrpwm)
{
    return (boolean)((pHrpwm->ANA_CTRL & HRPWM_ANA_CTRL_ANA_POWER_OK_MASK) >> HRPWM_ANA_CTRL_ANA_POWER_OK_SHIFT);
}

/**
 * @brief Check if phase generation is locked
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @return true If phase generation is locked, otherwise false
 */
LOCAL_INLINE boolean HRPWM_HWA_GetPhaseGenLock(HRPWM_Type * const pHrpwm)
{
    return (boolean)pHrpwm->ANA_CTRL & HRPWM_ANA_CTRL_ANA_LOCK_MASK;
}

/**
 * @brief Unlock HRPWM registers for write operations
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 */
LOCAL_INLINE void HRPWM_HWA_UnlockRegisterWrite(HRPWM_Type * const pHrpwm)
{
    pHrpwm->LOCK_CTRL = HRPWM_UNLOCK_WRITE_CODE;
}

/**
 * @brief Lock HRPWM registers to prevent write operations
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 */
LOCAL_INLINE void HRPWM_HWA_LockRegisterWrite(HRPWM_Type * const pHrpwm)
{
    pHrpwm->LOCK_CTRL = HRPWM_LOCK_WRITE_CODE;
}

/**
 * @brief Set fault release mode
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param u8Channel The HRPWM channel number to configure
 * @param eRelease Fault release mode type
 */
LOCAL_INLINE void HRPWM_HWA_SetFaultRelease(HRPWM_Type * const pHrpwm, uint8 u8Channel, HRPWM_FaultReleaseType eRelease)
{
    pHrpwm->FAULT_SW_CTRL_EN = (pHrpwm->FAULT_SW_CTRL_EN & (~(1U << u8Channel))) | ((uint32)eRelease << u8Channel);
}

/**
 * @brief Get fault status
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @return uint8 The current fault status
 */
LOCAL_INLINE uint8 HRPWM_HWA_GetFaultStatus(HRPWM_Type * const pHrpwm)
{
    return (uint8)(pHrpwm->FAULT_STATUS & HRPWM_FAULT_STATUS_MASK);
}

/**
 * @brief Clear fault status
 * 
 * @param pHrpwm Base address pointer of the HRPWM peripheral
 * @param u8Mask The fault status mask to clear
 */
LOCAL_INLINE void HRPWM_HWA_ClearFaultStatus(HRPWM_Type * const pHrpwm, uint8 u8Mask)
{
    pHrpwm->FAULT_STATUS = (uint32)u8Mask;
}

#ifdef __cplusplus
}
#endif


#endif /* #ifndef PWM_HRPWM_REGOPS_H */
/** @} */
