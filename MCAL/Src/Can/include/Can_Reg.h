/**
*   @file    Can_Reg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CAN - driver API and development errors implemention.
*   @details AUTOSAR CAN - driver API and development errors implemention.
*
*   @addtogroup CAN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
*   0.7.0       2024-4-22      QXW0112       N/A          -Add support for FC7240
                                                          -change register read and write macro to run faster
==================================================================================================*/
#ifndef CAN_REG_H
#define CAN_REG_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Platform_Types.h"
#include "Common_Cfg.h"
#include "Can_Cfg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


#define FLEXCAN_FIFO_LOOP_TIMES            2U
#define FLEXCAN_LEGACY_FIFO_DEPTH          6U
#define FLEXCAN_LEGACY_FIFO_IDHIT_SHIFT    23U
#define FLEXCAN_LEGACY_FIFO_IDHIT_MASK     0xFF800000U
#define FLEXCAN_ENHANCED_FIFO_DEPTH        12U
#define FLEXCAN_ENHANCED_FIFO_IDHIT_MASK   0x1FFU

/*==================================================================================================****************************/


#define CAN_HW_MB_RAM_OFFSET         0x80u
#define CAN_HW_RXIMR_OFFSET          0x880u
#define CAN_HW_RXFIR_TEST_OFFSET     0xA80u
#define CAN_HW_MASK_OFFSET           0xAA0u
#define CAN_HW_SMBTX_OFFSET          0xAB0u
#define CAN_HW_SMBRX0_OFFSET         0xAC0u
#define CAN_HW_SMBRX1_OFFSET         0xAD0u
#define CAN_HW_FD_SMBTX_OFFSET       0xF28u
#define CAN_HW_FD_SMBRX0_OFFSET      0xF70u
#define CAN_HW_FD_SMBRX1_OFFSET      0xFB8u
#define CAN_HW_ERX_FIFO_OFFSET       0x2000u
#define CAN_HW_ERFFEL_OFFSET         0x3000u


#define CAN_HW_MB_RAM_WORD_NUM       384u
#define CAN_HW_MB_RAM_WORD_DIFF      256u
#define CAN_HW_RXIMR_WORD_NUM        96u
#define CAN_HW_RXIMR_WORD_DIFF       64u
#define CAN_HW_RXFIR_TEST_WORD_NUM   8u
#define CAN_HW_MASK_WORD_NUM         4u
#define CAN_HW_SMBTX_WORD_NUM        4u
#define CAN_HW_SMBRX0_WORD_NUM       4u
#define CAN_HW_SMBRX1_WORD_NUM       4u
#define CAN_HW_FD_SMBTX_WORD_NUM     18u
#define CAN_HW_FD_SMBRX0_WORD_NUM    18u
#define CAN_HW_FD_SMBRX1_WORD_NUM    18u
#define CAN_HW_ERX_FIFO_WORD_NUM     400u
#define CAN_HW_ERX_FIFO_WORD_DIFF    160u
#define CAN_HW_ERFFEL_WORD_NUM       76u
#define CAN_HW_ERFFEL_WORD_DIFF      44u




/* Macro for Control Register (CTRL) register access */
#define FLEXCAN_RESERVED_MASK(value, null_mask , reserved_mask )    (((value) & (null_mask)) | (reserved_mask))


#define FLEXCAN_ERRSR_CONFIG_MASK_U32       ((uint32)0x000D000DU)

#define FLEXCAN_MCR_NULL_MASK_U32           ((uint32)0xF2A3F37FU)
#define FLEXCAN_MCR_RESERVED_MASK_U32       ((uint32)0x08100000U)
#define FLEXCAN_CTRL_CONFIG_MASK_U32        ((uint32)0xFFFFFCFFU)
#define FLEXCAN_ECR_CONFIG_MASK_U32         ((uint32)0x0000FFFFU)
#define FLEXCAN_ESR_CONFIG_MASK_U32         ((uint32)0x00130006U)
#define FLEXCAN_IMASK2_CONFIG_MASK_U32      ((uint32)0xFFFFFFFFU)
#define FLEXCAN_IMASK1_CONFIG_MASK_U32      ((uint32)0xFFFFFFFFU)
#define FLEXCAN_IFLAG1_CONFIG_MASK_U32      ((uint32)0xFFFFFFFFU)
#define FLEXCAN_IFLAG2_CONFIG_MASK_U32      ((uint32)0xFFFFFFFFU)
#define FLEXCAN_RXGMASK_CONFIG_MASK_U32     ((uint32)0xFFFFFFFFU)
#define FLEXCAN_RXFGMASK_CONFIG_MASK_U32    ((uint32)0xFFFFFFFFU)
#define FLEXCAN_RX15MASK_CONFIG_MASK_U32    ((uint32)0xFFFFFFFFU)
#define FLEXCAN_RX14MASK_CONFIG_MASK_U32    ((uint32)0xFFFFFFFFU)
#define FLEXCAN_EPRS_CONFIG_MASK_U32        ((uint32)0x03FF03FFU)
#define FLEXCAN_ENCBT_CONFIG_MASK_U32       ((uint32)0x1FC7F0FFU)
#define FLEXCAN_EDCBT_CONFIG_MASK_U32       ((uint32)0x01C0F01FU)
#define FLEXCAN_ETDC_CONFIG_MASK_U32        ((uint32)0xC07F80FFU)

#define FLEXCAN_8_BYTES_U32                 ((uint32)0x00000008U)
#define FLEXCAN_16_BYTES_U32                ((uint32)0x00000010U)
#define FLEXCAN_32_BYTES_U32                ((uint32)0x00000020U)
#define FLEXCAN_64_BYTES_U32                ((uint32)0x00000040U)

/* Register mask value used for Full can hardware objects */
#define FLEXCAN_NO_MASK_U32                 ((uint32)0xFFFFFFFFU)
/**
* Start memory address offset for a Can controller
*/
#define FLEXCAN_MEMORY_START_U32            ((uint32)0x00000080U)
/**
* End memory address offset for a Can controller
*/
#if (CPU_BYTE_ORDER==HIGH_BYTE_FIRST)
#define FLEXCAN_MEMORY_END_U32          ((uint32)0x00000ADFU)
#elif(CPU_BYTE_ORDER==LOW_BYTE_FIRST)
#define FLEXCAN_MEMORY_END_U32          ((uint32)0x0000047FU)
#endif
/**
* Memory size reserved for one Can controller
*/
#define FLEXCAN_OFFSET_U32                  ((uint32)0x00004000U)
/**
* Offset for the first MB
*/
#define FLEXCAN_MB_OFFSET_U32               ((uint32)0x00000080U)
/**
* Offset for the Legacy Rx FIFO Data
*/
#define FLEXCAN_LEGACY_FIFO_OFFSET_U32      ((uint32)0x00000080U)
/**
* Offset for the RXIMR register
*/
#define FLEXCAN_RXIMR_OFFSET_U32            ((uint32)0x00000880U)
/**
* Mask for 32 bits register
*/
#define FLEXCAN_32BITMASK_U32               ((uint32)0xFFFFFFFFU)
/**
* Mask for 8 bits of IMASK registers that are reserved for Fifo
*/
#define FLEXCAN_FIFO_MASK_U32               ((uint32)0x000000FFU)
/* Define for left shifting 5 bits */
#define FLEXCAN_MB_SHIFT5BIT_U8             ((uint8)0x05U)
/* Offset of the CAN_WMB_CS register store configuration of the Message Wake-up */
#define FLEXCAN_CAN_WMB_CS_U32              ((uint32)0x00000B40U)
/* Offset of the CAN_WMB_ID register store ID of the Message Wake-up */
#define FLEXCAN_CAN_WMB_ID_U32              ((uint32)0x00000B44U)
/* Offset of the CAN_WMB_D03 register store form data number 0 to data number 3 of the Message Wake-up */
#define FLEXCAN_CAN_WMB_D03_U32             ((uint32)0x00000B48U)
/* Offset of the CAN_WMB_D47 register store form data number 4 to data number 7 of the Message Wake-up */
#define FLEXCAN_CAN_WMB_D47_U32             ((uint32)0x00000B4CU)
/* Offset of the Standard ID in the ID reg of MB */
#define FLEXCAN_STANDARD_ID_SHIFT_U32       ((uint32)18U)
/* Offset of the LENGTH field in the MBCS register of MB */
#define FLEXCAN_MBCS_LENGTH_SHIFT_U32       ((uint32)16U)
/* Offset of the PRIO field in ID register of the MB */
#define FLEXCAN_MB_ID_PRIO_SHIFT_U32        ((uint32)28U)
/* Mask for 32 index values (0 to 31 indexes) */
#define FLEXCAN_MASK_32BITS_U32             ((uint32)0x0000001FU)
/* Mask for 2 bit values (remainder of 4) */
#define FLEXCAN_MASK_2BITS_U8            ((uint8)0x03U)



