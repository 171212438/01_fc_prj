/**
*   @file    Spi_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Spi - Hardware access layer header file.
*   @details Spi Hardware access layer header file.
*
*   @addtogroup SPI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SPI
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
*   0.1.0       14/07/2023    QXW0071       N/A          SPI Initial Version
*   0.2.0       03/10/2023    QXW0071       N/A          Add support for multi-core
*   0.3.0       19/10/2023    QXW0071       N/A          Optimize code to comply with Misra-C rules
*   0.4.0       17/11/2023    QXW0071       N/A          Add workaround when enable CS Continuous and sample on first edge.
*   0.5.0       01/16/2024    QXW0071       N/A          Optimize Code
*   0.6.0       02/28/2024    QXW0103       N/A          Add support for FC7240
==================================================================================================*/
#ifndef SPI_REGOPS_H
#define SPI_REGOPS_H

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

#define SPI_MAX_HW_UNITS           (8u)

/*-----------------------------------------------------------------------*/

/* FCSPI reserved bit masks */
#define FCSPI_CTRL_RWBITS_MASK_U32           ((uint32)0x0000030Fu)
#define FCSPI_CFG1_RWBITS_MASK_U32           ((uint32)0x0F070F07u)
#define FCSPI_FIFOWTM_RWBITS_MASK_U32        ((uint32)0x00070007u)
#define FCSPI_TRCTRL_RWBITS_MASK_U32         ((uint32)0xFBFF0FFFu)
#define FCSPI_INT_EN_RWBITS_MASK_U32         ((uint32)0x00003F03u)

/* Control Register FCSPI_CTRL Attributes */
#define FCSPI_CTRL_RST_RF_U32            ((uint32)0x00000200u) /* Receive FIFO is reset */
#define FCSPI_CTRL_RST_TF_U32            ((uint32)0x00000100u) /* Transmit FIFO is reset */
#define FCSPI_CTRL_DBG_EN_U32            ((uint32)0x00000008u) /* Module is enabled in debug mode */
#define FCSPI_CTRL_WAIT_DIS_U32          ((uint32)0x00000004u) /* Module is disabled in doze mode */
#define FCSPI_CTRL_SW_RST_U32            ((uint32)0x00000002u) /* Master logic is reset */
#define FCSPI_CTRL_M_EN_U32              ((uint32)0x00000001u) /* Module is enabled */
#define FCSPI_CTRL_RESET_U32             ((uint32)0x00000000u) /* Reset value for CR register */

/* Status Register FCSPI_STATUS Attributes */
#define FCSPI_STATUS_BF_MASK_U32             ((uint32)0x01000000u) /* Module Busy Flag */
#define FCSPI_STATUS_DMF_W1C_U32             ((uint32)0x00002000u) /* Data Match Flag */
#define FCSPI_STATUS_RX_FO_W1C_U32           ((uint32)0x00001000u) /* RX FIFO Overflow */
#define FCSPI_STATUS_TX_FU_W1C_U32           ((uint32)0x00000800u) /* Transmit FIFO Underrun Flag */
#define FCSPI_STATUS_TCF_W1C_U32             ((uint32)0x00000400u) /* Transfer Complete Flag */
#define FCSPI_STATUS_FEF_W1C_U32             ((uint32)0x00000200u) /* Frame End Flag */
#define FCSPI_STATUS_RX_WF_W1C_U32           ((uint32)0x00000100u) /* Receive Word Flag */
#define FCSPI_STATUS_RX_FF_MASK_U32          ((uint32)0x00000002u) /* Receive FIFO Flag */
#define FCSPI_STATUS_TX_FF_MASK_U32          ((uint32)0x00000001u) /* Transmit FIFO Flag */
#define FCSPI_STATUS_INT_W1C_U32             ((uint32)(FCSPI_STATUS_DMF_W1C_U32   | \
                                                       FCSPI_STATUS_RX_FO_W1C_U32 | \
                                                       FCSPI_STATUS_TX_FU_W1C_U32 | \
                                                       FCSPI_STATUS_TCF_W1C_U32   | \
                                                       FCSPI_STATUS_FEF_W1C_U32   | \
                                                       FCSPI_STATUS_RX_WF_W1C_U32))
