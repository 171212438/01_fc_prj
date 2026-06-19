/**
*   @file    CDD_I2c_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR I2c - High level header of I2c driver.
*   @details This file contains declarations of the functions defined by AutoSAR.
*
*   @addtogroup I2c
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.6 MCAL
*   Platform             : ARM
*   Dependencies         : none
*
*   Autosar Version      : 4.6.0
*   Autosar Revision     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2021    qxw0100       N/A          I2c Initial Version
*   0.2.0       27/09/2023    qxw0100       N/A          Add multicore support
*   0.3.0       09/10/2023    qxw0100       N/A          Fix notification channel bug
*   0.4.0       17/11/2023    qxw0100       N/A          Fix error status bug
*   0.5.0       17/01/2024    qxw0100       N/A          Fix status bug
*   0.6.0       18/01/2024    qxw0100       N/A          Add channel fault clear function
                                                         Add NACK signal for user choice
==================================================================================================*/
#ifndef I2C_CFG_H
#define I2C_CFG_H

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
#include "CDD_I2c_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define I2C_CFG_VENDOR_ID                       174
#define I2C_CFG_AR_RELEASE_MAJOR_VERSION        4
#define I2C_CFG_AR_RELEASE_MINOR_VERSION        6
#define I2C_CFG_AR_RELEASE_REVISION_VERSION     0
#define I2C_CFG_SW_MAJOR_VERSION                1
#define I2C_CFG_SW_MINOR_VERSION                5
#define I2C_CFG_SW_PATCH_VERSION                1


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
* @brief          Precompile Support On.
* @details        VARIANT-PRE-COMPILE: Only parameters with "Pre-compile time"
*                 configuration are allowed in this variant.
*
* @api
*/
#define I2C_PRECOMPILE_SUPPORT          (STD_OFF)

/**
* @brief          Number of channels config.
*
*/
#define I2C_MAX_MODULES                 2U

/**
* @brief          Number of MCU Core Max
*
*/
#define I2C_MAX_CORE_ID                 4U

/**
* @brief   Number of loops before returning I2C_E_TIMEOUT.
*
* @api
*/
#define  I2C_TIMEOUT_LOOPS              1000U

/**
* @brief            DMA is used for at least one channel (STD_ON/STD_OFF)
*/
#define I2C_DMA_USED                    (STD_ON)

/**
* @brief   Switches the I2c_GetVersionInfo() API ON or OFF.
*
*/
#define I2C_VERSION_INFO_API            (STD_ON)  /* Enable I2c_GetVersionInfo() API */

/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*
*/
#define I2C_DEV_ERROR_DETECT            (STD_ON)  /* Enable Development Error Detection */

/**
* @brief          FCI2C Hw Module used define
*
*/
#define I2C_MULTICORE_SUPPORT           (STD_ON)  /* Enable Multicore Support */


/**
* @brief          FCI2C Hw Module used define
*
*/

#define FCI2C_1

/**
* @brief          Symbolic names for configured channels.
* @details        Symbolic names for configured channels.
*
* @api
*/
#define I2cConf_I2cChannel_I2cChannel_0 0


/**
* @brief            The call out configured by the user for error notifications.
*/
#define I2C_ERROR_NOTIFICATION(u8Channel, u8ErrorCode) (I2c_ErrorNotification(u8Channel, u8ErrorCode))



/**
* @brief            The call out configured by the user for master transmission completion.
*/
#define I2C_MASTER_TRANSMIT_COMPLETE_NOTIFICATION(u8Channel, u16NumberOfBytes) (I2c_MasterTransmitCompleteNotification(u8Channel, u16NumberOfBytes))



/**
* @brief            The call out configured by the user for master reception completion.
*/
#define I2C_MASTER_RECEIVE_COMPLETE_NOTIFICATION(u8Channel, u16NumberOfBytes) (I2c_MasterReceiveCompleteNotification(u8Channel, u16NumberOfBytes))



/**
* @brief            The call out configured by the user for address matching notifications.
*/
#define I2C_SLAVE_ADDR_MATCH_NOTIFICATION(u8Channel, eDirection) (I2c_SlaveAddressMatchNotification(u8Channel, eDirection))



/**
* @brief            The call out configured by the user for slave transmission completion.
*/
#define I2C_SLAVE_TRANSMIT_COMPLETE_NOTIFICATION(u8Channel, u16NumberOfBytes) (I2c_SlaveTransmitCompleteNotification(u8Channel, u16NumberOfBytes))