#define FLEXCAN_MB_32_U8                    32U
#define FLEXCAN_MB_64_U8                    64U
#define FLEXCAN_MB_96_U8                    96U


#define FLEXCAN_MB_DATABYTE_REG_U32         ((uint32)4U)
#define FLEXCAN_MB_DATABYTE_FIRST_U32       ((uint32)0xFF000000U)
#define CAN_HW_8_BYTES_PAYLOAD_U32     ((uint32)0x00080000U)
#define FLEXCAN_DATA_LENGTH_OFFSET_U8       ((uint8) 0x08U)
#define FLEXCAN_DATA_LENGTH_MIN_U8          ((uint8) 0x08U)
#define FLEXCAN_DATA_LENGTH_MAX_U8          ((uint8) 0x0FU)


#define CAN_HW_MAX_PAYLOAD8_U8      ((uint8)8U)
#define CAN_HW_MAX_PAYLOAD12_U8     ((uint8)12U)
#define CAN_HW_MAX_PAYLOAD16_U8     ((uint8)16U)
#define CAN_HW_MAX_PAYLOAD20_U8     ((uint8)20U)
#define CAN_HW_MAX_PAYLOAD24_U8     ((uint8)24U)
#define CAN_HW_MAX_PAYLOAD32_U8     ((uint8)32U)
#define CAN_HW_MAX_PAYLOAD48_U8     ((uint8)48U)
#define CAN_HW_MAX_PAYLOAD64_U8     ((uint8)64U)


#define CAN_HW_MIN_PAYLOAD0_U8      ((uint8)0U)
#define CAN_HW_MIN_PAYLOAD9_U8      ((uint8)9U)
#define CAN_HW_MIN_PAYLOAD13_U8     ((uint8)13U)
#define CAN_HW_MIN_PAYLOAD17_U8     ((uint8)17U)
#define CAN_HW_MIN_PAYLOAD21_U8     ((uint8)21U)
#define CAN_HW_MIN_PAYLOAD25_U8     ((uint8)25U)
#define CAN_HW_MIN_PAYLOAD33_U8     ((uint8)33U)
#define CAN_HW_MIN_PAYLOAD49_U8     ((uint8)49U)


#define CAN_HW_NUM_VAL_DLC_U8     ((uint8)8U)


#define CAN_HW_FILTER_NUM_7_LEGACYRXFIFO_U8       ((uint8)7U)
#define CAN_HW_FILTER_NUM_9_LEGACYRXFIFO_U8       ((uint8)9U)
#define CAN_HW_FILTER_NUM_11_LEGACYRXFIFO_U8      ((uint8)11U)
#define CAN_HW_FILTER_NUM_13_LEGACYRXFIFO_U8      ((uint8)13U)
#define CAN_HW_FILTER_NUM_15_LEGACYRXFIFO_U8      ((uint8)15U)
#define CAN_HW_FILTER_NUM_17_LEGACYRXFIFO_U8      ((uint8)17U)
#define CAN_HW_FILTER_NUM_19_LEGACYRXFIFO_U8      ((uint8)19U)
#define CAN_HW_FILTER_NUM_21_LEGACYRXFIFO_U8      ((uint8)21U)
#define CAN_HW_FILTER_NUM_23_LEGACYRXFIFO_U8      ((uint8)23U)
#define CAN_HW_FILTER_NUM_25_LEGACYRXFIFO_U8      ((uint8)25U)
#define CAN_HW_FILTER_NUM_27_LEGACYRXFIFO_U8      ((uint8)27U)
#define CAN_HW_FILTER_NUM_29_LEGACYRXFIFO_U8      ((uint8)29U)
#define CAN_HW_FILTER_NUM_31_LEGACYRXFIFO_U8      ((uint8)31U)
#define CAN_HW_FILTER_NUM_33_LEGACYRXFIFO_U8      ((uint8)33U)
#define CAN_HW_FILTER_NUM_35_LEGACYRXFIFO_U8      ((uint8)35U)
#define CAN_HW_FILTER_NUM_37_LEGACYRXFIFO_U8      ((uint8)37U)


#define CAN_HW_NUM_FILT_PAYLOAD_U8     ((uint8)16U)


#if (CAN_BCC_SUPPORT_ENABLE == STD_ON)


#define FLEXCAN_MB_14_U8                    ((uint8)14U)
#define FLEXCAN_MB_15_U8                    ((uint8)15U)
#define FLEXCAN_TABLE_ID6_U8                ((uint8)6U)
#define FLEXCAN_TABLE_ID7_U8                ((uint8)7U)
#define FLEXCAN_INTERRUPT_MASKS_INIT_VALUE_U8   ((uint8)0x0U)


#endif

/* Define used for Can_ControlerInstanceType.u8CanIndex when controller is not enabled */
#define FLEXCAN_NULL_INDEX_U8              ((uint8)0xFFU)



/*==================================================================================================
                BIT MASKS FOR SOFTWARE ERROR FLAGS
==================================================================================================*/
/* CTRL: busoff software flag */
#define FLEXCAN_SWF_BOFF_MASK_U8            ((uint8)0x02U)
/**
* CTRL: error software flag
*/
#define FLEXCAN_SWF_ERR_MASK_U8             ((uint8)0x04U)
/**
* IMASK2, IMASK1: message buffers software flags
*/
#define FLEXCAN_SWF_MB_MASK_U8              ((uint8)0x08U)
/**
* MCR: tx/rx warning interrupts software flags
*/
#define FLEXCAN_SWF_WRNINT_MASK_U8          ((uint8)0x10U)





