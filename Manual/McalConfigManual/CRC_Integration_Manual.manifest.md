---
manifest_schema_version: "1.1"
source_pdf: "CRC_Integration_Manual.pdf"
source_pdf_sha256: "b7128f456bcb86695133b5d68b76f532f5d83f5df94caa62406556fa4f623cff"
source_pdf_size_bytes: 726215
pdf_page_count: 14
generated_at: "2026-06-19T23:50:45Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.8.0-file-library-best-effort"
source_file_library_id: "file_00000000e064720b91b75cd42bae92e2"
source_file_created_at: "2026-06-19T09:10:16Z"
source_file_modified_at: "2026-06-19T09:10:16Z"
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
manifest_role: "structured retrieval index; not a replacement for source PDF original content"
overall_status: "pass_with_warnings"
---

# PDF Manifest: CRC_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is a structured retrieval index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the local PDF bytes differ from the source identity recorded below.

## 1. Document Metadata

- `source_pdf`: `CRC_Integration_Manual.pdf`
- `source_pdf_sha256`: `b7128f456bcb86695133b5d68b76f532f5d83f5df94caa62406556fa4f623cff`
- `source_pdf_size_bytes`: `726215`
- `pdf_page_count`: `14`
- `source_file_library_id`: `file_00000000e064720b91b75cd42bae92e2`
- `source_file_created_at`: `2026-06-19T09:10:16Z`
- `source_file_modified_at`: `2026-06-19T09:10:16Z`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx CRC Integration Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0; Added support for FC7240`
- `generated_at`: `2026-06-19T23:50:45Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.8.0-file-library-best-effort`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `false`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `24`
- `ocr_status`: `not_run_text_layer_available_in_file_library_snippets`
- `text_extraction_engine`: `File Library parsed text snippets + local pypdf 6.10.0 text-layer supplement`
- `image_extraction_policy`: `index observed visual/diagram/screenshot anchors; do not OCR screenshots by default`
- `page_numbering_policy`: `physical_page is 1-based PDF page index; printed_page is a source-visible footer label only`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL CRC module - Integration Manual"
- `module_scope`: "CRC integration dependencies, build files, plug-ins, memory map, exclusive areas, ISR, DET/DEM reporting, function-call expectations, macros and integration steps."
- `key_chapters`: ["Chapter 2 Building", "Chapter 3 Memory", "Chapter 6 Error Report", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["CRC", "Mcu", "Common", "Rte", "Det", "Dem", "Crc_CalculateCRC8", "Crc_CalculateCRC32", "Crc_GetVersionInfo", "AUTOSAR_OS_NOT_USED"]
- `summary`: "This 14-page integration manual Manifest indexes all physical pages 1-14, emphasizing CRC dependencies/files, memory sections, DET error mapping, macro requirements and integration steps."
- `retrieval_note`: "Use physical_page as the only primary locator. CRC_Integration_Manual.pdf appeared twice in File Library; this Manifest records source identity and warns about deduplication."

## 3. Table of Contents Index

### SEC-0001-COVER
- `source_number`: `null`
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: `1`
- `physical_page_end`: `1`
- `printed_page_start`: `cover`
- `printed_page_end`: `cover`
- `keywords`: ["CRC", "FC7xxx", "Integration", "Rev.0.6"]
- `anchor`: "FC7xxx CRC Integration Manual"
- `range_confidence`: `0.8`

### SEC-0002-REVISION-HISTORY
- `source_number`: `null`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["CRC", "revision", "MCAL V0.6.0", "FC7240"]
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
- `keywords`: ["CRC", "contents", "building", "memory", "DET", "integration steps"]
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
- `keywords`: ["CRC", "integration requirements"]
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
- `keywords`: ["CRC", "integration requirements"]
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
- `keywords`: ["dependencies", "compile", "plug-ins", "Crc.c", "Crc_Hw.c"]
- `anchor`: "Chapter 2 Building"
- `range_confidence`: `0.95`

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mcu", "Common", "Rte", "Det"]
- `anchor`: "2.1 Dependencies on Other Modules"
- `range_confidence`: `0.95`

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Crc.c", "Crc_Hw.c", "Crc_Lookup_Tables.c", "Crc_RunTime.c", "Crc_Cfg.h"]
- `anchor`: "2.2 Files Required for Compile"
- `range_confidence`: `0.93`

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
- `range_confidence`: `0.8`

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["memory map", "CRC_START_SEC", "CRC_STOP_SEC"]
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
- `keywords`: ["CRC_START_SEC_VAR_INIT_BOOLEAN", "CRC_START_SEC_VAR_INIT_8", "CRC_START_SEC_VAR_INIT_16", "CRC_START_SEC_VAR_INIT_32"]
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
- `keywords`: ["exclusive area", "None"]
- `anchor`: "Chapter 4 Exclusive Area"
- `range_confidence`: `0.95`

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["ISR", "None"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"
- `range_confidence`: `0.95`

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Det", "Dem", "CRC_E_INVALID_POINTER"]
- `anchor`: "Chapter 6 Error Report"
- `range_confidence`: `0.96`

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["CRC_E_ALREADY_INITIALIZED", "CRC_E_INIT_FAILED", "CRC_E_INVALID_POINTER"]
- `anchor`: "6.1 Det"
- `range_confidence`: `0.96`

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Dem", "None"]
- `anchor`: "6.2 Dem"
- `range_confidence`: `0.96`

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["startup", "shutdown", "wake-up", "runtime"]
- `anchor`: "Chapter 7 Function Calls"
- `range_confidence`: `0.9`

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["AUTOSAR_OS_NOT_USED", "Mcal.h", "callback", "callout"]
- `anchor`: "Chapter 8 Other Requirements"
- `range_confidence`: `0.92`

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["integration steps", "configuration files", "linker"]
- `anchor`: "Chapter 9 Integration Steps"
- `range_confidence`: `0.9`

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `logical_page`: `null`
- `section_path`: "Cover"
- `section_id`: `SEC-0001-COVER`
- `content_types`: ["text", "cover"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["physical_page 1"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `logical_page`: `null`
- `section_path`: "Revision History"
- `section_id`: `SEC-0002-REVISION-HISTORY`
- `content_types`: ["text", "revision_history", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Revision History", "0.1 2023/12/15 Initial release", "0.6 2023/03/29 Updated for MCAL V0.6.0"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `logical_page`: `null`
- `section_path`: "Table of Contents"
- `section_id`: `SEC-0003-TOC`
- `content_types`: ["text", "toc"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Table of Contents", "Chapter 1 Introduction . 4", "Chapter 9 Integration Steps . 14"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `logical_page`: `null`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `section_id`: `SEC-001-001`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["This integration manual describes the integration requirements for CRC module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `section_id`: `SEC-002-001`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`: ["Module configuration dependency", "_MCAL/Src/Crc/src/Crc.c", "_MCAL_generate/include/Crc_Cfg.h"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `logical_page`: `null`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `section_id`: `SEC-002-003`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`: ["2.3 Add Plug-ins"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "memory_map", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "MemMap", "START_SEC", "STOP_SEC", "linker"]
- `anchors`: ["3.1 Sections in Memory Map"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `logical_page`: `null`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `section_id`: `SEC-003-001`
- `content_types`: ["text", "memory_map", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "MemMap", "START_SEC", "STOP_SEC", "linker"]
- `anchors`: ["CRC_START_SEC_VAR_INIT_BOOLEAN", "CRC_START_SEC_VAR_INIT_UNSPECIFIED"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `logical_page`: `null`
- `section_path`: "Chapter 4 Exclusive Area"
- `section_id`: `SEC-004`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 4 Exclusive Area", "None"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `logical_page`: `null`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `section_id`: `SEC-005`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "None"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `logical_page`: `null`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `section_id`: `SEC-006-001`
- `content_types`: ["text", "error_report", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Det", "Dem", "error"]
- `anchors`: ["Crc_CalculateCRC8 CRC_E_INVALID_POINTER", "Crc_GetVersionInfo CRC_E_INVALID_POINTER", "6.2 Dem None"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `logical_page`: `null`
- `section_path`: "Chapter 7 Function Calls"
- `section_id`: `SEC-007`
- `content_types`: ["text", "api", "table"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`: ["Chapter 7 Function Calls"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `logical_page`: `null`
- `section_path`: "Chapter 8 Other Requirements"
- `section_id`: `SEC-008`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 8 Other Requirements"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `logical_page`: `null`
- `section_path`: "Chapter 9 Integration Steps"
- `section_id`: `SEC-009`
- `content_types`: ["text"]
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`: ["Chapter 9 Integration Steps"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Indexes CRC INT source physical page(s) 1 under Cover. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p1`: "physical_page 1"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Indexes CRC INT source physical page(s) 2 under Revision History. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p2`: "Revision History"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc"]
- `summary`: "Indexes CRC INT source physical page(s) 3 under Table of Contents. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p3`: "Table of Contents"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Introduction"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 4 under Chapter 1 Introduction / 1.1 Introduction. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p4`: "This integration manual describes the integration requirements for CRC module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 5 under Chapter 2 Building / 2.1 Dependencies on Other Modules. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`:
  - `p5`: "Module configuration dependency"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 6 under Chapter 2 Building / 2.3 Add Plug-ins. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "dependencies", "compile", "files"]
- `anchors`:
  - `p6`: "2.3 Add Plug-ins"

### SEG-0007-0008
- `physical_pages`: `7-8`
- `printed_pages`: `7-8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "memory_map", "table"]
- `summary`: "Indexes CRC INT source physical page(s) 7-8 under Chapter 3 Memory / 3.1 Sections in Memory Map. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "MemMap", "START_SEC", "STOP_SEC", "linker"]
- `anchors`:
  - `p7`: "3.1 Sections in Memory Map"
  - `p8`: "CRC_START_SEC_VAR_INIT_BOOLEAN"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 9 under Chapter 4 Exclusive Area. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 10 under Chapter 5 Interrupt Service Routine (ISR). Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "error_report", "table"]
