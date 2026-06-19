/**
 *   @file    Eftu_Cmu_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - CMU driver specific type definition.
 *   @details This file contains the CMU hardware specific type definition
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CMU
*   PLATFORM             : Flagchip FC7300
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
*   1.0.0       15/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_CMU_TYPES_H
#define EFTU_CMU_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief   Define the number of EFTU CMU clock sources
 */
#define EFTU_CMU_CLK_COUNT 8U
/**
 * @brief   Define the number of EFTU external clock sources as 2
 */
#define EFTU_EXT_CLK_COUNT 2U
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Enumeration type defining the input selection for clock resolution generator.
 *
 */
typedef enum
{
    EFTU_CMU_GCLK_EN  = 0u, /**< Use Clock resolution CMU_GCLK_EN */
    EFTU_CMU_ECLK1_EN = 1U, /**< Use Clock resolution CMU_ECLK1_EN, which corresponds to the
                                 clock CMU_ECLK1 */
} EFTU_CMU_ClkCtrlSrcType;

/**
 * @brief Enumeration type defining the input selection for CMU_CLK_RES[8].
 *
 */
typedef enum
{
    EFTU_CMU_CLK8_CLS0_CLK = 0u, /**< Use Clock resolution '1', which corresponds to the cluster
                                       clock CLS[0]_CLK operating frequency CLS[0]_CLK */
    EFTU_CMU_CLK8_ECLK0_EN = 1U, /**< Use Clock resolution CMU_ECLK0_EN, which corresponds to the
                                      clock CMU_ECLK0 */
} EFTU_CMU_Clk8CtrlSrcType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief  Define a structure type for configuring global clock settings
 *
 */
typedef struct
{
    struct
    {
        uint8 u8Numerator;   /**< Numerator of the global clock */
        uint8 u8Denominator; /**< Denominator of the global clock */
    } tGlobalClock;
    struct
    {
        boolean                 bEnable;      /**< Enable flag for this clock source */
        EFTU_CMU_ClkCtrlSrcType eClockSource; /**< Type of clock source */
        uint8                   u8Divider;    /**< Clock divider value */
    } aCmuClock[EFTU_CMU_CLK_COUNT];
    EFTU_CMU_Clk8CtrlSrcType eClk8Source; /**< CLK8 clock source */

    struct
    {
        boolean bEnable;       /**< Enable flag for this external clock source */
        uint8   u8Numerator;   /**< Numerator of the external clock */
        uint8   u8Denominator; /**<  Denominator of the external clock */
    } aExtClock[EFTU_EXT_CLK_COUNT];
} Eftu_CmuConfigType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif
/** @} */
