/**
*   @file    TrgSel_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR TrgSel - TrgSel registers and macros definitions.
*   @details TrgSel registers and macros definitions.
*
*   @addtogroup TRGSEL
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Trgsel
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       17/09/2022    QXW0087       N/A          Trgsel Initial Version
*   0.2.0       15/03/2023    QXW0087       N/A          Refactor of Trgsel Driver
*   0.3.0       12/10/2023    QXW0103       N/A          Add Multicore Support，Delete Unused Drivers
*   0.4.0       13/11/2023    QXW0103       N/A          Fix Bugs, Add Default config
*   0.5.0       16/01/2024    QXW0103       N/A          Fix Bugs, Optimize Code
*   0.6.0       18/03/2024    QXW0103       N/A          Add Support For FC7240
==================================================================================================*/

#ifndef TRGSEL_REG_H
#define TRGSEL_REG_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================

*


==================================================================================================*/
#include "StdRegMacros.h"
#include "CDD_TrgSel_Cfg.h"
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define TRGSEL0_BASEADDR                ((uint32)(0x40026000UL))
#define TRGSEL1_BASEADDR                ((uint32)(0x40027000UL))
#define TRGSEL2_BASEADDR                ((uint32)(0x40028000UL))
#define TRGSEL3_BASEADDR                ((uint32)(0x40029000UL))

#ifdef TRGSEL_FC7240_SUPPORT
#define TRGSEL4_BASEADDR                ((uint32)(0x4043B000UL))
#define TRGSEL5_BASEADDR                ((uint32)(0x4043C000UL))
#else
#ifdef TRGSEL_FC7300DQ_SUPPORT
#define TRGSEL4_BASEADDR                ((uint32)(0x40039000UL))
#define TRGSEL5_BASEADDR                ((uint32)(0x4003A000UL))
#define TRGSEL6_BASEADDR                ((uint32)(0x4003B000UL))
#define TRGSEL7_BASEADDR                ((uint32)(0x4003C000UL))
#define TRGSEL8_BASEADDR                ((uint32)(0x4003D000UL))
#else
#if ((defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
#define TRGSEL4_BASEADDR                ((uint32)(0x4043D000UL))
#define TRGSEL5_BASEADDR                ((uint32)(0x4043E000UL))
#define TRGSEL6_BASEADDR                ((uint32)(0x4043F000UL))
#define TRGSEL7_BASEADDR                ((uint32)(0x40440000UL))
#define TRGSEL8_BASEADDR                ((uint32)(0x40441000UL))
#endif /* (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)) */
#endif /* TRGSEL_FC7300DQ_SUPPORT */
#endif /* TRGSEL_FC7240_SUPPORT */

/** TRGSEL masks */
/** mask for SEL0 bits */
#define TRGSEL_SEL0_MASK_U32            ((uint32)(0x0000007FUL))
/** mask for SEL1 bits */
#define TRGSEL_SEL1_MASK_U32            ((uint32)(0x00007F00UL))
/** mask for SEL2 bits */
#define TRGSEL_SEL2_MASK_U32            ((uint32)(0x007F0000UL))
/** mask for SEL3 bits */
#define TRGSEL_SEL3_MASK_U32            ((uint32)(0x7F000000UL))
/** mask for LK bit */
#define TRGSEL_LK_BIT_MASK_U32          ((uint32)(0x80000000UL))

/** TRGSEL values for shift bits */
#define TRGSEL_SEL0_SHIFT_U32           ((uint32)(0U))
#define TRGSEL_SEL1_SHIFT_U32           ((uint32)(8U))
#define TRGSEL_SEL2_SHIFT_U32           ((uint32)(16U))
#define TRGSEL_SEL3_SHIFT_U32           ((uint32)(24U))
#define TRGSEL_LOCK_SHIFT_U32           ((uint32)(31U))

/** TRGSEL  values of the LK bit */
#define TRGSEL_LOCK_EN_U32              ((uint32)(0x80000000UL))
#define TRGSEL_LOCK_DIS_U32             ((uint32)(0U))
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* TRGSEL_REG_H */

/** @} */
