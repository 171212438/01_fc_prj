/**
*   @file   CDD_SENT_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR SENT - Data structures for the SENT driver.
*   @details Precompile structure configuration for the driver initalization.
*
*   @addtogroup SENT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : SENT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       2023/11/01    Flagchip073   N/A          SENT Initial Version
*   0.2.0       2023/11/12    Flagchip073   N/A          SENT Multicore Version
*   0.3.0       2023/11/20    Flagchip073   N/A          Add more SENT comments
*   0.4.0       2023/11/23    Flagchip073   N/A          Add SCHM files for SENT
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_SENT_Cfg.h"
#include "CDD_Sent.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file             CDD_SENT_Cfg.c
* @requirements
*/
#define SENT_CFG_VENDOR_ID_C                     174
#define SENT_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define SENT_CFG_AR_RELEASE_MINOR_VERSION_C      6
#define SENT_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define SENT_CFG_SW_MAJOR_VERSION_C              1
#define SENT_CFG_SW_MINOR_VERSION_C              5
#define SENT_CFG_SW_PATCH_VERSION_C              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if config source file and SENT header file are of the same vendor */
#if (SENT_CFG_VENDOR_ID_C != SENT_VENDOR_ID)
#error "CDD_SENT_Cfg.c and CDD_SENT_Cfg.h have different vendor IDs"
#endif
/* Check if config source file and SENT header file are of the same Autosar version */
#if ((SENT_CFG_AR_RELEASE_MAJOR_VERSION_C != SENT_AR_RELEASE_MAJOR_VERSION) || \
     (SENT_CFG_AR_RELEASE_MINOR_VERSION_C != SENT_AR_RELEASE_MINOR_VERSION) || \
     (SENT_CFG_AR_RELEASE_REVISION_VERSION_C != SENT_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of CDD_SENT_Cfg.c and CDD_SENT.h are different"
#endif
/* Check if config source file and SENT header file are of the same Software version */
#if ((SENT_CFG_SW_MAJOR_VERSION_C != SENT_SW_MAJOR_VERSION) || \
     (SENT_CFG_SW_MINOR_VERSION_C != SENT_SW_MINOR_VERSION) || \
     (SENT_CFG_SW_PATCH_VERSION_C != SENT_SW_PATCH_VERSION))
#error "Software Version Numbers of CDD_SENT_Cfg.c and CDD_SENT.h are different"
#endif
/*==================================================================================================
                                       EXTRERN FUNCTIONS
==================================================================================================*/
#define SENT_START_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Sent_MemMap.h"
/* PRQA S 5087 -- */

/**
* @brief         Statement of Sent transfer complete ISR callout functions Configured.
*
**/



SENT_TEXT_SECTION extern void SentFastNotification_MLX90367LDC(Sent_FastMessageDataType *pMsg);

SENT_TEXT_SECTION extern void SentSlowNotification_MLX90367LDC(Sent_SlowMessageDataType *pMsg);



SENT_TEXT_SECTION extern void SentFastNotification_TLE4998C8D(Sent_FastMessageDataType *pMsg);

SENT_TEXT_SECTION extern void SentSlowNotification_TLE4998C8D(Sent_SlowMessageDataType *pMsg);



#define SENT_STOP_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Sent_MemMap.h"
/* PRQA S 5087 -- */
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                      LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
#define SENT_START_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Sent_MemMap.h"
/* PRQA S 5087 -- */
/**
* @brief         Definition of SENT Channels transfer attribute as Configured.
* @details       SENT Notification functions defined inside the Plugin.
*
**/
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: it has no effect */
/* PRQA S 3408, 1504 -- */

/**
* @brief         Definition of SENT attribute as Configured.
* @details       Definition of SENT attribute as Configured.
*
**/

SENT_DATA_SECTION const Sent_SpcConfigType SentSpcConfig_0_0 =
{
        (boolean)FALSE,    /* Enable spc mode. */
        (boolean)FALSE,    /* Enable Calibration diagnosis. */
        0U,    /* Configure the width of the SPC pulse. */
        0U,    /* Configure the delay between SPC-trigger assert and finally generate a SPC pulse. */
        SENT_SPC_TICK_BASE_CONFIGURED,    /* Select the tick base of SPC. */
        SENT_SPC_SOFTWARE_TRIGGER,    /* Select the SPC pulse trigger type. */
};

