/**
*   @file    Icu_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Icu - Post-Build configurations for ICU driver.
*   @details Post-Build configuration file for ICU driver.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer Cmp
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024   QXW0076       N/A         add time stamp dma function
*   0.6.0       18/3/2024    QXW0076       N/A         verify timestamp dma feature && support for 7240.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "Icu.h"
#include "Icu_Hw.h"
#include "Scm_Reg.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/

#define ICU_PBCFG_VENDOR_ID_C                           0xAE

#define ICU_PBCFG_AR_RELEASE_MAJOR_VERSION_C            4
#define ICU_PBCFG_AR_RELEASE_MINOR_VERSION_C            6
#define ICU_PBCFG_AR_RELEASE_REVISION_VERSION_C         0

#define ICU_PBCFG_SW_MAJOR_VERSION_C                    1
#define ICU_PBCFG_SW_MINOR_VERSION_C                    5
#define ICU_PBCFG_SW_PATCH_VERSION_C                    1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#if (ICU_PBCFG_VENDOR_ID_C != ICU_VENDOR_ID)
    #error "Icu_PBCfg.c and Icu.h have different vendor IDs"
#endif

#if ((ICU_PBCFG_AR_RELEASE_MAJOR_VERSION_C != ICU_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_PBCFG_AR_RELEASE_MINOR_VERSION_C != ICU_AR_RELEASE_MINOR_VERSION) || \
     (ICU_PBCFG_AR_RELEASE_REVISION_VERSION_C != ICU_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Icu_PBCfg.c and Icu.h are different"
#endif

#if ((ICU_PBCFG_SW_MAJOR_VERSION_C != ICU_SW_MAJOR_VERSION) || \
     (ICU_PBCFG_SW_MINOR_VERSION_C != ICU_SW_MINOR_VERSION) || \
     (ICU_PBCFG_SW_PATCH_VERSION_C != ICU_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_PBCfg.c  and Icu.h are different"
#endif


/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/


/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/


/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/



/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) */

ICU_TEXT_SECTION extern void Icu_Key1_Edge_Detect(void);
ICU_TEXT_SECTION extern void Icu_Key2_Edge_Detect(void);
ICU_TEXT_SECTION extern void Icu_Key3_Edge_Detect(void);

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"






ICU_DATA_SECTION static const Icu_EftuTimChannelConfigType Icu_aEftuTimHwChannelConf_0[1] =
{
    {
        ICU_EFTU_TIM_CH_0,
        FALSE,
        ICU_EFTU_TIM_FLT_CMUCLK0,
        ICU_EFTU_TIM_FILTERMODE_IMMEDIATEEDGEPROPAGATION,
        ICU_EFTU_TIM_FILTERMODE_IMMEDIATEEDGEPROPAGATION,
        0,
        0,
        ICU_EFTU_TIM_CMU_CLK0,
        ICU_EFTU_TIM_GPTSEL_CNTS_OR_CNT,
        ICU_EFTU_TIM_INPUT_TIM_IN_AUX_IN,
    },
};

ICU_DATA_SECTION static const Icu_EftuTimModuleConfigType Icu_aEftuTimModuleConf[1] = 
{
    {
        ICU_EFTU_0,
        1,
        &Icu_aEftuTimHwChannelConf_0,
        0U,
    },

};



ICU_DATA_SECTION static const Icu_PortModuleConfigType Icu_aPortModuleConf[2] =
{
    {
        ICU_PORT_A,
        1U,
    },
    {
        ICU_PORT_D,
        0U,
    }
};




ICU_DATA_SECTION static const Icu_Port_HwConfigType Icu_PortHwConf =
{
    2,
    &Icu_aPortModuleConf,
};





ICU_DATA_SECTION static const Icu_EftuTimHwConfigType Icu_EftuTimHwConf =
{
    1,
    &Icu_aEftuTimModuleConf,
};   



