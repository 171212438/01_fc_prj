/**
 *   @file    Eftu_Ccm.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - CCM driver source file.
 *   @details CCM source file, containing the variables and functions that are exported by the
 *            CCM driver.
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CCM
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
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.0.0       14/11/2024    QXW0070       N/A          Eftu Initial Version
==================================================================================================*/
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eftu_Ccm_Types.h"
#include "Eftu_Ccm.h"
#include "Eftu_Ccm_Reg.h"
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define EFTU_START_SEC_CONST_UNSPECIFIED
#include "Eftu_MemMap.h"
#ifdef EFTU_CCM_USED
/* Defines a static constant pointer array CCM_PTRS to store base addresses of EFTU_CCM_Type peripherals.*/
EFTU_DATA_SECTION static EFTU_CCM_Type *const CCM_PTRS[] = { EFTU_CCM0, EFTU_CCM1, EFTU_CCM2 };
#endif /* EFTU_CCM_USED */
#define EFTU_STOP_SEC_CONST_UNSPECIFIED
#include "Eftu_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef EFTU_GTOM_MUX_USED
LOCAL_INLINE void EFTU_CCM_HWA_SetGtomMux(EFTU_CCM_Type *pCcm, uint8 u8GtomMux, uint32 u32Value);
#endif /* EFTU_GTOM_MUX_USED */
#ifdef EFTU_TRIGGER_MUX_USED
LOCAL_INLINE void EFTU_CCM_HWA_SetTrigMux(EFTU_CCM_Type *pCcm, uint32 u32Value);
LOCAL_INLINE void EFTU_CCM_HWA_SetTrigEnable(EFTU_CCM_Type *pCcm, uint8 u8Idx, uint32 u32Flag);
#endif /* EFTU_TRIGGER_MUX_USED */
#ifdef EFTU_CCM_USED
LOCAL_INLINE void EFTU_CCM_HWA_SetDebugMode(EFTU_CCM_Type *pCcm, EFTU_CCM_DebugModeType eDebugMode);
LOCAL_INLINE void EFTU_CCM_HWA_SetClusterCmuClkSrc(EFTU_CCM_Type *pCcm, uint32 u32Value);
LOCAL_INLINE void EFTU_CCM_HWA_SetTimInSrc(EFTU_CCM_Type *pCcm, uint32 u32Value);
LOCAL_INLINE void EFTU_CCM_HWA_SetAuxInSrc0(EFTU_CCM_Type *pCcm, uint32 u32Value);
LOCAL_INLINE void EFTU_CCM_HWA_SetAuxInSrc1(EFTU_CCM_Type *pCcm, uint32 u32Value);
#if EFTU_CCM_HRPWM_MUX_SUPPORT == STD_ON
LOCAL_INLINE void EFTU_CCM_HWA_SetHrPwmSwap(EFTU_CCM_Type *pCcm, EFTU_CCM_HrPwmSwapType eHrpwmSwap);
#endif
LOCAL_INLINE void EFTU_CCM_HWA_SetTomMux(EFTU_CCM_Type *pCcm, uint32 u32Value);
LOCAL_INLINE void EFTU_CCM_HWA_SetDmaReqSrc(EFTU_CCM_Type *pCcm, uint32 u32ReqSrcIdx, uint32 u32Value);
#endif /* EFTU_CCM_USED */
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#ifdef EFTU_GTOM_MUX_USED
/**
 * Set GTOM MUX configuration.
 *
 * @param pCcm Pointer to the EFTU_CCM controller base address.
 * @param u8GtomMux Index of the GTOM_MUX register to configure.
 * @param u32Value Value to be written to the GTOM_MUX register.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetGtomMux(EFTU_CCM_Type *pCcm, uint8 u8GtomMux, uint32 u32Value)
{
    /* Write the value to the specified GTOM_MUX register */
    pCcm->GTOM_MUX[u8GtomMux] = u32Value;
}
#endif /* EFTU_GTOM_MUX_USED */
#ifdef EFTU_TRIGGER_MUX_USED
/**
 * @brief Set the trigger MUX configuration for EFTU_CCM.
 *
 * @param pCcm Pointer to EFTU_CCM_Type, representing the base address of EFTU_CCM.
 * @param u32Value 32-bit value to configure the TRG_MUX register.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetTrigMux(EFTU_CCM_Type *pCcm, uint32 u32Value)
{
    /* Write the 32-bit value to the TRG_MUX register */
    pCcm->TRG_MUX = u32Value;
}

