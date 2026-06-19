
/*==================================================================================================
*   PERIPHERAL           : CRC
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/


/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 1534 EOF 
   1534:The macro '%1s' is declared but not used within this project.
   REASON: These macros are CRC registers definition, they are reserved for future usage.
*/

#ifndef CRC_CFG_H
#define CRC_CFG_H

/**
* @{
* @file           Crc_Cfg.h
*/
#define CRC_CFG_VENDOR_ID                         174
#define CRC_CFG_MODULE_ID                         201
#define CRC_CFG_AR_RELEASE_MAJOR_VERSION          4
#define CRC_CFG_AR_RELEASE_MINOR_VERSION          6
#define CRC_CFG_AR_RELEASE_REVISION_VERSION       0
#define CRC_CFG_SW_MAJOR_VERSION                  1
#define CRC_CFG_SW_MINOR_VERSION                  5
#define CRC_CFG_SW_PATCH_VERSION                  1
/**@}*/
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/*! @brief  Autosar Library. */
#define CRC_CALCULATECHANNEL    (STD_ON)

#define CRC_CRC8_USED          (STD_ON)
#define CRC_CRC8H2F_USED       (STD_ON)
#define CRC_CRC16_USED         (STD_ON)
#define CRC_CRC16ARC_USED      (STD_ON)
#define CRC_CRC32_USED         (STD_ON)
#define CRC_CRC32P4_USED       (STD_ON)
#define CRC_CRC64_USED         (STD_ON)


/*! @brief  Error detect. */
#define CRC_DEV_ERROR_DETECT                              (STD_ON)

/*! @brief  Enables or disables Multicore feature. */
#define CRC_MULTICORE_SUPPORT                             (STD_ON)

/*! @brief  Crc8 HW caculation feature. */
#define CRC_CRC8_HW_SUPPORT                               (STD_ON)

/*! @brief  Enables or disables get Version Info. */
#define CRC_GET_VERSION_INFO_API                          (STD_ON)

/**
 * @brief        Enables or disables the spinlock feature
 */
#define CRC_SPIN_LOCK_USED                  (STD_ON)

/**
 * @brief        This is a timeout value which is used to wait till spinlock is acquired
 */
#define CRC_SPIN_LOCK_TIMEOUT               (0x000186a0UL)


/*! @brief  Hardware instance. */


#define CRC_HW_INSTANCE_0                                 ((uint8)0U)


#define CRC_HW_INSTANCE_1                                 ((uint8)1U)


/*! @brief  Number of instance support. */
#ifndef CRC_INSTANCE_COUNT_U8
#define CRC_INSTANCE_COUNT_U8                          ((uint8)2U)
#endif

/*! @brief  Calculation type. */

                            
#define CRC_8BIT_SAE_J1850    CRC_HARDWARE_CALCULATION
#define CRC_8BIT_H2F          CRC_HARDWARE_CALCULATION
#define CRC_16BIT_CCITT_FALSE CRC_HARDWARE_CALCULATION
#define CRC_16BIT_ARC         CRC_HARDWARE_CALCULATION
#define CRC_32BIT_ETHERNET    CRC_HARDWARE_CALCULATION
#define CRC_32BIT_E2E_P4      CRC_HARDWARE_CALCULATION
#define CRC_64BIT_ECMA        CRC_RUNTIME_CALCULATION

#define CHANNEL_CRC_8BIT_SAE_J1850_LOOKUP_USED      (STD_ON)
#define CHANNEL_CRC_8BIT_H2F_LOOKUP_USED            (STD_ON)
#define CHANNEL_CRC_16BIT_CCITT_FALSE_LOOKUP_USED   (STD_ON)
#define CHANNEL_CRC_16BIT_ARC_LOOKUP_USED           (STD_ON)
#define CHANNEL_CRC_32BIT_ETHERNET_LOOKUP_USED      (STD_ON)
#define CHANNEL_CRC_32BIT_E2E_P4_LOOKUP_USED        (STD_ON)
#define CHANNEL_CRC_64BIT_ECMA_LOOKUP_USED          (STD_ON)

/*! @brief  Partition maps. */


                                                                                                                                                
                                                                                                                                                    
                                                                                                                                                    
                                                                                                                                                    
                                                                                                                                                    
                                                                                                                                                    
    
#define Crc8InstanceCoreID     0
#define Crc8H2FInstanceCoreID  0
#define Crc16InstanceCoreID    0
#define Crc16ARCInstanceCoreID 0
#define Crc32InstanceCoreID    0
#define Crc32P4InstanceCoreID  0


/*! @brief  Instance maps. */

                        
#define Crc8Instance     CRC_HW_INSTANCE_0
#define Crc8H2FInstance  CRC_HW_INSTANCE_0
#define Crc16Instance    CRC_HW_INSTANCE_0
#define Crc16ARCInstance CRC_HW_INSTANCE_0
#define Crc32Instance    CRC_HW_INSTANCE_0
#define Crc32P4Instance  CRC_HW_INSTANCE_0




/* Number Of Configured Logic Channel */
#define CRC_NUM_LOGIC_CHANNEL_MAX                   ((uint32)21U)

/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: There are some marcos generated by configuration tool which used by user, so, this macros
 * may not distinct */
/* Logic Channel Name */
#define CrcConf_CrcChannelConfig_CrcChannelConfig_0 ((uint32)0U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_1 ((uint32)1U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_2 ((uint32)2U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_3 ((uint32)3U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_4 ((uint32)4U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_5 ((uint32)5U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_6 ((uint32)6U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_7 ((uint32)7U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_8 ((uint32)8U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_9 ((uint32)9U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_10 ((uint32)10U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_11 ((uint32)11U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_12 ((uint32)12U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_13 ((uint32)13U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_14 ((uint32)14U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_15 ((uint32)15U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_16 ((uint32)16U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_17 ((uint32)17U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_18 ((uint32)18U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_19 ((uint32)19U)
#define CrcConf_CrcChannelConfig_CrcChannelConfig_20 ((uint32)20U)

/* PRQA S 0791 -- */
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


/** @} */

#endif /* CRC_CFG_H */
