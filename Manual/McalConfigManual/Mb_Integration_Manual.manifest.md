---
manifest_schema_version: "1.1"
source_pdf: "Mb_Integration_Manual.pdf"
source_pdf_sha256: "a0790fcc5f80c3c0fdbe65d4e60ea99c0e9bfecd6bfa1c21610345705c63c14f"
source_pdf_size_bytes: 1086405
pdf_page_count: 15
generated_at: "2026-06-19T13:04:07Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: Mb_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `Mb_Integration_Manual.pdf`
- `source_pdf_sha256`: `a0790fcc5f80c3c0fdbe65d4e60ea99c0e9bfecd6bfa1c21610345705c63c14f`
- `source_pdf_size_bytes`: `1086405`
- `pdf_page_count`: `15`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx Mailbox Integration Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/10/20 / Initial release for MCAL V0.3.0`
- `generated_at`: `2026-06-19T13:04:07Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL Mailbox module - Integration Manual"
- `module_scope`: "Mailbox module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["Mailbox", "Mailbox Complex Device Driver", "vendor-specific AUTOSAR Complex Device Driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Mb", "MB", "CDD_Mb"]
- `summary`: "This 15-page integration manual indexes Mailbox content across source physical pages 1-15, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["Mailbox", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx Mailbox Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Mailbox", "FC7xxx", "MCAL", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "ISR", "Integration", "Intruduction", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Mailbox", "FC7xxx", "integration", "Integration", "Intruduction", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Intruduction"
- `path`: "Chapter 1 Introduction / 1.1 Intruduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Mailbox", "FC7xxx", "integration", "Integration", "Intruduction", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Mailbox", "CDD_Mb", "Src", "include", "src", "ins", "FC7xxx", "ECUC"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mailbox", "CDD_Mb", "Src", "include", "src", "ECUC", "Det", "CDD_Mb_Hw"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Com pile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Com pile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Mailbox", "CDD_Mb", "Src", "include", "src", "ECUC", "Det", "CDD_Mb_Hw"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Mailbox", "ins", "SchM_Mb", "plug", "folder", "FC7xxx", "EB_Plugins", "tresos"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["Mailbox", "These", "UNSPECIFIED", "MB_START_SEC_VAR", "MB_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "Chapter 3 Mem ory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Mem ory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["Mailbox", "These", "UNSPECIFIED", "MB_START_SEC_VAR", "MB_STOP_SEC_VAR", "FC7xxx", "all", "sections"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Mailbox", "CDD_Mb", "Message", "queue", "channel", "protect", "updates", "status"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Mailbox", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "MB_IRQHandler", "Integration"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["Mailbox", "MB_E_UNINIT", "MB_E_PARAM_CHANNEL", "MB_E_INV_PARTITION", "MB_E_GET_SPIN_LOCK_FAILED", "FC7xxx", "MB_E_PARAM_CORE", "MB_E_CHANNEL_LOCKED"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Mailbox", "MB_E_UNINIT", "MB_E_PARAM_CHANNEL", "MB_E_INV_PARTITION", "MB_E_GET_SPIN_LOCK_FAILED", "MB_E_PARAM_CORE", "MB_E_CHANNEL_LOCKED", "FC7xxx"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Mailbox", "MB_E_UNINIT", "MB_E_PARAM_CHANNEL", "MB_E_INV_PARTITION", "FC7xxx", "MB_E_MESSAGE_QUEUE_BUSY", "MB_E_GET_SPIN_LOCK_FAILED", "Mb_ResetChannel"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtim e"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtim e"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr", "Integration", "needs", "called"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Mailbox", "AUTOSAR_OS_NOT_USED", "ISR", "MAILBOX_ISR", "FC7xxx", "NULL_PTR", "CDD_Mb_PBCfg", "Mb_RequestNotification_"]
- `anchor`: "Chapter 8 Other Requirem ents"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Calls to Notification Functions, Callbacks, Callouts"
- `path`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Mailbox", "AUTOSAR_OS_NOT_USED", "ISR", "MAILBOX_ISR", "FC7xxx", "NULL_PTR", "CDD_Mb_PBCfg", "Mb_RequestNotification_"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Mailbox", "AUTOSAR_OS_NOT_USED", "ISR", "MAILBOX_ISR", "FC7xxx", "NULL_PTR", "CDD_Mb_PBCfg", "Mb_RequestNotification_"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Mailbox", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate"]
- `anchor`: "Chapter 9 Integration steps"

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
- `anchors`: ["Table of Contents", "Chapter 1 Introduction ............................................................................…", "1.1", "Intruduction ......................................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Intruduction"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 1 Introduction", "1.1", "Intruduction", "This integration manual describes the integration requirements for the Mailbox (Mb) module."]

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
- `content_types`: ["text", "api"]
- `anchors`: ["Rte m odule files:", "SchM_Mb.h", "SchM_Mb.c", "2.3"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 3 Mem ory", "3.1", "Sections in Mem ory Map", "Section Name"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Section Name", "Section Type", "Description", "MB_START_SEC_VAR _INIT_16"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "Mailbox module using the services of Scheduler Module (SchM) for entering and exiting critical regi…", "The following critical regions are used in the Mailbox driver:", "CDD_Mb.c:"]

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
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `anchors`: ["Function Name", "Error Type", "MB_E_MESSAGE_QUEUE_BUSY", "MB_E_GET_SPIN_LOCK_FAILED"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API needs to be called is Mb_Init(ConfigPtr);"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 8 Other Requirem ents", "8.1", "Calls to Notification Functions, Callbacks, Callouts", "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declarati…"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration steps", "1)", "Configure the Mailbox module and generate configuration files (please refer to Building chapter for…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx Mailbox Integration Manual"
- `keywords`: ["Mailbox", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx Mailbox Integration Manual; Revision History; 0.1"
- `keywords`: ["Mailbox", "FC7xxx", "MCAL", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx Mailbox Integration Manual; Table of Contents; Chapter 1 Introduction ....................................................................................................................................... 4"
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "ISR", "Integration", "Intruduction", "Dependencies", "Modules", "Required", "Compile"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Chapter 1 Introduction ....................................................................................................................…"
  - `p3`: "1.1"
  - `p3`: "Intruduction ..............................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Introduction / 1.1 Intruduction"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 Introduction / 1.1 Intruduction: FC7xxx Mailbox Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["Mailbox", "FC7xxx", "integration", "Integration", "Intruduction", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Intruduction"
  - `p4`: "This integration manual describes the integration requirements for the Mailbox (Mb) module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx Mailbox Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["Mailbox", "CDD_Mb", "Src", "include", "src", "ECUC", "Det", "CDD_Mb_Hw", "CDD_Mb_Cfg", "FC7xxx"]
- `anchors`:
  - `p5`: "Chapter 2 Building"
  - `p5`: "2.1"
  - `p5`: "Dependencies on Other Modules"
  - `p5`: "Module configuration dependency"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx Mailbox Integration Manual; Rte m odule files:; SchM_Mb.h"
- `keywords`: ["Mailbox", "ins", "SchM_Mb", "plug", "folder", "FC7xxx", "EB_Plugins", "tresos", "plugins", "Integration"]
- `anchors`:
  - `p6`: "Rte m odule files:"
  - `p6`: "SchM_Mb.h"
  - `p6`: "SchM_Mb.c"
  - `p6`: "2.3"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map: FC7xxx Mailbox Integration Manual; Chapter 3 Mem ory; 3.1"
- `keywords`: ["Mailbox", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
- `anchors`:
  - `p7`: "Chapter 3 Mem ory"
  - `p7`: "3.1"
  - `p7`: "Sections in Mem ory Map"
  - `p7`: "Section Name"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map: FC7xxx Mailbox Integration Manual; Section Name; Section Type"
- `keywords`: ["Mailbox", "MB_START_SEC_VAR", "MB_STOP_SEC_VAR", "UNSPECIFIED", "FC7xxx", "Integration", "code", "data"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "MB_START_SEC_VAR _INIT_16"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx Mailbox Integration Manual; Chapter 4 Exclusive Area; Mailbox module using the services of Scheduler Module (SchM) for entering and exiting critical regions."
- `keywords`: ["Mailbox", "CDD_Mb", "Message", "queue", "channel", "protect", "updates", "status", "Spin", "Lock"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "Mailbox module using the services of Scheduler Module (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the Mailbox driver:"
  - `p9`: "CDD_Mb.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx Mailbox Integration Manual; Chapter 5 Interrupt Service Routine (ISR); Instance"
- `keywords`: ["Mailbox", "FC7xxx", "Interrupt", "ISR", "IRQ", "NVIC", "MB_IRQHandler", "Integration", "Routine", "Instance"]
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
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx Mailbox Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["Mailbox", "MB_E_UNINIT", "MB_E_PARAM_CHANNEL", "MB_E_INV_PARTITION", "MB_E_GET_SPIN_LOCK_FAILED", "MB_E_PARAM_CORE", "MB_E_CHANNEL_LOCKED", "FC7xxx", "Mb_Init", "MB_E_ALREADY_INITIALIZED"]
- `anchors`:
  - `p11`: "Chapter 6 Error Report"
  - `p11`: "6.1"
  - `p11`: "Det"
  - `p11`: "Function Name"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx Mailbox Integration Manual; Function Name; Error Type"
- `keywords`: ["Mailbox", "MB_E_UNINIT", "MB_E_PARAM_CHANNEL", "MB_E_INV_PARTITION", "FC7xxx", "MB_E_MESSAGE_QUEUE_BUSY", "MB_E_GET_SPIN_LOCK_FAILED", "Mb_ResetChannel", "MB_E_CHANNEL_UNLOCKED", "Mb_GetChannelState"]
- `anchors`:
  - `p12`: "Function Name"
  - `p12`: "Error Type"
  - `p12`: "MB_E_MESSAGE_QUEUE_BUSY"
  - `p12`: "MB_E_GET_SPIN_LOCK_FAILED"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx Mailbox Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr", "Integration", "needs", "called", "Runtim"]
- `anchors`:
  - `p13`: "Chapter 7 Function Calls"
  - `p13`: "7.1"
  - `p13`: "Function Calls during Startup"
  - `p13`: "The API needs to be called is Mb_Init(ConfigPtr);"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Calls to Notification Functions, Callbacks, Callouts: FC7xxx Mailbox Integration Manual; Chapter 8 Other Requirem ents; 8.1"
- `keywords`: ["Mailbox", "AUTOSAR_OS_NOT_USED", "ISR", "MAILBOX_ISR", "FC7xxx", "NULL_PTR", "CDD_Mb_PBCfg", "Mb_RequestNotification_", "Channel", "called"]
- `anchors`:
  - `p14`: "Chapter 8 Other Requirem ents"
  - `p14`: "8.1"
  - `p14`: "Calls to Notification Functions, Callbacks, Callouts"
  - `p14`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx Mailbox Integration Manual; Chapter 9 Integration steps; 1)"
- `keywords`: ["Mailbox", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate", "memory"]
- `anchors`:
  - `p15`: "Chapter 9 Integration steps"
  - `p15`: "1)"
  - `p15`: "Configure the Mailbox module and generate configuration files (please refer to Building chapter for details)."
  - `p15`: "2)"

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
- `key_fields`: ["Mailbox", "Calls", "FC7xxx", "ISR", "Integration"]
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
- `key_fields`: ["Mailbox", "CDD_Mb", "Src", "include", "src"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Sections in Memory Map"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
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
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Mem ory Map"
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
- `bbox`: `[30.6, 102.48, 564.72, 137.22]`
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
- `bbox`: `[30.6, 123.1, 564.72, 771.8]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-001"
- `caption`: "Table-like region on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.6, 37.25, 564.72, 226.04]`
- `key_fields`: ["Function Name", "Error Type"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like content on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `bbox`: `None`
- `key_fields`: ["Mailbox", "Calls", "FC7xxx", "Mb_Init", "ConfigPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-MB-INIT
- `name`: "Mb_Init"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,13`
- `brief`: "api index entry for `Mb_Init`."
- `anchors`:
  - `p11`: "Mb_Init"
  - `p13`: "The API needs to be called is Mb_Init(ConfigPtr);"
- `aliases`: []

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

### API-MB-IRQHANDLERR
- `name`: "MB_IRQHandlerr"
- `type`: `api`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "api index entry for `MB_IRQHandlerr`."
- `anchors`:
  - `p14`: "void MB_IRQHandlerr(void)"
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
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "api index entry for `Number`."
- `anchors`:
  - `p10`: "IRQ Number (NVIC Interrupt ID)"
- `aliases`: []

### CFG-MB-GETCHANNELSTATE
- `name`: "Mb_GetChannelState"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "config index entry for `Mb_GetChannelState`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_06 Used in function Mb_GetChannelState to protect the updates to:"
  - `p12`: "Mb_GetChannelState"
- `aliases`: []

### CFG-MB-RESETCHANNEL
- `name`: "Mb_ResetChannel"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9,12`
- `brief`: "config index entry for `Mb_ResetChannel`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_05 Used in function Mb_ResetChannel to protect the updates to:"
  - `p12`: "Mb_ResetChannel"
- `aliases`: []

### CFG-MB-DONECHANNEL
- `name`: "Mb_DoneChannel"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `Mb_DoneChannel`."
- `anchors`:
  - `p11`: "Mb_DoneChannel"
- `aliases`: []

### CFG-MB-DONENOTIFICATION
- `name`: "Mb_DoneNotification_"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Mb_DoneNotification_`."
- `anchors`:
  - `p14`: "Mb_DoneNotification_<Channel> shoud be called if the done event occurs."
- `aliases`: []

### CFG-MB-RECEIVEDNOTIFICATION
- `name`: "Mb_ReceivedNotification_"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Mb_ReceivedNotification_`."
- `anchors`:
  - `p14`: "Mb_ReceivedNotification_<Channel> should be called if a channel configured as a message queue receives a"
- `aliases`: []

### CFG-MB-REQUESTNOTIFICATION
- `name`: "Mb_RequestNotification_"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Mb_RequestNotification_`."
- `anchors`:
  - `p14`: "Mb_RequestNotification_<Channel> shoud be called if the request event occurs."
- `aliases`: []

### MACRO-MB-E-UNINIT
- `name`: "MB_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MB_E_UNINIT`."
- `anchors`:
  - `p11`: "MB_E_UNINIT"
  - `p12`: "MB_E_UNINIT"
- `aliases`: []

### MACRO-MB-E-INV-PARTITION
- `name`: "MB_E_INV_PARTITION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MB_E_INV_PARTITION`."
- `anchors`:
  - `p11`: "MB_E_INV_PARTITION"
  - `p12`: "MB_E_INV_PARTITION"
- `aliases`: []

### MACRO-MB-E-PARAM-CHANNEL
- `name`: "MB_E_PARAM_CHANNEL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MB_E_PARAM_CHANNEL`."
- `anchors`:
  - `p11`: "MB_E_PARAM_CHANNEL"
  - `p12`: "MB_E_PARAM_CHANNEL"
- `aliases`: []

### MACRO-MB-E-GET-SPIN-LOCK-FAILED
- `name`: "MB_E_GET_SPIN_LOCK_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MB_E_GET_SPIN_LOCK_FAILED`."
- `anchors`:
  - `p11`: "MB_E_GET_SPIN_LOCK_FAILED"
  - `p12`: "MB_E_GET_SPIN_LOCK_FAILED"
- `aliases`: []

### MACRO-MB-E-CHANNEL-UNLOCKED
- `name`: "MB_E_CHANNEL_UNLOCKED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `MB_E_CHANNEL_UNLOCKED`."
- `anchors`:
  - `p11`: "MB_E_CHANNEL_UNLOCKED"
  - `p12`: "MB_E_CHANNEL_UNLOCKED"
- `aliases`: []

### MACRO-MB-START-SEC-VAR
- `name`: "MB_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_START_SEC_VAR`."
- `anchors`:
  - `p8`: "MB_START_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-MB-STOP-SEC-VAR
- `name`: "MB_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MB_STOP_SEC_VAR`."
- `anchors`:
  - `p8`: "MB_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p14`: "AUTOSAR_OS_NOT_USED needs to be defined."
- `aliases`: []

### MACRO-MB-E-CHANNEL-LOCKED
- `name`: "MB_E_CHANNEL_LOCKED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_CHANNEL_LOCKED`."
- `anchors`:
  - `p11`: "MB_E_CHANNEL_LOCKED"
- `aliases`: []

### MACRO-MB-E-PARAM-CORE
- `name`: "MB_E_PARAM_CORE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_PARAM_CORE`."
- `anchors`:
  - `p11`: "MB_E_PARAM_CORE"
- `aliases`: []

### MACRO-MAILBOX-ISR
- `name`: "MAILBOX_ISR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `MAILBOX_ISR`."
- `anchors`:
  - `p14`: "extern ISR(MAILBOX_ISR);"
- `aliases`: []

### MACRO-MB-START-SEC-CODE
- `name`: "MB_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CODE`."
- `anchors`:
  - `p7`: "MB_START_SEC_CODE"
- `aliases`: []

### MACRO-MB-START-SEC-CODE-AC
- `name`: "MB_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "MB_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-MB-START-SEC-CONFIG-DATA-16
- `name`: "MB_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-MB-START-SEC-CONFIG-DATA-32
- `name`: "MB_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-MB-START-SEC-CONFIG-DATA-8
- `name`: "MB_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-MB-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "MB_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-MB-START-SEC-CONST-16
- `name`: "MB_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONST_16"
- `aliases`: []

### MACRO-MB-START-SEC-CONST-32
- `name`: "MB_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONST_32"
- `aliases`: []

### MACRO-MB-START-SEC-CONST-8
- `name`: "MB_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONST_8"
- `aliases`: []

### MACRO-MB-START-SEC-CONST-BOOLEAN
- `name`: "MB_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-MB-START-SEC-VAR-NO-INIT-16
- `name`: "MB_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-MB-START-SEC-VAR-NO-INIT-32
- `name`: "MB_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-MB-START-SEC-VAR-NO-INIT-8
- `name`: "MB_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-MB-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "MB_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-MB-STOP-SEC-CODE
- `name`: "MB_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CODE"
- `aliases`: []

### MACRO-MB-STOP-SEC-CODE-AC
- `name`: "MB_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONFIG-DATA-16
- `name`: "MB_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONFIG-DATA-32
- `name`: "MB_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONFIG-DATA-8
- `name`: "MB_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "MB_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONST-16
- `name`: "MB_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONST-32
- `name`: "MB_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONST-8
- `name`: "MB_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-MB-STOP-SEC-CONST-BOOLEAN
- `name`: "MB_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-MB-STOP-SEC-VAR-NO-INIT-16
- `name`: "MB_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-MB-STOP-SEC-VAR-NO-INIT-32
- `name`: "MB_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-MB-STOP-SEC-VAR-NO-INIT-8
- `name`: "MB_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-MB-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "MB_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MB_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-00
- `name`: "MB_EXCLUSIVE_AREA_00"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_00`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_00 Used in function Mb_SendMessage to protect the updates to:"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-01
- `name`: "MB_EXCLUSIVE_AREA_01"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_01`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_01 Used in function Mb_GetMessage to protect the updates to:"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-02
- `name`: "MB_EXCLUSIVE_AREA_02"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_02`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_02 Used in function Mb_GetMessageCount to protect the updates to:"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-03
- `name`: "MB_EXCLUSIVE_AREA_03"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_03`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_03 Used in function Mb_GetMessageQueueState to protect the updates to:"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-04
- `name`: "MB_EXCLUSIVE_AREA_04"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_04`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_04 Used in function Mb_ResetMessageQueue to protect the updates to:"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-05
- `name`: "MB_EXCLUSIVE_AREA_05"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_05`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_05 Used in function Mb_ResetChannel to protect the updates to:"
- `aliases`: []

### MACRO-MB-EXCLUSIVE-AREA-06
- `name`: "MB_EXCLUSIVE_AREA_06"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MB_EXCLUSIVE_AREA_06`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_06 Used in function Mb_GetChannelState to protect the updates to:"
- `aliases`: []

### MACRO-MB-E-ALREADY-INITIALIZED
- `name`: "MB_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p11`: "MB_E_ALREADY_INITIALIZED"
- `aliases`: []

### MACRO-MB-E-MESSAGE-QUEUE-BUSY
- `name`: "MB_E_MESSAGE_QUEUE_BUSY"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MB_E_MESSAGE_QUEUE_BUSY`."
- `anchors`:
  - `p12`: "MB_E_MESSAGE_QUEUE_BUSY"
- `aliases`: []

### MACRO-MB-E-MESSAGE-QUEUE-EMPTY
- `name`: "MB_E_MESSAGE_QUEUE_EMPTY"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_MESSAGE_QUEUE_EMPTY`."
- `anchors`:
  - `p11`: "MB_E_MESSAGE_QUEUE_EMPTY"
- `aliases`: []

### MACRO-MB-E-MESSAGE-QUEUE-FULL
- `name`: "MB_E_MESSAGE_QUEUE_FULL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_MESSAGE_QUEUE_FULL`."
- `anchors`:
  - `p11`: "MB_E_MESSAGE_QUEUE_FULL"
- `aliases`: []

### MACRO-MB-E-PARAM-BUFFER-SIZE
- `name`: "MB_E_PARAM_BUFFER_SIZE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_PARAM_BUFFER_SIZE`."
- `anchors`:
  - `p11`: "MB_E_PARAM_BUFFER_SIZE"
- `aliases`: []

### MACRO-MB-E-PARAM-CONFIG
- `name`: "MB_E_PARAM_CONFIG"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_PARAM_CONFIG`."
- `anchors`:
  - `p11`: "MB_E_PARAM_CONFIG"
- `aliases`: []

### MACRO-MB-E-PARAM-POINTER
- `name`: "MB_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MB_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "MB_E_PARAM_POINTER"
- `aliases`: []

### MACRO-MB-E-PARAM-VINFO
- `name`: "MB_E_PARAM_VINFO"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MB_E_PARAM_VINFO`."
- `anchors`:
  - `p12`: "MB_E_PARAM_VINFO"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p14`: "If the user configures notifications and the value is not \"NULL_PTR\" or \"NULL\", an extern declaration will generate in"
- `aliases`: []

### MACRO-USE-SW-VECTOR-MODE
- `name`: "USE_SW_VECTOR_MODE"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `USE_SW_VECTOR_MODE`."
- `anchors`:
  - `p14`: "In this case, If USE_SW_VECTOR_MODE is not defined, the user needs to map the interrupt vector table function to"
- `aliases`: []

### MEM-MB-START-SEC-VAR
- `name`: "MB_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR
- `name`: "MB_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MB-START-SEC
- `name`: "MB_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-MB-START-SEC-CONST
- `name`: "MB_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-MB-START-SEC-CONST-UNSPECIFIED
- `name`: "MB_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MB_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-MB-START-SEC-RAMCODE
- `name`: "MB_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "MB_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-MB-START-SEC-VAR-INIT-16
- `name`: "MB_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "MB_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-MB-START-SEC-VAR-INIT-32
- `name`: "MB_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "MB_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-MB-START-SEC-VAR-INIT-8
- `name`: "MB_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-MB-START-SEC-VAR-INIT-BOOLEAN
- `name`: "MB_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-MB-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "MB_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "MB_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MB-START-SEC-VAR-NO-INIT
- `name`: "MB_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MB-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "MB_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MB_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MB-STOP-SEC
- `name`: "MB_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-MB-STOP-SEC-CONST
- `name`: "MB_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-MB-STOP-SEC-CONST-UNSPECIFIED
- `name`: "MB_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-MB-STOP-SEC-RAMCODE
- `name`: "MB_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-INIT-16
- `name`: "MB_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p8`: "MB_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-INIT-32
- `name`: "MB_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p8`: "MB_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-INIT-8
- `name`: "MB_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "MB_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "MB_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "MB_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-NO-INIT
- `name`: "MB_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-MB-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "MB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `MB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "MB_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-CDD-MB-C
- `name`: "CDD_Mb.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `CDD_Mb.c`."
- `anchors`:
  - `p9`: "CDD_Mb.c:"
- `aliases`: []

### FILE-CDD-MB-PBCFG-C
- `name`: "CDD_Mb_PBCfg.c"
- `type`: `file`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "file index entry for `CDD_Mb_PBCfg.c`."
- `anchors`:
  - `p14`: "CDD_Mb_PBCfg.c. User need implement the notification in any file."
- `aliases`: []

### FILE-DET-C
- `name`: "Det.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `Det.c`."
- `anchors`:
  - `p5`: "Det.c"
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
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p14`: "Please check various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-MB-C
- `name`: "SchM_Mb.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Mb.c`."
- `anchors`:
  - `p6`: "SchM_Mb.c"
- `aliases`: []

### FILE-SCHM-MB-H
- `name`: "SchM_Mb.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_Mb.h`."
- `anchors`:
  - `p6`: "SchM_Mb.h"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-MB-REG-H
- `name`: "_MCAL/Src/Common/include/Mb_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mb_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mb_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-MB-REGOPS-H
- `name`: "_MCAL/Src/Common/include/Mb_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Mb_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mb_RegOps.h"
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

### FILE-MCAL-SRC-COMMON-SRC-SPINLOCK-C
- `name`: "_MCAL/Src/Common/src/SpinLock.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/src/SpinLock.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/src/SpinLock.c"
- `aliases`: []

### FILE-MCAL-SRC-MB-INCLUDE-CDD-MB-HW-H
- `name`: "_MCAL/Src/Mb/include/CDD_Mb_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/include/CDD_Mb_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/CDD_Mb_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-MB-INCLUDE-CDD-MB-TYPES-H
- `name`: "_MCAL/Src/Mb/include/CDD_Mb_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/include/CDD_Mb_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/CDD_Mb_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-MB-INCLUDE-CDD-MB-VERSION-H
- `name`: "_MCAL/Src/Mb/include/CDD_Mb_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/include/CDD_Mb_Version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/CDD_Mb_Version.h"
- `aliases`: []

### FILE-MCAL-SRC-MB-INCLUDE-MB-MEMMAP-H
- `name`: "_MCAL/Src/Mb/include/Mb_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/include/Mb_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/Mb_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-MB-SRC-CDD-MB-C
- `name`: "_MCAL/Src/Mb/src/CDD_Mb.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/src/CDD_Mb.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/src/CDD_Mb.c"
- `aliases`: []

### FILE-MCAL-SRC-MB-SRC-CDD-MB-HW-C
- `name`: "_MCAL/Src/Mb/src/CDD_Mb_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/src/CDD_Mb_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/src/CDD_Mb_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-MB-SRC-CDD-MB-IRQ-C
- `name`: "_MCAL/Src/Mb/src/CDD_Mb_Irq.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Mb/src/CDD_Mb_Irq.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/src/CDD_Mb_Irq.c"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-CDD-MB-CFG-H
- `name`: "_MCAL_generate/include/CDD_Mb_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/CDD_Mb_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/CDD_Mb_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-MB-CFG-C
- `name`: "_MCAL_generate/src/CDD_Mb_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Mb_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Mb_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-CDD-MB-PBCFG-C
- `name`: "_MCAL_generate/src/CDD_Mb_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/CDD_Mb_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Mb_PBcfg.c"
- `aliases`: []

### TERM-MAILBOX
- `name`: "Mailbox"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `Mailbox`."
- `anchors`:
  - `p1`: "Mailbox"
  - `p2`: "Mailbox"
  - `p3`: "Mailbox"
  - `p4`: "FC7xxx Mailbox Integration Manual"
  - `p5`: "Mailbox"
- `aliases`: []

### TERM-MAILBOX-COMPLEX-DEVICE-DRIVER
- `name`: "Mailbox Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `Mailbox Complex Device Driver`."
- `anchors`:
  - `p1`: "Mailbox Complex Device Driver"
  - `p2`: "Mailbox Complex Device Driver"
  - `p3`: "Mailbox Complex Device Driver"
  - `p4`: "Mailbox Complex Device Driver"
  - `p5`: "Mailbox Complex Device Driver"
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

### TERM-MB-GETMESSAGE
- `name`: "Mb_GetMessage"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Mb_GetMessage`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_01 Used in function Mb_GetMessage to protect the updates to:"
  - `p11`: "Mb_GetMessage"
- `aliases`: []

### TERM-MB-GETMESSAGECOUNT
- `name`: "Mb_GetMessageCount"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Mb_GetMessageCount`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_02 Used in function Mb_GetMessageCount to protect the updates to:"
  - `p11`: "Mb_GetMessageCount"
- `aliases`: []

### TERM-MB-GETMESSAGEQUEUESTATE
- `name`: "Mb_GetMessageQueueState"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Mb_GetMessageQueueState`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_03 Used in function Mb_GetMessageQueueState to protect the updates to:"
  - `p11`: "Mb_GetMessageQueueState"
- `aliases`: []

### TERM-MB-RESETMESSAGEQUEUE
- `name`: "Mb_ResetMessageQueue"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Mb_ResetMessageQueue`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_04 Used in function Mb_ResetMessageQueue to protect the updates to:"
  - `p11`: "Mb_ResetMessageQueue"
- `aliases`: []

### TERM-MB-SENDMESSAGE
- `name`: "Mb_SendMessage"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Mb_SendMessage`."
- `anchors`:
  - `p9`: "MB_EXCLUSIVE_AREA_00 Used in function Mb_SendMessage to protect the updates to:"
  - `p11`: "Mb_SendMessage"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,12`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p12`: "Dem"
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

### TERM-CDD-MB-CFG
- `name`: "CDD_Mb_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Mb_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Mb_Cfg.c"
- `aliases`: []

### TERM-CDD-MB-HW
- `name`: "CDD_Mb_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Mb_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/src/CDD_Mb_Hw.c"
- `aliases`: []

### TERM-SCHM-MB
- `name`: "SchM_Mb"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_Mb`."
- `anchors`:
  - `p6`: "SchM_Mb.h"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p14`: "AUTOSAR"
- `aliases`: []

### TERM-CDD-MB-IRQ
- `name`: "CDD_Mb_Irq"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Mb_Irq`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/src/CDD_Mb_Irq.c"
- `aliases`: []

### TERM-CDD-MB-PBCFG
- `name`: "CDD_Mb_PBCfg"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `CDD_Mb_PBCfg`."
- `anchors`:
  - `p14`: "CDD_Mb_PBCfg.c. User need implement the notification in any file."
- `aliases`: []

### TERM-CDD-MB-PBCFG-2
- `name`: "CDD_Mb_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Mb_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/CDD_Mb_PBcfg.c"
- `aliases`: []

### TERM-CDD-MB-TYPES
- `name`: "CDD_Mb_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Mb_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/CDD_Mb_Types.h"
- `aliases`: []

### TERM-CDD-MB-VERSION
- `name`: "CDD_Mb_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `CDD_Mb_Version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/CDD_Mb_Version.h"
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
  - `p6`: "Copy Mailbox module(_MCAL/EB_Plugins/eclipse/plugins/Mb) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-MB-IRQHANDLER
- `name`: "MB_IRQHandler"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `MB_IRQHandler`."
- `anchors`:
  - `p10`: "MB_IRQHandler"
- `aliases`: []

### TERM-MB-DEINIT
- `name`: "Mb_DeInit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Mb_DeInit`."
- `anchors`:
  - `p11`: "Mb_DeInit"
- `aliases`: []

### TERM-MB-GETVERSIONINFO
- `name`: "Mb_GetVersionInfo"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `Mb_GetVersionInfo`."
- `anchors`:
  - `p12`: "Mb_GetVersionInfo"
- `aliases`: []

### TERM-MB-MEMMAP
- `name`: "Mb_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mb_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Src/Mb/include/Mb_MemMap.h"
- `aliases`: []

### TERM-MB-REG
- `name`: "Mb_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mb_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mb_Reg.h"
- `aliases`: []

### TERM-MB-REGOPS
- `name`: "Mb_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Mb_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Mb_RegOps.h"
- `aliases`: []

### TERM-MB-SENDDATA
- `name`: "Mb_SendData"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Mb_SendData`."
- `anchors`:
  - `p11`: "Mb_SendData"
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

### ALIAS-MAILBOX
- `canonical`: "Mailbox"
- `aliases`: ["Mailbox Complex Device Driver", "邮箱 / 多核消息通信驱动", "Mailbox module", "Mailbox driver", "Mailbox User Manual", "Mailbox Integration Manual", "Mb", "MB", "CDD_Mb", "mailbox driver", "multicore mailbox", "邮箱驱动"]
- `related_ids`: ["TERM-MAILBOX"]

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

### ALIAS-FREE-MODE
- `canonical`: "Free Mode"
- `aliases`: ["free channel mode", "Mb_SendData", "Mb_DoneChannel", "zero-copy"]
- `related_ids`: []

### ALIAS-MESSAGE-QUEUE
- `canonical`: "Message Queue"
- `aliases`: ["Mb_SendMessage", "Mb_GetMessage", "message pool", "message queue mode"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between Mb_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `Mb_Integration_Manual.pdf`
- `source_pdf_sha256`: `a0790fcc5f80c3c0fdbe65d4e60ea99c0e9bfecd6bfa1c21610345705c63c14f`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `80`
- `technical_missing_terms_added`: `3`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `80`
- `supplemented_missing_technical_token_count`: `3`
- `supplemented_physical_pages_count`: `14`
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
  - "alls"
  - "emory"
  - "equirements"
  - "hapter"
  - "ntegration"
  - "nterrupt"
  - "ntroduction"
  - "ontents"
  - "outine"
  - "rea"
  - "uilding"
  - "xclusive"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "ntroduction"
  - "ntruduction"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "APIs"
  - "Areas"
  - "Build"
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
  - "ile"
  - "information"
  - "ing"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "partition"
  - "parts"
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
  - "readonly"
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
  - "Exclu"
  - "Flagchip"
  - "Proprietary"
  - "block"
  - "hardware"
  - "ring"
  - "sive"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "nterrupt"
  - "outine"

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
  - "ake"
  - "alls"
  - "untime"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Callback"
  - "Callout"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "allbacks"
  - "allouts"
  - "alls"
  - "define"
  - "example"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Build"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "dependent"
  - "linker"
  - "locations"
  - "modules"
  - "ntegration"
  - "other"
  - "their"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15`
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
- `physical_pages`: `3,5,10,11,12,13`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001"]
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
- `pdf_page_count`: `15`
- `indexed_physical_pages_count`: `15`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `25`
- `table_index_count`: `9`
- `figure_index_count`: `0`
- `symbol_index_count`: `149`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `a0790fcc5f80c3c0fdbe65d4e60ea99c0e9bfecd6bfa1c21610345705c63c14f`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `80`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->