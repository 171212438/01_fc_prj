/**
 *   @file    Adc_PBcfg.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - Post Build configuration Adc source file.
 *   @details Post Build configuration file for Adc driver.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ADC
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       10/07/2023    QXW0030       N/A          ADC Initial Version
*   0.2.0       07/10/2023    QXW0030       N/A          Add Adc Multicore Support
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   0.4.0       20/11/2023    QXW0030       N/A          Remove unused parameters
*   0.5.0       11/01/2024    QXW0030       N/A          Add feature to config period in continuous
*                                                        mode
*   0.8.0       05/07/2024    QXW0030       N/A          Add support for Adc to use without Ptimer
*   0.8.0       18/07/2024    QXW0030       N/A          Add TMU support
*   0.8.0       01/08/2024    QXW0030       N/A          Add Ptimer load mode configuration
*   1.0.0       26/08/2024    QXW0030       N/A          Add support for sequence group mode
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
*   1.1.0       16/01/2025    QXW0030       N/A          Add DMA support for sequence group mode
*   1.3.0       19/08/2025    QXW0030       N/A          Change the sw trigger method of hardware
*                                                        groups
*   1.4.0       25/09/2025    QXW0030       N/A          Add support for FC7300F4MDDxxxT1C
*   1.5.0       20/11/2025    QXW0030       N/A          Add HSADC device support
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc.h"
#include "Adc_SarAdc_Reg.h"
#include "Adc_Ptimer_Reg.h"
#include "Adc_Tmu_Reg.h"
#include "Adc_SarAdc_Types.h"
#include "Adc_Ptimer_Types.h"
#if (STD_ON == ADC_ENABLE_HSADC_SUPPORT)
#include "Adc_HsAdc_Reg.h"
#include "Adc_HsAdc_Types.h"
#endif /* STD_ON == ADC_ENABLE_HSADC_SUPPORT */
#if (STD_ON == ADC_DMA_SUPPORT)
#include "CDD_Dma.h"
#endif /* STD_ON == ADC_DMA_SUPPORT */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
#include "CDD_TrgSel.h"
#endif /* STD_ON == ADC_ENABLE_HWGROUP_SUPPORT */


/*==================================================================================================
                                        DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/**
 * @brief          Total number of groups in partition EcucPartition_0.
 *
 */
#define ADC_GROUPS_ECUCPARTITION_0       (4U)
/**
 * @brief          Total number of groups in partition EcucPartition_1.
 *
 */
#define ADC_GROUPS_ECUCPARTITION_1       (1U)


/**
 * @brief          Total number of ADC units in partition EcucPartition_0.
 *
 */
#define ADC_SARADC_UNITS_ECUCPARTITION_0     (2U)
/**
 * @brief          Total number of ADC units in partition EcucPartition_1.
 *
 */
#define ADC_SARADC_UNITS_ECUCPARTITION_1     (1U)
/**
 * @brief          Total number of HSADC units in partition EcucPartition_0.
 *
 */
#define ADC_HSADC_UNITS_ECUCPARTITION_0      (1U)
/**
 * @brief          Total number of HSADC units in partition EcucPartition_1.
 *
 */
#define ADC_HSADC_UNITS_ECUCPARTITION_1      (0U)

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

/**
 * @brief         ADC Notification functions.
 * @details       ADC Notification functions defined inside the Plugin.
 *
 */
ADC_TEXT_SECTION extern void IoHwAb_Adc_Notification_0(void); /**< @brief for Group - 0 */

/**
 * @brief         ADC Notification functions.
 * @details       ADC Notification functions defined inside the Plugin.
 *
 */
ADC_TEXT_SECTION extern void IoHwAb_Adc_Notification_1(void); /**< @brief for Group - 1 */

/**
 * @brief         ADC Notification functions.
 * @details       ADC Notification functions defined inside the Plugin.
 *
 */
ADC_TEXT_SECTION extern void IoHwAb_Adc_Notification_2(void); /**< @brief for Group - 2 */

/**
 * @brief         ADC Notification functions.
 * @details       ADC Notification functions defined inside the Plugin.
 *
 */
ADC_TEXT_SECTION extern void IoHwAb_Adc_Notification_3(void); /**< @brief for Group - 3 */

/**
 * @brief         ADC Notification functions.
 * @details       ADC Notification functions defined inside the Plugin.
 *
 */
ADC_TEXT_SECTION extern void IoHwAb_Adc_Notification_4(void); /**< @brief for Group - 4 */



#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/**
 * @brief          Group 0 Assignments on ADC Hardware unit ADC0.
 *
 */
ADC_DATA_SECTION static const Adc_ChannelType Adc_Group0_Assignment_0[ADC_CFGSET_GROUP_0_CHANNELS] =
{
    2U,
    0U
};
/**
 * @brief          Group 1 Assignments on ADC Hardware unit ADC0.
 *
 */
ADC_DATA_SECTION static const Adc_ChannelType Adc_Group1_Assignment_0[ADC_CFGSET_GROUP_1_CHANNELS] =
{
    1U
};
/**
 * @brief          Group 2 Assignments on ADC Hardware unit ADC1.
 *
 */
ADC_DATA_SECTION static const Adc_ChannelType Adc_Group2_Assignment_1[ADC_CFGSET_GROUP_2_CHANNELS] =
{
    0U,
    1U
};
/**
 * @brief          Group 3 Assignments on ADC Hardware unit ADC2.
 *
 */
ADC_DATA_SECTION static const Adc_ChannelType Adc_Group3_Assignment_2[ADC_CFGSET_GROUP_3_CHANNELS] =
{
    0U
};
/**
 * @brief          Group 4 Assignments on ADC Hardware unit HSADC0.
 *
 */
ADC_DATA_SECTION static const Adc_ChannelType Adc_Group4_Assignment_3[ADC_CFGSET_GROUP_4_CHANNELS] =
{
    0U,
    1U
};


/**
 * @brief          Group Channel Delays on ADC Hardware unit ADC0.
 *
 */
ADC_DATA_SECTION static const uint16 Adc_Group0_Delays_0[1] =
{
    2000U
};
/**
 * @brief          Group Channel Delays on ADC Hardware unit ADC1.
 *
 */
ADC_DATA_SECTION static const uint16 Adc_Group2_Delays_1[ADC_CFGSET_GROUP_2_CHANNELS] =
{
    0U,
    500U
};


/**
 * @brief          Definition of channels on ADC Hardware unit for configuration.
 * @details        Array of Adc channels defined on ADC0
 */
