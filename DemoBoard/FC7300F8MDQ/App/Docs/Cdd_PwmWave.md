`Cdd_PwmWave_DisableArmNotificationLocked()` 是 PWM 波形 CDD 内部用于撤销载波边界装载通知的静态锁内辅助函数。调用者必须已经持有 `SchM` 的 `PWM_EXCLUSIVE_AREA_19`；函数先通过标准 PWM MCAL 关闭 `PWM_CARRIER` 通知，再清除本次 arm 事务的软件上下文，最后执行数据同步屏障，使通知和上下文的撤销先于后续锁内操作或临界区退出被观察到。当前生成配置把逻辑通道 `PwmConf_PwmChannel_PWM_CARRIER` 映射到 Core0 的 eFTU1 TOM0 CH0，并把通知回调配置为 `Cdd_PwmWave_CarrierBoundaryNotification()`。

该函数没有输入参数、输出参数或返回结果。当前 MCAL 实现会把该 eFTU TOM 通道的通知边沿状态置为无效，关闭 CCU0/CCU1 中断并清除两类已挂起标志；随后 `Cdd_PwmWave_ResetArmNotificationState()` 清除 arm pending 标志、绑定序列号、旧载波周期、窗口错过次数和通知次数。该操作只关闭目标逻辑通道的 TOM 事件源，不会关闭共享的 `eFTU1_TOM_0TO7_IRQn`，也不会显式清除 NVIC pending。函数不会清除 pending/active 帧，不会撤销已经设置的 `UPEN`，也不会禁用 TOM 通道或物理输出；需要取消影子装载或回退输出的调用者会继续调用其他辅助函数。

`Pwm_DisableNotification()` 是 `void` API，本函数也没有硬件读回或错误上报通道。若 PWM 尚未初始化、通道号无效或调用 Core 与生成配置不匹配，当前 MCAL 可能只报告 DET 或跳过底层操作，而本函数仍会清除 CDD 的 arm 软件状态；因此数据同步屏障只保证先前写入的顺序和可见性，不证明通知关闭成功。当前八个直接调用点均位于 `PWM_EXCLUSIVE_AREA_19` 内，正常集成路径还由 Core0、`Pwm_Init()` 顺序以及通知配置检查约束上述前提。

手册事实与项目实现边界如下：PWM User Manual 原 PDF 第 23 页把 `Pwm_DisableNotification()` 定义为关闭指定 PWM 通道通知且无返回值；PWM Integration Manual 原 PDF 第 15 页说明，配置了非空通知函数时会在 `Pwm_Cfg.h` 中生成外部声明，并要求用户实现该通知函数。FC7300F8MDQ Reference Manual 原 PDF 第 2036～2037 页说明，`EFTU_TOM_CHn_IRQ_ST.CCU0TC/CCU1TC` 写 `1` 清中断，`EFTU_TOM_CHn_IRQ_EN.CCU0_TC_IRQ_EN/CCU1_TC_IRQ_EN` 写 `0` 禁用相应中断信号。当前 MCAL 源码和生成配置把这些通用语义落实为上述 CH0 通知关闭流程；“一次性共同边界 arm 上下文”和清理哪些 CDD 变量则是当前项目源码约定，不是手册规定的唯一实现。在当前 Errata V0.5 的汇总范围内未发现 eFTU、TOM 或 PWM 通知关闭相关条目。

当前源码中共有六个直接调用者、八个调用点：

1. `Cdd_PwmWave_RefreshPending()` 在确认 pending 帧已经装载并提升为 active 帧后调用本函数，撤销该帧关联的 arm 通知；随后再禁止 frame update。
2. `Cdd_PwmWave_AbortPending()` 在故障或安全回退开始时无条件撤销通知和 arm 上下文，随后禁止 frame update、恢复影子寄存器并清除 pending 帧。
3. `Cdd_PwmWave_ScheduleFrameAtCommonBoundaryLocked()` 在安装新的共同边界调度前调用本函数，把旧通知和旧 arm 上下文归零；随后登记本次旧周期、序列号和计数，并启用新的上升沿通知。
4. `Cdd_PwmWave_CarrierBoundaryNotification()` 有三个调用点：软件已经没有 arm pending 时清理可能残留的硬件通知；故障已经锁存时停止后续 arm 尝试；找到有效相位窗口并设置 frame update 后完成本次一次性通知的收尾。
5. `Cdd_PwmWave_Init()` 在 Core0 取得初始化门禁并进入 `GPIO_LOW` 后调用本函数，先清理可能遗留的通知和 arm 状态，再检查当前生成通知配置。
6. `Cdd_PwmWave_SubmitFrameLocked()` 在提交门禁通过、写入新影子参数之前调用本函数，撤销旧 arm 事务；随后禁止 frame update，避免新影子值写入期间发生装载。

```c
static void Cdd_PwmWave_DisableArmNotificationLocked(void)
{
  // 调用者必须持有 AREA_19；该事务同时撤销硬件通知和与其绑定的软件 arm 上下文。
  Pwm_DisableNotification(PwmConf_PwmChannel_PWM_CARRIER);  // 撤销通知边沿配置，禁用 CCU0/CCU1 并清除两类中断标志
  Cdd_PwmWave_ResetArmNotificationState();  // 清除 pending、绑定序列、旧周期及两类通知计数
  MCAL_DATA_SYNC_BARRIER();  // 同步先前的寄存器和共享状态写入，不作为禁用成功的读回证据
}
```

`Cdd_PwmWave_CarrierBoundaryNotification()` 是 PWM 波形 CDD 为载波周期变化建立的一次性共同边界装载回调。`Cdd_PwmWave_SubmitFrameLocked()` 已经把新帧写入 TOM shadow 并登记为 pending 后，`Cdd_PwmWave_ScheduleFrameAtCommonBoundaryLocked()` 才会保存旧载波周期和序列号，并为 `PWM_CARRIER` 启用上升沿通知；本函数在该通知到来时确认软件事务、活动寄存器和 CH0/CH3 相位窗口仍属于同一项提交，满足条件后只为 CH0、CH3～CH7 设置 `UPEN`，让影子值在后续共同零点装载。它不写入帧参数，也不把 pending 帧直接提升为 active；实际装载仍由硬件边界完成，软件状态由后续 `Cdd_PwmWave_RefreshPending()` 读回确认。

该函数没有输入参数、输出参数或返回结果，执行结果通过通知状态、arm 计数、`UPEN`、故障状态和可选诊断快照体现。当前生成配置把逻辑通道 `PwmConf_PwmChannel_PWM_CARRIER` 映射到 Core0 的 eFTU1 TOM0 CH0，并把本函数登记为通知回调；BSP 的 eFTU1 TOM0～7 共用 ISR 则先调用快速分发函数。函数本身不检查 Core ID 或初始化状态，不能作为普通任务接口任意调用，其运行前提依赖 Core0 IRQ 路由、已发布的 pending/arm 上下文和当前 SchM 集成。

进入 `PWM_EXCLUSIVE_AREA_19` 后，函数先处理所有权和故障门禁：没有 arm pending 或故障已经锁存时，只撤销可能残留的一次性通知和 arm 上下文；pending 帧、序列号、`ARMED_LOW/RUN` 状态、载波内部触发、CH0 旧周期、PWM5 双周期关系或 CH3 的 `RST_CCU0` 任一不匹配时，按 `CDD_PWM_WAVE_FAULT_HW_CONFIG` 强制进入安全态。只有这些不变量全部成立，本次通知才计入当前 arm 请求并进入相位窗口检查。

相位窗口检查按 CH0-before、PWM5/CH3、CH0-after 的顺序读取计数器，要求采样期间 CH0 未回绕、CH0-after 不超过旧载波周期的一半、PWM5 位于第二个旧载波周期 `[P, 2P)`，并且折算后的 PWM5 相位落在两次 CH0 样本之间。有效时，本函数在原有注释限定的紧邻时序区间内立即设置 frame update，再关闭一次性通知；这只证明软件发出了 shadow 装载许可，不证明寄存器已经在边界完成装载，更不证明物理 Pad 波形已经实测。

窗口无效时，只有 PWM5 已进入第二个旧载波周期才累计窗口错过次数；未达上限时保留通知、pending 帧和 arm 上下文，等待下一次载波事件重试。窗口错过达到 `3` 次或本次 arm 请求累计处理 `8` 次通知后，函数先把旧周期、pending 新周期、序列号、尝试次数和失败阶段复制到局部变量，再以 `CDD_PWM_WAVE_FAULT_HW_TIMEOUT` 进入安全态，因为故障路径会清除全局 arm/pending 上下文。安全化后函数仍在当前临界区内尝试保存首次 arm 故障快照；若已有有效快照，`Cdd_PwmWave_CaptureArmFaultSnapshot()` 不会覆盖原现场。当前 `SchM` 实现提供同核可重入的中断屏蔽，不是跨核自旋锁，因此这里的原子性还依赖当前 Core0 资源所有权约定。

中断确认不由本函数统一完成。当前快速路径 `Cdd_PwmWave_TryHandleCarrierBoundaryInterrupt()` 在调用本函数前已经检查 CH0 的 CCU0 中断使能和 pending，并写 `CH_IRQ_ST.CCU0TC` 清除本次标志；成功 arm、无所有权或已锁存故障的分支随后还会通过 `Pwm_DisableNotification()` 禁用并清理通知。相位窗口无效但尚未超限时，本函数保留通知以接收下一次事件。生成的 PWM 配置仍保留 MCAL 通用 ISR 通过函数指针调用本回调的集成关系，但在当前 BSP 包装 ISR 中，符合快速路径条件的 CH0 CCU0 事件会先被直接接管。

手册事实与项目实现边界如下：PWM User Manual 原 PDF 第 23、40～41、48 和 60 页说明通知 API、启用通知后按配置回调、通知函数配置项以及全局通知支持开关；PWM Integration Manual 原 PDF 第 15 页说明非空通知配置会生成外部声明，并要求用户实现通知函数。FC7300F8MDQ Reference Manual 原 PDF 第 1896～1898、1995～1997、2019、2028、2033 和 2036～2037 页说明 TOM shadow 的同步更新事件、`UPEN_CTRL`、内部触发选择、`RST_CCU0`、`CN0` 以及 CCU0/CCU1 中断状态和使能字段。上述原页支持通知和寄存器机制；共同边界相位门、两类有界重试、故障分类和快照发布顺序是当前 CDD 源码约定，不是手册规定的唯一算法。在当前 Errata V0.5 汇总范围内未发现 eFTU TOM/PWM 通知或 shadow 装载相关条目；其中出现的 eFTU 内容仅涉及 DMA 请求复用，与本函数路径无直接关系。

当前源码中只有一个显式直接调用者：

1. `Cdd_PwmWave_TryHandleCarrierBoundaryInterrupt()` 在 eFTU1 TOM0 CH0 的 CCU0 中断已使能且 pending 时，先写 `CH_IRQ_ST` 确认本次事件，再直接调用本函数执行低延迟相位门检查；它由 `EFTU1_TOM_0_7_IRQHandler()` 优先调用。生成配置和 MCAL 通用 ISR 中的函数指针分发属于运行期的间接通知路径，不计入显式直接调用者。

```c
void Cdd_PwmWave_CarrierBoundaryNotification(void)
{
  Cdd_PwmWave_ArmWindowCheckType tArmWindowCheck = {0U};  // 保存本次相位门检查的计数器样本和拒绝原因
  Cdd_PwmWave_SequenceType u32SnapshotSequence = 0U;  // 在超时安全化前保存待记录的 arm 序列号
  uint32 u32OldCarrierPeriod = 0U;  // 保存故障发生时仍在运行的旧载波周期
  uint32 u32PendingCarrierPeriod = 0U;  // 保存故障发生时等待装载的新载波周期
  uint32 u32SnapshotStage = 0U;  // 标识因窗口错过或通知次数超限而失败
  uint8 u8SnapshotAttemptNumber = 0U;  // 保存本次 arm 请求已处理的通知次数
  boolean bCaptureSnapshot = FALSE;  // 指示安全化后是否尝试保存首次故障快照
  boolean bArmWindowValid;  // 保存本次 CH0/CH3 共同边界相位门判定

  // 整个回调在 AREA_19 内串行化一次性 arm 上下文、pending 帧和故障迁移。
  // 先按软件所有权和故障状态筛除无效通知；这些分支只撤销通知事务。
  // 只有 pending 帧、序列、驱动状态、边界触发及 CH0/CH3 旧周期拓扑全部匹配，才允许检查 arm 窗口。
  // 任一拓扑不变量失配都按硬件配置故障进入安全态，不能继续设置 UPEN。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == s_bArmNotificationPending) {
    Cdd_PwmWave_DisableArmNotificationLocked();  // 清理未绑定 arm 请求的残留硬件通知和软件上下文
  } else if (TRUE == s_bFaultLatched) {
    Cdd_PwmWave_DisableArmNotificationLocked();  // 故障已锁存，不再允许本次边界尝试继续
  } else if ((FALSE == s_bPendingFrameValid) || (s_u32ArmSequence != s_u32PendingSequence) ||
             ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (CDD_PWM_WAVE_STATE_RUN != s_eState)) ||
             (FALSE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) ||
             (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM0 != s_u32ArmOldCarrierPeriod) ||
             (EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_PWM5_CHANNEL].CH_CM0 != (CDD_PWM_WAVE_PWM5_CARRIER_PERIODS * s_u32ArmOldCarrierPeriod)) ||
             ((EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_PWM5_CHANNEL].CH_CTRL & EFTU_TOM_CHn_CTRL_RST_CCU0_MASK) != 0U)) {
    (void)Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);  // 强制安全输出并锁存硬件配置故障
  } else {
    // 通过事务和拓扑门禁后，本次中断才计入当前 arm 请求。
    s_u8ArmInterruptCount++;  // 限制异常通知重试的总次数
    bArmWindowValid = Cdd_PwmWave_CheckPwm5CommonBoundaryArmWindow(s_u32ArmOldCarrierPeriod, &tArmWindowCheck);  // 在 CH0 前后采样间核对 PWM5 是否处于第二个旧载波周期的安全窗口

    /* No diagnostics or configuration reads are allowed between the valid
     * phase gate and UPEN. AREA_19 keeps the sequence atomic. */
    if (TRUE == bArmWindowValid) {
      Cdd_PwmWave_ArmFrameUpdate();  // 只在有效相位窗内使能 UPEN，等待下一共同零点装载影子值
      Cdd_PwmWave_DisableArmNotificationLocked();  // UPEN 已 arm 后撤销一次性通知及其软件上下文
    } else {
      // 相位门失败时保留本次采样；只有 PWM5 已进入第二个旧载波周期，才计为错过目标窗口。
      // 窗口错过次数与通知总次数分别约束“已到目标半周期但来晚”和“始终未获得可用事件”。
      if (tArmWindowCheck.u32Pwm5Counter >= s_u32ArmOldCarrierPeriod) {
        s_u8ArmWindowMissCount++;  // 累计真正错过第二周期 arm 窗口的次数
      }

      // 达到任一上限后，先复制诊断所需上下文，再由故障路径清理全局 arm 和 pending 状态。
      // 局部副本确保后续快照仍能标识本次待装载帧及最终失败阶段。
      if ((s_u8ArmWindowMissCount >= CDD_PWM_WAVE_ARM_IRQ_MAX_WINDOW_MISSES) ||
          (s_u8ArmInterruptCount >= CDD_PWM_WAVE_ARM_IRQ_MAX_EVENTS)) {
        u32OldCarrierPeriod = s_u32ArmOldCarrierPeriod;
        u32PendingCarrierPeriod = s_tPendingFrame.u32PeriodTicks;
        u32SnapshotSequence = s_u32ArmSequence;
        u8SnapshotAttemptNumber = s_u8ArmInterruptCount;
        u32SnapshotStage = (s_u8ArmWindowMissCount >= CDD_PWM_WAVE_ARM_IRQ_MAX_WINDOW_MISSES)
                               ? CDD_PWM_WAVE_ARM_SNAPSHOT_STAGE_IRQ_WINDOW_MISSED
                               : CDD_PWM_WAVE_ARM_SNAPSHOT_STAGE_IRQ_EVENT_LIMIT;
        bCaptureSnapshot = TRUE;  // 要求在安全化后尝试保存首次故障快照
        (void)Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_TIMEOUT);  // 超出有界重试次数，强制安全输出并锁存硬件超时
      }
    }
  }

  // EnterFault() 可能已清除全局 arm 上下文；这里仅使用故障前保存的局部副本发布快照。
  // 在当前 Core0 所有权约定下仍在同一临界区内尝试写入；已有有效快照不会被覆盖。
  if (TRUE == bCaptureSnapshot) {
    Cdd_PwmWave_CaptureArmFaultSnapshot(u32SnapshotStage, u32OldCarrierPeriod, u32PendingCarrierPeriod, u32SnapshotSequence,
                                        u8SnapshotAttemptNumber, TRUE, FALSE, &tArmWindowCheck);  // 保存失败阶段、周期、序列、尝试次数及最后一次相位门采样
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 状态迁移和可选快照处理完成后再退出临界区
}
```

