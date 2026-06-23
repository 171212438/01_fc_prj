---
manifest_schema_version: "1.1"
source_pdf: "MCU_Integration_Manual.pdf"
source_pdf_sha256: "be5480190c7239c1b4078e0a501e4c27959e4e51c63557b37e4e6f2439a8f9a9"
source_pdf_size_bytes: 372557
pdf_page_count: 14
generated_at: "2026-06-19T13:25:49Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.3"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: MCU_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `MCU_Integration_Manual.pdf`
- `source_pdf_sha256`: `be5480190c7239c1b4078e0a501e4c27959e4e51c63557b37e4e6f2439a8f9a9`
- `source_pdf_size_bytes`: `372557`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.3`
- `visible_cover_title`: `FC7xxx MCU Integration Manual`
- `visible_cover_revision`: `Rev.0.3`
- `revision_history_latest_row`: `0.3 / 2025/10/10 / Update for adding more platform support`
- `generated_at`: `2026-06-19T13:25:49Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `25`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL MCU module - Integration Manual"
- `module_scope`: "MCU module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Interrupt Service Routine (ISR)", "Chapter 5 Error Report", "Chapter 6 Function Calls", "Chapter 7 Other Requirements", "Chapter 8 Integration Steps"]
- `key_terms`: ["MCU", "Microcontroller Unit Driver", "AUTOSAR_SWS_MCUDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Mcu", "SCG", "PCC", "CMU", "CSC"]
- `summary`: "This 14-page integration manual indexes MCU content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["MCU", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx MCU Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["MCU", "FC7xxx", "MCAL", "adding", "more", "platform", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["MCU", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["MCU", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["MCU", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1 Introduction"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Mcu", "Src", "include", "MCU", "DEM", "Mcu_Pmc", "Mcu_Cmu", "ins"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mcu", "Src", "MCU", "include", "DEM", "Mcu_Hw", "Mcu_Wku", "Mcu_Scm"]
- `anchor`: "2.1 Dependencies on Other Modules"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mcu", "Src", "MCU", "include", "DEM", "Mcu_Hw", "Mcu_Wku", "Mcu_Scm"]
- `anchor`: "2.2 Files Required for Compile"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Mcu", "MCU", "include", "Src", "ins", "tresos", "Mcu_Cmu", "Mcu_Pmc"]
- `anchor`: "2.3 Add Plug-ins"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["MCU", "These", "UNSPECIFIED", "MCU_START_SEC_VAR", "MCU_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["MCU", "These", "UNSPECIFIED", "MCU_START_SEC_VAR", "MCU_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1 Sections in Memory Map"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 4 Interrupt Service Routine (ISR)"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["MCU", "RGM", "SCG", "PMC", "FC7xxx", "Interrupt", "ISR", "IRQ"]
- `anchor`: "Chapter 4 Interrupt Service Routine (ISR)"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Error Report"
- `path`: "Chapter 5 Error Report"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MCU", "MCU_E_UNINIT", "MCU_E_PARAM_POINTER", "MCU_E_PARAM_CLOCK", "Mcu_InitClock", "FC7xxx", "Error", "Mcu_Init"]
- `anchor`: "Chapter 5 Error Report"

### SEC-005-001
- `source_number`: `5.1`
- `title`: "Det"
- `path`: "Chapter 5 Error Report / 5.1 Det"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MCU", "MCU_E_UNINIT", "MCU_E_PARAM_POINTER", "MCU_E_PARAM_CLOCK", "Mcu_InitClock", "FC7xxx", "Error", "Mcu_Init"]
- `anchor`: "5.1 Det"

### SEC-005-002
- `source_number`: `5.2`
- `title`: "Dem"
- `path`: "Chapter 5 Error Report / 5.2 Dem"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MCU", "MCU_E_UNINIT", "MCU_E_PARAM_POINTER", "MCU_E_PARAM_CLOCK", "Mcu_InitClock", "FC7xxx", "Error", "Mcu_Init"]
- `anchor`: "5.2 Dem"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Function Calls"
- `path`: "Chapter 6 Function Calls"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called"]
- `anchor`: "Chapter 6 Function Calls"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called"]
- `anchor`: "6.1 Function Calls during Startup"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 6 Function Calls / 6.2 Function Calls during Shutdown"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called"]
- `anchor`: "6.2 Function Calls during Shutdown"

### SEC-006-003
- `source_number`: `6.3`
- `title`: "Function Calls during Sleep"
- `path`: "Chapter 6 Function Calls / 6.3 Function Calls during Sleep"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called"]
- `anchor`: "6.3 Function Calls during Sleep"

### SEC-006-004
- `source_number`: `6.4`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 6 Function Calls / 6.4 Function Calls during Wake-up"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called"]
- `anchor`: "6.4 Function Calls during Wake-up"