/*==================================================================================================
                            MESSAGE BUFFER BIT MASKS FOR ALL STRUCTURE
==================================================================================================*/
/**
* MB code: bits 27:24 in CS reg
*/
#define FLEXCAN_MBCS_CODE_U32                   ((uint32)0x0F000000U)
/**
* MB code: bits 27:25 are for tx read mask in CS reg
*/
#define FLEXCAN_MBCS_CODE_TXRMASK_U32           ((uint32)0x0E000000U)
/**
* MB code: message buffer used for Tx
*/
#define FLEXCAN_MBCS_CODETX_U32                 ((uint32)0x08000000U)
/* MB code: Transmit contents of Tx message buffer */
#define FLEXCAN_MBCS_CODETXEN_U32               ((uint32)0x04000000U)
/* MB code: transmit the message whenever a remote frame with a matching ID is received [SWS_Can_00237][SWS_Can_00236]*/ 
#define FLEXCAN_MBCS_CODETXRTR_U32              ((uint32)0x02000000U)
/* MB code: Abort transmission */
#define FLEXCAN_MBCS_CODETXABORT_U32            ((uint32)0x01000000U)
/* MB code: Message buffer used for Rx */
#define FLEXCAN_MBCS_CODERX_U32                 ((uint32)0x00000000U)
/* MB code: Rx message buffer overrun (a new message arrived before the previous one was picked-up) */
#define FLEXCAN_MBCS_CODERXOVRR_U32             ((uint32)0x06000000U)
/* MB code: Rx message buffer empty */
#define FLEXCAN_MBCS_CODERXEMPTY_U32            ((uint32)0x04000000U)
/* MB code: Rx message buffer is full (a new message has arrived) */
#define FLEXCAN_MBCS_CODERXFULL_U32             ((uint32)0x02000000U)
/* MB code: MB busy and cannot be read */
#define FLEXCAN_MBCS_CODERXBUSY_U32             ((uint32)0x01000000U)
/* SRR bit, must be written as '1' in any Tx MB */
#define FLEXCAN_MBCS_SRR_U32                    ((uint32)0x00400000U)
/* IDE bit, 0=standard ID, 1=extended ID */
#define FLEXCAN_MBCS_IDE_U32                    ((uint32)0x00200000U)
/* RTR bit, 0=data frame, 1=remote frame */
#define FLEXCAN_MBCS_RTR_U32                    ((uint32)0x00100000U)
/* DLC (data length code) */
#define FLEXCAN_MBCS_LENGTH_U32                 ((uint32)0x000F0000U)
/* Time stamp of Rx and Tx frames (timer value captured at the time the beginning of the ID appears on the bus) */
#define FLEXCAN_MBCS_TIMESTAMP_U32              ((uint32)0x0000FFFFU)
/* Local Tx priority (added in front of the ID to determine Tx priority) */
#define FLEXCAN_MBID_PRIO_U32                   ((uint32)0xE0000000U)
/* Extended (bits 0-28) ID */
#define FLEXCAN_MBID_ID_EXTENDED_U32            ((uint32)0x1FFFFFFFU)
/* IDE flag used in extended ID mode to identify whether the ID is Extended/Standard.(According to Can_IdType from SWS_Can_Driver.pdf of ASR3.0) */
#define FLEXCAN_MBC_ID_IDE_U32                  ((uint32)0x80000000U)
/* Standard (bits 18-28) ID */
#define FLEXCAN_MBID_ID_STANDARD_U32            ((uint32)0x1FFC0000U)


/*==================================================================================================
                            ENHANCED FIFO BIT MASKS FOR ALL STRUCTURE
==================================================================================================*/

/* EDL bit */
#define FLEXCAN_RXCS_EDL_U32                                  ((uint32)0x80000000U)
/* BRS bit */
#define FLEXCAN_RXCS_BRS_U32                                  ((uint32)0x40000000U)
/* IDE bit, 0=standard ID, 1=extended ID */
#define FLEXCAN_RXCS_IDE_U32                                  ((uint32)0x00200000U)
/* RTR bit, 0=data frame, 1=remote frame */
#define FLEXCAN_RXCS_RTR_U32                                  ((uint32)0x00100000U)
/* DLC (data length code) */
#define FLEXCAN_RXCS_LENGTH_U32                               ((uint32)0x000F0000U)
#define FLEXCAN_RXCS_LENGTH_SHIFT_U32                         ((uint32)16U)
/* Time stamp of Rx frames (timer value captured at the time the beginning of the ID appears on the bus) */
#define FLEXCAN_RXCS_TIMESTAMP_U32                            ((uint32)0x0000FFFFU)
/* Extended (bits 0-28) ID */
#define FLEXCAN_RXID_ID_EXTENDED_U32                          ((uint32)0x1FFFFFFFU)
/* IDE flag used in extended ID mode to identify whether the ID is Extended/Standard.(According to Can_IdType from SWS_Can_Driver.pdf of ASR3.0) */
#define FLEXCAN_RXC_ID_IDE_U32                                ((uint32)0x80000000U)
/* Standard (bits 18-28) ID */
#define FLEXCAN_RXID_ID_STANDARD_U32                          ((uint32)0x1FFC0000U)
#define FLEXCAN_RXID_ID_STANDARD_SHIFT_U32                    ((uint32)18U)
/*==================================================================================================
                    INTERRUPT MASKS & FLAGS REGISTERS:
                        IMASK2 (Base + 0x0024); IMASK1 (Base + 0x0028)
                        IFLAG2 (Base + 0x002C); IFLAG1 (Base + 0x0030)
==================================================================================================*/





/*==================================================================================================
                BIT MASKS FOR MODULE CONFIGURATION REGISTER: MCR (Base+0x0000)
==================================================================================================*/
/* MCR bit31: Module Disable (module disabled when 1) */
#define FLEXCAN_MCR_MDIS_U32                    ((uint32)0x80000000U)
/* MCR bit30: Freeze enable (enable to enter freeze mode when HALT is set) */
#define FLEXCAN_MCR_FRZ_U32                     ((uint32)0x40000000U)
/* MCR bit29: FIFO mode enable */
#define FLEXCAN_MCR_FEN_U32                     ((uint32)0x20000000U)
/* MCR bit28: Module Halt (module enters freeze mode when this bit is set providing the FRZ bit is set) */
#define FLEXCAN_MCR_HALT_U32                    ((uint32)0x10000000U)
/* MCR bit27: Module Not Ready (either disabled or in freeze mode) */
#define FLEXCAN_MCR_NOTRDY_U32                  ((uint32)0x08000000U)
/* MCR bit26: Wake Up Interrupt Mask (1 = Wake Up Interrupt is enabled, 0 = Wake Up Interrupt is disabled) */
#define FLEXCAN_MCR_WAK_MSK_U32                 ((uint32)0x04000000U)
/* MCR bit25: Module Soft Reset (the bit remains set until reset is completed) */
#define FLEXCAN_MCR_SOFTRST_U32                 ((uint32)0x02000000U)
/* MCR bit24: Freeze Mode Acknowledge */
#define FLEXCAN_MCR_FRZACK_U32                  ((uint32)0x01000000U)
/* MCR bit23: Supervisor Mode (1 = Affected registers are in Supervisor memory space. */
#define FLEXCAN_MCR_SUPV_U32                    ((uint32)0x00800000U)
/* MCR bit22: Self Wakeup from Doze or Stop modes */
#define FLEXCAN_MCR_SLF_WAK_U32                 ((uint32)0x00400000U)
/* MCR bit21: Warning interrupt enable (TWRNINT and RWRNINT flags generate an iterrupt if set) */
#define FLEXCAN_MCR_WRNEN_U32                   ((uint32)0x00200000U)
/* MCR bit20: Module Disable Acknowledge */
#define FLEXCAN_MCR_LPMACK_U32                  ((uint32)0x00100000U)
/* MCR bit19: Wake Up Source */
#define FLEXCAN_MCR_WAK_SRC_U32                 ((uint32)0x00080000U)
/* MCR bit18: Doze Mode Enable */
#define FLEXCAN_MCR_DOZE_U32                    ((uint32)0x00040000U)
/* MCR bit17: Self Rx Disable (module will receive its own Tx messages when cleared) */
#define FLEXCAN_MCR_SRXDIS_U32                  ((uint32)0x00020000U)
/* MCR bit16: Backwards Compatibility Configuration (individual message buffer masks are used when set, global & MB14,MB15 masks are used when cleared) */
#define FLEXCAN_MCR_IRMQ_U32                    ((uint32)0x00010000U)
#if (CAN_PUBLIC_ICOM_SUPPORT == STD_ON)
/* MCR bit15: Pretended Networking feature (only Calypso Platform) */
#define FLEXCAN_PNET_ENABLE_U32                 ((uint32)0x00004000U)
#define FLEXCAN_CTRL1_PN_NMATCH_U32             ((uint32)0x0000FF00U)
#define FLEXCAN_CTRL2_PN_MATCHTO_U32            ((uint32)0x0000FFFFU)
#define FLEXCAN_CAN_FLT_ID1_U32                 ((uint32)0x7FFFFFFFU)
#define FLEXCAN_CAN_FLT_ID2_IDMASK_U32          ((uint32)0x7FFFFFFFU)
#define FLEXCAN_CAN_FLT_DLC_U32                 ((uint32)0x000F000FU)
#define FLEXCAN_CTRL1_PN_CONFIG_U32             ((uint32)0x0003003FU)
#define FLEXCAN_CTRL1_PN_WTOF_U32               ((uint32)0x00020000U)
#define FLEXCAN_CTRL1_PN_WUMF_U32               ((uint32)0x00010000U)
#define FLEXCAN_WU_MTC_MCOUNTER                 ((uint32)0x0000FF00U)
#define FLEXCAN_WU_MTC_WUMF_MSK_U32             ((uint32)0x00010000U)
#define FLEXCAN_WU_MTC_WTOF_MSK_U32             ((uint32)0x00020000U)
#define FLEXCAN_WU_MTC_WUMF_MSK_W1C             ((uint32)0x00010000U)
#define FLEXCAN_WU_MTC_WTOF_MSK_W1C             ((uint32)0x00020000U)
#define FLEXCAN_CAN_WMB_ID_IDMB_U32             ((uint32)0x1FFFFFFFU)
#define FLEXCAN_CAN_WMB_CS_DLC_U32              ((uint32)0x000F0000U)
#define FLEXCAN_CAN_WMB_CS_IDE_U32              ((uint32)0x00200000U)
#define FLEXCAN_EXACTLY_PAYLOAD_U32             ((uint32)0x00000000U)
#define FLEXCAN_GREATER_PAYLOAD_U32             ((uint32)0x00000010U)
#define FLEXCAN_SMALLER_PAYLOAD_U32             ((uint32)0x00000020U)
#define FLEXCAN_INSIDE_RANGE_PAYLOAD_U32        ((uint32)0x00000030U)
#define FLEXCAN_EXACTLY_ID_U32                  ((uint32)0x00000000U)
#define FLEXCAN_GREATER_ID_U32                  ((uint32)0x00000004U)
#define FLEXCAN_SMALLER_ID_U32                  ((uint32)0x00000008U)
#define FLEXCAN_INSIDE_RANGE_ID_U32             ((uint32)0x0000000CU)
#endif
/* MCR bit13: Local Priority Enable (the PRIO field in Tx MB ID is used when set) */
#define FLEXCAN_MCR_LPRIOEN_U32                 ((uint32)0x00002000U)
/* MCR bit12: Abort Enable (Tx abort is enabled when set) */
#define FLEXCAN_MCR_AEN_U32                     ((uint32)0x00001000U)
/* MCR bit9-8: ID acceptance mode for the FIFO mode */
#define FLEXCAN_MCR_IDAM_U32                    ((uint32)0x00000300U)
/*             ID acceptance mode: one standard or extended ID */
#define FLEXCAN_MCR_IDAM32_U32                  ((uint32)0x00000000U)
/*             ID acceptance mode: two standard or partial extended IDs */
#define FLEXCAN_MCR_IDAM16_U32                  ((uint32)0x00000100U)
/*             ID acceptance mode: four partial standard or extended IDs */
#define FLEXCAN_MCR_IDAM08_U32                  ((uint32)0x00000200U)
/* MCR bit5-0: Maximum number of MBs in use (field value plus 1) */
#define FLEXCAN_MCR_MAXMB_U32                   ((uint32)0x0000007FU)


