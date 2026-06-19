/**
 * @file HwA_scm.h
 * @author Flagchip055
 * @brief Hardware access layer for SCM
 * @version 0.2.0
 * @date 2023-02-10
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 */
/* ********************************************************************************
   *   Revision History:
   *
   *   Version     Date          Initials      CR#          Descriptions
   *   ---------   ----------    ------------  ----------   ---------------
   *   0.1.0      2023-12-15    Flagchip055     N/A          First version for FC7300
   *   0.2.0      2023-02-10    Flagchip055     N/A          Add more functions
   ******************************************************************************** */

#ifndef _HWA_SCM_H_
#define _HWA_SCM_H_
#include "flexcore_device_header.h"
#include "flexcore_scm_regs.h"

/********* Local typedef ************/

/**
 * @brief WPB cpu type
 *
 */
typedef enum
{
    SCM_WP_CPU_ALL  = 0U,  /*!< All CPUs are allowed to write this peripheral */
    SCM_WP_CPU_0    = 1U,  /*!< Only CPU0 is allowed to control this peripheral */
    SCM_WP_CPU_1    = 2U,  /*!< Only CPU1 is allowed to control this peripheral */
    SCM_WP_CPU_2    = 3U,  /*!< Only CPU2 is allowed to control this peripheral */
    SCM_WP_CPU_NONE = 4U   /*!< No CPU is allowed to control this peripheral */
} SCM_WPB_CpuType;

/**
 * @brief FCSPI monitor type
 *
 */
typedef enum
{
    SCM_MON_FCSPI0 = 0U,  /*!< Monitor FCSPI0's transmit interface */
    SCM_MON_FCSPI1,       /*!< Monitor FCSPI1's transmit interface */
    SCM_MON_FCSPI2,       /*!< Monitor FCSPI2's transmit interface */
    SCM_MON_FCSPI3,       /*!< Monitor FCSPI3's transmit interface */
    SCM_MON_FCSPI4,       /*!< Monitor FCSPI4's transmit interface */
    SCM_MON_FCSPI5,       /*!< Monitor FCSPI5's transmit interface */
    SCM_MON_FCSPI6,       /*!< Monitor FCSPI6's transmit interface */
    SCM_MON_FCSPI7        /*!< Monitor FCSPI7's transmit interface */
} SCM_FCSPIxType;

/**
 * @brief FCUART monitor type
 *
 */
typedef enum
{
    SCM_MON_FCUART0 = 0U,  /*!< Monitor FCUART0's transmit interface */
    SCM_MON_FCUART1,       /*!< Monitor FCUART1's transmit interface */
    SCM_MON_FCUART2,       /*!< Monitor FCUART2's transmit interface */
    SCM_MON_FCUART3,       /*!< Monitor FCUART3's transmit interface */
    SCM_MON_FCUART4,       /*!< Monitor FCUART4's transmit interface */
    SCM_MON_FCUART5,       /*!< Monitor FCUART5's transmit interface */
    SCM_MON_FCUART6,       /*!< Monitor FCUART6's transmit interface */
    SCM_MON_FCUART7,       /*!< Monitor FCUART7's transmit interface */
    SCM_MON_FCUART8,       /*!< Monitor FCUART8's transmit interface */
    SCM_MON_FCUART9,       /*!< Monitor FCUART9's transmit interface */
    SCM_MON_FCUART10,      /*!< Monitor FCUART10's transmit interface */
    SCM_MON_FCUART11,      /*!< Monitor FCUART11's transmit interface */
    SCM_MON_FCUART12,      /*!< Monitor FCUART12's transmit interface */
    SCM_MON_FCUART13,      /*!< Monitor FCUART13's transmit interface */
    SCM_MON_FCUART14,      /*!< Monitor FCUART14's transmit interface */
    SCM_MON_FCUART15       /*!< Monitor FCUART15's transmit interface */
} SCM_MON_FCUARTxType;

/**
 * @brief RGMII clock select type
 *
 */
typedef enum
{
    SCM_NONE_CLK = 0U,  /*!< RGMII Clock Select 0 */
    SCM_ENET_REF_CLK,   /*!< RGMII Clock Select ENET REF CLK */
    SCM_PLL0_DIVH_CLK,  /*!< RGMII Clock Select PLL0_DIVH */
    SCM_PLL1_DIVH_CLK   /*!< RGMII Clock Select PLL1_DIVH */
} SCM_EnetRgmiiClkSelType;

/**
 * @brief ENET TX clock selection type
 *
 */
typedef enum
{
    SCM_RESERVE_CLK = 0U,  /*!< ENET TX Clock Select Reserve */
    SCM_PLL0_DIVL_CLK,     /*!< ENET TX Clock Select PLL0_DIVL */
    SCM_FOSC_CLK,          /*!< ENET TX Clock Select FOSC */
    SCM_ENET_TX_CLK        /*!< ENET TX Clock Select ENET TX CLK */
} SCM_EnetTxClkSelType;

/**
 * @brief ENET MAC0 timer output buffer enable type
 *
 */
typedef enum
{
    SCM_ENETMAC0_TIMER0 = 1U,  /*!< ENET MAC0 timer 0 Output Buffer Enable */
    SCM_ENETMAC0_TIMER1 = 2U,  /*!< ENET MAC0 timer 1 Output Buffer Enable */
    SCM_ENETMAC0_TIMER2 = 4U,  /*!< ENET MAC0 timer 2 Output Buffer Enable */
    SCM_ENETMAC0_TIMER3 = 8U   /*!< ENET MAC0 timer 3 Output Buffer Enable */
} SCM_EnetMac0TimerType;

/**
 * @brief PHY Selection type
 *
 */
typedef enum
{
    SCM_PHYSEL_OTHERS = 0U,  /*!< RGMII disable, RMII disable,  enet_tx_clk is 0, enet phy sel 0 */
    SCM_PHYSEL_RGMII  = 1U,  /*!< RGMII enable,  RMII disable,  enet_tx_clk is 2, enet phy sel 1 */
    SCM_PHYSEL_RMII   = 4U   /*!< RMII  enable,  RGMII disable, enet_tx_clk is 1, enet phy sel 4 */
} SCM_PhySelType;

/**
 * @brief ENET PTP clock selection type
 *
 */
typedef enum
{
    SCM_PTP_PCC_CLK = 0U,  /*!< Select from PCC clock */
    SCM_PTP_ENET_TX_CLK,   /*!< Select from ENET_TX clock pin input */
    SCM_PTP_ENET_REF_CLK,  /*!< Select from ENET_REF clock pin input */
    SCM_PTP_RESERVE        /*!< Reserved */
} SCM_PtpClkSelType;

/**
 * @brief PTIMER BB select
 *
 */
typedef enum
{
    SCM_PTIMER_BTB_SINGLE = 0U,  /*!< Select from PCC clock */
    SCM_PTIMER_BTB_COMBINE       /*!< Select from PCC clock */
} SCM_PTimerBTBSelType;

/**
 * @brief FTUx output source selection type
 *
 */
typedef enum
{
    SCM_FTU_OUTPUT_STD = 0U,  /*!< FTUx CHx output will direct route to corresponding pad(standard) */
    SCM_FTU_OUT_COMBINE       /*!< FTUx pad output is equal to FTUx CHx output & FTUx CH1 output(combine) */
} SCM_FTU_OutputSelType;

/**
 * @brief FTU2 CH1 input selection type
 *
 */
typedef enum
{
    SCM_FTU_INPUT_STD = 0U,  /*!< FTU2_CH1 input */
    SCM_FTU_INPUT_OR         /*!< OR of FTU2_CH0,FTU2_CH1,and FTU1_CH1 */
} SCM_FTU2_CH1_InputSelType;

/**
 * @brief FTUx CH0 input selection type
 *
 */
typedef enum
{
    SCM_FTU_CH0_INPUT_STD = 0U,  /*!< FTU2_CH0 input */
    SCM_FTU_CH0_INPUT_CMP0,      /*!< CMP0 output */
    SCM_FTU_CH0_INPUT_CMP1,      /*!< CMP1 output */
    SCM_FTU_CH0_INPUT_CMP2       /*!< CMP2 output */
} SCM_FTUx_CH0_InputSelType;

/**
 * @brief Trace clock selection
 *
 */
typedef enum
{
    SCM_TRACE_FCLK_CLK = 0U,  /*!< Select platform fclk to trace clock */
    SCM_TRACE_SCG_PLL1_CLK    /*!< Select SCG PLL1 platform clock to trace clock */
} SCM_TraceClkSrcType;

/**
 * @brief Software trigger to TRGSEL0/TRGSEL1
 *
 */
