---
manifest_schema_version: "1.1"
source_pdf: "WDG_Integration_Manual.pdf"
source_pdf_sha256: "9d23648c205f276ad690e48774b08b079990205da63a7f2f1cca3bc657ebae88"
source_pdf_size_bytes: 1196054
pdf_page_count: 16
generated_at: "2026-06-20T00:09:37Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.2-wdg-complete"
source_document_id: null
source_document_revision: "Rev.0.4"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: WDG_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `WDG_Integration_Manual.pdf`
- `source_pdf_sha256`: `9d23648c205f276ad690e48774b08b079990205da63a7f2f1cca3bc657ebae88`
- `source_pdf_size_bytes`: `1196054`
- `pdf_page_count`: `16`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.4`
- `visible_cover_title`: `FC7xxx WDG Integration Manual`
- `visible_cover_revision`: `Rev.0.4`
- `revision_history_latest_row`: `0.4 / 2023/12/15 / Updated for MCAL V0.4.0 - Optimization plugins`
- `generated_at`: `2026-06-20T00:09:37Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.2-wdg-complete`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL WDG module - Integration Manual"
- `module_scope`: "WDG integration requirements: module dependencies, required source/header files, EB tresos plug-in addition, memory sections, exclusive areas, ISR, Det/Dem error reporting, startup/shutdown/runtime function-call expectations and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["WDG", "WDOG", "Watchdog Timer", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Mcu", "Gpt", "EcuC", "SchM_Wdg", "Wdg_ConfigType", "WdgSettingsConfig", "Wdg_Instancex_Init", "Wdg_Instancex_SetMode", "Wdg_Instancex_SetTriggerCondition"]
- `summary`: "This 16-page Manifest indexes WDG content across source physical pages 1-16, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["Cover"]
- `anchor`: "Rev.0.4"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `3`
- `printed_page_start`: `2`
- `printed_page_end`: `3`
- `keywords`: ["History", "Revision"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `5`
- `printed_page_start`: `3`
- `printed_page_end`: `5`
- `keywords`: ["Contents", "Table"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Introduction"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Introduction"]
- `anchor`: "Chapter 1 Introduction"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Building"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Dependencies", "Modules", "Other"]
- `anchor`: "Chapter 2 Building"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Compile", "Files", "Required"]
- `anchor`: "Chapter 2 Building"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["Add", "ins", "Plug"]
- `anchor`: "Rte module files:"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["Memory"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `8`
- `physical_page_end`: `9`
- `printed_page_start`: `8`
- `printed_page_end`: `9`
- `keywords`: ["Map", "Memory", "Sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Area", "Exclusive"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Interrupt", "ISR", "Routine", "Service"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Error", "Report"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Det"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Dem"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Calls"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Calls", "during", "Startup"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Calls", "during", "Shutdown"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Calls", "during", "Wake"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Calls", "during", "Runtime"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Other", "Requirements"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Callback", "Callout", "Notification"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Macros"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Integration", "Steps"]
- `anchor`: "Chapter 9 Integration Steps"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `keywords`: ["FC7xxx", "Integration", "Rev"]
- `anchor`: "Rev.0.4"

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `keywords`: ["MCAL", "Revision", "Updated", "Changes", "Date", "FC7xxx", "History", "Initial", "Integration", "Optimization", "plugins", "release"]
- `anchor`: "Revision History"

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "chapter_start", "api_reference"]
- `keywords`: ["Calls", "during", "Contents", "Integration", "Introduction", "Memory", "Other", "Table", "Add", "Area", "Building", "Callback", "Callout", "Compile"]
- `anchor`: "Table of Contents"

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text", "chapter_start"]
- `keywords`: ["integration", "Introduction", "describes", "FC7xxx", "Integration", "requirements"]
- `anchor`: "Chapter 1 Introduction"

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "chapter_start"]
- `keywords`: ["Src", "include", "provides", "dependency", "Common", "Dem", "Det", "detection", "Development", "diagnostic", "enabling", "error", "event", "interface"]
- `anchor`: "Chapter 2 Building"

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text"]
- `keywords`: ["Src", "Common", "include", "src", "files", "Dem", "Det", "Ftu_Common", "IRQRouter", "SpinLock", "Aontimer_Common", "Aontimer_Reg", "arm_cortex_asm", "Common_MemMap"]
- `anchor`: "_MCAL/Src/Wdg/include/Wdg_Reg.h"

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text"]
- `keywords`: ["ins", "tresos", "folder", "plug", "files", "header", "plugins", "source", "Studio", "Add", "add", "are", "configure", "Copy"]
- `anchor`: "Rte module files:"

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "chapter_start", "table", "configuration"]
- `keywords`: ["are", "These", "variables", "aligned", "all", "bit", "sections", "UNSPECIFIED", "Variables", "initialized", "Memory", "code", "Code", "Data"]
- `anchor`: "Chapter 3 Memory"

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table"]
- `keywords`: ["WDG_START_SEC_VAR", "WDG_STOP_SEC_VAR", "UNSPECIFIED", "code", "data", "Description", "FC7xxx", "Integration", "Name", "startup", "Type"]
- `anchor`: "Section Name"

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "chapter_start"]
- `keywords`: ["area", "exclusive", "critical", "regions", "are", "Area", "entering", "Exclusive", "exiting", "FC7xxx", "following", "Integration", "Manger", "Schedule"]
- `anchor`: "Chapter 4 Exclusive Area"

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `39`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "chapter_start", "table"]
- `keywords`: ["Interrupt", "FC7xxx", "Instance", "Integration", "IRQ", "ISR", "Name", "Number", "NVIC", "Routine", "Service", "WDOG0_IRQHandler", "WDOG1_IRQHandler", "WDOG2_IRQHandler"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "chapter_start", "table", "api_reference"]
- `keywords`: ["WDG_E_DRIVER_STATE", "WDG_E_PARAM_TIMEOUT", "WDG_E_PARAM_MODE", "WDG_E_INIT_FAILED", "WDG_E_PARAM_CONFIG", "WDG_E_PARAM_POINTER", "Error", "Det", "FC7xxx", "Integration", "Name", "Report", "Type", "Wdg_Instance0_GetVersionInfo"]
- `anchor`: "Chapter 6 Error Report"

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `keywords`: ["mode", "Dem", "error", "failed", "has", "issued", "occurred", "switch", "because", "Description", "disable", "during", "Event", "FC7xxx"]
- `anchor`: "6.2"

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "chapter_start", "api_reference"]
- `keywords`: ["Calls", "during", "None", "API", "called", "FC7xxx", "Integration", "needs", "Runtime", "Shutdown", "Startup", "Wake", "Wdg_Instance0_Init", "Wdg_Instance1_Init"]
- `anchor`: "Chapter 7 Function Calls"

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "chapter_start", "api_reference"]
- `keywords`: ["not", "AUTOSAR_OS_NOT_USED", "Callback", "Callout", "defined", "extern", "file", "interrupt", "ISR", "None", "Notification", "notification", "void", "Wdg_Wdog0_Isr"]
- `anchor`: "Chapter 8 Other Requirements"

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "chapter_start"]
- `keywords`: ["details", "please", "refer", "Configure", "Integration", "appropriate", "Build", "Building", "dependent", "FC7xxx", "file", "files", "generate", "interrupt"]
- `anchor`: "Chapter 9 Integration Steps"

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover page identifying the FC7xxx WDG document and revision."
- `keywords`: ["FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "Rev.0.4"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision history for the FC7xxx WDG document."
- `keywords`: ["MCAL", "Revision", "Updated", "Changes", "Date", "FC7xxx", "History", "Initial", "Integration", "Optimization", "plugins", "release"]
- `anchors`:
  - `p2`: "Revision History"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "chapter_start", "api_reference"]
- `summary`: "Table of contents entries for locating chapters and subsections in the FC7xxx WDG document."
- `keywords`: ["Calls", "during", "Contents", "Integration", "Introduction", "Memory", "Other", "Table", "Add", "Area", "Building", "Callback", "Callout", "Compile"]
- `anchors`:
  - `p3`: "Table of Contents"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text", "chapter_start"]
- `summary`: "Covers `Chapter 1 Introduction / 1.1 Introduction`. Key content: This integration manual describes the integration requirements for the WDG module."
- `keywords`: ["integration", "Introduction", "describes", "FC7xxx", "Integration", "requirements"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "chapter_start"]
- `summary`: "Covers `Chapter 2 Building / 2.1 Dependencies on Other Modules`. Key content: Dependencies on Other Modules Module configuration dependency"
- `keywords`: ["Src", "include", "provides", "dependency", "Common", "Dem", "Det", "detection", "Development", "diagnostic", "enabling", "error", "event", "interface"]
- `anchors`:
  - `p5`: "Chapter 2 Building"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text"]
- `summary`: "Covers `Chapter 2 Building / 2.1 Dependencies on Other Modules`. Visible anchor: `•`. Key content: _MCAL/Src/Wdg/include/Wdg_Reg.h _MCAL/Src/Wdg/include/Wdg_Version.h"
- `keywords`: ["Src", "Common", "include", "src", "files", "Dem", "Det", "Ftu_Common", "IRQRouter", "SpinLock", "Aontimer_Common", "Aontimer_Reg", "arm_cortex_asm", "Common_MemMap"]
- `anchors`:
  - `p6`: "_MCAL/Src/Wdg/include/Wdg_Reg.h"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text"]
- `summary`: "Covers `Chapter 2 Building / 2.3 Add Plug-ins`. Visible anchor: `Rte module files:`. Key content: WDG module plug-ins are developed for EB tresos Studio, so, to use WDG plug-ins on the EB tresos Studio, the user needs to add the WDG module to the EB plug-ins folder first."
- `keywords`: ["ins", "tresos", "folder", "plug", "files", "header", "plugins", "source", "Studio", "Add", "add", "are", "configure", "Copy"]
- `anchors`:
  - `p7`: "Rte module files:"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "chapter_start", "table", "configuration"]
- `summary`: "Covers `Chapter 3 Memory / 3.1 Sections in Memory Map`. Key content: Sections in Memory Map WDG_START_SEC_CONFIG_DATA_8"
- `keywords`: ["are", "These", "variables", "aligned", "all", "bit", "sections", "UNSPECIFIED", "Variables", "initialized", "Memory", "code", "Code", "Data"]
- `anchors`:
  - `p8`: "Chapter 3 Memory"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table"]
- `summary`: "Covers `Chapter 3 Memory / 3.1 Sections in Memory Map`. Visible anchor: `Section Name`. Key content: WDG_START_SEC_VAR _INIT_16 WDG_STOP_SEC_VAR _INIT_16"
- `keywords`: ["WDG_START_SEC_VAR", "WDG_STOP_SEC_VAR", "UNSPECIFIED", "code", "data", "Description", "FC7xxx", "Integration", "Name", "startup", "Type"]
- `anchors`:
  - `p9`: "Section Name"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "chapter_start"]
- `summary`: "Covers `Chapter 4 Exclusive Area`. Key content: WDG module using the services of Schedule Manger (SchM) for entering and exiting critical regions. The following critical regions are used in the WDG driver:"
- `keywords`: ["area", "exclusive", "critical", "regions", "are", "Area", "entering", "Exclusive", "exiting", "FC7xxx", "following", "Integration", "Manger", "Schedule"]
- `anchors`:
  - `p10`: "Chapter 4 Exclusive Area"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `39`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "chapter_start", "table"]
- `summary`: "Covers `Chapter 5 Interrupt Service Routine (ISR)`. Key content: IRQ Number (NVIC Interrupt ID) WDOG0_IRQHandler"
- `keywords`: ["Interrupt", "FC7xxx", "Instance", "Integration", "IRQ", "ISR", "Name", "Number", "NVIC", "Routine", "Service", "WDOG0_IRQHandler", "WDOG1_IRQHandler", "WDOG2_IRQHandler"]
- `anchors`:
  - `p11`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "chapter_start", "table", "api_reference"]
- `summary`: "Covers `Chapter 6 Error Report / 6.1 Det`. Key content: Wdg_Instance0_Init WDG_E_DRIVER_STATE;"
- `keywords`: ["WDG_E_DRIVER_STATE", "WDG_E_PARAM_TIMEOUT", "WDG_E_PARAM_MODE", "WDG_E_INIT_FAILED", "WDG_E_PARAM_CONFIG", "WDG_E_PARAM_POINTER", "Error", "Det", "FC7xxx", "Integration", "Name", "Report", "Type", "Wdg_Instance0_GetVersionInfo"]
- `anchors`:
  - `p12`: "Chapter 6 Error Report"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `summary`: "Covers `Chapter 6 Error Report / 6.2 Dem`. Key content: WDG_E_DISABLE_REJECTED Shall be issued when the error 'Initialization or mode switch"
- `keywords`: ["mode", "Dem", "error", "failed", "has", "issued", "occurred", "switch", "because", "Description", "disable", "during", "Event", "FC7xxx"]
- `anchors`:
  - `p13`: "6.2"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "chapter_start", "api_reference"]
- `summary`: "Covers `Chapter 7 Function Calls / 7.1 Function Calls during Startup`. Key content: Function Calls during Startup The API needs to be called is Wdg_Instance0_Init, Wdg_Instance1_Init, Wdg_Instance2_Init;"
- `keywords`: ["Calls", "during", "None", "API", "called", "FC7xxx", "Integration", "needs", "Runtime", "Shutdown", "Startup", "Wake", "Wdg_Instance0_Init", "Wdg_Instance1_Init"]
- `anchors`:
  - `p14`: "Chapter 7 Function Calls"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text", "chapter_start", "api_reference"]
- `summary`: "Covers `Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout`. Key content: Notification, Callback, Callout If the user enables the watchdog interrupt and the notification value is not 'NULL_PTR' or 'NULL', an extern"
- `keywords`: ["not", "AUTOSAR_OS_NOT_USED", "Callback", "Callout", "defined", "extern", "file", "interrupt", "ISR", "None", "Notification", "notification", "void", "Wdg_Wdog0_Isr"]
- `anchors`:
  - `p15`: "Chapter 8 Other Requirements"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "chapter_start"]
- `summary`: "Covers `Chapter 9 Integration Steps`. Key content: Configure the WDG module and generate configuration files (please refer to Building chapter for details). Configure appropriate memory sections in linker file or other (please refer to Memory chapter for details)."
- `keywords`: ["details", "please", "refer", "Configure", "Integration", "appropriate", "Build", "Building", "dependent", "FC7xxx", "file", "files", "generate", "interrupt"]
- `anchors`:
  - `p16`: "Chapter 9 Integration Steps"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0002-001`