/*==================================================================================================
                BIT MASKS FOR CONTROL REGISTER: CTRL (Base+0x0004)
==================================================================================================*/
/* CTRL bit31-24: Clock divider (clock is divided by field value plus 1) */
#define FLEXCAN_CTRL_PRESDIV_U32                ((uint32)0xFF000000U)
/* CTRL bit23-22: Resynchronization jump width (the width is field value plus 1 time quantum) */
#define FLEXCAN_CTRL_RJW_U32                    ((uint32)0x00C00000U)
/* CTRL bit21-19: Phase segment 1 (length of the segment is field value plus 1 time quantum) */
#define FLEXCAN_CTRL_PSEG1_U32                  ((uint32)0x00380000U)
/* CTRL bit18-16: Phase segment 2 (length of the segment is field value plus 1 time quantum) */
#define FLEXCAN_CTRL_PSEG2_U32                  ((uint32)0x00070000U)
/* CTRL bit15: Bus Off Mask (bus off interrupt enabled when set) */
#define FLEXCAN_CTRL_BOFFMSK_U32                ((uint32)0x00008000U)
#define FLEXCAN_CTRL_BOFFMSK_SHIFT_U32          ((uint32)15U)
/* CTRL bit14: Error Mask (error interrupt enabled when set) */
#define FLEXCAN_CTRL_ERRMSK_U32                 ((uint32)0x00004000U)
#define FLEXCAN_CTRL_ERRMSK_SHIFT_U32           ((uint32)14U)
/* CTRL bit13: CAN Engine Clock Source */
#define  FLEXCAN_CTRL_CLKSRC_MASK_U32           ((uint32)0x00002000U)
/* CTRL bit12: Loop-Back mode (loop-back mode enabled when set) */
#define FLEXCAN_CTRL_LPB_U32                    ((uint32)0x00001000U)
/* CTRL bit11: Tx Warning interrupt enable (enabled when bit is set) */
#define FLEXCAN_CTRL_TWRNMSK_U32                ((uint32)0x00000800U)
/* CTRL bit10: Rx Warning interrupt enable (enabled when bit is set) */
#define FLEXCAN_CTRL_RWRNMSK_U32                ((uint32)0x00000400U)
/* CTRL bit7: Sampling mode (0=1 sample, 1=3 samples) */
#define FLEXCAN_CTRL_SMP_U32                    ((uint32)0x00000080U)
/* CTRL bit6: Bus off recovery mode (0=automatic, 1=manual) */
#define FLEXCAN_CTRL_BOFFREC_U32                ((uint32)0x00000040U)
/* CTRL bit5: Timer Synchronization (when set the free-running timer is reset each time a message is received into MB0) */
#define FLEXCAN_CTRL_TSYN_U32                   ((uint32)0x00000020U)
/* CTRL bit4: Lowest Buffer First (0=highest priority buffer transmitted first, 1=lowest numbered buffer transmitted first) */
#define FLEXCAN_CTRL_LBUF_U32                   ((uint32)0x00000010U)
/* CTRL bit3: Listen only mode (listen only mode is enabled when bit is set) */
#define FLEXCAN_CTRL_LOM_U32                    ((uint32)0x00000008U)
/* CTRL bit2-0: Propagation Segment (length of the segment is field value plus 1 time quantum) */
#define FLEXCAN_CTRL_PROPSEG_U32                ((uint32)0x00000007U)

#define FLEXCAN_CTRL_DEFAULT_VALUE_U32          ((uint32)0x00000000U)
/*==================================================================================================
                BIT MASKS FOR SHIFTING CONTROL REGISTER VALUES
==================================================================================================*/


#define FLEXCAN_CTRL_PRESDIV_SHIFT_U8           ((uint8)24U)
#define FLEXCAN_CTRL_RJW_SHIFT_U8               ((uint8)22U)
#define FLEXCAN_CTRL_PSEG1_SHIFT_U8             ((uint8)19U)
#define FLEXCAN_CTRL_PSEG2_SHIFT_U8             ((uint8)16U)
#define FLEXCAN_CTRL_CLKSRC_SHIFT_U8            ((uint8)13U)
#define FLEXCAN_CTRL_LPB_SHIFT_U8               ((uint8)12U)
#define FLEXCAN_CTRL_SMP_SHIFT_U8               ((uint8) 7U)
#define FLEXCAN_CTRL_BOFFREC_SHIFT_U8           ((uint8) 6U)
#define FLEXCAN_CTRL_LBUF_SHIFT_U8              ((uint8) 4U)
#define FLEXCAN_CTRL_LOM_SHIFT_U8               ((uint8) 3U)
#define FLEXCAN_CTRL_BIT_TIME_FIELD_U32         ((uint32)0xFFFF0007U)


#define FLEXCAN_CTRL2_TASD_SHIFT_U32            ((uint32)19U)

