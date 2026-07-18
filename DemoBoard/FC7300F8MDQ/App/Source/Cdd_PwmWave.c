#include "Cdd_PwmWave.h"

#include "Eftu_Dtm_Reg.h"
#include "Eftu_Tom_Reg.h"
#include "Mcal.h"
#include "SchM_Pwm.h"

#if (CDD_PWM_WAVE_DTM_BOUNDARY_SYNC_SUPPORTED != STD_OFF)
#error "Implement and verify the complete CH0-synchronous DTM1 start/stop path before enabling output"
#endif

#if (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED != STD_OFF)
#error "Implement and verify the real eFTU1 fault source, polarity, latch and raw-status path first"
#endif

#define CDD_PWM_WAVE_TOM_MAX_VALUE      (0xFFFFFFU)
#define CDD_PWM_WAVE_HW_POLL_LIMIT      (10000U)
#define CDD_PWM_WAVE_MAX_BOUNDARY_WRAPS (2U)
#define CDD_PWM_WAVE_PENDING_MAX_MAIN_CYCLES (2U)
#define CDD_PWM_WAVE_CARRIER_CHANNEL     (0U)
#define CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL (3U)
#define CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL  (7U)
#define CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL (1U)

#define CDD_PWM_WAVE_DTM_ALL_LOW          (0x22222222U)
#define CDD_PWM_WAVE_DTM_DEAD_TIME_MASK   (0x88888888U)
#define CDD_PWM_WAVE_DTM_EXPECTED_DTV                                            \
  (EFTU_DTM_CHn_DTV_RELRISE(CDD_PWM_WAVE_DEAD_TIME_TICKS) |                     \
   EFTU_DTM_CHn_DTV_RELFALL(CDD_PWM_WAVE_DEAD_TIME_TICKS))

#define CDD_PWM_WAVE_UPEN_DISABLE_COMMAND                                        \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0(1U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3(1U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(1U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(1U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(1U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(1U))

#define CDD_PWM_WAVE_UPEN_ENABLE_COMMAND                                         \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0(2U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3(2U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(2U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(2U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(2U) |                                       \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(2U))

#define CDD_PWM_WAVE_UPEN_COMMAND_MASK                                           \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0_MASK |                                      \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3_MASK |                                      \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4_MASK |                                      \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5_MASK |                                      \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6_MASK |                                      \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7_MASK)