`Cdd_PwmWave_TryHandleCarrierBoundaryInterrupt()` 是 eFTU1 TOM0 CH0 载波 CCU0 事件的共享向量快速分流函数。`EFTU1_TOM_0_7_IRQHandler()` 在进入 MCAL 通用 ISR 前先调用它；函数只识别 `PWM_CARRIER` 对应 CH0 的 CCU0 中断使能位和 pending 位，命中后先确认当前事件，再直接调用 `Cdd_PwmWave_CarrierBoundaryNotification()`。这样可以避开通用 ISR 对全部配置通道的顺序扫描，缩短进入 P/2 arm 相位窗口前的延迟，并改变为“先清当前标志、再执行回调”的确认顺序。它不是完整的 TOM0～7 通用中断处理器，也不负责扫描 CCU1 或其他通道。

该函数没有输入参数或输出参数，返回 `boolean` 表示当前中断入口是否已由载波快速路径认领，而不是帧处理结果。函数依次读取完整的 `CH_IRQ_EN` 和 `CH_IRQ_ST` 寄存器形成两个顺序快照；若 CCU0 使能位或状态位任一未置位，则不写寄存器、不调用回调并返回 `FALSE`，由包装 ISR 转入 MCAL 通用 ISR。`FALSE` 不是故障，也不能解释为共享向量上没有其他 pending 来源。两个条件都成立时，函数向 `CH_IRQ_ST.CCU0TC` 写 `1` 清除本次 CCU0 事件，随后调用无返回值的载波边界回调并返回 `TRUE`。

`TRUE` 只证明函数依据这两个快照认领了 CH0 CCU0 事件、发出了 W1C 确认并执行了回调；它不表示回调一定设置了 `UPEN`，也不表示 pending 帧已经装载、物理 Pad 已经切换或系统没有进入故障。下游回调仍可能因为没有 arm 所有权或故障已锁存而撤销通知，可能保留通知等待下一次相位窗口，也可能因配置或超时检查失败进入安全态。函数本身不进入 SchM 临界区、不检查 Core ID、CDD 初始化状态、arm 软件所有权、MCAL 通知边沿状态或配置回调指针，这些前提分别由 Core0 中断集成、调度流程和下游回调约束。

当前 MCAL 通用 `PWM_EFTU1_TOM_0_7_ISR()` 会扫描配置通道，在匹配事件时先通过函数指针调用通知函数，再清对应 CCU0 标志。本函数改为在回调前清除当前 CCU0 标志，使回调执行期间新到达的下一次 CCU0 边沿不会被通用 ISR 的尾部清除操作一并抹掉。函数不会执行 `EXIT_INTERRUPT()`、不会显式清除 NVIC pending，也不会清除 CCU1 或其他通道的中断标志；`TRUE` 时包装 ISR 本轮跳过通用扫描并自行退出中断，`FALSE` 时由通用 ISR 完成扫描和退出。

当前生成配置把逻辑通道 `PwmConf_PwmChannel_PWM_CARRIER`（19）映射到 Core0 的 eFTU1 TOM0 CH0，并登记 `Cdd_PwmWave_CarrierBoundaryNotification()`；`PWM_NOTIFICATION_SUPPORTED` 和 `PWM_EFTU_1_TOM_0_ISR_USED` 均为 `STD_ON`。`Bsp_Pwm_Init()` 在 Core0 范围内先禁用该共享 IRQ、将其路由到 Core0 并设置优先级，只有 CDD 初始化、PinMux 切换和 `ARMED_LOW` 确认成功后才重新使能。上述配置和启动门禁是当前工程事实，不是本函数内部自行验证的条件。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 2035～2037 页说明 `EFTU_TOM_CHn_IRQ_ST.CCU0TC` 表示 CCU0 比较事件，写 `1` 清除该中断，并说明 `EFTU_TOM_CHn_IRQ_EN.CCU0_TC_IRQ_EN` 的使能语义。PWM User Manual 原 PDF 第 40～41 页说明，调用 `Pwm_EnableNotification()` 后，匹配边沿会调用配置的通道通知函数；禁用后不再通知。PWM Integration Manual 原 PDF 第 15 页说明非空通知函数由配置生成外部声明并由用户实现，但第 11 页的 ISR 表只列出普通 FTU0～FTU11，不能用来证明当前 eFTU1 TOM0～7 共享向量的包装方式。共享向量快速分流、通用配置扫描、P/2 窗口和先清后回调均以当前源码与生成配置为直接依据。在当前 Errata V0.5 汇总及 `EFTU/TOM/PWM/CCU/notification` 检索范围内未发现直接适用于本函数的条目。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `FALSE` | CH0 CCU0 中断使能位或 pending 位至少一个未置位；函数未认领事件，也未写状态寄存器或调用载波回调，包装 ISR 随后调用 MCAL 通用 ISR |
| `TRUE` | 两个位快照均已置位；函数已向 `CCU0TC` 写 `1` 确认事件并调用载波边界回调，包装 ISR 随后跳过 MCAL 通用 ISR；不表示帧已成功装载 |

当前源码中只有一个直接调用者：

1. `EFTU1_TOM_0_7_IRQHandler()` 在 eFTU1 TOM0 CH0～CH7 共用中断入口优先调用本函数；返回 `FALSE` 时转入 `PWM_EFTU1_TOM_0_7_ISR()` 扫描共享来源，返回 `TRUE` 时直接执行 `EXIT_INTERRUPT()`。

```c
boolean Cdd_PwmWave_TryHandleCarrierBoundaryInterrupt(void)
{
  uint32 u32IrqEnable = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_EN;  // 保存载波 CH0 中断使能寄存器快照，本函数只检查 CCU0 bit0
  uint32 u32IrqStatus = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST;  // 保存载波 CH0 中断状态寄存器快照，本函数只检查 CCU0 pending bit0

  // 只有 CCU0 同时处于已使能且 pending 状态时才认领载波事件。
  // 任一条件不满足均不改寄存器，把当前共享向量交回通用 MCAL ISR 扫描。
  if (((u32IrqEnable & EFTU_TOM_CHn_IRQ_EN_CCU0TC_IRQ_EN_MASK) == 0U) || ((u32IrqStatus & EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK) == 0U)) {
    return FALSE;
  }

  /*
   * Carrier is logical PWM channel 19. Calling the generic ISR first would
   * scan all configured channels before reaching CH0 and can miss the P/2
   * arm window. Acknowledge CCU0 first so a later edge cannot be erased at
   * ISR exit, then run the configured CDD callback directly.
   */
  EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_IRQ_ST = EFTU_TOM_CHn_IRQ_ST_CCU0TC_MASK;  // 向 W1C 位写 1，在执行回调前确认当前 CCU0 事件
  Cdd_PwmWave_CarrierBoundaryNotification();  // 绕过通用通道扫描，立即执行 CDD 的相位窗口和 arm 事务检查

  return TRUE;  // 仅表示载波事件已认领并调用回调，不表示帧已成功装载
}
```

`Cdd_PwmWave_Init()` 是 PWM 波形 CDD 的 Core0 初始化和硬件接管入口。它承接标准 `Pwm_Init()`、eFTU 和 TrgSel 已建立的启动配置，接管 eFTU1 TOM0 CH0、CH3～CH7、DTM0/DTM1、LU0 及相关 TRGSEL 资源：先撤销载波通知并核对其生成配置，再尝试捕获初始 DTM 运行基线，随后禁止影子装载、禁用 CH3～CH7，并在已有有效基线时检查初始硬件拓扑；之后保存 PWM5/CH3 基线，把 PWM5 改成独立的双载波周期通道，并建立边界同步的 Stop/Run、DTM 关断和载波触发链。完成有界时序等待、通道/输出使能读回及最终拓扑检查后，函数才发布 `CDD_PWM_WAVE_STATE_ARMED_LOW` 和已初始化状态。

该函数没有输入参数或输出参数，只允许 Core0 在启动阶段调用。成功返回只表示当前软件读回的 CDD 内部寄存器拓扑、通道/输出使能状态和软件状态满足判据：TOM CH3～CH7 已建立运行拓扑，但 Run 请求和 DTM 仍保持低态门控，`s_bOutputPadsConfirmed` 也仍为 `FALSE`。本函数不切换 Port PinMux；调用者必须在成功后把九路 Pad 切换为 eFTU，再调用 `Cdd_PwmWave_ConfirmArmedLow()`，才能完成启动波形前的低态确认。上述寄存器读回不等同于示波器或外部电压测量已经确认物理 Pad 状态。

除非在 Core 检查或重复初始化门禁处提前返回，其余失败路径都会尝试强制安全硬件状态、撤销载波边界触发，并在已经保存 PWM5 基线时恢复 CH3 原配置。初始化失败会保留相应 fault flags，但不会进入 `FAULT_LATCHED`；函数最终清除重入门禁、保持未初始化并回到 `GPIO_LOW` 软件状态，允许后续重新尝试。安全化或恢复复核失败只会追加 `CDD_PWM_WAVE_FAULT_HW_CONFIG`，不会覆盖原始的 `CDD_PWM_WAVE_E_HW_CONFIG` 或 `CDD_PWM_WAVE_E_HW_TIMEOUT` 返回原因。

当前实现存在一个必须单独说明的边界：`Cdd_PwmWave_IsInitialDtmConfigValid()` 返回 `FALSE` 时，代码只是不置位 `s_bDtmRunConfigCaptured`，并没有同时把 `bHardwareConfigValid` 置为 `FALSE`；后续完整初始拓扑校验又只在基线已经捕获时执行。因此，初始 DTM 基线无效并不保证在该检查点终止初始化或返回 `CDD_PWM_WAVE_E_HW_CONFIG`，后续配置仍可能继续。这是当前源码的实现风险，不能把该基线检查表述成已经闭合的严格失败门槛。

手册事实与项目实现边界如下：PWM User Manual 原 PDF 第 10 页记录但未采纳“运行期间不调用 `Pwm_Init()`”这一 AUTOSAR 要求，因此本说明不把它作为当前工程约束；第 25～26 页只说明该 API 用于 PWM 模块初始化。PWM Integration Manual 原 PDF 第 14 页把参数为 `NULL_PTR` 的 PWM 初始化 API 列为启动阶段调用，其中 PDF 写作 `PWM_Init`，当前源码符号为 `Pwm_Init`。FC7300F8MDQ Reference Manual 原 PDF 第 1996、2000、2008 和 2056 页分别说明 TOM 的 `UPEN_CTRL`、`ENDIS_CTRL`、`OUTEN_CTRL` 以及 DTM `SHUTOFF_SEL/UPD_MODE` 字段语义；Port User Manual 原 PDF 第 15 页说明 `Port_SetPinMode` 才负责设置引脚复用模式。这些原页支持“禁止影子更新、按触发启停通道/输出以及选择 DTM 关断源”的寄存器解释，也支持把 PinMux 明确留在本函数之外；但 Core0 资源所有权、双载波周期 PWM5、两次载波回绕等待、`ARMED_LOW` 状态机和具体初始化顺序均是当前项目源码与生成配置事实，不是手册规定的唯一流程。在当前 Errata V0.5 中，以 eFTU、TOM、DTM、PWM、dead time、update、output enable 和 notification 为范围未发现直接适用于本函数的条目。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | 当前流程到达成功分支，驱动进入 `ARMED_LOW` 并置为已初始化；输出 Pad 尚未切换和确认 |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0；函数在进入 SchM 临界区和访问初始化硬件前返回 |
| `CDD_PWM_WAVE_E_STATE` | CDD 已初始化，或另一次初始化仍在进行；函数释放 SchM 锁后返回 |
| `CDD_PWM_WAVE_E_HW_CONFIG` | 通知配置、eFTU/LU/DTM/TRGSEL 配置链或最终运行拓扑检查失败；初始 DTM 基线单独失败受上述实现缺口限制 |
| `CDD_PWM_WAVE_E_HW_TIMEOUT` | 未在有界轮询内观察到要求的载波回绕，或 CH3～CH7 通道及输出使能状态没有按请求生效 |

当前源码中只有一个直接调用者：

