#include "Cdd_PwmWave.h"

#include "CDD_TrgSel.h"
#include "Eftu_Dtm_Reg.h"
#include "Eftu_Tom_Reg.h"
#include "Gpio_Reg.h"
#include "Mcal.h"
#include "Port_Reg.h"
#include "SchM_Pwm.h"
#include "TrgSel_Reg.h"

#if (CDD_PWM_WAVE_DTM_BOUNDARY_SYNC_SUPPORTED != STD_ON)
  #error "The LU0/TrgSel/DTM CH0-synchronous start-stop path must remain enabled for this CDD"
#endif

#if (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED != STD_OFF)
  #error "Implement and verify the real eFTU1 fault source, polarity, latch and raw-status path first"
#endif

#if (TRGSEL_CONFIG_TRGSEL_API != STD_ON)
  #error "TrgSel_ConfigInput must remain enabled for the CDD software run request"
#endif

#define CDD_PWM_WAVE_TOM_MAX_VALUE           (0xFFFFFFU)
#define CDD_PWM_WAVE_HW_POLL_LIMIT           (10000U)
#define CDD_PWM_WAVE_MAX_BOUNDARY_WRAPS      (2U)
#define CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS    (2U)
#define CDD_PWM_WAVE_START_VERIFY_WRAPS      (3U)
#define CDD_PWM_WAVE_PENDING_MAX_MAIN_CYCLES (2U)
#define CDD_PWM_WAVE_CARRIER_CHANNEL         (0U)
#define CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL    (3U)
#define CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL     (7U)
#define CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL    (1U)

#define CDD_PWM_WAVE_GPIOC_OUTPUT_MASK       (0x02800080U)
#define CDD_PWM_WAVE_GPIOD_OUTPUT_MASK       (0x00200010U)
#define CDD_PWM_WAVE_GPIOE_OUTPUT_MASK       (0x00002C00U)
#define CDD_PWM_WAVE_GPIOH_OUTPUT_MASK       (0x00400000U)
#define CDD_PWM_WAVE_DTM_ACTIVITY_ALL_GROUPS (0x0FU)

#define CDD_PWM_WAVE_DTM_ALL_LOW        (0x22222222U)
#define CDD_PWM_WAVE_DTM0_CH3_ALL_LOW   (0x22000000U)
#define CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK (0xFF000000U)
#define CDD_PWM_WAVE_DTM_DEAD_TIME_MASK (0x88888888U)
#define CDD_PWM_WAVE_DTM_EXPECTED_DTV \
  (EFTU_DTM_CHn_DTV_RELRISE(CDD_PWM_WAVE_DEAD_TIME_TICKS) | EFTU_DTM_CHn_DTV_RELFALL(CDD_PWM_WAVE_DEAD_TIME_TICKS))

#define CDD_PWM_WAVE_PCC_LU0_ADDRESS (0x400241C0U)
#define CDD_PWM_WAVE_PCC_CGC_MASK    (0x00800000U)
#define CDD_PWM_WAVE_PCC_SWR_MASK    (0x00010000U)

#define CDD_PWM_WAVE_LU0_LG_CFG0_ADDRESS   (0x40070000U)
#define CDD_PWM_WAVE_LU0_LG_CTRL0_ADDRESS  (0x40070008U)
#define CDD_PWM_WAVE_LU0_LG_FILT0_ADDRESS  (0x4007000CU)
#define CDD_PWM_WAVE_LU0_CTRL_ADDRESS      (0x40070080U)
#define CDD_PWM_WAVE_LU0_CFG_ADDRESS       (0x40070088U)
#define CDD_PWM_WAVE_LU0_LG_CFG0_DFF       (0xCCCCAAAAU)
#define CDD_PWM_WAVE_LU0_LG_CTRL0_DFF_INIT (0x0000010EU)
#define CDD_PWM_WAVE_LU0_LG_CTRL0_DFF_RUN  (0x0000010CU)
#define CDD_PWM_WAVE_LU0_LG_CTRL0_MASK     (0x30003FFFU)

#define CDD_PWM_WAVE_TRGSEL_FIELD_MASK  (0x7FU)
#define CDD_PWM_WAVE_TRGSEL_FIELD_WIDTH (8U)

#define CDD_PWM_WAVE_DTM_SHUTOFF_CONFIG_BYTE (EFTU_DTM_CTRL2_SHUTOFF_SEL_0(4U) | EFTU_DTM_CTRL2_UPD_MODE_0(3U))
#define CDD_PWM_WAVE_DTM_SHUTOFF_WRITE_BYTE  (CDD_PWM_WAVE_DTM_SHUTOFF_CONFIG_BYTE | EFTU_DTM_CTRL2_WR_EN_0(1U))
#define CDD_PWM_WAVE_DTM0_CTRL2_CONFIG       (0x34000000U)
#define CDD_PWM_WAVE_DTM0_CTRL2_WRITE        (0xB4000000U)
#define CDD_PWM_WAVE_DTM1_CTRL2_CONFIG       (0x34343434U)
#define CDD_PWM_WAVE_DTM1_CTRL2_WRITE        (0xB4B4B4B4U)
#define CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK                                                                                    \
  (EFTU_DTM_CTRL_CLK_SEL_MASK | EFTU_DTM_CTRL_DTM_SEL_MASK | EFTU_DTM_CTRL_UPD_MODE_MASK | EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK | \
   EFTU_DTM_CTRL_SR_UPD_EN_MASK)
#define CDD_PWM_WAVE_DTM_RUNTIME_CTRL  (EFTU_DTM_CTRL_CH_SHUTOFF_EN(1U))
#define CDD_PWM_WAVE_REG32(u32Address) (*((volatile uint32 *)(u32Address)))

#define CDD_PWM_WAVE_UPEN_DISABLE_COMMAND                                                                               \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(1U) | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(1U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(1U))

#define CDD_PWM_WAVE_UPEN_ENABLE_COMMAND                                                                                \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4(2U) | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6(2U) | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7(2U))

#define CDD_PWM_WAVE_UPEN_COMMAND_MASK                                                                                     \
  (EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL0_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL3_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL4_MASK | \
   EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL5_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL6_MASK | EFTU_TOM_TGC_GLB_CTRL_UPEN_CTRL7_MASK)