typedef enum
{
    SCM_SW_TRIG_0_4 = 1U,  /*!< Generate software (trigger0 to TRGSEL0)/(trigger4 to TRGSEL1) */
    SCM_SW_TRIG_1_5 = 2U,  /*!< Generate software (trigger1 to TRGSEL0)/(trigger5 to TRGSEL1) */
    SCM_SW_TRIG_2_6 = 4U,  /*!< Generate software (trigger2 to TRGSEL0)/(trigger6 to TRGSEL1) */
    SCM_SW_TRIG_3_7 = 8U   /*!< Generate software (trigger3 to TRGSEL0)/(trigger7 to TRGSEL1) */
} SCM_SwTrigxType;

/**
 * @brief SDDF channel clock output selection
 *
 */
typedef enum
{
    SCM_SDDF0_RESERVE = 0U,  /*!< Reserved */
    SCM_SDDF0_CLKO0,         /*!< SDDF0 CLKO0 */
    SCM_SDDF0_CLKO1,         /*!< SDDF0 CLKO1 */
    SCM_SDDF0_CLKO2          /*!< SDDF0 CLKO2 */
} SCM_SDDF_ClkOutSelType;

/**
 * @brief SDDF channel clock input selection
 *
 */
typedef enum
{
    SCM_SDDF0_CLK0_IND = 0U,  /*!< SDDF0 CLK0_IND */
    SCM_SDDF0_CLK1_IND,       /*!< SDDF0 CLK1_IND */
    SCM_SDDF0_CLK2_IND,       /*!< SDDF0 CLK2_IND */
    SCM_SDDF0_CLK3_IND        /*!< SDDF0 CLK3_IND */
} SCM_SDDF_ClkInSelType;

/**
 * @brief FLEXCAN routing selection
 *
 */
typedef enum
{
    SCM_FLEXCAN_9_9_OR_8_8 = 0U,  /*!< FLEXCAN 9 Rx/Tx pad from/to FLEXCAN 9 Rx/Tx pad or
                                       FLEXCAN 8 Rx/Tx pad from/to FLEXCAN 8 Rx/Tx pad */
    SCM_FLEXCAN_9_1_OR_8_0,       /*!< FLEXCAN 9 Rx/Tx pad from/to FLEXCAN 1 Rx/Tx pad or
                                       FLEXCAN 8 Rx/Tx pad from/to FLEXCAN 0 Rx/Tx pad */
    SCM_FLEXCAN_9_3_OR_8_2,       /*!< FLEXCAN 9 Rx/Tx pad from/to FLEXCAN 3 Rx/Tx pad or
                                       FLEXCAN 8 Rx/Tx pad from/to FLEXCAN 2 Rx/Tx pad */
    SCM_FLEXCAN_9_5_OR_8_4        /*!< FLEXCAN 9 Rx/Tx pad from/to FLEXCAN 5 Rx/Tx pad or
                                       FLEXCAN 8 Rx/Tx pad from/to FLEXCAN 4 Rx/Tx pad */
} SCM_FlexCanRouterType;

/**
 * @brief MSC routing selection
 *
 */
typedef enum
{
    SCM_MSC_FTU0_TO_MSC = 0U,   /*!< Select FTU0 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU1_TO_MSC,        /*!< Select FTU1 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU2_TO_MSC,        /*!< Select FTU2 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU3_TO_MSC,        /*!< Select FTU3 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU4_TO_MSC,        /*!< Select FTU4 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU5_TO_MSC,        /*!< Select FTU5 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU6_TO_MSC,        /*!< Select FTU6 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU7_TO_MSC,        /*!< Select FTU7 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU8_TO_MSC,        /*!< Select FTU8 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU9_TO_MSC,        /*!< Select FTU9 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU10_TO_MSC,       /*!< Select FTU10 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_FTU11_TO_MSC,       /*!< Select FTU11 ch do out[7:0] to MSCx ALTIN[31:24]/[23:16]/[15:8]/[7:0] */
    SCM_MSC_RESERVE             /*!< Reserve */
} SCM_MSCAltInSelType;

/**
 * @brief ISM routing selection
 *
 */
typedef enum
{
    SCM_ISM_FTU0_TO_TRGSEL3 = 0U,  /*!< Select FTU0 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU1_TO_TRGSEL3,       /*!< Select FTU1 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU2_TO_TRGSEL3,       /*!< Select FTU2 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU3_TO_TRGSEL3,       /*!< Select FTU3 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU4_TO_TRGSEL3,       /*!< Select FTU4 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU5_TO_TRGSEL3,       /*!< Select FTU5 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU6_TO_TRGSEL3,       /*!< Select FTU6 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU7_TO_TRGSEL3,       /*!< Select FTU7 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU8_TO_TRGSEL3,       /*!< Select FTU8 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU9_TO_TRGSEL3,       /*!< Select FTU9 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU10_TO_TRGSEL3,      /*!< Select FTU10 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_FTU11_TO_TRGSEL3,      /*!< Select FTU11 ch do out[7:0] to TRGSEL3 source [89:82]/[81:74] */
    SCM_ISM_RESERVE                /*!< Reserve */
} SCM_ISMRouterType;

/**
 * @brief Mass erase type
 *
 */
typedef enum
{
    SCM_SECTORERASE_AS_MASSERASE = 0U,  /*!< Use sector erase for mass erase */
    SCM_CHIPERASE_AS_MASSERASE          /*!< Use chip erase for mass erase */
} SCM_SysApMassEraseType;

/**
 * @brief Cpu Type of forcing to halt
 *
 */
typedef enum
{
    SCM_DEBUG_CPU0 = 1U,  /*!< Force CPU0 to halt */
    SCM_DEBUG_CPU1 = 2U,  /*!< Force CPU1 to halt */
    SCM_DEBUG_CPU2 = 4U   /*!< Force CPU2 to halt */
} SCM_SysApForceToHaltType;

/********* Local inline function ************/
/**
 * @brief Get UIDL data(Unique identification for the chip. Loaded from NVR)
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetData_UIDL(void)
{
    return SCM->UIDL;
}

/**
 * @brief Get UIDML data(Unique identification for the chip. Loaded from NVR)
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetData_UIDML(void)
{
    return SCM->UIDML;
}

/**
 * @brief Get UIDMH data(Unique identification for the chip. Loaded from NVR)
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetData_UIDMH(void)
{
    return SCM->UIDMH;
}

/**
 * @brief Get UIDH data(Unique identification for the chip. Loaded from NVR)
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetData_UIDH(void)
{
    return SCM->UIDH;
}

/**
 * @brief Get Family Identification
 *
 * @return return value
 */
LOCAL_INLINE uint8_t SCM_HWA_GetData_FamilyID(void)
{
    return (uint8_t)((SCM->PARTID0 & (uint32_t)SCM_PARTID0_FAM_ID_MASK) >> (uint32_t)SCM_PARTID0_FAM_ID_SHIFT);
}

/**
 * @brief Get Revision Identification
 *
 * @return return value
 */
LOCAL_INLINE uint8_t SCM_HWA_GetData_RevID(void)
{
    return (uint8_t)((SCM->PARTID0 & (uint32_t)SCM_PARTID0_REVID_MASK));
}

/**
 * @brief Get CHIPCFG0 register status
 *
 * @return  return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_CHIPCFG0(void)
{
    return SCM->CHIPCFG0;
}
#if 0
/**
 * @brief Get CPU 1 lock step enable/disable status
 *
 * @return  return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetLockStepStatus_Cpu1(void)
{
    return ((SCM->CHIPCFG0 & (uint32_t)SCM_CHIPCFG0_CPU1_LOCKSTEP_EN_MASK)>>(uint32_t)SCM_CHIPCFG0_CPU1_LOCKSTEP_EN_SHIFT);
}

/**
 * @brief Get CPU 0 lock step enable/disable status
 *
 * @return  return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetLockStepStatus_Cpu0(void)
{
    return ((SCM->CHIPCFG0 & (uint32_t)SCM_CHIPCFG0_CPU0_LOCKSTEP_EN_MASK)>>(uint32_t)SCM_CHIPCFG0_CPU0_LOCKSTEP_EN_SHIFT);
}

/**return
 * @brief Get OSPI enable/disable status
 *
 * @return  return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_OSPI(void)
{
    return ((SCM->CHIPCFG0 & (uint32_t)SCM_CHIPCFG0_OSPI_MASK)>>(uint32_t)SCM_CHIPCFG0_OSPI_SHIFT);
}

/**
 * @brief Get ENET enable/disable status
 *
 * @return  return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_ENET(void)
{
    return ((SCM->CHIPCFG0 & (uint32_t)SCM_CHIPCFG0_ENET_MASK)>>(uint32_t)SCM_CHIPCFG0_ENET_SHIFT);
}
#endif
/**
 * @brief Get CANFD enable/disable status
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_CANFD(void)
{
    return ((SCM->CHIPCFG0 & (uint32_t)SCM_CHIPCFG0_CAN_FD_MASK)>>(uint32_t)SCM_CHIPCFG0_CAN_FD_SHIFT);
}
#if 0
/**
 * @brief Get FLEXCAN enable/disable status
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_FLEXCAN(void)
{
    return (SCM->CHIPCFG0 & (uint32_t)SCM_CHIPCFG0_FLEXCAN_NUM_MASK);
}
#endif

/**
 * @brief Get device ID
 *
 * @return return value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetData_DeviceID(void)
{
    return ((SCM->CHIPCFG1 & (uint32_t)SCM_CHIPCFG1_DEVICE_ID_MASK) >> (uint32_t)SCM_CHIPCFG1_DEVICE_ID_SHIFT);
}

/**
 * @brief Lock the cpu to control MAM ECC
 *
 */