ICU_DATA_SECTION static const Icu_ChannelConfigType Icu_InitChannel[4] =
{
    {
        ICU_MODE_SIGNAL_EDGE_DETECT,
        ICU_HW_PORT_D,
        20U,
         ICU_RISING_EDGE,
        Icu_Key1_Edge_Detect,
        0U,
#if (ICU_TIMESTAMP_DMA == STD_ON)  
        FALSE,
        0U,
#endif/*(ICU_TIMESTAMP_DMA == STD_ON) */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
        0U,
#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
        NULL_PTR,
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) */
    },
    {
        ICU_MODE_SIGNAL_EDGE_DETECT,
        ICU_HW_PORT_D,
        26U,
         ICU_RISING_EDGE,
        Icu_Key2_Edge_Detect,
        0U,
#if (ICU_TIMESTAMP_DMA == STD_ON)  
        FALSE,
        0U,
#endif/*(ICU_TIMESTAMP_DMA == STD_ON) */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
        0U,
#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
        NULL_PTR,
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) */
    },
    {
        ICU_MODE_SIGNAL_EDGE_DETECT,
        ICU_HW_PORT_A,
        11U,
         ICU_RISING_EDGE,
        Icu_Key3_Edge_Detect,
        0U,
#if (ICU_TIMESTAMP_DMA == STD_ON)  
        FALSE,
        0U,
#endif/*(ICU_TIMESTAMP_DMA == STD_ON) */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
        0U,
#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
        NULL_PTR,
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) */
    },
    {
        ICU_MODE_SIGNAL_MEASUREMENT,
        ICU_HW_EFTU_0,
        0U,
         ICU_RISING_EDGE,
        NULL_PTR,
        ((uint32)((((uint32)ICU_MEASUREMENT_HW_DIRECT) << ICU_PARAM_MEASUREMENT_MODE_SHFIT) | (ICU_DUTY_CYCLE<<ICU_PARAM_MEASUREMENT_PROPERTY_SHIFT))),
#if (ICU_TIMESTAMP_DMA == STD_ON)  
        FALSE,
        0U,
#endif/*(ICU_TIMESTAMP_DMA == STD_ON) */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
        0U,
#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
        NULL_PTR,
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) */
    }
};

