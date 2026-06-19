/**
 *   @file    Icu_Ism_Reg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR ICU - module register and macro definitions.
 *   @details ICU module registers, and macro definitions used to manipulate the module registers.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ICU
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/

#ifndef ISM_REG_H
#define ISM_REG_H
#ifdef __cplusplus
extern "C"
{
#endif
/*===============================================================================================
*                                         INCLUDE FILES
===============================================================================================*/
#include "Std_Types.h"
#include "Icu_Cfg.h"

/*===============================================================================================
*                                           CONSTANTS
===============================================================================================*/

/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/

#define ISM_FPC_CHANNEL_NUMBER (ISM_FPC_TOTAL_CHANNEL)
#define ISM_LAM_CHANNEL_NUMBER (ISM_LAM_TOTAL_CHANNEL)

/*!
 * @addtogroup ISM_Peripheral_Access_Layer ISM Peripheral Access Layer
 * @{
 */

/** ISM - Size of Registers Arrays */

/** ISM - Register Layout Typedef */

typedef struct
{

    __I uint32 PARAM; /* Parameter Register, offset: 0x0 */

    __IO uint32 CTRL; /* Control Register, offset: 0x4 */

    __IO uint32 E_STATUS; /* Event Status Register, offset: 0x8 */

    __IO uint32 E_CTRL; /* Event Control Register, offset: 0xC */

    __IO uint32 EC_CTRL; /* Event Control Mode Control Register, offset: 0x10 */

    uint8 RESERVED_0[236];

    struct
    {
        __IO uint32 FPC_STATUS; /* FPC Status Register, offset: 0x100 */

        __IO uint32 FPC_CTRL; /* FPC Control Register, offset: 0x104 */

        __IO uint32 FPC_CONFIG; /* FPC Configuration Register, offset: 0x108 */

        __IO uint32 FPC_TIMER; /* FPC Timer Register, offset: 0x10c */
    } FPC_CONTROLS[ISM_FPC_CHANNEL_NUMBER];

#if (ISM_FPC_CHANNEL_NUMBER == 32U)
    uint8 RESERVED_1[256];
#elif (ISM_FPC_CHANNEL_NUMBER == 16U)
    uint8 RESERVED_1[512];
#endif

    struct
    {
        __IO uint32 LAM_STATUS; /* LAM Status Register, offset: 0x400 */

        __IO uint32 LAM_CTRL; /* LAM Control Register, offset: 0x404 */

        __IO uint32 LAM_CONFIG; /* LAM Configuration Register, offset: 0x408 */

        __IO uint32 LAM_COUNTER; /* LAM Counter Register, offset: 0x40c */
    } LAM_CONTROLS[ISM_LAM_CHANNEL_NUMBER];

} ISM_Type;

/** Number of instances of the ISM module. */

#define ISM_INSTANCE_COUNT     (1u)

/* ISM - Peripheral instance base addresses */

/** Peripheral ISM base address */

#define ISM_BASE               (0x4001b000u)

/** Peripheral ISM base pointer */

#define ISM                    ((ISM_Type *)ISM_BASE)

/** Array initializer of ISM peripheral base addresses */

#define ISM_BASE_ADDRS         { ISM_BASE }

/** Array initializer of ISM peripheral base pointers */

#define ISM_BASE_PTRS          { ISM }

/* ----------------------------------------------------------------------------
   -- ISM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ISM_Register_Masks ISM Register Masks
 * @{
 */

/* PARAM Bit Fields */
#define ISM_PARAM_LAM_MASK     0x1F000000u
#define ISM_PARAM_LAM_SHIFT    24u
#define ISM_PARAM_LAM_WIDTH    5u
#define ISM_PARAM_LAM(x)       (((uint32)(((uint32)(x)) << ISM_PARAM_LAM_SHIFT)) & ISM_PARAM_LAM_MASK)

#define ISM_PARAM_ECMC_MASK    0xFu
#define ISM_PARAM_ECMC_SHIFT   0u
#define ISM_PARAM_ECMC_WIDTH   4u
#define ISM_PARAM_ECMC(x)      (((uint32)(((uint32)(x)) << ISM_PARAM_ECMC_SHIFT)) & ISM_PARAM_ECMC_MASK)
/* PARAM Reg Mask */
#define ISM_PARAM_MASK         0x1F3F000Fu

