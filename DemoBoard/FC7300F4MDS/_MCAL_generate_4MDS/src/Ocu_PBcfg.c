/**
*   @file         Ocu_PBcfg.c
*   @implements   Ocu_PBcfg.c_Artifact
*   @addtogroup   ocu_driver Ocu Driver
*   @brief        Ocu Postbuild configuration source file.
*   @details      Postbuild configuration structure instances.
*
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU, TPU, EFTU
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Ocu.h"
#include "Ocu_Ftu_RegOps.h"
#include "Ftu_Reg.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"
/** 
 *  @brief Notification function
 */
#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#define OCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"

/**
 * @brief FTU channel configuration
 */
OCU_DATA_SECTION static const Ocu_ChannelConfigType Ocu_Channels_PB[OCU_MAX_CHANNELS] =
{
    {
        /** @brief OcuChannel_0 -> FTU_0_CH_0 */
        NULL_PTR,
        /** @brief Output Pin Enable */
        (boolean)TRUE,
        /** @brief Output Pin default state */
        (Ocu_PinStateType)OCU_LOW,
        /** @brief Output Pin default action*/
        (Ocu_PinActionType)OCU_TOGGLE,
        /** @brief Ocu Hw Channel */
        (uint8)0,
        /** @brief Ocu Hw Module */
        (uint8)(OCU_FTU_0),
        /** @brief Ocu Default treshold: 10000 */
        (uint32)0x00002710U,
        /** @brief Ocu channel hardware type */
        (Ocu_HwType)OCU_HW_FTU_0,
        /** @brief Ocu channel timebase */
        (Ocu_TimeBaseSel_Type)0
    },
    {
        /** @brief OcuChannel_1 -> FTU_3_CH_1 */
        NULL_PTR,
        /** @brief Output Pin Enable */
        (boolean)TRUE,
        /** @brief Output Pin default state */
        (Ocu_PinStateType)OCU_LOW,
        /** @brief Output Pin default action*/
        (Ocu_PinActionType)OCU_TOGGLE,
        /** @brief Ocu Hw Channel */
        (uint8)1,
        /** @brief Ocu Hw Module */
        (uint8)(OCU_FTU_3),
        /** @brief Ocu Default treshold: 10000 */
        (uint32)0x00002710U,
        /** @brief Ocu channel hardware type */
        (Ocu_HwType)OCU_HW_FTU_3,
        /** @brief Ocu channel timebase */
        (Ocu_TimeBaseSel_Type)0
    },
    {
        /** @brief OcuChannel_2 -> EFTU_0_TOM_0_CH_4 */
        NULL_PTR,
        /** @brief Output Pin Enable */
        (boolean)FALSE,
        /** @brief Output Pin default state */
        (Ocu_PinStateType)OCU_LOW,
        /** @brief Output Pin default action*/
        (Ocu_PinActionType)OCU_DISABLE,
        /** @brief Ocu Hw Channel */
        (uint8)4,
        /** @brief Ocu Hw Module */
        (uint8)(OCU_EFTU_0_TOM_0),
        /** @brief Ocu Default treshold: 10000 */
        (uint32)0x00002710U,
        /** @brief Ocu channel hardware type */
        (Ocu_HwType)OCU_HW_EFTU_0_TOM_0,
        /** @brief Ocu channel timebase */
        (Ocu_TimeBaseSel_Type)EFTU_TOM_TIMEBASE_SEL_TBU_CNT0
    }
};

/**
 * @brief FTU module configuration
 */
OCU_DATA_SECTION static const Ocu_Ftu_ModuleConfigType Ocu_Ftu_ModuleConfig_PB[2] =
{
    /** @brief OcuFtu_0 -> FTU_0 */
    {
        /** @brief Clock source*/
        (Ocu_FtuModuleClkSrcType)OCU_FTU_BUS_CLK,
        /** @brief Timer clock prescaler configuration*/
        (Ocu_FtuPrescalerType)OCU_FTU_PRESCALER_DIV1,
        /** @brief Timer debug config*/
        (OCU_FTU_DebugModeType)OCU_FTU_DBG_COUNTER_WORKS_CHN_WORKS,
        /** @brief Assigned Ftu module id*/
        (Ocu_Ftu_ModuleType)(OCU_FTU_0),
        /** @brief Ocu Max Counter Value */
        (uint32)65535U
    },
    /** @brief OcuFtu_1 -> FTU_3 */
    {
        /** @brief Clock source*/
        (Ocu_FtuModuleClkSrcType)OCU_FTU_BUS_CLK,
        /** @brief Timer clock prescaler configuration*/
        (Ocu_FtuPrescalerType)OCU_FTU_PRESCALER_DIV1,
        /** @brief Timer debug config*/
        (OCU_FTU_DebugModeType)OCU_FTU_DBG_COUNTER_WORKS_CHN_WORKS,
        /** @brief Assigned Ftu module id*/
        (Ocu_Ftu_ModuleType)(OCU_FTU_3),
        /** @brief Ocu Max Counter Value */
        (uint32)65535U
    }
};

