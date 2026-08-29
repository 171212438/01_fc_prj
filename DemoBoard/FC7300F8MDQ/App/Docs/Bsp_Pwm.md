# BSP PWM 波形控制

## 1. 设计边界

BSP PWM 是唯一对外模块，不再公开第二套 PWM Wave 接口，也不维护异步 Job、Frame sequence、active/pending Frame 副本或 command epoch。公开控制入口为：

- `Bsp_PwmWave_ApplyRequest()`；
- `Bsp_PwmWave_EmergencyShutdown()`；
- `Bsp_PwmWave_ClearFault()`；
- `Bsp_PwmWave_GetStatus()`。

`Bsp_PwmWave_ApplyRequest()` 直接实现热路径，不再经过跨模块转发函数。寄存器引擎保留在独立的 `Bsp_PwmWave.c` 编译单元中，负责首次 Frame 自动释放、硬件原子提交、CH0/CH3 共同边界和 fault 关断；`Bsp_Pwm.c` 只负责 MCAL 初始化、IRQ和周期任务接入。

已删除的 `s_u32PwmWaveCommandEpoch` 原本只用于防止异步作业完成结果过期回写；当前不存在该类 BSP 异步状态机，保留它没有消费者，只会增加状态和临界区。

## 2. 初始化与首次 Frame

`Bsp_Pwm_Init()` 先执行标准 `Pwm_Init()`。Core0 随后配置 IRQ172，通过模块内部初始化服务确认 EB 已将九路 Pad 固定配置为 eFTU 输出且外部 Pad 处于 `ARMED_LOW`，最后开放 IRQ。

代码不再通过 GPIO 输出模式过渡，也不在运行时调用 PinMode 切换。复位到 `Port_Init()` 之前的低态由已确认的板级外部下拉保证；`Port_Init()` 后由 eFTU/DTM shutoff 保持低态。

完成初始化后不再自动 Start，系统持续保持 `ARMED_LOW`。应用第一次需要发波时调用：

```text
Bsp_PwmWave_ApplyRequest(BSP_PWM_WAVE_OUTPUT_FRAME, &tFrame)
```

BSP PWM Wave 硬件引擎在 shutoff 有效期间先装载并确认完整 Frame，随后自动在 CH0 边界释放输出。首次应用 Frame 到来前所有受控输出保持低，不再生成默认 Start Frame。

## 3. 普通低态与 Emergency

普通低态请求前，生命周期控制器必须先停止 20 us Frame producer，再调用 `Bsp_PwmWave_ApplyRequest(BSP_PWM_WAVE_OUTPUT_LOW, NULL_PTR)`。硬件引擎会处理最后一个可能存在的共同更新事务并在 CH0 边界进入低态。

`Bsp_PwmWave_EmergencyShutdown()` 先设置 BSP 模块唯一的系统生命周期锁存，再执行立即硬件关断。该标志运行期间永不清除，并且会阻止重新初始化、正常输出请求和 ClearFault；只有系统复位后的静态零初始化可以解除。

状态记录同时保留 `BSP_PWM_WAVE_FAULT_SOFTWARE_REQUEST` 作为故障原因；`Bsp_PwmWave_ClearFault()` 不会清除软件 Emergency。

`Bsp_PwmWave_ClearFault()` 只服务没有发生软件 Emergency 的可恢复硬件配置或超时 fault。

## 4. 周期任务

- `Bsp_Pwm_20ms_Task_Event()` 只调用模块内部低频服务，为罕见的共同更新提供超时兜底；
- `Bsp_Pwm_20us_Task_Event()` 是应用 Frame producer 的预留钩子，当前函数体不生成测试波形；
- 当前 `main_multicore.c` 调度表还没有 20 us 时基，不能把 20 ms 调用误认为 20 us；
- 10 ms/5 ms PWM Demo hook 为空，不参与 Frame 更新。

应用集成 20 us 任务后，每次 activation 最多提交一个 `OUTPUT_FRAME`；普通 `OUTPUT_LOW` 由生命周期控制器在停止 producer 后提交。20 us 任务不调用低频服务、Emergency 或 ClearFault。

## 5. 验证边界

Reference Manual 支持 TOM shadow/UPEN、通道/输出使能和 DTM shutoff 的寄存器行为，但单一 ApplyRequest 链、首次 Frame 自动释放和永久 Emergency 是项目需求与软件设计。

macOS 镜像侧源码检查不等于交付验证。仍需在 Windows 侧执行 FC IDE Refresh/Clean Build、匹配 ELF 烧录，并用 DWT/示波器验证 20 us WCET、首次输出、共同更新、普通低态和 Emergency。