LOCAL_INLINE void SCM_HWA_MAMECCEN0_LockWritePermit(void)
{
    SCM->MAMECCEN0 |= (uint32_t)SCM_MAMECCEN0_WPB_LOCK_MASK;
}

/**
 * @brief Get the MAMECCEN register 0 lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_MAMECCEN0_GetWPBLockStatus(void)
{
    return (SCM->MAMECCEN0 & (uint32_t)SCM_MAMECCEN0_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control this MAMECCEN register 0
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_MAMECCEN0_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->MAMECCEN0;
    SCM->MAMECCEN0 = ((u32RegVal & (~(uint32_t)SCM_MAMECCEN0_WPB_MASK)) | SCM_MAMECCEN0_WPB(eCpuType));
}

/**
 * @brief Set MAMECCEN register 0 enable value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_SetEnable_MAMECCEN0(uint32_t u32Value)
{
    SCM->MAMECCEN0 = u32Value;
}

/**
 * @brief Clear MAMECCEN register 0 value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_ClearEnable_MAMECCEN0(uint32_t u32Value)
{
    SCM->MAMECCEN0 = (SCM->MAMECCEN0 & (~u32Value));
}

/**
 * @brief Lock the cpu to control MAMECCEN register 1
 *
 */
LOCAL_INLINE void SCM_HWA_MAMECCEN1_LockWritePermit(void)
{
    SCM->MAMECCEN1 |= (uint32_t)SCM_MAMECCEN1_WPB_LOCK_MASK;
}

/**
 * @brief Get the MAMECCEN register 1 lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_MAMECCEN1_GetWPBLockStatus(void)
{
    return (SCM->MAMECCEN1 & (uint32_t)SCM_MAMECCEN1_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control this MAMECCEN register 1
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_MAMECCEN1_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->MAMECCEN1;
    SCM->MAMECCEN1 = ((u32RegVal & (~(uint32_t)SCM_MAMECCEN1_WPB_MASK)) | SCM_MAMECCEN1_WPB(eCpuType));
}

/**
 * @brief Set MAMECCEN register 1 enablevalue
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_MAMECCEN1_SetEnableStatus(uint32_t u32Value)
{
    SCM->MAMECCEN1 = u32Value;
}

/**
 * @brief Clear MAMECCEN register 1 value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_MAMECCEN1_ClearEnableStatus(uint32_t u32Value)
{
    SCM->MAMECCEN1 = (SCM->MAMECCEN1 & (~u32Value));
}

/**
 * @brief Lock the CPU0 ECC Enable Register
 *
 */
LOCAL_INLINE void SCM_HWA_CPU0ECCEN_LockWritePermit(void)
{
    SCM->CPU0ECCEN |= (uint32_t)SCM_CPU0ECCEN_WPB_LOCK_MASK;
}

/**
 * @brief Get the CPU0 ECC Enable Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU0ECCEN_GetWPBLockStatus(void)
{
    return (SCM->CPU0ECCEN & (uint32_t)SCM_CPU0ECCEN_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control CPU0 ECC Enable Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_CPU0ECCEN_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->CPU0ECCEN;
    SCM->CPU0ECCEN = ((u32RegVal & (~(uint32_t)SCM_CPU0ECCEN_WPB_MASK)) | SCM_CPU0ECCEN_WPB(eCpuType));
}

/**
 * @brief Set CPU0 ECC Enable Register enable value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CPU0ECCEN(uint32_t u32Value)
{
    SCM->CPU0ECCEN = u32Value;
}

/**
 * @brief Get CPU0 ECC Enable Register enable value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU0ECCEN_GetStatus(uint32_t u32Value)
{
    return (SCM->CPU0ECCEN & u32Value);
}

/**
 * @brief Clear CPU0 ECC Enable Register value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_ClearEnable_CPU0ECCEN(uint32_t u32Value)
{
    SCM->CPU0ECCEN = (SCM->CPU0ECCEN & (~u32Value));
}
#if 0
/**
 * @brief Lock the CPU1 ECC Enable Register
 *
 */
LOCAL_INLINE void SCM_HWA_CPU1ECCEN_LockWritePermit(void)
{
    SCM->CPU1ECCEN |= (uint32_t)SCM_CPU1ECCEN_WPB_LOCK_MASK;
}

/**
 * @brief Get the CPU1 ECC Enable Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU1ECCEN_GetWPBLockStatus(void)
{
    return (SCM->CPU1ECCEN & (uint32_t)SCM_CPU1ECCEN_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control CPU1 ECC Enable Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_CPU1ECCEN_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->CPU1ECCEN;
    SCM->CPU1ECCEN = ((u32RegVal & (~(uint32_t)SCM_CPU1ECCEN_WPB_MASK)) | SCM_CPU1ECCEN_WPB(eCpuType));
}

/**
 * @brief Set CPU1 ECC Enable Register enable value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CPU1ECCEN(uint32_t u32Value)
{
    SCM->CPU1ECCEN = u32Value;
}

/**
 * @brief Get CPU1 ECC Enable Register enable value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU1ECCEN_GetStatus(uint32_t u32Value)
{
    return (SCM->CPU1ECCEN & u32Value);
}

/**
 * @brief Clear CPU1 ECC Enable Register value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_ClearEnable_CPU1ECCEN(uint32_t u32Value)
{
    SCM->CPU1ECCEN = (SCM->CPU1ECCEN & (~u32Value));
}

/**
 * @brief Lock the CPU2 ECC Enable Register
 *
 */
LOCAL_INLINE void SCM_HWA_CPU2ECCEN_LockWritePermit(void)
{
    SCM->CPU2ECCEN |= (uint32_t)SCM_CPU2ECCEN_WPB_LOCK_MASK;
}

/**
 * @brief Get the CPU2 ECC Enable Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU2ECCEN_GetWPBLockStatus(void)
{
    return (SCM->CPU2ECCEN & (uint32_t)SCM_CPU2ECCEN_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control CPU2 ECC Enable Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_CPU2ECCEN_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->CPU2ECCEN;
    SCM->CPU2ECCEN = ((u32RegVal & (~(uint32_t)SCM_CPU2ECCEN_WPB_MASK)) | SCM_CPU2ECCEN_WPB(eCpuType));
}

/**
 * @brief Set CPU2 ECC Enable Register enable value

 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CPU2ECCEN(uint32_t u32Value)
{
    SCM->CPU2ECCEN = u32Value;
}

/**
 * @brief Get CPU2 ECC Enable Register enable value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU2ECCEN_GetStatus(uint32_t u32Value)
{
    return (SCM->CPU2ECCEN & u32Value);
}

/**
 * @brief Clear CPU2 ECC Enable Register value
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_ClearEnable_CPU2ECCEN(uint32_t u32Value)
{
    SCM->CPU2ECCEN = (SCM->CPU2ECCEN & (~u32Value));
}

/**
 * @brief Lock the CPU1 Vector Table Register
 *
 */
LOCAL_INLINE void SCM_HWA_CPU1VTOR_LockWritePermit(void)
{
    SCM->CPU1VTOR |= (uint32_t)SCM_CPU1VTOR_WPB_LOCK_MASK;
}

/**
 * @brief Get the CPU type of writing permission
 *
 * @return Cpu which write permit
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU1VTOR_GetCpuWritePermit(void)
{
    return ((SCM->CPU1VTOR & (uint32_t)SCM_CPU1VTOR_WPB_MASK)>>SCM_CPU1VTOR_WPB_SHIFT);
}

/**
 * @brief Get the CPU1 Vector Table Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU1VTOR_GetWPBLockStatus(void)
{
    return (SCM->CPU1VTOR & (uint32_t)SCM_CPU1VTOR_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control CPU1 Vector Table Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_CPU1VTOR_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->CPU1VTOR;
    SCM->CPU1VTOR = ((u32RegVal & (~(uint32_t)SCM_CPU1VTOR_WPB_MASK)) | SCM_CPU1VTOR_WPB(eCpuType));
}

/**
 * @brief Set CPU1 Vector Table Register vector initial vector
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_CPU1VTOR_SetVector(uint32_t u32Value)
{
    uint32_t u32RegVal = SCM->CPU1VTOR;
    SCM->CPU1VTOR = ((u32RegVal & (~(uint32_t)SCM_CPU1VTOR_CPU1_INIT_VECTOR_MASK)) | SCM_CPU1VTOR_CPU1_INIT_VECTOR(u32Value));
}

/**
 * @brief Lock the CPU2 Vector Table Register
 *
 */
