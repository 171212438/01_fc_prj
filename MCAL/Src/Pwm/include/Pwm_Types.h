/**
*   @file    Pwm_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR PWM - Common type definition
*   @details This file contains the PWM common type definition
*
*   @addtogroup PWM
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Pwm
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
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifndef PWM_TYPES_H
#define PWM_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                      INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Common_Cfg.h"
/*==================================================================================================
*                                        CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                   DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                          ENUMS
==================================================================================================*/
/**
 * @brief Pwm Hardware module type
 *
 */
typedef enum
{
    PWM_INSTANCE_FTU_0 = 0u,
    PWM_INSTANCE_FTU_1,
    PWM_INSTANCE_FTU_2,
    PWM_INSTANCE_FTU_3,
    PWM_INSTANCE_FTU_4,
    PWM_INSTANCE_FTU_5,
    PWM_INSTANCE_FTU_6,
    PWM_INSTANCE_FTU_7,
    PWM_INSTANCE_FTU_8,
    PWM_INSTANCE_FTU_9,
    PWM_INSTANCE_FTU_10,
    PWM_INSTANCE_FTU_11,
    PWM_INSTANCE_EFTU_0_TOM_0,
    PWM_INSTANCE_EFTU_0_TOM_1,
    PWM_INSTANCE_EFTU_1_TOM_0,
    PWM_INSTANCE_EFTU_1_TOM_1,
    PWM_INSTANCE_EFTU_2_TOM_0,
    PWM_INSTANCE_EFTU_2_TOM_1
} Pwm_InstanceType;

/**
 * @brief PWM align type
 */
typedef enum
{
    /** @brief PWM signal is edge align mode */
    PWM_EDGE_ALIGNED = 0U,/**< PWM_EDGE_ALIGNED */
    /** @brief PWM signal is center align mode */
    PWM_CENTER_ALIGNED,   /**< PWM_CENTER_ALIGNED */
} Pwm_AlignmentType;

/**
 * @brief PWM phase shift type
 */
typedef enum
{
    
    PWM_PHASESHIFT_DISABLE = 0U,/** @brief PWM channel is not enable phase shift */
    PWM_PHASESHIFT_ENABLE,      /** @brief For FTU, PWM channel combined with the (n+1) channel and generate a PWM phase shift signal in the channel (n) output.
                                           For EFTU, PWM channel combined with the selected channel */
} Pwm_PhaseShiftType;

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
*                             GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/



/*==================================================================================================
*                                FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* PWM_TYPES_H */

/** @} */
