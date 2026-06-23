---
manifest_schema_version: "1.1"
source_pdf: "WDG_User_Manual.pdf"
source_pdf_sha256: "f21c655de6e285d63d2604306cb9fc253581a23f39ca93a1a8bf6603ec66389b"
source_pdf_size_bytes: 2248462
pdf_page_count: 41
generated_at: "2026-06-20T00:09:44Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.2-wdg-complete"
source_document_id: null
source_document_revision: "Rev.0.6"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: WDG_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `WDG_User_Manual.pdf`
- `source_pdf_sha256`: `f21c655de6e285d63d2604306cb9fc253581a23f39ca93a1a8bf6603ec66389b`
- `source_pdf_size_bytes`: `2248462`
- `pdf_page_count`: `41`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.6`
- `visible_cover_title`: `FC7xxx WDG User Manual`
- `visible_cover_revision`: `Rev.0.6`
- `revision_history_latest_row`: `0.6 / 2023/03/29 / Updated for MCAL V0.6.0 - Added support for FC7240`
- `generated_at`: `2026-06-20T00:09:44Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.2-wdg-complete`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `43`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL WDG module - User Manual"
- `module_scope`: "WDG driver user-facing design: AUTOSAR requirement tracing, hardware summary, rejected requirements, file structure, macros/enums/types/structures, API functions, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 WDG Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["WDG", "WDOG", "Watchdog Timer", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Mcu", "Gpt", "EcuC", "SchM_Wdg", "Wdg_ConfigType", "WdgSettingsConfig", "Wdg_Instancex_Init", "Wdg_Instancex_SetMode", "Wdg_Instancex_SetTriggerCondition"]
- `summary`: "This 41-page Manifest indexes WDG content across source physical pages 1-41, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `anchor`: "Rev.0.6"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `4`
- `printed_page_start`: `2`
- `printed_page_end`: `4`
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
- `title`: "WDG Introduction"
- `path`: "Chapter 1 WDG Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Introduction"]
- `anchor`: "Chapter 1 WDG Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirement Tracing"
- `path`: "Chapter 1 WDG Introduction / 1.1 Requirement Tracing"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Requirement", "Tracing"]
- `anchor`: "Chapter 1 WDG Introduction"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 WDG Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Summary"]
- `anchor`: "Chapter 1 WDG Introduction"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `7`
- `printed_page_start`: `6`
- `printed_page_end`: `7`
- `keywords`: ["Design"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `7`
- `printed_page_start`: `6`
- `printed_page_end`: `7`
- `keywords`: ["Rejected", "Requirements"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["File", "Structure"]
- `anchor`: "Multiplicity"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Macros"]
- `anchor`: "Figure 3. WDG instance2"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in Wdg_Version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Macros", "Wdg_Version"]
- `anchor`: "Figure 3. WDG instance2"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in Wdg_LLD.c"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in Wdg_LLD.c"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["Macros", "Wdg_LLD"]
- `anchor`: "Figure 3. WDG instance2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in Wdg_HLD.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `physical_page_start`: `10`
- `physical_page_end`: `12`
- `printed_page_start`: `10`
- `printed_page_end`: `12`
- `keywords`: ["Macros", "Wdg_HLD"]
- `anchor`: "2.3.3"

### SEC-002-003-004
- `source_number`: `2.3.4`
- `title`: "Macros in Wdg_cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in Wdg_cfg.h"
- `physical_page_start`: `10`
- `physical_page_end`: `12`
- `printed_page_start`: `10`
- `printed_page_end`: `12`
- `keywords`: ["Macros", "Wdg_cfg"]
- `anchor`: "2.3.3"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Enums"]
- `anchor`: "#define WDG_ROM"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enumerations in Wdg_HLD.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Enumerations", "Wdg_HLD"]
- `anchor`: "#define WDG_ROM"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enumerations in Wdg_HLD.c"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enumerations in Wdg_HLD.c"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Enumerations", "Wdg_HLD"]
- `anchor`: "#define WDG_ROM"

### SEC-002-004-003
- `source_number`: `2.4.3`
- `title`: "Enumerations in Wdg_LLD.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.3 Enumerations in Wdg_LLD.h"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Enumerations", "Wdg_LLD"]
- `anchor`: "#define WDG_ROM"

### SEC-002-005
- `source_number`: `2.5`
- `title`: "Typedef"
- `path`: "Chapter 2 Software Design / 2.5 Typedef"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Typedef"]
- `anchor`: "2.4.3.2"

### SEC-002-005-001
- `source_number`: `2.5.1`
- `title`: "Typedefs in Wdg_HLD.h"
- `path`: "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Typedefs", "Wdg_HLD"]
- `anchor`: "2.4.3.2"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Structures"]
- `anchor`: "2.4.3.2"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Wdg_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Wdg_ConfigType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["Wdg_ConfigType"]
- `anchor`: "2.4.3.2"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Wdg_LLDConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Wdg_LLDConfigType"]
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode."

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["API", "Functions"]
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode."

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Wdg_Instance0.c"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Wdg_Instance0.c"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Functions", "Wdg_Instance0"]
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode."

### SEC-002-007-002
- `source_number`: `2.7.2`
- `title`: "Functions in Wdg_Instance1.c"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Functions", "Wdg_Instance1"]
- `anchor`: "Parameters"

### SEC-002-007-003
- `source_number`: `2.7.3`
- `title`: "Functions in Wdg_Instance2.c"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["Functions", "Wdg_Instance2"]
- `anchor`: "Diagram"

### SEC-002-007-004
- `source_number`: `2.7.4`
- `title`: "Functions in Wdg_HLD.c"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `physical_page_start`: `18`
- `physical_page_end`: `19`
- `printed_page_start`: `18`
- `printed_page_end`: `19`
- `keywords`: ["Functions", "Wdg_HLD"]
- `anchor`: "2.7.3.2"

### SEC-002-007-005
- `source_number`: `2.7.5`
- `title`: "Functions in Wdg_LLD.c"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `physical_page_start`: `20`
- `physical_page_end`: `21`
- `printed_page_start`: `20`
- `printed_page_end`: `21`
- `keywords`: ["Functions", "Wdg_LLD"]
- `anchor`: "2.7.5"

### SEC-002-007-006
- `source_number`: `2.7.6`
- `title`: "Functions in Wdg_HWA.c."
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.6 Functions in Wdg_HWA.c."
- `physical_page_start`: `20`
- `physical_page_end`: `21`
- `printed_page_start`: `20`
- `printed_page_end`: `21`
- `keywords`: ["Functions", "Wdg_HWA"]
- `anchor`: "2.7.5"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["API", "Diagram", "Sequence"]
- `anchor`: "pWdog"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Watchdog Initialization, Setting Trigger Condition and Mode"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["Condition", "Initialization", "Mode", "Setting", "Trigger"]
- `anchor`: "pWdog"

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: "Data Exchange between Watchdog Driver and Hardware"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["between", "Data", "Exchange"]
- `anchor`: "2.8.2"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Items", "Tresos"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Container", "Inclusion", "Relation"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Containers", "Variables"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["IMPLEMENTATION_CONFIG_VARIANT"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "WdgDemEventParameterRefs"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 WdgDemEventParameterRefs"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["WdgDemEventParameterRefs"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "WdgGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `physical_page_start`: `25`
- `physical_page_end`: `27`
- `printed_page_start`: `25`
- `printed_page_end`: `0`
- `keywords`: ["WdgGeneral"]
- `anchor`: "Default"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "WdgSettingsConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `physical_page_start`: `28`
- `physical_page_end`: `38`
- `printed_page_start`: `28`
- `printed_page_end`: `38`
- `keywords`: ["WdgSettingsConfig"]
- `anchor`: "Description"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Guides"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["Constraint", "Item"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "WDG Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `physical_page_start`: `40`
- `physical_page_end`: `41`
- `printed_page_start`: `40`
- `printed_page_end`: `41`
- `keywords`: ["Common", "Steps", "Usage"]
- `anchor`: "4.2"

### SEC-004-003
- `source_number`: `4.3`
- `title`: "WDG Configuration Demo"
- `path`: "Chapter 4 Configuration Guides / 4.3 WDG Configuration Demo"
- `physical_page_start`: `40`
- `physical_page_end`: `41`
- `printed_page_start`: `40`
- `printed_page_end`: `41`
- `keywords`: ["Demo"]
- `anchor`: "4.2"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `keywords`: ["FC7xxx", "Rev"]
- `anchor`: "Rev.0.6"

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `keywords`: ["MCAL", "Updated", "Revision", "Added", "Changes", "Date", "FC7240", "FC7xxx", "History", "Initial", "Optimization", "plugins", "release", "support"]
- `anchor`: "Revision History"

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "chapter_start", "api_reference", "configuration"]
- `keywords`: ["Functions", "Macros", "Wdg_HLD", "Enumerations", "Wdg_LLD", "API", "Contents", "Table", "between", "Condition", "Container", "Containers", "Data", "Design"]
- `anchor`: "Table of Contents"

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "chapter_start", "configuration"]
- `keywords`: ["Common", "Constraint", "Demo", "FC7xxx", "Guides", "IMPLEMENTATION_CONFIG_VARIANT", "Item", "Steps", "Usage", "WdgDemEventParameterRefs", "WdgGeneral", "WdgSettingsConfig"]
- `anchor`: "3.2.1"

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 WDG Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "chapter_start"]
- `keywords`: ["value", "after", "bits", "timeout", "available", "bus", "clock", "FC7300", "reset", "WDOG", "allow", "are", "bit", "clocks"]
- `anchor`: "Chapter 1 WDG Introduction"

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "chapter_start", "table", "figure_or_screenshot"]
- `keywords`: ["code", "activation", "can", "external", "Rejected", "Description", "Reason", "Rejection", "Requirement", "configured", "External", "fixed", "must", "not"]
- `anchor`: "Chapter 2 Software Design"

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "configuration"]
- `keywords`: ["external", "not", "Description", "External", "must", "Rejected", "Requirement", "scope", "customer", "dedicated", "developed", "implementation", "Reason", "Rejection"]
- `anchor`: "Rejected Requirement 6 SWS_Wdg_00077"

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["time", "VARIANT", "Post", "Multiplicity", "Build", "build", "BUILD", "Class", "compile", "COMPILE", "Figure", "Link", "LINK", "not"]
- `anchor`: "Multiplicity"

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"
- `content_types`: ["text", "figure_or_screenshot", "macro_list"]
- `keywords`: ["define", "Macros", "uint32", "sequence", "writing", "allow", "base", "configuring", "detection", "Displacement", "division", "FC7xxx", "Figure", "frequency"]
- `anchor`: "Figure 3. WDG instance2"

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `content_types`: ["text", "macro_list"]
- `keywords`: ["define", "uint8", "API", "service", "wrong", "called", "not", "constant", "inconsistent", "instance", "parameter", "selected", "specifies", "Macros"]
- `anchor`: "2.3.3"

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `content_types`: ["text", "macro_list"]
- `keywords`: ["define", "indicate", "Compile", "indicates", "switch", "variable", "disable", "enable", "index", "instance", "STD_ON", "uint8", "available", "connected"]
- `anchor`: "#define WDG_INTERNAL_MODULE (0U)"

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `content_types`: ["text", "macro_list"]
- `keywords`: ["define", "indicate", "Timeout", "macro", "miliseconds", "These", "uint16", "variables", "Max", "variable", "DEM", "enable", "error", "indicates"]
- `anchor`: "#define WDG_INSTANCE1_INITIAL_TIMEOUT_U32 ((uint16)30)"

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"
- `content_types`: ["text", "table", "macro_list"]
- `keywords`: ["clock", "Description", "instance", "currently", "define", "dog", "Enumeration", "Enumerations", "Value", "Values", "Watch", "AON", "Defines", "support"]
- `anchor`: "#define WDG_ROM"

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `3`
- `section_path`: "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"
- `content_types`: ["text", "table"]
- `keywords`: ["mode", "configured", "delay", "Description", "generate", "reset", "bus", "clock", "cycles", "enable", "interrupt", "Need", "Test", "timeout"]
- `anchor`: "2.4.3.2"

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["WDOG", "Description", "uint32", "ConfigPtr", "Diagram", "Mode", "Pointer", "register", "const", "counter", "Functions", "mode", "Std_ReturnType", "value"]
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode."

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["Description", "Mode", "void", "timeout", "Parameter", "Returns", "ConfigPtr", "Diagram", "Std_ReturnType", "versioninfo", "according", "const", "counter", "mode"]
- `anchor`: "Parameters"

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["Description", "void", "Diagram", "Parameter", "Returns", "timeout", "ConfigPtr", "Mode", "versioninfo", "const", "counter", "Pointer", "Std_VersionInfoType", "switch"]
- `anchor`: "Diagram"

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["Description", "Mode", "void", "const", "Diagram", "Parameter", "timeout", "Returns", "Std_ReturnType", "versioninfo", "according", "counter", "eInstance", "mode"]
- `anchor`: "2.7.3.2"

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["eInstance", "const", "Description", "Mode", "Wdg_HWL_InstanceType", "instance", "Returns", "void", "Diagram", "Parameter", "Std_ReturnType", "u16Timeout", "counter", "mode"]
- `anchor`: "pConfigPtr"

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["eInstance", "const", "Description", "Wdg_HWL_InstanceType", "uint32", "Diagram", "instance", "Parameter", "pWdgLLDConfigPtr", "Returns", "Std_ReturnType", "Functions", "pWdog", "switch"]
- `anchor`: "2.7.5"

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["pWdog", "register", "Description", "value", "WDOG_Type", "WDOG", "void", "Diagram", "Parameter", "uint32", "address", "base", "instance", "Point"]
- `anchor`: "Description"

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `keywords`: ["register", "pWdog", "value", "u16Window", "WDOG", "address", "base", "Configured", "Description", "Diagram", "instance", "Point", "Returns", "uint16"]
- `anchor`: "pWdog"

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware"
- `content_types`: ["text", "figure_or_screenshot"]
- `keywords`: ["between", "Data", "Exchange", "FC7xxx"]
- `anchor`: "2.8.2"

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "chapter_start", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Container", "container", "DemEventParameter", "Description", "error", "IMPLEMENTATION_CONFIG_VARIANT", "Label", "Properties", "Property", "references", "Screenshot", "Type", "Value", "WdgDemEventParameterRefs"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["error", "Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "detection", "Development", "mode", "switch"]
- `anchor`: "Default"

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `0`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Default", "Container", "Description", "False", "Label", "Multi", "Properties", "Property", "Screenshot", "Type", "Value", "core", "runtime", "True"]
- `anchor`: "Default"

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `0`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "trigger", "WdgMaxTimeout", "condition", "FLOAT", "initialized"]
- `anchor`: "3.2.3.6"

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference", "configuration"]
- `keywords`: ["Default", "Description", "API", "Container", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "Compile", "disable", "enable", "ENUMERATION"]
- `anchor`: "Description"

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Default", "instance", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "Container", "Description", "interrupt", "Callback", "case", "CHOICE"]
- `anchor`: "True: Enable watchdog instance interrupt function;"

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Value", "Container", "Default", "Description", "Label", "mode", "Properties", "Property", "Screenshot", "Type", "Clock", "core", "Implementation", "KHz"]
- `anchor`: "3.2.4.7"

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["reset", "WDOG", "bus", "Delay", "clocks", "Description", "device", "enters", "generate", "Implementation", "mode", "parameter", "Properties", "Property"]
- `anchor`: "Description"

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Type", "Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Value", "mode", "sequence", "service", "value", "WDOG"]
- `anchor`: "Type"

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["mode", "Container", "Default", "Description", "Enabled", "Label", "Disabled", "enabled", "Prescaler", "Properties", "Property", "Screenshot", "test", "Type"]
- `anchor`: "Label"

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Value", "Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Type", "Updates", "Allow", "allowed", "Clock", "IDENTIFIABLE"]
- `anchor`: "Screenshot"

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["mode", "WDOG", "Container", "core", "Default", "device", "enters", "Label", "processor", "Properties", "Property", "Screenshot", "Type", "Value"]
- `anchor`: "Screenshot"

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["reset", "bus", "Delay", "clocks", "Default", "Description", "generate", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "WDOG"]
- `anchor`: "Description"

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["Enabled", "Container", "Description", "Disabled", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "BOOLEAN", "Default", "mode", "Prescaler"]
- `anchor`: "3.2.4.9.10"

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `keywords`: ["mode", "enabled", "test", "WdgTestMode", "byte", "Default", "only", "TestModeDisabled", "Container", "Description", "disabled", "ENUMERATION", "FC7xxx", "high"]
- `anchor`: "Default"

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "chapter_start", "figure_or_screenshot", "configuration"]
- `keywords`: ["GPT", "clock", "configure", "Constraint", "different", "each", "FC7xxx", "Guides", "has", "instance", "ISR", "Item", "matched", "notification"]
- `anchor`: "Chapter 4 Configuration Guides"

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `content_types`: ["text", "figure_or_screenshot", "configuration"]
- `keywords`: ["Add", "API", "Basically", "below", "can", "Choose", "Common", "Configure", "configured", "Demo", "FC7xxx", "files", "following", "General"]
- `anchor`: "4.2"

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `content_types`: ["text", "figure_or_screenshot"]
- `keywords`: ["FC7xxx"]
- `anchor`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover page identifying the FC7xxx WDG document and revision."
- `keywords`: ["FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "Rev.0.6"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision history for the FC7xxx WDG document."
- `keywords`: ["MCAL", "Updated", "Revision", "Added", "Changes", "Date", "FC7240", "FC7xxx", "History", "Initial", "Optimization", "plugins", "release", "support"]
- `anchors`:
  - `p2`: "Revision History"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "chapter_start", "api_reference", "configuration"]
- `summary`: "Table of contents entries for locating chapters and subsections in the FC7xxx WDG document."
- `keywords`: ["Functions", "Macros", "Wdg_HLD", "Enumerations", "Wdg_LLD", "API", "Contents", "Table", "between", "Condition", "Container", "Containers", "Data", "Design"]
- `anchors`:
  - `p3`: "Table of Contents"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "chapter_start", "configuration"]
- `summary`: "Table of contents entries for locating chapters and subsections in the FC7xxx WDG document."
- `keywords`: ["Common", "Constraint", "Demo", "FC7xxx", "Guides", "IMPLEMENTATION_CONFIG_VARIANT", "Item", "Steps", "Usage", "WdgDemEventParameterRefs", "WdgGeneral", "WdgSettingsConfig"]
- `anchors`:
  - `p4`: "3.2.1"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 WDG Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "chapter_start"]
- `summary`: "Covers `Chapter 1 WDG Introduction / 1.1 Requirement Tracing`. Key content: Requirement Tracing The design of this module follows the specifications of the WDG driver specified in AUTOSAR Classic Platform Release 4.6.0."
- `keywords`: ["value", "after", "bits", "timeout", "available", "bus", "clock", "FC7300", "reset", "WDOG", "allow", "are", "bit", "clocks"]
- `anchors`:
  - `p5`: "Chapter 1 WDG Introduction"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "chapter_start", "table", "figure_or_screenshot"]
- `summary`: "Covers `Chapter 2 Software Design / 2.1 Rejected Requirements`. Key content: Rejected Requirements Rejected Requirement 1 SWS_Wdg_00093"
- `keywords`: ["code", "activation", "can", "external", "Rejected", "Description", "Reason", "Rejection", "Requirement", "configured", "External", "fixed", "must", "not"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `content_types`: ["text", "table", "configuration"]
- `summary`: "Covers `Chapter 2 Software Design / 2.1 Rejected Requirements`. Visible anchor: `Rejected Requirement 6 SWS_Wdg_00077`. Key content: A WDG module for an external watchdog shall satisfy the same functional requirements and offer the same functional scope as a WDG module for an internal watchdog. Hence their respective"
- `keywords`: ["external", "not", "Description", "External", "must", "Rejected", "Requirement", "scope", "customer", "dedicated", "developed", "implementation", "Reason", "Rejection"]
- `anchors`:
  - `p7`: "Rejected Requirement 6 SWS_Wdg_00077"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 2 Software Design / 2.2 File Structure`. Visible anchor: `Multiplicity`. Key content: Choice reference to [ DioChannelGroup , SpiSequence ] - Post-Build Variant Value"
- `keywords`: ["time", "VARIANT", "Post", "Multiplicity", "Build", "build", "BUILD", "Class", "compile", "COMPILE", "Figure", "Link", "LINK", "not"]
- `anchors`:
  - `p8`: "Multiplicity"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"
