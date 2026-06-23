---
manifest_schema_version: "1.1"
source_pdf: "SSI_Integration_Manual.pdf"
source_pdf_sha256: "5d99ccd1cac56145dbf61ffa0bf1bafd274e7bf794d733d07df309d4e98cb3ee"
source_pdf_size_bytes: 350127
pdf_page_count: 14
generated_at: "2026-06-19T14:31:18Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched-spi-ssi-trgsel-uart"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: SSI_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `SSI_Integration_Manual.pdf`
- `source_pdf_sha256`: `5d99ccd1cac56145dbf61ffa0bf1bafd274e7bf794d733d07df309d4e98cb3ee`
- `source_pdf_size_bytes`: `350127`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx SSI Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/12/15 / Initial release`
- `generated_at`: `2026-06-19T14:31:18Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched-spi-ssi-trgsel-uart`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL SSI module - Integration Manual"
- `module_scope`: "SSI module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["SSI", "Synchronous Serial Interface / Sensor Serial Interface Complex Device Driver", "Complex Device Driver / vendor-specific SSI driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Ssi", "CDD_Ssi", "CDD_SSI", "LLD_Ssi", "SSI_"]
- `summary`: "This 14-page integration manual indexes SSI content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["SSI", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx SSI Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["SSI", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SSI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SSI", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SSI", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["SSI", "Ssi", "CDD_Ssi", "Src", "include", "provides", "EcuM", "ins"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SSI", "Ssi", "CDD_Ssi", "Src", "include", "provides", "EcuM", "Det"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SSI", "Ssi", "CDD_Ssi", "Src", "include", "provides", "EcuM", "Det"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["SSI", "Ssi", "ins", "tresos", "plug", "folder", "FC7xxx", "SchM_Ssi"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "These", "UNSPECIFIED", "SSI_START_SEC_VAR", "SSI_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "These", "UNSPECIFIED", "SSI_START_SEC_VAR", "SSI_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SSI", "Ssi_HL_Instance_Init", "Ssi_HL_GetMessage", "FC7xxx", "SchM", "SSI_Hal", "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_00", "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_01"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SSI", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "SSI0", "SSI_IsrSSI0_All"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SSI", "SSI_E_PARTITION_MAPPING", "SSI_E_PARAM_U8", "SSI_E_UNINIT_U8", "FC7xxx", "Ssi_Init", "SSI_INITIALIZED", "SSI_E_INIT_FAILED_U8"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SSI", "SSI_E_PARTITION_MAPPING", "SSI_E_PARAM_U8", "SSI_E_UNINIT_U8", "FC7xxx", "Ssi_Init", "SSI_INITIALIZED", "SSI_E_INIT_FAILED_U8"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SSI", "SSI_E_PARTITION_MAPPING", "SSI_E_PARAM_U8", "SSI_E_UNINIT_U8", "FC7xxx", "Ssi_Init", "SSI_INITIALIZED", "SSI_E_INIT_FAILED_U8"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init", "MCU", "before", "SSI_Configuration"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init", "MCU", "before", "SSI_Configuration"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init", "MCU", "before", "SSI_Configuration"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init", "MCU", "before", "SSI_Configuration"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init", "MCU", "before", "SSI_Configuration"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SSI", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SsiNotification", "Notification", "Callback", "Callout", "There"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SSI", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SsiNotification", "Notification", "Callback", "Callout", "There"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["SSI", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SsiNotification", "Notification", "Callback", "Callout", "There"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SSI", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
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
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for the SSI module."]

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
- `anchors`: ["Rte module files:", "SchM_Ssi.h", "2.3", "Add Plug-ins"]

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
- `anchors`: ["Section Name", "Section Type", "Description", "SSI_START_SEC_VAR _INIT_ UNSPECIFIED"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "SSI module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the SSI driver:", "SSI_Hal.c:"]

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
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "SSI shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this…"]

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
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the SSI module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx SSI Integration Manual"
- `keywords`: ["SSI", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx SSI Integration Manual; Revision History; 0.1"
- `keywords`: ["SSI", "FC7xxx", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx SSI Integration Manual; Table of Contents; Chapter 1 Introduction ......................................................................................................................................................................... 4"
- `keywords`: ["SSI", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx SSI Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["SSI", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for the SSI module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx SSI Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["SSI", "Ssi", "CDD_Ssi", "Src", "include", "provides", "EcuM", "Det", "Ssi_Hal", "CDD_Ssi_cfg"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx SSI Integration Manual; Rte module files:; SchM_Ssi.h"
- `keywords`: ["SSI", "Ssi", "ins", "tresos", "plug", "folder", "FC7xxx", "SchM_Ssi", "EB_Plugins", "Studio"]
- `anchors`:
  - `p6`: "Rte module files:"
  - `p6`: "SchM_Ssi.h"
  - `p6`: "2.3"
  - `p6`: "Add Plug-ins"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx SSI Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["SSI", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx SSI Integration Manual; Section Name; Section Type"
- `keywords`: ["SSI", "UNSPECIFIED", "FC7xxx", "SSI_START_SEC_VAR", "SSI_STOP_SEC_VAR", "Integration"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "SSI_START_SEC_VAR _INIT_ UNSPECIFIED"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx SSI Integration Manual; Chapter 4 Exclusive Area; SSI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["SSI", "Ssi_HL_Instance_Init", "Ssi_HL_GetMessage", "FC7xxx", "SchM", "SSI_Hal", "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_00", "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_01", "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_02", "Ssi_LL_Subinstance_Init"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "SSI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the SSI driver:"
  - `p9`: "SSI_Hal.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx SSI Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["SSI", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "SSI0", "SSI_IsrSSI0_All", "Integration", "Routine"]
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
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx SSI Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["SSI", "SSI_E_PARTITION_MAPPING", "SSI_E_PARAM_U8", "SSI_E_UNINIT_U8", "FC7xxx", "Ssi_Init", "SSI_INITIALIZED", "SSI_E_INIT_FAILED_U8", "SSI_E_TIMEOUT_U8", "Ssi_GetVersionInfo"]
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
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx SSI Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init", "MCU", "before", "SSI_Configuration", "FC7xxx", "EcuM"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"
  - `p12`: "7.1"
  - `p12`: "Function Calls during Startup"
  - `p12`: "SSI shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is SSI_Init(). The MCU"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx SSI Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["SSI", "AUTOSAR_OS_NOT_USED", "FC7xxx", "SsiNotification", "Notification", "Callback", "Callout", "There", "callback", "within"]
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
- `summary`: "Chapter 9 Integration Steps: FC7xxx SSI Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["SSI", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the SSI module and generate configuration files (please refer to Building chapter for details)."
  - `p14`: "2)"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `[30.24, 96.02, 565.2, 132.56]`
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
- `key_fields`: ["SSI", "Calls", "FC7xxx", "ISR", "Integration"]
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
- `key_fields`: ["SSI", "Ssi", "CDD_Ssi", "Src", "include"]
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
- `key_fields`: ["SSI", "Ssi", "ins", "tresos", "plug"]
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
- `bbox`: `[30.6, 116.9, 564.84, 784.26]`
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
- `bbox`: `[30.6, 36.84, 564.84, 84.08]`
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
- `bbox`: `[30.6, 98.06, 564.84, 129.92]`
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
- `bbox`: `[30.6, 116.88, 564.84, 273.85]`
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
- `key_fields`: ["SSI", "Ssi", "initialized", "Calls", "SSI_Init"]
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

### API-SSI-INIT
- `name`: "SSI_Init"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "api index entry for `SSI_Init`."
- `anchors`:
  - `p12`: "SSI shall be initialized during STARTUP phase of EcuM initialization. The API to be called for this is SSI_Init(). The MCU"
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
  - `p9`: "SSI module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
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

### CFG-SSI-CONFIGURATION
- `name`: "SSI_Configuration"
- `type`: `config`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "config index entry for `SSI_Configuration`."
- `anchors`:
  - `p12`: "SSI_Init(<&SSI_Configuration>) service call during the start-up before the SSI peripherals are used. Please note that GPIO"
- `aliases`: []

### CFG-SSINOTIFICATION
- `name`: "SsiNotification"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `SsiNotification`."
- `anchors`:
  - `p13`: "SsiNotification."
- `aliases`: []

### MACRO-SSI-START-SEC-VAR
- `name`: "SSI_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `SSI_START_SEC_VAR`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "SSI_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-SSI-STOP-SEC-VAR
- `name`: "SSI_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `SSI_STOP_SEC_VAR`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "SSI_STOP_SEC_VAR _INIT_ UNSPECIFIED"
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

### MACRO-SSI-E-PARAM-U8
- `name`: "SSI_E_PARAM_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SSI_E_PARAM_U8`."
- `anchors`:
  - `p11`: "SSI_E_PARAM_U8;"
