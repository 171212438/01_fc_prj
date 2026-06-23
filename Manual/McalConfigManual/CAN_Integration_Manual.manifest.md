---
manifest_schema_version: "1.1"
source_pdf: "CAN_Integration_Manual.pdf"
source_pdf_sha256: "1374b31714c3cda3ab09284b6802550568e1247e37ae62bd744e09284adc4756"
source_pdf_size_bytes: 1066084
pdf_page_count: 15
generated_at: "2026-06-19T23:50:45Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.8.0-file-library-best-effort"
source_file_library_id: "file_0000000080fc720b9bf9d6dbd75e4afe"
source_file_created_at: "2026-06-19T09:08:24Z"
source_file_modified_at: "2026-06-19T09:08:24Z"
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
manifest_role: "structured retrieval index; not a replacement for source PDF original content"
overall_status: "pass_with_warnings"
---

# PDF Manifest: CAN_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is a structured retrieval index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the local PDF bytes differ from the source identity recorded below.

## 1. Document Metadata

- `source_pdf`: `CAN_Integration_Manual.pdf`
- `source_pdf_sha256`: `1374b31714c3cda3ab09284b6802550568e1247e37ae62bd744e09284adc4756`
- `source_pdf_size_bytes`: `1066084`
- `pdf_page_count`: `15`
- `source_file_library_id`: `file_0000000080fc720b9bf9d6dbd75e4afe`
- `source_file_created_at`: `2026-06-19T09:08:24Z`
- `source_file_modified_at`: `2026-06-19T09:08:24Z`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx CAN Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/07/14 / Initial release for MCAL V0.1.0`
- `generated_at`: `2026-06-19T23:50:45Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.8.0-file-library-best-effort`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available_in_file_library_snippets`
- `text_extraction_engine`: `File Library parsed text snippets + local pypdf 6.10.0 text-layer supplement`
- `image_extraction_policy`: `index observed visual/diagram/screenshot anchors; do not OCR screenshots by default`
- `page_numbering_policy`: `physical_page is 1-based PDF page index; printed_page is a source-visible footer label only`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL CAN module - Integration Manual"
- `module_scope`: "CAN integration dependencies, build files, plug-ins, memory map, exclusive areas, ISR, DET/DEM reporting, function-call expectations, other requirements and integration steps."
- `key_chapters`: ["Chapter 2 Building", "Chapter 3 Memory", "Chapter 6 Error Report", "Chapter 9 Integration Steps"]
- `key_terms`: ["CAN", "Mcu", "Port", "Common", "OS", "EcuM", "Det", "Rte", "CanIf", "MemMap", "Can_MainFunction_Wakeup", "Can_MainFunction_Mode"]
- `summary`: "This 15-page integration manual Manifest indexes all physical pages 1-15, emphasizing build dependencies/files, memory sections, DET/DEM error mapping, and integration steps for the CAN module."
- `retrieval_note`: "Use Page Locator Map first, then Table/Symbol indexes for API/error/memory-section lookups."

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["CAN", "FC7xxx", "Integration", "Rev.0.1"]
- `anchor`: "FC7xxx CAN Integration Manual"
- `range_confidence`: `0.8`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["CAN", "revision", "MCAL V0.1.0"]
- `anchor`: "Revision History"
- `range_confidence`: `0.95`

