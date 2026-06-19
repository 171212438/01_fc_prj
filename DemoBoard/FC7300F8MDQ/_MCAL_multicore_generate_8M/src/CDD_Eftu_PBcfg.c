/**
*   @file    CDD_Eftu_PBcfg.c
*   @version 1.5.1

*   @brief   AUTOSAR Eftu Post-Bulid configuration.
*   @details This file contains the Eftu Autosar Post-Bulid configuration.
*
*   @addtogroup Eftu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EFTU
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif
/***************************************************************************************************
*                                        INCLUDE FILES
***************************************************************************************************/
#include "CDD_Eftu_Cfg.h"
#include "CDD_Eftu.h"
#include "CDD_Eftu_Hw.h"
/***************************************************************************************************
*                                      GLOBAL VARIABLES
***************************************************************************************************/

/***************************************************************************************************
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
***************************************************************************************************/

/***************************************************************************************************
*                                       LOCAL MACROS
***************************************************************************************************/

/***************************************************************************************************
*                                      LOCAL CONSTANTS
***************************************************************************************************/

/***************************************************************************************************
*                                      LOCAL VARIABLES
***************************************************************************************************/
/***************************************************************************************************
*                                       GLOBAL FUNCTIONS
***************************************************************************************************/
/***************************************************************************************************
*                                      GLOBAL CONSTANTS
***************************************************************************************************/
#define EFTU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Eftu_MemMap.h"

EFTU_DATA_SECTION static const Eftu_CcmInsConfigType Eftu_CcmInstances[] =
{
    {
        EFTU_0,
        EFTU_CCM_DEBUG_ALL_HALT,
        {
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
            EFTU_CCM_CMU_CLOCK_RES,
        },
        {
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
            EFTU_CCM_TIM_INSRC_PAD_IN,
        },
        {
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
            ((uint8)((uint8)EFTU_CCM_TIM_AUX_IN_EFTU0_OUT0 * 16U) + 0U),
        },
        EFTU_CCM_HRPWM_SRC_OUT03_OUT_T03,
        EFTU_CCM_TOM0_CH7_TO_TOM1_CH0,
        0U
        ,
        {
            {
                EFTU_CCM_DMA_REQ_SRC_TIM,
                0U,
                0U
            },
            {
                EFTU_CCM_DMA_REQ_SRC_TIM,
                0U,
                0U
            },
            {
                EFTU_CCM_DMA_REQ_SRC_TIM,
                0U,
                0U
            },
            {
                EFTU_CCM_DMA_REQ_SRC_TIM,
                0U,
                0U
            },
            {
                EFTU_CCM_DMA_REQ_SRC_TIM,
                0U,
                0U
            },
            {
                EFTU_CCM_DMA_REQ_SRC_TIM,
                0U,
                0U
            },
        },
    },
};

EFTU_DATA_SECTION static const Eftu_CcmConfigType Eftu_Ccm_Config = 
{
    1U,
    (Eftu_CcmInsConfigType*)Eftu_CcmInstances,
};




EFTU_DATA_SECTION static const Eftu_CmuConfigType Eftu_Cmu_Config =
{
    {
        1U,
        1U,
    },

    {
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            4U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
        {
            (boolean)TRUE,
            EFTU_CMU_GCLK_EN,
            0U
        },
    },

        EFTU_CMU_CLK8_CLS0_CLK,

    {
        {
            (boolean)FALSE,
            1U,
            1U
        },
        {
            (boolean)FALSE,
            1U,
            1U
        },
    },
};







EFTU_DATA_SECTION static const Eftu_TomInsConfigType Eftu_TomInstances[] =
{
    {
        EFTU_0,
        EFTU_TOM_0,
        EFTU_TOM_TBU_SEL_TS0,
        1U
    },
    {
        EFTU_0,
        EFTU_TOM_1,
        EFTU_TOM_TBU_SEL_TS0,
        1U
    },
};

EFTU_DATA_SECTION static const Eftu_TomConfigType Eftu_Tom_Config =
{
    2U,
    (Eftu_TomInsConfigType*)Eftu_TomInstances,
};


EFTU_DATA_SECTION const Eftu_ConfigType Eftu_Config =
{
    (Eftu_CcmConfigType*)&Eftu_Ccm_Config,
    NULL_PTR,
    (Eftu_CmuConfigType*)&Eftu_Cmu_Config,
    NULL_PTR,
    NULL_PTR,
    (Eftu_TomConfigType*)&Eftu_Tom_Config
};


#define EFTU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Eftu_MemMap.h"
/***************************************************************************************************
*                                      GLOBAL VARIABLES
***************************************************************************************************/

/***************************************************************************************************
*                                   LOCAL FUNCTION PROTOTYPES
***************************************************************************************************/

/***************************************************************************************************
*                                       LOCAL FUNCTIONS
***************************************************************************************************/

#ifdef __cplusplus
}
#endif
