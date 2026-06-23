---
manifest_schema_version: "1.1"
source_pdf: "Port_Integration_Manual.pdf"
source_pdf_sha256: "c228bf7e09985b6a36b44e9ea9bb8d878e912166f5a51720744c919cfd9f9245"
source_pdf_size_bytes: 325701
pdf_page_count: 14
generated_at: "2026-06-19T14:01:23Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched"
source_document_id: null
source_document_revision: "Rev A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: Port_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `Port_Integration_Manual.pdf`
- `source_pdf_sha256`: `c228bf7e09985b6a36b44e9ea9bb8d878e912166f5a51720744c919cfd9f9245`
- `source_pdf_size_bytes`: `325701`
- `pdf_page_count`: `14`
- `source_document_id`: `null`
- `source_document_revision`: `Rev A0`
- `visible_cover_title`: `FC7xxx Port Integration Manual`
- `visible_cover_revision`: `Rev A0`
- `revision_history_latest_row`: `A0 / 2025/01/14 / Initial release`
- `generated_at`: `2026-06-19T14:01:23Z`
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

- `topic`: "FC7xxx AUTOSAR MCAL PORT module - Integration Manual"
- `module_scope`: "PORT module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration Steps"]
- `key_terms`: ["PORT", "Port Driver", "AUTOSAR_SWS_PortDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Port", "Dio", "DIO", "GPIO", "GPIOA"]
- `summary`: "This 14-page integration manual indexes PORT content across source physical pages 1-14, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["Port", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx Port Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["Port", "FC7xxx", "Integration", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Port", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Port", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["Port", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1 Introduction"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["Port", "PORT", "Src", "include", "ins", "tresos", "FC7xxx", "Port_Hw"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Port", "Src", "include", "Port_Hw", "Port_Cfg", "FC7xxx", "dependency", "provides"]
- `anchor`: "2.1 Dependencies on Other Modules"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Port", "Src", "include", "Port_Hw", "Port_Cfg", "FC7xxx", "dependency", "provides"]
- `anchor`: "2.2 Files Required for Compile"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["Port", "PORT", "ins", "tresos", "plug", "folder", "FC7xxx", "EB_Plugins"]
- `anchor`: "2.3 Add Plug-ins"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["Port", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["Port", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned"]
- `anchor`: "3.1 Sections in Memory Map"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Port", "exclusive", "area", "FC7xxx", "SchM", "Port_Init", "Port_Hw", "Port_LL_Init_Port"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["Port", "FC7xxx", "ISR", "Integration", "Interrupt", "Routine"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Port", "PORT_E_GET_SPIN_LOCK_FAILED", "PORT_E_UNINIT", "PORT_E_PARAM_PIN", "FC7xxx", "Port_Init", "PORT_E_INIT_FAILED", "Port_SetPinDirection"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Port", "PORT_E_GET_SPIN_LOCK_FAILED", "PORT_E_UNINIT", "PORT_E_PARAM_PIN", "FC7xxx", "Port_Init", "PORT_E_INIT_FAILED", "Port_SetPinDirection"]
- `anchor`: "6.1 Det"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["Port", "PORT_E_GET_SPIN_LOCK_FAILED", "PORT_E_UNINIT", "PORT_E_PARAM_PIN", "FC7xxx", "Port_Init", "PORT_E_INIT_FAILED", "Port_SetPinDirection"]
- `anchor`: "6.2 Dem"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Port", "Calls", "FC7xxx", "Integration"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Port", "Calls", "FC7xxx", "Integration"]
- `anchor`: "7.1 Function Calls during Startup"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Port", "Calls", "FC7xxx", "Integration"]
- `anchor`: "7.2 Function Calls during Shutdown"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Port", "Calls", "FC7xxx", "Integration"]
- `anchor`: "7.3 Function Calls during Wake-up"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["Port", "Calls", "FC7xxx", "Integration"]
- `anchor`: "7.4 Function Calls during Runtime"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Port", "FC7xxx", "Integration", "Notification", "Callback", "Callout"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Port", "FC7xxx", "Integration", "Notification", "Callback", "Callout"]
- `anchor`: "8.1 Notification, Callback, Callout"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Port", "FC7xxx", "Integration", "Notification", "Callback", "Callout"]
- `anchor`: "8.2 Macros"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration Steps"
- `path`: "Chapter 9 Integration Steps"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Port", "FC7xxx", "Integration", "Configure", "please", "details", "generate", "appropriate"]
- `anchor`: "Chapter 9 Integration Steps"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["FC7xxx Port Integration", "Manual"]

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
- `anchors`: ["Chapter 1 Introduction", "1.1 Introduction", "This integration manual describes the integration requirements for the Port module."]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 2 Building", "2.1 Dependencies on Other Modules", "Module configuration dependency", "Mcu: This module provides the clock reference point for Port module."]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "api"]
- `anchors`: ["2.3 Add Plug-ins", "Port module plug-ins are developed for EB tresos Studio, so, to use PORT plug-ins on the EB tresos…", "needs to add the PORT module to the EB plug-ins folder first.", "1)"]

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
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Section Name", "Section Type", "Description", "PORT_START_SEC_VAR _INIT_ UNSPECIFIED"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "Port module using the services of Schedule Manger (SchM) for entering and exiting critical regions.", "The following critical regions are used in the Port driver:", "Port.c:"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "None."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 6 Error Report", "6.1 Det", "Function Name", "Error Type"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 7 Function Calls", "7.1 Function Calls during Startup", "None", "7.2 Function Calls during Shutdown"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1 Notification, Callback, Callout", "None", "8.2 Macros"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration Steps", "1)", "Configure the Port module and generate configuration files (please refer to Building chapter for de…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx Port Integration; Manual"
- `keywords`: ["Port", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "FC7xxx Port Integration"
  - `p1`: "Manual"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx Port Integration Manual; Revision History; A0"
- `keywords`: ["Port", "FC7xxx", "Integration", "Date"]
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
- `summary`: "Table of Contents: FC7xxx Port Integration Manual; Table of Contents; Chapter 1 Introduction .......................................................................................................................................... 4"
- `keywords`: ["Port", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx Port Integration Manual; Chapter 1 Introduction; 1.1 Introduction"
- `keywords`: ["Port", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1 Introduction"
  - `p4`: "This integration manual describes the integration requirements for the Port module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx Port Integration Manual; Chapter 2 Building; 2.1 Dependencies on Other Modules"
- `keywords`: ["Port", "Src", "include", "Port_Hw", "Port_Cfg", "FC7xxx", "dependency", "provides", "Rte", "APIs"]
- `anchors`:
  - `p5`: "Chapter 2 Building"
  - `p5`: "2.1 Dependencies on Other Modules"
  - `p5`: "Module configuration dependency"
  - `p5`: "Mcu: This module provides the clock reference point for Port module."

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx Port Integration Manual; 2.3 Add Plug-ins; Port module plug-ins are developed for EB tresos Studio, so, to use PORT plug-ins on the EB tresos Studio, the user"
- `keywords`: ["Port", "PORT", "ins", "tresos", "plug", "folder", "FC7xxx", "EB_Plugins", "Studio", "plugins"]
- `anchors`:
  - `p6`: "2.3 Add Plug-ins"
  - `p6`: "Port module plug-ins are developed for EB tresos Studio, so, to use PORT plug-ins on the EB tresos Studio, the user"
  - `p6`: "needs to add the PORT module to the EB plug-ins folder first."
  - `p6`: "1)"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx Port Integration Manual; Chapter 3 Memory; 3.1 Sections in Memory Map"
- `keywords`: ["Port", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
- `anchors`:
  - `p7`: "Chapter 3 Memory"
  - `p7`: "3.1 Sections in Memory Map"
  - `p7`: "Section Name"
  - `p7`: "Section Type"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx Port Integration Manual; Section Name; Section Type"
- `keywords`: ["Port", "UNSPECIFIED", "FC7xxx", "PORT_START_SEC_VAR", "PORT_STOP_SEC_VAR", "PORT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE", "PORT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE", "These", "Integration", "all"]
- `anchors`:
  - `p8`: "Section Name"
  - `p8`: "Section Type"
  - `p8`: "Description"
  - `p8`: "PORT_START_SEC_VAR _INIT_ UNSPECIFIED"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx Port Integration Manual; Chapter 4 Exclusive Area; Port module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["Port", "exclusive", "area", "FC7xxx", "SchM", "Port_Init", "Port_Hw", "Port_LL_Init_Port", "Port_LL_SetPinDirection", "Port_LL_SetPinMode"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "Port module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the Port driver:"
  - `p9`: "Port.c:"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx Port Integration Manual; Chapter 5 Interrupt Service Routine (ISR); None."
- `keywords`: ["Port", "FC7xxx", "ISR", "Integration", "Interrupt", "Routine"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p10`: "None."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx Port Integration Manual; Chapter 6 Error Report; 6.1 Det"
- `keywords`: ["Port", "PORT_E_GET_SPIN_LOCK_FAILED", "PORT_E_UNINIT", "PORT_E_PARAM_PIN", "FC7xxx", "Port_Init", "PORT_E_INIT_FAILED", "Port_SetPinDirection", "PORT_E_DIRECTION_UNCHANGEABLE", "Port_SetPinMode"]
- `anchors`:
  - `p11`: "Chapter 6 Error Report"
  - `p11`: "6.1 Det"
  - `p11`: "Function Name"
  - `p11`: "Error Type"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx Port Integration Manual; Chapter 7 Function Calls; 7.1 Function Calls during Startup"
- `keywords`: ["Port", "Calls", "FC7xxx", "Integration"]
- `anchors`:
  - `p12`: "Chapter 7 Function Calls"
  - `p12`: "7.1 Function Calls during Startup"
  - `p12`: "None"
  - `p12`: "7.2 Function Calls during Shutdown"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx Port Integration Manual; Chapter 8 Other Requirements; 8.1 Notification, Callback, Callout"
- `keywords`: ["Port", "FC7xxx", "Integration", "Notification", "Callback", "Callout"]
- `anchors`:
  - `p13`: "Chapter 8 Other Requirements"
  - `p13`: "8.1 Notification, Callback, Callout"
  - `p13`: "None"
  - `p13`: "8.2 Macros"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 9 Integration Steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration Steps: FC7xxx Port Integration Manual; Chapter 9 Integration Steps; 1)"
- `keywords`: ["Port", "FC7xxx", "Integration", "Configure", "please", "details", "generate", "appropriate", "memory", "sections"]
- `anchors`:
  - `p14`: "Chapter 9 Integration Steps"
  - `p14`: "1)"
  - `p14`: "Configure the Port module and generate configuration files (please refer to Building chapter for details)."
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
- `key_fields`: ["Port", "Calls", "FC7xxx", "ISR", "Integration"]
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
- `key_fields`: ["Port", "Src", "include", "Port_Hw", "Port_Cfg"]
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
- `bbox`: `[30.6, 36.84, 564.84, 177.32]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 116.88, 564.84, 351.49]`
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
- `key_fields`: ["Port", "Calls", "FC7xxx", "Integration"]
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
  - `p9`: "Port module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### MACRO-PORT-START-SEC-VAR
- `name`: "PORT_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `PORT_START_SEC_VAR`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "PORT_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-PORT-STOP-SEC-VAR
- `name`: "PORT_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `PORT_STOP_SEC_VAR`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "PORT_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-PORT-E-GET-SPIN-LOCK-FAILED
- `name`: "PORT_E_GET_SPIN_LOCK_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_GET_SPIN_LOCK_FAILED`."
- `anchors`:
  - `p11`: "PORT_E_GET_SPIN_LOCK_FAILED"
- `aliases`: []

### MACRO-PORT-E-UNINIT
- `name`: "PORT_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_UNINIT`."
- `anchors`:
  - `p11`: "PORT_E_UNINIT"
- `aliases`: []

### MACRO-PORT-E-PARAM-PIN
- `name`: "PORT_E_PARAM_PIN"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_PARAM_PIN`."
- `anchors`:
  - `p11`: "PORT_E_PARAM_PIN"
- `aliases`: []

### MACRO-PORT-START-SEC-CODE
- `name`: "PORT_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CODE`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CODE"
- `aliases`: []

### MACRO-PORT-START-SEC-CODE-AC
- `name`: "PORT_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-PORT-START-SEC-CONFIG-DATA-16
- `name`: "PORT_START_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-PORT-START-SEC-CONFIG-DATA-32
- `name`: "PORT_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-PORT-START-SEC-CONFIG-DATA-8
- `name`: "PORT_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-PORT-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "PORT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-PORT-START-SEC-CONST-16
- `name`: "PORT_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONST_16"
- `aliases`: []

### MACRO-PORT-START-SEC-CONST-32
- `name`: "PORT_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONST_32"
- `aliases`: []

### MACRO-PORT-START-SEC-CONST-8
- `name`: "PORT_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONST_8"
- `aliases`: []

### MACRO-PORT-START-SEC-CONST-BOOLEAN
- `name`: "PORT_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-PORT-START-SEC-VAR-INIT-SHAREABLE-NO-CACHEABLE
- `name`: "PORT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PORT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PORT_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `aliases`: []

### MACRO-PORT-START-SEC-VAR-NO-INIT-16
- `name`: "PORT_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-PORT-START-SEC-VAR-NO-INIT-32
- `name`: "PORT_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-PORT-START-SEC-VAR-NO-INIT-8
- `name`: "PORT_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-PORT-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "PORT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CODE
- `name`: "PORT_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CODE"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CODE-AC
- `name`: "PORT_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONFIG-DATA-16
- `name`: "PORT_STOP_SEC_CONFIG_DATA_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONFIG-DATA-32
- `name`: "PORT_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONFIG-DATA-8
- `name`: "PORT_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONST-16
- `name`: "PORT_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONST-32
- `name`: "PORT_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-PORT-STOP-SEC-CONST-BOOLEAN
- `name`: "PORT_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-PORT-STOP-SEC-VAR-INIT-SHAREABLE-NO-CACHEABLE
- `name`: "PORT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `PORT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "PORT_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE"
- `aliases`: []

### MACRO-PORT-STOP-SEC-VAR-NO-INIT-16
- `name`: "PORT_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-PORT-STOP-SEC-VAR-NO-INIT-32
- `name`: "PORT_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-PORT-STOP-SEC-VAR-NO-INIT-8
- `name`: "PORT_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-PORT-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-PORT-E-DIRECTION-UNCHANGEABLE
- `name`: "PORT_E_DIRECTION_UNCHANGEABLE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_DIRECTION_UNCHANGEABLE`."
- `anchors`:
  - `p11`: "PORT_E_DIRECTION_UNCHANGEABLE"
- `aliases`: []

### MACRO-PORT-E-INIT-FAILED
- `name`: "PORT_E_INIT_FAILED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_INIT_FAILED`."
- `anchors`:
  - `p11`: "PORT_E_INIT_FAILED"
- `aliases`: []

### MACRO-PORT-E-MODE-UNCHANGEABLE
- `name`: "PORT_E_MODE_UNCHANGEABLE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_MODE_UNCHANGEABLE`."
- `anchors`:
  - `p11`: "PORT_E_MODE_UNCHANGEABLE"
- `aliases`: []

### MACRO-PORT-E-PARAM-INVALID-MODE
- `name`: "PORT_E_PARAM_INVALID_MODE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_PARAM_INVALID_MODE`."
- `anchors`:
  - `p11`: "PORT_E_PARAM_INVALID_MODE"
- `aliases`: []

### MACRO-PORT-E-PARAM-POINTER
- `name`: "PORT_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `PORT_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "PORT_E_PARAM_POINTER"
- `aliases`: []

### MACRO-PWM-STOP-SEC-CONST-8
- `name`: "PWM_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `PWM_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "PWM_STOP_SEC_CONST_8"
- `aliases`: []

### MEM-PORT-START-SEC-VAR
- `name`: "PORT_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR
- `name`: "PORT_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-PORT-START-SEC
- `name`: "PORT_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-PORT-START-SEC-CONST
- `name`: "PORT_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-PORT-START-SEC-CONST-UNSPECIFIED
- `name`: "PORT_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PORT_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-PORT-START-SEC-RAMCODE
- `name`: "PORT_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "PORT_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-INIT-16
- `name`: "PORT_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-INIT-32
- `name`: "PORT_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-INIT-8
- `name`: "PORT_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-INIT-BOOLEAN
- `name`: "PORT_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "PORT_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "PORT_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-NO-INIT
- `name`: "PORT_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-PORT-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PORT_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-PORT-STOP-SEC
- `name`: "PORT_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-PORT-STOP-SEC-CONST
- `name`: "PORT_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-PORT-STOP-SEC-CONST-UNSPECIFIED
- `name`: "PORT_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-PORT-STOP-SEC-RAMCODE
- `name`: "PORT_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-INIT-16
- `name`: "PORT_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-INIT-32
- `name`: "PORT_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-INIT-8
- `name`: "PORT_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "PORT_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "PORT_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "PORT_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-NO-INIT
- `name`: "PORT_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-PORT-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "PORT_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-PORT-C
- `name`: "Port.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "file index entry for `Port.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/ Port /Src/ Port.c"
  - `p9`: "Port.c:"
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

### FILE-PORT-H
- `name`: "Port.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `Port.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/ Port.h"
- `aliases`: []

### FILE-PORT-HW-C
- `name`: "Port_Hw.c"
- `type`: `file`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "file index entry for `Port_Hw.c`."
- `anchors`:
  - `p9`: "Port_Hw.c:"
- `aliases`: []

### FILE-SCHM-PORT-H
- `name`: "SchM_Port.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `SchM_Port.h`."
- `anchors`:
  - `p5`: "SchM_Port.h"
- `aliases`: []

### FILE-MCAL-RTE-PORT-INCLUDE-PORT-MEMMAP-H
- `name`: "_MCAL/Rte/Port/include/Port_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Rte/Port/include/Port_MemMap.h`."
- `anchors`:
  - `p5`: "_MCAL/Rte/Port/include/Port_MemMap.h"
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

### FILE-MCAL-SRC-COMMON-INCLUDE-GPIO-REG-H
- `name`: "_MCAL/Src/Common/include/Gpio_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Common/include/Gpio_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/include/Gpio_Reg.h"
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

### FILE-MCAL-SRC-PORT-SRC-PORT-HW-C
- `name`: "_MCAL/Src/Port/Src/Port_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Port/Src/Port_Hw.c`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/Src/Port_Hw.c"
- `aliases`: []

### FILE-MCAL-SRC-PORT-INCLUDE-GPIO-REGOPS-H
- `name`: "_MCAL/Src/Port/include/Gpio_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Port/include/Gpio_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Gpio_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-PORT-INCLUDE-PORT-HW-H
- `name`: "_MCAL/Src/Port/include/Port_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Port/include/Port_Hw.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-PORT-INCLUDE-PORT-HW-TYPES-H
- `name`: "_MCAL/Src/Port/include/Port_Hw_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Port/include/Port_Hw_Types.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_Hw_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-PORT-INCLUDE-PORT-REGOPS-H
- `name`: "_MCAL/Src/Port/include/Port_RegOps.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Port/include/Port_RegOps.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_RegOps.h"
- `aliases`: []

### FILE-MCAL-SRC-PORT-INCLUDE-PORT-VERSION-H
- `name`: "_MCAL/Src/Port/include/Port_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL/Src/Port/include/Port_Version.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_Version.h"
- `aliases`: []

### FILE-MCAL-GENERATE-INCLUDE-PORT-CFG-H
- `name`: "_MCAL_generate/include/Port_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/include/Port_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_generate/include/Port_Cfg.h"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-PORT-CFG-C
- `name`: "_MCAL_generate/src/Port_Cfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Port_Cfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Port_Cfg.c"
- `aliases`: []

### FILE-MCAL-GENERATE-SRC-PORT-PBCFG-C
- `name`: "_MCAL_generate/src/Port_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_generate/src/Port_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Port_PBcfg.c"
- `aliases`: []

### FILE-INCLUDE-PORT-REG-H
- `name`: "include/Port_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `include/Port_Reg.h`."
- `anchors`:
  - `p5`: "_MCAL/Src/Common/ include/Port_Reg.h"
- `aliases`: []

### TERM-PORT-DRIVER
- `name`: "Port Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `Port Driver`."
- `anchors`:
  - `p1`: "Port Driver"
  - `p2`: "Port Driver"
  - `p3`: "Port Driver"
  - `p4`: "Port Driver"
  - `p5`: "Port Driver"
- `aliases`: []

### TERM-PORT
- `name`: "PORT"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,7,8,11`
- `brief`: "term index entry for `PORT`."
- `anchors`:
  - `p6`: "PORT"
  - `p7`: "PORT"
  - `p8`: "PORT"
  - `p11`: "PORT"
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

### TERM-PORT-HW
- `name`: "Port_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9`
- `brief`: "term index entry for `Port_Hw`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/Src/Port_Hw.c"
  - `p9`: "Port_Hw.c:"
- `aliases`: []

### TERM-PORT-INIT
- `name`: "Port_Init"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,11`
- `brief`: "term index entry for `Port_Init`."
- `anchors`:
  - `p9`: "Port_Init : exclusive area 5, exclusive area 6"
  - `p11`: "Port_Init"
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

### TERM-PORT-CFG
- `name`: "Port_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Port_Cfg.c"
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
  - `p6`: "Copy the Port module(_MCAL/EB_Plugins/eclipse/plugins/Port) folder to EB tresos plug-ins (EB/tresos/plugins/)"
- `aliases`: []

### TERM-PORT-GETVERSIONINFO
- `name`: "Port_GetVersionInfo"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Port_GetVersionInfo`."
- `anchors`:
  - `p11`: "Port_GetVersionInfo"
- `aliases`: []

### TERM-PORT-HW-TYPES
- `name`: "Port_Hw_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_Hw_Types`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_Hw_Types.h"
- `aliases`: []

### TERM-PORT-LL-GETLOCK
- `name`: "Port_LL_GetLock"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_GetLock`."
- `anchors`:
  - `p9`: "Port_LL_GetLock: exclusive area 7"
- `aliases`: []

### TERM-PORT-LL-INIT-PORT
- `name`: "Port_LL_Init_Port"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_Init_Port`."
- `anchors`:
  - `p9`: "Port_LL_Init_Port : exclusive area 0"
- `aliases`: []

### TERM-PORT-LL-REFRESHPORTDIRECTION
- `name`: "Port_LL_RefreshPortDirection"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_RefreshPortDirection`."
- `anchors`:
  - `p9`: "Port_LL_RefreshPortDirection : exclusive area 4"
- `aliases`: []

### TERM-PORT-LL-RELEASELOCK
- `name`: "Port_LL_ReleaseLock"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_ReleaseLock`."
- `anchors`:
  - `p9`: "Port_LL_ReleaseLock: exclusive area 7"
- `aliases`: []

### TERM-PORT-LL-SETGPIOPINOUTPUT
- `name`: "Port_LL_SetGpioPinOutput"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_SetGpioPinOutput`."
- `anchors`:
  - `p9`: "Port_LL_SetGpioPinOutput : exclusive area 3"
- `aliases`: []

### TERM-PORT-LL-SETPINDIRECTION
- `name`: "Port_LL_SetPinDirection"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_SetPinDirection`."
- `anchors`:
  - `p9`: "Port_LL_SetPinDirection : exclusive area 1"
- `aliases`: []

### TERM-PORT-LL-SETPINMODE
- `name`: "Port_LL_SetPinMode"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Port_LL_SetPinMode`."
- `anchors`:
  - `p9`: "Port_LL_SetPinMode : exclusive area 2"
- `aliases`: []

### TERM-PORT-MEMMAP
- `name`: "Port_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_MemMap`."
- `anchors`:
  - `p5`: "_MCAL/Rte/Port/include/Port_MemMap.h"
- `aliases`: []

### TERM-PORT-PBCFG
- `name`: "Port_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_generate/src/Port_PBcfg.c"
- `aliases`: []

### TERM-PORT-REFRESHPORTDIRECTION
- `name`: "Port_RefreshPortDirection"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Port_RefreshPortDirection`."
- `anchors`:
  - `p11`: "Port_RefreshPortDirection"
- `aliases`: []

### TERM-PORT-REG
- `name`: "Port_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_Reg`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_RegOps.h"
- `aliases`: []

### TERM-PORT-REGOPS
- `name`: "Port_RegOps"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_RegOps`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_RegOps.h"
- `aliases`: []

### TERM-PORT-SETPINDIRECTION
- `name`: "Port_SetPinDirection"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Port_SetPinDirection`."
- `anchors`:
  - `p11`: "Port_SetPinDirection"
- `aliases`: []

### TERM-PORT-SETPINMODE
- `name`: "Port_SetPinMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `Port_SetPinMode`."
- `anchors`:
  - `p11`: "Port_SetPinMode"
- `aliases`: []

### TERM-PORT-VERSION
- `name`: "Port_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Port_Version`."
- `anchors`:
  - `p5`: "_MCAL/Src/Port/include/Port_Version.h"
- `aliases`: []

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p5`: "Rte"
- `aliases`: []

### TERM-SCHM-PORT
- `name`: "SchM_Port"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `SchM_Port`."
- `anchors`:
  - `p5`: "SchM_Port.h"
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

### ALIAS-PORT
- `canonical`: "PORT"
- `aliases`: ["Port Driver", "端口配置驱动", "PORT module", "PORT driver", "PORT User Manual", "PORT Integration Manual"]
- `related_ids`: ["TERM-PORT"]

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
- `purpose`: `Close keyword lookup gaps between Port_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `Port_Integration_Manual.pdf`
- `source_pdf_sha256`: `c228bf7e09985b6a36b44e9ea9bb8d878e912166f5a51720744c919cfd9f9245`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `46`
- `technical_missing_terms_added`: `3`
- `pages_with_added_terms`: `13`
- `supplemented_missing_token_count`: `46`
- `supplemented_missing_technical_token_count`: `3`
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
  - "Areas"
  - "Confidential"
  - "Development"
  - "Flagchip"
  - "MCU"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "code"
  - "common"
  - "detection"
  - "enabling"
  - "initialization"
  - "initialize"
  - "interrupts"
  - "modules"
  - "necessary"
  - "other"
  - "parts"
  - "protect"
  - "some"
  - "unprotect"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Set"
  - "configure"
  - "header"
  - "location"
  - "output"

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
  - "stop"
  - "variables"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Variables"
  - "code"
  - "initialized"
  - "share"
  - "startup"
  - "variables"

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
  - "build"
  - "dependent"
  - "linker"
  - "modules"
  - "other"

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
- `physical_pages`: `3,5,11,12`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0011-001", "TBL-0012-001"]
- `message`: "4 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
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
- `table_index_count`: `7`
- `figure_index_count`: `0`
- `symbol_index_count`: `123`
- `alias_index_count`: `7`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `c228bf7e09985b6a36b44e9ea9bb8d878e912166f5a51720744c919cfd9f9245`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `46`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->