/**
 *   @file    Crc_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - hardware specific type definition
 *   @details This file contains the Pwm Autosar hardware specific type definition
 *
 *   @addtogroup Crc
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Crc
*   PLATFORM             : Flagchip FC7xxx
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
*   0.4.0       15/12/2023    QXW0119       N/A          Release version
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
/* PRQA S 3673 EOF
   3673 #Misra-C:2012: Rule-8.13 A pointer should point to a const-qualified type whenever possible.
   Reason: This usage is legal */

#ifndef CRC_REGOPS_H
#define CRC_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Crc_Types.h"
#include "Crc_Cfg.h"

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/**
 * @brief The command type of write crc data or seed value
 */
typedef enum
{
    WRITE_COMMAND_DATA = 0U, /*!< write crc data */
    WRITE_COMMAND_SEED = 1U  /*!< write seed value(used to initialization crc calculation) */
} CRC_WriteCommondType;

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief set CRC CR register for writing data or seed
 *
 * @param pCrc CRC instance
 * @param u32Mod WAS mode
 */
LOCAL_INLINE void CRC_HWA_SetDataOrSeed(CRC_Type *const pCrc, CRC_WriteCommondType u32Mod)
{
    uint32 u32RegVal = pCrc->CR;
    pCrc->CR         = ((u32RegVal & (~(uint32)CRC_CR_WAS_MASK)) | CRC_CR_WAS(u32Mod));
}

/**
 * @brief set data register(32 bits)
 *
 * @param pCrc CRC instance
 * @param u32Data data to be set
 */
LOCAL_INLINE void CRC_HWA_SetSeedValue(CRC_Type *const pCrc, uint32 u32Data)
{
    pCrc->DATA = u32Data;
}

/**
 * @brief set polynomial value
 *
 * @param pCrc CRC instance
 * @param u32Poly the polynomial value
 */
LOCAL_INLINE void CRC_HWA_SetPolyVal(CRC_Type *const pCrc, uint32 u32Poly)
{
    pCrc->POLY = u32Poly;
}

/**
 * @brief set data register(32 bits)
 *
 * @param pCrc CRC instance
 * @param u8Data data to be set
 */
LOCAL_INLINE void CRC_HWA_SetData8(CRC_Type *const pCrc, uint8 u8Data)
{
    *(volatile uint8 *)&pCrc->DATA = u8Data;
}

/**
 * @brief set data register(32 bits)
 *
 * @param pCrc CRC instance
 * @param u8Data data to be set
 */
LOCAL_INLINE void CRC_HWA_SetData16(CRC_Type *const pCrc, uint16 u16Data)
{
    *(volatile uint16 *)&pCrc->DATA = u16Data;
}

/**
 * @brief set data register(32 bits)
 *
 * @param pCrc CRC instance
 * @param u8Data data to be set
 */
LOCAL_INLINE void CRC_HWA_SetData32(CRC_Type *const pCrc, uint32 u32Data)
{
    *(volatile uint32 *)&pCrc->DATA = u32Data;
}

/**
 * @brief get data register(32 bits)
 *
 * @param pCrc CRC instance
 *
 * @return 32-bit value
 */
LOCAL_INLINE uint32 CRC_HWA_GetData(CRC_Type *const pCrc)
{
    return (pCrc->DATA);
}

/**
 * @brief set data swap for writes
 *
 * @param pCrc CRC instance
 * @param eWrDataSwap the  type
 */
LOCAL_INLINE void CRC_HWA_SetWriteDataSwap(CRC_Type *const pCrc, CRC_WriteDataSwapType eWrDataSwap)
{
    uint32 u32RegVal = pCrc->CR;
    pCrc->CR         = ((u32RegVal & (~(uint32)CRC_CR_DSW_MASK)) | CRC_CR_DSW(eWrDataSwap));
}

/**
 * @brief set data swap for read
 *
 * @param pCrc CRC instance
 * @param eRdDataSwap the eRdDataSwap type
 */
