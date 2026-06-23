---
manifest_schema_version: "1.1"
source_pdf: "UART_Integration_Manual.pdf"
source_pdf_sha256: "000fe2f2a0ff82f7cc1b8a76db6638d1fbb4f31d902193a47d28cede84c02b04"
source_pdf_size_bytes: 356027
pdf_page_count: 15
generated_at: "2026-06-19T14:31:29Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched-spi-ssi-trgsel-uart"
source_document_id: null
source_document_revision: "Rev.1.0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: UART_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `UART_Integration_Manual.pdf`
- `source_pdf_sha256`: `000fe2f2a0ff82f7cc1b8a76db6638d1fbb4f31d902193a47d28cede84c02b04`
- `source_pdf_size_bytes`: `356027`
- `pdf_page_count`: `15`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.1.0`
- `visible_cover_title`: `FC7xxx UART Integration Manual`
- `visible_cover_revision`: `Rev.1.0`
- `revision_history_latest_row`: `1.0 / 2024/07/17 / Initial release`
- `generated_at`: `2026-06-19T14:31:29Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched-spi-ssi-trgsel-uart`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `19`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL UART module - Integration Manual"
- `module_scope`: "UART module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive area", "Chapter 5 Error Report", "Chapter 6 Function Calls", "Chapter 7 Other Requirements", "Chapter 8 Integration Steps"]
- `key_terms`: ["UART", "Universal Asynchronous Receiver/Transmitter Complex Device Driver", "Complex Device Driver / vendor-specific UART driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Uart", "CDD_Uart", "LLD_Uart", "FCUART", "Rx"]
- `summary`: "This 15-page integration manual indexes UART content across source physical pages 1-15, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["UART", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx UART Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["UART", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["UART", "Calls", "FC7xxx", "Integration", "Memory", "Dependencies", "Modules", "Required"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["UART", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["UART", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["UART", "Uart", "Src", "CDD_Uart", "LLD_Uart", "include", "EcuM", "provides"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Uart", "UART", "Src", "CDD_Uart", "LLD_Uart", "provides", "EcuM", "DMA"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Uart", "UART", "Src", "CDD_Uart", "LLD_Uart", "provides", "EcuM", "DMA"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["UART", "Uart", "Src", "include", "ins", "tresos", "plug", "folder"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["UART", "These", "UNSPECIFIED", "UART_START_SEC_VAR", "UART_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["UART", "These", "UNSPECIFIED", "UART_START_SEC_VAR", "UART_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive area"
- `path`: "Chapter 4 Exclusive area"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["UART", "LLD_Uart", "FC7xxx", "SchM", "UART_EXCLUSIVE_AREA_00", "Uart_LLD_SyncSend", "UART_EXCLUSIVE_AREA_01", "Uart_LLD_AsyncSend"]
- `anchor`: "Chapter 4 Exclusive area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Error Report"
- `path`: "Chapter 5 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["UART", "UART_E_PARAM_CONFIG", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "UART_E_INVALID_POINTER", "UART_E_INVALID_PARAMETER", "UART_E_CHANNEL_BUSY", "FC7xxx"]
- `anchor`: "Chapter 5 Error Report"

### SEC-005-001
- `source_number`: `5.1`
- `title`: "Det"
- `path`: "Chapter 5 Error Report / 5.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["UART", "UART_E_PARAM_CONFIG", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "UART_E_INVALID_POINTER", "UART_E_INVALID_PARAMETER", "UART_E_CHANNEL_BUSY", "FC7xxx"]
- `anchor`: "5.1"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Function Calls"
- `path`: "Chapter 6 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Uart", "UART", "initialized", "Calls", "Uart_Init", "MCU", "DMA", "FC7xxx"]
- `anchor`: "Chapter 6 Function Calls"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Uart", "UART", "initialized", "Calls", "Uart_Init", "MCU", "DMA", "FC7xxx"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 6 Function Calls / 6.2 Function Calls during Shutdown"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Uart", "UART", "initialized", "Calls", "Uart_Init", "MCU", "DMA", "FC7xxx"]
- `anchor`: "6.2"

### SEC-006-003
- `source_number`: `6.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 6 Function Calls / 6.3 Function Calls during Wake-up"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Uart", "UART", "initialized", "Calls", "Uart_Init", "MCU", "DMA", "FC7xxx"]
- `anchor`: "6.3"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Other Requirements"
- `path`: "Chapter 7 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["UART", "callback", "call", "called", "buffer", "errors", "ISR", "first"]
- `anchor`: "Chapter 7 Other Requirements"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["UART", "callback", "call", "called", "buffer", "errors", "ISR", "first"]
- `anchor`: "7.1"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Integration Steps"
- `path`: "Chapter 8 Integration Steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["UART", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
- `anchor`: "Chapter 8 Integration Steps"

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
- `content_types`: ["text", "toc", "table"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction ............................................................................…", "1.1", "Introduction ......................................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the UART module."]

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
- `anchors`: ["_MCAL/Src/Common/include/Std_Types.h", "_MCAL/Src/Common/include/Platform_Types.h", "_MCAL/Src/Common/include/Compiler.h", "_MCAL/Src/Common/include/Compiler_Cfg.h"]

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
- `content_types`: ["text", "table"]
- `anchors`: ["UART_START_SEC_VAR _INIT_ UNSPECIFIED", "UART_STOP_SEC_VAR _INIT_ UNSPECIFIED"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive area", "UART module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the UART driver:", "LLD_Uart.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 4 Exclusive area"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 5 Error Report", "5.1", "Det", "Function Name"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["UART_E_INVALID_PARAMETER;", "UART_E_CHANNEL_BUSY;", "Uart_AsyncSend", "UART_E_PARAM_CONFIG;"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 6 Function Calls", "6.1", "Function Calls during Startup", "Before using the Uart peripheral, the Uart driver must be initialized."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 7 Other Requirements", "7.1", "Notification, Callback, Callout", "The driver provides callback notifications for asynchronous transfers. The driver gives possibility…"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 8 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Integration Steps", "1)", "Configure the UART module and generate configuration files (please refer to Building chapter for de…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx UART Integration Manual"
- `keywords`: ["UART", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx UART Integration Manual; Revision History; 1.0"
- `keywords`: ["UART", "FC7xxx", "Integration", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table"]
- `summary`: "Table of Contents: FC7xxx UART Integration Manual; Table of Contents; Chapter 1 Introduction .......................................................................................................................................... 4"
- `keywords`: ["UART", "Calls", "FC7xxx", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile", "Add"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx UART Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["UART", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the UART module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx UART Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Uart", "UART", "Src", "CDD_Uart", "LLD_Uart", "provides", "EcuM", "DMA", "CDD_Uart_PBcfg", "FC7xxx"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx UART Integration Manual; _MCAL/Src/Common/include/Std_Types.h; _MCAL/Src/Common/include/Platform_Types.h"
- `keywords`: ["UART", "Uart", "Src", "include", "ins", "tresos", "plug", "folder", "FC7xxx", "Std_Types"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Std_Types.h"
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"
  - `p6`: "_MCAL/Src/Common/include/Compiler.h"
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx UART Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["UART", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
- `anchors`:
  - `p7`: "Chapter 3 Memory"
  - `p7`: "3.1"
  - `p7`: "Sections in Memory Map"
  - `p7`: "Section Name"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx UART Integration Manual; UART_START_SEC_VAR _INIT_ UNSPECIFIED; UART_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `keywords`: ["UART", "UNSPECIFIED", "FC7xxx", "UART_START_SEC_VAR", "UART_STOP_SEC_VAR", "Integration"]
- `anchors`:
  - `p8`: "UART_START_SEC_VAR _INIT_ UNSPECIFIED"
  - `p8`: "UART_STOP_SEC_VAR _INIT_ UNSPECIFIED"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive area: FC7xxx UART Integration Manual; Chapter 4 Exclusive area; UART module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["UART", "LLD_Uart", "FC7xxx", "SchM", "UART_EXCLUSIVE_AREA_00", "Uart_LLD_SyncSend", "UART_EXCLUSIVE_AREA_01", "Uart_LLD_AsyncSend", "UART_EXCLUSIVE_AREA_02", "Uart_LLD_SyncReceive"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive area"
  - `p9`: "UART module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the UART driver:"
  - `p9`: "LLD_Uart.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 4 Exclusive area"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 4 Exclusive area: FC7xxx UART Integration Manual; Interrupt Service Routine (ISR); Instance"
- `keywords`: ["UART", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FCUART0", "FCUART0_RxTx_IRQHandler", "FCUART1", "FCUART1_RxTx_IRQHandler"]
- `anchors`:
  - `p10`: "Interrupt Service Routine (ISR)"
  - `p10`: "Instance"
  - `p10`: "Interrupt Name"
  - `p10`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 5 Error Report / 5.1 Det: FC7xxx UART Integration Manual; Chapter 5 Error Report; 5.1"
- `keywords`: ["UART", "UART_E_PARAM_CONFIG", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "UART_E_INVALID_POINTER", "UART_E_INVALID_PARAMETER", "UART_E_CHANNEL_BUSY", "UART_E_TIMEOUT", "FC7xxx", "Uart_Init"]
- `anchors`:
  - `p11`: "Chapter 5 Error Report"
  - `p11`: "5.1"
  - `p11`: "Det"
  - `p11`: "Function Name"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 5 Error Report / 5.1 Det: FC7xxx UART Integration Manual; UART_E_INVALID_PARAMETER;; UART_E_CHANNEL_BUSY;"
- `keywords`: ["UART", "UART_E_INVALID_POINTER", "UART_E_INVALID_PARAMETER", "UART_E_CHANNEL_BUSY", "UART_E_PARAM_CONFIG", "UART_E_UNINIT", "UART_E_INVALID_CHANNEL", "FC7xxx", "Uart_AsyncSend", "Uart_GetStatus"]
- `anchors`:
  - `p12`: "UART_E_INVALID_PARAMETER;"
  - `p12`: "UART_E_CHANNEL_BUSY;"
  - `p12`: "Uart_AsyncSend"
  - `p12`: "UART_E_PARAM_CONFIG;"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup: FC7xxx UART Integration Manual; Chapter 6 Function Calls; 6.1"
- `keywords`: ["Uart", "UART", "initialized", "Calls", "Uart_Init", "MCU", "DMA", "FC7xxx", "must", "PORT"]
- `anchors`:
  - `p13`: "Chapter 6 Function Calls"
  - `p13`: "6.1"
  - `p13`: "Function Calls during Startup"
  - `p13`: "Before using the Uart peripheral, the Uart driver must be initialized."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout: FC7xxx UART Integration Manual; Chapter 7 Other Requirements; 7.1"
- `keywords`: ["UART", "callback", "call", "called", "buffer", "errors", "ISR", "first", "Uart_SetTransBuffer", "UART_EVENT_END_TRANSFER"]
- `anchors`:
  - `p14`: "Chapter 7 Other Requirements"
  - `p14`: "7.1"
  - `p14`: "Notification, Callback, Callout"
  - `p14`: "The driver provides callback notifications for asynchronous transfers. The driver gives possibility to configure callbacks for"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 8 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Integration Steps: FC7xxx UART Integration Manual; Chapter 8 Integration Steps; 1)"
- `keywords`: ["UART", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p15`: "Chapter 8 Integration Steps"
  - `p15`: "1)"
  - `p15`: "Configure the UART module and generate configuration files (please refer to Building chapter for details)."
  - `p15`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[36.24, 96.02, 559.2, 132.56]`
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
- `key_fields`: ["UART", "Calls", "FC7xxx", "Integration", "Memory"]
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
- `key_fields`: ["Uart", "UART", "Src", "CDD_Uart", "LLD_Uart"]
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
- `key_fields`: ["UART", "Uart", "Src", "include", "ins"]
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
- `bbox`: `[36.24, 116.9, 559.2, 784.26]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Table-like region on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[36.12, 36.66, 559.32, 68.22]`
- `key_fields`: ["UART START SEC VAR INIT UNSPECIFIED _ _…"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 8."
- `anchor`: "Table-like region on page 8"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 4 Exclusive area"
- `bbox`: `[36.24, 58.32, 559.2, 535.81]`
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
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `bbox`: `[36.24, 116.88, 559.2, 785.84]`
- `key_fields`: ["Function Name", "Error Type"]
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
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `bbox`: `[36.19, 36.64, 559.25, 239.5]`
- `key_fields`: ["UART E INVALID PARAMETER; _ _ _ UART E…"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like content on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["Uart", "UART", "initialized", "Calls", "Uart_Init"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-UART-SETTRANSBUFFER
- `name`: "Uart_SetTransBuffer"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,14`
- `brief`: "api index entry for `Uart_SetTransBuffer`."
- `anchors`:
  - `p11`: "Uart_SetTransBuffer"
  - `p14`: "user a chance to call Uart_SetTransBuffer() to provide a new buffer for continued reception. If a new buffer is not"
- `aliases`: []

### API-UART-DEINIT
- `name`: "Uart_DeInit"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `Uart_DeInit`."
- `anchors`:
  - `p13`: "The Uart module can be deinitialized by calling Uart_DeInit(). It must be ensured that all hardware channels are not in the"
- `aliases`: []

### API-UART-LLD-IRQHANDLER
- `name`: "Uart_LLD_IrqHandler"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "api index entry for `Uart_LLD_IrqHandler`."
- `anchors`:
  - `p14`: "Uart_LLD_IrqHandler(0U);"
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
  - `p9`: "UART module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
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

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p10`: "Interrupt Service Routine (ISR)"
- `aliases`: []

### CFG-UART-GENERALTYPES
- `name`: "Uart_GeneralTypes"
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "config index entry for `Uart_GeneralTypes`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_GeneralTypes.h"
- `aliases`: []

### MACRO-UART-E-PARAM-CONFIG
- `name`: "UART_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `UART_E_PARAM_CONFIG`."
- `anchors`:
  - `p11`: "UART_E_PARAM_CONFIG"
  - `p12`: "UART_E_PARAM_CONFIG;"
- `aliases`: []

### MACRO-UART-E-INVALID-CHANNEL
- `name`: "UART_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `UART_E_INVALID_CHANNEL`."
- `anchors`:
  - `p11`: "UART_E_INVALID_CHANNEL;"
  - `p12`: "UART_E_INVALID_CHANNEL;"
- `aliases`: []

### MACRO-UART-E-UNINIT
- `name`: "UART_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `UART_E_UNINIT`."
- `anchors`:
  - `p11`: "UART_E_UNINIT;"
  - `p12`: "UART_E_UNINIT;"
- `aliases`: []

### MACRO-UART-E-INVALID-POINTER
- `name`: "UART_E_INVALID_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `UART_E_INVALID_POINTER`."
- `anchors`:
  - `p11`: "UART_E_INVALID_POINTER;"
  - `p12`: "UART_E_INVALID_POINTER;"
- `aliases`: []

### MACRO-UART-E-INVALID-PARAMETER
- `name`: "UART_E_INVALID_PARAMETER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `UART_E_INVALID_PARAMETER`."
- `anchors`:
  - `p11`: "UART_E_INVALID_PARAMETER;"
  - `p12`: "UART_E_INVALID_PARAMETER;"
- `aliases`: []

### MACRO-UART-E-CHANNEL-BUSY
- `name`: "UART_E_CHANNEL_BUSY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `UART_E_CHANNEL_BUSY`."
- `anchors`:
  - `p11`: "UART_E_CHANNEL_BUSY"
  - `p12`: "UART_E_CHANNEL_BUSY;"
- `aliases`: []

### MACRO-UART-START-SEC-VAR
- `name`: "UART_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `UART_START_SEC_VAR`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "UART_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-UART-STOP-SEC-VAR
- `name`: "UART_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `UART_STOP_SEC_VAR`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "UART_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p14`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-UART-EVENT-END-TRANSFER
- `name`: "UART_EVENT_END_TRANSFER"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `UART_EVENT_END_TRANSFER`."
- `anchors`:
  - `p14`: "call, the callback parameter is UART_EVENT_END_TRANSFER."
- `aliases`: []

### MACRO-UART-E-TIMEOUT
- `name`: "UART_E_TIMEOUT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_E_TIMEOUT`."
- `anchors`:
  - `p11`: "UART_E_TIMEOUT;"
- `aliases`: []

### MACRO-UART-START-SEC-CODE
- `name`: "UART_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CODE`."
- `anchors`:
  - `p7`: "UART_START_SEC_CODE"
- `aliases`: []

### MACRO-UART-START-SEC-CODE-AC
- `name`: "UART_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "UART_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-UART-START-SEC-CONFIG-DATA-16
- `name`: "UART_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-UART-START-SEC-CONFIG-DATA-32
- `name`: "UART_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-UART-START-SEC-CONFIG-DATA-8
- `name`: "UART_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-UART-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "UART_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-UART-START-SEC-CONST-16
- `name`: "UART_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONST_16"
- `aliases`: []

### MACRO-UART-START-SEC-CONST-32
- `name`: "UART_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONST_32"
- `aliases`: []

### MACRO-UART-START-SEC-CONST-8
- `name`: "UART_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONST_8"
- `aliases`: []

### MACRO-UART-START-SEC-CONST-BOOLEAN
- `name`: "UART_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-UART-START-SEC-VAR-NO-INIT-16
- `name`: "UART_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-UART-START-SEC-VAR-NO-INIT-32
- `name`: "UART_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-UART-START-SEC-VAR-NO-INIT-8
- `name`: "UART_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-UART-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "UART_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-UART-STOP-SEC-CODE
- `name`: "UART_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CODE"
- `aliases`: []

### MACRO-UART-STOP-SEC-CODE-AC
- `name`: "UART_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONFIG-DATA-16
- `name`: "UART_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONFIG-DATA-32
- `name`: "UART_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONFIG-DATA-8
- `name`: "UART_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONST-16
- `name`: "UART_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONST-32
- `name`: "UART_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONST-8
- `name`: "UART_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-UART-STOP-SEC-CONST-BOOLEAN
- `name`: "UART_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-UART-STOP-SEC-VAR-NO-INIT-16
- `name`: "UART_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-UART-STOP-SEC-VAR-NO-INIT-32
- `name`: "UART_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-UART-STOP-SEC-VAR-NO-INIT-8
- `name`: "UART_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-UART-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "UART_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `UART_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-EXIT-INTERRUPT
- `name`: "EXIT_INTERRUPT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `EXIT_INTERRUPT`."
- `anchors`:
  - `p14`: "EXIT_INTERRUPT();"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-UART-EVENT-ERROR
- `name`: "UART_EVENT_ERROR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `UART_EVENT_ERROR`."
- `anchors`:
  - `p14`: "The callback is called with the UART_EVENT_ERROR argument."
- `aliases`: []

### MACRO-UART-EVENT-RX-FULL
- `name`: "UART_EVENT_RX_FULL"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `UART_EVENT_RX_FULL`."
- `anchors`:
  - `p14`: "to distinguish between the two calls. For the first call, the parameter is UART_EVENT_RX_FULL, while for the second"
- `aliases`: []

### MACRO-UART-EVENT-TX-EMPTY
- `name`: "UART_EVENT_TX_EMPTY"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `UART_EVENT_TX_EMPTY`."
- `anchors`:
  - `p14`: "UART_EVENT_TX_EMPTY, indicating that all bytes in the provided buffer have been transmitted. In this call,"
- `aliases`: []

### MACRO-UART-EXCLUSIVE-AREA-00
- `name`: "UART_EXCLUSIVE_AREA_00"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_00 is used in Uart_LLD_SyncSend"
- `aliases`: []

### MACRO-UART-EXCLUSIVE-AREA-01
- `name`: "UART_EXCLUSIVE_AREA_01"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_01 is used in Uart_LLD_AsyncSend."
- `aliases`: []

### MACRO-UART-EXCLUSIVE-AREA-02
- `name`: "UART_EXCLUSIVE_AREA_02"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_02 is used in Uart_LLD_SyncReceive."
- `aliases`: []

### MACRO-UART-EXCLUSIVE-AREA-03
- `name`: "UART_EXCLUSIVE_AREA_03"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_03 is used in Uart_LLD_AsyncReceive."
- `aliases`: []

### MACRO-UART-EXCLUSIVE-AREA-04
- `name`: "UART_EXCLUSIVE_AREA_04"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_04 is used in Uart_LLD_GetReceiveStatus."
- `aliases`: []

### MACRO-UART-EXCLUSIVE-AREA-05
- `name`: "UART_EXCLUSIVE_AREA_05"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `UART_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_05 is used in Uart_LLD_GetTransmitStatus."
- `aliases`: []

### MACRO-UART-E-ALREADY-INITIALIZED
- `name`: "UART_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "UART_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-UART-E-DEINIT-FAILED
- `name`: "UART_E_DEINIT_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_E_DEINIT_FAILED`."
- `anchors`:
  - `p11`: "UART_E_DEINIT_FAILED;"
- `aliases`: []

### MACRO-UART-E-INIT-FAILED
- `name`: "UART_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `UART_E_INIT_FAILED`."
- `anchors`:
  - `p11`: "UART_E_INIT_FAILED;"
- `aliases`: []

### MACRO-UART-TEXT-SECTION
- `name`: "UART_TEXT_SECTION"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `UART_TEXT_SECTION`."
- `anchors`:
  - `p14`: "UART_TEXT_SECTION ISR(UART_0_IRQHandler)"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p14`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function"
- `aliases`: []

### MEM-UART-START-SEC-VAR
- `name`: "UART_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR
- `name`: "UART_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-UART-START-SEC
- `name`: "UART_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-UART-START-SEC-CONST
- `name`: "UART_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-UART-START-SEC-CONST-UNSPECIFIED
- `name`: "UART_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "UART_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-UART-START-SEC-RAMCODE
- `name`: "UART_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "UART_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-UART-START-SEC-VAR-INIT-16
- `name`: "UART_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-UART-START-SEC-VAR-INIT-32
- `name`: "UART_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-UART-START-SEC-VAR-INIT-8
- `name`: "UART_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-UART-START-SEC-VAR-INIT-BOOLEAN
- `name`: "UART_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-UART-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "UART_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "UART_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-UART-START-SEC-VAR-NO-INIT
- `name`: "UART_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-UART-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "UART_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "UART_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-UART-STOP-SEC
- `name`: "UART_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-UART-STOP-SEC-CONST
- `name`: "UART_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-UART-STOP-SEC-CONST-UNSPECIFIED
- `name`: "UART_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-UART-STOP-SEC-RAMCODE
- `name`: "UART_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-INIT-16
- `name`: "UART_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-INIT-32
- `name`: "UART_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-INIT-8
- `name`: "UART_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "UART_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "UART_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "UART_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-NO-INIT
- `name`: "UART_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-UART-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "UART_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `UART_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "UART_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
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

### FILE-LLD-UART-C
- `name`: "LLD_Uart.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `LLD_Uart.c`."
- `anchors`:
  - `p9`: "LLD_Uart.c:"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p14`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-UART-H
- `name`: "SchM_Uart.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Uart.h`."
- `anchors`:
  - `p6`: "SchM_Uart.h"
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
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mcal.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mcal.h"
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

### FILE-MCAL-SRC-UART-SRC-CDD-UART-C
- `name`: "_MCAL/Src/Uart/Src/CDD_Uart.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/CDD_Uart.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/CDD_Uart.c"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-CDD-UART-H
- `name`: "_MCAL/Src/Uart/Src/CDD_Uart.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/CDD_Uart.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/CDD_Uart.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-CDD-UART-IRQ-C
- `name`: "_MCAL/Src/Uart/Src/CDD_Uart_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/CDD_Uart_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/CDD_Uart_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-LLD-UART-C
- `name`: "_MCAL/Src/Uart/Src/LLD_Uart.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/LLD_Uart.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/LLD_Uart.c"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-LLD-UART-H
- `name`: "_MCAL/Src/Uart/Src/LLD_Uart.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/LLD_Uart.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/LLD_Uart.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-GENERALTYPES-H
- `name`: "_MCAL/Src/Uart/Src/Uart_GeneralTypes.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_GeneralTypes.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_GeneralTypes.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-IRQ-H
- `name`: "_MCAL/Src/Uart/Src/Uart_Irq.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_Irq.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Irq.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-MEMMAP-H
- `name`: "_MCAL/Src/Uart/Src/Uart_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-REG-H
- `name`: "_MCAL/Src/Uart/Src/Uart_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-REGOPS-H
- `name`: "_MCAL/Src/Uart/Src/Uart_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-TYPES-H
- `name`: "_MCAL/Src/Uart/Src/Uart_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-UART-SRC-UART-VERSION-H
- `name`: "_MCAL/Src/Uart/Src/Uart_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Uart/Src/Uart_Version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-UART-CFG-H
- `name`: "_MCAL_generate/include/CDD_Uart_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_Uart_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Uart_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-UART-DEFINES-H
- `name`: "_MCAL_generate/include/CDD_Uart_Defines.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_Uart_Defines.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Uart_Defines.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-UART-PBCFG-C
- `name`: "_MCAL_generate/src/CDD_Uart_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Uart_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Uart_PBcfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-UART-PBCFG-H
- `name`: "_MCAL_generate/src/CDD_Uart_PBcfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Uart_PBcfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Uart_PBcfg.h"
- `aliases`: []

### TERM-UART
- `name`: "UART"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `UART`."
- `anchors`:
  - `p1`: "UART"
  - `p2`: "UART"
  - `p3`: "UART"
  - `p4`: "UART"
  - `p5`: "UART"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,11,13`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p11`: "Det"
  - `p13`: "Det"
- `aliases`: []

### TERM-UART-INIT
- `name`: "Uart_Init"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,13`
- `brief`: "term index entry for `Uart_Init`."
- `anchors`:
  - `p11`: "Uart_Init"
  - `p13`: "During STARTUP, the API called to initialize the driver is Uart_Init."
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p5`: "Dem"
  - `p6`: "Dem"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,13`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p6`: "EB tresos"
  - `p13`: "EB tresos"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p5`: "MCAL"
  - `p6`: "MCAL"
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

### TERM-CDD-UART-PBCFG
- `name`: "CDD_Uart_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Uart_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Uart_PBcfg.c"
- `aliases`: []

### TERM-UART-0-IRQHANDLER
- `name`: "UART_0_IRQHandler"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `UART_0_IRQHandler`."
- `anchors`:
  - `p14`: "extern ISR(UART_0_IRQHandler);"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p14`: "AUTOSAR"
- `aliases`: []

### TERM-CDD-UART-CFG
- `name`: "CDD_Uart_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Uart_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Uart_Cfg.h"
- `aliases`: []

### TERM-CDD-UART-DEFINES
- `name`: "CDD_Uart_Defines"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Uart_Defines`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Uart_Defines.h"
- `aliases`: []

### TERM-CDD-UART-IRQ
- `name`: "CDD_Uart_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Uart_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/CDD_Uart_Irq.c"
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p6`: "Copy the UART module(_MCAL/EB_Plugins/eclipse/plugins/Uart) folder to EB tresos plug-ins (EB/tresos/plugins/)"
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

### TERM-FCUART0-RXTX-IRQHANDLER
- `name`: "FCUART0_RxTx_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `FCUART0_RxTx_IRQHandler`."
- `anchors`:
  - `p10`: "FCUART0_RxTx_IRQHandler"
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

### TERM-SCHM-UART
- `name`: "SchM_Uart"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Uart`."
- `anchors`:
  - `p6`: "SchM_Uart.h"
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

### TERM-UART-ABORTTRANSFER
- `name`: "Uart_AbortTransfer"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_AbortTransfer`."
- `anchors`:
  - `p11`: "Uart_AbortTransfer"
- `aliases`: []

### TERM-UART-ASYNCRECEIVE
- `name`: "Uart_AsyncReceive"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_AsyncReceive`."
- `anchors`:
  - `p11`: "Uart_AsyncReceive"
- `aliases`: []

### TERM-UART-ASYNCSEND
- `name`: "Uart_AsyncSend"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Uart_AsyncSend`."
- `anchors`:
  - `p12`: "Uart_AsyncSend"
- `aliases`: []

### TERM-UART-DEINIT
- `name`: "Uart_Deinit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_Deinit`."
- `anchors`:
  - `p11`: "Uart_Deinit"
- `aliases`: []

### TERM-UART-GETBAUDRATE
- `name`: "Uart_GetBaudrate"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_GetBaudrate`."
- `anchors`:
  - `p11`: "Uart_GetBaudrate"
- `aliases`: []

### TERM-UART-GETSTATUS
- `name`: "Uart_GetStatus"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Uart_GetStatus`."
- `anchors`:
  - `p12`: "Uart_GetStatus"
- `aliases`: []

### TERM-UART-GETVERSIONINFO
- `name`: "Uart_GetVersionInfo"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Uart_GetVersionInfo`."
- `anchors`:
  - `p12`: "Uart_GetVersionInfo"
- `aliases`: []

### TERM-UART-IRQ
- `name`: "Uart_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Uart_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/CDD_Uart_Irq.c"
- `aliases`: []

### TERM-UART-LLD-ASYNCRECEIVE
- `name`: "Uart_LLD_AsyncReceive"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Uart_LLD_AsyncReceive`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_03 is used in Uart_LLD_AsyncReceive."
- `aliases`: []

### TERM-UART-LLD-ASYNCSEND
- `name`: "Uart_LLD_AsyncSend"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Uart_LLD_AsyncSend`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_01 is used in Uart_LLD_AsyncSend."
- `aliases`: []

### TERM-UART-LLD-GETRECEIVESTATUS
- `name`: "Uart_LLD_GetReceiveStatus"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Uart_LLD_GetReceiveStatus`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_04 is used in Uart_LLD_GetReceiveStatus."
- `aliases`: []

### TERM-UART-LLD-GETTRANSMITSTATUS
- `name`: "Uart_LLD_GetTransmitStatus"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Uart_LLD_GetTransmitStatus`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_05 is used in Uart_LLD_GetTransmitStatus."
- `aliases`: []

### TERM-UART-LLD-SYNCRECEIVE
- `name`: "Uart_LLD_SyncReceive"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Uart_LLD_SyncReceive`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_02 is used in Uart_LLD_SyncReceive."
- `aliases`: []

### TERM-UART-LLD-SYNCSEND
- `name`: "Uart_LLD_SyncSend"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Uart_LLD_SyncSend`."
- `anchors`:
  - `p9`: "UART_EXCLUSIVE_AREA_00 is used in Uart_LLD_SyncSend"
- `aliases`: []

### TERM-UART-MEMMAP
- `name`: "Uart_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Uart_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_MemMap.h"
- `aliases`: []

### TERM-UART-REG
- `name`: "Uart_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Uart_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Reg.h"
- `aliases`: []

### TERM-UART-REGOPS
- `name`: "Uart_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Uart_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_RegOps.h"
- `aliases`: []

### TERM-UART-SETBAUDRATE
- `name`: "Uart_SetBaudrate"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_SetBaudrate`."
- `anchors`:
  - `p11`: "Uart_SetBaudrate"
- `aliases`: []

### TERM-UART-SYNCRECEIVE
- `name`: "Uart_SyncReceive"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_SyncReceive`."
- `anchors`:
  - `p11`: "Uart_SyncReceive"
- `aliases`: []

### TERM-UART-SYNCSEND
- `name`: "Uart_SyncSend"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Uart_SyncSend`."
- `anchors`:
  - `p11`: "Uart_SyncSend"
- `aliases`: []

### TERM-UART-TYPES
- `name`: "Uart_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Uart_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Types.h"
- `aliases`: []

### TERM-UART-VERSION
- `name`: "Uart_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Uart_Version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Uart/Src/Uart_Version.h"
- `aliases`: []

### TERM-UNIVERSAL-ASYNCHRONOUS-RECEIVER-TRANSMITTER-COMPLEX-DEVICE-D
- `name`: "Universal Asynchronous Receiver/Transmitter Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Universal Asynchronous Receiver/Transmitter Complex Device Driver`."
- `anchors`:
  - `p1`: "Universal Asynchronous Receiver/Transmitter Complex Device Driver"
- `aliases`: []

## 9. Search Aliases

### ALIAS-UART
- `canonical`: "UART"
- `aliases`: ["Universal Asynchronous Receiver/Transmitter Complex Device Driver", "UART 通用异步收发器复杂驱动", "UART module", "UART driver", "UART User Manual", "UART Integration Manual", "Uart", "FCUART", "Universal Asynchronous Receiver/Transmitter", "serial port", "串口", "UART驱动"]
- `related_ids`: ["TERM-UART"]

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

### ALIAS-UART-ASYNC-RECEIVE
- `canonical`: "UART async receive"
- `aliases`: ["Uart_AsyncReceive", "AsyncReceive", "asynchronous receive", "receive notification", "异步接收"]
- `related_ids`: []

### ALIAS-UART-CHANNEL
- `canonical`: "UART channel"
- `aliases`: ["UartChannel", "Uart_ChannelConfigType", "UartGlobalConfig", "baud rate", "RX/TX channel"]
- `related_ids`: []

### ALIAS-UART-HARDWARE
- `canonical`: "UART hardware"
- `aliases`: ["LLD_Uart", "Uart_RegOps", "FCUART", "FIFO", "Rx", "Tx"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between UART_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `UART_Integration_Manual.pdf`
- `source_pdf_sha256`: `000fe2f2a0ff82f7cc1b8a76db6638d1fbb4f31d902193a47d28cede84c02b04`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `122`
- `technical_missing_terms_added`: `5`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `122`
- `supplemented_missing_technical_token_count`: `5`
- `supplemented_physical_pages_count`: `14`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Macros"
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
  - "Flagchip"
  - "Mcu"
  - "Port"
  - "Proprietary"
  - "assign"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "clock"
  - "code"
  - "common"
  - "configurations"
  - "controller"
  - "detection"
  - "enabled"
  - "enabling"
  - "etc"
  - "every"
  - "failure"
  - "functions"
  - "initialization"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "out"
  - "output"
  - "parameters"
  - "parts"
  - "pin"
  - "pins"
  - "point"
  - "pointers"
  - "production"
  - "protect"
  - "range"
  - "reference"
  - "required"
  - "selecting"
  - "signal"
  - "signaling"
  - "signals"
  - "some"
  - "support"
  - "through"
  - "tracing"
  - "unprotect"
  - "use"
  - "wakeup"
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
  - "developed"
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
  - "After"
  - "Confidential"
  - "DeInit"
  - "Flagchip"
  - "Otherwise"
  - "Proprietary"
  - "also"
  - "before"
  - "completed"
  - "deinitialization"
  - "done"
  - "each"
  - "enables"
  - "initializing"
  - "modules"
  - "option"
  - "process"
  - "report"
  - "service"
  - "should"
  - "successfully"
  - "transmission"
  - "will"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Callbacks"
  - "Confidential"
  - "Flagchip"
  - "Macros"
  - "Proprietary"
  - "Receive"
  - "Transmit"
  - "also"
  - "calle"
  - "change"
  - "define"
  - "each"
  - "end"
  - "example"
  - "finished"
  - "framing"
  - "full"
  - "giving"
  - "handles"
  - "made"
  - "mode"
  - "more"
  - "noise"
  - "overrun"
  - "parity"
  - "signature"
  - "time"
  - "transmission"
  - "transmit"
  - "twice"
  - "when"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
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
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15`
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
- `physical_pages`: `3,5,6,8,10,11,12,13`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0008-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001"]
- `message`: "8 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
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
- `pdf_page_count`: `15`
- `indexed_physical_pages_count`: `15`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `21`
- `table_index_count`: `10`
- `figure_index_count`: `0`
- `symbol_index_count`: `172`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `000fe2f2a0ff82f7cc1b8a76db6638d1fbb4f31d902193a47d28cede84c02b04`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `122`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->