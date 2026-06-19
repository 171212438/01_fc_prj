/**
*   @file    Compiler.h
*   @implements      Compiler.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR General Compiler Definition.
*   @details This file contains AUTOSAR the General Compiler Definition.
*
*/
/* clang-format off */
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
#ifndef COMPILER_H
#define COMPILER_H

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Compiler_Cfg.h"
#include "CompilerDefinition.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define COMPILER_VENDOR_ID                   (174)

#define COMPILER_AR_RELEASE_MAJOR_VERSION    4
#define COMPILER_AR_RELEASE_MINOR_VERSION    6
#define COMPILER_AR_RELEASE_REVISION_VERSION 0
#define COMPILER_SW_MAJOR_VERSION            1
#define COMPILER_SW_MINOR_VERSION            5
#define COMPILER_SW_PATCH_VERSION            1

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* AUTOMATIC used for the declaration of local pointers */
#define AUTOMATIC

#define TYPEDEF

/* _STATIC_ define for abstraction of compiler keyword static */
#define STATIC static

/* NULL_PTR define with a void pointer to zero definition */
#ifndef NULL_PTR
  #define NULL_PTR ((void *)0)
#endif

/*_INLINE_ define for abstraction of the keyword inline */
/* These macro are empty because we dont suggest to use inline */
#ifndef __IO
  #ifdef __cplusplus
    #define __I volatile       /*!< Defines 'read only' permissions                 */
  #else
    #define __I volatile const /*!< Defines 'read only' permissions                 */
  #endif

  #define __O  volatile        /*!< Defines 'write only' permissions                */
  #define __IO volatile        /*!< Defines 'read / write' permissions              */
#endif

#if defined(_GCC_C_FC7XXX_)
  #define INLINE                  __attribute__((always_inline)) inline

  #define LOCAL_INLINE            __attribute__((always_inline)) static inline

  #define INTERRUPT_FUNC

  #define ASM_KEYWORD             __asm

  #define ALIGNED_VARS_START(sec_name, align)

  #define ALIGN(n)                __attribute__((aligned (n)))

  #define VAR_ALIGN(v, size)      __attribute__((aligned(size))) v;

  #define ALIGNED_VARS_STOP()

  #define PACKED                  __attribute__((__packed__))
#elif defined(_IAR_C_FC7XXX_)
  #define INLINE                  _Pragma("inline=forced") inline

  #define LOCAL_INLINE            _Pragma("inline=forced") static inline

  #define INTERRUPT_FUNC

  #define MCAL_STRINGIFY(x)       #x

  #define MCAL_TOSTRING(x)        MCAL_STRINGIFY(x)

  #define ASM_KEYWORD             __asm

  #define ALIGNED_VARS_START(sec_name, align)

  #define ALIGN(n)                _Pragma(MCAL_TOSTRING(data_alignment=(n)))

  #define VAR_ALIGN(v, size)      _Pragma(MCAL_TOSTRING(data_alignment=size)) v;

  #define ALIGNED_VARS_STOP()

  #define PACKED                  __packed
#elif defined(_LLVM_C_FC7XXX_)
  #define INLINE                  __attribute__((always_inline)) inline

  #define LOCAL_INLINE            __attribute__((always_inline)) static inline

  #define INTERRUPT_FUNC          __attribute__((interrupt))

  #define ASM_KEYWORD             __asm

  #define ALIGN(n)                __attribute__((aligned(n)))

  #define ALIGNED_VARS_START(sec_name, align)

  #define VAR_ALIGN(v, size)      __attribute__((aligned(size))) v;

  #define ALIGNED_VARS_STOP()

  #define PACKED                  __attribute__((__packed__))
#elif defined(_GREENHILLS_C_FC7XXX_)
  #define INLINE                  __inline

  #define LOCAL_INLINE            static inline

  #define INTERRUPT_FUNC          __interrupt

  #define ASM_KEYWORD             __asm

  #define ALIGNED_VARS_START(sec_name, align)

  #define ALIGN(n)                __attribute__((aligned (n)))

  #define VAR_ALIGN(v, size)      __attribute__((aligned(size))) v;

  #define ALIGNED_VARS_STOP()

  #define PACKED                  __packed
#elif defined(_TASKING_C_FC7XXX_)
  #define INLINE                  __inline

  #define LOCAL_INLINE            static inline

  #define INTERRUPT_FUNC          __interrupt

  #define ASM_KEYWORD             __asm

  #define ALIGNED_VARS_START(sec_name, align)

  #define ALIGN(n)                __attribute__((aligned(n)))

  #define VAR_ALIGN(v, size)      __attribute__((aligned(size))) v;

  #define ALIGNED_VARS_STOP()

  #define PACKED                  __packed
#endif

/* FUNC macro for the declaration and definition of functions, that ensures
   correct syntax of function declarations
   rettype     return type of the function
   memclass    classification of the function itself*/
#define FUNC(rettype, memclass)                   rettype

/* FUNC_P2VAR macro for the declaration and definition of functions returning
 * a pointer to a variable, that ensures correct syntax of function declarations
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   memclass    classification of the function itself*/
#define FUNC_P2VAR(rettype, ptrclass, memclass)   rettype *

/* P2VAR macro for the declaration and definition of pointers in RAM,
   pointing to variables
   ptrtype     type of the referenced variable memclass
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
/* in CW, can not use any key words to locate the memclass
   we can only use #pragma to locate the memclass which is in MemMap.h
*/
#define P2VAR(ptrtype, memclass, ptrclass)        ptrtype *
/* in CW, can not use any key words to locate the memclass
   we can only use #pragma to locate the memclass which is in MemMap.h
*/
#define P2P2VAR(ptrtype, memclass, ptrclass)      ptrtype **

/* P2CONST macro for the declaration and definition of pointers in RAM
   pointing to constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define P2CONST(ptrtype, memclass, ptrclass)      const ptrtype *

/* CONSTP2VAR macro for the declaration and definition of constant
   pointers accessing variables
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define CONSTP2VAR(ptrtype, memclass, ptrclass)   ptrtype *const

/* CONSTP2CONST macro for the declaration and definition of constant pointers
   accessing constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype *const

/* P2FUNC macro for the type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectivly name of the defined type
 */
#define P2FUNC(rettype, ptrclass, fctname)        rettype(*fctname)

/* CONST macro for the declaration and definition of constants
   type        type of the constant
   memclass    classification of the constant itself
 */
#define CONST(type, memclass)                     const type

/* VAR macro for the declaration and definition of variables
   vartype        type of the variable
   memclass    classification of the variable itself
 */
#define VAR(vartype, memclass)                    vartype

#endif /* COMPILER_H */
