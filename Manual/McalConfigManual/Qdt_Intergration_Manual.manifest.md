---
manifest_schema_version: "1.1"
source_pdf: "Qdt_Intergration_Manual.pdf"
source_pdf_sha256: "865d0d562151764e15d852e1399eced5dbbfac30ef22f9e2aa13b85643277aa4"
source_pdf_size_bytes: 313001
pdf_page_count: 13
generated_at: "2026-06-19T14:01:27Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched"
source_document_id: null
source_document_revision: "Rev: 1.2.0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: Qdt_Intergration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `Qdt_Intergration_Manual.pdf`
- `source_pdf_sha256`: `865d0d562151764e15d852e1399eced5dbbfac30ef22f9e2aa13b85643277aa4`
- `source_pdf_size_bytes`: `313001`
- `pdf_page_count`: `13`
- `source_document_id`: `null`
- `source_document_revision`: `Rev: 1.2.0`
- `visible_cover_title`: `Integration's Manual Qdt Integration's Manual for FC7xxx Series`
- `visible_cover_revision`: `Rev: 1.2.0`
- `revision_history_latest_row`: `None`
- `generated_at`: `2026-06-19T14:01:27Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL QDT module - Manual"
- `module_scope`: "QDT driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["QDT", "Quadrature Decoder Timer / Quadrature Decode Driver", "Complex Device Driver / vendor-specific QDT driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Qdt", "CDD_Qdt", "CDD_QDT", "Ftu", "FTU"]
- `summary`: "This 13-page manual indexes QDT content across source physical pages 1-13, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["Qdt", "FC7xxx", "FC7300F8MDQ", "FC7300F8MDT", "FC7300F4MDD", "FC7300F4MDS", "FC7240F2MDS", "Integration"]
- `anchor`: "Integration's Manual Qdt Integration's Manual for FC7xxx Series"

### SEC-0002-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Qdt", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Series", "Dependencies"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["QDT", "integration", "describes", "Rev"]
- `anchor`: "Chapter 1. Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["QDT", "integration", "describes", "Rev"]
- `anchor`: "1.1. Introduction"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Qdt", "QDT", "CDD_Qdt", "Src", "include", "provides", "EcuM", "Qdt_Hal"]
- `anchor`: "Chapter 2. Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Qdt", "QDT", "CDD_Qdt", "Src", "include", "provides", "EcuM", "Qdt_Hal"]
- `anchor`: "2.1. Dependencies on Other Modules"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Qdt", "QDT", "CDD_Qdt", "Src", "include", "provides", "EcuM", "Qdt_Hal"]
- `anchor`: "2.2. Files Required for Compile"

### SEC-002-02
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["QDT", "Src", "include", "ins", "tresos", "plug", "folder", "Std_Types"]
- `anchor`: "Chapter 2. Building"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["QDT", "Src", "include", "ins", "tresos", "plug", "folder", "Std_Types"]
- `anchor`: "2.3. Add Plug-ins"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Qdt", "These", "QDT_START_SEC_VAR", "QDT_STOP_SEC_VAR", "UNSPECIFIED", "RAMCODE", "all", "sections"]
- `anchor`: "Chapter 3. Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Qdt", "These", "QDT_START_SEC_VAR", "QDT_STOP_SEC_VAR", "UNSPECIFIED", "RAMCODE", "all", "sections"]
- `anchor`: "3.1. Sections in Memory Map"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["QDT", "Qdt_ML_Channel_Init", "SchM", "QDT_Hal", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00", "Qdt_HL_Instance_Init", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_02"]
- `anchor`: "Chapter 4. Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["Qdt", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "QDT0", "QDT_IsrQDT0_ALL"]
- `anchor`: "Chapter 5. Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["Qdt", "QDT_E_UNINIT_U8", "QDT_E_PARAM_U8", "QDT_E_INVALID_CHANNEL_U8", "Error", "QDT_E_PARTITION_MAPPING", "QDT_Init", "QDT_INITIALIZED"]
- `anchor`: "Chapter 6. Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["QDT_E_UNINIT_U8", "QDT_E_PARAM_U8", "QDT_E_INVALID_CHANNEL_U8", "QDT_E_PARTITION_MAPPING", "Error", "QDT_Init", "QDT_INITIALIZED", "QDT_E_INIT_FAILED_U8"]
- `anchor`: "6.1. Det"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Qdt", "QDT_E_PARAM_U8", "QDT_E_UNINIT_U8", "FC7xxx", "QDT_GetLECNT_HOLD", "QDT_GetPOSDTMRCNT", "QDT_GetPOSDTMRCNT_HOLD", "QDT_GetSpeed"]
- `anchor`: "6.2. Dem"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU", "before", "QDT_Configuration", "EcuM"]
- `anchor`: "Chapter 7. Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU", "before", "QDT_Configuration", "EcuM"]
- `anchor`: "7.1. Function Calls during Startup"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU", "before", "QDT_Configuration", "EcuM"]
- `anchor`: "7.2. Function Calls during Shutdown"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU", "before", "QDT_Configuration", "EcuM"]
- `anchor`: "7.3. Function Calls during Wake-up"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU", "before", "QDT_Configuration", "EcuM"]
- `anchor`: "7.4. Function Calls during Runtime"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["QDT", "Qdt", "AUTOSAR_OS_NOT_USED", "FC7xxx", "TimerOverflowNotification", "WdogNotification", "ChannelNotifica", "Notification"]
- `anchor`: "Chapter 8. Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["QDT", "Qdt", "AUTOSAR_OS_NOT_USED", "FC7xxx", "TimerOverflowNotification", "WdogNotification", "ChannelNotifica", "Notification"]
- `anchor`: "8.1. Notification, Callback, Callout"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["QDT", "Qdt", "AUTOSAR_OS_NOT_USED", "FC7xxx", "TimerOverflowNotification", "WdogNotification", "ChannelNotifica", "Notification"]
- `anchor`: "8.2. Macros"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["QDT", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate"]
- `anchor`: "Chapter 9. Integration Steps"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["Integration's Manual", "Qdt Integration's Manual for", "FC7xxx Series", "Rev: 1.2.0"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "api"]
- `anchors`: ["Qdt Integration's Manual for FC7xxx Series", "Table of Contents", "Chapter 1. Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…", "1.1. Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1. Introduction", "Chapter 1. Introduction", "1.1. Introduction", "This integration manual describes the integration requirements for the QDT module."]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Qdt Integration's Manual for FC7xxx Series", "Chapter 2. Building", "2.1. Dependencies on Other Modules", "Module configuration dependency"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 2. Building", "_MCAL/Src/Common/include/Std_Types.h", "_MCAL/Src/Common/include/Platform_Types.h", "_MCAL/Src/Common/include/Compiler.h"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Qdt Integration's Manual for FC7xxx Series", "Chapter 3. Memory", "3.1. Sections in Memory Map", "Section Name"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4. Exclusive Area", "Chapter 4. Exclusive Area", "QDT module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the QDT driver: • QDT_Hal.c:"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Qdt Integration's Manual for FC7xxx Series", "Chapter 5. Interrupt Service Routine (ISR)", "Instance Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6. Error Report", "Chapter 6. Error Report", "6.1. Det", "Function Name"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `anchors`: ["Qdt Integration's Manual for FC7xxx Series", "Function Name", "Error Type", "QDT_GetLECNT_HOLD"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7. Function Calls", "Chapter 7. Function Calls", "7.1. Function Calls during Startup", "QDT shall be initialized during STARTUP phase of EcuM initialization. The API to be called for"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `anchors`: ["Qdt Integration's Manual for FC7xxx Series", "Chapter 8. Other Requirements", "8.1. Notification, Callback, Callout", "Notification"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9. Integration Steps", "Chapter 9. Integration Steps", "1) Configure the QDT module and generate configuration files (please refer to Building chapter for", "details)."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: Integration's Manual; Qdt Integration's Manual for; FC7xxx Series"
- `keywords`: ["Qdt", "FC7xxx", "FC7300F8MDQ", "FC7300F8MDT", "FC7300F4MDD", "FC7300F4MDS", "FC7240F2MDS", "Integration", "Series", "Rev"]
- `anchors`:
  - `p1`: "Integration's Manual"
  - `p1`: "Qdt Integration's Manual for"
  - `p1`: "FC7xxx Series"
  - `p1`: "Rev: 1.2.0"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "api"]
- `summary`: "Table of Contents: Qdt Integration's Manual for FC7xxx Series; Table of Contents; Chapter 1. Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 2"
- `keywords`: ["Qdt", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Series", "Dependencies", "Modules", "Required"]
- `anchors`:
  - `p2`: "Qdt Integration's Manual for FC7xxx Series"
  - `p2`: "Table of Contents"
  - `p2`: "Chapter 1. Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p2`: "1.1. Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: Chapter 1. Introduction; Chapter 1. Introduction; 1.1. Introduction"