- `aliases`: []

### MACRO-SSI-E-PARTITION-MAPPING
- `name`: "SSI_E_PARTITION_MAPPING"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SSI_E_PARTITION_MAPPING`."
- `anchors`:
  - `p11`: "SSI_E_PARTITION_MAPPING;"
- `aliases`: []

### MACRO-SSI-E-UNINIT-U8
- `name`: "SSI_E_UNINIT_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SSI_E_UNINIT_U8`."
- `anchors`:
  - `p11`: "SSI_E_UNINIT_U8;"
- `aliases`: []

### MACRO-SSI-START-SEC-CODE
- `name`: "SSI_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CODE`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CODE"
- `aliases`: []

### MACRO-SSI-START-SEC-CODE-AC
- `name`: "SSI_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-SSI-START-SEC-CONFIG-DATA-16
- `name`: "SSI_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-SSI-START-SEC-CONFIG-DATA-32
- `name`: "SSI_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-SSI-START-SEC-CONFIG-DATA-8
- `name`: "SSI_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-SSI-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "SSI_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-SSI-START-SEC-CONST-16
- `name`: "SSI_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONST_16"
- `aliases`: []

### MACRO-SSI-START-SEC-CONST-32
- `name`: "SSI_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONST_32"
- `aliases`: []