/*Offset bits for FD register*/
#define FLEXCAN_FD_OFFSET_U8                    ((uint8)11U)
#define FLEXCAN_FD_PROPSEG_OFFSET_U8            ((uint8)10U)
#define FLEXCAN_FD_PSEG1_OFFSET_U8              ((uint8) 5U)
#define FLEXCAN_FD_PSEG2_OFFSET_U8              ((uint8) 0U)
#define FLEXCAN_FD_SJW_OFFSET_U8                ((uint8)16U)
#define FLEXCAN_FD_BRS_OFFSET_U8                ((uint8)31U)
#define FLEXCAN_MBDSR0_OFFSET_U8                ((uint8)16U)
#define FLEXCAN_MBDSR1_OFFSET_U8                ((uint8)19U)
#define FLEXCAN_MBDSR2_OFFSET_U8                ((uint8)22U)
#define FLEXCAN_FD_PRESDIV_OFFSET_U8            ((uint8)20U)
#define FLEXCAN_FDCTRL_TDCOFF_OFFSET_U8         ((uint8) 8U)
#define FLEXCAN_FD_CTRL2_STFCNTEN_SHIFT_U32     ((uint32)12U)
#define FLEXCAN_FD_CTRL2_EDFLTDIS_SHIFT_U32     ((uint32)11U)
#define FLEXCAN_FD_CTRL2_PREXCEN_SHIFT_U32      ((uint32)14U)

#define CAN_8_BYTES_PAYLOAD_U32     ((uint32)0U)
#define CAN_16_BYTES_PAYLOAD_U32    ((uint32)1U)
#define CAN_32_BYTES_PAYLOAD_U32    ((uint32)2U)
#define CAN_64_BYTES_PAYLOAD_U32    ((uint32)3U)



#define FLEXCAN_REMOVE_DLC_U8                   ((uint32)0xFFF0FFFFU)

/*Offset bits for CBT register*/
#define FLEXCAN_CBT_OFFSET_U8                   ((uint8)31U)
#define FLEXCAN_FD_PRESDIV_CBT_OFFSET_U8        ((uint8)21U)
#define FLEXCAN_CBT_PROPSEG_OFFSET_U8           ((uint8)10U)
#define FLEXCAN_CBT_PSEG1_OFFSET_U8             ((uint8) 5U)
#define FLEXCAN_CBT_PSEG2_OFFSET_U8             ((uint8) 0U)
#define FLEXCAN_CBT_SJW_OFFSET_U8               ((uint8)16U)

/*Offset bits for EPRS register*/
#define FLEXCAN_EPRS_EDPRESDIV_OFFSET_U8                   ((uint8)16U)
#define FLEXCAN_EPRS_ENPRESDIV_OFFSET_U8                   ((uint8)0U)

/*Offset bits for ENCBT register*/
#define FLEXCAN_ENCBT_NRJW_OFFSET_U8                     ((uint8)22U)
#define FLEXCAN_ENCBT_NTSEG2_OFFSET_U8                   ((uint8)12U)
#define FLEXCAN_ENCBT_NTSEG1_OFFSET_U8                   ((uint8)0U)

/*Offset bits for EDCBT register*/
#define FLEXCAN_EDCBT_DRJW_OFFSET_U8                     ((uint8)22U)
#define FLEXCAN_EDCBT_DTSEG2_OFFSET_U8                   ((uint8)12U)
#define FLEXCAN_EDCBT_DTSEG1_OFFSET_U8                   ((uint8)0U)

/*Offset bits for ETDC register*/
#define FLEXCAN_ETDC_ETDCEN_OFFSET_U8                    ((uint8)31U)
#define FLEXCAN_ETDC_TDMDIS_OFFSET_U8                    ((uint8)30U)
#define FLEXCAN_ETDC_ETDCOFF_OFFSET_U8                   ((uint8)16U)
#define FLEXCAN_ETDC_ETDCFAIL_OFFSET_U8                  ((uint8)15U)
#define FLEXCAN_ETDC_ETDCVAL_OFFSET_U8                   ((uint8)0U)

/* BTF bit31: Enable values from CBT register to replace values from CTRL register */
#define FLEXCAN_CBT_BTF_U32                     ((uint32)0x80000000U)
/* CBT Default Value */
#define FLEXCAN_CBT_DEFAULT_VALUE_U32           ((uint32)0x00000000U)
/* FDEN bit11: Enable FD */
#define FLEXCAN_MCR_FDEN_U32                    ((uint32)0x00000800U)

/* EDL + BRS bit30 and BIT 31: Enable FD and BRS in MB */
#define FLEXCAN_MB_EDL_BRS_U32                  ((uint32)0xC0000000U)


/* ESR bit17: Tx error warning interrupt flag (set when TXWRN becomes set while WRNEN is set) */
#define FLEXCAN_FD_MB_MESSAGE_U32               ((uint32)0xC0000000U)

