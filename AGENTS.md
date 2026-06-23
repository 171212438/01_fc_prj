# AGENTS.md

## 交流与工作方式

- 默认使用中文回答。
- 回答要专业、务实、直接，优先给工程可落地结论，再补证据、边界和风险。
- 做需求拆解、问题定位、方案设计或权衡取舍时，优先从第一性原理分析，并遵循 KISS 和 YAGNI。
- 不做无关基础科普、背景铺垫或营销式表达。
- 遇到不确定事实，先回当前工作树、Manual、PDF、源码或配置实查，不凭旧记忆下结论。

## 工程边界

- 项目顶层 Windows 真实路径简称 `win_path`：
  `D:\Workspace\FlagChip`
- 项目顶层 macOS 镜像路径简称 `mac_path`：
  `/Users/aladdinfang/Desktop/Workspace/AladdinFWP/WinShare/FlagChip`
- 当前工程目录为 `mac_path/01_fc_prj`，对应 Windows 侧 `win_path\01_fc_prj`。
- `win_path` 是开发、编译、调试和验证的真实操作面；`mac_path` 是 Codex 管理和维护用的实时镜像。
- `win_path` 和 `mac_path` 内容一一同步，`WinShare` 不是第二套独立工程；涉及真实构建、烧录、FC IDE、VS Code、Windows App 验证时，要明确这是 Windows 侧行为。
- 项目 IDE 为 FC IDE，位于 `FlagChip/00_fc_ide`；编译、调试等 IDE 行为默认以 Windows 侧 FC IDE 为准。
- 当前目录不一定是 Git 仓库根。执行 git 操作前必须先确认 `.git` 和当前分支/remote；不要假设可以 commit、push 或 reset。

## 顶层结构

- `Manual/`：本项目后续问答的第一参考源，包含 FC7300/FC7300F8MDQ 主文档、Arm 核心文档、SDK/IDE 文档、MCAL 总览和模块级手册。
- `Manual/McalConfigManual/`：MCAL 模块级 `User Manual` / `Integration Manual` 资料库。
- `DemoBoard/FC7300F8MDQ/`：当前主要 DemoBoard 工程入口。
- `DemoBoard/FC7300F8MDQ/tools/FC_Project/`：FC IDE 创建的代码工程。
- `DemoBoard/FC7300F8MDQ/tools/EB_Project/`：EB tresos Studio 创建的配置工程。
- `DemoBoard/FC7300F8MDQ/tools/FC_Project/Startup/`：FC 工具链启动文件、链接脚本和系统初始化入口。
- `DemoBoard/FC7300F8MDQ/_MCAL_multicore_generate_8M/`：EB/配置生成代码和头文件。
- `MCAL/Src/`：共享 MCAL 源码目录，不同芯片共用；芯片相关开发落在对应 `DemoBoard/<chip>` 工程中，当前重点是 `DemoBoard/FC7300F8MDQ`。
- `tmp/`、`tmp/pdfs/`：临时材料或中间文件，不要把这里当权威源。

## Manual 和 Manifest 使用规则

- 对文档类、寄存器、外设、SDK、MCAL、Errata、配置项问题，默认先查 `Manual/`。
- Manifest 是索引/导航层，不是 PDF 原文替代品。
- 默认证据链：
  `Manifest 定位 -> 源 PDF 原文确认 -> 源码/生成配置交叉验证`
- 检索时先用 `rg` 定位相关 manifest、章节、符号、API、配置项、`Search Aliases` 或 `9A. Text-Layer Search Supplement`，不要整份读取超大 manifest。
- 得到 `physical_page`、章节路径、表格/图片锚点后，再回对应 PDF 验证精确事实。
- 涉及表格数值、寄存器 bit、图中标注、截图、跨页表、Errata 规避步骤时，必须回 PDF 原文；不能只依据 manifest 摘要。
- 涉及 MCAL API 行为、初始化顺序、配置开关、生成结构体时，PDF 之后还要查 `MCAL/Src/` 和 `DemoBoard/FC7300F8MDQ/_MCAL_multicore_generate_8M/`。
- `Manual/` 根目录主手册和 `Manual/McalConfigManual/` 模块手册要分开统计、分开引用，不要混成一个结论。
- 如果需要判断 manifest 覆盖质量，检查 `source_pdf_sha256`、`pdf_page_count`、页级 locator、`9A`、`Self Check Report`、`missing_tokens`、`missing_technical_tokens`；不要只看是否存在 `.manifest.md`。
- 当前 manifest 已适合作为检索入口，但 `pass_with_warnings` 仍表示视觉、表格、截图或结构边界需要人工/PDF 复核。

## Manual 文档优先级

- 查寄存器、外设、芯片能力、内存映射、时钟/复位/中断等，优先：
  `Manual/FC7300F8MDQ_Reference_Manual_V0.5.manifest.md`
- 查电气、封装、基础规格，优先：
  `Manual/FC7300F8MDQ_Data_Sheet_V0.4.manifest.md`
- 查已知问题、限制和规避措施，必须纳入：
  `Manual/FC7300F8MDQ_Errata_Sheet_V0.5.manifest.md`
- 查 SDK 使用、示例、工程组织、API 操作流程，优先：
  `Manual/FC7300_SDK_User_Guide_V2.0.manifest.md`
  和 `Manual/FC7300F8MDQ_SDK_Quick_Start_V0.2.manifest.md`
- 查 IDE 使用，优先：
  `Manual/FC_IDE_User_Guide_V2.0.manifest.md`
- 查内核异常、NVIC、启动向量、Arm 架构行为，优先：
  `Manual/Armv7-M_Architecture_Reference_Manual.manifest.md`
  以及 Cortex-M7 相关 Arm 文档。