#define CDD_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND                                                                          \
  (EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL0(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL3(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL4(1U) | \
   EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL5(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL6(1U) | EFTU_TOM_TGC_FUPD_CTRL_FUPD_CTRL7(1U) | \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH0(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH3(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH4(1U) | \
   EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH5(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH6(1U) | EFTU_TOM_TGC_FUPD_CTRL_RSTCN0_CH7(1U))

#define CDD_PWM_WAVE_CH3_7_DISABLE_COMMAND                                                                                       \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(1U) | \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(1U))

#define CDD_PWM_WAVE_CH3_7_ENABLE_COMMAND                                                                                        \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL3(2U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(2U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(2U) | \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(2U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(2U))

#define CDD_PWM_WAVE_OUT3_7_DISABLE_COMMAND                                                                                      \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(1U) | \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(1U))

#define CDD_PWM_WAVE_OUT3_7_ENABLE_COMMAND                                                                                       \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL3(2U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(2U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(2U) | \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(2U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(2U))

#define CDD_PWM_WAVE_CH4_7_DISABLE_COMMAND                                                                                       \
  (EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL4(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL5(1U) | EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL6(1U) | \
   EFTU_TOM_TGC_ENDIS_CTRL_ENDIS_CTRL7(1U))

#define CDD_PWM_WAVE_OUT4_7_DISABLE_COMMAND                                                                                      \
  (EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL4(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL5(1U) | EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL6(1U) | \
   EFTU_TOM_TGC_OUTEN_CTRL_OUTEN_CTRL7(1U))

#define CDD_PWM_WAVE_CH3_7_STATUS_MASK                                                                                              \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5_MASK | \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7_MASK)

#define CDD_PWM_WAVE_OUT3_7_STATUS_MASK                                                                                             \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5_MASK | \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7_MASK)

#define CDD_PWM_WAVE_CH3_7_IMMEDIATE_DISABLE                                                                                     \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5(1U) | \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7(1U))

#define CDD_PWM_WAVE_CH3_7_IMMEDIATE_ENABLE                                                                                      \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT3(2U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4(2U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5(2U) | \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6(2U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7(2U))

#define CDD_PWM_WAVE_OUT3_7_IMMEDIATE_DISABLE                                                                                    \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5(1U) | \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7(1U))

#define CDD_PWM_WAVE_OUT3_7_IMMEDIATE_ENABLE                                                                                     \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT3(2U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4(2U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5(2U) | \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6(2U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7(2U))

#define CDD_PWM_WAVE_CH4_7_IMMEDIATE_DISABLE                                                                                     \
  (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT4(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT5(1U) | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT6(1U) | \
   EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT7(1U))

#define CDD_PWM_WAVE_OUT4_7_IMMEDIATE_DISABLE                                                                                    \
  (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT4(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT5(1U) | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT6(1U) | \
   EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT7(1U))

_Static_assert(CDD_PWM_WAVE_UPEN_DISABLE_COMMAND == 0x55410000U, "Unexpected CH0/CH3-CH7 UPEN disable encoding");
_Static_assert(CDD_PWM_WAVE_UPEN_ENABLE_COMMAND == 0xAA820000U, "Unexpected CH0/CH3-CH7 UPEN enable encoding");
_Static_assert(CDD_PWM_WAVE_UPEN_COMMAND_MASK == 0xFFC30000U, "Unexpected UPEN command-field mask encoding");
_Static_assert(CDD_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND == 0x55415541U, "Unexpected CH0/CH3-CH7 force-update disable encoding");
_Static_assert(CDD_PWM_WAVE_CH3_7_DISABLE_COMMAND == 0x00005540U, "Unexpected CH3-CH7 disable encoding");
_Static_assert(CDD_PWM_WAVE_CH3_7_ENABLE_COMMAND == 0x0000AA80U, "Unexpected CH3-CH7 enable encoding");
_Static_assert(CDD_PWM_WAVE_DTM_SHUTOFF_CONFIG_BYTE == 0x34U, "Unexpected DTM AUX0 asynchronous-release encoding");
_Static_assert(CDD_PWM_WAVE_DTM_SHUTOFF_WRITE_BYTE == 0xB4U, "Unexpected DTM CTRL2 write-enable encoding");
_Static_assert(TRGSEL0_TARGET_LU0_INPUT0A == 0U, "Unexpected LU0 run-request target encoding");
_Static_assert(TRGSEL0_TARGET_TRGSEL0_OUTPUT2 == 18U, "Unexpected TRGSEL0 OUT2 target encoding");
_Static_assert(TRGSEL2_TARGET_eFTU1_FLT0 == 82U, "Unexpected eFTU1 FLT0 target encoding");
_Static_assert(TRGSEL0_SRC_eFTU1_TOM0 == 106U, "Unexpected eFTU1 TOM0 source encoding");
_Static_assert(TRGSEL0_SRC_LU0_OUT0B == 48U, "Unexpected LU0 OUT0B source encoding");
_Static_assert(TRGSEL2_SRC_TRGSEL0_OUT2 == 4U, "Unexpected TRGSEL0 OUT2 source encoding");

static volatile boolean s_bInitialized = FALSE;
static volatile boolean s_bInitInProgress = FALSE;
static volatile boolean s_bFaultLatched = FALSE;
static volatile boolean s_bPendingFrameValid = FALSE;
static volatile boolean s_bActiveFrameValid = FALSE;
static volatile boolean s_bStartPending = FALSE;
static volatile boolean s_bClearPending = FALSE;
static volatile boolean s_bOutputPadsConfirmed = FALSE;
static boolean s_bPendingUsesRunSignalLevels = FALSE;
static boolean s_bDtmRunConfigCaptured = FALSE;
static volatile Cdd_PwmWave_StateType s_eState = CDD_PWM_WAVE_STATE_RESET_SAFE;
static Cdd_PwmWave_FrameType s_tPendingFrame;
static Cdd_PwmWave_FrameType s_tActiveFrame;
static Cdd_PwmWave_SequenceType s_u32SequenceCounter = 0U;
static Cdd_PwmWave_SequenceType s_u32PendingSequence = 0U;
static Cdd_PwmWave_SequenceType s_u32ActiveSequence = 0U;
static uint32 s_u32Dtm0RunCtrl2 = 0U;
static uint32 s_u32DtmRunCtrl2 = 0U;
static volatile uint32 s_u32FaultFlags = 0U;
static uint8 s_u8PendingMainCycles = 0U;

static uint32 Cdd_PwmWave_ReadTrgSelSource(uint32 u32BaseAddress, uint32 u32LocalOutput)
{
  uint32 u32Register = CDD_PWM_WAVE_REG32(u32BaseAddress + (4U * (u32LocalOutput / 4U)));
  uint32 u32Shift = CDD_PWM_WAVE_TRGSEL_FIELD_WIDTH * (u32LocalOutput % 4U);

  return (u32Register >> u32Shift) & CDD_PWM_WAVE_TRGSEL_FIELD_MASK;
}

static boolean Cdd_PwmWave_IsLuClockEnabled(void)
{
  uint32 u32PccLu0 = CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_PCC_LU0_ADDRESS);

  return (((u32PccLu0 & CDD_PWM_WAVE_PCC_CGC_MASK) != 0U) && ((u32PccLu0 & CDD_PWM_WAVE_PCC_SWR_MASK) == 0U)) ? TRUE : FALSE;
}

static boolean Cdd_PwmWave_IsStaticStopRouteValid(void)
{
  return ((Cdd_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 1U) == (uint32)TRGSEL0_SRC_eFTU1_TOM0) &&
          (Cdd_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 18U) == (uint32)TRGSEL0_SRC_LU0_OUT0B) &&
          (Cdd_PwmWave_ReadTrgSelSource(TRGSEL2_BASEADDR, 34U) == (uint32)TRGSEL2_SRC_TRGSEL0_OUT2))
             ? TRUE
             : FALSE;
}

static boolean Cdd_PwmWave_SetRunRequest(boolean bRun)
{
  TrgSel_SourceType u32Source = (TRUE == bRun) ? (TrgSel_SourceType)TRGSEL0_SRC_VDD : (TrgSel_SourceType)TRGSEL0_SRC_VSS;

  TrgSel_ConfigInput(TRGSEL0_TARGET_LU0_INPUT0A, u32Source);
  MCAL_DATA_SYNC_BARRIER();

  return (Cdd_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 0U) == u32Source) ? TRUE : FALSE;
}

static boolean Cdd_PwmWave_IsRunRequestSelected(boolean bRun)
{
  uint32 u32ExpectedSource = (TRUE == bRun) ? (uint32)TRGSEL0_SRC_VDD : (uint32)TRGSEL0_SRC_VSS;

  return (Cdd_PwmWave_ReadTrgSelSource(TRGSEL0_BASEADDR, 0U) == u32ExpectedSource) ? TRUE : FALSE;
}

static boolean Cdd_PwmWave_IsLuStopSynchronizerConfigValid(void)
{
  uint32 u32LgCtrl = CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_LG_CTRL0_ADDRESS) & CDD_PWM_WAVE_LU0_LG_CTRL0_MASK;

  return ((TRUE == Cdd_PwmWave_IsLuClockEnabled()) && (TRUE == Cdd_PwmWave_IsStaticStopRouteValid()) &&
          (CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_CTRL_ADDRESS) == 0U) && (CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_CFG_ADDRESS) == 0U) &&
          (CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_LG_CFG0_ADDRESS) == CDD_PWM_WAVE_LU0_LG_CFG0_DFF) &&
          (CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_LG_FILT0_ADDRESS) == 0U) &&
          ((u32LgCtrl == CDD_PWM_WAVE_LU0_LG_CTRL0_DFF_RUN) || (u32LgCtrl == CDD_PWM_WAVE_LU0_LG_CTRL0_DFF_INIT)))
             ? TRUE
             : FALSE;
}

static boolean Cdd_PwmWave_ConfigureLuStopSynchronizer(void)
{
  if ((FALSE == Cdd_PwmWave_IsLuClockEnabled()) || (FALSE == Cdd_PwmWave_IsStaticStopRouteValid()) ||
      (FALSE == Cdd_PwmWave_SetRunRequest(FALSE)) || (CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_CTRL_ADDRESS) != 0U) ||
      (CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_CFG_ADDRESS) != 0U)) {
    return FALSE;
  }

  CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_LG_FILT0_ADDRESS) = 0U;
  CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_LG_CFG0_ADDRESS) = CDD_PWM_WAVE_LU0_LG_CFG0_DFF;
  CDD_PWM_WAVE_REG32(CDD_PWM_WAVE_LU0_LG_CTRL0_ADDRESS) = CDD_PWM_WAVE_LU0_LG_CTRL0_DFF_INIT;
  MCAL_DATA_SYNC_BARRIER();

  return ((TRUE == Cdd_PwmWave_IsRunRequestSelected(FALSE)) && (TRUE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid())) ? TRUE : FALSE;
}