#define CDD_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND                                \
  (EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL3(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL4(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL5(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL6(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL7(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH0(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH3(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH4(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH5(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH6(1U) |                                     \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH7(1U))

#define CDD_PWM_WAVE_CH3_7_DISABLE_COMMAND                                       \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(1U))

#define CDD_PWM_WAVE_OUT3_7_DISABLE_COMMAND                                      \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(1U))

#define CDD_PWM_WAVE_CH4_7_DISABLE_COMMAND                                       \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(1U))

#define CDD_PWM_WAVE_OUT4_7_DISABLE_COMMAND                                      \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(1U))

#define CDD_PWM_WAVE_CH3_7_STATUS_MASK                                           \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3_MASK |                                  \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4_MASK |                                  \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5_MASK |                                  \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6_MASK |                                  \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7_MASK)

#define CDD_PWM_WAVE_OUT3_7_STATUS_MASK                                          \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3_MASK |                                  \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4_MASK |                                  \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5_MASK |                                  \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6_MASK |                                  \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7_MASK)

#define CDD_PWM_WAVE_CH3_7_IMMEDIATE_DISABLE                                     \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7(1U))

#define CDD_PWM_WAVE_OUT3_7_IMMEDIATE_DISABLE                                    \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7(1U))

#define CDD_PWM_WAVE_CH4_7_IMMEDIATE_DISABLE                                     \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6(1U) |                                   \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7(1U))

#define CDD_PWM_WAVE_OUT4_7_IMMEDIATE_DISABLE                                    \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6(1U) |                                   \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7(1U))

_Static_assert(CDD_PWM_WAVE_UPEN_DISABLE_COMMAND == 0x55410000U,
               "Unexpected CH0/CH3-CH7 UPEN disable encoding");
_Static_assert(CDD_PWM_WAVE_UPEN_ENABLE_COMMAND == 0xAA820000U,
               "Unexpected CH0/CH3-CH7 UPEN enable encoding");
_Static_assert(CDD_PWM_WAVE_UPEN_COMMAND_MASK == 0xFFC30000U,
               "Unexpected UPEN command-field mask encoding");
_Static_assert(CDD_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND == 0x55415541U,
               "Unexpected CH0/CH3-CH7 force-update disable encoding");
_Static_assert(CDD_PWM_WAVE_CH3_7_DISABLE_COMMAND == 0x00005540U,
               "Unexpected CH3-CH7 disable encoding");

static volatile boolean s_bInitialized = FALSE;
static volatile boolean s_bInitInProgress = FALSE;
static volatile boolean s_bFaultLatched = FALSE;
static volatile boolean s_bPendingFrameValid = FALSE;
static volatile boolean s_bActiveFrameValid = FALSE;
static volatile boolean s_bStartPending = FALSE;
static boolean s_bPendingUsesRunSignalLevels = FALSE;
static volatile Cdd_PwmWave_StateType s_eState = CDD_PWM_WAVE_STATE_RESET_SAFE;
static Cdd_PwmWave_FrameType s_tPendingFrame;
static Cdd_PwmWave_FrameType s_tActiveFrame;
static Cdd_PwmWave_SequenceType s_u32SequenceCounter = 0U;
static Cdd_PwmWave_SequenceType s_u32PendingSequence = 0U;
static Cdd_PwmWave_SequenceType s_u32ActiveSequence = 0U;
static uint32 s_u32DtmRunCtrl2 = 0U;
static volatile uint32 s_u32FaultFlags = 0U;
static uint8 s_u8PendingMainCycles = 0U;

static boolean Cdd_PwmWave_IsCore0(void)
{
  return (0U == GET_CPU_ID()) ? TRUE : FALSE;
}

static Cdd_PwmWave_SequenceType Cdd_PwmWave_NextSequence(void)
{
  s_u32SequenceCounter++;
  if (0U == s_u32SequenceCounter) {
    s_u32SequenceCounter++;
  }
  return s_u32SequenceCounter;
}

static boolean Cdd_PwmWave_IsTomPwmChannelConfigValid(uint8 u8Channel)
{
  uint32 u32ChannelCtrl = EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL;

  return ((((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_MODE_MASK) ==
            EFTU_TOM_CHn_CTRL_MODE(2U)) &&
           ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_UDMODE_MASK) ==
            EFTU_TOM_CHn_CTRL_UDMODE(0U)) &&
           ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_CLK_SRC_MASK) ==
            EFTU_TOM_CHn_CTRL_CLK_SRC(1U)) &&
           ((u32ChannelCtrl &
             (EFTU_TOM_CHn_CTRL_ACB_MASK | EFTU_TOM_CHn_CTRL_EXT_FUPD_MASK |
              EFTU_TOM_CHn_CTRL_OSM_MASK | EFTU_TOM_CHn_CTRL_TRIG_IN_USE_EXT_MASK |
              EFTU_TOM_CHn_CTRL_TRIG_OUT_USE_EXT_MASK)) == 0U) &&
           ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR &
             EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR_MASK) ==
            EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR(1U)))
              ? TRUE
              : FALSE);
}

static boolean Cdd_PwmWave_IsHardwareConfigValid(uint32 u32DtmRunCtrl2)
{
  uint8 u8Index;
  uint32 u32ChannelCtrl;
  uint32 u32CarrierPeriod;

  if ((EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK) == 0U) {
    return FALSE;
  }
  if (((EFTU_TOM_1_0->TGC_ENDIS_STAT & EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK) !=
       EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK) ||
      ((EFTU_TOM_1_0->TGC_OUTEN_STAT & EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MASK) !=
       EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MASK)) {
    return FALSE;
  }
  if (((EFTU_TOM_1_0->TGC_ENDIS_STAT &
        (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT1_MASK |
         EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT2_MASK)) != 0U) ||
      ((EFTU_TOM_1_0->TGC_OUTEN_STAT &
        (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT1_MASK |
         EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT2_MASK)) != 0U) ||
      ((EFTU_TOM_1_0->TGC_INT_TRIG &
        (EFTU_TOM_TGC_INT_TRIG_INT_TRIG1_MASK |
         EFTU_TOM_TGC_INT_TRIG_INT_TRIG2_MASK)) != 0U)) {
    return FALSE;
  }

  if (FALSE == Cdd_PwmWave_IsTomPwmChannelConfigValid(CDD_PWM_WAVE_CARRIER_CHANNEL)) {
    return FALSE;
  }
  for (u8Index = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL;
       u8Index <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL;
       u8Index++) {
    if (FALSE == Cdd_PwmWave_IsTomPwmChannelConfigValid(u8Index)) {
      return FALSE;
    }
  }

  u32ChannelCtrl = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL;
  if ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_TRIGOUT_MASK) == 0U) {
    return FALSE;
  }
  if ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) != 0U) {
    return FALSE;
  }

  for (u8Index = 1U; u8Index <= 2U; u8Index++) {
    u32ChannelCtrl = EFTU_TOM_1_0->Channel[u8Index].CH_CTRL;
    if ((u32ChannelCtrl &
         (EFTU_TOM_CHn_CTRL_TRIGOUT_MASK | EFTU_TOM_CHn_CTRL_TRIG_OUT_USE_EXT_MASK)) != 0U) {
      return FALSE;
    }
  }

  for (u8Index = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL;
       u8Index <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL;
       u8Index++) {
    if ((EFTU_TOM_1_0->Channel[u8Index].CH_CTRL & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) == 0U) {
      return FALSE;
    }
    if ((EFTU_TOM_1_0->Channel[u8Index].CH_CTRL & EFTU_TOM_CHn_CTRL_TRIGOUT_MASK) != 0U) {
      return FALSE;
    }
  }

  u32CarrierPeriod = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM0;
  if ((u32CarrierPeriod < CDD_PWM_WAVE_MIN_PERIOD_TICKS) ||
      (u32CarrierPeriod > CDD_PWM_WAVE_MAX_PERIOD_TICKS) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM1 !=
       (u32CarrierPeriod >> 1U)) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 != u32CarrierPeriod) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 !=
       (u32CarrierPeriod >> 1U)) ||
      ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL &
        EFTU_TOM_CHn_CTRL_SL_MASK) !=
       EFTU_TOM_CHn_CTRL_SL(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL)) ||
      ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR &
        EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK) !=
       EFTU_TOM_CHn_CTRL_SR_SL_SR(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL))) {
    return FALSE;
  }

  if (u32DtmRunCtrl2 != CDD_PWM_WAVE_DTM_DEAD_TIME_MASK) {
    return FALSE;
  }
  if ((EFTU1_DTM1->CTRL &
       (EFTU_DTM_CTRL_CLK_SEL_MASK | EFTU_DTM_CTRL_DTM_SEL_MASK |
        EFTU_DTM_CTRL_UPD_MODE_MASK | EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK |
        EFTU_DTM_CTRL_SR_UPD_EN_MASK)) != 0U) {
    return FALSE;
  }
  if ((EFTU1_DTM1->CH_CTRL1 != 0U) || (EFTU1_DTM1->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU1_DTM1->CHn_DTV[u8Index] &
         (EFTU_DTM_CHn_DTV_RELRISE_MASK | EFTU_DTM_CHn_DTV_RELFALL_MASK)) !=
        CDD_PWM_WAVE_DTM_EXPECTED_DTV) {
      return FALSE;
    }
  }

  return TRUE;
}