LOCAL_INLINE void SCM_HWA_CPU2VTOR_LockWritePermit(void)
{
    SCM->CPU2VTOR |= (uint32_t)SCM_CPU2VTOR_WPB_LOCK_MASK;
}

/**
 * @brief Get the CPU type of writing permission
 *
 * @return Cpu which write permit
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU2VTOR_GetCpuWritePermit(void)
{
    return ((SCM->CPU2VTOR & (uint32_t)SCM_CPU2VTOR_WPB_MASK)>>SCM_CPU2VTOR_WPB_SHIFT);
}

/**
 * @brief Get the CPU2 Vector Table Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_CPU2VTOR_GetWPBLockStatus(void)
{
    return (SCM->CPU2VTOR & (uint32_t)SCM_CPU2VTOR_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control CPU2 Vector Table Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_CPU2VTOR_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->CPU2VTOR;
    SCM->CPU2VTOR = ((u32RegVal & (~(uint32_t)SCM_CPU2VTOR_WPB_MASK)) | SCM_CPU2VTOR_WPB(eCpuType));
}

/**
 * @brief Set Core Hold Register vector initial vector
 *
 * @param u32Value value to be set
 */
LOCAL_INLINE void SCM_HWA_CPU2VTOR_SetVector(uint32_t u32Value)
{
    uint32_t u32RegVal = SCM->CPU2VTOR;
    SCM->CPU2VTOR = ((u32RegVal & (~(uint32_t)SCM_CPU2VTOR_CPU2_INIT_VECTOR_MASK)) | SCM_CPU2VTOR_CPU2_INIT_VECTOR(u32Value));
}

/**
 * @brief Lock the Core Hold Register
 *
 */
LOCAL_INLINE void SCM_HWA_COREHOLD_LockWritePermit(void)
{
    SCM->CORE_HOLD |= (uint32_t)SCM_CORE_HOLD_WPB_LOCK_MASK;
}

/**
 * @brief Get the Core Hold Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_COREHOLD_GetWPBLockStatus(void)
{
    return (SCM->CORE_HOLD & (uint32_t)SCM_CORE_HOLD_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control Core Hold Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_COREHOLD_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->CORE_HOLD;
    SCM->CORE_HOLD = ((u32RegVal & (~(uint32_t)SCM_CORE_HOLD_WPB_MASK)) | SCM_CORE_HOLD_WPB(eCpuType));
}

/**
 * @brief Set cpu2 hold enable status
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_COREHOLD_SetCpu2HoldEnable(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CORE_HOLD |= (uint32_t)SCM_CORE_HOLD_CPU2_CORE_HOLD_MASK;
    }
    else
    {
        SCM->CORE_HOLD &= ~(uint32_t)SCM_CORE_HOLD_CPU2_CORE_HOLD_MASK;
    }
}

/**
 * @brief Set cpu1 hold enable status
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_COREHOLD_SetCpu1HoldEnable(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CORE_HOLD |= (uint32_t)SCM_CORE_HOLD_CPU1_CORE_HOLD_MASK;
    }
    else
    {
        SCM->CORE_HOLD &= ~(uint32_t)SCM_CORE_HOLD_CPU1_CORE_HOLD_MASK;
    }
}

/**
 * @brief Set CPU2 AHBM1 fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu2M1(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU2_M1_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU2_M1_MASK;
    }
}

/**
 * @brief Set CPU2 AHBM0 fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu2M0(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU2_M0_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU2_M0_MASK;
    }
}

/**
 * @brief Set CPU2 AHBMP fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetCpu2PEnable_Cpu2P(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU2_P_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU2_P_MASK;
    }
}

/**
 * @brief Set CPU1 AHBM1 fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu1M1(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU1_M1_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU1_M1_MASK;
    }
}

/**
 * @brief Set CPU1 AHBM0 fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu1M0(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU1_M0_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU1_M0_MASK;
    }
}

/**
 * @brief Set CPU1 AHBMP fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu1P(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU1_P_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU1_P_MASK;
    }
}

/**
 * @brief Set CPU0 AHBMS fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu0S(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_S_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_S_MASK;
    }
}

/**
 * @brief Set CPU0 AHBM1 fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu0M1(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_M1_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_M1_MASK;
    }
}

/**
 * @brief Set CPU0 AHBM0 fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu0M0(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_M0_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_M0_MASK;
    }
}

/**
 * @brief Set CPU0 AHBMP fast to slow monitor enable/disable control
 *
 * @param bEnable Enable/Disable status
 */
LOCAL_INLINE void SCM_HWA_CPUIF_SetEnable_Cpu0P(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CPUIF_GASKET_MON_EN &= ~(uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_P_MASK;
    }
    else
    {
        SCM->CPUIF_GASKET_MON_EN |= (uint32_t)SCM_CPUIF_GASKET_MON_EN_CPU0_P_MASK;
    }
}

/**
 * @brief Use FCSPI7 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI7MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI7_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI7_ROUTER(eSPIxType));
}

/**
 * @brief Use FCSPI6 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI6MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI6_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI6_ROUTER(eSPIxType));
}
#endif

/**
 * @brief Use FCSPI5 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI5MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI5_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI5_ROUTER(eSPIxType));
}

/**
 * @brief Use FCSPI4 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI4MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI4_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI4_ROUTER(eSPIxType));
}

/**
 * @brief Use FCSPI3 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI3MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI3_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI3_ROUTER(eSPIxType));
}

/**
 * @brief Use FCSPI2 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI2MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI2_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI2_ROUTER(eSPIxType));
}

/**
 * @brief Use FCSPI1 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI1MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI1_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI1_ROUTER(eSPIxType));
}

/**
 * @brief Use FCSPI0 to monitor other FCSPI's transmit interface
 *
 * @param eSPIxType SPI type
 */
LOCAL_INLINE void SCM_HWA_FCSPI0MonSPIx(SCM_FCSPIxType eSPIxType)
{
    uint32_t u32RegVal = SCM->FCSPI_ROUTING;
    SCM->FCSPI_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FCSPI_ROUTING_SPI0_ROUTER_MASK)) | SCM_FCSPI_ROUTING_SPI0_ROUTER(eSPIxType));
}

/**
 * @brief Use FCUART7 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART7MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART7_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART7_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART6 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART6MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART6_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART6_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART5 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART5MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART5_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART5_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART4 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART4MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART4_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART4_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART3 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART3MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART3_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART3_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART2 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART2MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART2_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART2_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART1 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART1MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART1_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART1_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART0 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART0MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING0;
    SCM->FCUART_ROUTING0 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING0_UART0_ROUTER_MASK)) | SCM_FCUART_ROUTING0_UART0_ROUTER(eUartxType));
}

#if 0
/**
 * @brief Use FCUART15 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART15MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART15_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART15_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART14 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART14MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART14_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART14_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART13 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART13MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART13_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART13_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART12 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART12MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART12_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART12_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART11 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART11MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART11_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART11_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART10 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART10MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART10_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART10_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART9 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART9MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART9_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART9_ROUTER(eUartxType));
}

/**
 * @brief Use FCUART8 to monitor other FCSPI's transmit interface
 *
 * @param eUartxType Uart type
 */
LOCAL_INLINE void SCM_HWA_FCUART8MonUARTx(SCM_MON_FCUARTxType eUartxType)
{
    uint32_t u32RegVal = SCM->FCUART_ROUTING1;
    SCM->FCUART_ROUTING1 = ((u32RegVal & (~(uint32_t)SCM_FCUART_ROUTING1_UART8_ROUTER_MASK)) | SCM_FCUART_ROUTING1_UART8_ROUTER(eUartxType));
}

/**
 * @brief Lock the SCM_ENET Register
 *
 */
LOCAL_INLINE void SCM_HWA_ENET_LockWritePermit(void)
{
    SCM->SCM_ENET |= (uint32_t)SCM_ENET_WPB_LOCK_MASK;
}

/**
 * @brief Get the SCM_ENET Register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_ENET_GetWPBLockStatus(void)
{
    return (SCM->SCM_ENET & (uint32_t)SCM_ENET_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control SCM_ENET Register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_ENET_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->SCM_ENET;
    SCM->SCM_ENET = ((u32RegVal & (~(uint32_t)SCM_ENET_WPB_MASK)) | SCM_ENET_WPB(eCpuType));
}

/**
 * @brief Set RGMII clock select
 *
 * @param eClkSelType RGMII clock selection
 */
