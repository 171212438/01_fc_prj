/**
 *   @file    Fls_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
 *   @details Definitions of all Flash driver exported types
 *
 *   @addtogroup Fls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       20/06/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/
#ifndef FLS_TYPES_H
#define FLS_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
    @brief Physical flash sectors type, unique identifier for each configured sector.
*/
typedef uint32 Fls_PhysicalSectorType;

/**
 * @brief          Type of job currently executed by Fls_MainFunction.
 */
typedef enum
{
    /**
     * @brief erase one or more complete flash sectors
     */
    FLS_JOB_ERASE = 0,
    /**
     * @brief write one or more complete flash pages
     */
    FLS_JOB_WRITE,
    /**
     * @brief read one or more bytes from flash memory
     */
    FLS_JOB_READ,
    /**
     * @brief compare data buffer with content of flash memory
     */
    FLS_JOB_COMPARE,
    /**
     * @brief check content of erased flash memory area
     */
    FLS_JOB_BLANK_CHECK

} Fls_JobType;

/**
 * @brief          Result of low-level flash operation.
 */
typedef enum
{
    FLASH_E_OK = 0,             /**< @brief operation succeeded */
    FLASH_E_FAILED,             /**< @brief operation failed due to hardware error */
    FLASH_E_BLOCK_INCONSISTENT, /**< @brief data buffer doesn't match with content of flash memory */
    FLASH_E_PENDING,            /**< @brief operation is pending */
    FLASH_E_PARTITION_ERR       /**< @brief FlexNVM partition ratio error */
} Fls_LLDReturnType;

/**
 * @brief          Type of job currently executed by Fls_LLDMainFunction.
 */
typedef enum
{
    /**
     * @brief no job executed by Fls_LLDMainFunction
     */
    FLASH_JOB_NONE = 0,
    /**
     * @brief erase one flash sector
     */
    FLASH_JOB_ERASE,
    /**
     * @brief write one or more complete flash pages
     */
    FLASH_JOB_WRITE,

} Fls_LLDJobType;

/**
 * @brief          Logical sector index.
 */
typedef uint32 Fls_SectorIndexType;

/**
 * @brief          Fls CRC Type.
 * @details        CRC computed over config set.
 * @implements     Fls_CrcType_typedef
 */
typedef uint16 Fls_CrcType;

/**
 * @brief          Fls Address Type.
 * @details        Address offset from the configured flash base address to access a certain flash
 *                 memory area.
 * @implements     Fls_AddressType_typedef
 *
 * SWS_Fls_00369
 */
typedef uint32 Fls_AddressType;

/**
 * @brief          Fls Length Type.
 * @details        Number of bytes to read,write,erase,compare
 * @implements     Fls_LengthType_typedef
 *
 * SWS_Fls_00370
 */
typedef uint32 Fls_LengthType;

/**
 * @brief          Fls Sector Count Type
 * @details        Number of configured sectors
 */
typedef uint32 Fls_SectorCountType;

/**
 * @brief          Fls Job End Notification Pointer Type
 * @details        Pointer type of Fls_JobEndNotification function
 * @implements     Fls_JobEndNotificationPtrType_typedef
 */
/* SWS_Fls_00110 */
typedef void (*Fls_JobEndNotificationPtrType)(void);

/**
 * @brief          Fls Job Error Notification Pointer Type
 * @details        Pointer type of Fls_JobErrorNotification function
 * @implements     Fls_JobErrorNotificationPtrType_typedef
 */
/* SWS_Fls_00110 */
typedef void (*Fls_JobErrorNotificationPtrType)(void);

#ifdef __cplusplus
}
#endif

#endif /* FLS_TYPES_H */

/** @}*/