/* Interrupt Enable Register FCSPI_INTEN Attributes */
#define FCSPI_INT_EN_DMIE_MASK_U32           ((uint32)0x00002000u) /* Data Match Interrupt Enable */
#define FCSPI_INT_EN_RFOIE_MASK_U32          ((uint32)0x00001000u) /* RX FIFO Overflow Interrupt Enable */
#define FCSPI_INT_EN_TFUIE_MASK_U32          ((uint32)0x00000800u) /* TX FIFO Underrun Interrupt Enable */
#define FCSPI_INT_EN_TCIE_MASK_U32           ((uint32)0x00000400u) /* Transfer Complete Interrupt Enable */
#define FCSPI_INT_EN_FEIE_MASK_U32           ((uint32)0x00000200u) /* Frame End Interrupt Enable */
#define FCSPI_INT_EN_RWIE_MASK_U32           ((uint32)0x00000100u) /* RX Word Complete Interrupt Enable */
#define FCSPI_INT_EN_RX_PEIE_MASK_U32        ((uint32)0x00000008u) /* RX Date Parity Error Interrupt Enable */
#define FCSPI_INT_EN_TX_PEIE_MASK_U32        ((uint32)0x00000004u) /* TX Data Parity Error Interrupt Enable */
#define FCSPI_INT_EN_RFIE_MASK_U32           ((uint32)0x00000002u) /* Receive Data Interrupt Enable */
#define FCSPI_INT_EN_TFIE_MASK_U32           ((uint32)0x00000001u) /* Transmit Data Interrupt Enable */

/* DMA Enable Register FCSPI_DMA_EN Attributes */
#define FCSPI_DMA_EN_RFDE_MASK_U32           ((uint32)0x00000002u) /* Receive FIFO DMA Enable */
#define FCSPI_DMA_EN_TFDE_MASK_U32           ((uint32)0x00000001u) /* Transmit FIFO DMA Enable */

/* Configuration Register 0 FCSPI_CFG0 Attributes */
#define FCSPI_CFG0_RDMO_MASK_U32         ((uint32)0x00000200u) /* Receive Data Match Only */
#define FCSPI_CFG0_TRGEN_MASK_U32         ((uint32)0x00000001u) /* Trigger Enable */

/* Configuration Register 1 FCSPI_CFG1 Attributes */
#define FCSPI_CFG1_PCS_CFG_MASK_U32                    ((uint32)0x08000000u) /* PCS Configuration */
#define FCSPI_CFG1_OUT_CFG_MASK_U32                    ((uint32)0x04000000u) /* Output Config */
#define FCSPI_CFG1_PINCFG_SIN_INPUT_SOUT_OUTPUT_U32    ((uint32)0x00000000u) /* SIN is used for input data and SOUT for output data */
#define FCSPI_CFG1_PINCFG_SOUT_INPUT_OUTPUT_U32        ((uint32)0x02000000u) /* SOUT is used for both input and output data */
#define FCSPI_CFG1_PINCFG_SIN_INPUT_OUTPUT_U32         ((uint32)0x01000000u) /* SIN is used for both input and output data */
#define FCSPI_CFG1_PINCFG_SOUT_INPUT_SIN_OUTPUT_U32    ((uint32)0x03000000u) /* SOUT is used for input data and SIN for output data */

