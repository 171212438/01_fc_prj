/**
 *   @file    Ftu_Common.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ftu - common source file.
 *   @details Ftu module common source file.
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
/* PRQA S 2071,5087 EOF
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3218 EOF
   File scope static, '%1s', is only accessed in one function.
   REASON: This is a normal usage.
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Common_Cfg.h"
#include "Mcal.h"
#include "Ftu_Common.h"
#include "SchM_Common.h"
#include "Scm_RegOps.h"

#if (USE_GPT_MODULE == STD_ON)
#include "Gpt_Cfg.h"
#endif

#if (USE_ICU_MODULE == STD_ON)
#include "Icu_Cfg.h"
#include "Icu_Ftu.h"
#endif

#if (USE_OCU_MODULE == STD_ON)
#include "Ocu_Cfg.h"
#endif

#if (USE_PWM_MODULE == STD_ON)
#include "Pwm_Cfg.h"
#include "Pwm_Ftu.h"
#endif

#if (MAX_CORE_NUM > 1U)
#include "SpinLock.h"
#endif

/*==================================================================================================
*                                       CONFLICT CHECKS
==================================================================================================*/
#if ((USE_GPT_MODULE == STD_ON) || (USE_ICU_MODULE == STD_ON) || (USE_PWM_MODULE == STD_ON) || \
     (USE_OCU_MODULE == STD_ON))

#if ((defined GPT_FTU_0_USED) && (defined PWM_FTU_0_USED))
#error "GPT and PWM resource conflict for FTU 0 hw unit"
#endif

#if ((defined ICU_FTU_0_USED) && (defined GPT_FTU_0_USED))
#error "ICU and GPT resource conflict for FTU 0 hw unit"
#endif

#if ((defined OCU_FTU_0_USED) && (defined GPT_FTU_0_USED))
#error "OCU and GPT resource conflict for FTU 0 hw unit"
#endif

#if ((defined OCU_FTU_0_USED) && (defined ICU_FTU_0_USED))
#error "OCU and ICU resource conflict for FTU 0 hw unit"
#endif

#if ((defined OCU_FTU_0_USED) && (defined PWM_FTU_0_USED))
#error "OCU and PWM resource conflict for FTU 0 hw unit"
#endif

#if ((defined GPT_FTU_1_USED) && (defined PWM_FTU_1_USED))
#error "GPT and PWM resource conflict for FTU 1 hw unit"
#endif

#if ((defined ICU_FTU_1_USED) && (defined GPT_FTU_1_USED))
#error "ICU and GPT resource conflict for FTU 1 hw unit"
#endif

#if ((defined OCU_FTU_1_USED) && (defined GPT_FTU_1_USED))
#error "OCU and GPT resource conflict for FTU 1 hw unit"
#endif

#if ((defined OCU_FTU_1_USED) && (defined ICU_FTU_1_USED))
#error "OCU and ICU resource conflict for FTU 1 hw unit"
#endif

#if ((defined OCU_FTU_1_USED) && (defined PWM_FTU_1_USED))
#error "OCU and PWM resource conflict for FTU 1 hw unit"
#endif

#if ((defined GPT_FTU_2_USED) && (defined PWM_FTU_2_USED))
#error "GPT and PWM resource conflict for FTU 2 hw unit"
#endif

#if ((defined ICU_FTU_2_USED) && (defined GPT_FTU_2_USED))
#error "ICU and GPT resource conflict for FTU 2 hw unit"
#endif

#if ((defined OCU_FTU_2_USED) && (defined GPT_FTU_2_USED))
#error "OCU and GPT resource conflict for FTU 2 hw unit"
#endif

#if ((defined OCU_FTU_2_USED) && (defined ICU_FTU_2_USED))
#error "OCU and ICU resource conflict for FTU 2 hw unit"
#endif

#if ((defined OCU_FTU_2_USED) && (defined PWM_FTU_2_USED))
#error "OCU and PWM resource conflict for FTU 2 hw unit"
#endif
#if ((defined GPT_FTU_3_USED) && (defined PWM_FTU_3_USED))
#error "GPT and PWM resource conflict for FTU 3 hw unit"
#endif