/*==================================================================================================
                BIT MASKS FOR ERROR COUNTER REGISTER: ECR (Base+0x001C)
==================================================================================================*/
#define FLEXCAN_ECR_RXERRCNT_FAST_U32                 ((uint32)0xFF000000U)
#define FLEXCAN_ECR_RXERRCNT_FAST_SHIFT_U32           ((uint32)24U)
#define FLEXCAN_ECR_TXERRCNT_FAST_U32                 ((uint32)0x00FF0000U)
#define FLEXCAN_ECR_TXERRCNT_FAST_SHIFT_U32           ((uint32)16U)
#define FLEXCAN_ECR_RXERRCNT_U32                      ((uint32)0x0000FF00U)
#define FLEXCAN_ECR_RXERRCNT_SHIFT_U32                ((uint32)8U)
#define FLEXCAN_ECR_TXERRCNT_U32                      ((uint32)0x000000FFU)
#define FLEXCAN_ECR_TXERRCNT_SHIFT_U32                ((uint32)0U)
/*==================================================================================================
                BIT MASKS FOR ERROR AND STATUS REGISTER: ESR (Base+0x0020)
==================================================================================================*/
/* ESR bit20: Error Interrupt for errors detected in the Data Phase of CAN FD frames with the BRS bit set */
#define FLEXCAN_ESR_ERRINT_FAST_U32             ((uint32)0x00100000U)
#define FLEXCAN_ESR_ERRINT_FAST_SHIFT_U32       ((uint32)20U)
/* ESR bit17: Tx error warning interrupt flag (set when TXWRN becomes set while WRNEN is set) */
#define FLEXCAN_ESR_TWRNINT_U32                 ((uint32)0x00020000U)
/* ESR bit16: Rx error warning interrupt flag (set when RXWRN becomes set while WRNEN is set) */
#define FLEXCAN_ESR_RWRNINT_U32                 ((uint32)0x00010000U)
/* ESR bit15: Recessive bit error (when set it indicates that at least one bit wans transmitted as recessive, but received as dominant) */
#define FLEXCAN_ESR_BIT1ERR_U32                 ((uint32)0x00008000U)
/* ESR bit14: Dominant bit error (when set it indicates that at least one bit wans transmitted as dominant, but received as recessive) */
#define FLEXCAN_ESR_BIT0ERR_U32                 ((uint32)0x00004000U)
/* ESR bit13: Acknowledge error (dominant acknowledge has been detected) */
#define FLEXCAN_ESR_ACKERR_U32                  ((uint32)0x00002000U)
/* ESR bit12: CRC error detected */
#define FLEXCAN_ESR_CRCERR_U32                  ((uint32)0x00001000U)
/* ESR bit11: Form error detected */
#define FLEXCAN_ESR_FRMERR_U32                  ((uint32)0x00000800U)
/* ESR bit10: Stuffing error detected */
#define FLEXCAN_ESR_STFERR_U32                  ((uint32)0x00000400U)
/* ESR bit9: Tx error warning flag (set when Tx error counter >=96) */
#define FLEXCAN_ESR_TXWRN_U32                   ((uint32)0x00000200U)
/* ESR bit8: Rx error warning flag (set when Rx error counter >=96) */
#define FLEXCAN_ESR_RXWRN_U32                   ((uint32)0x00000100U)
/* ESR bit7: Can bus IDLE */
#define FLEXCAN_ESR_IDLE_U32                    ((uint32)0x00000080U)
/* ESR bit6: Indicates type of activity when IDLE==0 (0=Rx, 1=Tx) */
#define FLEXCAN_ESR_TXRX_U32                    ((uint32)0x00000040U)
/* ESR bit5-4: Fault state (00=error active, 01=error passive, 1x=bus off) */
#define FLEXCAN_ESR_FLTCONF_U32                 ((uint32)0x00000030U)
#define FLEXCAN_ESR_FLTCONF_SHIFT_U32           ((uint32)4U)
#define FLEXCAN_ESR_FLTCONF_ACTIVE              ((uint32)0U)
#define FLEXCAN_ESR_FLTCONF_PASSIVE             ((uint32)1U)
/* ESR bit2: Bus off interrupt flag (set after the module enters bus off state) */
#define FLEXCAN_ESR_BOFFINT_U32                 ((uint32)0x00000004U)
#define FLEXCAN_ESR_BOFFINT_SHIFT_U32           ((uint32)2U)
/* ESR bit1: Error interrupt flag (set when at least one of the error bits (BIT1ERR..STFERR) is set) */
#define FLEXCAN_ESR_ERRINT_U32                  ((uint32)0x00000002U)
#define FLEXCAN_ESR_ERRINT_SHIFT_U32            ((uint32)1U)
/* ESR all W1C flags mask */
#define FLEXCAN_ESR_W1C_MASK_U32                ((uint32)0x003B0006U)
/*==================================================================================================
                BIT MASKS FOR CONTROL 2 REGISTER: CTRL2 (Base+0x0034)
==================================================================================================*/
/* CTRL bit27-24: Number Of Rx FIFO Filters */
#define FLEXCAN_CTRL2_RFFN_U32                  ((uint32)0x0F000000U)
#define FLEXCAN_CTRL2_RFFN_SHIFT_U32             ((uint32)24U)
/* CTRL2 bit28: Write-Access To Memory In Freeze Mode */
#define FLEXCAN_CTRL2_WRMFRZ_U32                ((uint32)0x10000000U)
/* CTRL2 bit29: Error-correction Configuration Register Write Enable */
#define FLEXCAN_CTRL2_ECRWRE_U32                ((uint32)0x20000000U)
/* CTRL2 bit19-23: Tx Arbitration Start Delay bit field */
#define FLEXCAN_CTRL2_TASD_U32                  ((uint32)0x00F80000U)
/* CTRL2[STFCNTEN] bit12: support the select ISO or non-ISO for CAN FD */
#define FLEXCAN_FD_CTRL2_STFCNTEN_U32           ((uint32)0x00001000U)
/* CTRL2[EDFLTDIS] bit11: Edge Filter Disable  */
#define FLEXCAN_FD_CTRL2_EDFLTDIS_U32           ((uint32)0x00000800U)
/* CTRL2[PREXCEN] bit14: Protocol Exception Enable */
#define FLEXCAN_FD_CTRL2_PREXCEN_U32            ((uint32)0x00004000U)
/* CTRL2[ERRMSK_FAST] bit31: Error Interrupt Mask for errors detected in the Data Phase of fast CAN FD frames */
#define FLEXCAN_FD_CTRL2_ERRMSK_FAST_U32        ((uint32)0x80000000U)
#define FLEXCAN_FD_CTRL2_ERRMSK_FAST_SHIFT_U32  ((uint32)31U)
/* CTRL2[BTE] bit13: Bit Timing Expansion Enable  */
#define FLEXCAN_CTRL2_BTE_U32                   ((uint32)0x00002000U)
/* CTRL2 Default Value */
#define FLEXCAN_CTRL2_DEFAULT_VALUE_U32         ((uint32)0x00A00000U)
/*==================================================================================================
                BIT MASKS FOR ENHANCED CAN BIT TIMING PRESCALERS REGISTER: EPRS (Base+0xBF0)
==============================================================================================================*/
/* EPRS bit16-25  Extended Data Phase Prescaler Division Factor  */
#define FLEXCAN_EPRS_EDPRESDIV_MASK_U32            ((uint32)0x03FF001FU)
/* EPRS bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_EPRS_ENPRESDIV_MASK_U32            ((uint32)0x000003FFU)
/*==============================================================================================================
                BIT MASKS FOR ENHANCED NOMINAL CAN BIT TIMING REGISTER: ENCBT (Base+0xBF4)
==============================================================================================================*/
/* ENCBT  bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_ENCBT_NRJW_U32              ((uint32)0x1F300000U)
/* ENCBT  bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_ENCBT_NTSEG2_U32            ((uint32)0x0007F000U)
/* ENCBT  bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_ENCBT_NTSEG1_U32            ((uint32)0x000000FFU)
/*==============================================================================================================
                BIT MASKS FOR ENHANCED CAN BIT TIMING PRESCALERS REGISTER: EDCBT (Base+0xBF8)
==============================================================================================================*/
/* EDCBT  bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_EDCBT_DRJW_U32              ((uint32)0x02C00000U)
/* EDCBT  bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_EDCBT_DTSEG2_U32            ((uint32)0x0000F000U)
/* EDCBT  bit0-9   Extended Nominal Prescaler Division Factor  */
#define FLEXCAN_EDCBT_DTSEG1_U32            ((uint32)0x0000001FU)
/*==============================================================================================================
                BIT MASKS FOR ENHANCED TRANSCEIVER DELAY COMPENSATION REGISTER: ETDC (Base+0xBFC)
==============================================================================================================*/
/* ETDC  bit31   Transceiver Delay Compensation Enable     */
#define FLEXCAN_ETDC_ETDCEN_U32             ((uint32)0x80000000U)
/* ETDC  bit30   Transceiver Delay Measurement Disable     */
#define FLEXCAN_ETDC_TDMDIS_U32             ((uint32)0x40000000U)
/* ETDC  bit16-22   Enhanced Transceiver Delay Compensation Offset    */
#define FLEXCAN_ETDC_ETDCOFF_U32            ((uint32)0x003F0000U)
/* ETDC  bit15   Transceiver Delay Compensation Fail   */
#define FLEXCAN_ETDC_ETDCFAIL_U32           ((uint32)0x00008000U)
/* ETDC  bit0-7   Enhanced Transceiver Delay Compensation Value   */
#define FLEXCAN_ETDC_ETDCVAL_U32            ((uint32)0x000000FFU)
/*==============================================================================================================
                BIT MASKS FOR MEMORY ERROR CONTROL REGISTER: MECR (Base+0x0AE0)
==================================================================================================*/
/* MECR bit13: FlexCAN Access With Non-Correctable Errors Interrupt Mask */
#define FLEXCAN_MECR_FANCEI_U32                 ((uint32)0x00040000U)

/* MECR bit12: Host Access With Non-Correctable Errors Interrupt Mask */
#define FLEXCAN_MECR_HANCEI_U32                 ((uint32)0x00080000U)

/* MECR bit0: Error Configuration Register Write Disable */
#define FLEXCAN_MECR_ECRWRDIS_U32               ((uint32)0x80000000U)
/* MECR bit24: Non-Correctable Errors In FlexCAN Access Put Device In Freeze Mode */
#define FLEXCAN_MECR_ECCDIS_U32                 ((uint32)0x00000100U)

