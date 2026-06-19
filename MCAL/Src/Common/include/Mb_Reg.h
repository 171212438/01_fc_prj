/**
*   @file    Mb_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CDD_Mb - module register and macro definitions.
*   @details Mailbox module registers, and macrodefinitions used to manipulate the module registers.
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Mailbox
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
*   0.1.0       06/09/2023    QXW0070       N/A          Mb Initial Version
==================================================================================================*/
#ifndef MB_REGS_H_
#define MB_REGS_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
/** MB - Size of Registers Arrays */

#define MB_CHANNEL_CONFIG_COUNT             16u
#define MB_INT_CONFIG_COUNT                 5u

/** MB - Register Layout Typedef */



typedef struct {

	struct
	{

		__I  uint32 MB_CCn_SEMA                   ; /* MB_CCn_SEMA, offset: 0x000 */

		__IO uint32 MB_CCn_SEMA_UNLK              ; /* MB_CCn_SEMA_UNLK, offset: 0x004 */

		__O  uint32 MB_CCn_REQUEST                ; /* MB_CCn_REQUEST, offset: 0x008 */

		__IO uint32 MB_CCn_DONE                   ; /* MB_CCn_DONE, offset: 0x00C */

		__IO uint32 MB_CCn_DONE_MASK              ; /* MB_CCn_DONE_MASK, offset: 0x010 */

		__IO uint32 MB_CCn_DATA0                  ; /* MB_CCn_DATA0, offset: 0x014 */

		__IO uint32 MB_CCn_DATA1                  ; /* MB_CCn_DATA1, offset: 0x018 */

		__I  uint32 MB_CCn_STAT                   ; /* MB_CCn_STAT, offset: 0x01C */

		__O  uint32 MB_CCn_CLR                    ; /* MB_CCn_CLR, offset: 0x020 */

			 uint8  RESERVED_0[12];
	} CHANNEL[MB_CHANNEL_CONFIG_COUNT];

	uint8  RESERVED_15[1280];

	struct
	{
		__IO uint32 MB_CCn_FLG                    ; /* MB_CCn_FLG, offset: 0x800 */

		__IO uint32 MB_CCn_FLG_MASK               ; /* MB_CCn_FLG_MASK, offset: 0x804 */

		__IO uint32 MB_CCn_INTEN                  ; /* MB_CCn_INTEN, offset: 0x808 */

		__IO uint32 MB_CCn_FLG_STAT               ; /* MB_CCn_FLG_STAT, offset: 0x80C */

		__IO uint32 MB_CCn_CTRL                   ; /* MB_CCn_CTRL, offset: 0x810 */

		   	 uint8  RESERVED_18[12];
	} INTR[MB_INT_CONFIG_COUNT];
} MB_Type;



/** Number of instances of the MB module. */

#define MB_INSTANCE_COUNT                        (1u)



/* MB - Peripheral instance base addresses */

/** Peripheral MB base address */

#define MB_BASE                                  (0x40058000u)

/** Peripheral MB base pointer */

#define MB                                       ((MB_Type *)MB_BASE)

/** Array initializer of MB peripheral base addresses */

#define MB_BASE_ADDRS                            {MB_BASE}

/** Array initializer of MB peripheral base pointers */

#define MB_BASE_PTRS                             {MB}

/* Channel master done code */
#define MB_MASTER_DONE_CODE                         0xFC730000u

/* ----------------------------------------------------------------------------

   -- MB Register Masks

   ---------------------------------------------------------------------------- */

/*!

 * @addtogroup MB_Register_Masks MB Register Masks

 * @{

 */



/* MB_CCn_SEMA Bit Fields */

#define MB_MB_CCn_SEMA_LOCK_MASK       0x80000000u

#define MB_MB_CCn_SEMA_LOCK_SHIFT      31u

#define MB_MB_CCn_SEMA_LOCK_WIDTH      1u

#define MB_MB_CCn_SEMA_LOCK(x)         (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_LOCK_SHIFT))&MB_MB_CCn_SEMA_LOCK_MASK)

#define MB_MB_CCn_SEMA_LOCK_MASTER_ID_MASK 0xF0u

#define MB_MB_CCn_SEMA_LOCK_MASTER_ID_SHIFT 4u