/* CTRL Bit Fields */
#define ISM_CTRL_EN_MASK       0x80000000u
#define ISM_CTRL_EN_SHIFT      31u
#define ISM_CTRL_EN_WIDTH      1u
#define ISM_CTRL_EN(x)         (((uint32)(((uint32)(x)) << ISM_CTRL_EN_SHIFT)) & ISM_CTRL_EN_MASK)
#define ISM_CTRL_IEN_MASK      0x1u
#define ISM_CTRL_IEN_SHIFT     0u
#define ISM_CTRL_IEN_WIDTH     1u
#define ISM_CTRL_IEN(x)        (((uint32)(((uint32)(x)) << ISM_CTRL_IEN_SHIFT)) & ISM_CTRL_IEN_MASK)
/* CTRL Reg Mask */
#define ISM_CTRL_MASK          0x80000001u

/* E_STATUS Bit Fields */
#define ISM_E_STATUS_ECS_MASK  0xF0000u
#define ISM_E_STATUS_ECS_SHIFT 16u
#define ISM_E_STATUS_ECS_WIDTH 4u
#define ISM_E_STATUS_ECS(x) \
    (((uint32)(((uint32)(x)) << ISM_E_STATUS_ECS_SHIFT)) & ISM_E_STATUS_ECS_MASK)
#define ISM_E_STATUS_ES_MASK  0xFFFFu
#define ISM_E_STATUS_ES_SHIFT 0u
#define ISM_E_STATUS_ES_WIDTH 16u
#define ISM_E_STATUS_ES(x) \
    (((uint32)(((uint32)(x)) << ISM_E_STATUS_ES_SHIFT)) & ISM_E_STATUS_ES_MASK)
/* E_STATUS Reg Mask */
#define ISM_E_STATUS_MASK        0x000FFFFFu

/* E_CTRL Bit Fields */
#define ISM_E_CTRL_ECE_MASK      0xF0000u
#define ISM_E_CTRL_ECE_SHIFT     16u
#define ISM_E_CTRL_ECE_WIDTH     4u
#define ISM_E_CTRL_ECE(x)        (((uint32)(((uint32)(x)) << ISM_E_CTRL_ECE_SHIFT)) & ISM_E_CTRL_ECE_MASK)
#define ISM_E_CTRL_EE_MASK       0xFFFFu
#define ISM_E_CTRL_EE_SHIFT      0u
#define ISM_E_CTRL_EE_WIDTH      16u
#define ISM_E_CTRL_EE(x)         (((uint32)(((uint32)(x)) << ISM_E_CTRL_EE_SHIFT)) & ISM_E_CTRL_EE_MASK)
/* E_CTRL Reg Mask */
#define ISM_E_CTRL_MASK          0x000FFFFFu

/* EC_CTRL Bit Fields */
#define ISM_EC_CTRL_THRL_3_MASK  0xF0000000u
#define ISM_EC_CTRL_THRL_3_SHIFT 28u
#define ISM_EC_CTRL_THRL_3_WIDTH 4u
#define ISM_EC_CTRL_THRL_3(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_THRL_3_SHIFT)) & ISM_EC_CTRL_THRL_3_MASK)
#define ISM_EC_CTRL_SEL_3_MASK  0xF000000u
#define ISM_EC_CTRL_SEL_3_SHIFT 24u
#define ISM_EC_CTRL_SEL_3_WIDTH 4u
#define ISM_EC_CTRL_SEL_3(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_SEL_3_SHIFT)) & ISM_EC_CTRL_SEL_3_MASK)
#define ISM_EC_CTRL_THRL_2_MASK  0xF00000u
#define ISM_EC_CTRL_THRL_2_SHIFT 20u
#define ISM_EC_CTRL_THRL_2_WIDTH 4u
#define ISM_EC_CTRL_THRL_2(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_THRL_2_SHIFT)) & ISM_EC_CTRL_THRL_2_MASK)
#define ISM_EC_CTRL_SEL_2_MASK  0xF0000u
#define ISM_EC_CTRL_SEL_2_SHIFT 16u
#define ISM_EC_CTRL_SEL_2_WIDTH 4u
#define ISM_EC_CTRL_SEL_2(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_SEL_2_SHIFT)) & ISM_EC_CTRL_SEL_2_MASK)
#define ISM_EC_CTRL_THRL_1_MASK  0xF000u
#define ISM_EC_CTRL_THRL_1_SHIFT 12u
#define ISM_EC_CTRL_THRL_1_WIDTH 4u
#define ISM_EC_CTRL_THRL_1(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_THRL_1_SHIFT)) & ISM_EC_CTRL_THRL_1_MASK)
#define ISM_EC_CTRL_SEL_1_MASK  0xF00u
#define ISM_EC_CTRL_SEL_1_SHIFT 8u
#define ISM_EC_CTRL_SEL_1_WIDTH 4u
#define ISM_EC_CTRL_SEL_1(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_SEL_1_SHIFT)) & ISM_EC_CTRL_SEL_1_MASK)
#define ISM_EC_CTRL_THRL_0_MASK  0xF0u
#define ISM_EC_CTRL_THRL_0_SHIFT 4u
#define ISM_EC_CTRL_THRL_0_WIDTH 4u
#define ISM_EC_CTRL_THRL_0(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_THRL_0_SHIFT)) & ISM_EC_CTRL_THRL_0_MASK)
#define ISM_EC_CTRL_SEL_0_MASK  0xFu
#define ISM_EC_CTRL_SEL_0_SHIFT 0u
#define ISM_EC_CTRL_SEL_0_WIDTH 4u
#define ISM_EC_CTRL_SEL_0(x) \
    (((uint32)(((uint32)(x)) << ISM_EC_CTRL_SEL_0_SHIFT)) & ISM_EC_CTRL_SEL_0_MASK)