/*==================================================================================================
                BIT MASKS FOR CAN FD CONTROL REGISTER: FDCTRL (Base+0x0C00)
==================================================================================================*/
/* FDCTRL bit31: Enable values bit rate switch */
#define FLEXCAN_FDCTRL_FDRATE_U32               ((uint32)0x80000000U)
/* FDCTRL bit15: Enable Transceiver Delay Compensation */
#define FLEXCAN_FDCTRL_TDCEN_U32                ((uint32)0x00008000U)
/* FDCTRL bit23-22: Message Buffer Data Size for Region 2 */
#define FLEXCAN_FDCTRL_MBDSR2_U32               ((uint32)0x00C00000U)
/* FDCTRL bit20-19: Message Buffer Data Size for Region 1 */
#define FLEXCAN_FDCTRL_MBDSR1_U32               ((uint32)0x00180000U)
/* FDCTRL bit17-16: Message Buffer Data Size for Region 0 */
#define FLEXCAN_FDCTRL_MBDSR0_U32               ((uint32)0x00030000U)
/* FDCTRL bit12-08: Transceiver Delay Compensation Offset */
#define FLEXCAN_FDCTRL_TDCOFF_U32               ((uint32)0x00001F00U)
/* FDCTRL bit23-22: Mask Message Buffer Data Size for three Regions */
#define FLEXCAN_FDCTRL_MBDSR_MASK_U32           ((uint32)0x00DB0000U)
/* FDCTRL Default Value */
#define FLEXCAN_FDCTRL_DEFAULT_VALUE_U32        ((uint32)0x80004100U)
/* FDCBT Default Value */
#define FLEXCAN_FDCBT_DEFAULT_VALUE_U32         ((uint32)0x00000000U)
/*==================================================================================================
                BIT MASKS FOR FIFO INTs
==================================================================================================*/
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

/* All Issue Condition: bit5 6 7 of IFRL register */
#define FLEXCAN_FIFO_ALL_INT_MASK_U32           ((uint32)0x000000E0U)

/* Overflow Condition: bit7 of IFRL register */
#define FLEXCAN_FIFOOVERFLOW_INT_MASK_U32      ((uint32)0x00000080U)
/* Fifo Warning: bit6 of IFRL register */
#define FLEXCAN_FIFOWARNING_INT_MASK_U32       ((uint32)0x00000040U)
/* Fifo Available: bit5 of IFRL register */
#define FLEXCAN_FIFOAVAILABLE_INT_MASK_U32     ((uint32)0x00000020U)

/* Buffer MB7 Interrupt or FIFO Overflow */
#define FLEXCAN_FIFOOVERFLOW_INT_INDEX_U8       ((uint8)0x07U)
/* Buffer MB6 Interrupt or FIFO Warning */
#define FLEXCAN_FIFOWARNING_INT_INDEX_U8        ((uint8)0x06U)
/* Buffer MB5 Interrupt or Frames Available in FIFO */
#define FLEXCAN_FIFOFRAME_INT_INDEX_U8          ((uint8)0x05U)

/* Message buffers used by FIFO engine */
#define FLEXCAN_FIFO_MB_COUNT_U8                ((uint8)0x08U)
/* Used to write table ID */
#define FLEXCAN_TABLEID_ADDR_OFFSET_U32         ((uint32)0x000000E0U)


/* CTRL bit0: Buffer MB0 Interrupt Or Clear FIFO bit */
#define FLEXCAN_IFLAG1_BUF0I_U32                ((uint32)0x00000001U)

#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */

/*==================================================================================================
                BIT MASKS FOR ERFCR
==================================================================================================*/
#define FLEXCAN_ERFEN_MASK_U32                 ((uint32)0x80000000U)
#define FLEXCAN_DMALW_MASK_U32                 ((uint32)0x7C000000U)
#define FLEXCAN_DMALW_SHIFT_U32                ((uint32)26U)
#define FLEXCAN_NEXIF_MASK_U32                 ((uint32)0x007F0000U)
#define FLEXCAN_NEXIF_SHIFT_U32                ((uint32)16U)
#define FLEXCAN_NFE_MASK_U32                   ((uint32)0x00003F00U)
#define FLEXCAN_NFE_SHIFT_U32                  ((uint32)8U)
#define FLEXCAN_ERFWM_MASK_U32                 ((uint32)0x0000001FU)
#define FLEXCAN_ERFWM_SHIFT_U32                ((uint32)0U)
/*==================================================================================================
                BIT MASKS FOR ERFIER
==================================================================================================*/
#define FLEXCAN_ERFUFWIE_MASK_U32              ((uint32)0x80000000U)
#define FLEXCAN_ERFOVFIE_MASK_U32              ((uint32)0x40000000U)
#define FLEXCAN_ERFWMIIE_MASK_U32              ((uint32)0x20000000U)
#define FLEXCAN_ERFDAIE_MASK_U32               ((uint32)0x10000000U)
/*==================================================================================================
                BIT MASKS FOR ERFSR
==================================================================================================*/
#define FLEXCAN_ERFUFW_MASK_U32                ((uint32)0x80000000U)
#define FLEXCAN_ERFOVF_MASK_U32                ((uint32)0x40000000U)
#define FLEXCAN_ERFWMI_MASK_U32                ((uint32)0x20000000U)
#define FLEXCAN_ERFDA_MASK_U32                 ((uint32)0x10000000U)
#define FLEXCAN_ENHANCED_INT_MASK_U32          ((uint32)0xF0000000U)
/*==================================================================================================
                              FLEXCAN Register address calculation Macros
==================================================================================================*/

/* Macro for Returning Base address of the controller. */

#define CAN_GET_BASE_ADDRESS(index)  ( (uint32)( g_kaCanHwBaseAddressTable[(uint32)(index)] ) )


/* Macro for Module Configuration (MCR) register access */

#define FLEXCAN_MCR(canAddr)         ( (uint32)( canAddr ) )


/* Macro for Control Register (CTRL1) register access */

#define FLEXCAN_CTRL(canAddr)        ( (uint32)( (canAddr) + 0x04U ) )



/* Macro for Free Running Timer (TIMER) register access */

#define FLEXCAN_TIMER(canAddr)       ( (uint32)( (canAddr) + 0x08U ) )


/* Macro for Rx Global Mask (RXGMASK) register access */

#define FLEXCAN_RXMGMASK(canAddr)    ( (uint32)( (canAddr) + 0x10U ) )


/* Macro for Rx Buffer 14 Mask (RX14MASK) register access */

#define FLEXCAN_RX14MASK(canAddr)    ( (uint32)( (canAddr) + 0x14U ) )


/* Macro for Rx Buffer 15 Mask (RX15MASK) register access */

#define FLEXCAN_RX15MASK(canAddr)    ( (uint32)( (canAddr) + 0x18U ) )


/* Macro for Error Counter Register (ECR) register access */

#define FLEXCAN_ECR(canAddr)         ( (uint32)( (canAddr) + 0x1CU ) )


/* Macro for Error and Status Register (ESR) register access */

#define FLEXCAN_ESR(canAddr)         ( (uint32)( (canAddr) + 0x20U ) )


/* Macro for Interrupt Masks 1 (IMASK1) register access */
#define FLEXCAN_IMASK1(canAddr)      ( (uint32)( (canAddr) + 0x28U ) )
/* Macro for Interrupt Flags 1 (IFLAG1) register access */
#define FLEXCAN_IFLAG1(canAddr)      ( (uint32)( (canAddr) + 0x30U ) )

#if (CAN_IFLAG_IMASK_NUM > 1U)
/* Macro for Interrupt Masks 2 (IMASK2) register access */
#define FLEXCAN_IMASK2(canAddr)      ( (uint32)( (canAddr) + 0x24U ) )

/* Macro for Interrupt Flags 2 (IFLAG2) register access */
#define FLEXCAN_IFLAG2(canAddr)      ( (uint32)( (canAddr) + 0x2CU ) )
#endif

#if (CAN_IFLAG_IMASK_NUM > 2U)
/* Macro for Interrupt Masks 2 (IMASK2) register access */
#define FLEXCAN_IMASK3(canAddr)      ( (uint32)( (canAddr) + 0x6CU ) )

/* Macro for Interrupt Flags 3 (IFLAG3) register access */
#define FLEXCAN_IFLAG3(canAddr)      ( (uint32)( (canAddr) + 0x74U ) )
#endif

