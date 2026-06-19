#ifndef _BSP_ETHIF_H_
#define _BSP_ETHIF_H_

#include "Bsp_McalHeader.h"
#include "EthIf.h"
#include "Bsp_Eth.h"
#include "Bsp_EthTrcv.h"
#include <stdlib.h>

/* Test Time Sensitive Network functions
 * Preconditions for the test cases:
 * 1. The priority of the TX FIFOs must be configured in the egress FIFO
 *  according to TEST_CHANNEL0_PRIORITY and TEST_CHANNEL1_PRIORITY.
 * 2. The time aware shaper must be configured as the follows:
 *    (1) Gate Control Length set to 2
 *    (2) Cycle Time set to TEST_TAS_CYCLETIME_NS
 *    (3) Gate Control List 0, TimeInterval = TEST_CHANNEL0_TIMESLOT_NS, queue0 open, queue1 close
 *    (4) Gate Control List 1, TimeInterval = TEST_CHANNEL1_TIMESLOT_NS, queue0 close, queue1 open
 *
 * Test case number:
 * 0：Disable TSN test
 * 1: Test Time Based Schedule absolute mode, Time Based Schedule must be enabled.
 * 2: Test TSN gate control lit, Time Aware Shaper must be configured.
 * 3: Test Time Based Schedule offset mode, Time Based Schedule must be enabled.
 */
#define TEST_TIME_SENSITIVE_NETWORK 3U

#define NANOSEC_PER_SUBMILLISEC     10000U
#define NANOSEC_PER_MILLISEC        1000000U
#define NANOSEC_PER_SECOND          1000000000U

/* Channel priority assignment */
#define TEST_CHANNEL0_PRIORITY      0U
#define TEST_CHANNEL1_PRIORITY      1U

/* Time Aware Shaper cycle time 10 ms */
#define TEST_TAS_CYCLETIME_MS       10
#define TEST_TAS_CYCLETIME_NS       (TEST_TAS_CYCLETIME_MS * NANOSEC_PER_MILLISEC)
#define TEST_TAS_CYCLETIME_SUBMS    (TEST_TAS_CYCLETIME_NS / NANOSEC_PER_SUBMILLISEC)

/* Channel 0 time slot [0ms ~ 9ms) */
#define TEST_CHANNEL0_TIMESLOT_MS   9U
#define TEST_CHANNEL0_TIMESLOT_NS   (TEST_CHANNEL0_TIMESLOT_MS * NANOSEC_PER_MILLISEC)
/* Channel 1 time slot [9ms ~ 10ms) */
#define TEST_CHANNEL1_TIMESLOT_MS   1U
#define TEST_CHANNEL1_TIMESLOT_NS   (TEST_CHANNEL1_TIMESLOT_MS * NANOSEC_PER_MILLISEC)
#define TEST_CHANNEL1_GCLTIME_MS    TEST_CHANNEL0_TIMESLOT_MS
#define TEST_CHANNEL1_GCLTIME_NS    TEST_CHANNEL0_TIMESLOT_NS
#define TEST_CHANNEL1_TBSTIME_NS    (TEST_CHANNEL1_GCLTIME_NS + 120000U) /* 9120000 % 256 == 0 */
#define TEST_CHANNEL1_TBSTIME_SUNMS (TEST_CHANNEL1_TBSTIME_NS / NANOSEC_PER_SUBMILLISEC)

#define BUFIDX_TO_CHANNEL(BufIdx) \
    ((BufIdx) < BSP_ETH_CONFIG_PTR->CtrlPtr[0U].EgressFifoCfgPtr[0].FifoBufTotal ? 0U : 1U)

/************ Global functions *******************/
/* Should only be called by the configured core */
void Bsp_EthIf_Init(void);

Std_ReturnType Bsp_EthIf_SetControllerMode(void);

/* Should only be called by the configured core */
void Bsp_EthIf_5ms_Task_Event(void);

/* Should only be called by the configured core */
void Bsp_EthIf_1s_Task_Event(void);

#endif /* _BSP_ETHIF_H_ */
