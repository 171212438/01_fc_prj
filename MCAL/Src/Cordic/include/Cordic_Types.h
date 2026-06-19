/**
*   @file    Cordic.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Cordic - Cordic Ip driver header file.
*   @details
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
#ifndef CORDIC_TYPES_H
#define CORDIC_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
/**
 * @defgroup HwA_cordic HwA_cordic
 * @ingroup module_driver_cordic
 * @{
 */

/**
 * \brief CORDIC Iteration Type
 *
 * Defines the number of iterations for the CORDIC algorithm.
 */
typedef enum
{
    CORDIC_Iteration_8 = 0,
    CORDIC_Iteration_16,
    CORDIC_Iteration_24
} CORDIC_IterationType;

/**
 * \brief CORDIC System Type
 *
 * Specifies the system type for the CORDIC algorithm.
 */
typedef enum
{
    CORDIC_Trigonometric = 0,
    CORDIC_Hyperbolic,
    CORDIC_Linear
} CORDIC_SystemType;

/**
 * \brief CORDIC Mode Type
 *
 * Specifies the operation mode for the CORDIC algorithm.
 */
typedef enum
{
    CORDIC_Rotate = 0,
    CORDIC_Vector
} CORDIC_ModeType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*CRC_H*/

/** @} */