/**
 * @brief      Enables or disables the trigger function for a specific trigger source in the EFTU
 * CCM module.
 *
 * This function is used to set whether a specific trigger source in the EFTU CCM module is enabled.
 * It achieves this by writing the given flag value to the corresponding trigger enable register.
 *
 * @param      pCcm       Pointer to the EFTU CCM module structure, which should be a valid pointer.
 * @param      u8Idx      Index of the trigger source, used to select which trigger source's enable
 * state to modify.
 * @param      u32Flag    Flag to set the enable state of the trigger source. Non-zero value to
 * enable, 0 to disable.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetTrigEnable(EFTU_CCM_Type *pCcm, uint8 u8Idx, uint32 u32Flag)
{
    pCcm->TRG_EN[u8Idx] = u32Flag;
}
#endif /* EFTU_TRIGGER_MUX_USED */
#ifdef EFTU_CCM_USED
/**
 * @brief Set the debug mode for the EFTU_CCM module. [FMR_EFTU_0001]
 *
 * @param pCcm Pointer to the EFTU_CCM module structure.
 * @param eDebugMode Debug mode type.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetDebugMode(EFTU_CCM_Type *pCcm, EFTU_CCM_DebugModeType eDebugMode)
{
    /* Update the PROT register to set the debug mode. Clear the existing debug mode bits and set
     * the new mode. */
    pCcm->PROT = (pCcm->PROT & ~EFTU_CCM_PROT_DBG_MODE_MASK) | EFTU_CCM_PROT_DBG_MODE(eDebugMode);
}

/**
 * Set the CMU clock source for the cluster.
 *
 * @param pCcm Pointer to the EFTU_CCM module structure.
 * @param u32Value 32-bit value representing the clock source configuration.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetClusterCmuClkSrc(EFTU_CCM_Type *pCcm, uint32 u32Value)
{
    /* Write the clock source configuration to the CMU_CLK_CFG register */
    pCcm->CMU_CLK_CFG = u32Value;
}

/**
 * Set the TIM_IN_SRC register value.
 *
 * @param pCcm Pointer to the EFTU_CCM module base address
 * @param u32Value Value to be written to the TIM_IN_SRC register
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetTimInSrc(EFTU_CCM_Type *pCcm, uint32 u32Value)
{
    /* Write the value to the TIM_IN_SRC register */
    pCcm->TIM_IN_SRC = u32Value;
}

/**
 * Set the auxiliary input source 0.
 *
 * @param pCcm Pointer to the EFTU_CCM controller base address.
 * @param u32Value 32-bit value to be written to the TIM_IN_SRC0 register.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetAuxInSrc0(EFTU_CCM_Type *pCcm, uint32 u32Value)
{
    /* Write the 32-bit value to the TIM_IN_SRC0 register to configure the auxiliary input source 0 */
    pCcm->TIM_IN_SRC0 = u32Value;
}

/**
 * Set the auxiliary input source 1.
 *
 * @param pCcm Pointer to the EFTU_CCM controller base address
 * @param u32Value 32-bit value to write to TIM_IN_SRC1 register
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetAuxInSrc1(EFTU_CCM_Type *pCcm, uint32 u32Value)
{
    /* Write the 32-bit value to the TIM_IN_SRC1 register */
    pCcm->TIM_IN_SRC1 = u32Value;
}
#if EFTU_CCM_HRPWM_MUX_SUPPORT == STD_ON
/**
 * @brief Set the HRPWM swap mode.
 * @param pCcm Pointer to the EFTU_CCM module structure.
 * @param eHrpwmSwap HRPWM swap mode enum type.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetHrPwmSwap(EFTU_CCM_Type *pCcm, EFTU_CCM_HrPwmSwapType eHrpwmSwap)
{
    /* Write the selected swap mode to the HRPWM_MUX register to configure the hardware behavior */
    pCcm->HRPWM_MUX = (uint32)eHrpwmSwap;
}
#endif
/**
 * Set the value of the TOM_MUX register.
 *
 * @param pCcm Pointer to the EFTU_CCM module structure.
 * @param u32Value 32-bit unsigned integer value to be written to the TOM_MUX register.
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetTomMux(EFTU_CCM_Type *pCcm, uint32 u32Value)
{
    /* Write the value to the TOM_MUX register */
    pCcm->TOM_MUX = u32Value;
}