#define MB_MB_CCn_SEMA_LOCK_MASTER_ID_WIDTH 4u

#define MB_MB_CCn_SEMA_LOCK_MASTER_ID(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_LOCK_MASTER_ID_SHIFT))&MB_MB_CCn_SEMA_LOCK_MASTER_ID_MASK)

#define MB_MB_CCn_SEMA_LOCK_MASTER_SEC_MASK 0x2u

#define MB_MB_CCn_SEMA_LOCK_MASTER_SEC_SHIFT 1u

#define MB_MB_CCn_SEMA_LOCK_MASTER_SEC_WIDTH 1u

#define MB_MB_CCn_SEMA_LOCK_MASTER_SEC(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_LOCK_MASTER_SEC_SHIFT))&MB_MB_CCn_SEMA_LOCK_MASTER_SEC_MASK)

#define MB_MB_CCn_SEMA_LOCK_MASTER_SUPERVISOR_MASK 0x1u

#define MB_MB_CCn_SEMA_LOCK_MASTER_SUPERVISOR_SHIFT 0u

#define MB_MB_CCn_SEMA_LOCK_MASTER_SUPERVISOR_WIDTH 1u

#define MB_MB_CCn_SEMA_LOCK_MASTER_SUPERVISOR(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_LOCK_MASTER_SUPERVISOR_SHIFT))&MB_MB_CCn_SEMA_LOCK_MASTER_SUPERVISOR_MASK)

/* MB_CCn_SEMA Reg Mask */

#define MB_MB_CCn_SEMA_MASK            0x800000F3u



/* MB_CCn_SEMA_UNLK Bit Fields */
#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN4_MASK 0x10u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN4_SHIFT 4u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN4_WIDTH 1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN4(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN4_SHIFT))&MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN4_MASK)

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN3_MASK 0x8u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN3_SHIFT 3u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN3_WIDTH 1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN3(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN3_SHIFT))&MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN3_MASK)

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN2_MASK 0x4u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN2_SHIFT 2u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN2_WIDTH 1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN2(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN2_SHIFT))&MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN2_MASK)

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN1_MASK 0x2u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN1_SHIFT 1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN1_WIDTH 1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN1(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN1_SHIFT))&MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN1_MASK)

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0_MASK 0x1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0_SHIFT 0u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0_WIDTH 1u

#define MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0_SHIFT))&MB_MB_CCn_SEMA_UNLK_AUTO_CLEAR_EN0_MASK)

/* MB_CCn_SEMA_UNLK Reg Mask */

#define MB_MB_CCn_SEMA_UNLK_MASK       0x0000001Fu



/* MB_CCn_REQUEST Bit Fields */
#define MB_MB_CCn_REQUEST_REQ4_MASK    0x10u

#define MB_MB_CCn_REQUEST_REQ4_SHIFT   4u

#define MB_MB_CCn_REQUEST_REQ4_WIDTH   1u

#define MB_MB_CCn_REQUEST_REQ4(x)      (((uint32)(((uint32)(x))<<MB_MB_CCn_REQUEST_REQ4_SHIFT))&MB_MB_CCn_REQUEST_REQ4_MASK)

#define MB_MB_CCn_REQUEST_REQ3_MASK    0x8u

#define MB_MB_CCn_REQUEST_REQ3_SHIFT   3u

#define MB_MB_CCn_REQUEST_REQ3_WIDTH   1u

#define MB_MB_CCn_REQUEST_REQ3(x)      (((uint32)(((uint32)(x))<<MB_MB_CCn_REQUEST_REQ3_SHIFT))&MB_MB_CCn_REQUEST_REQ3_MASK)

#define MB_MB_CCn_REQUEST_REQ2_MASK    0x4u

#define MB_MB_CCn_REQUEST_REQ2_SHIFT   2u

#define MB_MB_CCn_REQUEST_REQ2_WIDTH   1u

#define MB_MB_CCn_REQUEST_REQ2(x)      (((uint32)(((uint32)(x))<<MB_MB_CCn_REQUEST_REQ2_SHIFT))&MB_MB_CCn_REQUEST_REQ2_MASK)

#define MB_MB_CCn_REQUEST_REQ1_MASK    0x2u

#define MB_MB_CCn_REQUEST_REQ1_SHIFT   1u