### MACRO-SSI-START-SEC-CONST-8
- `name`: "SSI_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONST_8"
- `aliases`: []

### MACRO-SSI-START-SEC-CONST-BOOLEAN
- `name`: "SSI_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-SSI-START-SEC-VAR-NO-INIT-16
- `name`: "SSI_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-SSI-START-SEC-VAR-NO-INIT-32
- `name`: "SSI_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-SSI-START-SEC-VAR-NO-INIT-8
- `name`: "SSI_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-SSI-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "SSI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CODE
- `name`: "SSI_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CODE"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CODE-AC
- `name`: "SSI_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONFIG-DATA-16
- `name`: "SSI_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONFIG-DATA-32
- `name`: "SSI_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONFIG-DATA-8
- `name`: "SSI_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "SSI_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONST-16
- `name`: "SSI_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONST-32
- `name`: "SSI_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONST-8
- `name`: "SSI_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-SSI-STOP-SEC-CONST-BOOLEAN
- `name`: "SSI_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-SSI-STOP-SEC-VAR-NO-INIT-16
- `name`: "SSI_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-SSI-STOP-SEC-VAR-NO-INIT-32
- `name`: "SSI_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-SSI-STOP-SEC-VAR-NO-INIT-8
- `name`: "SSI_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-SSI-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "SSI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-SSI-E-INIT-FAILED-U8
- `name`: "SSI_E_INIT_FAILED_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SSI_E_INIT_FAILED_U8`."
- `anchors`:
  - `p11`: "SSI_E_INIT_FAILED_U8;"
- `aliases`: []