#define FCSPI_CFG1_MATCFG_DIS_U32        ((uint32)0x00000000u) /* Match Disable */
#define FCSPI_CFG1_MATCFG_CFG0_U32       ((uint32)0x00020000u) /* Match enabled (1st data word equals MATCH0 OR MATCH1) */
#define FCSPI_CFG1_MATCFG_CFG1_U32       ((uint32)0x00030000u) /* Match enabled (any data word equals MATCH0 OR MATCH1) */
#define FCSPI_CFG1_MATCFG_CFG2_U32       ((uint32)0x00040000u) /* Match enabled (1st data word equals MATCH0 AND 2nd data word equals MATCH1) */
#define FCSPI_CFG1_MATCFG_CFG3_U32       ((uint32)0x00050000u) /* Match enabled (any data word equals MATCH0 AND next data word equals MATCH1) */
#define FCSPI_CFG1_MATCFG_CFG4_U32       ((uint32)0x00060000u) /* Match enabled (1st data word AND MATCH1 equals MATCH0 AND MATCH1) */
#define FCSPI_CFG1_MATCFG_CFG5_U32       ((uint32)0x00070000u) /* Match enabled (any data word AND MATCH1 equals MATCH0 AND MATCH1) */

#define FCSPI_CFG1_ALL_PCS_ACTIVE_LOW_U32  ((uint32)0x00000000u) /* PCS Polarity - Active Low */
#define FCSPI_CFG1_PCS0_IDLELOW_U32      ((uint32)0x00000100u) /* PCS Polarity - Active High */
#define FCSPI_CFG1_PCS1_IDLELOW_U32      ((uint32)0x00000200u) /* PCS Polarity - Active High */
#define FCSPI_CFG1_PCS2_IDLELOW_U32      ((uint32)0x00000400u) /* PCS Polarity - Active High */
#define FCSPI_CFG1_PCS3_IDLELOW_U32      ((uint32)0x00000800u) /* PCS Polarity - Active High */

#define FCSPI_CFG1_INT_PCS_MASK_U32      ((uint32)0x00000004u) /* Automatic PCS generation enabled */
#define FCSPI_CFG1_SCK_LB_MASK_U32       ((uint32)0x00000002u) /* Input data sampled on delayed SCK edge */
#define FCSPI_CFG1_MASTER_EN_U32         ((uint32)0x00000001u) /* Module is Master mode */

/* Clock Configuration Register FCSPI_CLK_CFG Attributes */
#define FCSPI_CLK_CFG_SCKPCS_MASK_U32         ((uint32)0xFF000000u) /* SCK to PCS Delay */
#define FCSPI_CLK_CFG_PCSSCK_MASK_U32         ((uint32)0x00FF0000u) /* PCS to SCK Delay */
#define FCSPI_CLK_CFG_PCSPCS_MASK_U32            ((uint32)0x0000FF00u) /* PCS to PCS Delay */
#define FCSPI_CLK_CFG_SCKDIV_MASK_U32         ((uint32)0x000000FFu) /* SCK Divider */

/* FIFO Control Register FCSPI_FIFO_WTM Attributes */
#define FCSPI_FIFO_WTM_RXWATER_MASK_U32        ((uint32)0x00070000u) /* Receive FIFO Watermark */
#define FCSPI_FIFO_WTM_RXWATER_OFFSET_U32      16u
#define FCSPI_FIFO_WTM_TXWATER_MASK_U32        ((uint32)0x00000007u) /* Transmit FIFO Watermark */
#define FCSPI_FIFO_WTM_TXRXWATER_DEFAULT_U32   ((uint32)0x00000004u) /* TX and RX WATERMARK 1 */

/* FIFO Status Register FCSPI_FIFO_STATUS Attributes */
#define FCSPI_FIFO_STATUS_RXCNT_MASK_U32        ((uint32)0x000f0000u) /* Number of words currently stored in the RX FIFO */
#define FCSPI_FIFO_STATUS_RXCNT_OFFSET_U32      16u
#define FCSPI_FIFO_STATUS_TXCNT_MASK_U32        ((uint32)0x0000000fu) /* Number of words currently stored in the transmit FIFO */