static void Cdd_PwmWave_DisableFrameUpdate(void)
{
  uint32 u32GlobalBypass;

  EFTU_TOM_1_0->TGC_FUPD_CTRL = CDD_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND;
  u32GlobalBypass =
      EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK;
  EFTU_TOM_1_0->TGC_GLB_CTRL =
      u32GlobalBypass | CDD_PWM_WAVE_UPEN_DISABLE_COMMAND;
  MCAL_DATA_SYNC_BARRIER();
}

static void Cdd_PwmWave_ArmFrameUpdate(void)
{
  uint32 u32GlobalBypass;

  MCAL_DATA_SYNC_BARRIER();
  u32GlobalBypass =
      EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK;
  EFTU_TOM_1_0->TGC_GLB_CTRL =
      u32GlobalBypass | CDD_PWM_WAVE_UPEN_ENABLE_COMMAND;
  MCAL_DATA_SYNC_BARRIER();
}

static void Cdd_PwmWave_ImmediateDisableAll(void)
{
  EFTU_TOM_1_0->TGC_ENDIS_CTRL = CDD_PWM_WAVE_CH3_7_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_OUTEN_CTRL = CDD_PWM_WAVE_OUT3_7_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_ENDIS_STAT = CDD_PWM_WAVE_CH3_7_IMMEDIATE_DISABLE;
  EFTU_TOM_1_0->TGC_OUTEN_STAT = CDD_PWM_WAVE_OUT3_7_IMMEDIATE_DISABLE;
  MCAL_DATA_SYNC_BARRIER();
}

