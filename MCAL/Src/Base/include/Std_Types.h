
/**
*   @file    Std_Types.h
*   @implements      Std_Types.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR Standard Types Definition.
*   @details This file contains AUTOSAR the Standard Types Definition.
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef STD_TYPES_H
#define STD_TYPES_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Platform_Types.h"
#include "Compiler.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define STD_VENDOR_ID                     174

/* versions is only allowed to use in precompile lines, no convert need*/
#define STD_AR_RELEASE_MAJOR_VERSION      (4)
#define STD_AR_RELEASE_MINOR_VERSION      (6)
#define STD_AR_RELEASE_REVISION_VERSION   (0)
#define STD_SW_MAJOR_VERSION              (1)
#define STD_SW_MINOR_VERSION              (0)
#define STD_SW_PATCH_VERSION              (0)


/*==================================================================================================
*                                         CONSTANTS
==================================================================================================*/
#define STD_HIGH                        (1)
#define STD_LOW                         (0)

#define STD_ACTIVE                      (1)
#define STD_IDLE                        (0)

/* on off is only allowed to use in precompile lines, no convert need*/
#define STD_ON                          (1)
#define STD_OFF                         (0)

/* config level is only allowed to use in precompile lines, no convert need */
#define STD_CONFIG_VARIANTS_PRECOMPILE  (1)
#define STD_CONFIG_VARIANTS_LINKTIME    (2)
#define STD_CONFIG_VARIANTS_POSTBUILD   (3)

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* E_OK and E_NOT_OK are only used where Std_ReturnType used */
#ifndef STATUSTYPEDEFINED
  #define STATUSTYPEDEFINED
  #define E_OK    ((Std_ReturnType)0)
#endif

#define E_NOT_OK  ((Std_ReturnType)1)

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* This typedef has been added for OSEK compliance */
/* [SWS_Pwm_00094] */
typedef uint8 Std_ReturnType;
typedef struct
{
    uint16 vendorID;
    uint16 moduleID;
    uint8  sw_major_version;
    uint8  sw_minor_version;
    uint8  sw_patch_version;
} Std_VersionInfoType;

/* Init State */
typedef enum
{
    STD_UNINITIALIZED = 0,
    STD_INITIALIZED   = 1
} Std_InitStateType;

#endif  /* STD_TYPES_H */

