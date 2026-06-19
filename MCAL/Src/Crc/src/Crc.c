/**
 *   @file    Crc.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - Crc driver source file.
 *   @details
 *
 *   @addtogroup CRC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CRC
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
*   0.4.0       15/12/2023    QXW0119       N/A          Crc Initial Version
*   0.5.0       05/01/2024    QXW0119       N/A          Optimize_Code
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
/* PRQA S 1503 EOF
   PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
   REASON: The function is not used in this project but it must be applied for user
*/

/* PRQA S 1338 EOF
 * #Misra-C:2012 Rule-17.8 A function parameter should not be modified.
 * Reason: The value is intended to be modified in a function */

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "Crc.h"
#include "Crc_Hw.h"
#include "Crc_Lookup_Tables.h"
#include "Crc_Reverse.h"
#include "Crc_RunTime.h"
#include "Crc_Version.h"
#if (STD_ON == CRC_DEV_ERROR_DETECT)
#include "Det.h"
#endif

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

#ifndef CRC_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (CRC_AR_RELEASE_MAJOR_VERSION != CRC_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef CRC_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (CRC_SW_MAJOR_VERSION != CRC_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef CRC_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (CRC_SW_MINOR_VERSION != CRC_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef CRC_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (CRC_SW_PATCH_VERSION != CRC_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (CRC_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != CRC_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/
#if (STD_ON == CRC_MULTICORE_SUPPORT)
#define Crc_GetCoreID() GET_CPU_ID()
#else
#define Crc_GetCoreID() (0U)
#endif /* #if (CRC_MULTICORE_SUPPORT == STD_ON) */
/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
#define CRC_START_SEC_CONST_UNSPECIFIED
#include "Crc_MemMap.h"

#if (CRC_CRC8_USED == STD_ON)
/**
 * @brief Configuration of CRC 8 SAE J1850.
 */
CRC_DATA_SECTION static const Crc_InitType Crc8_InitCfg = {
    0x1DU, 0xFFU, WRITE_DATASWAP_BYTE, READ_DATASWAP_NONE, READ_DATA_FXOR, CRC_BIT_8
};
#endif

#if (CRC_CRC8H2F_USED == STD_ON)
/**
 * @brief Configuration of CRC 8 H2F.
 */
CRC_DATA_SECTION static const Crc_InitType Crc8H2F_InitCfg = {
    0x2FU, 0xFFU, WRITE_DATASWAP_BYTE, READ_DATASWAP_NONE, READ_DATA_FXOR, CRC_BIT_8
};
#endif

#if (CRC_CRC16_USED == STD_ON)
/**
 * @brief Configuration of CRC 16 CCITT_FALSE.
 */
CRC_DATA_SECTION static const Crc_InitType Crc16_InitCfg = {
    0x1021U, 0xFFFFU, WRITE_DATASWAP_BYTE, READ_DATASWAP_NONE, READ_DATA_NORMAL, CRC_BIT_16
};
#endif

#if (CRC_CRC16ARC_USED == STD_ON)
/**
 * @brief Configuration of CRC 16 ARC.
 */
CRC_DATA_SECTION static const Crc_InitType Crc16ARC_InitCfg = {
    0x8005U, 0U, WRITE_DATASWAP_BIT_BYTE, READ_DATASWAP_BIT_BYTE, READ_DATA_NORMAL, CRC_BIT_16
};
#endif

#if (CRC_CRC32_USED == STD_ON)
/**
 * @brief Configuration of CRC 32.
 */
CRC_DATA_SECTION static const Crc_InitType Crc32_InitCfg = {
    0x04C11DB7U,    0xFFFFFFFFU, WRITE_DATASWAP_BIT_BYTE, READ_DATASWAP_BIT_BYTE,
    READ_DATA_FXOR, CRC_BIT_32
};
#endif

#if (CRC_CRC32P4_USED == STD_ON)
/**
 * @brief Configuration of CRC 32P4.
 */
CRC_DATA_SECTION static const Crc_InitType Crc32P4_InitCfg = {
    0xF4ACFB13U,    0xFFFFFFFFU, WRITE_DATASWAP_BIT_BYTE, READ_DATASWAP_BIT_BYTE,
    READ_DATA_FXOR, CRC_BIT_32
};
#endif

#if (CRC_CRC64_USED == STD_ON)
/**
 * @brief Configuration of CRC 64 ECMA-182.
 */
CRC_DATA_SECTION static const Crc_InitType Crc64_InitCfg = {
    0x42F0E1EBA9EA3693U,    0xFFFFFFFFFFFFFFFFULL, WRITE_DATASWAP_BIT,
    READ_DATASWAP_BIT_BYTE, READ_DATA_FXOR,        CRC_BIT_64
};
#endif

#define CRC_STOP_SEC_CONST_UNSPECIFIED
#include "Crc_MemMap.h"
/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

/**
 * @brief Apply data swap transformation according to configured mode.
 * @param u64Data            - Input data to be transformed.
 * @param eBitWidth          - Bit width (8/16/32/64).
 * @param eReadDataSwap      - Data swap mode (NONE/BIT/BYTE/BIT_BYTE).
 *
 * @return The transformed result.
 * @details This function centralizes data swap logic for different bit widths.
 */