LOCAL_INLINE void CRC_HWA_SetReadDataSwap(CRC_Type *const pCrc, CRC_ReadDataSwapType eRdDataSwap)
{
    uint32 u32RegVal = pCrc->CR;
    pCrc->CR         = ((u32RegVal & (~(uint32)CRC_CR_DSR_MASK)) | CRC_CR_DSR(eRdDataSwap));
}

/**
 * @brief set complement read Of CRC data
 *
 * @param pCrc CRC instance
 * @param eRdDataFXOR the CRC_ReadDataFXORType type
 */
LOCAL_INLINE void CRC_HWA_SetReadDataFXOR(CRC_Type *const pCrc, CRC_ReadDataFXORType eRdDataFXOR)
{
    uint32 u32RegVal = pCrc->CR;
    pCrc->CR         = ((u32RegVal & (~(uint32)CRC_CR_FXOR_MASK)) | CRC_CR_FXOR(eRdDataFXOR));
}

/**
 * @brief set width of CRC protocol
 *
 * @param pCrc CRC instance
 * @param eWidth the CRC_BitWidthType type
 */
LOCAL_INLINE void CRC_HWA_SetBitWidth(CRC_Type *const pCrc, CRC_BitWidthType eWidth)
{
    uint32 u32RegVal = pCrc->CR;
    pCrc->CR         = ((u32RegVal & (~(uint32)CRC_CR_TCRC_MASK)) | CRC_CR_TCRC(eWidth));
}

/**
 * @brief set 8bit width of CRC protocol
 *
 * @param pCrc CRC instance
 * @param eWidth the CRC_BitWidthType type
 */
LOCAL_INLINE void CRC_HWA_Set_8Bit_Width(CRC_Type *const pCrc, CRC_BitWidthType eWidth)
{
    uint32 u32RegVal = pCrc->CR;
    pCrc->CR         = ((u32RegVal & (~(uint32)CRC_CR_TCRC8_MASK)) | CRC_CR_TCRC8(eWidth));
}

#if (CRC_CRC8_HW_SUPPORT == STD_ON)
/**
 * @brief get 8-bit width of CRC protocol
 *
 * @param pCrc CRC instance
 */
LOCAL_INLINE CRC_BitWidthType CRC_HWA_Get8BitWidth(CRC_Type *const pCrc)
{
    uint32 u32TempVal = (pCrc->CR & ((uint32)CRC_CR_TCRC8_MASK)) >> CRC_CR_TCRC8_SHIFT;
    return ((u32TempVal == 1U) ? CRC_BIT_8 : CRC_BIT_INVALID);
}
#endif

/**
 * @brief get width of CRC protocol
 *
 * @param pCrc CRC instance
 */
LOCAL_INLINE CRC_BitWidthType CRC_HWA_GetBitWidth(CRC_Type *const pCrc)
{
    uint32 u32TempVal = (pCrc->CR & ((uint32)CRC_CR_TCRC_MASK)) >> CRC_CR_TCRC_SHIFT;
    return ((u32TempVal == 0U) ? CRC_BIT_16 : CRC_BIT_32);
}

/**
 * @brief get data swap type for read
 *
 * @param pCrc CRC instance
 */
LOCAL_INLINE CRC_ReadDataSwapType CRC_HWA_GetReadDataSwap(CRC_Type *const pCrc)
{
    CRC_ReadDataSwapType eRet = READ_DATASWAP_NONE;
    uint32               u32TempVal;

    u32TempVal = (pCrc->CR & ((uint32)CRC_CR_DSR_MASK)) >> CRC_CR_DSR_SHIFT;
    if (u32TempVal == 0U)
    {
        eRet = READ_DATASWAP_NONE;
    }
    else if (u32TempVal == 1U)
    {
        eRet = READ_DATASWAP_BIT;
    }
    else if (u32TempVal == 2U)
    {
        eRet = READ_DATASWAP_BIT_BYTE;
    }
    else if (u32TempVal == 3U)
    {
        eRet = READ_DATASWAP_BYTE;
    }
    else
    {
        /*Noting to do*/
    }
    return eRet;
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _CRC_REGOPS_H_ */
/** @} */