#define MB_MB_CCn_REQUEST_REQ1_WIDTH   1u

#define MB_MB_CCn_REQUEST_REQ1(x)      (((uint32)(((uint32)(x))<<MB_MB_CCn_REQUEST_REQ1_SHIFT))&MB_MB_CCn_REQUEST_REQ1_MASK)

#define MB_MB_CCn_REQUEST_REQ0_MASK    0x1u

#define MB_MB_CCn_REQUEST_REQ0_SHIFT   0u

#define MB_MB_CCn_REQUEST_REQ0_WIDTH   1u

#define MB_MB_CCn_REQUEST_REQ0(x)      (((uint32)(((uint32)(x))<<MB_MB_CCn_REQUEST_REQ0_SHIFT))&MB_MB_CCn_REQUEST_REQ0_MASK)

/* MB_CCn_REQUEST Reg Mask */

#define MB_MB_CCn_REQUEST_MASK         0x0000001Fu



/* MB_CCn_DONE Bit Fields */
#define MB_MB_CCn_DONE_DONE4_MASK      0x10u

#define MB_MB_CCn_DONE_DONE4_SHIFT     4u

#define MB_MB_CCn_DONE_DONE4_WIDTH     1u

#define MB_MB_CCn_DONE_DONE4(x)        (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_DONE4_SHIFT))&MB_MB_CCn_DONE_DONE4_MASK)

#define MB_MB_CCn_DONE_DONE3_MASK      0x8u

#define MB_MB_CCn_DONE_DONE3_SHIFT     3u

#define MB_MB_CCn_DONE_DONE3_WIDTH     1u

#define MB_MB_CCn_DONE_DONE3(x)        (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_DONE3_SHIFT))&MB_MB_CCn_DONE_DONE3_MASK)

#define MB_MB_CCn_DONE_DONE2_MASK      0x4u

#define MB_MB_CCn_DONE_DONE2_SHIFT     2u

#define MB_MB_CCn_DONE_DONE2_WIDTH     1u

#define MB_MB_CCn_DONE_DONE2(x)        (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_DONE2_SHIFT))&MB_MB_CCn_DONE_DONE2_MASK)

#define MB_MB_CCn_DONE_DONE1_MASK      0x2u

#define MB_MB_CCn_DONE_DONE1_SHIFT     1u

#define MB_MB_CCn_DONE_DONE1_WIDTH     1u

#define MB_MB_CCn_DONE_DONE1(x)        (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_DONE1_SHIFT))&MB_MB_CCn_DONE_DONE1_MASK)

#define MB_MB_CCn_DONE_DONE0_MASK      0x1u

#define MB_MB_CCn_DONE_DONE0_SHIFT     0u

#define MB_MB_CCn_DONE_DONE0_WIDTH     1u

#define MB_MB_CCn_DONE_DONE0(x)        (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_DONE0_SHIFT))&MB_MB_CCn_DONE_DONE0_MASK)

/* MB_CCn_DONE Reg Mask */

#define MB_MB_CCn_DONE_MASK            0x0000001Fu



/* MB_CCn_DONE_MASK Bit Fields */

#define MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_MASK 0xF0000u

#define MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_SHIFT 16u

#define MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_WIDTH 4u

#define MB_MB_CCn_DONE_MASK_DONE_MASTER_ID(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_SHIFT))&MB_MB_CCn_DONE_MASK_DONE_MASTER_ID_MASK)

#define MB_MB_CCn_DONE_MASK_DONE_MASK4_MASK 0x10u

#define MB_MB_CCn_DONE_MASK_DONE_MASK4_SHIFT 4u

#define MB_MB_CCn_DONE_MASK_DONE_MASK4_WIDTH 1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK4(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_MASK_DONE_MASK4_SHIFT))&MB_MB_CCn_DONE_MASK_DONE_MASK4_MASK)

#define MB_MB_CCn_DONE_MASK_DONE_MASK3_MASK 0x8u

#define MB_MB_CCn_DONE_MASK_DONE_MASK3_SHIFT 3u

#define MB_MB_CCn_DONE_MASK_DONE_MASK3_WIDTH 1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK3(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_MASK_DONE_MASK3_SHIFT))&MB_MB_CCn_DONE_MASK_DONE_MASK3_MASK)