### MACRO-SSI-E-TIMEOUT-U8
- `name`: "SSI_E_TIMEOUT_U8"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SSI_E_TIMEOUT_U8`."
- `anchors`:
  - `p11`: "SSI_E_TIMEOUT_U8;"
- `aliases`: []

### MACRO-SSI-INITIALIZED
- `name`: "SSI_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SSI_INITIALIZED`."
- `anchors`:
  - `p11`: "SSI_INITIALIZED;"
- `aliases`: []

### MEM-SSI-START-SEC-VAR
- `name`: "SSI_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR
- `name`: "SSI_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SSI-START-SEC
- `name`: "SSI_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-SSI-START-SEC-CONST
- `name`: "SSI_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-SSI-START-SEC-CONST-UNSPECIFIED
- `name`: "SSI_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SSI_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-SSI-START-SEC-RAMCODE
- `name`: "SSI_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "SSI_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-INIT-16
- `name`: "SSI_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-INIT-32
- `name`: "SSI_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-INIT-8
- `name`: "SSI_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-INIT-BOOLEAN
- `name`: "SSI_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "SSI_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "SSI_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-NO-INIT
- `name`: "SSI_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SSI-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "SSI_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SSI_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SSI-STOP-SEC
- `name`: "SSI_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-SSI-STOP-SEC-CONST
- `name`: "SSI_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-SSI-STOP-SEC-CONST-UNSPECIFIED
- `name`: "SSI_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-SSI-STOP-SEC-RAMCODE
- `name`: "SSI_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-INIT-16
- `name`: "SSI_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-INIT-32
- `name`: "SSI_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-INIT-8
- `name`: "SSI_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "SSI_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "SSI_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "SSI_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-NO-INIT
- `name`: "SSI_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-SSI-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "SSI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `SSI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "SSI_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-BASE-INCLUDE-MEMMAP-SSI-MEMMAP-H
- `name`: "Base/include/MemMap/Ssi_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `Base/include/MemMap/Ssi_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src\\Base/include/MemMap/Ssi_MemMap.h"
- `aliases`: []

### FILE-CDD-SSI-CFG-H
- `name`: "CDD_Ssi_cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `CDD_Ssi_cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include CDD_Ssi_cfg.h"
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
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p13`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SSI-HAL-C
- `name`: "SSI_Hal.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `SSI_Hal.c`."
- `anchors`:
  - `p9`: "SSI_Hal.c:"
- `aliases`: []

### FILE-SCHM-SSI-H
- `name`: "SchM_Ssi.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Ssi.h`."
- `anchors`:
  - `p6`: "SchM_Ssi.h"
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

### FILE-MCAL-SRC-SSI-SRC-CDD-SSI-C
- `name`: "_MCAL/Src/Ssi/Src/CDD_Ssi.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/Src/CDD_Ssi.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/Src/CDD_Ssi.c"
- `aliases`: []

### FILE-MCAL-SRC-SSI-SRC-SSI-HAL-C
- `name`: "_MCAL/Src/Ssi/Src/Ssi_Hal.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/Src/Ssi_Hal.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/Src/Ssi_Hal.c"
- `aliases`: []

### FILE-MCAL-SRC-SSI-SRC-SSI-ISR-C
- `name`: "_MCAL/Src/Ssi/Src/Ssi_Isr.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/Src/Ssi_Isr.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/Src/Ssi_Isr.c"
- `aliases`: []

### FILE-MCAL-SRC-SSI-INCLUDE-CDD-SSI-H
- `name`: "_MCAL/Src/Ssi/include/CDD_Ssi.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/include/CDD_Ssi.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/include/CDD_Ssi.h"
- `aliases`: []

### FILE-MCAL-SRC-SSI-INCLUDE-SSI-HWA-H
- `name`: "_MCAL/Src/Ssi/include/Ssi_HWA.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/include/Ssi_HWA.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/include/Ssi_HWA.h"
- `aliases`: []

### FILE-MCAL-SRC-SSI-INCLUDE-SSI-HAL-H
- `name`: "_MCAL/Src/Ssi/include/Ssi_Hal.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/include/Ssi_Hal.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/include/Ssi_Hal.h"
- `aliases`: []