ADC_DATA_SECTION static const Adc_ChannelConfigurationType Adc_ChannelsCfg_ADC0[] =
{
    /**< @brief Hardware Unit ADC0  --  ADC_SE11 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(11U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    },
    /**< @brief Hardware Unit ADC0  --  ADC_TEMP_SENSOR_SE37 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(37U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        2U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        TRUE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    },
    /**< @brief Hardware Unit ADC0  --  VBG_Buffer_SE32 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(32U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    }
};
/**
 * @brief          Definition of channels on ADC Hardware unit for configuration.
 * @details        Array of Adc channels defined on ADC1
 */
ADC_DATA_SECTION static const Adc_ChannelConfigurationType Adc_ChannelsCfg_ADC1[] =
{
    /**< @brief Hardware Unit ADC1  --  V11_PD0_SE32 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(32U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    },
    /**< @brief Hardware Unit ADC1  --  VREFH0_SE33 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(33U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    },
    /**< @brief Hardware Unit ADC1  --  ADC_SE10 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(10U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    }
};
/**
 * @brief          Definition of channels on ADC Hardware unit for configuration.
 * @details        Array of Adc channels defined on ADC2
 */
ADC_DATA_SECTION static const Adc_ChannelConfigurationType Adc_ChannelsCfg_ADC2[] =
{
    /**< @brief Hardware Unit ADC2  --  VDDA0_SE34 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(34U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    }
};
/**
 * @brief          Definition of channels on ADC Hardware unit for configuration.
 * @details        Array of Adc channels defined on HSADC0
 */
ADC_DATA_SECTION static const Adc_ChannelConfigurationType Adc_ChannelsCfg_HSADC0[] =
{
    /**< @brief Hardware Unit HSADC0  --  VBG_BUFFER_SE6 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(6U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    },
    /**< @brief Hardware Unit HSADC0  --  V25_SE7 */
    {
        /**< @brief Adc physical channel */
        (Adc_ChannelType)(7U),
        /**< @brief Adc channel resolution */
        ADC_BITS_RESOLUTION_12,
        /**< @brief Adc channel sample time option */
        0U
#if (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT)
        ,
        /**< @brief Whether the channel is a differential channel */
        FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_LIMIT_CHECK)
        ,
        /**< @brief limit check enabled */
        FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
#endif /* (STD_ON == ADC_ENABLE_LIMIT_CHECK) */
    }
};




/**
 * @brief          Definition of ADC Hw units for configuration.
 */
ADC_DATA_SECTION static const Adc_HwUnitConfigurationType Adc_HwUnitCfg[] =
{
    /**< @brief Hardware Unit ADC0 */
    {
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)0,
        /**< @brief Hardware uint type */
        ADC_INSTANCE_TYPE_SARADC,
        /**< @brief Hardware unit id */
        (Adc_HwUnitType)0,
        /**< @brief Use Ptimer with the hardware unit */
        (boolean)TRUE,
        /**< @brief Main configuration of CFG1 registers */
        ADC_CFG1_DMAEN(FALSE) |
#if (STD_ON == ADC_HWGROUP_DMA_SUPPORT)
        /* Sequence Group Mode DMA configurations */
        ADC_CFG1_SGDMAEN(FALSE) |
        ADC_CFG1_SGDMA_SEL(0U) |
#endif /* (STD_ON == ADC_HWGROUP_DMA_SUPPORT) */
        /* Conversion Mode Selection */
        ADC_CFG1_RES(ADC_BITS_RESOLUTION_12) |
        /* Data Align Selection */
        ADC_CFG1_ALIGN(0U) |
        ADC_CFG1_TRIGMODE(ADC_TRIGMODE_RISING_EDGE) |
        ADC_CFG1_TRIGSRC(ADC_TRIGSRC_PTIMER) |
        ADC_CFG1_WAIT(FALSE) |
        ADC_CFG1_AUTO_DIS(FALSE) |
        ADC_CFG1_SEQ_MOD(ADC_SEQMODE_DISCONTINUOUS_1) |
        ADC_CFG1_SEQ_LEN(0U) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ADC_CFG1_SEQGP_EN(FALSE) |
#endif
        /* Old data is preserved when overrun occurs */
        ADC_CFG1_OVRMOD(FALSE),
        /** Main configuration of CFG2 registers */
        /* ADC Startup Counter */
        ADC_CFG2_STCNT(120U) |
        /** Voltage Reference Selection */
        ADC_CFG2_REF_EXT(ADC_REF_INTERNAL) |
        /* Hardware average enable */
        ADC_CFG2_AVG_EN(FALSE) |
        /** Hardware average select */
        ADC_CFG2_AVG_LEN(ADC_AVERAGE_4) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
#if (STD_ON == ADC_SEQUENCE_INJECTION_SUPPORT)
        /* Sequence group injection configuration */
        ADC_CFG2_SEQ_INJTEN(FALSE) |
#endif /* (STD_ON == ADC_SEQUENCE_INJECTION_SUPPORT) */
        /* Sequence group priority configuration */
        ADC_CFG2_TRG_PRI(ADC_SEQ_PRIORITY_ROUND_ROBIN) |
#endif /* (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT) */
        ADC_CFG2_FWMARK(0U),
        /* Sample time options */
        ADC_SMPR_SMP_OPT0(4U) |
        ADC_SMPR_SMP_OPT1(8U) |
        ADC_SMPR_SMP_OPT2(32U) |
        ADC_SMPR_SMP_OPT3(128U),
        /** Main configuration of INT_ENABLE registers */
        ADC_INT_ENABLE_ADRDYIE(FALSE) |
        ADC_INT_ENABLE_EOSMPIE(FALSE) |
        ADC_INT_ENABLE_EOCIE(FALSE) |
        ADC_INT_ENABLE_EOSEQIE(FALSE) |
        ADC_INT_ENABLE_OVRIE(FALSE) |
        ADC_INT_ENABLE_ACMP_IE(FALSE) |
        ADC_INT_ENABLE_FIFO_RDY_IE(FALSE),
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
        /** Clock source of the ADC unit */
        (Adc_ClockSourceType)ADC_PCCCLK,
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
        0U,
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */
        /** Adc bit resolution */
        ADC_BITS_RESOLUTION_12,
        /** Adc channel pre-define array */
        Adc_ChannelsCfg_ADC0
#if (STD_ON == ADC_DMA_SUPPORT)
        ,
        /**< @brief Whether the Adc unit has a valid DMA channel */
        (boolean)FALSE,
        /**< @brief DMA instance associated with the ADC instance */
        (Dma_InstanceType)0U,
        /**< @brief DMA channel associated with the ADC instance */
        0U
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
        ,
        /**< @brief The group which enables Dma when use HwGroup */
        0U
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
#endif /* STD_ON == ADC_DMA_SUPPORT */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the ADC unit uses hardware group */
        FALSE,
        /**< @brief Hardware groups defined in the ADC unit */
        0U,
        /**< @brief Groups defined in the ADC unit */
        NULL_PTR
#endif
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        ,
        /** Ptimer Clock Settings */
        PTIMER_STATUS_CTRL_PRESCALER(PTIMER_PRE_DIVIDE_BY_1) |
        PTIMER_STATUS_CTRL_MULT(PTIMER_PRE_DIVIDER_MULT_BY_1) |
        PTIMER_STATUS_CTRL_SERR_INTEN(FALSE) |
        PTIMER_STATUS_CTRL_LDMODE(PTIMER_LOAD_VAL_IMMEDIATELY)
#endif
#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
        ,
        /**< @brief Ptimer error notification function */
        NULL_PTR
#endif /* (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... ) */
    },
    /**< @brief Hardware Unit ADC1 */
    {
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)1,
        /**< @brief Hardware uint type */
        ADC_INSTANCE_TYPE_SARADC,
        /**< @brief Hardware unit id */
        (Adc_HwUnitType)1,
        /**< @brief Use Ptimer with the hardware unit */
        (boolean)TRUE,
        /**< @brief Main configuration of CFG1 registers */
        ADC_CFG1_DMAEN(FALSE) |
#if (STD_ON == ADC_HWGROUP_DMA_SUPPORT)
        /* Sequence Group Mode DMA configurations */
        ADC_CFG1_SGDMAEN(FALSE) |
        ADC_CFG1_SGDMA_SEL(0U) |
#endif /* (STD_ON == ADC_HWGROUP_DMA_SUPPORT) */
        /* Conversion Mode Selection */
        ADC_CFG1_RES(ADC_BITS_RESOLUTION_12) |
        /* Data Align Selection */
        ADC_CFG1_ALIGN(0U) |
        ADC_CFG1_TRIGMODE(ADC_TRIGMODE_RISING_EDGE) |
        ADC_CFG1_TRIGSRC(ADC_TRIGSRC_PTIMER) |
        ADC_CFG1_WAIT(FALSE) |
        ADC_CFG1_AUTO_DIS(FALSE) |
        ADC_CFG1_SEQ_MOD(ADC_SEQMODE_DISCONTINUOUS_1) |
        ADC_CFG1_SEQ_LEN(0U) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ADC_CFG1_SEQGP_EN(FALSE) |
#endif
        /* Old data is preserved when overrun occurs */
        ADC_CFG1_OVRMOD(FALSE),
        /** Main configuration of CFG2 registers */
        /* ADC Startup Counter */
        ADC_CFG2_STCNT(120U) |
        /** Voltage Reference Selection */
        ADC_CFG2_REF_EXT(ADC_REF_INTERNAL) |
        /* Hardware average enable */
        ADC_CFG2_AVG_EN(FALSE) |
        /** Hardware average select */
        ADC_CFG2_AVG_LEN(ADC_AVERAGE_4) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
#if (STD_ON == ADC_SEQUENCE_INJECTION_SUPPORT)
        /* Sequence group injection configuration */
        ADC_CFG2_SEQ_INJTEN(FALSE) |
#endif /* (STD_ON == ADC_SEQUENCE_INJECTION_SUPPORT) */
        /* Sequence group priority configuration */
        ADC_CFG2_TRG_PRI(ADC_SEQ_PRIORITY_ROUND_ROBIN) |
#endif /* (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT) */
        ADC_CFG2_FWMARK(0U),
        /* Sample time options */
        ADC_SMPR_SMP_OPT0(2U) |
        ADC_SMPR_SMP_OPT1(8U) |
        ADC_SMPR_SMP_OPT2(32U) |
        ADC_SMPR_SMP_OPT3(128U),
        /** Main configuration of INT_ENABLE registers */
        ADC_INT_ENABLE_ADRDYIE(FALSE) |
        ADC_INT_ENABLE_EOSMPIE(FALSE) |
        ADC_INT_ENABLE_EOCIE(FALSE) |
        ADC_INT_ENABLE_EOSEQIE(FALSE) |
        ADC_INT_ENABLE_OVRIE(FALSE) |
        ADC_INT_ENABLE_ACMP_IE(FALSE) |
        ADC_INT_ENABLE_FIFO_RDY_IE(FALSE),
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
        /** Clock source of the ADC unit */
        (Adc_ClockSourceType)ADC_PCCCLK,
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
        0U,
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */
        /** Adc bit resolution */
        ADC_BITS_RESOLUTION_12,
        /** Adc channel pre-define array */
        Adc_ChannelsCfg_ADC1
#if (STD_ON == ADC_DMA_SUPPORT)
        ,
        /**< @brief Whether the Adc unit has a valid DMA channel */
        (boolean)FALSE,
        /**< @brief DMA instance associated with the ADC instance */
        (Dma_InstanceType)0U,
        /**< @brief DMA channel associated with the ADC instance */
        0U
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
        ,
        /**< @brief The group which enables Dma when use HwGroup */
        0U
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
#endif /* STD_ON == ADC_DMA_SUPPORT */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the ADC unit uses hardware group */
        FALSE,
        /**< @brief Hardware groups defined in the ADC unit */
        0U,
        /**< @brief Groups defined in the ADC unit */
        NULL_PTR
#endif
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        ,
        /** Ptimer Clock Settings */
        PTIMER_STATUS_CTRL_PRESCALER(PTIMER_PRE_DIVIDE_BY_1) |
        PTIMER_STATUS_CTRL_MULT(PTIMER_PRE_DIVIDER_MULT_BY_1) |
        PTIMER_STATUS_CTRL_SERR_INTEN(FALSE) |
        PTIMER_STATUS_CTRL_LDMODE(PTIMER_LOAD_VAL_IMMEDIATELY)
#endif
#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
        ,
        /**< @brief Ptimer error notification function */
        NULL_PTR
#endif /* (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... ) */
    },
    /**< @brief Hardware Unit ADC2 */
    {
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)2,
        /**< @brief Hardware uint type */
        ADC_INSTANCE_TYPE_SARADC,
        /**< @brief Hardware unit id */
        (Adc_HwUnitType)2,
        /**< @brief Use Ptimer with the hardware unit */
        (boolean)FALSE,
        /**< @brief Main configuration of CFG1 registers */
        ADC_CFG1_DMAEN(FALSE) |
#if (STD_ON == ADC_HWGROUP_DMA_SUPPORT)
        /* Sequence Group Mode DMA configurations */
        ADC_CFG1_SGDMAEN(FALSE) |
        ADC_CFG1_SGDMA_SEL(0U) |
#endif /* (STD_ON == ADC_HWGROUP_DMA_SUPPORT) */
        /* Conversion Mode Selection */
        ADC_CFG1_RES(ADC_BITS_RESOLUTION_12) |
        /* Data Align Selection */
        ADC_CFG1_ALIGN(0U) |
        ADC_CFG1_TRIGMODE(ADC_TRIGMODE_SW) |
        ADC_CFG1_TRIGSRC(ADC_TRIGSRC_TRGSEL) |
        ADC_CFG1_WAIT(FALSE) |
        ADC_CFG1_AUTO_DIS(FALSE) |
        ADC_CFG1_SEQ_MOD(ADC_SEQMODE_SINGLE) |
        ADC_CFG1_SEQ_LEN(0U) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ADC_CFG1_SEQGP_EN(FALSE) |
#endif
        /* Old data is preserved when overrun occurs */
        ADC_CFG1_OVRMOD(FALSE),
        /** Main configuration of CFG2 registers */
        /* ADC Startup Counter */
        ADC_CFG2_STCNT(120U) |
        /** Voltage Reference Selection */
        ADC_CFG2_REF_EXT(ADC_REF_INTERNAL) |
        /* Hardware average enable */
        ADC_CFG2_AVG_EN(FALSE) |
        /** Hardware average select */
        ADC_CFG2_AVG_LEN(ADC_AVERAGE_4) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
#if (STD_ON == ADC_SEQUENCE_INJECTION_SUPPORT)
        /* Sequence group injection configuration */
        ADC_CFG2_SEQ_INJTEN(FALSE) |
#endif /* (STD_ON == ADC_SEQUENCE_INJECTION_SUPPORT) */
        /* Sequence group priority configuration */
        ADC_CFG2_TRG_PRI(ADC_SEQ_PRIORITY_ROUND_ROBIN) |
#endif /* (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT) */
        ADC_CFG2_FWMARK(0U),
        /* Sample time options */
        ADC_SMPR_SMP_OPT0(2U) |
        ADC_SMPR_SMP_OPT1(8U) |
        ADC_SMPR_SMP_OPT2(32U) |
        ADC_SMPR_SMP_OPT3(128U),
        /** Main configuration of INT_ENABLE registers */
        ADC_INT_ENABLE_ADRDYIE(FALSE) |
        ADC_INT_ENABLE_EOSMPIE(FALSE) |
        ADC_INT_ENABLE_EOCIE(FALSE) |
        ADC_INT_ENABLE_EOSEQIE(FALSE) |
        ADC_INT_ENABLE_OVRIE(FALSE) |
        ADC_INT_ENABLE_ACMP_IE(FALSE) |
        ADC_INT_ENABLE_FIFO_RDY_IE(FALSE),
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
        /** Clock source of the ADC unit */
        (Adc_ClockSourceType)ADC_PCCCLK,
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
        0U,
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */
        /** Adc bit resolution */
        ADC_BITS_RESOLUTION_12,
        /** Adc channel pre-define array */
        Adc_ChannelsCfg_ADC2
#if (STD_ON == ADC_DMA_SUPPORT)
        ,
        /**< @brief Whether the Adc unit has a valid DMA channel */
        (boolean)FALSE,
        /**< @brief DMA instance associated with the ADC instance */
        (Dma_InstanceType)0U,
        /**< @brief DMA channel associated with the ADC instance */
        0U
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
        ,
        /**< @brief The group which enables Dma when use HwGroup */
        0U
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
#endif /* STD_ON == ADC_DMA_SUPPORT */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the ADC unit uses hardware group */
        FALSE,
        /**< @brief Hardware groups defined in the ADC unit */
        0U,
        /**< @brief Groups defined in the ADC unit */
        NULL_PTR
#endif
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        ,
        /** Ptimer Clock Settings */
        PTIMER_STATUS_CTRL_PRESCALER(PTIMER_PRE_DIVIDE_BY_1) |
        PTIMER_STATUS_CTRL_MULT(PTIMER_PRE_DIVIDER_MULT_BY_1) |
        PTIMER_STATUS_CTRL_SERR_INTEN(FALSE) |
        PTIMER_STATUS_CTRL_LDMODE(PTIMER_LOAD_VAL_IMMEDIATELY)
#endif
#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
        ,
        /**< @brief Ptimer error notification function */
        NULL_PTR
#endif /* (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... ) */
    },
    /**< @brief Hardware Unit HSADC0 */
    {
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)3,
        /**< @brief Hardware uint type */
        ADC_INSTANCE_TYPE_HSADC,
        /**< @brief Hardware unit id */
        (Adc_HwUnitType)0,
        /**< @brief Use Ptimer with the hardware unit */
        (boolean)FALSE,
        /**< @brief Main configuration of CFG1 registers */
        HSADC_CFG1_DMAEN(FALSE) |
