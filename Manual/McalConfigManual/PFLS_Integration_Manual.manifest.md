---
manifest_schema_version: "1.1"
source_pdf: "PFLS_Integration_Manual.pdf"
source_pdf_sha256: "7a82c2a7a6c3f0f27320e7b04cbc26309aaa6c41cfa0a28a3f140cfd460ed34f"
source_pdf_size_bytes: 910592
pdf_page_count: 13
generated_at: "2026-06-19T14:01:21Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: PFLS_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `PFLS_Integration_Manual.pdf`
- `source_pdf_sha256`: `7a82c2a7a6c3f0f27320e7b04cbc26309aaa6c41cfa0a28a3f140cfd460ed34f`
- `source_pdf_size_bytes`: `910592`
- `pdf_page_count`: `13`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx FLS Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/07/14 / Initial release for MCAL V0.1.0`
- `generated_at`: `2026-06-19T14:01:21Z`
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

- `topic`: "FC7xxx AUTOSAR MCAL PFLS module - Integration Manual"
- `module_scope`: "PFLS module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Error Report", "Chapter 6 Function Calls", "Chapter 7 Other Requirements", "Chapter 8 Integration Steps"]
- `key_terms`: ["PFLS", "Platform Flash Driver / Program Flash Driver", "AUTOSAR_SWS_FlashDriver or vendor-specific platform flash driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Pfls", "Pfls_", "Fls", "FLS", "PFlash"]
- `summary`: "This 13-page integration manual indexes PFLS content across source physical pages 1-13, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["FLS", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx FLS Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["FLS", "FC7xxx", "MCAL", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Integration", "Memory", "Dependencies", "Modules", "Required"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Integration", "Memory", "Dependencies", "Modules", "Required"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["FLS", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["FLS", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Fls", "FLS", "Src", "include", "ins", "FC7xxx", "Fls_Flash", "Fls_IPW"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Fls", "FLS", "Src", "include", "Fls_Flash", "Fls_IPW", "FC7xxx", "APIs"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Fls", "FLS", "Src", "include", "Fls_Flash", "Fls_IPW", "FC7xxx", "APIs"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["FLS", "ins", "plug", "folder", "FC7xxx", "SchM_Fls", "EB_Plugins", "tresos"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["FLS", "These", "UNSPECIFIED", "FLS_START_SEC_VAR", "FLS_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["FLS", "These", "UNSPECIFIED", "FLS_START_SEC_VAR", "FLS_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["FLS", "Fls", "exclusive", "area", "FC7xxx", "SchM", "Fls_Flash", "Fls_Flash_Erase"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Error Report"
- `path`: "Chapter 5 Error Report"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["FLS", "FLS_E_UNINIT", "FLS_E_BUSY", "FLS_E_PARAM_ADDRESS", "FLS_E_PARAM_LENGTH", "FLS_E_PARAM_DATA", "FC7xxx", "Fls_Init"]
- `anchor`: "Chapter 5 Error Report"

### SEC-005-001
- `source_number`: `5.1`
- `title`: "Det"
- `path`: "Chapter 5 Error Report / 5.1 Det"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["FLS", "FLS_E_UNINIT", "FLS_E_BUSY", "FLS_E_PARAM_ADDRESS", "FLS_E_PARAM_LENGTH", "FLS_E_PARAM_DATA", "FC7xxx", "Fls_Init"]
- `anchor`: "5.1"

### SEC-005-002
- `source_number`: `5.2`
- `title`: "Dem"
- `path`: "Chapter 5 Error Report / 5.2 Dem"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["FLS", "FLS_E_UNINIT", "FLS_E_BUSY", "FLS_E_PARAM_ADDRESS", "FLS_E_PARAM_LENGTH", "FLS_E_PARAM_DATA", "FC7xxx", "Fls_Init"]
- `anchor`: "5.2"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Function Calls"
- `path`: "Chapter 6 Function Calls"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr", "Fls_MainFunction", "needs", "called"]
- `anchor`: "Chapter 6 Function Calls"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr", "Fls_MainFunction", "needs", "called"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 6 Function Calls / 6.2 Function Calls during Shutdown"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr", "Fls_MainFunction", "needs", "called"]
- `anchor`: "6.2"

### SEC-006-003
- `source_number`: `6.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 6 Function Calls / 6.3 Function Calls during Wake-up"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr", "Fls_MainFunction", "needs", "called"]
- `anchor`: "6.3"

