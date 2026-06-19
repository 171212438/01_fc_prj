/**
*   @file    Mcu_Rgm_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Rgm header file.
*   @details Mcu Rgm low level driver API.
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
#ifndef MCU_RGM_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_RGM_REGOPS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_Rgm_Regs.h"


/** @brief Rgm system reset interrupt event manger */
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This is an enum which does not need to be instantiated.  */
typedef enum
{
#if (MCU_CFG_RGM_PIN_WDG1_RESET_INT_SUPPORT == STD_ON)
    /* FC7240F2MDS */
    RGM_SYS_INT_CLKERR0   = 0x0008U,
    RGM_SYS_INT_WDG       = 0x0020U,
    RGM_SYS_INT_PIN       = 0x0040U,
    RGM_SYS_INT_JTAG      = 0x0100U,
    RGM_SYS_INT_CPULOC    = 0x0200U,
    RGM_SYS_INT_SW        = 0x0400U,
    RGM_SYS_INT_SYSAP     = 0x0800U,
    RGM_SYS_INT_WDG1      = 0x1000U,
    RGM_SYS_INT_SACKERR   = 0x2000U,
    RGM_SYS_INT_ALL       = 0x3FE8U
#elif (MCU_CFG_RGM_PIN_RESET_INT_SUPPORT == STD_ON)
    /* FC7300F8MDQ,FC7300F4MDDT1C,FC7300F4MDST1C */
    RGM_SYS_INT_CLKERR0   = 0x0008U,
    RGM_SYS_INT_WDG       = 0x0020U,
    RGM_SYS_INT_PIN       = 0x0040U,
    RGM_SYS_INT_JTAG      = 0x0100U,
    RGM_SYS_INT_CPULOC    = 0x0200U,
    RGM_SYS_INT_SW        = 0x0400U,
    RGM_SYS_INT_SYSAP     = 0x0800U,
    RGM_SYS_INT_SACKERR   = 0x2000U,
    RGM_SYS_INT_ALL       = 0x2FE8U
#else
    /* FC7300F8MDT,FC7300F4MDDT1B,FC7300F4MDST1B */
    RGM_SYS_INT_CLKERR0   = 0x0008U,
    RGM_SYS_INT_WDG       = 0x0020U,
    RGM_SYS_INT_JTAG      = 0x0100U,
    RGM_SYS_INT_CPULOC    = 0x0200U,
    RGM_SYS_INT_SW        = 0x0400U,
    RGM_SYS_INT_SYSAP     = 0x0800U,
    RGM_SYS_INT_INTM_TOUT = 0x1000U,
    RGM_SYS_INT_SACKERR   = 0x2000U,
    RGM_SYS_INT_ALL       = 0x3FA8U
#endif /* (MCU_CFG_RGM_PIN_WDG1_RESET_INT_SUPPORT == STD_ON) */
} RGM_SysResetIntMangerType;

/** @brief Rgm core related reset interrupt event manger */
typedef enum
{
    RGM_CORE_INT_LOCKUP  = 0x00001U,
    RGM_CORE_INT_SYSRST  = 0x0002U,
    RGM_CORE_INT_WDG     = 0x0004U,
    RGM_CORE_INT_INTM    = 0x0008U,
    RGM_CORE_INT_SWRST   = 0x0010U,
    RGM_CORE_INT_ALL     = 0x001FU
} RGM_CoreResetIntMangerType;



/* PRQA S 1535 -- */

/*=============== Local inline function ===============*/
/**
 * @brief Read last reset flag of SRS reg
 *
 * @param pRgmReg RGM instance handler
 *
 * @return Last reset flag
 */
LOCAL_INLINE uint32 RGM_HWA_ReadSysSRS(const RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->SRS;
}

/**
 * @brief Read last reset flag of C0_SRS reg
 *
 * @param pRgmReg RGM instance handler
 *
 * @return Last reset flag
 */
LOCAL_INLINE uint32 RGM_HWA_ReadCore0SRS(const RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C0_SRS;
}

/**
 * @brief Write RSTFLT register
 *
 * @param pRgmReg RGM instance handler
 *
 * @param u32Val RSTFLT register value
 */
LOCAL_INLINE void RGM_HWA_WriteRstfltReg(RGM_Type *pRgmReg, uint32 u32Val)
{
    pRgmReg->RSTFLT = u32Val;
}

/**
 * @brief Enable global reset interrupt
 *
 * @param pRgmReg RGM instance handler
 */
LOCAL_INLINE void RGM_HWA_EnableGlobalResetInterrupt(RGM_Type *pRgmReg)
{
    pRgmReg->SRIE |= (uint32)RGM_SRIE_GLOBAL_RIE_MASK;
}

/**
 * @brief Set Reset delay
 *
 * @param pRgmReg RGM instance handler
 * @param eDelay Reset delay type
 */
LOCAL_INLINE void RGM_HWA_SetResetDelay(RGM_Type *pRgmReg, RGM_ResetDelayType eDelay)
{
    uint32 u32RegValue = pRgmReg->SRIE;
    pRgmReg->SRIE = (u32RegValue & ~(uint32)RGM_SRIE_DELAY_MASK) | RGM_SRIE_DELAY(eDelay);
}

/**
 * @brief Enable reset interrupt
 *
 * @param pRgmReg RGM instance handler
 * @param u16Int Reset interrupt type
 */
LOCAL_INLINE void RGM_HWA_EnableSysResetInterrupt(RGM_Type *pRgmReg, uint16 u16Int)
{
    pRgmReg->SRIE |= ((uint32)u16Int & (uint32)RGM_SYS_INT_ALL);
}

