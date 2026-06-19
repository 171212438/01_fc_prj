/**
 *   @file    Eftu_Tbu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Eftu - TBU driver source file.
 *   @details TBU source file, containing the variables and functions that are exported by the
 *            TBU driver.
 *
 *   @addtogroup Eftu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TBU
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
#include "Eftu_Tbu_Types.h"
#include "Eftu_Tbu.h"
#include "Eftu_Tbu_Reg.h"
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

#ifdef EFTU_TBU_USED
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
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
LOCAL_INLINE void EFTU_TBU_HWA_SetCounterEnDis(EFTU_TBU_Type *const pTbu, uint32 u32Value);
LOCAL_INLINE void EFTU_TBU_HWA_SetCnt0Ctrl(EFTU_TBU_Type *const pTbu, uint32 u32Value);
LOCAL_INLINE void EFTU_TBU_HWA_SetTs1Src(EFTU_TBU_Type *const pTbu, EFTU_TBU_ClkSrcType eClkSrc);
LOCAL_INLINE void EFTU_TBU_HWA_SetTs2Src(EFTU_TBU_Type *const pTbu, EFTU_TBU_ClkSrcType eClkSrc);
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/**
 * Set the counter enable status.
 *
 * @param pTbu Pointer to the EFTU_TBU_Type structure, representing the base address of the EFTU TBU
 * module.
 * @param u32Value Value to be written to the CHEN register. Non-zero to enable, zero to disable the
 * counter.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetCounterEnDis(EFTU_TBU_Type *const pTbu, uint32 u32Value)
{
    /* Write the value to the CHEN register to enable or disable the counter */
    pTbu->CHEN = u32Value;
}

/**
 * Set the control register for Counter 0 of the EFTU TBU module.
 *
 * @param pTbu Pointer to the EFTU TBU module base address.
 * @param u32Value Value to be written to the Counter 0 control register.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetCnt0Ctrl(EFTU_TBU_Type *const pTbu, uint32 u32Value)
{
    /* Write the value to the Counter 0 control register */
    pTbu->CH0_CTRL = u32Value;
}

/**
 * @brief Set the TS1 clock source.
 *
 * @param pTbu Pointer to the EFTU_TBU module.
 * @param eClkSrc The new clock source to set.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetTs1Src(EFTU_TBU_Type *const pTbu, EFTU_TBU_ClkSrcType eClkSrc)
{
    /* Set the clock source in the CH1_CTRL register without affecting other settings */
    pTbu->CH1_CTRL |= EFTU_TBU_CH1_CTRL_CH_CLK_SRC(eClkSrc);
}

/**
 * @brief Set TS2 clock source
 *
 * This function sets the clock source for the TS2 counter by modifying the CH2_CTRL register.
 *
 * @param pTbu Pointer to the EFTU_TBU module base address.
 * @param eClkSrc Clock source to be set.
 */
LOCAL_INLINE void EFTU_TBU_HWA_SetTs2Src(EFTU_TBU_Type *const pTbu, EFTU_TBU_ClkSrcType eClkSrc)
{
    /* Update the CH2_CTRL register with the new clock source */
    pTbu->CH2_CTRL |= EFTU_TBU_CH2_CTRL_CH_CLK_SRC(eClkSrc);
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
/**
 * @brief Initialize the TBU (Time Base Unit) with the provided configuration.
 *
 * @param pTbuConfig Pointer to the TBU configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Tbu_Init(const Eftu_TbuConfigType *pTbuConfig)
{
    uint32               u32Loop, u32Count;
    EFTU_TBU_ChannelType eChannel;
    u32Count        = pTbuConfig->u8ChannelCount;
    uint32 u32Endis = 0;

    /* Iterate through each channel configuration */
    for (u32Loop = 0u; u32Loop < u32Count; u32Loop++)
    {
        uint32 u32Temp;
        eChannel = pTbuConfig->pChannel[u32Loop].eChannel;

        /* Configure the channel based on its type */
        if (EFTU_TBU_CNT0 == eChannel)
        {
            /* Set clock source and resolution for Counter 0 */
            u32Temp = EFTU_TBU_CH0_CTRL_CH_CLK_SRC(pTbuConfig->pChannel[u32Loop].eClockSrc);
            /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the
             * result is always that of the left-hand operand. REASON: The or operation of
             * EFTU_TBU_CH0_CTRL_LOW_RES is to get the TBU0 resolution */
            u32Temp |= EFTU_TBU_CH0_CTRL_LOW_RES(pTbuConfig->pChannel[u32Loop].eResolution);
            /* PRQA S 2985 -- */
            EFTU_TBU_HWA_SetCnt0Ctrl(EFTU_TBU, u32Temp);
        }
        else if (EFTU_TBU_CNT1 == eChannel)
        {
            /* Set clock source for Counter 1 */
            EFTU_TBU_HWA_SetTs1Src(EFTU_TBU, pTbuConfig->pChannel[u32Loop].eClockSrc);
        }
        else /* EFTU_TBU_CNT2 == eChannel*/
        {
            /* Set clock source for Counter 2 */
            EFTU_TBU_HWA_SetTs2Src(EFTU_TBU, pTbuConfig->pChannel[u32Loop].eClockSrc);
        }

        /* Update the enable/disable mask for the current channel */
        u32Endis |= ((uint32)0x2U << ((uint32)eChannel << 1U));
    }

    /* Apply the enable/disable configuration to the TBU */
    EFTU_TBU_HWA_SetCounterEnDis(EFTU_TBU, u32Endis);
}
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitializes the TBU (Time Base Unit) module.
 *
 * @param pTbuConfig Pointer to the TBU configuration structure.
 */
EFTU_TEXT_SECTION void Eftu_Tbu_DeInit(const Eftu_TbuConfigType *pTbuConfig)
{
    uint32               u32Loop, u32Count;
    EFTU_TBU_ChannelType eChannel;

    u32Count = pTbuConfig->u8ChannelCount;

    /* Iterate through each channel specified in the configuration */
    for (u32Loop = 0; u32Loop < u32Count; u32Loop++)
    {
        eChannel = pTbuConfig->pChannel[u32Loop].eChannel;

        /* The clock must be turned off before modifying CNT_CTRL */
        EFTU_TBU_HWA_SetCounterEnDis(EFTU_TBU, ((uint32)0x1U << ((uint32)eChannel << 1U)));
        /* Disable the respective counter or timer source based on the channel type */
        if (EFTU_TBU_CNT0 == eChannel)
        {
            EFTU_TBU_HWA_SetCnt0Ctrl(EFTU_TBU, 0U); /* Disable Counter 0 */
        }
        else if (EFTU_TBU_CNT1 == eChannel)
        {
            EFTU_TBU_HWA_SetTs1Src(EFTU_TBU, EFTU_TBU_CCM_CLK_0); /* Set Timer Source 1 to CMU CLK0 */
        }
        else /*EFTU_TBU_CNT2 == eChannel*/
        {
            EFTU_TBU_HWA_SetTs2Src(EFTU_TBU, EFTU_TBU_CCM_CLK_0); /* Set Timer Source 2 to CMU CLK0 */
        }
    }
}
#endif /* (EFTU_DEINIT_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#endif