- `caption`: "Revision History"
- `table_type`: `revision_history`
- `physical_pages`: `2`
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 200.94]`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "revision history index entry detected on physical page 2. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Revision"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Revision", "Date", "Changes", "0.1", "2023/07/14", "Initial release for MCAL V0.1.0"]

### TBL-0008-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0008-001`
- `caption`: "Sections in Memory Map"
- `table_type`: `memory_map`
- `physical_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 123.12, 564.72, 787.14]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "memory map index entry detected on physical page 8. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Section Name"
- `confidence`: `0.86`
- `quality_flags`: ["multi_page_or_continuation_table_possible"]
- `raw_head`: ["Section Name", "Section Type", "Description", "WDG_START_SEC_CONFIG_DATA_8 WDG_STOP_SEC_CONFIG_DATA_8 WDG_START_SEC_CONFIG_DATA_16 WDG_STOP_SEC_CONFIG_DATA_16 WDG_START_SEC_CONFIG_DATA_32 WDG_STOP_SEC_CONFIG_DATA_32", "Variables", "These are all the sections used for variables which have to be aligned to 8/16/32 bit. These variables are initialized by startup code (data)."]

### TBL-0009-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0009-001`
- `caption`: "Sections in Memory Map"
- `table_type`: `memory_map`
- `physical_pages`: `9`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.6, 37.27, 564.72, 156.78]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "memory map index entry detected on physical page 9. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Section Name"
- `confidence`: `0.86`
- `quality_flags`: ["multi_page_or_continuation_table_possible"]
- `raw_head`: ["Section Name", "Section Type", "Description", "WDG_START_SEC_VAR _INIT_16 WDG_STOP_SEC_VAR _INIT_16 WDG_START_SEC_VAR _INIT_32 WDG_STOP_SEC_VAR _INIT_32 WDG_START_SEC_VAR _INIT_ UNSPECIFIED WDG_STOP_SEC_VAR _INIT_ UNSPECIFIED", "startup code (data)."]

