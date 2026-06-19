/**
 *   @file    Pfls_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pfls - AUTOSAR Module Flash Driver.
 *   @details Definitions of all Flash driver exported types
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
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
*   1.4.0       09/29/2025    QXW0054       N/A          Pfls Initial Version
==================================================================================================*/
#ifndef PFLS_TYPES_H
#define PFLS_TYPES_H

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
typedef uint32 Pfls_PhysicalSectorType;

/**
 * @brief          Type of job currently executed by Pfls_MainFunction.
 */
typedef enum
{
    /**
     * @brief erase one or more complete flash sectors
     */
    PFLS_JOB_ERASE = 0,
    /**
     * @brief write one or more complete flash pages
     */
    PFLS_JOB_WRITE,
    /**
     * @brief read one or more bytes from flash memory
     */
    PFLS_JOB_READ,
    /**
     * @brief compare data buffer with content of flash memory
     */
    PFLS_JOB_COMPARE,
    /**
     * @brief check content of erased flash memory area
     */
    PFLS_JOB_BLANK_CHECK

} Pfls_JobType;

/**
 * @brief          Result of low-level flash operation.
 */
typedef enum
{
    PFLASH_E_OK = 0,             /**< @brief operation succeeded */
    PFLASH_E_FAILED,             /**< @brief operation failed due to hardware error */
    PFLASH_E_BLOCK_INCONSISTENT, /**< @brief data buffer doesn't match with content of flash memory */
    PFLASH_E_PENDING,            /**< @brief operation is pending */
    PFLASH_E_PARTITION_ERR       /**< @brief FlexNVM partition ratio error */
} Pfls_LLDReturnType;

/**
 * @brief          Type of job currently executed by Pfls_LLDMainFunction.
 */
typedef enum
{
    /**
     * @brief no job executed by Pfls_LLDMainFunction
     */
    PFLASH_JOB_NONE = 0,
    /**
     * @brief erase one flash sector
     */
    PFLASH_JOB_ERASE,
    /**
     * @brief write one or more complete flash pages
     */
    PFLASH_JOB_WRITE,

} Pfls_LLDJobType;

/**
 * @brief          Logical sector index.
 */
typedef uint32 Pfls_SectorIndexType;

/**
 * @brief          Pfls CRC Type.
 * @details        CRC computed over config set.
 * @implements     Pfls_CrcType_typedef
 */
typedef uint16 Pfls_CrcType;

/**
 * @brief          Pfls Address Type.
 * @details        Address offset from the configured flash base address to access a certain flash
 *                 memory area.
 * @implements     Pfls_AddressType_typedef
 *
 * SWS_Pfls_00369
 */
typedef uint32 Pfls_AddressType;

/**
 * @brief          Pfls Length Type.
 * @details        Number of bytes to read,write,erase,compare
 * @implements     Pfls_LengthType_typedef
 *
 * SWS_Pfls_00370
 */
typedef uint32 Pfls_LengthType;

/**
 * @brief          Pfls Sector Count Type
 * @details        Number of configured sectors
 */
typedef uint32 Pfls_SectorCountType;

/**
 * @brief          Pfls Job End Notification Pointer Type
 * @details        Pointer type of Pfls_JobEndNotification function
 * @implements     Pfls_JobEndNotificationPtrType_typedef
 */
/* SWS_Pfls_00110 */
typedef void (*Pfls_JobEndNotificationPtrType)(void);

/**
 * @brief          Pfls Job Error Notification Pointer Type
 * @details        Pointer type of Pfls_JobErrorNotification function
 * @implements     Pfls_JobErrorNotificationPtrType_typedef
 */
/* SWS_Pfls_00110 */
typedef void (*Pfls_JobErrorNotificationPtrType)(void);

#ifdef __cplusplus
}
#endif

#endif /* PFLS_TYPES_H */

/** @}*/