static void Cdd_PwmWave_ConfigureDtmShutoff(void)
{
  /*
   * CTRL2 mode 3 follows AUX_IN0 level. AUX_IN0 is LU0 OUT0B, whose only
   * transitions are CH0 rising edges, so normal assert/release is zero-aligned.
   */
  EFTU1_DTM0->CH_CTRL2_SR = (EFTU1_DTM0->CH_CTRL2_SR & (~CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK)) | CDD_PWM_WAVE_DTM0_CH3_ALL_LOW;
  EFTU1_DTM1->CH_CTRL2_SR = CDD_PWM_WAVE_DTM_ALL_LOW;

  EFTU1_DTM0->CH_CTRL2 = s_u32Dtm0RunCtrl2;
  EFTU1_DTM1->CH_CTRL2 = s_u32DtmRunCtrl2;
  EFTU1_DTM0->CTRL2 = CDD_PWM_WAVE_DTM0_CTRL2_WRITE;
  EFTU1_DTM1->CTRL2 = CDD_PWM_WAVE_DTM1_CTRL2_WRITE;
  EFTU1_DTM0->CTRL = (EFTU1_DTM0->CTRL & (~CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK)) | CDD_PWM_WAVE_DTM_RUNTIME_CTRL;
  EFTU1_DTM1->CTRL = (EFTU1_DTM1->CTRL & (~CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK)) | CDD_PWM_WAVE_DTM_RUNTIME_CTRL;
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_IsDtmShutoffConfigValid(void)
{
  uint8 u8Index;

  if (((EFTU1_DTM0->CTRL & CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK) != CDD_PWM_WAVE_DTM_RUNTIME_CTRL) ||
      ((EFTU1_DTM1->CTRL & CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK) != CDD_PWM_WAVE_DTM_RUNTIME_CTRL) ||
      ((EFTU1_DTM0->CTRL2 & 0x7F000000U) != CDD_PWM_WAVE_DTM0_CTRL2_CONFIG) ||
      ((EFTU1_DTM1->CTRL2 & 0x7F7F7F7FU) != CDD_PWM_WAVE_DTM1_CTRL2_CONFIG) ||
      ((EFTU1_DTM0->CH_CTRL2_SR & CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK) != CDD_PWM_WAVE_DTM0_CH3_ALL_LOW) ||
      (EFTU1_DTM1->CH_CTRL2_SR != CDD_PWM_WAVE_DTM_ALL_LOW) || (EFTU1_DTM0->CH_CTRL2 != s_u32Dtm0RunCtrl2) ||
      (EFTU1_DTM1->CH_CTRL2 != s_u32DtmRunCtrl2) || (EFTU1_DTM0->CH_CTRL1 != 0U) || (EFTU1_DTM0->CH_CTRL3 != 0U) ||
      (EFTU1_DTM1->CH_CTRL1 != 0U) || (EFTU1_DTM1->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU1_DTM1->CHn_DTV[u8Index] & (EFTU_DTM_CHn_DTV_RELRISE_MASK | EFTU_DTM_CHn_DTV_RELFALL_MASK)) != CDD_PWM_WAVE_DTM_EXPECTED_DTV) {
      return FALSE;
    }
  }

  return TRUE;
}

static boolean Cdd_PwmWave_AreDtmChannelsForcedLow(void)
{
  return (((EFTU1_DTM0->CH_CTRL2_SR & CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK) == CDD_PWM_WAVE_DTM0_CH3_ALL_LOW) &&
          ((EFTU1_DTM0->CH_CTRL2 & CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK) == CDD_PWM_WAVE_DTM0_CH3_ALL_LOW) &&
          (EFTU1_DTM1->CH_CTRL2_SR == CDD_PWM_WAVE_DTM_ALL_LOW) && (EFTU1_DTM1->CH_CTRL2 == CDD_PWM_WAVE_DTM_ALL_LOW))
             ? TRUE
             : FALSE;
}

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

  return ((((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_MODE_MASK) == EFTU_TOM_CHn_CTRL_MODE(2U)) &&
           ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_UDMODE_MASK) == EFTU_TOM_CHn_CTRL_UDMODE(0U)) &&
           ((u32ChannelCtrl & EFTU_TOM_CHn_CTRL_CLK_SRC_MASK) == EFTU_TOM_CHn_CTRL_CLK_SRC(1U)) &&
           ((u32ChannelCtrl & (EFTU_TOM_CHn_CTRL_ACB_MASK | EFTU_TOM_CHn_CTRL_EXT_FUPD_MASK | EFTU_TOM_CHn_CTRL_OSM_MASK |
                               EFTU_TOM_CHn_CTRL_TRIG_IN_USE_EXT_MASK | EFTU_TOM_CHn_CTRL_TRIG_OUT_USE_EXT_MASK)) == 0U) &&
           ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR_MASK) == EFTU_TOM_CHn_CTRL_SR_CLK_SRC_SR(1U)))
              ? TRUE
              : FALSE);
}

