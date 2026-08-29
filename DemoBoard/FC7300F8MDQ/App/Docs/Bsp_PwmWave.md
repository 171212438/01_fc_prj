# BSP PWM Wave 设计说明

## 1. 目标与边界

`Bsp_PwmWave` 只保留一条正常输出控制链：

```text
application 20 us owner
        |
        v
Bsp_PwmWave_ApplyRequest()
        |
        +-- OUTPUT_LOW: CH0-boundary DTM shutoff
        |
        `-- OUTPUT_FRAME
              +-- same period/state: CH4-CH7 shadow + UPEN
              `-- period/PWM5 change: complete shadow + IRQ172 common-boundary arm
```

应用层负责决定什么时候更新、提交什么 Frame，并保存自己的控制命令。BSP PWM Wave 硬件引擎负责：

- 动态参数校验与 Frame 编码；
- 完整 shadow 写入和一次性发布；
- CH0/CH3 Period/PWM5 变化的共同边界握手；
- 初始化、首次 Frame 自动释放和普通低态请求的硬件门禁；
- fault 锁存和快速硬件关断。

硬件引擎不保存 active/pending 完整 Frame，不生成 sequence，不提供逐帧完成账本，也不通过低频服务判断应用是否“应该更新”。

## 2. 硬件资源

- eFTU1 TOM0 CH0：载波基准；
- eFTU1 TOM0 CH3：PWM5，独立计数，周期固定为 CH0 的两倍；
- eFTU1 TOM0 CH4-CH7：PWM1-PWM4 窗口；
- DTM0 CH3、DTM1 CH0-CH3：互补输出、死区与 shutoff；
- LU0、TRGSEL0/2、eFTU1 FLT0：CH0 边界同步的 Run/Stop shutoff 请求；
- IRQ172：仅由本 BSP PWM 模块使用的 CH0 CCU0 一次性共同边界中断。

这些资源在 BSP PWM 初始化后由 Core0 独占。运行期间不得再使用标准 `Pwm` 或 `TrgSel` 更新 API 改写同一资源。

Reference Manual 的 TOM `UPEN_CTRL` 定义为命令字段：`01b` 禁止 shadow 更新、`10b` 允许 shadow 更新；shadow 数据在同步更新事件装入工作寄存器。`ENDIS`/`OUTEN` 提供通道和输出的使能控制。DTM 支持常量输出以及由 shutoff 输入选择安全输出。当前 BSP 的通道映射、共同边界算法和永久 Emergency 策略属于项目实现，不是手册自动提供的软件状态机。

## 3. Frame 编码

完整 Frame 包含：

- `u32PeriodTicks`；
- PWM1-PWM4 的四组 `CmpA/CmpB`；
- PWM5 的 `LOW/HIGH/TOGGLE` 状态。

输入规则：

- Period 必须位于 `500..1154` tick；
- 每个比较值必须小于 Period，并且 `CmpA <= CmpB`；
- `CmpA == CmpB` 是精确 0% 输出；
- 正宽度但小于 23 tick 死区时，按主路 100%、互补路 0% 编码；
- RUN 中改变 PWM5 状态时，和 Period 变化一样走 CH0/CH3 共同边界冷路径。

## 4. 固定周期热路径

RUN、Period 与 PWM5 状态都不变时，`Bsp_PwmWave_ApplyRequest(OUTPUT_FRAME, pFrame)` 的正常路径为：

1. 在 RAM 中校验并计算四组窗口值；
2. 第一个短临界区复核 state/fault，并对 CH4-CH7 发出 UPEN disable 命令；
3. 在中断开放状态下直接写 8 个 `SR0/SR1`；
4. 执行数据同步屏障；
5. 第二个短临界区再次复核 Emergency/fault，随后对 CH4-CH7 发出 UPEN enable 命令。

该路径不调用通用 `Pwm_DisableNotification()`，不扫描全部通道，不写固定不变的 SL，不保存 Frame 副本，也不执行活动寄存器全量 readback。

返回 `BSP_PWM_WAVE_OK` 表示完整 shadow 和更新命令已经发布，不表示工作寄存器已经装入该 Frame。同周期连续更新采用 latest-wins；应用不得把返回值解释为逐帧完成通知。

两段短临界区不能合并删除：shadow 写允许在锁外进行，但最终 publish 前必须再次检查永久 Emergency 锁存，防止 Emergency 抢占后旧 ApplyRequest 又重新打开 UPEN。

## 5. 共同边界冷路径

Period 或 RUN-time PWM5 状态变化时，必须在 CH0/CH3 共同边界更新。硬件引擎先关闭相关 UPEN、写完整 shadow；PWM5 进入或退出 TOGGLE 时，CH3 的 `CTRL_SR.SL_SR` 与 CM0/CM1 一并提交。随后发布一个 `s_bCommonUpdatePending` 事务并使能 CH0 CCU0 一次性 IRQ172。

IRQ172 先 W1C 确认 CCU0 事件，再检查 CH3 相位窗口；位于共同边界 arm 窗口时直接打开相关 UPEN，然后关闭中断源。新的共同更新事务在前一事务完成前返回 `BSP_PWM_WAVE_E_BUSY`。

共同更新事务保留两个兜底：