/* EC_CTRL Reg Mask */
#define ISM_EC_CTRL_MASK         0xFFFFFFFFu

/* FPC_STATUS Bit Fields */
#define ISM_FPC_STATUS_RGD_MASK  0x2u
#define ISM_FPC_STATUS_RGD_SHIFT 1u
#define ISM_FPC_STATUS_RGD_WIDTH 1u
#define ISM_FPC_STATUS_RGD(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_STATUS_RGD_SHIFT)) & ISM_FPC_STATUS_RGD_MASK)
#define ISM_FPC_STATUS_FGD_MASK  0x1u
#define ISM_FPC_STATUS_FGD_SHIFT 0u
#define ISM_FPC_STATUS_FGD_WIDTH 1u
#define ISM_FPC_STATUS_FGD(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_STATUS_FGD_SHIFT)) & ISM_FPC_STATUS_FGD_MASK)
/* FPC_STATUS0 Reg Mask */
#define ISM_FPC_STATUS_MASK    0x00000003u

/* FPC_CTRL Bit Fields */
#define ISM_FPC_CTRL_IEN_MASK  0x2u
#define ISM_FPC_CTRL_IEN_SHIFT 1u
#define ISM_FPC_CTRL_IEN_WIDTH 1u
#define ISM_FPC_CTRL_IEN(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CTRL_IEN_SHIFT)) & ISM_FPC_CTRL_IEN_MASK)
#define ISM_FPC_CTRL_EN_MASK  0x1u
#define ISM_FPC_CTRL_EN_SHIFT 0u
#define ISM_FPC_CTRL_EN_WIDTH 1u
#define ISM_FPC_CTRL_EN(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CTRL_EN_SHIFT)) & ISM_FPC_CTRL_EN_MASK)
/* FPC_CTRL0 Reg Mask */
#define ISM_FPC_CTRL_MASK        0x00000003u