LOCAL_INLINE void SCM_HWA_ENET_SetRgmiiClkSel(SCM_EnetRgmiiClkSelType eClkSelType)
{
    uint32_t u32RegVal = SCM->SCM_ENET;
    SCM->SCM_ENET = ((u32RegVal & (~(uint32_t)SCM_ENET_ENET_RGMII_CLK_SEL_MASK)) | SCM_ENET_ENET_RGMII_CLK_SEL(eClkSelType));
}

/**
 * @brief Set ENET TX clock select
 *
 * @param eClkSelType ENET TX clock selection
 */
LOCAL_INLINE void SCM_HWA_ENET_SetEnetTxClkSel(SCM_EnetTxClkSelType eClkSelType)
{
    uint32_t u32RegVal = SCM->SCM_ENET;
    SCM->SCM_ENET = ((u32RegVal & (~(uint32_t)SCM_ENET_ENET_TXCLK_SEL_MASK)) | SCM_ENET_ENET_TXCLK_SEL(eClkSelType));
}

/**
 * @brief Set ENET MAC0 timer output buffer enable
 *
 * @param eTimerSelType ENET MAC0 timer
 */
LOCAL_INLINE void SCM_HWA_ENET_SetEnetMac0TimerSel(SCM_EnetMac0TimerType eTimerSelType)
{
    uint32_t u32RegVal = SCM->SCM_ENET;
    SCM->SCM_ENET = ((u32RegVal & (~(uint32_t)SCM_ENET_ENET_TIMER_OBE_MASK)) | SCM_ENET_ENET_TIMER_OBE(eTimerSelType));
}

/**
 * @brief Set ENET software reset
 *
 */
LOCAL_INLINE void SCM_HWA_ENET_EnableEnetClkSwReset(void)
{
    SCM->SCM_ENET |= (uint32_t)SCM_ENET_ENET_CLK_SWRST_MASK;
}

/**
 * @brief Set ENET MII TX clock output buffer enable/disable
 *
 * @param bEnable  Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_ENET_SetEnable_MiiTxClkOutBuff(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->SCM_ENET |= (uint32_t)SCM_ENET_MII_TX_CLK_OBE_MASK;
    }
    else
    {
        SCM->SCM_ENET &= ~(uint32_t)SCM_ENET_MII_TX_CLK_OBE_MASK;
    }
}

/**
 * @brief Set ENET PHY selection
 *
 * @param ePhySelType PHY selection
 */
LOCAL_INLINE void SCM_HWA_ENET_SetPhySel(SCM_PhySelType ePhySelType)
{
    uint32_t u32RegVal = SCM->SCM_ENET;
    SCM->SCM_ENET = ((u32RegVal & (~(uint32_t)SCM_ENET_PHY_SEL_MASK)) | SCM_ENET_PHY_SEL(ePhySelType));
}

/**
 * @brief Set ENET PTP clock selection
 *
 * @param ePtpClkSelType PTP clock selection
 */
LOCAL_INLINE void SCM_HWA_ENET_SetPtpClkSel(SCM_PtpClkSelType ePtpClkSelType)
{
    uint32_t u32RegVal = SCM->SCM_ENET;
    SCM->SCM_ENET = ((u32RegVal & (~(uint32_t)SCM_ENET_PTPCLK_SEL_MASK)) | SCM_ENET_PTPCLK_SEL(ePtpClkSelType));
}

/**
 * @brief Set ENET 5M mode enable/disable
 *
 * @param bEnable  Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_ENET_SetEnable_Rmii5M(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->SCM_ENET |= (uint32_t)SCM_ENET_RMII_5M_MASK;
    }
    else
    {
        SCM->SCM_ENET &= ~(uint32_t)SCM_ENET_RMII_5M_MASK;
    }
}

/**
 * @brief Set PTIMER2 and PTIMER3 BTB selection
 *
 * @param ePTimerBTBSelType  PTIMER BTB selection
 */
LOCAL_INLINE void SCM_HWA_ADC_SetSel_PTimer23BTB(SCM_PTimerBTBSelType ePTimerBTBSelType)
{
    uint32_t u32RegVal = SCM->ADC_ROUTING;
    SCM->ADC_ROUTING = ((u32RegVal & (~(uint32_t)SCM_ADC_ROUTING_PTIMER23LOOP_MASK)) | SCM_ADC_ROUTING_PTIMER23LOOP(ePTimerBTBSelType));
}
#endif
/**
 * @brief Set PTIMER0 and PTIMER1 BTB selection
 *
 * @param ePTimerBTBSelType  PTIMER BTB selection
 */
LOCAL_INLINE void SCM_HWA_ADC_SetSel_PTimer01BTB(SCM_PTimerBTBSelType ePTimerBTBSelType)
{
    uint32_t u32RegVal = SCM->ADC_ROUTING;
    SCM->ADC_ROUTING = ((u32RegVal & (~(uint32_t)SCM_ADC_ROUTING_PTIMER01LOOP_MASK)) | SCM_ADC_ROUTING_PTIMER01LOOP(ePTimerBTBSelType));
}

/**
 * @brief Select the FTU3 output source, should be ignored when FTU3 in input mode
 *
 * @param eOutSelType  FTU3 output source selection type
 */
LOCAL_INLINE void SCM_HWA_SetOutSel_FTU3(SCM_FTU_OutputSelType eOutSelType)
{
    uint32_t u32RegVal = SCM->FTU_ROUTING;
    SCM->FTU_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FTU_ROUTING_FTU3_OUTSEL_MASK)) | SCM_FTU_ROUTING_FTU3_OUTSEL(eOutSelType));
}

/**
 * @brief Select the FTU0 output source, should be ignored when FTU0 in input mode
 *
 * @param eOutSelType  FTU0 output source selection type
 */
LOCAL_INLINE void SCM_HWA_SetOutSel_FTU0(SCM_FTU_OutputSelType eOutSelType)
{
    uint32_t u32RegVal = SCM->FTU_ROUTING;
    SCM->FTU_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FTU_ROUTING_FTU0_OUTSEL_MASK)) | SCM_FTU_ROUTING_FTU0_OUTSEL(eOutSelType));
}

/**
 * @brief Selects FTU2 CH1 input
 *
 * @param eInputSelType  FTU2 CH1 input selection type
 */
LOCAL_INLINE void SCM_HWA_SetInSel_FTU2_CH1(SCM_FTU2_CH1_InputSelType eInputSelType)
{
    uint32_t u32RegVal = SCM->FTU_ROUTING;
    SCM->FTU_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FTU_ROUTING_FTU2_CH1SEL_MASK)) | SCM_FTU_ROUTING_FTU2_CH1SEL(eInputSelType));
}

/**
 * @brief Selects FTU2 CH0 input
 *
 * @param eInputSelType  FTU2 CH0 input selection type
 */
LOCAL_INLINE void SCM_SetInSel_FTU2_CH0(SCM_FTUx_CH0_InputSelType eInputSelType)
{
    uint32_t u32RegVal = SCM->FTU_ROUTING;
    SCM->FTU_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FTU_ROUTING_FTU2_CH0SEL_MASK)) | SCM_FTU_ROUTING_FTU2_CH0SEL(eInputSelType));
}

/**
 * @brief Selects FTU1 CH0 input
 *
 * @param eInputSelType  FTU1 CH0 input selection type
 */
LOCAL_INLINE void SCM_SetInSel_FTU1_CH0(SCM_FTUx_CH0_InputSelType eInputSelType)
{
    uint32_t u32RegVal = SCM->FTU_ROUTING;
    SCM->FTU_ROUTING = ((u32RegVal & (~(uint32_t)SCM_FTU_ROUTING_FTU1_CH0SEL_MASK)) | SCM_FTU_ROUTING_FTU1_CH0SEL(eInputSelType));
}

/**
 * @brief Lock FTU Routing Register
 *
 */
LOCAL_INLINE void SCM_HWA_LockFTU_ROUTING(void)
{
    SCM->FTU_ROUTING |= (uint32_t)SCM_FTU_ROUTING_LOCK_MASK;
}

/**
 * @brief Get FTU_ROUTING register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_FTU_ROUTING_GetLockStatus(void)
{
    return(SCM->FTU_ROUTING & (uint32_t)SCM_FTU_ROUTING_LOCK_MASK);
}

/**
 * @brief Lock FTU GTB Register
 *
 */
LOCAL_INLINE void SCM_HWA_LockFTU_GTB(void)
{
    SCM->FTU_GTBC |= (uint32_t)SCM_FTU_GTBC_LOCK_MASK;
}