### SEC-006-004
- `source_number`: `6.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 6 Function Calls / 6.4 Function Calls during Runtime"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr", "Fls_MainFunction", "needs", "called"]
- `anchor`: "6.4"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Other Requirements"
- `path`: "Chapter 7 Other Requirements"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["FLS", "Fls_Cfg", "FC7xxx", "NULL_PTR", "Notification", "Callback", "Callout", "Integration"]
- `anchor`: "Chapter 7 Other Requirements"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["FLS", "Fls_Cfg", "FC7xxx", "NULL_PTR", "Notification", "Callback", "Callout", "Integration"]
- `anchor`: "7.1"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Integration Steps"
- `path`: "Chapter 8 Integration Steps"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["FLS", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 Introduction ............................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the FLS module."]

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
- `anchors`: ["Rte module files:", "SchM_Fls.h", "2.3", "Add Plug-ins"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "FLS_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "FLS module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the FLS driver:", "Fls_Flash.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 5 Error Report", "5.1", "Det", "Function Name"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 6 Function Calls", "6.1", "Function Calls during Startup", "The API needs to be called is Fls_Init(ConfigPtr);"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `anchors`: ["Chapter 7 Other Requirements", "7.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 8 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Integration Steps", "1)", "Configure the FLS module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx FLS Integration Manual"
- `keywords`: ["FLS", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx FLS Integration Manual; Revision History; 0.1"
- `keywords`: ["FLS", "FC7xxx", "MCAL", "Integration", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "toc", "table"]
- `summary`: "Revision History: FC7xxx FLS Integration Manual; Table of Contents; Revision History ............................................................................................................................................................... 2"
- `keywords`: ["FLS", "Calls", "FC7xxx", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile", "Add"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx FLS Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["FLS", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the FLS module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx FLS Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Fls", "FLS", "Src", "include", "Fls_Flash", "Fls_IPW", "FC7xxx", "APIs", "Det", "Fcfmc_Regs"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx FLS Integration Manual; Rte module files:; SchM_Fls.h"
- `keywords`: ["FLS", "ins", "plug", "folder", "FC7xxx", "SchM_Fls", "EB_Plugins", "tresos", "plugins", "Integration"]
- `anchors`:
  - `p6`: "Rte module files:"
  - `p6`: "SchM_Fls.h"
  - `p6`: "2.3"
  - `p6`: "Add Plug-ins"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx FLS Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["FLS", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx FLS Integration Manual; Section Name; Section Type"
- `keywords`: ["FLS", "FLS_START_SEC_VAR", "FLS_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "FLS_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx FLS Integration Manual; Chapter 4 Exclusive Area; FLS module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["FLS", "Fls", "exclusive", "area", "FC7xxx", "SchM", "Fls_Flash", "Fls_Flash_Erase", "Fls_Flash_Write", "Fls_Erase"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "FLS module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the FLS driver:"
  - `p9`: "Fls_Flash.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 5 Error Report / 5.1 Det: FC7xxx FLS Integration Manual; Chapter 5 Error Report; 5.1"
- `keywords`: ["FLS", "FLS_E_UNINIT", "FLS_E_BUSY", "FLS_E_PARAM_ADDRESS", "FLS_E_PARAM_LENGTH", "FLS_E_PARAM_DATA", "FC7xxx", "Fls_Init", "FLS_E_PARAM_CONFIG", "Fls_Erase"]
- `anchors`:
  - `p10`: "Chapter 5 Error Report"
  - `p10`: "5.1"
  - `p10`: "Det"
  - `p10`: "Function Name"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup: FC7xxx FLS Integration Manual; Chapter 6 Function Calls; 6.1"
- `keywords`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr", "Fls_MainFunction", "needs", "called", "Integration"]
- `anchors`:
  - `p11`: "Chapter 6 Function Calls"
  - `p11`: "6.1"
  - `p11`: "Function Calls during Startup"
  - `p11`: "The API needs to be called is Fls_Init(ConfigPtr);"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `summary`: "Chapter 7 Other Requirements / 7.1 Notification, Callback, Callout: FC7xxx FLS Integration Manual; Chapter 7 Other Requirements; 7.1"
- `keywords`: ["FLS", "Fls_Cfg", "FC7xxx", "NULL_PTR", "Notification", "Callback", "Callout", "Integration", "configures", "notifications"]
- `anchors`:
  - `p12`: "Chapter 7 Other Requirements"
  - `p12`: "7.1"
  - `p12`: "Notification, Callback, Callout"
  - `p12`: "Notification"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Integration Steps: FC7xxx FLS Integration Manual; Chapter 8 Integration Steps; 1)"
- `keywords`: ["FLS", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p13`: "Chapter 8 Integration Steps"
  - `p13`: "1)"
  - `p13`: "Configure the FLS module and generate configuration files (please refer to Building chapter for details)."
  - `p13`: "2)"

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
- `key_fields`: ["Fls", "FLS", "Src", "include", "Fls_Flash"]
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
- `key_fields`: ["FLS", "ins", "plug", "folder", "FC7xxx"]
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
- `section_path`: "Chapter 5 Error Report / 5.1 Det"
- `bbox`: `[30.6, 123.1, 564.72, 706.04]`
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
- `section_path`: "Chapter 6 Function Calls / 6.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["FLS", "Calls", "FC7xxx", "Fls_Init", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 11; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 11"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-FLS-INIT
- `name`: "Fls_Init"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Fls_Init`."
- `anchors`:
  - `p10`: "Fls_Init"
  - `p11`: "The API needs to be called is Fls_Init(ConfigPtr);"
- `aliases`: []

### API-FLS-MAINFUNCTION
- `name`: "Fls_MainFunction"
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "api index entry for `Fls_MainFunction`."
- `anchors`:
  - `p10`: "Fls_MainFunction"
  - `p11`: "The API needs to be called is Fls_MainFunction ();"
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
  - `p9`: "FLS module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### MACRO-FLS-E-UNINIT
- `name`: "FLS_E_UNINIT"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_UNINIT`."
- `anchors`:
  - `p10`: "FLS_E_UNINIT"
