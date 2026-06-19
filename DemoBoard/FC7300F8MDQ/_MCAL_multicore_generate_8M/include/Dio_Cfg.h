/**
*   @file    Dio_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Dio - Module configuration interface for Adc driver.
*   @details Contains the module configuration interface for Dio driver.
*
*   @addtogroup DIO
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DIO
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
*   0.1.0       14/07/2023    QXW0071       N/A          DIO Initial Version
*   0.2.0       27/09/2023    QXW0105       N/A          DIO Support Multi-Core
*   0.3.0       20/10/2023    QXW0105       N/A          N/A
*   0.4.0       20/11/2023    QXW0105       N/A          optimize code
==================================================================================================*/

#ifndef DIO_CFG_H
#define DIO_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Gpio_Reg.h"
#include "Dio_Hw_Types.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define DIO_CFG_AR_RELEASE_MAJOR_VERSION        4U
#define DIO_CFG_AR_RELEASE_MINOR_VERSION        6U
#define DIO_CFG_AR_RELEASE_REVISION_VERSION     0U
#define DIO_CFG_SW_MAJOR_VERSION                1U
#define DIO_CFG_SW_MINOR_VERSION                5U
#define DIO_CFG_SW_PATCH_VERSION                1U
#define DIO_CFG_VENDOR_ID                       174U




/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/**
* @brief          Enable or Disable Development Error Detection.
*
* @implements     DIO_DEV_ERROR_DETECT_define
* @api
*/
#define DIO_DEV_ERROR_DETECT    (STD_OFF)

/**
* @brief          Function @p Dio_GetVersionInfo() enable switch.
*
* @implements     DIO_VERSION_INFO_API_define
* @api
*/
#define DIO_VERSION_INFO_API    (STD_ON)

/**
* @brief          Function @p Dio_FlipChannel() enable switch.
*
* @api
*/
#define DIO_FLIP_CHANNEL_API    (STD_ON)

/**
* @brief          Function @p Dio_MaskedWritePort () enable switch.
*
* @api
*/
#define DIO_MASKED_WRITE_PORT_API    (STD_ON)

/**
* @brief          Number of implemented ports.
*
* @note           Used for channel, port and channel group validation.
*
* @api
*/
#define DIO_NUM_PORTS_U16               ((uint16)9)

/**
* @brief          Number channel in a port.
*
* @note           Used for channel, port and channel group validation.
*
* @api
*/
#define DIO_NUM_CHANNELS_PER_PORT_U16   ((uint16)32)

/**
* @brief          Number of channels available on the implemented ports.
*
* @note           Used for channel validation.
*
* @api
*/
#define DIO_NUM_CHANNELS_U16            ((uint16)(DIO_NUM_PORTS_U16 * DIO_NUM_CHANNELS_PER_PORT_U16))

/**
* @brief          Mask representing the maximum valid offset for a channel group.
*
* @note           Used for channel group validation.
*
* @api
*/
#define DIO_MAX_VALID_OFFSET_U8           ((uint8)0x1F)

/**
* @brief          Dio driver Pre-Compile configuration switch.
*
* @api
*/
#define DIO_PRECOMPILE_SUPPORT


/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

#define DIO_SUPPORT_MULTICORE     (STD_OFF)



/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct 
 * Reason: These macros have the same first 30 characters,but they are differrent in follow characters.Modern compiler will recognize the difference. */
#define MAX_CONFIGURED_DIO_CHANNEL_GROUPS  ((uint8)0) 

#define DioConf_DioChannel_CoreConfigInfo_NUM  (7u) 

/**
* @brief          Symbolic name for the configuration s_DioConfigChannels.
*
*/
#define s_DioConfigChannels    (Dio_Config)
/* ========== DioConfig ========== */


    /* ---------- PTA ---------- */
/**
* @brief          Symbolic name for the port PTA.
*
*/
#define DioConf_DioPort_PTA  ((uint8)0x00U)

/**
* @brief          Symbolic name for the channel LED1.
*
*/
#define  DioConf_DioChannel_LED1 ((uint16)0x001aU)




    /* ---------- PTB ---------- */
/**
* @brief          Symbolic name for the port PTB.
*
*/
#define DioConf_DioPort_PTB  ((uint8)0x01U)

/**
* @brief          Symbolic name for the channel DioChannel_B10.
*
*/
#define  DioConf_DioChannel_DioChannel_B10 ((uint16)0x002aU)

/**
* @brief          Symbolic name for the channel DioChannel_B12.
*
*/
#define  DioConf_DioChannel_DioChannel_B12 ((uint16)0x002cU)




    /* ---------- PTC ---------- */
/**
* @brief          Symbolic name for the port PTC.
*
*/
#define DioConf_DioPort_PTC  ((uint8)0x02U)

/**
* @brief          Symbolic name for the channel ETH_MDIOSEL.
*
*/
#define  DioConf_DioChannel_ETH_MDIOSEL ((uint16)0x004eU)




    /* ---------- PTD ---------- */
/**
* @brief          Symbolic name for the port PTD.
*
*/
#define DioConf_DioPort_PTD  ((uint8)0x03U)

/**
* @brief          Symbolic name for the channel LED2.
*
*/
#define  DioConf_DioChannel_LED2 ((uint16)0x007fU)




    /* ---------- PTE ---------- */
/**
* @brief          Symbolic name for the port PTE.
*
*/
#define DioConf_DioPort_PTE  ((uint8)0x04U)

/**
* @brief          Symbolic name for the channel ETH_PHYRESET.
*
*/
#define  DioConf_DioChannel_ETH_PHYRESET ((uint16)0x0088U)

/**
* @brief          Symbolic name for the channel LED3.
*
*/
#define  DioConf_DioChannel_LED3 ((uint16)0x0094U)




    /* ---------- PTF ---------- */
/**
* @brief          Symbolic name for the port PTF.
*
*/
#define DioConf_DioPort_PTF  ((uint8)0x05U)




    /* ---------- PTG ---------- */
/**
* @brief          Symbolic name for the port PTG.
*
*/
#define DioConf_DioPort_PTG  ((uint8)0x06U)




    /* ---------- PTH ---------- */
/**
* @brief          Symbolic name for the port PTH.
*
*/
#define DioConf_DioPort_PTH  ((uint8)0x07U)




    /* ---------- PTI ---------- */
/**
* @brief          Symbolic name for the port PTI.
*
*/
#define DioConf_DioPort_PTI  ((uint8)0x08U)




/**
* @brief        Define the Dio channel used.These macros will be used in Port_Common.c to aviod conflicts between different modules.
*
*/

#define DIO_PORT_A_26_USED

#define DIO_PORT_B_10_USED
#define DIO_PORT_B_12_USED

#define DIO_PORT_C_14_USED

#define DIO_PORT_D_31_USED

#define DIO_PORT_E_8_USED
#define DIO_PORT_E_20_USED





/* PRQA S 0791 -- */

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/


/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

#define DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dio_MemMap.h"

/**
* @brief Array of bitmaps of output pins available per port
*/
DIO_DATA_SECTION extern const Dio_PortLevelType Dio_u32ValidPortPins[DIO_NUM_PORTS_U16];

DIO_DATA_SECTION extern const Dio_CoreConfigInfoType Dio_CoreConfigInfo[DioConf_DioChannel_CoreConfigInfo_NUM];

#define DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Dio_MemMap.h"
/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* DIO_CFG_H */

/** @} */