### SEC-0003-TOC
- `source_number`: `null`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["CAN", "contents", "building", "memory", "DET", "integration steps"]
- `anchor`: "Table of Contents"
- `range_confidence`: `0.96`

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["CAN", "integration requirements"]
- `anchor`: "Chapter 1 Introduction"
- `range_confidence`: `0.95`

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["CAN", "integration requirements"]
- `anchor`: "1.1 Introduction"
- `range_confidence`: `0.95`

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["dependencies", "compile", "plug-ins", "Can.c", "Can_Hw.c"]
- `anchor`: "Chapter 2 Building"
- `range_confidence`: `0.92`

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mcu", "Port", "Common", "OS", "EcuM", "Det", "CanIf"]
- `anchor`: "2.1 Dependencies on Other Modules"
- `range_confidence`: `0.92`

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Can.c", "Can_Hw.c", "Can_Hal.c", "Can_Irq.c", "Can.h", "Can_Cfg"]
- `anchor`: "2.2 Files Required for Compile"
- `range_confidence`: `0.88`

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["plugin", "Tresos"]
- `anchor`: "2.3 Add Plug-ins"
- `range_confidence`: `0.75`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["memory map", "CAN_START_SEC", "CAN_STOP_SEC"]
- `anchor`: "Chapter 3 Memory"
- `range_confidence`: `0.94`

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["CAN_START_SEC_VAR_INIT_16", "CAN_START_SEC_VAR_INIT_32", "CAN_START_SEC_VAR_INIT_UNSPECIFIED"]
- `anchor`: "3.1 Sections in Memory Map"
- `range_confidence`: `0.94`

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["exclusive area"]
- `anchor`: "Chapter 4 Exclusive Area"
- `range_confidence`: `0.8`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["ISR", "interrupt"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"
- `range_confidence`: `0.8`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["Det", "Dem", "CAN_E_UNINIT", "CAN_E_PARAM_CONTROLLER"]
- `anchor`: "Chapter 6 Error Report"
- `range_confidence`: `0.94`

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["CAN_E_UNINIT", "CAN_E_PARAM_POINTER", "CAN_E_TRANSITION"]
- `anchor`: "6.1 Det"
- `range_confidence`: `0.92`

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Dem", "None"]
- `anchor`: "6.2 Dem"
- `range_confidence`: `0.95`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["startup", "shutdown", "wake-up", "runtime"]
- `anchor`: "Chapter 7 Function Calls"
- `range_confidence`: `0.85`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["notification", "callback", "callout", "macros"]
- `anchor`: "Chapter 8 Other Requirements"
- `range_confidence`: `0.85`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["integration steps", "generate configuration", "linker"]
- `anchor`: "Chapter 9 Integration Steps"
- `range_confidence`: `0.85`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `logical_page`: `null`
- `section_path`: "Cover"
- `section_id`: `SEC-0001-COVER`
- `content_types`: ["text", "cover"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["physical_page 1"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `logical_page`: `null`
- `section_path`: "Revision History"
- `section_id`: `SEC-0002-REVISION-HISTORY`
- `content_types`: ["text", "revision_history", "table"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Revision History", "0.1 2023/07/14 Initial release for MCAL V0.1.0"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `logical_page`: `null`
- `section_path`: "Table of Contents"
- `section_id`: `SEC-0003-TOC`
- `content_types`: ["text", "toc"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction . 4", "Chapter 9 Integration Steps . 15"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `logical_page`: `null`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `section_id`: `SEC-001-001`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["This integration manual describes the integration requirements for the CAN module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `section_id`: `SEC-002-001`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`: ["Module configuration dependency", "_MCAL/Src/Can/Src/Can.c", "_MCAL_generate/src/Can_PBcfg.c"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `section_id`: `SEC-002-003`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`: ["2.3 Add Plug-ins"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "memory_map", "table"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "MemMap", "START_SEC", "STOP_SEC", "linker"]
- `anchors`: ["3.1 Sections in Memory Map"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "memory_map", "table"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "MemMap", "START_SEC", "STOP_SEC", "linker"]
- `anchors`: ["CAN_START_SEC_VAR_INIT_16", "CAN_STOP_SEC_VAR_INIT_UNSPECIFIED", "startup code (data)."]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Exclusive Area"
- `section_id`: `SEC-004`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 4 Exclusive Area"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `logical_page`: `null`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `section_id`: `SEC-005`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `logical_page`: `null`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `section_id`: `SEC-006-001`
- `content_types`: ["text", "error_report", "table"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "Det", "Dem", "error"]
- `anchors`: ["6.1 Det"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `logical_page`: `null`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `section_id`: `SEC-006-002`
- `content_types`: ["text", "error_report", "table"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "Det", "Dem", "error"]
- `anchors`: ["Can_MainFunction_Wakeup CAN_E_UNINIT", "6.2 Dem", "None"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `logical_page`: `null`
- `section_path`: "Chapter 7 Function Calls"
- `section_id`: `SEC-007`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["Chapter 7 Function Calls"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `logical_page`: `null`
- `section_path`: "Chapter 8 Other Requirements"
- `section_id`: `SEC-008`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 8 Other Requirements"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `logical_page`: `null`
- `section_path`: "Chapter 9 Integration Steps"
- `section_id`: `SEC-009`
- `content_types`: ["text"]
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 9 Integration Steps"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Indexes CAN INT source physical page(s) 1 under Cover. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p1`: "physical_page 1"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Indexes CAN INT source physical page(s) 2 under Revision History. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p2`: "Revision History"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc"]
- `summary`: "Indexes CAN INT source physical page(s) 3 under Table of Contents. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p3`: "Table of Contents"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 4 under Chapter 1 Introduction / 1.1 Introduction. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p4`: "This integration manual describes the integration requirements for the CAN module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 5 under Chapter 2 Building / 2.1 Dependencies on Other Modules. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`:
  - `p5`: "Module configuration dependency"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 6 under Chapter 2 Building / 2.3 Add Plug-ins. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`:
  - `p6`: "2.3 Add Plug-ins"

### SEG-0007-0008
- `physical_pages`: `7-8`
- `printed_pages`: `7-8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "memory_map", "table"]
- `summary`: "Indexes CAN INT source physical page(s) 7-8 under Chapter 3 Memory / 3.1 Sections in Memory Map. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "MemMap", "START_SEC", "STOP_SEC", "linker"]
- `anchors`:
  - `p7`: "3.1 Sections in Memory Map"
  - `p8`: "CAN_START_SEC_VAR_INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 9 under Chapter 4 Exclusive Area. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 10 under Chapter 5 Interrupt Service Routine (ISR). Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "error_report", "table"]
- `summary`: "Indexes CAN INT source physical page(s) 11 under Chapter 6 Error Report / 6.1 Det. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "Det", "Dem", "error"]
- `anchors`:
  - `p11`: "6.1 Det"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "error_report", "table"]
- `summary`: "Indexes CAN INT source physical page(s) 12 under Chapter 6 Error Report / 6.2 Dem. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "Det", "Dem", "error"]
- `anchors`:
  - `p12`: "Can_MainFunction_Wakeup CAN_E_UNINIT"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Function Calls"
- `content_types`: ["text", "api", "table"]
- `summary`: "Indexes CAN INT source physical page(s) 13 under Chapter 7 Function Calls. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p13`: "Chapter 7 Function Calls"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Other Requirements"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 14 under Chapter 8 Other Requirements. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p14`: "Chapter 8 Other Requirements"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text"]
- `summary`: "Indexes CAN INT source physical page(s) 15 under Chapter 9 Integration Steps. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CAN", "Can", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p15`: "Chapter 9 Integration Steps"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: [2]
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `bbox`: `null`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Revision history row 0.1 dated 2023/07/14 for initial MCAL V0.1.0 release."
- `anchor`: "0.1 2023/07/14 Initial release for MCAL V0.1.0"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.93`
- `quality_flags`: []

### TBL-0003-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0003-001"
- `caption`: "Table of Contents"
- `physical_pages`: [3]
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `bbox`: `null`
- `key_fields`: ["Chapter", "Section", "Physical page"]
- `summary`: "Source-visible contents list chapters 1-9 and page starts 4-15."
- `anchor`: "Chapter 9 Integration Steps . 15"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.94`
- `quality_flags`: []

### TBL-0008-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0008-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: [8]
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `null`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Lists CAN MemMap startup data sections for INIT_16, INIT_32 and INIT_UNSPECIFIED."
- `anchor`: "CAN_START_SEC_VAR_INIT_16"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.86`
- `quality_flags`: ["partial_rows_from_visible_page"]

### TBL-0011-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0011-001"
- `caption`: "DET Error Report"
- `physical_pages`: [11, 12]
- `printed_pages`: `11, 12`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `null`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Maps CAN APIs and main functions to DET errors such as CAN_E_UNINIT, CAN_E_PARAM_POINTER and CAN_E_PARAM_CONTROLLER."
- `anchor`: "Can_MainFunction_Wakeup CAN_E_UNINIT"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.82`
- `quality_flags`: ["table_spans_pages", "rows_indexed_not_full_cell_export"]

## 7. Figure / Image Index

- `figures_detected`: `0`
- `note`: "No numbered source figures or high-value screenshot/diagram blocks were available from the extracted context."

## 8. Term / API / Config / Requirement Index

### API-CAN-INIT
- `name`: "Can_Init"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CAN initialization API referenced by DET error report."
- `anchors`: ["p11: Can_Init CAN_E_TRANSITION; CAN_E_PARAM_POINTER"]
- `aliases`: ["CAN init", "Can_Init()"]

### API-CAN-SETBAUDRATE
- `name`: "Can_SetBaudrate"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CAN baudrate API; DET errors include uninitialized, baudrate and controller parameter errors."
- `anchors`: ["p11: Can_SetBaudrate CAN_E_UNINIT; CAN_E_PARAM_BAUDRATE; CAN_E_PARAM_CONTROLLER"]
- `aliases`: ["set CAN baudrate"]

### API-CAN-SETCONTROLLERMODE
- `name`: "Can_SetControllerMode"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CAN controller mode transition API."
- `anchors`: ["p11: Can_SetControllerMode CAN_E_UNINIT; CAN_E_PARAM_CONTROLLER; CAN_E_TRANSITION"]
- `aliases`: ["controller mode", "Can_SetControllerMode()"]

### API-CAN-WRITE
- `name`: "Can_Write"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CAN transmit API; DET errors include uninitialized, invalid data length and null pointer."
- `anchors`: ["p11: Can_Write CAN_E_UNINIT; CAN_E_PARAM_DATA_LENGTH; CAN_E_PARAM_POINTER"]
- `aliases`: ["CAN transmit", "Can_Write()"]

### API-CAN-MAINFUNCTION-WAKEUP
- `name`: "Can_MainFunction_Wakeup"
- `type`: "api"
- `primary_page`: `12`
- `physical_pages`: [12, 13]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det", "Chapter 7 Function Calls"]
- `brief`: "CAN main function related to wakeup handling."
- `anchors`: ["p12: Can_MainFunction_Wakeup CAN_E_UNINIT"]
- `aliases`: ["wakeup main function"]

### MEM-CAN-START-SEC-VAR-INIT-16
- `name`: "CAN_START_SEC_VAR_INIT_16"
- `type`: "memory_section"
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "CAN MemMap start marker for initialized 16-bit variable section."
- `anchors`: ["p8: CAN_START_SEC_VAR_INIT_16"]
- `aliases`: ["CAN START SEC VAR INIT 16"]

### TERM-CANIF
- `name`: "CanIf"
- `type`: "term"
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "CAN Interface module dependency; provides wakeup confirmation callback function."
- `anchors`: ["p5: CanIf: This module provides the CanIf wakeup confirmation callback function."]
- `aliases`: ["CAN Interface", "Can Interface"]

### TERM-ECUM
- `name`: "EcuM"
- `type`: "term"
- `primary_page`: `5`
- `physical_pages`: [5]
- `section_paths`: ["Chapter 2 Building / 2.1 Dependencies on Other Modules"]
- `brief`: "EcuM dependency for wakeup source references and callbacks when wakeup support is enabled."
- `anchors`: ["p5: EcuM: is required for selecting the reference to the wakeup source"]
- `aliases`: ["ECU State Manager"]

## 9. Search Aliases

### ALIAS-AUTOSAR
- `canonical`: "AUTOSAR"
- `aliases`: ["AUTOSAR Classic Platform", "AUTOSAR CP", "汽车开放系统架构", "AUTOSAR 4.6.0"]
- `related_ids`: ["TERM-AUTOSAR"]

### ALIAS-MCAL
- `canonical`: "MCAL"
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "底层驱动", "AUTOSAR MCAL"]
- `related_ids`: ["TERM-MCAL"]

### ALIAS-EB-TRESOS
- `canonical`: "EB tresos"
- `aliases`: ["Tresos", "EB Tresos Studio", "EB tresos Studio", "配置工具", "Tresos configuration"]
- `related_ids`: ["TERM-EB-TRESOS"]

### ALIAS-DET
- `canonical`: "Det"
- `aliases`: ["Development Error Tracer", "development error detection", "开发错误检测", "DET error"]
- `related_ids`: ["TERM-DET"]

### ALIAS-DEM
- `canonical`: "Dem"
- `aliases`: ["Diagnostic Event Manager", "诊断事件管理", "DEM event"]
- `related_ids`: ["TERM-DEM"]

### ALIAS-MEMMAP
- `canonical`: "MemMap"
- `aliases`: ["memory map", "START_SEC", "STOP_SEC", "linker section", "内存段"]
- `related_ids`: ["TERM-MEMMAP"]

### ALIAS-CAN
- `canonical`: "CAN"
- `aliases`: ["Controller Area Network", "FlexCAN", "CAN driver", "CAN module", "控制器局域网"]
- `related_ids`: ["TERM-CAN"]

### ALIAS-CAN-MEMMAP
- `canonical`: "CAN MemMap"
- `aliases`: ["CAN_START_SEC", "CAN_STOP_SEC", "Can_MemMap.h", "CAN memory sections"]
- `related_ids`: ["MEM-CAN-START-SEC-VAR-INIT-16"]


## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between CAN_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `CAN_Integration_Manual.pdf`
- `source_pdf_sha256`: `1374b31714c3cda3ab09284b6802550568e1247e37ae62bd744e09284adc4756`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `369`
- `technical_missing_terms_added`: `139`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `369`
- `supplemented_missing_technical_token_count`: `139`
- `supplemented_physical_pages_count`: `14`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
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
  - "7.1"
  - "7.2"
  - "7.3"
  - "7.4"
  - "8.1"
  - "8.2"
  - "Callback"
  - "Callout"
  - "Confidential"
  - "Flagchip"
  - "Macros"
  - "Notification"
  - "Proprietary"
  - "Runtime"
  - "Shutdown"
  - "Startup"
  - "Wake"
  - "during"

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
  - "Can_"
  - "Can_GeneralTypes"
  - "Can_HwType"
  - "Can_version"
  - "Confidential"
  - "Fan_Reg"
  - "Flagchip"
  - "GeneralTypes_Cfg"
  - "MCU"
  - "PORT"
  - "Proprietary"
  - "UART"
  - "assign"
  - "basic"
  - "chip"
  - "choose"
  - "clock"
  - "common"
  - "configurations"
  - "etc"
  - "every"
  - "initialize"
  - "interrupts"
  - "modules"
  - "necessary"
  - "needs"
  - "out"
  - "output"
  - "parts"
  - "pin"
  - "pins"
  - "point"
  - "pointers"
  - "port"
  - "protect"
  - "range"
  - "signal"
  - "signaling"
  - "some"
  - "through"
  - "tracing"
  - "unprotect"
  - "user"
  - "want"
  - "which"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "CanIf_Cbk"
  - "Compiler"
  - "CompilerDefinition"
  - "Compiler_Cfg"
  - "Confidential"
  - "Copy"
  - "EB_Plugins"
  - "EcuM_Cbk"
  - "Flagchip"
  - "Mcal"
  - "Platform_Types"
  - "Proprietary"
  - "SchM_Can"
  - "Set"
  - "Std_Types"
  - "add"
  - "configure"
  - "developed"
  - "eclipse"
  - "folder"
  - "generated"
  - "header"
  - "location"
  - "needs"
  - "output"
  - "plugins"
  - "user"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "CAN_START_SEC_"
  - "CAN_START_SEC_CODE"
  - "CAN_START_SEC_CODE_AC"
  - "CAN_START_SEC_CONFIG_DATA_16"
  - "CAN_START_SEC_CONFIG_DATA_32"
  - "CAN_START_SEC_CONFIG_DATA_8"
  - "CAN_START_SEC_CONFIG_DATA_UNSPECIFIED"
  - "CAN_START_SEC_CONST_"
  - "CAN_START_SEC_CONST_16"
  - "CAN_START_SEC_CONST_32"
  - "CAN_START_SEC_CONST_8"
  - "CAN_START_SEC_CONST_BOOLEAN"
  - "CAN_START_SEC_VAR_"
  - "CAN_START_SEC_VAR_NO_INIT_"
  - "CAN_START_SEC_VAR_NO_INIT_16"
  - "CAN_START_SEC_VAR_NO_INIT_32"
  - "CAN_START_SEC_VAR_NO_INIT_8"
  - "CAN_START_SEC_VAR_NO_INIT_BOOLEAN"
  - "CAN_STOP_SEC_"
  - "CAN_STOP_SEC_CODE"
  - "CAN_STOP_SEC_CODE_AC"
  - "CAN_STOP_SEC_CONFIG_DATA_16"
  - "CAN_STOP_SEC_CONFIG_DATA_32"
  - "CAN_STOP_SEC_CONFIG_DATA_8"
  - "CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
  - "CAN_STOP_SEC_CONST_"
  - "CAN_STOP_SEC_CONST_16"
  - "CAN_STOP_SEC_CONST_32"
  - "CAN_STOP_SEC_CONST_8"
  - "CAN_STOP_SEC_CONST_BOOLEAN"
  - "CAN_STOP_SEC_VAR_"
  - "CAN_STOP_SEC_VAR_NO_INIT_"
  - "CAN_STOP_SEC_VAR_NO_INIT_16"
  - "CAN_STOP_SEC_VAR_NO_INIT_32"
  - "CAN_STOP_SEC_VAR_NO_INIT_8"
  - "CAN_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - "Code"
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "INIT_8"
  - "INIT_BOOLEAN"
  - "Proprietary"
  - "RAMCODE"
  - "Start"
  - "These"
  - "UNSPECIFIED"
  - "Variables"
  - "aligned"
  - "boolean"
  - "bss"
  - "cleared"
  - "have"
  - "never"
  - "read"
  - "rodata"
  - "stop"
  - "variables"
  - "which"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "CAN_START_SEC_VAR"
  - "CAN_STOP_SEC_VAR"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "UNSPECIFIED"
  - "_INIT_"
  - "_INIT_16"
  - "_INIT_32"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Can_HL_SetControllerToStartMode"
  - "Can_Hal_DisableControllerInterrupts"
  - "Can_Hal_EnableControllerInterrupts"
  - "Can_LL_DisableInterrupts"
  - "Can_LL_EnableInterrupts"
  - "Can_LL_GotoFreezeMode"
  - "Can_LL_InitBaudrate"
  - "Can_LL_InitRxFiFo"
  - "Can_LL_ResetController"
  - "Can_LL_RxDataReadyHandler"
  - "Can_LL_SellectClockSource"
  - "Can_ML_SetControllerToStopMode"
  - "Confidential"
  - "Flagchip"
  - "Manger"
  - "Proprietary"
  - "SchM"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_03"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_04"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_05"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_06"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_11"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_13"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14"
  - "SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15"
  - "Schedule"
  - "The"
  - "critical"
  - "entering"
  - "exiting"
  - "following"
  - "regions"
  - "services"
  - "using"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Can_IsrCAN0_All"
  - "Can_IsrCAN1_All"
  - "Can_IsrCAN2_All"
  - "Can_IsrCAN3_All"
  - "Can_IsrCAN4_All"
  - "Can_IsrCAN5_All"
  - "Can_IsrCAN6_All"
  - "Can_IsrCAN7_All"
  - "Confidential"
  - "FLEXCAN0"
  - "FLEXCAN1"
  - "FLEXCAN2"
  - "FLEXCAN3"
  - "FLEXCAN4"
  - "FLEXCAN5"
  - "FLEXCAN6"
  - "FLEXCAN7"
  - "Flagchip"
  - "IRQ"
  - "Instance"
  - "NVIC"
  - "Number"
  - "Proprietary"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Can_CheckWakeup"
  - "Can_DeInit"
  - "Can_DisableControllerInterrupts"
  - "Can_EnableControllerInterrupts"
  - "Can_GetControllerErrorState"
  - "Can_GetControllerMode"
  - "Can_GetVersionInfo"
  - "Can_MainFunction_BusOff"
  - "Can_MainFunction_Read"
  - "Can_MainFunction_Read_0"
  - "Can_MainFunction_Read_1"
  - "Can_MainFunction_Read_2"
  - "Can_MainFunction_Read_3"
  - "Can_MainFunction_Read_4"
  - "Can_MainFunction_Write"
  - "Can_MainFunction_Write_0"
  - "Can_MainFunction_Write_1"
  - "Can_MainFunction_Write_2"
  - "Can_MainFunction_Write_3"
  - "Can_MainFunction_Write_4"
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
  - "7.1"
  - "7.2"
  - "7.3"
  - "7.4"
  - "After"
  - "Buffer"
  - "CAN_T_WAKEUP"
  - "CPU"
  - "Can_CheckWakeup"
  - "Can_Configuration"
  - "Confidential"
  - "Counters"
  - "Debug"
  - "Disable"
  - "ECR"
  - "Exit"
  - "FRZ"
  - "Flagchip"
  - "Freeze"
  - "GPIO"
  - "HALT"
  - "MCR"
  - "MCU"
  - "MDIS"
  - "Management"
  - "Message"
  - "Mode"
  - "PORT"
  - "Please"
  - "Proprietary"
  - "Protocol"
  - "Register"
  - "Runtime"
  - "SLEEP"
  - "STARTUP"
  - "STOP"
  - "Shutdown"
  - "Sleep"
  - "Startup"
  - "Stop"
  - "The"
  - "Wake"
  - "When"
  - "access"
  - "activities"
  - "activity"
  - "also"
  - "asserted"
  - "assigned"
  - "before"
  - "bits"
  - "bus"
  - "called"
  - "calling"
  - "changed"
  - "clocks"
  - "connection"
  - "cyclically"
  - "desired"
  - "detected"
  - "done"
  - "down"
  - "drives"
  - "during"
  - "each"
  - "entered"
  - "events"
  - "globally"
  - "grants"
  - "halting"
  - "happens"
  - "has"
  - "have"
  - "ignores"
  - "inactive"
  - "informs"
  - "input"
  - "itself"
  - "level"
  - "low"
  - "mechanism"
  - "modes"
  - "modules"
  - "negating"
  - "peripherals"
  - "phase"
  - "pin"
  - "pins"
  - "polling"
  - "power"
  - "prescaler"
  - "prior"
  - "properly"
  - "protocol"
  - "puts"
  - "read"
  - "recessive"
  - "removed"
  - "request"
  - "requested"
  - "self"
  - "service"
  - "shall"
  - "should"
  - "shut"
  - "shuts"
  - "stack"
  - "stops"
  - "sub"
  - "that"
  - "thus"
  - "using"
  - "well"
  - "which"
  - "will"
  - "woken"
  - "write"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "8.1"
  - "8.2"
  - "AUTOSAR_OS_NOT_USED"
  - "COM_APPL_CODE"
  - "Callback"
  - "Callout"
  - "CanDlc"
  - "CanId"
  - "CanIf_ControllerBusOff"
  - "CanIf_ControllerModeIndication"
  - "CanIf_CurrentIcomConfiguration"
  - "CanIf_RxIndication"
  - "CanIf_TriggerTransmit"
  - "CanIf_TxConfirmation"
  - "CanSduPtr"
  - "Can_IdType"
  - "Confidential"
  - "Dem_ReportErrorStatus"
  - "Det_ReportError"
  - "Driver"
  - "EcuM_CheckWakeup"
  - "EcuM_SetWakeupEvent"
  - "FUNC"
  - "Flagchip"
  - "GetCounterValue"
  - "Hrh"
  - "ICU"
  - "Icu_DisableNotification"
  - "Icu_EnableNotification"
  - "LPDU_CalloutName"
  - "Macros"
  - "Mcal"
  - "Notification"
  - "PDU"
  - "Please"
  - "Proprietary"
  - "The"
  - "There"
  - "These"
  - "boolean"
  - "callouts"
  - "check"
  - "const"
  - "define"
  - "defined"
  - "definitions"
  - "details"
  - "disable"
  - "enable"
  - "every"
  - "following"
  - "have"
  - "mandatory"
  - "needs"
  - "optional"
  - "provided"
  - "reception"
  - "respective"
  - "shall"
  - "stack"
  - "supports"
  - "these"
  - "uint8"
  - "uses"
  - "various"
  - "which"
  - "within"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Configure"
  - "Flagchip"
  - "Proprietary"
  - "appropriate"
  - "chapter"
  - "dependent"
  - "details"
  - "locations"
  - "modules"
  - "please"
  - "refer"
  - "their"
  - "vector"

## 10. Quality Warnings

### WARN-GLOBAL-SOURCE-BYTES
- `severity`: "info"
- `category`: "source_integrity"
- `physical_pages`: []
- `affected_ids`: ["Document Metadata", "SELF-CHECK-SUMMARY"]
- `message`: "Local PDF bytes are available; SHA256, file size, encryption state and link annotation count were patched from the local source PDF."
- `recommended_action`: "Treat this Manifest as stale if local CAN_Integration_Manual.pdf SHA256 differs from 1374b31714c3cda3ab09284b6802550568e1247e37ae62bd744e09284adc4756."


### WARN-GLOBAL-OCR
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
- `affected_ids`: []
- `message`: "File Library returned an extractable text layer; OCR was not executed."
- `recommended_action`: "Use source PDF rendering for visual verification of diagrams, screenshots and complex tables."

### WARN-0011-0012
- `severity`: "medium"
- `category`: "table_extraction"
- `physical_pages`: [11, 12]
- `affected_ids`: ["TBL-0011-001"]
- `message`: "DET table spans pages and was indexed from visible snippets, not reconstructed as a complete CSV-like table."
- `recommended_action`: "Verify exact API-to-error mappings against physical pages 11-12."

## 11. Self Check Report

### SELF-CHECK-SUMMARY
- `source_pdf`: "CAN_Integration_Manual.pdf"
- `pdf_page_count`: `15`
- `indexed_physical_pages_count`: `15`
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `page_coverage_status`: `pass`
- `section_range_status`: `pass`
- `invalid_section_ranges`: []
- `duplicate_ids`: []
- `entries_without_physical_page`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `source_integrity_status`: `pass`
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `369`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `3`
- `overall_status`: "pass_with_warnings"

### SELF-CHECK-NOTES
- `page_numbering`: "All locator fields use 1-based PDF physical pages as primary keys; printed_page is auxiliary."
- `source_freshness_rule`: "Regenerate this Manifest when the source PDF SHA256 can be computed locally and differs from this Manifest, or when page count / visible revision changes."
- `manifest_scope`: "This Manifest indexes the source PDF and intentionally avoids long verbatim excerpts."