- `aliases`: []

### MACRO-FLS-E-BUSY
- `name`: "FLS_E_BUSY"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_BUSY`."
- `anchors`:
  - `p10`: "FLS_E_BUSY"
- `aliases`: []

### MACRO-FLS-E-PARAM-ADDRESS
- `name`: "FLS_E_PARAM_ADDRESS"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_PARAM_ADDRESS`."
- `anchors`:
  - `p10`: "FLS_E_PARAM_ADDRESS"
- `aliases`: []

### MACRO-FLS-E-PARAM-LENGTH
- `name`: "FLS_E_PARAM_LENGTH"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_PARAM_LENGTH`."
- `anchors`:
  - `p10`: "FLS_E_PARAM_LENGTH"
- `aliases`: []

### MACRO-FLS-E-PARAM-DATA
- `name`: "FLS_E_PARAM_DATA"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_PARAM_DATA`."
- `anchors`:
  - `p10`: "FLS_E_PARAM_DATA"
- `aliases`: []

### MACRO-FLS-START-SEC-VAR
- `name`: "FLS_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `FLS_START_SEC_VAR`."
- `anchors`:
  - `p8`: "FLS_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-FLS-STOP-SEC-VAR
- `name`: "FLS_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `FLS_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "FLS_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-FLS-START-SEC-CODE
- `name`: "FLS_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CODE`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CODE"
- `aliases`: []

### MACRO-FLS-START-SEC-CODE-AC
- `name`: "FLS_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-FLS-START-SEC-CONFIG-DATA-16
- `name`: "FLS_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-FLS-START-SEC-CONFIG-DATA-32
- `name`: "FLS_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-FLS-START-SEC-CONFIG-DATA-8
- `name`: "FLS_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-FLS-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "FLS_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-FLS-START-SEC-CONST-16
- `name`: "FLS_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONST_16"
- `aliases`: []

### MACRO-FLS-START-SEC-CONST-32
- `name`: "FLS_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONST_32"
- `aliases`: []

### MACRO-FLS-START-SEC-CONST-8
- `name`: "FLS_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONST_8"
- `aliases`: []

