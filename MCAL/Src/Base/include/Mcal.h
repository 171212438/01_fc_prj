/**
*   @file    Mcal.h
*   @implements      Mcal.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR General Mcal Definition.
*   @details This file contains AUTOSAR the General Mcal Definition.
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

#ifndef MCAL_H
#define MCAL_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Cpm_Reg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCAL_VENDOR_ID                    174
#define MCAL_MODULE_ID                    0

#define MCAL_AR_RELEASE_MAJOR_VERSION     4
#define MCAL_AR_RELEASE_MINOR_VERSION     6
#define MCAL_AR_RELEASE_REVISION_VERSION  0
#define MCAL_SW_MAJOR_VERSION             1
#define MCAL_SW_MINOR_VERSION             5
#define MCAL_SW_PATCH_VERSION             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                         CONSTANTS
==================================================================================================*/
#define MCAL_ARM_MARCH      (16)  /* for ARM M7 Thumb2 */
#define MCAL_ARM_AARCH32    (32)  /* for ARM ARCH32    */
#define MCAL_ARM_AARCH64    (64)  /* for ARM ARCH64    */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
  #ifdef AUTOSAR_OS_NOT_USED
    extern  uint8  Sys_GoToSupervisor(void);
    extern  uint32 Sys_GoToUser_Return(uint8 u8SwitchToSupervisor, uint32 u32returnValue);
    extern  uint32 Sys_GoToUser(void);

    #define Mcal_goToSupervisor() ASM_KEYWORD("svc 0x0");

    #define Mcal_goToUser()       ASM_KEYWORD("svc 0x1");

    #define Mcal_Trusted_Call(name)  \
        ((1UL == Sys_GoToSupervisor()) ? (name(), (void)Sys_GoToUser()) : (name(),(void)0U))

    #define Mcal_Trusted_Call1param(name,param)  \
        ((1UL == Sys_GoToSupervisor()) ? (name(param), (void)Sys_GoToUser()) : (name(param),(void)0U))

    #define Mcal_Trusted_Call2params(name,param1,param2)  \
        ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2), (void)Sys_GoToUser()) : (name(param1,param2),(void)0U))

    #define Mcal_Trusted_Call3params(name,param1,param2,param3)  \
        ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2,param3), (void)Sys_GoToUser()) : (name(param1,param2,param3),(void)0U))

    #define Mcal_Trusted_Call4params(name,param1,param2,param3,param4)  \
        ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2,param3,param4), (void)Sys_GoToUser()) : (name(param1,param2,param3,param4),(void)0U))

    #define Mcal_Trusted_Call_Return(name)  \
        ((1UL == Sys_GoToSupervisor()) ? Sys_GoToUser_Return(1U, name()) : Sys_GoToUser_Return(0U, name()))

    #define Mcal_Trusted_Call_Return1param(name,param)  \
        ((1UL == Sys_GoToSupervisor()) ? Sys_GoToUser_Return(1U, name(param)) : Sys_GoToUser_Return(0U, name(param)))

    #define Mcal_Trusted_Call_Return2param(name,param1,param2)  \
        ((1UL == Sys_GoToSupervisor()) ? Sys_GoToUser_Return(1U, name(param1,param2)) : Sys_GoToUser_Return(0U, name(param1,param2)))

    #define Mcal_Trusted_Call_Return3param(name,param1,param2,param3)  \
        ((1UL == Sys_GoToSupervisor()) ? Sys_GoToUser_Return(1U, name(param1,param2,param3)) : Sys_GoToUser_Return(0U, name(param1,param2,param3)))

    #define Mcal_Trusted_Call_Return4param(name,param1,param2,param3,param4)  \
        ((1UL == Sys_GoToSupervisor()) ? Sys_GoToUser_Return(1U, name(param1,param2,param3,param4)) : Sys_GoToUser_Return(0U, name(param1,param2,param3,param4)))

  #else
    #define Mcal_Trusted_Call(name) Call_##name##_TRUSTED()

    #define Mcal_Trusted_Call1param(name,param) Call_##name##_TRUSTED(param)

    #define Mcal_Trusted_Call2params(name,param1,param2) Call_##name##_TRUSTED(param1,param2)

    #define Mcal_Trusted_Call3params(name,param1,param2,param3) Call_##name##_TRUSTED(param1,param2,param3)

    #define Mcal_Trusted_Call4params(name,param1,param2,param3,param4) Call_##name##_TRUSTED(param1,param2,param3,param4)

    #define Mcal_Trusted_Call_Return(name) Call_##name##_TRUSTED()

    #define Mcal_Trusted_Call_Return1param(name,param1) Call_##name##_TRUSTED(param1)

    #define Mcal_Trusted_Call_Return2param(name,param1,param2) Call_##name##_TRUSTED(param1,param2)

    #define Mcal_Trusted_Call_Return3param(name,param1,param2,param3) Call_##name##_TRUSTED(param1,param2,param3)

    #define Mcal_Trusted_Call_Return4param(name,param1,param2,param3,param4) Call_##name##_TRUSTED(param1,param2,param3,param4)

  #endif /* AUTOSAR_OS_NOT_USED */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

