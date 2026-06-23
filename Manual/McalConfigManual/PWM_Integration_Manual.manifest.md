---
manifest_schema_version: "1.1"
source_pdf: "PWM_Integration_Manual.pdf"
source_pdf_sha256: "3eca39525d78047c1492b53785e12965535c55698d10ba834d9afdc10ac65509"
source_pdf_size_bytes: 1060730
pdf_page_count: 16
generated_at: "2026-06-19T14:01:24Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: PWM_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `PWM_Integration_Manual.pdf`
- `source_pdf_sha256`: `3eca39525d78047c1492b53785e12965535c55698d10ba834d9afdc10ac65509`
- `source_pdf_size_bytes`: `1060730`
- `pdf_page_count`: `16`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx PWM Integration Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T14:01:24Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL PWM module - Integration Manual"
- `module_scope`: "PWM module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["PWM", "Pulse Width Modulation Driver", "AUTOSAR_SWS_PWMDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Pwm", "Ftu", "FTU", "Hrpwm", "HRPWM"]
- `summary`: "This 16-page integration manual indexes PWM content across source physical pages 1-16, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
- `retrieval_note`: "Use Page Locator Map or Page Segment Index to locate a physical page, then verify exact identifiers, tables, screenshots and wording in the source PDF."

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `None`
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["PWM", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx PWM Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["PWM", "MCAL", "FC7xxx", "FC7240", "Added", "Integration", "Date", "new"]
- `anchor`: "Revision History"

### SEC-0003-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["PWM", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["PWM", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["PWM", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["PWM", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Src", "PWM", "Pwm", "include", "src", "provides", "ins", "tresos"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Pwm", "PWM", "Src", "include", "provides", "Pwm_Ftu", "Pwm_Hw", "Pwm_PBcfg"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Pwm", "PWM", "Src", "include", "provides", "Pwm_Ftu", "Pwm_Hw", "Pwm_PBcfg"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["PWM", "Src", "Pwm", "include", "src", "ins", "tresos", "Ftu_Common"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["PWM", "These", "all", "sections", "which", "have", "aligned", "bit"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["PWM", "These", "all", "sections", "which", "have", "aligned", "bit"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["exclusive", "area", "PWM", "Pwm", "FC7xxx", "SchM", "Pwm_Hw", "Pwm_Hw_SetDutyCycle"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["PWM", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0", "FTU0_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["PWM", "PWM_E_UNINIT", "PWM_E_PARAM_CHANNEL", "PWM_E_PARAM_POINTER", "FC7xxx", "PWM_E_DUTYCYCLE_RANGE", "PWM_E_PARAM_GROUP", "Error"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["PWM", "PWM_E_UNINIT", "PWM_E_PARAM_CHANNEL", "PWM_E_DUTYCYCLE_RANGE", "PWM_E_PARAM_GROUP", "FC7xxx", "Pwm_Init", "PWM_E_ALREADY_INITIALIZED"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["PWM", "PWM_E_PARAM_POINTER", "PWM_E_UNINIT", "FC7xxx", "Pwm_SetPowerState", "PWM_E_NOT_DISENGAGED", "Pwm_GetCurrentPowerState", "Pwm_GetTargetPowerState"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR", "Integration", "needs", "called"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR", "Integration", "needs", "called"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR", "Integration", "needs", "called"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR", "Integration", "needs", "called"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR", "Integration", "needs", "called"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["PWM", "Pwm_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["PWM", "Pwm_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["PWM", "Pwm_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["PWM", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
- `anchor`: "Chapter 9 Integration Steps"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["physical_page 1"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `anchors`: ["Revision History", "Revision", "Date", "Changes"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 Introduction ............................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the PWM module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 2 Building", "2.1", "Dependencies on Other Modules", "Module configuration dependency"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["_MCAL/Src/Common/include/Compiler_Cfg.h", "_MCAL/Src/Common/include/CompilerDefinition.h", "_MCAL/Src/Common/include/Cpm_Reg.h", "_MCAL/Src/Common/include/Eth_GeneralTypes.h"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 3 Memory", "3.1", "Sections in Memory Map", "Section Name"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Section Name", "Section Type", "Description", "PWM_START_SEC_VAR_INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "PWM module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the PWM driver:", "Pwm_Hw.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `anchors`: ["Pwm_SetPowerState : exclusive area 25", "Pwm_GetCurrentPowerState : exclusive area 26", "Pwm_GetTargetPowerState : exclusive area 27", "Pwm_PreparePowerState : exclusive area 28"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `anchors`: ["Function Name", "Error Type", "Pwm_SetPowerState", "PWM_E_PARAM_POINTER;"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs to be called is PWM_Init(NULL_PTR);"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the PWM module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx PWM Integration Manual"
- `keywords`: ["PWM", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx PWM Integration Manual; Revision History; 0.1"
- `keywords`: ["PWM", "MCAL", "FC7xxx", "FC7240", "Added", "Integration", "Date", "new", "memmap", "exclusive"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `summary`: "Revision History: FC7xxx PWM Integration Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["PWM", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 Introduction ....................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx PWM Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["PWM", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the PWM module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx PWM Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Pwm", "PWM", "Src", "include", "provides", "Pwm_Ftu", "Pwm_Hw", "Pwm_PBcfg", "FC7xxx", "dependency"]
- `anchors`:
  - `p5`: "Chapter 2 Building"
  - `p5`: "2.1"
  - `p5`: "Dependencies on Other Modules"
  - `p5`: "Module configuration dependency"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx PWM Integration Manual; _MCAL/Src/Common/include/Compiler_Cfg.h; _MCAL/Src/Common/include/CompilerDefinition.h"
- `keywords`: ["PWM", "Src", "Pwm", "include", "src", "ins", "tresos", "Ftu_Common", "IRQRouter", "SpinLock"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
  - `p6`: "_MCAL/Src/Common/include/Cpm_Reg.h"
  - `p6`: "_MCAL/Src/Common/include/Eth_GeneralTypes.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx PWM Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["PWM", "These", "all", "sections", "which", "have", "aligned", "bit", "UNSPECIFIED", "RAMCODE"]
- `anchors`:
  - `p7`: "Chapter 3 Memory"
  - `p7`: "3.1"
  - `p7`: "Sections in Memory Map"
  - `p7`: "Section Name"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx PWM Integration Manual; Section Name; Section Type"
- `keywords`: ["PWM", "These", "FC7xxx", "PWM_START_SEC_VAR_INIT_16", "PWM_STOP_SEC_VAR_INIT_16", "PWM_START_SEC_VAR_INIT_32", "PWM_STOP_SEC_VAR_INIT_32", "PWM_START_SEC_VAR_INIT_UNSPECIFIED", "PWM_STOP_SEC_VAR_INIT_UNSPECIFIED", "initialized"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "PWM_START_SEC_VAR_INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx PWM Integration Manual; Chapter 4 Exclusive Area; PWM module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["PWM", "exclusive", "area", "Pwm", "FC7xxx", "SchM", "Pwm_Hw", "Pwm_Hw_SetDutyCycle", "Pwm_Hw_SetPeriodAndDuty", "Pwm_Hw_SetOutputToIdle"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "PWM module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the PWM driver:"
  - `p9`: "Pwm_Hw.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx PWM Integration Manual; Pwm_SetPowerState : exclusive area 25; Pwm_GetCurrentPowerState : exclusive area 26"
- `keywords`: ["PWM", "exclusive", "area", "FC7xxx", "Pwm_SetPowerState", "Pwm_GetCurrentPowerState", "Pwm_GetTargetPowerState", "Pwm_PreparePowerState", "Integration"]
- `anchors`:
  - `p10`: "Pwm_SetPowerState : exclusive area 25"
  - `p10`: "Pwm_GetCurrentPowerState : exclusive area 26"
  - `p10`: "Pwm_GetTargetPowerState : exclusive area 27"
  - `p10`: "Pwm_PreparePowerState : exclusive area 28"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx PWM Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["PWM", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0", "FTU0_IRQHandler", "FTU1", "FTU1_IRQHandler"]
- `anchors`:
  - `p11`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p11`: "Instance"
  - `p11`: "Interrupt Name"
  - `p11`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx PWM Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["PWM", "PWM_E_UNINIT", "PWM_E_PARAM_CHANNEL", "PWM_E_DUTYCYCLE_RANGE", "PWM_E_PARAM_GROUP", "FC7xxx", "Pwm_Init", "PWM_E_ALREADY_INITIALIZED", "PWM_E_INIT_FAILED", "PWM_E_PARAM_CONFIG"]
- `anchors`:
  - `p12`: "Chapter 6 Error Report"
  - `p12`: "6.1"
  - `p12`: "Det"
  - `p12`: "Function Name"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx PWM Integration Manual; Function Name; Error Type"
- `keywords`: ["PWM", "PWM_E_PARAM_POINTER", "PWM_E_UNINIT", "FC7xxx", "Pwm_SetPowerState", "PWM_E_NOT_DISENGAGED", "Pwm_GetCurrentPowerState", "Pwm_GetTargetPowerState", "Pwm_PreparePowerState", "Integration"]
- `anchors`:
  - `p13`: "Function Name"
  - `p13`: "Error Type"
  - `p13`: "Pwm_SetPowerState"
  - `p13`: "PWM_E_PARAM_POINTER;"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx PWM Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR", "Integration", "needs", "called"]
- `anchors`:
  - `p14`: "Chapter 7 Function Calls"
  - `p14`: "7.1"
  - `p14`: "Function Calls during Startup"
  - `p14`: "The API needs to be called is PWM_Init(NULL_PTR);"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx PWM Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["PWM", "Pwm_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FTU0_IRQHandler", "Notification"]
- `anchors`:
  - `p15`: "Chapter 8 Other Requirements"
  - `p15`: "8.1"
  - `p15`: "Notification, Callback, Callout"
  - `p15`: "Notification"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx PWM Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["PWM", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p16`: "Chapter 9 Integration Steps"
  - `p16`: "1)"
  - `p16`: "Configure the PWM module and generate configuration files (please refer to Building chapter for details)."
  - `p16`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 240.42]`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes a table or table-like region related to Revision History."
- `anchor`: "Revision History"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0003-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0003-001"
- `caption`: "Revision History"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Revision History"
- `bbox`: `None`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes table-like source content for Revision History; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Revision History"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0005-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0005-001"
- `caption`: "Table-like content on page 5"
- `physical_pages`: `5`
- `printed_pages`: ["5"]
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `bbox`: `None`
- `key_fields`: ["Pwm", "PWM", "Src", "include", "provides"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Table-like content on page 6"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `bbox`: `None`
- `key_fields`: ["PWM", "Src", "Pwm", "include", "src"]
- `summary`: "Indexes table-like source content for Table-like content on page 6; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 6"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 123.12, 564.72, 787.14]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 37.27, 564.72, 496.5]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 125.4, 564.72, 352.02]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like region on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 775.28]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like region on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.6, 37.25, 564.72, 209.12]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 13."
- `anchor`: "Table-like region on page 13"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0014-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0014-001"
- `caption`: "Table-like content on page 14"
- `physical_pages`: `14`
- `printed_pages`: ["14"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["PWM", "Calls", "FC7xxx", "PWM_Init", "NULL_PTR"]
- `summary`: "Indexes table-like source content for Table-like content on page 14; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 14"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-FTU0-IRQHANDLER
- `name`: "FTU0_IRQHandler"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,15`
- `brief`: "api index entry for `FTU0_IRQHandler`."
- `anchors`:
  - `p11`: "FTU0_IRQHandler"
  - `p15`: "void FTU0_IRQHandler(void)"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 5 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p11`: "Chapter 5 Interrupt Service Routine (ISR)"
- `aliases`: []

### API-PWM-INIT
- `name`: "PWM_Init"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "api index entry for `PWM_Init`."
- `anchors`:
  - `p14`: "The API needs to be called is PWM_Init(NULL_PTR);"
- `aliases`: []

### API-CODE
- `name`: "Code"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "api index entry for `Code`."
- `anchors`:
  - `p7`: "Code"
- `aliases`: []

### API-MANGER
- `name`: "Manger"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `Manger`."
- `anchors`:
  - `p9`: "PWM module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p11`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-PWM-DISABLENOTIFICATION
- `name`: "Pwm_DisableNotification"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "config index entry for `Pwm_DisableNotification`."
- `anchors`:
  - `p9`: "Pwm_DisableNotification : exclusive area 18"
  - `p12`: "Pwm_DisableNotification"
- `aliases`: []

### CFG-PWM-ENABLENOTIFICATION
- `name`: "Pwm_EnableNotification"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "config index entry for `Pwm_EnableNotification`."
- `anchors`:
  - `p9`: "Pwm_EnableNotification : exclusive area 19"
  - `p12`: "Pwm_EnableNotification"
- `aliases`: []

### CFG-PWM-GETCHANNELSTATE
- `name`: "Pwm_GetChannelState"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "config index entry for `Pwm_GetChannelState`."
- `anchors`:
  - `p9`: "Pwm_GetChannelState : exclusive area 20"
  - `p12`: "Pwm_GetChannelState"
- `aliases`: []

### CFG-PWM-FTU-DISABLENOTIFICATION
- `name`: "Pwm_Ftu_DisableNotification"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Pwm_Ftu_DisableNotification`."
- `anchors`:
  - `p9`: "Pwm_Ftu_DisableNotification : exclusive area 4"
- `aliases`: []

### CFG-PWM-FTU-ENABLENOTIFICATION
- `name`: "Pwm_Ftu_EnableNotification"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Pwm_Ftu_EnableNotification`."
- `anchors`:
  - `p9`: "Pwm_Ftu_EnableNotification : exclusive area 5"
- `aliases`: []

### MACRO-PWM-E-UNINIT
- `name`: "PWM_E_UNINIT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `PWM_E_UNINIT`."
- `anchors`:
  - `p12`: "PWM_E_UNINIT"
  - `p13`: "PWM_E_UNINIT;"
- `aliases`: []

### MACRO-PWM-E-PARAM-POINTER
- `name`: "PWM_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `PWM_E_PARAM_POINTER`."
- `anchors`:
  - `p12`: "PWM_E_PARAM_POINTER"
  - `p13`: "PWM_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,15`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p14`: "The API needs to be called is PWM_Init(NULL_PTR);"
  - `p15`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"
- `aliases`: []

### MACRO-PWM-E-PARAM-CHANNEL
- `name`: "PWM_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PARAM_CHANNEL`."
- `anchors`:
  - `p12`: "PWM_E_PARAM_CHANNEL;"
- `aliases`: []

### MACRO-FTU-0-ISR
- `name`: "FTU_0_ISR"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `FTU_0_ISR`."
- `anchors`:
  - `p15`: "extern ISR(FTU_0_ISR);"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p15`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-PWM-E-DUTYCYCLE-RANGE
- `name`: "PWM_E_DUTYCYCLE_RANGE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_DUTYCYCLE_RANGE`."
- `anchors`:
  - `p12`: "PWM_E_DUTYCYCLE_RANGE"
- `aliases`: []

### MACRO-PWM-E-PARAM-GROUP
- `name`: "PWM_E_PARAM_GROUP"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PARAM_GROUP`."
- `anchors`:
  - `p12`: "PWM_E_PARAM_GROUP"
- `aliases`: []

### MACRO-PWM-START-SEC-CODE
- `name`: "PWM_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CODE`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CODE"
- `aliases`: []

### MACRO-PWM-START-SEC-CODE-AC
- `name`: "PWM_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-PWM-START-SEC-CONFIG-DATA-16
- `name`: "PWM_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-PWM-START-SEC-CONFIG-DATA-32
- `name`: "PWM_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-PWM-START-SEC-CONFIG-DATA-8
- `name`: "PWM_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-PWM-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "PWM_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-PWM-START-SEC-CONST-16
- `name`: "PWM_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONST_16"
- `aliases`: []

### MACRO-PWM-START-SEC-CONST-32
- `name`: "PWM_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONST_32"
- `aliases`: []

### MACRO-PWM-START-SEC-CONST-8
- `name`: "PWM_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONST_8"
- `aliases`: []

### MACRO-PWM-START-SEC-CONST-BOOLEAN
- `name`: "PWM_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-16
- `name`: "PWM_START_SEC_VAR_INIT_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_16"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-32
- `name`: "PWM_START_SEC_VAR_INIT_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_32"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-8
- `name`: "PWM_START_SEC_VAR_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_INIT_8"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-BOOLEAN
- `name`: "PWM_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_INIT_BOOLEAN"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "PWM_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-16
- `name`: "PWM_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-32
- `name`: "PWM_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-8
- `name`: "PWM_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "PWM_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-PWM-START-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CODE
- `name`: "PWM_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CODE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CODE-AC
- `name`: "PWM_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONFIG-DATA-16
- `name`: "PWM_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONFIG-DATA-32
- `name`: "PWM_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONFIG-DATA-8
- `name`: "PWM_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONST-16
- `name`: "PWM_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONST-32
- `name`: "PWM_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONST-8
- `name`: "PWM_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONST-BOOLEAN
- `name`: "PWM_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-16
- `name`: "PWM_STOP_SEC_VAR_INIT_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_16"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-32
- `name`: "PWM_STOP_SEC_VAR_INIT_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_32"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-8
- `name`: "PWM_STOP_SEC_VAR_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_INIT_8"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "PWM_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_INIT_BOOLEAN"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "PWM_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-16
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-32
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-8
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `aliases`: []

### MACRO-PWM-STOP-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-PWM-E-ALREADY-INITIALIZED
- `name`: "PWM_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p12`: "PWM_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-PWM-E-INIT-FAILED
- `name`: "PWM_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_INIT_FAILED`."
- `anchors`:
  - `p12`: "PWM_E_INIT_FAILED"
- `aliases`: []

### MACRO-PWM-E-NOT-DISENGAGED
- `name`: "PWM_E_NOT_DISENGAGED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `PWM_E_NOT_DISENGAGED`."
- `anchors`:
  - `p13`: "PWM_E_NOT_DISENGAGED"
- `aliases`: []

### MACRO-PWM-E-PARAM-CONFIG
- `name`: "PWM_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PARAM_CONFIG`."
- `anchors`:
  - `p12`: "PWM_E_PARAM_CONFIG"
- `aliases`: []

### MACRO-PWM-E-PARAM-NOTIFICATION
- `name`: "PWM_E_PARAM_NOTIFICATION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PARAM_NOTIFICATION`."
- `anchors`:
  - `p12`: "PWM_E_PARAM_NOTIFICATION_NULL;"
- `aliases`: []

### MACRO-PWM-E-PARAM-NOTIFICATION-NULL
- `name`: "PWM_E_PARAM_NOTIFICATION_NULL"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PARAM_NOTIFICATION_NULL`."
- `anchors`:
  - `p12`: "PWM_E_PARAM_NOTIFICATION_NULL;"
- `aliases`: []

### MACRO-PWM-E-PERIODVALUE
- `name`: "PWM_E_PERIODVALUE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PERIODVALUE`."
- `anchors`:
  - `p12`: "PWM_E_PERIODVALUE"
- `aliases`: []

### MACRO-PWM-E-PERIOD-UNCHANGEABLE
- `name`: "PWM_E_PERIOD_UNCHANGEABLE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `PWM_E_PERIOD_UNCHANGEABLE`."
- `anchors`:
  - `p12`: "PWM_E_PERIOD_UNCHANGEABLE;"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p15`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to"
- `aliases`: []

### MEM-PWM-START-SEC
- `name`: "PWM_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_START_SEC_`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-PWM-START-SEC-CONST
- `name`: "PWM_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-PWM-START-SEC-CONST-UNSPECIFIED
- `name`: "PWM_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PWM_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-PWM-START-SEC-RAMCODE
- `name`: "PWM_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "PWM_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-PWM-STOP-SEC
- `name`: "PWM_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_STOP_SEC_`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-PWM-STOP-SEC-CONST
- `name`: "PWM_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-PWM-STOP-SEC-CONST-UNSPECIFIED
- `name`: "PWM_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-PWM-STOP-SEC-RAMCODE
- `name`: "PWM_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PWM_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_ RAMCODE"
- `aliases`: []

### FILE-PWM-CFG-H
- `name`: "Pwm_Cfg.h"
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "file index entry for `Pwm_Cfg.h`."
- `anchors`:
  - `p15`: "Pwm_Cfg.h. User need implement the notification in any file which include Pwm_Cfg.h."
- `aliases`: []

### FILE-DET-H
- `name`: "Det.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Det.h`."
- `anchors`:
  - `p6`: "Det.h"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p15`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-PWM-C
- `name`: "Pwm.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Pwm.c`."
- `anchors`:
  - `p9`: "Pwm.c:"
- `aliases`: []

### FILE-PWM-FTU-C
- `name`: "Pwm_Ftu.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Pwm_Ftu.c`."
- `anchors`:
  - `p9`: "Pwm_Ftu.c:"
- `aliases`: []

### FILE-PWM-HW-C
- `name`: "Pwm_Hw.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Pwm_Hw.c`."
- `anchors`:
  - `p9`: "Pwm_Hw.c:"
- `aliases`: []

### FILE-SCHM-PWM-H
- `name`: "SchM_Pwm.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Pwm.h`."
- `anchors`:
  - `p6`: "SchM_Pwm.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-AONTIMER-REG-H
- `name`: "_MCAL/Src/Common/include/Aontimer_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Aontimer_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Aontimer_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMMON-MEMMAP-H
- `name`: "_MCAL/Src/Common/include/Common_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Common_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Common_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILERDEFINITION-H
- `name`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/CompilerDefinition.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler_Cfg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-CPM-REG-H
- `name`: "_MCAL/Src/Common/include/Cpm_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Cpm_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Cpm_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-ETH-GENERALTYPES-H
- `name`: "_MCAL/Src/Common/include/Eth_GeneralTypes.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Eth_GeneralTypes.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Eth_GeneralTypes.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FCPIT-REG-H
- `name`: "_MCAL/Src/Common/include/Fcpit_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Fcpit_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Fcpit_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FTU-COMMON-H
- `name`: "_MCAL/Src/Common/include/Ftu_Common.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Ftu_Common.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_Common.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FTU-REG-H
- `name`: "_MCAL/Src/Common/include/Ftu_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Ftu_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FTU-REGOPS-H
- `name`: "_MCAL/Src/Common/include/Ftu_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Ftu_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-GPIO-REG-H
- `name`: "_MCAL/Src/Common/include/Gpio_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Gpio_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Gpio_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-IRQROUTER-H
- `name`: "_MCAL/Src/Common/include/IRQRouter.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/IRQRouter.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/IRQRouter.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MB-REG-H
- `name`: "_MCAL/Src/Common/include/Mb_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mb_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mb_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MB-REGOPS-H
- `name`: "_MCAL/Src/Common/include/Mb_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mb_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mb_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MCAL-H
- `name`: "_MCAL/Src/Common/include/Mcal.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mcal.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mcal.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: "_MCAL/Src/Common/include/Platform_Types.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Platform_Types.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PORT-REG-H
- `name`: "_MCAL/Src/Common/include/Port_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Port_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Port_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SCM-REG-H
- `name`: "_MCAL/Src/Common/include/Scm_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Scm_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Scm_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SCM-REGOPS-H
- `name`: "_MCAL/Src/Common/include/Scm_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Scm_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Scm_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SPINLOCK-H
- `name`: "_MCAL/Src/Common/include/SpinLock.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/SpinLock.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/SpinLock.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-STDREGMACROS-H
- `name`: "_MCAL/Src/Common/include/StdRegMacros.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/StdRegMacros.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/StdRegMacros.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-TSTMP-REG-H
- `name`: "_MCAL/Src/Common/include/Tstmp_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Tstmp_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Tstmp_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-ARM-CORTEX-ASM-H
- `name`: "_MCAL/Src/Common/include/arm_cortex_asm.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/arm_cortex_asm.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/arm_cortex_asm.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-AONTIMER-COMMON-C
- `name`: "_MCAL/Src/Common/src/Aontimer_Common.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/src/Aontimer_Common.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Aontimer_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-FTU-COMMON-C
- `name`: "_MCAL/Src/Common/src/Ftu_Common.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/src/Ftu_Common.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Ftu_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-IRQROUTER-C
- `name`: "_MCAL/Src/Common/src/IRQRouter.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/src/IRQRouter.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/IRQRouter.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-PORT-COMMON-C
- `name`: "_MCAL/Src/Common/src/Port_Common.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/src/Port_Common.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Port_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-SPINLOCK-C
- `name`: "_MCAL/Src/Common/src/SpinLock.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/src/SpinLock.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/SpinLock.c"
- `aliases`: []

### FILE-MCAL-SRC-PWM-SRC-PWM-C
- `name`: "_MCAL/Src/Pwm/Src/Pwm.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/Src/Pwm.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/Src/Pwm.c"
- `aliases`: []

### FILE-MCAL-SRC-PWM-SRC-PWM-FTU-C
- `name`: "_MCAL/Src/Pwm/Src/Pwm_Ftu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/Src/Pwm_Ftu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/Src/Pwm_Ftu.c"
- `aliases`: []

### FILE-MCAL-SRC-PWM-SRC-PWM-HW-C
- `name`: "_MCAL/Src/Pwm/Src/Pwm_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/Src/Pwm_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/Src/Pwm_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-H
- `name`: "_MCAL/Src/Pwm/include/Pwm.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm.h"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-FTU-H
- `name`: "_MCAL/Src/Pwm/include/Pwm_Ftu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm_Ftu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_Ftu.h"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-FTU-TYPES-H
- `name`: "_MCAL/Src/Pwm/include/Pwm_Ftu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm_Ftu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_Ftu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-HW-H
- `name`: "_MCAL/Src/Pwm/include/Pwm_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-HW-TYPES-H
- `name`: "_MCAL/Src/Pwm/include/Pwm_Hw_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm_Hw_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_Hw_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-MEMMAP-H
- `name`: "_MCAL/Src/Pwm/include/Pwm_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-PWM-INCLUDE-PWM-VERSION-H
- `name`: "_MCAL/Src/Pwm/include/Pwm_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Pwm/include/Pwm_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-PWM-CFG-H
- `name`: "_MCAL_generate/include/Pwm_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Pwm_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Pwm_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-PWM-PBCFG-H
- `name`: "_MCAL_generate/include/Pwm_PBcfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Pwm_PBcfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Pwm_PBcfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-PWM-PBCFG-C
- `name`: "_MCAL_generate/src/Pwm_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Pwm_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Pwm_PBcfg.c"
- `aliases`: []

### TERM-PWM
- `name`: "PWM"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `PWM`."
- `anchors`:
  - `p1`: "PWM"
  - `p2`: "PWM"
  - `p3`: "PWM"
  - `p4`: "PWM"
  - `p5`: "PWM"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,12`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p12`: "Det"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,5,6`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p5`: "MCAL"
  - `p6`: "MCAL"
- `aliases`: []

### TERM-PWM-CFG
- `name`: "Pwm_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,15`
- `brief`: "term index entry for `Pwm_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Pwm_Cfg.h"
  - `p15`: "Pwm_Cfg.h. User need implement the notification in any file which include Pwm_Cfg.h."
- `aliases`: []

### TERM-PWM-FTU
- `name`: "Pwm_Ftu"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `Pwm_Ftu`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/Src/Pwm_Ftu.c"
  - `p9`: "Pwm_Ftu.c:"
- `aliases`: []

### TERM-PWM-HW
- `name`: "Pwm_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `Pwm_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/Src/Pwm_Hw.c"
  - `p9`: "Pwm_Hw.c:"
- `aliases`: []

### TERM-PWM-DEINIT
- `name`: "Pwm_DeInit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_DeInit`."
- `anchors`:
  - `p9`: "Pwm_DeInit : exclusive area 14"
  - `p12`: "Pwm_DeInit"
- `aliases`: []

### TERM-PWM-DISABLETRIGGEROUT
- `name`: "Pwm_DisableTriggerOut"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_DisableTriggerOut`."
- `anchors`:
  - `p9`: "Pwm_DisableTriggerOut : exclusive area 22"
  - `p12`: "Pwm_DisableTriggerOut"
- `aliases`: []

### TERM-PWM-ENABLETRIGGEROUT
- `name`: "Pwm_EnableTriggerOut"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_EnableTriggerOut`."
- `anchors`:
  - `p9`: "Pwm_EnableTriggerOut : exclusive area 21"
  - `p12`: "Pwm_EnableTriggerOut"
- `aliases`: []

### TERM-PWM-GETCURRENTPOWERSTATE
- `name`: "Pwm_GetCurrentPowerState"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "term index entry for `Pwm_GetCurrentPowerState`."
- `anchors`:
  - `p10`: "Pwm_GetCurrentPowerState : exclusive area 26"
  - `p13`: "Pwm_GetCurrentPowerState"
- `aliases`: []

### TERM-PWM-GETTARGETPOWERSTATE
- `name`: "Pwm_GetTargetPowerState"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "term index entry for `Pwm_GetTargetPowerState`."
- `anchors`:
  - `p10`: "Pwm_GetTargetPowerState : exclusive area 27"
  - `p13`: "Pwm_GetTargetPowerState"
- `aliases`: []

### TERM-PWM-INIT
- `name`: "Pwm_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_Init`."
- `anchors`:
  - `p9`: "Pwm_Init : exclusive area 13"
  - `p12`: "Pwm_Init"
- `aliases`: []

### TERM-PWM-MASKOUTPUTS
- `name`: "Pwm_MaskOutputs"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_MaskOutputs`."
- `anchors`:
  - `p9`: "Pwm_MaskOutputs : exclusive area 23"
  - `p12`: "Pwm_MaskOutputs"
- `aliases`: []

### TERM-PWM-PREPAREPOWERSTATE
- `name`: "Pwm_PreparePowerState"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "term index entry for `Pwm_PreparePowerState`."
- `anchors`:
  - `p10`: "Pwm_PreparePowerState : exclusive area 28"
  - `p13`: "Pwm_PreparePowerState"
- `aliases`: []

### TERM-PWM-SETDUTYCYCLE
- `name`: "Pwm_SetDutyCycle"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_SetDutyCycle`."
- `anchors`:
  - `p9`: "Pwm_SetDutyCycle : exclusive area 15"
  - `p12`: "Pwm_SetDutyCycle"
- `aliases`: []

### TERM-PWM-SETOUTPUTTOIDLE
- `name`: "Pwm_SetOutputToIdle"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_SetOutputToIdle`."
- `anchors`:
  - `p9`: "Pwm_SetOutputToIdle : exclusive area 17"
  - `p12`: "Pwm_SetOutputToIdle"
- `aliases`: []

### TERM-PWM-SETPERIODANDDUTY
- `name`: "Pwm_SetPeriodAndDuty"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_SetPeriodAndDuty`."
- `anchors`:
  - `p9`: "Pwm_SetPeriodAndDuty : exclusive area 16"
  - `p12`: "Pwm_SetPeriodAndDuty"
- `aliases`: []

### TERM-PWM-SETPOWERSTATE
- `name`: "Pwm_SetPowerState"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "term index entry for `Pwm_SetPowerState`."
- `anchors`:
  - `p10`: "Pwm_SetPowerState : exclusive area 25"
  - `p13`: "Pwm_SetPowerState"
- `aliases`: []

### TERM-PWM-UNMASKOUTPUTS
- `name`: "Pwm_UnMaskOutputs"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Pwm_UnMaskOutputs`."
- `anchors`:
  - `p9`: "Pwm_UnMaskOutputs : exclusive area 24"
  - `p12`: "Pwm_UnMaskOutputs"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,13`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p13`: "Dem"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p5`: "Rte"
  - `p6`: "Rte"
- `aliases`: []

### TERM-FTU-COMMON
- `name`: "Ftu_Common"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Ftu_Common`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_Common.h"
- `aliases`: []

### TERM-PWM-PBCFG
- `name`: "Pwm_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Pwm_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Pwm_PBcfg.c"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p15`: "AUTOSAR"
- `aliases`: []

### TERM-COMMON-MEMMAP
- `name`: "Common_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Common_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Common_MemMap.h"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p6`: "EB tresos"
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p6`: "Copy the PWM module(_MCAL/EB_Plugins/eclipse/plugins/Pwm) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-FTU10-IRQHANDLER
- `name`: "FTU10_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU10_IRQHandler`."
- `anchors`:
  - `p11`: "FTU10_IRQHandler"
- `aliases`: []

### TERM-FTU11-IRQHANDLER
- `name`: "FTU11_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU11_IRQHandler`."
- `anchors`:
  - `p11`: "FTU11_IRQHandler"
- `aliases`: []

### TERM-FTU1-IRQHANDLER
- `name`: "FTU1_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU1_IRQHandler`."
- `anchors`:
  - `p11`: "FTU1_IRQHandler"
- `aliases`: []

### TERM-FTU2-IRQHANDLER
- `name`: "FTU2_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU2_IRQHandler`."
- `anchors`:
  - `p11`: "FTU2_IRQHandler"
- `aliases`: []

### TERM-FTU3-IRQHANDLER
- `name`: "FTU3_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU3_IRQHandler`."
- `anchors`:
  - `p11`: "FTU3_IRQHandler"
- `aliases`: []

### TERM-FTU4-IRQHANDLER
- `name`: "FTU4_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU4_IRQHandler`."
- `anchors`:
  - `p11`: "FTU4_IRQHandler"
- `aliases`: []

### TERM-FTU5-IRQHANDLER
- `name`: "FTU5_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU5_IRQHandler`."
- `anchors`:
  - `p11`: "FTU5_IRQHandler"
- `aliases`: []

### TERM-FTU6-IRQHANDLER
- `name`: "FTU6_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU6_IRQHandler`."
- `anchors`:
  - `p11`: "FTU6_IRQHandler"
- `aliases`: []

### TERM-FTU7-IRQHANDLER
- `name`: "FTU7_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU7_IRQHandler`."
- `anchors`:
  - `p11`: "FTU7_IRQHandler"
- `aliases`: []

### TERM-FTU8-IRQHANDLER
- `name`: "FTU8_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU8_IRQHandler`."
- `anchors`:
  - `p11`: "FTU8_IRQHandler"
- `aliases`: []

### TERM-FTU9-IRQHANDLER
- `name`: "FTU9_IRQHandler"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `FTU9_IRQHandler`."
- `anchors`:
  - `p11`: "FTU9_IRQHandler"
- `aliases`: []

### TERM-FTU-REG
- `name`: "Ftu_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Ftu_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_Reg.h"
- `aliases`: []

### TERM-FTU-REGOPS
- `name`: "Ftu_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Ftu_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_RegOps.h"
- `aliases`: []

### TERM-PORT-COMMON
- `name`: "Port_Common"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Port_Common`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Port_Common.c"
- `aliases`: []

### TERM-PORT-REG
- `name`: "Port_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Port_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Port_Reg.h"
- `aliases`: []

### TERM-PULSE-WIDTH-MODULATION-DRIVER
- `name`: "Pulse Width Modulation Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Pulse Width Modulation Driver`."
- `anchors`:
  - `p1`: "Pulse Width Modulation Driver"
- `aliases`: []

### TERM-PWM-FTU-CLEAROUTPUTFORCE
- `name`: "Pwm_Ftu_ClearOutputForce"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_ClearOutputForce`."
- `anchors`:
  - `p9`: "Pwm_Ftu_ClearOutputForce : exclusive area 2"
- `aliases`: []

### TERM-PWM-FTU-DISABLETRIGGEROUT
- `name`: "Pwm_Ftu_DisableTriggerOut"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_DisableTriggerOut`."
- `anchors`:
  - `p9`: "Pwm_Ftu_DisableTriggerOut : exclusive area 7"
- `aliases`: []

### TERM-PWM-FTU-ENABLETRIGGEROUT
- `name`: "Pwm_Ftu_EnableTriggerOut"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_EnableTriggerOut`."
- `anchors`:
  - `p9`: "Pwm_Ftu_EnableTriggerOut : exclusive area 6"
- `aliases`: []

### TERM-PWM-FTU-MASKOUTPUTS
- `name`: "Pwm_Ftu_MaskOutputs"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_MaskOutputs`."
- `anchors`:
  - `p9`: "Pwm_Ftu_MaskOutputs : exclusive area 8"
- `aliases`: []

### TERM-PWM-FTU-SETDUTYCYCLE
- `name`: "Pwm_Ftu_SetDutyCycle"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_SetDutyCycle`."
- `anchors`:
  - `p9`: "Pwm_Ftu_SetDutyCycle : exclusive area 0"
- `aliases`: []

### TERM-PWM-FTU-SETOUTPUTTOIDLE
- `name`: "Pwm_Ftu_SetOutputToIdle"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_SetOutputToIdle`."
- `anchors`:
  - `p9`: "Pwm_Ftu_SetOutputToIdle : exclusive area 3"
- `aliases`: []

### TERM-PWM-FTU-SETPERIODANDDUTY
- `name`: "Pwm_Ftu_SetPeriodAndDuty"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_SetPeriodAndDuty`."
- `anchors`:
  - `p9`: "Pwm_Ftu_SetPeriodAndDuty : exclusive area 1"
- `aliases`: []

### TERM-PWM-FTU-TYPES
- `name`: "Pwm_Ftu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Pwm_Ftu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_Ftu_Types.h"
- `aliases`: []

### TERM-PWM-FTU-UNMASKOUTPUTS
- `name`: "Pwm_Ftu_UnMaskOutputs"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Ftu_UnMaskOutputs`."
- `anchors`:
  - `p9`: "Pwm_Ftu_UnMaskOutputs : exclusive area 9"
- `aliases`: []

### TERM-PWM-GETOUTPUTSTATE
- `name`: "Pwm_GetOutputState"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Pwm_GetOutputState`."
- `anchors`:
  - `p12`: "Pwm_GetOutputState"
- `aliases`: []

### TERM-PWM-GETVERSIONINFO
- `name`: "Pwm_GetVersionInfo"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Pwm_GetVersionInfo`."
- `anchors`:
  - `p12`: "Pwm_GetVersionInfo"
- `aliases`: []

### TERM-PWM-HW-SETDUTYCYCLE
- `name`: "Pwm_Hw_SetDutyCycle"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Hw_SetDutyCycle`."
- `anchors`:
  - `p9`: "Pwm_Hw_SetDutyCycle : exclusive area 10"
- `aliases`: []

### TERM-PWM-HW-SETOUTPUTTOIDLE
- `name`: "Pwm_Hw_SetOutputToIdle"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Hw_SetOutputToIdle`."
- `anchors`:
  - `p9`: "Pwm_Hw_SetOutputToIdle : exclusive area 12"
- `aliases`: []

### TERM-PWM-HW-SETPERIODANDDUTY
- `name`: "Pwm_Hw_SetPeriodAndDuty"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Pwm_Hw_SetPeriodAndDuty`."
- `anchors`:
  - `p9`: "Pwm_Hw_SetPeriodAndDuty : exclusive area 11"
- `aliases`: []

### TERM-PWM-HW-TYPES
- `name`: "Pwm_Hw_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Pwm_Hw_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_Hw_Types.h"
- `aliases`: []

### TERM-PWM-MEMMAP
- `name`: "Pwm_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Pwm_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_MemMap.h"
- `aliases`: []

### TERM-PWM-STARTGLOBALTIME
- `name`: "Pwm_StartGlobalTime"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Pwm_StartGlobalTime`."
- `anchors`:
  - `p12`: "Pwm_StartGlobalTime"
- `aliases`: []

### TERM-PWM-STOPGLOBALTIME
- `name`: "Pwm_StopGlobalTime"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Pwm_StopGlobalTime`."
- `anchors`:
  - `p12`: "Pwm_StopGlobalTime"
- `aliases`: []

### TERM-PWM-VERSION
- `name`: "Pwm_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Pwm_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Pwm/include/Pwm_version.h"
- `aliases`: []

### TERM-SCHM-PWM
- `name`: "SchM_Pwm"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Pwm`."
- `anchors`:
  - `p6`: "SchM_Pwm.h"
- `aliases`: []

### TERM-STDREGMACROS
- `name`: "StdRegMacros"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `StdRegMacros`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/StdRegMacros.h"
- `aliases`: []

## 9. Search Aliases

### ALIAS-PWM
- `canonical`: "PWM"
- `aliases`: ["Pulse Width Modulation Driver", "脉宽调制驱动", "PWM module", "PWM driver", "PWM User Manual", "PWM Integration Manual"]
- `related_ids`: ["TERM-PWM"]

### ALIAS-AUTOSAR
- `canonical`: "AUTOSAR"
- `aliases`: ["AUTOSAR Classic", "AUTOSAR CP", "AUTOSAR 4.6.0", "Classic Platform", "汽车开放系统架构"]
- `related_ids`: []

### ALIAS-MCAL
- `canonical`: "MCAL"
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "MCAL driver", "底层驱动"]
- `related_ids`: []

### ALIAS-EB-TRESOS
- `canonical`: "EB tresos"
- `aliases`: ["EB Tresos Studio", "Tresos", "EB tool", "EB plugins", "配置工具"]
- `related_ids`: []

### ALIAS-DET
- `canonical`: "DET"
- `aliases`: ["Default Error Tracer", "development error", "Det_ReportError", "开发错误检测"]
- `related_ids`: []

### ALIAS-DEM
- `canonical`: "DEM"
- `aliases`: ["Diagnostic Event Manager", "diagnostic error", "Dem event", "诊断事件管理"]
- `related_ids`: []

### ALIAS-RTE
- `canonical`: "RTE"
- `aliases`: ["Runtime Environment", "SchM", "exclusive area", "运行时环境"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between PWM_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `PWM_Integration_Manual.pdf`
- `source_pdf_sha256`: `3eca39525d78047c1492b53785e12965535c55698d10ba834d9afdc10ac65509`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `87`
- `technical_missing_terms_added`: `9`
- `pages_with_added_terms`: `15`
- `supplemented_missing_token_count`: `87`
- `supplemented_missing_technical_token_count`: `9`
- `supplemented_physical_pages_count`: `15`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.3"
  - "0.4"
  - "1.0"
  - "3.0"
  - "4.0"
  - "Confidential"
  - "Flagchip"
  - "Initial"
  - "Proprietary"
  - "code"
  - "release"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "APIs"
  - "Areas"
  - "Confidential"
  - "Development"
  - "ECUC"
  - "EcuC"
  - "Flagchip"
  - "MCU"
  - "Mcu"
  - "PMW"
  - "Port"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "clock"
  - "code"
  - "common"
  - "configurations"
  - "core"
  - "detection"
  - "drivers"
  - "enabled"
  - "enabling"
  - "first"
  - "functionality"
  - "initialization"
  - "initialize"
  - "interrupts"
  - "mapping"
  - "modules"
  - "multi"
  - "necessary"
  - "other"
  - "output"
  - "partitions"
  - "parts"
  - "pin"
  - "point"
  - "port"
  - "protect"
  - "reference"
  - "signal"
  - "some"
  - "through"
  - "unprotect"
  - "use"
  - "want"
  - "when"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Set"
  - "add"
  - "configure"
  - "developed"
  - "first"
  - "header"
  - "location"
  - "output"
  - "use"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "Proprietary"
  - "Start"
  - "Variables"
  - "boolean"
  - "bss"
  - "cleared"
  - "code"
  - "never"
  - "read"
  - "rodata"
  - "startup"
  - "stop"
  - "variables"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Variables"
  - "code"
  - "mcal_nocacheable_bss"
  - "mcal_nocacheable_data"
  - "never"
  - "nocacheable"
  - "placed"
  - "startup"
  - "variables"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "define"
  - "example"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "linker"
  - "locations"
  - "modules"
  - "other"
  - "their"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16`
- `affected_ids`: []
- `message`: "PDF has an extractable text layer; OCR was not executed. Screenshots/diagrams were indexed but not OCR-transcribed."
- `recommended_action`: "Use the source PDF page for image-internal text or rerun generation with OCR if visual text must be indexed."

### WARN-0002
- `severity`: `medium`
- `category`: `outline`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "PDF has no internal outline/bookmarks; section index was generated from visible headings and table-of-contents text."
- `recommended_action`: "Use physical_page and anchors as authoritative locators; verify generated section ranges."

### WARN-0003
- `severity`: `low`
- `category`: `sparse_text`
- `physical_pages`: `1`
- `affected_ids`: []
- `message`: "Detected 1 sparse-text page(s), usually cover/blank/diagram-heavy pages."
- `recommended_action`: "Use page render/source PDF for visual confirmation."

### WARN-0004
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `3,5,6,11,12,13,14`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001"]
- `message`: "7 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `revision_history`
- `physical_pages`: `2`
- `affected_ids`: []
- `message`: "Revision history dates are not strictly monotonic in displayed order; this appears to be a source-document issue."
- `recommended_action`: "Preserve source revision rows and verify with document owner if version chronology matters."

### WARN-0006
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `16`
- `indexed_physical_pages_count`: `16`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `26`
- `table_index_count`: `10`
- `figure_index_count`: `0`
- `symbol_index_count`: `208`
- `alias_index_count`: `7`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `3eca39525d78047c1492b53785e12965535c55698d10ba834d9afdc10ac65509`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `87`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->