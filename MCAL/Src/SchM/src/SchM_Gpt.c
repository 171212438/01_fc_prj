/**
*   @file    SchM_Gpt.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Rte - module implementation
*   @details This module implements stubs for the AUTOSAR Rte
*            This file contains sample code only. It is not part of the production code deliverables.
*
*   @addtogroup SchM_MODULE
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT
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

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Mcal.h"
#include "SchM_Gpt.h"
#include "Common_Cfg.h"

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/
#ifdef MCAL_PLATFORM_ARM
#if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
#define ISR_STATE_MASK     ((uint32)0x00000002UL)   /**< @brief DAIF bit I and F */
#else
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#define ISR_STATE_MASK     ((uint32)0x000000FFUL)   /**< @brief BASEPRI[7:0] mask */
#else
#define ISR_STATE_MASK     ((uint32)0x00000001UL)   /**< @brief PRIMASK bit 0 */
#endif
#endif
#endif

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#ifdef MCAL_PLATFORM_ARM
#if (MCAL_PLATFORM_ARM == MCAL_ARM_AARCH64)
#define ISR_ON(msr)            (((uint32)(msr) & (uint32)(ISR_STATE_MASK)) != (uint32)3)
#else
#define ISR_ON(msr)            (((uint32)(msr) & (uint32)(ISR_STATE_MASK)) == (uint32)0)
#endif
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define SCHM_START_SEC_VAR_NO_INIT_32
#include "SchM_MemMap.h"

SCHM_DATA_SECTION static uint32 msr_GPT_EXCLUSIVE_AREA[MAX_CORE_NUM];    /**< @brief exclusive area MSR state upon entering */

#define SCHM_STOP_SEC_VAR_NO_INIT_32
#include "SchM_MemMap.h"

#define SCHM_START_SEC_VAR_INIT_32
#include "SchM_MemMap.h"

SCHM_DATA_SECTION static volatile uint32 reentry_guard_GPT_EXCLUSIVE_AREA[MAX_CORE_NUM] = { 0U }; /**< @brief guard for the msr variable against overwrite */

#define SCHM_STOP_SEC_VAR_INIT_32
#include "SchM_MemMap.h"

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define SCHM_START_SEC_CODE
#include "SchM_MemMap.h"

/**
* @brief   This function returns the MSR register value (32 bits).
* @details This function returns the MSR register value (32 bits).
*
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits).
*
* @pre  None
* @post None
*
*/
LOCAL_INLINE uint32 Gpt_schm_read_msr(void);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief   This function returns the MSR register value (32 bits).
* @details This function returns the MSR register value (32 bits).
*
* @param[in]     void        No input parameters
* @return        uint32 msr  This function returns the MSR register value (32 bits).
*
* @pre  None
* @post None
*
*/
LOCAL_INLINE uint32 Gpt_schm_read_msr(void)
{
    register uint32 reg_tmp;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    ASM_KEYWORD volatile(" mrs %0, basepri " : "=r"(reg_tmp));
#else
    ASM_KEYWORD volatile(" mrs %0, primask " : "=r"(reg_tmp));
#endif
    return (uint32)reg_tmp;
}

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief   This function is called to allow GPT to enter the specific critical region.
* @details This is a local function stub only.
*
* @param[in]     void     No input parameters
* @return        void     This function does not return anything
*
* @pre  None
* @post None
*
*/
SCHM_TEXT_SECTION void SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA(void)
{
    uint32 CoreId;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    uint32 msr = Mcal_Trusted_Call_Return(Gpt_schm_read_msr);
#else
    uint32 msr = Gpt_schm_read_msr();  /*read MSR (to store interrupts state) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    if (ISR_ON(msr))
    {
        SuspendAllInterrupts();
#ifdef __CC_ARM
        /* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected */
        ASM_KEYWORD(" nop ");
#endif
    }
    CoreId = Cpm_HWA_GetCoreId();
    if (0UL == reentry_guard_GPT_EXCLUSIVE_AREA[CoreId])
    {
        msr_GPT_EXCLUSIVE_AREA[CoreId] = msr;
    }
    /* PRQA S 3387 ++ #Misra-C:2012 Rule-13.3 A full expression containing an increment (++)
     * or decrement (--) operator should have no other potential side effects other than
     * that caused by the increment or decrement operator
     * REASON: No side effects here.
     */
    reentry_guard_GPT_EXCLUSIVE_AREA[CoreId]++;
    /* PRQA S 3387 -- */
}
/**
* @brief   This function is called to allow GPT to exit the specific critical region.
* @details This is a local function stub only. It will resume interrupts if no other
*          critical area is still executing.
*
* @param[in]     void     No input parameters
* @return        void     This function does not return anything
*
* @pre  None
* @post None
*
*/
SCHM_TEXT_SECTION void SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA(void)
{
    uint32 CoreId = Cpm_HWA_GetCoreId();
    /* PRQA S 3387 ++ #Misra-C:2012 Rule-13.3 A full expression containing an increment (++)
     * or decrement (--) operator should have no other potential side effects other than
     * that caused by the increment or decrement operator
     * REASON: No side effects here.
     */
    reentry_guard_GPT_EXCLUSIVE_AREA[CoreId]--;
    /* PRQA S 3387 -- */
    if ((ISR_ON(msr_GPT_EXCLUSIVE_AREA[CoreId])) && (0UL == reentry_guard_GPT_EXCLUSIVE_AREA[CoreId]))       /* If interrupts were enabled */
    {
        ResumeAllInterrupts();
#ifdef __CC_ARM
        /* Compiler fix - forces the CSPID instruction to be generated with -02, -Ospace are selected */
        ASM_KEYWORD(" nop ");
#endif
    }
}

#define SCHM_STOP_SEC_CODE
#include "SchM_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