/* ARM_MARCH - is used to specify the ARM architecture MCAL_MARCH, MCAL_AARCH32, MCAL_AARCH64 */

#define MCAL_PLATFORM_ARM  MCAL_ARM_MARCH

/*========================================= Green Hills ==========================================*/
#if defined(_GREENHILLS_C_FC7XXX_)
  #ifdef MCAL_ENABLE_FAULT_INJECTION
    #define MCAL_PUT_IN_QUOTES(x)              #x
    #define MCAL_FAULT_INJECTION_POINT(label)  ASM_KEYWORD(MCAL_PUT_IN_QUOTES(label::))
  #else
    #define MCAL_FAULT_INJECTION_POINT(label)
  #endif

/*=========================================== HighTec ============================================*/
#elif defined(_LLVM_C_FC7XXX_)
  #ifdef MCAL_ENABLE_FAULT_INJECTION
	#define MCAL_PUT_IN_QUOTES(x)              #x
	#define MCAL_FAULT_INJECTION_POINT(label)  ASM_KEYWORD(MCAL_PUT_IN_QUOTES(label:))
  #else
	#define MCAL_FAULT_INJECTION_POINT(label)
  #endif

/*=========================================== Tasking ============================================*/
#elif defined(_TASKING_C_FC7XXX_)
  #ifdef MCAL_ENABLE_FAULT_INJECTION
	#define MCAL_PUT_IN_QUOTES(x)              #x
	#define MCAL_FAULT_INJECTION_POINT(label)  ASM_KEYWORD(MCAL_PUT_IN_QUOTES(label:))
  #else
	#define MCAL_FAULT_INJECTION_POINT(label)
  #endif

/*============================================= GCC ==============================================*/
#elif defined(_GCC_C_FC7XXX_)
  #ifdef MCAL_ENABLE_FAULT_INJECTION
    #define MCAL_PUT_IN_QUOTES(x)              #x
    #define MCAL_FAULT_INJECTION_POINT(label)  ASM_KEYWORD(MCAL_PUT_IN_QUOTES(label:))
  #else
    #define MCAL_FAULT_INJECTION_POINT(label)
  #endif

/*============================================== IAR =============================================*/
#elif defined(_IAR_C_FC7XXX_)
  #ifdef MCAL_ENABLE_FAULT_INJECTION
    #define MCAL_PUT_IN_QUOTES(x)              #x
    #define MCAL_FAULT_INJECTION_POINT(label)  ASM_KEYWORD(MCAL_PUT_IN_QUOTES(label:))
  #else
    #define MCAL_FAULT_INJECTION_POINT(label)
  #endif

/*====================================== Not Supported Compiler ==================================*/
#else
  #error "Unsupported compiler. Compiler abstraction needs to be updated to use this compiler."
#endif

#if defined(AUTOSAR_OS_NOT_USED)
  #if defined (USE_SW_VECTOR_MODE)
    #define ISR(IsrName)       void IsrName(void)
  #else
    #define ISR(IsrName)       INTERRUPT_FUNC void IsrName(void)
  #endif /*USE_SW_VECTOR_MODE*/

  #define EXIT_INTERRUPT()       MCAL_DATA_SYNC_BARRIER()

  #if(MCAL_ARM_AARCH64 == MCAL_PLATFORM_ARM)
    /* for AARCH64 bit */
    #define SuspendAllInterrupts() ASM_KEYWORD(" msr DAIFSet,#0xf")
    #define ResumeAllInterrupts()  ASM_KEYWORD(" msr DAIFClr,#0xf")
  #else
    #if (defined MCAL_ENABLE_USER_MODE_SUPPORT)
      #if (defined MCAL_PLATFORM_ARM_M0PLUS)
        /* for AARCH32 bit ARM/THUMB instructions */
        #define SuspendAllInterrupts()
        #define ResumeAllInterrupts()
      #else
        /* for AARCH32 bit ARM/THUMB instructions */
        #define SuspendAllInterrupts()  ASM_KEYWORD("svc 0x3")  /* BASEPRI will be set to 0x10 from SVC handler  */
        #define ResumeAllInterrupts()   ASM_KEYWORD("svc 0x2")  /* BASEPRI will be set to 0x0 from SVC handler  */
      #endif
    #else
      /* for AARCH32 bit ARM/THUMB instructions */
      #define SuspendAllInterrupts()  ASM_KEYWORD(" cpsid i")
      #define ResumeAllInterrupts()   ASM_KEYWORD(" cpsie i")
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
  #endif
