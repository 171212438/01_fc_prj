/**
 *   @file    Eftu_Tom_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TOM driver specific type definition.
 *   @details This file contains the TOM hardware specific type definition
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TOM
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
#ifndef EFTU_TOM_TYPES_H
#define EFTU_TOM_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Eftu_Common_Types.h"
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
 * @brief Enumeration type defining the selection of time base used for comparison.
 *
 */
typedef enum
{
    EFTU_TOM_TBU_SEL_TS0 = 0U, /**< TBU_TS0 selected */
    EFTU_TOM_TBU_SEL_TS1,      /**< TBU_TS1 selected */
    EFTU_TOM_TBU_SEL_TS2       /**< TBU_TS2 selected */
} EFTU_TOM_TimeBaseSelType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Structure to configure a TGC action.
 *
 */
typedef struct
{
    EFTU_InstanceType        eEftuInstance;    /**< EFTU instance type */
    EFTU_TOM_InstanceType    eTomInstance;     /**< TOM instance type */
    EFTU_TOM_TimeBaseSelType eTbuSelection;    /**< Time base selection */
    uint32                   u32TimeBaseValue; /**< Time base value */
} Eftu_TomInsConfigType;

/**
 * @brief Structure to configure global TGC actions.
 *
 */
typedef struct
{
    uint8                  u8InstanceCount; /**< Number of TOM instances */
    Eftu_TomInsConfigType *pTomConfig; /**< Pointer to an array of TOM instance configurations */
} Eftu_TomConfigType;
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