CRC_TEXT_SECTION static uint64 Crc_ApplyDataSwap(uint64               u64Data,
                                                 CRC_BitWidthType     eBitWidth,
                                                 CRC_ReadDataSwapType eReadDataSwap)
{
    uint64              u64Result = u64Data;
    Crc_ReverseModeType eReverseMode;
    boolean             bValidMode = TRUE;

    /* Map CRC_ReadDataSwapType to Crc_ReverseModeType */
    if (eReadDataSwap == READ_DATASWAP_BIT)
    {
        eReverseMode = (Crc_ReverseModeType)CRC_REVERSE_MODE_BIT;
    }
    else if (eReadDataSwap == READ_DATASWAP_BYTE)
    {
        eReverseMode = (Crc_ReverseModeType)CRC_REVERSE_MODE_BYTE;
    }
    else if (eReadDataSwap == READ_DATASWAP_BIT_BYTE)
    {
        eReverseMode = (Crc_ReverseModeType)CRC_REVERSE_MODE_BOTH;
    }
    else
    {
        /* Invalid mode or no swap needed - use original data */
        bValidMode = FALSE;
    }

    /* Apply transformation based on bit width if mode is valid */
    if (bValidMode == TRUE)
    {
        if (eBitWidth == CRC_BIT_8)
        {
            if (eReverseMode == CRC_REVERSE_MODE_BIT)
            {
                u64Result = Crc_ReverseUInt8((uint8)u64Data);
            }
            /* BYTE and BOTH modes have no effect on 8-bit data */
        }
        else if (eBitWidth == CRC_BIT_16)
        {
            u64Result = Crc_ReverseUInt16Ex((uint16)u64Data, eReverseMode);
        }
        else if (eBitWidth == CRC_BIT_32)
        {
            u64Result = Crc_ReverseUInt32Ex((uint32)u64Data, eReverseMode);
        }
        else if (eBitWidth == CRC_BIT_64)
        {
            u64Result = Crc_ReverseUInt64Ex(u64Data, eReverseMode);
        }
        else
        {
            /* Invalid bit width - use original data */
        }
    }

    return u64Result;
}

#if (CRC_DEV_ERROR_DETECT == STD_ON)
CRC_TEXT_SECTION LOCAL_INLINE void Crc_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    (void)Det_ReportError((uint16)CRC_MODULE_ID, (uint8)0U, (uint8)u8ServiceId, (uint8)u8ErrorId);
}
#endif

/**
 * @brief Apply data swap transformation according to the configured mode.
 * @param u64Data            - Input data to be transformed.
 * @param eBitWidth          - Bit width (8/16/32/64).
 * @param eReadDataSwap      - Data swap mode (NONE/BIT/BYTE/BIT_BYTE).
 *
 * @return The transformed result.
 * @details This function centralizes the data swap logic for different bit widths.
 * */
CRC_TEXT_SECTION static uint64 Crc_ApplyDataSwap(uint64               u64Data,
                                                 CRC_BitWidthType     eBitWidth,
                                                 CRC_ReadDataSwapType eReadDataSwap);

#if (CRC_CALCULATECHANNEL == STD_ON)
CRC_TEXT_SECTION static uint64 Crc_HWCalculate(const uint8         u8Instance,
                                               uint64              CrcStartValue,
                                               const uint8        *pCrcData,
                                               uint32              CrcLength,
                                               boolean             IsFirstCall,
                                               const Crc_InitType *sCrcInfo);

CRC_TEXT_SECTION static uint64 Crc_LookupTablesCalculate(Crc_StandardType    CrcType,
                                                         uint64              CrcStartValue,
                                                         const uint8        *pCrcData,
                                                         uint32              CrcLength,
                                                         boolean             IsFirstCall,
                                                         const Crc_InitType *sCrcInfo);

CRC_TEXT_SECTION static uint64 Crc_SwCalculate(Crc_StandardType    CrcType,
                                               uint64              CrcStartValue,
                                               const uint8        *pCrcData,
                                               uint32              CrcLength,
                                               boolean             IsFirstCall,
                                               const Crc_InitType *sCrcInfo);
#endif

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#if (CRC_CALCULATECHANNEL == STD_ON)
/**
 * @brief This service is a reentrant function that shall start the Channel to calculate the CRC
 * using the configured algorithm.
 * @param Channel                - The index of CRC channel for current configuration structure.
 * @param ConfigPtr              - Pointer to a selected configuration structure.
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return                       - result of CRC calculation
 */