SENT_DATA_SECTION const Sent_ChannelConfigType SentChannelConfig_0_0 =
{
        0U,    /* Logic Sent Channel ID */
        2U,    /* Hardware Sent Channel ID */
        5U,    /* Data Nibble Number */
        4U,    /* Digital Filter Count */
        220U,    /* Digital Filter Count */
        (boolean)FALSE,    /* Enable Sent Controller hardware FiFo  */
        (boolean)TRUE,    /* Enable tick period compensate   */
        (boolean)FALSE,    /* Use alternative 4-bit CRC algorithm  */
        (boolean)TRUE,    /* Enable Fast Message CRC check   */
        (boolean)TRUE,    /* Add augmentation into the Fast Message CRC calculation */
        (boolean)FALSE,    /* If enabled, the SENT will only assert the fast message ready flag when received data has changed compared with previous data */
        (boolean)FALSE,    /* Include SC nibble for Fast Message CRC calculation */
        (boolean)TRUE,    /* Add augmentation into the Slow Message CRC calculation */
        (boolean)TRUE,    /* Append Pause Pulse at end of frame */
        (boolean)FALSE,    /* Enable Slow Message DMA  */
        (boolean)FALSE,    /* Enable Fast Message DMA  */
        (boolean)TRUE,    /* Read Fast message With Interrupt Type. */
        (boolean)TRUE,    /* Read Slow message With Interrupt Type. */
        (boolean)TRUE,    /* Enable Sent Channel.  */
        SENT_CALIBRATION_PULSE_DIAG_OPTION1,    /* Channel Tick Scaler */
        SENT_DATA_NIBBLE_MODE_A,    /* nibble data mode */
        SENT_CALIBRATION_VALID_WITHIN_20,    /* valid Calibration pulse range */
        SENT_IDLE_COUNT_FLAG_DISABLE,    /* Idle time interval */
        NULL_PTR,    /* Fast Error Notification. */
        NULL_PTR,    /* Slow Error Notification. */
        &SentFastNotification_MLX90367LDC,    /* Sent Fast Notification. */
        &SentSlowNotification_MLX90367LDC,    /* Sent Slow Notification. */
        (Sent_SpcConfigType*)&SentSpcConfig_0_0    /* Sent SPC mode configuration. */
};

SENT_DATA_SECTION const Sent_ChannelConfigType* const aChannelConfig_0[1] = {&SentChannelConfig_0_0};

SENT_DATA_SECTION const Sent_InstanceConfigType SentInstanceConfig_0 =
{
        0U,    /* Logic Sent Instance ID */
        0U,    /* Hardware Sent Instance ID */
        (boolean)TRUE,    /* Sent Controller Activation  */
        (boolean)FALSE,    /* Fast message FIFO overflow interrupt enable */
        (boolean)FALSE,    /* Sent Debug Mode Enable */
        (boolean)TRUE,    /* Auto Clear Ready Flag */
        0U,    /*sent DMA watermark */
        0U,    /* Time Stamp Prescaller  */
        1U,    /* The number of the configured channel */
        (Sent_ChannelConfigType**)aChannelConfig_0,    /* The array of channel configuration */
};

SENT_DATA_SECTION const Sent_SpcConfigType SentSpcConfig_1_0 =
{
        (boolean)TRUE,    /* Enable spc mode. */
        (boolean)TRUE,    /* Enable Calibration diagnosis. */
        1U,    /* Configure the width of the SPC pulse. */
        62U,    /* Configure the delay between SPC-trigger assert and finally generate a SPC pulse. */
        SENT_SPC_TICK_BASE_CONFIGURED,    /* Select the tick base of SPC. */
        SENT_SPC_SOFTWARE_TRIGGER,    /* Select the SPC pulse trigger type. */
};

