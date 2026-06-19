// PRQA S 1339 EOF
/**
 *   @file    Cordic_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Cordic - hardware specific type definition
 *   @details This file contains the Pwm Autosar hardware specific type definition
 *
 *   @addtogroup Cordic
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Cordic
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2024-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       02/04/2025    QXW0054       N/A          Release version
==================================================================================================*/
#ifndef CORDIC_REGOPS_H
#define CORDIC_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Cordic_Types.h"

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * \brief Set CORDIC module Control register
 *
 * Sets the control register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \param u32Value Control register value to set.
 */

LOCAL_INLINE void Cordic_HWA_SetCtrl(CORDIC_Type *const pCordic, uint32 u32Value)
{
    pCordic->CTRL = u32Value;
}

/**
 * \brief Read CORDIC module Control register
 *
 * Reads the control register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \return Control register value.
 */
LOCAL_INLINE uint32 Cordic_HWA_GetCtrl(CORDIC_Type *const pCordic)
{
    return (uint32)(pCordic->CTRL);
}

/**
 * \brief Set CORDIC module X Input register
 *
 * Sets the X input register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \param u32Value X input register value to set.
 */
LOCAL_INLINE void Cordic_HWA_Set_XInput(CORDIC_Type *const pCordic, sint32 u32Value)
{
    pCordic->X_INPUT = *((uint32 *)&u32Value);
}

/**
 * \brief Set CORDIC module Y Input register
 *
 * Sets the Y input register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \param u32Value Y input register value to set.
 */
LOCAL_INLINE void Cordic_HWA_Set_YInput(CORDIC_Type *const pCordic, sint32 u32Value)
{
    pCordic->Y_INPUT = *((uint32 *)&u32Value);
}

/**
 * \brief Set CORDIC module Z Input register
 *
 * Sets the Z input register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \param u32Value Z input register value to set.
 */
LOCAL_INLINE void Cordic_HWA_Set_ZInput(CORDIC_Type *const pCordic, sint32 u32Value)
{
    pCordic->Z_INPUT = *((uint32 *)&u32Value);
}

/**
 * \brief Read CORDIC module X Output register
 *
 * Reads the X output register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \return X output register value.
 */
LOCAL_INLINE sint32 Cordic_HWA_Get_XOutput(CORDIC_Type *const pCordic)
{
    return (sint32)(pCordic->X_OUTPUT);
}

/**
 * \brief Read CORDIC module Y Output register
 *
 * Reads the Y output register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \return Y output register value.
 */
LOCAL_INLINE sint32 Cordic_HWA_Get_YOutput(CORDIC_Type *const pCordic)
{
    return (sint32)(pCordic->Y_OUTPUT);
}

/**
 * \brief Read CORDIC module Z Output register
 *
 * Reads the Z output register value of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \return Z output register value.
 */
LOCAL_INLINE sint32 Cordic_HWA_Get_ZOutput(CORDIC_Type *const pCordic)
{
    return (sint32)(pCordic->Z_OUTPUT);
}

/**
 * \brief Read CORDIC module State
 *
 * Reads the current state of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 * \return Current state of the CORDIC module.
 */
LOCAL_INLINE boolean Cordic_HWA_Get_Stat(CORDIC_Type *const pCordic)
{
    return (boolean)(pCordic->STAT & CORDIC_STAT_DONE_MASK);
}

/**
 * \brief Clear CORDIC module done Flag
 *
 * Reads the current state of the CORDIC module.
 *
 * \param pCordic Pointer to the CORDIC module.
 */
LOCAL_INLINE void Cordic_HWA_Clear_Stat(CORDIC_Type *const pCordic)
{
    pCordic->STAT |= CORDIC_STAT_DONE_MASK;
}

#ifdef __cplusplus
}
#endif

#endif