CRC_TEXT_SECTION uint64 Crc_CalculateChannel(const uint32          Channel,
                                             const Crc_ConfigType *ConfigPtr,
                                             const uint8          *pCrcData,
                                             uint32                CrcLength,
                                             uint64                CrcStartValue,
                                             boolean               IsFirstCall)
{
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreId = Crc_GetCoreID();
#endif
    uint64 Result = 0U;
    /* PRQA S 4342 ++
        4342:An expression of 'essentially unsigned' type (%1s) is being cast to enum type '%2s'.
        REASON: The program will guarantee the legality of these type conversions.
    */
    Crc_CalculationType CrcCalType = (Crc_CalculationType)0U;
    Crc_StandardType    CrcType    = (Crc_StandardType)0U;
    const Crc_InitType *sCrcInfo   = (*ConfigPtr->pCrcChannelsConfig)[Channel].sCrcInitType;
    /* PRQA S 4342 -- */
#if (CRC_DEV_ERROR_DETECT == STD_ON)
    if (Channel >= ConfigPtr->nNumChannels)
    {
        Crc_ReportDetError(CRC_CALCULATECHANNEL_ID, CRC_E_INVALID_CHANNEL);
    }
    else if (NULL_PTR == pCrcData)
    {
        Crc_ReportDetError(CRC_CALCULATECHANNEL_ID, CRC_E_INVALID_POINTER);
    }
    else
    {
#endif
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((CRC_CHANNEL_IGNORE_CORE_ID == (ConfigPtr->pCrcPartitionMappingPtr[Channel])) ||
            (u8CoreId == (ConfigPtr->pCrcPartitionMappingPtr[Channel])))
        {
#endif
            CrcCalType = (*ConfigPtr->pCrcChannelsConfig)[Channel].eCalType;
            CrcType    = (*ConfigPtr->pCrcChannelsConfig)[Channel].eProtocolType;
            if (CrcCalType == CRC_HARDWARE_CALCULATION)
            {
#if ((CRC_MULTICORE_SUPPORT == STD_ON) && (CRC_SPIN_LOCK_USED == STD_ON))
                if (Crc_GetSpinLock((*ConfigPtr->pCrcChannelsConfig)[Channel].u8Instance) != E_OK)
                {
#if (CRC_DEV_ERROR_DETECT == STD_ON)
                    Crc_ReportDetError(CRC_CALCULATECHANNEL_ID, CRC_E_SPINLOCK_FAIL);
#endif
                }
                else
                {
#endif
                    Result = Crc_HWCalculate((*ConfigPtr->pCrcChannelsConfig)[Channel].u8Instance,
                                             CrcStartValue,
                                             pCrcData,
                                             CrcLength,
                                             IsFirstCall,
                                             sCrcInfo);
#if ((CRC_MULTICORE_SUPPORT == STD_ON) && (CRC_SPIN_LOCK_USED == STD_ON))
                    Crc_ReleaseSpinLock((*ConfigPtr->pCrcChannelsConfig)[Channel].u8Instance);
                }
#endif
            }
            else if (CrcCalType == CRC_TABLE_CALCULATION)
            {
                Result = Crc_LookupTablesCalculate(CrcType,
                                                   CrcStartValue,
                                                   pCrcData,
                                                   CrcLength,
                                                   IsFirstCall,
                                                   sCrcInfo);
            }
            else
            {
                Result =
                    Crc_SwCalculate(CrcType, CrcStartValue, pCrcData, CrcLength, IsFirstCall, sCrcInfo);
            }
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        }
#endif
#if (CRC_DEV_ERROR_DETECT == STD_ON)
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        else
        {
            Crc_ReportDetError((uint8)CRC_CALCULATECHANNEL_ID, (uint8)CRC_E_INVALID_PARTITION);
        }
#endif
#endif
#if (CRC_DEV_ERROR_DETECT == STD_ON)
    }
#endif
    return Result;
}

/**
 * @brief This function performs hardware calculations based on the type passed in.
 * @param u8Instance             - The Crc hardware instance.
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 * @param sCrcInfo               - The correspongding crc configuration.
 *
 * @return                       - result of CRC hardware calculation
 */
/* PRQA S  1505 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit Reason: The function does not have
 * external linkage */
CRC_TEXT_SECTION static uint64 Crc_HWCalculate(const uint8         u8Instance,
                                               uint64              CrcStartValue,
                                               const uint8        *pCrcData,
                                               uint32              CrcLength,
                                               boolean             IsFirstCall,
                                               const Crc_InitType *sCrcInfo)
{
    uint64 u64HWResult = 0U;
    Crc_Hw_Init(sCrcInfo, u8Instance);
    if (IsFirstCall == TRUE)
    {
        /* PRQA S 2982 -- */
        u64HWResult = sCrcInfo->u64SeedValue;
        /* PRQA S 2982 -- */
    }
    else
    {
        if (sCrcInfo->eReadDataFXOR == READ_DATA_FXOR)
        {
            u64HWResult = CrcStartValue ^ CRC64_XOR_VALUE;
        }
        else
        {
            u64HWResult = CrcStartValue;
        }
        u64HWResult = Crc_ApplyDataSwap(u64HWResult, sCrcInfo->eBitWidth, sCrcInfo->eReadDataSwap);
    }

#if (CRC_CRC8_HW_SUPPORT == STD_ON)
    if (sCrcInfo->eBitWidth == CRC_BIT_8)
    {
        CRC_SetSeed(u8Instance, (uint8)u64HWResult);
        CRC_SetInputData(u8Instance, pCrcData, CrcLength);
        u64HWResult = (uint8)CRC_GetCrcResult(u8Instance);
    }
    else if (sCrcInfo->eBitWidth == CRC_BIT_16)
#else
    if (sCrcInfo->eBitWidth == CRC_BIT_16)
#endif
    {
        CRC_SetSeed(u8Instance, (uint16)u64HWResult);
        CRC_SetInputData(u8Instance, pCrcData, CrcLength);
        u64HWResult = (uint16)CRC_GetCrcResult(u8Instance);
    }
    else if (sCrcInfo->eBitWidth == CRC_BIT_32)
    {
        CRC_SetSeed(u8Instance, (uint32)u64HWResult);
        CRC_SetInputData(u8Instance, pCrcData, CrcLength);
        u64HWResult = CRC_GetCrcResult(u8Instance);
    }
    else
    {
        /*Do nothing*/
    }
    return u64HWResult;
}

/**
 * @brief This function performs lookup table calculations based on the type passed in.
 * @param CrcType                - The Crc mode type.
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 * @param sCrcInfo               - The correspongding crc configuration.
 *
 * @return                       - result of CRC lookup table calculation
 */
CRC_TEXT_SECTION static uint64 Crc_LookupTablesCalculate(Crc_StandardType    CrcType,
                                                         uint64              CrcStartValue,
                                                         const uint8        *pCrcData,
                                                         uint32              CrcLength,
                                                         boolean             IsFirstCall,
                                                         const Crc_InitType *sCrcInfo)
{
    if (IsFirstCall == TRUE)
    {
        CrcStartValue = sCrcInfo->u64SeedValue;
    }
    else
    {
        if (sCrcInfo->eReadDataFXOR == READ_DATA_FXOR)
        {
            CrcStartValue = CrcStartValue ^ CRC64_XOR_VALUE;
        }
        else
        {
        }
    }

    switch (CrcType)
    {
#if ((CHANNEL_CRC_8BIT_SAE_J1850_LOOKUP_USED == STD_ON) || \
     (CHANNEL_CRC_8BIT_H2F_LOOKUP_USED == STD_ON))
        case CRC_PROTOCOL_8BIT_SAE_J1850:
        case CRC_PROTOCOL_8BIT_H2F:
            CrcStartValue = Crc_TableCalculateCRC8((uint8)CrcStartValue, pCrcData, CrcLength, CrcType);
            break;
#endif
#if ((CHANNEL_CRC_16BIT_CCITT_FALSE_LOOKUP_USED == STD_ON) || \
     (CHANNEL_CRC_16BIT_ARC_LOOKUP_USED == STD_ON))
        case CRC_PROTOCOL_16BIT_CCITT_FALSE:
        case CRC_PROTOCOL_16BIT_ARC:
            CrcStartValue =
                Crc_TableCalculateCRC16((uint16)CrcStartValue, pCrcData, CrcLength, CrcType);
            break;
