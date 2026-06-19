/**
*   @file    Fls_Flash_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Definitions of Flash IP exported types.
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
*   0.1.0       20/60/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/
#ifndef FLS_FLASH_TYPES_H
#define FLS_FLASH_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief          Return value for Fls_DsiHandler and Fls_MciHandler.
* @details        module doesn't feel responsible (e.g. address does not belong to its current job,
*                 there is no current pending read/compare job, the syndrome is different).
*
*/
#define FLS_UNHANDLED       (0U)

/**
* @brief          Return value for Fls_DsiHandler and Fls_MciHandler.
* @details        module feels responsible, but wants to repeat the  causing instruction.
*                 Maybe: it still uses information in MCM or ECSM module, but they are outdated
*                (e.g. due to an erroneous DMA transfer in the meantime)
*
*/
#define FLS_HANDLED_RETRY   1U

/**
* @brief          Return value for Fls_DsiHandler and Fls_MciHandler.
* @details        module feels responsible, the current job is marked as failed,
*                 processing may continue, skipping the causing instruction.
*
*/
#define FLS_HANDLED_SKIP    (2U)

/**
* @brief          Return value for Fls_DsiHandler and Fls_MciHandler.
* @details        module  feels responsible, but the only reaction is to stop the system
*                 (e.g.: try to shut-down in a quite safe way)
*
*/
#define FLS_HANDLED_STOP    3U

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
    @brief FLASH physical sector description
*/
typedef struct
{
    volatile uint32 * pSectorStartAddressPtr; /**< @brief FLASH physical sector start address */
} Fls_Flash_InternalSectorInfoType;

typedef uint32 Fls_Flash_DataBusWidthType;

#ifdef __cplusplus
}
#endif

#endif /* FLS_FLASH_TYPES_H */

/** @}*/
