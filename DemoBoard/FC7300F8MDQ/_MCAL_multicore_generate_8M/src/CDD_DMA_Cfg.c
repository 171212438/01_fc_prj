/**
*   @file   CDD_DMA_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR DMA - Data structures for the DMA driver.
*   @details Precompile structure configuration for the driver initalization.
*
*   @addtogroup DMA
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DMA
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
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       07/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Second Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       10/11/2023    QXW0099       N/A          Update version
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
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
#include "CDD_DMA_Cfg.h"
#include "CDD_Dma.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file             CDD_DMA_Cfg.c
* @requirements
*/
#define DMA_CFG_VENDOR_ID_C                     174
#define DMA_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define DMA_CFG_AR_RELEASE_MINOR_VERSION_C      6
#define DMA_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define DMA_CFG_SW_MAJOR_VERSION_C              1
#define DMA_CFG_SW_MINOR_VERSION_C              5
#define DMA_CFG_SW_PATCH_VERSION_C              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if config source file and DMA header file are of the same vendor */
#if (DMA_CFG_VENDOR_ID_C != DMA_VENDOR_ID)
#error "CDD_DMA_Cfg.c and CDD_DMA_Cfg.h have different vendor IDs"
#endif
/* Check if config source file and DMA header file are of the same Autosar version */
#if ((DMA_CFG_AR_RELEASE_MAJOR_VERSION_C != DMA_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_CFG_AR_RELEASE_MINOR_VERSION_C != DMA_AR_RELEASE_MINOR_VERSION) || \
     (DMA_CFG_AR_RELEASE_REVISION_VERSION_C != DMA_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of CDD_DMA_Cfg.c and CDD_Dma.h are different"
#endif
/* Check if config source file and DMA header file are of the same Software version */
#if ((DMA_CFG_SW_MAJOR_VERSION_C != DMA_SW_MAJOR_VERSION) || \
     (DMA_CFG_SW_MINOR_VERSION_C != DMA_SW_MINOR_VERSION) || \
     (DMA_CFG_SW_PATCH_VERSION_C != DMA_SW_PATCH_VERSION))
#error "Software Version Numbers of CDD_DMA_Cfg.c and CDD_Dma.h are different"
#endif
/*==================================================================================================
                                       EXTRERN FUNCTIONS
==================================================================================================*/
#define DMA_START_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in MemMap.h */
#include "Dma_MemMap.h"
/* PRQA S 5087 -- */

/**
* @brief         Statement of Dma transfer complete ISR callout functions Configured.
*
**/

DMA_TEXT_SECTION extern void Cdd_HsAdcCapture_Dma2Callback(void);

DMA_TEXT_SECTION extern void Cdd_HsAdcCapture_Dma2ErrorCallback(void);

DMA_TEXT_SECTION extern void Cdd_HsAdcCapture_Dma3Callback(void);

DMA_TEXT_SECTION extern void Cdd_HsAdcCapture_Dma3ErrorCallback(void);



#define DMA_STOP_SEC_CODE
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in MemMap.h */
#include "Dma_MemMap.h"
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
#define DMA_START_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in MemMap.h */
#include "Dma_MemMap.h"
/* PRQA S 5087 -- */
/**
* @brief         Definition of DMA Channels transfer attribute as Configured.
* @details       DMA Notification functions defined inside the Plugin.
*
**/
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external linkage if they are referenced in only one translation unit.
 * Reason: it has no effect */
DMA_DATA_SECTION static const Dma_ChannelConfigType DMA_Instance0_ChConfigData[] =
{
    /*PartitionId, DmaChannelID, DmaChannelPriority,DmaEnablePeriodTriggerMode,DmaEnableChannelCompeletInterrupt,DmaEnableChannelHalfCompeletInterrupt,
  DmaEnableChannelErrorInterrupt,DmaChannelFlowCtrl,DmaChannelTransferCompleteISRCallout,DmaChannelErrorISRCallout,u8DmaISRRouter,bInnerChannelSelfChain*/
    {0, 0, 0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE, DMA_REQ_DISABLED, NULL_PTR, NULL_PTR, 0, (boolean)FALSE},
    {0, 1, 1, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE, DMA_REQ_DISABLED, NULL_PTR, NULL_PTR, 0, (boolean)FALSE},
    {0, 2, 2, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, DMA_REQ_HSADC0, Cdd_HsAdcCapture_Dma2Callback, Cdd_HsAdcCapture_Dma2ErrorCallback, 0, (boolean)FALSE},
    {0, 3, 3, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, DMA_REQ_HSADC2, Cdd_HsAdcCapture_Dma3Callback, Cdd_HsAdcCapture_Dma3ErrorCallback, 0, (boolean)FALSE}
};
DMA_DATA_SECTION static const Dma_ChannelConfigType DMA_Instance1_ChConfigData[] =
{
    /*PartitionId, DmaChannelID, DmaChannelPriority,DmaEnablePeriodTriggerMode,DmaEnableChannelCompeletInterrupt,DmaEnableChannelHalfCompeletInterrupt,
  DmaEnableChannelErrorInterrupt,DmaChannelFlowCtrl,DmaChannelTransferCompleteISRCallout,DmaChannelErrorISRCallout,u8DmaISRRouter,bInnerChannelSelfChain*/
    {2, 0, 0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE, DMA_REQ_DISABLED, NULL_PTR, NULL_PTR, 2,(boolean)TRUE}
};

