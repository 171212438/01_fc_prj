---
manifest_schema_version: "1.1"
source_pdf: "SENT_Integration_Manual.pdf"
source_pdf_sha256: "05f405eef189221e6492b323305c60e15cac26d03956d3837db2bb7261c46308"
source_pdf_size_bytes: 904049
pdf_page_count: 14
generated_at: "2026-06-19T14:01:29Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: SENT_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `SENT_Integration_Manual.pdf`
- `source_pdf_sha256`: `05f405eef189221e6492b323305c60e15cac26d03956d3837db2bb7261c46308`
- `source_pdf_size_bytes`: `904049`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx SENT Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/12/15 / Initial release`
- `generated_at`: `2026-06-19T14:01:29Z`
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

- `topic`: "FC7xxx AUTOSAR MCAL SENT module - Integration Manual"
- `module_scope`: "SENT module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["SENT", "Single Edge Nibble Transmission Driver", "AUTOSAR_SWS_SENTDriver or vendor-specific SENT driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Sent", "FC_SENT", "FCSENT", "SENT_", "Sent_"]
- `summary`: "This 14-page integration manual indexes SENT content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["SENT", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx SENT Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["SENT", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SENT", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SENT", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SENT", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["SENT", "Sent", "Src", "include", "provides", "EcuM", "ins", "tresos"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SENT", "Sent", "Src", "include", "provides", "EcuM", "CDD_Sent", "Sent_Hal"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SENT", "Sent", "Src", "include", "provides", "EcuM", "CDD_Sent", "Sent_Hal"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SENT", "ins", "tresos", "plug", "folder", "FC7xxx", "CompilerDefinition", "SchM_Sent"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SENT", "These", "UNSPECIFIED", "SENT_START_SEC_VAR", "SENT_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SENT", "These", "UNSPECIFIED", "SENT_START_SEC_VAR", "SENT_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SENT", "Sent_ML_Channel_Init", "Sent_HL_Instance_Init", "SENT_Hal_RequestSPCPulse", "Sent_HL_GetFastMessage", "Sent_HL_GetSlowMessage", "FC7xxx", "SchM"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SENT", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "SENT0", "SENT_IsrSENT0_All"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "SENT_E_UNINIT_U8", "SENT_E_PARTITION_MAPPING", "SENT_E_PARAM_U8", "FC7xxx", "Sent_Init", "SENT_INITIALIZED", "SENT_E_INIT_FAILED_U8"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "SENT_E_UNINIT_U8", "SENT_E_PARTITION_MAPPING", "SENT_E_PARAM_U8", "FC7xxx", "Sent_Init", "SENT_INITIALIZED", "SENT_E_INIT_FAILED_U8"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "SENT_E_UNINIT_U8", "SENT_E_PARTITION_MAPPING", "SENT_E_PARAM_U8", "FC7xxx", "Sent_Init", "SENT_INITIALIZED", "SENT_E_INIT_FAILED_U8"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU", "before", "SENT_Configuration", "FC7xxx"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU", "before", "SENT_Configuration", "FC7xxx"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU", "before", "SENT_Configuration", "FC7xxx"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU", "before", "SENT_Configuration", "FC7xxx"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU", "before", "SENT_Configuration", "FC7xxx"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SENT", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SentFastNotification", "SentSlowNotification", "SentSlowErrorNotification", "SentFastErrorNotification", "Notification"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SENT", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SentFastNotification", "SentSlowNotification", "SentSlowErrorNotification", "SentFastErrorNotification", "Notification"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SENT", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SentFastNotification", "SentSlowNotification", "SentSlowErrorNotification", "SentFastErrorNotification", "Notification"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SENT", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the SENT module."]

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
- `anchors`: ["_MCAL/Src/Common/include/CompilerDefinition.h", "Det module files:", "Det.h", "Rte module files:"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "SENT_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "SENT module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the SENT driver:", "SENT_Hal.c:"]

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
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "SENT shall be initialized during STARTUP phase of EcuM initialization. The API to be called for thi…"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the SENT module and generate configuration files (please refer to Building chapter for de…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx SENT Integration Manual"
- `keywords`: ["SENT", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx SENT Integration Manual; Revision History; 0.1"
- `keywords`: ["SENT", "FC7xxx", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx SENT Integration Manual; Table of Contents; Chapter 1 Introduction ....................................................................................................................................... 4"
- `keywords`: ["SENT", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx SENT Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["SENT", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the SENT module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx SENT Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["SENT", "Sent", "Src", "include", "provides", "EcuM", "CDD_Sent", "Sent_Hal", "Sent_HWA", "CDD_Sent_cfg"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx SENT Integration Manual; _MCAL/Src/Common/include/CompilerDefinition.h; Det module files:"
- `keywords`: ["SENT", "ins", "tresos", "plug", "folder", "FC7xxx", "CompilerDefinition", "SchM_Sent", "EB_Plugins", "Det"]
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
  - `p6`: "Det module files:"
  - `p6`: "Det.h"
  - `p6`: "Rte module files:"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx SENT Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["SENT", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx SENT Integration Manual; Section Name; Section Type"
- `keywords`: ["SENT", "SENT_START_SEC_VAR", "SENT_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "SENT_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx SENT Integration Manual; Chapter 4 Exclusive Area; SENT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["SENT", "Sent_ML_Channel_Init", "Sent_HL_Instance_Init", "SENT_Hal_RequestSPCPulse", "Sent_HL_GetFastMessage", "Sent_HL_GetSlowMessage", "FC7xxx", "SchM", "SENT_Hal", "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_00"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "SENT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the SENT driver:"
  - `p9`: "SENT_Hal.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx SENT Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["SENT", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "SENT0", "SENT_IsrSENT0_All", "SENT1", "SENT_IsrSENT1_All"]
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
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx SENT Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["SENT", "SENT_E_UNINIT_U8", "SENT_E_PARTITION_MAPPING", "SENT_E_PARAM_U8", "FC7xxx", "Sent_Init", "SENT_INITIALIZED", "SENT_E_INIT_FAILED_U8", "Sent_GetVersionInfo", "Sent_DeInit"]
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
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx SENT Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU", "before", "SENT_Configuration", "FC7xxx", "EcuM", "should"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"
  - `p12`: "7.1"
  - `p12`: "Function Calls during Startup"
  - `p12`: "SENT shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is SENT_Init(). The MCU"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx SENT Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["SENT", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SentFastNotification", "SentSlowNotification", "SentSlowErrorNotification", "SentFastErrorNotification", "Notification", "Callback", "Callout"]
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
- `summary`: "Chapter 9 Integration Steps: FC7xxx SENT Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["SENT", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the SENT module and generate configuration files (please refer to Building chapter for details)."
  - `p14`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 141.54]`
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
- `key_fields`: ["SENT", "Calls", "FC7xxx", "ISR", "Integration"]
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
- `key_fields`: ["SENT", "Sent", "Src", "include", "provides"]
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
- `key_fields`: ["SENT", "ins", "tresos", "plug", "folder"]
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
- `bbox`: `[30.6, 37.27, 564.72, 156.78]`
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
- `bbox`: `[30.6, 102.48, 564.72, 154.74]`
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
- `bbox`: `[30.6, 123.1, 564.72, 312.92]`
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
- `key_fields`: ["SENT", "initialized", "Calls", "SENT_Init", "MCU"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

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

### API-SENT-INIT
- `name`: "SENT_Init"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `SENT_Init`."
- `anchors`:
  - `p12`: "SENT shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is SENT_Init(). The MCU"
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
  - `p9`: "SENT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
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

### CFG-SENT-ML-CHANNEL-INIT
- `name`: "Sent_ML_Channel_Init"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Sent_ML_Channel_Init`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_02 is used in. Sent_ML_Channel_Init"
- `aliases`: []

### CFG-SENT-CONFIGURATION
- `name`: "SENT_Configuration"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `SENT_Configuration`."
- `anchors`:
  - `p12`: "SENT_Init(<&SENT_Configuration>) service call during the start-up before the SENT peripherals are used. Please note that"
- `aliases`: []

### CFG-SENTFASTERRORNOTIFICATION
- `name`: "SentFastErrorNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `SentFastErrorNotification`."
- `anchors`:
  - `p13`: "SentSlowErrorNotification and SentFastErrorNotification."
- `aliases`: []

### CFG-SENTFASTNOTIFICATION
- `name`: "SentFastNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `SentFastNotification`."
- `anchors`:
  - `p13`: "SentFastNotification and SentSlowNotification."
- `aliases`: []

### CFG-SENTSLOWERRORNOTIFICATION
- `name`: "SentSlowErrorNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `SentSlowErrorNotification`."
- `anchors`:
  - `p13`: "SentSlowErrorNotification and SentFastErrorNotification."
- `aliases`: []

### CFG-SENTSLOWNOTIFICATION
- `name`: "SentSlowNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `SentSlowNotification`."
- `anchors`:
  - `p13`: "SentFastNotification and SentSlowNotification."
- `aliases`: []

### CFG-SENT-LL-CHANNEL-DEINIT
- `name`: "Sent_LL_Channel_DeInit"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Sent_LL_Channel_DeInit`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_06 is used in Sent_LL_Channel_DeInit."
- `aliases`: []

### MACRO-SENT-E-UNINIT-U8
- `name`: "SENT_E_UNINIT_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_E_UNINIT_U8`."
- `anchors`:
  - `p11`: "SENT_E_UNINIT_U8;"
- `aliases`: []

### MACRO-SENT-START-SEC-VAR
- `name`: "SENT_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_START_SEC_VAR`."
- `anchors`:
  - `p8`: "SENT_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-SENT-STOP-SEC-VAR
- `name`: "SENT_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "SENT_STOP_SEC_VAR _INIT_16"
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

### MACRO-SENT-E-PARAM-U8
- `name`: "SENT_E_PARAM_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_E_PARAM_U8`."
- `anchors`:
  - `p11`: "SENT_E_PARAM_U8;"
- `aliases`: []

### MACRO-SENT-E-PARTITION-MAPPING
- `name`: "SENT_E_PARTITION_MAPPING"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_E_PARTITION_MAPPING`."
- `anchors`:
  - `p11`: "SENT_E_PARTITION_MAPPING;"
- `aliases`: []

### MACRO-SENT-START-SEC-CODE
- `name`: "SENT_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CODE`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CODE"
- `aliases`: []

### MACRO-SENT-START-SEC-CODE-AC
- `name`: "SENT_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-SENT-START-SEC-CONFIG-DATA-16
- `name`: "SENT_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-SENT-START-SEC-CONFIG-DATA-32
- `name`: "SENT_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-SENT-START-SEC-CONFIG-DATA-8
- `name`: "SENT_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-SENT-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "SENT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-SENT-START-SEC-CONST-16
- `name`: "SENT_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONST_16"
- `aliases`: []

### MACRO-SENT-START-SEC-CONST-32
- `name`: "SENT_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONST_32"
- `aliases`: []

### MACRO-SENT-START-SEC-CONST-8
- `name`: "SENT_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONST_8"
- `aliases`: []

### MACRO-SENT-START-SEC-CONST-BOOLEAN
- `name`: "SENT_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-SENT-START-SEC-VAR-NO-INIT-16
- `name`: "SENT_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-SENT-START-SEC-VAR-NO-INIT-32
- `name`: "SENT_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-SENT-START-SEC-VAR-NO-INIT-8
- `name`: "SENT_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-SENT-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "SENT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CODE
- `name`: "SENT_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CODE"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CODE-AC
- `name`: "SENT_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONFIG-DATA-16
- `name`: "SENT_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONFIG-DATA-32
- `name`: "SENT_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONFIG-DATA-8
- `name`: "SENT_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "SENT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONST-16
- `name`: "SENT_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONST-32
- `name`: "SENT_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONST-8
- `name`: "SENT_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-SENT-STOP-SEC-CONST-BOOLEAN
- `name`: "SENT_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-SENT-STOP-SEC-VAR-NO-INIT-16
- `name`: "SENT_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-SENT-STOP-SEC-VAR-NO-INIT-32
- `name`: "SENT_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-SENT-STOP-SEC-VAR-NO-INIT-8
- `name`: "SENT_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-SENT-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "SENT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SENT-E-INIT-FAILED-U8
- `name`: "SENT_E_INIT_FAILED_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_E_INIT_FAILED_U8`."
- `anchors`:
  - `p11`: "SENT_E_INIT_FAILED_U8;"
- `aliases`: []

### MACRO-SENT-INITIALIZED
- `name`: "SENT_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_INITIALIZED`."
- `anchors`:
  - `p11`: "SENT_INITIALIZED;"
- `aliases`: []

### MEM-SENT-START-SEC-VAR
- `name`: "SENT_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR
- `name`: "SENT_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SENT-START-SEC
- `name`: "SENT_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-SENT-START-SEC-CONST
- `name`: "SENT_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-SENT-START-SEC-CONST-UNSPECIFIED
- `name`: "SENT_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SENT_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-SENT-START-SEC-RAMCODE
- `name`: "SENT_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "SENT_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-INIT-16
- `name`: "SENT_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "SENT_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-INIT-32
- `name`: "SENT_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "SENT_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-INIT-8
- `name`: "SENT_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-INIT-BOOLEAN
- `name`: "SENT_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "SENT_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "SENT_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-NO-INIT
- `name`: "SENT_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SENT-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "SENT_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SENT_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SENT-STOP-SEC
- `name`: "SENT_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-SENT-STOP-SEC-CONST
- `name`: "SENT_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-SENT-STOP-SEC-CONST-UNSPECIFIED
- `name`: "SENT_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-SENT-STOP-SEC-RAMCODE
- `name`: "SENT_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-INIT-16
- `name`: "SENT_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "SENT_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-INIT-32
- `name`: "SENT_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "SENT_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-INIT-8
- `name`: "SENT_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "SENT_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "SENT_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "SENT_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-NO-INIT
- `name`: "SENT_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SENT-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "SENT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SENT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SENT_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-CDD-SENT-CFG-H
- `name`: "CDD_Sent_cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `CDD_Sent_cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include CDD_Sent_cfg.h"
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
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p13`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SENT-HAL-C
- `name`: "SENT_Hal.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `SENT_Hal.c`."
- `anchors`:
  - `p9`: "SENT_Hal.c:"
- `aliases`: []

### FILE-SCHM-SENT-H
- `name`: "SchM_Sent.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Sent.h`."
- `anchors`:
  - `p6`: "SchM_Sent.h"
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
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/CompilerDefinition.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
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
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mcal.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mcal.h"
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

### FILE-MCAL-SRC-SENT-SRC-CDD-SENT-C
- `name`: "_MCAL/Src/Sent/Src/CDD_Sent.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/Src/CDD_Sent.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/CDD_Sent.c"
- `aliases`: []

### FILE-MCAL-SRC-SENT-SRC-SENT-HWA-C
- `name`: "_MCAL/Src/Sent/Src/Sent_HWA.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/Src/Sent_HWA.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/Sent_HWA.c"
- `aliases`: []

### FILE-MCAL-SRC-SENT-SRC-SENT-HAL-C
- `name`: "_MCAL/Src/Sent/Src/Sent_Hal.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/Src/Sent_Hal.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/Sent_Hal.c"
- `aliases`: []

### FILE-MCAL-SRC-SENT-SRC-SENT-ISR-C
- `name`: "_MCAL/Src/Sent/Src/Sent_Isr.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/Src/Sent_Isr.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/Sent_Isr.c"
- `aliases`: []

### FILE-MCAL-SRC-SENT-INCLUDE-CDD-SENT-H
- `name`: "_MCAL/Src/Sent/include/CDD_Sent.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/include/CDD_Sent.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/CDD_Sent.h"
- `aliases`: []

### FILE-MCAL-SRC-SENT-INCLUDE-SENT-HWA-H
- `name`: "_MCAL/Src/Sent/include/Sent_HWA.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/include/Sent_HWA.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/Sent_HWA.h"
- `aliases`: []

### FILE-MCAL-SRC-SENT-INCLUDE-SENT-HAL-H
- `name`: "_MCAL/Src/Sent/include/Sent_Hal.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/include/Sent_Hal.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/Sent_Hal.h"
- `aliases`: []

### FILE-MCAL-SRC-SENT-INCLUDE-SENT-MEMMAP-H
- `name`: "_MCAL/Src/Sent/include/Sent_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/include/Sent_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/Sent_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-SENT-INCLUDE-SENT-REG-H
- `name`: "_MCAL/Src/Sent/include/Sent_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Sent/include/Sent_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/Sent_Reg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-SENT-CFG-C
- `name`: "_MCAL_generate/src/CDD_Sent_cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Sent_cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Sent_cfg.c"
- `aliases`: []

### TERM-SENT
- `name`: "SENT"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `SENT`."
- `anchors`:
  - `p1`: "SENT"
  - `p2`: "SENT"
  - `p3`: "SENT"
  - `p4`: "SENT"
  - `p5`: "SENT"
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

### TERM-SENT-MAINFUNCTIONFASTMESSAGEREAD
- `name`: "Sent_MainFunctionFastMessageRead"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "term index entry for `Sent_MainFunctionFastMessageRead`."
- `anchors`:
  - `p11`: "Sent_MainFunctionFastMessageRead"
  - `p12`: "Users should call Sent_MainFunctionFastMessageRead and Sent_MainFunctionSlowMessageRead in period to get the sent"
- `aliases`: []

### TERM-SENT-MAINFUNCTIONSLOWMESSAGEREAD
- `name`: "Sent_MainFunctionSlowMessageRead"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "term index entry for `Sent_MainFunctionSlowMessageRead`."
- `anchors`:
  - `p11`: "Sent_MainFunctionSlowMessageRead"
  - `p12`: "Users should call Sent_MainFunctionFastMessageRead and Sent_MainFunctionSlowMessageRead in period to get the sent"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p11`: "Dem"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,12`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p6`: "EB tresos"
  - `p12`: "EB tresos"
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

### TERM-SENT-HAL-REQUESTSPCPULSE
- `name`: "SENT_Hal_RequestSPCPulse"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SENT_Hal_RequestSPCPulse`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_07 is used in SENT_Hal_RequestSPCPulse."
- `aliases`: []

### TERM-SENT-HL-GETFASTMESSAGE
- `name`: "Sent_HL_GetFastMessage"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Sent_HL_GetFastMessage`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_09 is used in Sent_HL_GetFastMessage."
- `aliases`: []

### TERM-SENT-HL-GETSLOWMESSAGE
- `name`: "Sent_HL_GetSlowMessage"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Sent_HL_GetSlowMessage`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_11 is used in Sent_HL_GetSlowMessage."
- `aliases`: []

### TERM-SENT-HL-INSTANCE-INIT
- `name`: "Sent_HL_Instance_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Sent_HL_Instance_Init`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_00 is used in Sent_HL_Instance_Init."
- `aliases`: []

### TERM-SENT-HWA
- `name`: "Sent_HWA"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Sent_HWA`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/Sent_HWA.c"
- `aliases`: []

### TERM-SENT-HAL
- `name`: "Sent_Hal"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Sent_Hal`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/Sent_Hal.c"
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

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p6`: "Copy the SENT module (_MCAL/EB_Plugins/eclipse/plugins/SENT) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-SENT-HAL-2
- `name`: "SENT_Hal"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SENT_Hal`."
- `anchors`:
  - `p9`: "SENT_Hal.c:"
- `aliases`: []

### TERM-SENT-ISRSENT0-ALL
- `name`: "SENT_IsrSENT0_All"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `SENT_IsrSENT0_All`."
- `anchors`:
  - `p10`: "SENT_IsrSENT0_All"
- `aliases`: []

### TERM-SENT-ISRSENT1-ALL
- `name`: "SENT_IsrSENT1_All"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `SENT_IsrSENT1_All`."
- `anchors`:
  - `p10`: "SENT_IsrSENT1_All"
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-00
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_00"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_00 is used in Sent_HL_Instance_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-01
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_01"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_01 is used in Sent_HL_Instance_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-02
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_02"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_02 is used in. Sent_ML_Channel_Init"
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-03
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_03"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_03 is used in Sent_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-04
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_04"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_04 is used in Sent_ML_Channel_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-05
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_05"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_05 is used in Sent_LL_SPC_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-06
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_06"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_06 is used in Sent_LL_Channel_DeInit."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-07
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_07"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_07`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_07 is used in SENT_Hal_RequestSPCPulse."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-08
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_08"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_08`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_08 is used in SENT_Hal_RequestSPCPulse."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-09
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_09"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_09`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_09 is used in Sent_HL_GetFastMessage."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-10
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_10"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_10`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_10 is used in Sent_HL_GetFastMessage."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-11
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_11"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_11`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_11 is used in Sent_HL_GetSlowMessage."
- `aliases`: []

### TERM-SCHM-ENTER-SENT-SENT-EXCLUSIVE-AREA-12
- `name`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_12"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_12`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_12 is used in Sent_HL_GetSlowMessage."
- `aliases`: []

### TERM-SCHM-SENT
- `name`: "SchM_Sent"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Sent`."
- `anchors`:
  - `p6`: "SchM_Sent.h"
- `aliases`: []

### TERM-SENT-DEINIT
- `name`: "Sent_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Sent_DeInit`."
- `anchors`:
  - `p11`: "Sent_DeInit"
- `aliases`: []

### TERM-SENT-GETVERSIONINFO
- `name`: "Sent_GetVersionInfo"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Sent_GetVersionInfo`."
- `anchors`:
  - `p11`: "Sent_GetVersionInfo"
- `aliases`: []

### TERM-SENT-INIT
- `name`: "Sent_Init"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Sent_Init`."
- `anchors`:
  - `p11`: "Sent_Init"
- `aliases`: []

### TERM-SENT-ISR
- `name`: "Sent_Isr"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Sent_Isr`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/Src/Sent_Isr.c"
- `aliases`: []

### TERM-SENT-LL-SPC-INIT
- `name`: "Sent_LL_SPC_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Sent_LL_SPC_Init`."
- `anchors`:
  - `p9`: "SchM_Enter_Sent_SENT_EXCLUSIVE_AREA_05 is used in Sent_LL_SPC_Init."
- `aliases`: []

### TERM-SENT-MEMMAP
- `name`: "Sent_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Sent_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/Sent_MemMap.h"
- `aliases`: []

### TERM-SENT-REG
- `name`: "Sent_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Sent_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Sent/include/Sent_Reg.h"
- `aliases`: []

### TERM-SENT-REQUESTSPCPULSE
- `name`: "Sent_RequestSpcPulse"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Sent_RequestSpcPulse`."
- `anchors`:
  - `p11`: "Sent_RequestSpcPulse"
- `aliases`: []

### TERM-SINGLE-EDGE-NIBBLE-TRANSMISSION-DRIVER
- `name`: "Single Edge Nibble Transmission Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Single Edge Nibble Transmission Driver`."
- `anchors`:
  - `p1`: "Single Edge Nibble Transmission Driver"
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

### ALIAS-SENT
- `canonical`: "SENT"
- `aliases`: ["Single Edge Nibble Transmission Driver", "SENT 单边沿半字节传输驱动", "SENT module", "SENT driver", "SENT User Manual", "SENT Integration Manual"]
- `related_ids`: ["TERM-SENT"]

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
- `purpose`: `Close keyword lookup gaps between SENT_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `SENT_Integration_Manual.pdf`
- `source_pdf_sha256`: `05f405eef189221e6492b323305c60e15cac26d03956d3837db2bb7261c46308`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `114`
- `technical_missing_terms_added`: `8`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `114`
- `supplemented_missing_technical_token_count`: `8`
- `supplemented_physical_pages_count`: `13`
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
  - "PORT"
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
  - "common"
  - "configurations"
  - "controller"
  - "detection"
  - "enabled"
  - "etc"
  - "every"
  - "first"
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
  - "tracing"
  - "unprotect"
  - "use"
  - "user"
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
  - "configure"
  - "developed"
  - "first"
  - "header"
  - "location"
  - "output"
  - "use"
  - "user"

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
  - "FastMsgReadType"
  - "Flagchip"
  - "GPIO"
  - "PORT"
  - "Polling"
  - "Proprietary"
  - "SlowMsgReadType"
  - "They"
  - "also"
  - "assigned"
  - "avoid"
  - "configurated"
  - "connection"
  - "controller"
  - "desired"
  - "done"
  - "each"
  - "lost"
  - "modules"
  - "pins"
  - "prior"
  - "properly"
  - "well"
  - "while"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "There"
  - "callback"
  - "callouts"
  - "define"
  - "functions"
  - "mandatory"
  - "optional"
  - "provided"
  - "respective"
  - "stack"
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
- `physical_pages`: `3,5,6,10,11,12`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001"]
- `message`: "6 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
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
- `section_index_count`: `25`
- `table_index_count`: `9`
- `figure_index_count`: `0`
- `symbol_index_count`: `138`
- `alias_index_count`: `7`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `05f405eef189221e6492b323305c60e15cac26d03956d3837db2bb7261c46308`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `114`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->