### TBL-0011-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0011-001`
- `caption`: "Interrupt Service Routine (ISR)"
- `table_type`: `isr`
- `physical_pages`: `11`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `bbox`: `[30.6, 102.48, 564.72, 172.14]`
- `key_fields`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)"]
- `summary`: "isr index entry detected on physical page 11. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Instance"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Instance", "Interrupt Name", "IRQ Number (NVIC Interrupt ID)", "Watchdog 0", "WDOG0_IRQHandler", "37"]

### TBL-0012-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0012-001`
- `caption`: "Function Name Error Type"
- `table_type`: `api_function`
- `physical_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 705.44]`
- `key_fields`: ["Function Name", "Error Type", "Wdg_Instance0_Init", "Wdg_Instance0_SetMode", "Wdg_Instance0_SetTriggerCondition", "Wdg_Instance0_GetVersionInfo", "Wdg_Instance1_Init"]
- `summary`: "api function index entry detected on physical page 12. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function Name"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function Name", "Error Type", "Wdg_Instance0_Init", "WDG_E_DRIVER_STATE; WDG_E_INIT_FAILED; WDG_E_PARAM_MODE; WDG_E_PARAM_CONFIG; WDG_E_PARAM_TIMEOUT", "Wdg_Instance0_SetMode", "WDG_E_DRIVER_STATE; WDG_E_PARAM_MODE; WDG_E_PARAM_TIMEOUT"]