#if (STD_ON == ADC_HWGROUP_DMA_SUPPORT)
        /* Sequence Group Mode DMA configurations */
        HSADC_CFG1_SGDMAEN(FALSE) |
        HSADC_CFG1_SGDMA_SEL(0U) |
#endif /* (STD_ON == ADC_HWGROUP_DMA_SUPPORT) */
        /* Data Align Selection */
        HSADC_CFG1_ALIGN(0U) |
        HSADC_CFG1_TRIGMODE(HSADC_TRGMODE_SW) |
        HSADC_CFG1_TRIGSRC(HSADC_TRGSRC_TRGSEL) |
        HSADC_CFG1_WAIT(FALSE) |
        HSADC_CFG1_AUTO_DIS(FALSE) |
        HSADC_CFG1_SEQ_MOD(HSADC_SEQMODE_SINGLE) |
        HSADC_CFG1_SEQ_LEN(0U) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        HSADC_CFG1_SEQGP_EN(FALSE) |
#endif
        /* Old data is preserved when overrun occurs */
        HSADC_CFG1_OVRMOD(FALSE),
        /** Main configuration of CFG2 registers */
        /* ADC Startup Counter */
        HSADC_CFG2_STCNT(24U) |
        /* Hardware average enable */
        HSADC_CFG2_AVG_EN(FALSE) |
        /** Hardware average select */
        HSADC_CFG2_AVG_LEN(ADC_AVERAGE_4) |
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        /* Sequence group priority configuration */
        HSADC_CFG2_TRG_PRI(ADC_SEQ_PRIORITY_ROUND_ROBIN) |