### FILE-MCAL-SRC-SSI-INCLUDE-SSI-REG-H
- `name`: "_MCAL/Src/Ssi/include/Ssi_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Ssi/include/Ssi_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/include/Ssi_Reg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-SSI-CFG-C
- `name`: "_MCAL_generate/src/CDD_Ssi_cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Ssi_cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Ssi_cfg.c"
- `aliases`: []

### TERM-SSI
- `name`: "SSI"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `SSI`."
- `anchors`:
  - `p1`: "SSI"
  - `p2`: "SSI"
  - `p3`: "SSI"
  - `p4`: "SSI"
  - `p5`: "SSI"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,11`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p3`: "Det"
  - `p5`: "Det"
  - `p11`: "Det"
- `aliases`: []

### TERM-SSI-MAINFUNCTIONMESSAGEREAD
- `name`: "Ssi_MainFunctionMessageRead"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "term index entry for `Ssi_MainFunctionMessageRead`."
- `anchors`:
  - `p11`: "Ssi_MainFunctionMessageRead"
  - `p12`: "Users should call Ssi_MainFunctionMessageRead in period to get the Ssi message to avoid to lost the message. They"
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

### TERM-CDD-SSI-CFG
- `name`: "CDD_Ssi_cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Ssi_cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Ssi_cfg.c"
- `aliases`: []

### TERM-SSI-HL-GETMESSAGE
- `name`: "Ssi_HL_GetMessage"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ssi_HL_GetMessage`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_07 is used in Ssi_HL_GetMessage."
- `aliases`: []

### TERM-SSI-HL-INSTANCE-INIT
- `name`: "Ssi_HL_Instance_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ssi_HL_Instance_Init`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_00 is used in Ssi_HL_Instance_Init."
- `aliases`: []

### TERM-SSI-HAL
- `name`: "Ssi_Hal"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ssi_Hal`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/Src/Ssi_Hal.c"
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
  - `p6`: "Copy the SSI module (_MCAL/EB_Plugins/eclipse/plugins/Ssi) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-SSI-HAL-2
- `name`: "SSI_Hal"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SSI_Hal`."
- `anchors`:
  - `p9`: "SSI_Hal.c:"
- `aliases`: []

### TERM-SSI-ISRSSI0-ALL
- `name`: "SSI_IsrSSI0_All"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `SSI_IsrSSI0_All`."
- `anchors`:
  - `p10`: "SSI_IsrSSI0_All"
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-00
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_00"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_00 is used in Ssi_HL_Instance_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-01
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_01"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_01 is used in Ssi_HL_Instance_Init."
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-02
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_02"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_02 is used in. Ssi_LL_Subinstance_Init"
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-05
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_05"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_05 is used in Ssi_HL_Instance_DeInit."
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-06
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_06"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_06 is used in Ssi_LL_Subinstance_DeInit."
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-07
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_07"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_07`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_07 is used in Ssi_HL_GetMessage."
- `aliases`: []

### TERM-SCHM-ENTER-SSI-SSI-EXCLUSIVE-AREA-08
- `name`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_08"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_08`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_08 is used in Ssi_HL_GetMessage."
- `aliases`: []

### TERM-SCHM-SSI
- `name`: "SchM_Ssi"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Ssi`."
- `anchors`:
  - `p6`: "SchM_Ssi.h"
- `aliases`: []

### TERM-SSI-DEINIT
- `name`: "Ssi_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ssi_DeInit`."
- `anchors`:
  - `p11`: "Ssi_DeInit"
- `aliases`: []

### TERM-SSI-GETVERSIONINFO
- `name`: "Ssi_GetVersionInfo"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ssi_GetVersionInfo`."
- `anchors`:
  - `p11`: "Ssi_GetVersionInfo"
- `aliases`: []

### TERM-SSI-HL-INSTANCE-DEINIT
- `name`: "Ssi_HL_Instance_DeInit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ssi_HL_Instance_DeInit`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_05 is used in Ssi_HL_Instance_DeInit."
- `aliases`: []