/* Transmit and Receive Control Register FCSPI_TR_CTRL Attributes */
#define FCSPI_TRCTRL_CPOL_LOW_U32            ((uint32)0x00000000u) /* SCK is low in idle state */
#define FCSPI_TRCTRL_CPOL_HIGH_U32           ((uint32)0x80000000u) /* SCK is high in idle state*/
#define FCSPI_TRCTRL_CPHA_LEADING_U32        ((uint32)0x40000000u) /* Data is changed on the leading edge of SCK and captured on the following edge of SCK*/
#define FCSPI_TRCTRL_CPHA_TRAILING_U32       ((uint32)0x00000000u) /* Data is captured on the leading edge of SCK and changed on the following edge of SCK*/

#define FCSPI_TRCTRL_PRESCALE_1_U32          ((uint32)0x00000000u) /* Divide by 1 */
#define FCSPI_TRCTRL_PRESCALE_2_U32          ((uint32)0x08000000u) /* Divide by 2 */
#define FCSPI_TRCTRL_PRESCALE_4_U32          ((uint32)0x10000000u) /* Divide by 4 */
#define FCSPI_TRCTRL_PRESCALE_8_U32          ((uint32)0x18000000u) /* Divide by 8 */
#define FCSPI_TRCTRL_PRESCALE_16_U32         ((uint32)0x20000000u) /* Divide by 16 */
#define FCSPI_TRCTRL_PRESCALE_32_U32         ((uint32)0x28000000u) /* Divide by 32 */
#define FCSPI_TRCTRL_PRESCALE_64_U32         ((uint32)0x30000000u) /* Divide by 64 */
#define FCSPI_TRCTRL_PRESCALE_128_U32        ((uint32)0x38000000u) /* Divide by 128 */

#define FCSPI_TRCTRL_PCS0_EN_U32             ((uint32)0x00000000u) /* Transfer using FCSPI_PCS[0] */
#define FCSPI_TRCTRL_PCS1_EN_U32             ((uint32)0x01000000u) /* Transfer using FCSPI_PCS[1] */
#define FCSPI_TRCTRL_PCS2_EN_U32             ((uint32)0x02000000u) /* Transfer using FCSPI_PCS[2] */
#define FCSPI_TRCTRL_PCS3_EN_U32             ((uint32)0x03000000u) /* Transfer using FCSPI_PCS[3] */

#define FCSPI_TRCTRL_MSB_U32                 ((uint32)0x00000000u) /* Data is transferred MSB first */
#define FCSPI_TRCTRL_LSB_U32                 ((uint32)0x00800000u) /* Data is transferred LSB first */
#define FCSPI_TRCTRL_BYSW_EN_U32             ((uint32)0x00400000u) /* Byte swap enabled */
#define FCSPI_TRCTRL_BYSW_DIS_U32            ((uint32)0x00000000u) /* Byte swap disable */

#define FCSPI_TRCTRL_CONT_EN_U32             ((uint32)0x00200000u) /* Continuous transfer enabled */
#define FCSPI_TRCTRL_CONT_DIS_U32            ((uint32)0x00000000u) /* Continuous transfer enabled */
#define FCSPI_TRCTRL_CONT_MASK_U32           ((uint32)0x00200000u) /* Continuous transfer mask */

#define FCSPI_TRCTRL_CONT_GO_U32            ((uint32)0x00100000u) /* Command word for continuing transfer */
#define FCSPI_TRCTRL_CONTC_MASK_U32          ((uint32)0x00100000u) /* Command word for continuing transfer */

#define FCSPI_TRCTRL_RXMSK_MASK_U32          ((uint32)0x00080000u) /* Receive data is masked */
#define FCSPI_TRCTRL_TXMSK_MASK_U32          ((uint32)0x00040000u) /* Mask transmit data */

#define FCSPI_TRCTRL_WIDTH_1_U32             ((uint32)0x00000000u) /* 1 bit transfer */
#define FCSPI_TRCTRL_WIDTH_2_U32             ((uint32)0x00010000u) /* 2 bits transfer */
#define FCSPI_TRCTRL_WIDTH_4_U32             ((uint32)0x00020000u) /* 4 bits transfer */
#define FCSPI_TRCTRL_FRAMESZ_MASK_U32        ((uint32)0x00000FFFu) /* Frame Size:Size = FRAMESZ + 1 */

