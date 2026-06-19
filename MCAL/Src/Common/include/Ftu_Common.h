/**
*   @file    Ftu_Common.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ftu - common types and function prototypes.
*   @details Ftu module common types and function prototypes.
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef FTU_COMMON_H
#define FTU_COMMON_H

#ifdef __cplusplus
extern "C"
{
#endif
/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Ftu_RegOps.h"
#include "Std_Types.h"

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef enum
{
    FTU_COMMON_MASTER_PWM = 0,
    FTU_COMMON_MASTER_ICU,
} FtuCommon_MasterType;

typedef struct
{
    uint8                u8Instance;
    FTU_ModuleClkSrcType eClockSource;
    uint8                u8ExternalClockIndex;
    uint32               u32ModuloValue;
    uint8                u8Prescaler;
} FtuCommon_ConfigType;

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define COMMON_START_SEC_CODE
#include "Common_MemMap.h"

COMMON_TEXT_SECTION void FtuCommon_Init(FtuCommon_MasterType        eMaster,
                                        const FtuCommon_ConfigType *pConfig);

COMMON_TEXT_SECTION void FtuCommon_DeInit(FtuCommon_MasterType eMaster, uint8 u8Instance);

COMMON_TEXT_SECTION void FtuCommon_EnableOverflow(FtuCommon_MasterType eMaster, uint8 u8Instance);

COMMON_TEXT_SECTION void FtuCommon_DisableOverflow(FtuCommon_MasterType eMaster, uint8 u8Instance);

COMMON_TEXT_SECTION void FtuCommon_ConfigGTB(const uint32 u32Mask, boolean bEnable);

#define COMMON_STOP_SEC_CODE
#include "Common_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* FTU_COMMON_H */

/** @} */