- `content_types`: ["text", "figure_or_screenshot", "macro_list"]
- `summary`: "Covers `Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h`. Visible anchor: `Figure 3. WDG instance2`. Key content: Macros in Wdg_Version.h #define WDG_AR_RELEASE_MAJOR_VERSION 4"
- `keywords`: ["define", "Macros", "uint32", "sequence", "writing", "allow", "base", "configuring", "detection", "Displacement", "division", "FC7xxx", "Figure", "frequency"]
- `anchors`:
  - `p9`: "Figure 3. WDG instance2"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `content_types`: ["text", "macro_list"]
- `summary`: "Covers `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h`. Key content: Macros in Wdg_HLD.h #define WDG_E_DRIVER_STATE ((uint8)0x10U)"
- `keywords`: ["define", "uint8", "API", "service", "wrong", "called", "not", "constant", "inconsistent", "instance", "parameter", "selected", "specifies", "Macros"]
- `anchors`:
  - `p10`: "2.3.3"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `content_types`: ["text", "macro_list"]
- `summary`: "Covers `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h`. Visible anchor: `•`. Key content: #define WDG_INTERNAL_MODULE (0U) This define indicates that the watchdog is internal."
- `keywords`: ["define", "indicate", "Compile", "indicates", "switch", "variable", "disable", "enable", "index", "instance", "STD_ON", "uint8", "available", "connected"]
- `anchors`:
  - `p11`: "#define WDG_INTERNAL_MODULE (0U)"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"
- `content_types`: ["text", "macro_list"]
- `summary`: "Covers `Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h`. Visible anchor: `•`. Key content: #define WDG_INSTANCE1_INITIAL_TIMEOUT_U32 ((uint16)30) These variables will indicate the Wdg Initial Timeout parameters in miliseconds for Wdg module 2"
- `keywords`: ["define", "indicate", "Timeout", "macro", "miliseconds", "These", "uint16", "variables", "Max", "variable", "DEM", "enable", "error", "indicates"]
- `anchors`:
  - `p12`: "#define WDG_INSTANCE1_INITIAL_TIMEOUT_U32 ((uint16)30)"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"
- `content_types`: ["text", "table", "macro_list"]
- `summary`: "Covers `Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h`. Visible anchor: `•`. Key content: This variable will indicate RAM/ROM execution. #define WDG_PRECOMPILE_SUPPORT (STD_ON)"
- `keywords`: ["clock", "Description", "instance", "currently", "define", "dog", "Enumeration", "Enumerations", "Value", "Values", "Watch", "AON", "Defines", "support"]
- `anchors`:
  - `p13`: "#define WDG_ROM"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `3`
- `section_path`: "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"
- `content_types`: ["text", "table"]
- `summary`: "Covers `Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h`. Visible anchor: `2.4.3.2`. Key content: WDOG test mode, mapping with WDOG_CS[TST] bit filed definition. WDOG_TST_DISABLED = 0"
- `keywords`: ["mode", "configured", "delay", "Description", "generate", "reset", "bus", "clock", "cycles", "enable", "interrupt", "Need", "Test", "timeout"]
- `anchors`:
  - `p14`: "2.4.3.2"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType`. Visible anchor: `Pointer to Watchdog Specific implementation details in each mode.`. Key content: Wdg_CallbackPtrType pWdgCallbackNotification Pointer to callback notification."
- `keywords`: ["WDOG", "Description", "uint32", "ConfigPtr", "Diagram", "Mode", "Pointer", "register", "const", "counter", "Functions", "mode", "Std_ReturnType", "value"]
- `anchors`:
  - `p15`: "Pointer to Watchdog Specific implementation details in each mode."

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c`. Visible anchor: `Parameters`. Key content: Mode to be configured Mode switch executed completely and successfully."
- `keywords`: ["Description", "Mode", "void", "timeout", "Parameter", "Returns", "ConfigPtr", "Diagram", "Std_ReturnType", "versioninfo", "according", "const", "counter", "mode"]
- `anchors`:
  - `p16`: "Parameters"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c`. Visible anchor: `Diagram`. Key content: Mode to be configured. Mode switch executed completely and successfully."
- `keywords`: ["Description", "void", "Diagram", "Parameter", "Returns", "timeout", "ConfigPtr", "Mode", "versioninfo", "const", "counter", "Pointer", "Std_VersionInfoType", "switch"]
- `anchors`:
  - `p17`: "Diagram"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`. Visible anchor: `2.7.3.2`. Key content: Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode) Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)"
- `keywords`: ["Description", "Mode", "void", "const", "Diagram", "Parameter", "timeout", "Returns", "Std_ReturnType", "versioninfo", "according", "counter", "eInstance", "mode"]
- `anchors`:
  - `p18`: "2.7.3.2"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`. Visible anchor: `pConfigPtr`. Key content: Pointer to configuration set. Hardware WDG instance."
- `keywords`: ["eInstance", "const", "Description", "Mode", "Wdg_HWL_InstanceType", "instance", "Returns", "void", "Diagram", "Parameter", "Std_ReturnType", "u16Timeout", "counter", "mode"]
- `anchors`:
  - `p19`: "pConfigPtr"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`. Key content: Functions in Wdg_LLD.c uint32 Wdg_LLD_Init(const Wdg_LLDConfigType* pWdgLLDConfigPtr, const Wdg_HWL_InstanceType eInstance )"
- `keywords`: ["eInstance", "const", "Description", "Wdg_HWL_InstanceType", "uint32", "Diagram", "instance", "Parameter", "pWdgLLDConfigPtr", "Returns", "Std_ReturnType", "Functions", "pWdog", "switch"]
- `anchors`:
  - `p20`: "2.7.5"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`. Visible anchor: `Description`. Key content: This function Get CS register value, for WDOG working mode configuration. Point to WDOG instance base register address."
- `keywords`: ["pWdog", "register", "Description", "value", "WDOG_Type", "WDOG", "void", "Diagram", "Parameter", "uint32", "address", "base", "instance", "Point"]
- `anchors`:
  - `p21`: "Description"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference"]
- `summary`: "Covers `Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode`. Visible anchor: `pWdog`. Key content: Point to WDOG instance base register address Configured register value"
- `keywords`: ["register", "pWdog", "value", "u16Window", "WDOG", "address", "base", "Configured", "Description", "Diagram", "instance", "Point", "Returns", "uint16"]
- `anchors`:
  - `p22`: "pWdog"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware"
- `content_types`: ["text", "figure_or_screenshot"]
- `summary`: "Covers `Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware`. Key content: Data Exchange between Watchdog Driver and Hardware"
- `keywords`: ["between", "Data", "Exchange", "FC7xxx"]
- `anchors`:
  - `p23`: "2.8.2"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "chapter_start", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`. Key content: Container Inclusion Relation The container inclusion relation is shown below:"
- `keywords`: ["Container", "container", "DemEventParameter", "Description", "error", "IMPLEMENTATION_CONFIG_VARIANT", "Label", "Properties", "Property", "references", "Screenshot", "Type", "Value", "WdgDemEventParameterRefs"]
- `anchors`:
  - `p24`: "Chapter 3 Tresos Configuration Items"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`. Visible anchor: `Default`. Key content: WDG_E_DISABLE_REJECTED WDG_E_DISABLE_REJECTED"
- `keywords`: ["error", "Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "detection", "Development", "mode", "switch"]
- `anchors`:
  - `p25`: "Default"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `0`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`. Visible anchor: `Default`. Key content: WdgEcucPartitionRef WdgEcucPartitionRef"
- `keywords`: ["Default", "Container", "Description", "False", "Label", "Multi", "Properties", "Property", "Screenshot", "Type", "Value", "core", "runtime", "True"]
- `anchors`:
  - `p26`: "Default"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `0`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`. Visible anchor: `3.2.3.6`. Key content: WdgInitialTimeout WdgInitialTimeout"
- `keywords`: ["Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "trigger", "WdgMaxTimeout", "condition", "FLOAT", "initialized"]
- `anchors`:
  - `p27`: "3.2.3.6"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "api_reference", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Description`. Key content: Compile switch to enable or disable the version information API. True: API enabled"
- `keywords`: ["Default", "Description", "API", "Container", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "Compile", "disable", "enable", "ENUMERATION"]
- `anchors`:
  - `p28`: "Description"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `-`. Key content: True: Enable watchdog instance interrupt function; False: Disable watchdog instance interrupt function."
- `keywords`: ["Default", "instance", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "Container", "Description", "interrupt", "Callback", "case", "CHOICE"]
- `anchors`:
  - `p29`: "True: Enable watchdog instance interrupt function;"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `3.2.4.7`. Key content: Hardware dependent settings for the watchdog driver's fast mode. This is the Implementation Specific parameter. Indicates WDG Clock Value in KHz."
- `keywords`: ["Value", "Container", "Default", "Description", "Label", "mode", "Properties", "Property", "Screenshot", "Type", "Clock", "core", "Implementation", "KHz"]
- `anchors`:
  - `p30`: "3.2.4.7"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Description`. Key content: This is the Implementation Specific parameter. Enabled: WDOG continues to count even while the device enters the debug mode."
- `keywords`: ["reset", "WDOG", "bus", "Delay", "clocks", "Description", "device", "enters", "generate", "Implementation", "mode", "parameter", "Properties", "Property"]
- `anchors`:
  - `p31`: "Description"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Type`. Key content: Wdg Operation Mode WdgClockSelection"
- `keywords`: ["Type", "Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Value", "mode", "sequence", "service", "value", "WDOG"]
- `anchors`:
  - `p32`: "Type"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Label`. Key content: Wdg Window Period[s] WdgPrescalerEnabled"
- `keywords`: ["mode", "Container", "Default", "Description", "Enabled", "Label", "Disabled", "enabled", "Prescaler", "Properties", "Property", "Screenshot", "test", "Type"]
- `anchors`:
  - `p33`: "Label"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Screenshot`. Key content: Wdg Allow Updates. Disabled: Updates not allowed."
- `keywords`: ["Value", "Container", "Default", "Description", "Label", "Properties", "Property", "Screenshot", "Type", "Updates", "Allow", "allowed", "Clock", "IDENTIFIABLE"]
- `anchors`:
  - `p34`: "Screenshot"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Screenshot`. Key content: WdgRunsInStopMode WdgRunsInStopMode"
- `keywords`: ["mode", "WDOG", "Container", "core", "Default", "device", "enters", "Label", "processor", "Properties", "Property", "Screenshot", "Type", "Value"]
- `anchors`:
  - `p35`: "Screenshot"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Description`. Key content: This is the Implementation Specific parameter. Set the value of the WDOG reset delay when enabling the WDOG interrupt. The default value is 128 bus"
- `keywords`: ["reset", "bus", "Delay", "clocks", "Default", "Description", "generate", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "WDOG"]
- `anchors`:
  - `p36`: "Description"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `3.2.4.9.10`. Key content: Disabled: Regular mode, service sequence can be done at any time. Enabled: Windowed mode, the service sequence is only valid when the up counter is higher than value"
