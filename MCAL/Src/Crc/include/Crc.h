/**
 *   @file    Crc.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - Crc Ip driver header file.
 *   @details
 *
 *   @addtogroup CRC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CRC
*   PLATFORM             : Flagchip FC7XXX
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
*   0.6.0       18/03/2024    QXW0119       N/A          Support for 7240
==================================================================================================*/
#ifndef CRC_H
#define CRC_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Mcal.h"
#include "Crc_Cfg.h"
#include "Crc_Types.h"
/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief    API service ID for Crc_CalculateCRC8 function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC8_ID      ((uint8)0x01U)

/**
 * @brief    API service ID for Crc_CalculateCRC16 function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC16_ID     ((uint8)0x02U)

/**
 * @brief    API service ID for Crc_CalculateCRC32 function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC32_ID     ((uint8)0x03U)

/**
 * @brief    API service ID for Crc_GetVersionInfo function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_GETVERSIONINFO_ID      ((uint8)0x04U)

/**
 * @brief    API service ID for Crc_CalculateCRC8H2F function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC8H2F_ID   ((uint8)0x05U)

/**
 * @brief    API service ID for Crc_CalculateCRC32P4 function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC32P4_ID   ((uint8)0x06U)

/**
 * @brief    API service ID for Crc_CalculateCRC64 function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC64_ID     ((uint8)0x07U)

/**
 * @brief    API service ID for Crc_CalculateCRC16ARC function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATE_CRC16ARC_ID  ((uint8)0x08U)

/**
 * @brief    API service ID for Crc_CalculateChannel function
 * @details  Parameters used when raising an error/exception
 */
#define CRC_CALCULATECHANNEL_ID    ((uint8)0x0AU)

/**
 * @brief        API service is called with wrong channel identifier
 * @details      Parameter is used when raising a Det error
 * @implements   Crc_ErrorIds_define
 */
#define CRC_E_INVALID_CHANNEL      ((uint8)0x0BU)

/**
 * @brief        API service is called with NULL pointer parameter
 * @details      Parameter is used when raising a Det error
 * @implements   Crc_ErrorIds_define
 */
#define CRC_E_INVALID_POINTER      ((uint8)0x0CU)

/**
 * @brief        The CRC module calls the incorrect core
 * @details      Parameter is used when raising a Det error
 * @implements   Crc_ErrorIds_define
 * */
#define CRC_E_INVALID_PARTITION    ((uint8)0x0EU)

/**
 * @brief        The CRC module can't get spinlock in time
 * @details      Parameter is used when raising a Det error
 * @implements   Crc_ErrorIds_define
 * */
#define CRC_E_SPINLOCK_FAIL        ((uint8)0x0DU)
/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/** Slower execution (software calculate), but small code size (no ROM table) */
#define CRC_RUNTIME_CALCULATION    0U
/** Fast execution (software calculate), but larger code size (ROM table) */
#define CRC_TABLE_CALCULATION      1U
/** Fast execution, less CPU time */
#define CRC_HARDWARE_CALCULATION   2U

/** CRC Channle ingnroed core id*/
#define CRC_CHANNEL_IGNORE_CORE_ID 0xFFU

/**
 * @brief   This type contains the CRC calculation Type.
 * @details Select calculation for each Channel to calculate CRC.
 * */
typedef uint8 Crc_CalculationType;

/**
 * @brief Defines the crc channel configuration
 */
typedef struct
{
    uint8               u8Instance;
    Crc_CalculationType eCalType;
    Crc_StandardType    eProtocolType;
    const Crc_InitType *sCrcInitType;
} CRC_ChannelConfiguration;

/**
 * @brief Defines the crc structure
 */
typedef struct
{
    uint32 nNumChannels;
    const CRC_ChannelConfiguration (*pCrcChannelsConfig)[];
#if (CRC_MULTICORE_SUPPORT == STD_ON)
    const uint8 *pCrcPartitionMappingPtr; /* Multicore module partion map table*/
#endif
} Crc_ConfigType;
/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/
#define CRC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crc_MemMap.h"
#ifndef CRC_PRECOMPILE_SUPPORT
extern const Crc_ConfigType Crc_Config;
#endif
#define CRC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crc_MemMap.h"
/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

#if (CRC_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief Get CRC module version information API
 *
 * @param VersionInfoPtr Version information structure pointer
 */
CRC_TEXT_SECTION void Crc_GetVersionInfo(Std_VersionInfoType *Versioninfo);
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
 */
CRC_TEXT_SECTION uint8 Crc_CalculateCRC8(const uint8 *Crc_DataPtr,
                                         uint32       Crc_Length,
                                         uint8        Crc_StartValue8,
                                         boolean      Crc_IsFirstCall);
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
 */
CRC_TEXT_SECTION uint8 Crc_CalculateCRC8H2F(const uint8 *Crc_DataPtr,
                                            uint32       Crc_Length,
                                            uint8        Crc_StartValue8H2F,
                                            boolean      Crc_IsFirstCall);
#endif

#if (CRC_CRC16_USED == STD_ON)
/**
 * @brief         This function calculates CRC8 (H2F) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 */
CRC_TEXT_SECTION uint16 Crc_CalculateCRC16(const uint8 *Crc_DataPtr,
                                           uint32       Crc_Length,
                                           uint16       Crc_StartValue16,
                                           boolean      Crc_IsFirstCall);
#endif

#if (CRC_CRC16ARC_USED == STD_ON)
/**
 * @brief         This function calculates CRC8 (H2F) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 */
CRC_TEXT_SECTION uint16 Crc_CalculateCRC16ARC(const uint8 *Crc_DataPtr,
                                              uint32       Crc_Length,
                                              uint16       Crc_StartValue16,
                                              boolean      Crc_IsFirstCall);
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
 */
CRC_TEXT_SECTION uint32 Crc_CalculateCRC32(const uint8 *Crc_DataPtr,
                                           uint32       Crc_Length,
                                           uint32       Crc_StartValue32,
                                           boolean      Crc_IsFirstCall);
#endif

#if (CRC_CRC32P4_USED == STD_ON)
/**
 * @brief         This function calculates CRC32 (Ethernet) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 */
CRC_TEXT_SECTION uint32 Crc_CalculateCRC32P4(const uint8 *Crc_DataPtr,
                                             uint32       Crc_Length,
                                             uint32       Crc_StartValue32,
                                             boolean      Crc_IsFirstCall);
#endif

#if (CRC_CRC64_USED == STD_ON)
/**
 * @brief         This function calculates CRC32 (Ethernet) and returns the result
 * @param pCrcData               - Pointer to the Crc Data Input.
 * @param CrcLength              - Length of crcDataPtr block to be calculated in bytes
 * @param CrcStartValue          - Start value (seed Value) when the algorithm starts.
 * @param IsFirstCall            - TRUE: ignore CrcStartValue the initialization value is known by
 * the chosen algorithm.
 *                               - FALSE: initialization CrcStartValue is interpreted to be the
 * return value of the previous function
 */
CRC_TEXT_SECTION uint64 Crc_CalculateCRC64(const uint8 *Crc_DataPtr,
                                           uint32       Crc_Length,
                                           uint64       Crc_StartValue64,
                                           boolean      Crc_IsFirstCall);
#endif
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
                                             boolean               IsFirstCall);
#endif
#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*CRC_H*/

/** @} */