static boolean Cdd_PwmWave_IsTomTopologyValid(void)
{
  uint8 u8Index;
  uint32 u32ChannelCtrl;
  uint32 u32CarrierPeriod;

  if ((EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK) == 0U) {
    return FALSE;
  }
  if (((EFTU_TOM_1_0->TGC_ENDIS_STAT & EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK) != EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT0_MASK) ||
      ((EFTU_TOM_1_0->TGC_OUTEN_STAT & EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MASK) != EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT0_MASK)) {
    return FALSE;
  }
  if (((EFTU_TOM_1_0->TGC_ENDIS_STAT & (EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT1_MASK | EFTU_TOM_TGC_ENDIS_STAT_ENDIS_STAT2_MASK)) != 0U) ||
      ((EFTU_TOM_1_0->TGC_OUTEN_STAT & (EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT1_MASK | EFTU_TOM_TGC_OUTEN_STAT_OUTEN_STAT2_MASK)) != 0U) ||
      ((EFTU_TOM_1_0->TGC_INT_TRIG & (EFTU_TOM_TGC_INT_TRIG_INT_TRIG1_MASK | EFTU_TOM_TGC_INT_TRIG_INT_TRIG2_MASK)) != 0U)) {
    return FALSE;
  }

  if (FALSE == Cdd_PwmWave_IsTomPwmChannelConfigValid(CDD_PWM_WAVE_CARRIER_CHANNEL)) {
    return FALSE;
  }
  for (u8Index = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Index <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Index++) {
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
    if ((u32ChannelCtrl & (EFTU_TOM_CHn_CTRL_TRIGOUT_MASK | EFTU_TOM_CHn_CTRL_TRIG_OUT_USE_EXT_MASK)) != 0U) {
      return FALSE;
    }
  }

  for (u8Index = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Index <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Index++) {
    if ((EFTU_TOM_1_0->Channel[u8Index].CH_CTRL & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) == 0U) {
      return FALSE;
    }
    if ((EFTU_TOM_1_0->Channel[u8Index].CH_CTRL & EFTU_TOM_CHn_CTRL_TRIGOUT_MASK) != 0U) {
      return FALSE;
    }
  }

  u32CarrierPeriod = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM0;
  if ((u32CarrierPeriod < CDD_PWM_WAVE_MIN_PERIOD_TICKS) || (u32CarrierPeriod > CDD_PWM_WAVE_MAX_PERIOD_TICKS) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM1 != (u32CarrierPeriod >> 1U)) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 != u32CarrierPeriod) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 != (u32CarrierPeriod >> 1U)) ||
      ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) !=
       EFTU_TOM_CHn_CTRL_SL(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL)) ||
      ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR & EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK) !=
       EFTU_TOM_CHn_CTRL_SR_SL_SR(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL))) {
    return FALSE;
  }

  return TRUE;
}

static boolean Cdd_PwmWave_IsInitialDtmConfigValid(uint32 u32Dtm0RunCtrl2, uint32 u32Dtm1RunCtrl2)
{
  uint8 u8Index;

  if (u32Dtm0RunCtrl2 != 0U) {
    return FALSE;
  }
  if ((EFTU1_DTM0->CTRL & CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK) != 0U) {
    return FALSE;
  }
  if ((EFTU1_DTM0->CH_CTRL1 != 0U) || (EFTU1_DTM0->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  if (u32Dtm1RunCtrl2 != CDD_PWM_WAVE_DTM_DEAD_TIME_MASK) {
    return FALSE;
  }
  if ((EFTU1_DTM1->CTRL & (EFTU_DTM_CTRL_CLK_SEL_MASK | EFTU_DTM_CTRL_DTM_SEL_MASK | EFTU_DTM_CTRL_UPD_MODE_MASK |
                           EFTU_DTM_CTRL_CH_SHUTOFF_EN_MASK | EFTU_DTM_CTRL_SR_UPD_EN_MASK)) != 0U) {
    return FALSE;
  }
  if ((EFTU1_DTM1->CH_CTRL1 != 0U) || (EFTU1_DTM1->CH_CTRL3 != 0U)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU1_DTM1->CHn_DTV[u8Index] & (EFTU_DTM_CHn_DTV_RELRISE_MASK | EFTU_DTM_CHn_DTV_RELFALL_MASK)) != CDD_PWM_WAVE_DTM_EXPECTED_DTV) {
      return FALSE;
    }
  }

  return TRUE;
}

static boolean Cdd_PwmWave_IsHardwareConfigValid(uint32 u32Dtm0RunCtrl2, uint32 u32Dtm1RunCtrl2)
{
  return ((TRUE == Cdd_PwmWave_IsTomTopologyValid()) && (TRUE == Cdd_PwmWave_IsInitialDtmConfigValid(u32Dtm0RunCtrl2, u32Dtm1RunCtrl2)))
             ? TRUE
             : FALSE;
}

static void Cdd_PwmWave_RestoreInitialDtmRunConfig(void)
{
  EFTU1_DTM0->CTRL &= ~CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK;
  EFTU1_DTM1->CTRL &= ~CDD_PWM_WAVE_DTM_RUNTIME_CTRL_MASK;
  EFTU1_DTM0->CH_CTRL2 = s_u32Dtm0RunCtrl2;
  EFTU1_DTM1->CH_CTRL2 = s_u32DtmRunCtrl2;
  MCAL_DATA_SYNC_BARRIER();
}

static void Cdd_PwmWave_DisableFrameUpdate(void)
{
  uint32 u32GlobalBypass;

  EFTU_TOM_1_0->TGC_FUPD_CTRL = CDD_PWM_WAVE_FORCE_UPDATE_DISABLE_COMMAND;
  u32GlobalBypass = EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK;
  EFTU_TOM_1_0->TGC_GLB_CTRL = u32GlobalBypass | CDD_PWM_WAVE_UPEN_DISABLE_COMMAND;
  MCAL_DATA_SYNC_BARRIER();
}