/**
 * Set DMA request source.
 *
 * @param pCcm Pointer to the EFTU_CCM module structure
 * @param u32ReqSrcIdx Index of the DMA request source
 * @param u32Value Value to be written to the DMA request source
 */
LOCAL_INLINE void EFTU_CCM_HWA_SetDmaReqSrc(EFTU_CCM_Type *pCcm, uint32 u32ReqSrcIdx, uint32 u32Value)
{
    /* Write the value to the specified DMA request source index */
    pCcm->DMA_SRC[u32ReqSrcIdx] = u32Value;
}
#endif /* EFTU_CCM_USED */
/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef EFTU_GTOM_MUX_USED
/**
 * @brief Initialize GTOM MUX configuration
 *
 * @param pGtomMux Pointer to the GTOM MUX configuration structure
 */
EFTU_TEXT_SECTION void Eftu_Ccm_GtomMuxInit(const Eftu_CcmGtomMuxType *pGtomMux)
{
    uint32 u32Loop;
    uint32 aMuxCfg[EFTU_CCM_GTOM_MUX_COUNT] = { 0U, 0U, 0U, 0U };

    /* Iterate over each MUX channel configuration */
    for (u32Loop = 0u; u32Loop < pGtomMux->u8MuxChannelCount; u32Loop++)
    {
        uint32 u32Mux = (uint32)pGtomMux->pChannel[u32Loop].u8GtomChannel >> 2u;
        /* Construct MUX configuration value including GTOM channel and instance information */
        aMuxCfg[u32Mux] |= (pGtomMux->pChannel[u32Loop].u8ModuleChannel |
                            ((2U - (uint32)pGtomMux->pChannel[u32Loop].eInstance) << 5U))
                           << ((pGtomMux->pChannel[u32Loop].u8GtomChannel & 3U) << 3U);
    }

    /* Set GTOM MUX configuration for all MUX channels */
    for (u32Loop = 0; u32Loop < EFTU_CCM_GTOM_MUX_COUNT; u32Loop++)
    {
        EFTU_CCM_HWA_SetGtomMux(EFTU_CCM0, (uint8)u32Loop, aMuxCfg[u32Loop]);
    }
}
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize GTOM Mux for EFTU Global CCM.
 *
 * This function resets the configuration of all GTOM Muxes to their default state.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_GtomMuxDeInit(void)
{
    /* Define a 32-bit unsigned integer variable for loop counting */
    uint32 u32Loop;

    /* Loop through all GTOM Muxes */
    for (u32Loop = 0; u32Loop < EFTU_CCM_GTOM_MUX_COUNT; u32Loop++)
    {
        /* Set the configuration of each GTOM Mux to 0 to deinitialize */
        EFTU_CCM_HWA_SetGtomMux(EFTU_CCM0, (uint8)u32Loop, 0U);
    }
}
#endif /* (EFTU_DEINIT_API == STD_ON) */
#endif /* EFTU_GTOM_MUX_USED */
#ifdef EFTU_TRIGGER_MUX_USED
/**
 * @brief Initialize the trigger multiplexer configuration.
 *
 * This function configures the trigger multiplexer and enable registers based on the provided
 * configuration structure. It sets up the trigger routing and enables/disables specific triggers.
 *
 * @param pTrigMux Pointer to the trigger multiplexer configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_TrigMuxInit(const Eftu_CcmTrigMuxType *pTrigMux)
{
    /** Initialize trigger multiplexer and enable configuration variables */
    uint32 u32TrigMux                     = 0U;
    uint32 aTrigEn[EFTU_CCM_TRG_EN_COUNT] = { 0U, 0U };
    uint32 u32Loop;

    /** Loop through each multiplexer channel to set up trigger multiplexer and enable configurations */
    for (u32Loop = 0; u32Loop < pTrigMux->u8MuxChannelCount; u32Loop++)
    {
        /** Set trigger multiplexer configuration based on instance and trigger channel */
        u32TrigMux |= ((uint32)pTrigMux->pChannel[u32Loop].eInstance + 1U)
                      << (pTrigMux->pChannel[u32Loop].u8TrigChannel << 1U);

        /** Set trigger enable configuration based on enable flag and trigger channel */
        aTrigEn[pTrigMux->pChannel[u32Loop].u8TrigChannel >> 2U] |=
            ((uint32)pTrigMux->pChannel[u32Loop].u8EnableFlag
             << ((pTrigMux->pChannel[u32Loop].u8TrigChannel & 3U) << 3U));
    }

    /** Loop through each trigger enable register to set the enable configuration */
    for (u32Loop = 0; u32Loop < EFTU_CCM_TRG_EN_COUNT; u32Loop++)
    {
        EFTU_CCM_HWA_SetTrigEnable(EFTU_CCM0, (uint8)u32Loop, aTrigEn[u32Loop]);
    }

    /** Set the trigger multiplexer configuration */
    EFTU_CCM_HWA_SetTrigMux(EFTU_CCM0, u32TrigMux);
}
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize the trigger multiplexer.
 *
 * This function resets the trigger multiplexer to its default state by disabling all triggers.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_TrigMuxDeInit(void)
{
    /* Loop variable for iterating over triggers */
    uint32 u32Loop;

    /* Set the trigger multiplexer to its default state */
    EFTU_CCM_HWA_SetTrigMux(EFTU_CCM0, 0U);

    /* Disable all triggers */
    for (u32Loop = 0; u32Loop < EFTU_CCM_TRG_EN_COUNT; u32Loop++)
    {
        /* Disable the current trigger */
        EFTU_CCM_HWA_SetTrigEnable(EFTU_CCM0, (uint8)u32Loop, 0U);
    }
}
#endif /* EFTU_DEINIT_API */
#endif /* EFTU_TRIGGER_MUX_USED */
#ifdef EFTU_CCM_USED
/**
 * @brief Initialize the global CCM (Clock Configuration Module) configuration.
 * @param pConfig Pointer to the CCM configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_Init(const Eftu_CcmConfigType *pConfig)
{
    uint32 u32Loop, u32Loop1;

    /* Iterate over all CCM instances */
    for (u32Loop = 0U; u32Loop < pConfig->u8InstanceCount; u32Loop++)
    {
        /* Get the configuration for the current CCM instance */
        const Eftu_CcmInsConfigType *pCcmInsConfig = &pConfig->pCcmConfig[u32Loop];

        /* Get the base address of the CCM registers for the current instance */
        EFTU_CCM_Type *pCcm = CCM_PTRS[(uint32)pCcmInsConfig->eInstance];

        /* Set the debug mode for the CCM */
        EFTU_CCM_HWA_SetDebugMode(pCcm, pCcmInsConfig->eDebugMode);

        /* Temporary array to store configuration data */
        uint32 aTemp[EFTU_CCM_DMA_REQ_COUNT];

        /* Configure CMU (Clock Management Unit) clock sources */
        aTemp[0] = 0U;
        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_CMU_CLOCK_RES_COUNT; u32Loop1++)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
                    Reason: The or operation of EFTU_CCM_CMU_CLK_CFG_CLK0_SRC is to get the Clock
               source */
            aTemp[0] |= (EFTU_CCM_CMU_CLK_CFG_CLK0_SRC(pCcmInsConfig->aCmuClkRes[u32Loop1])
                         << (u32Loop1 << 2U));
            /* PRQA S 2985 -- */
        }
        EFTU_CCM_HWA_SetClusterCmuClkSrc(pCcm, aTemp[0]);

        /* Configure timer input sources */
        aTemp[0] = 0U;
        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_TIM_IN_SRC_COUNT; u32Loop1++)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
                        Reason: The or operation of EFTU_CCM_TIM_IN_SRC_TIM_IN_SEL is to get the
               Tim_In source */
            aTemp[0] |= EFTU_CCM_TIM_IN_SRC_TIM_IN_SEL(pCcmInsConfig->aTimIn[u32Loop1]) << u32Loop1;
            /* PRQA S 2985 -- */
        }
        EFTU_CCM_HWA_SetTimInSrc(pCcm, aTemp[0]);

        /* Configure auxiliary input sources */
        aTemp[0] = 0U;
        aTemp[1] = 0U;
        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_TIM_IN_SRC_COUNT; u32Loop1++)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
                        Reason: The or operation of EFTU_CCM_TIM_IN_SRC0_TIM_AUX_SEL0 is to get the
               Tim_Aux source */
            aTemp[u32Loop1 >> 2] |=
                EFTU_CCM_TIM_IN_SRC0_TIM_AUX_SEL0(pCcmInsConfig->aTimAuxIn[u32Loop1])
                << ((u32Loop1 & 3U) << 3U);
            /* PRQA S 2985 -- */
        }
        EFTU_CCM_HWA_SetAuxInSrc0(pCcm, aTemp[0]);
        EFTU_CCM_HWA_SetAuxInSrc1(pCcm, aTemp[1]);