#if ((defined ICU_FTU_3_USED) && (defined GPT_FTU_3_USED))
#error "ICU and GPT resource conflict for FTU 3 hw unit"
#endif

#if ((defined OCU_FTU_3_USED) && (defined GPT_FTU_3_USED))
#error "OCU and GPT resource conflict for FTU 3 hw unit"
#endif

#if ((defined OCU_FTU_3_USED) && (defined ICU_FTU_3_USED))
#error "OCU and ICU resource conflict for FTU 3 hw unit"
#endif

#if ((defined OCU_FTU_3_USED) && (defined PWM_FTU_3_USED))
#error "OCU and PWM resource conflict for FTU 3 hw unit"
#endif

#if ((defined GPT_FTU_4_USED) && (defined PWM_FTU_4_USED))
#error "GPT and PWM resource conflict for FTU 4 hw unit"
#endif

#if ((defined ICU_FTU_4_USED) && (defined GPT_FTU_4_USED))
#error "ICU and GPT resource conflict for FTU 4 hw unit"
#endif

#if ((defined OCU_FTU_4_USED) && (defined GPT_FTU_4_USED))
#error "OCU and GPT resource conflict for FTU 4 hw unit"
#endif

#if ((defined OCU_FTU_4_USED) && (defined ICU_FTU_4_USED))
#error "OCU and ICU resource conflict for FTU 4 hw unit"
#endif

#if ((defined OCU_FTU_4_USED) && (defined PWM_FTU_4_USED))
#error "OCU and PWM resource conflict for FTU 4 hw unit"
#endif

#if ((defined GPT_FTU_5_USED) && (defined PWM_FTU_5_USED))
#error "GPT and PWM resource conflict for FTU 5 hw unit"
#endif

#if ((defined ICU_FTU_5_USED) && (defined GPT_FTU_5_USED))
#error "ICU and GPT resource conflict for FTU 5 hw unit"
#endif

#if ((defined OCU_FTU_5_USED) && (defined GPT_FTU_5_USED))
#error "OCU and GPT resource conflict for FTU 5 hw unit"
#endif

#if ((defined OCU_FTU_5_USED) && (defined ICU_FTU_5_USED))
#error "OCU and ICU resource conflict for FTU 5 hw unit"
#endif

#if ((defined OCU_FTU_5_USED) && (defined PWM_FTU_5_USED))
#error "OCU and PWM resource conflict for FTU 5 hw unit"
#endif

#if ((defined GPT_FTU_6_USED) && (defined PWM_FTU_6_USED))
#error "GPT and PWM resource conflict for FTU 6 hw unit"
#endif

#if ((defined ICU_FTU_6_USED) && (defined GPT_FTU_6_USED))
#error "ICU and GPT resource conflict for FTU 6 hw unit"
#endif

#if ((defined OCU_FTU_6_USED) && (defined GPT_FTU_6_USED))
#error "OCU and GPT resource conflict for FTU 6 hw unit"
#endif

#if ((defined OCU_FTU_6_USED) && (defined ICU_FTU_6_USED))
#error "OCU and ICU resource conflict for FTU 6 hw unit"
#endif

#if ((defined OCU_FTU_6_USED) && (defined PWM_FTU_6_USED))
#error "OCU and PWM resource conflict for FTU 6 hw unit"
#endif

#if ((defined GPT_FTU_7_USED) && (defined PWM_FTU_7_USED))
#error "GPT and PWM resource conflict for FTU 7 hw unit"
#endif

#if ((defined ICU_FTU_7_USED) && (defined GPT_FTU_7_USED))
#error "ICU and GPT resource conflict for FTU 7 hw unit"
#endif

#if ((defined OCU_FTU_7_USED) && (defined GPT_FTU_7_USED))
#error "OCU and GPT resource conflict for FTU 7 hw unit"
#endif

#if ((defined OCU_FTU_7_USED) && (defined ICU_FTU_7_USED))
#error "OCU and ICU resource conflict for FTU 7 hw unit"
#endif

#if ((defined OCU_FTU_7_USED) && (defined PWM_FTU_7_USED))
#error "OCU and PWM resource conflict for FTU 7 hw unit"
#endif

#if ((defined GPT_FTU_8_USED) && (defined PWM_FTU_8_USED))
#error "GPT and PWM resource conflict for FTU 8 hw unit"
#endif