- IRQ 连续 8 个事件仍未找到共同边界时进入 `HW_TIMEOUT`；
- ApplyRequest 或内部低频 `Bsp_PwmWave_Service()` 检查到目标 Period/PWM5 长期未装入时进入 `HW_TIMEOUT`。

`Bsp_PwmWave_Service()` 是模块内部函数，不属于 20 us 热路径，只服务罕见的共同更新事务；当前由 20 ms 任务调用。该检查次数不是绝对时间基准，最终故障检测周期应按产品 FTTI 配置和验证。

## 6. 状态与生命周期

状态只保留四个：

- `RESET_SAFE`：BSP PWM 尚未成功初始化；
- `ARMED_LOW`：TOM/DTM 已准备，但 Run shutoff 请求保持低，外部输出应为低；
- `RUN`：允许正常波形输出；
- `FAULT_LATCHED`：禁止后续所有正常输出请求。

状态查询统一使用 `Bsp_PwmWave_GetStatus()`。状态中只保留输出和安全决策需要的 `bFrameConfigured`、`bCommonUpdatePending`、`bFaultLatched` 与 fault flags。

典型链路：

```text
Bsp_Pwm_Init()
 -> internal hardware initialization and ARMED_LOW confirmation
 -> Bsp_PwmWave_ApplyRequest(OUTPUT_FRAME, application frame)
 -> repeated ApplyRequest(OUTPUT_FRAME, frame)
 -> Bsp_PwmWave_ApplyRequest(OUTPUT_LOW, NULL_PTR)
```

`ARMED_LOW` 下首次 Frame 是冷路径：硬件引擎先保持 shutoff，完整装载并确认 Frame，再通过内部边界释放进入 RUN；应用不再调用独立 Start。此后 RUN 中的固定周期更新不做逐帧 readback。

普通低态请求前，应用必须先停止 20 us Frame producer。硬件引擎排空可能存在的共同更新事务，再在 CH0 边界撤销 Run 请求并确认所有 Pad 为低；应用不再调用独立 Stop。

## 7. 故障和快速关断

`Bsp_PwmWave_EnterFault()` 先发布 fault latch，再执行硬件安全化：

1. DTM 输出钳制为低；
2. 立即禁止 TOM 通道与输出；
3. 撤销 Run 请求；
4. 关闭一次性 IRQ 和 Frame 更新；
5. 恢复 TOM 安全信号电平并复核硬件低态。

`Bsp_PwmWave_ConfigureDtmShutoff()` 只建立正常运行时的 LU/TRGSEL/DTM 边界同步关系；它本身不会发出运行/低态请求。`Bsp_PwmWave_ForceSafeHardware()` 是 fault 路径的主动立即关断，目的和时效不同，不能合并为一个配置函数。

软件 `EmergencyShutdown` 设置 `BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST`，在本次上电期间永久有效；`ClearFault()` 不得清除该 fault。只有没有软件 Emergency 标志的硬件配置/超时 fault 才允许尝试恢复到 `ARMED_LOW`。

当前 `BSP_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED` 为 `STD_OFF`，因此代码尚未声明已接入真实外部功率级 fault 输入。产品集成不能把软件保护替代为外部硬件关断链。

## 8. 并发契约

- 正常控制 API 由一个 Core0 任务上下文串行调用；
- IRQ172 必须能抢占 20 us 应用任务；
- `EmergencyShutdown` 可由 Core0 任务或 ISR 调用；
- 不支持多生产者、重入、FIFO 或每帧必达；
- 调用期间 `pFrame` 必须保持不变。

若 20 us 应用代码运行在与 IRQ172 相同且不可抢占的优先级，共同边界更新可能被阻塞；这不是缩短 ApplyRequest 本身能够解决的问题。

## 9. API

| API | 作用 |
| --- | --- |
| `Bsp_PwmWave_ApplyRequest` | 唯一正常控制入口：完整 Frame/自动首次释放或普通边界低态 |
| `Bsp_PwmWave_EmergencyShutdown` | 立即低态关断并永久锁存软件 Emergency |
| `Bsp_PwmWave_ClearFault` | 仅尝试清除可恢复硬件 fault |
| `Bsp_PwmWave_GetStatus` | 唯一状态查询入口 |

`Bsp_PwmWave_InitInternal()`、`Bsp_PwmWave_ConfirmArmedLowInternal()`、`Bsp_PwmWave_Service()` 和通知回调属于 BSP 模块内部集成接口，不对应用公开。

## 10. 验证边界

源码语法检查只能证明接口和 C 语义可编译，不能证明 20 us WCET、共同边界时序和 Pad 波形。交付至少还需要：

- Windows 侧 FC IDE Refresh/Clean Build；
- 确认下载的 ELF/map 与当前源码一致；
- 分别测量固定周期、共同更新、BUSY 和 Emergency 路径；
- 用 DWT/GPIO 测量 ApplyRequest 与 IRQ172 最坏执行时间；
- 用示波器确认首次 Frame 前全低、更新无半帧、普通低态/Emergency 低态；
- 长时间 50 kHz 压力测试。

当前工程仍是 Debug `-O0` 构建配置，且现有调度表没有 20 us 调用源；这两项必须在 Windows 工程和应用调度集成中单独闭环。