- `keywords`: ["Enabled", "Container", "Description", "Disabled", "Label", "Properties", "Property", "Screenshot", "Type", "Value", "BOOLEAN", "Default", "mode", "Prescaler"]
- `anchors`:
  - `p37`: "3.2.4.9.10"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `content_types`: ["text", "table", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`. Visible anchor: `Default`. Key content: TestModeDisabled: Watchdog test mode disabled. UserModeEnabled: Watchdog user mode enabled."
- `keywords`: ["mode", "enabled", "test", "WdgTestMode", "byte", "Default", "only", "TestModeDisabled", "Container", "Description", "disabled", "ENUMERATION", "FC7xxx", "high"]
- `anchors`:
  - `p38`: "Default"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "chapter_start", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`. Key content: Configuration Item Constraint In WDG module, each watchdog instance has a different module."
- `keywords`: ["GPT", "clock", "configure", "Constraint", "different", "each", "FC7xxx", "Guides", "has", "instance", "ISR", "Item", "matched", "notification"]
- `anchors`:
  - `p39`: "Chapter 4 Configuration Guides"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `content_types`: ["text", "figure_or_screenshot", "configuration"]
- `summary`: "Covers `Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps`. Key content: WDG Usage Common Steps Basically, the WDG module can be configured by following the below 4 steps:"
- `keywords`: ["Add", "API", "Basically", "below", "can", "Choose", "Common", "Configure", "configured", "Demo", "FC7xxx", "files", "following", "General"]
- `anchors`:
  - `p40`: "4.2"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `content_types`: ["text", "figure_or_screenshot"]
- `summary`: "Page under `Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps` with sparse extracted text."
- `keywords`: ["FC7xxx"]
- `anchors`:
  - `p41`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0002-001`
- `caption`: "Revision History"
- `table_type`: `revision_history`
- `physical_pages`: `2`
- `section_path`: "Revision History"
- `bbox`: `[30.24, 101.64, 565.08, 240.42]`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "revision history index entry detected on physical page 2. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Revision"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Revision", "Date", "Changes", "0.1", "2023/07/14", "Initial release for MCAL V0.1.0"]

### TBL-0006-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0006-001`
- `caption`: "Rejected Requirement 1 SWS_Wdg_00093"
- `table_type`: `rejected_requirement`
- `physical_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.54, 122.88, 564.78, 226.28]`
- `key_fields`: ["Rejected Requirement 1 SWS_Wdg_00093", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 6. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 1 SWS_Wdg_00093"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 1 SWS_Wdg_00093", "Description", "If the watchdog hardware requires an activation code which can be configured or changed, the Wdg Driver shall handle the activation code internally. In this case, the Wdg Driver shall pass the correct activation code to the watchdog hardware and the watchdog hardware in turn shall update the Wdg module's internal variable where the next expected access code is stored.", "Rejection Reason", "The activation code used by our applicable watchdog is fixed."]

### TBL-0006-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0006-002`
- `caption`: "Rejected Requirement 2 SWS_Wdg_00094"
- `table_type`: `rejected_requirement`
- `physical_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.54, 249.48, 564.78, 335.84]`
- `key_fields`: ["Rejected Requirement 2 SWS_Wdg_00094", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 6. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 2 SWS_Wdg_00094"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 2 SWS_Wdg_00094", "Description", "If the watchdog hardware requires an activation code which can be configured or changed, the trigger cycle of the Wdg Driver shall be defined with a value so that updating the activation code by the watchdog hardware can be guaranteed (see Figure 3).", "Rejection Reason", "The activation code used by our applicable watchdog is fixed."]

### TBL-0006-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0006-003`
- `caption`: "Rejected Requirement 3 SWS_Wdg_00095"
- `table_type`: `rejected_requirement`
- `physical_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.54, 359.04, 564.78, 462.44]`
- `key_fields`: ["Rejected Requirement 3 SWS_Wdg_00095", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 6. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 3 SWS_Wdg_00095"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 3 SWS_Wdg_00095", "Description", "If the watchdog hardware requires an activation code which can be configured or changed and the initial activation code can be configured, the activation code shall be provided in the Wdg Driver's configuration set. If the activation code is fixed for a particular hardware the above requirement can be ignored.", "Rejection Reason", "The activation code used by our applicable watchdog is fixed."]

### TBL-0006-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0006-004`
- `caption`: "Rejected Requirement 4 SWS_Wdg_00055"
- `table_type`: `rejected_requirement`
- `physical_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.54, 485.64, 564.78, 605.96]`
- `key_fields`: ["Rejected Requirement 4 SWS_Wdg_00055", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 6. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 4 SWS_Wdg_00055"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 4 SWS_Wdg_00055", "Description", "The WDG module for an external watchdog driver shall have source code that is independent of the microcontroller platform.", "Rejection Reason", "External module is customer dependent and is not developed, and therefore not in scope. External assumption - \"An external device, acting as supervisor of the operations, must provide a watchdog to cover common cause of failures of Leopard_1M for SIL3 applications\". The implementation for WDG external must be supported by a dedicated WDG module"]

### TBL-0006-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0006-005`
- `caption`: "Rejected Requirement 5 SWS_Wdg_00076"
- `table_type`: `rejected_requirement`
- `physical_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.54, 629.16, 564.78, 766.4]`
- `key_fields`: ["Rejected Requirement 5 SWS_Wdg_00076", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 6. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 5 SWS_Wdg_00076"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 5 SWS_Wdg_00076", "Description", "To access the external watchdog hardware, the corresponding WDG module instance shall use the functionality and API of the corresponding handler or driver, e.g. the SPI handler or DIO driver.", "Rejection Reason", "External module is customer dependent and is not developed, and therefore not in scope. External assumption - \"An external device, acting as supervisor of the operations, must provide a watchdog to cover common cause of failures of Leopard_1M for SIL3 applications\". The implementation for WDG external must be supported by a dedicated WDG module"]

### TBL-0007-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0007-001`
- `caption`: "Rejected Requirement 6 SWS_Wdg_00077"
- `table_type`: `rejected_requirement`
- `physical_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.55, 36.96, 564.78, 174.2]`
- `key_fields`: ["Rejected Requirement 6 SWS_Wdg_00077", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 7. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 6 SWS_Wdg_00077"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 6 SWS_Wdg_00077", "Description", "A WDG module for an external watchdog shall satisfy the same functional requirements and offer the same functional scope as a WDG module for an internal watchdog. Hence their respective APIs are semantically identical.", "Rejection Reason", "External module is customer dependent and is not developed, and therefore not in scope. External assumption - \"An external device, acting as supervisor of the operations, must provide a watchdog to cover common cause of failures of Leopard_1M for SIL3 applications\". The implementation for WDG external must be supported by a dedicated WDG module"]

### TBL-0007-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0007-002`
- `caption`: "Rejected Requirement 7 SWS_Wdg_00078"
- `table_type`: `rejected_requirement`
- `physical_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.55, 197.4, 564.78, 334.64]`
- `key_fields`: ["Rejected Requirement 7 SWS_Wdg_00078", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 7. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 7 SWS_Wdg_00078"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 7 SWS_Wdg_00078", "Description", "The WDG module shall add all parameters required for accessing the external watchdog hardware, e.g. the used SPI channel or DIO port, to the module's published parameters and to the module's configuration parameters.", "Rejection Reason", "External module is customer dependent and is not developed, and therefore not in scope. External assumption - \"An external device, acting as supervisor of the operations, must provide a watchdog to cover common cause of failures of Leopard_1M for SIL3 applications\". The implementation for WDG external must be supported by a dedicated WDG module"]

### TBL-0007-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0007-003`
- `caption`: "Rejected Requirement 8 SWS_Wdg_000172"
- `table_type`: `rejected_requirement`
- `physical_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.55, 357.84, 564.78, 495.08]`
- `key_fields`: ["Rejected Requirement 8 SWS_Wdg_000172", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 7. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 8 SWS_Wdg_000172"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 8 SWS_Wdg_000172", "Description", "If more than one watchdog driver instance exits on an ECU (namely an external and an internal one) the API names and instance specific type names specified in this chapter shall be made unique by expansion according to SRS_BSW_00347.", "Rejection Reason", "External module is customer dependent and is not developed, and therefore not in scope. External assumption - \"An external device, acting as supervisor of the operations, must provide a watchdog to cover common cause of failures of Leopard_1M for SIL3 applications\". The implementation for WDG external must be supported by a dedicated WDG module."]

### TBL-0007-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0007-004`
- `caption`: "Rejected Requirement 9 ECUC_Wdg_00112"
- `table_type`: `rejected_requirement`
- `physical_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.55, 518.4, 564.78, 621.68]`
- `key_fields`: ["Rejected Requirement 9 ECUC_Wdg_00112", "Description", "Rejection Reason"]
- `summary`: "rejected requirement index entry detected on physical page 7. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 9 ECUC_Wdg_00112"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 9 ECUC_Wdg_00112", "Description", "Container Name - WdgExternalConfiguration - Description - Configuration items for an external watchdog hardware - Configuration Parameters -", "Rejection Reason", "External module is customer dependant and is not developed, and therefore not in scope. The implementation for WDG external must be supported by a dedicated Wdg module."]

### TBL-0007-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0007-005`
- `caption`: "Rejected Requirement 10 ECUC_Wdg_00113"
- `table_type`: `rejected_requirement`
- `physical_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `bbox`: `[30.55, 644.88, 553.48, 783.06]`
- `key_fields`: ["Rejected Requirement 10 ECUC_Wdg_00113", "Description"]
- `summary`: "rejected requirement index entry detected on physical page 7. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Rejected Requirement 10 ECUC_Wdg_00113"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Rejected Requirement 10 ECUC_Wdg_00113", "Description", "SWS Item", "ECUC_Wdg_00113", "Name", "WdgExternalContainerRef"]

### TBL-0008-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0008-001`
- `caption`: "Multiplicity | 0..1 | Type | Choice reference to [ DioChannelGroup , SpiSequence ] - | Post-Build Variant Multiplicity"
- `table_type`: `table_like`
- `physical_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[30.58, 37.02, 553.46, 280.4]`
- `key_fields`: ["Multiplicity", "0..1"]
- `summary`: "table like index entry detected on physical page 8. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Multiplicity"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Multiplicity", "0..1", "Type", "Choice reference to [ DioChannelGroup , SpiSequence ] -", "Post-Build Variant Multiplicity", "true"]

### TBL-0013-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0013-001`
- `caption`: "Enumeration Wdg_HWL_InstanceType"
- `table_type`: `enum`
- `physical_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"
- `bbox`: `[30.57, 242.68, 564.75, 347.46]`
- `key_fields`: ["Enumeration", "Wdg_HWL_InstanceType", "Description", "Values"]
- `summary`: "enum index entry detected on physical page 13. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Enumeration"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Enumeration", "Wdg_HWL_InstanceType", "Description", "Hardware WDG instance.", "Values", "Value"]

### TBL-0013-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0013-002`
- `caption`: "Enumeration Wdg_StatusType"
- `table_type`: `enum`
- `physical_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"
- `bbox`: `[30.57, 413.44, 564.75, 535.74]`
- `key_fields`: ["Enumeration", "Wdg_StatusType", "Description", "Values"]
- `summary`: "enum index entry detected on physical page 13. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Enumeration"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Enumeration", "Wdg_StatusType", "Description", "This enumerated type will contain the watchdog driver's possible states.", "Values", "Value"]

### TBL-0013-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0013-003`
- `caption`: "Enumeration WDOG_ClkSelType"
- `table_type`: `enum`
- `physical_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"
- `bbox`: `[30.57, 601.72, 564.75, 740.82]`
- `key_fields`: ["Enumeration", "WDOG_ClkSelType", "Description", "Values"]
- `summary`: "enum index entry detected on physical page 13. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Enumeration"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Enumeration", "WDOG_ClkSelType", "Description", "WDOG clock source select, mapping with WDOG_CS[CLK_SEL] bit filed definition.", "Values", "Value"]

### TBL-0014-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0014-001`
- `caption`: "Enumeration WDOG_TestType"
- `table_type`: `enum`
- `physical_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"
- `bbox`: `[30.57, 54.04, 564.75, 176.22]`
- `key_fields`: ["Enumeration", "WDOG_TestType", "Description", "Values"]
- `summary`: "enum index entry detected on physical page 14. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Enumeration"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Enumeration", "WDOG_TestType", "Description", "WDOG test mode, mapping with WDOG_CS[TST] bit filed definition.", "Values", "Value"]

### TBL-0014-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0014-002`
- `caption`: "Enumeration WDOG_TimeoutReactionType"
- `table_type`: `enum`
- `physical_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"
- `bbox`: `[30.57, 216.4, 564.75, 406.38]`
- `key_fields`: ["Enumeration", "WDOG_TimeoutReactionType", "Description", "Values"]
- `summary`: "enum index entry detected on physical page 14. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Enumeration"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Enumeration", "WDOG_TimeoutReactionType", "Description", "WDOG delay time to generate the reset.", "Values", "Value"]

### TBL-0014-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0014-003`
- `caption`: "Structure Wdg_ConfigType"
- `table_type`: `structure`
- `physical_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"
- `bbox`: `[30.57, 563.32, 564.75, 785.6]`
- `key_fields`: ["Structure", "Wdg_ConfigType", "Description", "Diagram", "Data Fields"]
- `summary`: "structure index entry detected on physical page 14. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Structure"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Structure", "Wdg_ConfigType", "Description", "Used for pointers to structures holding configuration data provided to the WDG module initialization routine for configuration of the module and watchdog hardware.", "Diagram", "N/A"]

### TBL-0015-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0015-001`
- `caption`: "Pointer to Watchdog Specific implementation details in each mode. • Wdg_CallbackPtrType pWdgCallbackNotification Pointer to callback notification."
- `table_type`: `table_like`
- `physical_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `bbox`: `[30.55, 37.0, 564.77, 94.52]`
- `key_fields`: []
- `summary`: "table like index entry detected on physical page 15. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode. • Wdg_CallbackPtrType pWdgCallbackNotification Pointer to callback notific"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Pointer to Watchdog Specific implementation details in each mode. • Wdg_CallbackPtrType pWdgCallbackNotification Pointer to callback notification."]

### TBL-0015-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0015-002`
- `caption`: "Structure Wdg_LLDConfigType"
- `table_type`: `structure`
- `physical_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `bbox`: `[30.55, 137.56, 564.77, 365.96]`
- `key_fields`: ["Structure", "Wdg_LLDConfigType", "Description", "Diagram", "Data Fields"]
- `summary`: "structure index entry detected on physical page 15. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Structure"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Structure", "Wdg_LLDConfigType", "Description", "Contains the information related to the hardware setup for watchdog.", "Diagram", "N/A"]

### TBL-0015-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0015-003`
- `caption`: "Function void Wdg_Instance0_Init(const Wdg_ConfigType* ConfigPtr)"
- `table_type`: `api_function`
- `physical_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `bbox`: `[30.55, 458.56, 564.77, 622.28]`
- `key_fields`: ["Function", "void Wdg_Instance0_Init(const Wdg_ConfigType* ConfigPtr)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 15. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance0_Init(const Wdg_ConfigType* ConfigPtr)", "Description", "WDG initialization.", "Diagram", "Parameters"]

### TBL-0015-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0015-004`
- `caption`: "Function Std_ReturnType Wdg_Instance0_SetMode(WdgIf_ModeType Mode)"
- `table_type`: `api_function`
- `physical_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `bbox`: `[30.55, 662.44, 564.77, 778.28]`
- `key_fields`: ["Function", "Std_ReturnType Wdg_Instance0_SetMode(WdgIf_ModeType Mode)", "Description", "Diagram"]
- `summary`: "api function index entry detected on physical page 15. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "Std_ReturnType Wdg_Instance0_SetMode(WdgIf_ModeType Mode)", "Description", "Switch the watchdog mode according to the input parameter Mode.", "Diagram"]

### TBL-0016-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0016-001`
- `caption`: "Parameters | Parameter | Description | Mode | Mode to be configured"
- `table_type`: `table_like`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[30.56, 37.02, 564.76, 126.2]`
- `key_fields`: ["Parameters", "Parameter", "Description"]
- `summary`: "table like index entry detected on physical page 16. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Parameters"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Parameters", "Parameter", "Description", "Mode", "Mode to be configured", "Returns"]

### TBL-0016-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0016-002`
- `caption`: "Function void Wdg_Instance0_SetTriggerCondition(uint16 timeout)"
- `table_type`: `api_function`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[30.56, 166.48, 564.76, 282.8]`
- `key_fields`: ["Function", "void Wdg_Instance0_SetTriggerCondition(uint16 timeout)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 16. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance0_SetTriggerCondition(uint16 timeout)", "Description", "Reset the watchdog timeout counter according to the parameter timeout.", "Diagram", "Parameters"]

### TBL-0016-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0016-003`
- `caption`: "Function void Wdg_Instance0_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `table_type`: `api_function`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[30.56, 322.96, 564.76, 428.96]`
- `key_fields`: ["Function", "void Wdg_Instance0_GetVersionInfo(Std_VersionInfoType * versioninfo)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 16. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance0_GetVersionInfo(Std_VersionInfoType * versioninfo)", "Description", "Get WDG module version information.", "Diagram", "Parameters"]

### TBL-0016-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0016-004`
- `caption`: "Function void Wdg_Instance1_Init(const Wdg_ConfigType* ConfigPtr)"
- `table_type`: `api_function`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[30.56, 494.92, 564.76, 658.64]`
- `key_fields`: ["Function", "void Wdg_Instance1_Init(const Wdg_ConfigType* ConfigPtr)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 16. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance1_Init(const Wdg_ConfigType* ConfigPtr)", "Description", "WDG initialization.", "Diagram", "Parameters"]

### TBL-0016-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0016-005`
- `caption`: "Function Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)"
- `table_type`: `api_function`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[30.56, 698.8, 564.76, 733.88]`
- `key_fields`: ["Function", "Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)", "Description"]
- `summary`: "api function index entry detected on physical page 16. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)", "Description", "Switch the watchdog mode according to the input parameter Mode."]

### TBL-0017-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0017-001`
- `caption`: "API diagram/table-like block"
- `table_type`: `diagram_table_like`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[30.56, 37.0, 564.76, 204.2]`
- `key_fields`: ["Diagram", "Parameters", "Returns"]
- `summary`: "diagram table like index entry detected on physical page 17. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Diagram"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Diagram", "Parameters", "Parameter", "Description", "Mode", "Mode to be configured."]

### TBL-0017-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0017-002`
- `caption`: "Function void Wdg_Instance1_SetTriggerCondition(uint16 timeout)"
- `table_type`: `api_function`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[30.56, 244.36, 564.76, 359.84]`
- `key_fields`: ["Function", "void Wdg_Instance1_SetTriggerCondition(uint16 timeout)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 17. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance1_SetTriggerCondition(uint16 timeout)", "Description", "Reset the watchdog timeout counter according to the parameter timeout.", "Diagram", "Parameters"]

### TBL-0017-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0017-003`
- `caption`: "Function void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `table_type`: `api_function`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[30.56, 400.12, 564.76, 505.76]`
- `key_fields`: ["Function", "void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 17. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)", "Description", "Get WDG module version information.", "Diagram", "Parameters"]

### TBL-0017-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0017-004`
- `caption`: "Function void Wdg_Instance2_Init(const Wdg_ConfigType* ConfigPtr)"
- `table_type`: `api_function`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[30.56, 571.72, 564.76, 749.48]`
- `key_fields`: ["Function", "void Wdg_Instance2_Init(const Wdg_ConfigType* ConfigPtr)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 17. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance2_Init(const Wdg_ConfigType* ConfigPtr)", "Description", "WDG initialization.", "Diagram", "Parameters"]

### TBL-0018-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0018-001`
- `caption`: "Function Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)"
- `table_type`: `api_function`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 54.04, 564.76, 281.48]`
- `key_fields`: ["Function", "Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 18. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)", "Description", "Switch the watchdog mode according to the input parameter Mode.", "Diagram", "Parameters"]

### TBL-0018-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0018-002`
- `caption`: "Function void Wdg_Instance1_SetTriggerCondition(uint16 timeout)"
- `table_type`: `api_function`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 321.64, 564.76, 441.32]`
- `key_fields`: ["Function", "void Wdg_Instance1_SetTriggerCondition(uint16 timeout)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 18. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance1_SetTriggerCondition(uint16 timeout)", "Description", "Reset the watchdog timeout counter according to the parameter timeout.", "Diagram", "Parameters"]

### TBL-0018-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0018-003`
- `caption`: "Function void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `table_type`: `api_function`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 481.6, 564.76, 591.08]`
- `key_fields`: ["Function", "void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 18. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)", "Description", "Get WDG module version information.", "Diagram", "Parameters"]

### TBL-0018-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0018-004`
- `caption`: "Function void Wdg_HLD_Init(const Wdg_ConfigType* pConfigPtr, const Wdg_HWL_InstanceType eInstance )"
- `table_type`: `api_function`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 640.12, 564.76, 780.3]`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 18. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_HLD_Init(const Wdg_ConfigType* pConfigPtr, const Wdg_HWL_InstanceType eInstance )", "Description", "This function initializes the WDG module.", "Diagram", "Parameters"]

### TBL-0019-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0019-001`
- `caption`: "pConfigPtr | Pointer to configuration set. | eInstance | Hardware WDG instance. | Returns"
- `table_type`: `table_like`
- `physical_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 37.02, 564.76, 89.6]`
- `key_fields`: ["pConfigPtr", "Pointer to configuration set.", "Returns"]
- `summary`: "table like index entry detected on physical page 19. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "pConfigPtr"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["pConfigPtr", "Pointer to configuration set.", "eInstance", "Hardware WDG instance.", "Returns", "N/A"]

### TBL-0019-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0019-002`
- `caption`: "Function Std_ReturnType Wdg_HLD_SetMode(WdgIf_ModeType Mode, const Wdg_HWL_InstanceType eInstance )"
- `table_type`: `api_function`
- `physical_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 129.76, 564.76, 361.76]`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 19. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "Std_ReturnType Wdg_HLD_SetMode(WdgIf_ModeType Mode, const Wdg_HWL_InstanceType eInstance )", "Description", "Switches the watchdog into the mode Mode.", "Diagram", "Parameters"]

### TBL-0019-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0019-003`
- `caption`: "Function void Wdg_HLD_SetTriggerCondition(uint16 u16Timeout, const Wdg_HWL_InstanceType eInstance )"
- `table_type`: `api_function`
- `physical_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 401.92, 564.76, 587.48]`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 19. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_HLD_SetTriggerCondition(uint16 u16Timeout, const Wdg_HWL_InstanceType eInstance )", "Description", "Reset the watchdog timeout counter according to the parameter timeout.", "Diagram", "Parameters"]

### TBL-0019-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0019-004`
- `caption`: "Function void Wdg_ProcessInterrupt(const Wdg_HWL_InstanceType eInstance)"
- `table_type`: `api_function`
- `physical_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[30.56, 627.64, 564.76, 732.44]`
- `key_fields`: ["Function", "void Wdg_ProcessInterrupt(const Wdg_HWL_InstanceType eInstance)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 19. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_ProcessInterrupt(const Wdg_HWL_InstanceType eInstance)", "Description", "The Wdg_Isr is used to detect missed trigger of the hardware.", "Diagram", "N/A"]

### TBL-0020-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0020-001`
- `caption`: "Function uint32 Wdg_LLD_Init(const Wdg_LLDConfigType* pWdgLLDConfigPtr, const Wdg_HWL_InstanceType eInstance )"
- `table_type`: `api_function`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.56, 79.72, 564.76, 346.04]`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 20. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "uint32 Wdg_LLD_Init(const Wdg_LLDConfigType* pWdgLLDConfigPtr, const Wdg_HWL_InstanceType eInstance )", "Description", "Initialize the hardware of WDG module.", "Diagram", "Parameters"]

### TBL-0020-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0020-002`
- `caption`: "Function void Wdg_LLD_Trigger(const Wdg_HWL_InstanceType eInstance)"
- `table_type`: `api_function`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.56, 386.2, 564.76, 513.44]`
- `key_fields`: ["Function", "void Wdg_LLD_Trigger(const Wdg_HWL_InstanceType eInstance)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 20. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void Wdg_LLD_Trigger(const Wdg_HWL_InstanceType eInstance)", "Description", "This function triggers the watchdog hardware. Writes the trigger sequence on the hardware", "Diagram", "Parameters"]

### TBL-0020-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0020-003`
- `caption`: "Function Std_ReturnType Wdg_LLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance)"
- `table_type`: `api_function`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.56, 553.6, 564.76, 697.88]`
- `key_fields`: ["Function", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 20. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "Std_ReturnType Wdg_LLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance)", "Description", "The function checks if the WDG configuration update is allowed by hardware", "Diagram", "Parameters"]

### TBL-0020-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0020-004`
- `caption`: "Function uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"
- `table_type`: `api_function`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.56, 763.84, 564.76, 781.4]`
- `key_fields`: ["Function", "uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"]
- `summary`: "api function index entry detected on physical page 20. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"]

### TBL-0021-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0021-001`
- `caption`: "Description | This function Get CS register value, for WDOG working mode configuration. | Diagram | Parameters | Parameter"
- `table_type`: `table_like`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.57, 37.0, 564.76, 152.97]`
- `key_fields`: ["Description", "This function Get CS register value, for WDOG working mode configuration.", "Diagram", "Parameters", "Returns"]
- `summary`: "table like index entry detected on physical page 21. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Description"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Description", "This function Get CS register value, for WDOG working mode configuration.", "Diagram", "Parameters", "Parameter", "Description"]

### TBL-0021-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0021-002`
- `caption`: "Function boolean WDOG_HWA_GetUnlockStatus(WDOG_Type * pWdog)"
- `table_type`: `api_function`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.57, 193.24, 564.76, 297.96]`
- `key_fields`: ["Function", "boolean WDOG_HWA_GetUnlockStatus(WDOG_Type * pWdog)", "Description", "Diagram", "Parameters", "Returns"]
- `summary`: "api function index entry detected on physical page 21. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "boolean WDOG_HWA_GetUnlockStatus(WDOG_Type * pWdog)", "Description", "Get WDOG unlock status, if locked, register can't be written.", "Diagram", "N/A"]

### TBL-0021-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0021-003`
- `caption`: "Function void WDOG_HWA_SetCounter(WDOG_Type * pWdog, uint32 u32Counter )"
- `table_type`: `api_function`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.57, 338.2, 564.76, 492.2]`
- `key_fields`: ["Function", "void WDOG_HWA_SetCounter(WDOG_Type * pWdog, uint32 u32Counter )", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 21. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void WDOG_HWA_SetCounter(WDOG_Type * pWdog, uint32 u32Counter )", "Description", "This function Set COUNTER register value, for watchdog unlock and refresh usage.", "Diagram", "Parameters"]

### TBL-0021-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0021-004`
- `caption`: "Function void WDOG_HWA_SetCs(WDOG_Type * pWdog, uint32 u32Cs )"
- `table_type`: `api_function`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.57, 532.36, 564.76, 658.64]`
- `key_fields`: ["Function", "void WDOG_HWA_SetCs(WDOG_Type * pWdog, uint32 u32Cs )", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 21. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void WDOG_HWA_SetCs(WDOG_Type * pWdog, uint32 u32Cs )", "Description", "This function Set CS register value, for watchdog working mode configuration.", "Diagram", "Parameters"]

### TBL-0021-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0021-005`
- `caption`: "Function void WDOG_HWA_SetTimeout(WDOG_Type * pWdog, uint16 u16Timeout )"
- `table_type`: `api_function`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[30.57, 698.8, 564.76, 774.42]`
- `key_fields`: ["Function", "void WDOG_HWA_SetTimeout(WDOG_Type * pWdog, uint16 u16Timeout )", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 21. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void WDOG_HWA_SetTimeout(WDOG_Type * pWdog, uint16 u16Timeout )", "Description", "Set TIMEOUT register value. for WDOG timeout value.", "Diagram", "Parameters"]

### TBL-0022-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0022-001`
- `caption`: "pWdog | Point to WDOG instance base register address | u16Timeout | Configured register value | Returns"
- `table_type`: `table_like`
- `physical_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `bbox`: `[30.56, 37.02, 564.76, 89.6]`
- `key_fields`: ["pWdog", "Point to WDOG instance base register address", "Returns"]
- `summary`: "table like index entry detected on physical page 22. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "pWdog"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["pWdog", "Point to WDOG instance base register address", "u16Timeout", "Configured register value", "Returns", "N/A"]

### TBL-0022-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0022-002`
- `caption`: "Function void WDOG_HWA_SetWindow(WDOG_Type * pWdog, uint16 u16Window )"
- `table_type`: `api_function`
- `physical_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `bbox`: `[30.56, 129.76, 564.76, 257.6]`
- `key_fields`: ["Function", "void WDOG_HWA_SetWindow(WDOG_Type * pWdog, uint16 u16Window )", "Description", "Diagram", "Parameters"]
- `summary`: "api function index entry detected on physical page 22. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Function"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Function", "void WDOG_HWA_SetWindow(WDOG_Type * pWdog, uint16 u16Window )", "Description", "Set WINDOW register value, for windowed WDOG low threshold value.", "Diagram", "Parameters"]

### TBL-0024-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0024-001`
- `caption`: "Container IMPLEMENTATION_CONFIG_VARIANT"
- `table_type`: `config_container`
- `physical_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[30.57, 418.24, 564.75, 543.3]`
- `key_fields`: ["Container", "IMPLEMENTATION_CONFIG_VARIANT", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 24. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "IMPLEMENTATION_CONFIG_VARIANT", "Description", "N/A", "Screenshot", "Properties"]