#define MB_MB_CCn_DONE_MASK_DONE_MASK2_MASK 0x4u

#define MB_MB_CCn_DONE_MASK_DONE_MASK2_SHIFT 2u

#define MB_MB_CCn_DONE_MASK_DONE_MASK2_WIDTH 1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK2(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_MASK_DONE_MASK2_SHIFT))&MB_MB_CCn_DONE_MASK_DONE_MASK2_MASK)

#define MB_MB_CCn_DONE_MASK_DONE_MASK1_MASK 0x2u

#define MB_MB_CCn_DONE_MASK_DONE_MASK1_SHIFT 1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK1_WIDTH 1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK1(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_MASK_DONE_MASK1_SHIFT))&MB_MB_CCn_DONE_MASK_DONE_MASK1_MASK)

#define MB_MB_CCn_DONE_MASK_DONE_MASK0_MASK 0x1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK0_SHIFT 0u

#define MB_MB_CCn_DONE_MASK_DONE_MASK0_WIDTH 1u

#define MB_MB_CCn_DONE_MASK_DONE_MASK0(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_DONE_MASK_DONE_MASK0_SHIFT))&MB_MB_CCn_DONE_MASK_DONE_MASK0_MASK)

/* MB_CCn_DONE_MASK Reg Mask */

#define MB_MB_CCn_DONE_MASK_MASK       0x000F001Fu



/* MB_CCn_DATA0 Bit Fields */

#define MB_MB_CCn_DATA0_DATA0_MASK     0xFFFFFFFFu

#define MB_MB_CCn_DATA0_DATA0_SHIFT    0u

#define MB_MB_CCn_DATA0_DATA0_WIDTH    32u

#define MB_MB_CCn_DATA0_DATA0(x)       (((uint32)(((uint32)(x))<<MB_MB_CCn_DATA0_DATA0_SHIFT))&MB_MB_CCn_DATA0_DATA0_MASK)

/* MB_CCn_DATA0 Reg Mask */

#define MB_MB_CCn_DATA0_MASK           0xFFFFFFFFu



/* MB_CCn_DATA1 Bit Fields */

#define MB_MB_CCn_DATA1_DATA1_MASK     0xFFFFFFFFu

#define MB_MB_CCn_DATA1_DATA1_SHIFT    0u

#define MB_MB_CCn_DATA1_DATA1_WIDTH    32u

#define MB_MB_CCn_DATA1_DATA1(x)       (((uint32)(((uint32)(x))<<MB_MB_CCn_DATA1_DATA1_SHIFT))&MB_MB_CCn_DATA1_DATA1_MASK)

/* MB_CCn_DATA1 Reg Mask */

#define MB_MB_CCn_DATA1_MASK           0xFFFFFFFFu



/* MB_CCn_STAT Bit Fields */

#define MB_MB_CCn_STAT_CURRENT_LOCK_STATUS_MASK 0x80000000u

#define MB_MB_CCn_STAT_CURRENT_LOCK_STATUS_SHIFT 31u

#define MB_MB_CCn_STAT_CURRENT_LOCK_STATUS_WIDTH 1u

#define MB_MB_CCn_STAT_CURRENT_LOCK_STATUS(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_STAT_CURRENT_LOCK_STATUS_SHIFT))&MB_MB_CCn_STAT_CURRENT_LOCK_STATUS_MASK)

#define MB_MB_CCn_STAT_CURRENT_CPU_STATUS_MASK 0xFFFF00u

#define MB_MB_CCn_STAT_CURRENT_CPU_STATUS_SHIFT 8u

#define MB_MB_CCn_STAT_CURRENT_CPU_STATUS_WIDTH 16u

#define MB_MB_CCn_STAT_CURRENT_CPU_STATUS(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_STAT_CURRENT_CPU_STATUS_SHIFT))&MB_MB_CCn_STAT_CURRENT_CPU_STATUS_MASK)

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_MASK 0xF0u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_SHIFT 4u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_WIDTH 4u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_SHIFT))&MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_ID_MASK)

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC_MASK 0x2u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC_SHIFT 1u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC_WIDTH 1u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC_SHIFT))&MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SEC_MASK)

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR_MASK 0x1u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR_SHIFT 0u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR_WIDTH 1u