/**
 * @brief Unlock FTU GTB Register
 *
 */
LOCAL_INLINE void SCM_HWA_UnlockFTU_GTB(void)
{
    SCM->FTU_GTBC &= ~(uint32_t)SCM_FTU_GTBC_LOCK_MASK;
}

/**
 * @brief Get FTU GTB register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_FTU_GTB_GetLockStatus(void)
{
    return(SCM->FTU_GTBC & (uint32_t)SCM_FTU_GTBC_LOCK_MASK);
}


/**
 * @brief Configure FTU global time base control selection
 *
 * @param u32SelectedFtu The mask of Selected Ftu instance
 */
LOCAL_INLINE void SCM_HWA_ConfigFtuGTBSelect(uint32_t u32SelectedFtu)
{
	SCM->FTU_GTBC &= ~(uint32_t)SCM_FTU_GTBC_FTU_GTBC_MASK;
	SCM->FTU_GTBC |= (uint32_t)SCM_FTU_GTBC_FTU_GTBC(u32SelectedFtu);
}

/**
 * @brief Clear FTU global time base control selection
 *
 * @param u32SelectedFtu The mask of Selected Ftu instance
 */
LOCAL_INLINE void SCM_HWA_ClearFtuGTBSelect(uint32_t u32SelectedFtu)
{
	SCM->FTU_GTBC &= ~(uint32_t)SCM_FTU_GTBC_FTU_GTBC(u32SelectedFtu);
}

/**
 * @brief Configure TPU global time base control selection
 *
 * @param bEn Enable or disable TPU Global Time Base
 */
LOCAL_INLINE void SCM_HWA_ConfigTpuGTBSelect(bool bEn)
{
	SCM->FTU_GTBC &= ~(uint32_t)SCM_FTU_GTBC_TPU_GTBC_MASK;
	SCM->FTU_GTBC |= (uint32_t)SCM_FTU_GTBC_TPU_GTBC(bEn);
}

/**
 * @brief Configure TPU Global Time Base Control Mask Register
 *
 * @param u32Value Value to be set
 */
LOCAL_INLINE void SCM_HWA_ConfigTpuGTBMask(uint32_t u32Value)
{
	SCM->FTU_GTBCM = u32Value;
}

/**
 * @brief Configure FTU Global Time Base Control Mask Register
 *
 * @param u32Value Value to be set
 */
LOCAL_INLINE void SCM_HWA_ConfigFtuGTBMask(uint32_t u32Value)
{
	SCM->FTU_GTBCM = u32Value;
}

/**
 * @brief Clear FTU Global Time Base Control Mask Register
 *
 * @param u32Value Value to be set
 */
LOCAL_INLINE void SCM_HWA_ClearFtuGTBMask(uint32_t u32Value)
{
	SCM->FTU_GTBCM &= ~u32Value;
}

/**
 * @brief Set FTU sync control
 *
 * @param u32Value Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetFTUSync(uint32_t u32Value)
{
    SCM->FTU_SYNC = u32Value;
}

/**
 * @brief Lock FTU GTB Register
 *
 */
LOCAL_INLINE void SCM_HWA_LockDEBUG_TRACE(void)
{
    SCM->DEBUG_TRACE |= (uint32_t)SCM_DEBUG_TRACE_LOCK_MASK;
}

/**
 * @brief Get FTU GTB register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_DEBUG_TRACE_GetLockStatus(void)
{
    return(SCM->DEBUG_TRACE & (uint32_t)SCM_DEBUG_TRACE_LOCK_MASK);
}

/**
 * @brief Set debug atclk enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_DebugATClk(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->DEBUG_TRACE |= (uint32_t)SCM_DEBUG_TRACE_DEBUG_ATCLK_EN_MASK;
    }
    else
    {
        SCM->DEBUG_TRACE &= ~(uint32_t)SCM_DEBUG_TRACE_DEBUG_ATCLK_EN_MASK;
    }
}

/**
 * @brief Set trace clock divider value
 *
 * @param u32Value Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetTraceClkDiv(uint32_t u32Value)
{
    uint32_t u32RegVal = SCM->DEBUG_TRACE;
    SCM->DEBUG_TRACE = ((u32RegVal & (~(uint32_t)SCM_DEBUG_TRACE_TRACECLK_DIV_MASK)) | SCM_DEBUG_TRACE_TRACECLK_DIV(u32Value));
}

/**
 * @brief Set trace clock selection
 *
 * @param eSrcClkType Clock selection
 */
LOCAL_INLINE void SCM_HWA_SetTraceClkSrc(SCM_TraceClkSrcType eSrcClkType)
{
    uint32_t u32RegVal = SCM->DEBUG_TRACE;
    SCM->DEBUG_TRACE = ((u32RegVal & (~(uint32_t)SCM_DEBUG_TRACE_TRACECLK_SEL_MASK)) | SCM_DEBUG_TRACE_TRACECLK_SEL(eSrcClkType));
}

/**
 * @brief Set trace clock divider enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_TraceClkDiv(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->DEBUG_TRACE |= (uint32_t)SCM_DEBUG_TRACE_TRACECLK_EN_MASK;
    }
    else
    {
        SCM->DEBUG_TRACE &= ~(uint32_t)SCM_DEBUG_TRACE_TRACECLK_EN_MASK;
    }
}

/**
 * @brief Lock the SOCMISC register
 *
 */
LOCAL_INLINE void SCM_HWA_SOCMISC_LockWritePermit(void)
{
    SCM->SOCMISC |= (uint32_t)SCM_SOCMISC_WPB_LOCK_MASK;
}

/**
 * @brief Get the SOCMISC register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_SOCMISC_GetWPBLockStatus(void)
{
    return (SCM->SOCMISC & (uint32_t)SCM_SOCMISC_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control SOCMISC register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_SOCMISC_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->SOCMISC;
    SCM->SOCMISC = ((u32RegVal & (~(uint32_t)SCM_SOCMISC_WPB_MASK)) | SCM_SOCMISC_WPB(eCpuType));
}

/**
 * @brief Set software trigger 4~7 to TRGSEL1
 *
 * @param eTriggerType software trigger number
 */
LOCAL_INLINE void SCM_HWA_SetSwTrigx_Trgsel1(SCM_SwTrigxType eTriggerType)
{
    uint32_t u32RegVal = SCM->SOCMISC;
    SCM->SOCMISC = ((u32RegVal & (~(uint32_t)SCM_SOCMISC_GPR_SW_TRIG_7_4_MASK)) | SCM_SOCMISC_GPR_SW_TRIG_7_4(eTriggerType));
}

/**
 * @brief Set software trigger 0~3 to TRGSEL0
 *
 * @param eTriggerType software trigger number
 */
LOCAL_INLINE void SCM_HWA_SetSwTrigx_Trgsel0(SCM_SwTrigxType eTriggerType)
{
    uint32_t u32RegVal = SCM->SOCMISC;
    SCM->SOCMISC = ((u32RegVal & (~(uint32_t)SCM_SOCMISC_GPR_SW_TRIG_3_0_MASK)) | SCM_SOCMISC_GPR_SW_TRIG_3_0(eTriggerType));
}

/**
 * @brief Get CCM0 status
 *
 * @return CCM0 Status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_CCM0( void )
{
    return SCM->CCM0_STATUS;
}

/**
 * @brief Lock FLEXCAN_ROUTING Register
 *
 */
LOCAL_INLINE void SCM_HWA_LockFLEXCAN_ROUTING(void)
{
    SCM->FLEXCAN_ROUTING |= (uint32_t)SCM_FLEXCAN_ROUTING_LOCK_MASK;
}

/**
 * @brief Set MSC0 ALTIN high higher bits[31:24] source selection
 *
 * @param eInSelType Router selection
 */
LOCAL_INLINE void SCM_HWA_SetSel_MSC0AltInHH(SCM_MSCAltInSelType eInSelType)
{
    uint32_t u32RegVal = SCM->MSC0_ROUTING;
    SCM->MSC0_ROUTING = ((u32RegVal & (~(uint32_t)SCM_MSC0_ROUTING_MSC0_31_24_SEL_MASK)) | SCM_MSC0_ROUTING_MSC0_31_24_SEL(eInSelType));
}

/**
 * @brief Set MSC0 ALTIN high lower bits[23:16] source selection
 *
 * @param eInSelType Router selection
 */
LOCAL_INLINE void SCM_HWA_SetSel_MSC0AltInHL(SCM_MSCAltInSelType eInSelType)
{
    uint32_t u32RegVal = SCM->MSC0_ROUTING;
    SCM->MSC0_ROUTING = ((u32RegVal & (~(uint32_t)SCM_MSC0_ROUTING_MSC0_23_16_SEL_MASK)) | SCM_MSC0_ROUTING_MSC0_23_16_SEL(eInSelType));
}