#endif /* (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT) */
        HSADC_CFG2_SMP_SPARE_EN(TRUE) |
        HSADC_CFG2_FWMARK(0U) |
        HSADC_CFG2_EXT_CH_EN(FALSE),
        /* Sample time options */
        HSADC_SMPR_SMP_OPT0(6U) |
        HSADC_SMPR_SMP_OPT1(8U) |
        HSADC_SMPR_SMP_OPT2(32U) |
        HSADC_SMPR_SMP_OPT3(128U),
        /** Main configuration of INT_ENABLE registers */
        HSADC_INT_ENABLE_ADRDYIE(FALSE) |
        HSADC_INT_ENABLE_EOSMPIE(FALSE) |
        HSADC_INT_ENABLE_EOCIE(FALSE) |
        HSADC_INT_ENABLE_EOSEQIE(FALSE) |
        HSADC_INT_ENABLE_OVRIE(FALSE) |
        HSADC_INT_ENABLE_ACMP_IE(FALSE) |
        HSADC_INT_ENABLE_FIFO_RDY_IE(FALSE) |
        HSADC_INT_ENABLE_TRGERR_IE(FALSE) |
        HSADC_INT_ENABLE_RPCNT_RDY_IE(FALSE) |
        HSADC_INT_ENABLE_FCR_R_IE(FALSE) |
        HSADC_INT_ENABLE_FCR_F_IE(FALSE),
