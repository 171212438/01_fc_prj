---
manifest_schema_version: "1.1"
source_pdf: "EthTrcv_Integration_Manual.pdf"
source_pdf_sha256: "671767eb3096332c1cf1db1de19d14755ea5e1c1e293e021585805c6ff974f77"
source_pdf_size_bytes: 334491
pdf_page_count: 15
generated_at: "2026-06-19T12:33:21Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.0"
source_document_id: null
source_document_revision: "Rev.A0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: EthTrcv_Integration_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `EthTrcv_Integration_Manual.pdf`
- `source_pdf_sha256`: `671767eb3096332c1cf1db1de19d14755ea5e1c1e293e021585805c6ff974f77`
- `source_pdf_size_bytes`: `334491`
- `pdf_page_count`: `15`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.A0`
- `visible_cover_title`: `FC7xxx ETHTRCV Integration Manual`
- `visible_cover_revision`: `Rev.A0`
- `revision_history_latest_row`: `A0 / 2025/1/22 / Add support for FC7300F8MDQ`
- `generated_at`: `2026-06-19T12:33:21Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `22`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL ETHTRCV module - Integration Manual"
- `module_scope`: "ETHTRCV module integration requirements: dependencies, compile files, EB tresos plug-ins, MemMap sections, exclusive areas, ISR, DET/DEM errors, function-call phases and integration steps."
- `key_chapters`: ["Chapter 1 Introduction", "Chapter 2 Building", "Chapter 3 Memory", "Chapter 4 Exclusive Area", "Chapter 5 Interrupt Service Routine (ISR)", "Chapter 6 Error Report", "Chapter 7 Function Calls", "Chapter 8 Other Requirements", "Chapter 9 Integration steps"]
- `key_terms`: ["ETHTRCV", "Ethernet Transceiver", "AUTOSAR_SWS_EthernetTransceiverDriver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "EthTrcv", "Eth", "ETH"]
- `summary`: "This 15-page integration manual indexes ETHTRCV content across source physical pages 1-15, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["ETHTRCV", "FC7xxx", "Integration", "Rev"]
- `anchor`: "FC7xxx ETHTRCV Integration Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["ETHTRCV", "FC7xxx", "FC7300F8MDQ", "Integration", "Date", "Add"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ETHTRCV", "EthTrcv", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "Chapter 1 Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Introduction"
- `path`: "Chapter 1 Introduction / 1.1 Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["ETHTRCV", "EthTrcv", "FC7xxx", "integration", "Integration", "describes"]
- `anchor`: "1.1"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Building"
- `path`: "Chapter 2 Building"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["EthTrcv", "ETHTRCV", "MCAL", "Src", "include", "Base", "provides", "ins"]
- `anchor`: "Chapter 2 Building"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Dependencies on Other Modules"
- `path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["EthTrcv", "ETHTRCV", "MCAL", "Src", "include", "Base", "provides", "ECUC"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "Files Required for Compile"
- `path`: "Chapter 2 Building / 2.2 Files Required for Compile"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["EthTrcv", "ETHTRCV", "MCAL", "Src", "include", "Base", "provides", "ECUC"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Add Plug-ins"
- `path`: "Chapter 2 Building / 2.3 Add Plug-ins"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["EthTrcv", "ETHTRCV", "ins", "tresos", "SchM_EthTrcv", "plug", "folder", "FC7xxx"]
- `anchor`: "2.3"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Memory"
- `path`: "Chapter 3 Memory"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["ETHTRCV", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned"]
- `anchor`: "Chapter 3 Memory"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Sections in Memory Map"
- `path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["ETHTRCV", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned"]
- `anchor`: "3.1"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Exclusive Area"
- `path`: "Chapter 4 Exclusive Area"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["EthTrcv", "ETHTRCV", "critical", "MDIO", "FC7xxx", "SchM", "regions", "transceiver"]
- `anchor`: "Chapter 4 Exclusive Area"

### SEC-005
- `source_number`: `Chapter 5`
- `title`: "Interrupt Service Routine (ISR)"
- `path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["ETHTRCV", "EthTrcv", "FC7xxx", "ISR", "Integration", "Interrupt", "Routine", "has"]
- `anchor`: "Chapter 5 Interrupt Service Routine (ISR)"

### SEC-006
- `source_number`: `Chapter 6`
- `title`: "Error Report"
- `path`: "Chapter 6 Error Report"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["ETHTRCV", "ETHTRCV_E_INV_CTRL_IDX", "ETHTRCV_E_INV_PARTITION", "ETHTRCV_E_UNINIT", "ETHTRCV_E_PARAM_POINTER", "FC7xxx", "EthTrcv_Init", "EthTrcv_SetTransceiverMode"]
- `anchor`: "Chapter 6 Error Report"

### SEC-006-001
- `source_number`: `6.1`
- `title`: "Det"
- `path`: "Chapter 6 Error Report / 6.1 Det"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["ETHTRCV", "ETHTRCV_E_INV_CTRL_IDX", "ETHTRCV_E_INV_PARTITION", "ETHTRCV_E_UNINIT", "ETHTRCV_E_PARAM_POINTER", "FC7xxx", "EthTrcv_Init", "EthTrcv_SetTransceiverMode"]
- `anchor`: "6.1"

### SEC-006-002
- `source_number`: `6.2`
- `title`: "Dem"
- `path`: "Chapter 6 Error Report / 6.2 Dem"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["ETHTRCV", "ETHTRCV_E_INV_PARTITION", "ETHTRCV_E_UNINIT", "ETHTRCV_E_INV_CTRL_IDX", "ETHTRCV_E_PARAM_POINTER", "ETH_E_ACCESS", "FC7xxx", "EthTrcv_SetPhyLoopbackMode"]
- `anchor`: "6.2"

### SEC-007
- `source_number`: `Chapter 7`
- `title`: "Function Calls"
- `path`: "Chapter 7 Function Calls"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType", "CfgPtr", "Integration", "need"]
- `anchor`: "Chapter 7 Function Calls"

### SEC-007-001
- `source_number`: `7.1`
- `title`: "Function Calls during Startup"
- `path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType", "CfgPtr", "Integration", "need"]
- `anchor`: "7.1"

### SEC-007-002
- `source_number`: `7.2`
- `title`: "Function Calls during Shutdown"
- `path`: "Chapter 7 Function Calls / 7.2 Function Calls during Shutdown"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType", "CfgPtr", "Integration", "need"]
- `anchor`: "7.2"

### SEC-007-003
- `source_number`: `7.3`
- `title`: "Function Calls during Wake-up"
- `path`: "Chapter 7 Function Calls / 7.3 Function Calls during Wake-up"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType", "CfgPtr", "Integration", "need"]
- `anchor`: "7.3"

### SEC-007-004
- `source_number`: `7.4`
- `title`: "Function Calls during Runtime"
- `path`: "Chapter 7 Function Calls / 7.4 Function Calls during Runtime"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType", "CfgPtr", "Integration", "need"]
- `anchor`: "7.4"

### SEC-008
- `source_number`: `Chapter 8`
- `title`: "Other Requirements"
- `path`: "Chapter 8 Other Requirements"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["ETHTRCV", "EthTrcv", "AUTOSAR_OS_NOT_USED", "FC7xxx", "EthIf_TrcvModeIndication", "EthIf_SleepIndication", "EthTrcv_ReadMiiIndication", "EthTrcv_WriteMiiIndication"]
- `anchor`: "Chapter 8 Other Requirements"

### SEC-008-001
- `source_number`: `8.1`
- `title`: "Notification, Callback, Callout"
- `path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["ETHTRCV", "EthTrcv", "AUTOSAR_OS_NOT_USED", "FC7xxx", "EthIf_TrcvModeIndication", "EthIf_SleepIndication", "EthTrcv_ReadMiiIndication", "EthTrcv_WriteMiiIndication"]
- `anchor`: "8.1"

### SEC-008-002
- `source_number`: `8.2`
- `title`: "Macros"
- `path`: "Chapter 8 Other Requirements / 8.2 Macros"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["ETHTRCV", "EthTrcv", "AUTOSAR_OS_NOT_USED", "FC7xxx", "EthIf_TrcvModeIndication", "EthIf_SleepIndication", "EthTrcv_ReadMiiIndication", "EthTrcv_WriteMiiIndication"]
- `anchor`: "8.2"

### SEC-009
- `source_number`: `Chapter 9`
- `title`: "Integration steps"
- `path`: "Chapter 9 Integration steps"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["EthTrcv", "ETHTRCV", "FC7xxx", "please", "details", "ISR", "Integration", "Configure"]
- `anchor`: "Chapter 9 Integration steps"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["FC7xxx ETHTRCV Integration", "Manual"]

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
- `anchors`: ["Chapter 1 Introduction", "1.1", "Introduction", "This integration manual describes the integration requirements for EthTrcv module."]

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
- `anchors`: ["Dem module files:", "Dem.h", "Dem.c", "Rte files:"]

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
- `anchors`: ["ETHTRCV_START_SEC_VAR _INIT_ UNSPECIFIED", "ETHTRCV_STOP_SEC_VAR _INIT_ UNSPECIFIED", "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 4 Exclusive Area", "EthTrcv module using the services of Schedule Manger (SchM) for entering and exiting critical regio…", "The following critical regions are used in the EthTrcv driver:", "No critical region is used in the transceiver driver, because the MDIO clock is slow and the MDIO b…"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 5 Interrupt Service Routine (ISR)", "EthTrcv has no interrupt service routine."]

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
- `anchors`: ["ETHTRCV_E_INV_PARTITION", "EthTrcv_SetPhyLoopbackMode", "ETHTRCV_E_UNINIT;", "ETHTRCV_E_INV_CTRL_IDX;"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 7 Function Calls", "7.1", "Function Calls during Startup", "The API need be called is void EthTrcv_Init(const EthTrcv_ConfigType* CfgPtr)."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `anchors`: ["Chapter 8 Other Requirements", "8.1", "Notification, Callback, Callout", "Notification"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 9 Integration steps"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 9 Integration steps", "1)", "Configure EthTrcv module and generate configuration files (please refer to Building chapter for det…", "2)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx ETHTRCV Integration; Manual"
- `keywords`: ["ETHTRCV", "FC7xxx", "Integration", "Rev"]
- `anchors`:
  - `p1`: "FC7xxx ETHTRCV Integration"
  - `p1`: "Manual"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx ETHTRCV Integration Manual; Revision History; A0"
- `keywords`: ["ETHTRCV", "FC7xxx", "FC7300F8MDQ", "Integration", "Date", "Add"]
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
- `summary`: "Table of Contents: FC7xxx ETHTRCV Integration Manual; Table of Contents; Chapter 1 Introduction .......................................................................................................................................... 4"
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "ISR", "Integration", "Memory", "Dependencies", "Modules", "Required", "Compile"]
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
- `summary`: "Chapter 1 Introduction / 1.1 Introduction: FC7xxx ETHTRCV Integration Manual; Chapter 1 Introduction; 1.1"
- `keywords`: ["ETHTRCV", "EthTrcv", "FC7xxx", "integration", "Integration", "describes"]
- `anchors`:
  - `p4`: "Chapter 1 Introduction"
  - `p4`: "1.1"
  - `p4`: "Introduction"
  - `p4`: "This integration manual describes the integration requirements for EthTrcv module."

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 2 Building / 2.1 Dependencies on Other Modules"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Building / 2.1 Dependencies on Other Modules: FC7xxx ETHTRCV Integration Manual; Chapter 2 Building; 2.1"
- `keywords`: ["EthTrcv", "ETHTRCV", "MCAL", "Src", "include", "Base", "provides", "ECUC", "Det", "src"]
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
- `summary`: "Chapter 2 Building / 2.3 Add Plug-ins: FC7xxx ETHTRCV Integration Manual; Dem module files:; Dem.h"
- `keywords`: ["EthTrcv", "ETHTRCV", "ins", "tresos", "SchM_EthTrcv", "plug", "folder", "FC7xxx", "Dem", "MCAL"]
- `anchors`:
  - `p6`: "Dem module files:"
  - `p6`: "Dem.h"
  - `p6`: "Dem.c"
  - `p6`: "Rte files:"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx ETHTRCV Integration Manual; Chapter 3 Memory; 3.1"
- `keywords`: ["ETHTRCV", "These", "UNSPECIFIED", "all", "sections", "which", "have", "aligned", "bit", "RAMCODE"]
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
- `summary`: "Chapter 3 Memory / 3.1 Sections in Memory Map: FC7xxx ETHTRCV Integration Manual; ETHTRCV_START_SEC_VAR _INIT_ UNSPECIFIED; ETHTRCV_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `keywords`: ["ETHTRCV", "UNSPECIFIED", "These", "FC7xxx", "ETHTRCV_START_SEC_VAR", "ETHTRCV_STOP_SEC_VAR", "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE", "ETHTRCV_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE", "ETHTRCV_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"]
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR _INIT_ UNSPECIFIED"
  - `p8`: "ETHTRCV_STOP_SEC_VAR _INIT_ UNSPECIFIED"
  - `p8`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
  - `p8`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 4 Exclusive Area"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 4 Exclusive Area: FC7xxx ETHTRCV Integration Manual; Chapter 4 Exclusive Area; EthTrcv module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `keywords`: ["EthTrcv", "ETHTRCV", "critical", "MDIO", "FC7xxx", "SchM", "regions", "transceiver", "Integration", "Exclusive"]
- `anchors`:
  - `p9`: "Chapter 4 Exclusive Area"
  - `p9`: "EthTrcv module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p9`: "The following critical regions are used in the EthTrcv driver:"
  - `p9`: "No critical region is used in the transceiver driver, because the MDIO clock is slow and the MDIO bus access is inefficient."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 5 Interrupt Service Routine (ISR)"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 5 Interrupt Service Routine (ISR): FC7xxx ETHTRCV Integration Manual; Chapter 5 Interrupt Service Routine (ISR); EthTrcv has no interrupt service routine."
- `keywords`: ["ETHTRCV", "EthTrcv", "FC7xxx", "ISR", "Integration", "Interrupt", "Routine", "has", "interrupt", "routine"]
- `anchors`:
  - `p10`: "Chapter 5 Interrupt Service Routine (ISR)"
  - `p10`: "EthTrcv has no interrupt service routine."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 6 Error Report / 6.1 Det: FC7xxx ETHTRCV Integration Manual; Chapter 6 Error Report; 6.1"
- `keywords`: ["ETHTRCV", "ETHTRCV_E_INV_CTRL_IDX", "ETHTRCV_E_INV_PARTITION", "ETHTRCV_E_UNINIT", "ETHTRCV_E_PARAM_POINTER", "FC7xxx", "EthTrcv_Init", "EthTrcv_SetTransceiverMode", "EthTrcv_GetTransceiverMode", "EthTrcv_SetTransceiverWakeupMode"]
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
- `summary`: "Chapter 6 Error Report / 6.2 Dem: FC7xxx ETHTRCV Integration Manual; ETHTRCV_E_INV_PARTITION; EthTrcv_SetPhyLoopbackMode"
- `keywords`: ["ETHTRCV", "ETHTRCV_E_INV_PARTITION", "ETHTRCV_E_UNINIT", "ETHTRCV_E_INV_CTRL_IDX", "ETHTRCV_E_PARAM_POINTER", "ETH_E_ACCESS", "FC7xxx", "EthTrcv_SetPhyLoopbackMode", "EthTrcv_GetPhySignalQuality", "EthTrcv_SetPhyTxMode"]
- `anchors`:
  - `p12`: "ETHTRCV_E_INV_PARTITION"
  - `p12`: "EthTrcv_SetPhyLoopbackMode"
  - `p12`: "ETHTRCV_E_UNINIT;"
  - `p12`: "ETHTRCV_E_INV_CTRL_IDX;"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 7 Function Calls / 7.1 Function Calls during Startup: FC7xxx ETHTRCV Integration Manual; Chapter 7 Function Calls; 7.1"
- `keywords`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType", "CfgPtr", "Integration", "need", "called", "void"]
- `anchors`:
  - `p13`: "Chapter 7 Function Calls"
  - `p13`: "7.1"
  - `p13`: "Function Calls during Startup"
  - `p13`: "The API need be called is void EthTrcv_Init(const EthTrcv_ConfigType* CfgPtr)."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout"
- `content_types`: ["text"]
- `summary`: "Chapter 8 Other Requirements / 8.1 Notification, Callback, Callout: FC7xxx ETHTRCV Integration Manual; Chapter 8 Other Requirements; 8.1"
- `keywords`: ["ETHTRCV", "EthTrcv", "AUTOSAR_OS_NOT_USED", "FC7xxx", "EthIf_TrcvModeIndication", "EthIf_SleepIndication", "EthTrcv_ReadMiiIndication", "EthTrcv_WriteMiiIndication", "Notification", "Callback"]
- `anchors`:
  - `p14`: "Chapter 8 Other Requirements"
  - `p14`: "8.1"
  - `p14`: "Notification, Callback, Callout"
  - `p14`: "Notification"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 9 Integration steps"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 9 Integration steps: FC7xxx ETHTRCV Integration Manual; Chapter 9 Integration steps; 1)"
- `keywords`: ["EthTrcv", "ETHTRCV", "FC7xxx", "please", "details", "ISR", "Integration", "Configure", "generate", "appropriate"]
- `anchors`:
  - `p15`: "Chapter 9 Integration steps"
  - `p15`: "1)"
  - `p15`: "Configure EthTrcv module and generate configuration files (please refer to Building chapter for details)."
  - `p15`: "2)"

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
- `key_fields`: ["ETHTRCV", "Calls", "FC7xxx", "ISR", "Integration"]
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
- `key_fields`: ["EthTrcv", "ETHTRCV", "MCAL", "Src", "include"]
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
- `key_fields`: ["EthTrcv", "ETHTRCV", "ins", "tresos", "SchM_EthTrcv"]
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
- `bbox`: `[30.6, 116.9, 564.84, 783.78]`
- `key_fields`: ["Section Name", "Section Type", "Description"]
- `summary`: "Indexes a table or table-like region related to Sections in Memory Map."
- `anchor`: "Sections in Memory Map"
- `confidence`: `0.78`
- `quality_flags`: ["generated_table_id"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Table-like region on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 3 Memory / 3.1 Sections in Memory Map"
- `bbox`: `[30.54, 36.66, 564.9, 377.99]`
- `key_fields`: ["ETHTRCV START SEC VAR INIT UNSPECIFIED…"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 8."
- `anchor`: "Table-like region on page 8"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 6 Error Report / 6.1 Det"
- `bbox`: `[30.6, 116.88, 564.84, 787.76]`
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
- `bbox`: `[30.59, 36.64, 564.85, 474.15]`
- `key_fields`: ["ETHTRCV E INV PARTITION _ _ _"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0012-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0012-002"
- `caption`: "Table-like region on page 12"
- `physical_pages`: `12`
- `printed_pages`: ["12"]
- `section_path`: "Chapter 6 Error Report / 6.2 Dem"
- `bbox`: `[30.59, 514.97, 564.85, 562.83]`
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
- `key_fields`: ["ETHTRCV", "Calls", "FC7xxx", "EthTrcv_Init", "EthTrcv_ConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

- `figure_index_status`: `no_figures_detected`
- `note`: `No embedded image blocks or generated visual anchors were detected; diagrams may still exist as plain text/table structures.`

## 8. Term / API / Config / Requirement Index

### API-ETHTRCV-INIT
- `name`: "EthTrcv_Init"
- `type`: `api`
- `primary_page`: `11`
- `physical_pages`: `11,12,13`
- `brief`: "api index entry for `EthTrcv_Init`."
- `anchors`:
  - `p11`: "EthTrcv_Init"
  - `p12`: "EthTrcv_Init"
  - `p13`: "The API need be called is void EthTrcv_Init(const EthTrcv_ConfigType* CfgPtr)."
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
  - `p9`: "EthTrcv module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
- `aliases`: []

### CFG-ETHTRCV-CHECKWAKEUP
- `name`: "EthTrcv_CheckWakeup"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `EthTrcv_CheckWakeup`."
- `anchors`:
  - `p11`: "EthTrcv_CheckWakeup"
- `aliases`: []

### CFG-ETHTRCV-GETTRANSCEIVERWAKEUPMODE
- `name`: "EthTrcv_GetTransceiverWakeupMode"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `EthTrcv_GetTransceiverWakeupMode`."
- `anchors`:
  - `p11`: "EthTrcv_GetTransceiverWakeupMode"
- `aliases`: []

### CFG-ETHTRCV-SETTRANSCEIVERWAKEUPMODE
- `name`: "EthTrcv_SetTransceiverWakeupMode"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `EthTrcv_SetTransceiverWakeupMode`."
- `anchors`:
  - `p11`: "EthTrcv_SetTransceiverWakeupMode"
- `aliases`: []

### CFG-ETH-GENERALTYPES
- `name`: "Eth_GeneralTypes"
- `type`: `config`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "config index entry for `Eth_GeneralTypes`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Eth_GeneralTypes.h"
- `aliases`: []

### MACRO-ETHTRCV-E-INV-CTRL-IDX
- `name`: "ETHTRCV_E_INV_CTRL_IDX"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `ETHTRCV_E_INV_CTRL_IDX`."
- `anchors`:
  - `p11`: "ETHTRCV_E_INV_CTRL_IDX;"
  - `p12`: "ETHTRCV_E_INV_CTRL_IDX;"
- `aliases`: []

### MACRO-ETHTRCV-E-INV-PARTITION
- `name`: "ETHTRCV_E_INV_PARTITION"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `ETHTRCV_E_INV_PARTITION`."
- `anchors`:
  - `p11`: "ETHTRCV_E_INV_PARTITION"
  - `p12`: "ETHTRCV_E_INV_PARTITION"
- `aliases`: []

### MACRO-ETHTRCV-E-UNINIT
- `name`: "ETHTRCV_E_UNINIT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `ETHTRCV_E_UNINIT`."
- `anchors`:
  - `p11`: "ETHTRCV _E_UNINIT;"
  - `p12`: "ETHTRCV_E_UNINIT;"
- `aliases`: []

### MACRO-ETHTRCV-E-PARAM-POINTER
- `name`: "ETHTRCV_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "macro index entry for `ETHTRCV_E_PARAM_POINTER`."
- `anchors`:
  - `p11`: "ETHTRCV_E_PARAM_POINTER"
  - `p12`: "ETHTRCV_E_PARAM_POINTER;"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR
- `name`: "ETHTRCV_START_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "ETHTRCV_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR
- `name`: "ETHTRCV_STOP_SEC_VAR"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN"
  - `p8`: "ETHTRCV_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MACRO-AUTOSAR-OS-NOT-USED
- `name`: "AUTOSAR_OS_NOT_USED"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `AUTOSAR_OS_NOT_USED`."
- `anchors`:
  - `p14`: "AUTOSAR_OS_NOT_USED need defined."
- `aliases`: []

### MACRO-ETH-E-ACCESS
- `name`: "ETH_E_ACCESS"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `ETH_E_ACCESS`."
- `anchors`:
  - `p12`: "ETH_E_ACCESS"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CODE
- `name`: "ETHTRCV_START_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CODE`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CODE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CODE-AC
- `name`: "ETHTRCV_START_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CODE_AC"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONFIG-DATA-32
- `name`: "ETHTRCV_START_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONFIG-DATA-8
- `name`: "ETHTRCV_START_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "ETHTRCV_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONST-16
- `name`: "ETHTRCV_START_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONST_16`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONST_16"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONST-32
- `name`: "ETHTRCV_START_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONST_32`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONST_32"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONST-8
- `name`: "ETHTRCV_START_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONST_8`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONST_8"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-CONST-BOOLEAN
- `name`: "ETHTRCV_START_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-16
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-32
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-8
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-START-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CODE
- `name`: "ETHTRCV_STOP_SEC_CODE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CODE`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CODE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CODE-AC
- `name`: "ETHTRCV_STOP_SEC_CODE_AC"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CODE_AC`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CODE_AC"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONFIG-DATA-32
- `name`: "ETHTRCV_STOP_SEC_CONFIG_DATA_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONFIG_DATA_32`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONFIG_DATA_32"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONFIG-DATA-8
- `name`: "ETHTRCV_STOP_SEC_CONFIG_DATA_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONFIG_DATA_8`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONFIG-DATA-UNSPECIFIED
- `name`: "ETHTRCV_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONFIG_DATA_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONFIG_DATA_UNSPECIFIED"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONST-16
- `name`: "ETHTRCV_STOP_SEC_CONST_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONST_16`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONST_16"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONST-32
- `name`: "ETHTRCV_STOP_SEC_CONST_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONST_32`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONST_32"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONST-8
- `name`: "ETHTRCV_STOP_SEC_CONST_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONST_8`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONST_8"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-CONST-BOOLEAN
- `name`: "ETHTRCV_STOP_SEC_CONST_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_CONST_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-INIT-16-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-INIT-32-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-INIT-8-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-16
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_16"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_16`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_16"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-16-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-32
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_32"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_32`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_32"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-32-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-8
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_8`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-8-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-BOOLEAN
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-BOOLEAN-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE"
- `aliases`: []

### MACRO-ETHTRCV-STOP-SEC-VAR-NO-INIT-UNSPECIFIED-NO-CACHEABLE
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE"
- `aliases`: []

### MACRO-INIT-8
- `name`: "INIT_8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_8`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_8"
- `aliases`: []

### MACRO-INIT-BOOLEAN
- `name`: "INIT_BOOLEAN"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### TYPE-ETHTRCV-CONFIGTYPE
- `name`: "EthTrcv_ConfigType"
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "type index entry for `EthTrcv_ConfigType`."
- `anchors`:
  - `p13`: "The API need be called is void EthTrcv_Init(const EthTrcv_ConfigType* CfgPtr)."
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR
- `name`: "ETHTRCV_START_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR
- `name`: "ETHTRCV_STOP_SEC_VAR_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-START-SEC
- `name`: "ETHTRCV_START_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-CONFIG-DATA-16
- `name`: "ETHTRCV_START_SEC_CONFIG_DATA_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "ETHTRCV _START_SEC_CONFIG_DATA_16"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-CONST
- `name`: "ETHTRCV_START_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_CONST_`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-CONST-UNSPECIFIED
- `name`: "ETHTRCV_START_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-RAMCODE
- `name`: "ETHTRCV_START_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_ RAMCODE"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-INIT-16
- `name`: "ETHTRCV_START_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-INIT-32
- `name`: "ETHTRCV_START_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-INIT-8
- `name`: "ETHTRCV_START_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-INIT-BOOLEAN
- `name`: "ETHTRCV_START_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-INIT-UNSPECIFIED
- `name`: "ETHTRCV_START_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "ETHTRCV_START_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-NO-INIT
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-START-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ETHTRCV_START_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC
- `name`: "ETHTRCV_STOP_SEC_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONFIG_DATA_8"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-CONFIG-DATA-16
- `name`: "ETHTRCV_STOP_SEC_CONFIG_DATA_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_CONFIG_DATA_16`."
- `anchors`:
  - `p7`: "ETHTRCV _STOP_SEC_CONFIG_DATA_16"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-CONST
- `name`: "ETHTRCV_STOP_SEC_CONST_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_CONST_`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONST_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-CONST-UNSPECIFIED
- `name`: "ETHTRCV_STOP_SEC_CONST_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_CONST_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_CONST_ UNSPECIFIED"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-RAMCODE
- `name`: "ETHTRCV_STOP_SEC_RAMCODE"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_RAMCODE`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_ RAMCODE"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-INIT-16
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_16"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_INIT_16`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR _INIT_16"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-INIT-32
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_32"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_INIT_32`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR _INIT_32"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-INIT-8
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_8"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_INIT_8`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_ INIT_8"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-INIT-BOOLEAN
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_BOOLEAN"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_INIT_BOOLEAN`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_ INIT_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-INIT-UNSPECIFIED
- `name`: "ETHTRCV_STOP_SEC_VAR_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_INIT_UNSPECIFIED`."
- `anchors`:
  - `p8`: "ETHTRCV_STOP_SEC_VAR _INIT_ UNSPECIFIED"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-NO-INIT
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_BOOLEAN"
- `aliases`: []

### MEM-ETHTRCV-STOP-SEC-VAR-NO-INIT-UNSPECIFIED
- `name`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED"
- `type`: `memory_section`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "memory section index entry for `ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED`."
- `anchors`:
  - `p7`: "ETHTRCV_STOP_SEC_VAR_NO_INIT_ UNSPECIFIED"
- `aliases`: []

### FILE-DEM-C
- `name`: "Dem.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Dem.c`."
- `anchors`:
  - `p6`: "Dem.c"
- `aliases`: []

### FILE-DEM-H
- `name`: "Dem.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `Dem.h`."
- `anchors`:
  - `p6`: "Dem.h"
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

### FILE-MCAL-SRC-BASE-INCLUDE-COMPILER-H
- `name`: "MCAL/Src/Base/include/Compiler.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/Compiler.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Compiler.h"
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-COMPILERDEFINITION-H
- `name`: "MCAL/Src/Base/include/CompilerDefinition.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/CompilerDefinition.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/CompilerDefinition.h"
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-COMPILER-CFG-H
- `name`: "MCAL/Src/Base/include/Compiler_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/Compiler_Cfg.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Compiler_Cfg.h"
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-ETH-GENERALTYPES-H
- `name`: "MCAL/Src/Base/include/Eth_GeneralTypes.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/Eth_GeneralTypes.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Eth_GeneralTypes.h"
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-MCAL-H
- `name`: "MCAL/Src/Base/include/Mcal.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/Mcal.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Mcal.h"
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-PLATFORM-TYPES-H
- `name`: "MCAL/Src/Base/include/Platform_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/Platform_Types.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Platform_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-BASE-INCLUDE-STD-TYPES-H
- `name`: "MCAL/Src/Base/include/Std_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Base/include/Std_Types.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Std_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-COMMON-INCLUDE-SCM-REG-H
- `name`: "MCAL/Src/Common/include/Scm_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/Common/include/Scm_Reg.h`."
- `anchors`:
  - `p5`: "MCAL/Src/Common/include/Scm_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-HAL-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv_Hal.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv_Hal.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Hal.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-HW-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv_Hw.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv_Hw.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Hw.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-MEMMAP-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv_MemMap.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv_MemMap.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_MemMap.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-REG-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv_Reg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv_Reg.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Reg.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-TYPES-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv_Types.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv_Types.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Types.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-INCLUDE-ETHTRCV-VERSION-H
- `name`: "MCAL/Src/EthTrcv/include/EthTrcv_Version.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/include/EthTrcv_Version.h`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Version.h"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-SRC-ETHTRCV-C
- `name`: "MCAL/Src/EthTrcv/src/EthTrcv.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/src/EthTrcv.c`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/src/EthTrcv.c"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-SRC-ETHTRCV-HAL-C
- `name`: "MCAL/Src/EthTrcv/src/EthTrcv_Hal.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/src/EthTrcv_Hal.c`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/src/EthTrcv_Hal.c"
- `aliases`: []

### FILE-MCAL-SRC-ETHTRCV-SRC-ETHTRCV-HW-C
- `name`: "MCAL/Src/EthTrcv/src/EthTrcv_Hw.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `MCAL/Src/EthTrcv/src/EthTrcv_Hw.c`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/src/EthTrcv_Hw.c"
- `aliases`: []

### FILE-MCAL-H
- `name`: "Mcal.h"
- `type`: `file`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "file index entry for `Mcal.h`."
- `anchors`:
  - `p14`: "Please have a look in various definitions available in Common module's include file Mcal.h for details."
- `aliases`: []

### FILE-SCHM-ETHTRCV-C
- `name`: "SchM_EthTrcv.c"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_EthTrcv.c`."
- `anchors`:
  - `p6`: "SchM_EthTrcv.c"
- `aliases`: []

### FILE-SCHM-ETHTRCV-H
- `name`: "SchM_EthTrcv.h"
- `type`: `file`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "file index entry for `SchM_EthTrcv.h`."
- `anchors`:
  - `p6`: "SchM_EthTrcv.h"
- `aliases`: []

### FILE-MCAL-MULTICORE-GENERATE-8M-INCLUDE-ETHTRCV-CFG-H
- `name`: "_MCAL_multicore_generate_8M/include/EthTrcv_Cfg.h"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_multicore_generate_8M/include/EthTrcv_Cfg.h`."
- `anchors`:
  - `p5`: "_MCAL_multicore_generate_8M/include/EthTrcv_Cfg.h"
- `aliases`: []

### FILE-MCAL-MULTICORE-GENERATE-8M-SRC-ETHTRCV-PBCFG-C
- `name`: "_MCAL_multicore_generate_8M/src/EthTrcv_PBcfg.c"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `_MCAL_multicore_generate_8M/src/EthTrcv_PBcfg.c`."
- `anchors`:
  - `p5`: "_MCAL_multicore_generate_8M/src/EthTrcv_PBcfg.c"
- `aliases`: []

### TERM-ETHTRCV
- `name`: "ETHTRCV"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15`
- `brief`: "term index entry for `ETHTRCV`."
- `anchors`:
  - `p1`: "FC7xxx ETHTRCV Integration"
  - `p2`: "FC7xxx ETHTRCV Integration Manual"
  - `p3`: "FC7xxx ETHTRCV Integration Manual"
  - `p4`: "FC7xxx ETHTRCV Integration Manual"
  - `p5`: "FC7xxx ETHTRCV Integration Manual"
- `aliases`: []

### TERM-ETHTRCV-2
- `name`: "EthTrcv"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,5,6,9,10,14,15`
- `brief`: "term index entry for `EthTrcv`."
- `anchors`:
  - `p4`: "This integration manual describes the integration requirements for EthTrcv module."
  - `p5`: "Mcu: This module provides the clock reference point for EthTrcv module."
  - `p6`: "SchM_EthTrcv.h"
  - `p9`: "EthTrcv module using the services of Schedule Manger (SchM) for entering and exiting critical regions."
  - `p10`: "EthTrcv has no interrupt service routine."
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,6,12`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p3`: "Dem"
  - `p5`: "Dem"
  - `p6`: "Dem"
  - `p12`: "Dem"
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

### TERM-ETHTRCV-SETTRANSCEIVERMODE
- `name`: "EthTrcv_SetTransceiverMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "term index entry for `EthTrcv_SetTransceiverMode`."
- `anchors`:
  - `p11`: "EthTrcv_SetTransceiverMode"
  - `p12`: "EthTrcv_SetTransceiverMode"
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

### TERM-ETHTRCV-HAL
- `name`: "EthTrcv_Hal"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_Hal`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/src/EthTrcv_Hal.c"
- `aliases`: []

### TERM-ETHTRCV-HW
- `name`: "EthTrcv_Hw"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_Hw`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/src/EthTrcv_Hw.c"
- `aliases`: []

### TERM-SCHM-ETHTRCV
- `name`: "SchM_EthTrcv"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "term index entry for `SchM_EthTrcv`."
- `anchors`:
  - `p6`: "SchM_EthTrcv.h"
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
  - `p6`: "Copy the EthTrcv module(MCAL/EB_Plugins/eclipse/plugins/ EthTrcv) folder to EB tresos plug-ins"
- `aliases`: []

### TERM-ETHIF-SLEEPINDICATION
- `name`: "EthIf_SleepIndication"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `EthIf_SleepIndication`."
- `anchors`:
  - `p14`: "EthIf_SleepIndication shall be called by the corresponding EthTrcv, when a sleep indication was detected on"
- `aliases`: []

### TERM-ETHIF-TRCVMODEINDICATION
- `name`: "EthIf_TrcvModeIndication"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `EthIf_TrcvModeIndication`."
- `anchors`:
  - `p14`: "EthIf_TrcvModeIndication shall be called when the transceiver mode changed."
- `aliases`: []

### TERM-ETHTRCV-CFG
- `name`: "EthTrcv_Cfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_Cfg`."
- `anchors`:
  - `p5`: "_MCAL_multicore_generate_8M/include/EthTrcv_Cfg.h"
- `aliases`: []

### TERM-ETHTRCV-GETBAUDRATE
- `name`: "EthTrcv_GetBaudRate"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_GetBaudRate`."
- `anchors`:
  - `p11`: "EthTrcv_GetBaudRate"
- `aliases`: []

### TERM-ETHTRCV-GETBUSWUREASON
- `name`: "EthTrcv_GetBusWuReason"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_GetBusWuReason`."
- `anchors`:
  - `p11`: "EthTrcv_GetBusWuReason"
- `aliases`: []

### TERM-ETHTRCV-GETCABLEDIAGNOSTICSRESULT
- `name`: "EthTrcv_GetCableDiagnosticsResult"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_GetCableDiagnosticsResult`."
- `anchors`:
  - `p12`: "EthTrcv_GetCableDiagnosticsResult"
- `aliases`: []

### TERM-ETHTRCV-GETDUPLEXMODE
- `name`: "EthTrcv_GetDuplexMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_GetDuplexMode`."
- `anchors`:
  - `p11`: "EthTrcv_GetDuplexMode"
- `aliases`: []

### TERM-ETHTRCV-GETLINKSTATE
- `name`: "EthTrcv_GetLinkState"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_GetLinkState`."
- `anchors`:
  - `p11`: "EthTrcv_GetLinkState"
- `aliases`: []

### TERM-ETHTRCV-GETMACMETHOD
- `name`: "EthTrcv_GetMacMethod"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_GetMacMethod`."
- `anchors`:
  - `p12`: "EthTrcv_GetMacMethod"
- `aliases`: []

### TERM-ETHTRCV-GETPHYIDENTIFIER
- `name`: "EthTrcv_GetPhyIdentifier"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_GetPhyIdentifier`."
- `anchors`:
  - `p12`: "EthTrcv_GetPhyIdentifier"
- `aliases`: []

### TERM-ETHTRCV-GETPHYSIGNALQUALITY
- `name`: "EthTrcv_GetPhySignalQuality"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_GetPhySignalQuality`."
- `anchors`:
  - `p12`: "EthTrcv_GetPhySignalQuality"
- `aliases`: []

### TERM-ETHTRCV-GETTRANSCEIVERMODE
- `name`: "EthTrcv_GetTransceiverMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_GetTransceiverMode`."
- `anchors`:
  - `p11`: "EthTrcv_GetTransceiverMode"
- `aliases`: []

### TERM-ETHTRCV-GETVERSIONINFO
- `name`: "EthTrcv_GetVersionInfo"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_GetVersionInfo`."
- `anchors`:
  - `p12`: "EthTrcv_GetVersionInfo"
- `aliases`: []

### TERM-ETHTRCV-MAINFUNCTION
- `name`: "EthTrcv_MainFunction"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_MainFunction`."
- `anchors`:
  - `p12`: "EthTrcv_MainFunction"
- `aliases`: []

### TERM-ETHTRCV-MEMMAP
- `name`: "EthTrcv_MemMap"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_MemMap`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_MemMap.h"
- `aliases`: []

### TERM-ETHTRCV-PBCFG
- `name`: "EthTrcv_PBcfg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_PBcfg`."
- `anchors`:
  - `p5`: "_MCAL_multicore_generate_8M/src/EthTrcv_PBcfg.c"
- `aliases`: []

### TERM-ETHTRCV-READMIIINDICATION
- `name`: "EthTrcv_ReadMiiIndication"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `EthTrcv_ReadMiiIndication`."
- `anchors`:
  - `p14`: "EthTrcv_ReadMiiIndication"
- `aliases`: []

### TERM-ETHTRCV-REG
- `name`: "EthTrcv_Reg"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_Reg`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Reg.h"
- `aliases`: []

### TERM-ETHTRCV-RUNCABLEDIAGNOSTIC
- `name`: "EthTrcv_RunCableDiagnostic"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_RunCableDiagnostic`."
- `anchors`:
  - `p12`: "EthTrcv_RunCableDiagnostic"
- `aliases`: []

### TERM-ETHTRCV-SETPHYLOOPBACKMODE
- `name`: "EthTrcv_SetPhyLoopbackMode"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_SetPhyLoopbackMode`."
- `anchors`:
  - `p12`: "EthTrcv_SetPhyLoopbackMode"
- `aliases`: []

### TERM-ETHTRCV-SETPHYTESTMODE
- `name`: "EthTrcv_SetPhyTestMode"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_SetPhyTestMode`."
- `anchors`:
  - `p11`: "EthTrcv_SetPhyTestMode"
- `aliases`: []

### TERM-ETHTRCV-SETPHYTXMODE
- `name`: "EthTrcv_SetPhyTxMode"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `EthTrcv_SetPhyTxMode`."
- `anchors`:
  - `p12`: "EthTrcv_SetPhyTxMode"
- `aliases`: []

### TERM-ETHTRCV-STARTAUTONEGOTIATION
- `name`: "EthTrcv_StartAutoNegotiation"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_StartAutoNegotiation`."
- `anchors`:
  - `p11`: "EthTrcv_StartAutoNegotiation"
- `aliases`: []

### TERM-ETHTRCV-TRANSCEIVERLINKSTATEREQUEST
- `name`: "EthTrcv_TransceiverLinkStateRequest"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `EthTrcv_TransceiverLinkStateRequest`."
- `anchors`:
  - `p11`: "EthTrcv_TransceiverLinkStateRequest"
- `aliases`: []

### TERM-ETHTRCV-TYPES
- `name`: "EthTrcv_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_Types`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Types.h"
- `aliases`: []

### TERM-ETHTRCV-VERSION
- `name`: "EthTrcv_Version"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `EthTrcv_Version`."
- `anchors`:
  - `p5`: "MCAL/Src/EthTrcv/include/EthTrcv_Version.h"
- `aliases`: []

### TERM-ETHTRCV-WRITEMIIINDICATION
- `name`: "EthTrcv_WriteMiiIndication"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `EthTrcv_WriteMiiIndication`."
- `anchors`:
  - `p14`: "EthTrcv_WriteMiiIndication"
- `aliases`: []

### TERM-ETHERNET
- `name`: "Ethernet"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ethernet`."
- `anchors`:
  - `p9`: "Users need to ensure that an Ethernet controller is used by only one transceiver, otherwise, appropriate critical regions"
- `aliases`: []

### TERM-ETHERNET-TRANSCEIVER
- `name`: "Ethernet Transceiver"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "term index entry for `Ethernet Transceiver`."
- `anchors`:
  - `p9`: "Ethernet Transceiver"
- `aliases`: []

### TERM-STD-TYPES
- `name`: "Std_Types"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Std_Types`."
- `anchors`:
  - `p5`: "MCAL/Src/Base/include/Std_Types.h"
- `aliases`: []

## 9. Search Aliases

### ALIAS-ETHTRCV
- `canonical`: "ETHTRCV"
- `aliases`: ["Ethernet Transceiver", "以太网收发器", "ETHTRCV module", "ETHTRCV driver", "ETHTRCV User Manual", "ETHTRCV Integration Manual", "ETHTRCV", "Ethernet transceiver driver", "PHY transceiver"]
- `related_ids`: ["TERM-ETHTRCV"]

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

### ALIAS-WAKEUP
- `canonical`: "Wakeup"
- `aliases`: ["wake up", "wake-up", "EthTrcvWakeUpSupport", "TC10 wakeup", "唤醒"]
- `related_ids`: []

### ALIAS-CABLE-DIAGNOSTIC
- `canonical`: "Cable Diagnostic"
- `aliases`: ["cable diagnostics", "EthTrcv_RunPortCableDiagnostic", "ETHTRCV_CABLEDIAG_PENDING", "线缆诊断"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between EthTrcv_Integration_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `EthTrcv_Integration_Manual.pdf`
- `source_pdf_sha256`: `671767eb3096332c1cf1db1de19d14755ea5e1c1e293e021585805c6ff974f77`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `68`
- `technical_missing_terms_added`: `5`
- `pages_with_added_terms`: `14`
- `supplemented_missing_token_count`: `68`
- `supplemented_missing_technical_token_count`: `5`
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
  - "Port"
  - "Proprietary"
  - "basic"
  - "build"
  - "chip"
  - "choose"
  - "code"
  - "common"
  - "detection"
  - "enabling"
  - "first"
  - "informations"
  - "initialization"
  - "initialize"
  - "interrupts"
  - "modules"
  - "multiplexing"
  - "necessary"
  - "needs"
  - "other"
  - "partition"
  - "parts"
  - "protect"
  - "reporting"
  - "some"
  - "unprotect"
  - "use"
  - "user"

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
  - "needs"
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
  - "never"
  - "noncacheable"
  - "placed"
  - "startup"
  - "variables"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "needed"
  - "upper"

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
  - "define"
  - "network"

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
  - "notification"
  - "other"
  - "their"
  - "vector"

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
- `physical_pages`: `3,5,6,8,11,12,12,13`
- `affected_ids`: ["TBL-0003-001", "TBL-0005-001", "TBL-0006-001", "TBL-0008-001", "TBL-0011-001", "TBL-0012-001", "TBL-0012-002", "TBL-0013-001"]
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
- `pdf_page_count`: `15`
- `indexed_physical_pages_count`: `15`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `25`
- `table_index_count`: `10`
- `figure_index_count`: `0`
- `symbol_index_count`: `161`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `671767eb3096332c1cf1db1de19d14755ea5e1c1e293e021585805c6ff974f77`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `68`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `5`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->