#if ((defined ICU_FTU_8_USED) && (defined GPT_FTU_8_USED))
#error "ICU and GPT resource conflict for FTU 8 hw unit"
#endif

#if ((defined OCU_FTU_8_USED) && (defined GPT_FTU_8_USED))
#error "OCU and GPT resource conflict for FTU 8 hw unit"
#endif

#if ((defined OCU_FTU_8_USED) && (defined ICU_FTU_8_USED))
#error "OCU and ICU resource conflict for FTU 8 hw unit"
#endif

#if ((defined OCU_FTU_8_USED) && (defined PWM_FTU_8_USED))
#error "OCU and PWM resource conflict for FTU 8 hw unit"
#endif

#if ((defined GPT_FTU_9_USED) && (defined PWM_FTU_9_USED))
#error "GPT and PWM resource conflict for FTU 9 hw unit"
#endif

#if ((defined ICU_FTU_9_USED) && (defined GPT_FTU_9_USED))
#error "ICU and GPT resource conflict for FTU 9 hw unit"
#endif

#if ((defined OCU_FTU_8_USED) && (defined GPT_FTU_9_USED))
#error "OCU and GPT resource conflict for FTU 9 hw unit"
#endif

#if ((defined OCU_FTU_9_USED) && (defined ICU_FTU_9_USED))
#error "OCU and ICU resource conflict for FTU 9 hw unit"
#endif

#if ((defined OCU_FTU_9_USED) && (defined PWM_FTU_9_USED))
#error "OCU and PWM resource conflict for FTU 9 hw unit"
#endif

#if ((defined GPT_FTU_10_USED) && (defined PWM_FTU_10_USED))
#error "GPT and PWM resource conflict for FTU 10 hw unit"
#endif

#if ((defined ICU_FTU_10_USED) && (defined GPT_FTU_10_USED))
#error "ICU and GPT resource conflict for FTU 10 hw unit"
#endif

#if ((defined OCU_FTU_10_USED) && (defined GPT_FTU_10_USED))
#error "OCU and GPT resource conflict for FTU 10 hw unit"
#endif

#if ((defined OCU_FTU_10_USED) && (defined ICU_FTU_10_USED))
#error "OCU and ICU resource conflict for FTU 10 hw unit"
#endif

#if ((defined OCU_FTU_10_USED) && (defined PWM_FTU_10_USED))
#error "OCU and PWM resource conflict for FTU 10 hw unit"
#endif

#if ((defined GPT_FTU_11_USED) && (defined PWM_FTU_11_USED))
#error "GPT and PWM resource conflict for FTU 11 hw unit"
#endif

#if ((defined ICU_FTU_11_USED) && (defined GPT_FTU_11_USED))
#error "ICU and GPT resource conflict for FTU 11 hw unit"
#endif

#if ((defined OCU_FTU_11_USED) && (defined GPT_FTU_11_USED))
#error "OCU and GPT resource conflict for FTU 11 hw unit"
#endif

#if ((defined OCU_FTU_11_USED) && (defined ICU_FTU_11_USED))
#error "OCU and ICU resource conflict for FTU 11 hw unit"
#endif

#if ((defined OCU_FTU_11_USED) && (defined PWM_FTU_11_USED))
#error "OCU and PWM resource conflict for FTU 11 hw unit"
#endif

#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define FTU_MODLUE_FLAG_ICU 0x01u
#define FTU_MODLUE_FLAG_PWM 0x02u

#define FTU_COMMON_SPINLOCK_TIMEOUT    0xFFFFU
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define COMMON_START_SEC_VAR_INIT_UNSPECIFIED
#include "Common_MemMap.h"
/**
@brief Flag whether the Ftu instance is initialized by Pwm
*/
COMMON_DATA_SECTION static uint32 s_u32FtuPwmInitedFlag = 0;
/**
@brief Flag whether the Ftu instance is initialized by Icu
*/
COMMON_DATA_SECTION static uint32 s_u32FtuIcuInitedFlag = 0;
/**
@brief Flag whether the Ftu instance Overflow interrupt enabled by Pwm
*/
COMMON_DATA_SECTION static uint32 s_u32FtuPwmOverflowEnableFlag = 0;
/**
@brief Flag whether the Ftu instance Overflow interrupt enabled by Icu
*/
COMMON_DATA_SECTION static uint32 s_u32FtuIcuOverflowEnableFlag = 0;