1. `Bsp_Pwm_Init()` 在 Core0 专属初始化块中调用本函数。调用前已执行 `Pwm_Init(NULL_PTR)`、关闭并配置 TOM0 共用 IRQ以及复位 BSP 测试状态；返回 `CDD_PWM_WAVE_OK` 后才切换九路输出 Pad、调用 `Cdd_PwmWave_ConfirmArmedLow()` 并开放共用 IRQ。失败时不进入上述 PinMux 和确认流程，BSP 将本函数的结果保存为最后一次 PWM 波形控制结果。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_Init(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;  // 汇总初始化阶段的最终返回结果
  Cdd_PwmWave_TomChannelSnapshotType tPwm5Baseline = {0U};  // 保存 Pwm_Init 建立的 PWM5/CH3 基线，失败时用于恢复
  boolean bHardwareConfigValid = FALSE;  // 串联通知、TOM、DTM、LU 和触发路由的配置校验结果
  boolean bOutputsEnabled = FALSE;  // 记录 CH3～CH7 的 TOM 通道与输出使能状态是否按请求生效
  boolean bPwm5BaselineCaptured = FALSE;  // 标记 PWM5 基线快照是否可用于失败回滚
  boolean bStopTimingElapsed = FALSE;  // 标记停机请求后的载波稳定等待是否完成
  uint32 u32Dtm0RunCtrl2;  // 暂存 MCAL 初始化后的 DTM0 CH_CTRL2 运行基线
  uint32 u32Dtm1RunCtrl2;  // 暂存 MCAL 初始化后的 DTM1 CH_CTRL2 运行基线

  // CDD 的 eFTU、DTM、LU 和 TRGSEL 资源只归 Core0 管理。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 调用核不具备该 CDD 的硬件所有权
  }

  // 在 SchM 临界区内建立一次性初始化门禁，避免重复初始化或并发重入。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if ((TRUE == s_bInitialized) || (TRUE == s_bInitInProgress)) {
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 提前返回前配对释放 SchM 锁
    return CDD_PWM_WAVE_E_STATE;  // 初始化生命周期不允许再次进入
  }

  // 先声明初始化占用并回到 GPIO_LOW 软件基线，同时撤销可能残留的一次性装载通知。
  // 随后核对生成配置中的载波通道实例、硬件通道、Core ID 和通知回调。
  s_bInitInProgress = TRUE;  // 阻止初始化流程尚未完成时再次进入
  s_eState = CDD_PWM_WAVE_STATE_GPIO_LOW;  // 初始化期间不向上层声明 ARMED_LOW
  Cdd_PwmWave_DisableArmNotificationLocked();  // 清除旧 CCU0 通知，避免初始化中触发装载回调
  bHardwareConfigValid = Cdd_PwmWave_IsNotificationConfigValid();  // 校验 PWM_CARRIER 通知配置是否满足 CDD 约束

  // 尚未捕获有效基线时读取并校验 MCAL 建立的 DTM0/DTM1 运行值，供后续配置和恢复使用。
  if ((TRUE == bHardwareConfigValid) && (FALSE == s_bDtmRunConfigCaptured)) {
    u32Dtm0RunCtrl2 = EFTU1_DTM0->CH_CTRL2;  // 读取 PWM5 所在 DTM0 的原始运行控制值
    u32Dtm1RunCtrl2 = EFTU1_DTM1->CH_CTRL2;  // 读取 PWM1～PWM4 所在 DTM1 的原始死区控制值
    if (TRUE == Cdd_PwmWave_IsInitialDtmConfigValid(u32Dtm0RunCtrl2, u32Dtm1RunCtrl2)) {
      s_u32Dtm0RunCtrl2 = u32Dtm0RunCtrl2;  // 固化 DTM0 基线供运行配置和回退复用
      s_u32DtmRunCtrl2 = u32Dtm1RunCtrl2;  // 固化 DTM1 基线供运行配置和回退复用
      s_bDtmRunConfigCaptured = TRUE;  // 仅在完整初始配置有效时开放后续恢复路径
    }
  }

  // 当前实现中，基线校验失败只是不置 captured，不会把 bHardwareConfigValid 置为 FALSE。
  // 下方完整初始拓扑校验也会因未捕获基线而跳过，因此此处不是必然终止初始化的门槛。
  // 关闭影子装载并立即禁用 CH3～CH7 及其输出，再把活动/影子极性置为安全值。
  // 这一阶段先建立受控低输出拓扑，避免后续改写 PWM5、LU 和 DTM 时产生不完整配置。
  Cdd_PwmWave_DisableFrameUpdate();
  Cdd_PwmWave_ImmediateDisableAll();
  Cdd_PwmWave_SetActiveAndShadowSafeSignalLevels();
  if ((TRUE == bHardwareConfigValid) && (TRUE == s_bDtmRunConfigCaptured)) {
    Cdd_PwmWave_RestoreInitialDtmRunConfig();  // 清除运行期 DTM 控制位并恢复已捕获的 MCAL 基线
    bHardwareConfigValid = Cdd_PwmWave_IsHardwareConfigValid(s_u32Dtm0RunCtrl2, s_u32DtmRunCtrl2);  // 交叉检查 TOM 与初始 DTM 拓扑
  }

  // 安全禁用命令必须在状态寄存器中可见，否则不再继续改造运行拓扑。
  if ((TRUE == bHardwareConfigValid) && (FALSE == Cdd_PwmWave_AreAllOutputsDisabled())) {
    bHardwareConfigValid = FALSE;
  }
  // 在改写 PWM5/CH3 为独立两载波周期通道前保存 Pwm_Init 建立的原始寄存器集。
  if (TRUE == bHardwareConfigValid) {
    Cdd_PwmWave_CapturePwm5Baseline(&tPwm5Baseline);  // 保存 CH3 控制、比较、影子和计数器寄存器
    bPwm5BaselineCaptured = TRUE;  // 允许统一失败路径执行 PWM5 回滚
    bHardwareConfigValid = Cdd_PwmWave_ConfigurePwm5Independent();  // 去除 CH0 复位依赖并校验独立 CH3 拓扑
  }
  // LU0 将软件 Run 请求同步到 CH0 边界，配置失败时停止后续 DTM 接管。
  if (TRUE == bHardwareConfigValid) {
    bHardwareConfigValid = Cdd_PwmWave_ConfigureLuStopSynchronizer();
  }
  // 最后配置 DTM 关断和 CH0 载波边界内部触发。
  // 复合校验要求 LU、DTM、触发选择均匹配，并且当前 Run 请求仍保持 FALSE。
  // 任一关系失配都会阻止后续通道使能，并在最终分类为硬件配置错误。
  if (TRUE == bHardwareConfigValid) {
    Cdd_PwmWave_ConfigureDtmShutoff();
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(TRUE);
    bHardwareConfigValid = ((TRUE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) && (TRUE == Cdd_PwmWave_IsDtmShutoffConfigValid()) &&
                            (TRUE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) && (TRUE == Cdd_PwmWave_IsRunRequestSelected(FALSE)))
                               ? TRUE
                               : FALSE;  // 汇总完整同步拓扑的交叉校验结果
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 释放锁后再执行有界轮询，避免长时间占用临界区

  // 配置有效时等待规定数量的 CH0 回绕，使低态请求跨过硬件同步边界。
  if (TRUE == bHardwareConfigValid) {
    bStopTimingElapsed = Cdd_PwmWave_WaitForCarrierWraps(CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS);  // 记录同步等待是否在上限内完成
  }

  // 重新进入锁后切换到运行用信号极性，并请求 CH3～CH7 在下一载波边界统一使能。
  // 此时 Run 请求仍为 FALSE，DTM 继续把输出钳制在低态；这里只建立 ARMED_LOW 所需内部运行拓扑。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (TRUE == bStopTimingElapsed) {
    Cdd_PwmWave_SetActiveAndShadowRunSignalLevels();  // 预置后续正常波形所需的活动及影子极性
    Cdd_PwmWave_EnableAllAtCarrierBoundary();  // 清零独立 CH3 计数器并提交边界使能命令
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 使能状态轮询同样放到临界区外

  // 仅在配置及边界等待均成功后，轮询 TOM/TGC 状态确认使能命令已生效。
  // 该检查是寄存器状态确认，不等同于外部引脚电平或板级波形测量。
  if ((TRUE == bHardwareConfigValid) && (TRUE == bStopTimingElapsed)) {
    bOutputsEnabled = Cdd_PwmWave_WaitForOutputState(TRUE);  // 记录 CH3～CH7 通道和输出状态是否全部使能
  }

  // 在锁内按“配置错误、时序超时、最终拓扑失配、成功”顺序确定唯一结果。
  // 成功仅建立内部 ARMED_LOW；输出 Pad 仍需 BSP 切到 eFTU 后再调用 ConfirmArmedLow 确认。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  if (FALSE == bHardwareConfigValid) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 通知或 eFTU/LU/DTM/TRGSEL 配置链不满足约束
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_CONFIG;  // 发布对应的硬件配置故障标志
  } else if ((FALSE == bOutputsEnabled) || (FALSE == bStopTimingElapsed)) {
    eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;  // 未在有界等待内看到载波回绕或通道使能
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_TIMEOUT;  // 发布对应的硬件超时故障标志
  } else if (FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 最终运行拓扑或低态 Run 请求交叉校验失败
    s_u32FaultFlags = CDD_PWM_WAVE_FAULT_HW_CONFIG;
  } else {
    // 清除 pending/active 有效标志、请求状态及对应序列上下文，避免误认旧帧仍然有效。
    // Pad 低态尚未经 PinMux 后确认，因此保持 output-pads-confirmed 为 FALSE 并阻止 Start。
    s_bPendingFrameValid = FALSE;
    s_bPendingUsesRunSignalLevels = FALSE;
    s_bActiveFrameValid = FALSE;
    s_bStartPending = FALSE;
    s_bClearPending = FALSE;
    s_bOutputPadsConfirmed = FALSE;  // 等待 BSP 切换 Pad 后由 ConfirmArmedLow 置位
    s_bFaultLatched = FALSE;
    s_u32PendingSequence = 0U;
    s_u32ActiveSequence = 0U;
    s_u32FaultFlags = 0U;
    s_u8PendingMainCycles = 0U;
    s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;  // 对外发布已配置但仍受低态门控的状态
    s_bInitialized = TRUE;  // 最后置位，表示 CDD 初始化事务完整成功
  }

  // 任一失败都先强制硬件进入安全组合、撤销载波触发，并在已有快照时恢复 PWM5 基线。
  // 安全化或回滚后的拓扑复核失败只追加 HW_CONFIG fault flag，不覆盖原始返回原因。
  if (CDD_PWM_WAVE_OK != eResult) {
    if (FALSE == Cdd_PwmWave_ForceSafeHardware()) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;  // 记录安全关断本身未通过内部校验
    }
    Cdd_PwmWave_SelectCarrierBoundaryTrigger(FALSE);  // 失败状态不保留 CH0 边界触发选择
    if (TRUE == bPwm5BaselineCaptured) {
      Cdd_PwmWave_RestorePwm5Baseline(&tPwm5Baseline);  // 恢复进入 CDD 前的 PWM5/CH3 寄存器集
      if (FALSE == Cdd_PwmWave_IsTomTopologyValid(FALSE)) {
        s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;  // 标记 PWM5 基线恢复后的 TOM 拓扑仍不一致
      }
    }
    s_bInitialized = FALSE;
    s_bClearPending = FALSE;
    s_bOutputPadsConfirmed = FALSE;
    s_bFaultLatched = FALSE;  // 初始化失败保留 fault flags，但不进入 FAULT_LATCHED
    s_eState = CDD_PWM_WAVE_STATE_GPIO_LOW;  // 回到软件低态；首次启动路径尚未由 BSP 切换输出 PinMux
  }

  // 无论成功失败都释放初始化门禁；返回前仍在同一 SchM 临界区内完成状态发布。
  s_bInitInProgress = FALSE;  // 结束本次初始化事务的重入保护
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  return eResult;  // 返回最终优先级分类得到的初始化结果
}
```

`Cdd_PwmWave_ValidateFrame()` 是 PWM 波形帧的纯软件校验入口，用于在帧提交或载波测试活动帧确认之前，检查输入对象是否满足当前 CDD 的结构约束：载波周期必须位于允许范围内，PWM1～PWM4 的四组比较窗口必须有序且具备最小宽度，PWM5 状态必须属于当前实现支持的枚举值。

`pFrame` 是只读输入参数。函数不会修改其内容，也没有输出参数；但当前实现会直接多次读取该对象，不会自行创建快照或加锁，因此调用者应保证校验期间对象内容保持稳定。该函数不检查 Core0 所有权、初始化状态或驱动状态，也不访问硬件、修改模块状态或锁存故障。`Cdd_PwmWave_SubmitFrame()` 通过先复制调用者帧再校验本地快照，避免后续提交流程继续依赖原始输入对象。

校验按“指针 → 周期 → 四组窗口（比较关系后最小宽度）→ PWM5 状态”的顺序执行，并在遇到第一个错误时立即返回。因此返回值也反映该固定检查顺序：例如，较低索引窗口的死区错误会先于较高索引窗口的比较值错误返回。函数不检查四组窗口之间的相互关系或占空比对称性；`CmpA` 可以为 `0U`，只要满足 `CmpA < CmpB < Period` 且窗口宽度不小于 `23U ticks`。

返回 `CDD_PWM_WAVE_OK` 只表示帧满足当前 `.c/.h` 定义的软件约束，不表示帧已经提交或装载到 TOM，也不能证明外部引脚的实际周期、比较边沿或死区时间符合预期。`500U～1154U ticks`、四组窗口、`23U ticks` 下限以及三种 PWM5 状态均是当前项目约束；`TEST_TOGGLE` 的 CH3 计时值由后续源码推导为 `CM0 = 2 × Period`、`CM1 = Period`，其 TOM 字段容量由当前编译期断言另行保证。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1898 页说明 TOM 在 SOMP 向上计数模式下从 `0` 计数到 `CM0 - 1`，并用图示说明 `CM0/CM1` 对周期和输出边沿的作用；第 2033～2035 页给出 `CM0/CM1` 的 24 位比较字段；第 1908、2053～2054 页说明 DTM 可分别配置上升沿和下降沿死区，并由 `DT_RISE/DT_FALL` 保存相应值。PWM User Manual 原 PDF 第 51 页列出 FTU 周期和 dead-time 配置项及其通用范围，但没有规定本函数的应用级校验范围。当前 `Pwm.xdm` 与生成的 `Pwm_PBcfg.c` 进一步确认 PWM1～PWM4 四个 DTM 通道的上升沿、下降沿死区均配置为 `23U`；上述 `500U～1154U`、窗口顺序和 PWM5 枚举限制仍属于当前 CDD 源码策略，不是芯片手册规定的唯一合法帧格式。在当前 Errata V0.5 已检索范围内，与 eFTU 相关的命中项属于 DMAMUX 共享请求通道限制，未发现直接适用于本纯软件帧校验函数的条目。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | 输入指针有效，周期、四组比较窗口、最小窗口宽度和 PWM5 状态均满足当前软件约束 |
| `CDD_PWM_WAVE_E_PARAM_POINTER` | `pFrame == NULL_PTR`，函数未访问任何帧成员 |
| `CDD_PWM_WAVE_E_PERIOD` | `u32PeriodTicks` 不在闭区间 `[500U, 1154U]` 内 |
| `CDD_PWM_WAVE_E_CMP` | 当前检查窗口的 `CmpA` 或 `CmpB` 不小于周期，或者 `CmpA >= CmpB` |
| `CDD_PWM_WAVE_E_DEAD_TIME` | 当前窗口的 `CmpB - CmpA` 小于 `23U ticks` |
| `CDD_PWM_WAVE_E_PWM5` | PWM5 状态不是 `LOW`、`HIGH` 或 `TEST_TOGGLE` |

当前源码中的直接调用者如下：

1. `Bsp_PwmWave_IsCarrierTestFrame()` 在载波频率测试中确认活动帧时，除核对目标周期和 `TEST_TOGGLE` 状态外，再调用本函数确认整帧仍满足软件约束。
2. `Bsp_PwmWave_ValidateFrame()` 作为 BSP 对外包装接口，直接转发输入帧和本函数返回值，不增加初始化、核所有权或状态检查。
3. `Cdd_PwmWave_SubmitFrame()` 先复制调用者输入帧，再校验该本地快照；校验成功后才继续检查 Core0、初始化状态并提交。
4. `Cdd_PwmWave_SubmitPeriodChange()` 在已持有 SchM 锁时从活动帧构造并按需缩放候选帧，写入新周期后调用本函数；只有候选帧有效才继续调用锁内提交 helper。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_ValidateFrame(const Cdd_PwmWave_FrameType *pFrame)
{
  uint8 u8Index;  // 遍历 PWM1～PWM4 四组比较窗口的索引，在 for 初始化语句中赋初值

  // 输入指针是后续所有字段检查的前提；空指针在任何成员访问前立即拒绝。
  // 本函数不读取驱动全局状态，因此该软件校验可独立于初始化和 Core0 所有权执行。
  if (NULL_PTR == pFrame) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  // 先固定载波周期边界，后续比较窗口才能以同一有效周期作为上限。
  // 宏定义形成闭区间，低于最小值或高于最大值均直接返回周期错误。
  if ((pFrame->u32PeriodTicks < CDD_PWM_WAVE_MIN_PERIOD_TICKS) || (pFrame->u32PeriodTicks > CDD_PWM_WAVE_MAX_PERIOD_TICKS)) {
    return CDD_PWM_WAVE_E_PERIOD;
  }

  // 按 PWM1～PWM4 的数组顺序逐个校验；函数返回遇到的第一类无效窗口。
  // 错误优先级由窗口索引和“比较关系先于最小宽度”的检查顺序共同确定。
  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
    // 每个 CmpA/CmpB 都必须严格小于周期，且 CmpA 必须严格小于 CmpB。
    // 任一关系失配都无法形成有序比较窗口，统一归类为 E_CMP。
    if ((pFrame->aWindow[u8Index].u32CmpA >= pFrame->u32PeriodTicks) || (pFrame->aWindow[u8Index].u32CmpB >= pFrame->u32PeriodTicks) ||
        (pFrame->aWindow[u8Index].u32CmpA >= pFrame->aWindow[u8Index].u32CmpB)) {
      return CDD_PWM_WAVE_E_CMP;
    }
    // 仅在 CmpA < CmpB 成立后执行无符号减法，避免反向比较值造成下溢。
    // 窗口宽度还必须达到项目配置的 23 ticks 下限，否则归类为 E_DEAD_TIME。
    if ((pFrame->aWindow[u8Index].u32CmpB - pFrame->aWindow[u8Index].u32CmpA) < CDD_PWM_WAVE_DEAD_TIME_TICKS) {
      return CDD_PWM_WAVE_E_DEAD_TIME;
    }
  }

  // 四个比较窗口全部通过后，再限制 PWM5 为当前实现支持的三种状态。
  // 非法枚举值不会进入后续 CH3 计时值推导，而是以 E_PWM5 拒绝。
  if ((CDD_PWM_WAVE_PWM5_LOW != pFrame->ePwm5State) && (CDD_PWM_WAVE_PWM5_HIGH != pFrame->ePwm5State) &&
      (CDD_PWM_WAVE_PWM5_TEST_TOGGLE != pFrame->ePwm5State)) {
    return CDD_PWM_WAVE_E_PWM5;
  }

  /* TEST_TOGGLE derives CH3 CM0/CM1 as 2*Period/Period; the period-range
   * check and compile-time TOM-range assertion cover all supported frames. */

  return CDD_PWM_WAVE_OK;  // 所有软件结构约束均满足；本函数未验证硬件是否已经应用该帧
}
```

`Cdd_PwmWave_SubmitFrameLocked()` 是 PWM 波形 CDD 的核心“帧提交事务”：在已持有 SchM 锁的条件下，检查驱动状态，把载波、PWM5、PWM1～PWM4 的完整参数统一写入 TOM 影子寄存器，登记 pending 帧和序列号，并根据载波周期是否变化选择合适的 UPEN 装载时机。

主要返回结果如下：