#define MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR_SHIFT))&MB_MB_CCn_STAT_CURRENT_LOCK_MASTER_SUPERVISOR_MASK)

/* MB_CCn_STAT Reg Mask */

#define MB_MB_CCn_STAT_MASK            0x80FFFFF3u



/* MB_CCn_CLR Bit Fields */

#define MB_MB_CCn_CLR_SOFTWARE_CLEAR_LOCK_MASK 0xFFFFFFFFu

#define MB_MB_CCn_CLR_SOFTWARE_CLEAR_LOCK_SHIFT 0u

#define MB_MB_CCn_CLR_SOFTWARE_CLEAR_LOCK_WIDTH 32u

#define MB_MB_CCn_CLR_SOFTWARE_CLEAR_LOCK(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_CLR_SOFTWARE_CLEAR_LOCK_SHIFT))&MB_MB_CCn_CLR_SOFTWARE_CLEAR_LOCK_MASK)

/* MB_CCn_CLR Reg Mask */

#define MB_MB_CCn_CLR_MASK             0xFFFFFFFFu




/* MB_CCn_FLG Bit Fields */

#define MB_MB_CCn_FLG_DONE_FLAG_MASK   0xFFFF0000u

#define MB_MB_CCn_FLG_DONE_FLAG_SHIFT  16u

#define MB_MB_CCn_FLG_DONE_FLAG_WIDTH  16u

#define MB_MB_CCn_FLG_DONE_FLAG(x)     (((uint32)(((uint32)(x))<<MB_MB_CCn_FLG_DONE_FLAG_SHIFT))&MB_MB_CCn_FLG_DONE_FLAG_MASK)

#define MB_MB_CCn_FLG_REQ_FLAG_MASK    0xFFFFu

#define MB_MB_CCn_FLG_REQ_FLAG_SHIFT   0u

#define MB_MB_CCn_FLG_REQ_FLAG_WIDTH   16u

#define MB_MB_CCn_FLG_REQ_FLAG(x)      (((uint32)(((uint32)(x))<<MB_MB_CCn_FLG_REQ_FLAG_SHIFT))&MB_MB_CCn_FLG_REQ_FLAG_MASK)

/* MB_CCn_FLG Reg Mask */

#define MB_MB_CCn_FLG_MASK             0xFFFFFFFFu



/* MB_CCn_FLG_MASK Bit Fields */

#define MB_MB_CCn_FLG_MASK_DONE_FLAG_MASK_MASK 0xFFFF0000u

#define MB_MB_CCn_FLG_MASK_DONE_FLAG_MASK_SHIFT 16u

#define MB_MB_CCn_FLG_MASK_DONE_FLAG_MASK_WIDTH 16u

#define MB_MB_CCn_FLG_MASK_DONE_FLAG_MASK(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_FLG_MASK_DONE_FLAG_MASK_SHIFT))&MB_MB_CCn_FLG_MASK_DONE_FLAG_MASK_MASK)

#define MB_MB_CCn_FLG_MASK_REQ_FLAG_MASK_MASK 0xFFFFu

#define MB_MB_CCn_FLG_MASK_REQ_FLAG_MASK_SHIFT 0u

#define MB_MB_CCn_FLG_MASK_REQ_FLAG_MASK_WIDTH 16u

#define MB_MB_CCn_FLG_MASK_REQ_FLAG_MASK(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_FLG_MASK_REQ_FLAG_MASK_SHIFT))&MB_MB_CCn_FLG_MASK_REQ_FLAG_MASK_MASK)

/* MB_CCn_FLG_MASK Reg Mask */

#define MB_MB_CCn_FLG_MASK_MASK        0xFFFFFFFFu



/* MB_CCn_INTEN Bit Fields */

#define MB_MB_CCn_INTEN_DONE_INT_EN_MASK 0xFFFF0000u

#define MB_MB_CCn_INTEN_DONE_INT_EN_SHIFT 16u

#define MB_MB_CCn_INTEN_DONE_INT_EN_WIDTH 16u

#define MB_MB_CCn_INTEN_DONE_INT_EN(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_INTEN_DONE_INT_EN_SHIFT))&MB_MB_CCn_INTEN_DONE_INT_EN_MASK)