/**
 * @brief Set MSC0 ALTIN low higher bits[15:8] source selection
 *
 * @param eInSelType Router selection
 */
LOCAL_INLINE void SCM_HWA_SetSel_MSC0AltInLH(SCM_MSCAltInSelType eInSelType)
{
    uint32_t u32RegVal = SCM->MSC0_ROUTING;
    SCM->MSC0_ROUTING = ((u32RegVal & (~(uint32_t)SCM_MSC0_ROUTING_MSC0_15_8_SEL_MASK)) | SCM_MSC0_ROUTING_MSC0_15_8_SEL(eInSelType));
}

/**
 * @brief Set MSC0 ALTIN low lower bits[7:0] source selection
 *
 * @param eInSelType Router selection
 */
LOCAL_INLINE void SCM_HWA_SetSel_MSC0AltInLL(SCM_MSCAltInSelType eInSelType)
{
    uint32_t u32RegVal = SCM->MSC0_ROUTING;
    SCM->MSC0_ROUTING = ((u32RegVal & (~(uint32_t)SCM_MSC0_ROUTING_MSC0_7_0_SEL_MASK)) | SCM_MSC0_ROUTING_MSC0_7_0_SEL(eInSelType));
}

/**
 * @brief Lock MSC0_ROUTING Register
 *
 */
LOCAL_INLINE void SCM_HWA_LockMSC0_ROUTING(void)
{
    SCM->MSC0_ROUTING |= (uint32_t)SCM_MSC0_ROUTING_LOCK_MASK;
}

/**
 * @brief Get MSC0_ROUTING register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_MSC0_ROUTING_GetLockStatus(void)
{
    return(SCM->MSC0_ROUTING & (uint32_t)SCM_MSC0_ROUTING_LOCK_MASK);
}

/**
 * @brief Set FCSMU software trigger enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_FCSMUSwTrigger(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->FCSMU_SW |= (uint32_t)SCM_FCSMU_SW_FCSMU_SW_MASK;
    }
    else
    {
        SCM->FCSMU_SW &= ~(uint32_t)SCM_FCSMU_SW_FCSMU_SW_MASK;
    }
}

/**
 * @brief Set ISM_FTU_ROUT[15:8] source select
 *
 * @param eRouterType Router source selection
 */
LOCAL_INLINE void SCM_HWA_SetIsmRouterFtuH(SCM_ISMRouterType eRouterType)
{
    uint32_t u32RegVal = SCM->ISM_ROUTING;
    SCM->ISM_ROUTING = ((u32RegVal & (~(uint32_t)SCM_ISM_ROUTING_ISM_ROUT_FTU_B_MASK)) | SCM_ISM_ROUTING_ISM_ROUT_FTU_B(eRouterType));
}

/**
 * @brief Set ISM_FTU_ROUT[7:0] source select
 *
 * @param eRouterType Router source selection
 */
LOCAL_INLINE void SCM_HWA_SetIsmRouterFtuL(SCM_ISMRouterType eRouterType)
{
    uint32_t u32RegVal = SCM->ISM_ROUTING;
    SCM->ISM_ROUTING = ((u32RegVal & (~(uint32_t)SCM_ISM_ROUTING_ISM_ROUT_FTU_A_MASK)) | SCM_ISM_ROUTING_ISM_ROUT_FTU_A(eRouterType));
}

/**
 * @brief Get matrix status register 0 status
 *
 * @return Register status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MATRIX_STATUS0(void)
{
    return SCM->MATRIX_STATUS0;
}

/**
 * @brief Get matrix status register 1 status
 *
 * @return Register status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MATRIX_STATUS1(void)
{
    return SCM->MATRIX_STATUS1;
}

/**
 * @brief Get matrix status register 2 status
 *
 * @return Register status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MATRIX_STATUS2(void)
{
    return SCM->MATRIX_STATUS2;
}

/**
 * @brief Get matrix status register 5 status
 *
 * @return Register status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MATRIX_STATUS5(void)
{
    return SCM->MATRIX_STATUS5;
}

/**
 * @brief Get matrix ID status register status
 *
 * @return Register status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MATRIX_ID_STATUS0(void)
{
    return SCM->MATRIX_ID_STATUS0;
}

/**
 * @brief Set SCM module mailbox data out, output from device to debug
 *
 * @param u32Value Ouputdata value
 */
LOCAL_INLINE void SCM_HWA_SetData_MDO(uint32_t u32Value)
{
    SCM->SYSAP_MDO = u32Value;
}

/**
 * @brief Get SCM module mailbox data in, input from debug to device
 *
 * @return u32Value Input data value
 */
LOCAL_INLINE uint32_t SCM_HWA_GetData_MDI(void)
{
    return SCM->SYSAP_MDI;
}

#if 0
/**
 * @brief Get new mailbox data input available flag,
 *        device read MDI regiser will automatically clear the bit
 *
 * @return Mailbox data input available/disable
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_NewMDIAvailable(void)
{
    return ((SCM->SYSAP_CTRL & (uint32_t)SCM_SYSAP_CTRL_NEW_MDI_AVAILABLE_MASK)>>(uint32_t)SCM_SYSAP_CTRL_NEW_MDI_AVAILABLE_SHIFT);
}

/**
 * @brief Set mass erase type
 *
 * @param eSelType Mass erase type selection
 */
LOCAL_INLINE void SCM_HWA_SetSel_MassErase(SCM_SysApMassEraseType eSelType)
{
    uint32_t u32RegVal = SCM->SYSAP_CTRL;
    SCM->SYSAP_CTRL = ((u32RegVal & (~(uint32_t)SCM_SYSAP_CTRL_MASS_ERASE_CHIP_ERASE_EN_MASK)) | SCM_SYSAP_CTRL_MASS_ERASE_CHIP_ERASE_EN(eSelType));
}

/**
 * @brief Control if hold CPU0 in wait at the end of reser sequence
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_HoldCpu0_Wait(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->SYSAP_CTRL |= (uint32_t)SCM_SYSAP_CTRL_CPU0_HOLD_IN_WAIT_MASK;
    }
    else
    {
        SCM->SYSAP_CTRL &= ~(uint32_t)SCM_SYSAP_CTRL_CPU0_HOLD_IN_WAIT_MASK;
    }
}

/**
 * @brief Control if hold CPU0 in reset at the end of reser sequence
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_HoldCpu0_Reset(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->SYSAP_CTRL |= (uint32_t)SCM_SYSAP_CTRL_CPU0_HOLD_IN_RESET_MASK;
    }
    else
    {
        SCM->SYSAP_CTRL &= ~(uint32_t)SCM_SYSAP_CTRL_CPU0_HOLD_IN_RESET_MASK;
    }
}

/**
 * @brief Set to force a system reset, clear the bit to release system from reset
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_SystemReset(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->SYSAP_CTRL |= (uint32_t)SCM_SYSAP_CTRL_SYSTEM_RESET_REQ_MASK;
    }
    else
    {
        SCM->SYSAP_CTRL &= ~(uint32_t)SCM_SYSAP_CTRL_SYSTEM_RESET_REQ_MASK;
    }
}

/**
 * @brief Set to force all CPU debug restarted, CPU to exit halt state
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_AllCpuDebugRestart(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->SYSAP_CTRL |= (uint32_t)SCM_SYSAP_CTRL_CPU_DEBUG_RESTART_MASK;
    }
    else
    {
        SCM->SYSAP_CTRL &= ~(uint32_t)SCM_SYSAP_CTRL_CPU_DEBUG_RESTART_MASK;
    }
}

/**
 * @brief Set to force core to halt, if core is in stop mode.
 *        This bit can be used to wakeup the core and transition to halt state
 *
 * @param eSelType Cpu type selection
 */
LOCAL_INLINE void SCM_HWA_SetSel_ForceToHalt(SCM_SysApForceToHaltType eSelType)
{
    uint32_t u32RegVal = SCM->SYSAP_CTRL;
    SCM->SYSAP_CTRL = ((u32RegVal & (~(uint32_t)SCM_SYSAP_CTRL_CPU_DEBUG_REQ_MASK)) | SCM_SYSAP_CTRL_CPU_DEBUG_REQ(eSelType));
}

/**
 * @brief Set to disable the debug, clear to allow debug operation
 *
 * @param bDisable Disable/Enable
 */
LOCAL_INLINE void SCM_HWA_SetDisable_Debug(bool bDisable)
{
    if(true == bDisable)
    {
        SCM->SYSAP_CTRL |= (uint32_t)SCM_SYSAP_CTRL_DEBUG_DIS_MASK;
    }
    else
    {
        SCM->SYSAP_CTRL &= ~(uint32_t)SCM_SYSAP_CTRL_DEBUG_DIS_MASK;
    }
}
#endif
/**
 * @brief Lock the HSM_PCC register
 *
 */