#if EFTU_CCM_HRPWM_MUX_SUPPORT == STD_ON
        if (0U == u32Loop)
        {
            /* Configure HRPWM (High Resolution Pulse Width Modulation) swap mode */
            EFTU_CCM_HWA_SetHrPwmSwap(pCcm, pCcmInsConfig->eHrpwmSwap);
        }
#endif
        /* Configure TOM (Timer Output Multiplexer) multiplexing */
        aTemp[0] = pCcmInsConfig->eTomTrigIn |
                   (pCcmInsConfig->u32TomSwapFlag << EFTU_CCM_TOM_MUX_TOM_SWAP_SHIFT);
        EFTU_CCM_HWA_SetTomMux(pCcm, aTemp[0]);

        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_DMA_REQ_REG_COUNT; u32Loop1++)
        {
            aTemp[u32Loop1] = 0U;
        }
        /* Configure DMA request sources */
        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_DMA_REQ_COUNT; u32Loop1++)
        {
            uint32 u32Offset = u32Loop1 >> 1U;
            aTemp[u32Offset] |= (((uint32)pCcmInsConfig->aDmaReq[u32Loop1].u8Channel) |
                                 ((uint32)pCcmInsConfig->aDmaReq[u32Loop1].eReqSource << 4U) |
                                 ((uint32)pCcmInsConfig->aDmaReq[u32Loop1].u8TomTrigFlag << 6U))
                                << ((u32Loop1 & 1U) << 4U);
        }
        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_DMA_REQ_REG_COUNT; u32Loop1++)
        {
            EFTU_CCM_HWA_SetDmaReqSrc(pCcm, u32Loop1, aTemp[u32Loop1]);
        }
    }
}