### SEC-006-005
- `source_number`: `6.5`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 6 Function Calls / 6.5 Function Calls during Runtime"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called"]
- `anchor`: "6.5 Function Calls during Runtime"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Other Requirements"
- `path`: "Chapter 7 Other Requirements"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["MCU", "NULL_PTR", "CMU_ErrorNotify", "void", "FC7xxx", "AUTOSAR_OS_NOT_USED", "ISR", "CMU_pInterruptNotify"]
- `anchor`: "Chapter 7 Other Requirements"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["MCU", "NULL_PTR", "void", "CMU_ErrorNotify", "ISR", "CMU_pInterruptNotify", "MCU_CMU_NOTIFICATION", "FC7xxx"]
- `anchor`: "7.1 Notification, Callback, Callout"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Macros"
- `path`: "Chapter 7 Other Requirements / 7.2 Macros"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["MCU", "NULL_PTR", "void", "CMU_ErrorNotify", "ISR", "CMU_pInterruptNotify", "MCU_CMU_NOTIFICATION", "FC7xxx"]
- `anchor`: "7.2 Macros"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Inline assembly language"
- `path`: "Chapter 7 Other Requirements / 7.3 Inline assembly language"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MCU", "FC7xxx", "CMU_ErrorNotify", "CMU_INSTANCE_0", "EXIT_INTERRUPT", "AUTOSAR_OS_NOT_USED", "Mcu_Smc", "assembly"]
- `anchor`: "7.3 Inline assembly language"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Integration Steps"
- `path`: "Chapter 8 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["MCU", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
- `anchor`: "Chapter 8 Integration Steps"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["FC7xxx MCU Integration", "Manual"]

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
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for the MCU module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "Module configuration dependency", "DEM: This module provides MCU DEM event parameter reference. For EB BSW we can easily add link to D…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["_MCAL/Src/Mcu/include/Mcu_Smc.h", "_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h", "_MCAL/Src/Mcu/include/Mcu_Cmu _Reg.h", "_MCAL/Src/Mcu/include/Mcu_Cmu.h"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 3 Memory", "3.1 Sections in Memory Map", "Section Name", "Section Type"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table"]
- `anchors`: ["Section Name", "Section Type", "Description", "MCU_START_SEC_VAR _INIT_ UNSPECIFIED"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 4 Interrupt Service Routine (ISR)", "Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 5 Error Report", "5.1 Det", "Function Name", "Error Type"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 6 Function Calls", "6.1 Function Calls during Startup", "The APIs that need to be called are:", "void Mcu_Init(Mcu_ConfigType *pConfigPtr)"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Other Requirements", "7.1 Notification, Callback, Callout", "Notification", "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", the user shall impl…"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 7 Other Requirements / 7.3 Inline assembly language"
- `content_types`: ["text", "api"]
- `anchors`: ["CMU_ErrorNotify(CMU_INSTANCE_0);", "}", "EXIT_INTERRUPT();", "}"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 8 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Integration Steps", "1)", "Configure the MCU module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx MCU Integration; Manual"
- `keywords`: ["MCU", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "FC7xxx MCU Integration"
  - `p1`: "Manual"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx MCU Integration Manual; Revision History; 0.1"
- `keywords`: ["MCU", "FC7xxx", "MCAL", "adding", "more", "platform", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx MCU Integration Manual; Table of Contents; Revision History ..................................................................................................................................................... 2"
- `keywords`: ["MCU", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx MCU Integration Manual; Chapter 1 Introduction; 1.1 Introduction"
- `keywords`: ["MCU", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1 Introduction"
  - `p4`: "This integration manual describes the integration requirements for the MCU module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx MCU Integration Manual; Chapter 2 Building; 2.1 Dependencies on Other Modules"
- `keywords`: ["Mcu", "Src", "MCU", "include", "DEM", "Mcu_Hw", "Mcu_Wku", "Mcu_Scm", "Mcu_Csc", "FC7xxx"]
- `anchors`:
  - `p5`: "Chapter 2 Building"
  - `p5`: "2.1 Dependencies on Other Modules"
  - `p5`: "Module configuration dependency"
  - `p5`: "DEM: This module provides MCU DEM event parameter reference. For EB BSW we can easily add link to DEM"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx MCU Integration Manual; _MCAL/Src/Mcu/include/Mcu_Smc.h; _MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h"
- `keywords`: ["Mcu", "MCU", "include", "Src", "ins", "tresos", "Mcu_Cmu", "Mcu_Pmc", "Mcu_Cfg", "plug"]
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Smc.h"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu _Reg.h"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx MCU Integration Manual; Chapter 3 Memory; 3.1 Sections in Memory Map"
- `keywords`: ["MCU", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
- `anchors`:
  - `p7`: "Chapter 3 Memory"
  - `p7`: "3.1 Sections in Memory Map"
  - `p7`: "Section Name"
  - `p7`: "Section Type"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx MCU Integration Manual; Section Name; Section Type"
- `keywords`: ["MCU", "UNSPECIFIED", "FC7xxx", "MCU_START_SEC_VAR", "MCU_STOP_SEC_VAR", "Integration"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "MCU_START_SEC_VAR _INIT_ UNSPECIFIED"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 4 Interrupt Service Routine (ISR): FC7xxx MCU Integration Manual; Chapter 4 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["MCU", "RGM", "SCG", "PMC", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "CMU0"]
- `anchors`:
  - `p9`: "Chapter 4 Interrupt Service Routine (ISR)"
  - `p9`: "Instance"
  - `p9`: "Interrupt Name"
  - `p9`: "IRQ Number (NVIC Interrupt ID)"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 5 Error Report / 5.1 Det: FC7xxx MCU Integration Manual; Chapter 5 Error Report; 5.1 Det"
- `keywords`: ["MCU", "MCU_E_UNINIT", "MCU_E_PARAM_POINTER", "MCU_E_PARAM_CLOCK", "Mcu_InitClock", "FC7xxx", "Error", "Mcu_Init", "Mcu_InitRamSection", "MCU_E_PARAM_RAMSECTION"]
- `anchors`:
  - `p10`: "Chapter 5 Error Report"
  - `p10`: "5.1 Det"
  - `p10`: "Function Name"
  - `p10`: "Error Type"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup: FC7xxx MCU Integration Manual; Chapter 6 Function Calls; 6.1 Function Calls during Startup"
- `keywords`: ["CMU", "MCU", "WKU", "Calls", "void", "APIs", "Std_ReturnType", "called", "Mcu_SetMode", "FC7xxx"]
- `anchors`:
  - `p11`: "Chapter 6 Function Calls"
  - `p11`: "6.1 Function Calls during Startup"
  - `p11`: "The APIs that need to be called are:"
  - `p11`: "void Mcu_Init(Mcu_ConfigType *pConfigPtr)"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout: FC7xxx MCU Integration Manual; Chapter 7 Other Requirements; 7.1 Notification, Callback, Callout"
- `keywords`: ["MCU", "NULL_PTR", "void", "CMU_ErrorNotify", "ISR", "CMU_pInterruptNotify", "MCU_CMU_NOTIFICATION", "FC7xxx", "Cmu_Notification", "Pmc_Notification"]
- `anchors`:
  - `p12`: "Chapter 7 Other Requirements"
  - `p12`: "7.1 Notification, Callback, Callout"
  - `p12`: "Notification"
  - `p12`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", the user shall implement the"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Other Requirements / 7.3 Inline assembly language"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 7 Other Requirements / 7.3 Inline assembly language: FC7xxx MCU Integration Manual; CMU_ErrorNotify(CMU_INSTANCE_0);; EXIT_INTERRUPT();"
- `keywords`: ["MCU", "FC7xxx", "CMU_ErrorNotify", "CMU_INSTANCE_0", "EXIT_INTERRUPT", "AUTOSAR_OS_NOT_USED", "Mcu_Smc", "assembly", "Integration", "define"]
- `anchors`:
  - `p13`: "CMU_ErrorNotify(CMU_INSTANCE_0);"
  - `p13`: "}"
  - `p13`: "EXIT_INTERRUPT();"
  - `p13`: "}"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Integration Steps: FC7xxx MCU Integration Manual; Chapter 8 Integration Steps; 1)"
- `keywords`: ["MCU", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p14`: "Chapter 8 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the MCU module and generate configuration files (please refer to Building chapter for details)."
  - `p14`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[36.24, 96.02, 559.2, 169.04]`
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
- `key_fields`: ["Mcu", "Src", "MCU", "include", "DEM"]
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
- `key_fields`: ["Mcu", "MCU", "include", "Src", "ins"]
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
- `caption`: "Sections in Memory Map"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[36.24, 36.84, 559.2, 84.08]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Table-like region on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 4 Interrupt Service Routine (ISR)"
- `bbox`: `[36.24, 98.06, 559.2, 241.4]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
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
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `bbox`: `[36.24, 116.88, 559.2, 449.07]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 10."
- `anchor`: "Table-like region on page 10"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0010-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-002"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `bbox`: `[36.24, 489.96, 559.2, 521.79]`
- `key_fields`: ["Function name", "Error type"]
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
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["CMU", "MCU", "WKU", "Calls", "void"]
- `summary`: "Indexes table-like source content for Table-like content on page 11; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 11"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like content on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `bbox`: `None`
- `key_fields`: ["MCU", "NULL_PTR", "void", "CMU_ErrorNotify", "ISR"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-CMU-ERRORNOTIFY
- `name`: "CMU_ErrorNotify"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "api index entry for `CMU_ErrorNotify`."
- `anchors`:
  - `p12`: "CMU_pInterruptNotify CMU_ErrorNotify = NULL_PTR;"
  - `p13`: "CMU_ErrorNotify(CMU_INSTANCE_0);"
- `aliases`: []

### API-MCU-INITCLOCK
- `name`: "Mcu_InitClock"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_InitClock`."
- `anchors`:
  - `p10`: "Mcu_InitClock"
  - `p11`: "Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting)."
- `aliases`: []

### API-MCU-SETMODE
- `name`: "Mcu_SetMode"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_SetMode`."
- `anchors`:
  - `p10`: "Mcu_SetMode"
  - `p11`: "The Mcu_SetMode API will enable WKU and close the CMU instance when the CMU is not enabled to run in stop or run in"
- `aliases`: []

### API-MCU-DISTRIBUTEPLLCLOCK
- `name`: "Mcu_DistributePllClock"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_DistributePllClock`."
- `anchors`:
  - `p10`: "Mcu_DistributePllClock"
  - `p11`: "Std_ReturnType Mcu_DistributePllClock(void)"
- `aliases`: []

### API-MCU-GETPLLSTATUS
- `name`: "Mcu_GetPllStatus"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_GetPllStatus`."
- `anchors`:
  - `p10`: "Mcu_GetPllStatus"
  - `p11`: "Mcu_PllStatusType Mcu_GetPllStatus(void)"
- `aliases`: []

### API-MCU-INIT
- `name`: "Mcu_Init"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_Init`."
- `anchors`:
  - `p10`: "Mcu_Init"
  - `p11`: "void Mcu_Init(Mcu_ConfigType *pConfigPtr)"
- `aliases`: []

### API-MCU-INITRAMSECTION
- `name`: "Mcu_InitRamSection"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_InitRamSection`."
- `anchors`:
  - `p10`: "Mcu_InitRamSection"
  - `p11`: "Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection) ."
- `aliases`: []

### API-MCU-PERFORMRESET
- `name`: "Mcu_PerformReset"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Mcu_PerformReset`."
- `anchors`:
  - `p10`: "Mcu_PerformReset"
  - `p11`: "void Mcu_PerformReset(void)"
- `aliases`: []

### API-ROUTINE
- `name`: "Routine"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "api index entry for `Routine`."
- `anchors`:
  - `p3`: "Chapter 4 Interrupt Service Routine (ISR) .................................................................................................…"
  - `p9`: "Chapter 4 Interrupt Service Routine (ISR)"
- `aliases`: []

### API-CMU-IRQHANDLER
- `name`: "CMU_IRQHandler"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `CMU_IRQHandler`."
- `anchors`:
  - `p12`: "CMU_IRQHandler(CMU_INSTANCE_0);"
- `aliases`: []

### API-CMU-NOTIFICATION
- `name`: "Cmu_Notification"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `Cmu_Notification`."
- `anchors`:
  - `p12`: "void Cmu_Notification(uint8 eInstance)"
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
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p9`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### API-PMC-NOTIFICATION
- `name`: "Pmc_Notification"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `Pmc_Notification`."
- `anchors`:
  - `p12`: "void Pmc_Notification(void)"
- `aliases`: []

### API-RGM-NOTIFICATION
- `name`: "Rgm_Notification"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `Rgm_Notification`."
- `anchors`:
  - `p12`: "void Rgm_Notification(uint32 u32SRS)"
- `aliases`: []

### API-ASM
- `name`: "__asm"
- `type`: `api`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "api index entry for `__asm`."
- `anchors`:
  - `p13`: "__asm(“wfi”)"
- `aliases`: []

### CFG-CMU-PINTERRUPTNOTIFY
- `name`: "CMU_pInterruptNotify"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `CMU_pInterruptNotify`."
- `anchors`:
  - `p12`: "typedef void (*CMU_pInterruptNotify)(uint8 u8Instance);"
- `aliases`: []

### MACRO-MCU-START-SEC-VAR
- `name`: "MCU_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `MCU_START_SEC_VAR`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "MCU_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-MCU-STOP-SEC-VAR
- `name`: "MCU_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `MCU_STOP_SEC_VAR`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "MCU_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p12`: "AUTOSAR_OS_NOT_USED need defined."
  - `p13`: "Do not define AUTOSAR_OS_NOT_USED."
- `aliases`: []

### MACRO-CMU-INSTANCE-0
- `name`: "CMU_INSTANCE_0"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "macro index entry for `CMU_INSTANCE_0`."
- `anchors`:
  - `p12`: "CMU_IRQHandler(CMU_INSTANCE_0);"
  - `p13`: "CMU_ErrorNotify(CMU_INSTANCE_0);"
- `aliases`: []

### MACRO-MCU-E-UNINIT
- `name`: "MCU_E_UNINIT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_UNINIT`."
- `anchors`:
  - `p10`: "MCU_E_UNINIT;"
- `aliases`: []

### MACRO-MCU-E-PARAM-POINTER
- `name`: "MCU_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_PARAM_POINTER`."
- `anchors`:
  - `p10`: "MCU_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-MCU-CMU-NOTIFICATION
- `name`: "MCU_CMU_NOTIFICATION"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MCU_CMU_NOTIFICATION`."
- `anchors`:
  - `p12`: "if(MCU_CMU_NOTIFICATION != NULL_PTR)"
- `aliases`: []

### MACRO-MCU-E-PARAM-CLOCK
- `name`: "MCU_E_PARAM_CLOCK"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_PARAM_CLOCK`."
- `anchors`:
  - `p10`: "MCU_E_PARAM_CLOCK"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p12`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", the user shall implement the"
- `aliases`: []

### MACRO-MCU-START-SEC-CODE
- `name`: "MCU_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CODE`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CODE"
- `aliases`: []

### MACRO-MCU-START-SEC-CODE-AC
- `name`: "MCU_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-MCU-START-SEC-CONFIG-DATA-16
- `name`: "MCU_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-MCU-START-SEC-CONFIG-DATA-32
- `name`: "MCU_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-MCU-START-SEC-CONFIG-DATA-8
- `name`: "MCU_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-MCU-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "MCU_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-MCU-START-SEC-CONST-16
- `name`: "MCU_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONST_16"
- `aliases`: []

### MACRO-MCU-START-SEC-CONST-32
- `name`: "MCU_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONST_32"
- `aliases`: []

### MACRO-MCU-START-SEC-CONST-8
- `name`: "MCU_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONST_8"
- `aliases`: []

### MACRO-MCU-START-SEC-CONST-BOOLEAN
- `name`: "MCU_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-MCU-START-SEC-VAR-NO-INIT-16
- `name`: "MCU_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-MCU-START-SEC-VAR-NO-INIT-32
- `name`: "MCU_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-MCU-START-SEC-VAR-NO-INIT-8
- `name`: "MCU_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-MCU-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "MCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CODE
- `name`: "MCU_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CODE"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CODE-AC
- `name`: "MCU_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONFIG-DATA-16
- `name`: "MCU_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONFIG-DATA-32
- `name`: "MCU_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONFIG-DATA-8
- `name`: "MCU_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONST-16
- `name`: "MCU_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONST-32
- `name`: "MCU_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONST-8
- `name`: "MCU_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-MCU-STOP-SEC-CONST-BOOLEAN
- `name`: "MCU_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-MCU-STOP-SEC-VAR-NO-INIT-16
- `name`: "MCU_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-MCU-STOP-SEC-VAR-NO-INIT-32
- `name`: "MCU_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-MCU-STOP-SEC-VAR-NO-INIT-8
- `name`: "MCU_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-MCU-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "MCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MCU_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-EXIT-INTERRUPT
- `name`: "EXIT_INTERRUPT"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `EXIT_INTERRUPT`."
- `anchors`:
  - `p13`: "EXIT_INTERRUPT();"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-MCU-CMU-ISR-NOTIFICATION-USED
- `name`: "MCU_CMU_ISR_NOTIFICATION_USED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MCU_CMU_ISR_NOTIFICATION_USED`."
- `anchors`:
  - `p12`: "#if MCU_CMU_ISR_NOTIFICATION_USED"
- `aliases`: []

### MACRO-MCU-E-CLOCK-FAILURE
- `name`: "MCU_E_CLOCK_FAILURE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_CLOCK_FAILURE`."
- `anchors`:
  - `p10`: "MCU_E_CLOCK_FAILURE"
- `aliases`: []

### MACRO-MCU-E-PARAM-MODE
- `name`: "MCU_E_PARAM_MODE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_PARAM_MODE`."
- `anchors`:
  - `p10`: "MCU_E_PARAM_MODE;"
- `aliases`: []

### MACRO-MCU-E-PARAM-RAMSECTION
- `name`: "MCU_E_PARAM_RAMSECTION"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_PARAM_RAMSECTION`."
- `anchors`:
  - `p10`: "MCU_E_PARAM_RAMSECTION"
- `aliases`: []

### MACRO-MCU-E-PLL-NOT-LOCKED
- `name`: "MCU_E_PLL_NOT_LOCKED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MCU_E_PLL_NOT_LOCKED`."
- `anchors`:
  - `p10`: "MCU_E_PLL_NOT_LOCKED"
- `aliases`: []

### MACRO-MCU-RGM-ISR
- `name`: "MCU_RGM_ISR"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MCU_RGM_ISR`."
- `anchors`:
  - `p9`: "MCU_RGM_ISR"
- `aliases`: []

### MACRO-MCU-SCG-ISR
- `name`: "MCU_SCG_ISR"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MCU_SCG_ISR`."
- `anchors`:
  - `p9`: "MCU_SCG_ISR"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p12`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p11`: "Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting)."
- `aliases`: []

### TYPE-MCU-CLOCKTYPE
- `name`: "Mcu_ClockType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Mcu_ClockType`."
- `anchors`:
  - `p11`: "Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting)."
- `aliases`: []

### TYPE-MCU-CONFIGTYPE
- `name`: "Mcu_ConfigType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Mcu_ConfigType`."
- `anchors`:
  - `p11`: "void Mcu_Init(Mcu_ConfigType *pConfigPtr)"
- `aliases`: []

### TYPE-MCU-MODETYPE
- `name`: "Mcu_ModeType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Mcu_ModeType`."
- `anchors`:
  - `p11`: "void Mcu_SetMode(Mcu_ModeType McuMode)"
- `aliases`: []

### TYPE-MCU-PLLSTATUSTYPE
- `name`: "Mcu_PllStatusType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Mcu_PllStatusType`."
- `anchors`:
  - `p11`: "Mcu_PllStatusType Mcu_GetPllStatus(void)"
- `aliases`: []

### TYPE-MCU-RAMSECTIONTYPE
- `name`: "Mcu_RamSectionType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Mcu_RamSectionType`."
- `anchors`:
  - `p11`: "Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection) ."
- `aliases`: []

### MEM-MCU-START-SEC-VAR
- `name`: "MCU_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR
- `name`: "MCU_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MCU-START-SEC
- `name`: "MCU_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-MCU-START-SEC-CONST
- `name`: "MCU_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-MCU-START-SEC-CONST-UNSPECIFIED
- `name`: "MCU_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MCU_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-MCU-START-SEC-RAMCODE
- `name`: "MCU_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "MCU_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-INIT-16
- `name`: "MCU_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-INIT-32
- `name`: "MCU_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-INIT-8
- `name`: "MCU_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-INIT-BOOLEAN
- `name`: "MCU_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "MCU_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "MCU_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-NO-INIT
- `name`: "MCU_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MCU-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "MCU_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MCU_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MCU-STOP-SEC
- `name`: "MCU_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-MCU-STOP-SEC-CONST
- `name`: "MCU_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-MCU-STOP-SEC-CONST-UNSPECIFIED
- `name`: "MCU_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-MCU-STOP-SEC-RAMCODE
- `name`: "MCU_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-INIT-16
- `name`: "MCU_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-INIT-32
- `name`: "MCU_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-INIT-8
- `name`: "MCU_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "MCU_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "MCU_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "MCU_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-NO-INIT
- `name`: "MCU_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MCU-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "MCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MCU_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-REG-H
- `name`: "_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu _Reg.h"
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
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p12`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-MCU-SMC-C
- `name`: "Mcu_Smc.c"
- `type`: `file`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Mcu_Smc.c`."
- `anchors`:
  - `p13`: "Used by Mcu_Smc.c"
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

### FILE-MCAL-SRC-MCU-SRC-MCU-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-CMU-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Cmu.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Cmu.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Cmu.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-CSC-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Csc.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Csc.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Csc.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-HW-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-IRQ-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-PCC-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Pcc.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Pcc.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Pcc.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-PMC-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Pmc.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Pmc.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Pmc.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-RGM-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Rgm.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Rgm.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Rgm.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-SCG-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Scg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Scg.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Scg.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-SCM-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Scm.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Scm.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Scm.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-SMC-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Smc.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Smc.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Smc.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-SRC-MCU-WKU-C
- `name`: "_MCAL/Src/Mcu/Src/Mcu_Wku.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/Src/Mcu_Wku.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Wku.c"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-H
- `name`: "_MCAL/Src/Mcu/include/Mcu.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-CM7-REG-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_CM7_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_CM7_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_CM7_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-CM7-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_CM7_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_CM7_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_CM7_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-CMU-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Cmu.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Cmu.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-CMU-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-CSC-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Csc.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Csc.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Csc.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-CSC-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Csc_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Csc_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Csc_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-HW-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-HW-TYPES-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Hw_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Hw_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Hw_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-MEMMAP-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-PCC-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Pcc.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Pcc.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pcc.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-PCC-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Pcc_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Pcc_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pcc_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-PMC-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Pmc.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Pmc.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pmc.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-PMC-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Pmc_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Pmc_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pmc_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-RGM-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Rgm.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Rgm.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Rgm.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-RGM-REG-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Rgm_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Rgm_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Rgm_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-RGM-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Rgm_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Rgm_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Rgm_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SCG-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Scg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Scg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Scg.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SCG-REG-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Scg_Reg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Scg_Reg.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Scg_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SCG-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Scg_RegOps.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Scg_RegOps.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Scg_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SCM-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Scm.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Scm.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Scm.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SCM-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Scm_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Scm_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Scm_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SMC-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Smc.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Smc.h`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Smc.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SMC-REG-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Smc_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Smc_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Smc_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-SMC-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Smc_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Smc_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Smc_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-TYPES-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-VERSION-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Version.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-WKU-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Wku.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Wku.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Wku.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-WKU-REG-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Wku_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Wku_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Wku_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-MCU-INCLUDE-MCU-WKU-REGOPS-H
- `name`: "_MCAL/Src/Mcu/include/Mcu_Wku_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mcu/include/Mcu_Wku_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Wku_RegOps.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-MCU-CFG-H
- `name`: "_MCAL_generate/include/Mcu_Cfg.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/include/Mcu_Cfg.h`."
- `anchors`:
  - `p6`: "_MCAL_generate/include/Mcu_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-MCU-CFGPLATFORMDEF-H
- `name`: "_MCAL_generate/include/Mcu_CfgPlatformDef.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/include/Mcu_CfgPlatformDef.h`."
- `anchors`:
  - `p6`: "_MCAL_generate/include/Mcu_CfgPlatformDef.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-MCU-CFG-C
- `name`: "_MCAL_generate/src/Mcu_Cfg.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/src/Mcu_Cfg.c`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Mcu_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-MCU-PBCFG-C
- `name`: "_MCAL_generate/src/Mcu_PBcfg.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `_MCAL_generate/src/Mcu_PBcfg.c`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Mcu_PBcfg.c"
- `aliases`: []

### TERM-MCU
- `name`: "MCU"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `MCU`."
- `anchors`:
  - `p1`: "MCU"
  - `p2`: "MCU"
  - `p3`: "MCU"
  - `p4`: "MCU"
  - `p5`: "MCU"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,10`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p6`: "Det"
  - `p10`: "Det"
- `aliases`: []

### TERM-MCU-SMC
- `name`: "Mcu_Smc"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6,13`
- `brief`: "term index entry for `Mcu_Smc`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Smc.c"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Smc.h"
  - `p13`: "Used by Mcu_Smc.c"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,10`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p5`: "Dem"
  - `p10`: "Dem"
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

### TERM-MCU-CMU
- `name`: "Mcu_Cmu"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Mcu_Cmu`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Cmu.c"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h"
- `aliases`: []

### TERM-MCU-PMC
- `name`: "Mcu_Pmc"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Mcu_Pmc`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Pmc.c"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pmc_RegOps.h"
- `aliases`: []

### TERM-MCU-CMU0-ISR
- `name`: "Mcu_CMU0_ISR"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "term index entry for `Mcu_CMU0_ISR`."
- `anchors`:
  - `p9`: "Mcu_CMU0_ISR"
  - `p12`: "ISR(Mcu_CMU0_ISR)"
- `aliases`: []

### TERM-MCU-PCC
- `name`: "Mcu_Pcc"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Mcu_Pcc`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Pcc.c"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pcc_RegOps.h"
- `aliases`: []

### TERM-MCU-RGM
- `name`: "Mcu_Rgm"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Mcu_Rgm`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Rgm.c"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Rgm_RegOps.h"
- `aliases`: []

### TERM-MCU-SCG
- `name`: "Mcu_Scg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `Mcu_Scg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Scg.c"
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Scg_RegOps.h"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p12`: "AUTOSAR"
  - `p13`: "AUTOSAR"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p5`: "EB tresos"
  - `p6`: "EB tresos"
- `aliases`: []

### TERM-MCU-CFG
- `name`: "Mcu_Cfg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Cfg`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Mcu_Cfg.c"
- `aliases`: []

### TERM-MCU-CSC
- `name`: "Mcu_Csc"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Csc`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Csc.c"
- `aliases`: []

### TERM-MCU-HW
- `name`: "Mcu_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Hw.c"
- `aliases`: []

### TERM-MCU-SCM
- `name`: "Mcu_Scm"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Scm`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Scm.c"
- `aliases`: []

### TERM-MCU-WKU
- `name`: "Mcu_Wku"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Wku`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Wku.c"
- `aliases`: []

### TERM-CLOCKSETTING
- `name`: "ClockSetting"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `ClockSetting`."
- `anchors`:
  - `p11`: "Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting)."
- `aliases`: []

### TERM-EB-PLUGINS
- `name`: "EB_Plugins"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `EB_Plugins`."
- `anchors`:
  - `p6`: "Copy Mcu module(_MCAL/EB_Plugins/eclipse/plugins/Mcu) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-MCUMODE
- `name`: "McuMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `McuMode`."
- `anchors`:
  - `p11`: "void Mcu_SetMode(Mcu_ModeType McuMode)"
- `aliases`: []

### TERM-MCU-CM7-REG
- `name`: "Mcu_CM7_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_CM7_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_CM7_RegOps.h"
- `aliases`: []

### TERM-MCU-CM7-REGOPS
- `name`: "Mcu_CM7_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_CM7_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_CM7_RegOps.h"
- `aliases`: []

### TERM-MCU-CMU1-ISR
- `name`: "Mcu_CMU1_ISR"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Mcu_CMU1_ISR`."
- `anchors`:
  - `p9`: "Mcu_CMU1_ISR"
- `aliases`: []

### TERM-MCU-CMU2-ISR
- `name`: "Mcu_CMU2_ISR"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Mcu_CMU2_ISR`."
- `anchors`:
  - `p9`: "Mcu_CMU2_ISR"
- `aliases`: []

### TERM-MCU-CMU3-ISR
- `name`: "Mcu_CMU3_ISR"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Mcu_CMU3_ISR`."
- `anchors`:
  - `p9`: "Mcu_CMU3_ISR"
- `aliases`: []

### TERM-MCU-CMU4-ISR
- `name`: "Mcu_CMU4_ISR"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Mcu_CMU4_ISR`."
- `anchors`:
  - `p9`: "Mcu_CMU4_ISR"
- `aliases`: []

### TERM-MCU-CFGPLATFORMDEF
- `name`: "Mcu_CfgPlatformDef"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_CfgPlatformDef`."
- `anchors`:
  - `p6`: "_MCAL_generate/include/Mcu_CfgPlatformDef.h"
- `aliases`: []

### TERM-MCU-CMU-REGOPS
- `name`: "Mcu_Cmu_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Cmu_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Cmu_RegOps.h"
- `aliases`: []

### TERM-MCU-CSC-REGOPS
- `name`: "Mcu_Csc_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Csc_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Csc_RegOps.h"
- `aliases`: []

### TERM-MCU-DEINITCLOCK
- `name`: "Mcu_DeInitClock"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_DeInitClock`."
- `anchors`:
  - `p10`: "Mcu_DeInitClock"
- `aliases`: []

### TERM-MCU-DISABLEPMC
- `name`: "Mcu_DisablePmc"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_DisablePmc`."
- `anchors`:
  - `p10`: "Mcu_DisablePmc"
- `aliases`: []

### TERM-MCU-DISABLERGM
- `name`: "Mcu_DisableRgm"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_DisableRgm`."
- `anchors`:
  - `p10`: "Mcu_DisableRgm"
- `aliases`: []

### TERM-MCU-ENABLECMU
- `name`: "Mcu_EnableCmu"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Mcu_EnableCmu`."
- `anchors`:
  - `p11`: "When using CMU, the user needs to enable CMU by using Mcu_EnableCmu API."
- `aliases`: []

### TERM-MCU-GETRAMSTATE
- `name`: "Mcu_GetRamState"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_GetRamState`."
- `anchors`:
  - `p10`: "Mcu_GetRamState"
- `aliases`: []

### TERM-MCU-GETRESETRAWVALUE
- `name`: "Mcu_GetResetRawValue"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_GetResetRawValue`."
- `anchors`:
  - `p10`: "Mcu_GetResetRawValue"
- `aliases`: []

### TERM-MCU-GETRESETREASON
- `name`: "Mcu_GetResetReason"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_GetResetReason`."
- `anchors`:
  - `p10`: "Mcu_GetResetReason"
- `aliases`: []

### TERM-MCU-GETSOSCVALIDSTATUS
- `name`: "Mcu_GetSoscValidStatus"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_GetSoscValidStatus`."
- `anchors`:
  - `p10`: "Mcu_GetSoscValidStatus"
- `aliases`: []

### TERM-MCU-GETVERSIONINFO
- `name`: "Mcu_GetVersionInfo"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Mcu_GetVersionInfo`."
- `anchors`:
  - `p10`: "Mcu_GetVersionInfo"
- `aliases`: []

### TERM-MCU-HW-TYPES
- `name`: "Mcu_Hw_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Hw_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Hw_Types.h"
- `aliases`: []

### TERM-MCU-IRQ
- `name`: "Mcu_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/Src/Mcu_Irq.c"
- `aliases`: []

### TERM-MCU-MEMMAP
- `name`: "Mcu_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_MemMap.h"
- `aliases`: []

### TERM-MCU-PBCFG
- `name`: "Mcu_PBcfg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_PBcfg`."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Mcu_PBcfg.c"
- `aliases`: []

### TERM-MCU-PMC-LVD-LVW-ISR
- `name`: "Mcu_PMC_LVD_LVW_ISR"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Mcu_PMC_LVD_LVW_ISR`."
- `anchors`:
  - `p9`: "Mcu_PMC_LVD_LVW_ISR"
- `aliases`: []

### TERM-MCU-PCC-REGOPS
- `name`: "Mcu_Pcc_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Pcc_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pcc_RegOps.h"
- `aliases`: []

### TERM-MCU-PMC-REGOPS
- `name`: "Mcu_Pmc_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Pmc_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Pmc_RegOps.h"
- `aliases`: []

### TERM-MCU-RGM-REG
- `name`: "Mcu_Rgm_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Rgm_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Rgm_RegOps.h"
- `aliases`: []

### TERM-MCU-RGM-REGOPS
- `name`: "Mcu_Rgm_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Rgm_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Rgm_RegOps.h"
- `aliases`: []

### TERM-MCU-SCG-REG
- `name`: "Mcu_Scg_Reg"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Scg_Reg`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Scg_RegOps.h"
- `aliases`: []

### TERM-MCU-SCG-REGOPS
- `name`: "Mcu_Scg_RegOps"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `Mcu_Scg_RegOps`."
- `anchors`:
  - `p6`: "_MCAL/Src/Mcu/include/Mcu_Scg_RegOps.h"
- `aliases`: []

### TERM-MCU-SCM-REGOPS
- `name`: "Mcu_Scm_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Scm_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Scm_RegOps.h"
- `aliases`: []

### TERM-MCU-SMC-REG
- `name`: "Mcu_Smc_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Smc_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Smc_RegOps.h"
- `aliases`: []

### TERM-MCU-SMC-REGOPS
- `name`: "Mcu_Smc_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Smc_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Smc_RegOps.h"
- `aliases`: []

### TERM-MCU-TYPES
- `name`: "Mcu_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Types.h"
- `aliases`: []

### TERM-MCU-VERSION
- `name`: "Mcu_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Version.h"
- `aliases`: []

### TERM-MCU-WKU-REG
- `name`: "Mcu_Wku_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Wku_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Wku_RegOps.h"
- `aliases`: []

### TERM-MCU-WKU-REGOPS
- `name`: "Mcu_Wku_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mcu_Wku_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mcu/include/Mcu_Wku_RegOps.h"
- `aliases`: []

### TERM-MICROCONTROLLER-UNIT-DRIVER
- `name`: "Microcontroller Unit Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Microcontroller Unit Driver`."
- `anchors`:
  - `p1`: "Microcontroller Unit Driver"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p1`: "Rte"
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

### ALIAS-MCU
- `canonical`: "MCU"
- `aliases`: ["Microcontroller Unit Driver", "微控制器单元驱动 / 时钟、复位、RAM、低功耗管理", "MCU module", "MCU driver", "MCU User Manual", "MCU Integration Manual", "Mcu", "Microcontroller Unit", "微控制器单元", "MCU模块", "MCU驱动"]
- `related_ids`: ["TERM-MCU"]

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

### ALIAS-MCU-CLOCK
- `canonical`: "MCU clock"
- `aliases`: ["Mcu_InitClock", "Mcu_DistributePllClock", "PLL lock", "clock tree", "SCG", "PCC", "CMU", "clock configuration", "时钟树"]
- `related_ids`: []

### ALIAS-MCU-RESET
- `canonical`: "MCU reset"
- `aliases`: ["Mcu_PerformReset", "Mcu_GetResetReason", "Mcu_GetResetRawValue", "RGM", "reset reason", "复位原因"]
- `related_ids`: []

### ALIAS-MCU-RAM
- `canonical`: "MCU RAM"
- `aliases`: ["Mcu_InitRamSection", "Mcu_GetRamState", "RAM section", "McuRamSection", "RAM初始化"]
- `related_ids`: []

### ALIAS-MCU-LOW-POWER
- `canonical`: "MCU low power"
- `aliases`: ["Mcu_SetMode", "SMC", "WKU", "PMC", "standby", "sleep mode", "低功耗模式"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between MCU_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `MCU_Integration_Manual.pdf`
- `source_pdf_sha256`: `be5480190c7239c1b4078e0a501e4c27959e4e51c63557b37e4e6f2439a8f9a9`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `71`
- `technical_missing_terms_added`: `2`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `71`
- `supplemented_missing_technical_token_count`: `2`
- `supplemented_physical_pages_count`: `13`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.2"
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
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "Proprietary"
  - "basic"
  - "build"
  - "change"
  - "chip"
  - "choose"
  - "code"
  - "common"
  - "configurations"
  - "detection"
  - "enabling"
  - "initialization"
  - "manually"
  - "modules"
  - "necessary"
  - "other"
  - "report"
  - "status"
  - "variant"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Generate"
  - "Proprietary"
  - "Set"
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
  - "initialized"
  - "never"
  - "read"
  - "rodata"
  - "startup"
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
  - "ECU"
  - "Flagchip"
  - "Optional"
  - "Proprietary"
  - "after"
  - "change"
  - "disabled"
  - "monitor"
  - "runtime"
  - "trigger"
  - "wake"
  - "would"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Example"
  - "Flagchip"
  - "Proprietary"
  - "code"
  - "endif"
  - "example"
  - "notification"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "arm"
  - "code"
  - "core"
  - "enter"
  - "inline"
  - "let"

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
- `physical_pages`: `3,5,6,9,10,10,11,12`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0009-001", "TBL-0010-001", "TBL-0010-002", "TBL-0011-001", "TBL-0012-001"]
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
- `pdf_page_count`: `14`
- `indexed_physical_pages_count`: `14`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `26`
- `table_index_count`: `11`
- `figure_index_count`: `0`
- `symbol_index_count`: `211`
- `alias_index_count`: `11`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `be5480190c7239c1b4078e0a501e4c27959e4e51c63557b37e4e6f2439a8f9a9`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `71`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->