#endif
#if ((CHANNEL_CRC_32BIT_ETHERNET_LOOKUP_USED == STD_ON) || \
     (CHANNEL_CRC_32BIT_E2E_P4_LOOKUP_USED == STD_ON))
        case CRC_PROTOCOL_32BIT_ETHERNET:
        case CRC_PROTOCOL_32BIT_E2E_P4:
            CrcStartValue =
                Crc_TableCalculateCRC32((uint32)CrcStartValue, pCrcData, CrcLength, CrcType);
            break;
#endif
#if (CHANNEL_CRC_64BIT_ECMA_LOOKUP_USED == STD_ON)
        case CRC_PROTOCOL_64BIT_ECMA:
            CrcStartValue = Crc_TableCalculateCRC64(CrcStartValue, pCrcData, CrcLength);
            break;
#endif
        default:
            /* do nothing */
            break;
    }
    return CrcStartValue;
}

/**
 * @brief This function performs software calculations based on the type passed in.
 * @param CrcType                - The Crc mode type.
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 * @param sCrcInfo               - The correspongding crc configuration.
 *
 * @return                       - result of CRC software calculation
 */
CRC_TEXT_SECTION static uint64 Crc_SwCalculate(Crc_StandardType    CrcType,
                                               uint64              CrcStartValue,
                                               const uint8        *pCrcData,
                                               uint32              CrcLength,
                                               boolean             IsFirstCall,
                                               const Crc_InitType *sCrcInfo)
{

    if (IsFirstCall == TRUE)
    {
        CrcStartValue = sCrcInfo->u64SeedValue;
    }
    else
    {
        if (sCrcInfo->eReadDataFXOR == READ_DATA_FXOR)
        {
            CrcStartValue = CrcStartValue ^ CRC64_XOR_VALUE;
        }
        else
        {
        }
        CrcStartValue = Crc_ApplyDataSwap(CrcStartValue, sCrcInfo->eBitWidth, sCrcInfo->eReadDataSwap);
    }

    switch (CrcType)
    {
        case CRC_PROTOCOL_8BIT_SAE_J1850:
        case CRC_PROTOCOL_8BIT_H2F:
            CrcStartValue = Crc_RunTimeCalculateCRC8((uint8)CrcStartValue,
                                                     pCrcData,
                                                     CrcLength,
                                                     (uint8)sCrcInfo->u64Polynomial);
            break;

        case CRC_PROTOCOL_16BIT_CCITT_FALSE:
        case CRC_PROTOCOL_16BIT_ARC:
            CrcStartValue =
                Crc_RunTimeCalculateCRC16((uint16)CrcStartValue, pCrcData, CrcLength, sCrcInfo);
            break;

        case CRC_PROTOCOL_32BIT_ETHERNET:
        case CRC_PROTOCOL_32BIT_E2E_P4:
            CrcStartValue = Crc_RunTimeCalculateCRC32((uint32)CrcStartValue,
                                                      pCrcData,
                                                      CrcLength,
                                                      (uint32)sCrcInfo->u64Polynomial);
            break;

        case CRC_PROTOCOL_64BIT_ECMA:
            CrcStartValue = Crc_RunTimeCalculateCRC64(CrcStartValue,
                                                      pCrcData,
                                                      CrcLength,
                                                      sCrcInfo->u64Polynomial);
            break;

        default:
            /* do nothing */
            break;
    }
    return CrcStartValue;
}
/* PRQA S 1505 -- */
#endif

#if (CRC_CRC8_USED == STD_ON)
/**
 * @brief         This function calculates CRC8 (SAE J1850) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC8 SAE J1850 result
 */