#define COMMON_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Common_MemMap.h"

#if (MAX_CORE_NUM > 1U)
#define COMMON_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Common_MemMap.h"
COMMON_DATA_SECTION static uint32 s_u32GTBSpinLock = 0U;
#define COMMON_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Common_MemMap.h"
#endif /* (MAX_CORE_NUM > 1U) */

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define COMMON_START_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
/**
 * @brief base address array for FTU
 */
/* PRQA S 0306 ++
   0306:Cast between a pointer to object and an integral type.
   REASON: This is the ENET base type initialization.
*/
COMMON_DATA_SECTION FTU_Type *const FTU_PTRS[FTU_INSTANCE_COUNT] = FTU_BASE_PTRS;
/* PRQA S 0306 -- */
#define COMMON_STOP_SEC_CONST_UNSPECIFIED
#include "Common_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define COMMON_START_SEC_CODE
#include "Common_MemMap.h"
#if ((defined ICU_FTU_0_ISR_USED) || (defined ICU_FTU_1_ISR_USED) || (defined ICU_FTU_2_ISR_USED) || \
     (defined ICU_FTU_3_ISR_USED) || (defined ICU_FTU_4_ISR_USED) || (defined ICU_FTU_5_ISR_USED) || \
     (defined ICU_FTU_6_ISR_USED) || (defined ICU_FTU_7_ISR_USED) || (defined ICU_FTU_8_ISR_USED) || \
     (defined ICU_FTU_9_ISR_USED) || (defined ICU_FTU_10_ISR_USED) ||                                \
     (defined ICU_FTU_11_ISR_USED) || (defined PWM_FTU_0_ISR_USED) ||                                \
     (defined PWM_FTU_1_ISR_USED) || (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) || \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))
COMMON_TEXT_SECTION static void FtuCommon_ProcessInterrupt(uint8 u8Instance, uint8 u8ModuleFlag);
#endif

#if ((defined PWM_FTU_0_ISR_USED) || (defined ICU_FTU_0_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_0_ISR);
#endif

#if ((defined PWM_FTU_1_ISR_USED) || (defined ICU_FTU_1_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_1_ISR);
#endif

#if ((defined PWM_FTU_2_ISR_USED) || (defined ICU_FTU_2_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_2_ISR);
#endif

#if ((defined PWM_FTU_3_ISR_USED) || (defined ICU_FTU_3_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_3_ISR);
#endif

#if ((defined PWM_FTU_4_ISR_USED) || (defined ICU_FTU_4_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_4_ISR);
#endif

#if ((defined PWM_FTU_5_ISR_USED) || (defined ICU_FTU_5_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_5_ISR);
#endif

#if ((defined PWM_FTU_6_ISR_USED) || (defined ICU_FTU_6_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_6_ISR);
#endif

#if ((defined PWM_FTU_7_ISR_USED) || (defined ICU_FTU_7_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_7_ISR);
#endif

#if ((defined PWM_FTU_8_ISR_USED) || (defined ICU_FTU_8_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_8_ISR);
#endif

#if ((defined PWM_FTU_9_ISR_USED) || (defined ICU_FTU_9_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_9_ISR);
#endif

#if ((defined PWM_FTU_10_ISR_USED) || (defined ICU_FTU_10_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_10_ISR);
#endif

#if ((defined PWM_FTU_11_ISR_USED) || (defined ICU_FTU_11_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_11_ISR);
#endif

#if (MAX_CORE_NUM > 1U)
COMMON_TEXT_SECTION static Std_ReturnType FtuCommon_GetSpinLock(void);