#if (OCU_HAVE_EFTU == STD_ON)
/**
 * @brief EFTU TOM channel configuration
 */
OCU_DATA_SECTION static const Ocu_Eftu_ChanConfigType Ocu_Eftu_TOMChannelConfig_PB[1] =
{
    /** @brief OcuChannel_2 -> EFTU_0_TOM_0_CH_4 */
    {
        /** @brief TOM channel clock source */
        (uint32)0,
        /** @brief TOM module */
        (uint32)OCU_EFTU_0_TOM_0,
        /** @brief Ocu Max Counter Value */
        (uint32)16777215U
    }
};
#endif

/**
 * @brief FTU configuration
 */
OCU_DATA_SECTION static const Ocu_FtuConfigType Ocu_Ftu_Config_PB=
{
    /** @brief Number of FTU modules in the Ocu configuration */
    (uint8)2U,
    /** @brief Pointer to the array of FTU module enabled Ocu channel configurations */
    &Ocu_Ftu_ModuleConfig_PB
};

#if (OCU_HAVE_EFTU == STD_ON)
/**
 * @brief TOM configuration
 */
OCU_DATA_SECTION static const Ocu_eFtuConfigType Ocu_TOM_Config_PB=
{
    /** @brief Number of Tpu modules in the Ocu configuration */
    (uint8)1U,
    /** @brief Pointer to the array of Tpu module enabled Ocu channel configurations */
    &Ocu_Eftu_TOMChannelConfig_PB
};
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
OCU_DATA_SECTION static const Ocu_ChannelType  Ocu_InitHWMap_PB[OCU_HW_CHANNELS_NO]=
{
    (Ocu_ChannelType)OcuConf_OcuChannel_OcuChannel_0, /* FTU_0_CH_0*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_1*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_2*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_3*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_4*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_5*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_6*/
    (Ocu_ChannelType)255,          /*FTU_0_CH_7*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_0*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_1*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_2*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_3*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_4*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_5*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_6*/
    (Ocu_ChannelType)255,          /*FTU_1_CH_7*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_0*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_1*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_2*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_3*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_4*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_5*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_6*/
    (Ocu_ChannelType)255,          /*FTU_2_CH_7*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_0*/
    (Ocu_ChannelType)OcuConf_OcuChannel_OcuChannel_1, /* FTU_3_CH_1*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_2*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_3*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_4*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_5*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_6*/
    (Ocu_ChannelType)255,          /*FTU_3_CH_7*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_0*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_1*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_2*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_3*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_4*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_5*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_6*/
    (Ocu_ChannelType)255,          /*FTU_4_CH_7*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_0*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_1*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_2*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_3*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_4*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_5*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_6*/
    (Ocu_ChannelType)255,          /*FTU_5_CH_7*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_0*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_1*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_2*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_3*/
    (Ocu_ChannelType)OcuConf_OcuChannel_OcuChannel_2, /* EFTU_0_TOM_0_CH_4*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_5*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_6*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_0_CH_7*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_0*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_1*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_2*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_3*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_4*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_5*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_6*/
    (Ocu_ChannelType)255,          /*EFTU_0_TOM_1_CH_7*/
};
#endif


/**
 * @brief   Ocu high level configuration structure
 */
OCU_DATA_SECTION const Ocu_ConfigType Ocu_Config=
{
    /** @brief Number of configured Ocu channels */
    (Ocu_ChannelType)OCU_MAX_CHANNELS,
    /** @brief Pointer to array of Ocu channels */
    &Ocu_Channels_PB,
    /** @brief Hardware specific configuration */
    {
        /** @brief Pointer to the structure containing Ftu configuration */
        &Ocu_Ftu_Config_PB,
#if (OCU_HAVE_TPU == STD_ON)
        /** @brief Pointer to the structure containing Tpu configuration */
        NULL_PTR,
#endif
#if (OCU_HAVE_EFTU == STD_ON)
        /** @brief Pointer to the structure containing TOM channel configuration */
        &Ocu_TOM_Config_PB,
#endif
    }
    /** @brief counter direction */
#if (OCU_DOWNCOUNTING_SUPPORTED == STD_ON)
    ,
    (Ocu_CountDirectionType)OCU_UPCOUNTING
#endif
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
    ,
    &Ocu_InitHWMap_PB
#endif
#if (OCU_MULTICORE_SUPPORT == STD_ON)
    ,
    OcuChannelPartitionMapping
#endif
};
#define OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"
/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