### TBL-0024-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0024-002`
- `caption`: "Container WdgDemEventParameterRefs"
- `table_type`: `config_container`
- `physical_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[30.57, 586.36, 564.75, 772.98]`
- `key_fields`: ["Container", "WdgDemEventParameterRefs", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 24. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgDemEventParameterRefs", "Description", "Container for the references to DemEventParameter elements which shall be invoked using the API Dem_SetEventStatus in case the corresponding error occurs. The EventId is taken from the referenced DemEventParameter's DemEventId symbolic value. The standardized errors are provided in this container and can be extended by vendor-specific error references.", "Screenshot", "Properties"]

### TBL-0025-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0025-001`
- `caption`: "Default | N/A"
- `table_type`: `table_like`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.56, 37.02, 564.76, 54.66]`
- `key_fields`: ["Default", "N/A"]
- `summary`: "table like index entry detected on physical page 25. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Default"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Default", "N/A"]

### TBL-0025-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0025-002`
- `caption`: "Container WDG_E_DISABLE_REJECTED"
- `table_type`: `config_container`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.56, 94.84, 564.76, 239.58]`
- `key_fields`: ["Container", "WDG_E_DISABLE_REJECTED", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 25. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WDG_E_DISABLE_REJECTED", "Description", "Reference to the DemEventParameter which shall be issued when the error \"Initialization or mode switch failed because it would disable the watchdog\" has occurred.", "Screenshot", "Properties"]

### TBL-0025-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0025-003`
- `caption`: "Container WDG_E_MODE_FAILED"
- `table_type`: `config_container`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.56, 279.76, 564.76, 421.98]`
- `key_fields`: ["Container", "WDG_E_MODE_FAILED", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 25. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WDG_E_MODE_FAILED", "Description", "Reference to the DemEventParameter which shall be issued when the error \"Setting a watchdog mode failed (during initialization or mode switch)\" has occurred.", "Screenshot", "Properties"]

### TBL-0025-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0025-004`
- `caption`: "Container WdgGeneral"
- `table_type`: `config_container`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.56, 465.04, 564.76, 608.46]`
- `key_fields`: ["Container", "WdgGeneral", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 25. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgGeneral", "Description", "All general parameters of the watchdog driver are collected here.", "Screenshot", "Properties"]

### TBL-0025-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0025-005`
- `caption`: "Container WdgDevErrorDetect"
- `table_type`: `config_container`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.56, 648.64, 564.76, 787.26]`
- `key_fields`: ["Container", "WdgDevErrorDetect", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 25. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgDevErrorDetect", "Description", "Compile switch to enable/disable development error detection for this module. - False: Development error detection disabled; - True: Development error detection enabled.", "Screenshot", "Properties"]

### TBL-0026-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0026-001`
- `caption`: "Default | True"
- `table_type`: `table_like`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 37.02, 564.76, 54.66]`
- `key_fields`: ["Default", "True"]
- `summary`: "table like index entry detected on physical page 26. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Default"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Default", "True"]

### TBL-0026-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0026-002`
- `caption`: "Container WdgEcucPartitionRef"
- `table_type`: `config_container`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 94.84, 564.76, 217.14]`
- `key_fields`: ["Container", "WdgEcucPartitionRef", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 26. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgEcucPartitionRef", "Description", "Maps the Wdg driver to zero or one ECUC partitions to make the modules API available in this partition.", "Screenshot", "Properties"]

### TBL-0026-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0026-003`
- `caption`: "Container WdgEnableMultiCoreSupport"
- `table_type`: `config_container`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 257.32, 564.76, 416.22]`
- `key_fields`: ["Container", "WdgEnableMultiCoreSupport", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 26. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgEnableMultiCoreSupport", "Description", "When this parameter is enabled, the Wdg module will adapt to run in Multi-core. - False: Wdg module will not apdapt to in Multi-core. - True: Wdg module will adapt to run in Multi-core.", "Screenshot", "Properties"]

### TBL-0026-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0026-004`
- `caption`: "Container WdgDisableAllowed"
- `table_type`: `config_container`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 456.52, 564.76, 612.54]`
- `key_fields`: ["Container", "WdgDisableAllowed", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 26. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgDisableAllowed", "Description", "Compile switch to allow/forbid disabling the watchdog driver during runtime. - False: Disabling the watchdog driver at runtime is not allowed; - True: Disabling the watchdog driver at runtime is allowed.", "Screenshot", "Properties"]

### TBL-0026-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0026-005`
- `caption`: "Container WdgIndex"
- `table_type`: `config_container`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 652.84, 564.76, 776.46]`
- `key_fields`: ["Container", "WdgIndex", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 26. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgIndex", "Description", "Specifies the InstanceId of this module instance. If only one instance is present it shall have the Id 0.", "Screenshot", "Properties"]

### TBL-0027-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0027-001`
- `caption`: "Container WdgInitialTimeout"
- `table_type`: `config_container`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 76.96, 564.76, 217.14]`
- `key_fields`: ["Container", "WdgInitialTimeout", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 27. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgInitialTimeout", "Description", "The initial timeout (sec) for the trigger condition to be initialized during Init function. It shall be not larger than WdgMaxTimeout.", "Screenshot", "Properties"]

### TBL-0027-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0027-002`
- `caption`: "Container WdgMaxTimeout"
- `table_type`: `config_container`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 257.32, 564.76, 380.7]`
- `key_fields`: ["Container", "WdgMaxTimeout", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 27. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgMaxTimeout", "Description", "The maximum timeout (seconds) to which the watchdog trigger condition can be initialized.", "Screenshot", "Properties"]

### TBL-0027-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0027-003`
- `caption`: "Container WdgRunArea"
- `table_type`: `config_container`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 420.88, 564.76, 561.18]`
- `key_fields`: ["Container", "WdgRunArea", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 27. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunArea", "Description", "Represents the watchdog driver execution area is either from ROM(Flash) or RAM as required with the particular microcontroller.", "Screenshot", "Properties"]

### TBL-0027-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0027-004`
- `caption`: "Container WdgTriggerLocation"
- `table_type`: `config_container`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 601.36, 564.76, 723.54]`
- `key_fields`: ["Container", "WdgTriggerLocation", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 27. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgTriggerLocation", "Description", "Location (memory address) of the watchdog trigger routine. Note: Not supported by the current hardware.", "Screenshot", "Properties"]

### TBL-0027-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0027-005`
- `caption`: "Container WdgVersionInfoApi"
- `table_type`: `config_container`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[30.57, 763.84, 564.76, 781.4]`
- `key_fields`: ["Container", "WdgVersionInfoApi"]
- `summary`: "config container index entry detected on physical page 27. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgVersionInfoApi"]

### TBL-0028-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0028-001`
- `caption`: "Properties / configuration property table"
- `table_type`: `configuration_property`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 37.0, 564.76, 178.26]`
- `key_fields`: ["Description", "Screenshot", "Properties"]
- `summary`: "configuration property index entry detected on physical page 28. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Description"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Description", "Compile switch to enable or disable the version information API. - True: API enabled - False: API disabled", "Screenshot", "Properties", "Property", "Value"]

### TBL-0028-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0028-002`
- `caption`: "Container WdgSettingsConfig"
- `table_type`: `config_container`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 221.32, 564.76, 367.38]`
- `key_fields`: ["Container", "WdgSettingsConfig", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 28. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgSettingsConfig", "Description", "Configuration items for the different watchdog settings, including those for external watchdog hardware.", "Screenshot", "Properties"]

### TBL-0028-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0028-003`
- `caption`: "Container WdgInstance"
- `table_type`: `config_container`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 407.68, 564.76, 534.06]`
- `key_fields`: ["Container", "WdgInstance", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 28. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgInstance", "Description", "Select specific hardware instance for watchdog driver initialization.", "Screenshot", "Properties"]

### TBL-0028-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0028-004`
- `caption`: "Container WdgDefaultMode"
- `table_type`: `config_container`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 574.24, 564.76, 700.62]`
- `key_fields`: ["Container", "WdgDefaultMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 28. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgDefaultMode", "Description", "Default mode for watchdog driver initialization.", "Screenshot", "Properties"]

### TBL-0028-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0028-005`
- `caption`: "Container WdgEnableInterruptFunction"
- `table_type`: `config_container`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 740.92, 564.76, 775.88]`
- `key_fields`: ["Container", "WdgEnableInterruptFunction", "Description"]
- `summary`: "config container index entry detected on physical page 28. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgEnableInterruptFunction", "Description", "Compile switch to enable/disable watchdog instance interrupt function."]

### TBL-0029-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0029-001`
- `caption`: "Properties / configuration property table"
- `table_type`: `configuration_property`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 37.0, 564.75, 159.66]`
- `key_fields`: ["Screenshot", "Properties"]
- `summary`: "configuration property index entry detected on physical page 29. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "- True: Enable watchdog instance interrupt function; - False: Disable watchdog instance interrupt function."
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["- True: Enable watchdog instance interrupt function; - False: Disable watchdog instance interrupt function.", "Screenshot", "Properties", "Property", "Value", "Type"]

### TBL-0029-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0029-002`
- `caption`: "Container WdgISRCallbackNotification"
- `table_type`: `config_container`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 199.84, 564.75, 324.66]`
- `key_fields`: ["Container", "WdgISRCallbackNotification", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 29. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgISRCallbackNotification", "Description", "Callback notification for the watchdog instance ISR function.", "Screenshot", "Properties"]

### TBL-0029-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0029-003`
- `caption`: "Container wdgGPTTriggerChannel"
- `table_type`: `config_container`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 364.96, 564.75, 488.7]`
- `key_fields`: ["Container", "wdgGPTTriggerChannel", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 29. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "wdgGPTTriggerChannel", "Description", "Reference to the GptChannel configuration which set for the watchdog servicing routine implementation.", "Screenshot", "Properties"]

### TBL-0029-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0029-004`
- `caption`: "Container WdgExternalContainerRef"
- `table_type`: `config_container`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 529.0, 564.75, 730.74]`
- `key_fields`: ["Container", "WdgExternalContainerRef", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 29. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgExternalContainerRef", "Description", "a DioChannelGroup container in case the hardware watchdog is connected via DIO pins a SpiSequenceConfiguration container in case the watchdog hardware is accessed via SPI Note: This parameter is not used by current implementation", "Screenshot", "Properties"]

### TBL-0030-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0030-001`
- `caption`: "Container WdgSettingsFast"
- `table_type`: `config_container`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 54.04, 564.76, 203.22]`
- `key_fields`: ["Container", "WdgSettingsFast", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 30. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgSettingsFast", "Description", "Hardware dependent settings for the watchdog driver's fast mode.", "Screenshot", "Properties"]

### TBL-0030-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0030-002`
- `caption`: "Container WdgClockValue"
- `table_type`: `config_container`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 243.4, 564.76, 366.78]`
- `key_fields`: ["Container", "WdgClockValue", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 30. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgClockValue", "Description", "This is the Implementation Specific parameter. Indicates WDG Clock Value in KHz.", "Screenshot", "Properties"]

### TBL-0030-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0030-003`
- `caption`: "Container WdgClkSrcRef"
- `table_type`: `config_container`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 406.96, 564.76, 531.78]`
- `key_fields`: ["Container", "WdgClkSrcRef", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 30. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgClkSrcRef", "Description", "Reference to the WdgClockReferencePoint from which the clock is derived.", "Screenshot", "Properties"]

### TBL-0030-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0030-004`
- `caption`: "Container WdgRunsInStopMode"
- `table_type`: `config_container`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 571.96, 564.76, 729.06]`
- `key_fields`: ["Container", "WdgRunsInStopMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 30. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunsInStopMode", "Description", "This is the Implementation Specific parameter. - Enabled: WDOG continues to count even while the processor core is in stop mode. - Disabled: WDOG stops counting if the processor core is in stop mode.", "Screenshot", "Properties"]

### TBL-0030-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0030-005`
- `caption`: "Container WdgRunsInDebugMode"
- `table_type`: `config_container`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 769.36, 564.76, 786.92]`
- `key_fields`: ["Container", "WdgRunsInDebugMode"]
- `summary`: "config container index entry detected on physical page 30. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunsInDebugMode"]

### TBL-0031-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0031-001`
- `caption`: "Properties / configuration property table"
- `table_type`: `configuration_property`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 37.0, 564.75, 175.74]`
- `key_fields`: ["Description", "Screenshot", "Properties"]
- `summary`: "configuration property index entry detected on physical page 31. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Description"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Description", "This is the Implementation Specific parameter. - Enabled: WDOG continues to count even while the device enters the debug mode. - Disabled: WDOG stops counting if the processor core when the device enters the debug mode", "Screenshot", "Properties", "Property", "Value"]

### TBL-0031-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0031-002`
- `caption`: "Container WdgRunsInWaitMode"
- `table_type`: `config_container`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 215.92, 564.75, 372.06]`
- `key_fields`: ["Container", "WdgRunsInWaitMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 31. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunsInWaitMode", "Description", "This is the Implementation Specific parameter. - Enabled: WDOG continues to count even while the device enters the wait mode. - Disabled: WDOG stops counting if the processor core when the device enters the wait mode", "Screenshot", "Properties"]

### TBL-0031-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0031-003`
- `caption`: "Container WdgSetResetDelay"
- `table_type`: `config_container`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 412.36, 564.75, 637.26]`
- `key_fields`: ["Container", "WdgSetResetDelay", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 31. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgSetResetDelay", "Description", "This is the Implementation Specific parameter. Set the value of the WDOG reset delay when enabling the WDOG interrupt. The default value is 128 bus clock cycles. •WDG_RST_DLY_128: Delay of 128 bus clocks to generate the reset. •WDG_RST_DLY_256: Delay of 256 bus clocks to generate the reset. •WDG_RST_DLY_512: Delay of 512 bus clocks to generate the reset. •WDG_RST_DLY_1024: Delay of 1024 bus clocks to generate the reset.", "Screenshot", "Properties"]

### TBL-0031-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0031-004`
- `caption`: "Container WdgOperationMode"
- `table_type`: `config_container`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 677.44, 564.75, 782.34]`
- `key_fields`: ["Container", "WdgOperationMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 31. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgOperationMode", "Description", "This is the Implementation Specific parameter. - ResetOnTimeOut: Generate a reset on a time-out. - Interrupt: Generate an interrupt on an initial time-out, reset after 128 cycles.", "Screenshot", "Properties"]

### TBL-0032-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0032-001`
- `caption`: "Type | ENUMERATION | Label | Wdg Operation Mode | Default"
- `table_type`: `table_like`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 37.02, 564.76, 89.58]`
- `key_fields`: ["Type", "ENUMERATION"]
- `summary`: "table like index entry detected on physical page 32. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Type"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Type", "ENUMERATION", "Label", "Wdg Operation Mode", "Default", "ResetOnTimeOut"]

### TBL-0032-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0032-002`
- `caption`: "Container WdgClockSelection"
- `table_type`: `config_container`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 129.76, 564.76, 254.58]`
- `key_fields`: ["Container", "WdgClockSelection", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 32. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgClockSelection", "Description", "Selection for WDOG clock.", "Screenshot", "Properties"]

### TBL-0032-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0032-003`
- `caption`: "Container WdgTimeoutPeriod"
- `table_type`: `config_container`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 294.76, 564.76, 416.94]`
- `key_fields`: ["Container", "WdgTimeoutPeriod", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 32. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgTimeoutPeriod", "Description", "Software Watchdog Time-Out Period in seconds. Selects the time-out period for the WDOG.", "Screenshot", "Properties"]

### TBL-0032-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0032-004`
- `caption`: "Container WdgWindowMode"
- `table_type`: `config_container`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 457.24, 564.76, 613.26]`
- `key_fields`: ["Container", "WdgWindowMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 32. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgWindowMode", "Description", "- Disabled: Regular mode, service sequence can be done at any time. - Enabled: Windowed mode, the service sequence is only valid when the up counter is higher than the value in the WDOG WIN register.", "Screenshot", "Properties"]

### TBL-0032-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0032-005`
- `caption`: "Container WdgWindowPeriod"
- `table_type`: `config_container`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 653.56, 564.76, 777.3]`
- `key_fields`: ["Container", "WdgWindowPeriod", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 32. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgWindowPeriod", "Description", "This is the Implementation Specific parameter. Window start value. When window mode is enabled, the service sequence can only be written when the internal up counter is higher than this value.", "Screenshot", "Properties"]

### TBL-0033-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0033-001`
- `caption`: "Label | Wdg Window Period[s] | Default | 0.004"
- `table_type`: `table_like`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 37.02, 564.76, 72.06]`
- `key_fields`: ["Label", "Wdg Window Period[s]"]
- `summary`: "table like index entry detected on physical page 33. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Label"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Label", "Wdg Window Period[s]", "Default", "0.004"]

### TBL-0033-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0033-002`
- `caption`: "Container WdgPrescalerEnabled"
- `table_type`: `config_container`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 112.36, 564.76, 268.38]`
- `key_fields`: ["Container", "WdgPrescalerEnabled", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 33. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgPrescalerEnabled", "Description", "Switch to enable/disable prescaler function. - Disabled: Prescaler Disabled. - Enabled: Prescaler Enabled.", "Screenshot", "Properties"]

### TBL-0033-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0033-003`
- `caption`: "Container WdgAllowUpdates"
- `table_type`: `config_container`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 308.68, 564.76, 465.78]`
- `key_fields`: ["Container", "WdgAllowUpdates", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 33. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgAllowUpdates", "Description", "Whether to allow the software to reconfigure the watchdog without a reset. Disabled: Updates not allowed. Enabled: Updates allowed.", "Screenshot", "Properties"]

### TBL-0033-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0033-004`
- `caption`: "Container WdgTestMode"
- `table_type`: `config_container`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 505.96, 564.76, 681.66]`
- `key_fields`: ["Container", "WdgTestMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 33. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgTestMode", "Description", "TestModeDisabled: Watchdog test mode disabled. UserModeEnabled: Watchdog user mode enabled. TestModeLowByte: Watchdog test mode enabled, only the low byte is used. TestModeHighByte: Watchdog test mode enabled, only the high byte is used.", "Screenshot", "Properties"]

### TBL-0033-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0033-005`
- `caption`: "Container WdgSettingsOff"
- `table_type`: `config_container`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 721.84, 564.76, 756.92]`
- `key_fields`: ["Container", "WdgSettingsOff", "Description"]
- `summary`: "config container index entry detected on physical page 33. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgSettingsOff", "Description", "Hardware dependent settings for the watchdog driver's off mode."]

### TBL-0034-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0034-001`
- `caption`: "Properties / configuration property table"
- `table_type`: `configuration_property`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 37.0, 564.76, 152.58]`
- `key_fields`: ["Screenshot", "Properties"]
- `summary`: "configuration property index entry detected on physical page 34. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Screenshot"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Screenshot", "Properties", "Property", "Value", "Type", "IDENTIFIABLE"]

### TBL-0034-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0034-002`
- `caption`: "Container WdgAllowUpdates"
- `table_type`: `config_container`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 192.88, 564.76, 349.98]`
- `key_fields`: ["Container", "WdgAllowUpdates", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 34. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgAllowUpdates", "Description", "Wdg Allow Updates. - Disabled: Updates not allowed. - Enabled: Updates allowed.", "Screenshot", "Properties"]

### TBL-0034-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0034-003`
- `caption`: "Container WdgSettingsSlow"
- `table_type`: `config_container`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 390.16, 564.76, 533.7]`
- `key_fields`: ["Container", "WdgSettingsSlow", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 34. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgSettingsSlow", "Description", "Hardware dependent settings for the watchdog driver's slow mode.", "Screenshot", "Properties"]

### TBL-0034-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0034-004`
- `caption`: "Container WdgClockValue"
- `table_type`: `config_container`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 573.88, 564.76, 696.18]`
- `key_fields`: ["Container", "WdgClockValue", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 34. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgClockValue", "Description", "This is the Implementation Specific parameter. Indicates WDG Clock Value in KHz.", "Screenshot", "Properties"]

### TBL-0034-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0034-005`
- `caption`: "Container WdgClkSrcRef"
- `table_type`: `config_container`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 736.36, 564.76, 771.44]`
- `key_fields`: ["Container", "WdgClkSrcRef", "Description"]
- `summary`: "config container index entry detected on physical page 34. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgClkSrcRef", "Description", "Reference to the WdgClockReferencePoint from which the clock is derived."]

### TBL-0035-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0035-001`
- `caption`: "Properties / configuration property table"
- `table_type`: `configuration_property`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 37.0, 564.76, 126.3]`
- `key_fields`: ["Screenshot", "Properties"]
- `summary`: "configuration property index entry detected on physical page 35. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Screenshot"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Screenshot", "Properties", "Property", "Value", "Type", "REFERENCE"]

### TBL-0035-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0035-002`
- `caption`: "Container WdgRunsInStopMode"
- `table_type`: `config_container`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 166.48, 564.76, 322.62]`
- `key_fields`: ["Container", "WdgRunsInStopMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 35. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunsInStopMode", "Description", "This is the Implementation Specific parameter. - Enabled: WDOG continues to count even while the processor core is in stop mode. - Disabled: WDOG stops counting if the processor core is in stop mode.", "Screenshot", "Properties"]

### TBL-0035-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0035-003`
- `caption`: "Container WdgRunsInDebugMode"
- `table_type`: `config_container`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 362.8, 564.76, 520.26]`
- `key_fields`: ["Container", "WdgRunsInDebugMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 35. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunsInDebugMode", "Description", "This is the Implementation Specific parameter. - Enabled: WDOG continues to count even while the device enters the debug mode. - Disabled: WDOG stops counting if the processor core when the device enters the debug mode.", "Screenshot", "Properties"]

### TBL-0035-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0035-004`
- `caption`: "Container WdgRunsInWaitMode"
- `table_type`: `config_container`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 560.44, 564.76, 716.58]`
- `key_fields`: ["Container", "WdgRunsInWaitMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 35. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgRunsInWaitMode", "Description", "This is the Implementation Specific parameter. - Enabled: WDOG continues to count even while the device enters the wait mode. - Disabled: WDOG stops counting if the processor core when the device enters the wait mode.", "Screenshot", "Properties"]

### TBL-0035-005
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0035-005`
- `caption`: "Container WdgSetResetDelay"
- `table_type`: `config_container`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.56, 756.76, 564.76, 774.44]`
- `key_fields`: ["Container", "WdgSetResetDelay"]
- `summary`: "config container index entry detected on physical page 35. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgSetResetDelay"]

### TBL-0036-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0036-001`
- `caption`: "Properties / configuration property table"
- `table_type`: `configuration_property`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 37.0, 564.75, 244.5]`
- `key_fields`: ["Description", "Screenshot", "Properties"]
- `summary`: "configuration property index entry detected on physical page 36. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Description"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Description", "This is the Implementation Specific parameter. Set the value of the WDOG reset delay when enabling the WDOG interrupt. The default value is 128 bus clock cycles. •WDG_RST_DLY_128: Delay of 128 bus clocks to generate the reset. •WDG_RST_DLY_256: Delay of 256 bus clocks to generate the reset. •WDG_RST_DLY_512: Delay of 512 bus clocks to generate the reset. •WDG_RST_DLY_1024: Delay of 1024 bus clocks to generate the reset.", "Screenshot", "Properties", "Property", "Value"]

### TBL-0036-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0036-002`
- `caption`: "Container WdgOperationMode"
- `table_type`: `config_container`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 284.8, 564.75, 440.82]`
- `key_fields`: ["Container", "WdgOperationMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 36. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgOperationMode", "Description", "This is the Implementation Specific parameter. - ResetOnTimeOut: Generate a reset on a time-out. - Interrupt: Generate an interrupt on an initial time-out, reset after 128 cycles.", "Screenshot", "Properties"]

### TBL-0036-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0036-003`
- `caption`: "Container WdgClockSelection"
- `table_type`: `config_container`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 481.12, 564.75, 603.3]`
- `key_fields`: ["Container", "WdgClockSelection", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 36. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgClockSelection", "Description", "Select clock source of WDOG.", "Screenshot", "Properties"]

### TBL-0036-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0036-004`
- `caption`: "Container WdgTimeoutPeriod"
- `table_type`: `config_container`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 643.48, 564.75, 765.78]`
- `key_fields`: ["Container", "WdgTimeoutPeriod", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 36. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgTimeoutPeriod", "Description", "Software Watchdog Time-Out Period in seconds. Selects the time-out period for the WDOG.", "Screenshot", "Properties"]

### TBL-0037-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0037-001`
- `caption`: "Container WdgWindowMode"
- `table_type`: `config_container`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 54.04, 564.75, 210.06]`
- `key_fields`: ["Container", "WdgWindowMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 37. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgWindowMode", "Description", "- Disabled: Regular mode, service sequence can be done at any time. - Enabled: Windowed mode, the service sequence is only valid when the up counter is higher than value in the WDOG WIN register.", "Screenshot", "Properties"]

### TBL-0037-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0037-002`
- `caption`: "Container WdgWindowPeriod"
- `table_type`: `config_container`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 250.36, 564.75, 409.02]`
- `key_fields`: ["Container", "WdgWindowPeriod", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 37. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgWindowPeriod", "Description", "This is the Implementation Specific parameter. Window start value. When window mode is enabled, the service sequence can only be written when the internal up counter is higher than this value.", "Screenshot", "Properties"]

### TBL-0037-003
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0037-003`
- `caption`: "Container WdgPrescalerEnabled"
- `table_type`: `config_container`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 449.2, 564.75, 605.34]`
- `key_fields`: ["Container", "WdgPrescalerEnabled", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 37. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgPrescalerEnabled", "Description", "Switch to enable/disable prescaler function. - Disabled: Prescaler Disabled. - Enabled: Prescaler Enabled.", "Screenshot", "Properties"]

### TBL-0037-004
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0037-004`
- `caption`: "Container WdgAllowUpdates"
- `table_type`: `config_container`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.57, 645.52, 564.75, 785.22]`
- `key_fields`: ["Container", "WdgAllowUpdates", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 37. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgAllowUpdates", "Description", "Whether to allow the software to reconfigure the watchdog without a reset. - Disabled: Updates not allowed. - Enabled: Updates allowed.", "Screenshot", "Properties"]

### TBL-0038-001
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0038-001`
- `caption`: "Default | True"
- `table_type`: `table_like`
- `physical_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.55, 37.02, 564.77, 54.66]`
- `key_fields`: ["Default", "True"]
- `summary`: "table like index entry detected on physical page 38. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Default"
- `confidence`: `0.76`
- `quality_flags`: ["table_like_region_not_full_cell_semantics"]
- `raw_head`: ["Default", "True"]