### TBL-0013-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0013-001`
- `caption`: "DEM Error Report"
- `table_type`: `dem_error_report`
- `physical_pages`: `13`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.6, 57.94, 564.72, 144.08]`
- `key_fields`: ["Dem Event Name", "Description", "WDG_E_DISABLE_REJECTED", "WDG_E_MODE_FAILED"]
- `summary`: "dem error report index entry detected on physical page 13. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Dem Event Name"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Dem Event Name", "Description", "WDG_E_DISABLE_REJECTED", "Shall be issued when the error \"Initialization or mode switch failed because it would disable the watchdog\" has occurred.", "WDG_E_MODE_FAILED", "Shall be issued when the error \"Setting a watchdog mode failed (during initialization or mode switch)\" has occurred."]

## 7. Figure / Image Index

- `figure_index_status`: `no_semantic_figures_or_screenshots_detected`

## 8. Term / API / Config / Requirement Index

### TERM-FC7XXX
- `name`: `FC7xxx`
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16`
- `section_paths`: ["Chapter 1 Introduction / 1.1 Introduction", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Cover", "Revision History", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p1`: "FC7xxx WDG Integration Manual"
  - `p2`: "FC7xxx WDG Integration Manual"
  - `p3`: "FC7xxx WDG Integration Manual"
- `aliases`: []

### TERM-WDG
- `name`: `WDG`
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16`
- `section_paths`: ["Chapter 1 Introduction / 1.1 Introduction", "Chapter 2 Building / 2.1 Dependencies on Other Modules", "Cover", "Revision History", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p1`: "FC7xxx WDG Integration Manual"
  - `p2`: "FC7xxx WDG Integration Manual"
  - `p3`: "FC7xxx WDG Integration Manual"
- `aliases`: []

### TERM-MCAL
- `name`: `MCAL`
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,5,6,7`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins", "Revision History"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p2`: "Initial release for MCAL V0.1.0"
  - `p5`: "Initial release for MCAL V0.1.0"
  - `p6`: "Initial release for MCAL V0.1.0"
- `aliases`: []

### TERM-DEM
- `name`: `Dem`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,13`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 6 Error Report / 6.2 Dem", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p3`: "Dem ............................................................................................................................................................"
  - `p5`: "Dem ............................................................................................................................................................"
  - `p6`: "Dem ............................................................................................................................................................"
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,12`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 6 Error Report / 6.1 Det", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p3`: "Det ............................................................................................................................................................"
  - `p5`: "Det ............................................................................................................................................................"
  - `p6`: "Det ............................................................................................................................................................"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-HLD-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_HLD.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_HLD.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-HWA-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_HWA.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_HWA.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-INSTANCE0-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Instance0.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance0.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-INSTANCE0-CBK-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Instance0_Cbk.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance0_Cbk.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-INSTANCE1-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Instance1.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance1.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-INSTANCE1-CBK-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Instance1_Cbk.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance1_Cbk.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-INSTANCE2-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Instance2.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance2.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-INSTANCE2-CBK-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Instance2_Cbk.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance2_Cbk.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-IRQ-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Irq.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Irq.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-LLD-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_LLD.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_LLD.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-LLD-TYPES-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_LLD_Types.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_LLD_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-MEMMAP-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_MemMap.h`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-HLD-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_HLD.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_HLD.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-HWA-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_HWA.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_HWA.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-INSTANCE0-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_Instance0.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Instance0.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-INSTANCE1-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_Instance1.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Instance1.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-INSTANCE2-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_Instance2.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Instance2.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-IRQ-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_Irq.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Irq.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-SRC-WDG-LLD-C
- `name`: `_MCAL/Src/Wdg/Src/Wdg_LLD.c`
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_LLD.c"
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,6,15`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "Common: This module is the basic module which used to choose the chip."
  - `p6`: "Common: This module is the basic module which used to choose the chip."
  - `p15`: "Common: This module is the basic module which used to choose the chip."
- `aliases`: []

### TERM-ECUC
- `name`: `EcuC`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "EcuC: This module provides configuration for mapping WDG drivers to ECUC partitions (when multi-core"
- `aliases`: []

### TERM-GPT
- `name`: `Gpt`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "Gpt: This module provides periodic dog feeding function for WDG."
- `aliases`: []

### TERM-MCU
- `name`: `Mcu`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "Mcu: This module provides the clock reference point for WDG module"
- `aliases`: []

### TERM-RTE
- `name`: `Rte`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,7`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "Rte: This module provides APIs to protect/unprotect some parts of code from interrupts (Exclusive Areas)."
  - `p7`: "Rte: This module provides APIs to protect/unprotect some parts of code from interrupts (Exclusive Areas)."
- `aliases`: []

### FUNC-WDG-HLD
- `name`: `Wdg_HLD`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5,10`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 4 Exclusive Area"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_HLD.c"
  - `p10`: "_MCAL/Src/Wdg/Src/Wdg_HLD.c"
- `aliases`: []

### FUNC-WDG-HWA
- `name`: `Wdg_HWA`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_HWA.c"
- `aliases`: []

### FUNC-WDG-INSTANCE0
- `name`: `Wdg_Instance0`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Instance0.c"
- `aliases`: []

### FUNC-WDG-INSTANCE0-CBK
- `name`: `Wdg_Instance0_Cbk`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance0_Cbk.h"
- `aliases`: []

### FUNC-WDG-INSTANCE1
- `name`: `Wdg_Instance1`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Instance1.c"
- `aliases`: []

### FUNC-WDG-INSTANCE1-CBK
- `name`: `Wdg_Instance1_Cbk`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance1_Cbk.h"
- `aliases`: []

### FUNC-WDG-INSTANCE2
- `name`: `Wdg_Instance2`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Instance2.c"
- `aliases`: []

### FUNC-WDG-INSTANCE2-CBK
- `name`: `Wdg_Instance2_Cbk`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_Instance2_Cbk.h"
- `aliases`: []

### CFG-WDG-IRQ
- `name`: `Wdg_Irq`
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_Irq.c"
- `aliases`: []

### FUNC-WDG-LLD
- `name`: `Wdg_LLD`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/Src/Wdg_LLD.c"
- `aliases`: []

### FUNC-WDG-LLD-TYPES
- `name`: `Wdg_LLD_Types`
- `type`: `function`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_LLD_Types.h"
- `aliases`: []

### CFG-WDG-MEMMAP
- `name`: `Wdg_MemMap`
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p5`: "_MCAL/Src/Wdg/include/Wdg_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-AONTIMER-REG-H
- `name`: `_MCAL/Src/Common/include/Aontimer_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Aontimer_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-ARM-CORTEX-ASM-H
- `name`: `_MCAL/Src/Common/include/arm_cortex_asm.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/arm_cortex_asm.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMMON-MEMMAP-H
- `name`: `_MCAL/Src/Common/include/Common_MemMap.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Common_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILER-CFG-H
- `name`: `_MCAL/Src/Common/include/Compiler_Cfg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Compiler_Cfg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-COMPILERDEFINITION-H
- `name`: `_MCAL/Src/Common/include/CompilerDefinition.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/CompilerDefinition.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-CPM-REG-H
- `name`: `_MCAL/Src/Common/include/Cpm_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Cpm_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-ETH-GENERALTYPES-H
- `name`: `_MCAL/Src/Common/include/Eth_GeneralTypes.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Eth_GeneralTypes.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FCPIT-REG-H
- `name`: `_MCAL/Src/Common/include/Fcpit_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Fcpit_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FTU-COMMON-H
- `name`: `_MCAL/Src/Common/include/Ftu_Common.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_Common.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FTU-REG-H
- `name`: `_MCAL/Src/Common/include/Ftu_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-FTU-REGOPS-H
- `name`: `_MCAL/Src/Common/include/Ftu_RegOps.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Ftu_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-GPIO-REG-H
- `name`: `_MCAL/Src/Common/include/Gpio_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Gpio_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-IRQROUTER-H
- `name`: `_MCAL/Src/Common/include/IRQRouter.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/IRQRouter.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MB-REG-H
- `name`: `_MCAL/Src/Common/include/Mb_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mb_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MB-REGOPS-H
- `name`: `_MCAL/Src/Common/include/Mb_RegOps.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mb_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MCAL-H
- `name`: `_MCAL/Src/Common/include/Mcal.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Mcal.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PLATFORM-TYPES-H
- `name`: `_MCAL/Src/Common/include/Platform_Types.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Platform_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-PORT-REG-H
- `name`: `_MCAL/Src/Common/include/Port_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Port_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SCM-REG-H
- `name`: `_MCAL/Src/Common/include/Scm_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Scm_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SCM-REGOPS-H
- `name`: `_MCAL/Src/Common/include/Scm_RegOps.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/Scm_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SPINLOCK-H
- `name`: `_MCAL/Src/Common/include/SpinLock.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/SpinLock.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-STDREGMACROS-H
- `name`: `_MCAL/Src/Common/include/StdRegMacros.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/include/StdRegMacros.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-AONTIMER-COMMON-C
- `name`: `_MCAL/Src/Common/src/Aontimer_Common.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Aontimer_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-FTU-COMMON-C
- `name`: `_MCAL/Src/Common/src/Ftu_Common.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Ftu_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-IRQROUTER-C
- `name`: `_MCAL/Src/Common/src/IRQRouter.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/IRQRouter.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-PORT-COMMON-C
- `name`: `_MCAL/Src/Common/src/Port_Common.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/Port_Common.c"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-SRC-SPINLOCK-C
- `name`: `_MCAL/Src/Common/src/SpinLock.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Common/src/SpinLock.c"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-REG-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Reg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Wdg/include/Wdg_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-WDG-INCLUDE-WDG-VERSION-H
- `name`: `_MCAL/Src/Wdg/include/Wdg_Version.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL/Src/Wdg/include/Wdg_Version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-WDG-CFG-H
- `name`: `_MCAL_generate/include/Wdg_Cfg.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL_generate/include/Wdg_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-WDG-CFG-C
- `name`: `_MCAL_generate/src/Wdg_cfg.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-WDG-INSTANCE0-PBCFG-C
- `name`: `_MCAL_generate/src/Wdg_Instance0_PBcfg.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_Instance0_PBcfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-WDG-INSTANCE1-PBCFG-C
- `name`: `_MCAL_generate/src/Wdg_Instance1_PBcfg.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_Instance1_PBcfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-WDG-INSTANCE2-PBCFG-C
- `name`: `_MCAL_generate/src/Wdg_Instance2_PBcfg.c`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_Instance2_PBcfg.c"
- `aliases`: []

### FILE-DEM-H
- `name`: `Dem.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "Dem.h"
- `aliases`: []

### FILE-DET-H
- `name`: `Det.h`
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p6`: "Det.h"
- `aliases`: []

### CFG-WDG-CFG
- `name`: `Wdg_cfg`
- `type`: `config`
- `primary_page`: `6`
- `physical_pages`: `6,15`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_cfg.c"
  - `p15`: "_MCAL_generate/src/Wdg_cfg.c"
- `aliases`: []

### CFG-WDG-CFG-2
- `name`: `Wdg_Cfg`
- `type`: `config`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p6`: "_MCAL_generate/include/Wdg_Cfg.h"
- `aliases`: []

### FUNC-WDG-INSTANCE0-PBCFG
- `name`: `Wdg_Instance0_PBcfg`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_Instance0_PBcfg.c"
- `aliases`: []

### FUNC-WDG-INSTANCE1-PBCFG
- `name`: `Wdg_Instance1_PBcfg`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_Instance1_PBcfg.c"
- `aliases`: []

### FUNC-WDG-INSTANCE2-PBCFG
- `name`: `Wdg_Instance2_PBcfg`
- `type`: `function`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p6`: "_MCAL_generate/src/Wdg_Instance2_PBcfg.c"
- `aliases`: []

### CFG-WDG-REG
- `name`: `Wdg_Reg`
- `type`: `config`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p6`: "_MCAL/Src/Wdg/include/Wdg_Reg.h"
- `aliases`: []

### CFG-WDG-VERSION
- `name`: `Wdg_Version`
- `type`: `config`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p6`: "_MCAL/Src/Wdg/include/Wdg_Version.h"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: `EB tresos`
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p7`: "WDG module plug-ins are developed for EB tresos Studio, so, to use WDG plug-ins on the EB tresos Studio, the user needs to"
- `aliases`: []

### TERM-EB-TRESOS-STUDIO
- `name`: `EB tresos Studio`
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p7`: "WDG module plug-ins are developed for EB tresos Studio, so, to use WDG plug-ins on the EB tresos Studio, the user needs to"
- `aliases`: []

### TERM-SCHM
- `name`: `SchM`
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7,10`
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins", "Chapter 4 Exclusive Area"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p7`: "SchM_Wdg.h"
  - `p10`: "SchM_Wdg.h"
- `aliases`: []

### FILE-SCHM-WDG-H
- `name`: `SchM_Wdg.h`
- `type`: `file`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Building / 2.3 Add Plug-ins"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p7`: "SchM_Wdg.h"
- `aliases`: []

### MACRO-WDG-START-SEC
- `name`: `WDG_START_SEC_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_ RAMCODE"
- `aliases`: []

### MACRO-WDG-START-SEC-CODE
- `name`: `WDG_START_SEC_CODE`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CODE"
- `aliases`: []

### MACRO-WDG-START-SEC-CODE-AC
- `name`: `WDG_START_SEC_CODE_AC`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-WDG-START-SEC-CONFIG-DATA-16
- `name`: `WDG_START_SEC_CONFIG_DATA_16`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-WDG-START-SEC-CONFIG-DATA-32
- `name`: `WDG_START_SEC_CONFIG_DATA_32`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-WDG-START-SEC-CONFIG-DATA-8
- `name`: `WDG_START_SEC_CONFIG_DATA_8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-WDG-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `WDG_START_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-WDG-START-SEC-CONST
- `name`: `WDG_START_SEC_CONST_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MACRO-WDG-START-SEC-CONST-16
- `name`: `WDG_START_SEC_CONST_16`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONST_16"
- `aliases`: []

### MACRO-WDG-START-SEC-CONST-32
- `name`: `WDG_START_SEC_CONST_32`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONST_32"
- `aliases`: []

### MACRO-WDG-START-SEC-CONST-8
- `name`: `WDG_START_SEC_CONST_8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONST_8"
- `aliases`: []

### MACRO-WDG-START-SEC-CONST-BOOLEAN
- `name`: `WDG_START_SEC_CONST_BOOLEAN`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR
- `name`: `WDG_START_SEC_VAR_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR-NO-INIT
- `name`: `WDG_START_SEC_VAR_NO_INIT_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR-NO-INIT-16
- `name`: `WDG_START_SEC_VAR_NO_INIT_16`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR-NO-INIT-32
- `name`: `WDG_START_SEC_VAR_NO_INIT_32`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR-NO-INIT-8
- `name`: `WDG_START_SEC_VAR_NO_INIT_8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `WDG_START_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-WDG-STOP-SEC
- `name`: `WDG_STOP_SEC_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_ RAMCODE"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CODE
- `name`: `WDG_STOP_SEC_CODE`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CODE"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CODE-AC
- `name`: `WDG_STOP_SEC_CODE_AC`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONFIG-DATA-16
- `name`: `WDG_STOP_SEC_CONFIG_DATA_16`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONFIG-DATA-32
- `name`: `WDG_STOP_SEC_CONFIG_DATA_32`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONFIG-DATA-8
- `name`: `WDG_STOP_SEC_CONFIG_DATA_8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: `WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONST
- `name`: `WDG_STOP_SEC_CONST_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONST-16
- `name`: `WDG_STOP_SEC_CONST_16`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONST-32
- `name`: `WDG_STOP_SEC_CONST_32`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONST-8
- `name`: `WDG_STOP_SEC_CONST_8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-WDG-STOP-SEC-CONST-BOOLEAN
- `name`: `WDG_STOP_SEC_CONST_BOOLEAN`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR
- `name`: `WDG_STOP_SEC_VAR_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR-NO-INIT
- `name`: `WDG_STOP_SEC_VAR_NO_INIT_`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR-NO-INIT-16
- `name`: `WDG_STOP_SEC_VAR_NO_INIT_16`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR-NO-INIT-32
- `name`: `WDG_STOP_SEC_VAR_NO_INIT_32`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR-NO-INIT-8
- `name`: `WDG_STOP_SEC_VAR_NO_INIT_8`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: `WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN`
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p8`: "WDG_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-WDG-START-SEC-VAR-2
- `name`: `WDG_START_SEC_VAR`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "WDG_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-WDG-STOP-SEC-VAR-2
- `name`: `WDG_STOP_SEC_VAR`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "WDG_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### FILE-WDG-HLD-C
- `name`: `Wdg_HLD.c`
- `type`: `file`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p10`: "Wdg_HLD.c:"
- `aliases`: []

### API-WDG-HLD-CHANNELTRIGGER
- `name`: `Wdg_HLD_ChannelTrigger`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "Wdg_HLD_ChannelTrigger: exclusive area 0"
- `aliases`: []

### API-WDG-HLD-INIT
- `name`: `Wdg_HLD_Init`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "Wdg_HLD_Init: exclusive area 1"
- `aliases`: []

### API-WDG-HLD-SETMODE
- `name`: `Wdg_HLD_SetMode`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "Wdg_HLD_SetMode: exclusive area 2"
- `aliases`: []

### API-WDG-HLD-SETTRIGGERCONDITION
- `name`: `Wdg_HLD_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 4 Exclusive Area"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "Wdg_HLD_SetTriggerCondition: exclusive area 3"
- `aliases`: []

### TERM-WATCHDOG
- `name`: `Watchdog`
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p11`: "Watchdog 0"
- `aliases`: []

### TERM-WDOG
- `name`: `WDOG`
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,15`
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p11`: "WDOG0_IRQHandler"
  - `p15`: "WDOG0_IRQHandler"
- `aliases`: []

### TERM-WDOG0
- `name`: `WDOG0`
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,15`
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)", "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p11`: "WDOG0_IRQHandler"
  - `p15`: "WDOG0_IRQHandler"
- `aliases`: []

### TERM-WDOG1
- `name`: `WDOG1`
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p11`: "WDOG1_IRQHandler"
- `aliases`: []

