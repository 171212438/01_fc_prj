/**
*   @file    Bsp_MemMap.h
*   @version 1.0.0
*
*   @brief   Bsp memory map header file.
*   @details Bsp memory map definition.
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
*   SOFTWARE VERSION     : 1.0.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CompilerDefinition.h"

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/**
* @brief Symbol used for checking correctness of the includes
*/
#define MEMMAP_ERROR

#ifdef BSP_START_SEC_RAMCODE
    #undef BSP_START_SEC_RAMCODE
    #define INSIDE_BSP_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION __attribute__((section(".bsp_ramcode")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".bsp_ramcode"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=".bsp_ramcode"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .text=".bsp_ramcode"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".bsp_ramcode"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_RAMCODE
    #ifdef INSIDE_BSP_START_SEC_RAMCODE
        #undef INSIDE_BSP_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_RAMCODE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes =
        #undef BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=""
		#undef BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_TEXT_SECTION
    #endif
#endif

#ifdef BSP_START_SEC_VAR_NO_INIT_SEPERATED
    #undef BSP_START_SEC_VAR_NO_INIT_SEPERATED
    #define INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_bss")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_bss"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=".seperated_bss"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .bss=".seperated_bss"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".seperated_bss"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED
    #ifdef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED
        #undef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_START_SEC_VAR_INIT_SEPERATED
    #undef BSP_START_SEC_VAR_INIT_SEPERATED
    #define INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_INIT_SEPERATED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_data"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data=".seperated_data" bss=".seperated_bss"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .data=".seperated_data",.bss=".seperated_bss"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".seperated_data" bss=".seperated_bss"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_INIT_SEPERATED
    #ifdef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED
        #undef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_INIT_SEPERATED
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data="" bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_START_SEC_VAR_INIT_SHAREABLE
    #undef BSP_START_SEC_VAR_INIT_SHAREABLE
    #define INSIDE_BSP_START_SEC_VAR_INIT_SHAREABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_INIT_SHAREABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".bsp_shareable_data")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".bsp_shareable_data"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data=".bsp_shareable_data" bss=".bsp_shareable_bss"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .data=".bsp_shareable_data",.bss=".bsp_shareable_bss"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".bsp_shareable_data" bss=".bsp_shareable_bss"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_INIT_SHAREABLE
    #ifdef INSIDE_BSP_START_SEC_VAR_INIT_SHAREABLE
        #undef INSIDE_BSP_START_SEC_VAR_INIT_SHAREABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_INIT_SHAREABLE
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data="" bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     TCMCODE CORE0
==================================================================================================*/
#ifdef BSP_START_SEC_TCMCODE_CORE0
    #undef BSP_START_SEC_TCMCODE_CORE0
    #define INSIDE_BSP_START_SEC_TCMCODE_CORE0
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_TCMCODE_CORE0
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION __attribute__((section(".bsp_tcmcode_core0")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".bsp_tcmcode_core0"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=".bsp_tcmcode_core0"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .text=".bsp_tcmcode_core0"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".bsp_tcmcode_core0"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_TCMCODE_CORE0
    #ifdef INSIDE_BSP_START_SEC_TCMCODE_CORE0
        #undef INSIDE_BSP_START_SEC_TCMCODE_CORE0
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_TCMCODE_CORE0
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes =
        #undef BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=""
		#undef BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_TEXT_SECTION
    #endif
#endif

/*==================================================================================================
*                                     TCMCODE CORE1
==================================================================================================*/
#ifdef BSP_START_SEC_TCMCODE_CORE1
    #undef BSP_START_SEC_TCMCODE_CORE1
    #define INSIDE_BSP_START_SEC_TCMCODE_CORE1
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_TCMCODE_CORE1
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION __attribute__((section(".bsp_tcmcode_core1")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".bsp_tcmcode_core1"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=".bsp_tcmcode_core1"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .text=".bsp_tcmcode_core1"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".bsp_tcmcode_core1"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_TCMCODE_CORE1
    #ifdef INSIDE_BSP_START_SEC_TCMCODE_CORE1
        #undef INSIDE_BSP_START_SEC_TCMCODE_CORE1
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_TCMCODE_CORE1
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=""
		#undef BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_TEXT_SECTION
    #endif
#endif

/*==================================================================================================
*                                     TCMCODE CORE2
==================================================================================================*/
#ifdef BSP_START_SEC_TCMCODE_CORE2
    #undef BSP_START_SEC_TCMCODE_CORE2
    #define INSIDE_BSP_START_SEC_TCMCODE_CORE2
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_TCMCODE_CORE2
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION __attribute__((section(".bsp_tcmcode_core2")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".bsp_tcmcode_core2"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=".bsp_tcmcode_core2"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .text=".bsp_tcmcode_core2"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".bsp_tcmcode_core2"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_TCMCODE_CORE2
    #ifdef INSIDE_BSP_START_SEC_TCMCODE_CORE2
        #undef INSIDE_BSP_START_SEC_TCMCODE_CORE2
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_TCMCODE_CORE2
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=""
		#undef BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_TEXT_SECTION
    #endif
#endif

/*==================================================================================================
*                                     TCMCODE CORE3
==================================================================================================*/
#ifdef BSP_START_SEC_TCMCODE_CORE3
    #undef BSP_START_SEC_TCMCODE_CORE3
    #define INSIDE_BSP_START_SEC_TCMCODE_CORE3
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_TCMCODE_CORE3
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION __attribute__((section(".bsp_tcmcode_core3")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_function_attributes = @ ".bsp_tcmcode_core3"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=".bsp_tcmcode_core3"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .text=".bsp_tcmcode_core3"
		#ifdef BSP_TEXT_SECTION
			#undef BSP_TEXT_SECTION
		#endif
		#define BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  text=".bsp_tcmcode_core3"
        #ifdef BSP_TEXT_SECTION
            #undef BSP_TEXT_SECTION
        #endif
        #define BSP_TEXT_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_TCMCODE_CORE3
    #ifdef INSIDE_BSP_START_SEC_TCMCODE_CORE3
        #undef INSIDE_BSP_START_SEC_TCMCODE_CORE3
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_TCMCODE_CORE3
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_TEXT_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_TEXT_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section text=""
		#undef BSP_TEXT_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_TEXT_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_TEXT_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED BSS CORE0
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE0
    #undef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE0
    #define INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE0
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE0
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_bss_core0")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_bss_core0"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=".seperated_bss_core0"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .bss=".seperated_bss_core0"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".seperated_bss_core0"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE0
    #ifdef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE0
        #undef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE0
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE0
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED BSS CORE1
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE1
    #undef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE1
    #define INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE1
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE1
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_bss_core1")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_bss_core1"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=".seperated_bss_core1"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .bss=".seperated_bss_core1"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".seperated_bss_core1"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE1
    #ifdef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE1
        #undef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE1
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE1
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED BSS CORE2
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE2
    #undef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE2
    #define INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE2
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE2
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_bss_core2")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_bss_core2"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=".seperated_bss_core2"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .bss=".seperated_bss_core2"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".seperated_bss_core2"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE2
    #ifdef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE2
        #undef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE2
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE2
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED BSS CORE3
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE3
    #undef BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE3
    #define INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE3
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE3
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_bss_core3")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_bss_core3"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=".seperated_bss_core3"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .bss=".seperated_bss_core3"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  bss=".seperated_bss_core3"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE3
    #ifdef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE3
        #undef INSIDE_BSP_START_SEC_VAR_NO_INIT_SEPERATED_CORE3
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_NO_INIT_SEPERATED_CORE3
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED DATA CORE0
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_INIT_SEPERATED_CORE0
    #undef BSP_START_SEC_VAR_INIT_SEPERATED_CORE0
    #define INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE0
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE0
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_data_core0")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_data_core0"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data=".seperated_data_core0" bss=".seperated_bss_core0"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .data=".seperated_data_core0",.bss=".seperated_bss_core0"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".seperated_data_core0" bss=".seperated_bss_core0"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE0
    #ifdef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE0
        #undef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE0
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE0
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data="" bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED DATA CORE1
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_INIT_SEPERATED_CORE1
    #undef BSP_START_SEC_VAR_INIT_SEPERATED_CORE1
    #define INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE1
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE1
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_data_core1")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_data_core1"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data=".seperated_data_core1" bss=".seperated_bss_core1"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .data=".seperated_data_core1",.bss=".seperated_bss_core1"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".seperated_data_core1" bss=".seperated_bss_core1"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE1
    #ifdef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE1
        #undef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE1
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE1
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data="" bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED DATA CORE2
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_INIT_SEPERATED_CORE2
    #undef BSP_START_SEC_VAR_INIT_SEPERATED_CORE2
    #define INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE2
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE2
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_data_core2")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_data_core2"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data=".seperated_data_core2" bss=".seperated_bss_core2"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .data=".seperated_data_core2",.bss=".seperated_bss_core2"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".seperated_data_core2" bss=".seperated_bss_core2"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE2
    #ifdef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE2
        #undef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE2
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE2
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data="" bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif

/*==================================================================================================
*                                     SEPERATED DATA CORE3
==================================================================================================*/
#ifdef BSP_START_SEC_VAR_INIT_SEPERATED_CORE3
    #undef BSP_START_SEC_VAR_INIT_SEPERATED_CORE3
    #define INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE3
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE3
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION __attribute__((section(".seperated_data_core3")))
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes = @ ".seperated_data_core3"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data=".seperated_data_core3" bss=".seperated_bss_core3"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section .data=".seperated_data_core3",.bss=".seperated_bss_core3"
		#ifdef BSP_DATA_SECTION
			#undef BSP_DATA_SECTION
		#endif
		#define BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section  data=".seperated_data_core3" bss=".seperated_bss_core3"
        #ifdef BSP_DATA_SECTION
            #undef BSP_DATA_SECTION
        #endif
        #define BSP_DATA_SECTION
    #endif
#endif

#ifdef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE3
    #ifdef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE3
        #undef INSIDE_BSP_START_SEC_VAR_INIT_SEPERATED_CORE3
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef BSP_STOP_SEC_VAR_INIT_SEPERATED_CORE3
    #undef MEMMAP_ERROR
    #if defined(_GCC_C_FC7XXX_)
        #undef BSP_DATA_SECTION
    #elif defined(_IAR_C_FC7XXX_)
        #pragma default_variable_attributes =
        #undef BSP_DATA_SECTION
	#elif defined(_LLVM_C_FC7XXX_)
		#pragma clang section data="" bss=""
		#undef BSP_DATA_SECTION
	#elif defined(_TASKING_C_FC7XXX_)
		#pragma section restore
		#undef BSP_DATA_SECTION
    #elif defined(_GREENHILLS_C_FC7XXX_)
        #pragma ghs section
        #undef BSP_DATA_SECTION
    #endif
#endif


/*==================================================================================================
                                            Report error
==================================================================================================*/
#ifdef MEMMAP_ERROR
    #error "MemMap.h, no valid memory mapping symbol defined."
#endif

#ifdef __cplusplus
}
#endif