/* FPC_CONFIG Bit Fields */
#define ISM_FPC_CONFIG_FEG_MASK  0xC00000u
#define ISM_FPC_CONFIG_FEG_SHIFT 22u
#define ISM_FPC_CONFIG_FEG_WIDTH 2u
#define ISM_FPC_CONFIG_FEG(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CONFIG_FEG_SHIFT)) & ISM_FPC_CONFIG_FEG_MASK)
#define ISM_FPC_CONFIG_FED_MASK  0x300000u
#define ISM_FPC_CONFIG_FED_SHIFT 20u
#define ISM_FPC_CONFIG_FED_WIDTH 2u
#define ISM_FPC_CONFIG_FED(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CONFIG_FED_SHIFT)) & ISM_FPC_CONFIG_FED_MASK)
#define ISM_FPC_CONFIG_REG_MASK  0xC0000u
#define ISM_FPC_CONFIG_REG_SHIFT 18u
#define ISM_FPC_CONFIG_REG_WIDTH 2u
#define ISM_FPC_CONFIG_REG(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CONFIG_REG_SHIFT)) & ISM_FPC_CONFIG_REG_MASK)
#define ISM_FPC_CONFIG_RED_MASK  0x30000u
#define ISM_FPC_CONFIG_RED_SHIFT 16u
#define ISM_FPC_CONFIG_RED_WIDTH 2u
#define ISM_FPC_CONFIG_RED(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CONFIG_RED_SHIFT)) & ISM_FPC_CONFIG_RED_MASK)
#define ISM_FPC_CONFIG_CMP_MASK  0xFFFFu
#define ISM_FPC_CONFIG_CMP_SHIFT 0u
#define ISM_FPC_CONFIG_CMP_WIDTH 16u
#define ISM_FPC_CONFIG_CMP(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_CONFIG_CMP_SHIFT)) & ISM_FPC_CONFIG_CMP_MASK)
/* FPC_CONFIG0 Reg Mask */
#define ISM_FPC_CONFIG_MASK     0x00FFFFFFu

/* FPC_TIMER Bit Fields */
#define ISM_FPC_TIMER_TIM_MASK  0xFFFFu
#define ISM_FPC_TIMER_TIM_SHIFT 0u
#define ISM_FPC_TIMER_TIM_WIDTH 16u
#define ISM_FPC_TIMER_TIM(x) \
    (((uint32)(((uint32)(x)) << ISM_FPC_TIMER_TIM_SHIFT)) & ISM_FPC_TIMER_TIM_MASK)
/* FPC_TIMER0 Reg Mask */
#define ISM_FPC_TIMER_MASK        0x0000FFFFu

/* LAM_STATUS Bit Fields */
#define ISM_LAM_STATUS_OVFL_MASK  0x80000000u
#define ISM_LAM_STATUS_OVFL_SHIFT 31u
#define ISM_LAM_STATUS_OVFL_WIDTH 1u
#define ISM_LAM_STATUS_OVFL(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_STATUS_OVFL_SHIFT)) & ISM_LAM_STATUS_OVFL_MASK)
#define ISM_LAM_STATUS_COUNT_MASK  0xFFFFFFu
#define ISM_LAM_STATUS_COUNT_SHIFT 0u
#define ISM_LAM_STATUS_COUNT_WIDTH 24u
#define ISM_LAM_STATUS_COUNT(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_STATUS_COUNT_SHIFT)) & ISM_LAM_STATUS_COUNT_MASK)
/* LAM_STATUS0 Reg Mask */
#define ISM_LAM_STATUS_MASK    0x80FFFFFFu

/* LAM_CTRL Bit Fields */
#define ISM_LAM_CTRL_IEN_MASK  0x2u
#define ISM_LAM_CTRL_IEN_SHIFT 1u
#define ISM_LAM_CTRL_IEN_WIDTH 1u
#define ISM_LAM_CTRL_IEN(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CTRL_IEN_SHIFT)) & ISM_LAM_CTRL_IEN_MASK)
#define ISM_LAM_CTRL_EN_MASK  0x1u
#define ISM_LAM_CTRL_EN_SHIFT 0u
#define ISM_LAM_CTRL_EN_WIDTH 1u
#define ISM_LAM_CTRL_EN(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CTRL_EN_SHIFT)) & ISM_LAM_CTRL_EN_MASK)
/* LAM_CTRL0 Reg Mask */
#define ISM_LAM_CTRL_MASK 0x00000003u