| 返回值                         | 含义                                                   |
| ------------------------------ | ------------------------------------------------------ |
| `CDD_PWM_WAVE_OK`              | shadow 已写完，pending 已登记，装载已 arm 或通知已安排 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE`  | 故障已锁存                                             |
| `CDD_PWM_WAVE_E_BUSY`          | Start pending 或已有 pending 帧                        |
| `CDD_PWM_WAVE_E_STATE`         | 当前不是 `ARMED_LOW/RUN`                               |
| `CDD_PWM_WAVE_E_HW_CONFIG`     | 运行状态或同步拓扑不一致                               |
| `CDD_PWM_WAVE_E_NOT_SUPPORTED` | RUN期间试图改变 PWM5状态                               |

当前已有如下调用场景：
1. `Cdd_PwmWave_SubmitFrame()` 先复制输入帧、校验参数、检查 Core0和初始化状态，再进入 SchM 临界区调用本函数。
2. `Cdd_PwmWave_SubmitPeriodChange()` 在锁内从当前活动帧构造候选帧，必要时等比例缩放比较值，校验后调用本函数。

```c
static Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrameLocked(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
{
 Cdd_PwmWave_ResultType eResult;
 Cdd_PwmWave_SequenceType u32Sequence;
 uint32 u32OldCarrierPeriod;
 uint32 u32Pwm5Cm0;
 uint32 u32Pwm5Cm1;
 uint8 u8Index;
 boolean bCommonBoundaryArmRequired;
 Cdd_PwmWave_RefreshPending();  // 刷新上一帧的装载状态, 检查之前的 pending 帧是否已经从 shadow 装载到活动寄存器
 
 // 检查当前是否允许提交
 if (TRUE == s_bFaultLatched) {  // 已锁存故障, 故障未清除时禁止提交新帧
  eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;
 } else if (TRUE == s_bStartPending) {  // 正在处理启动请求, 启动过程尚未结束时不允许插入帧更新，避免 Start 和帧装载交叉
  eResult = CDD_PWM_WAVE_E_BUSY;
 } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (CDD_PWM_WAVE_STATE_RUN != s_eState)) {  // 只允许在 ARMED_LOW(输出被安全门压低，准备装载帧)或 RUN(正在输出，可更新活动波形)这两种状态提交
  eResult = CDD_PWM_WAVE_E_STATE;
 } else if (TRUE == s_bPendingFrameValid) {  // 已有一帧 pending 数据等待装载, 当前只维护一个 pending 槽位，不支持多帧排队
  eResult = CDD_PWM_WAVE_E_BUSY;
 } else if ((CDD_PWM_WAVE_STATE_RUN == s_eState) && (FALSE == s_bActiveFrameValid)) {  // RUN状态下活动帧却无效, 软件状态或硬件拓扑出现异常, 因此进入故障锁存
  (void)Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
  eResult = CDD_PWM_WAVE_E_HW_CONFIG;
 } else if ((CDD_PWM_WAVE_STATE_RUN == s_eState) && (pFrame->ePwm5State != s_tActiveFrame.ePwm5State)) {  // RUN状态下禁止改变 PWM5 工作模式, PWM5使用独立的 TOM0 CH3计数器, 运行中切换, 可能在任意 CH3相位生效，产生不确定边沿
  /* CH3 counter is independent of CH0. A state change could take effect at
   * an arbitrary CH3 phase, so allow it only while DTM holds every output low. */
  eResult = CDD_PWM_WAVE_E_NOT_SUPPORTED;
 } else if (FALSE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) {  // 载波边界触发配置失效, 没有正确选择 CH0 载波边界作为内部同步触发源时，不允许继续装载
  eResult = CDD_PWM_WAVE_E_HW_CONFIG;
 } else {
  /* ARMED_LOW keeps the TOM counters enabled; DTM alone clamps the pads.
   * Therefore a stopped period change uses the same bounded common-zero
   * arm as RUN and preserves phase for the later Start. */
  // 判断载波周期是否发生变化
  u32OldCarrierPeriod = EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_CM0;
  bCommonBoundaryArmRequired = (u32OldCarrierPeriod != pFrame->u32PeriodTicks) ? TRUE : FALSE;
  // 停止旧通知并关闭 shadow 装载
  Cdd_PwmWave_DisableArmNotificationLocked();
  Cdd_PwmWave_DisableFrameUpdate();  // 将 CH0、CH3～CH7 的 UPEN_CTRL 设置为禁止更新，避免写影子寄存器的过程中发生装载，导致部分通道使用新参数、部分通道仍使用旧参数
  // 写入 CH0载波 shadow
  EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR0 = pFrame->u32PeriodTicks;
  EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_CARRIER_CHANNEL].CH_SR1 = pFrame->u32PeriodTicks >> 1U;
  // 计算并写入 PWM5/CH3 shadow
  Cdd_PwmWave_GetPwm5TimerValues(pFrame, &u32Pwm5Cm0, &u32Pwm5Cm1);
  EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_PWM5_CHANNEL].CH_SR0 = u32Pwm5Cm0;  // CH3 SR0 = 2 × P
  EFTU_TOM_1_0->Channel[CDD_PWM_WAVE_PWM5_CHANNEL].CH_SR1 = u32Pwm5Cm1;  // SR1 根据 PWM5状态决定, 一个载波周期低, 一个载波周期高
  //写入 PWM1～PWM4比较窗口
  for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
   EFTU_TOM_1_0->Channel[u8Index + 4U].CH_SR0 = pFrame->aWindow[u8Index].u32CmpA;
   EFTU_TOM_1_0->Channel[u8Index + 4U].CH_SR1 = pFrame->aWindow[u8Index].u32CmpB;
  }
  /* DTM holds the physical outputs low while stopped; TOM always stages the run waveform. */
  // 写入输出极性的 shadow
  s_bPendingUsesRunSignalLevels = TRUE;
  Cdd_PwmWave_SetShadowSignalLevels(pFrame, TRUE);  // 写入 CH0、CH3～CH7 的 CH_CTRL_SR[SL_SR], 初始输出电平/极性的影子配置
  // 写完硬件影子寄存器后, 生成序列号并登记 pending 帧
  u32Sequence = Cdd_PwmWave_NextSequence();  // 序列号用于上层确认, 只有完全匹配, 才能确认本次提交的帧真正生效
  s_tPendingFrame = *pFrame;
  s_u32PendingSequence = u32Sequence;
  s_bPendingFrameValid = TRUE;
  s_u8PendingMainCycles = 0U;
  // 根据周期是否变化选择装载方式
  if (TRUE == bCommonBoundaryArmRequired) {  // 载波周期发生变化
  /* Enable a one-shot CH0 CCU0 notification. The callback arms in CH3's
​  * old second carrier cycle; the following zero then loads P/2P and all
​  * CMP shadows together. */
   eResult = Cdd_PwmWave_ScheduleFrameAtCommonBoundaryLocked(u32OldCarrierPeriod, u32Sequence);  /* 启用一次 CH0 carrier notification，由后续回调在 CH0 与 CH3 合适的共同边界设置 UPEN */
  } else {  // 载波周期没有变化
   /* With no carrier-period change, each channel can load at its normal
​   * zero without disturbing the existing CH0/CH3 phase relation. */
   Cdd_PwmWave_ArmFrameUpdate();  // 设置 UPEN，允许影子寄存器在后续硬件更新边界装载到活动寄存器
   eResult = CDD_PWM_WAVE_OK;
  }
  // 调度或 arm 成功时才返回序列号, 如果调用失败：不更新 pSequence, 调用者不能使用其中原来的值判断本次请求, 应以返回值为准
  if ((CDD_PWM_WAVE_OK == eResult) && (NULL_PTR != pSequence)) {
   *pSequence = u32Sequence;
  }
 }
 return eResult;
}
```

`Cdd_PwmWave_SubmitFrame()` 是完整 PWM 波形帧的公共提交入口。函数先拒绝空指针并在锁外复制调用者帧，随后校验本地快照；只有帧结构有效、调用者位于 Core0 且 CDD 已初始化时，才进入 `PWM_EXCLUSIVE_AREA_19`，由 `Cdd_PwmWave_SubmitFrameLocked()` 基于最新共享状态完成提交门禁、TOM shadow 写入、pending 帧登记和装载调度。复制快照使“已经校验的内容”和“随后提交的内容”保持一致，但调用者仍须保证 `pFrame` 在本次结构体复制期间可读且不被并发改写；复制完成后，本函数不再访问原始帧对象。

`pFrame` 是必填只读输入参数，函数不会修改其内容。`pSequence` 是可选输出参数，可以传入 `NULL_PTR`；仅当函数返回 `CDD_PWM_WAVE_OK` 时，非空 `pSequence` 才在 SchM 锁内写入本次提交的新序列号，任何失败返回都保持其原值不变。该序列号用于调用者后续把 pending/active 状态与本次请求对应起来，不是“帧已经生效”的凭据。

检查顺序固定为“空指针 → 复制并校验快照 → Core0 → 初始化状态 → 锁内提交”，因此同一次调用同时存在帧结构错误和执行上下文错误时，会优先返回帧结构错误。锁内 helper 先刷新上一帧的 pending 状态，再检查 fault、Start pending、状态机、pending 槽位和同步拓扑；在 `RUN` 状态下还禁止改变 PWM5 模式。大部分前置拒绝不会写入新帧，但部分 `CDD_PWM_WAVE_E_HW_CONFIG` 路径可能在 shadow/pending 已登记后因共同边界调度复核失败而调用 `Cdd_PwmWave_EnterFault()`，执行安全关断并撤销 pending。因此失败返回不能一概理解为“模块内部完全没有副作用”。

返回 `CDD_PWM_WAVE_OK` 只表示 shadow 和 pending 已登记，并且同周期装载已 arm，或者变周期所需的一次性载波通知已成功安排；新帧仍需在后续硬件更新边界装入活动寄存器。变周期路径的后续回调也可能异步进入 fault，所以本次成功返回不能证明帧已经成为 active，更不能替代外部引脚频率、比较边沿或死区时间的板级测量。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1892～1893 页说明 TOM TGC 负责八个通道工作寄存器的同步更新，并由 `UPEN_CTRL` 控制 `SR0/SR1/CTRL_SR` 是否更新到 `CM0/CM1/CTRL`；第 1995～1997 页给出各 TOM 通道 `UPEN_CTRL` 的禁用/使能编码；第 2034～2035 页给出 24 位 `SR0/SR1` shadow 字段。PWM User Manual 原 PDF 第 23、41、60 页分别说明 `Pwm_EnableNotification()`、通知启停序列以及 `PwmNotificationSupported` 配置开关；PWM Integration Manual 原 PDF 第 9 页说明 PWM 使用 SchM 临界区，并将标准 `Pwm_EnableNotification()` 对应到 exclusive area 19。当前 `Pwm.xdm` 和生成的 `Pwm_Cfg.h`、`Pwm_PBcfg.c` 进一步确认通知支持已启用，`PWM_CARRIER` 映射到 eFTU1 TOM0 CH0，并配置 `Cdd_PwmWave_CarrierBoundaryNotification()`。CDD 复用 area 19 保护整项提交事务、具体状态机门禁、pending/sequence 规则和共同边界调度算法仍是当前项目源码约定，不是上述手册规定的通用提交 API。在当前 Errata V0.5 已检索范围内，eFTU 命中项属于 DMAMUX 共享请求通道限制，未发现直接适用于本函数帧提交路径的条目。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | 帧已被接受，shadow 和 pending 已登记，装载已 arm 或共同边界通知已成功安排；非空 `pSequence` 已写入新序列号 |
| `CDD_PWM_WAVE_E_PARAM_POINTER` | `pFrame == NULL_PTR`，函数在复制输入帧前返回 |
| `CDD_PWM_WAVE_E_PERIOD` | 快照中的周期不在当前允许范围内 |
| `CDD_PWM_WAVE_E_CMP` | 某组比较值不小于周期，或者不满足 `CmpA < CmpB` |
| `CDD_PWM_WAVE_E_DEAD_TIME` | 某组比较窗口宽度小于当前项目要求的最小值 |
| `CDD_PWM_WAVE_E_PWM5` | PWM5 状态不是当前实现支持的 `LOW`、`HIGH` 或 `TEST_TOGGLE` |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 帧校验通过，但调用者不是 Core0 |
| `CDD_PWM_WAVE_E_UNINIT` | 帧校验和 Core0 检查通过，但 CDD 尚未成功初始化 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 锁内刷新或调度复核时发现 fault 已锁存 |
| `CDD_PWM_WAVE_E_BUSY` | Start 正在处理，或者刷新后仍有 pending 帧等待装载 |
| `CDD_PWM_WAVE_E_STATE` | 当前状态既不是 `ARMED_LOW`，也不是 `RUN` |
| `CDD_PWM_WAVE_E_HW_CONFIG` | `RUN` 状态缺少有效活动帧、载波边界触发选择失配，或者共同边界调度所需拓扑/通知配置复核失败；部分路径会同时锁存硬件配置 fault |
| `CDD_PWM_WAVE_E_NOT_SUPPORTED` | `RUN` 状态下请求改变 PWM5 模式；当前实现不允许独立 CH3 计数器在任意相位切换该模式 |

当前源码中的直接调用者如下：

1. `Bsp_PwmWave_RequestStart()` 在 BSP 已确认 Core0、没有 BSP pending 作业且 CDD 处于无 fault、无 pending、无 Start pending 的 `ARMED_LOW` 状态后调用本函数；成功时将返回序列登记为 `BSP_PWM_WAVE_JOB_START_WITH_FRAME` 异步作业，等待该帧生效后再启动输出。
2. `Bsp_PwmWave_RequestUpdate()` 在 BSP 已确认 Core0 且没有 BSP pending 作业后调用本函数；成功时将返回序列登记为 `BSP_PWM_WAVE_JOB_FRAME_UPDATE` 异步作业，用于后续确认新帧成为活动帧。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitFrame(const Cdd_PwmWave_FrameType *pFrame, Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_FrameType tFrameSnapshot;  // 固化本次调用的完整帧，供校验和锁内提交共同使用
  Cdd_PwmWave_ResultType eResult;  // 保存参数校验或锁内提交返回的最终结果

  // 在复制输入结构体前拒绝空指针，避免访问无效帧对象。
  if (NULL_PTR == pFrame) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;  // 未进入临界区，也未访问任何 CDD 状态或硬件
  }
  // 先生成一次性快照，保证校验通过的内容就是随后提交的内容。
  tFrameSnapshot = *pFrame;  // 此后不再读取调用者的原始帧对象
  eResult = Cdd_PwmWave_ValidateFrame(&tFrameSnapshot);  // 校验周期、四组比较窗口、最小宽度和 PWM5 状态
  if (CDD_PWM_WAVE_OK != eResult) {
    return eResult;  // 透传首个结构错误，不进入共享状态和硬件提交阶段
  }
  // 参数通过后再检查执行上下文；错误优先级因此低于帧结构错误。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 错误核不能进入本模块独占资源的临界区
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;  // 未初始化时不允许访问运行状态或提交硬件更新
  }

  // 在同一临界区内完成最新状态复核、shadow 写入、pending 登记和装载调度。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  eResult = Cdd_PwmWave_SubmitFrameLocked(&tFrameSnapshot, pSequence);  // 锁内门禁通过后才发布并安排该快照
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;  // OK 仅表示请求已接受且非空 pSequence 已写入；失败时输出保持原值
}
```

`Cdd_PwmWave_SubmitPeriodChange()` 是基于当前活动帧提交载波周期变更的公共入口。函数不接收一整帧，而是在同一 SchM 临界区内先刷新上一项 pending，再检查 fault、Start、状态机、pending 槽位和活动帧有效性；门禁通过后复制当前活动帧，只改写周期以及必要的 PWM1～PWM4 比较值，重新校验候选帧，最后复用 `Cdd_PwmWave_SubmitFrameLocked()` 写入 TOM shadow、登记新的 pending 帧和序列号，并安排后续装载。调用前必须位于 Core0、CDD 已初始化且已有有效活动帧；函数允许在 `ARMED_LOW` 和 `RUN` 状态使用，但不支持多项 pending 排队。

`u32NewPeriodTicks` 是必填输入参数，当前允许范围为 `500U～1154U` ticks。`pSequence` 是可选输出参数，可以传入 `NULL_PTR`；仅当函数返回 `CDD_PWM_WAVE_OK` 时，非空 `pSequence` 才在锁内写入本次提交的新序列号，任何失败返回都保持调用者原值不变。该序列号只标识已经接受的 pending 请求，不能证明新周期已经装入活动寄存器。函数开头的 `Cdd_PwmWave_RefreshPending()` 可能先把上一项已经硬件生效的 pending 晋升为活动帧，因此后续门禁或候选校验失败只表示“本次没有成功提交新候选帧”，不能表述为模块状态完全没有变化。