#if (ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON)
        /** Clock source of the ADC unit */
        (Adc_ClockSourceType)ADC_PCCCLK,
#endif /* ADC_ENABLE_CLKSRC_CONFIGURATION == STD_ON */
#if (ADC_PRESCALER_CONF_FEATURE == STD_ON)
        0U,
#endif /* ADC_PRESCALER_CONF_FEATURE == STD_ON */
        /** Adc bit resolution */
        ADC_BITS_RESOLUTION_12,
        /** Adc channel pre-define array */
        Adc_ChannelsCfg_HSADC0
#if (STD_ON == ADC_DMA_SUPPORT)
        ,
        /**< @brief Whether the Adc unit has a valid DMA channel */
        (boolean)TRUE,
        /**< @brief DMA instance associated with the ADC instance */
        DMA_INSTANCE_0,
        /**< @brief DMA channel associated with the ADC instance */
        2U
#if ((ADC_ENABLE_HWGROUP_SUPPORT == STD_ON) && (ADC_HWGROUP_DMA_SUPPORT == STD_ON))
        ,
        /**< @brief The group which enables Dma when use HwGroup */
        0U
#endif /* ADC_ENABLE_HWGROUP_SUPPORT == STD_ON && ADC_HWGROUP_DMA_SUPPORT == STD_ON */
#endif /* STD_ON == ADC_DMA_SUPPORT */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the ADC unit uses hardware group */
        FALSE,
        /**< @brief Hardware groups defined in the ADC unit */
        0U,
        /**< @brief Groups defined in the ADC unit */
        NULL_PTR
#endif
#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
        ,
        /** Ptimer Clock Settings */
        PTIMER_STATUS_CTRL_PRESCALER(PTIMER_PRE_DIVIDE_BY_1) |
        PTIMER_STATUS_CTRL_MULT(PTIMER_PRE_DIVIDER_MULT_BY_1) |
        PTIMER_STATUS_CTRL_SERR_INTEN(FALSE) |
        PTIMER_STATUS_CTRL_LDMODE(PTIMER_LOAD_VAL_IMMEDIATELY)
#endif
#if (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) || \
     defined(ADC_UNIT_2_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_3_PTIMER_ERR_ISR_USED))
        ,
        /**< @brief Ptimer error notification function */
        NULL_PTR
#endif /* (defined(ADC_UNIT_0_PTIMER_ERR_ISR_USED) || defined(ADC_UNIT_1_PTIMER_ERR_ISR_USED) ... ) */
    }
};


/**
 * @brief          Definition of ADC Hw units for configuration in partition EcucPartition_0.
 */
ADC_DATA_SECTION static const Adc_HwUnitConfigurationType *const Adc_SarAdcCfgPtr_EcucPartition_0[] =
{
    /**< @brief Hardware Unit ADC0 */
    &Adc_HwUnitCfg[0],
    /**< @brief Hardware Unit ADC1 */
    &Adc_HwUnitCfg[1]
};

/**
 * @brief          Definition of ADC Hw units for configuration in partition EcucPartition_1.
 */
ADC_DATA_SECTION static const Adc_HwUnitConfigurationType *const Adc_SarAdcCfgPtr_EcucPartition_1[] =
{
    /**< @brief Hardware Unit ADC2 */
    &Adc_HwUnitCfg[2]
};

/**
 * @brief          Definition of HSADC Hw units for configuration in partition EcucPartition_0.
 */
ADC_DATA_SECTION static const Adc_HwUnitConfigurationType *const Adc_HsAdcCfgPtr_EcucPartition_0[] =
{
    /**< @brief Hardware Unit HSADC0 */
    &Adc_HwUnitCfg[3]
};



/**
 * @brief          Definition of all ADC groups for configuration.
 */
ADC_DATA_SECTION static const Adc_GroupConfigurationType Adc_GroupsCfg[] =
{
    /**< @brief Group0 -- Hardware Unit ADC0 */
    {
        /**< @brief Adc group id */
        (Adc_GroupType)0,
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)0,
        /**< @brief Core Id of the Adc group */
        (uint8)0U,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        (Adc_GroupPriorityType)(0U),
#endif
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW,
#if (STD_ON == ADC_HW_TRIGGER_API)
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_RISING_EDGE,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
        /**< @brief Adc result data transfer type */
        ADC_TRANSFER_TYPE_INTERRUPT,
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IoHwAb_Adc_Notification_0,
#endif /* (STD_ON == ADC_GRP_NOTIF_CAPABILITY) */
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group0_Assignment_0,
        /**< @brief Channel Delays assigned to the group*/
        Adc_Group0_Delays_0,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_0_CHANNELS,
        /**< @brief Enables or Disables the ADC Back to Back configuration for Group channels */
        (boolean)TRUE
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
        ,
        /**< @brief Whether the group is a group for differential channels */
        (boolean)FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the group is a hardware group */
        (boolean)FALSE,
        /**< @brief The hardware index of the group in the Adc Unit */
        (uint8)0U,
        /**< @brief the start channel index of the group */
        (Adc_ChannelIndexType)0U,
        /**< @brief the software trigger channel of the group if triggered by software */
        (uint8)0U
#endif /* STD_ON == ADC_ENABLE_HWGROUP_SUPPORT */
#if (STD_OFF == ADC_SET_ADC_HARDWARE_AVERAGE_ONCE)
        ,
        /**< @brief Group Hardware Average Settings */
        (boolean)FALSE,
        ADC_AVERAGE_4
#endif /* STD_OFF == ADC_SET_ADC_CONV_TIME_ONCE */
#if (STD_ON == ADC_ENABLE_PTIMER_SUPPORT)
        ,
        /**< @brief Use Ptimer with the Adc group */
        (boolean)TRUE,
#if (STD_ON == ADC_CFG3_SUPPORT)
        /**< @brief Select the CoCo signal to TrgSel */
        (Adc_ChannelIndexType)1U,
#endif /* STD_ON == ADC_CFG3_SUPPORT */
        /**< @brief Enables or Disables the ADC pre-trigger delay configuration for each Group Channel */
        (boolean)TRUE,
        (uint16)0
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT */
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
        ,
        /**< @brief Do not use Ptimer period for continuous mode */
        (boolean)FALSE,
        /**< @brief The Ptimer period for continuous mode */
        (uint16)0U
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT || STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
    },
    /**< @brief Group1 -- Hardware Unit ADC0 */
    {
        /**< @brief Adc group id */
        (Adc_GroupType)1,
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)0,
        /**< @brief Core Id of the Adc group */
        (uint8)0U,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        (Adc_GroupPriorityType)(0U),