#define MB_MB_CCn_INTEN_REQ_INT_EN_MASK 0xFFFFu

#define MB_MB_CCn_INTEN_REQ_INT_EN_SHIFT 0u

#define MB_MB_CCn_INTEN_REQ_INT_EN_WIDTH 16u

#define MB_MB_CCn_INTEN_REQ_INT_EN(x)  (((uint32)(((uint32)(x))<<MB_MB_CCn_INTEN_REQ_INT_EN_SHIFT))&MB_MB_CCn_INTEN_REQ_INT_EN_MASK)

/* MB_CCn_INTEN Reg Mask */

#define MB_MB_CCn_INTEN_MASK           0xFFFFFFFFu



/* MB_CCn_FLG_STAT Bit Fields */

#define MB_MB_CCn_FLG_STAT_FLG_INT_STAT_MASK 0xFFFFFFFFu

#define MB_MB_CCn_FLG_STAT_FLG_INT_STAT_SHIFT 0u

#define MB_MB_CCn_FLG_STAT_FLG_INT_STAT_WIDTH 32u

#define MB_MB_CCn_FLG_STAT_FLG_INT_STAT(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_FLG_STAT_FLG_INT_STAT_SHIFT))&MB_MB_CCn_FLG_STAT_FLG_INT_STAT_MASK)

/* MB_CCn_FLG_STAT Reg Mask */

#define MB_MB_CCn_FLG_STAT_MASK        	0xFFFFFFFFu

#define MB_MB_CCn_FLAG_STAT_REQ_MASK	0x0000FFFFu

#define MB_MB_CCn_FLAG_STAT_REQ_SHIFT	0

#define MB_MB_CCn_FLG_STAT_REQ(x)		(((uint32)(((uint32)(x))<<MB_MB_CCn_FLAG_STAT_REQ_SHIFT))&MB_MB_CCn_FLAG_STAT_REQ_MASK)

#define MB_MB_CCn_FLAG_STAT_DONE_MASK	0xFFFF0000u

#define MB_MB_CCn_FLAG_STAT_DONE_SHIFT	16
#define MB_MB_CCn_FLG_STAT_DONE(x)		(((uint32)(((uint32)(x))<<MB_MB_CCn_FLAG_STAT_DONE_SHIFT))&MB_MB_CCn_FLAG_STAT_DONE_MASK)

/* MB_CCn_CTRL Bit Fields */

#define MB_MB_CCn_CTRL_INTEN_LOCK_MASK 0x4u

#define MB_MB_CCn_CTRL_INTEN_LOCK_SHIFT 2u

#define MB_MB_CCn_CTRL_INTEN_LOCK_WIDTH 1u

#define MB_MB_CCn_CTRL_INTEN_LOCK(x)   (((uint32)(((uint32)(x))<<MB_MB_CCn_CTRL_INTEN_LOCK_SHIFT))&MB_MB_CCn_CTRL_INTEN_LOCK_MASK)

#define MB_MB_CCn_CTRL_FLG_MASK_LOCK_MASK 0x2u

#define MB_MB_CCn_CTRL_FLG_MASK_LOCK_SHIFT 1u

#define MB_MB_CCn_CTRL_FLG_MASK_LOCK_WIDTH 1u

#define MB_MB_CCn_CTRL_FLG_MASK_LOCK(x) (((uint32)(((uint32)(x))<<MB_MB_CCn_CTRL_FLG_MASK_LOCK_SHIFT))&MB_MB_CCn_CTRL_FLG_MASK_LOCK_MASK)

#define MB_MB_CCn_CTRL_FLG_LOCK_MASK   0x1u

#define MB_MB_CCn_CTRL_FLG_LOCK_SHIFT  0u

#define MB_MB_CCn_CTRL_FLG_LOCK_WIDTH  1u

#define MB_MB_CCn_CTRL_FLG_LOCK(x)     (((uint32)(((uint32)(x))<<MB_MB_CCn_CTRL_FLG_LOCK_SHIFT))&MB_MB_CCn_CTRL_FLG_LOCK_MASK)

/* MB_CCn_CTRL Reg Mask */

#define MB_MB_CCn_CTRL_MASK            0x00000007u


#ifdef __cplusplus
}
#endif
#endif

/** @} */
