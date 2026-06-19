/**
 *   @file    Crc_Hw.h
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
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
#ifndef CRC_HW_H
#define CRC_HW_H

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
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

/**
 * @brief         Hardware level initializes the CRC Driver settings based on the configuration.
 * @param pInitCfg                - Structure use to initialize the Crc hardware.
 * @param u8Instance              - CRC instance.
 */
CRC_TEXT_SECTION void Crc_Hw_Init(const Crc_InitType *pInitCfg, const uint8 u8Instance);

/**
 * @brief         Calculate CRC value of all input data.
 * @param u8Instance              - CRC instance.
 * @param pData                   - Pointer to Crc Data Input.
 * @param u32DataSize             - Size of pData block to be calculated in bytes.
 */
CRC_TEXT_SECTION void CRC_SetInputData(uint8 u8Instance, const uint8 pData[], uint32 u32DataSize);

/**
 * @brief         Set the seed value.
 * @param u8Instance              - CRC instance.
 */
CRC_TEXT_SECTION uint32 CRC_GetCrcResult(uint8 u8Instance);

/**
 * @brief         Calculate CRC value of all input data.
 * @param u8Instance              - CRC instance.
 * @param u32SeedVal              - CRC seed value.
 */
CRC_TEXT_SECTION void CRC_SetSeed(uint8 u8Instance, uint32 u32SeedVal);

#if ((CRC_MULTICORE_SUPPORT == STD_ON) && (CRC_SPIN_LOCK_USED == STD_ON))
/**
 * @brief          Get the spin lock of the Adc
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
CRC_TEXT_SECTION Std_ReturnType Crc_GetSpinLock(const uint8 u8Instance);

/**
 * @brief          Release the spin lock of the Adc
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Release spin lock success.
 * @retval         E_NOT_OK      Release spin lock failed.
 *
 */
CRC_TEXT_SECTION void Crc_ReleaseSpinLock(const uint8 u8Instance);

#endif

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif
/** @} */