#endif
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW,
#if (STD_ON == ADC_HW_TRIGGER_API)
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_RISING_EDGE,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
        /**< @brief Adc result data transfer type */
        ADC_TRANSFER_TYPE_INTERRUPT,
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IoHwAb_Adc_Notification_1,
#endif /* (STD_ON == ADC_GRP_NOTIF_CAPABILITY) */
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group1_Assignment_0,
        /**< @brief Channel Delays assigned to the group*/
        NULL_PTR,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_1_CHANNELS,
        /**< @brief Enables or Disables the ADC Back to Back configuration for Group channels */
        (boolean)TRUE
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
        ,
        /**< @brief Whether the group is a group for differential channels */
        (boolean)FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the group is a hardware group */
        (boolean)FALSE,
        /**< @brief The hardware index of the group in the Adc Unit */
        (uint8)1U,
        /**< @brief the start channel index of the group */
        (Adc_ChannelIndexType)2U,
        /**< @brief the software trigger channel of the group if triggered by software */
        (uint8)0U
#endif /* STD_ON == ADC_ENABLE_HWGROUP_SUPPORT */
#if (STD_OFF == ADC_SET_ADC_HARDWARE_AVERAGE_ONCE)
        ,
        /**< @brief Group Hardware Average Settings */
        (boolean)FALSE,
        ADC_AVERAGE_4
#endif /* STD_OFF == ADC_SET_ADC_CONV_TIME_ONCE */
#if (STD_ON == ADC_ENABLE_PTIMER_SUPPORT)
        ,
        /**< @brief Use Ptimer with the Adc group */
        (boolean)TRUE,
#if (STD_ON == ADC_CFG3_SUPPORT)
        /**< @brief Select the CoCo signal to TrgSel */
        (Adc_ChannelIndexType)0U,
#endif /* STD_ON == ADC_CFG3_SUPPORT */
        /**< @brief Enables or Disables the ADC pre-trigger delay configuration for each Group Channel */
        (boolean)FALSE,
        (uint16)0
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT */
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
        ,
        /**< @brief Do not use Ptimer period for continuous mode */
        (boolean)FALSE,
        /**< @brief The Ptimer period for continuous mode */
        (uint16)0U
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT || STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
    },
    /**< @brief Group2 -- Hardware Unit ADC1 */
    {
        /**< @brief Adc group id */
        (Adc_GroupType)2,
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)1,
        /**< @brief Core Id of the Adc group */
        (uint8)0U,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        (Adc_GroupPriorityType)(0U),
#endif
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_HW,
#if (STD_ON == ADC_HW_TRIGGER_API)
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_RISING_EDGE,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
        /**< @brief Adc result data transfer type */
        ADC_TRANSFER_TYPE_INTERRUPT,
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IoHwAb_Adc_Notification_2,
#endif /* (STD_ON == ADC_GRP_NOTIF_CAPABILITY) */
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group2_Assignment_1,
        /**< @brief Channel Delays assigned to the group*/
        Adc_Group2_Delays_1,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_2_CHANNELS,
        /**< @brief Enables or Disables the ADC Back to Back configuration for Group channels */
        (boolean)FALSE
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
        ,
        /**< @brief Whether the group is a group for differential channels */
        (boolean)FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the group is a hardware group */
        (boolean)FALSE,
        /**< @brief The hardware index of the group in the Adc Unit */
        (uint8)0U,
        /**< @brief the start channel index of the group */
        (Adc_ChannelIndexType)0U,
        /**< @brief the software trigger channel of the group if triggered by software */
        (uint8)0U
#endif /* STD_ON == ADC_ENABLE_HWGROUP_SUPPORT */
#if (STD_OFF == ADC_SET_ADC_HARDWARE_AVERAGE_ONCE)
        ,
        /**< @brief Group Hardware Average Settings */
        (boolean)FALSE,
        ADC_AVERAGE_4
#endif /* STD_OFF == ADC_SET_ADC_CONV_TIME_ONCE */
#if (STD_ON == ADC_ENABLE_PTIMER_SUPPORT)
        ,
        /**< @brief Use Ptimer with the Adc group */
        (boolean)TRUE,
#if (STD_ON == ADC_CFG3_SUPPORT)
        /**< @brief Select the CoCo signal to TrgSel */
        (Adc_ChannelIndexType)1U,
#endif /* STD_ON == ADC_CFG3_SUPPORT */
        /**< @brief Enables or Disables the ADC pre-trigger delay configuration for each Group Channel */
        (boolean)TRUE,
        (uint16)0
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT */
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
        ,
        /**< @brief Do not use Ptimer period for continuous mode */
        (boolean)FALSE,
        /**< @brief The Ptimer period for continuous mode */
        (uint16)0U
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT || STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
    },
    /**< @brief Group3 -- Hardware Unit ADC2 */
    {
        /**< @brief Adc group id */
        (Adc_GroupType)3,
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)2,
        /**< @brief Core Id of the Adc group */
        (uint8)1U,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        (Adc_GroupPriorityType)(0U),
#endif
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW,
#if (STD_ON == ADC_HW_TRIGGER_API)
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_RISING_EDGE,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
        /**< @brief Adc result data transfer type */
        ADC_TRANSFER_TYPE_INTERRUPT,
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IoHwAb_Adc_Notification_3,
#endif /* (STD_ON == ADC_GRP_NOTIF_CAPABILITY) */
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group3_Assignment_2,
        /**< @brief Channel Delays assigned to the group*/
        NULL_PTR,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_3_CHANNELS,
        /**< @brief Enables or Disables the ADC Back to Back configuration for Group channels */
        (boolean)TRUE
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
        ,
        /**< @brief Whether the group is a group for differential channels */
        (boolean)FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the group is a hardware group */
        (boolean)FALSE,
        /**< @brief The hardware index of the group in the Adc Unit */
        (uint8)0U,
        /**< @brief the start channel index of the group */
        (Adc_ChannelIndexType)0U,
        /**< @brief the software trigger channel of the group if triggered by software */
        (uint8)0U