#else
  #include "Os.h"
  #define EXIT_INTERRUPT()
#endif

/**
 * @brief  Compiler abstraction for the intrinsic wait instruction.
 */
#define EXECUTE_WAIT()                   ASM_KEYWORD(" wfi")

/** @brief  DMB
 *
 *   The Data Memory Barrier (DMB) instruction ensures that outstanding memory transactions
 *   complete before subsequent memory transactions
 */
#define MCAL_DATA_MEMORY_BARRIER()       ASM_KEYWORD(" dmb")

/** @brief  DSB
 *
 *   The Data Synchronization Barrier (DSB) instruction ensures that outstanding memory transactions
 *   complete before subsequent instructions execute.
 */
#define MCAL_DATA_SYNC_BARRIER()         ASM_KEYWORD(" dsb")

/** @brief  ISB
 *
 *   The Instruction Synchronization Barrier (ISB) ensures that the effect of all completed memory
 *   transactions is recognizable by subsequent instructions.
 */
#define MCAL_INSTRUCTION_SYNC_BARRIER()  ASM_KEYWORD(" isb")

/**
 * @brief  No-op
 */
#define MCAL_NOP()                       ASM_KEYWORD(" nop")

/** @brief  BKPT
 *
 *   Macro to be used to trigger an debug interrupt
 */
#define MCAL_BKPT()                      ASM_KEYWORD("BKPT #0\n\t")

#ifndef REV_BYTES_32
  /** @brief  Reverse byte order in a word.
   */
  #if defined(_GCC_C_FC7XXX_)  || defined(_IAR_C_FC7XXX_) ||                       \
      defined(_LLVM_C_FC7XXX_) || defined(_GREENHILLS_C_FC7XXX_)
    #define REV_BYTES_32(a, b)           ASM_KEYWORD("rev %0, %1" : "=r"(b) : "r"(a))
  #else
    #define REV_BYTES_32(a, b)                                                     \
        (b = ((a & 0xFF000000U) >> 24U) | ((a & 0xFF0000U) >> 8U) |                \
             ((a & 0xFF00U) << 8U)      | ((a & 0xFFU) << 24U))
  #endif
#endif /* REV_BYTES_32 */

#ifndef REV_BYTES_16
  /** @brief  Reverse byte order in each halfword independently.
   */
  #if defined (_GCC_C_FC7XXX_)  || defined (_IAR_C_FC7XXX_) ||                     \
      defined (_LLVM_C_FC7XXX_) || defined (_GREENHILLS_C_FC7XXX_)
    #define REV_BYTES_16(a, b)           ASM_KEYWORD("rev16 %0, %1" : "=r" (b) : "r" (a))
  #else
    #define REV_BYTES_16(a, b)                                                     \
        (b = ((a & 0xFF000000U) >> 8U) | ((a & 0xFF0000U) << 8U) |                 \
             ((a & 0xFF00U)     >> 8U) | ((a & 0xFFU)     << 8U))
  #endif
#endif /* REV_BYTES_16 */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

typedef struct
{
    uint32 state;   /**< enabling/disabling the DEM error: Active=STD_ON/ Inactive=STD_OFF */
    uint32 id ;     /**< ID of DEM error (0 if STD_OFF) */
} Mcal_DemErrorType;

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

/** @brief  Get CPU ID
 *
 *   GET_CPU_ID returns the processor identification number for cm7 range(0,1,2), other values are invalid.
 */
#ifndef AUTOSAR_OS_NOT_USED
  #define GET_CPU_ID()    ((uint8)GetCoreID())
#else
  #define GET_CPU_ID()    ((uint8)Cpm_HWA_GetCoreId())
#endif

#ifdef __cplusplus
}
#endif

#endif /* MCAL_H */