#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief De-initialize the CCM module.
 *
 * This function de-initializes the CCM module by resetting the configuration of each CCM instance.
 *
 * @param pConfig Pointer to the CCM configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Ccm_DeInit(const Eftu_CcmConfigType *pConfig)
{
    /* Define loop variables */
    uint32 u32Loop, u32Loop1;

    /* Iterate over each CCM instance */
    for (u32Loop = 0U; u32Loop < pConfig->u8InstanceCount; u32Loop++)
    {
        /* Get the pointer to the current CCM instance */
        EFTU_CCM_Type *pCcm = CCM_PTRS[(uint32)pConfig->pCcmConfig[u32Loop].eInstance];

        /* Set debug mode to allow running in debug mode */
        EFTU_CCM_HWA_SetDebugMode(pCcm, EFTU_CCM_DEBUG_RUN);

        /* Set cluster CMU clock source to default */
        EFTU_CCM_HWA_SetClusterCmuClkSrc(pCcm, 0U);

        /* Set timer input source to default */
        EFTU_CCM_HWA_SetTimInSrc(pCcm, 0U);

        /* Set auxiliary input source 0 to default */
        EFTU_CCM_HWA_SetAuxInSrc0(pCcm, 0U);

        /* Set auxiliary input source 1 to default */
        EFTU_CCM_HWA_SetAuxInSrc1(pCcm, 0U);
#if EFTU_CCM_HRPWM_MUX_SUPPORT == STD_ON
        if (0U == u32Loop)
        {
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
             to an inappropriate essential type. Reason: The 0u can be safely converted to the
             enumeration type */
            /* Set HR PWM swap to default */
            EFTU_CCM_HWA_SetHrPwmSwap(pCcm, (EFTU_CCM_HrPwmSwapType)0U);
            /* PRQA S 4342 -- */
        }
#endif
        /* Set TOMMUX to default */
        EFTU_CCM_HWA_SetTomMux(pCcm, 1U);

        /* Iterate over DMA request registers and set each DMA request source to default */
        for (u32Loop1 = 0U; u32Loop1 < EFTU_CCM_DMA_REQ_REG_COUNT; u32Loop1++)
        {
            EFTU_CCM_HWA_SetDmaReqSrc(pCcm, u32Loop1, 0U);
        }
    }
}
#endif /* (EFTU_DEINIT_API == STD_ON) */
#endif /* EFTU_CCM_USED */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