比较值缩放采用条件触发策略：先扫描四组窗口，只要任一 `CmpA` 或 `CmpB` 触及或超过新周期，就把四组窗口全部按 `floor(oldCmp × newPeriod / oldPeriod)` 等比例缩放；乘法先扩展为 `uint64`，避免 32 位中间结果溢出，整数除法向下截断且不做饱和或补偿。若所有比较值仍小于新周期，则保留原绝对 tick 位置，因此增大周期通常不会维持原占空比或相位比例；传入与当前周期相同的值也不是 no-op，仍会生成新的 pending 帧和序列号。缩放后的边沿顺序和周期边界由已有有效活动帧不变量保证，但窗口宽度可能因向下截断小于 `23U` ticks，此时重新校验返回 `CDD_PWM_WAVE_E_DEAD_TIME`，不会提交本次候选。`u32OldPeriod` 没有单独的除零保护，依赖活动帧只由校验成功的 pending 帧晋升这一模块不变量。

PWM5 状态始终从活动帧原样保留；`Cdd_PwmWave_SubmitFrameLocked()` 会按该状态和新周期重新派生 PWM5 的 `CM0/CM1` 定时值，其中 `TEST_TOGGLE` 为 `2P/P`。返回 `CDD_PWM_WAVE_OK` 只表示 shadow/pending 已登记，并且同周期更新已 arm，或者变周期所需的一次性 CH0 载波通知已成功安排；实际生效仍发生在后续更新边界。若载波触发选择在写 shadow 前已失配，函数直接返回 `CDD_PWM_WAVE_E_HW_CONFIG`；若共同边界调度在 shadow/pending 登记后复核失败，helper 会进入 fault、安全关断并撤销 pending，且不会写出 `pSequence`。因此成功返回和静态寄存器读回都不能替代外部 PWM 频率、比较边沿及死区的板级波形测量。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1892～1893 页说明 TOM TGC 通过 `UPEN_CTRL` 控制 `SR0/SR1/CTRL_SR` 向工作寄存器同步更新；第 1896～1898 页说明 SOMP 的 shadow 更新可在计数器复位、即 PWM 周期结束边界同步发生；第 1995～1998 页给出各 TOM 通道 `UPEN_CTRL` 编码，第 2034～2035 页给出 24 位 `SR0/SR1` shadow 字段。PWM User Manual 原 PDF 第 23、41、60 页分别给出 `Pwm_EnableNotification()`、通知启停序列和“周期参数在当前周期结束时更新”的配置项；PWM Integration Manual 原 PDF 第 9 页说明标准 PWM 驱动使用 SchM 临界区，并把标准 `Pwm_EnableNotification()` 对应到 exclusive area 19。当前 `Pwm.xdm` 和生成的 `Pwm_Cfg.h`、`Pwm_PBcfg.c` 进一步确认 `PwmNotificationSupported`、`PwmPeriodUpdatedEndperiod` 已启用，`PWM_CARRIER` 为 Core0 的 eFTU1 TOM0 CH0，并绑定 `Cdd_PwmWave_CarrierBoundaryNotification()`。本函数绕过标准周期更新 API、直接派生活动帧并操作 shadow；条件缩放、单 pending 槽位、序列号和 CH0/CH3 共同边界算法均是当前项目源码约定，不是手册规定的通用 API 行为。在当前 Errata V0.5 已检索范围内，命中的 eFTU 条目属于 DMAMUX 共享请求通道限制，未发现直接适用于本函数周期提交路径的条目。

当前正常状态不变量下，函数实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | 周期候选已通过校验，shadow 和 pending 已登记，装载已 arm 或共同边界通知已成功安排；非空 `pSequence` 已写入新序列号 |
| `CDD_PWM_WAVE_E_PERIOD` | `u32NewPeriodTicks` 小于 `500U` 或大于 `1154U`；函数在访问共享状态前返回 |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0；函数未进入 SchM 临界区 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 刷新后已有 fault 锁存，或锁内 helper 在提交复核时观察到 fault |
| `CDD_PWM_WAVE_E_BUSY` | Start 正在处理，或刷新后仍有 pending 帧占用唯一槽位 |
| `CDD_PWM_WAVE_E_STATE` | 当前状态既不是 `ARMED_LOW`，也不是 `RUN` |
| `CDD_PWM_WAVE_E_NO_FRAME` | 刷新后仍没有可供派生周期候选的有效活动帧 |
| `CDD_PWM_WAVE_E_DEAD_TIME` | 等比例缩放和整数截断使至少一组比较窗口宽度小于 `23U` ticks；候选未提交 |
| `CDD_PWM_WAVE_E_HW_CONFIG` | 载波边界触发选择失配，或共同边界调度所需的 pending、通知、CH0/CH3 活动周期和 PWM5 独立计数拓扑复核失败；后者会同时锁存硬件配置 fault |

当前源码中只有一个直接调用者：

1. `Bsp_PwmWave_RequestPeriodChange()` 在确认调用者位于 Core0 且 BSP 没有 pending 作业后调用本函数。成功时把返回序列复制给可选上层输出，并登记 `BSP_PWM_WAVE_JOB_PERIOD_CHANGE` 的 pending 作业；失败时登记同类 failed 作业及 CDD 返回结果，不向上层写出新序列号。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_SubmitPeriodChange(uint32 u32NewPeriodTicks, Cdd_PwmWave_SequenceType *pSequence)
{
  Cdd_PwmWave_FrameType tCandidate;  // 保存由当前活动帧派生的周期变更候选帧
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;  // 汇总参数、状态、候选校验和锁内提交结果
  boolean bScaleAll = FALSE;  // 标记是否需要按新旧周期比例统一缩放全部比较值
  uint32 u32OldPeriod;  // 保存活动帧原周期，作为比较值等比例换算的分母
  uint8 u8Index;  // 遍历 PWM1～PWM4 四组比较窗口的索引

  // 新周期是本接口唯一的值参数，必须先满足当前 CDD 的载波周期边界。
  if ((u32NewPeriodTicks < CDD_PWM_WAVE_MIN_PERIOD_TICKS) || (u32NewPeriodTicks > CDD_PWM_WAVE_MAX_PERIOD_TICKS)) {
    return CDD_PWM_WAVE_E_PERIOD;  // 无效周期在访问模块状态和硬件前直接拒绝
  }
  // 后续会读取共享活动帧并操作 eFTU 资源，因此只允许已初始化的 Core0 执行。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 错误核不能进入本模块独占资源的临界区
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;  // 未初始化时不存在可安全派生和提交的活动帧
  }

  // 从读取活动帧到构造、校验并提交候选帧必须处于同一事务，避免其间状态被其他路径替换。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();  // 锁住 CDD 状态、pending 信息和本模块拥有的更新路径
  Cdd_PwmWave_RefreshPending();  // 先把已经硬件生效的上一帧提升为最新活动帧
  // 刷新后按 fault、Start、允许状态、pending 槽位和活动帧有效性依次执行门禁。
  // 任一门禁失败都不构造或提交新候选帧；RefreshPending 已完成的旧 pending 晋升仍然保留。
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 故障锁存期间禁止发起新的周期变更
  } else if (TRUE == s_bStartPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;  // 避免周期更新与尚未结束的启动事务交叉
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) && (CDD_PWM_WAVE_STATE_RUN != s_eState)) {
    eResult = CDD_PWM_WAVE_E_STATE;  // 周期只允许在安全压低态或运行态更新
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;  // 单 pending 槽位尚被上一帧占用，不能继续排队
  } else if (FALSE == s_bActiveFrameValid) {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;  // 没有活动帧时缺少保留其余波形参数的派生基准
  } else {
    // 门禁全部通过后以锁内活动帧为模板，只调整周期及必要的比较值。
    tCandidate = s_tActiveFrame;  // 保留当前四组窗口和 PWM5 模式作为候选初值
    u32OldPeriod = tCandidate.u32PeriodTicks;  // 固定换算基准，避免候选周期改写后丢失原比例
    // 仅当任一比较值会触及或越过新周期时才启用全量缩放，否则保持原绝对 tick 位置。
    for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
      if ((tCandidate.aWindow[u8Index].u32CmpA >= u32NewPeriodTicks) || (tCandidate.aWindow[u8Index].u32CmpB >= u32NewPeriodTicks)) {
        bScaleAll = TRUE;
        break;
      }
    }

    // 一旦发现越界风险，四路窗口必须整体缩放，避免只修改部分通道而破坏原有相对关系。
    // 先扩展为 uint64 完成乘法以避免中间结果溢出；整数除法按 tick 向下截断。
    if (TRUE == bScaleAll) {
      for (u8Index = 0U; u8Index < CDD_PWM_WAVE_WINDOW_COUNT; u8Index++) {
        tCandidate.aWindow[u8Index].u32CmpA = (uint32)(((uint64)tCandidate.aWindow[u8Index].u32CmpA * u32NewPeriodTicks) / u32OldPeriod);  // 按新旧周期比例重定位窗口起点
        tCandidate.aWindow[u8Index].u32CmpB = (uint32)(((uint64)tCandidate.aWindow[u8Index].u32CmpB * u32NewPeriodTicks) / u32OldPeriod);  // 终点采用相同比例，维持窗口在周期中的相对位置
      }
    }
    /* Preserve PWM5 state; its 2*P/P timer values move with CH0 at the next
     * common CH0/CH3 zero. */
    tCandidate.u32PeriodTicks = u32NewPeriodTicks;  // 最后发布候选周期，使后续校验以新周期复核比较值

    eResult = Cdd_PwmWave_ValidateFrame(&tCandidate);  // 捕获缩放截断后可能出现的比较关系或最小宽度错误
    if (CDD_PWM_WAVE_OK == eResult) {
      /* Keep the active-frame snapshot, scaling and arm in one transaction. */
      eResult = Cdd_PwmWave_SubmitFrameLocked(&tCandidate, pSequence);  // 校验通过后才写 shadow、登记 pending 并安排装载
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 候选构造和锁内提交全部结束后才释放共享事务边界

  return eResult;
}
```

`Cdd_PwmWave_ConfirmArmedLow()` 是九路 PWM 输出切换到 eFTU 复用后的启动前低态确认入口，用于复核运行拓扑和 GPIO 输入读回，并在全部条件成立时发布 `s_bOutputPadsConfirmed` 启动许可。函数本身不调用 `Port_SetPinMode()`、不主动把 Pad 拉低、不提交波形帧，也不切换 Run 请求；调用者必须先完成 CDD 初始化及 PinMux 切换。初次初始化场景尚无活动帧，因此本函数不要求 `s_bActiveFrameValid`，只确认硬件仍处于可接受新帧和后续 Start 的 `ARMED_LOW` 基线。

函数没有输入参数或输出参数，返回 `Cdd_PwmWave_ResultType`。它先在锁外拒绝非 Core0 和未初始化调用，再在 `PWM_EXCLUSIVE_AREA_19` 内按“fault → 稳定状态/事务 → 运行拓扑 → 物理低态”顺序复核。成功路径只把 `s_bOutputPadsConfirmed` 置为 `TRUE`，CDD 状态仍是 `ARMED_LOW`，输出仍受低态 Run 请求和 DTM 关断链约束；函数没有轮询或稳定等待，结论是该临界区内一次寄存器和 GPIO 输入快照。后续 `Cdd_PwmWave_Start()` 仍会重新检查确认标志、运行拓扑、物理低态和活动帧，因此该标志不是永久替代硬件复核的证明。

`Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)` 按当前项目约定复核 PWM5 独立 TOM 拓扑、LU0 Stop 同步器、DTM shutoff、载波边界触发、CH3～CH7 通道及输出使能状态，并确认软件 Run 请求仍选择低态。`Cdd_PwmWave_IsPhysicalArmedLowValid()` 则要求 PTC7、PTC25、PTD4、PTD21、PTH22 的 `PCR.MUX` 为 ALT7，PTC23、PTE10、PTE11、PTE13 为 ALT6；同时要求这些 Pad 对应 `PIDR` 位均为 0，即数字输入路径允许，再要求 `PDIR` 位全部为 0。该组合很重要：手册说明未配置为数字功能或输入被禁用时，`PDIR` 也会读 0；源码先验证数字复用和输入允许，才把 `PDIR == 0` 作为当前低态读回依据。

普通门禁失败不会改写 PWM/Port 硬件状态，也不会修改 `s_bOutputPadsConfirmed`。本函数不调用 `Cdd_PwmWave_RefreshPending()`，所以只要 `s_bPendingFrameValid` 仍为 `TRUE` 就返回 `CDD_PWM_WAVE_E_STATE`，即使硬件可能刚完成装载但软件尚未刷新；`Bsp_PwmWave_FixedTestStop()` 在调用前通过 `Cdd_PwmWave_GetStatus()` 完成这项刷新。运行拓扑或物理低态任一失配会调用 `Cdd_PwmWave_EnterFault()`：先钳制 DTM、立即禁用 TOM 通道及输出、把 Run 请求恢复为低、撤销 pending 并恢复安全信号电平，然后清除活动帧信息、锁存硬件配置 fault 并进入 `FAULT_LATCHED`。当前 `EnterFault()` 不清除既有的 `s_bOutputPadsConfirmed`，但 fault/state 门禁以及 Start 的硬件重检仍会阻止仅凭旧标志启动；因此调用者必须以本次返回值和当前状态为准。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1366～1368 页说明 `PORT_PCRn.MUX` 的 ALT0～ALT7 编码；第 1360～1362 页说明 `GPIO_PDIR` 反映数字输入值，非数字功能时读 0，而 `GPIO_PIDR=0` 表示输入允许、`PIDR=1` 会禁止输入并使对应 `PDIR` 读 0。Port User Manual 原 PDF 第 15 页说明 `Port_SetPinMode()` 按 Pin ID 和新 PinMux 模式设置端口复用。当前 `Bsp_Pwm_SetOutputPinModes()`、生成的 `Port_Cfg.h` 和 `Port_Cfg.c` 交叉确认九路 eFTU 功能对应上述 ALT6/ALT7 编码；`Pwm_PBcfg.c` 进一步确认 PWM5、PWM1～PWM4 分别使用 eFTU1 TOM0 CH3～CH7。具体 `ARMED_LOW` 状态机、九路掩码、LU/DTM/TRGSEL 拓扑组合、确认标志及 fault 回退均是当前项目源码事实，不是 Port 手册定义的通用 API 行为。Errata V0.5 原 PDF 第 4～5 页的汇总矩阵未列出 PORT、GPIO、TOM、DTM 或 PWM 类条目；其中 LU 条目涉及连续双沿收发同时启用 DMA 和中断，不直接适用于本函数的 LU Stop 同步器读回路径。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | Core、初始化、状态、事务、运行拓扑、九路 PinMux、输入允许和低态读回均通过；`s_bOutputPadsConfirmed` 已置为 `TRUE`，但波形尚未启动 |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0；函数在进入临界区和访问确认硬件前返回 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化，不存在可确认的 `ARMED_LOW` 硬件基线 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 进入锁内门禁时已有 fault 锁存 |
| `CDD_PWM_WAVE_E_STATE` | 当前状态不是 `ARMED_LOW`，或者仍有 Start/pending 帧事务；本函数不会把这些情况映射为 `CDD_PWM_WAVE_E_BUSY` |
| `CDD_PWM_WAVE_E_HW_CONFIG` | 运行拓扑、九路 PinMux、数字输入允许或 Pad 低态读回任一失败；函数同时执行安全关断并锁存硬件配置 fault |

当前源码中的直接调用者如下：

1. `Bsp_Pwm_Init()` 在 `Pwm_Init()` 和 `Cdd_PwmWave_Init()` 成功后，先调用 `Bsp_Pwm_SetOutputPinModes()` 把九路 Pad 切换为 eFTU，再调用本函数。只有确认成功才使能 eFTU1 TOM0～7 中断；失败时调用 `Cdd_PwmWave_EmergencyShutdown()`，并尝试切回和验证 GPIO 低态。
2. `Bsp_PwmWave_FixedTestStop()` 在 `Cdd_PwmWave_GetStatus()` 确认当前已经处于无 fault、无 Start、无 pending 的 `ARMED_LOW` 后调用本函数，以一次新的物理低态复核实现幂等 Stop。它随后按返回值记录 Stop 作业，只有成功才重置测试状态。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_ConfirmArmedLow(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;  // 保存状态门禁、硬件复核及确认发布的最终结果

  // 本函数会读取 CDD 共享状态和相关硬件寄存器，只允许已完成初始化的 Core0 调用。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 错误核不能访问本模块独占的 eFTU 和 Pad 资源
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;  // 未初始化时没有可确认的 ARMED_LOW 硬件基线
  }

  // 状态门禁、运行拓扑、Pad 低态和确认标志必须在同一临界区内一致复核。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();  // 防止 Start、帧提交或 fault 路径在确认期间改写共享上下文
  // fault 优先；否则必须保持 ARMED_LOW，且不存在 Start 或帧装载事务。
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 已锁存故障时不能发布输出 Pad 已安全确认
  } else if ((CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) || (TRUE == s_bStartPending) || (TRUE == s_bPendingFrameValid)) {
    eResult = CDD_PWM_WAVE_E_STATE;  // 状态或未完成事务不满足稳定低态确认前提
  } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Cdd_PwmWave_IsPhysicalArmedLowValid())) {
    // 第一项复核 TOM、LU、DTM、触发路由、通道使能和低态 Run 请求组成的运行拓扑。
    // 第二项复核九路输出 PinMux 及 Pad 输入读回低态；任一失配均按硬件配置故障处理。
    (void)Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);  // 强制安全关断并锁存硬件配置 fault
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    s_bOutputPadsConfirmed = TRUE;  // 发布低态确认令牌，后续 Start 门禁才允许启动输出
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;  // OK 仅表示本次寄存器拓扑和 Pad 低态读回通过，尚未启动波形输出
}
```