ICU_DATA_SECTION static const Icu_ChannelType Icu_HwMap[ICU_HW_CHANNEL_COUNT] =
{
    ICU_NOICUCHANNEL,/*FTU_0_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_0_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_1_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_2_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_3_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_4_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_5_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_6_CH_7*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_0*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_1*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_2*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_3*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_4*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_5*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_6*/
    ICU_NOICUCHANNEL,/*FTU_7_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_10*/
    2,/*PORT_A_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_A_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_B_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_C_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_19*/
    0,/*PORT_D_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_25*/
    1,/*PORT_D_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_D_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_E_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_F_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_G_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_H_CH_31*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_0*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_1*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_2*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_3*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_4*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_5*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_6*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_7*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_8*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_9*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_10*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_11*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_12*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_13*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_14*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_15*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_16*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_17*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_18*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_19*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_20*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_21*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_22*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_23*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_24*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_25*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_26*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_27*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_28*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_29*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_30*/
    ICU_NOICUCHANNEL,/*PORT_I_CH_31*/
    ICU_NOICUCHANNEL,/*AONTIMER*/
    ICU_NOICUCHANNEL,/*CMP0*/
    ICU_NOICUCHANNEL,/*ISM_CH_0*/
    ICU_NOICUCHANNEL,/*ISM_CH_1*/
    ICU_NOICUCHANNEL,/*ISM_CH_2*/
    ICU_NOICUCHANNEL,/*ISM_CH_3*/
    ICU_NOICUCHANNEL,/*ISM_CH_4*/
    ICU_NOICUCHANNEL,/*ISM_CH_5*/
    ICU_NOICUCHANNEL,/*ISM_CH_6*/
    ICU_NOICUCHANNEL,/*ISM_CH_7*/
    ICU_NOICUCHANNEL,/*TPU_CH_0*/
    ICU_NOICUCHANNEL,/*TPU_CH_1*/
    ICU_NOICUCHANNEL,/*TPU_CH_2*/
    ICU_NOICUCHANNEL,/*TPU_CH_3*/
    ICU_NOICUCHANNEL,/*TPU_CH_4*/
    ICU_NOICUCHANNEL,/*TPU_CH_5*/
    ICU_NOICUCHANNEL,/*TPU_CH_6*/
    ICU_NOICUCHANNEL,/*TPU_CH_7*/
    ICU_NOICUCHANNEL,/*TPU_CH_8*/
    ICU_NOICUCHANNEL,/*TPU_CH_9*/
    ICU_NOICUCHANNEL,/*TPU_CH_10*/
    ICU_NOICUCHANNEL,/*TPU_CH_11*/
    ICU_NOICUCHANNEL,/*TPU_CH_12*/
    ICU_NOICUCHANNEL,/*TPU_CH_13*/
    ICU_NOICUCHANNEL,/*TPU_CH_14*/
    ICU_NOICUCHANNEL,/*TPU_CH_15*/
    ICU_NOICUCHANNEL,/*TPU_CH_16*/
    ICU_NOICUCHANNEL,/*TPU_CH_17*/
    ICU_NOICUCHANNEL,/*TPU_CH_18*/
    ICU_NOICUCHANNEL,/*TPU_CH_19*/
    ICU_NOICUCHANNEL,/*TPU_CH_20*/
    ICU_NOICUCHANNEL,/*TPU_CH_21*/
    ICU_NOICUCHANNEL,/*TPU_CH_22*/
    ICU_NOICUCHANNEL,/*TPU_CH_23*/
    ICU_NOICUCHANNEL,/*TPU_CH_24*/
    ICU_NOICUCHANNEL,/*TPU_CH_25*/
    ICU_NOICUCHANNEL,/*TPU_CH_26*/
    ICU_NOICUCHANNEL,/*TPU_CH_27*/
    ICU_NOICUCHANNEL,/*TPU_CH_28*/
    ICU_NOICUCHANNEL,/*TPU_CH_29*/
    ICU_NOICUCHANNEL,/*TPU_CH_30*/
    ICU_NOICUCHANNEL,/*TPU_CH_31*/
    ICU_NOICUCHANNEL,/*FCPIT0_CH_0*/
    ICU_NOICUCHANNEL,/*FCPIT0_CH_1*/
    ICU_NOICUCHANNEL,/*FCPIT0_CH_2*/
    ICU_NOICUCHANNEL,/*FCPIT0_CH_3*/
    ICU_NOICUCHANNEL,/*FCPIT1_CH_0*/
    ICU_NOICUCHANNEL,/*FCPIT1_CH_1*/
    ICU_NOICUCHANNEL,/*FCPIT1_CH_2*/
    ICU_NOICUCHANNEL,/*FCPIT1_CH_3*/
    3,/*EFTU_0_CH_0*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_1*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_2*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_3*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_4*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_5*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_6*/
    ICU_NOICUCHANNEL,/*EFTU_0_CH_7*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_0*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_1*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_2*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_3*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_4*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_5*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_6*/
    ICU_NOICUCHANNEL,/*EFTU_1_CH_7*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_0*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_1*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_2*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_3*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_4*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_5*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_6*/
    ICU_NOICUCHANNEL,/*EFTU_2_CH_7*/
};

ICU_DATA_SECTION static const uint8 IcuChannelPartitionMapping[ICU_MAX_CHANNEL] =
{
        0U,
        0U,
        1U,
        0U
};

ICU_DATA_SECTION const Icu_ConfigType Icu_Config =
{
    (Icu_ChannelType)4U,
    &Icu_InitChannel,
    {
        NULL_PTR,
        &Icu_PortHwConf,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        &Icu_EftuTimHwConf,
    },
    &Icu_HwMap,
    IcuChannelPartitionMapping,
#if(ICU_GTB_SUPPORT == STD_ON)
    NULL_PTR,
#endif
#if (ICU_TIMESTAMP_DMA == STD_ON)
    NULL_PTR,
#endif
};
#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"
/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/


/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
