/**
*   @file    Gpt_Rtc_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt_Rtc module register and macro definitions.
*   @details Gpt_Rtc module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup Gpt_Rtc
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_RTC
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0076       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_RTC_REG_H
#define GPT_RTC_REG_H

#ifdef __cplusplus
extern "C"{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/** Number of instances of the RTC module. */
#define RTC_INSTANCE_COUNT                       (1u)

/** Peripheral RTC base address */
#define RTC_BASE                                 (0x40030000u)

/** Peripheral RTC base pointer */
#define RTC                                      ((Gpt_RTCRegType *)RTC_BASE)




/* SR Bit Fields */

#define RTC_SR_SR_MASK                 0xFFFFFFFFu

#define RTC_SR_SR_SHIFT                0u

#define RTC_SR_SR_WIDTH                32u

#define RTC_SR_SR(x)                   (((uint32)(((uint32)(x))<<RTC_SR_SR_SHIFT))&RTC_SR_SR_MASK)

/* SR Reg Mask */

#define RTC_SR_MASK                    0xFFFFFFFFu



/* PR Bit Fields */

#define RTC_PR_PR_MASK                 0xFFFFu

#define RTC_PR_PR_SHIFT                0u

#define RTC_PR_PR_WIDTH                16u

#define RTC_PR_PR(x)                   (((uint32)(((uint32)(x))<<RTC_PR_PR_SHIFT))&RTC_PR_PR_MASK)

/* PR Reg Mask */

#define RTC_PR_MASK                    0x0000FFFFu



/* TAR Bit Fields */

#define RTC_TAR_AR_MASK                0xFFFFFFFFu

#define RTC_TAR_AR_SHIFT               0u

#define RTC_TAR_AR_WIDTH               32u

#define RTC_TAR_AR(x)                  (((uint32)(((uint32)(x))<<RTC_TAR_AR_SHIFT))&RTC_TAR_AR_MASK)

/* TAR Reg Mask */

#define RTC_TAR_MASK                   0xFFFFFFFFu



/* COMPR Bit Fields */

#define RTC_COMPR_CIC_MASK             0xFF000000u

#define RTC_COMPR_CIC_SHIFT            24u

#define RTC_COMPR_CIC_WIDTH            8u

#define RTC_COMPR_CIC(x)               (((uint32)(((uint32)(x))<<RTC_COMPR_CIC_SHIFT))&RTC_COMPR_CIC_MASK)

#define RTC_COMPR_TCV_MASK             0xFF0000u

#define RTC_COMPR_TCV_SHIFT            16u

#define RTC_COMPR_TCV_WIDTH            8u

#define RTC_COMPR_TCV(x)               (((uint32)(((uint32)(x))<<RTC_COMPR_TCV_SHIFT))&RTC_COMPR_TCV_MASK)

#define RTC_COMPR_CIR_MASK             0xFF00u

#define RTC_COMPR_CIR_SHIFT            8u

#define RTC_COMPR_CIR_WIDTH            8u

#define RTC_COMPR_CIR(x)               (((uint32)(((uint32)(x))<<RTC_COMPR_CIR_SHIFT))&RTC_COMPR_CIR_MASK)

#define RTC_COMPR_TCR_MASK             0xFFu

#define RTC_COMPR_TCR_SHIFT            0u

#define RTC_COMPR_TCR_WIDTH            8u

#define RTC_COMPR_TCR(x)               (((uint32)(((uint32)(x))<<RTC_COMPR_TCR_SHIFT))&RTC_COMPR_TCR_MASK)

/* COMPR Reg Mask */

#define RTC_COMPR_MASK                 0xFFFFFFFFu



/* CR Bit Fields */

#define RTC_CR_CKO_MASK                0x200u

#define RTC_CR_CKO_SHIFT               9u

#define RTC_CR_CKO_WIDTH               1u

#define RTC_CR_CKO(x)                  (((uint32)(((uint32)(x))<<RTC_CR_CKO_SHIFT))&RTC_CR_CKO_MASK)

#define RTC_CR_CKPS_MASK               0x20u

#define RTC_CR_CKPS_SHIFT              5u

#define RTC_CR_CKPS_WIDTH              1u

#define RTC_CR_CKPS(x)                 (((uint32)(((uint32)(x))<<RTC_CR_CKPS_SHIFT))&RTC_CR_CKPS_MASK)

#define RTC_CR_UM_MASK                 0x8u

#define RTC_CR_UM_SHIFT                3u

#define RTC_CR_UM_WIDTH                1u

#define RTC_CR_UM(x)                   (((uint32)(((uint32)(x))<<RTC_CR_UM_SHIFT))&RTC_CR_UM_MASK)

#define RTC_CR_SWRST_MASK              0x1u

#define RTC_CR_SWRST_SHIFT             0u

#define RTC_CR_SWRST_WIDTH             1u

#define RTC_CR_SWRST(x)                (((uint32)(((uint32)(x))<<RTC_CR_SWRST_SHIFT))&RTC_CR_SWRST_MASK)

/* CR Reg Mask */

#define RTC_CR_MASK                    0x00000229u



/* STR Bit Fields */

#define RTC_STR_TCE_MASK               0x10u

#define RTC_STR_TCE_SHIFT              4u

#define RTC_STR_TCE_WIDTH              1u

#define RTC_STR_TCE(x)                 (((uint32)(((uint32)(x))<<RTC_STR_TCE_SHIFT))&RTC_STR_TCE_MASK)