### TERM-WDOG2
- `name`: `WDOG2`
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 5 Interrupt Service Routine (ISR)"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p11`: "WDOG2_IRQHandler"
- `aliases`: []

### MACRO-WDG-E-DRIVER-STATE
- `name`: `WDG_E_DRIVER_STATE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "WDG_E_DRIVER_STATE;"
- `aliases`: []

### MACRO-WDG-E-INIT-FAILED
- `name`: `WDG_E_INIT_FAILED`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "WDG_E_INIT_FAILED;"
- `aliases`: []

### MACRO-WDG-E-PARAM-CONFIG
- `name`: `WDG_E_PARAM_CONFIG`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "WDG_E_PARAM_CONFIG;"
- `aliases`: []

### MACRO-WDG-E-PARAM-MODE
- `name`: `WDG_E_PARAM_MODE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "WDG_E_PARAM_MODE;"
- `aliases`: []

### MACRO-WDG-E-PARAM-POINTER
- `name`: `WDG_E_PARAM_POINTER`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "WDG_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-WDG-E-PARAM-TIMEOUT
- `name`: `WDG_E_PARAM_TIMEOUT`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "WDG_E_PARAM_TIMEOUT"
- `aliases`: []

### API-WDG-INSTANCE0-GETVERSIONINFO
- `name`: `Wdg_Instance0_GetVersionInfo`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance0_GetVersionInfo"
- `aliases`: []