### MACRO-FLS-START-SEC-CONST-BOOLEAN
- `name`: "FLS_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-FLS-START-SEC-VAR-NO-INIT-16
- `name`: "FLS_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-FLS-START-SEC-VAR-NO-INIT-32
- `name`: "FLS_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-FLS-START-SEC-VAR-NO-INIT-8
- `name`: "FLS_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-FLS-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "FLS_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CODE
- `name`: "FLS_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CODE"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CODE-AC
- `name`: "FLS_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONFIG-DATA-16
- `name`: "FLS_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONFIG-DATA-32
- `name`: "FLS_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONFIG-DATA-8
- `name`: "FLS_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONST-16
- `name`: "FLS_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONST-32
- `name`: "FLS_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONST-8
- `name`: "FLS_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-FLS-STOP-SEC-CONST-BOOLEAN
- `name`: "FLS_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-FLS-STOP-SEC-VAR-NO-INIT-16
- `name`: "FLS_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-FLS-STOP-SEC-VAR-NO-INIT-32
- `name`: "FLS_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-FLS-STOP-SEC-VAR-NO-INIT-8
- `name`: "FLS_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-FLS-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-FLS-E-PARAM-CONFIG
- `name`: "FLS_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_PARAM_CONFIG`."
- `anchors`:
  - `p10`: "FLS_E_PARAM_CONFIG"
- `aliases`: []

### MACRO-FLS-E-PARAM-POINTER
- `name`: "FLS_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_PARAM_POINTER`."
- `anchors`:
  - `p10`: "FLS_E_PARAM_POINTER"
- `aliases`: []

### MACRO-FLS-E-VERIFY-ERASE-FAILED
- `name`: "FLS_E_VERIFY_ERASE_FAILED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_VERIFY_ERASE_FAILED`."
- `anchors`:
  - `p10`: "FLS_E_VERIFY_ERASE_FAILED"
- `aliases`: []

### MACRO-FLS-E-VERIFY-WRITE-FAILED
- `name`: "FLS_E_VERIFY_WRITE_FAILED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `FLS_E_VERIFY_WRITE_FAILED`."
- `anchors`:
  - `p10`: "FLS_E_VERIFY_WRITE_FAILED"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p12`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"
- `aliases`: []

### MEM-FLS-START-SEC-VAR
- `name`: "FLS_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR
- `name`: "FLS_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-FLS-START-SEC
- `name`: "FLS_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-FLS-START-SEC-CONST
- `name`: "FLS_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-FLS-START-SEC-CONST-UNSPECIFIED
- `name`: "FLS_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "FLS_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-FLS-START-SEC-RAMCODE
- `name`: "FLS_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "FLS_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-INIT-16
- `name`: "FLS_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "FLS_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-INIT-32
- `name`: "FLS_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "FLS_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-INIT-8
- `name`: "FLS_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-INIT-BOOLEAN
- `name`: "FLS_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "FLS_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "FLS_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-NO-INIT
- `name`: "FLS_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-FLS-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "FLS_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "FLS_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-FLS-STOP-SEC
- `name`: "FLS_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-FLS-STOP-SEC-CONST
- `name`: "FLS_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-FLS-STOP-SEC-CONST-UNSPECIFIED
- `name`: "FLS_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-FLS-STOP-SEC-RAMCODE
- `name`: "FLS_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-INIT-16
- `name`: "FLS_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "FLS_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-INIT-32
- `name`: "FLS_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "FLS_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-INIT-8
- `name`: "FLS_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "FLS_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "FLS_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "FLS_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-NO-INIT
- `name`: "FLS_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-FLS-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "FLS_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `FLS_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "FLS_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-FLS-CFG-H
- `name`: "Fls_Cfg.h"
- `type`: `file`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "file index entry for `Fls_Cfg.h`."
- `anchors`:
  - `p12`: "Fls_Cfg.h. User need implement the notification in any file which include Fls_Cfg.h."
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

### FILE-FLS-C
- `name`: "Fls.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Fls.c`."
- `anchors`:
  - `p9`: "Fls.c:"
- `aliases`: []

### FILE-FLS-FLASH-C
- `name`: "Fls_Flash.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Fls_Flash.c`."
- `anchors`:
  - `p9`: "Fls_Flash.c:"
- `aliases`: []

### FILE-FLS-IPW-C
- `name`: "Fls_IPW.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `Fls_IPW.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/Src/ Fls_IPW.c"
- `aliases`: []

### FILE-SCHM-FLS-H
- `name`: "SchM_Fls.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Fls.h`."
- `anchors`:
  - `p6`: "SchM_Fls.h"
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

### FILE-MCAL-SRC-FLS-SRC-FLS-C
- `name`: "_MCAL/Src/Fls/Src/Fls.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/Src/Fls.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/Src/Fls.c"
- `aliases`: []