static void Cdd_PwmWave_ArmFrameUpdate(void)
{
  uint32 u32GlobalBypass;

  MCAL_DATA_SYNC_BARRIER();
  u32GlobalBypass = EFTU_TOM_1_0->TGC_GLB_CTRL & EFTU_TOM_TGC_GLB_CTRL_GLBEN_BYPASS_MASK;
  EFTU_TOM_1_0->TGC_GLB_CTRL = u32GlobalBypass | CDD_PWM_WAVE_UPEN_ENABLE_COMMAND;
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

static void Cdd_PwmWave_ImmediateEnableAll(void)
{
  EFTU_TOM_1_0->TGC_ENDIS_CTRL = CDD_PWM_WAVE_CH3_7_ENABLE_COMMAND;
  EFTU_TOM_1_0->TGC_OUTEN_CTRL = CDD_PWM_WAVE_OUT3_7_ENABLE_COMMAND;
  EFTU_TOM_1_0->TGC_ENDIS_STAT = CDD_PWM_WAVE_CH3_7_IMMEDIATE_ENABLE;
  EFTU_TOM_1_0->TGC_OUTEN_STAT = CDD_PWM_WAVE_OUT3_7_IMMEDIATE_ENABLE;
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
  return (((EFTU_TOM_1_0->TGC_ENDIS_STAT & CDD_PWM_WAVE_CH3_7_STATUS_MASK) == CDD_PWM_WAVE_CH3_7_STATUS_MASK) &&
          ((EFTU_TOM_1_0->TGC_OUTEN_STAT & CDD_PWM_WAVE_OUT3_7_STATUS_MASK) == CDD_PWM_WAVE_OUT3_7_STATUS_MASK))
             ? TRUE
             : FALSE;
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
  uint32 u32PreviousCounter = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;

  while (u32PollCount > 0U) {
    if (((TRUE == bEnabled) && (TRUE == Cdd_PwmWave_AreAllOutputsEnabled())) ||
        ((FALSE == bEnabled) && (TRUE == Cdd_PwmWave_AreAllOutputsDisabled()))) {
      return TRUE;
    }
    u32CurrentCounter = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
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

static boolean Cdd_PwmWave_WaitForCarrierWraps(uint8 u8RequiredWraps)
{
  uint32 u32PollCount = CDD_PWM_WAVE_HW_POLL_LIMIT;
  uint32 u32PreviousCounter = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;

  while (u32PollCount > 0U) {
    u32CurrentCounter = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
    if (u32CurrentCounter < u32PreviousCounter) {
      u8BoundaryWraps++;
      if (u8BoundaryWraps >= u8RequiredWraps) {
        return TRUE;
      }
    }
    u32PreviousCounter = u32CurrentCounter;
    u32PollCount--;
  }

  return (0U == u8RequiredWraps) ? TRUE : FALSE;
}

static void Cdd_PwmWave_SelectCarrierBoundaryTrigger(boolean bEnable)
{
  uint32 u32InternalTrigger = EFTU_TOM_1_0->TGC_INT_TRIG;

  EFTU_TOM_1_0->TGC_INT_TRIG =
      (u32InternalTrigger & (~EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK)) | EFTU_TOM_TGC_INT_TRIG_INT_TRIG0((TRUE == bEnable) ? 2U : 1U);
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_IsCarrierBoundaryTriggerSelected(void)
{
  return ((EFTU_TOM_1_0->TGC_INT_TRIG & EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK) == EFTU_TOM_TGC_INT_TRIG_INT_TRIG0_MASK) ? TRUE : FALSE;
}

static boolean Cdd_PwmWave_IsRuntimeTopologyValid(boolean bRunRequest)
{
  return ((TRUE == Cdd_PwmWave_IsTomTopologyValid()) && (TRUE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) &&
          (TRUE == Cdd_PwmWave_IsDtmShutoffConfigValid()) && (TRUE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) &&
          (TRUE == Cdd_PwmWave_AreAllOutputsEnabled()) && (TRUE == Cdd_PwmWave_IsRunRequestSelected(bRunRequest)))
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
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) |
      EFTU_TOM_CHn_CTRL_SR_SL_SR(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL);

  for (u8Channel = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    u32Level = (TRUE == bRunSignalLevels) ? Cdd_PwmWave_GetRunSignalLevel(u8Channel) : 1U;
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(u32Level);
  }
}

static void Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels(void)
{
  uint8 u8Channel;

  for (u8Channel = 3U; u8Channel <= 7U; u8Channel++) {
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & (~EFTU_TOM_CHn_CTRL_SL_MASK)) | EFTU_TOM_CHn_CTRL_SL(1U);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(1U);
  }
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_AreTomSafeSignalLevels(void)
{
  uint8 u8Channel;

  for (u8Channel = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    if (((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) != EFTU_TOM_CHn_CTRL_SL(1U)) ||
        ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK) != EFTU_TOM_CHn_CTRL_SR_SL_SR(1U))) {
      return FALSE;
    }
  }

  return TRUE;
}

static boolean Cdd_PwmWave_AreOutputPinModesValid(void)
{
  return ((((PORTC->PCR[7U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) && ((PORTC->PCR[23U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) &&
           ((PORTC->PCR[25U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) && ((PORTD->PCR[4U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) &&
           ((PORTD->PCR[21U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U)) && ((PORTE->PCR[10U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) &&
           ((PORTE->PCR[11U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) && ((PORTE->PCR[13U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(6U)) &&
           ((PORTH->PCR[22U] & PORT_PCR_MUX_MASK) == PORT_PCR_MUX(7U))))
             ? TRUE
             : FALSE;
}

static boolean Cdd_PwmWave_AreOutputPadsLow(void)
{
  return ((((GPIOC->PIDR & CDD_PWM_WAVE_GPIOC_OUTPUT_MASK) == 0U) && ((GPIOD->PIDR & CDD_PWM_WAVE_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PIDR & CDD_PWM_WAVE_GPIOE_OUTPUT_MASK) == 0U) && ((GPIOH->PIDR & CDD_PWM_WAVE_GPIOH_OUTPUT_MASK) == 0U) &&
           ((GPIOC->PDIR & CDD_PWM_WAVE_GPIOC_OUTPUT_MASK) == 0U) && ((GPIOD->PDIR & CDD_PWM_WAVE_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PDIR & CDD_PWM_WAVE_GPIOE_OUTPUT_MASK) == 0U) && ((GPIOH->PDIR & CDD_PWM_WAVE_GPIOH_OUTPUT_MASK) == 0U)))
             ? TRUE
             : FALSE;
}

static boolean Cdd_PwmWave_AreOutputPadInputsEnabled(void)
{
  return ((((GPIOC->PIDR & CDD_PWM_WAVE_GPIOC_OUTPUT_MASK) == 0U) && ((GPIOD->PIDR & CDD_PWM_WAVE_GPIOD_OUTPUT_MASK) == 0U) &&
           ((GPIOE->PIDR & CDD_PWM_WAVE_GPIOE_OUTPUT_MASK) == 0U) && ((GPIOH->PIDR & CDD_PWM_WAVE_GPIOH_OUTPUT_MASK) == 0U)))
             ? TRUE
             : FALSE;
}

static uint8 Cdd_PwmWave_GetDtmOutputActivityMask(void)
{
  uint32 u32GpioC = GPIOC->PDIR;
  uint32 u32GpioD = GPIOD->PDIR;
  uint32 u32GpioE = GPIOE->PDIR;
  uint8 u8ActivityMask = 0U;

  /* PWM5/PTH22 is excluded; each bit proves one DTM complementary pair moved. */
  if ((u32GpioC & 0x02000080U) != 0U) { /* CH4: PTC7/S4, PTC25/S20 */
    u8ActivityMask |= 0x01U;
  }
  if (((u32GpioE & 0x00000800U) != 0U) || ((u32GpioC & 0x00800000U) != 0U)) { /* CH5: PTE11/S5, PTC23/S21 */
    u8ActivityMask |= 0x02U;
  }
  if (((u32GpioE & 0x00000400U) != 0U) || ((u32GpioD & 0x00200000U) != 0U)) { /* CH6: PTE10/S6, PTD21/S22 */
    u8ActivityMask |= 0x04U;
  }
  if (((u32GpioE & 0x00002000U) != 0U) || ((u32GpioD & 0x00000010U) != 0U)) { /* CH7: PTE13/S7, PTD4/S23 */
    u8ActivityMask |= 0x08U;
  }

  return u8ActivityMask;
}

static boolean Cdd_PwmWave_WaitForDtmOutputActivity(uint8 u8RequiredWraps)
{
  uint32 u32PollCount = CDD_PWM_WAVE_HW_POLL_LIMIT;
  uint32 u32PreviousCounter = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
  uint32 u32CurrentCounter;
  uint8 u8BoundaryWraps = 0U;
  uint8 u8ActivityObserved = 0U;

  while (u32PollCount > 0U) {
    u8ActivityObserved |= Cdd_PwmWave_GetDtmOutputActivityMask();

    u32CurrentCounter = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CN0 & EFTU_TOM_CHn_CN0_CN0_MASK;
    if (u32CurrentCounter < u32PreviousCounter) {
      u8BoundaryWraps++;
      if ((u8BoundaryWraps == CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS) && (u8RequiredWraps > CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS)) {
        /* Discard settle-time observations; verify only the next complete cycle. */
        u8ActivityObserved = 0U;
      }
      if (u8BoundaryWraps >= u8RequiredWraps) {
        return ((u8ActivityObserved & CDD_PWM_WAVE_DTM_ACTIVITY_ALL_GROUPS) == CDD_PWM_WAVE_DTM_ACTIVITY_ALL_GROUPS) ? TRUE : FALSE;
      }
    }
    u32PreviousCounter = u32CurrentCounter;
    u32PollCount--;
  }

  return FALSE;
}

static boolean Cdd_PwmWave_IsPhysicalArmedLowValid(void)
{
  return ((TRUE == Cdd_PwmWave_AreOutputPinModesValid()) && (TRUE == Cdd_PwmWave_AreOutputPadsLow())) ? TRUE : FALSE;
}

static void Cdd_PwmWave_SetActiveAndShadowRunSignalLevels(void)
{
  uint8 u8Channel;
  uint32 u32Level;

  for (u8Channel = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    u32Level = Cdd_PwmWave_GetRunSignalLevel(u8Channel);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & (~EFTU_TOM_CHn_CTRL_SL_MASK)) | EFTU_TOM_CHn_CTRL_SL(u32Level);
    EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR =
        (EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL_SR & (~EFTU_TOM_CHn_CTRL_SR_SL_SR_MASK)) | EFTU_TOM_CHn_CTRL_SR_SL_SR(u32Level);
  }
  MCAL_DATA_SYNC_BARRIER();
}

static boolean Cdd_PwmWave_IsFrameApplied(const Cdd_PwmWave_FrameType *pFrame, boolean bRunSignalLevels)
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

  if ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM0 != pFrame->u32PeriodTicks) ||
      (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM1 != (pFrame->u32PeriodTicks >> 1U)) ||
      (EFTU_TOM_1_0->Channel[3].CH_CM0 != u32Pwm5CmpA) || (EFTU_TOM_1_0->Channel[3].CH_CM1 != u32Pwm5CmpB)) {
    return FALSE;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((EFTU_TOM_1_0->Channel[u8Index + 4U].CH_CM0 != pFrame->aWindow[u8Index].u32CmpA) ||
        (EFTU_TOM_1_0->Channel[u8Index + 4U].CH_CM1 != pFrame->aWindow[u8Index].u32CmpB)) {
      return FALSE;
    }
  }

  if ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) !=
      EFTU_TOM_CHn_CTRL_SL(CDD_PWM_WAVE_CARRIER_SIGNAL_LEVEL)) {
    return FALSE;
  }

  for (u8Channel = CDD_PWM_WAVE_FIRST_OUTPUT_CHANNEL; u8Channel <= CDD_PWM_WAVE_LAST_OUTPUT_CHANNEL; u8Channel++) {
    u32ExpectedSignalLevel = (TRUE == bRunSignalLevels) ? Cdd_PwmWave_GetRunSignalLevel(u8Channel) : 1U;
    if ((EFTU_TOM_1_0->Channel[u8Channel].CH_CTRL & EFTU_TOM_CHn_CTRL_SL_MASK) != EFTU_TOM_CHn_CTRL_SL(u32ExpectedSignalLevel)) {
      return FALSE;
    }
  }

  return TRUE;
}

static void Cdd_PwmWave_RefreshPending(void)
{
  if ((TRUE == s_bPendingFrameValid) && (TRUE == Cdd_PwmWave_IsFrameApplied(&s_tPendingFrame, s_bPendingUsesRunSignalLevels))) {
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

static boolean Cdd_PwmWave_ForceSafeHardware(void)
{
  boolean bRunRequestLow;

  /* Clamp all DTM outputs before disabling TOM, avoiding a transient from !SL. */
  EFTU1_DTM1->CH_CTRL2_SR = CDD_PWM_WAVE_DTM_ALL_LOW;
  EFTU1_DTM1->CH_CTRL2 = CDD_PWM_WAVE_DTM_ALL_LOW;
  EFTU1_DTM0->CH_CTRL2_SR = (EFTU1_DTM0->CH_CTRL2_SR & (~CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK)) | CDD_PWM_WAVE_DTM0_CH3_ALL_LOW;
  EFTU1_DTM0->CH_CTRL2 = (EFTU1_DTM0->CH_CTRL2 & (~CDD_PWM_WAVE_DTM0_CH3_BYTE_MASK)) | CDD_PWM_WAVE_DTM0_CH3_ALL_LOW;
  MCAL_DATA_SYNC_BARRIER();

  Cdd_PwmWave_ImmediateDisableDtmChannels();
  Cdd_PwmWave_ImmediateDisableAll();
  bRunRequestLow = Cdd_PwmWave_SetRunRequest(FALSE);
  Cdd_PwmWave_AbortPending();
  Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels();
  MCAL_DATA_SYNC_BARRIER();

  return ((TRUE == bRunRequestLow) && (TRUE == Cdd_PwmWave_AreDtmChannelsForcedLow()) && (TRUE == Cdd_PwmWave_AreAllOutputsDisabled()) &&
          (TRUE == Cdd_PwmWave_AreTomSafeSignalLevels()) &&
          ((FALSE == s_bOutputPadsConfirmed) || (TRUE == Cdd_PwmWave_IsPhysicalArmedLowValid())))
             ? TRUE
             : FALSE;
}

static boolean Cdd_PwmWave_EnterFault(uint32 u32FaultFlags)
{
  boolean bSafeStateValid = Cdd_PwmWave_ForceSafeHardware();

  s_bStartPending = FALSE;
  s_bClearPending = FALSE;
  s_bActiveFrameValid = FALSE;
  s_u32ActiveSequence = 0U;
  s_bFaultLatched = TRUE;
  s_u32FaultFlags |= u32FaultFlags;
  if (FALSE == bSafeStateValid) {
    s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
  }
  s_eState = CDD_PWM_WAVE_STATE_FAULT_LATCHED;
  MCAL_DATA_SYNC_BARRIER();

  return bSafeStateValid;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_Init(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bHardwareConfigValid = FALSE;
  boolean bOutputsEnabled = FALSE;
  boolean bStopTimingElapsed = FALSE;
  uint32 u32Dtm0RunCtrl2;
  uint32 u32Dtm1RunCtrl2;

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

  if (FALSE == s_bDtmRunConfigCaptured) {
    u32Dtm0RunCtrl2 = EFTU1_DTM0->CH_CTRL2;
    u32Dtm1RunCtrl2 = EFTU1_DTM1->CH_CTRL2;
    if (TRUE == Cdd_PwmWave_IsInitialDtmConfigValid(u32Dtm0RunCtrl2, u32Dtm1RunCtrl2)) {
      s_u32Dtm0RunCtrl2 = u32Dtm0RunCtrl2;
      s_u32DtmRunCtrl2 = u32Dtm1RunCtrl2;
      s_bDtmRunConfigCaptured = TRUE;
    }
  }

  Cdd_PwmWave_DisableFrameUpdate();
  Cdd_PwmWave_ImmediateDisableAll();
  Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels();
  if (TRUE == s_bDtmRunConfigCaptured) {
    /* A prior fail-closed attempt may have replaced active DTM control with all-low. */
    Cdd_PwmWave_RestoreInitialDtmRunConfig();
    bHardwareConfigValid = Cdd_PwmWave_IsHardwareConfigValid(s_u32Dtm0RunCtrl2, s_u32DtmRunCtrl2);
  }

  if ((TRUE == bHardwareConfigValid) && (FALSE == Cdd_PwmWave_AreAllOutputsDisabled())) {
    bHardwareConfigValid = FALSE;
  }
  if (TRUE == bHardwareConfigValid) {
    bHardwareConfigValid = Cdd_PwmWave_ConfigureLuStopSynchronizer();
  }
  if (TRUE == bHardwareConfigValid) {
    Cdd_PwmWave_ConfigureDtmShutoff();
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
    bHardwareConfigValid = ((TRUE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) && (TRUE == Cdd_PwmWave_IsDtmShutoffConfigValid()) &&
                            (TRUE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) && (TRUE == Cdd_PwmWave_IsRunRequestSelected(FALSE)))
                               ? TRUE
                               : FALSE;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (TRUE == bHardwareConfigValid) {
    /* Allow the stop request to cross two CH0 zero boundaries while outputs stay disabled. */
    bStopTimingElapsed = Cdd_PwmWave_WaitForCarrierWraps(CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == bStopTimingElapsed) {
    Cdd_PwmWave_SetActiveAndShadowRunSignalLevels();
    Cdd_PwmWave_ImmediateEnableAll();
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if ((TRUE == bHardwareConfigValid) && (TRUE == bStopTimingElapsed)) {
    bOutputsEnabled = Cdd_PwmWave_WaitForOutputState(TRUE);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == bHardwareConfigValid) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_CONFIG;
  } else if ((FALSE == bOutputsEnabled) || (FALSE == bStopTimingElapsed)) {
    eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_TIMEOUT;
  } else if (FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_CONFIG;
  } else {
    s_bPendingFrameValid = FALSE;
    s_bPendingUsesRunSignalLevels = FALSE;
    s_bActiveFrameValid = FALSE;
    s_bStartPending = FALSE;
    s_bClearPending = FALSE;
    s_bOutputPadsConfirmed = FALSE;
    s_bFaultLatched = FALSE;
    s_u32PendingSequence = 0U;
    s_u32ActiveSequence = 0U;
    s_u32FaultFlags = 0U;
    s_u8PendingMainCycles = 0U;
    s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;
    s_bInitialized = TRUE;
  }

  if (CDD_PWM_WAVE_OK != eResult) {
    if (FALSE == Cdd_PwmWave_ForceSafeHardware()) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
    }
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(FALSE);
    s_bInitialized = FALSE;
    s_bClearPending = FALSE;
    s_bOutputPadsConfirmed = FALSE;
    s_bFaultLatched = FALSE;
    s_eState = CDD_PWM_WAVE_STATE_GPIO_LOW;
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
  if ((pFrame->u32PeriodTicks < CDD_PWM_WAVE_MIN_PERIOD_TICKS) || (pFrame->u32PeriodTicks > CDD_PWM_WAVE_MAX_PERIOD_TICKS)) {
    return CDD_PWM_WAVE_E_PERIOD;
  }

  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    if ((pFrame->aWindow[u8Index].u32CmpA >= pFrame->u32PeriodTicks) || (pFrame->aWindow[u8Index].u32CmpB >= pFrame->u32PeriodTicks) ||
        (pFrame->aWindow[u8Index].u32CmpA >= pFrame->aWindow[u8Index].u32CmpB)) {
      return CDD_PWM_WAVE_E_CMP;
    }
    if ((pFrame->aWindow[u8Index].u32CmpB - pFrame->aWindow[u8Index].u32CmpA) < CDD_PWM_WAVE_DEAD_TIME_TICKS) {
      return CDD_PWM_WAVE_E_DEAD_TIME;
    }
  }

  if ((CDD_PWM_WAVE_PWM5_LOW != pFrame->ePwm5State) && (CDD_PWM_WAVE_PWM5_HIGH != pFrame->ePwm5State)) {
    return CDD_PWM_WAVE_E_PWM5;
  }

  return CDD_PWM_WAVE_OK;
}

static Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrameLocked(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_ResultType eResult;
  Cdd_PwmWave_SequenceType u32Sequence;
  uint8 u8Index;

  Cdd_PwmWave_RefreshPending();

  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
  } else if (TRUE == s_bStartPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (CDD_PWM_WAVE_STATE_RUN != s_eState)) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (FALSE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    Cdd_PwmWave_DisableFrameUpdate();

    EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 = pFrame->u32PeriodTicks;
    EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 = pFrame->u32PeriodTicks >> 1U;
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
    /* DTM holds the physical outputs low while stopped; TOM always stages the run waveform. */
    s_bPendingUsesRunSignalLevels = TRUE;
    Cdd_PwmWave_SetShadowSignalLevels(TRUE);

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

Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrame(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
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

Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitPeriodChange(uint32 u32NewPeriodTicks, Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_FrameType tCandidate;
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bScaleAll = FALSE;
  uint32 u32OldPeriod;
  uint8 u8Index;

  if ((u32NewPeriodTicks < CDD_PWM_WAVE_MIN_PERIOD_TICKS) || (u32NewPeriodTicks > CDD_PWM_WAVE_MAX_PERIOD_TICKS)) {
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
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (CDD_PWM_WAVE_STATE_RUN != s_eState)) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (FALSE == s_bActiveFrameValid) {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;
  } else {
    tCandidate = s_tActiveFrame;
    u32OldPeriod = tCandidate.u32PeriodTicks;
    for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
      if ((tCandidate.aWindow[u8Index].u32CmpA >= u32NewPeriodTicks) || (tCandidate.aWindow[u8Index].u32CmpB >= u32NewPeriodTicks)) {
        bScaleAll = TRUE;
        break;
      }
    }

    if (TRUE == bScaleAll) {
      for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
        tCandidate.aWindow[u8Index].u32CmpA = (uint32)(((uint64)tCandidate.aWindow[u8Index].u32CmpA * u32NewPeriodTicks) / u32OldPeriod);
        tCandidate.aWindow[u8Index].u32CmpB = (uint32)(((uint64)tCandidate.aWindow[u8Index].u32CmpB * u32NewPeriodTicks) / u32OldPeriod);
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

Cdd_PwmWave_ResultType Cdd_PwmWave_ConfirmArmedLow(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) || (TRUE == s_bStartPending) || (TRUE == s_bPendingFrameValid)) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Cdd_PwmWave_IsPhysicalArmedLowValid())) {
    (void)Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    s_bOutputPadsConfirmed = TRUE;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_Start(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bDtmOutputActivity = FALSE;

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
  } else if (FALSE == s_bOutputPadsConfirmed) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Cdd_PwmWave_IsPhysicalArmedLowValid()) ||
             (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE))) {
    Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    s_bStartPending = TRUE;
    if (FALSE == Cdd_PwmWave_SetRunRequest(TRUE)) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (CDD_PWM_WAVE_OK == eResult) {
    /* Two wraps settle the request; the third closes one full physical activity cycle. */
    bDtmOutputActivity = Cdd_PwmWave_WaitForDtmOutputActivity(CDD_PWM_WAVE_START_VERIFY_WRAPS);

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    if (TRUE == s_bFaultLatched) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
    } else if ((FALSE == s_bStartPending) || (CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState)) {
      eResult = CDD_PWM_WAVE_E_STATE;
    } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(TRUE)) || (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE)) ||
               (FALSE == Cdd_PwmWave_AreOutputPinModesValid()) || (FALSE == Cdd_PwmWave_AreOutputPadInputsEnabled())) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    } else if (FALSE == bDtmOutputActivity) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_TIMEOUT);
      eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
    } else {
      s_bStartPending = FALSE;
      s_eState = CDD_PWM_WAVE_STATE_RUN;
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_Stop(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bBoundaryTimingElapsed = FALSE;

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
  } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(TRUE)) || (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE))) {
    Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    s_eState = CDD_PWM_WAVE_STATE_STOP_PENDING;
    if (FALSE == Cdd_PwmWave_SetRunRequest(FALSE)) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (CDD_PWM_WAVE_OK == eResult) {
    bBoundaryTimingElapsed = Cdd_PwmWave_WaitForCarrierWraps(CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS);

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    if (TRUE == s_bFaultLatched) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (CDD_PWM_WAVE_STATE_STOP_PENDING != s_eState) {
      eResult = CDD_PWM_WAVE_E_STATE;
    } else if (FALSE == bBoundaryTimingElapsed) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_TIMEOUT);
      eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
    } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Cdd_PwmWave_IsPhysicalArmedLowValid()) ||
               (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE))) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    } else {
      s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

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
  if (FALSE == Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_SOFTWARE_REQUEST)) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}

Cdd_PwmWave_ResultType Cdd_PwmWave_ClearFault(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;
  boolean bHardwareConfigValid = FALSE;
  boolean bEnableIssued = FALSE;
  boolean bOutputsEnabled = FALSE;
  boolean bStopTimingElapsed = FALSE;

  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_STATE;
  } else if (TRUE == s_bClearPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;
  } else if (FALSE == s_bOutputPadsConfirmed) {
    /* A startup pin-mux failure was returned to GPIO; recovery requires re-init/reset. */
    s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    s_bClearPending = TRUE;
    bHardwareConfigValid = Cdd_PwmWave_ForceSafeHardware();
    if (TRUE == bHardwareConfigValid) {
      bHardwareConfigValid = Cdd_PwmWave_ConfigureLuStopSynchronizer();
    }
    if (TRUE == bHardwareConfigValid) {
      Cdd_PwmWave_ConfigureDtmShutoff();
      Cdd_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
      bHardwareConfigValid = ((TRUE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) && (TRUE == Cdd_PwmWave_IsDtmShutoffConfigValid()) &&
                              (TRUE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) && (TRUE == Cdd_PwmWave_IsRunRequestSelected(FALSE)))
                                 ? TRUE
                                 : FALSE;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if ((CDD_PWM_WAVE_OK == eResult) && (TRUE == bHardwareConfigValid)) {
    /* No interrupt masking while the request crosses the CH0 zero boundaries. */
    bStopTimingElapsed = Cdd_PwmWave_WaitForCarrierWraps(CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (CDD_PWM_WAVE_OK == eResult) {
    if ((FALSE == s_bClearPending) || (FALSE == s_bFaultLatched)) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
    } else if (FALSE == bHardwareConfigValid) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    } else if (FALSE == bStopTimingElapsed) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_TIMEOUT;
      eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
    } else if ((FALSE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) || (FALSE == Cdd_PwmWave_IsDtmShutoffConfigValid()) ||
               (FALSE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) || (FALSE == Cdd_PwmWave_IsRunRequestSelected(FALSE)) ||
               (FALSE == Cdd_PwmWave_AreAllOutputsDisabled())) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    } else {
      Cdd_PwmWave_SetActiveAndShadowRunSignalLevels();
      Cdd_PwmWave_ImmediateEnableAll();
      bEnableIssued = TRUE;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  if (TRUE == bEnableIssued) {
    bOutputsEnabled = Cdd_PwmWave_WaitForOutputState(TRUE);
  }

  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((CDD_PWM_WAVE_OK == eResult) && (TRUE == bEnableIssued)) {
    if ((FALSE == s_bClearPending) || (FALSE == s_bFaultLatched)) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
    } else if ((TRUE == bOutputsEnabled) && (TRUE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) && (TRUE == s_bOutputPadsConfirmed) &&
               (TRUE == Cdd_PwmWave_IsPhysicalArmedLowValid())) {
      s_bPendingFrameValid = FALSE;
      s_bPendingUsesRunSignalLevels = FALSE;
      s_bActiveFrameValid = FALSE;
      s_bStartPending = FALSE;
      s_bClearPending = FALSE;
      s_bFaultLatched = FALSE;
      s_u32PendingSequence = 0U;
      s_u32ActiveSequence = 0U;
      s_u32FaultFlags = 0U;
      s_u8PendingMainCycles = 0U;
      s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;
    } else {
      if (FALSE == bOutputsEnabled) {
        s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_TIMEOUT;
        eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
      } else {
        s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
        eResult = CDD_PWM_WAVE_E_HW_CONFIG;
      }
    }
  }

  if ((CDD_PWM_WAVE_OK != eResult) && (TRUE == s_bClearPending)) {
    if (FALSE == Cdd_PwmWave_ForceSafeHardware()) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
    }
    s_bClearPending = FALSE;
    s_bFaultLatched = TRUE;
    s_eState = CDD_PWM_WAVE_STATE_FAULT_LATCHED;
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
    pStatus->bFaultInputConfigured = (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_ON) ? TRUE : FALSE;
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
  pStatus->bFaultInputConfigured = (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_ON) ? TRUE : FALSE;
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