- `keywords`: ["QDT", "integration", "describes", "Rev"]
- `anchors`:
  - `p3`: "Chapter 1. Introduction"
  - `p3`: "Chapter 1. Introduction"
  - `p3`: "1.1. Introduction"
  - `p3`: "This integration manual describes the integration requirements for the QDT module."

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: Qdt Integration's Manual for FC7xxx Series; Chapter 2. Building; 2.1. Dependencies on Other Modules"
- `keywords`: ["Qdt", "QDT", "CDD_Qdt", "Src", "include", "provides", "EcuM", "Qdt_Hal", "Qdt_HWA", "CDD_Qdt_cfg"]
- `anchors`:
  - `p4`: "Qdt Integration's Manual for FC7xxx Series"
  - `p4`: "Chapter 2. Building"
  - `p4`: "2.1. Dependencies on Other Modules"
  - `p4`: "Module configuration dependency"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: Chapter 2. Building; _MCAL/Src/Common/include/Std_Types.h; _MCAL/Src/Common/include/Platform_Types.h"
- `keywords`: ["QDT", "Src", "include", "ins", "tresos", "plug", "folder", "Std_Types", "Platform_Types", "Compiler_Cfg"]
- `anchors`:
  - `p5`: "Chapter 2. Building"
  - `p5`: "_MCAL/Src/Common/include/Std_Types.h"
  - `p5`: "_MCAL/Src/Common/include/Platform_Types.h"
  - `p5`: "_MCAL/Src/Common/include/Compiler.h"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: Qdt Integration's Manual for FC7xxx Series; Chapter 3. Memory; 3.1. Sections in Memory Map"