CRC_TEXT_SECTION uint8 Crc_CalculateCRC8(const uint8 *Crc_DataPtr,
                                         uint32       Crc_Length,
                                         uint8        Crc_StartValue8,
                                         boolean      Crc_IsFirstCall)
{
#if ((CRC_MULTICORE_SUPPORT == STD_ON) && (CRC_8BIT_SAE_J1850 == CRC_HARDWARE_CALCULATION))
    uint8 u8CoreId = Crc_GetCoreID();
#endif
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC8_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* STD_ON == CRC_DEV_ERROR_DETECT */
    {
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue8 = (uint8)Crc8_InitCfg.u64SeedValue;
        }
        else
        {
            /* undo the XOR on the next value */
            Crc_StartValue8 ^= CRC8_XOR_VALUE;
        }

#if (CRC_8BIT_SAE_J1850 == CRC_TABLE_CALCULATION)
        Crc_StartValue8 = Crc_TableCalculateCRC8(Crc_StartValue8,
                                                 Crc_DataPtr,
                                                 Crc_Length,
                                                 CRC_PROTOCOL_8BIT_SAE_J1850);
#elif (CRC_8BIT_SAE_J1850 == CRC_RUNTIME_CALCULATION)
        Crc_StartValue8 = Crc_RunTimeCalculateCRC8(Crc_StartValue8,
                                                   Crc_DataPtr,
                                                   Crc_Length,
                                                   (uint8)Crc8_InitCfg.u64Polynomial);
#elif (CRC_8BIT_SAE_J1850 == CRC_HARDWARE_CALCULATION)
        /* HARDWARE based CRC calculation */
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((uint8)Crc8InstanceCoreID != u8CoreId)
        {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
            Crc_ReportDetError((uint8)CRC_CALCULATE_CRC8_ID, (uint8)CRC_E_INVALID_PARTITION);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
        }
        else
        {
#if (CRC_SPIN_LOCK_USED == STD_ON)
            if (Crc_GetSpinLock(Crc8Instance) != E_OK)
            {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
                Crc_ReportDetError((uint8)CRC_CALCULATE_CRC8_ID, (uint8)CRC_E_SPINLOCK_FAIL);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
            }
            else
            {
#endif
#endif
                Crc_Hw_Init(&Crc8_InitCfg, Crc8Instance);
                if (Crc_IsFirstCall == FALSE)
                {
                    /* set CRC seed value */
                    CRC_SetSeed(Crc8Instance, Crc_StartValue8);
                }
                CRC_SetInputData(Crc8Instance, Crc_DataPtr, Crc_Length);
                Crc_StartValue8 = (uint8)CRC_GetCrcResult(Crc8Instance);
#if (CRC_MULTICORE_SUPPORT == STD_ON)
#if (CRC_SPIN_LOCK_USED == STD_ON)
                Crc_ReleaseSpinLock(Crc8Instance);
            }
#endif
        }
#endif
#endif
    }
    return Crc_StartValue8;
}
#endif

#if (CRC_CRC8H2F_USED == STD_ON)
/**
 * @brief         This function calculates CRC8 (H2F) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC8 H2F result
 */
CRC_TEXT_SECTION uint8 Crc_CalculateCRC8H2F(const uint8 *Crc_DataPtr,
                                            uint32       Crc_Length,
                                            uint8        Crc_StartValue8H2F,
                                            boolean      Crc_IsFirstCall)
{
#if ((CRC_MULTICORE_SUPPORT == STD_ON) && (CRC_8BIT_H2F == CRC_HARDWARE_CALCULATION))
    uint8 u8CoreId = Crc_GetCoreID();
#endif
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC8H2F_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* STD_ON == CRC_DEV_ERROR_DETECT */
    {
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue8H2F = (uint8)Crc8H2F_InitCfg.u64SeedValue;
        }
        else
        {
            /* undo the XOR on the next value */
            Crc_StartValue8H2F ^= CRC8H2F_XOR_VALUE;
        }

#if (CRC_8BIT_H2F == CRC_TABLE_CALCULATION)
        Crc_StartValue8H2F = Crc_TableCalculateCRC8(Crc_StartValue8H2F,
                                                    Crc_DataPtr,
                                                    Crc_Length,
                                                    CRC_PROTOCOL_8BIT_H2F);
#elif (CRC_8BIT_H2F == CRC_RUNTIME_CALCULATION)
        Crc_StartValue8H2F = Crc_RunTimeCalculateCRC8(Crc_StartValue8H2F,
                                                      Crc_DataPtr,
                                                      Crc_Length,
                                                      (uint8)Crc8H2F_InitCfg.u64Polynomial);
#elif (CRC_8BIT_H2F == CRC_HARDWARE_CALCULATION)
        /* HARDWARE based CRC calculation */
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((uint8)Crc8H2FInstanceCoreID != u8CoreId)
        {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
            Crc_ReportDetError((uint8)CRC_CALCULATE_CRC8H2F_ID, (uint8)CRC_E_INVALID_PARTITION);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
        }
        else
        {
#if (CRC_SPIN_LOCK_USED == STD_ON)
            if (Crc_GetSpinLock(Crc8H2FInstance) != E_OK)
            {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
                Crc_ReportDetError((uint8)CRC_CALCULATE_CRC8H2F_ID, (uint8)CRC_E_SPINLOCK_FAIL);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
            }
            else
            {
#endif
#endif
                Crc_Hw_Init(&Crc8H2F_InitCfg, Crc8H2FInstance);
                if (Crc_IsFirstCall == FALSE)
                {
                    /* set CRC seed value */
                    CRC_SetSeed(Crc8H2FInstance, Crc_StartValue8H2F);
                }
                CRC_SetInputData(Crc8H2FInstance, Crc_DataPtr, Crc_Length);
                Crc_StartValue8H2F = (uint8)CRC_GetCrcResult(Crc8H2FInstance);

#if (CRC_MULTICORE_SUPPORT == STD_ON)
#if (CRC_SPIN_LOCK_USED == STD_ON)
                Crc_ReleaseSpinLock(Crc8H2FInstance);
            }
#endif
        }
#endif
#endif
    }
    return Crc_StartValue8H2F;
}
#endif

#if (CRC_CRC16_USED == STD_ON)
/**
 * @brief         This function calculates CRC16 (CCITT_FALSE) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC16 CCITT FALSE result
 */
