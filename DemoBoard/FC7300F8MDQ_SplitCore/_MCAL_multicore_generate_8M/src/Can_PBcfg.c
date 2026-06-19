/**
*   @file    Can_PBCfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Can Post-Build configuration source file.
*   @details Post Build configuration file for Can driver.
*
*   @addtogroup CAN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
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
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
                                                          -Add MB Length generate
                                                          -Add Can MB Length for each controller
*   0.6.0       2024-03-31    QXW0112       N/A           Add FC7240 platform support
*   0.7.0       2024-04-30    QXW0038       N/A           Add MB length generate
*   0.7.1       2024-7-5      QXW0038       N/A           Fix QAC warnings
*   0.7.2       2024-08-19    QXW0038       N/A           Check empty array for filter and message buffer
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif

/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct
 * Reason: Some macro length are more than 31 */

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Can.h"
#include "Can_PBcfg.h"
#include "Can_Cfg.h"
#include "Can_Reg.h"
#include "Can_Hal.h"




/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Can_MemMap.h"


















/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)

CAN_DATA_SECTION static const Can_RxLegacyFiFoTableIdConfigType LegacyRxFifoTableID_PBConfig0[CAN_LEGACY_FIFO_MAX_TABLEID_0] =
{
    {
        (uint32)0x00900000U, /* CanLegacyRxFifoTable_0 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00980000U, /* CanLegacyRxFifoTable_1 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00a00000U, /* CanLegacyRxFifoTable_2 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00a80000U, /* CanLegacyRxFifoTable_3 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00b00000U, /* CanLegacyRxFifoTable_4 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00b80000U, /* CanLegacyRxFifoTable_5 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00c00000U, /* CanLegacyRxFifoTable_6 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    },
    {
        (uint32)0x00c80000U, /* CanLegacyRxFifoTable_7 of type Standard and formatA for FlexCAN_7 */
        (uint32)0xfff80000U  /* Filter Mask (correspond to RXIMR register) */
    }
};
#endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */


#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)

CAN_DATA_SECTION static const Can_RxEnhancedFiFoTableIdConfigType EnhancedRxFifoTableID_PBConfig0[] =
{
    (uint32)0x010207ffU,
    (uint32)0x010107ffU,
    (uint32)0x050007ffU,
    (uint32)0x050107ffU,
    (uint32)0x011107ffU,
    (uint32)0x011207ffU,
    (uint32)0x012307ffU,
    (uint32)0x012407ffU,
    (uint32)0x012507ffU,
    (uint32)0x012507ffU,
    (uint32)0x012807ffU,
    (uint32)0x012907ffU
};
#endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
/*================================================================================================*/
/**
* @brief          Filter Masks
*
*/
/*================================================================================================*/
CAN_DATA_SECTION static const Can_IdType Can_FilterMasks0_PB[CAN_MAXFILTERCOUNT_0] =
{
    
    (Can_IdType)0x7ffU, /* FilterMasks0[0], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[1], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[2], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[3], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[4], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[5], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[6], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[7], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[8], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[9], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[10], "CanHwFilter" */
    (Can_IdType)0x7ffU, /* FilterMasks0[11], "CanHwFilter" */
    (Can_IdType)0x7ffU  /* FilterMasks0[12], "CanHwFilter" */
};




/*================================================================================================*/
/**
* @brief          Information about message buffers
*
*/
/*================================================================================================*/