### TBL-0038-002
- `source_table_number`: `None`
- `generated_table_number`: `Internal Table 0038-002`
- `caption`: "Container WdgTestMode"
- `table_type`: `config_container`
- `physical_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[30.55, 94.84, 564.77, 270.42]`
- `key_fields`: ["Container", "WdgTestMode", "Description", "Screenshot", "Properties"]
- `summary`: "config container index entry detected on physical page 38. Use this entry for locating the source table-like region and verify exact cell values in the PDF."
- `anchor`: "Container"
- `confidence`: `0.86`
- `quality_flags`: []
- `raw_head`: ["Container", "WdgTestMode", "Description", "TestModeDisabled: Watchdog test mode disabled. UserModeEnabled: Watchdog user mode enabled. TestModeLowByte: Watchdog test mode enabled, only the low byte is used. TestModeHighByte: Watchdog test mode enabled, only the high byte is used.", "Screenshot", "Properties"]

## 7. Figure / Image Index

### FIG-0008-001
- `source_figure_number`: `Figure 1`
- `generated_figure_number`: `None`
- `caption`: `Figure 1. WDG instance0`
- `physical_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[85.82, 347.1, 509.4, 525.5]`
- `image_type`: `formal_figure`
- `semantic_description`: "Formal source figure `Figure 1` showing WDG instance0 in the WDG user manual context."
- `keywords`: ["Design", "File", "instance0", "Structure"]
- `anchor`: "Figure 1. WDG instance0"
- `confidence`: `0.91`
- `quality_flags`: []

### FIG-0008-002
- `source_figure_number`: `Figure 2`
- `generated_figure_number`: `None`
- `caption`: `Figure 2. WDG instance1`
- `physical_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.2 File Structure"
- `bbox`: `[90.0, 583.92, 505.27, 758.82]`
- `image_type`: `formal_figure`
- `semantic_description`: "Formal source figure `Figure 2` showing WDG instance1 in the WDG user manual context."
- `keywords`: ["Design", "File", "instance1", "Structure"]
- `anchor`: "Figure 2. WDG instance1"
- `confidence`: `0.91`
- `quality_flags`: []

### FIG-0009-003
- `source_figure_number`: `Figure 3`
- `generated_figure_number`: `None`
- `caption`: `Figure 3. WDG instance2`
- `physical_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"
- `bbox`: `[88.4, 59.83, 506.85, 236.03]`
- `image_type`: `formal_figure`
- `semantic_description`: "Formal source figure `Figure 3` showing WDG instance2 in the WDG user manual context."
- `keywords`: ["Macros", "Design", "instance2", "Wdg_Version"]
- `anchor`: "Figure 3. WDG instance2"
- `confidence`: `0.91`
- `quality_flags`: []

### FIG-0015-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0015-001`
- `caption`: `None`
- `physical_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `bbox`: `[112.25, 493.82, 559.3, 569.62]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType`."
- `keywords`: ["Design", "diagram", "screenshot", "Structures", "Wdg_LLDConfigType"]
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode."
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0015-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0015-002`
- `caption`: `None`
- `physical_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"
- `bbox`: `[112.25, 697.68, 559.3, 777.93]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType`."
- `keywords`: ["Design", "diagram", "screenshot", "Structures", "Wdg_LLDConfigType"]
- `anchor`: "Pointer to Watchdog Specific implementation details in each mode."
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0016-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0016-001`
- `caption`: `None`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[112.25, 201.66, 399.11, 229.89]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance1"]
- `anchor`: "Parameters"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0016-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0016-002`
- `caption`: `None`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[112.25, 358.23, 372.98, 376.38]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance1"]
- `anchor`: "Parameters"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0016-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0016-003`
- `caption`: `None`
- `physical_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"
- `bbox`: `[112.25, 530.15, 559.3, 605.95]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance1"]
- `anchor`: "Parameters"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0017-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0017-001`
- `caption`: `None`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[112.25, 37.4, 559.3, 117.65]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance2"]
- `anchor`: "Diagram"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0017-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0017-002`
- `caption`: `None`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[112.25, 279.59, 385.26, 307.51]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance2"]
- `anchor`: "Diagram"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0017-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0017-003`
- `caption`: `None`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[112.25, 435.3, 367.94, 453.1]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance2"]
- `anchor`: "Diagram"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0017-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0017-004`
- `caption`: `None`
- `physical_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"
- `bbox`: `[112.25, 606.88, 558.5, 696.88]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_Instance2"]
- `anchor`: "Diagram"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0018-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0018-001`
- `caption`: `None`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[112.25, 89.21, 558.5, 194.96]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_HLD"]
- `anchor`: "2.7.3.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0018-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0018-002`
- `caption`: `None`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[112.25, 356.9, 380.72, 388.7]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_HLD"]
- `anchor`: "2.7.3.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0018-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0018-003`
- `caption`: `None`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[112.25, 516.77, 367.96, 538.47]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_HLD"]
- `anchor`: "2.7.3.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0018-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0018-004`
- `caption`: `None`
- `physical_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[112.25, 675.36, 559.3, 762.56]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_HLD"]
- `anchor`: "2.7.3.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0019-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0019-001`
- `caption`: `None`
- `physical_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[112.25, 164.96, 559.3, 257.81]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_HLD"]
- `anchor`: "pConfigPtr"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0019-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0019-002`
- `caption`: `None`
- `physical_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"
- `bbox`: `[112.25, 437.19, 424.01, 517.44]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_HLD"]
- `anchor`: "pConfigPtr"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0020-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0020-001`
- `caption`: `None`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 131.91, 447.5, 275.91]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "2.7.5"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0020-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0020-002`
- `caption`: `None`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 438.35, 327.65, 460.8]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "2.7.5"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0020-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0020-003`
- `caption`: `None`
- `physical_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 588.87, 361.65, 611.32]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "2.7.5"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0021-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0021-001`
- `caption`: `None`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 54.83, 334.5, 100.25]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0021-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0021-002`
- `caption`: `None`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 373.45, 424.01, 422.27]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0021-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0021-003`
- `caption`: `None`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 567.56, 310.4, 588.79]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0021-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0021-004`
- `caption`: `None`
- `physical_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"
- `bbox`: `[112.25, 734.06, 338.93, 756.67]`
- `image_type`: `embedded_image`
- `semantic_description`: "Generated visual anchor for embedded image under `Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c`."
- `keywords`: ["Functions", "API", "Design", "diagram", "screenshot", "Wdg_LLD"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0022-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0022-001`
- `caption`: `None`
- `physical_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `bbox`: `[112.25, 164.96, 338.96, 187.26]`
- `image_type`: `sequence_diagram`
- `semantic_description`: "Generated visual anchor for WDG API sequence diagram or data-exchange diagram under `Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode`."
- `keywords`: ["API", "Condition", "Design", "Diagram", "diagram", "Initialization", "Mode", "screenshot"]
- `anchor`: "pWdog"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0022-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0022-002`
- `caption`: `None`
- `physical_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"
- `bbox`: `[36.0, 327.11, 559.3, 685.76]`
- `image_type`: `sequence_diagram`
- `semantic_description`: "Generated visual anchor for WDG API sequence diagram or data-exchange diagram under `Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode`."
- `keywords`: ["API", "Condition", "Design", "Diagram", "diagram", "Initialization", "Mode", "screenshot"]
- `anchor`: "pWdog"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0023-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0023-001`
- `caption`: `None`
- `physical_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware"
- `bbox`: `[36.0, 56.66, 559.27, 435.77]`
- `image_type`: `sequence_diagram`
- `semantic_description`: "Generated visual anchor for WDG API sequence diagram or data-exchange diagram under `Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware`."
- `keywords`: ["API", "between", "Data", "Design", "Diagram", "diagram", "Exchange", "screenshot"]
- `anchor`: "2.8.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0024-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0024-001`
- `caption`: `None`
- `physical_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[36.0, 139.7, 559.3, 342.65]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`."
- `keywords`: ["Containers", "diagram", "IMPLEMENTATION_CONFIG_VARIANT", "Items", "screenshot", "Tresos", "Variables"]
- `anchor`: "Chapter 3 Tresos Configuration Items"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0024-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0024-002`
- `caption`: `None`
- `physical_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[112.25, 453.43, 394.9, 473.53]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`."
- `keywords`: ["Containers", "diagram", "IMPLEMENTATION_CONFIG_VARIANT", "Items", "screenshot", "Tresos", "Variables"]
- `anchor`: "Chapter 3 Tresos Configuration Items"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0024-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0024-003`
- `caption`: `None`
- `physical_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[112.25, 672.37, 423.35, 719.62]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT`."
- `keywords`: ["Containers", "diagram", "IMPLEMENTATION_CONFIG_VARIANT", "Items", "screenshot", "Tresos", "Variables"]
- `anchor`: "Chapter 3 Tresos Configuration Items"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0025-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0025-001`
- `caption`: `None`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 147.02, 442.92, 169.6]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0025-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0025-002`
- `caption`: `None`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 331.91, 444.26, 352.53]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0025-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0025-003`
- `caption`: `None`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 500.24, 366.5, 538.07]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0025-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0025-004`
- `caption`: `None`
- `physical_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 718.16, 310.45, 734.28]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0026-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0026-001`
- `caption`: `None`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 131.47, 559.3, 147.02]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0026-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0026-002`
- `caption`: `None`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 326.4, 352.25, 346.2]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0026-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0026-003`
- `caption`: `None`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 528.72, 254.05, 542.61]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0026-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0026-004`
- `caption`: `None`
- `physical_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 688.02, 452.43, 706.89]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0027-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0027-001`
- `caption`: `None`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 129.08, 452.73, 146.82]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "3.2.3.6"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0027-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0027-002`
- `caption`: `None`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 292.59, 452.36, 310.87]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "3.2.3.6"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0027-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0027-003`
- `caption`: `None`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 473.03, 452.04, 491.5]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "3.2.3.6"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0027-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0027-004`
- `caption`: `None`
- `physical_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"
- `bbox`: `[112.25, 636.62, 452.1, 653.62]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgGeneral"]
- `anchor`: "3.2.3.6"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0028-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0028-001`
- `caption`: `None`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[114.27, 88.71, 340.96, 107.83]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0028-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0028-002`
- `caption`: `None`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 256.54, 346.85, 297.34]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0028-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0028-003`
- `caption`: `None`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 442.84, 509.24, 464.41]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0028-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0028-004`
- `caption`: `None`
- `physical_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 609.49, 508.98, 631.12]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0029-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0029-001`
- `caption`: `None`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 71.77, 313.57, 89.57]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "True: Enable watchdog instance interrupt function;"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0029-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0029-002`
- `caption`: `None`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 235.07, 471.91, 255.16]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "True: Enable watchdog instance interrupt function;"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0029-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0029-003`
- `caption`: `None`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 400.13, 508.72, 419.12]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "True: Enable watchdog instance interrupt function;"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0029-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0029-004`
- `caption`: `None`
- `physical_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 598.06, 409.12, 660.52]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "True: Enable watchdog instance interrupt function;"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0030-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0030-001`
- `caption`: `None`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 89.21, 367.46, 133.38]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.7"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0030-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0030-002`
- `caption`: `None`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 278.66, 543.62, 296.99]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.7"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0030-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0030-003`
- `caption`: `None`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 442.17, 517.11, 460.86]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.7"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0030-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0030-004`
- `caption`: `None`
- `physical_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 641.05, 424.12, 658.44]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.7"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0031-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0031-001`
- `caption`: `None`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 89.4, 310.13, 105.77]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0031-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0031-002`
- `caption`: `None`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 285.03, 424.29, 302.62]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0031-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0031-003`
- `caption`: `None`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 549.16, 546.53, 567.68]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0031-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0031-004`
- `caption`: `None`
- `physical_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 746.54, 516.82, 764.32]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0032-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0032-001`
- `caption`: `None`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 164.96, 533.95, 184.23]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Type"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0032-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0032-002`
- `caption`: `None`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 330.85, 517.36, 347.4]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Type"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0032-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0032-003`
- `caption`: `None`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 526.72, 423.68, 543.45]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Type"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0032-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0032-004`
- `caption`: `None`
- `physical_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 722.6, 509.5, 741.78]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Type"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0033-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0033-001`
- `caption`: `None`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 181.84, 424.33, 198.74]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Label"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0033-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0033-002`
- `caption`: `None`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 377.72, 310.98, 395.65]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Label"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0033-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0033-003`
- `caption`: `None`
- `physical_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 592.03, 548.68, 611.43]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Label"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0034-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0034-001`
- `caption`: `None`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 37.4, 384.96, 82.96]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0034-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0034-002`
- `caption`: `None`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 261.92, 281.98, 280.11]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0034-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0034-003`
- `caption`: `None`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 425.43, 359.05, 463.63]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0034-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0034-004`
- `caption`: `None`
- `physical_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 610.67, 519.41, 626.08]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0035-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0035-001`
- `caption`: `None`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 37.4, 544.06, 56.09]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0035-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0035-002`
- `caption`: `None`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 238.76, 416.91, 252.64]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0035-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0035-003`
- `caption`: `None`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 431.94, 310.59, 450.8]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0035-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0035-004`
- `caption`: `None`
- `physical_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 630.96, 423.36, 646.77]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Screenshot"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0036-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0036-001`
- `caption`: `None`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 156.46, 554.19, 174.98]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0036-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0036-002`
- `caption`: `None`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 354.33, 532.78, 370.87]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0036-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0036-003`
- `caption`: `None`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 516.72, 508.2, 533.22]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0036-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0036-004`
- `caption`: `None`
- `physical_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 680.26, 508.43, 695.8]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Description"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0037-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0037-001`
- `caption`: `None`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 124.67, 424.34, 140.12]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.9.10"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0037-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0037-002`
- `caption`: `None`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 319.4, 534.89, 338.58]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.9.10"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0037-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0037-003`
- `caption`: `None`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 520.12, 424.08, 535.33]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.9.10"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0037-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0037-004`
- `caption`: `None`
- `physical_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 714.6, 310.98, 732.54]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "3.2.4.9.10"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0038-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0038-001`
- `caption`: `None`
- `physical_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"
- `bbox`: `[112.25, 180.9, 542.16, 200.16]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig`."
- `keywords`: ["Containers", "diagram", "Items", "screenshot", "Tresos", "Variables", "WdgSettingsConfig"]
- `anchor`: "Default"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0039-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0039-001`
- `caption`: `None`
- `physical_pages`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[223.72, 145.7, 385.12, 215.9]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`."
- `keywords`: ["Constraint", "diagram", "Guides", "Item", "screenshot"]
- `anchor`: "Chapter 4 Configuration Guides"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0039-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0039-002`
- `caption`: `None`
- `physical_pages`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 268.08, 559.3, 395.03]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`."
- `keywords`: ["Constraint", "diagram", "Guides", "Item", "screenshot"]
- `anchor`: "Chapter 4 Configuration Guides"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0039-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0039-003`
- `caption`: `None`
- `physical_pages`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[36.0, 503.72, 559.3, 564.02]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`."
- `keywords`: ["Constraint", "diagram", "Guides", "Item", "screenshot"]
- `anchor`: "Chapter 4 Configuration Guides"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0039-004
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0039-004`
- `caption`: `None`
- `physical_pages`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[65.93, 570.02, 529.37, 765.52]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint`."
- `keywords`: ["Constraint", "diagram", "Guides", "Item", "screenshot"]
- `anchor`: "Chapter 4 Configuration Guides"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0040-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0040-001`
- `caption`: `None`
- `physical_pages`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `bbox`: `[36.0, 214.86, 559.3, 396.56]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps`."
- `keywords`: ["Common", "diagram", "Guides", "screenshot", "Steps", "Usage"]
- `anchor`: "4.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0040-002
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0040-002`
- `caption`: `None`
- `physical_pages`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `bbox`: `[36.0, 402.56, 559.3, 521.91]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps`."
- `keywords`: ["Common", "diagram", "Guides", "screenshot", "Steps", "Usage"]
- `anchor`: "4.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0040-003
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0040-003`
- `caption`: `None`
- `physical_pages`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `bbox`: `[36.0, 550.85, 559.3, 670.85]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps`."
- `keywords`: ["Common", "diagram", "Guides", "screenshot", "Steps", "Usage"]
- `anchor`: "4.2"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