SENT_DATA_SECTION const Sent_ChannelConfigType SentChannelConfig_1_0 =
{
        1U,    /* Logic Sent Channel ID */
        2U,    /* Hardware Sent Channel ID */
        5U,    /* Data Nibble Number */
        4U,    /* Digital Filter Count */
        220U,    /* Digital Filter Count */
        (boolean)FALSE,    /* Enable Sent Controller hardware FiFo  */
        (boolean)TRUE,    /* Enable tick period compensate   */
        (boolean)TRUE,    /* Use alternative 4-bit CRC algorithm  */
        (boolean)TRUE,    /* Enable Fast Message CRC check   */
        (boolean)TRUE,    /* Add augmentation into the Fast Message CRC calculation */
        (boolean)FALSE,    /* If enabled, the SENT will only assert the fast message ready flag when received data has changed compared with previous data */
        (boolean)TRUE,    /* Include SC nibble for Fast Message CRC calculation */
        (boolean)TRUE,    /* Add augmentation into the Slow Message CRC calculation */
        (boolean)FALSE,    /* Append Pause Pulse at end of frame */
        (boolean)FALSE,    /* Enable Slow Message DMA  */
        (boolean)FALSE,    /* Enable Fast Message DMA  */
        (boolean)FALSE,    /* Read Fast message With Interrupt Type. */
        (boolean)FALSE,    /* Read Slow message With Interrupt Type. */
        (boolean)TRUE,    /* Enable Sent Channel.  */
        SENT_CALIBRATION_PULSE_DIAG_OPTION2,    /* Channel Tick Scaler */
        SENT_DATA_NIBBLE_MODE_A,    /* nibble data mode */
        SENT_CALIBRATION_VALID_DISABLE,    /* valid Calibration pulse range */
        SENT_IDLE_COUNT_FLAG_DISABLE,    /* Idle time interval */
        NULL_PTR,    /* Fast Error Notification. */
        NULL_PTR,    /* Slow Error Notification. */
        &SentFastNotification_TLE4998C8D,    /* Sent Fast Notification. */
        &SentSlowNotification_TLE4998C8D,    /* Sent Slow Notification. */
        (Sent_SpcConfigType*)&SentSpcConfig_1_0    /* Sent SPC mode configuration. */
};

SENT_DATA_SECTION const Sent_ChannelConfigType* const aChannelConfig_1[1] = {&SentChannelConfig_1_0};

SENT_DATA_SECTION const Sent_InstanceConfigType SentInstanceConfig_1 =
{
        1U,    /* Logic Sent Instance ID */
        1U,    /* Hardware Sent Instance ID */
        (boolean)TRUE,    /* Sent Controller Activation  */
        (boolean)FALSE,    /* Fast message FIFO overflow interrupt enable */
        (boolean)FALSE,    /* Sent Debug Mode Enable */
        (boolean)TRUE,    /* Auto Clear Ready Flag */
        0U,    /*sent DMA watermark */
        0U,    /* Time Stamp Prescaller  */
        1U,    /* The number of the configured channel */
        (Sent_ChannelConfigType**)aChannelConfig_1,    /* The array of channel configuration */
};

SENT_DATA_SECTION const Sent_InstanceConfigType* const aInstanceConfig[2] = {&SentInstanceConfig_0, &SentInstanceConfig_1};
/*==================================================================================================*/


/*==================================================================================================*/
/**
* @brief       Sent Driver Cores mapping (indexed by partition number)
* @details     List of all Cores defined in EcuC, with Sent driver association info
*/
SENT_DATA_SECTION const boolean SentCoresMapping[SENT_ECUC_CORES_NUM] =
{

    TRUE, /* The driver is mapped in the partition EcucCoreDefinition_0 */

    FALSE, /* The driver is not mapped in the partition EcucCoreDefinition_1 */

    FALSE, /* The driver is not mapped in the partition EcucCoreDefinition_2 */

    FALSE /* The driver is not mapped in the partition EcucCoreDefinition_3 */
};

/*==================================================================================================*/
/**
* @brief       Sent Controller Core mapping (indexed by controller number)
* @details     List of all configured controllers, with partition association
*/

SENT_DATA_SECTION const uint32 SentCtrlCoresMapping[SENT_CTRL_CONFIGURED] =
{
        
        0U,
        
        0U
        

};



SENT_DATA_SECTION const Sent_ConfigType SentConfig =
{
        
        2U,    /* The number of the configured instance */
        (Sent_InstanceConfigType**)aInstanceConfig,    /* The array of instance configuration */
        /* Driver partition mapping Ptr */
        (boolean*)SentCoresMapping,
        (uint32*)SentCtrlCoresMapping

};



#define SENT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Sent_MemMap.h"
/* PRQA S 5087 -- */
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