/* LAM_CONFIG Bit Fields */
#if (ISM_LAM_TOTAL_CHANNEL == 16U)
#define ISM_LAM_CONFIG_RCS_MASK  0x1F000000u
#define ISM_LAM_CONFIG_RCS_SHIFT 24u
#define ISM_LAM_CONFIG_RCS_WIDTH 5u
#define ISM_LAM_CONFIG_RCS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_RCS_SHIFT)) & ISM_LAM_CONFIG_RCS_MASK)
#define ISM_LAM_CONFIG_MCS_MASK  0x1F0000u
#define ISM_LAM_CONFIG_MCS_SHIFT 16u
#define ISM_LAM_CONFIG_MCS_WIDTH 5u
#define ISM_LAM_CONFIG_MCS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_MCS_SHIFT)) & ISM_LAM_CONFIG_MCS_MASK)
#elif (ISM_LAM_TOTAL_CHANNEL == 8U)
#define ISM_LAM_CONFIG_RCS_MASK  0xF000000u
#define ISM_LAM_CONFIG_RCS_SHIFT 24u
#define ISM_LAM_CONFIG_RCS_WIDTH 4u
#define ISM_LAM_CONFIG_RCS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_RCS_SHIFT)) & ISM_LAM_CONFIG_RCS_MASK)
#define ISM_LAM_CONFIG_MCS_MASK  0xF0000u
#define ISM_LAM_CONFIG_MCS_SHIFT 16u
#define ISM_LAM_CONFIG_MCS_WIDTH 4u
#define ISM_LAM_CONFIG_MCS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_MCS_SHIFT)) & ISM_LAM_CONFIG_MCS_MASK)
#endif

#define ISM_LAM_CONFIG_IVW_MASK  0x1000u
#define ISM_LAM_CONFIG_IVW_SHIFT 12u
#define ISM_LAM_CONFIG_IVW_WIDTH 1u
#define ISM_LAM_CONFIG_IVW(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_IVW_SHIFT)) & ISM_LAM_CONFIG_IVW_MASK)
#define ISM_LAM_CONFIG_EDS_MASK  0xF00u
#define ISM_LAM_CONFIG_EDS_SHIFT 8u
#define ISM_LAM_CONFIG_EDS_WIDTH 4u
#define ISM_LAM_CONFIG_EDS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_EDS_SHIFT)) & ISM_LAM_CONFIG_EDS_MASK)
#define ISM_LAM_CONFIG_EWS_MASK  0x10u
#define ISM_LAM_CONFIG_EWS_SHIFT 4u
#define ISM_LAM_CONFIG_EWS_WIDTH 1u
#define ISM_LAM_CONFIG_EWS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_EWS_SHIFT)) & ISM_LAM_CONFIG_EWS_MASK)
#define ISM_LAM_CONFIG_RMS_MASK  0x8u
#define ISM_LAM_CONFIG_RMS_SHIFT 3u
#define ISM_LAM_CONFIG_RMS_WIDTH 1u
#define ISM_LAM_CONFIG_RMS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_RMS_SHIFT)) & ISM_LAM_CONFIG_RMS_MASK)
#define ISM_LAM_CONFIG_MOS_MASK  0x4u
#define ISM_LAM_CONFIG_MOS_SHIFT 2u
#define ISM_LAM_CONFIG_MOS_WIDTH 1u
#define ISM_LAM_CONFIG_MOS(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_MOS_SHIFT)) & ISM_LAM_CONFIG_MOS_MASK)
#define ISM_LAM_CONFIG_IVM_MASK  0x2u
#define ISM_LAM_CONFIG_IVM_SHIFT 1u
#define ISM_LAM_CONFIG_IVM_WIDTH 1u
#define ISM_LAM_CONFIG_IVM(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_IVM_SHIFT)) & ISM_LAM_CONFIG_IVM_MASK)
#define ISM_LAM_CONFIG_IVR_MASK  0x1u
#define ISM_LAM_CONFIG_IVR_SHIFT 0u
#define ISM_LAM_CONFIG_IVR_WIDTH 1u
#define ISM_LAM_CONFIG_IVR(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_CONFIG_IVR_SHIFT)) & ISM_LAM_CONFIG_IVR_MASK)
/* LAM_CONFIG0 Reg Mask */
#define ISM_LAM_CONFIG_MASK       0x1F1F1F1Fu

/* LAM_COUNTER Bit Fields */
#define ISM_LAM_COUNTER_CNT_MASK  0xFFFFFFu
#define ISM_LAM_COUNTER_CNT_SHIFT 0u
#define ISM_LAM_COUNTER_CNT_WIDTH 24u
#define ISM_LAM_COUNTER_CNT(x) \
    (((uint32)(((uint32)(x)) << ISM_LAM_COUNTER_CNT_SHIFT)) & ISM_LAM_COUNTER_CNT_MASK)
/* LAM_COUNTER0 Reg Mask */
#define ISM_LAM_COUNTER_MASK 0x00FFFFFFu

/*!
 * @}
 */ /* end of group ISM_Register_Masks */

/*!
 * @}
 */ /* end of group ISM_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
#endif