CAN_DATA_SECTION static const Can_MBConfigObjectType CanCfg_MessageBufferConfigs0_PB[CAN_MAXMBCOUNT_PB] =
{
    /* CanController0_Receive0 Message Buffer of Can Controller ID = 0U, array index=0 */
    {
        (Can_HwHandleType)0x0U, /* u16IdMaskIndex */
        (uint8)0U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x10U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x0U, /* Hardware Object ID */
        (Can_HwHandleType)0x0U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x98U,       /* Address of Message Buffer  */
        (uint8)16U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController1_Receive0 Message Buffer of Can Controller ID = 1U, array index=1 */
    {
        (Can_HwHandleType)0x1U, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x400U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x1U, /* Hardware Object ID */
        (Can_HwHandleType)0x1U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x158U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)3U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController1_Receive1 Message Buffer of Can Controller ID = 1U, array index=2 */
    {
        (Can_HwHandleType)0x2U, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x401U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x2U, /* Hardware Object ID */
        (Can_HwHandleType)0x2U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x1a0U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)4U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController1_Receive2 Message Buffer of Can Controller ID = 1U, array index=3 */
    {
        (Can_HwHandleType)0x3U, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x402U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x3U, /* Hardware Object ID */
        (Can_HwHandleType)0x3U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x1e8U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)5U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController1_Receive3 Message Buffer of Can Controller ID = 1U, array index=4 */
    {
        (Can_HwHandleType)0x4U, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x403U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x4U, /* Hardware Object ID */
        (Can_HwHandleType)0x4U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x230U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)6U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController2_Receive0 Message Buffer of Can Controller ID = 2U, array index=5 */
    {
        (Can_HwHandleType)0x5U, /* u16IdMaskIndex */
        (uint8)2U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x12U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x5U, /* Hardware Object ID */
        (Can_HwHandleType)0x5U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x90U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController3_Receive0 Message Buffer of Can Controller ID = 3U, array index=6 */
    {
        (Can_HwHandleType)0x6U, /* u16IdMaskIndex */
        (uint8)3U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x13U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x6U, /* Hardware Object ID */
        (Can_HwHandleType)0x6U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x90U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController4_Receive0 Message Buffer of Can Controller ID = 4U, array index=7 */
    {
        (Can_HwHandleType)0x7U, /* u16IdMaskIndex */
        (uint8)4U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x14U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x7U, /* Hardware Object ID */
        (Can_HwHandleType)0x7U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x90U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController5_Receive0 Message Buffer of Can Controller ID = 5U, array index=8 */
    {
        (Can_HwHandleType)0x8U, /* u16IdMaskIndex */
        (uint8)5U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x15U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x8U, /* Hardware Object ID */
        (Can_HwHandleType)0x8U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x90U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController6_Receive0 Message Buffer of Can Controller ID = 6U, array index=9 */
    {
        (Can_HwHandleType)0x9U, /* u16IdMaskIndex */
        (uint8)6U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x16U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x9U, /* Hardware Object ID */
        (Can_HwHandleType)0x9U, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x90U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController7_Receive0 Message Buffer of Can Controller ID = 7U, array index=10 */
    {
        (Can_HwHandleType)0xaU, /* u16IdMaskIndex */
        (uint8)7U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x17U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0xaU, /* Hardware Object ID */
        (Can_HwHandleType)0xaU, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x110U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)9U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController8_Receive0 Message Buffer of Can Controller ID = 7U, array index=11 */
    {
        (Can_HwHandleType)0xbU, /* u16IdMaskIndex */
        (uint8)7U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x18U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0xbU, /* Hardware Object ID */
        (Can_HwHandleType)0xbU, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x120U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)10U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController9_Receive0 Message Buffer of Can Controller ID = 7U, array index=12 */
    {
        (Can_HwHandleType)0xcU, /* u16IdMaskIndex */
        (uint8)7U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_RECEIVE, /* Receive/Transmit MB configuration */
        (Can_IdType)0x19U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0xcU, /* Hardware Object ID */
        (Can_HwHandleType)0xcU, /* array index*/
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U, /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x130U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)11U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(boolean)FALSE
        #endif
        
    },

    /* CanController0_Transmit0 Message Buffer of Can Controller ID = 0U, array index=13 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)0U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x14U, /* Hardware Object ID */
        (Can_HwHandleType)0xdU, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)16U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController1_Transmit0 Message Buffer of Can Controller ID = 1U, array index=14 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x15U, /* Hardware Object ID */
        (Can_HwHandleType)0xeU, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },
    /* CanController1_Transmit0 Message Buffer of Can Controller ID = 1U, array index=15 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x15U, /* Hardware Object ID */
        (Can_HwHandleType)0xfU, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0xc8U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)1U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },
    /* CanController1_Transmit0 Message Buffer of Can Controller ID = 1U, array index=16 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)1U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x15U, /* Hardware Object ID */
        (Can_HwHandleType)0x10U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x110U,       /* Address of Message Buffer  */
        (uint8)64U,    /* Payload lenth of Message Buffer */
        (uint8)2U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController2_Transmit0 Message Buffer of Can Controller ID = 2U, array index=17 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)2U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x16U, /* Hardware Object ID */
        (Can_HwHandleType)0x11U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController3_Transmit0 Message Buffer of Can Controller ID = 3U, array index=18 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)3U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x17U, /* Hardware Object ID */
        (Can_HwHandleType)0x12U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController4_Transmit0 Message Buffer of Can Controller ID = 4U, array index=19 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)4U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x18U, /* Hardware Object ID */
        (Can_HwHandleType)0x13U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController5_Transmit0 Message Buffer of Can Controller ID = 5U, array index=20 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)5U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x19U, /* Hardware Object ID */
        (Can_HwHandleType)0x14U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)FALSE    /* Disable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController6_Transmit0 Message Buffer of Can Controller ID = 6U, array index=21 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)6U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x1aU, /* Hardware Object ID */
        (Can_HwHandleType)0x15U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x80U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)0U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

    /* CanController7_Transmit0 Message Buffer of Can Controller ID = 7U, array index=22 */
    {
        (Can_HwHandleType)CAN_MAXMASKCOUNT, /* u16IdMaskIndex */
        (uint8)7U, /* ControllerId  - based on the order from CanController list */
        (Can_IdTypeType)CAN_STANDARD, /* ID type: EXTENDED, STANDARD, MIXED */
        (Can_HwObjType)CAN_TRANSMIT, /* Receive/Transmit MB configuration */
        (Can_IdType)0x0U, /* MessageId */
        (uint8)0x0U, /* Local priority bits used for arbitration */
        (Can_HwHandleType)0x1bU, /* Hardware Object ID */
        (Can_HwHandleType)0x16U, /* array index */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        (uint8)0U,
        #endif
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* HOH configured for INTERRUPT mode, reference not used */
        
        (uint16)0x100U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)8U,    /* The index of MB in message buffer memory */
        (boolean)TRUE    /* Enable MB interrupt  */
        #if (CAN_TRIGGER_TRANSMIT_EN == STD_ON)
        /* The parameter is used to detect the MB which run with trigger transmit feature */
        ,(uint8)FALSE
        #endif
    },

};
/*================================================================================================*/
/**
* @brief          Configuration of FlexCan controller
*
*/
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_0[CAN_CFGSET0_MAX_BAUDRATE_FC_0_0] =
{
    
    /* Configuration for CanController ID0 == FlexCAN_0 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)6U + ((uint32)4U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)1U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)1U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Activated*/
            (uint32)2000U,   /* 2000kbps baud rate */
            (uint32)0U, /* CAN FD Prescaler segment */
            (uint32)(
                        (uint32)(((uint32)3U + (uint32)4) << FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |   /* time segment 1 */
                        (uint32)((uint32)2U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |   /*Time segment 2  */
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            (uint32)((uint32)1U<<FLEXCAN_FD_BRS_OFFSET_U8) /*true -> the node exists, BRS activated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(
                        #if (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON)
                        (uint32)((uint32)1U<<FLEXCAN_FD_CTRL2_STFCNTEN_SHIFT_U32)
                        #endif /* (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) */
                        #if (CAN_CONTROLLER_FD_PREXCEN == STD_ON)
                        | (uint32)((uint32)0U<<FLEXCAN_FD_CTRL2_PREXCEN_SHIFT_U32)
                        #endif /* (CAN_CONTROLLER_FD_PREXCEN == STD_ON) */
                        #if (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)
                        | (uint32)((uint32)0U<<FLEXCAN_FD_CTRL2_EDFLTDIS_SHIFT_U32)
                        #endif /* (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) */
                    )
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_1[CAN_CFGSET0_MAX_BAUDRATE_FC_1_1] =
{
    
    /* Configuration for CanController ID1 == FlexCAN_1 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)6U + ((uint32)4U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)1U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)1U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Activated*/
            (uint32)2000U,   /* 2000kbps baud rate */
            (uint32)0U, /* CAN FD Prescaler segment */
            (uint32)(
                        (uint32)(((uint32)3U + (uint32)4) << FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |   /* time segment 1 */
                        (uint32)((uint32)2U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |   /*Time segment 2  */
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            (uint32)((uint32)1U<<FLEXCAN_FD_BRS_OFFSET_U8) /*true -> the node exists, BRS activated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(
                        #if (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON)
                        (uint32)((uint32)1U<<FLEXCAN_FD_CTRL2_STFCNTEN_SHIFT_U32)
                        #endif /* (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) */
                        #if (CAN_CONTROLLER_FD_PREXCEN == STD_ON)
                        | (uint32)((uint32)0U<<FLEXCAN_FD_CTRL2_PREXCEN_SHIFT_U32)
                        #endif /* (CAN_CONTROLLER_FD_PREXCEN == STD_ON) */
                        #if (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)
                        | (uint32)((uint32)0U<<FLEXCAN_FD_CTRL2_EDFLTDIS_SHIFT_U32)
                        #endif /* (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) */
                    )
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_2[CAN_CFGSET0_MAX_BAUDRATE_FC_2_2] =
{
    
    /* Configuration for CanController ID2 == FlexCAN_2 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)3U + ((uint32)7U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)0U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)(
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            
            (uint32)((uint32)0U<<FLEXCAN_FD_BRS_OFFSET_U8) /*false -> the node dos not exist, BRS deactivated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(0U)
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_3[CAN_CFGSET0_MAX_BAUDRATE_FC_3_3] =
{
    
    /* Configuration for CanController ID3 == FlexCAN_3 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)3U + ((uint32)7U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)0U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)(
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            
            (uint32)((uint32)0U<<FLEXCAN_FD_BRS_OFFSET_U8) /*false -> the node dos not exist, BRS deactivated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(0U)
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_4[CAN_CFGSET0_MAX_BAUDRATE_FC_4_4] =
{
    
    /* Configuration for CanController ID4 == FlexCAN_4 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)3U + ((uint32)7U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)0U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)(
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            
            (uint32)((uint32)0U<<FLEXCAN_FD_BRS_OFFSET_U8) /*false -> the node dos not exist, BRS deactivated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(0U)
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_5[CAN_CFGSET0_MAX_BAUDRATE_FC_5_5] =
{
    
    /* Configuration for CanController ID5 == FlexCAN_5 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)3U + ((uint32)7U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)0U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)(
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            
            (uint32)((uint32)0U<<FLEXCAN_FD_BRS_OFFSET_U8) /*false -> the node dos not exist, BRS deactivated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(0U)
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_6[CAN_CFGSET0_MAX_BAUDRATE_FC_6_6] =
{
    
    /* Configuration for CanController ID6 == FlexCAN_6 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)3U + ((uint32)7U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)0U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)(
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            
            (uint32)((uint32)0U<<FLEXCAN_FD_BRS_OFFSET_U8) /*false -> the node dos not exist, BRS deactivated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(0U)
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */
CAN_DATA_SECTION static const Can_ControllerBaudrateConfigType CanHal_ControllerBaudrateCfgSet0_PB_7[CAN_CFGSET0_MAX_BAUDRATE_FC_7_7] =
{
    
    /* Configuration for CanController ID7 == FlexCAN_7 */
    {
        /* ===== Normal bit rate ENCBT register ===== */
        (uint32)(
                    (uint32)(((uint32)3U + ((uint32)7U) )<< FLEXCAN_ENCBT_NTSEG1_OFFSET_U8) |   /* time segment 1 */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NTSEG2_OFFSET_U8) |   /*Time segment 2  */
                    (uint32)((uint32)3U<<FLEXCAN_ENCBT_NRJW_OFFSET_U8) /*Sync jump width*/
                ),
        (uint8)20U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        (uint16)2, /* Prescaler */
        
        (uint16)500   /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* ===== Data bit rate ===== */
        ,{
            (uint32)((uint32)0U << FLEXCAN_FD_OFFSET_U8), /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)(
                        (uint32)((uint32)0U<< FLEXCAN_EDCBT_DTSEG1_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DTSEG2_OFFSET_U8) |
                        (uint32)((uint32)0U<<FLEXCAN_EDCBT_DRJW_OFFSET_U8)  /*Sync jump width*/
                    ),
            (uint32)0U, /*TRCV DELAY*/
            
            (uint32)((uint32)0U<<FLEXCAN_FD_BRS_OFFSET_U8) /*false -> the node dos not exist, BRS deactivated*/
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON) )
            ,(uint32)(0U)
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        }
        #endif
        
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        ,(uint16)0
        #endif
    }
};



 /*=================================== CanHal_ControlerConfig ====================================*/

CAN_DATA_SECTION static const CanHal_ControlerInstanceType CanHal_ControlerConfig0_PB[CAN_MAXCONTROLLERCOUNT_0] =
{
    /* one controller */
    /* ControlerDescriptor of CanController_0 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_0_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXPOL_EN_U32 | /* RxPoll Enabled */
                    CAN_CONTROLLER_CFG_TXPOL_EN_U32 | /* TxPoll Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_0 end */

    /* ControlerDescriptor of CanController_1 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_1_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXPOL_EN_U32 | /* RxPoll Enabled */
                    CAN_CONTROLLER_CFG_TXPOL_EN_U32 | /* TxPoll Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_1 end */

    /* ControlerDescriptor of CanController_2 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_2_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXPOL_EN_U32 | /* RxPoll Enabled */
                    CAN_CONTROLLER_CFG_TXPOL_EN_U32 | /* TxPoll Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_2 end */

    /* ControlerDescriptor of CanController_3 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_3_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXINT_EN_U32 | /* RxInt Enabled */
                    CAN_CONTROLLER_CFG_TXINT_EN_U32 | /* TxInt Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_3 end */

    /* ControlerDescriptor of CanController_4 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_4_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXINT_EN_U32 | /* RxInt Enabled */
                    CAN_CONTROLLER_CFG_TXINT_EN_U32 | /* TxInt Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_4 end */

    /* ControlerDescriptor of CanController_5 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_5_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXPOL_EN_U32 | /* RxPoll Enabled */
                    CAN_CONTROLLER_CFG_TXPOL_EN_U32 | /* TxPoll Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_5 end */

    /* ControlerDescriptor of CanController_6 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_6_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXINT_EN_U32 | /* RxInt Enabled */
                    CAN_CONTROLLER_CFG_TXINT_EN_U32 | /* TxInt Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }, /* ControlerDescriptors CanController_6 end */

    /* ControlerDescriptor of CanController_7 */
    {
        /* ID source Wakeup of EcuM  */
        #if (CAN_ENABLE_WAKEUP_SUPPORT == STD_ON)
        (uint32)0U,
        #endif
        /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8CanIndex */
        (uint8)FLEXCAN_7_INDEX,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                    /* CTRL[LPB] - Loop-back mode */
                    ((uint32)0<< FLEXCAN_CTRL_LPB_SHIFT_U8) |
                    /* CTRL[SMP] - Sampling mode */
                    ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) |
                    /* CTRL[BOFF_REC] - Bus off recovery */
                    ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) |
                    /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                    ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) |
                    /* CTRL[LOM] - Listen only mode */
                    ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8)
                    
        ),
        
        /* Pointer to Error INTERRUPT notification function (ESR[ERR_INT]). */
        NULL_PTR,
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Pointer to FD Error INTERRUPT notification function (ESR[ERRFAST_INT]). - Can_ErrorNotification */
        NULL_PTR,
        #endif
        
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)96U,
        
        /* ===== Controller Options ===== */
        (uint32)(
                    CAN_CONTROLLER_CFG_RXINT_EN_U32 | /* RxInt Enabled */
                    CAN_CONTROLLER_CFG_TXINT_EN_U32 | /* TxInt Enabled */
                    CAN_CONTROLLER_CFG_BOPOL_EN_U32 | /* BusOffPoll Enabled */
                    0U
                 )
    }
};

  /*================================================================================================*/
  /**
  * @brief          Description of Can Fifo object Id List
  *
  **/

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_0_Fifo_HrhObjIdList[1] = {
    (uint16)13U
};
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_1_Fifo_HrhObjIdList[1] = {
    (uint16)14U
};
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_2_Fifo_HrhObjIdList[1] = {
    (uint16)15U
};
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_3_Fifo_HrhObjIdList[1] = {
    (uint16)16U
};
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_4_Fifo_HrhObjIdList[1] = {
    (uint16)17U
};
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))

