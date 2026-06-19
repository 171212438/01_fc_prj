/**
 *   @file    CompilerDefinition.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CompilerDefinition
 *   @details This file contains the AUTOSAR CompilerDefinition
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Common
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: The macros defined here is used to indicate the compiler */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be
 * declared Reason: The macros defined here is used to indicate the compiler */
#ifndef COMPILERDEFINITION_H
#define COMPILERDEFINITION_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: There are some macros defined to indicate the AUTOSAR and software version, so the
 * version number may not distinct */
#define COMPILERDEFINITION_VENDOR_ID                   174

#define COMPILERDEFINITION_AR_RELEASE_MAJOR_VERSION    4

#define COMPILERDEFINITION_AR_RELEASE_MINOR_VERSION    6

#define COMPILERDEFINITION_AR_RELEASE_REVISION_VERSION 0
#define COMPILERDEFINITION_SW_MAJOR_VERSION            1
#define COMPILERDEFINITION_SW_MINOR_VERSION            5
#define COMPILERDEFINITION_SW_PATCH_VERSION            1
/* PRQA S 0791 -- */
/**@}*/
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#if defined(__ghs__)
    /**
     * @brief Symbol required to be defined when GreenHills compiler is used.
     */
    #define _GREENHILLS_C_FC7XXX_
#elif defined(__LLVM__)
    /**
     * @brief Symbol required to be defined when Clang compiler is used.
     */
    #define _LLVM_C_FC7XXX_
#elif defined(__ICCARM__)
    /**
     * @brief Symbol required to be defined when IAR compiler is used.
     */
    #define _IAR_C_FC7XXX_
#elif defined(__GNUC__)
    /**
     * @brief Symbol required to be defined when GCC compiler is used.
     */
    #define _GCC_C_FC7XXX_
#elif defined(__TASKING__)
    /**
     * @brief Symbol required to be defined when Tasking compiler is used.
     */
    #define _TASKING_C_FC7XXX_
#endif

#ifdef __cplusplus
}
#endif

#endif /* #ifndef COMPILERDEFINITION_H */

/* PRQA S 0602 -- */
/* PRQA S 0603 -- */