static void Cdd_PwmWave_ImmediateDisableDtmChannels(void)
{
  EFTU_TOM_1_0->TGC_ENDIS_CTRL = CDD_PWM_WAVE_CH4_7_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_OUTEN_CTRL = CDD_PWM_WAVE_OUT4_7_DISABLE_COMMAND;
  EFTU_TOM_1_0->TGC_ENDIS_STAT = CDD_PWM_WAVE_CH4_7_IMMEDIATE_DISABLE;
  EFTU_TOM_1_0->TGC_OUTEN_STAT = CDD_PWM_WAVE_OUT4_7_IMMEDIATE_DISABLE;
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_AreAllOutputsEnabled(void)
{
  return (((EFTU_TOM_1_0->TGC_ENDIS_STAT & CDD_PWM_WAVE_CH3_7_STATUS_MASK) ==
           CDD_PWM_WAVE_CH3_7_STATUS_MASK) &&
          ((EFTU_TOM_1_0->TGC_OUTEN_STAT & CDD_PWM_WAVE_OUT3_7_STATUS_MASK) ==
           CDD_PWM_WAVE_OUT3_7_STATUS_MASK)) ? TRUE : FALSE;
}

static boolean Cdd_PwmWave_AreAllOutputsDisabled(void)
{
  return (((EFTU_TOM_1_0->TGC_ENDIS_STAT & CDD_PWM_WAVE_CH3_7_STATUS_MASK) == 0U) &&
          ((EFTU_TOM_1_0->TGC_OUTEN_STAT & CDD_PWM_WAVE_OUT3_7_STATUS_MASK) == 0U))
             ? TRUE
             : FALSE;
}

static boolean Cdd_PwmWave_WaitForOutputState(boolean bEnabled)
{
  uint32 u32PollCount = CDD_PWM_WAVE_HW_POLL_LIMIT;
  uint32 u32PreviousCounter =
      EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 &
      EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;

  while (u32PollCount > 0U) {
    if (((TRUE == bEnabled) && (TRUE == Cdd_PwmWave_AreAllOutputsEnabled())) ||
        ((FALSE == bEnabled) && (TRUE == Cdd_PwmWave_AreAllOutputsDisabled()))) {
      return TRUE;
    }
    if (TRUE == s_bFaultLatched) {
      return FALSE;
    }

    u32CurrentCounter =
        EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 &
        EFTU_TOM_CHn_CN0_CN0_MASK;
    if (u32CurrentCounter < u32PreviousCounter) {
      u8BoundaryWraps++;
      if (u8BoundaryWraps >= CDD_PWM_WAVE_MAX_BOUNDARY_WRAPS) {
        return FALSE;
      }
    }
    u32PreviousCounter = u32CurrentCounter;
    u32PollCount--;
  }

  return FALSE;
}

static void Cdd_PwmWave_SelectCarrierBoundaryTrigger(boolean bEnable)
{
  uint32 u32InternalTrigger = EFTU_TOM_1_0->TGC_INT_TRIG;

  EFTU_TOM_1_0->TGC_INT_TRIG =
      (u32InternalTrigger & (~EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK)) |
      EFTU_TOM_TGC_INT_TRIG_INT_TRIG0((TRUE == bEnable) ? 2U : 1U);
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_IsCarrierBoundaryTriggerSelected(void)
{
  return ((EFTU_TOM_1_0->TGC_INT_TRIG & EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK) ==
          EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK)
             ? TRUE
             : FALSE;
}

static uint32 Cdd_PwmWave_GetRunSignalLevel(uint8 u8Channel)
{
  uint32 u32Level;

  switch (u8Channel) {
    case 4U:
    case 7U:
      u32Level = 0U;
      break;
    default:
      u32Level = 1U;
      break;
  }
  return u32Level;
}

static void Cdd_PwmWave_SetShadowSignalLevels(boolean bRunSignalLevels)
{
  uint8 u8Channel;
  uint32 u32Level;

  EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR =
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR &
       (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) |
      EFTU_TOM_CHn_CTRL_SR_SL_SR(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL);

  for (u8Channel = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL;
       u8Channel <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL;
       u8Channel++) {
    u32Level = (TRUE == bRunSignalLevels) ? Cdd_PwmWave_GetRunSignalLevel(u8Channel) : 1U;
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR &
         (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) |
        EFTU_TOM_CHn_CTRL_SR_SL_SR(u32Level);
  }
}

static void Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels(void)
{
  uint8 u8Channel;

  for (u8Channel = 3U; u8Channel <= 7U; u8Channel++) {
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & (~EFTU_TOM_CHn_CTRL_SL_MASK)) |
        EFTU_TOM_CHn_CTRL_SL(1U);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR &
         (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) |
        EFTU_TOM_CHn_CTRL_SR_SL_SR(1U);
  }
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_AreSafeSignalLevelsApplied(void)
{
  uint8 u8Channel;

  for (u8Channel = 3U; u8Channel <= 7U; u8Channel++) {
    if (((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) == 0U) ||
        ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR &
          EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK) == 0U)) {
      return FALSE;
    }
  }
  return TRUE;
}