CRC_TEXT_SECTION uint16 Crc_CalculateCRC16(const uint8 *Crc_DataPtr,
                                           uint32       Crc_Length,
                                           uint16       Crc_StartValue16,
                                           boolean      Crc_IsFirstCall)
{
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    /*PRQA S 2983 ++
      2983: This assignment is redundant. The value of this object is never subsequently used.
      REASON: code need when multicore is enabled.
    */
    uint8 u8CoreId = Crc_GetCoreID();
    /*PRQA S 2983 -- */
#endif
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC16_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* STD_ON == CRC_DEV_ERROR_DETECT */
    {
        /*PRQA S 2982 ++
        2982:   This assignment is redundant. The value of this object is never used before being
        modified. REASON: Crc_StartValue is not necessary when HW caculate and first call is false.
        Seed is define in hw init structure. keep the assignment for code maintainability.
        */
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue16 = (uint16)Crc16_InitCfg.u64SeedValue;
        }
        else
        {
            /* do nothing */
        }
        /*PRQA S 2982 -- */
#if (CRC_16BIT_CCITT_FALSE == CRC_TABLE_CALCULATION)
        /* Table based CRC calculation */
        Crc_StartValue16 = Crc_TableCalculateCRC16(Crc_StartValue16,
                                                   Crc_DataPtr,
                                                   Crc_Length,
                                                   CRC_PROTOCOL_16BIT_CCITT_FALSE);
#elif (CRC_16BIT_CCITT_FALSE == CRC_RUNTIME_CALCULATION)
        /* RUNTIME based CRC calculation */
        Crc_StartValue16 =
            Crc_RunTimeCalculateCRC16(Crc_StartValue16, Crc_DataPtr, Crc_Length, &Crc16_InitCfg);
#elif (CRC_16BIT_CCITT_FALSE == CRC_HARDWARE_CALCULATION)
        /* HARDWARE based CRC calculation */
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((uint8)Crc16InstanceCoreID != u8CoreId)
        {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
            Crc_ReportDetError((uint8)CRC_CALCULATE_CRC16_ID, (uint8)CRC_E_INVALID_PARTITION);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
        }
        else
        {
#if (CRC_SPIN_LOCK_USED == STD_ON)
            if (Crc_GetSpinLock(Crc16Instance) != E_OK)
            {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
                Crc_ReportDetError((uint8)CRC_CALCULATE_CRC16_ID, (uint8)CRC_E_SPINLOCK_FAIL);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
            }
            else
            {
#endif
#endif
                Crc_Hw_Init(&Crc16_InitCfg, Crc16Instance);
                if (Crc_IsFirstCall == FALSE)
                {
                    /* set CRC seed value */
                    CRC_SetSeed(Crc16Instance, Crc_StartValue16);
                }
                CRC_SetInputData(Crc16Instance, Crc_DataPtr, Crc_Length);
                Crc_StartValue16 = (uint16)CRC_GetCrcResult(Crc16Instance);

#if (CRC_MULTICORE_SUPPORT == STD_ON)
#if (CRC_SPIN_LOCK_USED == STD_ON)
                Crc_ReleaseSpinLock(Crc16Instance);
            }
#endif
        }
#endif
#endif /* CRC_16BIT_CCITT_FALSE == CRC_TABLE_CALCULATION */
    }
    return Crc_StartValue16;
}
#endif

#if (CRC_CRC16ARC_USED == STD_ON)
/**
 * @brief         This function calculates CRC16 (ARC) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC16 ARC result
 */
CRC_TEXT_SECTION uint16 Crc_CalculateCRC16ARC(const uint8 *Crc_DataPtr,
                                              uint32       Crc_Length,
                                              uint16       Crc_StartValue16,
                                              boolean      Crc_IsFirstCall)
{
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    /*PRQA S 2983 ++
      2983: This assignment is redundant. The value of this object is never subsequently used.
      REASON: code need when multicore is enabled.
    */
    uint8 u8CoreId = Crc_GetCoreID();
    /*PRQA S 2983 -- */
#endif
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC16ARC_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* #if (STD_ON == CRC_DEV_ERROR_DETECT) */
    {
        /*PRQA S 2982 ++
        2982:   This assignment is redundant. The value of this object is never used before being
        modified. REASON: Crc_StartValue is not necessary when HW caculate and first call is false.
        Seed is define in hw init structure. keep the assignment for code maintainability.
        */
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue16 = (uint16)Crc16ARC_InitCfg.u64SeedValue;
        }
        else
        {
        }
        /*PRQA S 2982 -- */

#if (CRC_16BIT_ARC == CRC_TABLE_CALCULATION)
        /* Table based CRC calculation */
        Crc_StartValue16 = Crc_TableCalculateCRC16(Crc_StartValue16,
                                                   Crc_DataPtr,
                                                   Crc_Length,
                                                   CRC_PROTOCOL_16BIT_ARC);
#elif (CRC_16BIT_ARC == CRC_RUNTIME_CALCULATION)
        if (Crc_IsFirstCall == FALSE)
        {
            Crc_StartValue16 = Crc_ReverseUInt16(Crc_StartValue16);
        }
        /* RUNTIME based CRC calculation */
        Crc_StartValue16 =
            Crc_RunTimeCalculateCRC16(Crc_StartValue16, Crc_DataPtr, Crc_Length, &Crc16ARC_InitCfg);
#elif (CRC_16BIT_ARC == CRC_HARDWARE_CALCULATION)
        /* HARDWARE based CRC calculation */
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((uint8)Crc16ARCInstanceCoreID != u8CoreId)
        {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
            Crc_ReportDetError((uint8)CRC_CALCULATE_CRC16ARC_ID, (uint8)CRC_E_INVALID_PARTITION);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
        }
        else
        {
#if (CRC_SPIN_LOCK_USED == STD_ON)
            if (Crc_GetSpinLock(Crc16ARCInstance) != E_OK)
            {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
                Crc_ReportDetError((uint8)CRC_CALCULATE_CRC16ARC_ID, (uint8)CRC_E_SPINLOCK_FAIL);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
            }
            else
            {
#endif
#endif

                Crc_Hw_Init(&Crc16ARC_InitCfg, Crc16ARCInstance);
                if (Crc_IsFirstCall == FALSE)
                {
                    Crc_StartValue16 = Crc_ReverseUInt16(Crc_StartValue16);
                    /* set CRC seed value */
                    CRC_SetSeed(Crc16ARCInstance, Crc_StartValue16);
                }
                CRC_SetInputData(Crc16ARCInstance, Crc_DataPtr, Crc_Length);
                Crc_StartValue16 = (uint16)CRC_GetCrcResult(Crc16ARCInstance);

#if (CRC_MULTICORE_SUPPORT == STD_ON)
#if (CRC_SPIN_LOCK_USED == STD_ON)
                Crc_ReleaseSpinLock(Crc16ARCInstance);
            }
#endif
        }
#endif
#endif /* CRC_16BIT_ARC == CRC_TABLE_CALCULATION */
    }
    return Crc_StartValue16;
}
#endif

