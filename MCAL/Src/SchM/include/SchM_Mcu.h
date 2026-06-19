/**
*   @file    SchM_Mcu.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Rte - module interface
*   @details This file contains the functions prototypes and data types of the AUTOSAR Rte.
*            This file contains sample code only. It is not part of the production code deliverables.
*
*   @addtogroup SchM_MODULE
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
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
==================================================================================================*/

#ifndef SCHM_MCU_H
#define SCHM_MCU_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_03() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_04() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_05() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_06() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_07() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_08() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_09() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_10() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_11() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_12() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_13() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_14() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_15() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_16() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_17() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_18() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_19() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_20() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_21() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_22() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_23() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_24() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_25() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_26() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_27() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_28() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_29() SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA()

#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_03() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_04() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_05() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_06() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_07() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_08() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_09() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_10() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_11() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_12() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_13() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_14() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_15() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_16() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_17() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_18() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_19() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_20() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_21() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_22() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_23() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_24() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_25() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_26() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_27() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_28() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()
#define SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_29() SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA()

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define SCHM_START_SEC_CODE
#include "SchM_MemMap.h"

SCHM_TEXT_SECTION void SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA(void);

SCHM_TEXT_SECTION void SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA(void);

#define SCHM_STOP_SEC_CODE
#include "SchM_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* SCHM_MCU_H */

/** @} */