/* Receive Status Register FCSPI_RX_STATUS Attributes */
#define FCSPI_RX_STATUS_RX_EMPTY_MASK_U32        ((uint32)0x00000002u) /* RX FIFO is empty */
#define FCSPI_RX_STATUS_FD_MASK_U32            ((uint32)0x00000001u) /* Received data is First Data word of transmitted data after PCS assertion */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/** FCSPI - Register Layout Typedef */



typedef struct {

       uint8  RESERVED_0[16];

  __IO uint32 CTRL                          ; /**< @brief Control, offset: 0x10 */

  __IO uint32 STATUS                        ; /**< @brief Status, offset: 0x14 */

  __IO uint32 INT_EN                        ; /**< @brief Interrupt Enable, offset: 0x18 */

  __IO uint32 DMA_EN                        ; /**< @brief DMA Enable, offset: 0x1C */

  __IO uint32 CFG0                          ; /**< @brief Configuration 0, offset: 0x20 */

  __IO uint32 CFG1                          ; /**< @brief Configuration 1, offset: 0x24 */

       uint8  RESERVED_1[8];

  __IO uint32 DATA_MATCH0                   ; /**< @brief Data Match 0, offset: 0x30 */

  __IO uint32 DATA_MATCH1                   ; /**< @brief Data Match 1, offset: 0x34 */

       uint8  RESERVED_2[8];

  __IO uint32 CLK_CFG                       ; /**< @brief Clock Configure, offset: 0x40 */

       uint8  RESERVED_3[20];

  __IO uint32 FIFO_WTM                      ; /**< @brief FIFO Water Mark, offset: 0x58 */

  __I  uint32 FIFO_STATUS                   ; /**< @brief FIFO Status, offset: 0x5C */

  __IO uint32 TR_CTRL                       ; /**< @brief Transmit and Receive Control, offset: 0x60 */

  __O  uint32 TX_DATA                       ; /**< @brief Transmit Data, offset: 0x64 */

       uint8  RESERVED_4[8];

  __I  uint32 RX_STATUS                     ; /**< @brief Receive Status, offset: 0x70 */

  __I  uint32 RX_DATA                       ; /**< @brief Receive Data, offset: 0x74 */

       uint8  RESERVED_5[8];

  __IO uint32 PARITY_CHK                    ; /**< @brief Parity Check, offset: 0x80 */

} FCSPI_Type;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"
/**
 * @brief Set FCSPI CFG1 register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_WriteCFG1(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->CFG1 = u32Value;
}

/**
 * @brief Enable or disable the DMA feature by setting the FCSPI DMA_EN register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_WriteDMA_EN(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->DMA_EN = u32Value;
}

/**
 * @brief Set FCSPI CTRL value, users should write the whole value to this register.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value  the value which will be written to the CTRL register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_WriteCTRL(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->CTRL = u32Value;
}

SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_ClearIntEnRegBit(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->INT_EN &= (~u32Value);
}

SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_SetIntEnRegBit(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->INT_EN |= u32Value;
}

/**
 * @brief Getting the FCSPI transfer status by reading the STATUS register.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @return the whole status of FCSPI transfer, which can be read in STATUS register.
 */
SPI_TEXT_SECTION LOCAL_INLINE uint32 FCSPI_HWA_GetStatus(const FCSPI_Type *pFCSPI)
{
    return pFCSPI->STATUS;
}


SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_SetFIFOWTM(FCSPI_Type *pFCSPI, uint32 u32FIFOWTMRegVal)
{
    pFCSPI->FIFO_WTM = u32FIFOWTMRegVal;
}

/**
 * @brief Set FCSPI TX_DATA register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_WriteTxData(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->TX_DATA = u32Value;
}

/**
 * @brief Read FCSPI RX_DATA register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @return FCSPI RX_DATA regsiter value
 */