COMMON_TEXT_SECTION static void FtuCommon_ReleaseSpinLock(void);
#endif /* (MAX_CORE_NUM > 1U) */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (MAX_CORE_NUM > 1U)
/**
 * @brief          Get the spin lock of the Common Ftu
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
COMMON_TEXT_SECTION static Std_ReturnType FtuCommon_GetSpinLock(void)
{
    Std_ReturnType eSucc = E_OK;
    /* PRQA S 2905 ++
                Constant: Positive integer value truncated by cast to a smaller unsigned type.
                REASON: The actual timeout period may vary depending on the MCU frequency.
        */
    uint32 u32Timeout = FTU_COMMON_SPINLOCK_TIMEOUT;
    /* PRQA S 2905 -- */
    /* PRQA S 3415 ++
               Constant: Right hand operand of '&&' or '||' is an expression with persistent side
       effects. */
    while ((0U != u32Timeout) && (E_OK != SpinLock_Acquire(&s_u32GTBSpinLock)))
    {
        u32Timeout--;
    }
    /* PRQA S 3415 -- */
    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
    }
    return eSucc;
}

/**
 * @brief          Release the spin lock of the mailbox
 *
 * @return         void
 *
 */
COMMON_TEXT_SECTION static void FtuCommon_ReleaseSpinLock(void)
{
    SpinLock_Release(&s_u32GTBSpinLock);
}
#endif /* (MAX_CORE_NUM > 1U) */
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

COMMON_TEXT_SECTION void FtuCommon_Init(FtuCommon_MasterType        eMaster,
                                        const FtuCommon_ConfigType *pConfig)
{
    uint32 u32Mask = (uint32)(1u << pConfig->u8Instance);
    if (0u == ((s_u32FtuPwmInitedFlag | s_u32FtuIcuInitedFlag) & u32Mask))
    {
        /* Disable write protection */
        FTU_HWA_DisableWriteProtection(FTU_PTRS[pConfig->u8Instance]);
        /*Set clock src to no clock*/
        FTU_HWA_SetModuleClkSrc(FTU_PTRS[pConfig->u8Instance], (uint32)0U);
        /* Clear FTUEN bit to enable buffer-to-registry transfers */
        FTU_HWA_ClearModuleUpdateRegBySync(FTU_PTRS[pConfig->u8Instance]);
        /* Disable Overflow interrupt */
        FTU_HWA_DisableOverflowInterrupt(FTU_PTRS[pConfig->u8Instance]);

        /* Set Counter register to 0 and Initial Counter Value to 0 */
        FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[pConfig->u8Instance], (uint32)0U);
        FTU_HWA_ClearModuleCounter(FTU_PTRS[pConfig->u8Instance], (uint32)0U);
        /* Disable FTUn_INVCTRL register */
        FTU_HWA_DisableModuleInvertCtrl(FTU_PTRS[pConfig->u8Instance]);
        /* write the Ftu Modulo Value  */
        FTU_HWA_SetModuleCompareValue(FTU_PTRS[pConfig->u8Instance], (uint32)pConfig->u32ModuloValue);

        /* set the prescaler with the wanted value */
        /* PRQA S 4342 ++
           4342:An expression of 'essentially unsigned' type (%1s) is being cast to enum type '%2s'.
           REASON: The program will guarantee the legality of these type conversions.
        */
        FTU_HWA_SetModulePrescale(FTU_PTRS[pConfig->u8Instance],
                                  (FTU_PrescalerType)pConfig->u8Prescaler);
        /* PRQA S 4342 -- */

        /* set external clock*/
        if (FTU_MDOULE_EXTERNAL_CLK == pConfig->eClockSource)
        {
            /* PRQA S 0306 ++
               0306:Cast between a pointer to object and an integral type.
               REASON: This is the ENET base type initialization.
            */
            FTU_HWA_SetExternalClkSrc(FTU_PTRS[pConfig->u8Instance], pConfig->u8ExternalClockIndex);
            /* PRQA S 0306 -- */
        }

        /* Set FTU module clock source */
        FTU_HWA_SetModuleClkSrc(FTU_PTRS[pConfig->u8Instance], (uint8)pConfig->eClockSource);

        /* Set up counting */
        FTU_HWA_DisableModuleCpwmMode(FTU_PTRS[pConfig->u8Instance]);
    }
    if (FTU_COMMON_MASTER_PWM == eMaster)
    {
        s_u32FtuPwmInitedFlag |= u32Mask;
    }
    else /*FTU_COMMON_INIT_MASTER_ICU == eMaster*/
    {
        s_u32FtuIcuInitedFlag |= u32Mask;
    }
}