### FIG-0041-001
- `source_figure_number`: `None`
- `generated_figure_number`: `Internal Figure FIG-0041-001`
- `caption`: `None`
- `physical_pages`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `bbox`: `[36.0, 36.9, 559.3, 211.99]`
- `image_type`: `configuration_screenshot`
- `semantic_description`: "Generated visual anchor for WDG Tresos configuration screenshot/property block under `Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps`."
- `keywords`: ["Common", "diagram", "Guides", "screenshot", "Steps", "Usage"]
- `anchor`: "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps"
- `confidence`: `0.78`
- `quality_flags`: ["generated_internal_figure_id", "no_source_caption"]

## 8. Term / API / Config / Requirement Index

### TERM-FC7XXX
- `name`: `FC7xxx`
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.1 Rejected Requirements", "Cover", "Revision History", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p1`: "FC7xxx WDG User Manual"
  - `p2`: "FC7xxx WDG User Manual"
  - `p3`: "FC7xxx WDG User Manual"
- `aliases`: []

### TERM-WDG
- `name`: `WDG`
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.1 Rejected Requirements", "Cover", "Revision History", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p1`: "FC7xxx WDG User Manual"
  - `p2`: "FC7xxx WDG User Manual"
  - `p3`: "FC7xxx WDG User Manual"
- `aliases`: []

### TERM-FC7240
- `name`: `FC7240`
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2`
- `section_paths`: ["Revision History"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p2`: "- Added support for FC7240"
- `aliases`: []

### TERM-MCAL
- `name`: `MCAL`
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2`
- `section_paths`: ["Revision History"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p2`: "Initial release for MCAL V0.1.0"
- `aliases`: []

### TERM-WATCHDOG
- `name`: `Watchdog`
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,5,15,22,23,32,33,36,38`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType", "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode", "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Data Exchange between Watchdog Driver and Hardware", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p3`: "Watchdog Initialization, Setting Trigger Condition and Mode................................................................ 22"
  - `p5`: "Watchdog Initialization, Setting Trigger Condition and Mode................................................................ 22"
  - `p15`: "Watchdog Initialization, Setting Trigger Condition and Mode................................................................ 22"
- `aliases`: []

### CFG-WDG-CFG
- `name`: `Wdg_cfg`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Table of Contents"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p3`: "Macros in Wdg_cfg.h .................................................................................................................................. 10"
  - `p10`: "Macros in Wdg_cfg.h .................................................................................................................................. 10"
- `aliases`: []

### FILE-WDG-CFG-H
- `name`: `Wdg_cfg.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Macros in Wdg_cfg.h .................................................................................................................................. 10"
  - `p10`: "Macros in Wdg_cfg.h .................................................................................................................................. 10"
- `aliases`: []

### TYPE-WDG-CONFIGTYPE
- `name`: `Wdg_ConfigType`
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,14,15,16,17,18`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c", "Table of Contents"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p3`: "Wdg_ConfigType ........................................................................................................................................ 14"
  - `p14`: "Wdg_ConfigType ........................................................................................................................................ 14"
  - `p15`: "Wdg_ConfigType ........................................................................................................................................ 14"
- `aliases`: []

### FUNC-WDG-HLD
- `name`: `Wdg_HLD`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: `3,10,13,14,18`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c", "Table of Contents"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p3`: "Macros in Wdg_HLD.h ................................................................................................................................ 10"
  - `p10`: "Macros in Wdg_HLD.h ................................................................................................................................ 10"
  - `p13`: "Macros in Wdg_HLD.h ................................................................................................................................ 10"
- `aliases`: []

### FILE-WDG-HLD-C
- `name`: `Wdg_HLD.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,13,18`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Enumerations in Wdg_HLD.c .................................................................................................................... 13"
  - `p13`: "Enumerations in Wdg_HLD.c .................................................................................................................... 13"
  - `p18`: "Enumerations in Wdg_HLD.c .................................................................................................................... 13"
- `aliases`: []

### FILE-WDG-HLD-H
- `name`: `Wdg_HLD.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,10,13,14`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Macros in Wdg_HLD.h ................................................................................................................................ 10"
  - `p10`: "Macros in Wdg_HLD.h ................................................................................................................................ 10"
  - `p13`: "Macros in Wdg_HLD.h ................................................................................................................................ 10"
- `aliases`: []

### API-WDG-HWA
- `name`: `Wdg_HWA`
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c", "Table of Contents"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p3`: "Functions in Wdg_HWA.c. .......................................................................................................................... 20"
  - `p20`: "Functions in Wdg_HWA.c. .......................................................................................................................... 20"
- `aliases`: []

### FILE-WDG-HWA-C
- `name`: `Wdg_HWA.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Functions in Wdg_HWA.c. .......................................................................................................................... 20"
  - `p20`: "Functions in Wdg_HWA.c. .......................................................................................................................... 20"
- `aliases`: []

### API-WDG-INSTANCE0
- `name`: `Wdg_Instance0`
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,15`
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType", "Table of Contents"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p3`: "Functions in Wdg_Instance0.c .................................................................................................................. 15"
  - `p15`: "Functions in Wdg_Instance0.c .................................................................................................................. 15"
- `aliases`: []

### FILE-WDG-INSTANCE0-C
- `name`: `Wdg_Instance0.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,15`
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Functions in Wdg_Instance0.c .................................................................................................................. 15"
  - `p15`: "Functions in Wdg_Instance0.c .................................................................................................................. 15"
- `aliases`: []

### API-WDG-INSTANCE1
- `name`: `Wdg_Instance1`
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,16`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c", "Table of Contents"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p3`: "Functions in Wdg_Instance1.c .................................................................................................................. 16"
  - `p16`: "Functions in Wdg_Instance1.c .................................................................................................................. 16"
- `aliases`: []

### FILE-WDG-INSTANCE1-C
- `name`: `Wdg_Instance1.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,16`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Functions in Wdg_Instance1.c .................................................................................................................. 16"
  - `p16`: "Functions in Wdg_Instance1.c .................................................................................................................. 16"
- `aliases`: []

### API-WDG-INSTANCE2
- `name`: `Wdg_Instance2`
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c", "Table of Contents"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p3`: "Functions in Wdg_Instance2.c .................................................................................................................. 17"
  - `p17`: "Functions in Wdg_Instance2.c .................................................................................................................. 17"
- `aliases`: []

### FILE-WDG-INSTANCE2-C
- `name`: `Wdg_Instance2.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,17`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Functions in Wdg_Instance2.c .................................................................................................................. 17"
  - `p17`: "Functions in Wdg_Instance2.c .................................................................................................................. 17"
- `aliases`: []

### FUNC-WDG-LLD
- `name`: `Wdg_LLD`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: `3,9,13,20`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c", "Table of Contents"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p3`: "Macros in Wdg_LLD.c ................................................................................................................................... 9"
  - `p9`: "Macros in Wdg_LLD.c ................................................................................................................................... 9"
  - `p13`: "Macros in Wdg_LLD.c ................................................................................................................................... 9"
- `aliases`: []

### FILE-WDG-LLD-C
- `name`: `Wdg_LLD.c`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,9,20`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Macros in Wdg_LLD.c ................................................................................................................................... 9"
  - `p9`: "Macros in Wdg_LLD.c ................................................................................................................................... 9"
  - `p20`: "Macros in Wdg_LLD.c ................................................................................................................................... 9"
- `aliases`: []

### FILE-WDG-LLD-H
- `name`: `Wdg_LLD.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Enumerations in Wdg_LLD.h ..................................................................................................................... 13"
  - `p13`: "Enumerations in Wdg_LLD.h ..................................................................................................................... 13"
- `aliases`: []

### FUNC-WDG-LLDCONFIGTYPE
- `name`: `Wdg_LLDConfigType`
- `type`: `function`
- `primary_page`: `3`
- `physical_pages`: `3,15,20`
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c", "Table of Contents"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p3`: "Wdg_LLDConfigType ................................................................................................................................. 15"
  - `p15`: "Wdg_LLDConfigType ................................................................................................................................. 15"
  - `p20`: "Wdg_LLDConfigType ................................................................................................................................. 15"
- `aliases`: []

### CFG-WDG-VERSION
- `name`: `Wdg_Version`
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h", "Table of Contents"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p3`: "Macros in Wdg_Version.h ............................................................................................................................ 9"
  - `p9`: "Macros in Wdg_Version.h ............................................................................................................................ 9"
- `aliases`: []

### FILE-WDG-VERSION-H
- `name`: `Wdg_Version.h`
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h", "Table of Contents"]
- `brief`: "Source/header/configuration file path referenced for WDG build or integration."
- `anchors`:
  - `p3`: "Macros in Wdg_Version.h ............................................................................................................................ 9"
  - `p9`: "Macros in Wdg_Version.h ............................................................................................................................ 9"
- `aliases`: []

### TERM-COMMON
- `name`: `Common`
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,40`
- `section_paths`: ["Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p4`: "WDG Usage Common Steps .......................................................................................................................... 40"
  - `p40`: "WDG Usage Common Steps .......................................................................................................................... 40"
- `aliases`: []

### TERM-DEM
- `name`: `Dem`
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,24,25,40`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral", "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps", "Table of Contents"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p4`: "WdgDemEventParameterRefs................................................................................................................... 24"
  - `p24`: "WdgDemEventParameterRefs................................................................................................................... 24"
  - `p25`: "WdgDemEventParameterRefs................................................................................................................... 24"
- `aliases`: []

### CFG-WDGDEMEVENTPARAMETERREFS
- `name`: `WdgDemEventParameterRefs`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,24`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT", "Table of Contents"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p4`: "WdgDemEventParameterRefs................................................................................................................... 24"
  - `p24`: "WdgDemEventParameterRefs................................................................................................................... 24"
- `aliases`: []

### CFG-WDGGENERAL
- `name`: `WdgGeneral`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,25`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral", "Table of Contents"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p4`: "WdgGeneral ................................................................................................................................................ 25"
  - `p25`: "WdgGeneral ................................................................................................................................................ 25"
- `aliases`: []

### CFG-WDGSETTINGSCONFIG
- `name`: `WdgSettingsConfig`
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,28,40`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig", "Chapter 4 Configuration Guides / 4.2 WDG Usage Common Steps", "Table of Contents"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p4`: "WdgSettingsConfig .................................................................................................................................... 28"
  - `p28`: "WdgSettingsConfig .................................................................................................................................... 28"
  - `p40`: "WdgSettingsConfig .................................................................................................................................... 28"
- `aliases`: []

### TERM-AUTOSAR
- `name`: `AUTOSAR`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "The design of this module follows the specifications of the WDG driver specified in AUTOSAR Classic Platform Release 4.6.0."
- `aliases`: []

### TERM-AUTOSAR-CLASSIC-PLATFORM
- `name`: `AUTOSAR Classic Platform`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "The design of this module follows the specifications of the WDG driver specified in AUTOSAR Classic Platform Release 4.6.0."
- `aliases`: []

### TERM-FC7300
- `name`: `FC7300`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,11`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "WDOG0 and WDOG1 are available on both FC7300 and FC7300, and WDOG2 is only available on FC7300."
  - `p11`: "WDOG0 and WDOG1 are available on both FC7300 and FC7300, and WDOG2 is only available on FC7300."
- `aliases`: []

### TERM-WDOG
- `name`: `WDOG`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,9,12,13,14,15,20,21,22,28,30,31,32,35,36,37`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing", "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h", "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "The Watchdog Timer (WDOG) module is an independent timer that is available for system use. It provides a safety feature to"
  - `p9`: "The Watchdog Timer (WDOG) module is an independent timer that is available for system use. It provides a safety feature to"
  - `p12`: "The Watchdog Timer (WDOG) module is an independent timer that is available for system use. It provides a safety feature to"
- `aliases`: []

### TERM-WDOG0
- `name`: `WDOG0`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,28`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "WDOG0 and WDOG1 are available on both FC7300 and FC7300, and WDOG2 is only available on FC7300."
  - `p28`: "WDOG0 and WDOG1 are available on both FC7300 and FC7300, and WDOG2 is only available on FC7300."
- `aliases`: []

### TERM-WDOG1
- `name`: `WDOG1`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "WDOG0 and WDOG1 are available on both FC7300 and FC7300, and WDOG2 is only available on FC7300."
- `aliases`: []

### TERM-WDOG2
- `name`: `WDOG2`
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `section_paths`: ["Chapter 1 WDG Introduction / 1.1 Requirement Tracing"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p5`: "WDOG0 and WDOG1 are available on both FC7300 and FC7300, and WDOG2 is only available on FC7300."
- `aliases`: []

### REQ-SWS-WDG-00055
- `name`: `SWS_Wdg_00055`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p6`: "Rejected Requirement 4 SWS_Wdg_00055"
- `aliases`: []

### REQ-SWS-WDG-00076
- `name`: `SWS_Wdg_00076`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p6`: "Rejected Requirement 5 SWS_Wdg_00076"
- `aliases`: []

### REQ-SWS-WDG-00093
- `name`: `SWS_Wdg_00093`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p6`: "Rejected Requirement 1 SWS_Wdg_00093"
- `aliases`: []

### REQ-SWS-WDG-00094
- `name`: `SWS_Wdg_00094`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p6`: "Rejected Requirement 2 SWS_Wdg_00094"
- `aliases`: []

### REQ-SWS-WDG-00095
- `name`: `SWS_Wdg_00095`
- `type`: `requirement`
- `primary_page`: `6`
- `physical_pages`: `6`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p6`: "Rejected Requirement 3 SWS_Wdg_00095"
- `aliases`: []

### REQ-ECUC-WDG-00112
- `name`: `ECUC_Wdg_00112`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p7`: "Rejected Requirement 9 ECUC_Wdg_00112"
- `aliases`: []

### REQ-ECUC-WDG-00113
- `name`: `ECUC_Wdg_00113`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p7`: "Rejected Requirement 10 ECUC_Wdg_00113"
- `aliases`: []

### REQ-SWS-WDG-000172
- `name`: `SWS_Wdg_000172`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p7`: "Rejected Requirement 8 SWS_Wdg_000172"
- `aliases`: []

### REQ-SWS-WDG-00077
- `name`: `SWS_Wdg_00077`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p7`: "Rejected Requirement 6 SWS_Wdg_00077"
- `aliases`: []

### REQ-SWS-WDG-00078
- `name`: `SWS_Wdg_00078`
- `type`: `requirement`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "AUTOSAR SWS/ECUC requirement identifier referenced by the WDG document."
- `anchors`:
  - `p7`: "Rejected Requirement 7 SWS_Wdg_00078"
- `aliases`: []

### CFG-WDGEXTERNALCONFIGURATION
- `name`: `WdgExternalConfiguration`
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p7`: "Container Name - WdgExternalConfiguration -"
- `aliases`: []