#if (CRC_CRC32_USED == STD_ON)
/**
 * @brief         This function calculates CRC32 (Ethernet) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC32 (Ethernet) result
 */
CRC_TEXT_SECTION uint32 Crc_CalculateCRC32(const uint8 *Crc_DataPtr,
                                           uint32       Crc_Length,
                                           uint32       Crc_StartValue32,
                                           boolean      Crc_IsFirstCall)
{
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    /*PRQA S 2983 ++
      2983: This assignment is redundant. The value of this object is never subsequently used.
      REASON: code need when multicore is enabled.
    */
    uint8 u8CoreId = Crc_GetCoreID();
    /*PRQA S 2983 -- */
#endif
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC32_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* STD_ON == CRC_DEV_ERROR_DETECT */
    {
        /*PRQA S 2982 ++
        2982:   This assignment is redundant. The value of this object is never used before being
        modified. REASON: Crc_StartValue is not necessary when HW caculate and first call is false.
        Seed is define in hw init structure. keep the assignment for code maintainability.
        */
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue32 = (uint32)Crc32_InitCfg.u64SeedValue;
        }
        else
        {
            Crc_StartValue32 ^= CRC32_XOR_VALUE;
        }
        /*PRQA S 2982 -- */
#if (CRC_32BIT_ETHERNET == CRC_TABLE_CALCULATION)
        /* Table based CRC calculation */
        Crc_StartValue32 = Crc_TableCalculateCRC32(Crc_StartValue32,
                                                   Crc_DataPtr,
                                                   Crc_Length,
                                                   CRC_PROTOCOL_32BIT_ETHERNET);
#elif (CRC_32BIT_ETHERNET == CRC_RUNTIME_CALCULATION)
        /* RUNTIME based CRC calculation */
        if (Crc_IsFirstCall == FALSE)
        {
            Crc_StartValue32 = Crc_ReverseUInt32(Crc_StartValue32);
        }
        Crc_StartValue32 = Crc_RunTimeCalculateCRC32(Crc_StartValue32,
                                                     Crc_DataPtr,
                                                     Crc_Length,
                                                     (uint32)Crc32_InitCfg.u64Polynomial);
#elif (CRC_32BIT_ETHERNET == CRC_HARDWARE_CALCULATION)
        /* HARDWARE based CRC calculation */
#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((uint8)Crc32InstanceCoreID != u8CoreId)
        {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
            Crc_ReportDetError((uint8)CRC_CALCULATE_CRC32_ID, (uint8)CRC_E_INVALID_PARTITION);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
        }
        else
        {
#if (CRC_SPIN_LOCK_USED == STD_ON)
            if (Crc_GetSpinLock(Crc32Instance) != E_OK)
            {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
                Crc_ReportDetError((uint8)CRC_CALCULATE_CRC32_ID, (uint8)CRC_E_SPINLOCK_FAIL);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
            }
            else
            {
#endif
#endif
                Crc_Hw_Init(&Crc32_InitCfg, Crc32Instance);
                if (Crc_IsFirstCall == FALSE)
                {
                    Crc_StartValue32 = Crc_ReverseUInt32(Crc_StartValue32);
                    /* set CRC seed value */
                    CRC_SetSeed(Crc32Instance, Crc_StartValue32);
                }
                CRC_SetInputData(Crc32Instance, Crc_DataPtr, Crc_Length);
                Crc_StartValue32 = (uint32)CRC_GetCrcResult(Crc32Instance);

#if (CRC_MULTICORE_SUPPORT == STD_ON)
#if (CRC_SPIN_LOCK_USED == STD_ON)
                Crc_ReleaseSpinLock(Crc32Instance);
            }
#endif
        }
#endif
#endif /* CRC_32BIT_ETHERNET == CRC_TABLE_CALCULATION */
    }
    return Crc_StartValue32;
}
#endif

#if (CRC_CRC32P4_USED == STD_ON)
/**
 * @brief         This function calculates CRC32 (P4) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC32 (P4) result
 */
