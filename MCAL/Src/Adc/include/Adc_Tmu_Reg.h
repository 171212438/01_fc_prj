/**
*   @file    Adc_Tmu_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Adc - TMU module register and macro definitions.
*   @details TMU module registers, and macro definitions used to manipulate the module registers.
*
*   @addtogroup ADC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : TMU
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.8.0       07/18/2024    QXW0030       N/A          TMU Initial Version
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.4.0       25/09/2025    QXW0030       N/A          Add support for FC7300F4MDDxxxT1C
==================================================================================================*/

#ifndef ADC_TMU_REG_H
#define ADC_TMU_REG_H
#ifdef __cplusplus
 extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Adc_CfgDefines.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* ----------------------------------------------------------------------------

   -- TMU Peripheral Access Layer

   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TMU_Peripheral_Access_Layer TMU Peripheral Access Layer
 * @{
 */

/* ----------------------------------------------------------------------------

   -- TMU Register Masks

   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TMU_Register_Masks TMU Register Masks
 * @{
 */


/* UNLOCK Bit Fields */

#define TMU_UNLOCK_UNLOCK_MASK         0x1u

#define TMU_UNLOCK_UNLOCK_SHIFT        0u

#define TMU_UNLOCK_UNLOCK_WIDTH        1u

#define TMU_UNLOCK_UNLOCK(x)           (((uint32)(((uint32)(x))<<TMU_UNLOCK_UNLOCK_SHIFT))&TMU_UNLOCK_UNLOCK_MASK)

/* UNLOCK Reg Mask */

#define TMU_UNLOCK_MASK                0x00000001u

#define TMU_UNLOCK_KEY                 0xA5A50000u

#if (ADC_TMU_SUPPORT_TF == STD_ON)
/* TF_CTRL Bit Fields */

#define TMU_TF_CTRL_TF_150F_IE_MASK    0x8000000u

#define TMU_TF_CTRL_TF_150F_IE_SHIFT   27u

#define TMU_TF_CTRL_TF_150F_IE_WIDTH   1u

#define TMU_TF_CTRL_TF_150F_IE(x)      (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_150F_IE_SHIFT))&TMU_TF_CTRL_TF_150F_IE_MASK)

#define TMU_TF_CTRL_TF_125F_IE_MASK    0x4000000u

#define TMU_TF_CTRL_TF_125F_IE_SHIFT   26u

#define TMU_TF_CTRL_TF_125F_IE_WIDTH   1u

#define TMU_TF_CTRL_TF_125F_IE(x)      (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_125F_IE_SHIFT))&TMU_TF_CTRL_TF_125F_IE_MASK)

#define TMU_TF_CTRL_TF_RDYF_IE_MASK    0x1000000u

#define TMU_TF_CTRL_TF_RDYF_IE_SHIFT   24u

#define TMU_TF_CTRL_TF_RDYF_IE_WIDTH   1u

#define TMU_TF_CTRL_TF_RDYF_IE(x)      (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_RDYF_IE_SHIFT))&TMU_TF_CTRL_TF_RDYF_IE_MASK)

#define TMU_TF_CTRL_TF_HYSOFF_MASK     0x10000u

#define TMU_TF_CTRL_TF_HYSOFF_SHIFT    16u

#define TMU_TF_CTRL_TF_HYSOFF_WIDTH    1u

#define TMU_TF_CTRL_TF_HYSOFF(x)       (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_HYSOFF_SHIFT))&TMU_TF_CTRL_TF_HYSOFF_MASK)

#define TMU_TF_CTRL_TF_START_CNT_MASK  0xF00u

#define TMU_TF_CTRL_TF_START_CNT_SHIFT 8u

#define TMU_TF_CTRL_TF_START_CNT_WIDTH 4u

#define TMU_TF_CTRL_TF_START_CNT(x)    (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_START_CNT_SHIFT))&TMU_TF_CTRL_TF_START_CNT_MASK)

#if (ADC_TMU_SUPPORT_STOP_MODE == STD_ON)

#define TMU_TF_CTRL_TF_STOP_EN_MASK    0x4u

#define TMU_TF_CTRL_TF_STOP_EN_SHIFT   2u

#define TMU_TF_CTRL_TF_STOP_EN_WIDTH   1u

#define TMU_TF_CTRL_TF_STOP_EN(x)      (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_STOP_EN_SHIFT))&TMU_TF_CTRL_TF_STOP_EN_MASK)

#endif /* ADC_TMU_SUPPORT_STOP_MODE == STD_ON */

#define TMU_TF_CTRL_TF_FILT_BYP_MASK   0x2u

#define TMU_TF_CTRL_TF_FILT_BYP_SHIFT  1u

#define TMU_TF_CTRL_TF_FILT_BYP_WIDTH  1u

#define TMU_TF_CTRL_TF_FILT_BYP(x)     (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_FILT_BYP_SHIFT))&TMU_TF_CTRL_TF_FILT_BYP_MASK)

#define TMU_TF_CTRL_TF_EN_MASK         0x1u

#define TMU_TF_CTRL_TF_EN_SHIFT        0u

#define TMU_TF_CTRL_TF_EN_WIDTH        1u

#define TMU_TF_CTRL_TF_EN(x)           (((uint32)(((uint32)(x))<<TMU_TF_CTRL_TF_EN_SHIFT))&TMU_TF_CTRL_TF_EN_MASK)

/* TF_CTRL Reg Mask */

#define TMU_TF_CTRL_MASK               0x0D010F03u


/* TF_STATUS Bit Fields */

#define TMU_TF_STATUS_TF_150_MASK      0x800u

#define TMU_TF_STATUS_TF_150_SHIFT     11u

#define TMU_TF_STATUS_TF_150_WIDTH     1u

#define TMU_TF_STATUS_TF_150(x)        (((uint32)(((uint32)(x))<<TMU_TF_STATUS_TF_150_SHIFT))&TMU_TF_STATUS_TF_150_MASK)

#define TMU_TF_STATUS_TF_125_MASK      0x400u

#define TMU_TF_STATUS_TF_125_SHIFT     10u

#define TMU_TF_STATUS_TF_125_WIDTH     1u

#define TMU_TF_STATUS_TF_125(x)        (((uint32)(((uint32)(x))<<TMU_TF_STATUS_TF_125_SHIFT))&TMU_TF_STATUS_TF_125_MASK)

#define TMU_TF_STATUS_TF_150F_MASK     0x8u

#define TMU_TF_STATUS_TF_150F_SHIFT    3u

#define TMU_TF_STATUS_TF_150F_WIDTH    1u

#define TMU_TF_STATUS_TF_150F(x)       (((uint32)(((uint32)(x))<<TMU_TF_STATUS_TF_150F_SHIFT))&TMU_TF_STATUS_TF_150F_MASK)

#define TMU_TF_STATUS_TF_125F_MASK     0x4u

#define TMU_TF_STATUS_TF_125F_SHIFT    2u

#define TMU_TF_STATUS_TF_125F_WIDTH    1u

#define TMU_TF_STATUS_TF_125F(x)       (((uint32)(((uint32)(x))<<TMU_TF_STATUS_TF_125F_SHIFT))&TMU_TF_STATUS_TF_125F_MASK)

#define TMU_TF_STATUS_TF_RDYF_MASK     0x1u

#define TMU_TF_STATUS_TF_RDYF_SHIFT    0u

#define TMU_TF_STATUS_TF_RDYF_WIDTH    1u

#define TMU_TF_STATUS_TF_RDYF(x)       (((uint32)(((uint32)(x))<<TMU_TF_STATUS_TF_RDYF_SHIFT))&TMU_TF_STATUS_TF_RDYF_MASK)

/* TF_STATUS Reg Mask */

#define TMU_TF_STATUS_MASK             0x00000C0Du

#endif /* ADC_TMU_SUPPORT_TF == STD_ON */

/* TV_CTRL Bit Fields */

#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)

#define TMU_TV_CTRL_TV_RDYF_IE_MASK    0x1000000u

#define TMU_TV_CTRL_TV_RDYF_IE_SHIFT   24u

#define TMU_TV_CTRL_TV_RDYF_IE_WIDTH   1u

#define TMU_TV_CTRL_TV_RDYF_IE(x)      (((uint32)(((uint32)(x))<<TMU_TV_CTRL_TV_RDYF_IE_SHIFT))&TMU_TV_CTRL_TV_RDYF_IE_MASK)

#define TMU_TV_CTRL_TV_START_CNT_MASK  0x700u

#define TMU_TV_CTRL_TV_START_CNT_SHIFT 8u

#define TMU_TV_CTRL_TV_START_CNT_WIDTH 3u

#define TMU_TV_CTRL_TV_START_CNT(x)    (((uint32)(((uint32)(x))<<TMU_TV_CTRL_TV_START_CNT_SHIFT))&TMU_TV_CTRL_TV_START_CNT_MASK)

#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */

#if (ADC_TMU_SUPPORT_STOP_MODE == STD_ON)

#define TMU_TV_CTRL_TV_STOP_EN_MASK    0x4u

#define TMU_TV_CTRL_TV_STOP_EN_SHIFT   2u

#define TMU_TV_CTRL_TV_STOP_EN_WIDTH   1u

#define TMU_TV_CTRL_TV_STOP_EN(x)      (((uint32)(((uint32)(x))<<TMU_TV_CTRL_TV_STOP_EN_SHIFT))&TMU_TV_CTRL_TV_STOP_EN_MASK)

#endif /* ADC_TMU_SUPPORT_STOP_MODE == STD_ON */

#define TMU_TV_CTRL_TV_EN_MASK         0x1u

#define TMU_TV_CTRL_TV_EN_SHIFT        0u

#define TMU_TV_CTRL_TV_EN_WIDTH        1u

#define TMU_TV_CTRL_TV_EN(x)           (((uint32)(((uint32)(x))<<TMU_TV_CTRL_TV_EN_SHIFT))&TMU_TV_CTRL_TV_EN_MASK)

/* TV_CTRL Reg Mask */

#define TMU_TV_CTRL_MASK               0x01000701u


/* TV_STATUS Bit Fields */

#define TMU_TV_STATUS_TV_RDYF_MASK     0x1u

#define TMU_TV_STATUS_TV_RDYF_SHIFT    0u

#define TMU_TV_STATUS_TV_RDYF_WIDTH    1u

#define TMU_TV_STATUS_TV_RDYF(x)       (((uint32)(((uint32)(x))<<TMU_TV_STATUS_TV_RDYF_SHIFT))&TMU_TV_STATUS_TV_RDYF_MASK)

/* TV_STATUS Reg Mask */

#define TMU_TV_STATUS_MASK             0x00000001u


#if (ADC_TMU_SUPPORT_SELF_TRIM == STD_ON)

/* TV_TRIM Bit Fields */

#define TMU_TV_TRIM_TV_TCODE_MASK      0xFFF0000u

#define TMU_TV_TRIM_TV_TCODE_SHIFT     16u

#define TMU_TV_TRIM_TV_TCODE_WIDTH     12u

#define TMU_TV_TRIM_TV_TCODE(x)        (((uint32)(((uint32)(x))<<TMU_TV_TRIM_TV_TCODE_SHIFT))&TMU_TV_TRIM_TV_TCODE_MASK)

#define TMU_TV_TRIM_TV_SLOPE_MASK      0x1FFFu

#define TMU_TV_TRIM_TV_SLOPE_SHIFT     0u

#define TMU_TV_TRIM_TV_SLOPE_WIDTH     13u

#define TMU_TV_TRIM_TV_SLOPE(x)        (((uint32)(((uint32)(x))<<TMU_TV_TRIM_TV_SLOPE_SHIFT))&TMU_TV_TRIM_TV_SLOPE_MASK)

/* TV_TRIM Reg Mask */

#define TMU_TV_TRIM_MASK               0x0FFF1FFFu

#else

/* TOFFSET Bit Fields */

#define TMU_TOFFSET_TRIM_TOFFSET_MASK  0x3F0000u

#define TMU_TOFFSET_TRIM_TOFFSET_SHIFT 16u

#define TMU_TOFFSET_TRIM_TOFFSET_WIDTH 6u

#define TMU_TOFFSET_TRIM_TOFFSET(x)    (((uint32)(((uint32)(x))<<TMU_TOFFSET_TRIM_TOFFSET_SHIFT))&TMU_TOFFSET_TRIM_TOFFSET_MASK)

/* TOFFSET_TRIM Reg Mask */

#define TMU_TOFFSET_TRIM_MASK          0x3F0000u


/* TSLOPE Bit Fields */

#define TMU_TSLOPE_TRIM_TSLOPE_MASK    0x3F0000u

#define TMU_TSLOPE_TRIM_TSLOPE_SHIFT   16u

#define TMU_TSLOPE_TRIM_TSLOPE_WIDTH   6u

#define TMU_TSLOPE_TRIM_TSLOPE(x)      (((uint32)(((uint32)(x))<<TMU_TSLOPE_TRIM_TSLOPE_SHIFT))&TMU_TSLOPE_TRIM_TSLOPE_MASK)

/* TSLOPE_TRIM Reg Mask */

#define TMU_TSLOPE_TRIM_MASK           0x3F0000u

#endif /* ADC_TMU_SUPPORT_SELF_TRIM == STD_ON */

/*!
 * @}
 */ /* end of group TMU_Register_Masks */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** TMU - Register Layout Typedef */
typedef struct {

  __IO uint32 UNLOCK                        ; /* Unlock Register, offset: 0x0 */

#if (ADC_TMU_SUPPORT_TF == STD_ON)

  __IO uint32 TF_CTRL                       ; /* Temperature Flag Control Register, offset: 0x4 */

  __IO uint32 TF_STATUS                     ; /* Temperature Flag Status Register, offset: 0x8 */

#else

       uint8  RESERVED_0[8];

#endif /* ADC_TMU_SUPPORT_TF == STD_ON */

  __IO uint32 TV_CTRL                       ; /* Temperature Voltage Control Register, offset: 0xC */

  __IO uint32 TV_STATUS                     ; /* Temperature Voltage Status Register, offset: 0x10 */

#if (ADC_TMU_SUPPORT_SELF_TRIM == STD_ON)

       uint8  RESERVED_1[8];

  __I  uint32 TV_TRIM                       ; /* Temperature Voltage Trim Register, offset: 0x1C */

#endif /* ADC_TMU_SUPPORT_SELF_TRIM == STD_ON */
} TMU_Type, *TMU_MemMapPtr;

/*!
 * @}
 */ /* end of group TMU_Peripheral_Access_Layer */

#ifdef __cplusplus
}
#endif
#endif /* ADC_TMU_REG_H */