`Cdd_PwmWave_Start()` 是 PWM 波形 CDD 从 `ARMED_LOW` 切换到 `RUN` 的同步启动入口。调用前必须已经在 Core0 完成 CDD 初始化、提交并生效一帧有效波形，并通过 `Cdd_PwmWave_ConfirmArmedLow()` 确认九路输出 Pad 已切换为预期 eFTU 复用且处于低态。函数先在 SchM 临界区刷新 pending 帧并检查故障、状态、未完成事务、活动帧、Pad 确认标志以及当前硬件拓扑；门禁全部通过后设置 `s_bStartPending`，根据活动帧中的 PWM5 模式确定输出活动检查要求，并把软件 Run 请求切换为高。

当前 LU/TRGSEL/DTM 拓扑把该 Run 请求在 CH0 边界传播到 DTM 关断链。函数释放 SchM 锁后执行有界轮询：检查 CH0 载波回绕，并通过 GPIO 输入读回观察 PWM1～PWM4 四组 DTM 输出活动；PWM5 为 `HIGH` 时还要求观察到高态，为 `TEST_TOGGLE` 时要求在稳定阶段之后同时观察到低态和高态。两种观察窗口都会在第二个 CH0 回绕时丢弃稳定阶段的活动记录：普通模式共等待三个回绕，随后验证一个载波周期；`TEST_TOGGLE` 共等待四个回绕，随后验证一个完整的双载波 PWM5 周期。完成等待后，函数重新进入临界区复核 fault、启动令牌、运行态拓扑、活动帧、PinMux 和 Pad 输入能力，全部成立且观察到要求的活动后才清除 `s_bStartPending` 并发布 `CDD_PWM_WAVE_STATE_RUN`。

该函数没有输入参数或输出参数，返回 `Cdd_PwmWave_ResultType`。返回 `CDD_PWM_WAVE_OK` 只表示当前源码通过了状态机、寄存器拓扑、载波计数器和 GPIO 输入读回判据；它不能替代示波器对外部引脚频率、占空比、互补关系和死区时间的板级测量。启动前或启动后的关键拓扑失配、Run 请求写入读回失败以及活动观察超时会调用 `Cdd_PwmWave_EnterFault()`，强制安全关断、撤销 pending、清除活动帧并进入 `FAULT_LATCHED`。`s_bOutputPadsConfirmed == FALSE` 是硬件配置错误中的例外：该分支只拒绝 Start，不调用 `Cdd_PwmWave_EnterFault()`；其余 Core、初始化、状态、busy、无活动帧等门禁拒绝同样不会新建 fault。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1892～1893 页说明 TGC 对 TOM 通道的同步启动、停止和工作寄存器更新机制，并说明输出禁用时由 `SL` 决定输出值；第 1907、1911～1912 页说明 DTM 位于 TOM 后级以及 DTM shutoff/`UPD_MODE` 的行为；第 2025、2033 页分别给出 TOM `SL` 和 `CN0` 字段语义；第 1361～1362 页给出 GPIO `PDIR` 与 `PIDR` 的读回语义。这些原页支持本函数对信号极性、载波计数和 Pad 输入读回的解释。LU0 D 触发器、Run 请求 VSS/VDD 切换、具体 TRGSEL/DTM 路由、三或四个回绕窗口、活动掩码和 `ARMED_LOW -> RUN` 状态机均是当前项目源码与生成配置事实，不是手册规定的唯一启动流程；当前生成的 `CDD_TrgSel_PBcfg.c` 也确认 LU0 INPUT0A 初始选择 VSS，并保留源码所检查的 eFTU1 TOM0、LU0 OUT0B 和 TRGSEL0 OUT2 路由。在当前 Errata V0.5 中，以 eFTU、TOM、DTM、PWM、dead time、shutoff、output 和 update 为范围未发现直接适用于本函数的条目。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | Run 请求已通过当前同步链生效，规定的输出活动已经由软件读回，并且启动后拓扑、活动帧和 Pad 配置复核通过；状态已切换为 `RUN` |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0，函数在进入临界区和访问启动硬件前返回 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 进入启动门禁时已有 fault 锁存，或锁外等待期间其他路径锁存了 fault |
| `CDD_PWM_WAVE_E_STATE` | 初始状态不是 `ARMED_LOW`，或锁外等待期间启动令牌、状态机上下文发生不一致变化 |
| `CDD_PWM_WAVE_E_BUSY` | 已有 Start 正在等待完成，或刷新后仍存在尚未装载的 pending 帧 |
| `CDD_PWM_WAVE_E_NO_FRAME` | 当前没有可供启动的有效活动帧 |
| `CDD_PWM_WAVE_E_HW_CONFIG` | 尚未完成 Pad 低态确认，或启动前后运行拓扑、活动帧、PinMux、Pad 输入配置、Run 请求写入及读回不满足当前实现约束 |
| `CDD_PWM_WAVE_E_HW_TIMEOUT` | 有界轮询内没有完成要求的 CH0 回绕或没有取得要求的 PWM1～PWM4/PWM5 活动证据；函数同时锁存硬件超时 fault |

当前源码中的直接调用者如下：

1. `Bsp_PwmWave_Start()` 在确认调用核为 Core0 且 BSP 没有 pending 作业后，同步调用本函数启动当前活动帧；随后把结果登记为 `BSP_PWM_WAVE_JOB_START_ACTIVE_FRAME` 作业的完成或失败结果。
2. `Bsp_PwmWave_MainFunction()` 处理 `BSP_PWM_WAVE_JOB_START_WITH_FRAME` 异步作业时，在提交帧已经成为匹配的活动帧、CDD 仍处于 `ARMED_LOW` 且没有 Start pending 后调用本函数，并用返回值结束原 BSP pending 作业。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_Start(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;  // 汇总启动门禁、运行请求和活动复核阶段的最终结果
  boolean bOutputActivity = FALSE;  // 记录有界观察窗口内是否取得全部必需输出活动证据
  boolean bRequirePwm5Activity = FALSE;  // 标记当前 PWM5 模式是否要求观察到高态
  boolean bRequirePwm5LowActivity = FALSE;  // 标记 TEST_TOGGLE 是否还要求观察到低态
  uint8 u8RequiredVerifyWraps = CDD_PWM_WAVE_START_VERIFY_WRAPS;  // 保存当前帧模式要求的 CH0 验证回绕数

  // CDD 所接管的 eFTU、DTM、LU 和 TRGSEL 运行资源只允许 Core0 启动。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 非所有者核不得访问后续启动状态和硬件
  }
  // 未完成 CDD 初始化时，不存在可供启动的 ARMED_LOW 拓扑。
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;  // 在进入 SchM 临界区前拒绝未初始化调用
  }

  // 在 SchM 锁内刷新帧装载结果，再对同一状态快照执行完整启动门禁。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();  // 将已经由 shadow 装入活动寄存器的 pending 帧晋升为活动帧

  // 按故障、状态、并发事务、活动帧和 Pad 确认顺序拒绝不具备启动条件的请求。
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 故障清除前禁止重新放行输出
  } else if (CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState) {
    eResult = CDD_PWM_WAVE_E_STATE;  // 只有已配置并受低态门控的状态可以转入 RUN
  } else if ((TRUE == s_bStartPending) || (TRUE == s_bPendingFrameValid)) {
    eResult = CDD_PWM_WAVE_E_BUSY;  // 等待已有启动或帧装载事务结束，不交叉修改运行请求
  } else if (FALSE == s_bActiveFrameValid) {
    eResult = CDD_PWM_WAVE_E_NO_FRAME;  // 没有已经生效的波形参数可供运行
  } else if (FALSE == s_bOutputPadsConfirmed) {
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 必须先由 ConfirmArmedLow 建立 Pad 低态确认凭据
  // 最后一组门禁交叉检查低态运行拓扑、九路 Pad 低态以及活动寄存器中的完整帧。
  // 任一关系失配都说明软件状态不能安全代表当前硬件，因此进入故障锁存。
  } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Cdd_PwmWave_IsPhysicalArmedLowValid()) ||
             (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE))) {
    Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 对外保留硬件配置错误分类
  } else {
    // 门禁通过后发布启动占用，并按 PWM5 模式建立后续活动验证条件。
    s_bStartPending = TRUE;  // 阻止等待期间插入 Start、Stop 或新帧事务
    bRequirePwm5Activity = (CDD_PWM_WAVE_PWM5_LOW != s_tActiveFrame.ePwm5State) ? TRUE : FALSE;  // HIGH/TEST_TOGGLE 必须出现 PWM5 高态
    bRequirePwm5LowActivity = (CDD_PWM_WAVE_PWM5_TEST_TOGGLE == s_tActiveFrame.ePwm5State) ? TRUE : FALSE;  // TEST_TOGGLE 还必须出现低态
    u8RequiredVerifyWraps = Cdd_PwmWave_GetStartVerifyWraps(&s_tActiveFrame);  // 为 TEST_TOGGLE 保留完整双载波观察窗口

    // 将软件 Run 请求源切换为 VDD；LU 在 CH0 边界同步后解除 DTM 低态关断。
    if (FALSE == Cdd_PwmWave_SetRunRequest(TRUE)) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);  // 写入或读回失败时立即安全关断并清除启动上下文
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 有界硬件轮询放在临界区外，避免长时间占用 SchM 锁

  // 仅第一阶段成功时等待同步边界，并收集 PWM1～PWM4 及按模式要求的 PWM5 活动。
  if (CDD_PWM_WAVE_OK == eResult) {
    bOutputActivity = Cdd_PwmWave_WaitForOutputActivity(u8RequiredVerifyWraps, bRequirePwm5Activity, bRequirePwm5LowActivity);  // 返回软件活动读回是否完整

    // 等待完成后重新锁定状态，防止直接使用轮询前的旧状态发布 RUN。
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    if (TRUE == s_bFaultLatched) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 等待期间出现的故障优先于原启动结果
    } else if ((FALSE == s_bStartPending) || (CDD_PWM_WAVE_STATE_ARMED_LOW != s_eState)) {
      eResult = CDD_PWM_WAVE_E_STATE;  // 启动令牌或状态被改变时不发布 RUN
    // RUN 态复核同时约束同步拓扑、活动帧、九路 PinMux 和 GPIO 输入读回能力。
    // 任一失配都会否定本次启动的硬件一致性，并进入配置故障安全态。
    } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(TRUE)) || (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE)) ||
               (FALSE == Cdd_PwmWave_AreOutputPinModesValid()) || (FALSE == Cdd_PwmWave_AreOutputPadInputsEnabled())) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 将运行后交叉复核失败归类为硬件配置错误
    // 规定观察窗口内无法证明所需活动时按超时故障关断，不继续维持不确定输出。
    } else if (FALSE == bOutputActivity) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_TIMEOUT);
      eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;  // 向调用者暴露输出活动证据不足
    // 所有启动后判据均成立时，才完成启动事务并对外发布运行状态。
    } else {
      s_bStartPending = FALSE;
      s_eState = CDD_PWM_WAVE_STATE_RUN;  // 完成 ARMED_LOW 到 RUN 的状态迁移
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

  return eResult;
}
```

`Cdd_PwmWave_Stop()` 是 PWM 波形 CDD 从 `RUN` 同步切换回 `ARMED_LOW` 的正常停止入口。函数不会立即禁用 TOM 通道或清除当前活动帧，而是先确认当前运行拓扑和活动寄存器仍与保存的活动帧一致，然后把状态设置为 `STOP_PENDING`，将软件 Run 请求切换为低。当前 LU/TRGSEL/DTM 链在 CH0 载波边界同步该请求，并由 DTM 把 PWM1～PWM5 对应的九路输出 Pad 约束为低态。

函数释放 SchM 锁后，有界等待当前常量规定的两个 CH0 载波回绕，再重新进入临界区检查 fault 和 `STOP_PENDING` 状态令牌。只有 Run 请求低态拓扑、活动 TOM 帧、九路 PinMux 和 Pad 低态读回全部成立时，才把状态切换为 `ARMED_LOW`。成功停止后仍保留当前活动帧和 TOM 运行参数，后续可以按状态机要求再次调用 `Cdd_PwmWave_Start()`；这与故障关断不同，`Cdd_PwmWave_EnterFault()` 会禁用硬件、撤销 pending、清除活动帧并进入 `FAULT_LATCHED`。

该函数没有输入参数或输出参数，返回 `Cdd_PwmWave_ResultType`。`CDD_PWM_WAVE_OK` 只表示当前源码通过了状态机、寄存器拓扑、两个载波回绕和 GPIO Pad 低态读回判据，不能替代示波器对外部引脚低态、停止边界和瞬态行为的板级确认。初始门禁返回的 Core、未初始化、已有 fault、busy 或状态错误不会新建 fault；停止前运行拓扑失配、Run 请求写入读回失败、边界等待超时或停止后低态复核失败会调用 `Cdd_PwmWave_EnterFault()` 执行安全关断。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1411 页说明 LU D 触发器在时钟上升沿存储数据输入电平；第 1892～1893 页说明 TOM TGC 负责八个通道的同步启动、停止和工作寄存器更新，并给出通道使能、输出使能及更新机制；第 1911～1912 页说明 DTM shutoff 和 `UPD_MODE` 的同步/异步复位行为；第 2033 页给出 TOM `CN0` 计数器字段；第 1361～1362 页说明 GPIO `PDIR` 和 `PIDR` 的 Pad 输入读回语义。LU0 的具体输入与输出路由、Run 请求 VDD/VSS 切换、等待两个 CH0 回绕以及 `RUN -> STOP_PENDING -> ARMED_LOW` 状态机均是当前项目源码与生成配置事实，不是手册规定的唯一停止流程；当前生成的 `CDD_TrgSel_PBcfg.c` 确认 LU0 INPUT0A 初始选择 VSS，并保留源码检查的 eFTU1 TOM0、LU0 OUT0B 和 TRGSEL0 OUT2 路由。在当前 Errata V0.5 已检索范围内，eFTU 命中项属于 DMAMUX 共享请求通道限制；`ERR_LU_3617113` 只涉及 LU Data Unit 在连续双边沿收发并同时使用 DMA 和中断时遗漏最终 CPU 中断，而本函数使用的是 Logic Generator D 触发器路径，因此未发现直接适用于本函数正常停止流程的条目。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | Run 请求已经切换为低，软件观察到两个 CH0 回绕，停止后拓扑、活动帧和九路 Pad 低态复核通过，状态已进入 `ARMED_LOW` |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0，函数在进入临界区和访问停止硬件前返回 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 初始门禁时已有 fault 锁存，或锁外等待期间其他路径锁存了 fault |
| `CDD_PWM_WAVE_E_BUSY` | Start 正在锁外验证，或刷新后仍有尚未装载的 pending 帧 |
| `CDD_PWM_WAVE_E_STATE` | 初始状态不是 `RUN`，或锁外等待期间状态不再是本次停止事务的 `STOP_PENDING` |
| `CDD_PWM_WAVE_E_HW_CONFIG` | 停止前运行拓扑或活动帧不一致、Run 请求低态写入读回失败，或者停止后低态拓扑、PinMux、Pad 低态及活动帧复核失败；函数同时进入故障安全态 |
| `CDD_PWM_WAVE_E_HW_TIMEOUT` | 有界轮询内没有观察到规定的两个 CH0 回绕；函数同时锁存硬件超时 fault 并安全关断 |

当前源码中的直接调用者如下：

1. `Bsp_PwmWave_Stop()` 在确认调用核为 Core0 且 BSP 没有 pending 作业后，同步调用本函数；随后把返回结果登记为 `BSP_PWM_WAVE_JOB_STOP` 作业的完成或失败结果。`Bsp_PwmWave_FixedTestStop()` 通过该 BSP 包装函数间接调用本函数，不属于直接调用点。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_Stop(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;  // 汇总停止门禁、边界等待和低态复核阶段的最终结果
  boolean bBoundaryTimingElapsed = FALSE;  // 记录软件是否在轮询上限内观察到规定数量的 CH0 回绕

  // CDD 所接管的 eFTU、DTM、LU 和 TRGSEL 运行资源只允许 Core0 停止。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 非所有者核不得进入后续状态和硬件操作
  }
  // 未完成 CDD 初始化时，不存在可安全执行同步 Stop 的运行拓扑。
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;  // 在进入 SchM 临界区前拒绝未初始化调用
  }

  // 在 SchM 锁内刷新帧装载结果，再基于一致状态快照执行停止门禁。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();  // 已完成装载的 pending 帧先晋升为活动帧，未完成者仍保留为 busy
  // 按故障、启动事务、运行状态和帧事务顺序拒绝不能安全停止的请求。
  if (TRUE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 已锁存故障时不重复启动正常 Stop 流程
  } else if (TRUE == s_bStartPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;  // 不与正在锁外验证的 Start 事务交叉切换 Run 请求
  } else if (CDD_PWM_WAVE_STATE_RUN != s_eState) {
    eResult = CDD_PWM_WAVE_E_STATE;  // 正常 Stop 仅接受当前已经发布的 RUN 状态
  } else if (TRUE == s_bPendingFrameValid) {
    eResult = CDD_PWM_WAVE_E_BUSY;  // 尚未装载的 shadow 帧必须先完成，避免停止时丢失事务归属
  // 发出停止请求前，交叉确认 Run 请求仍为高且活动 TOM 寄存器保持当前运行帧。
  // 任一关系失配都表明软件 RUN 状态不能代表硬件现状，必须转入故障安全态。
  } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(TRUE)) || (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE))) {
    Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);  // 强制安全关断、撤销事务并锁存配置故障
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;
  } else {
    // 先发布 STOP_PENDING，作为锁外等待期间本次停止事务的状态令牌。
    s_eState = CDD_PWM_WAVE_STATE_STOP_PENDING;  // 阻止其他正常状态操作把等待结果误归给不同事务
    // 将软件 Run 请求源切到 VSS，由 LU 在 CH0 边界同步后驱动 DTM 低态关断链。
    if (FALSE == Cdd_PwmWave_SetRunRequest(FALSE)) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);  // 写入或读回失败时立即执行安全回退
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();  // 载波边界轮询放在锁外，避免长时间占用 SchM 临界区

  // 只有停止请求成功发出后才等待同步链传播，不对已拒绝请求执行硬件轮询。
  if (CDD_PWM_WAVE_OK == eResult) {
    bBoundaryTimingElapsed = Cdd_PwmWave_WaitForCarrierWraps(CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS);  // 当前常量要求观察两个 CH0 回绕

    // 等待完成后重新锁定状态，并使用新快照决定是否发布 ARMED_LOW。
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
    // 先处理等待期间出现的 fault 或事务状态变化，再检查时序和硬件低态证据。
    if (TRUE == s_bFaultLatched) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 并发故障优先于原停止请求的完成结果
    } else if (CDD_PWM_WAVE_STATE_STOP_PENDING != s_eState) {
      eResult = CDD_PWM_WAVE_E_STATE;  // 状态令牌不再属于本次 Stop 时不发布完成态
    } else if (FALSE == bBoundaryTimingElapsed) {
      // 规定轮询上限内没有观察到两个载波边界，按硬件时序超时安全关断。
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_TIMEOUT);  // 锁存超时并清除活动帧和 pending 上下文
      eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;
    // 停止后应保持 TOM 通道和活动帧配置，同时 Run 请求为低且 DTM 把九路 Pad 置低。
    // 复核同步拓扑、PinMux/Pad 低态或活动帧任一失配时，不得进入可再次启动的状态。
    } else if ((FALSE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) || (FALSE == Cdd_PwmWave_IsPhysicalArmedLowValid()) ||
               (FALSE == Cdd_PwmWave_IsFrameApplied(&s_tActiveFrame, TRUE))) {
      Cdd_PwmWave_EnterFault(CDD_PWM_WAVE_FAULT_HW_CONFIG);  // 交叉验证失败时回退到 FAULT_LATCHED
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;
    } else {
      s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;  // 保留活动帧并完成 RUN 到安全低态的迁移
    }
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();
  }

  return eResult;
}
```

