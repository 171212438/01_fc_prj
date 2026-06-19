/**
*   @file    MemIf_Types.h
*   @version 0.3.0
*
*   @brief   AUTOSAR MemIf - driver API and development errors definition.
*   @details This file contains the MemIf Autosar driver API and development errors definition.
*
*   @addtogroup MemIf
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FLS
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 0.3.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
#ifndef MEMIF_TYPES_H
#define MEMIF_TYPES_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "MemIf_Version.h"

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
typedef enum
{
    MEMIF_UNINIT,
    MEMIF_IDLE,
    MEMIF_BUSY,
    MEMIF_BUSY_INTERNAL
} MemIf_StatusType;

typedef enum
{
    MEMIF_JOB_OK,
    MEMIF_JOB_FAILED,
    MEMIF_JOB_PENDING,
    MEMIF_JOB_CANCELED,
    MEMIF_BLOCK_INCONSISTENT,
    MEMIF_BLOCK_INVALID
} MemIf_JobResultType;

typedef enum
{
    MEMIF_MODE_SLOW,
    MEMIF_MODE_FAST
} MemIf_ModeType;

#endif
