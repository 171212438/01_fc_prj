---
manifest_schema_version: "1.1"
source_pdf: "ICU_Integration_Manual.pdf"
source_pdf_sha256: "81af13a5505a41c6f246a1cd42d3165a0b84b67c68b78c80829c9b412135b2d3"
source_pdf_size_bytes: 1185967
pdf_page_count: 18
generated_at: "2026-06-19T13:04:02Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: ICU_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `ICU_Integration_Manual.pdf`
- `source_pdf_sha256`: `81af13a5505a41c6f246a1cd42d3165a0b84b67c68b78c80829c9b412135b2d3`
- `source_pdf_size_bytes`: `1185967`
- `pdf_page_count`: `18`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx ICU Integration Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T13:04:02Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL ICU module - Integration Manual"
- `module_scope`: "ICU module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["ICU", "Input Capture Unit", "AUTOSAR_SWS_ICUDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Icu", "Ftu", "FTU", "Aontimer", "AONTIMER"]
- `summary`: "This 18-page integration manual indexes ICU content across source physical pages 1-18, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["ICU", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx ICU Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["ICU", "MCAL", "FC7xxx", "FC7240", "Integration", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["ICU", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ICU", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ICU", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Icu", "Src", "ICU", "include", "ins", "tresos", "FC7xxx", "provides"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Icu", "Src", "ICU", "include", "provides", "Icu_Aontimer", "Icu_Ftu", "Icu_Hw"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Icu", "Src", "ICU", "include", "provides", "Icu_Aontimer", "Icu_Ftu", "Icu_Hw"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["ICU", "Icu", "Src", "include", "ins", "tresos", "plug", "folder"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["ICU", "These", "UNSPECIFIED", "ICU_START_SEC_VAR", "ICU_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["ICU", "These", "UNSPECIFIED", "ICU_START_SEC_VAR", "ICU_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `12`
- `printed_page_start`: `9`
- `printed_page_end`: `12`
- `keywords`: ["protect", "updates", "Aontimer", "ICU", "FTU", "Port", "register", "Icu"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["ICU", "FC7300", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `14`
- `physical_page_end`: `15`
- `printed_page_start`: `14`
- `printed_page_end`: `15`
- `keywords`: ["ICU", "ICU_E_UNINIT", "ICU_E_PARAM_CHANNEL", "FC7xxx", "ICU_E_PARAM_POINTER", "Error", "Icu_Init", "ICU_E_ALREADY_INITIALIZED"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["ICU", "ICU_E_UNINIT", "ICU_E_PARAM_CHANNEL", "ICU_E_PARAM_POINTER", "FC7xxx", "Icu_Init", "ICU_E_ALREADY_INITIALIZED", "Icu_DeInit"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["ICU", "ICU_E_PARAM_CHANNEL", "ICU_E_UNINIT", "FC7xxx", "Icu_StopSignalMeasurement", "Icu_GetTimeElapsed", "Icu_GetDutyCycleValues", "Icu_GetInputLevel"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["ICU", "AUTOSAR_OS_NOT_USED", "ISR", "ICU_PORT_A_ISR_USED", "FC7xxx", "NULL_PTR", "Icu_Cfg", "Icu_PBCfg"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Calls to Notification Functions, Callbacks, Callouts"
- `path`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["ICU", "AUTOSAR_OS_NOT_USED", "ISR", "ICU_PORT_A_ISR_USED", "FC7xxx", "NULL_PTR", "Icu_Cfg", "Icu_PBCfg"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["ICU", "AUTOSAR_OS_NOT_USED", "ISR", "ICU_PORT_A_ISR_USED", "FC7xxx", "NULL_PTR", "Icu_Cfg", "Icu_PBCfg"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["ICU", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 Introduction ............................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the ICU module."]

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
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Section Name", "Section Type", "Description", "ICU_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "ICU module using the services of Scheduler Module (SchM) for entering and exiting critical regions.", "The following critical regions are used in the ICU driver:", "Icu.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `anchors`: ["", "Icu_aChannelOFExCount[]", "ICU_EXCLUSIVE_AREA_08 Used in function Icu_StartSignalMeasurement to protect the updates to:", ""]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `anchors`: ["", "s_aFtuChannelFlag[]", "ICU_EXCLUSIVE_AREA_20 Used in function Icu_Ftu_StartChannel to protect the updates to:", ""]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `anchors`: ["ICU_EXCLUSIVE_AREA_41 Used in function Icu_Cmp_DisableEdgeCount to protect the updates to:", "", "ICU_CMP_HWA_ClearIntRisingFlag[]", ""]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `anchors`: ["Function Name", "Error Type", "ICU_E_PARAM_CHANNEL", "Icu_StopSignalMeasurement"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs to be called is Icu_Init(&ConfigPtr);"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Calls to Notification Functions, Callbacks, Callouts", "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declarati…"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the ICU module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx ICU Integration Manual"
- `keywords`: ["ICU", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx ICU Integration Manual; Revision History; 0.1"
- `keywords`: ["ICU", "MCAL", "FC7xxx", "FC7240", "Integration", "Date", "Added"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "table", "api"]
- `summary`: "Table of Contents: FC7xxx ICU Integration Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["ICU", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx ICU Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["ICU", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the ICU module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx ICU Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Icu", "Src", "ICU", "include", "provides", "Icu_Aontimer", "Icu_Ftu", "Icu_Hw", "Icu_Port", "Icu_Cmp"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx ICU Integration Manual; _MCAL/Src/Common/include/Std_Types.h; _MCAL/Src/Common/include/Platform_Types.h"
- `keywords`: ["ICU", "Icu", "Src", "include", "ins", "tresos", "plug", "folder", "FC7xxx", "Std_Types"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx ICU Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["ICU", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx ICU Integration Manual; Section Name; Section Type"
- `keywords`: ["ICU", "ICU_START_SEC_VAR", "ICU_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "ICU_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx ICU Integration Manual; Chapter 4 Exclusive Area; ICU module using the services of Scheduler Module (SchM) for entering and exiting critical regions."
- `keywords`: ["ICU", "Icu", "protect", "updates", "Icu_aActivePulseWidth", "Icu_aPeriod", "Icu_aActiveOverflowCount", "Icu_aBuffer", "Icu_aBufferIndex", "Icu_aNotifyCount"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "ICU module using the services of Scheduler Module (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the ICU driver:"
  - `p9`: "Icu.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx ICU Integration Manual; Icu_aChannelOFExCount[]; ICU_EXCLUSIVE_AREA_08 Used in function Icu_StartSignalMeasurement to protect the updates to:"
- `keywords`: ["ICU", "FTU", "protect", "updates", "Icu_aChannelOFExCount", "Icu_aEdgeCount", "ICU_CMP_HWA_SetIntEn_Rising", "ICU_CMP_HWA_SetIntEn_Falling", "ICU_CMP_HWA_ClearIntRisingFlag", "ICU_CMP_HWA_ClearIntFallingFlag"]
- `anchors`:
  - `p10`: ""
  - `p10`: "Icu_aChannelOFExCount[]"
  - `p10`: "ICU_EXCLUSIVE_AREA_08 Used in function Icu_StartSignalMeasurement to protect the updates to:"
  - `p10`: ""

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx ICU Integration Manual; s_aFtuChannelFlag[]; ICU_EXCLUSIVE_AREA_20 Used in function Icu_Ftu_StartChannel to protect the updates to:"
- `keywords`: ["Aontimer", "FTU", "ICU", "protect", "updates", "register", "control", "status", "channel", "s_aFtuChannelFlag"]
- `anchors`:
  - `p11`: ""
  - `p11`: "s_aFtuChannelFlag[]"
  - `p11`: "ICU_EXCLUSIVE_AREA_20 Used in function Icu_Ftu_StartChannel to protect the updates to:"
  - `p11`: ""

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx ICU Integration Manual; ICU_EXCLUSIVE_AREA_41 Used in function Icu_Cmp_DisableEdgeCount to protect the updates to:; ICU_CMP_HWA_ClearIntRisingFlag[]"
- `keywords`: ["Port", "ICU", "protect", "updates", "register", "control", "s_aPortMask", "FC7xxx", "ICU_EXCLUSIVE_AREA_41", "Icu_Cmp_DisableEdgeCount"]
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_41 Used in function Icu_Cmp_DisableEdgeCount to protect the updates to:"
  - `p12`: ""
  - `p12`: "ICU_CMP_HWA_ClearIntRisingFlag[]"
  - `p12`: ""

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx ICU Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["ICU", "FC7300", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0", "FTU0_IRQHandler", "FTU1"]
- `anchors`:
  - `p13`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p13`: "Instance"
  - `p13`: "Interrupt Name"
  - `p13`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx ICU Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["ICU", "ICU_E_UNINIT", "ICU_E_PARAM_CHANNEL", "ICU_E_PARAM_POINTER", "FC7xxx", "Icu_Init", "ICU_E_ALREADY_INITIALIZED", "Icu_DeInit", "Icu_SetMode", "ICU_E_BUSY_OPERATION"]
- `anchors`:
  - `p14`: "Chapter 6 Error Report"
  - `p14`: "6.1"
  - `p14`: "Det"
  - `p14`: "Function Name"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx ICU Integration Manual; Function Name; Error Type"
- `keywords`: ["ICU", "ICU_E_PARAM_CHANNEL", "ICU_E_UNINIT", "FC7xxx", "Icu_StopSignalMeasurement", "Icu_GetTimeElapsed", "Icu_GetDutyCycleValues", "Icu_GetInputLevel", "Integration", "Error"]
- `anchors`:
  - `p15`: "Function Name"
  - `p15`: "Error Type"
  - `p15`: "ICU_E_PARAM_CHANNEL"
  - `p15`: "Icu_StopSignalMeasurement"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx ICU Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchors`:
  - `p16`: "Chapter 7 Function Calls"
  - `p16`: "7.1"
  - `p16`: "Function Calls during Startup"
  - `p16`: "The API needs to be called is Icu_Init(&ConfigPtr);"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts: FC7xxx ICU Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["ICU", "AUTOSAR_OS_NOT_USED", "ISR", "ICU_PORT_A_ISR_USED", "FC7xxx", "NULL_PTR", "Icu_Cfg", "Icu_PBCfg", "USE_SW_VECTOR_MODE", "PORTA_IRQHandler"]
- `anchors`:
  - `p17`: "Chapter 8 Other Requirements"
  - `p17`: "8.1"
  - `p17`: "Calls to Notification Functions, Callbacks, Callouts"
  - `p17`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx ICU Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["ICU", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p18`: "Chapter 9 Integration Steps"
  - `p18`: "1)"
  - `p18`: "Configure the ICU module and generate configuration files (please refer to Building chapter for details)."
  - `p18`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 181.02]`
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
- `section_path`: "Table of Contents"
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
- `key_fields`: ["Icu", "Src", "ICU", "include", "provides"]
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
- `key_fields`: ["ICU", "Icu", "Src", "include", "ins"]
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

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like region on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 102.48, 564.72, 555.78]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 13."
- `anchor`: "Table-like region on page 13"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region", "large_table_region"]

### TBL-0014-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0014-001"
- `caption`: "Table-like region on page 14"
- `physical_pages`: `14`
- `printed_pages`: ["14"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 776.72]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 14."
- `anchor`: "Table-like region on page 14"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Table-like region on page 15"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.6, 37.25, 564.72, 209.6]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 15."
- `anchor`: "Table-like region on page 15"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0016-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-001"
- `caption`: "Table-like content on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["ICU", "Calls", "FC7xxx", "Icu_Init", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 16; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 16"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-ICU-INIT
- `name`: "Icu_Init"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14,16`
- `brief`: "api index entry for `Icu_Init`."
- `anchors`:
  - `p14`: "Icu_Init"
  - `p16`: "The API needs to be called is Icu_Init(&ConfigPtr);"
- `aliases`: []

### API-PORTA-IRQHANDLER
- `name`: "PORTA_IRQHandler"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13,17`
- `brief`: "api index entry for `PORTA_IRQHandler`."
- `anchors`:
  - `p13`: "PORTA_IRQHandler"
  - `p17`: "void PORTA_IRQHandler(void)"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,13`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 5 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p13`: "Chapter 5 Interrupt Service Routine (ISR)"
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

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p13`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-ICU-ACHANNELOFCOUNT
- `name`: "Icu_aChannelOFCount"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "config index entry for `Icu_aChannelOFCount`."
- `anchors`:
  - `p9`: "Icu_aChannelOFCount[]"
  - `p10`: "Icu_aChannelOFCount[]"
- `aliases`: []

### CFG-ICU-ACHANNELOFEXCOUNT
- `name`: "Icu_aChannelOFExCount"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Icu_aChannelOFExCount`."
- `anchors`:
  - `p10`: "Icu_aChannelOFExCount[]"
- `aliases`: []

### CFG-ICU-CHANNEINTERRUPTCALLBACK
- `name`: "Icu_ChanneInterruptCallback"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Icu_ChanneInterruptCallback`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_12 Used in function Icu_ChanneInterruptCallback to protect the updates to:"
- `aliases`: []

### CFG-ICU-CHECKWAKEUP
- `name`: "Icu_CheckWakeup"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Icu_CheckWakeup`."
- `anchors`:
  - `p14`: "Icu_CheckWakeup"
- `aliases`: []

### CFG-ICU-DISABLENOTIFICATION
- `name`: "Icu_DisableNotification"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Icu_DisableNotification`."
- `anchors`:
  - `p14`: "Icu_DisableNotification"
- `aliases`: []

### CFG-ICU-DISABLEWAKEUP
- `name`: "Icu_DisableWakeup"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Icu_DisableWakeup`."
- `anchors`:
  - `p14`: "Icu_DisableWakeup"
- `aliases`: []

### CFG-ICU-ENABLENOTIFICATION
- `name`: "Icu_EnableNotification"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Icu_EnableNotification`."
- `anchors`:
  - `p14`: "Icu_EnableNotification"
- `aliases`: []

### CFG-ICU-ENABLEWAKEUP
- `name`: "Icu_EnableWakeup"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Icu_EnableWakeup`."
- `anchors`:
  - `p14`: "Icu_EnableWakeup"
- `aliases`: []

### CFG-ICU-FTU-STARTCHANNEL
- `name`: "Icu_Ftu_StartChannel"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Icu_Ftu_StartChannel`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_20 Used in function Icu_Ftu_StartChannel to protect the updates to:"
- `aliases`: []

### CFG-ICU-FTU-STOPCHANNEL
- `name`: "Icu_Ftu_StopChannel"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Icu_Ftu_StopChannel`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_19 Used in function Icu_Ftu_StopChannel to protect the updates to:"
- `aliases`: []

### CFG-ICU-PORT-CHANNELSTART
- `name`: "Icu_Port_ChannelStart"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `Icu_Port_ChannelStart`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_60 Used in function Icu_Port_ChannelStart to protect the updates to:"
- `aliases`: []

### CFG-ICU-PORT-CHANNELSTOP
- `name`: "Icu_Port_ChannelStop"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `Icu_Port_ChannelStop`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_64 Used in function Icu_Port_ChannelStop to protect the updates to:"
- `aliases`: []

### CFG-ICU-PORT-PROCESSINTERRUPT
- `name`: "Icu_Port_ProcessInterrupt"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `Icu_Port_ProcessInterrupt`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_59 Used in function Icu_Port_ProcessInterrupt to protect the updates to:"
- `aliases`: []

### CFG-ICU-ACHANNELACTIVEDGE
- `name`: "Icu_aChannelActivEdge"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `Icu_aChannelActivEdge`."
- `anchors`:
  - `p9`: "Icu_aChannelActivEdge []"
- `aliases`: []

### CFG-ICU-ACHANNELOVERFLOWCOUNT
- `name`: "Icu_aChannelOverflowCount"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Icu_aChannelOverflowCount`."
- `anchors`:
  - `p10`: "Icu_aChannelOverflowCount[]"
- `aliases`: []

### MACRO-ICU-E-UNINIT
- `name`: "ICU_E_UNINIT"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,15`
- `brief`: "macro index entry for `ICU_E_UNINIT`."
- `anchors`:
  - `p14`: "ICU_E_UNINIT"
  - `p15`: "ICU_E_UNINIT"
- `aliases`: []

### MACRO-ICU-E-PARAM-CHANNEL
- `name`: "ICU_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14,15`
- `brief`: "macro index entry for `ICU_E_PARAM_CHANNEL`."
- `anchors`:
  - `p14`: "ICU_E_PARAM_CHANNEL"
  - `p15`: "ICU_E_PARAM_CHANNEL"
- `aliases`: []

### MACRO-ICU-START-SEC-VAR
- `name`: "ICU_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_START_SEC_VAR`."
- `anchors`:
  - `p8`: "ICU_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-ICU-STOP-SEC-VAR
- `name`: "ICU_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ICU_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "ICU_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-ICU-PORT-A-ISR-USED
- `name`: "ICU_PORT_A_ISR_USED"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `ICU_PORT_A_ISR_USED`."
- `anchors`:
  - `p17`: "extern ISR(ICU_PORT_A_ISR_USED);"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p17`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-ICU-E-PARAM-POINTER
- `name`: "ICU_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_E_PARAM_POINTER`."
- `anchors`:
  - `p14`: "ICU_E_PARAM_POINTER"
- `aliases`: []

### MACRO-ICU-START-SEC-CODE
- `name`: "ICU_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CODE`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CODE"
- `aliases`: []

### MACRO-ICU-START-SEC-CODE-AC
- `name`: "ICU_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-ICU-START-SEC-CONFIG-DATA-16
- `name`: "ICU_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-ICU-START-SEC-CONFIG-DATA-32
- `name`: "ICU_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-ICU-START-SEC-CONFIG-DATA-8
- `name`: "ICU_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-ICU-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "ICU_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-ICU-START-SEC-CONST-16
- `name`: "ICU_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONST_16"
- `aliases`: []

### MACRO-ICU-START-SEC-CONST-32
- `name`: "ICU_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONST_32"
- `aliases`: []

### MACRO-ICU-START-SEC-CONST-8
- `name`: "ICU_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONST_8"
- `aliases`: []

### MACRO-ICU-START-SEC-CONST-BOOLEAN
- `name`: "ICU_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-ICU-START-SEC-VAR-NO-INIT-16
- `name`: "ICU_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-ICU-START-SEC-VAR-NO-INIT-32
- `name`: "ICU_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-ICU-START-SEC-VAR-NO-INIT-8
- `name`: "ICU_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-ICU-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "ICU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CODE
- `name`: "ICU_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CODE"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CODE-AC
- `name`: "ICU_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONFIG-DATA-16
- `name`: "ICU_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONFIG-DATA-32
- `name`: "ICU_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONFIG-DATA-8
- `name`: "ICU_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONST-16
- `name`: "ICU_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONST-32
- `name`: "ICU_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONST-8
- `name`: "ICU_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-ICU-STOP-SEC-CONST-BOOLEAN
- `name`: "ICU_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-ICU-STOP-SEC-VAR-NO-INIT-16
- `name`: "ICU_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-ICU-STOP-SEC-VAR-NO-INIT-32
- `name`: "ICU_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-ICU-STOP-SEC-VAR-NO-INIT-8
- `name`: "ICU_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-ICU-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "ICU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ICU_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-00
- `name`: "ICU_EXCLUSIVE_AREA_00"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_00 Used in function Icu_SetBitChState to protect the set of the internal channel state"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-01
- `name`: "ICU_EXCLUSIVE_AREA_01"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_01 Used in function Icu_ClearBitChState to protect the clear of the internal channel"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-02
- `name`: "ICU_EXCLUSIVE_AREA_02"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_02 Used in function Icu_StartTimestamp to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-03
- `name`: "ICU_EXCLUSIVE_AREA_03"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_03 Used in function Icu_SetActivationCondition to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-04
- `name`: "ICU_EXCLUSIVE_AREA_04"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_04 Used in function Icu_TimeStampProcess to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-05
- `name`: "ICU_EXCLUSIVE_AREA_05"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_05 Used in function Icu_GetTimeElapsed to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-06
- `name`: "ICU_EXCLUSIVE_AREA_06"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_06 Used in function Icu_GetDutyCycleValues to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-07
- `name`: "ICU_EXCLUSIVE_AREA_07"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_07`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_07 Used in function Icu_SignalMeasurementProcess to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-08
- `name`: "ICU_EXCLUSIVE_AREA_08"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_08`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_08 Used in function Icu_StartSignalMeasurement to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-09
- `name`: "ICU_EXCLUSIVE_AREA_09"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_09`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_09 Used in function Icu_ResetEdgeCount to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-10
- `name`: "ICU_EXCLUSIVE_AREA_10"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_10`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_10 Used in function Icu_EnableEdgeCount to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-12
- `name`: "ICU_EXCLUSIVE_AREA_12"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_12`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_12 Used in function Icu_ChanneInterruptCallback to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-13
- `name`: "ICU_EXCLUSIVE_AREA_13"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_13`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_13 Used in function Icu_Cmp_GetInputStateto protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-15
- `name`: "ICU_EXCLUSIVE_AREA_15"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_15`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_15 Used in function Icu_Cmp_GetInputState to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-16
- `name`: "ICU_EXCLUSIVE_AREA_16"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_16`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_16 Used in function Icu_Cmp_SetActivationCondition to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-17
- `name`: "ICU_EXCLUSIVE_AREA_17"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_17`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_17 Used in function Icu_Cmp_EnableEdgeDetection to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-18
- `name`: "ICU_EXCLUSIVE_AREA_18"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_18`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_18 Used in function Icu_Cmp_DisableEdgeDetection to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-19
- `name`: "ICU_EXCLUSIVE_AREA_19"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_19`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_19 Used in function Icu_Ftu_StopChannel to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-20
- `name`: "ICU_EXCLUSIVE_AREA_20"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_20`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_20 Used in function Icu_Ftu_StartChannel to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-22
- `name`: "ICU_EXCLUSIVE_AREA_22"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_22`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_22 Used in function Icu_Ftu_EnableOverflow to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-23
- `name`: "ICU_EXCLUSIVE_AREA_23"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_23`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_23 Used in function Icu_Ftu_DisableOverflow to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-26
- `name`: "ICU_EXCLUSIVE_AREA_26"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_26`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_26 Used in function Icu_Ftu_SetActivationCondition to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-27
- `name`: "ICU_EXCLUSIVE_AREA_27"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_27`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_27 Used in function Icu_Ftu_SetNormalMode to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-28
- `name`: "ICU_EXCLUSIVE_AREA_28"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_28`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_28 Used in function Icu_Ftu_SetSleepMode to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-29
- `name`: "ICU_EXCLUSIVE_AREA_29"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_29`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_29 Used in function Icu_Ftu_GetInputState to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-31
- `name`: "ICU_EXCLUSIVE_AREA_31"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_31`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_31 Used in function Icu_Aontimer_GetEdgeNumbers to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-32
- `name`: "ICU_EXCLUSIVE_AREA_32"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_32`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_32 Used in function Icu_Aontimer_EnableEdgeDetection to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-33
- `name`: "ICU_EXCLUSIVE_AREA_33"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_33`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_33 Used in function Icu_Aontimer_DisableEdgeDetection to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-34
- `name`: "ICU_EXCLUSIVE_AREA_34"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_34`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_34 Used in function Icu_Aontimer_SetNormalMode to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-35
- `name`: "ICU_EXCLUSIVE_AREA_35"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_35`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_35 Used in function Icu_Aontimer_SetSleepMode to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-36
- `name`: "ICU_EXCLUSIVE_AREA_36"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_36`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_36 Used in function Icu_Aontimer_SetActivationCondition to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-37
- `name`: "ICU_EXCLUSIVE_AREA_37"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_37`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_37 Used in function Icu_Aontimer_ResetEdgeNumbers to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-38
- `name`: "ICU_EXCLUSIVE_AREA_38"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_38`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_38 Used in function Icu_Aontimer_EnableEdgeCount to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-39
- `name`: "ICU_EXCLUSIVE_AREA_39"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_39`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_39 Used in function Icu_Aontimer_DisableEdgeCount to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-40
- `name`: "ICU_EXCLUSIVE_AREA_40"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_40`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_40 Used in function Icu_Cmp_EnableEdgeCount to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-41
- `name`: "ICU_EXCLUSIVE_AREA_41"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_41`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_41 Used in function Icu_Cmp_DisableEdgeCount to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-42
- `name`: "ICU_EXCLUSIVE_AREA_42"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_42`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_42 Used in function Icu_Cmp_SetSleepMode to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-59
- `name`: "ICU_EXCLUSIVE_AREA_59"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_59`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_59 Used in function Icu_Port_ProcessInterrupt to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-60
- `name`: "ICU_EXCLUSIVE_AREA_60"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_60`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_60 Used in function Icu_Port_ChannelStart to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-62
- `name`: "ICU_EXCLUSIVE_AREA_62"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_62`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_62 Used in function Icu_Port_SetActivationCondition to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-63
- `name`: "ICU_EXCLUSIVE_AREA_63"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_63`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_63 Used in function Icu_Port_GetInputState to protect the updates to:"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA-64
- `name`: "ICU_EXCLUSIVE_AREA_64"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_64`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_64 Used in function Icu_Port_ChannelStop to protect the updates to:"
- `aliases`: []

### MACRO-ICU-E-ALREADY-INITIALIZED
- `name`: "ICU_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p14`: "ICU_E_ALREADY_INITIALIZED"
- `aliases`: []

### MACRO-ICU-E-BUSY-OPERATION
- `name`: "ICU_E_BUSY_OPERATION"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_E_BUSY_OPERATION`."
- `anchors`:
  - `p14`: "ICU_E_BUSY_OPERATION"
- `aliases`: []

### MACRO-ICU-E-NOT-STARTED
- `name`: "ICU_E_NOT_STARTED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_E_NOT_STARTED`."
- `anchors`:
  - `p14`: "ICU_E_NOT_STARTED"
- `aliases`: []

### MACRO-ICU-E-PARAM-ACTIVATION
- `name`: "ICU_E_PARAM_ACTIVATION"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_E_PARAM_ACTIVATION`."
- `anchors`:
  - `p14`: "ICU_E_PARAM_ACTIVATION"
- `aliases`: []

### MACRO-ICU-E-PARAM-NOTIFY-INTERVAL
- `name`: "ICU_E_PARAM_NOTIFY_INTERVAL"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `ICU_E_PARAM_NOTIFY_INTERVAL`."
- `anchors`:
  - `p14`: "ICU_E_PARAM_NOTIFY_INTERVAL"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-ICU-EXCLUSIVE-AREA
- `name`: "ICU_EXCLUSIVE_AREA_"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `ICU_EXCLUSIVE_AREA_`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_08 Used in function Icu_StartSignalMeasurement to protect the updates to:"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p17`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p17`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to"
- `aliases`: []

### MEM-ICU-START-SEC-VAR
- `name`: "ICU_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR
- `name`: "ICU_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ICU-START-SEC
- `name`: "ICU_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-ICU-START-SEC-CONST
- `name`: "ICU_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-ICU-START-SEC-CONST-UNSPECIFIED
- `name`: "ICU_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ICU_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-ICU-START-SEC-RAMCODE
- `name`: "ICU_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "ICU_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-INIT-16
- `name`: "ICU_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "ICU_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-INIT-32
- `name`: "ICU_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "ICU_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-INIT-8
- `name`: "ICU_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-INIT-BOOLEAN
- `name`: "ICU_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "ICU_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "ICU_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-NO-INIT
- `name`: "ICU_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ICU-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ICU_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-ICU-STOP-SEC
- `name`: "ICU_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-ICU-STOP-SEC-CONST
- `name`: "ICU_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-ICU-STOP-SEC-CONST-UNSPECIFIED
- `name`: "ICU_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-ICU-STOP-SEC-RAMCODE
- `name`: "ICU_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-INIT-16
- `name`: "ICU_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "ICU_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-INIT-32
- `name`: "ICU_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "ICU_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-INIT-8
- `name`: "ICU_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "ICU_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "ICU_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "ICU_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-NO-INIT
- `name`: "ICU_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ICU-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ICU_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-COMMON-C
- `name`: "Common.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Common.c`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Ftu_ Common.c"
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

### FILE-ICU-C
- `name`: "Icu.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Icu.c`."
- `anchors`:
  - `p9`: "Icu.c:"
- `aliases`: []

### FILE-ICU-CFG-C
- `name`: "Icu_Cfg.c"
- `type`: `file`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "file index entry for `Icu_Cfg.c`."
- `anchors`:
  - `p17`: "Icu_Cfg.c or Icu_PBCfg.c. User need implement the notification in any file."
- `aliases`: []

### FILE-ICU-PBCFG-C
- `name`: "Icu_PBCfg.c"
- `type`: `file`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "file index entry for `Icu_PBCfg.c`."
- `anchors`:
  - `p17`: "Icu_Cfg.c or Icu_PBCfg.c. User need implement the notification in any file."
- `aliases`: []

### FILE-MCAL-SRC-ICU-SRC-ICU-AONTIMER-C
- `name`: "MCAL/Src/Icu/Src/Icu_Aontimer.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Icu/Src/Icu_Aontimer.c`."
- `anchors`:
  - `p5`: "MCAL/Src/Icu/Src/Icu_Aontimer.c"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p17`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-ICU-H
- `name`: "SchM_Icu.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Icu.h`."
- `anchors`:
  - `p6`: "SchM_Icu.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-AONTIMER-REG-H
- `name`: "_MCAL/Src/Common/include/Aontimer_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Aontimer_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Aontimer_Reg.h"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-PORT-REG-H
- `name`: "_MCAL/Src/Common/include/Port_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Port_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Port_Reg.h"
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

### FILE-MCAL-SRC-ICU-SRC-ICU-C
- `name`: "_MCAL/Src/Icu/Src/Icu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/Src/Icu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu.c"
- `aliases`: []

### FILE-MCAL-SRC-ICU-SRC-ICU-CMP-C
- `name`: "_MCAL/Src/Icu/Src/Icu_Cmp.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/Src/Icu_Cmp.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Cmp.c"
- `aliases`: []

### FILE-MCAL-SRC-ICU-SRC-ICU-FTU-C
- `name`: "_MCAL/Src/Icu/Src/Icu_Ftu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/Src/Icu_Ftu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Ftu.c"
- `aliases`: []

### FILE-MCAL-SRC-ICU-SRC-ICU-HW-C
- `name`: "_MCAL/Src/Icu/Src/Icu_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/Src/Icu_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-ICU-SRC-ICU-PORT-C
- `name`: "_MCAL/Src/Icu/Src/Icu_Port.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/Src/Icu_Port.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Port.c"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-CMP-REG-H
- `name`: "_MCAL/Src/Icu/include/Cmp_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Cmp_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Cmp_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-H
- `name`: "_MCAL/Src/Icu/include/Icu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-AONTIMER-H
- `name`: "_MCAL/Src/Icu/include/Icu_Aontimer.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Aontimer.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Aontimer.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-AONTIMER-TYPES-H
- `name`: "_MCAL/Src/Icu/include/Icu_Aontimer_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Aontimer_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Aontimer_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-CMP-H
- `name`: "_MCAL/Src/Icu/include/Icu_Cmp.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Cmp.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Cmp.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-CMP-TYPES-H
- `name`: "_MCAL/Src/Icu/include/Icu_Cmp_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Cmp_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Cmp_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-FTU-H
- `name`: "_MCAL/Src/Icu/include/Icu_Ftu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Ftu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Ftu.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-FTU-TYPES-H
- `name`: "_MCAL/Src/Icu/include/Icu_Ftu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Ftu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Ftu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-HW-H
- `name`: "_MCAL/Src/Icu/include/Icu_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-HW-TYPES-H
- `name`: "_MCAL/Src/Icu/include/Icu_Hw_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Hw_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Hw_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-MEMMAP-H
- `name`: "_MCAL/Src/Icu/include/Icu_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-PORT-H
- `name`: "_MCAL/Src/Icu/include/Icu_Port.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Port.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Port.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-PORT-TYPES-H
- `name`: "_MCAL/Src/Icu/include/Icu_Port_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Port_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Port_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-TYPES-H
- `name`: "_MCAL/Src/Icu/include/Icu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ICU-INCLUDE-ICU-VERSION-H
- `name`: "_MCAL/Src/Icu/include/Icu_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Icu/include/Icu_Version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-ICU-CFG-H
- `name`: "_MCAL_generate/include/Icu_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Icu_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Icu_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-ICU-CFG-C
- `name`: "_MCAL_generate/src/Icu_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Icu_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Icu_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-ICU-PBCFG-C
- `name`: "_MCAL_generate/src/Icu_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Icu_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Icu_PBcfg.c"
- `aliases`: []

### TERM-ICU
- `name`: "ICU"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `ICU`."
- `anchors`:
  - `p1`: "ICU"
  - `p2`: "ICU"
  - `p3`: "ICU"
  - `p4`: "ICU"
  - `p5`: "ICU"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,10,11,14`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p10`: "Det"
  - `p11`: "Det"
- `aliases`: []

### TERM-INPUT-CAPTURE-UNIT
- `name`: "Input Capture Unit"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,11,12,14,15`
- `brief`: "term index entry for `Input Capture Unit`."
- `anchors`:
  - `p10`: "Input Capture Unit"
  - `p11`: "Input Capture Unit"
  - `p12`: "Input Capture Unit"
  - `p14`: "Input Capture Unit"
  - `p15`: "Input Capture Unit"
- `aliases`: []

### TERM-ICU-CMP-HWA-SETINTEN-FALLING
- `name`: "ICU_CMP_HWA_SetIntEn_Falling"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,11,12`
- `brief`: "term index entry for `ICU_CMP_HWA_SetIntEn_Falling`."
- `anchors`:
  - `p10`: "ICU_CMP_HWA_SetIntEn_Falling[]"
  - `p11`: "ICU_CMP_HWA_SetIntEn_Falling[]"
  - `p12`: "ICU_CMP_HWA_SetIntEn_Falling[]"
- `aliases`: []

### TERM-ICU-CMP-HWA-SETINTEN-RISING
- `name`: "ICU_CMP_HWA_SetIntEn_Rising"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,11,12`
- `brief`: "term index entry for `ICU_CMP_HWA_SetIntEn_Rising`."
- `anchors`:
  - `p10`: "ICU_CMP_HWA_SetIntEn_Rising[]"
  - `p11`: "ICU_CMP_HWA_SetIntEn_Rising[]"
  - `p12`: "ICU_CMP_HWA_SetIntEn_Rising[]"
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

### TERM-ICU-AACTIVEPULSEWIDTH
- `name`: "Icu_aActivePulseWidth"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aActivePulseWidth`."
- `anchors`:
  - `p9`: "Icu_aActivePulseWidth[]"
  - `p10`: "Icu_aActivePulseWidth []"
- `aliases`: []

### TERM-ICU-CMP-HWA-CLEARINTFALLINGFLAG
- `name`: "ICU_CMP_HWA_ClearIntFallingFlag"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,12`
- `brief`: "term index entry for `ICU_CMP_HWA_ClearIntFallingFlag`."
- `anchors`:
  - `p10`: "ICU_CMP_HWA_ClearIntFallingFlag[]"
  - `p12`: "ICU_CMP_HWA_ClearIntFallingFlag[]"
- `aliases`: []

### TERM-ICU-CMP-HWA-CLEARINTRISINGFLAG
- `name`: "ICU_CMP_HWA_ClearIntRisingFlag"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,12`
- `brief`: "term index entry for `ICU_CMP_HWA_ClearIntRisingFlag`."
- `anchors`:
  - `p10`: "ICU_CMP_HWA_ClearIntRisingFlag[]"
  - `p12`: "ICU_CMP_HWA_ClearIntRisingFlag[]"
- `aliases`: []

### TERM-ICU-AACTIVEOVERFLOWCOUNT
- `name`: "Icu_aActiveOverflowCount"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aActiveOverflowCount`."
- `anchors`:
  - `p9`: "Icu_aActiveOverflowCount[]"
  - `p10`: "Icu_aActiveOverflowCount[]"
- `aliases`: []

### TERM-ICU-APERIOD
- `name`: "Icu_aPeriod"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aPeriod`."
- `anchors`:
  - `p9`: "Icu_aPeriod []"
  - `p10`: "Icu_aPeriod[]"
- `aliases`: []

### TERM-ICU-CFG
- `name`: "Icu_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,17`
- `brief`: "term index entry for `Icu_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Icu_Cfg.c"
  - `p17`: "Icu_Cfg.c or Icu_PBCfg.c. User need implement the notification in any file."
- `aliases`: []

### TERM-ICU-APERIODOVERFLOWCOUNT
- `name`: "Icu_aPeriodOverflowCount"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aPeriodOverflowCount`."
- `anchors`:
  - `p9`: "Icu_aPeriodOverflowCount[]"
  - `p10`: "Icu_aPeriodOverflowCount[]"
- `aliases`: []

### TERM-ICU-GETDUTYCYCLEVALUES
- `name`: "Icu_GetDutyCycleValues"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,15`
- `brief`: "term index entry for `Icu_GetDutyCycleValues`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_06 Used in function Icu_GetDutyCycleValues to protect the updates to:"
  - `p15`: "Icu_GetDutyCycleValues"
- `aliases`: []

### TERM-ICU-GETTIMEELAPSED
- `name`: "Icu_GetTimeElapsed"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,15`
- `brief`: "term index entry for `Icu_GetTimeElapsed`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_05 Used in function Icu_GetTimeElapsed to protect the updates to:"
  - `p15`: "Icu_GetTimeElapsed"
- `aliases`: []

### TERM-ICU-RESETEDGECOUNT
- `name`: "Icu_ResetEdgeCount"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,14`
- `brief`: "term index entry for `Icu_ResetEdgeCount`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_09 Used in function Icu_ResetEdgeCount to protect the updates to:"
  - `p14`: "Icu_ResetEdgeCount"
- `aliases`: []

### TERM-ICU-SETACTIVATIONCONDITION
- `name`: "Icu_SetActivationCondition"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,14`
- `brief`: "term index entry for `Icu_SetActivationCondition`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_03 Used in function Icu_SetActivationCondition to protect the updates to:"
  - `p14`: "Icu_SetActivationCondition"
- `aliases`: []

### TERM-ICU-STARTSIGNALMEASUREMENT
- `name`: "Icu_StartSignalMeasurement"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,14`
- `brief`: "term index entry for `Icu_StartSignalMeasurement`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_08 Used in function Icu_StartSignalMeasurement to protect the updates to:"
  - `p14`: "Icu_StartSignalMeasurement"
- `aliases`: []

### TERM-ICU-STARTTIMESTAMP
- `name`: "Icu_StartTimestamp"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,14`
- `brief`: "term index entry for `Icu_StartTimestamp`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_02 Used in function Icu_StartTimestamp to protect the updates to:"
  - `p14`: "Icu_StartTimestamp"
- `aliases`: []

### TERM-ICU-ASIGMSMTACTIVE
- `name`: "Icu_aSigMsmtActive"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aSigMsmtActive`."
- `anchors`:
  - `p9`: "Icu_aSigMsmtActive[]"
  - `p10`: "Icu_aSigMsmtActive[]"
- `aliases`: []

### TERM-ICU-ASIGMSMTSTART
- `name`: "Icu_aSigMsmtStart"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aSigMsmtStart`."
- `anchors`:
  - `p9`: "Icu_aSigMsmtStart[]"
  - `p10`: "Icu_aSigMsmtStart[]"
- `aliases`: []

### TERM-ICU-ASIGNALMEASUREMENTSEQ
- `name`: "Icu_aSignalMeasurementSeq"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Icu_aSignalMeasurementSeq`."
- `anchors`:
  - `p9`: "Icu_aSignalMeasurementSeq[]"
  - `p10`: "Icu_aSignalMeasurementSeq[]"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,15`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p15`: "Dem"
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

### TERM-ICU-AEDGECOUNT
- `name`: "Icu_aEdgeCount"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_aEdgeCount`."
- `anchors`:
  - `p10`: "Icu_aEdgeCount []"
- `aliases`: []

### TERM-ICU-AONTIMER
- `name`: "Icu_Aontimer"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Aontimer`."
- `anchors`:
  - `p5`: "MCAL/Src/Icu/Src/Icu_Aontimer.c"
- `aliases`: []

### TERM-ICU-CMP
- `name`: "Icu_Cmp"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Cmp`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Cmp.c"
- `aliases`: []

### TERM-ICU-FTU
- `name`: "Icu_Ftu"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Ftu`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Ftu.c"
- `aliases`: []

### TERM-ICU-HW
- `name`: "Icu_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Hw.c"
- `aliases`: []

### TERM-ICU-PORT
- `name`: "Icu_Port"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Port`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/Src/Icu_Port.c"
- `aliases`: []

### TERM-ICU-ABUFFER
- `name`: "Icu_aBuffer"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_aBuffer`."
- `anchors`:
  - `p9`: "Icu_aBuffer []"
- `aliases`: []

### TERM-ICU-ABUFFERINDEX
- `name`: "Icu_aBufferIndex"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_aBufferIndex`."
- `anchors`:
  - `p9`: "Icu_aBufferIndex[]"
- `aliases`: []

### TERM-ICU-ANOTIFYCOUNT
- `name`: "Icu_aNotifyCount"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_aNotifyCount`."
- `anchors`:
  - `p9`: "Icu_aNotifyCount[]"
- `aliases`: []

### TERM-AONTIMER-IRQHANDLER
- `name`: "AONTIMER_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `AONTIMER_IRQHandler`."
- `anchors`:
  - `p13`: "AONTIMER_IRQHandler"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p17`: "AUTOSAR"
- `aliases`: []

### TERM-AONTIMER-REG
- `name`: "Aontimer_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Aontimer_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Aontimer_Reg.h"
- `aliases`: []

### TERM-CMP0-IRQHANDLER
- `name`: "CMP0_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `CMP0_IRQHandler`."
- `anchors`:
  - `p13`: "CMP0_IRQHandler"
- `aliases`: []

### TERM-CMP1-IRQHANDLER
- `name`: "CMP1_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `CMP1_IRQHandler`."
- `anchors`:
  - `p13`: "CMP1_IRQHandler"
- `aliases`: []

### TERM-CMP2-IRQHANDLER
- `name`: "CMP2_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `CMP2_IRQHandler`."
- `anchors`:
  - `p13`: "CMP2_IRQHandler"
- `aliases`: []

### TERM-CMP-REG
- `name`: "Cmp_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Cmp_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Cmp_Reg.h"
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
  - `p6`: "Copy the ICU module(_MCAL/EB_Plugins/eclipse/plugins/Icu) folder to EB tresos plug-ins (EB/tresos/plugins/) folder."
- `aliases`: []

### TERM-FTU0-IRQHANDLER
- `name`: "FTU0_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU0_IRQHandler`."
- `anchors`:
  - `p13`: "FTU0_IRQHandler"
- `aliases`: []

### TERM-FTU10-IRQHANDLER
- `name`: "FTU10_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU10_IRQHandler`."
- `anchors`:
  - `p13`: "FTU10_IRQHandler"
- `aliases`: []

### TERM-FTU11-IRQHANDLER
- `name`: "FTU11_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU11_IRQHandler`."
- `anchors`:
  - `p13`: "FTU11_IRQHandler"
- `aliases`: []

### TERM-FTU1-IRQHANDLER
- `name`: "FTU1_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU1_IRQHandler`."
- `anchors`:
  - `p13`: "FTU1_IRQHandler"
- `aliases`: []

### TERM-FTU2-IRQHANDLER
- `name`: "FTU2_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU2_IRQHandler`."
- `anchors`:
  - `p13`: "FTU2_IRQHandler"
- `aliases`: []

### TERM-FTU3-IRQHANDLER
- `name`: "FTU3_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU3_IRQHandler`."
- `anchors`:
  - `p13`: "FTU3_IRQHandler"
- `aliases`: []

### TERM-FTU4-IRQHANDLER
- `name`: "FTU4_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU4_IRQHandler`."
- `anchors`:
  - `p13`: "FTU4_IRQHandler"
- `aliases`: []

### TERM-FTU5-IRQHANDLER
- `name`: "FTU5_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU5_IRQHandler`."
- `anchors`:
  - `p13`: "FTU5_IRQHandler"
- `aliases`: []

### TERM-FTU6-IRQHANDLER
- `name`: "FTU6_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU6_IRQHandler`."
- `anchors`:
  - `p13`: "FTU6_IRQHandler"
- `aliases`: []

### TERM-FTU7-IRQHANDLER
- `name`: "FTU7_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU7_IRQHandler`."
- `anchors`:
  - `p13`: "FTU7_IRQHandler"
- `aliases`: []

### TERM-FTU8-IRQHANDLER
- `name`: "FTU8_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU8_IRQHandler`."
- `anchors`:
  - `p13`: "FTU8_IRQHandler"
- `aliases`: []

### TERM-FTU9-IRQHANDLER
- `name`: "FTU9_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `FTU9_IRQHandler`."
- `anchors`:
  - `p13`: "FTU9_IRQHandler"
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

### TERM-ICU-AONTIMER-DISABLEEDGECOUNT
- `name`: "Icu_Aontimer_DisableEdgeCount"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_DisableEdgeCount`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_39 Used in function Icu_Aontimer_DisableEdgeCount to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-DISABLEEDGEDETECTION
- `name`: "Icu_Aontimer_DisableEdgeDetection"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_DisableEdgeDetection`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_33 Used in function Icu_Aontimer_DisableEdgeDetection to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-ENABLEEDGECOUNT
- `name`: "Icu_Aontimer_EnableEdgeCount"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_EnableEdgeCount`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_38 Used in function Icu_Aontimer_EnableEdgeCount to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-ENABLEEDGEDETECTION
- `name`: "Icu_Aontimer_EnableEdgeDetection"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_EnableEdgeDetection`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_32 Used in function Icu_Aontimer_EnableEdgeDetection to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-GETEDGENUMBERS
- `name`: "Icu_Aontimer_GetEdgeNumbers"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_GetEdgeNumbers`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_31 Used in function Icu_Aontimer_GetEdgeNumbers to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-RESETEDGENUMBERS
- `name`: "Icu_Aontimer_ResetEdgeNumbers"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_ResetEdgeNumbers`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_37 Used in function Icu_Aontimer_ResetEdgeNumbers to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-SETACTIVATIONCONDITION
- `name`: "Icu_Aontimer_SetActivationCondition"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_SetActivationCondition`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_36 Used in function Icu_Aontimer_SetActivationCondition to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-SETNORMALMODE
- `name`: "Icu_Aontimer_SetNormalMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_SetNormalMode`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_34 Used in function Icu_Aontimer_SetNormalMode to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-SETSLEEPMODE
- `name`: "Icu_Aontimer_SetSleepMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Aontimer_SetSleepMode`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_35 Used in function Icu_Aontimer_SetSleepMode to protect the updates to:"
- `aliases`: []

### TERM-ICU-AONTIMER-TYPES
- `name`: "Icu_Aontimer_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Aontimer_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Aontimer_Types.h"
- `aliases`: []

### TERM-ICU-CLEARBITCHSTATE
- `name`: "Icu_ClearBitChState"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_ClearBitChState`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_01 Used in function Icu_ClearBitChState to protect the clear of the internal channel"
- `aliases`: []

### TERM-ICU-CMP-DISABLEEDGECOUNT
- `name`: "Icu_Cmp_DisableEdgeCount"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Icu_Cmp_DisableEdgeCount`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_41 Used in function Icu_Cmp_DisableEdgeCount to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-DISABLEEDGEDETECTION
- `name`: "Icu_Cmp_DisableEdgeDetection"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_Cmp_DisableEdgeDetection`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_18 Used in function Icu_Cmp_DisableEdgeDetection to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-ENABLEEDGECOUNT
- `name`: "Icu_Cmp_EnableEdgeCount"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Cmp_EnableEdgeCount`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_40 Used in function Icu_Cmp_EnableEdgeCount to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-ENABLEEDGEDETECTION
- `name`: "Icu_Cmp_EnableEdgeDetection"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_Cmp_EnableEdgeDetection`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_17 Used in function Icu_Cmp_EnableEdgeDetection to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-GETINPUTSTATE
- `name`: "Icu_Cmp_GetInputState"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_Cmp_GetInputState`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_13 Used in function Icu_Cmp_GetInputStateto protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-GETINPUTSTATETO
- `name`: "Icu_Cmp_GetInputStateto"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_Cmp_GetInputStateto`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_13 Used in function Icu_Cmp_GetInputStateto protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-SETACTIVATIONCONDITION
- `name`: "Icu_Cmp_SetActivationCondition"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_Cmp_SetActivationCondition`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_16 Used in function Icu_Cmp_SetActivationCondition to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-SETNORMALMODE
- `name`: "Icu_Cmp_SetNormalMode"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_Cmp_SetNormalMode`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_ Used in function Icu_Cmp_SetNormalMode to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-SETSLEEPMODE
- `name`: "Icu_Cmp_SetSleepMode"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Icu_Cmp_SetSleepMode`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_42 Used in function Icu_Cmp_SetSleepMode to protect the updates to:"
- `aliases`: []

### TERM-ICU-CMP-TYPES
- `name`: "Icu_Cmp_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Cmp_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Cmp_Types.h"
- `aliases`: []

### TERM-ICU-DEINIT
- `name`: "Icu_DeInit"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_DeInit`."
- `anchors`:
  - `p14`: "Icu_DeInit"
- `aliases`: []

### TERM-ICU-DISABLEEDGECOUNT
- `name`: "Icu_DisableEdgeCount"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_DisableEdgeCount`."
- `anchors`:
  - `p14`: "Icu_DisableEdgeCount"
- `aliases`: []

### TERM-ICU-DISABLEEDGEDETECTION
- `name`: "Icu_DisableEdgeDetection"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_DisableEdgeDetection`."
- `anchors`:
  - `p14`: "Icu_DisableEdgeDetection"
- `aliases`: []

### TERM-ICU-ENABLEEDGECOUNT
- `name`: "Icu_EnableEdgeCount"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Icu_EnableEdgeCount`."
- `anchors`:
  - `p10`: "ICU_EXCLUSIVE_AREA_10 Used in function Icu_EnableEdgeCount to protect the updates to:"
- `aliases`: []

### TERM-ICU-ENABLEEDGEDETECTION
- `name`: "Icu_EnableEdgeDetection"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_EnableEdgeDetection`."
- `anchors`:
  - `p14`: "Icu_EnableEdgeDetection"
- `aliases`: []

### TERM-ICU-FTU-DISABLEOVERFLOW
- `name`: "Icu_Ftu_DisableOverflow"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Ftu_DisableOverflow`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_23 Used in function Icu_Ftu_DisableOverflow to protect the updates to:"
- `aliases`: []

### TERM-ICU-FTU-ENABLEOVERFLOW
- `name`: "Icu_Ftu_EnableOverflow"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Ftu_EnableOverflow`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_22 Used in function Icu_Ftu_EnableOverflow to protect the updates to:"
- `aliases`: []

### TERM-ICU-FTU-GETINPUTSTATE
- `name`: "Icu_Ftu_GetInputState"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Ftu_GetInputState`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_29 Used in function Icu_Ftu_GetInputState to protect the updates to:"
- `aliases`: []

### TERM-ICU-FTU-SETACTIVATIONCONDITION
- `name`: "Icu_Ftu_SetActivationCondition"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Ftu_SetActivationCondition`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_26 Used in function Icu_Ftu_SetActivationCondition to protect the updates to:"
- `aliases`: []

### TERM-ICU-FTU-SETNORMALMODE
- `name`: "Icu_Ftu_SetNormalMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Ftu_SetNormalMode`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_27 Used in function Icu_Ftu_SetNormalMode to protect the updates to:"
- `aliases`: []

### TERM-ICU-FTU-SETSLEEPMODE
- `name`: "Icu_Ftu_SetSleepMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Icu_Ftu_SetSleepMode`."
- `anchors`:
  - `p11`: "ICU_EXCLUSIVE_AREA_28 Used in function Icu_Ftu_SetSleepMode to protect the updates to:"
- `aliases`: []

### TERM-ICU-FTU-TYPES
- `name`: "Icu_Ftu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Ftu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Ftu_Types.h"
- `aliases`: []

### TERM-ICU-GETEDGENUMBERS
- `name`: "Icu_GetEdgeNumbers"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_GetEdgeNumbers`."
- `anchors`:
  - `p14`: "Icu_GetEdgeNumbers"
- `aliases`: []

### TERM-ICU-GETINPUTLEVEL
- `name`: "Icu_GetInputLevel"
- `type`: `term`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "term index entry for `Icu_GetInputLevel`."
- `anchors`:
  - `p15`: "Icu_GetInputLevel"
- `aliases`: []

### TERM-ICU-GETINPUTSTATE
- `name`: "Icu_GetInputState"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_GetInputState`."
- `anchors`:
  - `p14`: "Icu_GetInputState"
- `aliases`: []

### TERM-ICU-GETTIMESTAMPINDEX
- `name`: "Icu_GetTimestampIndex"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_GetTimestampIndex`."
- `anchors`:
  - `p14`: "Icu_GetTimestampIndex"
- `aliases`: []

### TERM-ICU-HW-TYPES
- `name`: "Icu_Hw_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Hw_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Hw_Types.h"
- `aliases`: []

### TERM-ICU-MEMMAP
- `name`: "Icu_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_MemMap.h"
- `aliases`: []

### TERM-ICU-PBCFG
- `name`: "Icu_PBCfg"
- `type`: `term`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "term index entry for `Icu_PBCfg`."
- `anchors`:
  - `p17`: "Icu_Cfg.c or Icu_PBCfg.c. User need implement the notification in any file."
- `aliases`: []

### TERM-ICU-PBCFG-2
- `name`: "Icu_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Icu_PBcfg.c"
- `aliases`: []

### TERM-ICU-PORT-GETINPUTSTATE
- `name`: "Icu_Port_GetInputState"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Icu_Port_GetInputState`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_63 Used in function Icu_Port_GetInputState to protect the updates to:"
- `aliases`: []

### TERM-ICU-PORT-SETACTIVATIONCONDITION
- `name`: "Icu_Port_SetActivationCondition"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Icu_Port_SetActivationCondition`."
- `anchors`:
  - `p12`: "ICU_EXCLUSIVE_AREA_62 Used in function Icu_Port_SetActivationCondition to protect the updates to:"
- `aliases`: []

### TERM-ICU-PORT-TYPES
- `name`: "Icu_Port_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Port_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Port_Types.h"
- `aliases`: []

### TERM-ICU-SETBITCHSTATE
- `name`: "Icu_SetBitChState"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_SetBitChState`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_00 Used in function Icu_SetBitChState to protect the set of the internal channel state"
- `aliases`: []

### TERM-ICU-SETMODE
- `name`: "Icu_SetMode"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_SetMode`."
- `anchors`:
  - `p14`: "Icu_SetMode"
- `aliases`: []

### TERM-ICU-SIGNALMEASUREMENTPROCESS
- `name`: "Icu_SignalMeasurementProcess"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_SignalMeasurementProcess`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_07 Used in function Icu_SignalMeasurementProcess to protect the updates to:"
- `aliases`: []

### TERM-ICU-STOPSIGNALMEASUREMENT
- `name`: "Icu_StopSignalMeasurement"
- `type`: `term`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "term index entry for `Icu_StopSignalMeasurement`."
- `anchors`:
  - `p15`: "Icu_StopSignalMeasurement"
- `aliases`: []

### TERM-ICU-STOPTIMESTAMP
- `name`: "Icu_StopTimestamp"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Icu_StopTimestamp`."
- `anchors`:
  - `p14`: "Icu_StopTimestamp"
- `aliases`: []

### TERM-ICU-TIMESTAMPPROCESS
- `name`: "Icu_TimeStampProcess"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_TimeStampProcess`."
- `anchors`:
  - `p9`: "ICU_EXCLUSIVE_AREA_04 Used in function Icu_TimeStampProcess to protect the updates to:"
- `aliases`: []

### TERM-ICU-TYPES
- `name`: "Icu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Types.h"
- `aliases`: []

### TERM-ICU-VERSION
- `name`: "Icu_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Icu_Version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Icu/include/Icu_Version.h"
- `aliases`: []

### TERM-ICU-ABUFFERNOTIFY
- `name`: "Icu_aBufferNotify"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_aBufferNotify`."
- `anchors`:
  - `p9`: "Icu_aBufferNotify[]"
- `aliases`: []

### TERM-ICU-ABUFFERSIZE
- `name`: "Icu_aBufferSize"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_aBufferSize`."
- `anchors`:
  - `p9`: "Icu_aBufferSize[]"
- `aliases`: []

### TERM-ICU-ASIGMSMTACTIVLEVEL
- `name`: "Icu_aSigMsmtActivLevel"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Icu_aSigMsmtActivLevel`."
- `anchors`:
  - `p9`: "Icu_aSigMsmtActivLevel[]"
- `aliases`: []

### TERM-PORTB-IRQHANDLER
- `name`: "PORTB_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTB_IRQHandler`."
- `anchors`:
  - `p13`: "PORTB_IRQHandler"
- `aliases`: []

### TERM-PORTC-IRQHANDLER
- `name`: "PORTC_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTC_IRQHandler`."
- `anchors`:
  - `p13`: "PORTC_IRQHandler"
- `aliases`: []

### TERM-PORTD-IRQHANDLER
- `name`: "PORTD_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTD_IRQHandler`."
- `anchors`:
  - `p13`: "PORTD_IRQHandler"
- `aliases`: []

### TERM-PORTE-IRQHANDLER
- `name`: "PORTE_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTE_IRQHandler`."
- `anchors`:
  - `p13`: "PORTE_IRQHandler"
- `aliases`: []

### TERM-PORTF-IRQHANDLER
- `name`: "PORTF_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTF_IRQHandler`."
- `anchors`:
  - `p13`: "PORTF_IRQHandler"
- `aliases`: []

### TERM-PORTG-IRQHANDLER
- `name`: "PORTG_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTG_IRQHandler`."
- `anchors`:
  - `p13`: "PORTG_IRQHandler"
- `aliases`: []

### TERM-PORTH-IRQHANDLER
- `name`: "PORTH_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTH_IRQHandler`."
- `anchors`:
  - `p13`: "PORTH_IRQHandler"
- `aliases`: []

### TERM-PORTI-IRQHANDLER
- `name`: "PORTI_IRQHandler"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `PORTI_IRQHandler`."
- `anchors`:
  - `p13`: "PORTI_IRQHandler"
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

### TERM-SCHM-ICU
- `name`: "SchM_Icu"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Icu`."
- `anchors`:
  - `p6`: "SchM_Icu.h"
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

### ALIAS-ICU
- `canonical`: "ICU"
- `aliases`: ["Input Capture Unit", "输入捕获单元", "ICU module", "ICU driver", "ICU User Manual", "ICU Integration Manual", "Icu", "Icu_Init", "Icu_SetMode"]
- `related_ids`: ["TERM-ICU"]

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

### ALIAS-FTU
- `canonical`: "FTU"
- `aliases`: ["Flexible Timer Unit", "Icu_Ftu", "edge detection", "timestamp", "edge counter"]
- `related_ids`: []

### ALIAS-AONTIMER
- `canonical`: "AONTIMER"
- `aliases`: ["Always-on Timer", "Icu_Aontimer", "always on timer"]
- `related_ids`: []

### ALIAS-ICU-CHANNEL
- `canonical`: "ICU channel"
- `aliases`: ["IcuChannel", "Icu_ChannelConfigType", "activation condition", "wakeup capability"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between ICU_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `ICU_Integration_Manual.pdf`
- `source_pdf_sha256`: `81af13a5505a41c6f246a1cd42d3165a0b84b67c68b78c80829c9b412135b2d3`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `60`
- `technical_missing_terms_added`: `3`
- `pages_with_added_terms`: `17`
- `supplemented_missing_token_count`: `60`
- `supplemented_missing_technical_token_count`: `3`
- `supplemented_physical_pages_count`: `17`
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
  - "EcuM"
  - "Flagchip"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "common"
  - "configured"
  - "enabling"
  - "functions"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "parts"
  - "some"
  - "unprotect"

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
  - "initialized"
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
  - "compare"
  - "s_aFtuOverflowFlag"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "flag"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "AONTIMER0"
  - "Confidential"
  - "Flagchip"
  - "For"
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

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "define"
  - "example"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
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
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18`
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
- `physical_pages`: `3,5,6,13,14,15,16`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001"]
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
- `pdf_page_count`: `18`
- `indexed_physical_pages_count`: `18`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `25`
- `table_index_count`: `10`
- `figure_index_count`: `0`
- `symbol_index_count`: `296`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `81af13a5505a41c6f246a1cd42d3165a0b84b67c68b78c80829c9b412135b2d3`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `60`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->