COMMON_TEXT_SECTION void FtuCommon_DeInit(FtuCommon_MasterType eMaster, uint8 u8Instance)
{
    uint32 u32Mask = (uint32)(1u << u8Instance);
    if (FTU_COMMON_MASTER_PWM == eMaster)
    {
        s_u32FtuPwmInitedFlag &= ~u32Mask;
    }
    else /*FTU_COMMON_INIT_MASTER_ICU == eMaster*/
    {
        s_u32FtuIcuInitedFlag &= ~u32Mask;
    }
    if (0u == ((s_u32FtuPwmInitedFlag | s_u32FtuIcuInitedFlag) & u32Mask))
    {
        /* Set register value update mode */
        FTU_HWA_ClearModuleUpdateRegBySync(FTU_PTRS[u8Instance]);
        /* De-init common module configuration */
        FTU_HWA_DeinitModuleCommon(FTU_PTRS[u8Instance]);
        /*Set clock ps to zero*/
        FTU_HWA_SetModulePrescale(FTU_PTRS[u8Instance], (FTU_PrescalerType)0U);
        /*  Set Counter register to 0 and Initial Counter Value to 0 */
        FTU_HWA_ClearModuleCounterInitialValue(FTU_PTRS[u8Instance], (uint32)0U);
        FTU_HWA_ClearModuleCounter(FTU_PTRS[u8Instance], (uint32)0U);

        /*  Write the Ftu Modulo Register to 0 */
        FTU_HWA_SetModuleCompareValue(FTU_PTRS[u8Instance], (uint32)0U);

        /*Clear Outmask  register value*/

        FTU_HWA_ClearModuleOutmask(FTU_PTRS[u8Instance], (uint32)0XFFU);

        /* Clear SYNC register */
        FTU_HWA_SetModuleSYNCReg(FTU_PTRS[u8Instance], 0U);

        /*  Disable Overflow interrupt */
        FTU_HWA_DisableOverflowInterrupt(FTU_PTRS[u8Instance]);
        /* Clear Overflow flag*/
        FTU_HWA_ClearOverflowFlag(FTU_PTRS[u8Instance]);
        /*Clear reload flag*/
        FTU_HWA_ClearReloadFlag(FTU_PTRS[u8Instance]);
    }
}

COMMON_TEXT_SECTION void FtuCommon_EnableOverflow(FtuCommon_MasterType eMaster, uint8 u8Instance)
{
    uint32 u32Mask = (uint32)(1u << u8Instance);
    SchM_Enter_Common_COMMON_EXCLUSIVE_AREA_01();
    FTU_HWA_EnableModuleInterrupt(FTU_PTRS[u8Instance]);
    if (FTU_COMMON_MASTER_PWM == eMaster)
    {
        s_u32FtuPwmOverflowEnableFlag |= u32Mask;
    }
    else /*FTU_COMMON_INIT_MASTER_ICU == eMaster*/
    {
        s_u32FtuIcuOverflowEnableFlag |= u32Mask;
    }
    SchM_Exit_Common_COMMON_EXCLUSIVE_AREA_01();
}

COMMON_TEXT_SECTION void FtuCommon_DisableOverflow(FtuCommon_MasterType eMaster, uint8 u8Instance)
{
    uint32 u32Mask = (uint32)(1U << u8Instance);
    SchM_Enter_Common_COMMON_EXCLUSIVE_AREA_02();
    if (FTU_COMMON_MASTER_PWM == eMaster)
    {
        s_u32FtuPwmOverflowEnableFlag &= ~u32Mask;
    }
    else /*FTU_COMMON_INIT_MASTER_ICU == eMaster*/
    {
        s_u32FtuIcuOverflowEnableFlag &= ~u32Mask;
    }
    if (0u == ((s_u32FtuPwmOverflowEnableFlag | s_u32FtuIcuOverflowEnableFlag) & u32Mask))
    {
        FTU_HWA_DisableOverflowInterrupt(FTU_PTRS[u8Instance]);
    }
    SchM_Exit_Common_COMMON_EXCLUSIVE_AREA_02();
}

/*
 * @brief           Config FTU global time base function
 *
 * @param[in]       u32Mask     FTU global time base group mask
 * @param[in]       benable     enable/disable FTU global time base function.
 *
 * @return          void
 *
 */