#endif /* STD_ON == ADC_ENABLE_HWGROUP_SUPPORT */
#if (STD_OFF == ADC_SET_ADC_HARDWARE_AVERAGE_ONCE)
        ,
        /**< @brief Group Hardware Average Settings */
        (boolean)FALSE,
        ADC_AVERAGE_4
#endif /* STD_OFF == ADC_SET_ADC_CONV_TIME_ONCE */
#if (STD_ON == ADC_ENABLE_PTIMER_SUPPORT)
        ,
        /**< @brief Use Ptimer with the Adc group */
        (boolean)FALSE,
#if (STD_ON == ADC_CFG3_SUPPORT)
        /**< @brief Select the CoCo signal to TrgSel */
        (Adc_ChannelIndexType)0U,
#endif /* STD_ON == ADC_CFG3_SUPPORT */
        /**< @brief Enables or Disables the ADC pre-trigger delay configuration for each Group Channel */
        (boolean)FALSE,
        (uint16)0
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT */
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
        ,
        /**< @brief Do not use Ptimer period for continuous mode */
        (boolean)FALSE,
        /**< @brief The Ptimer period for continuous mode */
        (uint16)0U
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT || STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
    },
    /**< @brief Group4 -- Hardware Unit HSADC0 */
    {
        /**< @brief Adc group id */
        (Adc_GroupType)4,
        /**< @brief Hardware unit logical Id */
        (Adc_HwUnitType)3,
        /**< @brief Core Id of the Adc group */
        (uint8)0U,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        (Adc_GroupPriorityType)(0U),
#endif
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW,
#if (STD_ON == ADC_HW_TRIGGER_API)
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_RISING_EDGE,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
        /**< @brief Adc result data transfer type */
        ADC_TRANSFER_TYPE_INTERRUPT,
#if (STD_ON == ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IoHwAb_Adc_Notification_4,
#endif /* (STD_ON == ADC_GRP_NOTIF_CAPABILITY) */
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group4_Assignment_3,
        /**< @brief Channel Delays assigned to the group*/
        NULL_PTR,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_4_CHANNELS,
        /**< @brief Enables or Disables the ADC Back to Back configuration for Group channels */
        (boolean)TRUE
#if ((STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT))
        ,
        /**< @brief Whether the group is a group for differential channels */
        (boolean)FALSE
#endif /* (STD_ON == ADC_ENABLE_DIFF_CHANNEL_SUPPORT) && (STD_OFF == ADC_MIXED_DIFF_CHANNEL_SUPPORT) */
#if (STD_ON == ADC_ENABLE_HWGROUP_SUPPORT)
        ,
        /**< @brief Whether the group is a hardware group */
        (boolean)FALSE,
        /**< @brief The hardware index of the group in the Adc Unit */
        (uint8)0U,
        /**< @brief the start channel index of the group */
        (Adc_ChannelIndexType)2U,
        /**< @brief the software trigger channel of the group if triggered by software */
        (uint8)0U
#endif /* STD_ON == ADC_ENABLE_HWGROUP_SUPPORT */
#if (STD_OFF == ADC_SET_ADC_HARDWARE_AVERAGE_ONCE)
        ,
        /**< @brief Group Hardware Average Settings */
        (boolean)FALSE,
        ADC_AVERAGE_4
#endif /* STD_OFF == ADC_SET_ADC_CONV_TIME_ONCE */
#if (STD_ON == ADC_ENABLE_PTIMER_SUPPORT)
        ,
        /**< @brief Use Ptimer with the Adc group */
        (boolean)FALSE,
#if (STD_ON == ADC_CFG3_SUPPORT)
        /**< @brief Select the CoCo signal to TrgSel */
        (Adc_ChannelIndexType)0U,
#endif /* STD_ON == ADC_CFG3_SUPPORT */
        /**< @brief Enables or Disables the ADC pre-trigger delay configuration for each Group Channel */
        (boolean)FALSE,
        (uint16)0
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT */
#if ((STD_ON == ADC_ENABLE_PTIMER_SUPPORT) || (STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT))
        ,
        /**< @brief Do not use Ptimer period for continuous mode */
        (boolean)FALSE,
        /**< @brief The Ptimer period for continuous mode */
        (uint16)0U
#endif /* STD_ON == ADC_ENABLE_PTIMER_SUPPORT || STD_ON == ADC_PERIODIC_TRIGGER_SUPPORT */
    }
};


/**
 * @brief          Definition of all ADC groups for configuration in partition EcucPartition_0.
 */
ADC_DATA_SECTION static const Adc_GroupConfigurationType *const Adc_GroupCfgPtr_EcucPartition_0[] =
{
    /**< @brief Group0 -- Hardware Unit ADC0 */
    &Adc_GroupsCfg[0],
    /**< @brief Group1 -- Hardware Unit ADC0 */
    &Adc_GroupsCfg[1],
    /**< @brief Group2 -- Hardware Unit ADC1 */
    &Adc_GroupsCfg[2],
    /**< @brief Group4 -- Hardware Unit HSADC0 */
    &Adc_GroupsCfg[4]
};
/**
 * @brief          Definition of all ADC groups for configuration in partition EcucPartition_1.
 */
ADC_DATA_SECTION static const Adc_GroupConfigurationType *const Adc_GroupCfgPtr_EcucPartition_1[] =
{
    /**< @brief Group3 -- Hardware Unit ADC2 */
    &Adc_GroupsCfg[3]
};


/**
 * @brief          Definition of TMU Hw units for configuration in partition EcucPartition_0.
 */
