/**
*   @file    CDD_Mb_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mb - Module configuration interface for Mailbox driver.
*   @details Contains the module configuration interface for Mailbox driver.
*
*   @addtogroup Mailbox
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Mailbox
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
*   0.2.0       15/09/2023    QXW0070       N/A          Mailbox Initial Version
*   0.3.0       08/10/2023    QXW0070       N/A          Add MbMulticoreSupport checking
*   0.3.0       10/10/2023    QXW0070       N/A          Remove MB_HW_UNUSED
*   0.6.0       11/03/2024    QXW0070       N/A          Add MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS 
*   0.6.0       16/03/2024    QXW0070       N/A          Add MB_MAX_HW_INTR_CHANNEL 
*   0.6.0       16/03/2024    QXW0070       N/A          Add MB_MASTER_ID_TABLE
==================================================================================================*/
#ifndef CDD_MB_CFG_H
#define CDD_MB_CFG_H
#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MB_CFG_VENDOR_ID                       174
#define MB_CFG_AR_RELEASE_MAJOR_VERSION        4
#define MB_CFG_AR_RELEASE_MINOR_VERSION        6
#define MB_CFG_AR_RELEASE_REVISION_VERSION     0
#define MB_CFG_SW_MAJOR_VERSION                1
#define MB_CFG_SW_MINOR_VERSION                5
#define MB_CFG_SW_PATCH_VERSION                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Mb Dev error detect switch
*
*/
#define MB_DEV_ERROR_DETECT (STD_ON)

/**
* @brief Mb Disable Runtime error detect switch
*
*/
#define MB_DISABLE_DET_REPORT_RUNTIME_ERROR_STATUS (STD_OFF)

/**
* @brief MbDeInitApi switch
*
*/
#define MB_DEINIT_API (STD_ON)

/**
* @brief MbFreeChannelApi switch
*
*/
#define MB_FREE_CHANNEL_API (STD_ON)

/**
* @brief MbMessageQueueApi switch
*
*/
#define MB_MESSAGE_QUEUE_API (STD_OFF)

/**
* @brief MbResetChannelApi switch
*
*/
#define MB_RESET_CHANNEL_API (STD_ON)

/**
* @brief MbGetChannelStatusApi switch
*
*/
#define MB_GET_CHANNEL_STATUS_API (STD_ON)

/**
* @brief MbGetVersionInfoApi switch
*
*/
#define MB_GET_VERSION_INFO_API (STD_ON)

/**
 *   @brief Maximum number of Mailbox hardware channel
 */
#define MB_MAX_HW_CHANNEL                   (8U)

/**
 *   @brief Maximum number of Mailbox hardware interrupt channel
 */
#define MB_MAX_HW_INTR_CHANNEL              (3U)

/**
 *   @brief Master ID for each core
 */
#define MB_MASTER_ID_TABLE                  {0U,2U,8U}

  
/**
 *   @brief Maximum number of Mailbox channels configured
 */      
#define MB_MAX_CHANNEL                      (2U)

/**
 *   @brief The timeout for acquiring a spin lock
 */
#define MB_SPIN_LOCK_TIMEOUT                (65535U)


/**
 *   @brief Number of Mailbox channels configured as free channel
 */
#define MB_FREE_CHANNEL_COUNT               (2U)

/**
 *   @brief Number of Mailbox channels configured as message queue
 */
#define MB_MESSAGE_QUEUE_COUNT              (0U)

/**
* @brief MbMulticoreSupport switch
*
*/
#define MB_SUPPORT_MULTICORE               (STD_OFF)


/**
* @brief Mask of the Mailbox channels used in driver
*
*/
#define MB_USED_CHANNEL_MASK        ((uint32)(3U))

/**
 *   @brief The max number of core used by mailbox
 */
#define MB_CORE_COUNT                       (1U)  

/**
* @brief Symbolic Names for configured channels - legacy
*/

#define  MbConf_MbChannel_MbChannel_HSM_Core0_Cmd          (0U)

#define  MbConf_MbChannel_MbChannel_HSM_Core0_Cancel          (1U)




#ifdef __cplusplus
}
#endif
#endif /* CDD_MB_CFG_H */
/** @} */