- `summary`: "Indexes CRC INT source physical page(s) 11 under Chapter 6 Error Report / 6.1 Det. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "Det", "Dem", "error"]
- `anchors`:
  - `p11`: "Crc_CalculateCRC8 CRC_E_INVALID_POINTER"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 7 Function Calls"
- `content_types`: ["text", "api", "table"]
- `summary`: "Indexes CRC INT source physical page(s) 12 under Chapter 7 Function Calls. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL", "API", "function", "parameters", "returns"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 13 under Chapter 8 Other Requirements. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p13`: "Chapter 8 Other Requirements"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text"]
- `summary`: "Indexes CRC INT source physical page(s) 14 under Chapter 9 Integration Steps. Use anchors to verify exact wording in the source PDF."
- `keywords`: ["CRC", "Crc", "FC7xxx", "AUTOSAR", "MCAL"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"

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
- `summary`: "Revision history includes 0.1 initial release and 0.6 update for MCAL V0.6.0 / FC7240."
- `anchor`: "0.6 2023/03/29 Updated for MCAL V0.6.0"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.93`
- `quality_flags`: ["revision_date_order_unusual"]

### TBL-0003-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0003-001"
- `caption`: "Table of Contents"
- `physical_pages`: [3]
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `bbox`: `null`
- `key_fields`: ["Chapter", "Section", "Physical page"]
- `summary`: "Source-visible contents list chapters 1-9 and page starts 4-14."
- `anchor`: "Chapter 9 Integration Steps. 14"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.96`
- `quality_flags`: []

### TBL-0008-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0008-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: [7, 8]
- `printed_pages`: `7, 8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `null`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Lists CRC MemMap sections including INIT_BOOLEAN, INIT_8, INIT_16, INIT_32 and INIT_UNSPECIFIED."
- `anchor`: "CRC_START_SEC_VAR_INIT_BOOLEAN"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.86`
- `quality_flags`: ["table_spans_pages", "partial_rows_from_visible_page"]

### TBL-0011-001
- `source_table_number`: `null`
- `generated_table_number`: "TBL-0011-001"
- `caption`: "DET Error Report"
- `physical_pages`: [11]
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `null`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Maps CRC APIs to DET errors such as CRC_E_ALREADY_INITIALIZED, CRC_E_INIT_FAILED and CRC_E_INVALID_POINTER."
- `anchor`: "Crc_CalculateCRC8 CRC_E_INVALID_POINTER"
- `extraction_method`: "file-library text snippet + visual page context"
- `confidence`: `0.9`
- `quality_flags`: []

## 7. Figure / Image Index

- `figures_detected`: `0`
- `note`: "No numbered source figures or high-value screenshot/diagram blocks were available from the extracted context."

## 8. Term / API / Config / Requirement Index

### API-CRC-CALCULATECHANNEL
- `name`: "Crc_CalculateChannel"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CRC channel calculation API referenced by DET error mapping."
- `anchors`: ["p11: Crc_CalculateChannel CRC_E_ALREADY_INITIALIZED; CRC_E_INIT_FAILED"]
- `aliases`: ["calculate CRC channel"]

### API-CRC-CALCULATECRC8
- `name`: "Crc_CalculateCRC8"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CRC8 calculation API; DET error CRC_E_INVALID_POINTER."
- `anchors`: ["p11: Crc_CalculateCRC8 CRC_E_INVALID_POINTER"]
- `aliases`: ["CRC8 API"]

### API-CRC-CALCULATECRC8H2F
- `name`: "Crc_CalculateCRC8H2F"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CRC8H2F calculation API; DET error CRC_E_INVALID_POINTER."
- `anchors`: ["p11: Crc_CalculateCRC8H2F CRC_E_INVALID_POINTER"]
- `aliases`: ["CRC8 H2F API"]

### API-CRC-CALCULATECRC16
- `name`: "Crc_CalculateCRC16"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CRC16 calculation API; DET error CRC_E_INVALID_POINTER."
- `anchors`: ["p11: Crc_CalculateCRC16 CRC_E_INVALID_POINTER"]
- `aliases`: ["CRC16 API"]

### API-CRC-CALCULATECRC32
- `name`: "Crc_CalculateCRC32"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "CRC32 calculation API; DET error CRC_E_INVALID_POINTER."
- `anchors`: ["p11: Crc_CalculateCRC32 CRC_E_INVALID_POINTER"]
- `aliases`: ["CRC32 API"]

### API-CRC-GETVERSIONINFO
- `name`: "Crc_GetVersionInfo"
- `type`: "api"
- `primary_page`: `11`
- `physical_pages`: [11]
- `section_paths`: ["Chapter 6 Error Report / 6.1 Det"]
- `brief`: "Version information API; DET error CRC_E_INVALID_POINTER."
- `anchors`: ["p11: Crc_GetVersionInfo CRC_E_INVALID_POINTER"]
- `aliases`: ["version info"]

### MEM-CRC-START-SEC-VAR-INIT-BOOLEAN
- `name`: "CRC_START_SEC_VAR_INIT_BOOLEAN"
- `type`: "memory_section"
- `primary_page`: `8`
- `physical_pages`: [8]
- `section_paths`: ["Chapter 3 Memory / 3.1 Sections in Memory Map"]
- `brief`: "CRC MemMap start marker for initialized boolean variable section."
- `anchors`: ["p8: CRC_START_SEC_VAR_INIT_BOOLEAN"]
- `aliases`: ["CRC START SEC VAR INIT BOOLEAN"]

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: "macro"
- `primary_page`: `13`
- `physical_pages`: [13]
- `section_paths`: ["Chapter 8 Other Requirements / 8.2 Macros"]
- `brief`: "Macro to define when OS is not used, according to the Common module Mcal.h guidance."
- `anchors`: ["p13: If OS is not used define AUTOSAR_OS_NOT_USED"]
- `aliases`: ["OS not used", "bare metal"]

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

### ALIAS-CRC
- `canonical`: "CRC"
- `aliases`: ["Cyclic Redundancy Check", "CRC library", "CRC module", "循环冗余校验"]
- `related_ids`: ["TERM-CRC"]

### ALIAS-CRC-MEMMAP
- `canonical`: "CRC MemMap"
- `aliases`: ["CRC_START_SEC", "CRC_STOP_SEC", "Crc_MemMap.h", "CRC memory sections"]
- `related_ids`: ["MEM-CRC-START-SEC-VAR-INIT-BOOLEAN"]


## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between CRC_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `CRC_Integration_Manual.pdf`
- `source_pdf_sha256`: `b7128f456bcb86695133b5d68b76f532f5d83f5df94caa62406556fa4f623cff`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `144`
- `technical_missing_terms_added`: `58`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `144`
- `supplemented_missing_technical_token_count`: `58`
- `supplemented_physical_pages_count`: `13`
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
  - "Callback"
  - "Callout"
  - "Confidential"
  - "Flagchip"
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
  - "Compiler"
  - "Confidential"
  - "Crc_Reg"
  - "Crc_RegOps"
  - "Crc_Reverse"
  - "Crc_Types"
  - "Crc_Version"
  - "Flagchip"
  - "MCU"
  - "Platform_Types"
  - "Proprietary"
  - "Std_Types"
  - "basic"
  - "chip"
  - "choose"
  - "clock"
  - "code"
  - "common"
  - "enabling"
  - "first"
  - "initialization"
  - "initialize"
  - "interrupts"
  - "modules"
  - "necessary"
  - "needs"
  - "other"
  - "parts"
  - "point"
  - "protect"
  - "provides"
  - "reference"
  - "some"
  - "unprotect"
  - "user"
  - "which"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "CompilerDefinition"
  - "Compiler_Cfg"
  - "Confidential"
  - "Copy"
  - "EB_Plugins"
  - "Flagchip"
  - "Proprietary"
  - "Ret"
  - "SchM_Crc"
  - "Set"
  - "add"
  - "configure"
  - "developed"
  - "eclipse"
  - "first"
  - "folder"
  - "generate"
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
  - "CRC_START_SEC_"
  - "CRC_START_SEC_CODE"
  - "CRC_START_SEC_CODE_AC"
  - "CRC_START_SEC_CONFIG_DATA_16"
  - "CRC_START_SEC_CONFIG_DATA_32"
  - "CRC_START_SEC_CONFIG_DATA_8"
  - "CRC_START_SEC_CONFIG_DATA_UNSPECIFIED"
  - "CRC_START_SEC_CONST_"
  - "CRC_START_SEC_CONST_16"
  - "CRC_START_SEC_CONST_32"
  - "CRC_START_SEC_CONST_64"
  - "CRC_START_SEC_CONST_8"
  - "CRC_START_SEC_CONST_BOOLEAN"
  - "CRC_START_SEC_VAR_NO_INIT_"
  - "CRC_START_SEC_VAR_NO_INIT_16"
  - "CRC_START_SEC_VAR_NO_INIT_32"
  - "CRC_START_SEC_VAR_NO_INIT_8"
  - "CRC_START_SEC_VAR_NO_INIT_BOOLEAN"
  - "CRC_STOP_SEC_"
  - "CRC_STOP_SEC_CODE"
  - "CRC_STOP_SEC_CODE_AC"
  - "CRC_STOP_SEC_CONFIG_DATA_16"
  - "CRC_STOP_SEC_CONFIG_DATA_32"
  - "CRC_STOP_SEC_CONFIG_DATA_8"
  - "CRC_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
  - "CRC_STOP_SEC_CONST_"
  - "CRC_STOP_SEC_CONST_16"
  - "CRC_STOP_SEC_CONST_32"
  - "CRC_STOP_SEC_CONST_64"
  - "CRC_STOP_SEC_CONST_8"
  - "CRC_STOP_SEC_CONST_BOOLEAN"
  - "CRC_STOP_SEC_VAR_NO_INIT_"
  - "CRC_STOP_SEC_VAR_NO_INIT_16"
  - "CRC_STOP_SEC_VAR_NO_INIT_32"
  - "CRC_STOP_SEC_VAR_NO_INIT_8"
  - "CRC_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - "Code"
  - "Confidential"
  - "Configuration"
  - "Data"
  - "Flagchip"
  - "Proprietary"
  - "RAMCODE"
  - "Start"
  - "These"
  - "UNSPECIFIED"
  - "Variables"
  - "aligned"
  - "bit"
  - "bss"
  - "cleared"
  - "code"
  - "data"
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
  - "CRC_START_SEC_VAR"
  - "CRC_START_SEC_VAR_"
  - "CRC_STOP_SEC_VAR"
  - "CRC_STOP_SEC_VAR_"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "These"
  - "UNSPECIFIED"
  - "Variables"
  - "_INIT_"
  - "_INIT_16"
  - "_INIT_32"
  - "aligned"
  - "bit"
  - "code"
  - "data"
  - "have"
  - "variables"
  - "which"

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
  - "Crc_CalculateCRC16ARC"
  - "Crc_CalculateCRC32P4"
  - "Crc_CalculateCRC64"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "7.1"
  - "7.2"
  - "7.3"
  - "7.4"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Runtime"
  - "Shutdown"
  - "Startup"
  - "Wake"
  - "during"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "8.1"
  - "Callback"
  - "Callout"
  - "Confidential"
  - "Flagchip"
  - "Notification"
  - "Please"
  - "Proprietary"
  - "check"
  - "definitions"
  - "details"
  - "various"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Configure"
  - "Flagchip"
  - "Please"
  - "Proprietary"
  - "appropriate"
  - "chapter"
  - "dependent"
  - "details"
  - "generate"
  - "modules"
  - "other"
  - "refer"

## 10. Quality Warnings

### WARN-GLOBAL-SOURCE-BYTES
- `severity`: "info"
- `category`: "source_integrity"
- `physical_pages`: []
- `affected_ids`: ["Document Metadata", "SELF-CHECK-SUMMARY"]
- `message`: "Local PDF bytes are available; SHA256, file size, encryption state and link annotation count were patched from the local source PDF."
- `recommended_action`: "Treat this Manifest as stale if local CRC_Integration_Manual.pdf SHA256 differs from b7128f456bcb86695133b5d68b76f532f5d83f5df94caa62406556fa4f623cff."


### WARN-GLOBAL-DUPLICATE-SOURCE
- `severity`: "medium"
- `category`: "source_identity"
- `physical_pages`: []
- `affected_ids`: ["source_file_library_id"]
- `message`: "File Library search returned two CRC_Integration_Manual.pdf entries. This Manifest now records the locally verified PDF SHA256 for the adjacent source PDF."
- `recommended_action`: "If both source candidates are available, deduplicate them by SHA256 before batch importing manifests."

### WARN-0002-REVISION-DATE
- `severity`: "low"
- `category`: "revision_history"
- `physical_pages`: [2]
- `affected_ids`: ["TBL-0002-001"]
- `message`: "Revision row 0.6 shows date 2023/03/29 after 0.1 dated 2023/12/15; this appears chronologically unusual in the source-visible revision history."
- `recommended_action`: "Verify revision chronology against the source PDF before using it for release decisions."

### WARN-GLOBAL-OCR
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
- `affected_ids`: []
- `message`: "File Library returned an extractable text layer; OCR was not executed."
- `recommended_action`: "Use source PDF rendering for visual verification of diagrams, screenshots and complex tables."

## 11. Self Check Report

### SELF-CHECK-SUMMARY
- `source_pdf`: "CRC_Integration_Manual.pdf"
- `pdf_page_count`: `14`
- `indexed_physical_pages_count`: `14`
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
- `text_layer_search_supplement_terms`: `144`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `4`
- `overall_status`: "pass_with_warnings"

### SELF-CHECK-NOTES
- `page_numbering`: "All locator fields use 1-based PDF physical pages as primary keys; printed_page is auxiliary."
- `source_freshness_rule`: "Regenerate this Manifest when the source PDF SHA256 can be computed locally and differs from this Manifest, or when page count / visible revision changes."
- `manifest_scope`: "This Manifest indexes the source PDF and intentionally avoids long verbatim excerpts."
