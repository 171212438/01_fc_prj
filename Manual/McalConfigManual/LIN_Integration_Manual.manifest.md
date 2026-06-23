---
manifest_schema_version: "1.1"
source_pdf: "LIN_Integration_Manual.pdf"
source_pdf_sha256: "984184e707bc0fa01a0f03d746312bbe4e81c96fba24684a9656739040aceb17"
source_pdf_size_bytes: 1010639
pdf_page_count: 14
generated_at: "2026-06-19T13:04:06Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.3"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: LIN_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `LIN_Integration_Manual.pdf`
- `source_pdf_sha256`: `984184e707bc0fa01a0f03d746312bbe4e81c96fba24684a9656739040aceb17`
- `source_pdf_size_bytes`: `1010639`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.3`
- `visible_cover_title`: `FC7xxx LIN Integration Manual`
- `visible_cover_revision`: `Rev.0.3`
- `revision_history_latest_row`: `0.3 / 2023/10/20 / Updated for MCAL V0.3.0`
- `generated_at`: `2026-06-19T13:04:06Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `21`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL LIN module - Integration Manual"
- `module_scope`: "LIN module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["LIN", "Local Interconnect Network", "AUTOSAR_SWS_LINDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Lin", "FCUART", "Uart", "UART"]
- `summary`: "This 14-page integration manual indexes LIN content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["LIN", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx LIN Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["LIN", "MCAL", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["LIN", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["LIN", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["LIN", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Lin", "LIN", "UART", "Src", "include", "provides", "EcuM", "ins"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Lin", "LIN", "UART", "Src", "include", "provides", "EcuM", "required"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Lin", "LIN", "UART", "Src", "include", "provides", "EcuM", "required"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["LIN", "Lin", "Src", "include", "ins", "tresos", "plug", "folder"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["LIN", "These", "UNSPECIFIED", "LIN_START_SEC_VAR", "LIN_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["LIN", "These", "UNSPECIFIED", "LIN_START_SEC_VAR", "LIN_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["LIN", "Lin_LL_RxDataReadyHandler", "Lin_LL_TxRxInterruptHandler", "Lin_LL_ChannelInit", "Lin_LL_SendHeader", "Lin_LL_GoToSleep", "Lin_LL_GoToSleepInternal", "Lin_LL_InterruptSourceSlave"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["LIN", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FCUART0", "FCUART0_RxTx_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["LIN", "LIN_E_UNINIT", "LIN_E_INVALID_CHANNEL", "LIN_E_STATE_TRANSITION", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "LIN_E_PARAM_POINTER", "Lin_GoToSleep"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["LIN", "LIN_E_UNINIT", "LIN_E_INVALID_CHANNEL", "LIN_E_STATE_TRANSITION", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "LIN_E_PARAM_POINTER", "Lin_GoToSleep"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["LIN", "LIN_E_UNINIT", "LIN_E_INVALID_CHANNEL", "LIN_E_STATE_TRANSITION", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "LIN_E_PARAM_POINTER", "Lin_GoToSleep"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["LIN", "Lin", "FCUART", "initialized", "channel", "Lin_Init", "sleep", "LIN_CHANNEL"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["LIN", "Lin", "FCUART", "initialized", "channel", "Lin_Init", "sleep", "LIN_CHANNEL"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["LIN", "Lin", "FCUART", "initialized", "channel", "Lin_Init", "sleep", "LIN_CHANNEL"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["LIN", "Lin", "FCUART", "initialized", "channel", "Lin_Init", "sleep", "LIN_CHANNEL"]
- `anchor`: "7.3"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["LIN", "AUTOSAR_OS_NOT_USED", "ISR", "Lin_IsrTxRx_FCUART_0", "FC7xxx", "LinIf_WakeupConfirmation", "EcuM_SetWakeupEvent", "EcuM_CheckWakeup"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["LIN", "AUTOSAR_OS_NOT_USED", "ISR", "Lin_IsrTxRx_FCUART_0", "FC7xxx", "LinIf_WakeupConfirmation", "EcuM_SetWakeupEvent", "EcuM_CheckWakeup"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["LIN", "AUTOSAR_OS_NOT_USED", "ISR", "Lin_IsrTxRx_FCUART_0", "FC7xxx", "LinIf_WakeupConfirmation", "EcuM_SetWakeupEvent", "EcuM_CheckWakeup"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["LIN", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "api"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction ............................................................................…", "1.1", "Introduction ......................................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the LIN module."]

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
- `anchors`: ["Common module files:", "_MCAL/Src/Common/include/Mcal.h", "_MCAL/Src/Common/include/Std_Types.h", "_MCAL/Src/Common/include/Platform_Types.h"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "LIN_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "LIN module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the LIN driver:", "Lin_FCuart.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "LIN shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this…"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the LIN module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx LIN Integration Manual"
- `keywords`: ["LIN", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx LIN Integration Manual; Revision History; 0.1"
- `keywords`: ["LIN", "MCAL", "FC7xxx", "Integration", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "api"]
- `summary`: "Table of Contents: FC7xxx LIN Integration Manual; Table of Contents; Chapter 1 Introduction .................................................................................................................................................... 4"
- `keywords`: ["LIN", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Chapter 1 Introduction ....................................................................................................................…"
  - `p3`: "1.1"
  - `p3`: "Introduction ..............................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx LIN Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["LIN", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the LIN module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx LIN Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Lin", "LIN", "UART", "Src", "include", "provides", "EcuM", "required", "Lin_FCUart", "Lin_PBcfg"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx LIN Integration Manual; Common module files:; _MCAL/Src/Common/include/Mcal.h"
- `keywords`: ["LIN", "Lin", "Src", "include", "ins", "tresos", "plug", "folder", "FC7xxx", "Std_Types"]
- `anchors`:
  - `p6`: "Common module files:"
  - `p6`: "_MCAL/Src/Common/include/Mcal.h"
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx LIN Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["LIN", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx LIN Integration Manual; Section Name; Section Type"
- `keywords`: ["LIN", "LIN_START_SEC_VAR", "LIN_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "initialized", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "LIN_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx LIN Integration Manual; Chapter 4 Exclusive Area; LIN module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["LIN", "Lin_LL_RxDataReadyHandler", "Lin_LL_TxRxInterruptHandler", "Lin_LL_ChannelInit", "Lin_LL_SendHeader", "Lin_LL_GoToSleep", "Lin_LL_GoToSleepInternal", "Lin_LL_InterruptSourceSlave", "Lin_LL_IdleInterruptHandler", "FC7xxx"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "LIN module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the LIN driver:"
  - `p9`: "Lin_FCuart.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx LIN Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["LIN", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FCUART0", "FCUART0_RxTx_IRQHandler", "FCUART1", "FCUART1_RxTx_IRQHandler"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p10`: "Instance"
  - `p10`: "Interrupt Name"
  - `p10`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx LIN Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["LIN", "LIN_E_UNINIT", "LIN_E_INVALID_CHANNEL", "LIN_E_STATE_TRANSITION", "DEM_EVENT_STATUS_FAILED", "DEM_EVENT_STATUS_PASSED", "LIN_E_PARAM_POINTER", "Lin_GoToSleep", "Lin_GoToSleepInternal", "Lin_SendFrame"]
- `anchors`:
  - `p11`: "Chapter 6 Error Report"
  - `p11`: "6.1"
  - `p11`: "Det"
  - `p11`: "Function Name"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx LIN Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["LIN", "Lin", "FCUART", "initialized", "channel", "Lin_Init", "sleep", "LIN_CHANNEL", "Calls", "MCU"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"
  - `p12`: "7.1"
  - `p12`: "Function Calls during Startup"
  - `p12`: "LIN shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is Lin_Init(). The MCU module"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx LIN Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["LIN", "AUTOSAR_OS_NOT_USED", "ISR", "Lin_IsrTxRx_FCUART_0", "FC7xxx", "LinIf_WakeupConfirmation", "EcuM_SetWakeupEvent", "EcuM_CheckWakeup", "EcuM", "USE_SW_VECTOR_MODE"]
- `anchors`:
  - `p13`: "Chapter 8 Other Requirements"
  - `p13`: "8.1"
  - `p13`: "Notification, Callback, Callout"
  - `p13`: "Notification"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx LIN Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["LIN", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the LIN module and generate configuration files (please refer to Building chapter for details)."
  - `p14`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[36.24, 101.64, 559.08, 161.46]`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes a table or table-like region related to Revision History."
- `anchor`: "Revision History"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0003-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0003-001"
- `caption`: "Table-like content on page 3"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["LIN", "Calls", "FC7xxx", "ISR", "Integration"]
- `summary`: "Indexes table-like source content for Table-like content on page 3; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 3"
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
- `key_fields`: ["Lin", "LIN", "UART", "Src", "include"]
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
- `key_fields`: ["LIN", "Lin", "Src", "include", "ins"]
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
- `bbox`: `[36.24, 123.12, 559.08, 787.14]`
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
- `bbox`: `[36.24, 37.27, 559.08, 156.78]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[36.24, 102.48, 559.08, 433.74]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 10."
- `anchor`: "Table-like region on page 10"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[36.24, 123.1, 559.08, 500.24]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0011-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-002"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[36.24, 544.42, 559.08, 665.0]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like content on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["LIN", "Lin", "FCUART", "initialized", "channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-LIN-INIT
- `name`: "Lin_Init"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "api index entry for `Lin_Init`."
- `anchors`:
  - `p11`: "Lin_Init"
  - `p12`: "LIN shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is Lin_Init(). The MCU module"
- `aliases`: []

### API-LIN-GOTOSLEEP
- `name`: "Lin_GoToSleep"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "api index entry for `Lin_GoToSleep`."
- `anchors`:
  - `p11`: "Lin_GoToSleep"
  - `p12`: "Lin_GoToSleepInternal(LIN_CHANNEL): which put the LIN driver into sleep mode without sending of Go-to-sleep"
- `aliases`: []

### API-LIN-GOTOSLEEPINTERNAL
- `name`: "Lin_GoToSleepInternal"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "api index entry for `Lin_GoToSleepInternal`."
- `anchors`:
  - `p11`: "Lin_GoToSleepInternal"
  - `p12`: "Lin_GoToSleepInternal(LIN_CHANNEL): which put the LIN driver into sleep mode without sending of Go-to-sleep"
- `aliases`: []

### API-FCUART0-RXTX-IRQHANDLER
- `name`: "FCUART0_RxTx_IRQHandler"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "api index entry for `FCUART0_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART0_RxTx_IRQHandler"
  - `p13`: "void FCUART0_RxTx_IRQHandler(void)"
- `aliases`: []

### API-LIN-CHECKWAKEUP
- `name`: "Lin_CheckWakeup"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "api index entry for `Lin_CheckWakeup`."
- `anchors`:
  - `p11`: "Lin_CheckWakeup"
  - `p12`: "If the channel is not configured with \"wake-up support\", the Lin stack may call Lin_CheckWakeup(LIN_CHANNEL)"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 5 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
- `aliases`: []

### API-LIN-ISRTXRX-FCUART-0
- `name`: "Lin_IsrTxRx_FCUART_0"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `Lin_IsrTxRx_FCUART_0`."
- `anchors`:
  - `p13`: "extern ISR(Lin_IsrTxRx_FCUART_0);"
- `aliases`: []

### API-ECUM-CHECKWAKEUP
- `name`: "EcuM_CheckWakeup"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `EcuM_CheckWakeup`."
- `anchors`:
  - `p13`: "LinIf_WakeupConfirmation(), EcuM_SetWakeupEvent() and EcuM_CheckWakeup() have to be provided by the EcuM"
- `aliases`: []

### API-ECUM-SETWAKEUPEVENT
- `name`: "EcuM_SetWakeupEvent"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `EcuM_SetWakeupEvent`."
- `anchors`:
  - `p13`: "LinIf_WakeupConfirmation(), EcuM_SetWakeupEvent() and EcuM_CheckWakeup() have to be provided by the EcuM"
- `aliases`: []

### API-FCUARTX-RXTX-IRQHANDLER
- `name`: "FCUARTx_RxTx_IRQHandler"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `FCUARTx_RxTx_IRQHandler`."
- `anchors`:
  - `p12`: "channel the ISR \"FCUARTx_RxTx_IRQHandler(LIN channel)\" will be executed (based on the LIN Channel configured)"
- `aliases`: []

### API-LINIF-WAKEUPCONFIRMATION
- `name`: "LinIf_WakeupConfirmation"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `LinIf_WakeupConfirmation`."
- `anchors`:
  - `p13`: "LinIf_WakeupConfirmation(), EcuM_SetWakeupEvent() and EcuM_CheckWakeup() have to be provided by the EcuM"
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
  - `p9`: "LIN module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p10`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-LIN-LL-TXRXINTERRUPTHANDLER
- `name`: "Lin_LL_TxRxInterruptHandler"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Lin_LL_TxRxInterruptHandler`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_10 is used in Lin_LL_TxRxInterruptHandler."
- `aliases`: []

### CFG-LIN-CONFIGURATION
- `name`: "Lin_Configuration"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `Lin_Configuration`."
- `anchors`:
  - `p12`: "should be initialized before the LIN is initialized. The LIN module shall be initialized by Lin_Init(<&Lin_Configuration>) service"
- `aliases`: []

### CFG-LIN-LL-CHANNELINIT
- `name`: "Lin_LL_ChannelInit"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Lin_LL_ChannelInit`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_00 is used in Lin_LL_ChannelInit."
- `aliases`: []

### CFG-LIN-LL-IDLEINTERRUPTHANDLER
- `name`: "Lin_LL_IdleInterruptHandler"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Lin_LL_IdleInterruptHandler`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_20 is used in Lin_LL_IdleInterruptHandler."
- `aliases`: []

### CFG-LIN-LL-INTERRUPTSOURCESLAVE
- `name`: "Lin_LL_InterruptSourceSlave"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Lin_LL_InterruptSourceSlave`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_13 is used in Lin_LL_InterruptSourceSlave."
- `aliases`: []

### CFG-LIN-GENERALTYPES
- `name`: "Lin_GeneralTypes"
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "config index entry for `Lin_GeneralTypes`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_GeneralTypes.h"
- `aliases`: []

### CFG-LIN-LL-ERRORINTERRUPTHANDLER
- `name`: "Lin_LL_ErrorInterruptHandler"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Lin_LL_ErrorInterruptHandler`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_23 is used in Lin_LL_ErrorInterruptHandler."
- `aliases`: []

### CFG-LIN-LL-WAKEUPINTERNAL
- `name`: "Lin_LL_WakeupInternal"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Lin_LL_WakeupInternal`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_09 is used in Lin_LL_WakeupInternal."
- `aliases`: []

### CFG-LIN-WAKEUP
- `name`: "Lin_Wakeup"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Lin_Wakeup`."
- `anchors`:
  - `p11`: "Lin_Wakeup"
- `aliases`: []

### CFG-LIN-WAKEUPINTERNAL
- `name`: "Lin_WakeupInternal"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Lin_WakeupInternal`."
- `anchors`:
  - `p11`: "Lin_WakeupInternal"
- `aliases`: []

### MACRO-LIN-E-INVALID-CHANNEL
- `name`: "LIN_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_E_INVALID_CHANNEL`."
- `anchors`:
  - `p11`: "LIN_E_INVALID_CHANNEL;"
- `aliases`: []

### MACRO-LIN-E-UNINIT
- `name`: "LIN_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_E_UNINIT`."
- `anchors`:
  - `p11`: "LIN_E_UNINIT;"
- `aliases`: []

### MACRO-DEM-EVENT-STATUS-FAILED
- `name`: "DEM_EVENT_STATUS_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `DEM_EVENT_STATUS_FAILED`."
- `anchors`:
  - `p11`: "DEM_EVENT_STATUS_FAILED;"
- `aliases`: []

### MACRO-DEM-EVENT-STATUS-PASSED
- `name`: "DEM_EVENT_STATUS_PASSED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `DEM_EVENT_STATUS_PASSED`."
- `anchors`:
  - `p11`: "DEM_EVENT_STATUS_PASSED;"
- `aliases`: []

### MACRO-LIN-CHANNEL
- `name`: "LIN_CHANNEL"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `LIN_CHANNEL`."
- `anchors`:
  - `p12`: "Lin_GoToSleepInternal(LIN_CHANNEL): which put the LIN driver into sleep mode without sending of Go-to-sleep"
- `aliases`: []

### MACRO-LIN-E-STATE-TRANSITION
- `name`: "LIN_E_STATE_TRANSITION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_E_STATE_TRANSITION`."
- `anchors`:
  - `p11`: "LIN_E_STATE_TRANSITION;"
- `aliases`: []

### MACRO-LIN-START-SEC-VAR
- `name`: "LIN_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `LIN_START_SEC_VAR`."
- `anchors`:
  - `p8`: "LIN_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-LIN-STOP-SEC-VAR
- `name`: "LIN_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `LIN_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "LIN_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p13`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-LIN-E-PARAM-POINTER
- `name`: "LIN_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "LIN_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-LIN-START-SEC-CODE
- `name`: "LIN_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CODE`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CODE"
- `aliases`: []

### MACRO-LIN-START-SEC-CODE-AC
- `name`: "LIN_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-LIN-START-SEC-CONFIG-DATA-16
- `name`: "LIN_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-LIN-START-SEC-CONFIG-DATA-32
- `name`: "LIN_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-LIN-START-SEC-CONFIG-DATA-8
- `name`: "LIN_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-LIN-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "LIN_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-LIN-START-SEC-CONST-16
- `name`: "LIN_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONST_16"
- `aliases`: []

### MACRO-LIN-START-SEC-CONST-32
- `name`: "LIN_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONST_32"
- `aliases`: []

### MACRO-LIN-START-SEC-CONST-8
- `name`: "LIN_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONST_8"
- `aliases`: []

### MACRO-LIN-START-SEC-CONST-BOOLEAN
- `name`: "LIN_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-LIN-START-SEC-VAR-NO-INIT-16
- `name`: "LIN_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-LIN-START-SEC-VAR-NO-INIT-32
- `name`: "LIN_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-LIN-START-SEC-VAR-NO-INIT-8
- `name`: "LIN_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-LIN-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "LIN_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CODE
- `name`: "LIN_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CODE"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CODE-AC
- `name`: "LIN_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONFIG-DATA-16
- `name`: "LIN_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONFIG-DATA-32
- `name`: "LIN_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONFIG-DATA-8
- `name`: "LIN_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONST-16
- `name`: "LIN_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONST-32
- `name`: "LIN_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONST-8
- `name`: "LIN_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-LIN-STOP-SEC-CONST-BOOLEAN
- `name`: "LIN_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-LIN-STOP-SEC-VAR-NO-INIT-16
- `name`: "LIN_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-LIN-STOP-SEC-VAR-NO-INIT-32
- `name`: "LIN_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-LIN-STOP-SEC-VAR-NO-INIT-8
- `name`: "LIN_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-LIN-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "LIN_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `LIN_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-00
- `name`: "LIN_EXCLUSIVE_AREA_00"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_00 is used in Lin_LL_ChannelInit."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-01
- `name`: "LIN_EXCLUSIVE_AREA_01"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_01 is used in Lin_LL_SendHeader."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-02
- `name`: "LIN_EXCLUSIVE_AREA_02"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_02 is used in Lin_LL_SendHeader."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-03
- `name`: "LIN_EXCLUSIVE_AREA_03"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_03 is used in Lin_LL_SendResponse."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-04
- `name`: "LIN_EXCLUSIVE_AREA_04"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_04 is used in Lin_LL_GoToSleep."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-05
- `name`: "LIN_EXCLUSIVE_AREA_05"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_05 is used in Lin_LL_GoToSleep."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-06
- `name`: "LIN_EXCLUSIVE_AREA_06"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_06 is used in Lin_LL_GoToSleepInternal."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-07
- `name`: "LIN_EXCLUSIVE_AREA_07"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_07`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_07 is used in Lin_LL_GoToSleepInternal."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-08
- `name`: "LIN_EXCLUSIVE_AREA_08"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_08`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_08 is used in Lin_LL_WakeUp."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-09
- `name`: "LIN_EXCLUSIVE_AREA_09"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_09`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_09 is used in Lin_LL_WakeupInternal."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-10
- `name`: "LIN_EXCLUSIVE_AREA_10"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_10`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_10 is used in Lin_LL_TxRxInterruptHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-11
- `name`: "LIN_EXCLUSIVE_AREA_11"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_11`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_11 is used in Lin_LL_TxRxInterruptHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-12
- `name`: "LIN_EXCLUSIVE_AREA_12"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_12`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_12 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-13
- `name`: "LIN_EXCLUSIVE_AREA_13"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_13`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_13 is used in Lin_LL_InterruptSourceSlave."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-14
- `name`: "LIN_EXCLUSIVE_AREA_14"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_14`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_14 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-15
- `name`: "LIN_EXCLUSIVE_AREA_15"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_15`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_15 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-16
- `name`: "LIN_EXCLUSIVE_AREA_16"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_16`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_16 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-17
- `name`: "LIN_EXCLUSIVE_AREA_17"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_17`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_17 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-18
- `name`: "LIN_EXCLUSIVE_AREA_18"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_18`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_18 is used in Lin_LL_InterruptSourceSlave."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-19
- `name`: "LIN_EXCLUSIVE_AREA_19"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_19`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_19 is used in Lin_LL_TxRxInterruptHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-20
- `name`: "LIN_EXCLUSIVE_AREA_20"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_20`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_20 is used in Lin_LL_IdleInterruptHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-21
- `name`: "LIN_EXCLUSIVE_AREA_21"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_21`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_21 is used in Lin_LL_IdleInterruptHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-22
- `name`: "LIN_EXCLUSIVE_AREA_22"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_22`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_22 is used in Lin_LL_ShutDownReset."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-23
- `name`: "LIN_EXCLUSIVE_AREA_23"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_23`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_23 is used in Lin_LL_ErrorInterruptHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-24
- `name`: "LIN_EXCLUSIVE_AREA_24"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_24`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_24 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### MACRO-LIN-EXCLUSIVE-AREA-25
- `name`: "LIN_EXCLUSIVE_AREA_25"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `LIN_EXCLUSIVE_AREA_25`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_25 is used in Lin_LL_ChannelInit."
- `aliases`: []

### MACRO-LIN-E-ALREADY-INITIALIZED
- `name`: "LIN_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "LIN_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-LIN-E-INVALID-POINTER
- `name`: "LIN_E_INVALID_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `LIN_E_INVALID_POINTER`."
- `anchors`:
  - `p11`: "LIN_E_INVALID_POINTER;"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p13`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to the"
- `aliases`: []

### MEM-LIN-START-SEC-VAR
- `name`: "LIN_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR
- `name`: "LIN_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-LIN-START-SEC
- `name`: "LIN_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-LIN-START-SEC-CONST
- `name`: "LIN_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-LIN-START-SEC-CONST-UNSPECIFIED
- `name`: "LIN_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "LIN_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-LIN-START-SEC-RAMCODE
- `name`: "LIN_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "LIN_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-INIT-16
- `name`: "LIN_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "LIN_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-INIT-32
- `name`: "LIN_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "LIN_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-INIT-8
- `name`: "LIN_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-INIT-BOOLEAN
- `name`: "LIN_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "LIN_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "LIN_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-NO-INIT
- `name`: "LIN_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-LIN-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "LIN_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-LIN-STOP-SEC
- `name`: "LIN_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-LIN-STOP-SEC-CONST
- `name`: "LIN_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-LIN-STOP-SEC-CONST-UNSPECIFIED
- `name`: "LIN_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-LIN-STOP-SEC-RAMCODE
- `name`: "LIN_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-INIT-16
- `name`: "LIN_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "LIN_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-INIT-32
- `name`: "LIN_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "LIN_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-INIT-8
- `name`: "LIN_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "LIN_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "LIN_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "LIN_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-NO-INIT
- `name`: "LIN_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-LIN-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "LIN_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-DEM-H
- `name`: "Dem.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Dem.h`."
- `anchors`:
  - `p6`: "Dem.h"
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

### FILE-ECUM-CBK-H
- `name`: "EcuM_Cbk.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `EcuM_Cbk.h`."
- `anchors`:
  - `p6`: "EcuM_Cbk.h"
- `aliases`: []

### FILE-LINIF-H
- `name`: "LinIf.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `LinIf.h`."
- `anchors`:
  - `p6`: "LinIf.h"
- `aliases`: []

### FILE-LINIF-CBK-H
- `name`: "LinIf_Cbk.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `LinIf_Cbk.h`."
- `anchors`:
  - `p6`: "LinIf_Cbk.h"
- `aliases`: []

### FILE-LIN-FCUART-C
- `name`: "Lin_FCuart.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Lin_FCuart.c`."
- `anchors`:
  - `p9`: "Lin_FCuart.c:"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p13`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-LIN-H
- `name`: "SchM_Lin.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Lin.h`."
- `anchors`:
  - `p6`: "SchM_Lin.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-H
- `name`: "_MCAL/Src/Common/include/Compiler.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler.h"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-STD-TYPES-H
- `name`: "_MCAL/Src/Common/include/Std_Types.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Std_Types.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-SRC-LIN-C
- `name`: "_MCAL/Src/Lin/Src/Lin.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/Src/Lin.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/Src/Lin.c"
- `aliases`: []

### FILE-MCAL-SRC-LIN-SRC-LIN-FCUART-C
- `name`: "_MCAL/Src/Lin/Src/Lin_FCUart.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/Src/Lin_FCUart.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/Src/Lin_FCUart.c"
- `aliases`: []

### FILE-MCAL-SRC-LIN-SRC-LIN-IRQ-C
- `name`: "_MCAL/Src/Lin/Src/Lin_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/Src/Lin_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/Src/Lin_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-FCUART-REG-H
- `name`: "_MCAL/Src/Lin/include/FCUart_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/FCUart_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/FCUart_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-LIN-H
- `name`: "_MCAL/Src/Lin/include/Lin.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/Lin.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-LIN-FCUART-H
- `name`: "_MCAL/Src/Lin/include/Lin_FCUart.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/Lin_FCUart.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_FCUart.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-LIN-GENERALTYPES-H
- `name`: "_MCAL/Src/Lin/include/Lin_GeneralTypes.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/Lin_GeneralTypes.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_GeneralTypes.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-LIN-LIN-FCUART-REGOPS-H
- `name`: "_MCAL/Src/Lin/include/Lin_Lin_FCUart_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/Lin_Lin_FCUart_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_Lin_FCUart_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-LIN-MEMMAP-H
- `name`: "_MCAL/Src/Lin/include/Lin_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/Lin_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-LIN-INCLUDE-LIN-VERSION-H
- `name`: "_MCAL/Src/Lin/include/Lin_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Lin/include/Lin_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-LIN-CFG-H
- `name`: "_MCAL_generate/include/Lin_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Lin_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Lin_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-LIN-PBCFG-H
- `name`: "_MCAL_generate/include/Lin_PBcfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Lin_PBcfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Lin_PBcfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-LIN-CFG-C
- `name`: "_MCAL_generate/src/Lin_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Lin_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Lin_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-LIN-PBCFG-C
- `name`: "_MCAL_generate/src/Lin_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Lin_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Lin_PBcfg.c"
- `aliases`: []

### TERM-LIN
- `name`: "LIN"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `LIN`."
- `anchors`:
  - `p1`: "LIN"
  - `p2`: "LIN"
  - `p3`: "LIN"
  - `p4`: "LIN"
  - `p5`: "LIN"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,11`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p5`: "Dem"
  - `p6`: "Dem"
  - `p11`: "Dem"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,11`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p11`: "Det"
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

### TERM-LINIF
- `name`: "Linif"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Linif`."
- `anchors`:
  - `p5`: "Linif: This module provides the Linif wakeup confirmation callback function."
  - `p6`: "Linif module files:"
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

### TERM-LIN-LL-RXDATAREADYHANDLER
- `name`: "Lin_LL_RxDataReadyHandler"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_RxDataReadyHandler`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_12 is used in Lin_LL_RxDataReadyHandler."
- `aliases`: []

### TERM-LIN-CFG
- `name`: "Lin_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Lin_Cfg.c"
- `aliases`: []

### TERM-LIN-FCUART
- `name`: "Lin_FCUart"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_FCUart`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/Src/Lin_FCUart.c"
- `aliases`: []

### TERM-LIN-LL-GOTOSLEEP
- `name`: "Lin_LL_GoToSleep"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_GoToSleep`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_04 is used in Lin_LL_GoToSleep."
- `aliases`: []

### TERM-LIN-LL-GOTOSLEEPINTERNAL
- `name`: "Lin_LL_GoToSleepInternal"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_GoToSleepInternal`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_06 is used in Lin_LL_GoToSleepInternal."
- `aliases`: []

### TERM-LIN-LL-SENDHEADER
- `name`: "Lin_LL_SendHeader"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_SendHeader`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_01 is used in Lin_LL_SendHeader."
- `aliases`: []

### TERM-LIN-PBCFG
- `name`: "Lin_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Lin_PBcfg.c"
- `aliases`: []

### TERM-LIN-SENDFRAME
- `name`: "Lin_SendFrame"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Lin_SendFrame`."
- `anchors`:
  - `p11`: "Lin_SendFrame"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p13`: "AUTOSAR"
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
  - `p6`: "Copy the LIN module(_MCAL/EB_Plugins/eclipse/plugins/Lin) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-ECUM-CBK
- `name`: "EcuM_Cbk"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EcuM_Cbk`."
- `anchors`:
  - `p6`: "EcuM_Cbk.h"
- `aliases`: []

### TERM-FCUART10-RXTX-IRQHANDLER
- `name`: "FCUART10_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART10_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART10_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART11-RXTX-IRQHANDLER
- `name`: "FCUART11_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART11_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART11_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART12-RXTX-IRQHANDLER
- `name`: "FCUART12_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART12_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART12_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART13-RXTX-IRQHANDLER
- `name`: "FCUART13_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART13_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART13_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART14-RXTX-IRQHANDLER
- `name`: "FCUART14_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART14_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART14_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART15-RXTX-IRQHANDLER
- `name`: "FCUART15_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART15_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART15_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART16-RXTX-IRQHANDLER
- `name`: "FCUART16_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART16_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART16_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART17-RXTX-IRQHANDLER
- `name`: "FCUART17_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART17_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART17_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART1-RXTX-IRQHANDLER
- `name`: "FCUART1_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART1_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART1_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART2-RXTX-IRQHANDLER
- `name`: "FCUART2_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART2_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART2_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART3-RXTX-IRQHANDLER
- `name`: "FCUART3_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART3_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART3_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART4-RXTX-IRQHANDLER
- `name`: "FCUART4_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART4_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART4_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART5-RXTX-IRQHANDLER
- `name`: "FCUART5_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART5_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART5_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART6-RXTX-IRQHANDLER
- `name`: "FCUART6_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART6_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART6_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART7-RXTX-IRQHANDLER
- `name`: "FCUART7_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART7_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART7_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART8-RXTX-IRQHANDLER
- `name`: "FCUART8_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART8_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART8_RxTx_IRQHandler"
- `aliases`: []

### TERM-FCUART9-RXTX-IRQHANDLER
- `name`: "FCUART9_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART9_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART9_RxTx_IRQHandler"
- `aliases`: []

### TERM-LINIF-2
- `name`: "LinIf"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `LinIf`."
- `anchors`:
  - `p6`: "LinIf.h"
- `aliases`: []

### TERM-LINIF-CBK
- `name`: "LinIf_Cbk"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `LinIf_Cbk`."
- `anchors`:
  - `p6`: "LinIf_Cbk.h"
- `aliases`: []

### TERM-LIN-FCUART-2
- `name`: "Lin_FCuart"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_FCuart`."
- `anchors`:
  - `p9`: "Lin_FCuart.c:"
- `aliases`: []

### TERM-LIN-GETSTATUS
- `name`: "Lin_GetStatus"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Lin_GetStatus`."
- `anchors`:
  - `p11`: "Lin_GetStatus"
- `aliases`: []

### TERM-LIN-IRQ
- `name`: "Lin_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/Src/Lin_Irq.c"
- `aliases`: []

### TERM-LIN-LL-SENDRESPONSE
- `name`: "Lin_LL_SendResponse"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_SendResponse`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_03 is used in Lin_LL_SendResponse."
- `aliases`: []

### TERM-LIN-LL-SHUTDOWNRESET
- `name`: "Lin_LL_ShutDownReset"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_ShutDownReset`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_22 is used in Lin_LL_ShutDownReset."
- `aliases`: []

### TERM-LIN-LL-WAKEUP
- `name`: "Lin_LL_WakeUp"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Lin_LL_WakeUp`."
- `anchors`:
  - `p9`: "LIN_EXCLUSIVE_AREA_08 is used in Lin_LL_WakeUp."
- `aliases`: []

### TERM-LIN-LIN-FCUART-REGOPS
- `name`: "Lin_Lin_FCUart_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_Lin_FCUart_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_Lin_FCUart_RegOps.h"
- `aliases`: []

### TERM-LIN-MEMMAP
- `name`: "Lin_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_MemMap.h"
- `aliases`: []

### TERM-LIN-VERSION
- `name`: "Lin_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Lin_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Lin/include/Lin_version.h"
- `aliases`: []

### TERM-LOCAL-INTERCONNECT-NETWORK
- `name`: "Local Interconnect Network"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Local Interconnect Network`."
- `anchors`:
  - `p1`: "Local Interconnect Network"
- `aliases`: []

### TERM-SCHM-LIN
- `name`: "SchM_Lin"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Lin`."
- `anchors`:
  - `p6`: "SchM_Lin.h"
- `aliases`: []

### TERM-STD-TYPES
- `name`: "Std_Types"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Std_Types`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

## 9. Search Aliases

### ALIAS-LIN
- `canonical`: "LIN"
- `aliases`: ["Local Interconnect Network", "本地互连网络", "LIN module", "LIN driver", "LIN User Manual", "LIN Integration Manual", "Lin", "Lin Interface"]
- `related_ids`: ["TERM-LIN"]

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

### ALIAS-FCUART
- `canonical`: "FCUART"
- `aliases`: ["UART", "FC Universal Asynchronous Receiver Transmitter", "Lin_FCUart", "LIN hardware unit"]
- `related_ids`: []

### ALIAS-LIN-FRAME
- `canonical`: "LIN frame"
- `aliases`: ["Lin_PduType", "frame transmission", "frame reception", "Lin_SendFrame"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between LIN_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `LIN_Integration_Manual.pdf`
- `source_pdf_sha256`: `984184e707bc0fa01a0f03d746312bbe4e81c96fba24684a9656739040aceb17`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `128`
- `technical_missing_terms_added`: `7`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `128`
- `supplemented_missing_technical_token_count`: `7`
- `supplemented_physical_pages_count`: `13`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "1.0"
  - "Confidential"
  - "Flagchip"
  - "Initial"
  - "Proprietary"
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
  - "Ecuc"
  - "Flagchip"
  - "Mcu"
  - "PORT"
  - "Port"
  - "Proprietary"
  - "assign"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "clock"
  - "common"
  - "configurations"
  - "controller"
  - "detection"
  - "enabled"
  - "enabling"
  - "etc"
  - "every"
  - "failure"
  - "first"
  - "functions"
  - "initialize"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "out"
  - "output"
  - "parameters"
  - "partition"
  - "parts"
  - "pin"
  - "pins"
  - "point"
  - "pointers"
  - "port"
  - "production"
  - "protect"
  - "range"
  - "reference"
  - "seclecting"
  - "selecting"
  - "signal"
  - "signaling"
  - "signals"
  - "some"
  - "through"
  - "tracing"
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
  - "After"
  - "Confidential"
  - "Driver"
  - "Flagchip"
  - "GPIO"
  - "PORT"
  - "Proprietary"
  - "There"
  - "also"
  - "assigned"
  - "bus"
  - "command"
  - "connection"
  - "desired"
  - "detection"
  - "done"
  - "each"
  - "external"
  - "identified"
  - "identify"
  - "issued"
  - "modes"
  - "modules"
  - "order"
  - "over"
  - "peripherals"
  - "pin"
  - "pins"
  - "prior"
  - "procedure"
  - "process"
  - "properly"
  - "request"
  - "responsibility"
  - "send"
  - "shutdown"
  - "slave"
  - "specific"
  - "start"
  - "such"
  - "supports"
  - "that"
  - "upon"
  - "well"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Driver"
  - "Flagchip"
  - "Proprietary"
  - "There"
  - "callouts"
  - "define"
  - "example"
  - "functions"
  - "respective"
  - "uses"
  - "within"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "linker"
  - "locations"
  - "modules"
  - "notification"
  - "other"
  - "their"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14`
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
- `physical_pages`: `3,5,6,10,11,11,12`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0010-001", "TBL-0011-001", "TBL-0011-002", "TBL-0012-001"]
- `message`: "7 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `14`
- `indexed_physical_pages_count`: `14`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `24`
- `table_index_count`: `10`
- `figure_index_count`: `0`
- `symbol_index_count`: `194`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `984184e707bc0fa01a0f03d746312bbe4e81c96fba24684a9656739040aceb17`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `128`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->