`Cdd_PwmWave_ClearFault()` 是 PWM 波形 CDD 从锁存故障恢复到可重新装帧低态的同步入口。它只接受 Core0、CDD 已初始化、当前确有 fault 锁存、没有另一项 Clear 事务且九路 eFTU Pad 曾经成功确认的场景；此前启动阶段的 PinMux 确认若失败并已回退到 GPIO，本函数明确拒绝原位恢复，要求重新初始化或复位。函数不会重新调用 `Port_SetPinMode()`，也不会恢复 fault 前的波形帧。入口没有单独检查 `s_eState == CDD_PWM_WAVE_STATE_FAULT_LATCHED`，而是依赖模块内部“fault 锁存与故障状态保持同步”的不变量。

恢复过程由三个 `PWM_EXCLUSIVE_AREA_19` 锁内阶段和两个锁外有界轮询组成。第一阶段以 `s_bClearPending` 取得事务所有权，调用 `Cdd_PwmWave_ForceSafeHardware()` 钳低 DTM、立即禁用 TOM CH3～CH7、把 Run 请求切回低并撤销 pending，然后重建 LU Stop 同步器、DTM shutoff 和 CH0 载波边界触发链；随后释放锁，等待当前常量要求的两个 CH0 回绕。第二阶段重新确认事务令牌、fault 锁存、低态同步链及全部输出禁用状态，再预置 CH3～CH7 的活动/影子信号极性并发出载波边界使能请求；第二次锁外轮询只等待 TGC 通道和输出使能状态生效。第三阶段还要同时确认低态运行拓扑、既有 Pad 确认标志及九路 PinMux/PIDR/PDIR 低态读回，才允许清除故障。

两段等待都不屏蔽中断，也不持有 SchM 锁；`s_bClearPending` 和 `s_bFaultLatched` 因此会在每次重新入锁后交叉确认。等待上限由 `CDD_PWM_WAVE_HW_POLL_LIMIT == 10000U` 及最多两个 CH0 回绕共同约束，是基于计数器回卷的有界忙等，不是固定微秒延时。锁外期间如果另一条 fault/紧急关断路径撤销了 Clear 令牌，本函数返回 `CDD_PWM_WAVE_E_FAULT_ACTIVE`；这里的含义是“本次恢复事务失去所有权”，不是入口处存在 fault，因为入口本来就要求 fault 已锁存。

成功路径会清除 pending/active 帧有效标志、Start/Clear/fault 令牌、当前 pending/active 序列、fault flags 和 pending 主循环计数，并把状态发布为 `CDD_PWM_WAVE_STATE_ARMED_LOW`；`s_bInitialized`、`s_bOutputPadsConfirmed` 以及全局序列计数器 `s_u32SequenceCounter` 保持不变。TOM 通道和输出门此时已经重新使能，但 Run 请求仍为低且 DTM shutoff 继续把外部 Pad 约束在低态，因此这不表示波形已经恢复。调用者必须重新提交并等待一帧成为 active，之后才能 Start；直接 Start 会因没有活动帧而失败。

故障诊断必须在调用前保存：首次 `Cdd_PwmWave_ForceSafeHardware()` 已会改写 DTM/TOM/TRGSEL 状态并撤销 pending，成功又把 `s_u32FaultFlags` 清零，故调用后不能再从当前寄存器或状态完整还原首次 fault 现场。已经取得 Clear 所有权后的失败会按位追加 `HW_CONFIG` 或 `HW_TIMEOUT`，再次强制安全关断并维持 `FAULT_LATCHED`。当前 `CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_OFF`，所以本函数处理的是当前软件锁存的故障上下文，不包含真实外部硬件 fault 源的解除或确认流程。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1892～1893 页说明 TGC 负责 TOM 通道同步启动、停止和工作寄存器更新，并说明输出禁用时由通道 `SL` 决定输出值；第 1999、2002、2007 和 2010 页给出 `ENDIS_CTRL/STAT` 与 `OUTEN_CTRL/STAT` 的使能命令及状态编码；第 2019 页说明 `INT_TRIG0=10b` 选择本通道内部触发；第 2044～2045 页说明 `CH_CTRL2` 可把 DTM 输出切换为指定常量电平；第 2056～2057 页说明 DTM `SHUTOFF_SEL` 的关断输入选择及 `UPD_MODE` 对内部 `SHUTOFF_SYNC` 的更新方式。第 1361、1362 和 1368 页分别给出 `PDIR`、`PIDR` 和 `PCR.MUX` 的读回语义。TrgSel User Manual 原 PDF 第 39 页只规定 `TrgSel_ConfigInput()` 按目标和源进行配置且没有返回值；当前 CDD 随后的寄存器读回是项目自己的闭环检查。生成的 `CDD_TrgSel_PBcfg.c`、`Pwm_PBcfg.c` 和 `Port_Cfg.h/.c` 分别交叉确认 LU/DTM 静态路由、eFTU1 TOM0 CH0/CH3～CH7 资源和九路 ALT6/ALT7 复用。两次等待、三阶段事务、Clear 令牌、返回值映射和状态清理顺序均是当前项目源码事实，不是手册规定的唯一恢复流程；这些静态读回也不能替代板级波形或电压测量。Errata V0.5 中唯一 LU 条目 `ERR_LU_3617113` 仅涉及 Data Unit 灵活模式、连续双沿收发且 DMA 与中断同时启用，本函数使用的是 LU Logic Gate D 触发器路径，不属于该条目的触发条件；汇总表未列出 TOM、DTM、TRGSEL、PORT 或 PWM 类直接适用条目。

该函数没有输入参数或输出参数，当前实现实际可达的返回结果如下：

| 返回值 | 含义 |
| --- | --- |
| `CDD_PWM_WAVE_OK` | 三阶段恢复和全部读回均通过；旧帧与 fault 上下文已清除，状态进入 `ARMED_LOW`，但尚未重新提交或启动波形 |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0；函数在进入临界区和访问恢复硬件前返回 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化，不存在可复用的运行拓扑 |
| `CDD_PWM_WAVE_E_STATE` | 当前没有 fault 锁存；ClearFault 不是无故障状态下的幂等成功操作 |
| `CDD_PWM_WAVE_E_BUSY` | 已有 `s_bClearPending` 恢复事务 |
| `CDD_PWM_WAVE_E_FAULT_ACTIVE` | 某次锁外等待后发现 Clear 令牌丢失或 fault 锁存意外解除，本次恢复事务已被其他安全路径中断 |
| `CDD_PWM_WAVE_E_HW_CONFIG` | Pad 从未确认，或安全关断、LU/DTM/触发链、Run 低请求、输出禁用/使能后的运行拓扑、PinMux/PIDR/PDIR 低态任一复核失败 |
| `CDD_PWM_WAVE_E_HW_TIMEOUT` | 规定轮询预算内没有观察到两个 CH0 回绕，或发出使能请求后没有观察到 CH3～CH7 通道及输出全部使能 |

当前源码中只有一个直接调用者：