SPI_TEXT_SECTION LOCAL_INLINE uint32 FCSPI_HWA_ReadRxData(const FCSPI_Type *pFCSPI)
{
    return pFCSPI->RX_DATA;
}


/**
 * @brief Set FCSPI CLK_CFG register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_WriteCLK_CFG(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->CLK_CFG = u32Value;
}

/**
 * @brief Set FCSPI CTRL value, users should write the whole value to this register.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value  the value which will be written to the CTRL register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_SetCTRL(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->CTRL |= u32Value;
}

/**
 * @brief Enable SPI module.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_EnableModule(FCSPI_Type *pFCSPI)
{
    pFCSPI->CTRL =  FCSPI_CTRL_M_EN_U32;
}

/**
 * @brief Enable SPI debug mode.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_EnableDebug(FCSPI_Type *pFCSPI)
{
    pFCSPI->CTRL |=  FCSPI_CTRL_DBG_EN_U32;
}

/**
 * @brief Disable SPI.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_DisableModule(FCSPI_Type *pFCSPI)
{
    pFCSPI->CTRL = 0;
}

/**
 * @brief Get SPI is enabled or not.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */
SPI_TEXT_SECTION LOCAL_INLINE boolean FCSPI_HWA_IsEnabled(FCSPI_Type *pFCSPI)
{
     return pFCSPI->CTRL & FCSPI_CTRL_M_EN_U32;
}

/**
 * @brief Reset SPI Rx FIFO.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */

SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_ResetRxFIFO(FCSPI_Type *pFCSPI)
{
    pFCSPI->CTRL = FCSPI_CTRL_RST_RF_U32;
}

/**
 * @brief Reset SPI Tx FIFO.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_ResetTxFIFO(FCSPI_Type *pFCSPI)
{
    pFCSPI->CTRL = FCSPI_CTRL_RST_TF_U32;
}

/**
 * @brief Read SPI Interrupt enable register.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 */
SPI_TEXT_SECTION LOCAL_INLINE uint32 FCSPI_HWA_ReadIntEnReg(const FCSPI_Type *pFCSPI)
{
    return pFCSPI->INT_EN;
}

/**
 * @brief Read FCSPI RX_STATUS register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @return FCSPI RX_STATUS regsiter value
 */
SPI_TEXT_SECTION LOCAL_INLINE uint32 FCSPI_HWA_ReadRxStatus(const FCSPI_Type *pFCSPI)
{
    return pFCSPI->RX_STATUS;
}

/**
 * @brief Set FCSPI STATUS register for certain function.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_SetStatus(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->STATUS = u32Value;
}

/**
 * @brief Set FCSPI TR_CTRL register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_SetTxRxControl(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->TR_CTRL = u32Value;
}

SPI_TEXT_SECTION LOCAL_INLINE uint32 FCSPI_HWA_GetFifoStatus(const FCSPI_Type *pFCSPI)
{
    return pFCSPI->FIFO_STATUS;
}

/**
 * @brief Get FCSPI TR_CTRL register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @return FCSPI TR_CTRL regsiter value
 */
SPI_TEXT_SECTION LOCAL_INLINE uint32 FCSPI_HWA_GetTxRxControl(const FCSPI_Type *pFCSPI)
{
    return pFCSPI->TR_CTRL;
}

SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_ClearDMAEnableRegBit(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->DMA_EN &= (~u32Value);
}

/**
 * @brief Enable or disable the DMA feature by setting the FCSPI DMA_EN register value.
 *
 * @param pFCSPI  FCSPI instance, e.g. FCSPI0, FCSPI1.
 * @param u32Value the value write to the register.
 */
SPI_TEXT_SECTION LOCAL_INLINE void FCSPI_HWA_SetDmaEn(FCSPI_Type *pFCSPI, uint32 u32Value)
{
    pFCSPI->DMA_EN |= u32Value;
}

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif


#endif /* #ifndef SPI_REGOPS_H */