/* Macro for Control Register 2 (CTRL2) register access */
#define FLEXCAN_CTRL2(canAddr)       ( (uint32)( (canAddr) + 0x34U ) )

/* Macro for Enhanced CAN Bit Timing Prescalers Register (EPRS ) register access */
#define FLEXCAN_EPRS(canAddr)        ( (uint32)( (canAddr) + 0xBF0U ) )

/* Macro for Enhanced Nominal CAN Bit Timing Register (ENCBT ) register access */
#define FLEXCAN_ENCBT(canAddr)       ( (uint32)( (canAddr) + 0xBF4U ) )

/* Macro for Enhanced Data Phase CAN Bit Timing Register (EDCBT ) register access */
#define FLEXCAN_EDCBT(canAddr)       ( (uint32)( (canAddr) + 0xBF8U ) )

/* Macro for Enhanced Transceiver Delay Compensation Register (ETDC ) register access */
#define FLEXCAN_ETDC(canAddr)        ( (uint32)( (canAddr) + 0xBFCU ) )

/* Macro for Rx Fifo Global Mask (RXFGMASK) register access */
#define FLEXCAN_RXFGMASK(canAddr)    ( (uint32)( (canAddr) + 0x48U ) )

#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
/* Macro for RxFifo structure ID Table 0-7 register access */
#define FLEXCAN_RXFIFO_ID(canAddr, id)          ( (uint32)( (canAddr) + (uint32)FLEXCAN_TABLEID_ADDR_OFFSET_U32 \
		                                           + (uint32)(((uint32)(id)) *0x04U) ))
#endif

/* Macro for Enhanced Rx FIFO RX register access */
#define FLEXCAN_ERX(canAddr)                    ( (uint32)( (canAddr) + 0x2000U ) )
#define FLEXCAN_ERX_ID(canAddr)                 ( (uint32)( (canAddr) + 0x2004U ) )
#define FLEXCAN_ERX_DATA(canAddr, offset)       ( (uint32)( (canAddr) + 0x2008U + (offset) ) )

#define FLEXCAN_ERFFEL(canAddr, offset)         ( (uint32)( (canAddr) + 0x3000U + (offset) ) )

/* Macro for Enhanced Rx FIFO Control(ERFCR) register access */
#define FLEXCAN_ERFCR(canAddr)                  ( (uint32)( (canAddr) + 0xC0CU ) )

/* Macro for Enhanced Rx FIFO Interrupt Enable(ERFIER) register access */
#define FLEXCAN_ERFIER(canAddr)                 ( (uint32)( (canAddr) + 0xC10U ) )

/* Macro for Enhanced Rx FIFO Status(ERFSR) register access */
#define FLEXCAN_ERFSR(canAddr)                  ( (uint32)( (canAddr) + 0xC14U ) )

/* Macro for Message Buffers MB0_MB63 register access */

#define FLEXCAN_HW_MB(canAddr, hoh)             ((uint32)( (canAddr) + (uint32)(FLEXCAN_HW_MB_OFFSET((uint32)(hoh)) ) ))


/* Macro for Rx Individual Mask Registers RXIMR0_RXIMR63 register access */

#define FLEXCAN_RXIMR(canAddr, mb)              ( (uint32)( (canAddr) + \
                                                        (uint32)(FLEXCAN_RXIMR_OFFSET_U32) + \
                                                        (uint32)(((uint32)(mb)) * 0x04U) ))


/* Macro for Memory Error Control Register (MECR) register access */
#define FLEXCAN_MECR(canAddr)                   ( (uint32)( (canAddr) + 0xAE0U ) )

/* Macro for ERRSR register access */

#define FLEXCAN_ERRSR(canAddr)                  ( (uint32)( (canAddr) + 0x0AFCU ) )

/* Macro for CAN_CTRL1_PN register access */

#define FLEXCAN_CAN_CTRL1_PN(canAddr)           ( (uint32)( (canAddr) + 0x0B00U ) )

/* Macro for CAN_CTRL2_PN register access */

#define FLEXCAN_CAN_CTRL2_PN(canAddr)           ( (uint32)( (canAddr) + 0x0B04U ) )

/* Macro for CAN_WU_MTC register access */

#define FLEXCAN_CAN_WU_MTC(canAddr)             ( (uint32)( (canAddr) + 0x0B08U ) )

/* Macro for CAN_FLT_ID1 register access */

#define FLEXCAN_CAN_FLT_ID1(canAddr)            ( (uint32)( (canAddr) + 0x0B0CU ) )

/* Macro for CAN_FLT_DLC register access */

#define FLEXCAN_CAN_FLT_DLC(canAddr)            ( (uint32)( (canAddr) + 0x0B10U ) )

/* Macro for CAN_PL1_LO register access */

#define FLEXCAN_CAN_PL1_LO(canAddr)             ( (uint32)( (canAddr) + 0x0B14U ) )

/* Macro for CAN_PL1_HI register access */

#define FLEXCAN_CAN_PL1_HI(canAddr)             ( (uint32)( (canAddr) + 0x0B18U ) )

/* Macro for CAN_FLT_ID2_IDMASK register access */

#define FLEXCAN_CAN_FLT_ID2_IDMASK(canAddr)     ( (uint32)( (canAddr) + 0x0B1CU ) )

/* Macro for CAN_PL2_PLMASK_LO register access */

#define FLEXCAN_CAN_PL2_PLMASK_LO(canAddr)      ( (uint32)( (canAddr) + 0x0B20U ) )

/* Macro for CAN_PL2_PLMASK_HI register access */

#define FLEXCAN_CAN_PL2_PLMASK_HI(canAddr)      ( (uint32)( (canAddr) + 0x0B24U ) )

/* Macro for CAN_WMBn_CS register access */

#define FLEXCAN_CAN_WMB_CS(canAddr, mb)         ( (uint32)( (canAddr) + \
                                                             (uint32)(FLEXCAN_CAN_WMB_CS_U32) + \
                                                             (uint32)(((uint32)(mb)) * 0x10U) ))

/* Macro for CAN_WMBn_ID register access */

#define FLEXCAN_CAN_WMB_ID(canAddr, mb)         ( (uint32)( (canAddr) + \
                                                             (uint32)(FLEXCAN_CAN_WMB_ID_U32) + \
                                                             (uint32)(((uint32)(mb)) * 0x10U) ))

/* Macro for CAN_WMB_D03 register access */

#define FLEXCAN_CAN_WMB_D03(canAddr, mb)         ( (uint32)( (canAddr) + \
                                                              (uint32)(FLEXCAN_CAN_WMB_D03_U32) + \
                                                              (uint32)(((uint32)(mb)) * 0x10U) ))

/* Macro for CAN_WMB_D47 register access */

#define FLEXCAN_CAN_WMB_D47(canAddr, mb)         ( (uint32)( (canAddr) + \
                                                              (uint32)(FLEXCAN_CAN_WMB_D47_U32) + \
                                                              (uint32)(((uint32)(mb)) * 0x10U) ))
/* Macro for Control FD Register (FDCTRL) register access */

#define FLEXCAN_FDCTRL(canAddr)                  ( (uint32)( (canAddr) + 0xC00U ) )


/* Macro for FD Bit Timing register (FDCBT) register access */

#define FLEXCAN_FDCBT(canAddr)                   ( (uint32)( (canAddr) + 0xC04U ) )

/* Macro for Bit Timing register (CBT) register access */
#define FLEXCAN_CBT(canAddr)                     ( (uint32)( (canAddr) + 0x50U ) )

/*==================================================================================================
                            FLEXCAN Register Configuration Macros
==================================================================================================*/

/*==================================================================================================
                            FLEXCAN Register Read Macros
==================================================================================================*/

/*==================================================================================================
                              FLEXCAN Register Bit Configuration Macros
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"


#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CODE
#include "Can_MemMap.h"


#define CAN_STOP_SEC_CODE
#include "Can_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*TEMPLATE_H*/

/** @} */