### TERM-SSI-HWA
- `name`: "Ssi_HWA"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ssi_HWA`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/include/Ssi_HWA.h"
- `aliases`: []

### TERM-SSI-INIT
- `name`: "Ssi_Init"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Ssi_Init`."
- `anchors`:
  - `p11`: "Ssi_Init"
- `aliases`: []

### TERM-SSI-ISR
- `name`: "Ssi_Isr"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ssi_Isr`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/Src/Ssi_Isr.c"
- `aliases`: []

### TERM-SSI-LL-SUBINSTANCE-DEINIT
- `name`: "Ssi_LL_Subinstance_DeInit"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ssi_LL_Subinstance_DeInit`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_06 is used in Ssi_LL_Subinstance_DeInit."
- `aliases`: []

### TERM-SSI-LL-SUBINSTANCE-INIT
- `name`: "Ssi_LL_Subinstance_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ssi_LL_Subinstance_Init`."
- `anchors`:
  - `p9`: "SchM_Enter_Ssi_SSI_EXCLUSIVE_AREA_02 is used in. Ssi_LL_Subinstance_Init"
- `aliases`: []

### TERM-SSI-MEMMAP
- `name`: "Ssi_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ssi_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src\\Base/include/MemMap/Ssi_MemMap.h"
- `aliases`: []

### TERM-SSI-REG
- `name`: "Ssi_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Ssi_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Ssi/include/Ssi_Reg.h"
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

### TERM-SYNCHRONOUS-SERIAL-INTERFACE-SENSOR-SERIAL-INTERFACE-COMPLEX
- `name`: "Synchronous Serial Interface / Sensor Serial Interface Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Synchronous Serial Interface / Sensor Serial Interface Complex Device Driver`."
- `anchors`:
  - `p1`: "Synchronous Serial Interface / Sensor Serial Interface Complex Device Driver"
- `aliases`: []

## 9. Search Aliases

### ALIAS-SSI
- `canonical`: "SSI"
- `aliases`: ["Synchronous Serial Interface / Sensor Serial Interface Complex Device Driver", "SSI 同步/传感器串行接口复杂驱动", "SSI module", "SSI driver", "SSI User Manual", "SSI Integration Manual", "Ssi", "Synchronous Serial Interface", "Sensor Serial Interface", "CDD_Ssi", "SSI驱动", "同步串行接口"]
- `related_ids`: ["TERM-SSI"]

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

### ALIAS-SSI-CHANNEL
- `canonical`: "SSI channel"
- `aliases`: ["SsiChannel", "Ssi_ChannelConfigType", "SSI channel configuration", "channel config", "SSI通道"]
- `related_ids`: []

### ALIAS-SSI-FRAME
- `canonical`: "SSI frame"
- `aliases`: ["frame", "data frame", "spidata", "spiclk", "serial frame", "帧传输"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between SSI_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `SSI_Integration_Manual.pdf`
- `source_pdf_sha256`: `5d99ccd1cac56145dbf61ffa0bf1bafd274e7bf794d733d07df309d4e98cb3ee`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `106`
- `technical_missing_terms_added`: `8`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `106`
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
  - "chip"
  - "choose"
  - "clock"
  - "code"
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
  - "After"
  - "Confidential"
  - "Flagchip"
  - "MsgReadType"
  - "PORT"
  - "Polling"
  - "Proprietary"
  - "also"
  - "assigned"
  - "configurated"
  - "connection"
  - "controller"
  - "desired"
  - "done"
  - "each"
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
  - "callouts"
  - "define"
  - "functions"
  - "mandatory"
  - "provided"
  - "respective"
  - "stack"
  - "uses"

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
- `symbol_index_count`: `125`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `5d99ccd1cac56145dbf61ffa0bf1bafd274e7bf794d733d07df309d4e98cb3ee`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `106`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->