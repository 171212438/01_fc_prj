/**
*   @file    CDD_Uart_PBcfg.c
*   @version 1.5.1

*   @brief   AUTOSAR UART - driver API and development errors implemention.
*   @details This file contains the UART Autosar driver API and development errors implemention.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
*   PLATFORM             : Flagchip FC7xxx
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "CDD_Uart_Cfg.h"

#if (UART_HAS_DMA_ENABLED == STD_ON)
#include "Dma_Types.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define UART_PBCFG_VENDOR_ID_C                     174
#define UART_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define UART_PBCFG_AR_RELEASE_MINOR_VERSION_C      6
#define UART_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define UART_PBCFG_SW_MAJOR_VERSION_C              1
#define UART_PBCFG_SW_MINOR_VERSION_C              5
#define UART_PBCFG_SW_PATCH_VERSION_C              1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against CDD_Uart_Cfg.h */
#if (UART_PBCFG_VENDOR_ID_C != UART_CFG_VENDOR_ID)
    #error "CDD_Uart_PBcfg.c and CDD_Uart_Cfg.h have different vendor ids"
#endif
#if ((UART_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != UART_CFG_AR_RELEASE_MAJOR_VERSION) || \
    (UART_PBCFG_AR_RELEASE_MINOR_VERSION_C    != UART_CFG_AR_RELEASE_MINOR_VERSION) || \
    (UART_PBCFG_AR_RELEASE_REVISION_VERSION_C != UART_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of CDD_Uart_PBcfg.c and CDD_Uart_Cfg.h are different"
#endif
#if ((UART_PBCFG_SW_MAJOR_VERSION_C != UART_CFG_SW_MAJOR_VERSION) || \
    (UART_PBCFG_SW_MINOR_VERSION_C != UART_CFG_SW_MINOR_VERSION) || \
    (UART_PBCFG_SW_PATCH_VERSION_C != UART_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of CDD_Uart_PBcfg.c and CDD_Uart_Cfg.h are different"
#endif

/*==================================================================================================
                                    GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define UART_ECUCPARTITION_0_CORE_ID     ((uint32)0U)

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define UART_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Uart_MemMap.h"

UART_DATA_SECTION extern Uart_StateStructureType Uart_StateStructure[UART_NUMBER_OF_INSTANCES];

UART_DATA_SECTION uint8 g_UartBufferIntelnal_0[UART_INTERNAL_BUFFER_SIZE_0] __attribute__ ((aligned (64)));
UART_DATA_SECTION uint8 g_UartBufferToUser_0[UART_TO_USER_BUFFER_SIZE_0] __attribute__ ((aligned (64)));
UART_DATA_SECTION uint16 g_u16UartAsyPosition_0;


#define UART_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Uart_MemMap.h"

#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"


/**
* @brief          Hardware configuration for Uart Hardware - Configuration:
*
* @api
*/
UART_DATA_SECTION const Uart_UserConfigType Uart_UserCfg_PB_0=
{
    /*!< Baud rate in hertz */
    115384U,
    /* Baud clock divisor*/
    4U,
    /* Over sampling ratio*/
    26U,
    /* Parity type */
    UART_DISABLED_PARITY,
    /* Number of stop bits, 1 stop bit (default) or 2 stop bits */
    UART_ONE_STOP_BIT,
    /* Number of bits per transmitted/received word */
    UART_8_BITS_PER_CHAR,
    /* Type of UART transfer (interrupt/dma based) */
    UART_USING_INTERRUPTS,
#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
    /* Uart idle number */
    UART_IDLE_CHARACTER_1,
#endif /* UART_ENABLE_TIMEOUT_INTERRUPT */
    /* Callback to invoke for Uart event.*/
    (Uart_CallbackType)Uart_Callback,
#if (UART_HAS_DMA_ENABLED == STD_ON)
    DMA_INSTANCE_0,
    255,
    DMA_INSTANCE_0,
    255,
#endif
    /* Runtime state structure refference */
    &Uart_StateStructure[0],
    g_UartBufferIntelnal_0,
    g_UartBufferToUser_0,
    &g_u16UartAsyPosition_0,
    64U,
    32U,
    UART_RXFiFo_Disable

    
};
#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"


/**
* @brief    Hardware configuration for Uart Hardware - Configuration.
*/

UART_DATA_SECTION const Uart_HwConfigType Uart_HwConfigPB_0=
{
    /* Uart Hardware Channel.*/
    1U,
    /* Pointer to the Ip configuration structure.*/
    &Uart_UserCfg_PB_0
};

/**
* @brief          Configuration for Uart Channel 0
*
*
*/
UART_DATA_SECTION const Uart_ChannelConfigType Uart_ChannelConfig_0=
{
    0, /*Uart Channel Id*/
#if (UART_MULTICORE_SUPPORT == STD_ON)
    UART_ECUCPARTITION_0_CORE_ID, /*Uart Channel Core Id*/
#endif
    12000000U, /* Clock frequency */
    &Uart_HwConfigPB_0/* Uart Hardware config */
};


/**
* @brief          Uart Configuration data for EcucPartition_0
*
*
*/
UART_DATA_SECTION const Uart_ConfigType Uart_Config_EcucPartition_0 =
{

#if (UART_MULTICORE_SUPPORT == STD_ON)
    UART_ECUCPARTITION_0_CORE_ID,
#endif
    {
        &Uart_ChannelConfig_0
    }
};




#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}

/** @} */

#endif