#define RTC_STR_TAF_MASK               0x4u

#define RTC_STR_TAF_SHIFT              2u

#define RTC_STR_TAF_WIDTH              1u

#define RTC_STR_TAF(x)                 (((uint32)(((uint32)(x))<<RTC_STR_TAF_SHIFT))&RTC_STR_TAF_MASK)

#define RTC_STR_TOF_MASK               0x2u

#define RTC_STR_TOF_SHIFT              1u

#define RTC_STR_TOF_WIDTH              1u

#define RTC_STR_TOF(x)                 (((uint32)(((uint32)(x))<<RTC_STR_TOF_SHIFT))&RTC_STR_TOF_MASK)

#define RTC_STR_TIF_MASK               0x1u

#define RTC_STR_TIF_SHIFT              0u

#define RTC_STR_TIF_WIDTH              1u

#define RTC_STR_TIF(x)                 (((uint32)(((uint32)(x))<<RTC_STR_TIF_SHIFT))&RTC_STR_TIF_MASK)

/* STR Reg Mask */

#define RTC_STR_MASK                   0x00000017u



/* LR Bit Fields */

#define RTC_LR_LRL_MASK                0x40u

#define RTC_LR_LRL_SHIFT               6u

#define RTC_LR_LRL_WIDTH               1u

#define RTC_LR_LRL(x)                  (((uint32)(((uint32)(x))<<RTC_LR_LRL_SHIFT))&RTC_LR_LRL_MASK)

#define RTC_LR_STRL_MASK               0x20u

#define RTC_LR_STRL_SHIFT              5u

#define RTC_LR_STRL_WIDTH              1u

#define RTC_LR_STRL(x)                 (((uint32)(((uint32)(x))<<RTC_LR_STRL_SHIFT))&RTC_LR_STRL_MASK)

#define RTC_LR_CRL_MASK                0x10u

#define RTC_LR_CRL_SHIFT               4u

#define RTC_LR_CRL_WIDTH               1u

#define RTC_LR_CRL(x)                  (((uint32)(((uint32)(x))<<RTC_LR_CRL_SHIFT))&RTC_LR_CRL_MASK)

#define RTC_LR_CPL_MASK                0x8u

#define RTC_LR_CPL_SHIFT               3u

#define RTC_LR_CPL_WIDTH               1u

#define RTC_LR_CPL(x)                  (((uint32)(((uint32)(x))<<RTC_LR_CPL_SHIFT))&RTC_LR_CPL_MASK)

/* LR Reg Mask */

#define RTC_LR_MASK                    0x00000078u



/* IER Bit Fields */

#define RTC_IER_TSIC_MASK              0x70000u

#define RTC_IER_TSIC_SHIFT             16u

#define RTC_IER_TSIC_WIDTH             3u

#define RTC_IER_TSIC(x)                (((uint32)(((uint32)(x))<<RTC_IER_TSIC_SHIFT))&RTC_IER_TSIC_MASK)

#define RTC_IER_TSIE_MASK              0x10u

#define RTC_IER_TSIE_SHIFT             4u

#define RTC_IER_TSIE_WIDTH             1u

#define RTC_IER_TSIE(x)                (((uint32)(((uint32)(x))<<RTC_IER_TSIE_SHIFT))&RTC_IER_TSIE_MASK)

#define RTC_IER_TAIE_MASK              0x4u

#define RTC_IER_TAIE_SHIFT             2u

#define RTC_IER_TAIE_WIDTH             1u

#define RTC_IER_TAIE(x)                (((uint32)(((uint32)(x))<<RTC_IER_TAIE_SHIFT))&RTC_IER_TAIE_MASK)

#define RTC_IER_TOIE_MASK              0x2u

#define RTC_IER_TOIE_SHIFT             1u

#define RTC_IER_TOIE_WIDTH             1u

#define RTC_IER_TOIE(x)                (((uint32)(((uint32)(x))<<RTC_IER_TOIE_SHIFT))&RTC_IER_TOIE_MASK)

#define RTC_IER_TIIE_MASK              0x1u

#define RTC_IER_TIIE_SHIFT             0u

#define RTC_IER_TIIE_WIDTH             1u

#define RTC_IER_TIIE(x)                (((uint32)(((uint32)(x))<<RTC_IER_TIIE_SHIFT))&RTC_IER_TIIE_MASK)

/* IER Reg Mask */

#define RTC_IER_MASK                   0x00070017u
/*=================================================================================================
                                             ENUMS
=================================================================================================*/

/*=================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
/** RTC - Register Layout Typedef */
typedef struct {
   __IO uint32 SR                            ; /* RTC Seconds Register, offset: 0x0 */
   __IO uint32 PR                            ; /* RTC Prescaler Register, offset: 0x4 */
   __IO uint32 TAR                           ; /* RTC Alarm Register, offset: 0x8 */
   __IO uint32 COMPR                         ; /* RTC Compensation Register, offset: 0xC */
   __IO uint32 CR                            ; /* RTC Control Register, offset: 0x10 */
   __IO uint32 STR                           ; /* RTC Status Register, offset: 0x14 */
   __IO uint32 LR                            ; /* RTC Lock Register, offset: 0x18 */
   __IO uint32 IER                           ; /* RTC Interrupt Enable Register, offset: 0x1C */
} Gpt_RTCRegType;
/*=================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
                                     FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_RTC_REG_H*/

/** @} */