static boolean Cdd_PwmWave_IsFrameApplied(const Cdd_PwmWave_FrameType *pFrame,
                                          boolean bRunSignalLevels)
{
  uint8 u8Index;
  uint8 u8Channel;
  uint32 u32Pwm5CmpA;
  uint32 u32Pwm5CmpB;
  uint32 u32ExpectedSignalLevel;

  if (CDD_PWM_WAVE_PWM5_LOW == pFrame->ePwm5State) {
    u32Pwm5CmpA = CDD_PWM_WAVE_TOM_MAX_VALUE;
    u32Pwm5CmpB = 0U;
  } else {
    u32Pwm5CmpA = 0U;
    u32Pwm5CmpB = CDD_PWM_WAVE_TOM_MAX_VALUE;
  }

  if ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM0 !=
       pFrame->u32PeriodTicks) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM1 !=
       (pFrame->u32PeriodTicks >> 1U)) ||
      (EFTU_TOM_1_0->Channel[3].CH_CM0 != u32Pwm5CmpA) ||
      (EFTU_TOM_1_0->Channel[3].CH_CM1 != u32Pwm5CmpB)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU_TOM_1_0->Channel[u8Index + 4U].CH_CM0 != pFrame->aWindow[u8Index].u32CmpA) ||
        (EFTU_TOM_1_0->Channel[u8Index + 4U].CH_CM1 != pFrame->aWindow[u8Index].u32CmpB)) {
      return FALSE;
    }
  }

  if ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL &
       EFTU_TOM_CHn_CTRL_SL_MASK) !=
      EFTU_TOM_CHn_CTRL_SL(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL)) {
    return FALSE;
  }

  for (u8Channel = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL;
       u8Channel <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL;
       u8Channel++) {
    u32ExpectedSignalLevel =
        (TRUE == bRunSignalLevels) ? Cdd_PwmWave_GetRunSignalLevel(u8Channel) : 1U;
    if ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) !=
        EFTU_TOM_CHn_CTRL_SL(u32ExpectedSignalLevel)) {
      return FALSE;
    }
  }

  return TRUE;
}

static void Cdd_PwmWave_RefreshPending(void)
{
  if ((TRUE == s_bPendingFrameValid) &&
      (TRUE == Cdd_PwmWave_IsFrameApplied(&s_tPendingFrame,
                                          s_bPendingUsesRunSignalLevels))) {
    s_tActiveFrame = s_tPendingFrame;
    s_u32ActiveSequence = s_u32PendingSequence;
    s_bActiveFrameValid = TRUE;
    s_bPendingFrameValid = FALSE;
    s_bPendingUsesRunSignalLevels = FALSE;
    s_u32PendingSequence = 0U;
    s_u8PendingMainCycles = 0U;
    Cdd_PwmWave_DisableFrameUpdate();
  }
}

static void Cdd_PwmWave_AbortPending(void)
{
  Cdd_PwmWave_DisableFrameUpdate();
  s_bPendingFrameValid = FALSE;
  s_bPendingUsesRunSignalLevels = FALSE;
  s_u32PendingSequence = 0U;
  s_u8PendingMainCycles = 0U;
}

static void Cdd_PwmWave_EnterFault(uint32 u32FaultFlags)
{
  Cdd_PwmWave_SelectCarrierBoundaryTrigger(FALSE);
  Cdd_PwmWave_AbortPending();
  /* First prioritize the eight DTM outputs, then independently force PWM5 low. */
  Cdd_PwmWave_ImmediateDisableDtmChannels();
  /* Active DTM control is written only after the related TOM channels are disabled. */
  EFTU1_DTM1->CH_CTRL2_SR = CDD_PWM_WAVE_DTM_ALL_LOW;
  EFTU1_DTM1->CH_CTRL2 = CDD_PWM_WAVE_DTM_ALL_LOW;
  Cdd_PwmWave_ImmediateDisableAll();
  Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels();

  s_bStartPending = FALSE;
  s_bActiveFrameValid = FALSE;
  s_u32ActiveSequence = 0U;
  s_bFaultLatched = TRUE;
  s_u32FaultFlags |= u32FaultFlags;
  s_eState = CDD_PWM_WAVE_STATE_FAULT_LATCHED;
  MCAL_DATA_SYNC_BARRIER();
}