### API-WDG-INSTANCE0-INIT
- `name`: `Wdg_Instance0_Init`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,14`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance0_Init"
  - `p14`: "Wdg_Instance0_Init"
- `aliases`: []

### API-WDG-INSTANCE0-SETMODE
- `name`: `Wdg_Instance0_SetMode`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance0_SetMode"
- `aliases`: []

### API-WDG-INSTANCE0-SETTRIGGERCONDITION
- `name`: `Wdg_Instance0_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance0_SetTriggerCondition"
- `aliases`: []

### API-WDG-INSTANCE1-GETVERSIONINFO
- `name`: `Wdg_Instance1_GetVersionInfo`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance1_GetVersionInfo"
- `aliases`: []

### API-WDG-INSTANCE1-INIT
- `name`: `Wdg_Instance1_Init`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,14`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance1_Init"
  - `p14`: "Wdg_Instance1_Init"
- `aliases`: []

### API-WDG-INSTANCE1-SETMODE
- `name`: `Wdg_Instance1_SetMode`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance1_SetMode"
- `aliases`: []

### API-WDG-INSTANCE1-SETTRIGGERCONDITION
- `name`: `Wdg_Instance1_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance1_SetTriggerCondition"
- `aliases`: []

### API-WDG-INSTANCE2-GETVERSIONINFO
- `name`: `Wdg_Instance2_GetVersionInfo`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance2_GetVersionInfo"
- `aliases`: []

