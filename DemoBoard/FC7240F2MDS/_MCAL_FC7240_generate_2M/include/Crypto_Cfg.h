/**
*   @file    Crypto_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Crypto - Module configuration interface for Crypto driver.
*   @details Contains the module configuration interface for Crypto driver.
*
*   @addtogroup Crypto
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : CRYPTO
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
*   0.1.0       15/02/2024    QXW0051       N/A          CRYPTO Initial Version
*   0.6.0       23/03/2024    QXW0071       N/A          Add Support For FC7240
==================================================================================================*/

#ifndef CRYPTO_CFG_H
#define CRYPTO_CFG_H

#ifdef __cplusplus
extern "C" {
#endif
/* [SWS_Crypto_00008] */
/*==================================================================================================
*                                        INCLUDE EXTERNAL FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Std_Types.h"
#include "Crypto_GeneralTypes.h"
#include "Rte_Csm_Type.h"
#include "Crypto_Types.h"
#include "Mcal.h"
#include "CDD_Mb_Types.h"
/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define CRYPTO_CFG_AR_RELEASE_MAJOR_VERSION        4U
#define CRYPTO_CFG_AR_RELEASE_MINOR_VERSION        6U
#define CRYPTO_CFG_AR_RELEASE_REVISION_VERSION     0U
#define CRYPTO_CFG_SW_MAJOR_VERSION                1U
#define CRYPTO_CFG_SW_MINOR_VERSION                5U
#define CRYPTO_CFG_SW_PATCH_VERSION                1U
#define CRYPTO_CFG_VENDOR_ID                       174U

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS - AUTOSAR
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS - NON-AUTOSAR
==================================================================================================*/

/*==================================================================================================
                                             CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        INCLUDE INTERNAL FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
*                                     FILE VERSION CHECKS - INTERNAL
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define CRYPTO_HSM_KEY_LOCATION_RAM_KEY_IDX                  (0x0UL)
#define CRYPTO_HSM_KEY_LOCATION_NVM_KEY_IDX                  (0x1UL)
#define CRYPTO_HSM_KEY_LOCATION_NVM_RAM_KEY_IDX              (0x2UL)
#define CRYPTO_HSM_KEY_LOCATION_NVR_BCK_IDX                  (0x3UL)
#define CRYPTO_HSM_KEY_LOCATION_SHE_KEY_IDX                  (0x4UL)

#define FC7300_HSM_SUBSYSTEM                                 (0x0UL)
#define FC7240_HSM_SUBSYSTEM                                 (0x1UL)
#define FC7300GT_HSM_SUBSYSTEM                               (0x2UL)

#define FC7XXX_HSM_SUBSYSTEM_TYPE                            (FC7240_HSM_SUBSYSTEM)


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
        
                                                        
        
                                                        
        
                                                            
                                                        
                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
        
                                                            
                                                                                                                                                                                                                                                                                                                                                                                                                                                                
        
        
            
                                                        
        
        
            
                                                        
        
        
            
                                                        
        
        
            
                                                        
        
        
            
                                                        
        
        
            
                                                        
        
        
            
                                                        
        
        
            
                                                        
        
                                                                                                                                                                                                                
/**
* @brief Switches the Development Error functionality ON or OFF.
* @details Switches the Development Error Detection and Notification ON or OFF.
*/
#define CRYPTO_DEV_ERROR_DETECT   (STD_ON)

/**
* @brief Switches the Hash Services ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_HASH_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Encryption Service functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_ENCRYPTION_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Decryption Service functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_DECRYPTION_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Mac Generation functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_MAC_GENERATION_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Mac Verification functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_MAC_VERIFICATION_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Random Service functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_RANDOM_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Signature Generation functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_SIGNATURE_GENERATION_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Signature Verification functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_SIGNATURE_VERIFICATION_SERVICE_ENABLE   (STD_ON)

/**
* @brief Switches the Support Context functionality ON or OFF.
* @details STD_ON: Relative apis are enabled. STD_OFF: Relative apis are disabled.
*/
#define CRYPTO_PRIMITIVE_SUPPORT_CONTEXT     (STD_OFF)

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
/**
* @brief   Instance ID of the crypto driver.
* @details This ID is used to discern several crypto drivers in case more than one driver is used in the same ECU.
*/
#define CRYPTO_INSTANCE_ID   0U
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
/**
* @brief   The number of serivces supported by Crypto driver.
*/
#define CRYPTO_MAX_SERVICES   (0x0CUL)
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */

#if(CRYPTO_DEV_ERROR_DETECT == STD_ON)
/**
* @brief    Maximum number of crypto driver objects supported by the platform.
* @details  Maximum number of parallel cryptographic operations supported by the HW.
*/
#define CRYPTO_NB_MAX_DRV_OBJ   (1U)
#endif /* CRYPTO_DEV_ERROR_DETECT == STD_ON */

/**
* @brief Switches the Version Information API functionality ON or OFF.
*/
#define CRYPTO_VERSION_INFO_API   (STD_OFF)

/**
* @brief Key configured or not.
*/
#define CRYPTO_KEY_CONFIGURED   (STD_ON)

/**
* @brief    Switches the DEM report status.
*/
#define CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS   (STD_ON)  /* Disable DemReportErrorStatus     */

/**
* @brief    Switches the brainpool curve support.
*/
#define CRYPTO_ENABLE_BRAINPOOL_CURVE_SUPPORT   (STD_OFF) /* Disable BrainPool curve     */

/**
* @brief    Switches the fast trng sample size.
*/
#define CRYPTO_FAST_TRNG_SAMPLE_SIZE (64UL)

#if (CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#endif /* CRYPTO_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */


#define CRYPTO_USER_ASYNC_CB_NOTIF_ENABLE     (STD_OFF)

#define CRYPTO_USER_ASYNC_CB_NOTIF_NOOP       (STD_ON)






#define CRYPTO_CLEAN_DCACHE_CB_ENABLE         (STD_OFF)

#define CRYPTO_CLEAN_DCACHE_CB_NOOP           (STD_ON)






#define CRYPTO_CLEAN_AND_FLUSH_DCACHE_CB_ENABLE         (STD_OFF)

#define CRYPTO_CLEAN_AND_FLUSH_DCACHE_CB_NOOP           (STD_ON)






#define CRYPTO_NEED_CB_FEED_WDOG_ENABLE       (STD_OFF)

#define CRYPTO_NEED_CB_FEED_WDOG_NOOP         (STD_ON)





#define CRYPTO_KEY_SPACE_CHECK_DURING_INIT (STD_OFF) /* Disable tidyup    */

#define CRYPTO_KEY_SPACE_CHECK_CORE_INDEX 0u


#define CryptoConf_CryptoDriverObject_CryptoDriverObject_0   1UL



#define CryptoConf_CryptoKey_CryptoKey_0   1UL

#define CryptoConf_CryptoKey_CryptoKey_1   2UL

#define CryptoConf_CryptoKey_CryptoKey_2   3UL

#define CryptoConf_CryptoKey_CryptoKey_3   4UL

#define CryptoConf_CryptoKey_CryptoKey_4   5UL

#define CryptoConf_CryptoKey_CryptoKey_5   6UL

#define CryptoConf_CryptoKey_CryptoKey_6   7UL

#define CryptoConf_CryptoKey_CryptoKey_7   8UL

#define CryptoConf_CryptoKey_CryptoKey_8   9UL

#define CryptoConf_CryptoKey_CryptoKey_9   10UL

#define CryptoConf_CryptoKey_CryptoKey_10   11UL

#define CryptoConf_CryptoKey_CryptoKey_11   12UL

#define CryptoConf_CryptoKey_CryptoKey_12   13UL

#define CryptoConf_CryptoKey_CryptoKey_13   14UL

#define CryptoConf_CryptoKey_CryptoKey_14   15UL

#define CryptoConf_CryptoKey_CryptoKey_15   16UL

#define CryptoConf_CryptoKey_CryptoKey_16   17UL

#define CryptoConf_CryptoKey_CryptoKey_17   18UL

#define CryptoConf_CryptoKey_CryptoKey_18   19UL

#define CryptoConf_CryptoKey_CryptoKey_19   20UL

#define CryptoConf_CryptoKey_CryptoKey_20   21UL

#define CryptoConf_CryptoKey_CryptoKey_21   22UL

#define CryptoConf_CryptoKey_CryptoKey_22   23UL

#define CryptoConf_CryptoKey_CryptoKey_23   24UL

#define CryptoConf_CryptoKey_CryptoKey_24   25UL

#define CryptoConf_CryptoKey_CryptoKey_25   26UL

#define CryptoConf_CryptoKey_CryptoKey_26   27UL

#define CryptoConf_CryptoKey_CryptoKey_27   28UL

#define CryptoConf_CryptoKey_CryptoKey_28   29UL

#define CryptoConf_CryptoKey_CryptoKey_29   30UL

#define CryptoConf_CryptoKey_CryptoKey_30   31UL

#define CryptoConf_CryptoKey_CryptoKey_31   32UL

#define CryptoConf_CryptoKey_CryptoKey_32   33UL

#define CryptoConf_CryptoKey_CryptoKey_33   34UL

#define CryptoConf_CryptoKey_CryptoKey_34   35UL

#define CryptoConf_CryptoKey_CryptoKey_35   36UL

#define CryptoConf_CryptoKey_CryptoKey_36   37UL

#define CryptoConf_CryptoKey_CryptoKey_37   38UL

#define CryptoConf_CryptoKey_CryptoKey_38   39UL

#define CryptoConf_CryptoKey_CryptoKey_39   40UL

#define CryptoConf_CryptoKey_CryptoKey_40   41UL

#define CryptoConf_CryptoKey_CryptoKey_41   42UL

#define CryptoConf_CryptoKey_CryptoKey_42   43UL

#define CryptoConf_CryptoKey_CryptoKey_43   44UL

#define CryptoConf_CryptoKey_CryptoKey_44   45UL

#define CryptoConf_CryptoKey_CryptoKey_45   46UL

#define CryptoConf_CryptoKey_CryptoKey_46   47UL

#define CryptoConf_CryptoKey_CryptoKey_47   48UL

#define CryptoConf_CryptoKey_CryptoKey_48   49UL

#define CryptoConf_CryptoKey_CryptoKey_49   50UL

#define CryptoConf_CryptoKey_CryptoKey_50   51UL

#define CryptoConf_CryptoKey_CryptoKey_51   52UL

#define CryptoConf_CryptoKey_CryptoKey_52   53UL

#define CryptoConf_CryptoKey_CryptoKey_53   54UL

#define CryptoConf_CryptoKey_CryptoKey_54   55UL

#define CryptoConf_CryptoKey_CryptoKey_55   56UL

#define CryptoConf_CryptoKey_CryptoKey_56   57UL

#define CryptoConf_CryptoKey_CryptoKey_57   58UL

#define CryptoConf_CryptoKey_CryptoKey_58   59UL

#define CryptoConf_CryptoKey_CryptoKey_59   60UL

#define CryptoConf_CryptoKey_CryptoKey_60   61UL

#define CryptoConf_CryptoKey_CryptoKey_61   62UL

#define CryptoConf_CryptoKey_CryptoKey_62   63UL

#define CryptoConf_CryptoKey_CryptoKey_63   64UL

#define CryptoConf_CryptoKey_CryptoKey_64   65UL

#define CryptoConf_CryptoKey_CryptoKey_65   66UL

#define CryptoConf_CryptoKey_CryptoKey_66   67UL

#define CryptoConf_CryptoKey_CryptoKey_67   68UL

#define CryptoConf_CryptoKey_CryptoKey_68   69UL

#define CryptoConf_CryptoKey_CryptoKey_69   70UL

#define CryptoConf_CryptoKey_CryptoKey_70   71UL

#define CryptoConf_CryptoKey_CryptoKey_71   72UL

#define CryptoConf_CryptoKey_CryptoKey_72   73UL

#define CryptoConf_CryptoKey_CryptoKey_73   74UL

#define CryptoConf_CryptoKey_CryptoKey_74   75UL

#define CryptoConf_CryptoKey_CryptoKey_75   76UL

#define CryptoConf_CryptoKey_CryptoKey_76   77UL

#define CryptoConf_CryptoKey_CryptoKey_77   78UL

#define CryptoConf_CryptoKey_CryptoKey_78   79UL

#define CryptoConf_CryptoKey_CryptoKey_79   80UL




#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_IV   5UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES128_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES192_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES256_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SM4_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC224_PUBLIC_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_OID_8Bytes   29UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC256_PUBLIC_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_OID_5Bytes   29UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_OID_9Bytes   29UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC384_PUBLIC_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC521_PUBLIC_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_E   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_N   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_E   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_N   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_E   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_N   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_E   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_N   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_Public_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_Public_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_Public_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_Public_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES128_BCK   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES192_BCK   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES256_BCK   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_D   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_D   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_D   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_D   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA1024_Private_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA2048_Private_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA3072_Private_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA4096_Private_Der   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY_KeySpace   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CMAC_KEY_KeySpace   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SM4_KEY_KeySpace   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_E_KeySpace   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace4096   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace4096   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace224   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace3072   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace2048   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_D_KeySpace1024   1000UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace256   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace384   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PUBLIC_KeySpace521   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace3072   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace2048   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_N_KeySpace1024   1001UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der1024   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der2048   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der3072   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PUBLIC_Der4096   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der1024   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der2048   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der3072   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_RSA_PRIVATE_Der4096   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_PUBLIC   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_USERID   1002UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_OID   29UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SM2_PUBLIC_KeySpace   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement__RSA_PUBLIC   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC128   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC160   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC224   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC256   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC384   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_HMAC512   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_Update_She_Bank0_Master_Ecu_Key_M1M2M3   1UL
  

#define CryptoConf_CryptoKeyElement_CryptoKeyElement_SHE_M4M5   6UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_She_Bank0_Master_Ecu_Key   1UL
  

#define CryptoConf_CryptoKeyElement_CryptoKeyElement_Update_She_Bank0_Key1   1UL
  

#define CryptoConf_CryptoKeyElement_CryptoKeyElement_She_Bank0_Key1   1UL
  

#define CryptoConf_CryptoKeyElement_CryptoKeyElement_Update_She_Bank0_Key2   1UL
  

#define CryptoConf_CryptoKeyElement_CryptoKeyElement_She_Bank0_Key2   1UL
  

#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC224_PRIVATE_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC256_PRIVATE_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC384_PRIVATE_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC521_PRIVATE_KEY   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace224   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace256   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace384   1UL


#define CryptoConf_CryptoKeyElement_CryptoKeyElement_ECC_PRIVATE_KeySpace521   1UL




#define CRYPTO_SHE_SUPPORT (STD_ON)





#define HSM_SM2_USERID_MAX_LENGTH   128UL



/**
* @brief Switches the Job Queuing ON or OFF.
* @details Switches the job queuing feature ON or OFF.
*/
/* [SWS_Crypto_00179] */
#define CRYPTO_JOB_QUEUING   (STD_OFF)

/**
* @brief Number of elements the queue can contain.
* @details This number fixes the maximum number of jobs that can be stored in the queue.
*/
/* Note : CRYPTO_MAX_QUEUE_SIZE should be extended to a table if multi-CDO is implemented. */
#if (CRYPTO_JOB_QUEUING==STD_ON)
#define CRYPTO_MAX_QUEUE_SIZE   (0UL)
#endif

/**
* @brief Define number of crypto keys configured
* @details
*/
#define CRYPTO_MAXKEY_CONFIGURED   (80UL)
#define CRYPTO_MAXPrimitive_CONFIGURED   (93UL)

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
/**
* @brief Define number of crypto key elements configured
* @details
*/
#define CRYPTO_MAXKEYELEMENT_CONFIGURED   (83UL)


typedef enum
{
    CRYPTO_DRIVER_UNINIT       = 0x00,    /**@details Indicate that crypto driver have not been yet initialized */
    CRYTO_DRIVER_BUFFER_READY  = 0x01,
    CRYPTO_DRIVER_IDLE         = 0x02,    /**@details Indicates that crypto driver is initialized, and no job registered.*/
    CRYPTO_DRIVER_WAITING_FOR_INPUT = 0x03,/**@details Indicates that crypto driver is initialized, a job is registered and no HSM request ongoing.*/
    CRYPTO_DRIVER_BUSY         = 0x04,    /**@details Indicate there is a request ongoing in HSM */
    CRYPTO_DRIVER_FINALIZING   = 0x05,    /**@details Indicate that crypto driver is initialized, a finalizing a request. */
} Crypto_DriverStatusType;

/**
* @brief   Enumeration of Crypto_CancelProcessingJob type
* @details Indicate if an actively processing job has to be canceled.
*/
typedef enum
{
    CRYPTO_NO_JOB_TO_CANCEL   = 0x0U,      /** No actively processing job has to be canceled. */
    CRYPTO_JOB_TO_BE_CANCELED = 0x1U,    /** Actively processing job has to be canceled. */
} Crypto_CancelProcessingJobType;

typedef struct {
    uint32  u32ChannelLocked;
    uint8   u8ChannelAcked;
} Crypto_CoreMailboxCtxInfType;



/* if place in sram, all core use the same one, should set request global lock, if place in dtcm, no need */
typedef struct {
    void               *pHsmRuntime;  /* Crypto_HsmRuntimeType */
    uint32      eHsmAlgorithmRet;
    uint8               u8HsmAlgorithmFinished;
} Crypto_CoreHsmCtxInfType;

typedef struct {
#if (CRYPTO_JOB_QUEUING==STD_ON)
/* Note : to handle multi-CDO, job queue needs to be extended to 2-Dimension */
    Crypto_JobType                 *Crypto_JobQueue[CRYPTO_MAX_QUEUE_SIZE];
#endif

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
    uint8                           Crypto_KeyStatus[CRYPTO_MAXKEY_CONFIGURED];
#endif

    uint8                           Crypto_DriverSULFProcess;
    uint8                           Crypto_WaitingForHSMAnswer;
    Std_ReturnType                  Crypto_JobProcessingTaskStatus;

    uint32                          aSelftestCache[14];
} Crypto_CoreMcalUninitedCtxInfType;

typedef void (*Crypto_PFnRegisteredSvcResultsProcessCbType)(uint32 eRet);
typedef struct {
    Crypto_DriverStatusType         Crypto_DriverStatus; /* CRYPTO_DRIVER_UNINIT */
    Crypto_CancelProcessingJobType  Crypto_CancelProcessingJob;
    Crypto_JobType                 *Crypto_StoredJobPtr;
    Crypto_PFnRegisteredSvcResultsProcessCbType Crypto_RegisteredSvcResultsProcessFunc;
} Crypto_CoreMcalInitedCtxInfType;
typedef struct {
    uint8                           u8MailboxChannelValidFlag; /* bit 0:command channel, bit 1:cancel channel */
    Mb_ChannelType                  tSendCmdMailboxChannel;
    Mb_ChannelType                  tSendCancelMailboxChannel;
    uint8                           u8MailboxChannelSharedbyCoresFlag; /* bit 0:command channel, bit 1:cancel channel */

    volatile Crypto_CoreMailboxCtxInfType   *pCmdMailboxInf;
    volatile Crypto_CoreMailboxCtxInfType   *pCancelMailboxInf;
    volatile Crypto_CoreHsmCtxInfType       *pHsmCtx;
    volatile Crypto_CoreMcalUninitedCtxInfType      *pMcalUninitedCtx;
    volatile Crypto_CoreMcalInitedCtxInfType        *pMcalInitedCtx;
} Crypto_CoreCtxInfType;





#define CRYPTO_CORE0_CMD_MBCHANNEL   2






    
#define CRYPTO_CORE0_CANCEL_MBCHANNEL   3
                            


#define CRYPTO_CORE_RUNTIME_COUNT 1

/* TODO: Fix according to the chip type */
#define CRYPTO_CHIP_CORE_CNT 1

#define CRYPTO_CHIP_MBCHANNEL_CNT 4

#define CRYPTO_ALGORITHM_TIMEOUT_MS 15000u

#define CRYPTO_ALGORITHM_DRIVER_TIMEOUT_TICK 1000000u

#define CRYPTO_SPINLOCK_TRY_MAX_CNT 100000u

#define CRYPTO_SETRUNTIMEBUF_SUPPORT (STD_OFF) /* disable set runtime buffer support */

#define CRYPTO_MULTICORE_SUPPORT   (STD_OFF) /* disable multi core support */



#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

CRYPTO_TEXT_SECTION Std_ReturnType Crypto_GetSpinLock(uint32 *pLock);

/**
* @brief          Release the spin lock of the mailbox
*
* @return         void
*
*/
CRYPTO_TEXT_SECTION void Crypto_ReleaseSpinLock(uint32 *pLock);

#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"


#define  CRYPTO_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION extern volatile Crypto_CoreHsmCtxInfType Crypto_aCoreHsmCtx[CRYPTO_CHIP_CORE_CNT];

CRYPTO_DATA_SECTION extern volatile Crypto_CoreMailboxCtxInfType Crypto_aMailboxInfCtx[CRYPTO_CHIP_MBCHANNEL_CNT+1];


CRYPTO_DATA_SECTION extern volatile Crypto_CoreMcalInitedCtxInfType Crypto_aCoreMcalInitedCtx[CRYPTO_CHIP_CORE_CNT];

#define  CRYPTO_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

#define  CRYPTO_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION extern volatile Crypto_CoreMcalUninitedCtxInfType Crypto_aCoreMcalUninitedCtx[CRYPTO_CHIP_CORE_CNT];

#define  CRYPTO_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

CRYPTO_DATA_SECTION extern const Crypto_CoreCtxInfType Crypto_aCoreCtx[CRYPTO_CHIP_CORE_CNT];

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"



#define HSM_PCC_BASE_CLK   120000000U


/*==================================================================================================
                                             ENUMS
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
/**
* @brief   Enumeration that defines the reading access rights of the key element.
*/
typedef enum
{
    CRYPTO_RA_DENIED        = 0x03,    /**@details key element cannot be read from outside the Crypto */
    CRYPTO_RA_INTERNAL_COPY = 0x02,    /**@details key element can be copied to another key element in the same crypto driver.*/
    CRYPTO_RA_ALLOWED       = 0x00,    /**@details key element can be read as plaintext */
    CRYPTO_RA_ENCRYPTED     = 0x01     /**@details key element can be read encrypted. E.g. SHE Ram-Key export.*/
} Crypto_KeyElemReadAccessType;

/**
* @brief   Enumeration that defines the writing access rights of the key element.
*/
typedef enum
{
    CRYPTO_WA_DENIED        = 0x03,    /**@details key element cannot be written from outside the crypto driver */
    CRYPTO_WA_INTERNAL_COPY = 0x02,    /**@details key element can be filled with another key element in the same crypto driver.*/
    CRYPTO_WA_ALLOWED       = 0x00,    /**@details key element can be written as plaintext */
    CRYPTO_WA_ENCRYPTED     = 0x01     /**@details key element can be written encrypted. E.g. SHE load key.*/
} Crypto_KeyElemWriteAccessType;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/**
* @brief   The enumeration lists the capabilities for a service.
* @details A mailbox can be moved into 2 states :
*           - CRYPTO_SERVICE_SUPP     : The HW supports this service.
*           - CRYPTO_SERVICE_NOT_SUPP : The HW does not support this service
*/
#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
typedef enum
{
    CRYPTO_SERVICE_SUPP,
    CRYPTO_SERVICE_NOT_SUPP
} Crypto_ServCapType;
#endif

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
typedef enum
{
    CRYPTO_KEY_FAMILY_ALGO_AES           = 0x01,    /**@details Indicate that key is used for algorithm family AES */
    CRYPTO_KEY_FAMILY_ALGO_RSA           = 0x02,    /**@details Indicate that key is used for algorithm family RSA */
    CRYPTO_KEY_FAMILY_ALGO_ECC           = 0x03,    /**@details Indicate that key is used for algorithm family ECC */
    CRYPTO_KEY_FAMILY_ALGO_SM4           = 0x04,    /**@details Indicate that key is used for algorithm family SM4 */
    CRYPTO_KEY_FAMILY_ALGO_CMAC          = 0x05,
    CRYPTO_KEY_FAMILY_ALGO_HMAC          = 0x06,
    CRYPTO_KEY_FAMILY_ALGO_SM2           = 0x07,
    CRYPTO_KEY_FAMILY_NOT_SET            = 0xFF
} Crypto_KeyFamilyType;

typedef enum
{
    CRYPTO_KEY_ELEMENT_FAMILY_RSA_N         = 0x01,
    CRYPTO_KEY_ELEMENT_FAMILY_RSA_D         = 0x02,
    CRYPTO_KEY_ELEMENT_FAMILY_RSA_E         = 0x03,
    CRYPTO_KEY_ELEMENT_FAMILY_ECC_PRIVATE   = 0x04,
    CRYPTO_KEY_ELEMENT_FAMILY_ECC_PUBLIC    = 0x05,
    CRYPTO_KEY_ELEMENT_FAMILY_SM2_PRIVATE   = 0x06,
    CRYPTO_KEY_ELEMENT_FAMILY_SM2_PUBLIC    = 0x07,

    CRYPTO_KEY_ELEMENT_FAMILY_SM4_KEY       = 0x08,
    CRYPTO_KEY_ELEMENT_FAMILY_SM4_IV        = 0x09,
    CRYPTO_KEY_ELEMENT_FAMILY_AES_KEY       = 0x0A,
    CRYPTO_KEY_ELEMENT_FAMILY_AES_IV        = 0x0B,

    CRYPTO_KEY_ELEMENT_FAMILY_CMAC_KEY      = 0x0C,

    CRYPTO_KEY_ELEMENT_FAMILY_MD5_MAC_KEY   = 0x0D,
    CRYPTO_KEY_ELEMENT_FAMILY_SHA_MAC_KEY   = 0x0E,
    CRYPTO_KEY_ELEMENT_FAMILY_SM3_MAC_KEY   = 0x0F,

    CRYPTO_KEY_ELEMENT_FAMILY_RSA_PRIVATE   = 0x10,
    CRYPTO_KEY_ELEMENT_FAMILY_RSA_PUBLIC    = 0x11,

    CRYPTO_KEY_ELEMENT_FAMILY_NOT_SET = 0xFF
} Crypto_KeyElementFamilyType;


typedef enum
{
    CRYPTO_KE_FORMAT_BIN_OCTET                  = 0x01,
    CRYPTO_KE_FORMAT_BIN_SHEKEYS                = 0x02,
    CRYPTO_KE_FORMAT_BIN_IDENT_PRIVATEKEY_PKCS8 = 0x03,
    CRYPTO_KE_FORMAT_BIN_IDENT_PUBLICKEY        = 0x04,
    CRYPTO_KE_FORMAT_BIN_RSA_PRIVATEKEY         = 0x05,
    CRYPTO_KE_FORMAT_BIN_RSA_PUBLICKEY          = 0x06,
    CRYPTO_KE_FORMAT_BIN_CERT_X509_V3           = 0x07,
    CRYPTO_KE_FORMAT_BIN_CERT_CVC               = 0x08,
} Crypto_KeyElementFormatType;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
#if (CRYPTO_KEY_CONFIGURED == STD_ON)
/**
* @brief   Structure of key element
*/
typedef struct
{
    uint32                        CryptoKeyElementId;                 /** @brief   Identifier of the CRYPTO key element */
    Crypto_KeyElementFormatType   CryptoKeyElementFormat;             /** @brief   Format of  CRYPTO key element */
    boolean                       CryptoKeyElemAllowPartialAccess;    /** @brief   Enable or disable writing and reading the key element with data smaller than the size of the element  */
    uint32                        CryptoKeyElementInitValue;          /** @brief   Value which will be used to fill the element during initialisation, when the element is not already initialized..  */
    boolean                       CryptoKeyElementPersist;            /** @brief   Enable or disable persisting of the key element in non-volatile storage.  */
    Crypto_KeyElemReadAccessType  CryptoKeyElementReadAccess;         /** @brief   Define the reading access rights of the key element. */
    Crypto_KeyElemWriteAccessType CryptoKeyElementWriteAccess;        /** @brief   Define the writing access rights of the key element */
    uint32                        CryptoKeyElementSize;               /** @brief   Maximum Size size of a CRYPTO key element in bytes */
    uint32                        u32CryptoStoreType;                 /** @brief   Id of HSM type */
    uint32                        u32KeyIdForStore;                   /** @brief   Id of HSM stored key */
    Crypto_KeyElementFamilyType   eKeyElementFamily;
} Crypto_KeyElemDescType;

/**
* @brief   Structure containing the description of a given key type
*/
typedef struct
{
    uint32   CryptoKeyElement;           /** @brief   Identifier of the CRYPTO key element */
    uint8   *CryptoKeyElementDataPtr;    /** @brief   Buffer to store value of key element  */
} Crypto_KeyTypeDescriptionType;

/**
* @brief   Structure containing the description of a given key type
*/
typedef struct
{
     uint32                                 NumberCryptoKeyElement;   /** @brief   Identifier of the CRYPTO key element */
     const Crypto_KeyTypeDescriptionType   *CryptoKeyElementList;     /** @brief   Identifier of the CRYPTO key element */
} Crypto_KeyDescriptionType;

/**
* @brief   Structure of a key.
*/
typedef struct
{
    uint32                        CryptoKeyId;                 /** @brief   Id of crypto key */
    Crypto_KeyFamilyType          CryptoKeyFamily;             /** @brief   Algo family of this key */
    uint32                        CryptoKeyDeriveIterations;   /** @brief   Holds the number of iterations to be performed by the key derivation primitive */
    Crypto_KeyDescriptionType     CryptoKeyDescription;        /** @brief   Identifier of the CRYPTO key element */
} Crypto_KeyType;
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */


/*==================================================================================================
                                      GLOBAL VARIABLES
==================================================================================================*/
#define CRYPTO_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crypto_MemMap.h"

#if (CRYPTO_KEY_CONFIGURED == STD_ON)
CRYPTO_DATA_SECTION extern const Crypto_KeyElemDescType   Crypto_CryptoKeyElementList_PC[CRYPTO_MAXKEYELEMENT_CONFIGURED];
/* Represents the configuration keys. */
CRYPTO_DATA_SECTION extern const Crypto_KeyType Crypto_CryptoKeyList_PC[CRYPTO_MAXKEY_CONFIGURED];
#endif /* CRYPTO_KEY_CONFIGURED == STD_ON */

#if( CRYPTO_DEV_ERROR_DETECT == STD_ON )
CRYPTO_DATA_SECTION extern const uint32 Crypto_NbAlgoSupported[CRYPTO_MAX_SERVICES];
CRYPTO_DATA_SECTION extern const Crypto_AlgorithmInfoType *const Crypto_ServiceCapabilities[CRYPTO_MAX_SERVICES];
#endif

#define CRYPTO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Crypto_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* CRYPTO_CFG_H */

/** @} */