Cdd_PwmWave_ResultType Cdd_PwmWave_Init(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bHardwareConfigValid;
  boolean bOutputsDisabled = FALSE;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((TRUE == s_bInitialized) || (TRUE == s_bInitInProgress)) {
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
    return CDD_PWM_WAVE_E_STATE;
  }

  s_bInitInProgress = TRUE;
  s_eState = CDD_PWM_WAVE_STATE_GPIO_LOW;

  s_u32DtmRunCtrl2 = EFTU1_DTM1->CH_CTRL2;
  Cdd_PwmWave_DisableFrameUpdate();
  Cdd_PwmWave_ImmediateDisableAll();
  Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels();
  EFTU1_DTM1->CH_CTRL2_SR = CDD_PWM_WAVE_DTM_ALL_LOW;
  EFTU1_DTM1->CH_CTRL2 = CDD_PWM_WAVE_DTM_ALL_LOW;
  MCAL_DATA_SYNC_BARRIER();

  bHardwareConfigValid = Cdd_PwmWave_IsHardwareConfigValid(s_u32DtmRunCtrl2);
  if (TRUE == bHardwareConfigValid) {
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
    bHardwareConfigValid = Cdd_PwmWave_IsCarrierBoundaryTriggerSelected();
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (TRUE == bHardwareConfigValid) {
    bOutputsDisabled = Cdd_PwmWave_WaitForOutputState(FALSE);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == bHardwareConfigValid) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_CONFIG;
  } else if (FALSE == bOutputsDisabled) {
    eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_TIMEOUT;
  } else if ((EFTU1_DTM1->CH_CTRL2_SR != CDD_PWM_WAVE_DTM_ALL_LOW) ||
             (EFTU1_DTM1->CH_CTRL2 != CDD_PWM_WAVE_DTM_ALL_LOW) ||
             (FALSE == Cdd_PwmWave_AreSafeSignalLevelsApplied())) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_CONFIG;
  } else {
    s_bPendingFrameValid = FALSE;
    s_bPendingUsesRunSignalLevels = FALSE;
    s_bActiveFrameValid = FALSE;
    s_bStartPending = FALSE;
    s_bFaultLatched = FALSE;
    s_u32PendingSequence = 0U;
    s_u32ActiveSequence = 0U;
    s_u32FaultFlags = 0U;
    s_u8PendingMainCycles = 0U;
    s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;
    s_bInitialized = TRUE;
  }

  if (CDD_PWM_WAVE_OK != eResult) {
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(FALSE);
  }

  s_bInitInProgress = FALSE;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame)
{
  uint8 u8Index;

  if (NULL_PTR == pFrame) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  if ((pFrame->u32PeriodTicks < CDD_PWM_WAVE_MIN_PERIOD_TICKS) ||
      (pFrame->u32PeriodTicks > CDD_PWM_WAVE_MAX_PERIOD_TICKS)) {
    return CDD_PWM_WAVE_E_PERIOD;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((pFrame->aWindow[u8Index].u32CmpA >= pFrame->u32PeriodTicks) ||
        (pFrame->aWindow[u8Index].u32CmpB >= pFrame->u32PeriodTicks) ||
        (pFrame->aWindow[u8Index].u32CmpA >= pFrame->aWindow[u8Index].u32CmpB)) {
      return CDD_PWM_WAVE_E_CMP;
    }
    if ((pFrame->aWindow[u8Index].u32CmpB - pFrame->aWindow[u8Index].u32CmpA) <
        CDD_PWM_WAVE_DEAD_TIME_TICKS) {
      return CDD_PWM_WAVE_E_DEAD_TIME;
    }
  }

  if ((CDD_PWM_WAVE_PWM5_LOW != pFrame->ePwm5State) &&
      (CDD_PWM_WAVE_PWM5_HIGH != pFrame->ePwm5State)) {
    return CDD_PWM_WAVE_E_PWM5;
  }

  return CDD_PWM_WAVE_OK;
}

static Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrameLocked(
    const Cdd_PwmWave_FrameType *pFrame,
    Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_ResultType eResult;
  Cdd_PwmWave_SequenceType u32Sequence;
  uint8 u8Index;

  Cdd_PwmWave_RefreshPending();

  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (TRUE == s_bStartPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) &&
             (CDD_PWM_WAVE_STATE_RUN != s_eState)) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (FALSE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    Cdd_PwmWave_DisableFrameUpdate();

    EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 =
        pFrame->u32PeriodTicks;
    EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 =
        pFrame->u32PeriodTicks >> 1U;
    if (CDD_PWM_WAVE_PWM5_LOW == pFrame->ePwm5State) {
      EFTU_TOM_1_0->Channel[3].CH_SR0 = CDD_PWM_WAVE_TOM_MAX_VALUE;
      EFTU_TOM_1_0->Channel[3].CH_SR1 = 0U;
    } else {
      EFTU_TOM_1_0->Channel[3].CH_SR0 = 0U;
      EFTU_TOM_1_0->Channel[3].CH_SR1 = CDD_PWM_WAVE_TOM_MAX_VALUE;
    }

    for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
      EFTU_TOM_1_0->Channel[u8Index + 4U].CH_SR0 = pFrame->aWindow[u8Index].u32CmpA;
      EFTU_TOM_1_0->Channel[u8Index + 4U].CH_SR1 = pFrame->aWindow[u8Index].u32CmpB;
    }
    s_bPendingUsesRunSignalLevels =
        (CDD_PWM_WAVE_STATE_RUN == s_eState) ? TRUE : FALSE;
    Cdd_PwmWave_SetShadowSignalLevels(s_bPendingUsesRunSignalLevels);

    u32Sequence = Cdd_PwmWave_NextSequence();
    s_tPendingFrame = *pFrame;
    s_u32PendingSequence = u32Sequence;
    s_bPendingFrameValid = TRUE;
    s_u8PendingMainCycles = 0U;
    Cdd_PwmWave_ArmFrameUpdate();

    if (NULL_PTR != pSequence) {
      *pSequence = u32Sequence;
    }
    eResult = CDD_PWM_WAVE_OK;
  }

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrame(const Cdd_PwmWave_FrameType *pFrame,
                                               Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_FrameType tFrameSnapshot;
  Cdd_PwmWave_ResultType eResult;

  if (NULL_PTR == pFrame) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  tFrameSnapshot = *pFrame;
  eResult = Cdd_PwmWave_ValidateFrame(&tFrameSnapshot);
  if (CDD_PWM_WAVE_OK != eResult) {
    return eResult;
  }
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  eResult = Cdd_PwmWave_SubmitFrameLocked(&tFrameSnapshot, pSequence);
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitPeriodChange(uint32 u32NewPeriodTicks,
                                                      Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_FrameType tCandidate;
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bScaleAll = FALSE;
  uint32 u32OldPeriod;
  uint8 u8Index;

  if ((u32NewPeriodTicks < CDD_PWM_WAVE_MIN_PERIOD_TICKS) ||
      (u32NewPeriodTicks > CDD_PWM_WAVE_MAX_PERIOD_TICKS)) {
    return CDD_PWM_WAVE_E_PERIOD;
  }
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (TRUE == s_bStartPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) &&
             (CDD_PWM_WAVE_STATE_RUN != s_eState)) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (FALSE == s_bActiveFrameValid) {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;
  } else {
    tCandidate = s_tActiveFrame;
    u32OldPeriod = tCandidate.u32PeriodTicks;
    for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
      if ((tCandidate.aWindow[u8Index].u32CmpA >= u32NewPeriodTicks) ||
          (tCandidate.aWindow[u8Index].u32CmpB >= u32NewPeriodTicks)) {
        bScaleAll = TRUE;
        break;
      }
    }

    if (TRUE == bScaleAll) {
      for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
        tCandidate.aWindow[u8Index].u32CmpA =
            (uint32)(((uint64)tCandidate.aWindow[u8Index].u32CmpA * u32NewPeriodTicks) /
                     u32OldPeriod);
        tCandidate.aWindow[u8Index].u32CmpB =
            (uint32)(((uint64)tCandidate.aWindow[u8Index].u32CmpB * u32NewPeriodTicks) /
                     u32OldPeriod);
      }
    }
    tCandidate.u32PeriodTicks = u32NewPeriodTicks;

    eResult = Cdd_PwmWave_ValidateFrame(&tCandidate);
    if (CDD_PWM_WAVE_OK == eResult) {
      /* Keep the active-frame snapshot, scaling and arm in one transaction. */
      eResult = Cdd_PwmWave_SubmitFrameLocked(&tCandidate, pSequence);
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_Start(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();

  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if ((TRUE == s_bStartPending) || (TRUE == s_bPendingFrameValid)) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (FALSE == s_bActiveFrameValid) {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;
  } else {
    /*
     * Fail closed. CH0 now provides the preceding-DTM boundary edge, but the
     * complete DTM1 shadow-transfer path for zero-boundary start and stop is
     * still unverified. Direct CH_CTRL2 switching while TOM CH4-CH7 run would
     * truncate a cycle.
     */
    eResult = CDD_PWM_WAVE_E_NOT_SUPPORTED;
  }

  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_Stop(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (TRUE == s_bStartPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (CDD_PWM_WAVE_STATE_RUN != s_eState) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else {
    eResult = CDD_PWM_WAVE_E_NOT_SUPPORTED;
  }

  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_EmergencyShutdown(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_SOFTWARE_REQUEST);
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_ClearFault(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else {
    Cdd_PwmWave_DisableFrameUpdate();
    Cdd_PwmWave_ImmediateDisableAll();
    Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels();
    EFTU1_DTM1->CH_CTRL2_SR = CDD_PWM_WAVE_DTM_ALL_LOW;
    EFTU1_DTM1->CH_CTRL2 = CDD_PWM_WAVE_DTM_ALL_LOW;
    MCAL_DATA_SYNC_BARRIER();
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
    if ((TRUE == Cdd_PwmWave_AreAllOutputsDisabled()) &&
        (TRUE == Cdd_PwmWave_AreSafeSignalLevelsApplied()) &&
        (EFTU1_DTM1->CH_CTRL2_SR == CDD_PWM_WAVE_DTM_ALL_LOW) &&
        (EFTU1_DTM1->CH_CTRL2 == CDD_PWM_WAVE_DTM_ALL_LOW) &&
        (TRUE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected())) {
      s_bPendingFrameValid = FALSE;
      s_bPendingUsesRunSignalLevels = FALSE;
      s_bActiveFrameValid = FALSE;
      s_bStartPending = FALSE;
      s_bFaultLatched = FALSE;
      s_u32PendingSequence = 0U;
      s_u32ActiveSequence = 0U;
      s_u32FaultFlags = 0U;
      s_u8PendingMainCycles = 0U;
      s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;
    } else {
      Cdd_PwmWave_SelectCarrierBoundaryTrigger(FALSE);
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_GetStatus(Cdd_PwmWave_StatusType *pStatus)
{
  Cdd_PwmWave_ResultType eResult;

  if (NULL_PTR == pStatus) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    pStatus->eState = s_eState;
    pStatus->bActiveFrameValid = FALSE;
    pStatus->bPendingFrameValid = FALSE;
    pStatus->bStartPending = FALSE;
    pStatus->bFaultLatched = FALSE;
    pStatus->bFaultInputConfigured =
        (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_ON) ? TRUE : FALSE;
    pStatus->bRawFaultActive = FALSE;
    pStatus->u32ActiveSequence = 0U;
    pStatus->u32PendingSequence = 0U;
    pStatus->u32FaultFlags = s_u32FaultFlags;
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  pStatus->eState = s_eState;
  pStatus->bActiveFrameValid = s_bActiveFrameValid;
  pStatus->bPendingFrameValid = s_bPendingFrameValid;
  pStatus->bStartPending = s_bStartPending;
  pStatus->bFaultLatched = s_bFaultLatched;
  pStatus->bFaultInputConfigured =
      (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_ON) ? TRUE : FALSE;
  pStatus->bRawFaultActive = FALSE;
  pStatus->u32ActiveSequence = s_u32ActiveSequence;
  pStatus->u32PendingSequence = s_u32PendingSequence;
  pStatus->u32FaultFlags = s_u32FaultFlags;
  eResult = (TRUE == s_bInitialized) ? CDD_PWM_WAVE_OK : CDD_PWM_WAVE_E_UNINIT;
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_GetActiveFrame(Cdd_PwmWave_FrameType *pFrame)
{
  Cdd_PwmWave_ResultType eResult;

  if (NULL_PTR == pFrame) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  if (TRUE == s_bActiveFrameValid) {
    *pFrame = s_tActiveFrame;
    eResult = CDD_PWM_WAVE_OK;
  } else {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_GetPendingFrame(Cdd_PwmWave_FrameType *pFrame)
{
  Cdd_PwmWave_ResultType eResult;

  if (NULL_PTR == pFrame) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  if (TRUE == s_bPendingFrameValid) {
    *pFrame = s_tPendingFrame;
    eResult = CDD_PWM_WAVE_OK;
  } else {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_StateType Cdd_PwmWave_GetState(void)
{
  return s_eState;
}

boolean Cdd_PwmWave_IsFaultLatched(void)
{
  return s_bFaultLatched;
}

void Cdd_PwmWave_MainFunction(void)
{
  if ((FALSE == Cdd_PwmWave_IsCore0()) || (FALSE == s_bInitialized)) {
    return;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  if (TRUE == s_bPendingFrameValid) {
    s_u8PendingMainCycles++;
    if (s_u8PendingMainCycles >= CDD_PWM_WAVE_PENDING_MAX_MAIN_CYCLES) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_TIMEOUT);
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
}