1. `Bsp_PwmWave_ClearFault()` 先确认调用核为 Core0、保存当前 command epoch，并拒绝已有 BSP pending 作业；随后同步调用本函数，再把结果登记为 `BSP_PWM_WAVE_JOB_CLEAR_FAULT` 的完成或失败结果。该 BSP 门禁返回的 `WRONG_CORE/BUSY` 可能发生在尚未进入本函数之前。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_ClearFault(void)
{
  Cdd_PwmWave_ResultType eResult = CDD_PWM_WAVE_OK;  // 汇总恢复门禁、硬件等待、拓扑复核和最终发布结果
  boolean bHardwareConfigValid = FALSE;  // 记录安全关断及 LU、DTM、触发链配置是否逐级通过
  boolean bEnableIssued = FALSE;  // 标记是否已请求 CH3～CH7 在载波边界重新使能
  boolean bOutputsEnabled = FALSE;  // 保存重新使能后的通道与输出使能状态等待结果
  boolean bStopTimingElapsed = FALSE;  // 保存安全低请求是否已经跨过规定的 CH0 稳定回绕数

  // 故障恢复会重配模块独占硬件并发布全局状态，只允许已初始化的 Core0 执行。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;  // 错误核不能进入 PWM 波形资源的恢复事务
  }
  if (FALSE == s_bInitialized) {
    return CDD_PWM_WAVE_E_UNINIT;  // 未初始化时没有可复用的 CDD 硬件拓扑
  }

  // 第一锁内阶段取得 Clear 所有权，建立全输出禁用的安全基线并重建同步关断链。
  // s_bClearPending 在全部锁外等待期间充当事务令牌，防止另一路 Clear 并发进入。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();  // 序列化 fault、Clear 令牌及采用同一锁的硬件配置修改路径
  // 仅允许从已锁存故障恢复；重复 Clear 和从未确认过 Pad 的启动失败分别拒绝。
  // Pad 未确认意味着 PinMux 已退回 GPIO，当前接口不能替代重新初始化或复位。
  if (FALSE == s_bFaultLatched) {
    eResult = CDD_PWM_WAVE_E_STATE;  // 无活动 fault 时不存在可清除的故障上下文
  } else if (TRUE == s_bClearPending) {
    eResult = CDD_PWM_WAVE_E_BUSY;  // 已有恢复事务持有 Clear 令牌
  } else if (FALSE == s_bOutputPadsConfirmed) {
    /* A startup pin-mux failure was returned to GPIO; recovery requires re-init/reset. */
    s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;  // 保留无法原位恢复的硬件配置诊断
    eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 要求调用方转入重新初始化或复位路径
  } else {
    // 门禁通过后先发布 Clear 令牌，再强制关闭输出并撤销所有未完成更新。
    // 每级配置仅在前一级读回成功时继续，避免在不安全基线上局部重建拓扑。
    s_bClearPending = TRUE;  // 声明本函数拥有本次故障恢复事务
    bHardwareConfigValid = Cdd_PwmWave_ForceSafeHardware();  // 钳低 DTM、禁用 TOM、选择低态请求并撤销 pending
    // 只有安全状态已经由寄存器和 Pad 读回确认后，才重新建立 LU 停止同步器。
    if (TRUE == bHardwareConfigValid) {
      bHardwareConfigValid = Cdd_PwmWave_ConfigureLuStopSynchronizer();  // 配置并读回低态 Run 请求同步链
    }
    // LU 成功后恢复 DTM shutoff 与载波触发，并聚合复核整条低态控制链。
    if (TRUE == bHardwareConfigValid) {
      Cdd_PwmWave_ConfigureDtmShutoff();  // 恢复 PWM1～PWM5 的同步安全关断配置
      Cdd_PwmWave_SelectCarrierBoundaryTrigger(TRUE);  // 重新选择 CH0 载波边界作为内部同步触发
      bHardwareConfigValid = ((TRUE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) && (TRUE == Cdd_PwmWave_IsDtmShutoffConfigValid()) &&
                              (TRUE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) && (TRUE == Cdd_PwmWave_IsRunRequestSelected(FALSE)))
                                 ? TRUE
                                 : FALSE;
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  // 释放锁后等待低态 Run 请求跨过规定的 CH0 边界，避免长轮询阻塞其他 SchM 使用者。
  // 仅第一阶段无错误且完整配置链已通过时才执行该稳定时间检查。
  if ((CDD_PWM_WAVE_OK == eResult) && (TRUE == bHardwareConfigValid)) {
    /* No interrupt masking while the request crosses the CH0 zero boundaries. */
    bStopTimingElapsed = Cdd_PwmWave_WaitForCarrierWraps(CDD_PWM_WAVE_REQUEST_SETTLE_WRAPS);  // 有界等待两个载波回绕
  }

  // 第二锁内阶段确认恢复令牌仍有效，并在重新使能前复核稳定时间和禁用态拓扑。
  // 本阶段只决定是否允许发出使能命令，尚不清除 fault 或发布 ARMED_LOW。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();  // 重新取得事务锁，防止使用锁外等待得到的过期状态
  if (CDD_PWM_WAVE_OK == eResult) {
    // Clear 令牌与 fault 锁存必须在锁外等待期间始终保持，失配说明恢复上下文已丢失。
    // 令牌有效后，再区分首阶段失效、稳定超时以及等待期间发生的关断拓扑漂移。
    // 拓扑复核覆盖 LU、DTM、载波触发、低态 Run 请求和全部输出禁用状态。
    if ((FALSE == s_bClearPending) || (FALSE == s_bFaultLatched)) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 中止已失去所有权或 fault 上下文的恢复
    } else if (FALSE == bHardwareConfigValid) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 第一阶段安全关断或同步链配置未通过
    } else if (FALSE == bStopTimingElapsed) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_TIMEOUT;
      eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;  // CH0 未在轮询上限内完成要求的稳定回绕
    } else if ((FALSE == Cdd_PwmWave_IsLuStopSynchronizerConfigValid()) || (FALSE == Cdd_PwmWave_IsDtmShutoffConfigValid()) ||
               (FALSE == Cdd_PwmWave_IsCarrierBoundaryTriggerSelected()) || (FALSE == Cdd_PwmWave_IsRunRequestSelected(FALSE)) ||
               (FALSE == Cdd_PwmWave_AreAllOutputsDisabled())) {
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
      eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 稳定后的关断拓扑或输出禁用状态不满足恢复前提
    } else {
      // 前置条件全部成立后恢复运行极性，并请求各输出通道在同一载波边界重新使能。
      Cdd_PwmWave_SetActiveAndShadowRunSignalLevels();  // 预置后续帧运行所需的活动和 shadow 极性
      Cdd_PwmWave_EnableAllAtCarrierBoundary();  // 发出 CH3～CH7 同步使能命令
      bEnableIssued = TRUE;  // 允许锁外阶段等待使能状态生效
    }
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  // 使能命令发出后在锁外执行有界轮询，使 SchM 临界区不覆盖硬件边界等待。
  // 未发出使能命令时跳过本阶段，原有错误由最终锁内阶段统一收尾。
  if (TRUE == bEnableIssued) {
    bOutputsEnabled = Cdd_PwmWave_WaitForOutputState(TRUE);  // 等待通道与输出使能状态全部置位
  }

  // 第三锁内阶段把硬件生效证据转换为新的软件基线，或将失败恢复为安全 fault 状态。
  // 只有 Clear 令牌、fault、拓扑和物理 Pad 证据仍一致时才允许清除故障。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();  // 最终状态发布与失败回退保持原子
  if ((CDD_PWM_WAVE_OK == eResult) && (TRUE == bEnableIssued)) {
    // 锁外等待结束后再次确认恢复事务没有被撤销或替换。
    // 令牌有效后，成功还要求输出使能、低态运行拓扑、既有 Pad 确认和物理低态同时成立。
    // 通道已使能但 Run 请求仍为低，DTM shutoff 应继续把外部 Pad 保持在安全低态。
    if ((FALSE == s_bClearPending) || (FALSE == s_bFaultLatched)) {
      eResult = CDD_PWM_WAVE_E_FAULT_ACTIVE;  // 恢复上下文失效，禁止清除 fault 标志
    } else if ((TRUE == bOutputsEnabled) && (TRUE == Cdd_PwmWave_IsRuntimeTopologyValid(FALSE)) && (TRUE == s_bOutputPadsConfirmed) &&
               (TRUE == Cdd_PwmWave_IsPhysicalArmedLowValid())) {
      // 恢复成功后丢弃 fault 前的 pending/active 帧及其序列，避免复用失效波形上下文。
      // 清空事务和诊断字段后发布新的 ARMED_LOW；调用者必须重新提交有效帧才能启动。
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
      s_eState = CDD_PWM_WAVE_STATE_ARMED_LOW;  // 作为成功路径的最后一步发布可重新装帧的安全状态
    } else {
      // 未观察到输出使能归类为超时；使能已生效但拓扑或 Pad 低态失配归类为配置错误。
      // 两类失败均保留 fault 锁存和 Clear 令牌，交给下方公共安全回退统一处理。
      if (FALSE == bOutputsEnabled) {
        s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_TIMEOUT;
        eResult = CDD_PWM_WAVE_E_HW_TIMEOUT;  // 使能状态未在轮询上限内全部生效
      } else {
        s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
        eResult = CDD_PWM_WAVE_E_HW_CONFIG;  // 最终运行拓扑、Pad 确认或物理低态不一致
      }
    }
  }

  // Clear 已取得所有权但任一后续阶段失败时，再次强制安全关断并保留故障态。
  if ((CDD_PWM_WAVE_OK != eResult) && (TRUE == s_bClearPending)) {
    if (FALSE == Cdd_PwmWave_ForceSafeHardware()) {  // 回退本身失败时叠加硬件配置诊断
      s_u32FaultFlags |= CDD_PWM_WAVE_FAULT_HW_CONFIG;
    }
    s_bClearPending = FALSE;  // 释放恢复事务令牌，允许后续重新发起 Clear
    s_bFaultLatched = TRUE;
    s_eState = CDD_PWM_WAVE_STATE_FAULT_LATCHED;  // 失败出口统一保持可诊断的锁存故障状态
  }
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;  // OK 表示已恢复 ARMED_LOW；其他结果保持入口状态或回退到 FAULT_LATCHED
}
```

`Cdd_PwmWave_GetStatus()` 是 PWM 波形 CDD 的 Core0 状态查询入口，用于返回模块状态机、活动帧与 pending 帧有效性、Start/fault 标志、帧序列和故障位快照。已初始化路径会先调用 `Cdd_PwmWave_RefreshPending()`，把已经由 TOM 活动寄存器确认生效的 pending 帧收敛为 active，再复制状态，因此调用结果反映的是刷新后的软件状态，而不是调用前的原始缓存。

该函数不是纯只读 getter：存在 pending 帧时，刷新过程会读取 CH0、CH3～CH7 的 TOM `CM0/CM1` 和 `CH_CTRL.SL`；全部匹配后会更新 active/pending 软件上下文，关闭本次载波边界通知，并撤销后续 force-update/`UPEN`。它不会增加 pending 超时计数、重新提交帧、启停输出或执行安全关断；未匹配时保留 pending，超时累计仍由 `Cdd_PwmWave_MainFunction()` 负责。寄存器匹配只能证明当前源码检查的 TOM 活动比较值和信号极性一致，不能证明完整 LU/DTM/PinMux 拓扑或外部 Pad 波形正确。

`pStatus` 是必填输出参数。返回 `CDD_PWM_WAVE_OK` 时全部字段构成同一次 SchM 临界区内、pending 刷新之后的时点快照；退出临界区后状态仍可能变化。返回 `CDD_PWM_WAVE_E_UNINIT` 时函数也会完整写入一份未初始化诊断快照：保留当前 `eState` 和 `u32FaultFlags`，其余运行期有效标志置为 `FALSE`、序列号置为 `0U`。返回 `CDD_PWM_WAVE_E_PARAM_POINTER` 或 `CDD_PWM_WAVE_E_WRONG_CORE` 时不写任何字段，调用者不得使用输出对象中的旧内容。

各输出字段在当前实现中的含义如下：

| 字段 | 当前实现语义 |
| --- | --- |
| `eState` | CDD 当前软件状态机状态；未初始化时仍返回 `s_eState` 的当前值 |
| `bActiveFrameValid` | 保存的 active 帧是否已经通过 TOM 活动寄存器匹配确认；未初始化时固定为 `FALSE` |
| `bPendingFrameValid` | 是否仍有已接受但尚未确认装载完成的帧；未初始化时固定为 `FALSE` |
| `bStartPending` | Start 是否处于锁外边界等待或复核阶段；未初始化时固定为 `FALSE` |
| `bFaultLatched` | 当前软件 fault 是否锁存；未初始化诊断分支固定返回 `FALSE`，应同时查看 `u32FaultFlags` |
| `bFaultInputConfigured` | 编译期开关 `CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED` 的能力标志；当前配置为 `STD_OFF`，因此固定为 `FALSE` |
| `bRawFaultActive` | 当前实现没有采样外部原始 fault 输入，两条输出路径都固定写 `FALSE` |
| `u32ActiveSequence` | active 帧序列号，仅在 `bActiveFrameValid == TRUE` 时具有帧归属意义；未初始化时为 `0U` |
| `u32PendingSequence` | pending 帧序列号，仅在 `bPendingFrameValid == TRUE` 时具有帧归属意义；未初始化时为 `0U` |
| `u32FaultFlags` | 当前累计的软件请求、硬件超时和硬件配置故障位；未初始化时仍保留已记录的诊断值 |

并发边界方面，空指针、非 Core0 和未初始化门禁位于锁外；已初始化路径在 `PWM_EXCLUSIVE_AREA_19` 内完成刷新和整组字段复制，避免 Core0 任务/中断在复制期间留下跨时点组合。当前 `SchM_Pwm.h/.c` 把该区域映射到支持同核重入的中断临界区，因此 `Bsp_PwmWave_GetControlStatus()` 外层持有同一区域时仍可嵌套调用；该实现不是跨核自旋锁，跨核写入仍由本函数的 Core0 所有权检查排除。配置链与此约束一致：`Pwm.xdm` 启用了多核并把 `PWM_CARRIER` 归入 `EcucPartition_0`，`Os.xdm` 将该分区映射到 Core0，生成的 `Pwm_Cfg.h/Pwm_PBcfg.c` 则把载波配置为 Core0 的 eFTU1 TOM0 CH0 并绑定当前通知回调。函数末尾在锁内再次根据 `s_bInitialized` 选择返回值；当前源码不存在初始化成功后再反初始化的路径，所以当前可达的 `CDD_PWM_WAVE_E_UNINIT` 来自前面的未初始化诊断分支。

手册事实与项目实现边界如下：FC7300F8MDQ Reference Manual 原 PDF 第 1896～1898 页说明 SOMP 模式下 `SR0/SR1` 可在同步事件后更新工作寄存器 `CM0/CM1`，第 1995～1997 页说明 `TGC_GLB_CTRL.UPEN_CTRLn` 控制 `CM0/CM1`、`SL` 及其 shadow 的更新，第 2025 页给出 `SL` 信号电平编码，第 2033～2035 页分别给出 `CM0/SR0/CM1/SR1` 的工作寄存器与影子寄存器属性。PWM User Manual 原 PDF 第 23 页规定 `Pwm_DisableNotification()` 关闭指定通道通知且没有返回值；PWM Integration Manual 原 PDF 第 9 页仅给出 PWM 模块使用 SchM 临界区及标准 API 的区域编号，CDD 对区域 19 的复用和同核嵌套语义以当前 `SchM_Pwm` 源码为准。MCAL User Manual 原 PDF 第 38～39 页给出多核中断归属、共享数据一致性及自旋锁的一般约束，但没有定义本 CDD 的 Core0 所有权或快照协议。上述手册均未定义 `Cdd_PwmWave_GetStatus()`、pending 晋升条件或返回值；这些属于当前项目源码事实。Errata V0.5 原 PDF 第 10～12 页涉及 eFTU 的条目只限制共享 DMAMUX 槽位，本函数不使用 DMA，未发现直接适用的 TOM 状态查询限制。

当前实现实际可达的返回结果如下：

| 返回值 | 含义 | `pStatus` 有效性 |
| --- | --- | --- |
| `CDD_PWM_WAVE_OK` | Core0 以非空指针查询已初始化模块；pending 已先刷新，fault 锁存本身不会改变此返回值 | 全部字段有效，但只是锁内时点快照 |
| `CDD_PWM_WAVE_E_PARAM_POINTER` | `pStatus == NULL_PTR` | 未写入 |
| `CDD_PWM_WAVE_E_WRONG_CORE` | 调用者不是 Core0 | 未写入 |
| `CDD_PWM_WAVE_E_UNINIT` | CDD 尚未成功初始化 | 全部字段已写入未初始化诊断快照 |

当前源码中的直接调用者如下：

1. `Bsp_PwmWave_FixedTestStop()` 查询当前是否已经处于无 fault、无 Start、无 pending 的 `ARMED_LOW`；满足时继续执行物理低态确认，使固定测试 Stop 具备幂等路径。
2. `Bsp_PwmWave_RequestStart()` 在提交初始帧前检查 fault、未完成事务和 `ARMED_LOW` 状态门禁。
3. `Bsp_PwmWave_GetControlStatus()` 在同一 SchM 临界区内把 CDD 快照与 BSP 作业字段组合成一份控制状态；当前 SchM 的同核重入计数支持该嵌套调用。
4. `Bsp_PwmWave_MainFunction()` 轮询异步 BSP 作业，依据刷新后的 pending/active 有效性、序列号、CDD 状态和 fault 决定继续等待、启动、完成或紧急终止作业。

```c
Cdd_PwmWave_ResultType Cdd_PwmWave_GetStatus(Cdd_PwmWave_StatusType *pStatus)
{
  Cdd_PwmWave_ResultType eResult;  // 保存临界区内确认的最终返回结果

  // 先拒绝无效输出指针，避免通过空指针写入状态。
  // 参数校验失败时不修改任何输出字段。
  if (NULL_PTR == pStatus) {
    return CDD_PWM_WAVE_E_PARAM_POINTER;
  }
  // 状态接口仅允许 Core0 调用；非所有权核心同样不修改输出结构。
  if (FALSE == Cdd_PwmWave_IsCore0()) {
    return CDD_PWM_WAVE_E_WRONG_CORE;
  }
  // 未初始化时仍填写完整结构，供调用者取得当前安全状态和已有故障标志。
  // 帧、启动和故障锁存等运行期字段按“尚不可用”状态返回。
  // 该分支不会刷新待生效帧，也不会访问 PWM 硬件。
  if (FALSE == s_bInitialized) {
    pStatus->eState = s_eState;  // 保留初始化失败或复位阶段形成的当前软件状态
    pStatus->bActiveFrameValid = FALSE;
    pStatus->bPendingFrameValid = FALSE;
    pStatus->bStartPending = FALSE;
    pStatus->bFaultLatched = FALSE;
    pStatus->bFaultInputConfigured = (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_ON) ? TRUE : FALSE;  // 报告编译期故障输入配置能力
    pStatus->bRawFaultActive = FALSE;  // 当前实现不采样原始故障输入，固定报告未激活
    pStatus->u32ActiveSequence = 0U;  // 没有有效帧时，两类帧序列号均按 0 报告
    pStatus->u32PendingSequence = 0U;
    pStatus->u32FaultFlags = s_u32FaultFlags;  // 保留初始化过程中已记录的故障原因
    return CDD_PWM_WAVE_E_UNINIT;  // 输出结构已经写入，但调用者必须按未初始化结果处理
  }

  // 在 AREA_19 内刷新并复制动态状态，保证返回字段来自同一次软件状态收敛。
  // RefreshPending() 以 TOM 当前 CM0/CM1 和 SL 确认 pending 是否生效，匹配时将其晋升为 active。
  // 晋升还会关闭载波通知并撤销后续 FUPD/UPEN，故本接口不是纯只读查询。
  SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19();
  Cdd_PwmWave_RefreshPending();
  // 以下字段构成刷新之后、同一临界区时点上的状态快照。
  // 退出临界区后驱动状态仍可能继续变化，调用者不应把快照视为长期锁定。
  pStatus->eState = s_eState;  // 返回刷新后的状态机状态
  pStatus->bActiveFrameValid = s_bActiveFrameValid;
  pStatus->bPendingFrameValid = s_bPendingFrameValid;
  pStatus->bStartPending = s_bStartPending;
  pStatus->bFaultLatched = s_bFaultLatched;
  // 故障输入配置反映编译期能力，不表示已经读取到外部故障电平。
  pStatus->bFaultInputConfigured = (CDD_PWM_WAVE_HW_FAULT_INPUT_CONFIGURED == STD_ON) ? TRUE : FALSE;
  pStatus->bRawFaultActive = FALSE;  // 当前版本没有实现原始故障输入状态采样
  // 活动和待处理序列号分别仅在对应 Valid 字段为 TRUE 时具有帧标识意义。
  pStatus->u32ActiveSequence = s_u32ActiveSequence;
  pStatus->u32PendingSequence = s_u32PendingSequence;
  pStatus->u32FaultFlags = s_u32FaultFlags;  // 返回当前累计的软件请求、硬件超时和配置故障位
  eResult = (TRUE == s_bInitialized) ? CDD_PWM_WAVE_OK : CDD_PWM_WAVE_E_UNINIT;  // 以锁内初始化状态决定最终结果
  SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19();

  return eResult;
}
```



















