/**
 * @brief Write SRIE register
 *
 * @param pRcm RGM instance handler
 * @param u32Val SRIE register value
 */
LOCAL_INLINE void RGM_HWA_WriteSrieReg(RGM_Type *pRgmReg, uint32 u32Val)
{
    pRgmReg->SRIE = u32Val;
}

/**
 * @brief Enable core 0 reset interrupt
 *
 * @param pRgmReg RGM instance handler
 * @param u16Int Reset interrupt type
 */
LOCAL_INLINE void RGM_HWA_EnableCore0ResetInterrupt(RGM_Type *pRgmReg, uint16 u16Int)
{
    pRgmReg->C0_CFG &= ~((uint32)RGM_CORE_INT_ALL);
    pRgmReg->C0_CFG |= ((uint32)u16Int & (uint32)RGM_CORE_INT_ALL);
}

/**
 * @brief Write core 0 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @param u32Val SRIE register value
 */
LOCAL_INLINE void RGM_HWA_WriteC0CfgReg(RGM_Type *pRgmReg, uint32 u32Val)
{
    pRgmReg->C0_CFG = u32Val;
}

#if ( MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON )
/**
 * @brief Enable core 1 reset interrupt
 *
 * @param pRgmReg RGM instance handler
 * @param u16Int Reset interrupt type
 */
LOCAL_INLINE void RGM_HWA_EnableCore1ResetInterrupt(RGM_Type *pRgmReg, uint16 u16Int)
{
    pRgmReg->C1_CFG &= ~((uint32)RGM_CORE_INT_ALL);
    pRgmReg->C1_CFG |= ((uint32)u16Int & (uint32)RGM_CORE_INT_ALL);
}

/**
 * @brief Write core 1 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @param u32Val Set value
 */
LOCAL_INLINE void RGM_HWA_WriteC1CfgReg(RGM_Type *pRgmReg, uint32 u32Val)
{
    pRgmReg->C1_CFG = u32Val;
}

/**
 * @brief Get core 1 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @return u32Val register value
 */
LOCAL_INLINE uint32 RGM_HWA_GetC1CfgReg(RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C1_CFG;
}

/**
 * @brief Enable core 2 reset interrupt
 *
 * @param pRgmReg RGM instance handler
 * @param u16Int Reset interrupt type
 */
LOCAL_INLINE void RGM_HWA_EnableCore2ResetInterrupt(RGM_Type *pRgmReg, uint16 u16Int)
{
    pRgmReg->C2_CFG &= ~((uint32)RGM_CORE_INT_ALL);
    pRgmReg->C2_CFG |= ((uint32)u16Int & (uint32)RGM_CORE_INT_ALL);
}

/**
 * @brief Write core 2 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @param u32Val SRIE register value
 */
LOCAL_INLINE void RGM_HWA_WriteC2CfgReg(RGM_Type *pRgmReg, uint32 u32Val)
{
    pRgmReg->C2_CFG = u32Val;
}

/**
 * @brief Get core 2 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @return u32Val register value
 */
LOCAL_INLINE uint32 RGM_HWA_GetC2CfgReg(RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C2_CFG;
}

/**
 * @brief Read last reset flag of C1_SRS reg
 *
 * @param pRgmReg RGM instance handler
 *
 * @return Last reset flag
 */
LOCAL_INLINE uint32 RGM_HWA_ReadCore1SRS(const RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C1_SRS;
}

/**
 * @brief Read last reset flag of C2_SRS reg
 *
 * @param pRgmReg RGM instance handler
 *
 * @return Last reset flag
 */
LOCAL_INLINE uint32 RGM_HWA_ReadCore2SRS(const RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C2_SRS;
}

#if (MCU_CFG_RGM_C3_SUPPORT == STD_ON)
/**
 * @brief Enable core 3 reset interrupt
 *
 * @param pRgmReg RGM instance handler
 * @param u16Int Reset interrupt type
 */
LOCAL_INLINE void RGM_HWA_EnableCore3ResetInterrupt(RGM_Type *pRgmReg, uint16 u16Int)
{
    pRgmReg->C3_CFG &= ~((uint32)RGM_CORE_INT_ALL);
    pRgmReg->C3_CFG |= ((uint32)u16Int & (uint32)RGM_CORE_INT_ALL);
}


/**
 * @brief Write core 3 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @param u32Val SRIE register value
 */
LOCAL_INLINE void RGM_HWA_WriteC3CfgReg(RGM_Type *pRgmReg, uint32 u32Val)
{
    pRgmReg->C3_CFG = u32Val;
}

/**
 * @brief Get core 3 reset interrupt register
 *
 * @param pRgmReg RGM instance handler
 * @return u32Val register value
 */
LOCAL_INLINE uint32 RGM_HWA_GetC3CfgReg(RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C3_CFG;
}

/**
 * @brief Read last reset flag of C3_SRS reg
 *
 * @param pRgmReg RGM instance handler
 *
 * @return Last reset flag
 */
LOCAL_INLINE uint32 RGM_HWA_ReadCore3SRS(const RGM_Type *pRgmReg)
{
    return (uint32)pRgmReg->C3_SRS;
}
#endif /* (MCU_CFG_RGM_C3_SUPPORT == STD_ON) */

#endif /*(MCU_CFG_RGM_MULTICORE_SUPPORT == STD_ON) */

#if defined(__cplusplus)
}
#endif
/** @}*/

#endif /* #ifndef MCU_RGM_REGOPS_H */
