/**
*   @file   CDD_QDT_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR QDT - Data structures for the QDT driver.
*   @details Precompile structure configuration for the driver initalization.
*
*   @addtogroup QDT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : QDT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2025 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       2025/03/10   Flagchip073   N/A          QDT Initial Version
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
#include "CDD_QDT_Cfg.h"
#include "CDD_Qdt.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file             CDD_QDT_Cfg.c
* @requirements
*/
#define QDT_CFG_VENDOR_ID_C                     174
#define QDT_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define QDT_CFG_AR_RELEASE_MINOR_VERSION_C      6
#define QDT_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define QDT_CFG_SW_MAJOR_VERSION_C              1
#define QDT_CFG_SW_MINOR_VERSION_C              5
#define QDT_CFG_SW_PATCH_VERSION_C              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if config source file and QDT header file are of the same vendor */
#if (QDT_CFG_VENDOR_ID_C != QDT_VENDOR_ID)
#error "CDD_QDT_Cfg.c and CDD_QDT_Cfg.h have different vendor IDs"
#endif
/* Check if config source file and QDT header file are of the same Autosar version */
#if ((QDT_CFG_AR_RELEASE_MAJOR_VERSION_C != QDT_AR_RELEASE_MAJOR_VERSION) || \
     (QDT_CFG_AR_RELEASE_MINOR_VERSION_C != QDT_AR_RELEASE_MINOR_VERSION) || \
     (QDT_CFG_AR_RELEASE_REVISION_VERSION_C != QDT_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of CDD_QDT_Cfg.c and CDD_QDT.h are different"
#endif
/* Check if config source file and QDT header file are of the same Software version */
#if ((QDT_CFG_SW_MAJOR_VERSION_C != QDT_SW_MAJOR_VERSION) || \
     (QDT_CFG_SW_MINOR_VERSION_C != QDT_SW_MINOR_VERSION) || \
     (QDT_CFG_SW_PATCH_VERSION_C != QDT_SW_PATCH_VERSION))
#error "Software Version Numbers of CDD_QDT_Cfg.c and CDD_QDT.h are different"
#endif
/*==================================================================================================
                                       EXTRERN FUNCTIONS
==================================================================================================*/
#define QDT_START_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Qdt_MemMap.h"
/* PRQA S 5087 -- */

/**
* @brief         Statement of Qdt transfer complete ISR callout functions Configured.
*
**/



#define QDT_STOP_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Qdt_MemMap.h"
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
#define QDT_START_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Qdt_MemMap.h"
/* PRQA S 5087 -- */
/**
* @brief         Definition of QDT Channels transfer attribute as Configured.
* @details       QDT Notification functions defined inside the Plugin.
*
**/
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: it has no effect */
/* PRQA S 3408, 1504 -- */

/**
* @brief         Definition of QDT attribute as Configured.
* @details       Definition of QDT attribute as Configured.
*
**/


/* QUAD mode configuration. */
QDT_DATA_SECTION const QDT_QUAD_ConfigType QDTChannelModeConfig_0_0 =
{
    (boolean)TRUE,     /* Select PHA or PHB normal porlarity in QUAD mode. */
    0U,    /*  CV is used to match event. Compare with the source selected by MatchType. */
    QDT_CHANNEL_MATCH_DISABLE,    /* Select the match type for CV. */
};

QDT_DATA_SECTION const QDT_ChannelConfigType QDTChannelConfig_0_0 =
{
    0U,    /* Logic Qdt Channel ID */
    0U,    /* Hardware Qdt Channel ID */
    0U,    /* Channel input filter. 0 means disable the filter. */
    QDT_CHANNEL_QUAD_MODE,    /* Channel operation mode. */
    (boolean)FALSE,    /* Enable the channel interrupt.  */
    NULL_PTR,    /* Channel interrupt Notification. */
    {(void*)&QDTChannelModeConfig_0_0},
};