COMMON_TEXT_SECTION void FtuCommon_ConfigGTB(const uint32 u32Mask, boolean bEnable)
{
    SchM_Enter_Common_COMMON_EXCLUSIVE_AREA_03();
#if (MAX_CORE_NUM > 1U)
    if (E_OK == FtuCommon_GetSpinLock())
#endif /* (MAX_CORE_NUM > 1U) */
    {
        if (bEnable == TRUE)
        {
            SCM_HWA_EnableGTBC(u32Mask);
        }
        else
        {
            SCM_HWA_DisableGTBC(u32Mask);
        }
#if (MAX_CORE_NUM > 1U)
        FtuCommon_ReleaseSpinLock();
#endif /* (MAX_CORE_NUM > 1U) */
    }
    SchM_Exit_Common_COMMON_EXCLUSIVE_AREA_03();
}

#if ((defined ICU_FTU_0_ISR_USED) || (defined ICU_FTU_1_ISR_USED) || (defined ICU_FTU_2_ISR_USED) || \
     (defined ICU_FTU_3_ISR_USED) || (defined ICU_FTU_4_ISR_USED) || (defined ICU_FTU_5_ISR_USED) || \
     (defined ICU_FTU_6_ISR_USED) || (defined ICU_FTU_7_ISR_USED) || (defined ICU_FTU_8_ISR_USED) || \
     (defined ICU_FTU_9_ISR_USED) || (defined ICU_FTU_10_ISR_USED) ||                                \
     (defined ICU_FTU_11_ISR_USED) || (defined PWM_FTU_0_ISR_USED) ||                                \
     (defined PWM_FTU_1_ISR_USED) || (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) || \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))
/* PRQA S 3219 ++
   3219:Static function '%1s()' is not used within this translation unit.
   REASON: Configuration will guarantee that the function will be called when it is defined.
*/
/* [FMR_Pwm_0002] */
COMMON_TEXT_SECTION static void FtuCommon_ProcessInterrupt(uint8 u8Instance, uint8 u8ModuleFlag)
/* PRQA S 3219 -- */
{
    uint8  u8Index;
    uint32 u32ChannelValue[FTU_CHANNEL_CONTROLS_COUNT];
    uint32 u32InputState      = 0u;
    uint32 u32ChannelIntrFlag = FTU_HWA_GetChannelFlag(FTU_PTRS[u8Instance]);
    /* Get and clear channel interrupt flag */
    for (u8Index = 0; u8Index < FTU_CHANNEL_CONTROLS_COUNT; u8Index++)
    {
        if ((u32ChannelIntrFlag & (1u << u8Index)) != 0U)
        {
            if (0u != FTU_HWA_ReadChannelInterruptEnable(FTU_PTRS[u8Instance], (uint8)u8Index))
            {
                /* Get channel value here. If the input signal frequency is too fast, it will cause
                 * status lag */
                u32ChannelValue[u8Index] = FTU_HWA_ReadChannelValue(FTU_PTRS[u8Instance], u8Index);
                if (0u != FTU_HWA_ReadInputState(FTU_PTRS[u8Instance], u8Index))
                {
                    u32InputState |= 1u << u8Index;
                }
            }
            else
            {
                u32ChannelIntrFlag &= (~((uint32)1u << u8Index));
            }
        }
    }
    FTU_HWA_ClearChannelInterruptFlag(FTU_PTRS[u8Instance], u32ChannelIntrFlag);

    uint32 u32Overflow = FTU_HWA_ReadModuleOverflowFlag(FTU_PTRS[u8Instance]);
    /* Get and clear overflow interrupt flag */
    if ((0u != FTU_HWA_ReadModuleOverflowIntrEnable(FTU_PTRS[u8Instance])) && (0u != u32Overflow))
    {
        FTU_HWA_ClearOverflowFlag(FTU_PTRS[u8Instance]);
    }

#if ((defined ICU_FTU_0_ISR_USED) || (defined ICU_FTU_1_ISR_USED) ||                                 \
     (defined ICU_FTU_2_ISR_USED) || (defined ICU_FTU_3_ISR_USED) ||                                 \
     (defined ICU_FTU_4_ISR_USED) || (defined ICU_FTU_5_ISR_USED) || (defined ICU_FTU_6_ISR_USED) || \
     (defined ICU_FTU_7_ISR_USED) || (defined ICU_FTU_8_ISR_USED) || (defined ICU_FTU_9_ISR_USED) || \
     (defined ICU_FTU_10_ISR_USED) || (defined ICU_FTU_11_ISR_USED))
    if ((0u != (s_u32FtuIcuInitedFlag & (1u << u8Instance))) &&
        (0u != (u8ModuleFlag & FTU_MODLUE_FLAG_ICU)))
    {
        Icu_Ftu_ProcessInterrupt(u8Instance,
                                 u32Overflow,
                                 u32ChannelIntrFlag,
                                 u32ChannelValue,
                                 u32InputState);
    }