#define CanCfg_CanController_5_Fifo_HrhObjIdList  NULL_PTR
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_6_Fifo_HrhObjIdList[1] = {
    (uint16)18U
};
#endif

/* No. of Message Buffers for current controller - u8MaxMBCount */

#if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))


CAN_DATA_SECTION static const uint16 CanCfg_CanController_7_Fifo_HrhObjIdList[1] = {
    (uint16)19U
};
#endif
/*================================================================================================*/
/**
* @brief          Description of individual FlexCan controllers on chip
*
*/

/* PRQA S 0311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or volatile qualification from the type pointed to by a pointer
* Reason: Only for resolve ghs warning */
CAN_DATA_SECTION static const Can_ControlerInstanceType CanCfg_DriverConfig0_PB[CAN_MAXCONTROLLERCOUNT_0] =
{
    /* ControlerDescriptor of CanController_0*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_0,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_0_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0x2U,
        /* number of extended ID filter elements */
        (uint8)0x0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0x0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_16_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              /* Exist FD */
              (uint32)24U, /* 16 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    CAN_CONTROLLER_CFG_BUSOFFSWREC_U32 |/* Software BusOff Recovery */
                    /* RX Legacy Fifo Disabled */
                    CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 | /* RX Enhanced Fifo Enabled */
                    /* Error Notification disable */
                    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    #endif
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_0 end */

    /* ControlerDescriptor of CanController_1*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)7U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_1,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_1_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0x2U,
        /* number of extended ID filter elements */
        (uint8)0x0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0x0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_64_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              /* Exist FD */
              (uint32)72U, /* 64 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    CAN_CONTROLLER_CFG_BUSOFFSWREC_U32 |/* Software BusOff Recovery */
                    /* RX Legacy Fifo Disabled */
                    CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 | /* RX Enhanced Fifo Enabled */
                    /* Error Notification disable */
                    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    #endif
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_1 end */

    /* ControlerDescriptor of CanController_2*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_2,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_2_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0x2U,
        /* number of extended ID filter elements */
        (uint8)0x0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0x0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    /* RX Legacy Fifo Disabled */
                    CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 | /* RX Enhanced Fifo Enabled */
                    /* Error Notification disable */
                    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    #endif
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_2 end */

    /* ControlerDescriptor of CanController_3*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_3,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_3_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0x2U,
        /* number of extended ID filter elements */
        (uint8)0x0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0x0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    /* RX Legacy Fifo Disabled */
                    CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 | /* RX Enhanced Fifo Enabled */
                    /* Error Notification disable */
                    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    #endif
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_3 end */

    /* ControlerDescriptor of CanController_4*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_4,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_4_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0x2U,
        /* number of extended ID filter elements */
        (uint8)0x0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0x0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    /* RX Legacy Fifo Disabled */
                    CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 | /* RX Enhanced Fifo Enabled */
                    /* Error Notification disable */
                    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    #endif
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_4 end */

    /* ControlerDescriptor of CanController_5*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_5,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        NULL_PTR,
        (uint8)0U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0U,
        /* number of extended ID filter elements */
        (uint8)0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,    /* HOH reference is from CanMainFunctionRWPeriods_0 */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)FALSE,    /* Disable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    /* RX Legacy Fifo Disabled */
                    /* RX Enhanced Fifo Disabled */
                    /* Error Notification disable */
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_5 end */

    /* ControlerDescriptor of CanController_6*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_6,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_6_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0x2U,
        /* number of extended ID filter elements */
        (uint8)0x0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0x0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0U,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    /* RX Legacy Fifo Disabled */
                    CAN_CONTROLLER_CFG_ENHANCED_FIFO_U32 | /* RX Enhanced Fifo Enabled */
                    /* Error Notification disable */
                    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    #endif
                    0U
                )
    }, /* CanCfg_DriverConfig CanController_6 end */

    /* ControlerDescriptor of CanController_7*/
    {
        /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)12U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        
        /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)1U,
        
        /* Default BaudRate configured for current controller - u8DefaultBaudRateIndex */
        (uint8)0U,
        
        /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr*/
        CanHal_ControllerBaudrateCfgSet0_PB_7,
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) || ((CAN_LEGACY_RXFIFO_ENABLE == STD_ON))
        /* Fifo RX HRH index value */
        
        (uint16*)CanCfg_CanController_7_Fifo_HrhObjIdList,
        (uint8)1U,
        #endif
        
        #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
        /* number of standard ID filter elements */
        (uint8)0U,
        /* number of extended ID filter elements */
        (uint8)0U,
        /* minimum number of CAN messages stored in the Enhanced RX FIFO */
        (uint8)0U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
        
        #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
        /*Rx Fifo Global mask value - u32RxFifoGlobalMask*/
        (uint32)0x7ffU,
        /* Number of MBs used by Rx Fifo - u8RxFiFoUsedMb */
        (uint8)8U,
        /* Pointer to RxFifo Overflow notification function. - Can_RxFifoOverflowNotification */
        NULL_PTR,
        /* Pointer to RxFifo Warning notification function. - Can_RxFifoWarningNotification */
        NULL_PTR,

        (boolean)TRUE,    /* Enable FIFO interrupt  */
        /* Read/Write period reference used when POLLING mode is selected for the controller */
        (uint8)0U,   /* FIFO configured for INTERRUPT mode, reference not used */
        #endif /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
        (boolean)TRUE,  /* The CAN instance support CANFD feature */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  /* Exist FD */
                  /* Don't CanSpecifiedRAMBlockSize */
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR0_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR1_OFFSET_U8) |
                  ((uint32)CAN_8_BYTES_PAYLOAD_U32 << (uint32)FLEXCAN_MBDSR2_OFFSET_U8)
                  
                ),
        #endif
              /* Message Buffer Length for one  */
              #if (CAN_FD_MODE_ENABLE == STD_ON)
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #else
              (uint32)16U, /* non-fd always 8 bytes data payload */
              #endif
        /* ===== Controller Options ===== -  u32Options*/
        (uint32)(
                    CAN_CONTROLLER_CFG_LEGACY_FIFO_U32 | /* RX Legacy Fifo Enabled */
                    /* RX Enhanced Fifo Disabled */
                    /* Error Notification disable */
                    #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
                    /* Rx Fifo Overflow handling disabled */
                    /* Rx Fifo Warning handling disabled */
                    CAN_CONTROLLER_CFG_IDAM_A_U32 | /* ID Acceptance Mode A */
                    #endif
                    0U
                )
    }
};
      /* PRQA S 0311 -- */