### FILE-MCAL-SRC-FLS-SRC-FLS-FLASH-C
- `name`: "_MCAL/Src/Fls/Src/Fls_Flash.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/Src/Fls_Flash.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/Src/Fls_Flash.c"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FCFMC-REGS-H
- `name`: "_MCAL/Src/Fls/include/Fcfmc_Regs.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fcfmc_Regs.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fcfmc_Regs.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-H
- `name`: "_MCAL/Src/Fls/include/Fls.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-DRIVER-H
- `name`: "_MCAL/Src/Fls/include/Fls_Driver.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_Driver.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Driver.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-FLASH-H
- `name`: "_MCAL/Src/Fls/include/Fls_Flash.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_Flash.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Flash.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-FLASH-TYPES-H
- `name`: "_MCAL/Src/Fls/include/Fls_Flash_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_Flash_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Flash_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-IPW-H
- `name`: "_MCAL/Src/Fls/include/Fls_IPW.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_IPW.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_IPW.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-MEMMAP-H
- `name`: "_MCAL/Src/Fls/include/Fls_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-TYPES-H
- `name`: "_MCAL/Src/Fls/include/Fls_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-FLS-INCLUDE-FLS-VERSION-H
- `name`: "_MCAL/Src/Fls/include/Fls_version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Fls/include/Fls_version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-FLS-CFG-H
- `name`: "_MCAL_generate/include/Fls_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Fls_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Fls_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-FLS-PBCFG-C
- `name`: "_MCAL_generate/src/Fls_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Fls_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Fls_PBcfg.c"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,10`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p10`: "Det"
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

### TERM-FLS-CFG
- `name`: "Fls_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,12`
- `brief`: "term index entry for `Fls_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Fls_Cfg.h"
  - `p12`: "Fls_Cfg.h. User need implement the notification in any file which include Fls_Cfg.h."
- `aliases`: []

### TERM-FLS-FLASH
- `name`: "Fls_Flash"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `Fls_Flash`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/Src/Fls_Flash.c"
  - `p9`: "Fls_Flash.c:"
- `aliases`: []

### TERM-FLS-BLANKCHECK
- `name`: "Fls_BlankCheck"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Fls_BlankCheck`."
- `anchors`:
  - `p9`: "Fls_BlankCheck: exclusive area 14"
  - `p10`: "Fls_BlankCheck"
- `aliases`: []

### TERM-FLS-COMPARE
- `name`: "Fls_Compare"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Fls_Compare`."
- `anchors`:
  - `p9`: "Fls_Compare: exclusive area 13"
  - `p10`: "Fls_Compare"
- `aliases`: []

### TERM-FLS-ERASE
- `name`: "Fls_Erase"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Fls_Erase`."
- `anchors`:
  - `p9`: "Fls_Erase: exclusive area 10"
  - `p10`: "Fls_Erase"
- `aliases`: []

### TERM-FLS-READ
- `name`: "Fls_Read"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Fls_Read`."
- `anchors`:
  - `p9`: "Fls_Read : exclusive area 12"
  - `p10`: "Fls_Read"
- `aliases`: []

### TERM-FLS-WRITE
- `name`: "Fls_Write"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,10`
- `brief`: "term index entry for `Fls_Write`."
- `anchors`:
  - `p9`: "Fls_Write: exclusive area 11"
  - `p10`: "Fls_Write"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p10`: "Dem"
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

### TERM-FLS-IPW
- `name`: "Fls_IPW"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_IPW`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/Src/ Fls_IPW.c"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p1`: "AUTOSAR"
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
  - `p6`: "Copy FLS module (_MCAL/EB_Plugins/eclipse/plugins/ FLS) folder to EB tresos plug-ins (EB/tresos/plugins/) folder."
- `aliases`: []

### TERM-FCFMC-REGS
- `name`: "Fcfmc_Regs"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fcfmc_Regs`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fcfmc_Regs.h"
- `aliases`: []

### TERM-FLS-CANCEL
- `name`: "Fls_Cancel"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Fls_Cancel`."
- `anchors`:
  - `p10`: "Fls_Cancel"
- `aliases`: []

### TERM-FLS-DRIVER
- `name`: "Fls_Driver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_Driver`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Driver.h"
- `aliases`: []

### TERM-FLS-FLASH-ERASE
- `name`: "Fls_Flash_Erase"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Fls_Flash_Erase`."
- `anchors`:
  - `p9`: "Fls_Flash_Erase: exclusive area 0"
- `aliases`: []

### TERM-FLS-FLASH-TYPES
- `name`: "Fls_Flash_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_Flash_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Flash_Types.h"
- `aliases`: []

### TERM-FLS-FLASH-VERIFYERASE
- `name`: "Fls_Flash_VerifyErase"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Fls_Flash_VerifyErase`."
- `anchors`:
  - `p10`: "Fls_Flash_VerifyErase"