#else
    (void)u32ChannelValue;
#endif

#if ((defined PWM_FTU_0_ISR_USED) || (defined PWM_FTU_1_ISR_USED) ||                                 \
     (defined PWM_FTU_2_ISR_USED) || (defined PWM_FTU_3_ISR_USED) ||                                 \
     (defined PWM_FTU_4_ISR_USED) || (defined PWM_FTU_5_ISR_USED) || (defined PWM_FTU_6_ISR_USED) || \
     (defined PWM_FTU_7_ISR_USED) || (defined PWM_FTU_8_ISR_USED) || (defined PWM_FTU_9_ISR_USED) || \
     (defined PWM_FTU_10_ISR_USED) || (defined PWM_FTU_11_ISR_USED))
    uint32 u32FaultFlag   = 0u;
    uint32 u32FaultEnable = FTU_HWA_ReadFaultIntrEnable(FTU_PTRS[u8Instance]);
    if ((0u != u32FaultEnable) && (0u != (u8ModuleFlag & FTU_MODLUE_FLAG_PWM)))
    {
        u32FaultFlag = FTU_HWA_ReadModuleFaultFlag(FTU_PTRS[u8Instance]);
    }

    if ((0u != (s_u32FtuPwmInitedFlag & (1u << u8Instance))) &&
        (0u != (u8ModuleFlag & FTU_MODLUE_FLAG_PWM)))
    {
        Pwm_LL_FtuNCommonProcessInt(u8Instance, u32Overflow, u32ChannelIntrFlag, u32FaultFlag);
    }
#endif
    EXIT_INTERRUPT();
}
#endif

#if ((defined PWM_FTU_0_ISR_USED) || (defined ICU_FTU_0_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_0_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_0_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_0_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(0, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_1_ISR_USED) || (defined ICU_FTU_1_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_1_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_1_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_1_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(1, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_2_ISR_USED) || (defined ICU_FTU_2_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_2_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_2_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_2_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(2, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_3_ISR_USED) || (defined ICU_FTU_3_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_3_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_3_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_3_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(3, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_4_ISR_USED) || (defined ICU_FTU_4_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_4_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_4_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_4_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(4, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_5_ISR_USED) || (defined ICU_FTU_5_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_5_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_5_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_5_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(5, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_6_ISR_USED) || (defined ICU_FTU_6_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_6_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_6_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_6_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(6, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_7_ISR_USED) || (defined ICU_FTU_7_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_7_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_7_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_7_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(7, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_8_ISR_USED) || (defined ICU_FTU_8_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_8_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_8_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_8_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(8, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_9_ISR_USED) || (defined ICU_FTU_9_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_9_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_9_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_9_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(9, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_10_ISR_USED) || (defined ICU_FTU_10_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_10_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_10_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_10_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(10, u8ModuleFlag);
}
#endif

#if ((defined PWM_FTU_11_ISR_USED) || (defined ICU_FTU_11_ISR_USED))
COMMON_TEXT_SECTION ISR(FTU_11_ISR)
{
    uint8 u8ModuleFlag = 0u;
#ifdef PWM_FTU_11_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_PWM;
#endif
#ifdef ICU_FTU_11_ISR_USED
    u8ModuleFlag |= FTU_MODLUE_FLAG_ICU;
#endif
    FtuCommon_ProcessInterrupt(11, u8ModuleFlag);
}
#endif

#define COMMON_STOP_SEC_CODE
#include "Common_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
