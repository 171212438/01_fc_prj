
#ifndef FEE_CFG_H
#define FEE_CFG_H


#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fee_Types.h"


/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FEE_CFG_AR_RELEASE_MAJOR_VERSION        4
#define FEE_CFG_AR_RELEASE_MINOR_VERSION        6
#define FEE_CFG_AR_RELEASE_REVISION_VERSION     0
#define FEE_CFG_SW_MAJOR_VERSION                1
#define FEE_CFG_SW_MINOR_VERSION                5
#define FEE_CFG_SW_PATCH_VERSION                1
#define FEE_CFG_VENDOR_ID                       174

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/**
 * @brief Pre-processor switch to enable and disable development error detection
 */
#define FEE_DEV_ERROR_DETECT                      (STD_OFF)

/**
 * @brief Pre-processor switch to enable/disable the DET runtime error reporting.
 */
#define FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS     (STD_OFF)

/**
 * @brief Pre-processor switch to enable / disable the API to read out the modules version information 
 */
#define FEE_VERSION_INFO_API                      (STD_OFF)

/**
 * @brief Compiler switch to enable/disable the SetMode functionality of the module
 */
#define FEE_SETMODE_API_SUPPORTED                 (STD_ON)

/**
 * @brief Pre-processor switch to enable /disable the Fls_Cancel function of the module 
 */
#define FEE_CANCEL_API                            (STD_OFF)

/**
 * @brief The size in bytes to which logical blocks shall be aligned
 */
#define FEE_VIRTUAL_PAGE_SIZE                     (8U)

/**
 * @brief Job end notification routine provided by the upper layer module 
 */
#define FEE_NVM_JOB_END_NOTIFICATION              
/**
 * @brief Job error notification routine provided by the upper layer module 
 */
#define FEE_NVM_JOB_ERROR_NOTIFICATION            
/**
 * @brief The Offset of flag status part in the chunk header
 */
#define FEE_CHUNK_HEADER_STATUS_OFFSET            (16U)

/**
 * @brief The Offset of flag status part in the block header 
 */
#define FEE_BLOCK_HEADER_STATUS_OFFSET            (16U)

/**
 * @brief Number of configured Fee chunk groups 
 */
#define FEE_NUM_OF_CHUNK_GROUPS                   (3U)

/**
 * @brief Number of configured Fee blocks 
 */
#define FEE_CFG_NUM_OF_BLOCKS                     (4U)

/**
 * @brief Maximum number of Fee blocks in all project versions and configurations
 */
#define FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE                      ((FEE_CFG_NUM_OF_BLOCKS))

/**
 * @brief Management overhead per logical block in bytes
 */
#define FEE_BLOCK_OVERHEAD                        (32U)

/**
 * @brief Management overhead per logical chunk in bytes 
 */
#define FEE_CHUNK_OVERHEAD                        (32U)

/**
 * @brief Size of the data buffer in bytes 
 */
#define FEE_DATA_BUFFER_SIZE                      (1024U)

/**
 * @brief The contents of an erased flash memory cell 
 */
#define FEE_ERASED_VALUE                          (0xffU)

/** 
 * @brief Value of the block and chunk validation flag 
 */
#define FEE_VALIDATED_VALUE                       (0x81U)

/**
 * @brief Value of the block and chunk invalidation flag 
 */
#define FEE_INVALIDATED_VALUE                     (0x18U)

/**
 * @brief If reset, power loss etc. occurs here, neither newly nor previously written data is available 
 */
#define FEE_BLOCK_ALWAYS_AVAILABLE                (STD_ON)

/**
 * @brief This configuration defines weather Fee should swap foreign blocks found in flash at swap or not 
 */
#define FEE_FOREIGN_BLOCKS_SUPPORT                (STD_OFF)

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
/**
 * @brief This configuration defines for which project the Fee configuration is used 
 */
#define FEE_BOOTLOADER_CONFIG                     (STD_OFF)
#endif

/**
 * @brief Symbolic names of configured Fee blocks 
 */
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0     (8U)
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1     (13U)
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_3     (16U)
#define FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_2     (26U)
#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"
/**
 * @brief Configuration of chunk group set 
 */
extern const Fee_ChunkGroupType Fee_Cfg_ChunkGrps[ FEE_NUM_OF_CHUNK_GROUPS ];

/**
 * @brief Configuration of Fee blocks
 */
extern const Fee_BlockConfigType Fee_Cfg_BlockConfig[ FEE_CFG_NUM_OF_BLOCKS ];

#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* FEE_CFG_H */