CRC_TEXT_SECTION uint32 Crc_CalculateCRC32P4(const uint8 *Crc_DataPtr,
                                             uint32       Crc_Length,
                                             uint32       Crc_StartValue32,
                                             boolean      Crc_IsFirstCall)
{
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    /*PRQA S 2983 ++
      2983: This assignment is redundant. The value of this object is never subsequently used.
      REASON: code need when multicore is enabled.
    */
    uint8 u8CoreId = Crc_GetCoreID();
    /*PRQA S 2983 -- */
#endif
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC32P4_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* STD_ON == CRC_DEV_ERROR_DETECT */
    {
        /*PRQA S 2982 ++
        2982:   This assignment is redundant. The value of this object is never used before being
        modified. REASON: Crc_StartValue is not necessary when HW caculate and first call is false.
        Seed is define in hw init structure. keep the assignment for code maintainability.
        */
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue32 = (uint32)Crc32P4_InitCfg.u64SeedValue;
        }
        else
        {
            Crc_StartValue32 ^= CRC32P4_XOR_VALUE;
        }
        /*PRQA S 2982 -- */

#if (CRC_32BIT_E2E_P4 == CRC_TABLE_CALCULATION)
        /* Table based CRC calculation */
        Crc_StartValue32 = Crc_TableCalculateCRC32(Crc_StartValue32,
                                                   Crc_DataPtr,
                                                   Crc_Length,
                                                   CRC_PROTOCOL_32BIT_E2E_P4);
#elif (CRC_32BIT_E2E_P4 == CRC_RUNTIME_CALCULATION)
        if (Crc_IsFirstCall == FALSE)
        {
            Crc_StartValue32 = Crc_ReverseUInt32(Crc_StartValue32);
        }
        /* RUNTIME based CRC calculation */
        Crc_StartValue32 = Crc_RunTimeCalculateCRC32(Crc_StartValue32,
                                                     Crc_DataPtr,
                                                     Crc_Length,
                                                     (uint32)Crc32P4_InitCfg.u64Polynomial);
#elif (CRC_32BIT_E2E_P4 == CRC_HARDWARE_CALCULATION)
        /* HARDWARE based CRC calculation */

#if (CRC_MULTICORE_SUPPORT == STD_ON)
        if ((uint8)Crc32P4InstanceCoreID != u8CoreId)
        {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
            Crc_ReportDetError((uint8)CRC_CALCULATE_CRC32P4_ID, (uint8)CRC_E_INVALID_PARTITION);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
        }
        else
        {
#if (CRC_SPIN_LOCK_USED == STD_ON)
            if (Crc_GetSpinLock(Crc32P4Instance) != E_OK)
            {
#if (STD_ON == CRC_DEV_ERROR_DETECT)
                Crc_ReportDetError((uint8)CRC_CALCULATE_CRC32P4_ID, (uint8)CRC_E_SPINLOCK_FAIL);
#endif /* CRC_MULTICORE_SUPPORT == STD_ON */
            }
            else
            {
#endif
#endif
                Crc_Hw_Init(&Crc32P4_InitCfg, Crc32P4Instance);
                if (Crc_IsFirstCall == FALSE)
                {
                    Crc_StartValue32 = Crc_ReverseUInt32(Crc_StartValue32);

                    /* set CRC seed value */
                    CRC_SetSeed(Crc32P4Instance, Crc_StartValue32);
                }
                CRC_SetInputData(Crc32P4Instance, Crc_DataPtr, Crc_Length);
                Crc_StartValue32 = (uint32)CRC_GetCrcResult(Crc32P4Instance);

#if (CRC_MULTICORE_SUPPORT == STD_ON)
#if (CRC_SPIN_LOCK_USED == STD_ON)
                Crc_ReleaseSpinLock(Crc32P4Instance);
            }
#endif
        }
#endif
#endif /* CRC_32BIT_E2E_P4 == CRC_TABLE_CALCULATION */
    }
    return Crc_StartValue32;
}
#endif

#if (CRC_CRC64_USED == STD_ON)
/**
 * @brief         This function calculates CRC64 (ECMA) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 *
 * @return CRC64 (ECMA) result
 */
CRC_TEXT_SECTION uint64 Crc_CalculateCRC64(const uint8 *Crc_DataPtr,
                                           uint32       Crc_Length,
                                           uint64       Crc_StartValue64,
                                           boolean      Crc_IsFirstCall)
{
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Crc_DataPtr)
    {
        Crc_ReportDetError(CRC_CALCULATE_CRC64_ID, CRC_E_INVALID_POINTER);
    }
    else
#endif /* STD_ON == CRC_DEV_ERROR_DETECT */
    {
        if (TRUE == Crc_IsFirstCall)
        {
            Crc_StartValue64 = Crc64_InitCfg.u64SeedValue;
        }
        else
        {
            Crc_StartValue64 ^= CRC64_XOR_VALUE;
        }

#if (CRC_64BIT_ECMA == CRC_TABLE_CALCULATION)
        /* Table based CRC calculation */
        Crc_StartValue64 = Crc_TableCalculateCRC64(Crc_StartValue64, Crc_DataPtr, Crc_Length);
#elif (CRC_64BIT_ECMA == CRC_RUNTIME_CALCULATION)
        if (Crc_IsFirstCall == FALSE)
        {
            Crc_StartValue64 = Crc_ReverseUInt64(Crc_StartValue64);
        }
        /* RUNTIME based CRC calculation */
        Crc_StartValue64 = Crc_RunTimeCalculateCRC64(Crc_StartValue64,
                                                     Crc_DataPtr,
                                                     Crc_Length,
                                                     Crc64_InitCfg.u64Polynomial);
#endif /* CRC_64BIT_ECMA == CRC_TABLE_CALCULATION */
    }
    return (uint64)Crc_StartValue64;
}
#endif

#if (CRC_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief Return the version information of this module
 *
 * @param Versioninfo -Pointer to where to store the version information of this module
 */
CRC_TEXT_SECTION void Crc_GetVersionInfo(Std_VersionInfoType *Versioninfo)
{
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    if (NULL_PTR == Versioninfo)
    {
        Crc_ReportDetError(CRC_GETVERSIONINFO_ID, CRC_E_INVALID_POINTER);
    }
    else
    {
#endif /* #if (STD_ON == CRC_DEV_ERROR_DETECT) */
        Versioninfo->vendorID         = (uint16)CRC_VENDOR_ID;
        Versioninfo->moduleID         = (uint16)CRC_MODULE_ID;
        Versioninfo->sw_major_version = (uint8)CRC_SW_MAJOR_VERSION;
        Versioninfo->sw_minor_version = (uint8)CRC_SW_MINOR_VERSION;
        Versioninfo->sw_patch_version = (uint8)CRC_SW_PATCH_VERSION;
#if (STD_ON == CRC_DEV_ERROR_DETECT)
    }
#endif /* #if (STD_ON == CRC_DEV_ERROR_DETECT) */
}
#endif /* #if (CRC_GET_VERSION_INFO_API == STD_ON) */

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