/* PRQA S 3408, 1504 -- */

/**
* @brief         Definition of DMA channels in respective core.
* @details       Definition of DMA channels as respective core.
*
**/


DMA_DATA_SECTION static const Dma_CoreSpecificChConfigType Dma_ChConfigRootCore0 =
{




    /*DmaInstanceNumber*/
    DMA_INSTANCE_0,

    /*DmaNumberofChConfiguredPerCore*/
    4U,

    /* Config Dma and DmaMUX in each channel, refer to Dma_ChannelConfigType structure */
    &DMA_Instance0_ChConfigData[0]
};

DMA_DATA_SECTION static const Dma_CoreSpecificChConfigType Dma_ChConfigRootCore1 =
{




    /*DmaInstanceNumber*/
    DMA_INSTANCE_0,

    /*DmaNumberofChConfiguredPerCore*/
    0U,

    /* Config Dma and DmaMUX in each channel, refer to Dma_ChannelConfigType structure */
    NULL_PTR
    };

DMA_DATA_SECTION static const Dma_CoreSpecificChConfigType Dma_ChConfigRootCore2 =
{




    /*DmaInstanceNumber*/
    DMA_INSTANCE_1,

    /*DmaNumberofChConfiguredPerCore*/
    1U,

    /* Config Dma and DmaMUX in each channel, refer to Dma_ChannelConfigType structure */
    &DMA_Instance1_ChConfigData[0]
};

DMA_DATA_SECTION static const Dma_CoreSpecificChConfigType Dma_ChConfigRootCore3 =
{




    /*DmaInstanceNumber*/
    DMA_INSTANCE_1,

    /*DmaNumberofChConfiguredPerCore*/
    0U,

    /* Config Dma and DmaMUX in each channel, refer to Dma_ChannelConfigType structure */
    NULL_PTR
    };



/**
* @brief         Definition of DMA instances attribute as Configured.
* @details       Definition of DMA instances attribute as Configured.
*
**/

DMA_DATA_SECTION static const Dma_CoreSpecificHwUnitConfigType Dma_HwUnitCfg[] =
{

    {
        (boolean)TRUE,    /*Dma_EnableInnerLoopMap*/
        (boolean)FALSE,  /*Dma_EnableContinousLinkMode*/
        (boolean)TRUE,         /*Dma_EnableHaltOnError*/
        (boolean)FALSE,      /*Dma_EnableRoundRobinMode*/
        (boolean)TRUE,       /*Dma_EnableDebugStopMode*/
        (boolean)FALSE,      /*DmaEnableMonitorChecker*/
        DMA_MASTERCORE_INSTANCE0
    },

    {
        (boolean)TRUE,    /*Dma_EnableInnerLoopMap*/
        (boolean)FALSE,  /*Dma_EnableContinousLinkMode*/
        (boolean)FALSE,         /*Dma_EnableHaltOnError*/
        (boolean)FALSE,      /*Dma_EnableRoundRobinMode*/
        (boolean)TRUE,       /*Dma_EnableDebugStopMode*/
        (boolean)FALSE,      /*DmaEnableMonitorChecker*/
        DMA_MASTERCORE_INSTANCE1
    },
};


/**
* @brief         Definition of DMA module as Configured.
* @details       Definition of DMA module as Configured.
*
**/

DMA_DATA_SECTION const Dma_ConfigType Dma_Config =
{
    {
        &Dma_ChConfigRootCore0,
        &Dma_ChConfigRootCore1,
        &Dma_ChConfigRootCore2,
        &Dma_ChConfigRootCore3
    },
    &Dma_HwUnitCfg[0],
    {
        (boolean)TRUE,
        (boolean)FALSE,
        (boolean)TRUE,
        (boolean)FALSE
    }
};


#define DMA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* PRQA S 5087 ++ #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in MemMap.h */
#include "Dma_MemMap.h"
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