- `aliases`: []

### TERM-FLS-FLASH-VERIFYWRITE
- `name`: "Fls_Flash_VerifyWrite"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Fls_Flash_VerifyWrite`."
- `anchors`:
  - `p10`: "Fls_Flash_VerifyWrite"
- `aliases`: []

### TERM-FLS-FLASH-WRITE
- `name`: "Fls_Flash_Write"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Fls_Flash_Write`."
- `anchors`:
  - `p9`: "Fls_Flash_Write: exclusive area 1"
- `aliases`: []

### TERM-FLS-GETJOBRESULT
- `name`: "Fls_GetJobResult"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Fls_GetJobResult`."
- `anchors`:
  - `p10`: "Fls_GetJobResult"
- `aliases`: []

### TERM-FLS-GETVERSIONINFO
- `name`: "Fls_GetVersionInfo"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Fls_GetVersionInfo`."
- `anchors`:
  - `p10`: "Fls_GetVersionInfo"
- `aliases`: []

### TERM-FLS-MEMMAP
- `name`: "Fls_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_MemMap.h"
- `aliases`: []

### TERM-FLS-PBCFG
- `name`: "Fls_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Fls_PBcfg.c"
- `aliases`: []

### TERM-FLS-SETMODE
- `name`: "Fls_SetMode"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Fls_SetMode`."
- `anchors`:
  - `p10`: "Fls_SetMode"
- `aliases`: []

### TERM-FLS-TYPES
- `name`: "Fls_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_Types.h"
- `aliases`: []

### TERM-FLS-VERSION
- `name`: "Fls_version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Fls_version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Fls/include/Fls_version.h"
- `aliases`: []

### TERM-PFLS
- `name`: "PFLS"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `PFLS`."
- `anchors`:
  - `p1`: "PFLS"
- `aliases`: []

### TERM-PLATFORM-FLASH-DRIVER-PROGRAM-FLASH-DRIVER
- `name`: "Platform Flash Driver / Program Flash Driver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Platform Flash Driver / Program Flash Driver`."
- `anchors`:
  - `p5`: "Platform Flash Driver / Program Flash Driver"
- `aliases`: []

### TERM-SCHM-FLS
- `name`: "SchM_Fls"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Fls`."
- `anchors`:
  - `p6`: "SchM_Fls.h"
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

### ALIAS-PFLS
- `canonical`: "PFLS"
- `aliases`: ["Platform Flash Driver / Program Flash Driver", "平台 Flash / 程序 Flash 驱动", "PFLS module", "PFLS driver", "PFLS User Manual", "PFLS Integration Manual"]
- `related_ids`: ["TERM-PFLS"]

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
- `purpose`: `Close keyword lookup gaps between PFLS_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `PFLS_Integration_Manual.pdf`
- `source_pdf_sha256`: `7a82c2a7a6c3f0f27320e7b04cbc26309aaa6c41cfa0a28a3f140cfd460ed34f`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `52`
- `technical_missing_terms_added`: `2`
- `pages_with_added_terms`: `12`
- `supplemented_missing_token_count`: `52`
- `supplemented_missing_technical_token_count`: `2`
- `supplemented_physical_pages_count`: `12`
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
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "common"
  - "detection"
  - "enabling"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "parts"
  - "protect"
  - "provides"
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
  - "tools"
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

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

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
- `severity`: `low`
- `category`: `sparse_text`
- `physical_pages`: `1`
- `affected_ids`: []
- `message`: "Detected 1 sparse-text page(s), usually cover/blank/diagram-heavy pages."
- `recommended_action`: "Use page render/source PDF for visual confirmation."

### WARN-0004
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `3,5,6,10,11`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0010-001", "TBL-0011-001"]
- `message`: "5 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
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
- `pdf_page_count`: `13`
- `indexed_physical_pages_count`: `13`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `24`
- `table_index_count`: `8`
- `figure_index_count`: `0`
- `symbol_index_count`: `129`
- `alias_index_count`: `7`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `7a82c2a7a6c3f0f27320e7b04cbc26309aaa6c41cfa0a28a3f140cfd460ed34f`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `52`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->