### API-WDG-INSTANCE2-INIT
- `name`: `Wdg_Instance2_Init`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,14`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls / 7.1 Function Calls during Startup"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance2_Init"
  - `p14`: "Wdg_Instance2_Init"
- `aliases`: []

### API-WDG-INSTANCE2-SETMODE
- `name`: `Wdg_Instance2_SetMode`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance2_SetMode"
- `aliases`: []

### API-WDG-INSTANCE2-SETTRIGGERCONDITION
- `name`: `Wdg_Instance2_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p12`: "Wdg_Instance2_SetTriggerCondition"
- `aliases`: []

### MACRO-WDG-E-DISABLE-REJECTED
- `name`: `WDG_E_DISABLE_REJECTED`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_E_DISABLE_REJECTED"
- `aliases`: []

### MACRO-WDG-E-MODE-FAILED
- `name`: `WDG_E_MODE_FAILED`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 6 Error Report / 6.2 Dem"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_E_MODE_FAILED"
- `aliases`: []

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `term`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p15`: "AUTOSAR_OS_NOT_USED need defined."
- `aliases`: []

### FILE-MCAL-H
- `name`: `Mcal.h`
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p15`: "Please have a look in various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-WDG-CFG-C
- `name`: `Wdg_cfg.c`
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p15`: "declaration will generate in Wdg_cfg.c. User can implement the notification in any file."
- `aliases`: []