- `keywords`: ["Qdt", "These", "QDT_START_SEC_VAR", "QDT_STOP_SEC_VAR", "UNSPECIFIED", "RAMCODE", "all", "sections", "which", "have"]
- `anchors`:
  - `p6`: "Qdt Integration's Manual for FC7xxx Series"
  - `p6`: "Chapter 3. Memory"
  - `p6`: "3.1. Sections in Memory Map"
  - `p6`: "Section Name"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: Chapter 4. Exclusive Area; Chapter 4. Exclusive Area; QDT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["QDT", "Qdt_ML_Channel_Init", "SchM", "QDT_Hal", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00", "Qdt_HL_Instance_Init", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_02", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_03", "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_04"]
- `anchors`:
  - `p7`: "Chapter 4. Exclusive Area"
  - `p7`: "Chapter 4. Exclusive Area"
  - `p7`: "QDT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p7`: "The following critical regions are used in the QDT driver: • QDT_Hal.c:"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): Qdt Integration's Manual for FC7xxx Series; Chapter 5. Interrupt Service Routine (ISR); Instance Interrupt Name"
- `keywords`: ["Qdt", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "QDT0", "QDT_IsrQDT0_ALL", "QDT1", "QDT_IsrQDT1_ALL"]
- `anchors`:
  - `p8`: "Qdt Integration's Manual for FC7xxx Series"
  - `p8`: "Chapter 5. Interrupt Service Routine (ISR)"
  - `p8`: "Instance Interrupt Name"
  - `p8`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: Chapter 6. Error Report; Chapter 6. Error Report; 6.1. Det"
- `keywords`: ["QDT_E_UNINIT_U8", "QDT_E_PARAM_U8", "QDT_E_INVALID_CHANNEL_U8", "QDT_E_PARTITION_MAPPING", "Error", "QDT_Init", "QDT_INITIALIZED", "QDT_E_INIT_FAILED_U8", "Sent_GetVersionInfo", "QDT_DeInit"]
- `anchors`:
  - `p9`: "Chapter 6. Error Report"
  - `p9`: "Chapter 6. Error Report"
  - `p9`: "6.1. Det"
  - `p9`: "Function Name"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.2 Dem: Qdt Integration's Manual for FC7xxx Series; Function Name; Error Type"
- `keywords`: ["Qdt", "QDT_E_PARAM_U8", "QDT_E_UNINIT_U8", "FC7xxx", "QDT_GetLECNT_HOLD", "QDT_GetPOSDTMRCNT", "QDT_GetPOSDTMRCNT_HOLD", "QDT_GetSpeed", "Integration", "Series"]
- `anchors`:
  - `p10`: "Qdt Integration's Manual for FC7xxx Series"
  - `p10`: "Function Name"
  - `p10`: "Error Type"
  - `p10`: "QDT_GetLECNT_HOLD"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: Chapter 7. Function Calls; Chapter 7. Function Calls; 7.1. Function Calls during Startup"
- `keywords`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU", "before", "QDT_Configuration", "EcuM", "GPIO", "PORT"]
- `anchors`:
  - `p11`: "Chapter 7. Function Calls"
  - `p11`: "Chapter 7. Function Calls"
  - `p11`: "7.1. Function Calls during Startup"
  - `p11`: "QDT shall be initialized during STARTUP phase of EcuM initialization. The API to be called for"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: Qdt Integration's Manual for FC7xxx Series; Chapter 8. Other Requirements; 8.1. Notification, Callback, Callout"
- `keywords`: ["QDT", "Qdt", "AUTOSAR_OS_NOT_USED", "FC7xxx", "TimerOverflowNotification", "WdogNotification", "ChannelNotifica", "Notification", "Callback", "Callout"]
- `anchors`:
  - `p12`: "Qdt Integration's Manual for FC7xxx Series"
  - `p12`: "Chapter 8. Other Requirements"
  - `p12`: "8.1. Notification, Callback, Callout"
  - `p12`: "Notification"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: Chapter 9. Integration Steps; Chapter 9. Integration Steps; 1) Configure the QDT module and generate configuration files (please refer to Building chapter for"
- `keywords`: ["QDT", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory", "sections"]
- `anchors`:
  - `p13`: "Chapter 9. Integration Steps"
  - `p13`: "Chapter 9. Integration Steps"
  - `p13`: "1) Configure the QDT module and generate configuration files (please refer to Building chapter for"
  - `p13`: "details)."

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Table-like content on page 2"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["Qdt", "Calls", "FC7xxx", "ISR", "Integration"]
- `summary`: "Indexes table-like source content for Table-like content on page 2; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 2"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0004-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0004-001"
- `caption`: "Table-like content on page 4"
- `physical_pages`: `4`
- `printed_pages`: ["4"]
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `bbox`: `None`
- `key_fields`: ["Qdt", "QDT", "CDD_Qdt", "Src", "include"]
- `summary`: "Indexes table-like source content for Table-like content on page 4; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 4"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0005-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0005-001"
- `caption`: "Table-like content on page 5"
- `physical_pages`: `5`
- `printed_pages`: ["5"]
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `bbox`: `None`
- `key_fields`: ["QDT", "Src", "include", "ins", "tresos"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[53.83, 119.43, 541.44, 582.3]`
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
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[53.83, 89.55, 517.57, 192.34]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 8."
- `anchor`: "Table-like region on page 8"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Table-like region on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[53.83, 119.41, 554.17, 782.87]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 9."
- `anchor`: "Table-like region on page 9"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[53.83, 68.28, 554.17, 254.79]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 10."
- `anchor`: "Table-like region on page 10"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like content on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["QDT", "initialized", "Calls", "QDT_Init", "MCU"]
- `summary`: "Indexes table-like source content for Table-like content on page 11; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 11"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-QDT-INIT
- `name`: "QDT_Init"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "api index entry for `QDT_Init`."
- `anchors`:
  - `p9`: "QDT_Init"
  - `p11`: "this is QDT_Init(). The MCU module should be initialized before the QDT is initialized. The QDT"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `2`
- `physical_pages`: `2,8`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p2`: "Chapter 5. Interrupt Service Routine (ISR) . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p8`: "Chapter 5. Interrupt Service Routine (ISR)"
- `aliases`: []

### API-CODE
- `name`: "Code"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "api index entry for `Code`."
- `anchors`:
  - `p6`: "Code"
- `aliases`: []

### API-MANGER
- `name`: "Manger"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "api index entry for `Manger`."
- `anchors`:
  - `p7`: "QDT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p8`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-QDT-ML-CHANNEL-INIT
- `name`: "Qdt_ML_Channel_Init"
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "config index entry for `Qdt_ML_Channel_Init`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### CFG-QDT-CONFIGURATION
- `name`: "QDT_Configuration"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `QDT_Configuration`."
- `anchors`:
  - `p11`: "module shall be initialized by QDT_Init(<&QDT_Configuration>) service call during the start-up"
- `aliases`: []

### CFG-QDT-CLEARCHANNELFLAG
- `name`: "QDT_ClearChannelFlag"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `QDT_ClearChannelFlag`."
- `anchors`:
  - `p9`: "QDT_ClearChannelFlag"
- `aliases`: []

### CFG-QDT-GETCHANNELFLAG
- `name`: "QDT_GetChannelFlag"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `QDT_GetChannelFlag`."
- `anchors`:
  - `p9`: "QDT_GetChannelFlag"
- `aliases`: []

### CFG-QDT-HAL-CLEARCHANNELFLAG
- `name`: "QDT_Hal_ClearChannelFlag"
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "config index entry for `QDT_Hal_ClearChannelFlag`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_15 is used in QDT_Hal_ClearChannelFlag."
- `aliases`: []

### CFG-QDT-LL-CHANNEL-DEINIT
- `name`: "Qdt_LL_Channel_DeInit"
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "config index entry for `Qdt_LL_Channel_DeInit`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_12 is used in Qdt_LL_Channel_DeInit."
- `aliases`: []

### MACRO-QDT-E-UNINIT-U8
- `name`: "QDT_E_UNINIT_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "macro index entry for `QDT_E_UNINIT_U8`."
- `anchors`:
  - `p9`: "QDT_E_UNINIT_U8;"
  - `p10`: "QDT_E_UNINIT_U8;"
- `aliases`: []

### MACRO-QDT-E-PARAM-U8
- `name`: "QDT_E_PARAM_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "macro index entry for `QDT_E_PARAM_U8`."
- `anchors`:
  - `p9`: "QDT_E_PARAM_U8;"
  - `p10`: "QDT_E_PARAM_U8;"
- `aliases`: []

### MACRO-QDT-START-SEC-VAR
- `name`: "QDT_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_VAR`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_BOOLEAN"
- `aliases`: []

### MACRO-QDT-STOP-SEC-VAR
- `name`: "QDT_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_VAR`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_VAR INIT_BOOLEAN"
- `aliases`: []

### MACRO-QDT-E-INVALID-CHANNEL-U8
- `name`: "QDT_E_INVALID_CHANNEL_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `QDT_E_INVALID_CHANNEL_U8`."
- `anchors`:
  - `p9`: "QDT_E_INVALID_CHANNEL_U8;"
- `aliases`: []

### MACRO-QDT-START-SEC-CODE
- `name`: "QDT_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CODE`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CODE"
- `aliases`: []

### MACRO-QDT-START-SEC-CODE-AC
- `name`: "QDT_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CODE_AC`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CODE
- `name`: "QDT_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CODE`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CODE"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CODE-AC
- `name`: "QDT_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p12`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-QDT-E-PARTITION-MAPPING
- `name`: "QDT_E_PARTITION_MAPPING"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `QDT_E_PARTITION_MAPPING`."
- `anchors`:
  - `p9`: "QDT_E_PARTITION_MAPPING;"
- `aliases`: []

### MACRO-QDT-START-SEC
- `name`: "QDT_START_SEC"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-QDT-STOP-SEC
- `name`: "QDT_STOP_SEC"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-QDT-START-SEC-CONFIG-DATA-16
- `name`: "QDT_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-QDT-START-SEC-CONFIG-DATA-32
- `name`: "QDT_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-QDT-START-SEC-CONFIG-DATA-8
- `name`: "QDT_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-QDT-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "QDT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-QDT-START-SEC-CONST-16
- `name`: "QDT_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONST_16`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONST_16"
- `aliases`: []

### MACRO-QDT-START-SEC-CONST-32
- `name`: "QDT_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONST_32`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONST_32"
- `aliases`: []

### MACRO-QDT-START-SEC-CONST-8
- `name`: "QDT_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONST_8`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONST_8"
- `aliases`: []

### MACRO-QDT-START-SEC-CONST-BOOLEAN
- `name`: "QDT_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONFIG-DATA-16
- `name`: "QDT_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONFIG-DATA-32
- `name`: "QDT_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONFIG-DATA-8
- `name`: "QDT_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "QDT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONST-16
- `name`: "QDT_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONST_16`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONST-32
- `name`: "QDT_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONST_32`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONST-8
- `name`: "QDT_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONST_8`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONST-BOOLEAN
- `name`: "QDT_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-INIT-16
- `name`: "INIT_16"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `INIT_16`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_16"
- `aliases`: []

### MACRO-INIT-32
- `name`: "INIT_32"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `INIT_32`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_32"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_BOOLEAN"
- `aliases`: []

### MACRO-QDT-E-INIT-FAILED-U8
- `name`: "QDT_E_INIT_FAILED_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `QDT_E_INIT_FAILED_U8`."
- `anchors`:
  - `p9`: "QDT_E_INIT_FAILED_U8;"
- `aliases`: []

### MACRO-QDT-INITIALIZED
- `name`: "QDT_INITIALIZED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `QDT_INITIALIZED`."
- `anchors`:
  - `p9`: "QDT_INITIALIZED;"
- `aliases`: []

### MACRO-QDT-START-SEC-CONST
- `name`: "QDT_START_SEC_CONST"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_START_SEC_CONST`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-QDT-STOP-SEC-CONST
- `name`: "QDT_STOP_SEC_CONST"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `QDT_STOP_SEC_CONST`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-QDT-START-SEC-CONSTUNSPECIFIED
- `name`: "QDT_START_SEC_CONSTUNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_START_SEC_CONSTUNSPECIFIED`."
- `anchors`:
  - `p6`: "QDT_START_SEC_CONST UNSPECIFIED"
- `aliases`: []

### MEM-QDT-START-SEC-VARINITUNSPECIFIED
- `name`: "QDT_START_SEC_VARINITUNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_START_SEC_VARINITUNSPECIFIED`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT UNSPECIFIED"
- `aliases`: []

### MEM-QDT-START-SEC-VARINIT-16
- `name`: "QDT_START_SEC_VARINIT_16"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_START_SEC_VARINIT_16`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_16"
- `aliases`: []

### MEM-QDT-START-SEC-VARINIT-32
- `name`: "QDT_START_SEC_VARINIT_32"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_START_SEC_VARINIT_32`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_32"
- `aliases`: []

### MEM-QDT-START-SEC-VARINIT-8
- `name`: "QDT_START_SEC_VARINIT_8"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_START_SEC_VARINIT_8`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_8"
- `aliases`: []

### MEM-QDT-START-SEC-VARINIT-BOOLEAN
- `name`: "QDT_START_SEC_VARINIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_START_SEC_VARINIT_BOOLEAN`."
- `anchors`:
  - `p6`: "QDT_START_SEC_VAR INIT_BOOLEAN"
- `aliases`: []

### MEM-QDT-STOP-SEC-CONSTUNSPECIFIED
- `name`: "QDT_STOP_SEC_CONSTUNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_STOP_SEC_CONSTUNSPECIFIED`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_CONST UNSPECIFIED"
- `aliases`: []

### MEM-QDT-STOP-SEC-VARINITUNSPECIFIED
- `name`: "QDT_STOP_SEC_VARINITUNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_STOP_SEC_VARINITUNSPECIFIED`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_VAR INIT UNSPECIFIED"
- `aliases`: []

### MEM-QDT-STOP-SEC-VARINIT-16
- `name`: "QDT_STOP_SEC_VARINIT_16"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_STOP_SEC_VARINIT_16`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_VAR INIT_16"
- `aliases`: []

### MEM-QDT-STOP-SEC-VARINIT-32
- `name`: "QDT_STOP_SEC_VARINIT_32"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_STOP_SEC_VARINIT_32`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_VAR INIT_32"
- `aliases`: []

### MEM-QDT-STOP-SEC-VARINIT-8
- `name`: "QDT_STOP_SEC_VARINIT_8"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_STOP_SEC_VARINIT_8`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_VAR INIT_8"
- `aliases`: []

### MEM-QDT-STOP-SEC-VARINIT-BOOLEAN
- `name`: "QDT_STOP_SEC_VARINIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "memory section index entry for `QDT_STOP_SEC_VARINIT_BOOLEAN`."
- `anchors`:
  - `p6`: "QDT_STOP_SEC_VAR INIT_BOOLEAN"
- `aliases`: []

### FILE-CDD-QDT-CFG-H
- `name`: "CDD_Qdt_cfg.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `CDD_Qdt_cfg.h`."
- `anchors`:
  - `p4`: "_MCAL_generate/include CDD_Qdt_cfg.h"
- `aliases`: []

### FILE-DET-H
- `name`: "Det.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `Det.h`."
- `anchors`:
  - `p5`: "Det.h"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p12`: "Please check various definitions available in Common module’s include file Mcal.h for details."
- `aliases`: []

### FILE-QDT-HAL-C
- `name`: "QDT_Hal.c"
- `type`: `file`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "file index entry for `QDT_Hal.c`."
- `anchors`:
  - `p7`: "The following critical regions are used in the QDT driver: • QDT_Hal.c:"
- `aliases`: []

### FILE-SCHM-QDT-H
- `name`: "SchM_Qdt.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `SchM_Qdt.h`."
- `anchors`:
  - `p5`: "SchM_Qdt.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-H
- `name`: "_MCAL/Src/Common/include/Compiler.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Compiler.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILERDEFINITION-H
- `name`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/CompilerDefinition.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Compiler_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MCAL-H
- `name`: "_MCAL/Src/Common/include/Mcal.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mcal.h`."
- `anchors`:
  - `p4`: "_MCAL/Src/Common/include/Mcal.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: "_MCAL/Src/Common/include/Platform_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Platform_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Platform_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-STD-TYPES-H
- `name`: "_MCAL/Src/Common/include/Std_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Std_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-QDT-SRC-CDD-QDT-C
- `name`: "_MCAL/Src/Qdt/Src/CDD_Qdt.c"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/Src/CDD_Qdt.c`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/CDD_Qdt.c"
- `aliases`: []

### FILE-MCAL-SRC-QDT-SRC-QDT-HWA-C
- `name`: "_MCAL/Src/Qdt/Src/Qdt_HWA.c"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/Src/Qdt_HWA.c`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/Qdt_HWA.c"
- `aliases`: []

### FILE-MCAL-SRC-QDT-SRC-QDT-HAL-C
- `name`: "_MCAL/Src/Qdt/Src/Qdt_Hal.c"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/Src/Qdt_Hal.c`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/Qdt_Hal.c"
- `aliases`: []

### FILE-MCAL-SRC-QDT-SRC-QDT-ISR-C
- `name`: "_MCAL/Src/Qdt/Src/Qdt_Isr.c"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/Src/Qdt_Isr.c`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/Qdt_Isr.c"
- `aliases`: []

### FILE-MCAL-SRC-QDT-INCLUDE-CDD-QDT-H
- `name`: "_MCAL/Src/Qdt/include/CDD_Qdt.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/include/CDD_Qdt.h`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/CDD_Qdt.h"
- `aliases`: []

### FILE-MCAL-SRC-QDT-INCLUDE-QDT-HWA-H
- `name`: "_MCAL/Src/Qdt/include/Qdt_HWA.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/include/Qdt_HWA.h`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/Qdt_HWA.h"
- `aliases`: []

### FILE-MCAL-SRC-QDT-INCLUDE-QDT-HAL-H
- `name`: "_MCAL/Src/Qdt/include/Qdt_Hal.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/include/Qdt_Hal.h`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/Qdt_Hal.h"
- `aliases`: []

### FILE-MCAL-SRC-QDT-INCLUDE-QDT-MEMMAP-H
- `name`: "_MCAL/Src/Qdt/include/Qdt_MemMap.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/include/Qdt_MemMap.h`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/Qdt_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-QDT-INCLUDE-QDT-REG-H
- `name`: "_MCAL/Src/Qdt/include/Qdt_Reg.h"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL/Src/Qdt/include/Qdt_Reg.h`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/Qdt_Reg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-QDT-CFG-C
- `name`: "_MCAL_generate/src/CDD_Qdt_cfg.c"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Qdt_cfg.c`."
- `anchors`:
  - `p4`: "_MCAL_generate/src/CDD_Qdt_cfg.c"
- `aliases`: []

### TERM-QDT
- `name`: "QDT"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,4,5,6,7,8,9,10,11,12`
- `brief`: "term index entry for `QDT`."
- `anchors`:
  - `p3`: "QDT"
  - `p4`: "QDT"
  - `p5`: "QDT"
  - `p6`: "QDT"
  - `p7`: "QDT"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,4,5,9`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p2`: "Det"
  - `p4`: "Det"
  - `p5`: "Det"
  - `p9`: "Det"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,10`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p2`: "Dem"
  - `p10`: "Dem"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,5`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p4`: "MCAL"
  - `p5`: "MCAL"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,5`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p4`: "Rte"
  - `p5`: "Rte"
- `aliases`: []

### TERM-CDD-QDT-CFG
- `name`: "CDD_Qdt_cfg"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `CDD_Qdt_cfg`."
- `anchors`:
  - `p4`: "_MCAL_generate/src/CDD_Qdt_cfg.c"
- `aliases`: []

### TERM-QDT-HWA
- `name`: "Qdt_HWA"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `Qdt_HWA`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/Qdt_HWA.c"
- `aliases`: []

### TERM-QDT-HAL
- `name`: "Qdt_Hal"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `Qdt_Hal`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/Qdt_Hal.c"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p12`: "AUTOSAR"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p5`: "EB tresos"
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p5`: "1. Copy the QDT module (_MCAL/EB_Plugins/eclipse/plugins/QDT) folder to EB tresos plug-ins"
- `aliases`: []

### TERM-QDT-DEINIT
- `name`: "QDT_DeInit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_DeInit`."
- `anchors`:
  - `p9`: "QDT_DeInit"
- `aliases`: []

### TERM-QDT-GETCV
- `name`: "QDT_GetCV"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetCV`."
- `anchors`:
  - `p9`: "QDT_GetCV"
- `aliases`: []

### TERM-QDT-GETEDGENUMBER
- `name`: "QDT_GetEdgeNumber"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetEdgeNumber`."
- `anchors`:
  - `p9`: "QDT_GetEdgeNumber"
- `aliases`: []

### TERM-QDT-GETLECNT
- `name`: "QDT_GetLECNT"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetLECNT`."
- `anchors`:
  - `p9`: "QDT_GetLECNT"
- `aliases`: []

### TERM-QDT-GETLECNT-HOLD
- `name`: "QDT_GetLECNT_HOLD"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `QDT_GetLECNT_HOLD`."
- `anchors`:
  - `p10`: "QDT_GetLECNT_HOLD"
- `aliases`: []

### TERM-QDT-GETPOSCNT
- `name`: "QDT_GetPOSCNT"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetPOSCNT`."
- `anchors`:
  - `p9`: "QDT_GetPOSCNT"
- `aliases`: []

### TERM-QDT-GETPOSCNT-HOLD
- `name`: "QDT_GetPOSCNT_HOLD"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetPOSCNT_HOLD`."
- `anchors`:
  - `p9`: "QDT_GetPOSCNT_HOLD"
- `aliases`: []

### TERM-QDT-GETPOSDCNT
- `name`: "QDT_GetPOSDCNT"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetPOSDCNT`."
- `anchors`:
  - `p9`: "QDT_GetPOSDCNT"
- `aliases`: []

### TERM-QDT-GETPOSDCNT-HOLD
- `name`: "QDT_GetPOSDCNT_HOLD"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetPOSDCNT_HOLD`."
- `anchors`:
  - `p9`: "QDT_GetPOSDCNT_HOLD"
- `aliases`: []

### TERM-QDT-GETPOSDTMRCNT
- `name`: "QDT_GetPOSDTMRCNT"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `QDT_GetPOSDTMRCNT`."
- `anchors`:
  - `p10`: "QDT_GetPOSDTMRCNT"
- `aliases`: []

### TERM-QDT-GETPOSDTMRCNT-HOLD
- `name`: "QDT_GetPOSDTMRCNT_HOLD"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `QDT_GetPOSDTMRCNT_HOLD`."
- `anchors`:
  - `p10`: "QDT_GetPOSDTMRCNT_HOLD"
- `aliases`: []

### TERM-QDT-GETREVCNT
- `name`: "QDT_GetREVCNT"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_GetREVCNT`."
- `anchors`:
  - `p9`: "QDT_GetREVCNT"
- `aliases`: []

### TERM-QDT-GETSPEED
- `name`: "QDT_GetSpeed"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `QDT_GetSpeed`."
- `anchors`:
  - `p10`: "QDT_GetSpeed"
- `aliases`: []

### TERM-QDT-HAL-2
- `name`: "QDT_Hal"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `QDT_Hal`."
- `anchors`:
  - `p7`: "The following critical regions are used in the QDT driver: • QDT_Hal.c:"
- `aliases`: []

### TERM-QDT-HAL-RESTARTMEASUREMENT
- `name`: "QDT_Hal_ReStartMeasurement"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `QDT_Hal_ReStartMeasurement`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_13 is used in QDT_Hal_ReStartMeasurement."
- `aliases`: []

### TERM-QDT-ISRQDT0-ALL
- `name`: "QDT_IsrQDT0_ALL"
- `type`: `term`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "term index entry for `QDT_IsrQDT0_ALL`."
- `anchors`:
  - `p8`: "QDT_IsrQDT0_ALL 191"
- `aliases`: []

### TERM-QDT-ISRQDT1-ALL
- `name`: "QDT_IsrQDT1_ALL"
- `type`: `term`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "term index entry for `QDT_IsrQDT1_ALL`."
- `anchors`:
  - `p8`: "QDT_IsrQDT1_ALL 192"
- `aliases`: []

### TERM-QDT-ISRQDT2-ALL
- `name`: "QDT_IsrQDT2_ALL"
- `type`: `term`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "term index entry for `QDT_IsrQDT2_ALL`."
- `anchors`:
  - `p8`: "QDT_IsrQDT2_ALL 193"
- `aliases`: []

### TERM-QDT-ISRQDT3-ALL
- `name`: "QDT_IsrQDT3_ALL"
- `type`: `term`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "term index entry for `QDT_IsrQDT3_ALL`."
- `anchors`:
  - `p8`: "QDT_IsrQDT3_ALL 194"
- `aliases`: []

### TERM-QDT-RESTARTMEASUREMENT
- `name`: "QDT_ReStartMeasurement"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_ReStartMeasurement`."
- `anchors`:
  - `p9`: "QDT_ReStartMeasurement"
- `aliases`: []

### TERM-QDT-RESETPOSCNT
- `name`: "QDT_ResetPOSCNT"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `QDT_ResetPOSCNT`."
- `anchors`:
  - `p9`: "QDT_ResetPOSCNT"
- `aliases`: []

### TERM-QDT-HL-INSTANCE-DEINIT
- `name`: "Qdt_HL_Instance_DeInit"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `Qdt_HL_Instance_DeInit`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_11 is used in Qdt_HL_Instance_DeInit."
- `aliases`: []

### TERM-QDT-HL-INSTANCE-INIT
- `name`: "Qdt_HL_Instance_Init"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `Qdt_HL_Instance_Init`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00 is used in Qdt_HL_Instance_Init."
- `aliases`: []

### TERM-QDT-ISR
- `name`: "Qdt_Isr"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `Qdt_Isr`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/Src/Qdt_Isr.c"
- `aliases`: []

### TERM-QDT-MEMMAP
- `name`: "Qdt_MemMap"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `Qdt_MemMap`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/Qdt_MemMap.h"
- `aliases`: []

### TERM-QDT-REG
- `name`: "Qdt_Reg"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `Qdt_Reg`."
- `anchors`:
  - `p4`: "_MCAL/Src/Qdt/include/Qdt_Reg.h"
- `aliases`: []

### TERM-QUADRATURE-DECODER-TIMER-QUADRATURE-DECODE-DRIVER
- `name`: "Quadrature Decoder Timer / Quadrature Decode Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Quadrature Decoder Timer / Quadrature Decode Driver`."
- `anchors`:
  - `p1`: "Quadrature Decoder Timer / Quadrature Decode Driver"
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-00
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_00 is used in Qdt_HL_Instance_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-01
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_01 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-02
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_02"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_02 is used in. Qdt_ML_Channel_Init"
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-03
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_03"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_03 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-04
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_04"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_04 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-05
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_05"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_05 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-06
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_06"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_06 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-07
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_07"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_07`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_07 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-08
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_08"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_08`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_08 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-09
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_09"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_09`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_09 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-10
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_10"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_10`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_10 is used in Qdt_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-11
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_11"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_11`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_11 is used in Qdt_HL_Instance_DeInit."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-12
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_12"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_12`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_12 is used in Qdt_LL_Channel_DeInit."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-13
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_13"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_13`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_13 is used in QDT_Hal_ReStartMeasurement."
- `aliases`: []

### TERM-SCHM-ENTER-QDT-QDT-EXCLUSIVE-AREA-15
- `name`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_15"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_15`."
- `anchors`:
  - `p7`: "SchM_Enter_Qdt_QDT_EXCLUSIVE_AREA_15 is used in QDT_Hal_ClearChannelFlag."
- `aliases`: []

### TERM-SCHM-QDT
- `name`: "SchM_Qdt"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `SchM_Qdt`."
- `anchors`:
  - `p5`: "SchM_Qdt.h"
- `aliases`: []

### TERM-STD-TYPES
- `name`: "Std_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Std_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Std_Types.h"
- `aliases`: []

## 9. Search Aliases

### ALIAS-QDT
- `canonical`: "QDT"
- `aliases`: ["Quadrature Decoder Timer / Quadrature Decode Driver", "正交解码定时器驱动", "QDT module", "QDT driver", "QDT User Manual", "QDT Integration Manual"]
- `related_ids`: ["TERM-QDT"]

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
- `purpose`: `Close keyword lookup gaps between Qdt_Intergration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `Qdt_Intergration_Manual.pdf`
- `source_pdf_sha256`: `865d0d562151764e15d852e1399eced5dbbfac30ef22f9e2aa13b85643277aa4`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `109`
- `technical_missing_terms_added`: `8`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `109`
- `supplemented_missing_technical_token_count`: `8`
- `supplemented_physical_pages_count`: `13`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0001
- `physical_page`: `1`
- `additional_text_terms`:
  - "April"
  - "Devices"
  - "Flagchip"
  - "Semiconductors"
  - "Target"

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
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "Mcu"
  - "Port"
  - "Proprietary"
  - "UART"
  - "assign"
  - "basic"
  - "build"
  - "callback"
  - "chip"
  - "choose"
  - "clock"
  - "code"
  - "common"
  - "configurations"
  - "controller"
  - "detection"
  - "enabled"
  - "errors"
  - "etc"
  - "every"
  - "first"
  - "function"
  - "functions"
  - "initialize"
  - "interrupts"
  - "main"
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
  - "port"
  - "protect"
  - "range"
  - "reference"
  - "required"
  - "selecting"
  - "signal"
  - "signaling"
  - "some"
  - "support"
  - "through"
  - "unprotect"
  - "use"
  - "wakeup"
  - "want"
  - "when"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
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

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "Proprietary"
  - "Start"
  - "Variables"
  - "aligned"
  - "bit"
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

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "QDT2"
  - "QDT3"

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
  - "After"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "also"
  - "assigned"
  - "connection"
  - "controller"
  - "desired"
  - "done"
  - "each"
  - "modules"
  - "peripherals"
  - "pins"
  - "prior"
  - "properly"
  - "that"
  - "well"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "There"
  - "callback"
  - "define"
  - "functions"
  - "optional"
  - "tion"
  - "within"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "interrupt"
  - "linker"
  - "locations"
  - "modules"
  - "notification"
  - "other"
  - "their"
  - "vector"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13`
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
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `2,4,5,8,9,10,11`
- `affected_ids`: ["TBL-0002-001", "TBL-0004-001", "TBL-0005-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001"]
- `message`: "7 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0004
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

### WARN-0005-FILENAME-SPELLING
- `severity`: `low`
- `category`: `source_filename`
- `physical_pages`: `1`
- `affected_ids`: []
- `message`: "Source filename uses `Intergration` spelling; Manifest filename preserves the exact source stem for one-to-one pairing."
- `recommended_action`: "Keep this Manifest next to `Qdt_Intergration_Manual.pdf`; search both `Intergration` and `Integration` variants if locating files manually."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `13`
- `indexed_physical_pages_count`: `13`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `25`
- `table_index_count`: `8`
- `figure_index_count`: `0`
- `symbol_index_count`: `136`
- `alias_index_count`: `7`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `865d0d562151764e15d852e1399eced5dbbfac30ef22f9e2aa13b85643277aa4`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `109`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->