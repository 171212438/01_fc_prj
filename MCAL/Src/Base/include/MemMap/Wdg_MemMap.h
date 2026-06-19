/**
 *   @file    Wdg_MemMap.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Wdg - memory map header file.
 *   @details WDG memory map definition.
 *
 *   @addtogroup Base
 *   @{
 *
 */
/* clang-format off */
/*==================================================================================================
*   PERIPHERAL           : WDG
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   1.0.0       17/10/2023    QXW0030       N/A          Initial Release
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CompilerDefinition.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief Parameters that shall be published within the memory map header file and also in the
*       module's description file
*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/**
* @brief Symbol used for checking correctness of the includes
*/
#define MEMMAP_ERROR

#ifndef AUTOSAR_OS_NOT_USED
        #include "Os_MemMap.h"
#endif

#ifdef WDG_START_SEC_CONFIG_DATA_8
    #undef WDG_START_SEC_CONFIG_DATA_8
    #define INSIDE_WDG_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_const_cfg")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_WDG_START_SEC_CONFIG_DATA_8
        #undef INSIDE_WDG_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONFIG_DATA_8
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONFIG_DATA_16
    #undef WDG_START_SEC_CONFIG_DATA_16
    #define INSIDE_WDG_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_const_cfg")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_WDG_START_SEC_CONFIG_DATA_16
        #undef INSIDE_WDG_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONFIG_DATA_16
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONFIG_DATA_32
    #undef WDG_START_SEC_CONFIG_DATA_32
    #define INSIDE_WDG_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_const_cfg")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_WDG_START_SEC_CONFIG_DATA_32
        #undef INSIDE_WDG_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONFIG_DATA_32
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
    #undef WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_const_cfg")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_const_cfg"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
        #undef INSIDE_WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONST_BOOLEAN
    #undef WDG_START_SEC_CONST_BOOLEAN
    #define INSIDE_WDG_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_rodata")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_WDG_START_SEC_CONST_BOOLEAN
        #undef INSIDE_WDG_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONST_BOOLEAN
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONST_8
    #undef WDG_START_SEC_CONST_8
    #define INSIDE_WDG_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_rodata")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONST_8
    #ifdef INSIDE_WDG_START_SEC_CONST_8
        #undef INSIDE_WDG_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONST_8
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONST_16
    #undef WDG_START_SEC_CONST_16
    #define INSIDE_WDG_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_rodata")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONST_16
    #ifdef INSIDE_WDG_START_SEC_CONST_16
        #undef INSIDE_WDG_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONST_16
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONST_32
    #undef WDG_START_SEC_CONST_32
    #define INSIDE_WDG_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_rodata")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONST_32
    #ifdef INSIDE_WDG_START_SEC_CONST_32
        #undef INSIDE_WDG_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONST_32
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CONST_UNSPECIFIED
    #undef WDG_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_WDG_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_rodata")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  rodata=".wdg_mcal_rodata"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_WDG_START_SEC_CONST_UNSPECIFIED
        #undef INSIDE_WDG_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section rodata=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CODE
    #undef WDG_START_SEC_CODE
    #define INSIDE_WDG_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION __attribute__((section(".wdg_mcal_text")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section text=".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .text=".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CODE
    #ifdef INSIDE_WDG_START_SEC_CODE
        #undef INSIDE_WDG_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CODE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes =
        #undef WDG_TEXT_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section text=""
        #undef WDG_TEXT_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_TEXT_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_RAMCODE
    #undef WDG_START_SEC_RAMCODE
    #define INSIDE_WDG_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION __attribute__((section(".wdg_mcal_ramcode")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".wdg_mcal_ramcode"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section text=".wdg_mcal_ramcode"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .text=".wdg_mcal_ramcode"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".wdg_mcal_ramcode"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_RAMCODE
    #ifdef INSIDE_WDG_START_SEC_RAMCODE
        #undef INSIDE_WDG_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_RAMCODE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes =
        #undef WDG_TEXT_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section text=""
        #undef WDG_TEXT_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_TEXT_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_CODE_AC
    #undef WDG_START_SEC_CODE_AC
    #define INSIDE_WDG_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION __attribute__((section(".wdg_mcal_text")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section text=".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .text=".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".wdg_mcal_text"
        #ifdef WDG_TEXT_SECTION
            #undef WDG_TEXT_SECTION
        #endif
        #define WDG_TEXT_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_CODE_AC
    #ifdef INSIDE_WDG_START_SEC_CODE_AC
        #undef INSIDE_WDG_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_CODE_AC
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes =
        #undef WDG_TEXT_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section text=""
        #undef WDG_TEXT_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_TEXT_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_BOOLEAN
    #undef WDG_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_BOOLEAN
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_8
    #undef WDG_START_SEC_VAR_NO_INIT_8
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_8
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_8
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif


#ifdef WDG_START_SEC_VAR_NO_INIT_16
    #undef WDG_START_SEC_VAR_NO_INIT_16
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_16
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_16
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_32
    #undef WDG_START_SEC_VAR_NO_INIT_32
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_32
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_32
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_BOOLEAN
    #undef WDG_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_WDG_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_data",.bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_BOOLEAN
        #undef INSIDE_WDG_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_BOOLEAN
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_8
    #undef WDG_START_SEC_VAR_INIT_8
    #define INSIDE_WDG_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_data",.bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_8
        #undef INSIDE_WDG_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_8
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_16
    #undef WDG_START_SEC_VAR_INIT_16
    #define INSIDE_WDG_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_data",.bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_16
        #undef INSIDE_WDG_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_16
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_32
    #undef WDG_START_SEC_VAR_INIT_32
    #define INSIDE_WDG_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_data",.bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_32
        #undef INSIDE_WDG_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_32
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_UNSPECIFIED
    #undef WDG_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_WDG_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_data",.bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_data" bss=".wdg_mcal_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_UNSPECIFIED
        #undef INSIDE_WDG_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_nocacheable_data",.bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_nocacheable_data",.bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_8_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif


#ifdef WDG_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_nocacheable_data",.bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_16_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_nocacheable_data",.bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_32_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_nocacheable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_nocacheable_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_nocacheable_data",.bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_nocacheable_data" bss=".wdg_mcal_nocacheable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_shareable_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .bss=".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
    #undef WDG_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
    #define INSIDE_WDG_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef WDG_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION __attribute__((section(".wdg_mcal_shareable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".wdg_mcal_shareable_data"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data=".wdg_mcal_shareable_data" bss=".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section .data=".wdg_mcal_shareable_data",.bss=".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".wdg_mcal_shareable_data" bss=".wdg_mcal_shareable_bss"
        #ifdef WDG_DATA_SECTION
            #undef WDG_DATA_SECTION
        #endif
        #define WDG_DATA_SECTION
    #endif
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
    #ifdef INSIDE_WDG_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
        #undef INSIDE_WDG_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef WDG_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef WDG_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef WDG_DATA_SECTION
    #elif defined(_LLVM_C_FC7XXX_)
        #pragma clang section data="" bss=""
        #undef WDG_DATA_SECTION
    #elif defined(_TASKING_C_FC7XXX_)
        #pragma section restore
        #undef WDG_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef WDG_DATA_SECTION
    #endif
#endif

/*==================================================================================================
                                            Report error
==================================================================================================*/
#ifdef MEMMAP_ERROR
    #error "MemMap.h, no valid memory mapping symbol defined."
#endif

/*==================================================================================================
*                                            ENUMS
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

#ifdef __cplusplus
}
#endif

/** @} */