### CFG-WDG-WDOG0-ISR
- `name`: `Wdg_Wdog0_Isr`
- `type`: `config`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p15`: "extern ISR(Wdg_Wdog0_Isr);"
- `aliases`: []

## 9. Search Aliases

### ALIAS-WDG
- `canonical`: `WDG`
- `aliases`: ["Watchdog", "Watchdog Driver", "WDOG", "看门狗", "看门狗驱动", "AUTOSAR WDG", "Wdg module"]
- `related_ids`: ["TERM-WDG", "TERM-WATCHDOG"]

### ALIAS-WDOG
- `canonical`: `WDOG`
- `aliases`: ["Watchdog Timer", "WDOG module", "hardware watchdog", "WDOG0", "WDOG1", "WDOG2", "watchdog hardware", "看门狗定时器"]
- `related_ids`: ["TERM-WDOG"]

### ALIAS-WDG-API
- `canonical`: `WDG API`
- `aliases`: ["Wdg_Instance0_Init", "Wdg_Instance1_Init", "Wdg_Instance2_Init", "Wdg_Instancex_Init", "Wdg_SetMode", "Wdg_SetTriggerCondition", "Wdg_GetVersionInfo", "Wdg_Cbk_GptNotification"]
- `related_ids`: []

### ALIAS-WDG-CONFIG
- `canonical`: `WDG configuration`
- `aliases`: ["WdgSettingsConfig", "WdgGeneral", "WdgInstance", "WdgSettingsFast", "WdgSettingsSlow", "WdgClockSelection", "WdgTimeoutPeriod", "WdgWindowPeriod", "EB tresos WDG", "看门狗配置"]
- `related_ids`: []

### ALIAS-WDG-MODE
- `canonical`: `WDG mode`
- `aliases`: ["WdgOperationMode", "WdgIf_ModeType", "fast mode", "slow mode", "off mode", "ResetOnTimeOut", "Interrupt", "Window mode", "Regular mode"]
- `related_ids`: []

### ALIAS-WDG-ERROR
- `canonical`: `WDG errors`
- `aliases`: ["WDG_E_DRIVER_STATE", "WDG_E_PARAM_MODE", "WDG_E_PARAM_CONFIG", "WDG_E_PARAM_TIMEOUT", "WDG_E_PARAM_POINTER", "WDG_E_INIT_FAILED", "DET", "DEM", "Det_ReportError", "Dem Event"]
- `related_ids`: []

### ALIAS-WDG-INTEGRATION
- `canonical`: `WDG integration`
- `aliases`: ["Wdg integration manual", "Files Required for Compile", "Memory Map", "Exclusive Area", "ISR", "Add Plug-ins", "SchM_Wdg", "EB plugins"]
- `related_ids`: []

### ALIAS-WDG-GPT
- `canonical`: `GPT dog feeding`
- `aliases`: ["Gpt periodic dog feeding", "wdgGPTTriggerChannel", "Wdg_Cbk_GptNotification0", "Wdg_Cbk_GptNotification1", "Wdg_Cbk_GptNotification2", "trigger condition", "refresh watchdog"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between WDG_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `WDG_Integration_Manual.pdf`
- `source_pdf_sha256`: `9d23648c205f276ad690e48774b08b079990205da63a7f2f1cca3bc657ebae88`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `35`
- `technical_missing_terms_added`: `3`
- `pages_with_added_terms`: `15`
- `supplemented_missing_token_count`: `35`
- `supplemented_missing_technical_token_count`: `3`
- `supplemented_physical_pages_count`: `15`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.3"
  - "3.0"
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
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "common"
  - "enabled"
  - "functionality"
  - "initialize"
  - "modules"
  - "necessary"
  - "related"
  - "set"

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
  - "EB_Plugins"
  - "Flagchip"
  - "Proprietary"
  - "Set"
  - "eclipse"
  - "location"
  - "output"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Configuration"
  - "Flagchip"
  - "INIT_8"
  - "Proprietary"
  - "Start"
  - "boolean"
  - "bss"
  - "cleared"
  - "never"
  - "read"
  - "rodata"
  - "stop"

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
  - "USE_SW_VECTOR_MODE"
  - "case"
  - "define"
  - "example"
  - "vector"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "locations"
  - "modules"
  - "their"
  - "vector"

## 10. Quality Warnings

### WARN-0001-NO-PDF-OUTLINE
- `severity`: `medium`
- `category`: `structure`
- `physical_pages`: `1`
- `affected_ids`: []
- `message`: "Source PDF has no embedded outline/bookmarks; Table of Contents Index was generated from visible TOC text and headings."
- `recommended_action`: "Use physical_page and anchors as authoritative locators."

### WARN-0002-OCR-NOT-RUN
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16`
- `affected_ids`: []
- `message`: "PDF has an extractable text layer; OCR was not run. Screenshots/diagrams are indexed semantically, not OCR-transcribed."
- `recommended_action`: "For exact text inside screenshots, inspect rendered source PDF pages."

### WARN-0003-TABLE-LIKE-REGIONS
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `2,8,9,11,12,13`
- `affected_ids`: ["TBL-0002-001", "TBL-0008-001", "TBL-0009-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001"]
- `message`: "Table Index includes PyMuPDF-detected tables and table-like regions; full cell grid reconstruction is not treated as authoritative."
- `recommended_action`: "Use table entries for navigation and verify exact cell values in the source PDF."

### WARN-0006-NO-SWS-IDS
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16`
- `affected_ids`: []
- `message`: "No SWS_Wdg_* or ECUC_Wdg_* requirement identifiers were detected."
- `recommended_action`: "Use section/config/API anchors for retrieval."

## 11. Self Check Report

### PAGE-COVERAGE
- `pdf_page_count`: `16`
- `indexed_physical_pages_count`: `16`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `coverage_status`: `pass`

### SECTION-RANGE-CHECK
- `section_count`: `25`
- `invalid_ranges`: `[]`
- `sections_without_pages`: `[]`
- `status`: `pass`

### INDEX-INTEGRITY
- `table_count`: `6`
- `figure_count`: `0`
- `symbol_count`: `160`
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `invalid_ids`: `[]`
- `status`: `pass`

### TABLE-FIGURE-INTEGRITY
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `tables_without_caption_or_anchor`: []
- `figures_without_caption_or_anchor`: []
- `status`: `pass`

### SOURCE-INTEGRITY
- `source_pdf_sha256`: `9d23648c205f276ad690e48774b08b079990205da63a7f2f1cca3bc657ebae88`
- `manifest_source_pdf_sha256`: `9d23648c205f276ad690e48774b08b079990205da63a7f2f1cca3bc657ebae88`
- `sha256_match`: `true`
- `status`: `pass`

### OVERALL
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `35`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `overall_status`: `pass_with_warnings`
- `staleness_rule`: `Regenerate this Manifest whenever source_pdf_sha256 changes.`