ADC_DATA_SECTION static const Adc_TmuUnitConfigurationType Adc_TmuUnitCfg_EcucPartition_0[] =
{
    /**< @brief TMU Hardware Unit TMU0 */
    {
        /**< @brief Hardware unit id */
        (Adc_HwUnitType)0U,
        /**< @brief Voltage based tempsensor configurations */
#if (ADC_TMU_SUPPORT_START_CNT == STD_ON)
        TMU_TV_CTRL_TV_START_CNT(1) |
#endif /* ADC_TMU_SUPPORT_START_CNT == STD_ON */
#if (ADC_TMU_SUPPORT_STOP_MODE == STD_ON)
        TMU_TV_CTRL_TV_STOP_EN(FALSE) |
#endif /* ADC_TMU_SUPPORT_STOP_MODE == STD_ON */
        0U,
#if (ADC_TMU_SUPPORT_TF == STD_ON)
        /**< @brief Whether to use flag based tempsensor */
        TRUE,
        /**< @brief Flag based tempsensor configurations */
#if (ADC_TMU_SUPPORT_STOP_MODE == STD_ON)
        TMU_TF_CTRL_TF_STOP_EN(FALSE) |
#endif /* ADC_TMU_SUPPORT_STOP_MODE == STD_ON */
        TMU_TF_CTRL_TF_START_CNT(1) |
        TMU_TF_CTRL_TF_HYSOFF(FALSE) |
        TMU_TF_CTRL_TF_FILT_BYP(FALSE) |
        TMU_TF_CTRL_TF_125F_IE(FALSE) |
        TMU_TF_CTRL_TF_150F_IE(FALSE),
        /**< @brief Temperature over 125 C notification */
        NULL_PTR,
        /**< @brief Temperature over 150 C notification */
        NULL_PTR
#endif /* ADC_TMU_SUPPORT_TF == STD_ON */
    }
};


/**
 * @brief          ADC Hardware Unit index to logical unit mapping configuration in partition EcucPartition_0.
 */
ADC_DATA_SECTION static const Adc_HwUnitType Adc_SarAdcIndexCfg_EcucPartition_0[] =
{
    /* ADC0 parameters are defined at Adc_HwUnitCfg[0] */
    0U,
    /* ADC1 parameters are defined at Adc_HwUnitCfg[1] */
    1U,
    /* ADC2 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID,
    /* ADC3 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID,
    /* ADC4 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID,
    /* ADC5 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID
};

/**
 * @brief          ADC Hardware Unit index to logical unit mapping configuration in partition EcucPartition_1.
 */
ADC_DATA_SECTION static const Adc_HwUnitType Adc_SarAdcIndexCfg_EcucPartition_1[] =
{
    /* ADC0 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* ADC1 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* ADC2 parameters are defined at Adc_HwUnitCfg[2] */
    2U,
    /* ADC3 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* ADC4 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* ADC5 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID
};

/**
 * @brief          HSADC Hardware Unit index to logical unit mapping configuration in partition EcucPartition_0.
 */
ADC_DATA_SECTION static const Adc_HwUnitType Adc_HsAdcIndexCfg_EcucPartition_0[] =
{
    /* HSADC0 parameters are defined at Adc_HwUnitCfg[3] */
    3U,
    /* HSADC1 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID,
    /* HSADC2 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID,
    /* HSADC3 is not used in partition EcucPartition_0 */
    ADC_UNIT_INVALID
};

/**
 * @brief          HSADC Hardware Unit index to logical unit mapping configuration in partition EcucPartition_1.
 */
ADC_DATA_SECTION static const Adc_HwUnitType Adc_HsAdcIndexCfg_EcucPartition_1[] =
{
    /* HSADC0 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* HSADC1 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* HSADC2 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID,
    /* HSADC3 is not used in partition EcucPartition_1 */
    ADC_UNIT_INVALID
};



#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/**
 * @brief          ADC driver Configuration structure in partition EcucPartition_0.
 */
ADC_DATA_SECTION const Adc_ConfigType Adc_Config_EcucPartition_0 =
{
    /**< @brief Hw unit configurations */
    Adc_HwUnitCfg,
    /**< @brief Adc group configurations */
    Adc_GroupsCfg,
    /**< @brief Pointer to group configurations */
    Adc_GroupCfgPtr_EcucPartition_0,
    /**< @brief total number of groups */
    (Adc_GroupType)ADC_GROUPS_ECUCPARTITION_0,
    /**< @brief Pointer to SAR ADC configurations */
    Adc_SarAdcCfgPtr_EcucPartition_0,
    /**< @brief SAR ADC unit index to logical unit map */
    Adc_SarAdcIndexCfg_EcucPartition_0,
    /**< @brief Total number of used SAR ADC units in the current configuration */
    (Adc_HwUnitType)ADC_SARADC_UNITS_ECUCPARTITION_0,
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    /**< @brief Pointer to HSADC configurations */
    Adc_HsAdcCfgPtr_EcucPartition_0,
    /**< @brief HSADC unit index to logical unit map */
    Adc_HsAdcIndexCfg_EcucPartition_0,
    /**< @brief Total number of used HSADC units in the current configuration */
    (Adc_HwUnitType)ADC_HSADC_UNITS_ECUCPARTITION_0,
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */
#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
    /**< @brief pointer to Tmu Hw unit configurations */
    Adc_TmuUnitCfg_EcucPartition_0,
    /**< @brief Total number of used Tmu hardware units */
    (uint8)1U,
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */
    /**< @brief CoreId of the configuration */
    0U
};
/**
 * @brief          ADC driver Configuration structure in partition EcucPartition_1.
 */
ADC_DATA_SECTION const Adc_ConfigType Adc_Config_EcucPartition_1 =
{
    /**< @brief Hw unit configurations */
    Adc_HwUnitCfg,
    /**< @brief Adc group configurations */
    Adc_GroupsCfg,
    /**< @brief Pointer to group configurations */
    Adc_GroupCfgPtr_EcucPartition_1,
    /**< @brief total number of groups */
    (Adc_GroupType)ADC_GROUPS_ECUCPARTITION_1,
    /**< @brief Pointer to SAR ADC configurations */
    Adc_SarAdcCfgPtr_EcucPartition_1,
    /**< @brief SAR ADC unit index to logical unit map */
    Adc_SarAdcIndexCfg_EcucPartition_1,
    /**< @brief Total number of used SAR ADC units in the current configuration */
    (Adc_HwUnitType)ADC_SARADC_UNITS_ECUCPARTITION_1,
#if (ADC_ENABLE_HSADC_SUPPORT == STD_ON)
    /**< @brief Pointer to HSADC configurations */
    NULL_PTR,
    /**< @brief HSADC unit index to logical unit map */
    Adc_HsAdcIndexCfg_EcucPartition_1,
    /**< @brief Total number of used HSADC units in the current configuration */
    (Adc_HwUnitType)ADC_HSADC_UNITS_ECUCPARTITION_1,
#endif /* ADC_ENABLE_HSADC_SUPPORT == STD_ON */
#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
    /**< @brief pointer to Tmu Hw unit configurations */
    NULL_PTR,
    /**< @brief Total number of used Tmu hardware units */
    (uint8)0U,
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */
    /**< @brief CoreId of the configuration */
    1U
};




#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