/**
* @brief            The call out configured by the user for slave reception completion.
*/
#define I2C_SLAVE_RECEIVE_COMPLETE_NOTIFICATION(u8Channel, u16NumberOfBytes) (I2c_SlaveReceiveCompleteNotification(u8Channel, u16NumberOfBytes))



/**
* @brief            The call out configured by the user for slave byte reception.
*/
#define I2C_SLAVE_BYTE_RECEIVE_NOTIFICATION(u8IicIndex) (I2c_SlaveByteReceiveNotification(u8IicIndex))



/**
* @brief            The call out configured by the user for slave subAddress read.
*/
#define I2C_SLAVE_SUBADDRESS_READ_NOTIFICATION(u8Channel, pBufferAddress, pBufferSize, u32SubAddress) (I2c_SlaveSubAddressReadNotification(u8Channel, pBufferAddress, pBufferSize, u32SubAddress))



/**
* @brief            The call out configured by the user for slave subAddress write.
*/
#define I2C_SLAVE_SUBADDRESS_WRITE_NOTIFICATION(u8Channel, pBufferAddress, pBufferSize, u32SubAddress) (I2c_SlaveSubAddressWriteNotification(u8Channel, pBufferAddress, pBufferSize, u32SubAddress))



/**
* @brief            Pre-Compile structure from CDD_I2c_Cfg.c file.
*/
extern const I2c_ConfigType I2c_Config;


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Definition of the type of activation or procession mechanism of an I2c hw unit
 * @implements     I2c_DataDirectionType_enumeration
 *
 */
typedef enum
{
    I2C_SEND_DATA       = 0x0U, /**< @brief Used to send data to master */
    I2C_RECEIVE_DATA    = 0x1U  /**< @brief Used to receive data from master */
} I2c_DataDirectionType;


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations 
 * Reason: This type may not used by user */
/**
* @brief            DEM error reporting configuration.
* @details          This structure contains information DEM error reporting
*/
typedef struct
{
    VAR( Mcal_DemErrorType, I2C_VAR) I2c_E_TimeoutFailureCfg;

} I2c_DemConfigType;
/* PRQA S 1535 -- */
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/* [SWS_CDD_I2C_00099] */

/**
* @brief            The call out configured by the user for error notifications. [SWS_CDD_I2C_00100]
*/
extern void I2C_ERROR_NOTIFICATION(uint8 u8Channel, uint8 u8ErrorCode);



/**
* @brief            The call out configured by the user for master transmission completion. [SWS_CDD_I2C_00101]
*/
extern void I2C_MASTER_TRANSMIT_COMPLETE_NOTIFICATION(uint8 u8Channel, uint16 u16NumberOfBytes);



/**
* @brief            The call out configured by the user for master reception completion. [SWS_CDD_I2C_00102]
*/
extern void I2C_MASTER_RECEIVE_COMPLETE_NOTIFICATION(uint8 u8Channel, uint16 u16NumberOfBytes);



/**
* @brief            The call out configured by the user for address matching notifications. [SWS_CDD_I2C_00103]
*/
extern void I2C_SLAVE_ADDR_MATCH_NOTIFICATION(uint8 u8Channel, I2c_DataDirectionType eDirection);



/**
* @brief            The call out configured by the user for slave transmission completion. [SWS_CDD_I2C_00104]
*/
extern void I2C_SLAVE_TRANSMIT_COMPLETE_NOTIFICATION(uint8 u8Channel, uint16 u16NumberOfBytes);



/**
* @brief            The call out configured by the user for slave reception completion. [SWS_CDD_I2C_00105]
*/
extern void I2C_SLAVE_RECEIVE_COMPLETE_NOTIFICATION(uint8 u8Channel, uint16 u16NumberOfBytes);



/**
* @brief            The call out configured by the user for slave byte reception. [SWS_CDD_I2C_00106]
*/
extern void I2C_SLAVE_BYTE_RECEIVE_NOTIFICATION(uint8 u8IicIndex);



/**
* @brief            The call out configured by the user for slave subAddress read.
*/
extern void I2C_SLAVE_SUBADDRESS_READ_NOTIFICATION(uint8 u8Channel, uint8 **pBufferAddress, uint16 *pBufferSize, uint32 u32SubAddress);



/**
* @brief            The call out configured by the user for slave subAddress write.
*/
extern void I2C_SLAVE_SUBADDRESS_WRITE_NOTIFICATION(uint8 u8Channel, uint8 **pBufferAddress, uint16 *pBufferSize, uint32 u32SubAddress);


#ifdef __cplusplus
}
#endif

#endif /* I2C_CFG_H */

/** @} */