### CFG-WDGEXTERNALCONTAINERREF
- `name`: `WdgExternalContainerRef`
- `type`: `config`
- `primary_page`: `7`
- `physical_pages`: `7,29`
- `section_paths`: ["Chapter 2 Software Design / 2.1 Rejected Requirements", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p7`: "WdgExternalContainerRef"
  - `p29`: "WdgExternalContainerRef"
- `aliases`: []

### MACRO-WDG-AR-RELEASE-MAJOR-VERSION
- `name`: `WDG_AR_RELEASE_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-WDG-AR-RELEASE-MINOR-VERSION
- `name`: `WDG_AR_RELEASE_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-WDG-AR-RELEASE-REVISION-VERSION
- `name`: `WDG_AR_RELEASE_REVISION_VERSION`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-WDG-MODULE-ID
- `name`: `WDG_MODULE_ID`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_MODULE_ID 102"
- `aliases`: []

### MACRO-WDG-PRESCALER-SHIFT-VALUE
- `name`: `WDG_PRESCALER_SHIFT_VALUE`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_PRESCALER_SHIFT_VALUE (uint16)(8U)"
- `aliases`: []

### MACRO-WDG-RECONFIGURATION-TIMEOUT
- `name`: `WDG_RECONFIGURATION_TIMEOUT`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_RECONFIGURATION_TIMEOUT (uint32)(65535U)"
- `aliases`: []

### MACRO-WDG-SW-MAJOR-VERSION
- `name`: `WDG_SW_MAJOR_VERSION`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-WDG-SW-MINOR-VERSION
- `name`: `WDG_SW_MINOR_VERSION`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_SW_MINOR_VERSION 6"
- `aliases`: []

### MACRO-WDG-SW-PATCH-VERSION
- `name`: `WDG_SW_PATCH_VERSION`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-WDG-VENDOR-ID
- `name`: `WDG_VENDOR_ID`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDG_VENDOR_ID 174"
- `aliases`: []

### MACRO-WDOG-REFRESH-CMD
- `name`: `WDOG_REFRESH_CMD`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDOG_REFRESH_CMD (uint32)(0x20CFFC20U)"
- `aliases`: []

### MACRO-WDOG-UNLOCK-CMD
- `name`: `WDOG_UNLOCK_CMD`
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in Wdg_Version.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p9`: "#define WDOG_UNLOCK_CMD (uint32)(0x08181982U)"
- `aliases`: []

### TERM-GPT
- `name`: `Gpt`
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10,14,29,39`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig", "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p10`: "API service ID for Wdg_Cbk_GptNotification0 function"
  - `p14`: "API service ID for Wdg_Cbk_GptNotification0 function"
  - `p29`: "API service ID for Wdg_Cbk_GptNotification0 function"
- `aliases`: []

### FUNC-WDG-CBK-GPTNOTIFICATION0
- `name`: `Wdg_Cbk_GptNotification0`
- `type`: `function`
- `primary_page`: `10`
- `physical_pages`: `10,39`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p10`: "API service ID for Wdg_Cbk_GptNotification0 function"
  - `p39`: "API service ID for Wdg_Cbk_GptNotification0 function"
- `aliases`: []

### MACRO-WDG-E-DRIVER-STATE
- `name`: `WDG_E_DRIVER_STATE`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_E_DRIVER_STATE ((uint8)0x10U)"
- `aliases`: []

### MACRO-WDG-E-INIT-FAILED
- `name`: `WDG_E_INIT_FAILED`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_E_INIT_FAILED ((uint8)0x15U)"
- `aliases`: []

### MACRO-WDG-E-PARAM-CONFIG
- `name`: `WDG_E_PARAM_CONFIG`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_E_PARAM_CONFIG ((uint8)0x12U)"
- `aliases`: []

### MACRO-WDG-E-PARAM-MODE
- `name`: `WDG_E_PARAM_MODE`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_E_PARAM_MODE ((uint8)0x11U)"
- `aliases`: []

### MACRO-WDG-E-PARAM-POINTER
- `name`: `WDG_E_PARAM_POINTER`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_E_PARAM_POINTER ((uint8)0x14U)"
- `aliases`: []

### MACRO-WDG-E-PARAM-TIMEOUT
- `name`: `WDG_E_PARAM_TIMEOUT`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_E_PARAM_TIMEOUT ((uint8)0x13U)"
- `aliases`: []

### MACRO-WDG-GETVERSION-ID
- `name`: `WDG_GETVERSION_ID`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_GETVERSION_ID ((uint8)0x04U)"
- `aliases`: []

### MACRO-WDG-INIT-ID
- `name`: `WDG_INIT_ID`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_INIT_ID ((uint8)0x00U)"
- `aliases`: []

### MACRO-WDG-INSTANCE0
- `name`: `WDG_INSTANCE0`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_INSTANCE0 (STD_ON)"
- `aliases`: []

### MACRO-WDG-INSTANCE1
- `name`: `WDG_INSTANCE1`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_INSTANCE1 (STD_ON)"
- `aliases`: []

### MACRO-WDG-INSTANCE2
- `name`: `WDG_INSTANCE2`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_INSTANCE2 (STD_OFF)"
- `aliases`: []

### API-WDG-INSTANCEX-GETVERSIONINFO
- `name`: `Wdg_Instancex_GetVersionInfo`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "API service ID for Wdg_Instancex_GetVersionInfo function (x=0,1)"
- `aliases`: []

### API-WDG-INSTANCEX-INIT
- `name`: `Wdg_Instancex_Init`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "API service ID for Wdg_Instancex_Init function (x=0,1)"
- `aliases`: []

### API-WDG-INSTANCEX-SETMODE
- `name`: `Wdg_Instancex_SetMode`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "API service ID for Wdg_Instancex_SetMode function (x=0,1)"
- `aliases`: []

### API-WDG-INSTANCEX-SETTRIGGERCONDITION
- `name`: `Wdg_Instancex_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p10`: "API service ID for Wdg_Instancex_SetTriggerCondition function (x=0,1)"
- `aliases`: []

### MACRO-WDG-SETMODE-ID
- `name`: `WDG_SETMODE_ID`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_SETMODE_ID ((uint8)0x01U)"
- `aliases`: []

### MACRO-WDG-SETTRIGGERCONDITION-ID
- `name`: `WDG_SETTRIGGERCONDITION_ID`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_SETTRIGGERCONDITION_ID ((uint8)0x02U)"
- `aliases`: []

### MACRO-WDG-TRIGGER-ID
- `name`: `WDG_TRIGGER_ID`
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h", "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p10`: "#define WDG_TRIGGER_ID ((uint8)0x03U)"
  - `p13`: "#define WDG_TRIGGER_ID ((uint8)0x03U)"
- `aliases`: []

### MACRO-WDG-DEV-ERROR-DETECT
- `name`: `WDG_DEV_ERROR_DETECT`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-WDG-DISABLE-ALLOWED
- `name`: `WDG_DISABLE_ALLOWED`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_DISABLE_ALLOWED (STD_OFF)"
- `aliases`: []

### MACRO-WDG-DISABLE-DEM-REPORT-ERROR-STATUS
- `name`: `WDG_DISABLE_DEM_REPORT_ERROR_STATUS`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_DISABLE_DEM_REPORT_ERROR_STATUS (STD_ON)"
- `aliases`: []

### MACRO-WDG-EXTERNAL-MODULE-DIO
- `name`: `WDG_EXTERNAL_MODULE_DIO`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_EXTERNAL_MODULE_DIO (2U)"
- `aliases`: []

### MACRO-WDG-EXTERNAL-MODULE-SPI
- `name`: `WDG_EXTERNAL_MODULE_SPI`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_EXTERNAL_MODULE_SPI (1U)"
- `aliases`: []

### MACRO-WDG-INSTANCE0-INITIAL-TIMEOUT-U32
- `name`: `WDG_INSTANCE0_INITIAL_TIMEOUT_U32`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_INSTANCE0_INITIAL_TIMEOUT_U32 ((uint16)30)"
  - `p12`: "#define WDG_INSTANCE0_INITIAL_TIMEOUT_U32 ((uint16)30)"
- `aliases`: []

### MACRO-WDG-INSTANCE1-INITIAL-TIMEOUT-U32
- `name`: `WDG_INSTANCE1_INITIAL_TIMEOUT_U32`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_INSTANCE1_INITIAL_TIMEOUT_U32 ((uint16)30)"
  - `p12`: "#define WDG_INSTANCE1_INITIAL_TIMEOUT_U32 ((uint16)30)"
- `aliases`: []

### MACRO-WDG-INTERNAL-MODULE
- `name`: `WDG_INTERNAL_MODULE`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_INTERNAL_MODULE (0U)"
- `aliases`: []

### MACRO-WDG-NO-OF-INSTANCES
- `name`: `WDG_NO_OF_INSTANCES`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_NO_OF_INSTANCES (3U)"
- `aliases`: []

### MACRO-WDG-TYPE
- `name`: `WDG_TYPE`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_TYPE (WDG_INTERNAL_MODULE)"
- `aliases`: []

### MACRO-WDG-VERSION-INFO-API
- `name`: `WDG_VERSION_INFO_API`
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p11`: "#define WDG_VERSION_INFO_API (STD_ON)"
- `aliases`: []

### CFG-WDGCONF-WDGGENERAL-WDGINDEX1-U8
- `name`: `WdgConf_WdgGeneral_WdgIndex1_U8`
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p11`: "WdgConf_WdgGeneral_WdgIndex1_U8 ((uint8)1)"
- `aliases`: []

### CFG-WDGCONF-WDGGENERAL-WDGINDEX2-U8
- `name`: `WdgConf_WdgGeneral_WdgIndex2_U8`
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p11`: "WdgConf_WdgGeneral_WdgIndex2_U8 ((uint8)2)"
- `aliases`: []

### CFG-WDGCONF-WDGGENERAL-WDGINDEX-U8
- `name`: `WdgConf_WdgGeneral_WdgIndex_U8`
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p11`: "WdgConf_WdgGeneral_WdgIndex_U8 ((uint8)0)"
- `aliases`: []

### MACRO-WDG-DEM-REPORT-DISABLE-REJECT
- `name`: `WDG_DEM_REPORT_DISABLE_REJECT`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_DEM_REPORT_DISABLE_REJECT (STD_OFF)"
- `aliases`: []

### MACRO-WDG-DEM-REPORT-MODE-FAIL
- `name`: `WDG_DEM_REPORT_MODE_FAIL`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_DEM_REPORT_MODE_FAIL (STD_OFF)"
- `aliases`: []

### MACRO-WDG-INSTANCE0-MAX-TIMEOUT-VALUE
- `name`: `WDG_INSTANCE0_MAX_TIMEOUT_VALUE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_INSTANCE0_MAX_TIMEOUT_VALUE ((uint16)100)"
- `aliases`: []

### MACRO-WDG-INSTANCE1-MAX-TIMEOUT-VALUE
- `name`: `WDG_INSTANCE1_MAX_TIMEOUT_VALUE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_INSTANCE1_MAX_TIMEOUT_VALUE ((uint16)100)"
- `aliases`: []

### MACRO-WDG-INSTANCE2-INITIAL-TI
- `name`: `WDG_INSTANCE2_INITIAL_TI`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "{WDG_INSTANCE0_INITIAL_TIMEOUT_U32,WDG_INSTANCE1_INITIAL_TIMEOUT_U32,WDG_INSTANCE2_INITIAL_TI"
- `aliases`: []

### MACRO-WDG-INSTANCE2-MAX-TIMEO
- `name`: `WDG_INSTANCE2_MAX_TIMEO`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "{WDG_INSTANCE0_MAX_TIMEOUT_VALUE,WDG_INSTANCE1_MAX_TIMEOUT_VALUE,WDG_INSTANCE2_MAX_TIMEO"
- `aliases`: []

### MACRO-WDG-INSTANCE2-MAX-TIMEOUT-VALUE
- `name`: `WDG_INSTANCE2_MAX_TIMEOUT_VALUE`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_INSTANCE2_MAX_TIMEOUT_VALUE ((uint16)100)"
- `aliases`: []

### MACRO-WDG-INTIAL-TIMEOUT
- `name`: `WDG_INTIAL_TIMEOUT`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_INTIAL_TIMEOUT"
- `aliases`: []

### MACRO-WDG-ISR0-USED
- `name`: `WDG_ISR0_USED`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_ISR0_USED"
- `aliases`: []

### MACRO-WDG-ISR1-USED
- `name`: `WDG_ISR1_USED`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_ISR1_USED"
- `aliases`: []

### MACRO-WDG-ISR2-USED
- `name`: `WDG_ISR2_USED`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_ISR2_USED"
- `aliases`: []

### MACRO-WDG-MAX-TIMEOUT
- `name`: `WDG_MAX_TIMEOUT`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_MAX_TIMEOUT"
- `aliases`: []

### MACRO-WDG-MAX-VALUE-TYPE16
- `name`: `WDG_MAX_VALUE_TYPE16`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDG_MAX_VALUE_TYPE16 (65535U)"
- `aliases`: []

### MACRO-WDOG-MIN-VALUE-TIMEOUT-U32
- `name`: `WDOG_MIN_VALUE_TIMEOUT_U32`
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `section_paths`: ["Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p12`: "#define WDOG_MIN_VALUE_TIMEOUT_U32 (0U)"
- `aliases`: []

### MACRO-WDG-BUSY
- `name`: `WDG_BUSY`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_BUSY = 2"
- `aliases`: []

### MACRO-WDG-HWL-INSTANCE0
- `name`: `WDG_HWL_INSTANCE0`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_HWL_INSTANCE0 = 0"
- `aliases`: []

### MACRO-WDG-HWL-INSTANCE1
- `name`: `WDG_HWL_INSTANCE1`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_HWL_INSTANCE1 = 1"
- `aliases`: []

### TYPE-WDG-HWL-INSTANCETYPE
- `name`: `Wdg_HWL_InstanceType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13,14,18,19,20`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p13`: "Wdg_HWL_InstanceType"
  - `p14`: "Wdg_HWL_InstanceType"
  - `p18`: "Wdg_HWL_InstanceType"
- `aliases`: []

### MACRO-WDG-IDLE
- `name`: `WDG_IDLE`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_IDLE = 1"
- `aliases`: []

### MACRO-WDG-MULTICORE-ENABLED
- `name`: `WDG_MULTICORE_ENABLED`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "#define WDG_MULTICORE_ENABLED (STD_OFF)"
- `aliases`: []

### MACRO-WDG-PRECOMPILE-SUPPORT
- `name`: `WDG_PRECOMPILE_SUPPORT`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "#define WDG_PRECOMPILE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-WDG-ROM
- `name`: `WDG_ROM`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "#define WDG_ROM"
- `aliases`: []

### TYPE-WDG-STATUSTYPE
- `name`: `Wdg_StatusType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p13`: "Wdg_StatusType"
- `aliases`: []

### MACRO-WDG-UNINIT
- `name`: `WDG_UNINIT`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDG_UNINIT = 0"
- `aliases`: []

### MACRO-WDOG-AON-CLK
- `name`: `WDOG_AON_CLK`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDOG_AON_CLK = 1"
- `aliases`: []

### MACRO-WDOG-BUS-CLK
- `name`: `WDOG_BUS_CLK`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDOG_BUS_CLK = 0"
- `aliases`: []

### TYPE-WDOG-CLKSELTYPE
- `name`: `WDOG_ClkSelType`
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p13`: "WDOG_ClkSelType"
- `aliases`: []

### MACRO-WDOG-CS
- `name`: `WDOG_CS`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13,14`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h", "Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDOG clock source select, mapping with WDOG_CS[CLK_SEL] bit filed definition."
  - `p14`: "WDOG clock source select, mapping with WDOG_CS[CLK_SEL] bit filed definition."
- `aliases`: []

### MACRO-WDOG-FOSC-CLK
- `name`: `WDOG_FOSC_CLK`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDOG_FOSC_CLK = 2"
- `aliases`: []

### MACRO-WDOG-SIRC-CLK
- `name`: `WDOG_SIRC_CLK`
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `section_paths`: ["Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p13`: "WDOG_SIRC_CLK = 3"
- `aliases`: []

### TYPE-WDG-CALLBACKPTRTYPE
- `name`: `Wdg_CallbackPtrType`
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,15`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p14`: "typedef void (* Wdg_CallbackPtrType) ( void );"
  - `p15`: "typedef void (* Wdg_CallbackPtrType) ( void );"
- `aliases`: []

### TYPE-WDG-HWL-CONFIGTYPE
- `name`: `Wdg_HWL_ConfigType`
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p14`: "Wdg_HWL_ConfigType* pWdgModeSettings [3]"
- `aliases`: []

### CFG-WDG-IRQ
- `name`: `Wdg_Irq`
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p14`: "Pointer to callback notification in the Wdg_Irq routine."
- `aliases`: []

### TYPE-WDGIF-MODETYPE
- `name`: `WdgIf_ModeType`
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14,15,16,18,19`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h", "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType", "Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p14`: "WdgIf_ModeType eWdgDefaultSetMode"
  - `p15`: "WdgIf_ModeType eWdgDefaultSetMode"
  - `p16`: "WdgIf_ModeType eWdgDefaultSetMode"
- `aliases`: []

### MACRO-WDOG-REACTION-INT-1024-CYCLE
- `name`: `WDOG_REACTION_INT_1024_CYCLE`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_REACTION_INT_1024_CYCLE ="
- `aliases`: []

### MACRO-WDOG-REACTION-INT-128-CYCLE
- `name`: `WDOG_REACTION_INT_128_CYCLE`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_REACTION_INT_128_CYCLE ="
- `aliases`: []

### MACRO-WDOG-REACTION-INT-256-CYCLE
- `name`: `WDOG_REACTION_INT_256_CYCLE`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_REACTION_INT_256_CYCLE ="
- `aliases`: []

### MACRO-WDOG-REACTION-INT-512-CYCLE
- `name`: `WDOG_REACTION_INT_512_CYCLE`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_REACTION_INT_512_CYCLE ="
- `aliases`: []

### TYPE-WDOG-TESTTYPE
- `name`: `WDOG_TestType`
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p14`: "WDOG_TestType"
- `aliases`: []

### TYPE-WDOG-TIMEOUTREACTIONTYPE
- `name`: `WDOG_TimeoutReactionType`
- `type`: `type`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p14`: "WDOG_TimeoutReactionType"
- `aliases`: []

### MACRO-WDOG-TST-DISABLED
- `name`: `WDOG_TST_DISABLED`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_TST_DISABLED = 0"
- `aliases`: []

### MACRO-WDOG-TST-MODE-HIGH
- `name`: `WDOG_TST_MODE_HIGH`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_TST_MODE_HIGH = 3"
- `aliases`: []

### MACRO-WDOG-TST-MODE-LOW
- `name`: `WDOG_TST_MODE_LOW`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_TST_MODE_LOW = 2"
- `aliases`: []

### MACRO-WDOG-USER-MODE
- `name`: `WDOG_USER_MODE`
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `section_paths`: ["Chapter 2 Software Design / 2.5 Typedef / 2.5.1 Typedefs in Wdg_HLD.h"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p14`: "WDOG_USER_MODE = 1"
- `aliases`: []

### API-WDG-INSTANCE0-INIT
- `name`: `Wdg_Instance0_Init`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p15`: "void Wdg_Instance0_Init(const Wdg_ConfigType* ConfigPtr)"
- `aliases`: []

### API-WDG-INSTANCE0-SETMODE
- `name`: `Wdg_Instance0_SetMode`
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15`
- `section_paths`: ["Chapter 2 Software Design / 2.6 Structures / 2.6.2 Wdg_LLDConfigType"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p15`: "Std_ReturnType Wdg_Instance0_SetMode(WdgIf_ModeType Mode)"
- `aliases`: []

### API-WDG-INSTANCE0-GETVERSIONINFO
- `name`: `Wdg_Instance0_GetVersionInfo`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: `16`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p16`: "void Wdg_Instance0_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `aliases`: []

### API-WDG-INSTANCE0-SETTRIGGERCONDITION
- `name`: `Wdg_Instance0_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: `16`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p16`: "void Wdg_Instance0_SetTriggerCondition(uint16 timeout)"
- `aliases`: []

### API-WDG-INSTANCE1-INIT
- `name`: `Wdg_Instance1_Init`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: `16`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p16`: "void Wdg_Instance1_Init(const Wdg_ConfigType* ConfigPtr)"
- `aliases`: []

### API-WDG-INSTANCE1-SETMODE
- `name`: `Wdg_Instance1_SetMode`
- `type`: `api`
- `primary_page`: `16`
- `physical_pages`: `16,18`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.2 Functions in Wdg_Instance1.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p16`: "Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)"
  - `p18`: "Std_ReturnType Wdg_Instance1_SetMode(WdgIf_ModeType Mode)"
- `aliases`: []

### API-WDG-INSTANCE1-GETVERSIONINFO
- `name`: `Wdg_Instance1_GetVersionInfo`
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17,18`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p17`: "void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)"
  - `p18`: "void Wdg_Instance1_GetVersionInfo(Std_VersionInfoType * versioninfo)"
- `aliases`: []

### API-WDG-INSTANCE1-SETTRIGGERCONDITION
- `name`: `Wdg_Instance1_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17,18`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c", "Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p17`: "void Wdg_Instance1_SetTriggerCondition(uint16 timeou)"
  - `p18`: "void Wdg_Instance1_SetTriggerCondition(uint16 timeou)"
- `aliases`: []

### API-WDG-INSTANCE2-INIT
- `name`: `Wdg_Instance2_Init`
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.3 Functions in Wdg_Instance2.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p17`: "void Wdg_Instance2_Init(const Wdg_ConfigType* ConfigPtr)"
- `aliases`: []

### API-WDG-HLD-INIT
- `name`: `Wdg_HLD_Init`
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p18`: "void Wdg_HLD_Init(const Wdg_ConfigType* pConfigPtr, const Wdg_HWL_InstanceType eInstance )"
- `aliases`: []

### API-WDG-HLD-SETMODE
- `name`: `Wdg_HLD_SetMode`
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p19`: "Std_ReturnType Wdg_HLD_SetMode(WdgIf_ModeType Mode, const Wdg_HWL_InstanceType eInstance )"
- `aliases`: []

### API-WDG-HLD-SETTRIGGERCONDITION
- `name`: `Wdg_HLD_SetTriggerCondition`
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p19`: "void Wdg_HLD_SetTriggerCondition(uint16 u16Timeout, const Wdg_HWL_InstanceType eInstance )"
- `aliases`: []

### CFG-WDG-ISR
- `name`: `Wdg_Isr`
- `type`: `config`
- `primary_page`: `19`
- `physical_pages`: `19`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p19`: "The Wdg_Isr is used to detect missed trigger of the hardware."
- `aliases`: []

### CFG-WDG-PROCESSINTERRUPT
- `name`: `Wdg_ProcessInterrupt`
- `type`: `config`
- `primary_page`: `19`
- `physical_pages`: `19`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.4 Functions in Wdg_HLD.c"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p19`: "void Wdg_ProcessInterrupt(const Wdg_HWL_InstanceType eInstance)"
- `aliases`: []

### API-WDG-LLD-INIT
- `name`: `Wdg_LLD_Init`
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p20`: "uint32 Wdg_LLD_Init(const Wdg_LLDConfigType* pWdgLLDConfigPtr, const Wdg_HWL_InstanceType eInstance )"
- `aliases`: []

### API-WDG-LLD-TRIGGER
- `name`: `Wdg_LLD_Trigger`
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p20`: "void Wdg_LLD_Trigger(const Wdg_HWL_InstanceType eInstance)"
- `aliases`: []

### API-WDG-LLD-VALIDATECONFIGUPDATE
- `name`: `Wdg_LLD_ValidateConfigUpdate`
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDG API/function symbol used in the source document."
- `anchors`:
  - `p20`: "Std_ReturnType Wdg_LLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance)"
- `aliases`: []

### REG-WDOG-HWA-GETCS
- `name`: `WDOG_HWA_GetCs`
- `type`: `register_or_hardware`
- `primary_page`: `20`
- `physical_pages`: `20`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDOG hardware/register related identifier."
- `anchors`:
  - `p20`: "uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"
- `aliases`: []

### TYPE-WDOG-TYPE
- `name`: `WDOG_Type`
- `type`: `type`
- `primary_page`: `20`
- `physical_pages`: `20,21,22`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c", "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"]
- `brief`: "WDG data type, enum, structure or typedef."
- `anchors`:
  - `p20`: "uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"
  - `p21`: "uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"
  - `p22`: "uint32 WDOG_HWA_GetCs(WDOG_Type * pWdog)"
- `aliases`: []

### REG-WDOG-HWA-GETUNLOCKSTATUS
- `name`: `WDOG_HWA_GetUnlockStatus`
- `type`: `register_or_hardware`
- `primary_page`: `21`
- `physical_pages`: `21`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDOG hardware/register related identifier."
- `anchors`:
  - `p21`: "boolean WDOG_HWA_GetUnlockStatus(WDOG_Type * pWdog)"
- `aliases`: []

### REG-WDOG-HWA-SETCOUNTER
- `name`: `WDOG_HWA_SetCounter`
- `type`: `register_or_hardware`
- `primary_page`: `21`
- `physical_pages`: `21`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDOG hardware/register related identifier."
- `anchors`:
  - `p21`: "void WDOG_HWA_SetCounter(WDOG_Type * pWdog, uint32 u32Counter )"
- `aliases`: []

### REG-WDOG-HWA-SETCS
- `name`: `WDOG_HWA_SetCs`
- `type`: `register_or_hardware`
- `primary_page`: `21`
- `physical_pages`: `21`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDOG hardware/register related identifier."
- `anchors`:
  - `p21`: "void WDOG_HWA_SetCs(WDOG_Type * pWdog, uint32 u32Cs )"
- `aliases`: []

### REG-WDOG-HWA-SETTIMEOUT
- `name`: `WDOG_HWA_SetTimeout`
- `type`: `register_or_hardware`
- `primary_page`: `21`
- `physical_pages`: `21`
- `section_paths`: ["Chapter 2 Software Design / 2.7 API Functions / 2.7.5 Functions in Wdg_LLD.c"]
- `brief`: "WDOG hardware/register related identifier."
- `anchors`:
  - `p21`: "void WDOG_HWA_SetTimeout(WDOG_Type * pWdog, uint16 u16Timeout )"
- `aliases`: []

### REG-WDOG-HWA-SETWINDOW
- `name`: `WDOG_HWA_SetWindow`
- `type`: `register_or_hardware`
- `primary_page`: `22`
- `physical_pages`: `22`
- `section_paths`: ["Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Watchdog Initialization, Setting Trigger Condition and Mode"]
- `brief`: "WDOG hardware/register related identifier."
- `anchors`:
  - `p22`: "void WDOG_HWA_SetWindow(WDOG_Type * pWdog, uint16 u16Window )"
- `aliases`: []

### TERM-DET
- `name`: `Det`
- `type`: `term`
- `primary_page`: `25`
- `physical_pages`: `25`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "Technical term or dependent module used for WDG retrieval."
- `anchors`:
  - `p25`: "WdgDevErrorDetect"
- `aliases`: []

### MACRO-WDG-E-DISABLE-REJECTED
- `name`: `WDG_E_DISABLE_REJECTED`
- `type`: `macro`
- `primary_page`: `25`
- `physical_pages`: `25`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p25`: "WDG_E_DISABLE_REJECTED"
- `aliases`: []

### MACRO-WDG-E-MODE-FAILED
- `name`: `WDG_E_MODE_FAILED`
- `type`: `macro`
- `primary_page`: `25`
- `physical_pages`: `25`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p25`: "WDG_E_MODE_FAILED"
- `aliases`: []

### CFG-WDGDEVERRORDETECT
- `name`: `WdgDevErrorDetect`
- `type`: `config`
- `primary_page`: `25`
- `physical_pages`: `25`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p25`: "WdgDevErrorDetect"
- `aliases`: []

### CFG-WDGDISABLEALLOWED
- `name`: `WdgDisableAllowed`
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p26`: "WdgDisableAllowed"
- `aliases`: []

### CFG-WDGECUCPARTITIONREF
- `name`: `WdgEcucPartitionRef`
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p26`: "WdgEcucPartitionRef"
- `aliases`: []

### CFG-WDGENABLEMULTICORESUPPORT
- `name`: `WdgEnableMultiCoreSupport`
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p26`: "WdgEnableMultiCoreSupport"
- `aliases`: []

### CFG-WDGINDEX
- `name`: `WdgIndex`
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p26`: "WdgIndex"
- `aliases`: []

### CFG-WDGINITIALTIMEOUT
- `name`: `WdgInitialTimeout`
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p27`: "WdgInitialTimeout"
- `aliases`: []

### CFG-WDGMAXTIMEOUT
- `name`: `WdgMaxTimeout`
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p27`: "than WdgMaxTimeout."
- `aliases`: []

### CFG-WDGRUNAREA
- `name`: `WdgRunArea`
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p27`: "WdgRunArea"
- `aliases`: []

### CFG-WDGTRIGGERLOCATION
- `name`: `WdgTriggerLocation`
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p27`: "WdgTriggerLocation"
- `aliases`: []

### CFG-WDGVERSIONINFOAPI
- `name`: `WdgVersionInfoApi`
- `type`: `config`
- `primary_page`: `27`
- `physical_pages`: `27`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 WdgGeneral"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p27`: "WdgVersionInfoApi"
- `aliases`: []

### CFG-WDGDEFAULTMODE
- `name`: `WdgDefaultMode`
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p28`: "WdgDefaultMode"
- `aliases`: []

### CFG-WDGENABLEINTERRUPTFUNCTION
- `name`: `WdgEnableInterruptFunction`
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p28`: "WdgEnableInterruptFunction"
- `aliases`: []

### CFG-WDGINSTANCE
- `name`: `WdgInstance`
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p28`: "WdgInstance"
- `aliases`: []

### CFG-WDGGPTTRIGGERCHANNEL
- `name`: `wdgGPTTriggerChannel`
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: `29`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p29`: "wdgGPTTriggerChannel"
- `aliases`: []

### CFG-WDGISRCALLBACKNOTIFICATION
- `name`: `WdgISRCallbackNotification`
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: `29`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p29`: "WdgISRCallbackNotification"
- `aliases`: []

### CFG-WDGCLKSRCREF
- `name`: `WdgClkSrcRef`
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30,34`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p30`: "WdgClkSrcRef"
  - `p34`: "WdgClkSrcRef"
- `aliases`: []

### CFG-WDGCLOCKREFERENCEPOINT
- `name`: `WdgClockReferencePoint`
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30,34`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p30`: "Reference to the WdgClockReferencePoint from which the clock is derived."
  - `p34`: "Reference to the WdgClockReferencePoint from which the clock is derived."
- `aliases`: []

### CFG-WDGCLOCKVALUE
- `name`: `WdgClockValue`
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30,34`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p30`: "WdgClockValue"
  - `p34`: "WdgClockValue"
- `aliases`: []

### CFG-WDGRUNSINDEBUGMODE
- `name`: `WdgRunsInDebugMode`
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30,35`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p30`: "WdgRunsInDebugMode"
  - `p35`: "WdgRunsInDebugMode"
- `aliases`: []

### CFG-WDGRUNSINSTOPMODE
- `name`: `WdgRunsInStopMode`
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30,35`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p30`: "WdgRunsInStopMode"
  - `p35`: "WdgRunsInStopMode"
- `aliases`: []

### CFG-WDGSETTINGSFAST
- `name`: `WdgSettingsFast`
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p30`: "WdgSettingsFast"
- `aliases`: []

### MACRO-WDG-RST-DLY-1024
- `name`: `WDG_RST_DLY_1024`
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p31`: "•WDG_RST_DLY_1024: Delay of 1024 bus clocks to generate the reset."
  - `p36`: "•WDG_RST_DLY_1024: Delay of 1024 bus clocks to generate the reset."
- `aliases`: []

### MACRO-WDG-RST-DLY-128
- `name`: `WDG_RST_DLY_128`
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p31`: "•WDG_RST_DLY_128: Delay of 128 bus clocks to generate the reset."
  - `p36`: "•WDG_RST_DLY_128: Delay of 128 bus clocks to generate the reset."
- `aliases`: []

### MACRO-WDG-RST-DLY-256
- `name`: `WDG_RST_DLY_256`
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p31`: "•WDG_RST_DLY_256: Delay of 256 bus clocks to generate the reset."
  - `p36`: "•WDG_RST_DLY_256: Delay of 256 bus clocks to generate the reset."
- `aliases`: []

### MACRO-WDG-RST-DLY-512
- `name`: `WDG_RST_DLY_512`
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG/WDOG macro, service ID, error ID or version/configuration constant."
- `anchors`:
  - `p31`: "•WDG_RST_DLY_512: Delay of 512 bus clocks to generate the reset."
  - `p36`: "•WDG_RST_DLY_512: Delay of 512 bus clocks to generate the reset."
- `aliases`: []

### CFG-WDGOPERATIONMODE
- `name`: `WdgOperationMode`
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p31`: "WdgOperationMode"
  - `p36`: "WdgOperationMode"
- `aliases`: []

### CFG-WDGRUNSINWAITMODE
- `name`: `WdgRunsInWaitMode`
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31,35`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p31`: "WdgRunsInWaitMode"
  - `p35`: "WdgRunsInWaitMode"
- `aliases`: []

### CFG-WDGSETRESETDELAY
- `name`: `WdgSetResetDelay`
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31,35`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p31`: "WdgSetResetDelay"
  - `p35`: "WdgSetResetDelay"
- `aliases`: []

### CFG-WDGCLOCKSELECTION
- `name`: `WdgClockSelection`
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p32`: "WdgClockSelection"
  - `p36`: "WdgClockSelection"
- `aliases`: []

### CFG-WDGTIMEOUT
- `name`: `WdgTimeout`
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p32`: "WdgTimeout Period [s]"
- `aliases`: []

### CFG-WDGTIMEOUTPERIOD
- `name`: `WdgTimeoutPeriod`
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,36`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p32`: "WdgTimeoutPeriod"
  - `p36`: "WdgTimeoutPeriod"
- `aliases`: []

### CFG-WDGWINDOWMODE
- `name`: `WdgWindowMode`
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,37`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p32`: "WdgWindowMode"
  - `p37`: "WdgWindowMode"
- `aliases`: []

### CFG-WDGWINDOWPERIOD
- `name`: `WdgWindowPeriod`
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,37`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p32`: "WdgWindowPeriod"
  - `p37`: "WdgWindowPeriod"
- `aliases`: []

### CFG-WDGALLOWUPDATES
- `name`: `WdgAllowUpdates`
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33,34,37`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p33`: "WdgAllowUpdates"
  - `p34`: "WdgAllowUpdates"
  - `p37`: "WdgAllowUpdates"
- `aliases`: []

### CFG-WDGPRESCALERENABLED
- `name`: `WdgPrescalerEnabled`
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33,37`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p33`: "WdgPrescalerEnabled"
  - `p37`: "WdgPrescalerEnabled"
- `aliases`: []

### CFG-WDGSETTINGSOFF
- `name`: `WdgSettingsOff`
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p33`: "WdgSettingsOff"
- `aliases`: []

### CFG-WDGTESTMODE
- `name`: `WdgTestMode`
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33,38`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p33`: "WdgTestMode"
  - `p38`: "WdgTestMode"
- `aliases`: []

### CFG-WDGSETTINGSSLOW
- `name`: `WdgSettingsSlow`
- `type`: `config`
- `primary_page`: `34`
- `physical_pages`: `34`
- `section_paths`: ["Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 WdgSettingsConfig"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p34`: "WdgSettingsSlow"
- `aliases`: []

### CFG-WDG0
- `name`: `Wdg0`
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `section_paths`: ["Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p39`: "Wdg0 -- Wdg_Cbk_GptNotification0"
- `aliases`: []

### CFG-WDG1
- `name`: `Wdg1`
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `section_paths`: ["Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p39`: "Wdg1 -- Wdg_Cbk_GptNotification1"
- `aliases`: []

### FUNC-WDG-CBK-GPTNOTIFICATION1
- `name`: `Wdg_Cbk_GptNotification1`
- `type`: `function`
- `primary_page`: `39`
- `physical_pages`: `39`
- `section_paths`: ["Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: "WDG internal or driver function symbol used in the source document."
- `anchors`:
  - `p39`: "Wdg1 -- Wdg_Cbk_GptNotification1"
- `aliases`: []

### CFG-WDGCLKSRCREF-2
- `name`: `wdgClkSrcRef`
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `section_paths`: ["Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"]
- `brief`: "WDG configuration container, parameter or generated configuration object."
- `anchors`:
  - `p39`: "In WDG setting, the WDG clock selection should be matched with wdgClkSrcRef."
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
- `purpose`: `Close keyword lookup gaps between WDG_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `WDG_User_Manual.pdf`
- `source_pdf_sha256`: `f21c655de6e285d63d2604306cb9fc253581a23f39ca93a1a8bf6603ec66389b`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `165`
- `technical_missing_terms_added`: `19`
- `pages_with_added_terms`: `40`
- `supplemented_missing_token_count`: `165`
- `supplemented_missing_technical_token_count`: `19`
- `supplemented_physical_pages_count`: `40`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.3"
  - "3.0"
  - "4.0"
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
  - "0x0818"
  - "0x20CF"
  - "AUTOSAR_SWS_WatchdogDriver"
  - "CPU"
  - "Confidential"
  - "Configurable"
  - "Features"
  - "Flagchip"
  - "Implement"
  - "MCU"
  - "Optional"
  - "Programmable"
  - "Proprietary"
  - "Refresh"
  - "Registers"
  - "Unlock"
  - "_1982"
  - "_FC20"
  - "cannot"
  - "certain"
  - "composed"
  - "detailed"
  - "diagnostics"
  - "ensure"
  - "executing"
  - "fetched"
  - "get"
  - "infinite"
  - "loop"
  - "mistake"
  - "modified"
  - "once"
  - "operation"
  - "optional"
  - "planned"
  - "post"
  - "processing"
  - "refer"
  - "refreshed"
  - "registers"
  - "resets"
  - "serviced"
  - "stuck"
  - "unintended"
  - "unlocking"
  - "updates"
  - "vector"
  - "within"
  - "write"
  - "writeable"

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
  - "Parent"
  - "Proprietary"
  - "eithera"
  - "pinsan"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Dependency"
  - "Flagchip"
  - "POST"
  - "PRE"
  - "Pre"
  - "Proprietary"
  - "Scope"
  - "See"
  - "TIME"
  - "dependency"
  - "resp"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "0x0818"
  - "0x20CF"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Refresh"
  - "Unlock"
  - "_1982"
  - "_FC20"
  - "once"
  - "participating"
  - "registers"
  - "updates"
  - "writeable"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Invalid"
  - "NULL"
  - "Proprietary"
  - "pointer"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "IPs"
  - "Proprietary"
  - "externally"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "MEOUT_U32"
  - "Proprietary"
  - "UT_VALUE"
  - "integer"
  - "max"
  - "min"
  - "report"
  - "s_WdgInitialTimeout"
  - "s_WdgMaxTimeout"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Bus"
  - "Confidential"
  - "Flagchip"
  - "Pre"
  - "Proprietary"
  - "SMISC"
  - "busy"
  - "choose"
  - "idle"
  - "initializing"
  - "multi"
  - "need"
  - "uninitialized"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "Flagchip"
  - "Gpt_ChannelType"
  - "Proprietary"
  - "eWdgInstance"
  - "initializing"
  - "phase"
  - "server"
  - "u32WdgTriggerChannelFrequency"
  - "u8WdgTimerChannel"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "bWdgLLDPrescalerEn"
  - "u32WdgLLDConfig"
  - "u32WdgLLDInternalTimerClock"
  - "u32WdgLLDTimeout"
  - "u32WdgLLDWindow"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "E_NOT_OK"
  - "E_OK"
  - "Flagchip"
  - "Proprietary"
  - "encountered"
  - "milliseconds"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "E_NOT_OK"
  - "E_OK"
  - "Flagchip"
  - "Proprietary"
  - "encountered"
  - "milliseconds"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "E_NOT_OK"
  - "E_OK"
  - "Flagchip"
  - "Proprietary"
  - "encountered"
  - "milliseconds"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "E_NOT_OK"
  - "E_OK"
  - "Flagchip"
  - "Proprietary"
  - "encountered"
  - "milliseconds"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "E_NOT_OK"
  - "E_OK"
  - "Flagchip"
  - "Proprietary"
  - "encountered"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Uint32"
  - "bool"
  - "false"
  - "unlocked"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "VariantPostBuild"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Detection"
  - "Error"
  - "Flagchip"
  - "NAME"
  - "Proprietary"
  - "SYMBOLIC"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Allowed"
  - "Confidential"
  - "Core"
  - "Flagchip"
  - "INTEGER"
  - "Instance0"
  - "Proprietary"
  - "Support"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "NAME"
  - "NULL_PTR"
  - "Proprietary"
  - "Run"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Info"
  - "Instance"
  - "Proprietary"
  - "Provide"
  - "Version"
  - "WDGIF_SLOW_MODE"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "FUNCTION"
  - "Flagchip"
  - "NAME"
  - "NULL_PTR"
  - "Notification"
  - "Proprietary"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "7.1"
  - "7.2"
  - "7.3"
  - "7.4"
  - "Confidential"
  - "Flagchip"
  - "INTEGER"
  - "Proprietary"
  - "Runs"
  - "Stop"
  - "XPATH"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "7.5"
  - "7.6"
  - "7.7"
  - "Confidential"
  - "Debug"
  - "Flagchip"
  - "Proprietary"
  - "Runs"
  - "Wait"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "0.01"
  - "7.10"
  - "7.11"
  - "7.8"
  - "7.9"
  - "Bus_Clock"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "7.12"
  - "7.13"
  - "7.14"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "8.1"
  - "9.1"
  - "9.2"
  - "Confidential"
  - "Flagchip"
  - "INTEGER"
  - "Proprietary"
  - "XPATH"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "9.3"
  - "9.4"
  - "9.5"
  - "9.6"
  - "Confidential"
  - "Debug"
  - "Flagchip"
  - "Proprietary"
  - "Runs"
  - "Stop"
  - "Wait"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "0.01"
  - "9.7"
  - "9.8"
  - "9.9"
  - "Bus_Clock"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "9.11"
  - "9.12"
  - "9.13"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "9.14"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "properly"
  - "resource"
  - "serve"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

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
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41`
- `affected_ids`: []
- `message`: "PDF has an extractable text layer; OCR was not run. Screenshots/diagrams are indexed semantically, not OCR-transcribed."
- `recommended_action`: "For exact text inside screenshots, inspect rendered source PDF pages."

### WARN-0003-TABLE-LIKE-REGIONS
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `2,6,7,8,13,14,15,16,17,18,19,20,21,22,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38`
- `affected_ids`: ["TBL-0002-001", "TBL-0006-001", "TBL-0006-002", "TBL-0006-003", "TBL-0006-004", "TBL-0006-005", "TBL-0007-001", "TBL-0007-002", "TBL-0007-003", "TBL-0007-004", "TBL-0007-005", "TBL-0008-001"]
- `message`: "Table Index includes PyMuPDF-detected tables and table-like regions; full cell grid reconstruction is not treated as authoritative."
- `recommended_action`: "Use table entries for navigation and verify exact cell values in the source PDF."

### WARN-0004-GENERATED-FIGURE-IDS
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41`
- `affected_ids`: ["FIG-0015-001", "FIG-0015-002", "FIG-0016-001", "FIG-0016-002", "FIG-0016-003", "FIG-0017-001", "FIG-0017-002", "FIG-0017-003", "FIG-0017-004", "FIG-0018-001", "FIG-0018-002", "FIG-0018-003"]
- `message`: "Some embedded images/screenshots do not have source figure numbers; Manifest generated internal stable FIG-* IDs."
- `recommended_action`: "Use bbox, page and section_path to verify visual content in the source PDF."

### WARN-0005-REVISION-DATE-ORDER
- `severity`: `medium`
- `category`: `source_consistency`
- `physical_pages`: `2`
- `affected_ids`: []
- `message`: "Revision history date order appears inconsistent: revision 0.6 date 2023/03/29 is earlier than previous revision 0.4."
- `recommended_action`: "Treat the source PDF text as authoritative but verify revision freshness manually."

## 11. Self Check Report

### PAGE-COVERAGE
- `pdf_page_count`: `41`
- `indexed_physical_pages_count`: `41`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `coverage_status`: `pass`

### SECTION-RANGE-CHECK
- `section_count`: `44`
- `invalid_ranges`: `[]`
- `sections_without_pages`: `[]`
- `status`: `pass`

### INDEX-INTEGRITY
- `table_count`: `115`
- `figure_count`: `91`
- `symbol_count`: `208`
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
- `source_pdf_sha256`: `f21c655de6e285d63d2604306cb9fc253581a23f39ca93a1a8bf6603ec66389b`
- `manifest_source_pdf_sha256`: `f21c655de6e285d63d2604306cb9fc253581a23f39ca93a1a8bf6603ec66389b`
- `sha256_match`: `true`
- `status`: `pass`

### TEXT-LAYER-SEARCH-SUPPLEMENT-CHECK
- `status`: `pass`

### OVERALL
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `165`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `overall_status`: `pass_with_warnings`
- `staleness_rule`: `Regenerate this Manifest whenever source_pdf_sha256 changes.`