/* QUAD mode configuration. */
QDT_DATA_SECTION const QDT_QUAD_ConfigType QDTChannelModeConfig_0_1 =
{
    (boolean)TRUE,     /* Select PHA or PHB normal porlarity in QUAD mode. */
    0U,    /*  CV is used to match event. Compare with the source selected by MatchType. */
    QDT_CHANNEL_MATCH_DISABLE,    /* Select the match type for CV. */
};

QDT_DATA_SECTION const QDT_ChannelConfigType QDTChannelConfig_0_1 =
{
    1U,    /* Logic Qdt Channel ID */
    1U,    /* Hardware Qdt Channel ID */
    0U,    /* Channel input filter. 0 means disable the filter. */
    QDT_CHANNEL_QUAD_MODE,    /* Channel operation mode. */
    (boolean)FALSE,    /* Enable the channel interrupt.  */
    NULL_PTR,    /* Channel interrupt Notification. */
    {(void*)&QDTChannelModeConfig_0_1},
};

QDT_DATA_SECTION const QDT_ChannelConfigType* const aQdtChannelConfig_0[2] = {&QDTChannelConfig_0_0, &QDTChannelConfig_0_1};
QDT_DATA_SECTION const QDT_WdogConfigType QdtWdogConfig_0 =
{
    (boolean)FALSE,    /* Enable/Disable the watchdog feature. */      
    (boolean)FALSE,    /* Enable/Disable the wdog interrupt.  */  
    65535U,    /* watchdog timeout value. */
    NULL_PTR,    /* wdog interrupt Notification. */
};

QDT_DATA_SECTION const QDT_SyncModeConfigType QdtSyncModeConfig_0 =
{
    (boolean)FALSE,    /* True: Sync CV register with trigger mode. */      
    (boolean)FALSE,    /* True: Allow SW event to reset POSCNT, REVCNT and POSDCNT.  FALSE: SW event will only reset the POSCNT.  */  
    (boolean)FALSE,    /* Enables hardware trigger 0 to the synchronization and reset. */      
    (boolean)FALSE,    /* True: Allow HW event to reset POSCNT, REVCNT and POSDCNT. FALSE: HW event will not reset any Counter.  */  
    (boolean)FALSE,    /* Allow the hardware trigger to cause an update of the POSCNTH, REVCNTH and POSDCNTH registers. */      
};

QDT_DATA_SECTION const QDT_InstanceConfigType QdtInstanceConfig_0 =
{
    0U,    /* Logic Qdt Instance ID */
    0U,    /* Hardware Qdt Instance ID */
    150000000,    /* The frequency of Bus clock. */
    65535,    /* The max lecnt value. */
    400,    /* Line number of encoder. */
    (boolean)TRUE,     /* true: Phase A and phase B encoding mode. false: Count and direction encoding mode. */
    (boolean)TRUE,    /* QUAD Mode Enable/Disable. */
    (boolean)TRUE,    /* Debug Mode Enable/Disable. */
    (boolean)FALSE,    /* QDT Match Pulse. */    
    QDT_CLOCK_INTERNAL_PCCCLK,     /* Qdt clock source  */
    QDT_COUNTER_PRESCALE_DIV_1,    /* Select the prescale of QDT counter clock frequency. */
    0U,    /* Setting the prescale of QDT filter. */
    (boolean)FALSE,    /* Enable the channel interrupt.  */
    NULL_PTR,    /* TOF interrupt Notification. */
    &QdtWdogConfig_0,
    &QdtSyncModeConfig_0,
    2U,    /* The number of the configured channel */
    (QDT_ChannelConfigType**)aQdtChannelConfig_0,    /* The array of channel configuration */
};

QDT_DATA_SECTION const QDT_InstanceConfigType* const aQdtInstanceConfig[1] = {&QdtInstanceConfig_0};
/*==================================================================================================*/



QDT_DATA_SECTION const QDT_ConfigType QdtConfig =
{
        
        1U,    /* The number of the configured instance */
        (QDT_InstanceConfigType**)aQdtInstanceConfig,    /* The array of instance configuration */
        /* The driver is mapped in all partitions by default (no partition defined at EcuC level) */
        NULL_PTR,
        NULL_PTR

};



#define QDT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h */
#include "Qdt_MemMap.h"
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

