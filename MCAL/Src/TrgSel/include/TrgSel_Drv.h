/**
*   @file    TrgSel_Drv.h
*   @version 1.5.1
*
*   @brief   AUTOSAR TrgSel - TrgSel Low level driver header file.
*   @details TrgSel module low level driver.
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

#ifndef TRGSEL_DRV_H
#define TRGSEL_DRV_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Std_Types.h"
#include "TrgSel_Types.h"
#include "TrgSel_Reg.h"
#include "CDD_TrgSel_Cfg.h"
#include "CDD_TrgSel.h"


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* size of the TRGSEL registers */
#define TRGSEL_REGSIZE           (4U)
/* number of bits to shift the SEL field */
#define TRGSEL_BITS_TO_SHIFT     (8U)

/* register address depending on the registerIndex - address of registers DMAMUXCH0, XB_OUT0_3, ADC0, etc. */
#define TRGSEL_REG_ADDR(trgmuxInstance, regIndex) \
    ((TRGSEL_BASE_ADDR32[trgmuxInstance] + (uint32)(TRGSEL_REGSIZE * (uint32)regIndex)))

/* mask of the sel input selected : mask of sel0 or sel1 or sel2 or sel3 */
#define TRGSEL_REG_SEL_MASK(trigIndex) \
    (TRGSEL_SEL0_MASK_U32 << (TRGSEL_BITS_TO_SHIFT * (trigIndex)))

/* read lock value from register */
#define TRGSEL_READ_LOCK(Unit, RegIdx) \
    ((uint32)((uint32)REG_READ32((uint32)(TRGSEL_REG_ADDR(Unit, RegIdx))) & TRGSEL_LK_BIT_MASK_U32))

/* return if register is locked */
#define TRGSEL_GET_LOCK(trgmuxInstance, trigIndex) \
    ((TRGSEL_READ_LOCK(trgmuxInstance,trigIndex) == (uint32)TRGSEL_LOCK_EN_U32) ? (TRUE) : (FALSE))

#define TRGSEL_INSTANCE0     0
#define TRGSEL_INSTANCE1     1
#define TRGSEL_INSTANCE2     2
#define TRGSEL_INSTANCE3     3

#ifdef TRGSEL_FC7240_SUPPORT
#define TRGSEL_INSTANCE4     4
#define TRGSEL_INSTANCE5     5
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
#define TRGSEL_INSTANCE4     4
#define TRGSEL_INSTANCE5     5
#define TRGSEL_INSTANCE6     6
#define TRGSEL_INSTANCE7     7
#define TRGSEL_INSTANCE8     8
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
typedef uint32 TrgSel_UnitOutputType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
extern const uint32 TRGSEL_BASE_ADDR32[TRGSEL_MAX_INSTANCE];

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define TRGSEL_START_SEC_CODE
#include "TrgSel_MemMap.h"

TRGSEL_TEXT_SECTION void TrgSel_HL_Init(const TrgSel_ConfigType *pTrgSelConfig);
TRGSEL_TEXT_SECTION void TrgSel_HL_DeInit(void);
TRGSEL_TEXT_SECTION void TrgSel_HL_Config_Sel(TrgSel_OutputType TriggerOutput,TrgSel_SourceType TriggerSource);
TRGSEL_TEXT_SECTION void TrgSel_HL_Enable_Lock(TrgSel_OutputType TriggerOutput);
TRGSEL_TEXT_SECTION boolean TrgSel_HL_Get_Lock(TrgSel_OutputType TriggerOutput);

#define TRGSEL_STOP_SEC_CODE
#include "TrgSel_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* TRGSEL_DRV_H */

/** @} */
