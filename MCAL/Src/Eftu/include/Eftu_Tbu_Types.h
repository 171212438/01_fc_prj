/**
 *   @file    Eftu_Tbu_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TBU driver specific type definition.
 *   @details This file contains the TBU hardware specific type definition
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TBU
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
*   1.0.0       14/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
#ifndef EFTU_TBU_TYPES_H
#define EFTU_TBU_TYPES_H

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
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Enumeration type defining the TBU channels
 *
 */
typedef enum
{
    EFTU_TBU_CNT0 = 0U,
    EFTU_TBU_CNT1,
    EFTU_TBU_CNT2,
    EFTU_TBU_CNT3
} EFTU_TBU_ChannelType;

/**
 * @brief Enumeration type defining the TBU clock source
 *
 */
typedef enum
{
    EFTU_TBU_CCM_CLK_0 = 0U,
    EFTU_TBU_CCM_CLK_1,
    EFTU_TBU_CCM_CLK_2,
    EFTU_TBU_CCM_CLK_3,
    EFTU_TBU_CCM_CLK_4,
    EFTU_TBU_CCM_CLK_5,
    EFTU_TBU_CCM_CLK_6,
    EFTU_TBU_CCM_CLK_7
} EFTU_TBU_ClkSrcType;

/**
 * @brief Enumeration type defining the TBU_CH0_BASE Register Resolution
 *
 */
typedef enum
{
    EFTU_TBU_CNT0_0_23BIT = 0U, /**< TBU counter uses lower counter bits [23:0] */
    EFTU_TBU_CNT0_3_26BIT       /**< TBU counter uses upper counter bits [26:3] */
} EFTU_TBU_ResolutionType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Configuration parameters for a TBU channel
 *
 */
typedef struct
{
    EFTU_TBU_ChannelType    eChannel;    /**< Type of the TBU channel */
    EFTU_TBU_ClkSrcType     eClockSrc;   /**< Clock source for the TBU channel */
    EFTU_TBU_ResolutionType eResolution; /**< Resolution setting for the TBU channel */
} Eftu_TbuChannelConfigType;

/**
 * @brief Global configuration for the TBU module
 *
 */
typedef struct
{
    uint8                      u8ChannelCount; /**< Number of TBU channels */
    Eftu_TbuChannelConfigType *pChannel; /**< Pointer to the array of TBU channel configurations */
} Eftu_TbuConfigType;

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

#endif /* EFTU_TBU_TYPES_H */
/** @} */
