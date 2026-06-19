/**
*   @file    CDD_TrgSel_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR TrgSel - Data structures for the TRGSEL driver.
*   @details Postbuild structure configurations for the driver initalization.
*
*   @addtogroup TRGSEL
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : TrgSel
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


#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_TrgSel.h"
#include "TrgSel_Reg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file             CDD_TrgSel_PBcfg.c
*
*/
#define TRGSEL_PBCFG_VENDOR_ID_C                     174
#define TRGSEL_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define TRGSEL_PBCFG_AR_RELEASE_MINOR_VERSION_C      6
#define TRGSEL_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define TRGSEL_PBCFG_SW_MAJOR_VERSION_C              1
#define TRGSEL_PBCFG_SW_MINOR_VERSION_C              5
#define TRGSEL_PBCFG_SW_PATCH_VERSION_C              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                      LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

#define TRGSEL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "TrgSel_MemMap.h"

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined*/
/* Reason: The object will be referenced in other modules and declared where it is used */
/**
* @brief            TrgSel basic configuration.
* @details          Configuration for TrgSel hw IP.
*                   The TrgSel allows to route trigger sources to peripherals.
*
*/






TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel0_Config[TRGSEL0_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_SCM0_SW_TRG1 << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL0_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel1_Config[TRGSEL1_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL1_SRC_SCM0_SW_TRG4 << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL1_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel2_Config[TRGSEL2_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        0,
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL2_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel3_Config[TRGSEL3_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL3_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel4_Config[TRGSEL4_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL4_SRC_TRGSEL0_OUT0 << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL4_SRC_TRGSEL_OUT0 << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL4_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel5_Config[TRGSEL5_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL5_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel6_Config[TRGSEL6_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL6_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel7_Config[TRGSEL7_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL7_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };

TRGSEL_DATA_SECTION const TrgSel_OutputRegType TrgSel8_Config[TRGSEL8_NUM_REGS] =
    {
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        ),
        (
        (TRGSEL_SEL0_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL0_SHIFT_U32))|
        (TRGSEL_SEL1_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL1_SHIFT_U32))|
        (TRGSEL_SEL2_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL2_SHIFT_U32))|
        (TRGSEL_SEL3_MASK_U32 & ((uint32)TRGSEL8_SRC_VSS << TRGSEL_SEL3_SHIFT_U32))
        |
        (TRGSEL_LK_BIT_MASK_U32 & (TRGSEL_LOCK_DIS_U32))
        )
    };





/* PRQA S 3408 -- */
/**
* @brief            TrgSel basic configuration.
* @details          Configuration for TrgSel.
*
*/
TRGSEL_DATA_SECTION const TrgSel_ConfigType TrgSel_Config =
{
    /** Configuration for the trigger selection hardware IP */
    TrgSel0_Config,
    TrgSel1_Config,
    TrgSel2_Config,
	TrgSel3_Config


   	,
    TrgSel4_Config,
    TrgSel5_Config,
    TrgSel6_Config,
    TrgSel7_Config,
    TrgSel8_Config


};

#define TRGSEL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "TrgSel_MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/



#ifdef __cplusplus
}
#endif

/** @} */