/*==================================================================================================*/

/*==================================================================================================*/
/**
* @brief       Can Driver Cores mapping (indexed by partition number)
* @details     List of all Cores defined in EcuC, with Can driver association info
*/
static CONST(boolean, CAN_APPL_CONST) CanCoresMapping_PB[CAN_ECUC_CORES_NUM] =
{
    TRUE, /* The driver is mapped in the partition EcucCoreDefinition_0 */
    TRUE, /* The driver is mapped in the partition EcucCoreDefinition_1 */
    TRUE, /* The driver is mapped in the partition EcucCoreDefinition_2 */
    FALSE /* The driver is not mapped in the partition EcucCoreDefinition_3 */
};

/*==================================================================================================*/
/**
* @brief       Can Controller Core mapping (indexed by controller number)
* @details     List of all configured controllers, with partition association
*/

static CONST(uint32, CAN_APPL_CONST) CanCtrlCoresMapping_PB[CAN_CTRL_CONFIGURED] =
{
    0U,
    0U,
    0U,
    0U,
    1U,
    1U,
    1U,
    2U
};

/*================================================================================================*/
/**
* @brief          Top level structure containing all Can driver configurations
*
*/
CAN_DATA_SECTION const Can_ConfigType Can_Config=
{
    Can_FilterMasks0_PB, /*  - pFilterMasks */
    /* MessageBufferConfigContainer - MBConfigContainer */
    {
        	
        CanCfg_MessageBufferConfigs0_PB, /* pMessageBufferConfigsPtr */
        (Can_HwHandleType)CAN_MAXMBCOUNT_PB, /* uMessageBufferConfigCount */
    },
    {
        CanCfg_DriverConfig0_PB, /* FlexCAN controller description - ControlerDescriptors*/
        CAN_MAXCONTROLLERCOUNT_0
    },
    {
        /* Number of CAN controllers configured -u8ControllersConfigured*/
        (uint8) 8U,
        /* FlexCAN controller description - ControlerDescriptors*/
        CanHal_ControlerConfig0_PB,
        /*Maximum Object IDs configured - u32CanMaxObjectId*/
        (uint32)28U
    },
    
    #if (CAN_LEGACY_RXFIFO_ENABLE == STD_ON)
    /* Can_RxLegacyFiFoTableIdConfigType - pRxLegacyFiFoTableIdConfig */
    LegacyRxFifoTableID_PBConfig0,
    #endif  /* (CAN_LEGACY_RXFIFO_ENABLE == STD_ON) */
    
    #if (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON)
    /* Can_RxEnhancedFiFoTableIdConfigType - pRxEnhancedFiFoTableIdConfig */
    EnhancedRxFifoTableID_PBConfig0,
    #endif  /* (CAN_ENHANCED_RXFIFO_ENABLE == STD_ON) */
    
    /* The index of the first HTH configured */
    (Can_HwHandleType)13U,
    /* The fifo object count */
    (Can_HwHandleType)7U,
    /* Driver partition mapping Ptr */
    CanCoresMapping_PB,
    CanCtrlCoresMapping_PB
};





#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"

/* PRQA S 0779 -- */

#ifdef __cplusplus
}
#endif

/** @} */
