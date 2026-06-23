---
manifest_schema_version: "1.1"
source_pdf: "GPT_Integration_Manual.pdf"
source_pdf_sha256: "59b83c14824bf87181245a87f43330d351ea93bed001f96684eee1300214f82d"
source_pdf_size_bytes: 1065073
pdf_page_count: 17
generated_at: "2026-06-19T12:33:26Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.0"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: GPT_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `GPT_Integration_Manual.pdf`
- `source_pdf_sha256`: `59b83c14824bf87181245a87f43330d351ea93bed001f96684eee1300214f82d`
- `source_pdf_size_bytes`: `1065073`
- `pdf_page_count`: `17`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx GPT Integration Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 Added support for FC7240`
- `generated_at`: `2026-06-19T12:33:26Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL GPT module - Integration Manual"
- `module_scope`: "GPT module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["GPT", "General Purpose Timer", "AUTOSAR_SWS_GPTDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Gpt", "Ftu", "FTU", "Fcpit", "FCPIT"]
- `summary`: "This 17-page integration manual indexes GPT content across source physical pages 1-17, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["GPT", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx GPT Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["GPT", "MCAL", "FC7xxx", "FC7240", "Integration", "Date", "Added"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["GPT", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["GPT", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["GPT", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `7`
- `printed_page_start`: `5`
- `printed_page_end`: `7`
- `keywords`: ["Src", "Gpt", "include", "GPT", "src", "FC7xxx", "ins", "tresos"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Gpt", "Src", "GPT", "include", "Gpt_Fcpit", "Gpt_Aontimer", "Gpt_Ftu", "Gpt_Hw"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Src", "Gpt", "include", "GPT", "src", "FC7xxx", "Gpt_Fcpit", "Gpt_Tstmp"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["GPT", "Gpt", "ins", "tresos", "plug", "folder", "FC7xxx", "SchM_Gpt"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["GPT", "These", "UNSPECIFIED", "GPT_START_SEC_VAR", "GPT_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["GPT", "These", "UNSPECIFIED", "GPT_START_SEC_VAR", "GPT_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `10`
- `physical_page_end`: `11`
- `printed_page_start`: `10`
- `printed_page_end`: `11`
- `keywords`: ["exclusive", "area", "GPT", "FC7xxx", "SchM", "Gpt_Aontimer", "Gpt_LL_Aontimer_StartTimer", "Gpt_LL_Aontimer_StopTimer"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["GPT", "RTC", "FC7300", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["GPT", "GPT_E_UNINIT", "GPT_E_PARAM_CHANNEL", "GPT_E_BUSY", "FC7xxx", "GPT_E_PARAM_VALUE", "GPT_E_PARAM_POINTER", "GPT_E_PARAM_GROUP"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["GPT", "GPT_E_UNINIT", "GPT_E_PARAM_CHANNEL", "GPT_E_BUSY", "GPT_E_PARAM_VALUE", "GPT_E_PARAM_POINTER", "GPT_E_PARAM_GROUP", "FC7xxx"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["GPT", "FC7xxx", "Integration", "Dem"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["GPT", "Gpt_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["GPT", "Gpt_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["GPT", "Gpt_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["GPT", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the GPT module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 2 Building", "2.1", "Dependencies on Other Modules", "Module configuration dependency"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `content_types`: ["text", "table"]
- `anchors`: ["_MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h", "_MCAL/Src/Gpt/include/Gpt_Tstmp.h", "_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h", "_MCAL/Src/Gpt/include/Gpt_Tstmp_Types.h"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Rte module files:", "SchM_Gpt.h", "2.3", "Add Plug-ins"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 3 Memory", "3.1", "Sections in Memory Map", "Section Name"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Section Name", "Section Type", "Description", "GPT_START_SEC_VAR _INIT_16"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "GPT module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the GPT driver:", "Gpt_Aontimer.c:"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `anchors`: ["Gpt_Tstmp.c:", "Gpt_LL_Tstmp_StartTimer : exclusive area 30", "Gpt_LL_Tstmp_StopTimer : exclusive area 31", "Gpt_LL_Tstmp_GetTimeElapsed : exclusive area 32"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "Instance (FC7300)", "Interrupt Name (FC7300)", "IRQ Number"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1", "Det", "Function Name"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text"]
- `anchors`: ["6.2", "Dem", "None"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs to be called is GPT_Init(ConfigPtr);"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the GPT module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx GPT Integration Manual"
- `keywords`: ["GPT", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx GPT Integration Manual; Revision History; 0.1"
- `keywords`: ["GPT", "MCAL", "FC7xxx", "FC7240", "Integration", "Date", "Added"]
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
- `summary`: "Table of Contents: FC7xxx GPT Integration Manual; Table of Contents; Revision History ................................................................................................................................................... 2"
- `keywords`: ["GPT", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx GPT Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["GPT", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the GPT module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx GPT Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Gpt", "Src", "GPT", "include", "Gpt_Fcpit", "Gpt_Aontimer", "Gpt_Ftu", "Gpt_Hw", "Gpt_Rtc", "FC7xxx"]
- `anchors`:
  - `p5`: "Chapter 2 Building"
  - `p5`: "2.1"
  - `p5`: "Dependencies on Other Modules"
  - `p5`: "Module configuration dependency"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Building / 2.2 Files Required for Compile: FC7xxx GPT Integration Manual; _MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h; _MCAL/Src/Gpt/include/Gpt_Tstmp.h"
- `keywords`: ["Src", "include", "Gpt", "GPT", "src", "Gpt_Cfg", "Ftu_Common", "IRQRouter", "SpinLock", "FC7xxx"]
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h"
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp.h"
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h"
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_Types.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx GPT Integration Manual; Rte module files:; SchM_Gpt.h"
- `keywords`: ["GPT", "Gpt", "ins", "tresos", "plug", "folder", "FC7xxx", "SchM_Gpt", "EB_Plugins", "Studio"]
- `anchors`:
  - `p7`: "Rte module files:"
  - `p7`: "SchM_Gpt.h"
  - `p7`: "2.3"
  - `p7`: "Add Plug-ins"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx GPT Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["GPT", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
- `anchors`:
  - `p8`: "Chapter 3 Memory"
  - `p8`: "3.1"
  - `p8`: "Sections in Memory Map"
  - `p8`: "Section Name"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx GPT Integration Manual; Section Name; Section Type"
- `keywords`: ["GPT", "GPT_START_SEC_VAR", "GPT_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p9`: "Section Name"
  - `p9`: "Section Type"
  - `p9`: "Description"
  - `p9`: "GPT_START_SEC_VAR _INIT_16"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx GPT Integration Manual; Chapter 4 Exclusive Area; GPT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["GPT", "exclusive", "area", "FC7xxx", "SchM", "Gpt_Aontimer", "Gpt_LL_Aontimer_StartTimer", "Gpt_LL_Aontimer_StopTimer", "Gpt_LL_Aontimer_EnableInterrupt", "Gpt_LL_Aontimer_DisableInterrupt"]
- `anchors`:
  - `p10`: "Chapter 4 Exclusive Area"
  - `p10`: "GPT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p10`: "The following critical regions are used in the GPT driver:"
  - `p10`: "Gpt_Aontimer.c:"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx GPT Integration Manual; Gpt_Tstmp.c:; Gpt_LL_Tstmp_StartTimer : exclusive area 30"
- `keywords`: ["GPT", "exclusive", "area", "FC7xxx", "Gpt_Tstmp", "Gpt_LL_Tstmp_StartTimer", "Gpt_LL_Tstmp_StopTimer", "Gpt_LL_Tstmp_GetTimeElapsed", "Gpt_LL_Tstmp_StartPredefTimer", "Gpt_LL_Tstmp_StopPredefTimer"]
- `anchors`:
  - `p11`: "Gpt_Tstmp.c:"
  - `p11`: "Gpt_LL_Tstmp_StartTimer : exclusive area 30"
  - `p11`: "Gpt_LL_Tstmp_StopTimer : exclusive area 31"
  - `p11`: "Gpt_LL_Tstmp_GetTimeElapsed : exclusive area 32"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx GPT Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance (FC7300)"
- `keywords`: ["GPT", "RTC", "FC7300", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "FTU0", "FTU0_IRQHandler"]
- `anchors`:
  - `p12`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p12`: "Instance (FC7300)"
  - `p12`: "Interrupt Name (FC7300)"
  - `p12`: "IRQ Number"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx GPT Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["GPT", "GPT_E_UNINIT", "GPT_E_PARAM_CHANNEL", "GPT_E_BUSY", "GPT_E_PARAM_VALUE", "GPT_E_PARAM_POINTER", "GPT_E_PARAM_GROUP", "FC7xxx", "Gpt_Init", "GPT_E_ALREADY_INITIALIZED"]
- `anchors`:
  - `p13`: "Chapter 6 Error Report"
  - `p13`: "6.1"
  - `p13`: "Det"
  - `p13`: "Function Name"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text"]
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx GPT Integration Manual; 6.2; Dem"
- `keywords`: ["GPT", "FC7xxx", "Integration", "Dem"]
- `anchors`:
  - `p14`: "6.2"
  - `p14`: "Dem"
  - `p14`: "None"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx GPT Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchors`:
  - `p15`: "Chapter 7 Function Calls"
  - `p15`: "7.1"
  - `p15`: "Function Calls during Startup"
  - `p15`: "The API needs to be called is GPT_Init(ConfigPtr);"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx GPT Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["GPT", "Gpt_Cfg", "AUTOSAR_OS_NOT_USED", "ISR", "FTU_0_ISR", "FC7xxx", "NULL_PTR", "USE_SW_VECTOR_MODE", "FTU0_IRQHandler", "Notification"]
- `anchors`:
  - `p16`: "Chapter 8 Other Requirements"
  - `p16`: "8.1"
  - `p16`: "Notification, Callback, Callout"
  - `p16`: "Notification"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx GPT Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["GPT", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p17`: "Chapter 9 Integration Steps"
  - `p17`: "1)"
  - `p17`: "Configure the GPT module and generate configuration files (please refer to Building chapter for details)."
  - `p17`: "2)"

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
- `key_fields`: ["Gpt", "Src", "GPT", "include", "Gpt_Fcpit"]
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
- `section_path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `bbox`: `None`
- `key_fields`: ["Src", "include", "Gpt", "GPT", "src"]
- `summary`: "Indexes table-like source content for Table-like content on page 6; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 6"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Table-like content on page 7"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `bbox`: `None`
- `key_fields`: ["GPT", "Gpt", "ins", "tresos", "plug"]
- `summary`: "Indexes table-like source content for Table-like content on page 7; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 7"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 123.12, 564.72, 787.14]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 37.27, 564.72, 156.78]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like region on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 102.48, 564.72, 485.46]`
- `key_fields`: ["Instance (FC7300)", "Interrupt Name (FC7300)", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region", "large_table_region"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like region on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 775.76]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 13."
- `anchor`: "Table-like region on page 13"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Table-like content on page 15"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["GPT", "Calls", "FC7xxx", "GPT_Init", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 15; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 15"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-FTU0-IRQHANDLER
- `name`: "FTU0_IRQHandler"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,16`
- `brief`: "api index entry for `FTU0_IRQHandler`."
- `anchors`:
  - `p12`: "FTU0_IRQHandler"
  - `p16`: "void FTU0_IRQHandler(void)"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,12`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 5 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p12`: "Chapter 5 Interrupt Service Routine (ISR)"
- `aliases`: []

### API-GPT-INIT
- `name`: "GPT_Init"
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "api index entry for `GPT_Init`."
- `anchors`:
  - `p15`: "The API needs to be called is GPT_Init(ConfigPtr);"
- `aliases`: []

### API-CODE
- `name`: "Code"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "api index entry for `Code`."
- `anchors`:
  - `p8`: "Code"
- `aliases`: []

### API-INSTANCE
- `name`: "Instance"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `Instance`."
- `anchors`:
  - `p12`: "Instance (FC7300)"
- `aliases`: []

### API-MANGER
- `name`: "Manger"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Manger`."
- `anchors`:
  - `p10`: "GPT module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### API-NUMBER
- `name`: "Number"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p12`: "IRQ Number"
- `aliases`: []

### CFG-GPT-AONTIMER-PROCESSINTERRUPT
- `name`: "Gpt_Aontimer_ProcessInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_Aontimer_ProcessInterrupt`."
- `anchors`:
  - `p10`: "Gpt_Aontimer_ProcessInterrupt : exclusive area 29"
- `aliases`: []

### CFG-GPT-CHECKWAKEUP
- `name`: "Gpt_CheckWakeup"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Gpt_CheckWakeup`."
- `anchors`:
  - `p13`: "Gpt_CheckWakeup"
- `aliases`: []

### CFG-GPT-DISABLENOTIFICATION
- `name`: "Gpt_DisableNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Gpt_DisableNotification`."
- `anchors`:
  - `p13`: "Gpt_DisableNotification"
- `aliases`: []

### CFG-GPT-DISABLEWAKEUP
- `name`: "Gpt_DisableWakeup"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Gpt_DisableWakeup`."
- `anchors`:
  - `p13`: "Gpt_DisableWakeup"
- `aliases`: []

### CFG-GPT-ENABLENOTIFICATION
- `name`: "Gpt_EnableNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Gpt_EnableNotification`."
- `anchors`:
  - `p13`: "Gpt_EnableNotification"
- `aliases`: []

### CFG-GPT-ENABLEWAKEUP
- `name`: "Gpt_EnableWakeup"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Gpt_EnableWakeup`."
- `anchors`:
  - `p13`: "Gpt_EnableWakeup"
- `aliases`: []

### CFG-GPT-FCPIT-PROCESSCOMMONINTERRUPT
- `name`: "Gpt_FCPit_ProcessCommonInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_FCPit_ProcessCommonInterrupt`."
- `anchors`:
  - `p10`: "Gpt_FCPit_ProcessCommonInterrupt : exclusive area 07"
- `aliases`: []

### CFG-GPT-LL-AONTIMER-DISABLEINTERRUPT
- `name`: "Gpt_LL_Aontimer_DisableInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_Aontimer_DisableInterrupt`."
- `anchors`:
  - `p10`: "Gpt_LL_Aontimer_DisableInterrupt : exclusive area 6"
- `aliases`: []

### CFG-GPT-LL-AONTIMER-ENABLEINTERRUPT
- `name`: "Gpt_LL_Aontimer_EnableInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_Aontimer_EnableInterrupt`."
- `anchors`:
  - `p10`: "Gpt_LL_Aontimer_EnableInterrupt : exclusive area 2"
- `aliases`: []

### CFG-GPT-LL-FCPIT-DISABLEINTERRUPT
- `name`: "Gpt_LL_FCPIT_DisableInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_FCPIT_DisableInterrupt`."
- `anchors`:
  - `p10`: "Gpt_LL_FCPIT_DisableInterrupt : exclusive area 16"
- `aliases`: []

### CFG-GPT-LL-FCPIT-ENABLEINTERRUPT
- `name`: "Gpt_LL_FCPit_EnableInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_FCPit_EnableInterrupt`."
- `anchors`:
  - `p10`: "Gpt_LL_FCPit_EnableInterrupt : exclusive area 15"
- `aliases`: []

### CFG-GPT-LL-RTC-DISABLEINTERRUPT
- `name`: "Gpt_LL_Rtc_DisableInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_Rtc_DisableInterrupt`."
- `anchors`:
  - `p10`: "Gpt_LL_Rtc_DisableInterrupt : exclusive area 27"
- `aliases`: []

### CFG-GPT-LL-RTC-ENABLEINTERRUPT
- `name`: "Gpt_LL_Rtc_EnableInterrupt"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_Rtc_EnableInterrupt`."
- `anchors`:
  - `p10`: "Gpt_LL_Rtc_EnableInterruptWithCounterUpdate : exclusive area 10"
- `aliases`: []

### CFG-GPT-LL-RTC-ENABLEINTERRUPTWITHCOUNTERUPDATE
- `name`: "Gpt_LL_Rtc_EnableInterruptWithCounterUpdate"
- `type`: `config`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "config index entry for `Gpt_LL_Rtc_EnableInterruptWithCounterUpdate`."
- `anchors`:
  - `p10`: "Gpt_LL_Rtc_EnableInterruptWithCounterUpdate : exclusive area 10"
- `aliases`: []

### MACRO-GPT-E-UNINIT
- `name`: "GPT_E_UNINIT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_UNINIT`."
- `anchors`:
  - `p13`: "GPT_E_UNINIT;"
- `aliases`: []

### MACRO-GPT-E-PARAM-CHANNEL
- `name`: "GPT_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_PARAM_CHANNEL`."
- `anchors`:
  - `p13`: "GPT_E_PARAM_CHANNEL"
- `aliases`: []

### MACRO-GPT-E-BUSY
- `name`: "GPT_E_BUSY"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_BUSY`."
- `anchors`:
  - `p13`: "GPT_E_BUSY"
- `aliases`: []

### MACRO-GPT-START-SEC-VAR
- `name`: "GPT_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_START_SEC_VAR`."
- `anchors`:
  - `p9`: "GPT_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-GPT-STOP-SEC-VAR
- `name`: "GPT_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GPT_STOP_SEC_VAR`."
- `anchors`:
  - `p9`: "GPT_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-FTU-0-ISR
- `name`: "FTU_0_ISR"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `FTU_0_ISR`."
- `anchors`:
  - `p16`: "extern ISR(FTU_0_ISR);"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p16`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-GPT-E-PARAM-GROUP
- `name`: "GPT_E_PARAM_GROUP"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_PARAM_GROUP`."
- `anchors`:
  - `p13`: "GPT_E_PARAM_GROUP"
- `aliases`: []

### MACRO-GPT-E-PARAM-POINTER
- `name`: "GPT_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_PARAM_POINTER`."
- `anchors`:
  - `p13`: "GPT_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-GPT-E-PARAM-VALUE
- `name`: "GPT_E_PARAM_VALUE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_PARAM_VALUE`."
- `anchors`:
  - `p13`: "GPT_E_PARAM_VALUE;"
- `aliases`: []

### MACRO-GPT-START-SEC-CODE
- `name`: "GPT_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CODE`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CODE"
- `aliases`: []

### MACRO-GPT-START-SEC-CODE-AC
- `name`: "GPT_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CODE_AC`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-GPT-START-SEC-CONFIG-DATA-16
- `name`: "GPT_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-GPT-START-SEC-CONFIG-DATA-32
- `name`: "GPT_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-GPT-START-SEC-CONFIG-DATA-8
- `name`: "GPT_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-GPT-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "GPT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-GPT-START-SEC-CONST-16
- `name`: "GPT_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONST_16`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONST_16"
- `aliases`: []

### MACRO-GPT-START-SEC-CONST-32
- `name`: "GPT_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONST_32`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONST_32"
- `aliases`: []

### MACRO-GPT-START-SEC-CONST-8
- `name`: "GPT_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONST_8`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONST_8"
- `aliases`: []

### MACRO-GPT-START-SEC-CONST-BOOLEAN
- `name`: "GPT_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-GPT-START-SEC-VAR-NO-INIT-16
- `name`: "GPT_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-GPT-START-SEC-VAR-NO-INIT-32
- `name`: "GPT_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-GPT-START-SEC-VAR-NO-INIT-8
- `name`: "GPT_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-GPT-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "GPT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CODE
- `name`: "GPT_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CODE`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CODE"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CODE-AC
- `name`: "GPT_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONFIG-DATA-16
- `name`: "GPT_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONFIG-DATA-32
- `name`: "GPT_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONFIG-DATA-8
- `name`: "GPT_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONST-16
- `name`: "GPT_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONST_16`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONST-32
- `name`: "GPT_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONST_32`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONST-8
- `name`: "GPT_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONST_8`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-GPT-STOP-SEC-CONST-BOOLEAN
- `name`: "GPT_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-GPT-STOP-SEC-VAR-NO-INIT-16
- `name`: "GPT_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-GPT-STOP-SEC-VAR-NO-INIT-32
- `name`: "GPT_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-GPT-STOP-SEC-VAR-NO-INIT-8
- `name`: "GPT_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-GPT-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "GPT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `GPT_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-GPT-E-ALREADY-INITIALIZED
- `name`: "GPT_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p13`: "GPT_E_ALREADY_INITIALIZED;"
- `aliases`: []

### MACRO-GPT-E-INIT-FAILED
- `name`: "GPT_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_INIT_FAILED`."
- `anchors`:
  - `p13`: "GPT_E_INIT_FAILED"
- `aliases`: []

### MACRO-GPT-E-PARAM-MODE
- `name`: "GPT_E_PARAM_MODE"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_PARAM_MODE`."
- `anchors`:
  - `p13`: "GPT_E_PARAM_MODE"
- `aliases`: []

### MACRO-GPT-E-PARAM-PREDEF-TIMER
- `name`: "GPT_E_PARAM_PREDEF_TIMER"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `GPT_E_PARAM_PREDEF_TIMER`."
- `anchors`:
  - `p13`: "GPT_E_PARAM_PREDEF_TIMER"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-RTC-ISR
- `name`: "RTC_ISR"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `RTC_ISR`."
- `anchors`:
  - `p10`: "ISR(RTC_ISR) : exclusive area 28"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p16`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p16`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to"
- `aliases`: []

### MEM-GPT-START-SEC-VAR
- `name`: "GPT_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR
- `name`: "GPT_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-GPT-START-SEC
- `name`: "GPT_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-GPT-START-SEC-CONST
- `name`: "GPT_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_CONST_`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-GPT-START-SEC-CONST-UNSPECIFIED
- `name`: "GPT_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p8`: "GPT_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-GPT-START-SEC-RAMCODE
- `name`: "GPT_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_RAMCODE`."
- `anchors`:
  - `p8`: "GPT_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-INIT-16
- `name`: "GPT_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p9`: "GPT_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-INIT-32
- `name`: "GPT_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p9`: "GPT_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-INIT-8
- `name`: "GPT_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-INIT-BOOLEAN
- `name`: "GPT_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "GPT_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p9`: "GPT_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-NO-INIT
- `name`: "GPT_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-GPT-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "GPT_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-GPT-STOP-SEC
- `name`: "GPT_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-GPT-STOP-SEC-CONST
- `name`: "GPT_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_CONST_`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-GPT-STOP-SEC-CONST-UNSPECIFIED
- `name`: "GPT_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-GPT-STOP-SEC-RAMCODE
- `name`: "GPT_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-INIT-16
- `name`: "GPT_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p9`: "GPT_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-INIT-32
- `name`: "GPT_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p9`: "GPT_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-INIT-8
- `name`: "GPT_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "GPT_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "GPT_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p9`: "GPT_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-NO-INIT
- `name`: "GPT_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-GPT-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "GPT_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-GPT-CFG-H
- `name`: "Gpt_Cfg.h"
- `type`: `file`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "file index entry for `Gpt_Cfg.h`."
- `anchors`:
  - `p16`: "Gpt_Cfg.h. User need implement the notification in any file which include Gpt_Cfg.h."
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

### FILE-GPT-AONTIMER-C
- `name`: "Gpt_Aontimer.c"
- `type`: `file`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "file index entry for `Gpt_Aontimer.c`."
- `anchors`:
  - `p10`: "Gpt_Aontimer.c:"
- `aliases`: []

### FILE-GPT-FCPIT-C
- `name`: "Gpt_Fcpit.c"
- `type`: `file`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "file index entry for `Gpt_Fcpit.c`."
- `anchors`:
  - `p10`: "Gpt_Fcpit.c:"
- `aliases`: []

### FILE-GPT-FTU-C
- `name`: "Gpt_Ftu.c"
- `type`: `file`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "file index entry for `Gpt_Ftu.c`."
- `anchors`:
  - `p10`: "Gpt_Ftu.c:"
- `aliases`: []

### FILE-GPT-RTC-C
- `name`: "Gpt_Rtc.c"
- `type`: `file`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "file index entry for `Gpt_Rtc.c`."
- `anchors`:
  - `p10`: "Gpt_Rtc.c:"
- `aliases`: []

### FILE-GPT-TSTMP-C
- `name`: "Gpt_Tstmp.c"
- `type`: `file`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "file index entry for `Gpt_Tstmp.c`."
- `anchors`:
  - `p11`: "Gpt_Tstmp.c:"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p16`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-GPT-H
- `name`: "SchM_Gpt.h"
- `type`: `file`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "file index entry for `SchM_Gpt.h`."
- `anchors`:
  - `p7`: "SchM_Gpt.h"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-COMMON-MEMMAP-H
- `name`: "_MCAL/Src/Common/include/Common_MemMap.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Common_MemMap.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Common_MemMap.h"
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
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Common/include/arm_cortex_asm.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/arm_cortex_asm.h"
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

### FILE-MCAL-SRC-GPT-SRC-GPT-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-SRC-GPT-AONTIMER-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt_Aontimer.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt_Aontimer.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Aontimer.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-SRC-GPT-FCPIT-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt_Fcpit.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt_Fcpit.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Fcpit.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-SRC-GPT-FTU-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt_Ftu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt_Ftu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Ftu.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-SRC-GPT-HW-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-SRC-GPT-RTC-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt_Rtc.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt_Rtc.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Rtc.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-SRC-GPT-TSTMP-C
- `name`: "_MCAL/Src/Gpt/Src/Gpt_Tstmp.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/Src/Gpt_Tstmp.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Tstmp.c"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-H
- `name`: "_MCAL/Src/Gpt/include/Gpt.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-AONTIMER-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Aontimer.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Aontimer.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Aontimer.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-AONTIMER-REGOPS-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Aontimer_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Aontimer_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Aontimer_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-AONTIMER-TYPES-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Aontimer_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Aontimer_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Aontimer_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-FCPIT-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Fcpit.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Fcpit.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Fcpit.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-FCPIT-REGOPS-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Fcpit_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-FCPIT-TYPES-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-FTU-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Ftu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Ftu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Ftu.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-FTU-REGOPS-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Ftu_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Ftu_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Ftu_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-FTU-TYPES-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Ftu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Ftu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Ftu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-HW-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-HW-IRQ-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Hw_Irq.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Hw_Irq.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Hw_Irq.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-IRQ-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Irq.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Irq.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Irq.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-MEMMAP-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-RTC-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Rtc.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Rtc.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-RTC-REG-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Rtc_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Rtc_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-RTC-REGOPS-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Rtc_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Rtc_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-RTC-TYPES-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Rtc_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Rtc_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-TSTMP-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Tstmp.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Tstmp.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-TSTMP-REGOPS-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-TSTMP-TYPES-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_Types.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_Tstmp_Types.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-GPT-INCLUDE-GPT-VERSION-H
- `name`: "_MCAL/Src/Gpt/include/Gpt_version.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Gpt/include/Gpt_version.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-GPT-CFG-H
- `name`: "_MCAL_generate/include/Gpt_Cfg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/include/Gpt_Cfg.h`."
- `anchors`:
  - `p6`: "_MCAL_generate/include/Gpt_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-GPT-CFG-C
- `name`: "_MCAL_generate/src/Gpt_Cfg.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/src/Gpt_Cfg.c`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Gpt_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-GPT-PBCFG-C
- `name`: "_MCAL_generate/src/Gpt_PBcfg.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/src/Gpt_PBcfg.c`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Gpt_PBcfg.c"
- `aliases`: []

### TERM-GPT
- `name`: "GPT"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `GPT`."
- `anchors`:
  - `p1`: "GPT"
  - `p2`: "GPT"
  - `p3`: "GPT"
  - `p4`: "GPT"
  - `p5`: "GPT"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,13`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p13`: "Det"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,5,6,7`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p5`: "MCAL"
  - `p6`: "MCAL"
  - `p7`: "MCAL"
- `aliases`: []

### TERM-GPT-TSTMP
- `name`: "Gpt_Tstmp"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6,11`
- `brief`: "term index entry for `Gpt_Tstmp`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Tstmp.c"
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp.h"
  - `p11`: "Gpt_Tstmp.c:"
- `aliases`: []

### TERM-GPT-CFG
- `name`: "Gpt_Cfg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,16`
- `brief`: "term index entry for `Gpt_Cfg`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Gpt_Cfg.c"
  - `p16`: "Gpt_Cfg.h. User need implement the notification in any file which include Gpt_Cfg.h."
- `aliases`: []

### TERM-GPT-AONTIMER
- `name`: "Gpt_Aontimer"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,10`
- `brief`: "term index entry for `Gpt_Aontimer`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Aontimer.c"
  - `p10`: "Gpt_Aontimer.c:"
- `aliases`: []

### TERM-GPT-FCPIT
- `name`: "Gpt_Fcpit"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,10`
- `brief`: "term index entry for `Gpt_Fcpit`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Fcpit.c"
  - `p10`: "Gpt_Fcpit.c:"
- `aliases`: []

### TERM-GPT-FTU
- `name`: "Gpt_Ftu"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,10`
- `brief`: "term index entry for `Gpt_Ftu`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Ftu.c"
  - `p10`: "Gpt_Ftu.c:"
- `aliases`: []

### TERM-GPT-RTC
- `name`: "Gpt_Rtc"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,10`
- `brief`: "term index entry for `Gpt_Rtc`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Rtc.c"
  - `p10`: "Gpt_Rtc.c:"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,14`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p14`: "Dem"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,7`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p5`: "Rte"
  - `p7`: "Rte"
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

### TERM-GPT-HW
- `name`: "Gpt_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/Src/Gpt_Hw.c"
- `aliases`: []

### TERM-AONTIMER-IRQHANDLER
- `name`: "AONTIMER_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `AONTIMER_IRQHandler`."
- `anchors`:
  - `p12`: "AONTIMER_IRQHandler"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p16`: "AUTOSAR"
- `aliases`: []

### TERM-AONTIMER-COMMON
- `name`: "Aontimer_Common"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Aontimer_Common`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Aontimer_Common.c"
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

### TERM-COMMON-MEMMAP
- `name`: "Common_MemMap"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Common_MemMap`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Common_MemMap.h"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p7`: "EB tresos"
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p7`: "Copy the GPT module(_MCAL/EB_Plugins/eclipse/plugins/Gpt) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-FCPIT0-IRQNHANDLER
- `name`: "FCPIT0_IRQnHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FCPIT0_IRQnHandler`."
- `anchors`:
  - `p12`: "FCPIT0_IRQnHandler"
- `aliases`: []

### TERM-FCPIT1-IRQNHANDLER
- `name`: "FCPIT1_IRQnHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FCPIT1_IRQnHandler`."
- `anchors`:
  - `p12`: "FCPIT1_IRQnHandler"
- `aliases`: []

### TERM-FTU10-IRQHANDLER
- `name`: "FTU10_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU10_IRQHandler`."
- `anchors`:
  - `p12`: "FTU10_IRQHandler"
- `aliases`: []

### TERM-FTU11-IRQHANDLER
- `name`: "FTU11_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU11_IRQHandler`."
- `anchors`:
  - `p12`: "FTU11_IRQHandler"
- `aliases`: []

### TERM-FTU1-IRQHANDLER
- `name`: "FTU1_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU1_IRQHandler`."
- `anchors`:
  - `p12`: "FTU1_IRQHandler"
- `aliases`: []

### TERM-FTU2-IRQHANDLER
- `name`: "FTU2_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU2_IRQHandler`."
- `anchors`:
  - `p12`: "FTU2_IRQHandler"
- `aliases`: []

### TERM-FTU3-IRQHANDLER
- `name`: "FTU3_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU3_IRQHandler`."
- `anchors`:
  - `p12`: "FTU3_IRQHandler"
- `aliases`: []

### TERM-FTU4-IRQHANDLER
- `name`: "FTU4_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU4_IRQHandler`."
- `anchors`:
  - `p12`: "FTU4_IRQHandler"
- `aliases`: []

### TERM-FTU5-IRQHANDLER
- `name`: "FTU5_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU5_IRQHandler`."
- `anchors`:
  - `p12`: "FTU5_IRQHandler"
- `aliases`: []

### TERM-FTU6-IRQHANDLER
- `name`: "FTU6_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU6_IRQHandler`."
- `anchors`:
  - `p12`: "FTU6_IRQHandler"
- `aliases`: []

### TERM-FTU7-IRQHANDLER
- `name`: "FTU7_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU7_IRQHandler`."
- `anchors`:
  - `p12`: "FTU7_IRQHandler"
- `aliases`: []

### TERM-FTU8-IRQHANDLER
- `name`: "FTU8_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU8_IRQHandler`."
- `anchors`:
  - `p12`: "FTU8_IRQHandler"
- `aliases`: []

### TERM-FTU9-IRQHANDLER
- `name`: "FTU9_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `FTU9_IRQHandler`."
- `anchors`:
  - `p12`: "FTU9_IRQHandler"
- `aliases`: []

### TERM-FCPIT-REG
- `name`: "Fcpit_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Fcpit_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Fcpit_Reg.h"
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

### TERM-GENERAL-PURPOSE-TIMER
- `name`: "General Purpose Timer"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `General Purpose Timer`."
- `anchors`:
  - `p6`: "General Purpose Timer"
- `aliases`: []

### TERM-GPT-AONTIMER-REGOPS
- `name`: "Gpt_Aontimer_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Aontimer_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Aontimer_RegOps.h"
- `aliases`: []

### TERM-GPT-AONTIMER-TYPES
- `name`: "Gpt_Aontimer_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Aontimer_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Aontimer_Types.h"
- `aliases`: []

### TERM-GPT-CHANGENEXTTIMEOUTVALUE
- `name`: "Gpt_ChangeNextTimeoutValue"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_ChangeNextTimeoutValue`."
- `anchors`:
  - `p13`: "Gpt_ChangeNextTimeoutValue"
- `aliases`: []

### TERM-GPT-DEINIT
- `name`: "Gpt_DeInit"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_DeInit`."
- `anchors`:
  - `p13`: "Gpt_DeInit"
- `aliases`: []

### TERM-GPT-FCPIT-REGOPS
- `name`: "Gpt_Fcpit_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Fcpit_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_RegOps.h"
- `aliases`: []

### TERM-GPT-FCPIT-TYPES
- `name`: "Gpt_Fcpit_Types"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Gpt_Fcpit_Types`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Fcpit_Types.h"
- `aliases`: []

### TERM-GPT-FTU-REGOPS
- `name`: "Gpt_Ftu_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Ftu_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Ftu_RegOps.h"
- `aliases`: []

### TERM-GPT-FTU-TYPES
- `name`: "Gpt_Ftu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Ftu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Ftu_Types.h"
- `aliases`: []

### TERM-GPT-GETPREDEFTIMERVALUE
- `name`: "Gpt_GetPredefTimerValue"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_GetPredefTimerValue`."
- `anchors`:
  - `p13`: "Gpt_GetPredefTimerValue"
- `aliases`: []

### TERM-GPT-GETTIMEELAPSED
- `name`: "Gpt_GetTimeElapsed"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_GetTimeElapsed`."
- `anchors`:
  - `p13`: "Gpt_GetTimeElapsed"
- `aliases`: []

### TERM-GPT-GETTIMEREMAINING
- `name`: "Gpt_GetTimeRemaining"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_GetTimeRemaining`."
- `anchors`:
  - `p13`: "Gpt_GetTimeRemaining"
- `aliases`: []

### TERM-GPT-GETVERSIONINFO
- `name`: "Gpt_GetVersionInfo"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_GetVersionInfo`."
- `anchors`:
  - `p13`: "Gpt_GetVersionInfo"
- `aliases`: []

### TERM-GPT-HW-IRQ
- `name`: "Gpt_Hw_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Hw_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Hw_Irq.h"
- `aliases`: []

### TERM-GPT-INIT
- `name`: "Gpt_Init"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_Init`."
- `anchors`:
  - `p13`: "Gpt_Init"
- `aliases`: []

### TERM-GPT-IRQ
- `name`: "Gpt_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Irq.h"
- `aliases`: []

### TERM-GPT-LL-AONTIMER-STARTPREDEFTIMER
- `name`: "Gpt_LL_Aontimer_StartPredefTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Aontimer_StartPredefTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Aontimer_StartPredefTimer : exclusive area 4"
- `aliases`: []

### TERM-GPT-LL-AONTIMER-STARTTIMER
- `name`: "Gpt_LL_Aontimer_StartTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Aontimer_StartTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Aontimer_StartTimer : exclusive area 0"
- `aliases`: []

### TERM-GPT-LL-AONTIMER-STOPPREDEFTIMER
- `name`: "Gpt_LL_Aontimer_StopPredefTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Aontimer_StopPredefTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Aontimer_StopPredefTimer : exclusive area 5"
- `aliases`: []

### TERM-GPT-LL-AONTIMER-STOPTIMER
- `name`: "Gpt_LL_Aontimer_StopTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Aontimer_StopTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Aontimer_StopTimer : exclusive area 1"
- `aliases`: []

### TERM-GPT-LL-FCPIT-STOPTIMER
- `name`: "Gpt_LL_FCPit_StopTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_FCPit_StopTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_FCPit_StopTimer : exclusive area 14"
- `aliases`: []

### TERM-GPT-LL-FTU-GETTIMEELAPSED
- `name`: "Gpt_LL_Ftu_GetTimeElapsed"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Ftu_GetTimeElapsed`."
- `anchors`:
  - `p10`: "Gpt_LL_Ftu_GetTimeElapsed : exclusive area 23"
- `aliases`: []

### TERM-GPT-LL-FTU-STARTPREDEFTIMER
- `name`: "Gpt_LL_Ftu_StartPredefTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Ftu_StartPredefTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Ftu_StartPredefTimer : exclusive area 21"
- `aliases`: []

### TERM-GPT-LL-FTU-STARTTIMER
- `name`: "Gpt_LL_Ftu_StartTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Ftu_StartTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Ftu_StartTimer : exclusive area 18"
- `aliases`: []

### TERM-GPT-LL-FTU-STOPPREDEFTIMER
- `name`: "Gpt_LL_Ftu_StopPredefTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Ftu_StopPredefTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Ftu_StopPredefTimer : exclusive area 22"
- `aliases`: []

### TERM-GPT-LL-FTU-STOPTIMER
- `name`: "Gpt_LL_Ftu_StopTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Ftu_StopTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Ftu_StopTimer : exclusive area 19"
- `aliases`: []

### TERM-GPT-LL-RTC-STARTTIMER
- `name`: "Gpt_LL_Rtc_StartTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Rtc_StartTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Rtc_StartTimer : exclusive area 24"
- `aliases`: []

### TERM-GPT-LL-RTC-STOPTIMER
- `name`: "Gpt_LL_Rtc_StopTimer"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Gpt_LL_Rtc_StopTimer`."
- `anchors`:
  - `p10`: "Gpt_LL_Rtc_StopTimer : exclusive area 25"
- `aliases`: []

### TERM-GPT-LL-TSTMP-GETTIMEELAPSED
- `name`: "Gpt_LL_Tstmp_GetTimeElapsed"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Gpt_LL_Tstmp_GetTimeElapsed`."
- `anchors`:
  - `p11`: "Gpt_LL_Tstmp_GetTimeElapsed : exclusive area 32"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STARTPREDEFTIMER
- `name`: "Gpt_LL_Tstmp_StartPredefTimer"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StartPredefTimer`."
- `anchors`:
  - `p11`: "Gpt_LL_Tstmp_StartPredefTimer : exclusive area 33"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STARTTIMER
- `name`: "Gpt_LL_Tstmp_StartTimer"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StartTimer`."
- `anchors`:
  - `p11`: "Gpt_LL_Tstmp_StartTimer : exclusive area 30"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STOPPREDEFTIMER
- `name`: "Gpt_LL_Tstmp_StopPredefTimer"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StopPredefTimer`."
- `anchors`:
  - `p11`: "Gpt_LL_Tstmp_StopPredefTimer : exclusive area 34"
- `aliases`: []

### TERM-GPT-LL-TSTMP-STOPTIMER
- `name`: "Gpt_LL_Tstmp_StopTimer"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Gpt_LL_Tstmp_StopTimer`."
- `anchors`:
  - `p11`: "Gpt_LL_Tstmp_StopTimer : exclusive area 31"
- `aliases`: []

### TERM-GPT-MEMMAP
- `name`: "Gpt_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_MemMap.h"
- `aliases`: []

### TERM-GPT-PBCFG
- `name`: "Gpt_PBcfg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Gpt_PBcfg`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Gpt_PBcfg.c"
- `aliases`: []

### TERM-GPT-RTC-REG
- `name`: "Gpt_Rtc_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Rtc_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc_Reg.h"
- `aliases`: []

### TERM-GPT-RTC-REGOPS
- `name`: "Gpt_Rtc_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Rtc_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc_RegOps.h"
- `aliases`: []

### TERM-GPT-RTC-TYPES
- `name`: "Gpt_Rtc_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Gpt_Rtc_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Gpt/include/Gpt_Rtc_Types.h"
- `aliases`: []

### TERM-GPT-SETMODE
- `name`: "Gpt_SetMode"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_SetMode`."
- `anchors`:
  - `p13`: "Gpt_SetMode"
- `aliases`: []

### TERM-GPT-STARTGLOBALTIME
- `name`: "Gpt_StartGlobalTime"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_StartGlobalTime`."
- `anchors`:
  - `p13`: "Gpt_StartGlobalTime"
- `aliases`: []

### TERM-GPT-STARTTIMER
- `name`: "Gpt_StartTimer"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_StartTimer`."
- `anchors`:
  - `p13`: "Gpt_StartTimer"
- `aliases`: []

### TERM-GPT-STOPGLOBALTIME
- `name`: "Gpt_StopGlobalTime"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_StopGlobalTime`."
- `anchors`:
  - `p13`: "Gpt_StopGlobalTime"
- `aliases`: []

### TERM-GPT-STOPTIMER
- `name`: "Gpt_StopTimer"
- `type`: `term`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "term index entry for `Gpt_StopTimer`."
- `anchors`:
  - `p13`: "Gpt_StopTimer"
- `aliases`: []

### TERM-GPT-TSTMP-REGOPS
- `name`: "Gpt_Tstmp_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Gpt_Tstmp_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h"
- `aliases`: []

### TERM-GPT-TSTMP-TYPES
- `name`: "Gpt_Tstmp_Types"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Gpt_Tstmp_Types`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_Types.h"
- `aliases`: []

### TERM-GPT-VERSION
- `name`: "Gpt_version"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Gpt_version`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_version.h"
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

### TERM-RTC-IRQHANDLER
- `name`: "RTC_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `RTC_IRQHandler`."
- `anchors`:
  - `p12`: "RTC_IRQHandler"
- `aliases`: []

### TERM-SCHM-GPT
- `name`: "SchM_Gpt"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SchM_Gpt`."
- `anchors`:
  - `p7`: "SchM_Gpt.h"
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

### TERM-TSTMP0-IRQHANDLER
- `name`: "TSTMP0_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `TSTMP0_IRQHandler`."
- `anchors`:
  - `p12`: "TSTMP0_IRQHandler"
- `aliases`: []

### TERM-TSTMP1-IRQHANDLER
- `name`: "TSTMP1_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `TSTMP1_IRQHandler`."
- `anchors`:
  - `p12`: "TSTMP1_IRQHandler"
- `aliases`: []

### TERM-TSTMP2-IRQHANDLER
- `name`: "TSTMP2_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `TSTMP2_IRQHandler`."
- `anchors`:
  - `p12`: "TSTMP2_IRQHandler"
- `aliases`: []

### TERM-TSTMP3-IRQHANDLER
- `name`: "TSTMP3_IRQHandler"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `TSTMP3_IRQHandler`."
- `anchors`:
  - `p12`: "TSTMP3_IRQHandler"
- `aliases`: []

### TERM-TSTMP-REG
- `name`: "Tstmp_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Tstmp_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Gpt/include/Gpt_Tstmp_RegOps.h"
- `aliases`: []

## 9. Search Aliases

### ALIAS-GPT
- `canonical`: "GPT"
- `aliases`: ["General Purpose Timer", "通用定时器", "GPT module", "GPT driver", "GPT User Manual", "GPT Integration Manual", "Gpt", "Gpt_StartTimer", "Gpt_StopTimer"]
- `related_ids`: ["TERM-GPT"]

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
- `aliases`: ["Flexible Timer Unit", "Gpt_Ftu", "timer unit", "灵活定时器"]
- `related_ids`: []

### ALIAS-AONTIMER
- `canonical`: "AONTIMER"
- `aliases`: ["Always-on Timer", "Gpt_Aontimer", "always on timer"]
- `related_ids`: []

### ALIAS-FCPIT
- `canonical`: "FCPIT"
- `aliases`: ["FC Programmable Interrupt Timer", "Gpt_Fcpit"]
- `related_ids`: []

### ALIAS-TSTMP
- `canonical`: "TSTMP"
- `aliases`: ["timestamp timer", "Gpt_Tstmp", "Timer Stamp"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between GPT_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `GPT_Integration_Manual.pdf`
- `source_pdf_sha256`: `59b83c14824bf87181245a87f43330d351ea93bed001f96684eee1300214f82d`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `64`
- `technical_missing_terms_added`: `5`
- `pages_with_added_terms`: `16`
- `supplemented_missing_token_count`: `64`
- `supplemented_missing_technical_token_count`: `5`
- `supplemented_physical_pages_count`: `16`
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
  - "Flagchip"
  - "MCU"
  - "Mcu"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "clock"
  - "common"
  - "detection"
  - "enabling"
  - "first"
  - "initialization"
  - "initialize"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "parts"
  - "point"
  - "protect"
  - "provides"
  - "reference"
  - "some"
  - "unprotect"
  - "use"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
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

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
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

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "startup"

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
  - "AONTIMER0"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "alarm"

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

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "define"
  - "example"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
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
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17`
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
- `physical_pages`: `3,5,6,7,12,13,15`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0007-001", "TBL-0012-001", "TBL-0013-001", "TBL-0015-001"]
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
- `pdf_page_count`: `17`
- `indexed_physical_pages_count`: `17`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `25`
- `table_index_count`: `10`
- `figure_index_count`: `0`
- `symbol_index_count`: `253`
- `alias_index_count`: `11`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `59b83c14824bf87181245a87f43330d351ea93bed001f96684eee1300214f82d`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `64`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->