- 查 MCAL 总体说明，优先：
  `Manual/Mcal_User_Manual.manifest.md`
- 查 MCAL 具体模块，优先：
  `Manual/McalConfigManual/<Module>_User_Manual.manifest.md`
  和 `Manual/McalConfigManual/<Module>_Integration_Manual.manifest.md`

## MCAL 模块覆盖边界

- `Manual/McalConfigManual/` 当前覆盖这些 `MCAL/Src` 主模块：
  `Adc, Can, Crc, Crypto, Dio, Dma, Eth, EthTrcv, Fee, Fls, Gpt, I2c, Icu, Lin, Mb, Mcu, Msc, Ocu, Ospi, Pfls, Port, Pwm, Qdt, Sent, Spi, Ssi, TrgSel, Uart, Wdg`
- 这些 `MCAL/Src` 目录没有独立模块手册时，优先用 Reference Manual + 源码/配置验证：
  `Base, Common, Cordic, CryIf, Dem, EcuM, Eftu, EthIf, EthSwt, LinIf, Os, SchM, Sdadc, WdgIf`
- `Base/Common/SchM` 更像公共支撑层；`CryIf/EthIf/EthSwt/LinIf/WdgIf/Dem/EcuM/Os` 更像接口或服务层；`Cordic/Eftu/Sdadc` 更可能需要回芯片手册和源码补证。
- 兼容实际文件名拼写：
  `OCU_Integeration_Manual.*`、`Qdt_Intergration_Manual.*`

## 源码分析规则

- 查启动链时必须同时看启动汇编、链接脚本、系统初始化和应用入口，不只讲抽象流程。
- FC 工具链默认入口：
  - `DemoBoard/FC7300F8MDQ/tools/FC_Project/Startup/startup_FC7300.S`
  - `DemoBoard/FC7300F8MDQ/tools/FC_Project/Startup/FC7300_8M.ld`
  - `DemoBoard/FC7300F8MDQ/tools/FC_Project/Startup/system_init.c`
  - `DemoBoard/FC7300F8MDQ/Source/main_multicore.c`
- 典型启动链：
  `Reset_Handler -> system_init -> main -> Bsp_*_Init -> MCAL API`
- 查 `__stack_top`、`.isr_vector`、`Reset_Handler`、`__rom_intvec_start` 等符号时，要同时核对 `.S`、`.ld` 和需要时的 map/build 输出。
- 查 Demo 初始化顺序时，以 `DemoBoard/FC7300F8MDQ/Source/main_multicore.c` 和 `DemoBoard/FC7300F8MDQ/App/Source/` 为入口。
- 查 MCAL 驱动实现时，以 `MCAL/Src/<Module>/include` 和 `MCAL/Src/<Module>/src` 为入口。
- 查配置实例、宏、PostBuild 结构体时，以 `DemoBoard/FC7300F8MDQ/_MCAL_multicore_generate_8M/include` 和 `.../src` 为入口。
- 生成代码一般不要手改；除非用户明确要求，否则优先定位其上游配置和生成逻辑。

## 编辑规则

- 修改前先读相关文件和周边模式，保持原有风格、命名、目录边界和换行习惯。
- 使用 `rg` / `rg --files` 做搜索；避免宽泛递归 `grep`。
- 改动保持最小范围；不要顺手重构、重排或格式化无关文件。
- 不要删除、重命名或重写 `Manual/` 下 PDF/manifest，除非用户明确要求。
- 修 manifest 时采用最小侵入方式：保留现有章节/API/配置索引，只补必要的 `9A`、SHA、页级 locator 或 Self Check 字段；大文件先备份到 `/tmp`，不要整份重排。
- 不要复制一份 `MCAL` 到 DemoBoard；VS Code 侧用 multi-root workspace 访问共享 `MCAL`。
- 不要随意修改 `_MCAL_multicore_generate_8M/` 生成文件来掩盖配置问题。
- 不要使用破坏性命令，例如 `git reset --hard`、`git checkout -- <file>`、批量删除，除非用户明确要求并说明范围。

## VS Code / 工作区约定

- 当前主要 VS Code 入口是：
  `DemoBoard/FC7300F8MDQ/FC7300F8MDQ.code-workspace`
- 该 workspace 应同时展示：
  - `FC7300F8MDQ -> .`
  - `MCAL -> ../../MCAL`
- `.vscode` 辅助脚本位于：
  `DemoBoard/FC7300F8MDQ/.vscode/`
- 处理保存镜像、Alt+j 引用复制、IntelliSense include 问题时，优先检查 workspace、`.vscode/tasks.json`、`c_cpp_properties.json` 和 PowerShell 脚本，而不是复制目录或创建 symlink。

## 验证规则

- 文档/manifest 修改后，至少验证：
  - PDF 与 manifest 是否成对
  - `source_pdf_sha256` 是否匹配当前 PDF
  - `pdf_page_count` 是否匹配当前 PDF
  - `9A` 与 `Self Check Report` 是否仍存在
  - `missing_tokens` / `missing_technical_tokens` 是否没有新增缺口
- 源码修改后，优先做静态检索和局部编译/工程配置检查；如果需要 Windows 工具链、FC IDE、EB tresos 或真实硬件验证，要明确说明本机未执行的部分。
- 对启动、链接、内存布局问题，验证链路至少覆盖 `.S`、`.ld`、`system_init.c`，必要时再看 map 文件。
- 对 MCAL 行为问题，验证链路至少覆盖模块手册、`MCAL/Src` 实现、Demo 生成配置和调用点。