LOCAL_INLINE void SCM_HWA_HSM_PCC_LockWritePermit(void)
{
    SCM->HSM_FLXC_PCC |= (uint32_t)SCM_HSM_FLXC_PCC_WPB_LOCK_MASK;
}

/**
 * @brief Get the HSM_PCC register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_HSM_PCC_GetWPBLockStatus(void)
{
    return (SCM->HSM_FLXC_PCC & (uint32_t)SCM_HSM_FLXC_PCC_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control HSM_PCC register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_HSM_PCC_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->HSM_FLXC_PCC;
    SCM->HSM_FLXC_PCC = ((u32RegVal & (~(uint32_t)SCM_HSM_FLXC_PCC_WPB_MASK)) | SCM_HSM_FLXC_PCC_WPB(eCpuType));
}

/**
 * @brief Set HSM clock enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_HSMClock(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->HSM_FLXC_PCC |= (uint32_t)SCM_HSM_FLXC_PCC_CLKEN_HSM_ENGINE_MASK;
    }
    else
    {
        SCM->HSM_FLXC_PCC &= ~(uint32_t)SCM_HSM_FLXC_PCC_CLKEN_HSM_ENGINE_MASK;
    }
}

/**
 * @brief Set HSM software reset
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_HSMSwReset(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->HSM_FLXC_PCC |= (uint32_t)SCM_HSM_FLXC_PCC_SWRST_MASK;
    }
    else
    {
        SCM->HSM_FLXC_PCC &= ~(uint32_t)SCM_HSM_FLXC_PCC_SWRST_MASK;
    }
}

/**
 * @brief Set HSM watchdog reset
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_HSMWdgReset(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->HSM_FLXC_PCC |= (uint32_t)SCM_HSM_FLXC_PCC_WDG_RSTEN_MASK;
    }
    else
    {
        SCM->HSM_FLXC_PCC &= ~(uint32_t)SCM_HSM_FLXC_PCC_WDG_RSTEN_MASK;
    }
}

/**
 * @brief Set HSM stop mode request
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_HSMStopModReq(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->HSM_FLXC_PCC |= (uint32_t)SCM_HSM_FLXC_PCC_STOP_REQ_MASK;
    }
    else
    {
        SCM->HSM_FLXC_PCC &= ~(uint32_t)SCM_HSM_FLXC_PCC_STOP_REQ_MASK;
    }
}


/**
 * @brief Set TPU clock enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_TPUClock(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->HSM_FLXC_PCC |= ((uint32_t)SCM_HSM_FLXC_PCC_CLKEN_TPU_MASK);
    }
    else
    {
        SCM->HSM_FLXC_PCC &= ~(uint32_t)SCM_HSM_FLXC_PCC_CLKEN_TPU_MASK;
    }
}

/**
 * @brief Get TPU clock enable/disable
 *
 * @param N/A
 */
LOCAL_INLINE bool SCM_HWA_GetTPUClockEnableStatus(void)
{
    uint32_t u32TmpVal;

    u32TmpVal = (SCM->HSM_FLXC_PCC & SCM_HSM_FLXC_PCC_CLKEN_TPU_MASK) >> SCM_HSM_FLXC_PCC_CLKEN_TPU_SHIFT;
    return (bool)((u32TmpVal != 0U) ? true : false);
}

/**
 * @brief Get mailbox data output from device to debug flag
 *
 * @return Flag status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MDOFlag(void)
{
    return(SCM->MDO_FLAG & SCM_MDO_FLAG_MDO_FLAG_MASK);
}

/**
 * @brief Lock the MASTER_HALT_REQ register
 *
 */
LOCAL_INLINE void SCM_HWA_MASTER_HALT_REQ_LockWritePermit(void)
{
    SCM->MASTER_HALT_REQ |= (uint32_t)SCM_MASTER_HALT_REQ_WPB_LOCK_MASK;
}

/**
 * @brief Get the MASTER_HALT_REQ register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_MASTER_HALT_REQ_GetWPBLockStatus(void)
{
    return (SCM->MASTER_HALT_REQ & (uint32_t)SCM_MASTER_HALT_REQ_WPB_LOCK_MASK);
}

/**
 * @brief Set cpu to control MASTER_HALT_REQ register
 *
 * @param eCpuType Cpu allowed to control peripheral
 */
LOCAL_INLINE void SCM_HWA_MASTER_HALT_REQ_SetWritePermit(SCM_WPB_CpuType eCpuType)
{
    uint32_t u32RegVal = SCM->MASTER_HALT_REQ;
    SCM->MASTER_HALT_REQ = ((u32RegVal & (~(uint32_t)SCM_MASTER_HALT_REQ_WPB_MASK)) | SCM_MASTER_HALT_REQ_WPB(eCpuType));
}

/**
 * @brief Set MASTER_HALT_REQ halt request
 *
 * @param u32Value Value select from SCM_HaltReqType
 */
LOCAL_INLINE void SCM_HWA_SetSel_MASTER_HALT_REQ(uint32_t u32Value)
{
    SCM->MASTER_HALT_REQ = (u32Value | (uint32_t)SCM_MASTER_HALT_REQ_WPB_LOCK_MASK);
}

/**
 * @brief Get MASTER_HALT_ACK halt ack
 *
 * @return Ack status
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_MASTER_HALT_ACK(void)
{
    return SCM->MASTER_HALT_ACK;
}

/**
 * @brief Set CPU0 NMI interrupt router enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_Cpu0NMIIrqRouter(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->INT_ROUTER_NMI |= (uint32_t)SCM_INT_ROUTER_NMI_C0_EN_MASK;
    }
    else
    {
        SCM->INT_ROUTER_NMI &= ~(uint32_t)SCM_INT_ROUTER_NMI_C0_EN_MASK;
    }
}

/**
 * @brief Lock SCM_INT_ROUTER_NMI register
 *
 */
LOCAL_INLINE void SCM_HWA_LockINT_ROUTER_NMI(void)
{
    SCM->INT_ROUTER_NMI |= (uint32_t)SCM_INT_ROUTER_NMI_LOCK_MASK;
}

/**
 * @brief Get SCM_INT_ROUTER_NMI register lock status
 *
 * @return Lock status
 */
LOCAL_INLINE uint32_t SCM_HWA_INT_ROUTER_NMI_GetLockStatus(void)
{
    return (SCM->INT_ROUTER_NMI & (uint32_t)SCM_INT_ROUTER_NMI_LOCK_MASK);
}

/**
 * @brief Get CRC Error Flag
 *
 * @return CRC Error Flag
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_CrcErrFlag(void)
{
    return((SCM->CRCCSR & (uint32_t)SCM_CRCCSR_ERR_MASK)>>(uint32_t)SCM_CRCCSR_ERR_SHIFT);
}

/**
 * @brief Get CRC Busy Flag
 *
 * @return CRC Busy Flag
 */
LOCAL_INLINE uint32_t SCM_HWA_GetStatus_CrcBusyFlag(void)
{
    return((SCM->CRCCSR & (uint32_t)SCM_CRCCSR_BUY_MASK)>>(uint32_t)SCM_CRCCSR_BUY_SHIFT);
}

/**
 * @brief Set CRC error out enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CrcErrOut(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CRCCSR |= (uint32_t)SCM_CRCCSR_EOEN_MASK;
    }
    else
    {
        SCM->CRCCSR &= ~(uint32_t)SCM_CRCCSR_EOEN_MASK;
    }
}

/**
 * @brief Set CRC check enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CrcCheck(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CRCCSR |= (uint32_t)SCM_CRCCSR_CHKEN_MASK;
    }
    else
    {
        SCM->CRCCSR &= ~(uint32_t)SCM_CRCCSR_CHKEN_MASK;
    }
}

/**
 * @brief Set CRC trigger enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CrcTrigger(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CRCCSR |= (uint32_t)SCM_CRCCSR_TRGEN_MASK;
    }
    else
    {
        SCM->CRCCSR &= ~(uint32_t)SCM_CRCCSR_TRGEN_MASK;
    }
}

/**
 * @brief Set CRC software generate enable/disable
 *
 * @param bEnable Enable/Disable
 */
LOCAL_INLINE void SCM_HWA_SetEnable_CrcSwGen(bool bEnable)
{
    if(true == bEnable)
    {
        SCM->CRCCSR |= (uint32_t)SCM_CRCCSR_GEN_MASK;
    }
    else
    {
        SCM->CRCCSR &= ~(uint32_t)SCM_CRCCSR_GEN_MASK;
    }
}

/**
 * @brief Get CRC result
 *
 * @return CRC result
 */
LOCAL_INLINE uint32_t SCM_HWA_GetCrcResult(void)
{
    return SCM->CRCRES;
}




#endif  /*#ifndef _HWA_SCM_H_ */
