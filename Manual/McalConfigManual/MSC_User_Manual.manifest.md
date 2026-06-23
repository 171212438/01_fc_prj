---
manifest_schema_version: "1.1"
source_pdf: "MSC_User_Manual.pdf"
source_pdf_sha256: "a16ab5a9a18656bf77d045cea7f6bf6f22904830746d0d5ed72fb1bf0f134040"
source_pdf_size_bytes: 2211364
pdf_page_count: 50
generated_at: "2026-06-19T13:25:55Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: MSC_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `MSC_User_Manual.pdf`
- `source_pdf_sha256`: `a16ab5a9a18656bf77d045cea7f6bf6f22904830746d0d5ed72fb1bf0f134040`
- `source_pdf_size_bytes`: `2211364`
- `pdf_page_count`: `50`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx MSC User Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/10/20 / Initial release for MCAL V0.3.0`
- `generated_at`: `2026-06-19T13:25:55Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `36`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL MSC module - User Manual"
- `module_scope`: "MSC driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 MSC Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["MSC", "Micro Second Channel Complex Device Driver", "Vendor-specific CDD / AUTOSAR Classic Platform guidance", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Msc", "CDD_Msc", "MscChannel", "MscFrame", "Pwm"]
- `summary`: "This 50-page user manual indexes MSC content across source physical pages 1-50, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["MSC", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx MSC User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["MSC", "FC7xxx", "MCAL", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["MSC", "CDD_Msc", "FC7xxx", "CDD_Msc_Cfg", "CDD_Msc_PBCfg", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "Msc_ConfigType"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "MSC Introduction"
- `path`: "Chapter 1 MSC Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MSC", "SEL", "Msc", "data", "channel", "serial", "FC7300", "FC7xxx"]
- `anchor`: "Chapter 1 MSC Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 MSC Introduction / 1.1 Requirements"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MSC", "SEL", "Msc", "data", "channel", "serial", "FC7300", "FC7xxx"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Design Summary"
- `path`: "Chapter 1 MSC Introduction / 1.2 Design Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MSC", "SEL", "Msc", "data", "channel", "serial", "FC7300", "FC7xxx"]
- `anchor`: "1.2"

### SEC-001-003
- `source_number`: `1.3`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 MSC Introduction / 1.3 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["MSC", "SEL", "Msc", "data", "channel", "serial", "FC7300", "FC7xxx"]
- `anchor`: "1.3"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `29`
- `printed_page_start`: `6`
- `printed_page_end`: `29`
- `keywords`: ["MSC", "const", "pMsc", "void", "LOCAL_INLINE", "Returns", "MSC_Type", "register"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["MSC", "CDD_Msc", "define", "definition", "MSC_VENDOR_ID", "MSC_MODULE_ID", "MSC_AR_RELEASE_MAJOR_VERSION", "MSC_AR_RELEASE_MINOR_VERSION"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["MSC", "CDD_Msc", "define", "definition", "MSC_VENDOR_ID", "MSC_MODULE_ID", "MSC_AR_RELEASE_MAJOR_VERSION", "MSC_AR_RELEASE_MINOR_VERSION"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `6`
- `physical_page_end`: `8`
- `printed_page_start`: `6`
- `printed_page_end`: `8`
- `keywords`: ["define", "MSC", "Msc", "CDD_Msc", "definition", "channel", "MSC_UNINIT", "FC7xxx"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "CDD_Msc.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `physical_page_start`: `6`
- `physical_page_end`: `7`
- `printed_page_start`: `6`
- `printed_page_end`: `7`
- `keywords`: ["MSC", "CDD_Msc", "define", "definition", "called", "FC7xxx", "MSC_VENDOR_ID", "MSC_MODULE_ID"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "CDD_Msc_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 CDD_Msc_Cfg.h"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["MSC", "Msc", "define", "MSC_UNINIT", "NULL_PTR", "states", "SSL", "FC7xxx"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "CDD_Msc_PBCfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 CDD_Msc_PBCfg.h"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["MSC", "PWM", "Msc", "define", "STD_ON", "OFF", "Msc_TransmissionTriggerType", "transmission"]
- `anchor`: "2.3.3"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `9`
- `physical_page_end`: `12`
- `printed_page_start`: `9`
- `printed_page_end`: `12`
- `keywords`: ["MSC", "PWM", "FCL", "CDD_Msc", "Msc", "active", "Data", "Enumeration"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enums in CDD_Msc_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["MSC", "PWM", "FCL", "Msc", "active", "Data", "define", "ChipSelect"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Msc_TransmissionTriggerType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.1 Msc_TransmissionTriggerType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["MSC", "PWM", "Msc", "define", "STD_ON", "OFF", "Msc_TransmissionTriggerType", "transmission"]
- `anchor`: "2.4.1.1"

### SEC-002-004-001-002
- `source_number`: `2.4.1.2`
- `title`: "Msc_TransmissionPolarityType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.2 Msc_TransmissionPolarityType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["MSC", "PWM", "Msc", "define", "STD_ON", "OFF", "Msc_TransmissionTriggerType", "transmission"]
- `anchor`: "2.4.1.2"

### SEC-002-004-001-003
- `source_number`: `2.4.1.3`
- `title`: "Msc_FclActiveType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.3 Msc_FclActiveType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MSC", "FCL", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "2.4.1.3"

### SEC-002-004-001-004
- `source_number`: `2.4.1.4`
- `title`: "MSC_ReceiveFrameType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.4 MSC_ReceiveFrameType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MSC", "FCL", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "2.4.1.4"

### SEC-002-004-001-005
- `source_number`: `2.4.1.5`
- `title`: "Msc_RxDataParityType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.5 Msc_RxDataParityType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MSC", "FCL", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "2.4.1.5"

### SEC-002-004-001-006
- `source_number`: `2.4.1.6`
- `title`: "MSC_ReceiveBaudDivType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.6 MSC_ReceiveBaudDivType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["MSC", "FCL", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "2.4.1.6"

### SEC-002-004-001-007
- `source_number`: `2.4.1.7`
- `title`: "Msc_ENxActiveType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.7 Msc_ENxActiveType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected", "Select", "Msc_ENxActiveType", "Enumeration"]
- `anchor`: "2.4.1.7"

### SEC-002-004-001-008
- `source_number`: `2.4.1.8`
- `title`: "Msc_ENxType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.8 Msc_ENxType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected", "Select", "Msc_ENxActiveType", "Enumeration"]
- `anchor`: "2.4.1.8"

### SEC-002-004-001-009
- `source_number`: `2.4.1.9`
- `title`: "MSC_SDISelectionType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.9 MSC_SDISelectionType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected", "Select", "Msc_ENxActiveType", "Enumeration"]
- `anchor`: "2.4.1.9"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Enums in CDD_Msc.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected", "Select", "reception", "Enumeration"]
- `anchor`: "2.4.2"

### SEC-002-004-002-001
- `source_number`: `2.4.2.1`
- `title`: "Msc_StatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.1 Msc_StatusType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected", "Select", "Msc_ENxActiveType", "Enumeration"]
- `anchor`: "2.4.2.1"

### SEC-002-004-002-002
- `source_number`: `2.4.2.2`
- `title`: "MSC_RDRxIndexType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.2 MSC_RDRxIndexType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["MSC", "reception", "register", "data", "MSC_RDRxIndexType", "Msc_APIFunctionIdsType", "Msc_Init", "FC7xxx"]
- `anchor`: "2.4.2.2"

### SEC-002-004-002-003
- `source_number`: `2.4.2.3`
- `title`: "Msc_APIFunctionIdsType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.3 Msc_APIFunctionIdsType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["MSC", "reception", "register", "data", "MSC_RDRxIndexType", "Msc_APIFunctionIdsType", "Msc_Init", "FC7xxx"]
- `anchor`: "2.4.2.3"

### SEC-002-005
- `source_number`: `2.5`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.5 Structures"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "FCL", "Msc_ENxActiveType", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "SRH", "SRL", "seletion"]
- `anchor`: "2.5"

### SEC-002-005-001
- `source_number`: `2.5.1`
- `title`: "Msc_TransmissionSourceConfigType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Msc_TransmissionSourceConfigType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "FCL", "Msc_ENxActiveType", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "SRH", "SRL", "seletion"]
- `anchor`: "2.5.1"

### SEC-002-005-002
- `source_number`: `2.5.2`
- `title`: "Msc_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.2 Msc_ChannelConfigType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["MSC", "FCL", "Msc_ENxActiveType", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "SRH", "SRL", "seletion"]
- `anchor`: "2.5.2"

### SEC-002-005-003
- `source_number`: `2.5.3`
- `title`: "Msc_ConfigType"
- `path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.3 Msc_ConfigType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["MSC", "CDD_Msc", "Msc_ConfigType", "Msc_Init", "FC7xxx", "u8InjEnable1", "u8InjPosition1", "Msc_TransmissionSourceConfigType"]
- `anchor`: "2.5.3"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.6 API Functions"
- `physical_page_start`: `14`
- `physical_page_end`: `18`
- `printed_page_start`: `14`
- `printed_page_end`: `18`
- `keywords`: ["MSC", "Channel", "PWM", "CDD_Msc", "Std_ReturnType", "Diagram", "Returns", "channel"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Functions in CDD_Msc.h"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h"
- `physical_page_start`: `14`
- `physical_page_end`: `18`
- `printed_page_start`: `14`
- `printed_page_end`: `18`
- `keywords`: ["MSC", "Channel", "PWM", "CDD_Msc", "Std_ReturnType", "Diagram", "Returns", "channel"]
- `anchor`: "2.6.1"

### SEC-002-006-001-001
- `source_number`: `2.6.1.1`
- `title`: "void Msc_Init(const Msc_ConfigType *Config);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["MSC", "CDD_Msc", "Msc_ConfigType", "Msc_Init", "FC7xxx", "u8InjEnable1", "u8InjPosition1", "Msc_TransmissionSourceConfigType"]
- `anchor`: "2.6.1.1"

### SEC-002-006-001-002
- `source_number`: `2.6.1.2`
- `title`: "void Msc_DeInit(void);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType", "Msc_StartChannel", "FC7xxx", "Diagram"]
- `anchor`: "2.6.1.2"

### SEC-002-006-001-003
- `source_number`: `2.6.1.3`
- `title`: "Std_ReturnType Msc_StartChannel(uint8 Channel);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.3 Std_ReturnType Msc_StartChannel(uint8 Channel);"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType", "Msc_StartChannel", "FC7xxx", "Diagram"]
- `anchor`: "2.6.1.3"

### SEC-002-006-001-004
- `source_number`: `2.6.1.4`
- `title`: "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "2.6.1.4"

### SEC-002-006-001-005
- `source_number`: `2.6.1.5`
- `title`: "Std_ReturnType Msc_SendDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.5 Std_ReturnType Msc_SendDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "2.6.1.5"

### SEC-002-006-001-006
- `source_number`: `2.6.1.6`
- `title`: "Std_ReturnType Msc_StopChannel(uint8 Channel);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.6 Std_ReturnType Msc_StopChannel(uint8 Channel);"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "2.6.1.6"

### SEC-002-006-001-007
- `source_number`: `2.6.1.7`
- `title`: "Std_ReturnType"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.7 Std_ReturnType"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "2.6.1.7"

### SEC-002-006-001-008
- `source_number`: `2.6.1.8`
- `title`: "Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus"]
- `anchor`: "2.6.1.8"

### SEC-002-006-001-009
- `source_number`: `2.6.1.9`
- `title`: "Msc_StatusType Msc_GetRxStatus(uint8 Channel, uint16 **RxDataBufferPtr);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.9 Msc_StatusType Msc_GetRxStatus(uint8 Channel, uint16 **RxDataBufferPtr);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus"]
- `anchor`: "2.6.1.9"

### SEC-002-006-001-010
- `source_number`: `2.6.1.10`
- `title`: "Msc_StatusType"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.10 Msc_StatusType"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus"]
- `anchor`: "2.6.1.10"

### SEC-002-006-001-011
- `source_number`: `2.6.1.11`
- `title`: "Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns", "Msc_ReturnType", "SDIChannel", "ENn"]
- `anchor`: "2.6.1.11"

### SEC-002-006-001-012
- `source_number`: `2.6.1.12`
- `title`: "Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.12 Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn);"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns", "Msc_ReturnType", "SDIChannel", "ENn"]
- `anchor`: "2.6.1.12"

### SEC-002-006-001-013
- `source_number`: `2.6.1.13`
- `title`: "void Msc_GetVersionInfo(Std_VersionInfoType *versioninfo);"
- `path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.13 void Msc_GetVersionInfo(Std_VersionInfoType *versioninfo);"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns", "Msc_ReturnType", "SDIChannel", "ENn"]
- `anchor`: "2.6.1.13"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions"
- `physical_page_start`: `19`
- `physical_page_end`: `20`
- `printed_page_start`: `19`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "u8Channel", "PWM", "void", "channel", "Msc_StatusType", "initialized", "Returns"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in CDD_Msc_LLD.h"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h"
- `physical_page_start`: `19`
- `physical_page_end`: `20`
- `printed_page_start`: `19`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "u8Channel", "PWM", "void", "channel", "Msc_StatusType", "initialized", "Returns"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.1 void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr", "channel", "const", "Std_ReturnType"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Msc_LLD_DeInitChannel(uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.2 void Msc_LLD_DeInitChannel(uint8 u8Channel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr", "channel", "const", "Std_ReturnType"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "void Msc_LLD_SetData(uint8 u8Channel, const uint32 *DataBufferPtr)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.3 void Msc_LLD_SetData(uint8 u8Channel, const uint32 *DataBufferPtr)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr", "channel", "const", "Std_ReturnType"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "void Msc_LLD_SendData(uint8 u8Channel, const uint32 *DataBufferPtr)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.4 void Msc_LLD_SendData(uint8 u8Channel, const uint32 *DataBufferPtr)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr", "channel", "const", "Std_ReturnType"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "Std_ReturnType Msc_LLD_StartChannel(uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.5 Std_ReturnType Msc_LLD_StartChannel(uint8 u8Channel)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr", "channel", "const", "Std_ReturnType"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.6 Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType", "channel", "initialized", "Returns"]
- `anchor`: "2.7.1.6"

### SEC-002-007-001-007
- `source_number`: `2.7.1.7`
- `title`: "void"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.7 void"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType", "channel", "initialized", "Returns"]
- `anchor`: "2.7.1.7"

### SEC-002-007-001-008
- `source_number`: `2.7.1.8`
- `title`: "Msc_StatusType Msc_LLD_GetTxStatus(uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.8 Msc_StatusType Msc_LLD_GetTxStatus(uint8 u8Channel)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType", "channel", "initialized", "Returns"]
- `anchor`: "2.7.1.8"

### SEC-002-007-001-009
- `source_number`: `2.7.1.9`
- `title`: "Msc_StatusType"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.9 Msc_StatusType"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType", "channel", "initialized", "Returns"]
- `anchor`: "2.7.1.9"

### SEC-002-007-001-010
- `source_number`: `2.7.1.10`
- `title`: "Msc_StatusType Msc_LLD_GetRxErrorStatus(uint8 u8Channel, MSC_RDRxIndexType eRxindex)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.10 Msc_StatusType Msc_LLD_GetRxErrorStatus(uint8 u8Channel, MSC_RDRxIndexType eRxindex)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType", "channel", "initialized", "Returns"]
- `anchor`: "2.7.1.10"

### SEC-002-007-001-011
- `source_number`: `2.7.1.11`
- `title`: "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.11 Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE", "MSC_Type", "pMsc", "TCCTR"]
- `anchor`: "2.7.1.11"

### SEC-002-007-001-012
- `source_number`: `2.7.1.12`
- `title`: "Std_ReturnType Msc_LLD_SwitchEN(uint8 u8Channel, Msc_ENxType eEnx, Msc_ENxActiveType eENn)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.12 Std_ReturnType Msc_LLD_SwitchEN(uint8 u8Channel, Msc_ENxType eEnx, Msc_ENxActiveType eENn)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE", "MSC_Type", "pMsc", "TCCTR"]
- `anchor`: "2.7.1.12"

### SEC-002-007-001-013
- `source_number`: `2.7.1.13`
- `title`: "static void Msc_LLD_RxInterruptHandler(uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.13 static void Msc_LLD_RxInterruptHandler(uint8 u8Channel)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE", "MSC_Type", "pMsc", "TCCTR"]
- `anchor`: "2.7.1.13"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Peripheral Functions"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions"
- `physical_page_start`: `21`
- `physical_page_end`: `26`
- `printed_page_start`: `21`
- `printed_page_end`: `26`
- `keywords`: ["const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSC", "void", "register", "Returns"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in CDD_Msc_Hw.h"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h"
- `physical_page_start`: `21`
- `physical_page_end`: `26`
- `printed_page_start`: `21`
- `printed_page_end`: `26`
- `keywords`: ["const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSC", "void", "register", "Returns"]
- `anchor`: "2.8.1"

### SEC-002-008-001-001
- `source_number`: `2.8.1.1`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcctr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.1 LOCAL_INLINE void MSC_HWA_SetTcctr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE", "MSC_Type", "pMsc", "TCCTR"]
- `anchor`: "2.8.1.1"

### SEC-002-008-001-002
- `source_number`: `2.8.1.2`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcctrNbs(MSC_Type *const pMsc, uint8 u8Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.2 LOCAL_INLINE void MSC_HWA_SetTcctrNbs(MSC_Type *const pMsc, uint8 u8Value)"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE", "MSC_Type", "pMsc", "TCCTR"]
- `anchor`: "2.8.1.2"

### SEC-002-008-001-003
- `source_number`: `2.8.1.3`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.3 LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register"]
- `anchor`: "2.8.1.3"

### SEC-002-008-001-004
- `source_number`: `2.8.1.4`
- `title`: "LOCAL_INLINE void MSC_HWA_SetDataNeedSend(MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.4 LOCAL_INLINE void MSC_HWA_SetDataNeedSend(MSC_Type *const pMsc)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register"]
- `anchor`: "2.8.1.4"

### SEC-002-008-001-005
- `source_number`: `2.8.1.5`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetCmdNeedSend(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.5 LOCAL_INLINE uint8 MSC_HWA_GetCmdNeedSend(const MSC_Type *const pMsc)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register"]
- `anchor`: "2.8.1.5"

### SEC-002-008-001-006
- `source_number`: `2.8.1.6`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetCfb(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.6 LOCAL_INLINE uint8 MSC_HWA_GetCfb(const MSC_Type *const pMsc)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register"]
- `anchor`: "2.8.1.6"

### SEC-002-008-001-007
- `source_number`: `2.8.1.7`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetDfb(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.7 LOCAL_INLINE uint8 MSC_HWA_GetDfb(const MSC_Type *const pMsc)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register"]
- `anchor`: "2.8.1.7"

### SEC-002-008-001-008
- `source_number`: `2.8.1.8`
- `title`: "LOCAL_INLINE void MSC_HWA_SetNp(MSC_Type *const pMsc, uint8 u8Np)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.8 LOCAL_INLINE void MSC_HWA_SetNp(MSC_Type *const pMsc, uint8 u8Np)"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register"]
- `anchor`: "2.8.1.8"

### SEC-002-008-001-009
- `source_number`: `2.8.1.9`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.9 LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type", "void", "const", "MSCInstance"]
- `anchor`: "2.8.1.9"

### SEC-002-008-001-010
- `source_number`: `2.8.1.10`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTccor(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.10 LOCAL_INLINE void MSC_HWA_SetTccor(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type", "void", "const", "MSCInstance"]
- `anchor`: "2.8.1.10"

### SEC-002-008-001-011
- `source_number`: `2.8.1.11`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcslr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.11 LOCAL_INLINE void MSC_HWA_SetTcslr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type", "void", "const", "MSCInstance"]
- `anchor`: "2.8.1.11"

### SEC-002-008-001-012
- `source_number`: `2.8.1.12`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcshr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.12 LOCAL_INLINE void MSC_HWA_SetTcshr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type", "void", "const", "MSCInstance"]
- `anchor`: "2.8.1.12"

### SEC-002-008-001-013
- `source_number`: `2.8.1.13`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcelr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.13 LOCAL_INLINE void MSC_HWA_SetTcelr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type", "void", "const", "MSCInstance"]
- `anchor`: "2.8.1.13"

### SEC-002-008-001-014
- `source_number`: `2.8.1.14`
- `title`: "LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.14 LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.14"

### SEC-002-008-001-015
- `source_number`: `2.8.1.15`
- `title`: "LOCAL_INLINE uint32 MSC_HWA_GetIocr(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.15 LOCAL_INLINE uint32 MSC_HWA_GetIocr(const MSC_Type *const pMsc)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.15"

### SEC-002-008-001-016
- `source_number`: `2.8.1.16`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcdis(MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.16 LOCAL_INLINE void MSC_HWA_SetTcdis(MSC_Type *const pMsc)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.16"

### SEC-002-008-001-017
- `source_number`: `2.8.1.17`
- `title`: "LOCAL_INLINE void MSC_HWA_ClearTcdis(MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.17 LOCAL_INLINE void MSC_HWA_ClearTcdis(MSC_Type *const pMsc)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.17"

### SEC-002-008-001-018
- `source_number`: `2.8.1.18`
- `title`: "LOCAL_INLINE void MSC_HWA_ClearCrfi(MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.18 LOCAL_INLINE void MSC_HWA_ClearCrfi(MSC_Type *const pMsc)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.18"

### SEC-002-008-001-019
- `source_number`: `2.8.1.19`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRfi(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.19 LOCAL_INLINE uint8 MSC_HWA_GetRfi(const MSC_Type *const pMsc)"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.19"

### SEC-002-008-001-020
- `source_number`: `2.8.1.20`
- `title`: "LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.20 LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register", "MSC_Type", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.20"

### SEC-002-008-001-021
- `source_number`: `2.8.1.21`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRccsrRc(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.21 LOCAL_INLINE uint8 MSC_HWA_GetRccsrRc(const MSC_Type *const pMsc)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register", "MSC_Type", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.21"

### SEC-002-008-001-022
- `source_number`: `2.8.1.22`
- `title`: "LOCAL_INLINE void MSC_HWA_SetRccsr(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.22 LOCAL_INLINE void MSC_HWA_SetRccsr(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register", "MSC_Type", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.22"

### SEC-002-008-001-023
- `source_number`: `2.8.1.23`
- `title`: "LOCAL_INLINE uint32 MSC_HWA_GetRdrxRerr(const volatile uint32 *pRdrx)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.23 LOCAL_INLINE uint32 MSC_HWA_GetRdrxRerr(const volatile uint32 *pRdrx)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register", "MSC_Type", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.23"

### SEC-002-008-001-024
- `source_number`: `2.8.1.24`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxData(const volatile uint32 *pRdrx)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.24 LOCAL_INLINE uint8 MSC_HWA_GetRdrxData(const volatile uint32 *pRdrx)"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register", "MSC_Type", "MSCInstance", "Returns"]
- `anchor`: "2.8.1.24"

### SEC-002-008-001-025
- `source_number`: `2.8.1.25`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.25 LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register"]
- `anchor`: "2.8.1.25"

### SEC-002-008-001-026
- `source_number`: `2.8.1.26`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxVld(const volatile uint32 *pRdrx)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.26 LOCAL_INLINE uint8 MSC_HWA_GetRdrxVld(const volatile uint32 *pRdrx)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register"]
- `anchor`: "2.8.1.26"

### SEC-002-008-001-027
- `source_number`: `2.8.1.27`
- `title`: "LOCAL_INLINE void MSC_HWA_ClearRdrxVld(volatile uint32 *pRdrx)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.27 LOCAL_INLINE void MSC_HWA_ClearRdrxVld(volatile uint32 *pRdrx)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register"]
- `anchor`: "2.8.1.27"

### SEC-002-008-001-028
- `source_number`: `2.8.1.28`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRtorToie(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.28 LOCAL_INLINE uint8 MSC_HWA_GetRtorToie(const MSC_Type *const pMsc)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register"]
- `anchor`: "2.8.1.28"

### SEC-002-008-001-029
- `source_number`: `2.8.1.29`
- `title`: "LOCAL_INLINE uint8 MSC_HWA_GetRtorTof(const MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.29 LOCAL_INLINE uint8 MSC_HWA_GetRtorTof(const MSC_Type *const pMsc)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register"]
- `anchor`: "2.8.1.29"

### SEC-002-008-001-030
- `source_number`: `2.8.1.30`
- `title`: "LOCAL_INLINE void MSC_HWA_ClearRtorTof(MSC_Type *const pMsc)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.30 LOCAL_INLINE void MSC_HWA_ClearRtorTof(MSC_Type *const pMsc)"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register"]
- `anchor`: "2.8.1.30"

### SEC-002-008-001-031
- `source_number`: `2.8.1.31`
- `title`: "LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "void", "const", "u32Value"]
- `anchor`: "2.8.1.31"

### SEC-002-008-001-032
- `source_number`: `2.8.1.32`
- `title`: "LOCAL_INLINE void MSC_HWA_SetTcctr1(MSC_Type *const pMsc, uint32 u32Value)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.32 LOCAL_INLINE void MSC_HWA_SetTcctr1(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "void", "const", "u32Value"]
- `anchor`: "2.8.1.32"

### SEC-002-008-001-033
- `source_number`: `2.8.1.33`
- `title`: "LOCAL_INLINE void MSC_HWA_SetMscEnable(MSC_Type *const pMsc, uint8 u8Enable)"
- `path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.33 LOCAL_INLINE void MSC_HWA_SetMscEnable(MSC_Type *const pMsc, uint8 u8Enable)"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "void", "const", "u32Value"]
- `anchor`: "2.8.1.33"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `physical_page_start`: `27`
- `physical_page_end`: `29`
- `printed_page_start`: `27`
- `printed_page_end`: `29`
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "Data", "void", "const"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Frame Transmission"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Frame Transmission"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "void", "const", "u32Value"]
- `anchor`: "2.9.1"

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: "Frame Reception"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `physical_page_start`: `28`
- `physical_page_end`: `29`
- `printed_page_start`: `28`
- `printed_page_end`: `29`
- `keywords`: ["MSC", "Msc", "FC7xxx", "Data", "Msc_GetRxStatus", "frame", "Frame", "data"]
- `anchor`: "2.9.2"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `30`
- `physical_page_end`: `46`
- `printed_page_start`: `30`
- `printed_page_end`: `46`
- `keywords`: ["Screenshot", "Properties", "Property", "Msc", "Variable", "Origin", "SynmbolicName", "MSC"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["MSC", "Msc", "MscGeneral", "FC7xxx", "IDENTIFIABLE", "MscDevErrorDetect", "Tresos", "Inclusion"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `30`
- `physical_page_end`: `46`
- `printed_page_start`: `30`
- `printed_page_end`: `46`
- `keywords`: ["Screenshot", "Properties", "Property", "Msc", "Variable", "Origin", "SynmbolicName", "MSC"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "MscGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral"
- `physical_page_start`: `30`
- `physical_page_end`: `32`
- `printed_page_start`: `30`
- `printed_page_end`: `32`
- `keywords`: ["Msc", "MSC", "Screenshot", "Properties", "Property", "SynmbolicName", "Variable", "BOOLEAN"]
- `anchor`: "3.2.1"

### SEC-003-002-001-001
- `source_number`: `3.2.1.1`
- `title`: "Msc Development Error Detection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["MSC", "Msc", "MscGeneral", "FC7xxx", "IDENTIFIABLE", "MscDevErrorDetect", "Tresos", "Inclusion"]
- `anchor`: "3.2.1.1"

### SEC-003-002-001-002
- `source_number`: `3.2.1.2`
- `title`: "Provide Msc VersionInfo Api"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.2 Provide Msc VersionInfo Api"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.1.2"

### SEC-003-002-001-003
- `source_number`: `3.2.1.3`
- `title`: "Msc MultiCore Support"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.3 Msc MultiCore Support"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.1.3"

### SEC-003-002-001-004
- `source_number`: `3.2.1.4`
- `title`: "Msc Timeout Duration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.4 Msc Timeout Duration"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.1.4"

### SEC-003-002-001-005
- `source_number`: `3.2.1.5`
- `title`: "Msc Disable Production Error Reporting"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.5 Msc Disable Production Error Reporting"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.1.5"

### SEC-003-002-001-006
- `source_number`: `3.2.1.6`
- `title`: "Msc Use Polling"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.6 Msc Use Polling"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "BOOLEAN", "SynmbolicName", "MscPollingUse"]
- `anchor`: "3.2.1.6"

### SEC-003-002-001-007
- `source_number`: `3.2.1.7`
- `title`: "MscEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.7 MscEcucPartitionRef"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "BOOLEAN", "SynmbolicName", "MscPollingUse"]
- `anchor`: "3.2.1.7"

### SEC-003-002-001-008
- `source_number`: `3.2.1.8`
- `title`: "MscDemEventParameterRefs"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "BOOLEAN", "SynmbolicName", "MscPollingUse"]
- `anchor`: "3.2.1.8"

### SEC-003-002-001-008-02
- `source_number`: `3.2.1.8.1`
- `title`: "Msc Timeout Dem Error"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "3.2.1.8.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "MscGlobalConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig"
- `physical_page_start`: `33`
- `physical_page_end`: `42`
- `printed_page_start`: `33`
- `printed_page_end`: `42`
- `keywords`: ["Msc", "Screenshot", "Properties", "Property", "MSC", "Variable", "Origin", "SynmbolicName"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "MscChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel"
- `physical_page_start`: `33`
- `physical_page_end`: `42`
- `printed_page_start`: `33`
- `printed_page_end`: `42`
- `keywords`: ["Msc", "Screenshot", "Properties", "Property", "MSC", "Variable", "Origin", "SynmbolicName"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-001-02
- `source_number`: `3.2.2.1.1`
- `title`: "Msc Channel ID"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.1 Msc Channel ID"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "3.2.2.1.1"

### SEC-003-002-002-001-03
- `source_number`: `3.2.2.1.2`
- `title`: "Msc Hw Channel Index"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.2 Msc Hw Channel Index"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "3.2.2.1.2"

### SEC-003-002-002-001-04
- `source_number`: `3.2.2.1.3`
- `title`: "MscChannelEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.3 MscChannelEcucPartitionRef"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength"]
- `anchor`: "3.2.2.1.3"

### SEC-003-002-002-001-05
- `source_number`: `3.2.2.1.4`
- `title`: "TxConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration"
- `physical_page_start`: `34`
- `physical_page_end`: `36`
- `printed_page_start`: `34`
- `printed_page_end`: `36`
- `keywords`: ["Msc", "MSC", "active", "Properties", "Property", "SynmbolicName", "Origin", "Screenshot"]
- `anchor`: "3.2.2.1.4"

### SEC-003-002-002-001-06
- `source_number`: `3.2.2.1.4.1`
- `title`: "Msc Passive Frame Length(bit)"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength"]
- `anchor`: "3.2.2.1.4.1"

### SEC-003-002-002-001-07
- `source_number`: `3.2.2.1.4.2`
- `title`: "Msc Passive Frame Number"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.2 Msc Passive Frame Number"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength"]
- `anchor`: "3.2.2.1.4.2"

### SEC-003-002-002-001-08
- `source_number`: `3.2.2.1.4.3`
- `title`: "Msc SRH Data Selection Bit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain"]
- `anchor`: "3.2.2.1.4.3"

### SEC-003-002-002-001-09
- `source_number`: `3.2.2.1.4.4`
- `title`: "Msc SRH data length"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.4 Msc SRH data length"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain"]
- `anchor`: "3.2.2.1.4.4"

### SEC-003-002-002-001-10
- `source_number`: `3.2.2.1.4.5`
- `title`: "Msc SRL Data Selection Bit"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.5 Msc SRL Data Selection Bit"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain"]
- `anchor`: "3.2.2.1.4.5"

### SEC-003-002-002-001-11
- `source_number`: `3.2.2.1.4.6`
- `title`: "Msc SRL data length"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "3.2.2.1.4.6"

### SEC-003-002-002-001-12
- `source_number`: `3.2.2.1.4.7`
- `title`: "Msc Transmission Polarity"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.7 Msc Transmission Polarity"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "3.2.2.1.4.7"

### SEC-003-002-002-001-13
- `source_number`: `3.2.2.1.4.8`
- `title`: "Msc Tx Mode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.8 Msc Tx Mode"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "3.2.2.1.4.8"

### SEC-003-002-002-001-14
- `source_number`: `3.2.2.1.4.9`
- `title`: "Msc Transmission Trigger"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "3.2.2.1.4.9"

### SEC-003-002-002-001-15
- `source_number`: `3.2.2.1.4.10`
- `title`: "Msc Channel Tx Frequency (Hz)"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.10 Msc Channel Tx Frequency (Hz)"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "3.2.2.1.4.10"

### SEC-003-002-002-001-16
- `source_number`: `3.2.2.1.4.11`
- `title`: "MscDownstreamClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.11 MscDownstreamClockRef"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "3.2.2.1.4.11"

### SEC-003-002-002-001-17
- `source_number`: `3.2.2.1.5`
- `title`: "RxConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration"
- `physical_page_start`: `37`
- `physical_page_end`: `38`
- `printed_page_start`: `37`
- `printed_page_end`: `38`
- `keywords`: ["Msc", "MSC", "FCL", "Screenshot", "Properties", "Property", "SynmbolicName", "Variable"]
- `anchor`: "3.2.2.1.5"

### SEC-003-002-002-001-18
- `source_number`: `3.2.2.1.5.1`
- `title`: "Msc Rx Clock Ratio"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.1 Msc Rx Clock Ratio"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "3.2.2.1.5.1"

### SEC-003-002-002-001-19
- `source_number`: `3.2.2.1.5.2`
- `title`: "Msc Channel Rx baudrate"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Screenshot", "Properties", "Property", "INTEGER", "Origin"]
- `anchor`: "3.2.2.1.5.2"

### SEC-003-002-002-001-20
- `source_number`: `3.2.2.1.5.3`
- `title`: "Msc Rx Data Size"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.3 Msc Rx Data Size"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Screenshot", "Properties", "Property", "INTEGER", "Origin"]
- `anchor`: "3.2.2.1.5.3"

### SEC-003-002-002-001-21
- `source_number`: `3.2.2.1.5.4`
- `title`: "Msc Rx Data Parity"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.4 Msc Rx Data Parity"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Screenshot", "Properties", "Property", "INTEGER", "Origin"]
- `anchor`: "3.2.2.1.5.4"

### SEC-003-002-002-001-22
- `source_number`: `3.2.2.1.6`
- `title`: "IOConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.1.6"

### SEC-003-002-002-001-23
- `source_number`: `3.2.2.1.6.1`
- `title`: "Msc Serialized Input IO selection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.1.6.1"

### SEC-003-002-002-001-24
- `source_number`: `3.2.2.1.6.2`
- `title`: "Msc Serialized Input IO Polarity"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.2 Msc Serialized Input IO Polarity"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.1.6.2"

### SEC-003-002-002-001-25
- `source_number`: `3.2.2.1.6.3`
- `title`: "Msc ChipSelect For ENC"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.3 Msc ChipSelect For ENC"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.2.1.6.3"

### SEC-003-002-002-001-26
- `source_number`: `3.2.2.1.6.4`
- `title`: "Msc ChipSelect For ENL"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2", "MSC_EN_SELECTION_3", "ChipSelect", "ENL"]
- `anchor`: "3.2.2.1.6.4"

### SEC-003-002-002-001-27
- `source_number`: `3.2.2.1.6.5`
- `title`: "Msc ChipSelect For ENH"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.5 Msc ChipSelect For ENH"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2", "MSC_EN_SELECTION_3", "ChipSelect", "ENL"]
- `anchor`: "3.2.2.1.6.5"

### SEC-003-002-002-001-28
- `source_number`: `3.2.2.1.7`
- `title`: "MscTransSource"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource"
- `physical_page_start`: `40`
- `physical_page_end`: `41`
- `printed_page_start`: `40`
- `printed_page_end`: `41`
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "SynmbolicName", "Screenshot", "Properties", "Property", "ENUMERATION"]
- `anchor`: "3.2.2.1.7"

### SEC-003-002-002-001-29
- `source_number`: `3.2.2.1.7.1`
- `title`: "Source Selection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.1 Source Selection"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2", "MSC_EN_SELECTION_3", "ChipSelect", "ENL"]
- `anchor`: "3.2.2.1.7.1"

### SEC-003-002-002-001-30
- `source_number`: `3.2.2.1.7.2`
- `title`: "Source Selection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx"]
- `anchor`: "3.2.2.1.7.2"

### SEC-003-002-002-001-31
- `source_number`: `3.2.2.1.7.3`
- `title`: "Emergency Load Position"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.3 Emergency Load Position"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx"]
- `anchor`: "3.2.2.1.7.3"

### SEC-003-002-002-001-32
- `source_number`: `3.2.2.1.7.4`
- `title`: "MscInjection"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.4 MscInjection"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx"]
- `anchor`: "3.2.2.1.7.4"

### SEC-003-002-002-001-33
- `source_number`: `3.2.2.1.8`
- `title`: "InterruptConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "InterruptConfiguration", "IDENTIFIABLE", "Injection"]
- `anchor`: "3.2.2.1.8"

### SEC-003-002-002-001-34
- `source_number`: `3.2.2.1.8.1`
- `title`: "Msc Interrupt Delay"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay"
- `physical_page_start`: `42`
- `physical_page_end`: `42`
- `printed_page_start`: `42`
- `printed_page_end`: `42`
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "InterruptConfiguration", "IDENTIFIABLE", "Injection"]
- `anchor`: "3.2.2.1.8.1"

### SEC-003-002-002-001-35
- `source_number`: `3.2.2.1.8.2`
- `title`: "Msc Rx Timeout Value"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "3.2.2.1.8.2"

### SEC-003-002-002-001-36
- `source_number`: `3.2.2.1.8.3`
- `title`: "RxTimeoutNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.3 RxTimeoutNotification"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "3.2.2.1.8.3"

### SEC-003-002-002-001-37
- `source_number`: `3.2.2.1.8.4`
- `title`: "RxReceiveNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.4 RxReceiveNotification"
- `physical_page_start`: `43`
- `physical_page_end`: `43`
- `printed_page_start`: `43`
- `printed_page_end`: `43`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "3.2.2.1.8.4"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation"
- `physical_page_start`: `43`
- `physical_page_end`: `46`
- `printed_page_start`: `43`
- `printed_page_end`: `46`
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Origin", "Screenshot", "Properties", "Property", "Default"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "AUTOSAR Major Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.1 AUTOSAR Major Version"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["MSC", "AUTOSAR", "INTEGER_LABEL", "SynmbolicName", "Properties", "Property", "Variable", "Screenshot"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-002
- `source_number`: `3.2.3.2`
- `title`: "AUTOSAR Minor Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.2 AUTOSAR Minor Version"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["MSC", "AUTOSAR", "INTEGER_LABEL", "SynmbolicName", "Properties", "Property", "Variable", "Screenshot"]
- `anchor`: "3.2.3.2"

### SEC-003-002-003-003
- `source_number`: `3.2.3.3`
- `title`: "AUTOSAR Release Revision Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.3 AUTOSAR Release Revision Version"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["MSC", "AUTOSAR", "INTEGER_LABEL", "SynmbolicName", "Properties", "Property", "Variable", "Screenshot"]
- `anchor`: "3.2.3.3"

### SEC-003-002-003-004
- `source_number`: `3.2.3.4`
- `title`: "Numeric Module ID"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.4 Numeric Module ID"
- `physical_page_start`: `44`
- `physical_page_end`: `44`
- `printed_page_start`: `44`
- `printed_page_end`: `44`
- `keywords`: ["MSC", "AUTOSAR", "INTEGER_LABEL", "SynmbolicName", "Properties", "Property", "Variable", "Screenshot"]
- `anchor`: "3.2.3.4"

### SEC-003-002-003-005
- `source_number`: `3.2.3.5`
- `title`: "Software Major Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.5 Software Major Version"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["MSC", "specific", "vendor", "INTEGER_LABEL", "SynmbolicName", "Default", "Origin", "Variable"]
- `anchor`: "3.2.3.5"

### SEC-003-002-003-006
- `source_number`: `3.2.3.6`
- `title`: "Software Minor Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.6 Software Minor Version"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["MSC", "specific", "vendor", "INTEGER_LABEL", "SynmbolicName", "Default", "Origin", "Variable"]
- `anchor`: "3.2.3.6"

### SEC-003-002-003-007
- `source_number`: `3.2.3.7`
- `title`: "Software Patch Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.7 Software Patch Version"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["MSC", "specific", "vendor", "INTEGER_LABEL", "SynmbolicName", "Default", "Origin", "Variable"]
- `anchor`: "3.2.3.7"

### SEC-003-002-003-008
- `source_number`: `3.2.3.8`
- `title`: "Vendor Api Infix"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.8 Vendor Api Infix"
- `physical_page_start`: `45`
- `physical_page_end`: `45`
- `printed_page_start`: `45`
- `printed_page_end`: `45`
- `keywords`: ["MSC", "specific", "vendor", "INTEGER_LABEL", "SynmbolicName", "Default", "Origin", "Variable"]
- `anchor`: "3.2.3.8"

### SEC-003-002-003-009
- `source_number`: `3.2.3.9`
- `title`: "Vendor ID"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.9 Vendor ID"
- `physical_page_start`: `46`
- `physical_page_end`: `46`
- `printed_page_start`: `46`
- `printed_page_end`: `46`
- `keywords`: ["MSC", "VendorId", "VendorApiInfix", "SWS", "SynmbolicName", "FC7xxx", "ModuleName", "Can_Write"]
- `anchor`: "3.2.3.9"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `47`
- `physical_page_end`: `50`
- `printed_page_start`: `47`
- `printed_page_end`: `50`
- `keywords`: ["MSC", "PWM", "Msc", "Configure", "FC7xxx", "MCU", "FTU", "enable"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "MSC Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.1 MSC Usage Common Steps"
- `physical_page_start`: `47`
- `physical_page_end`: `47`
- `printed_page_start`: `47`
- `printed_page_end`: `47`
- `keywords`: ["MSC", "PWM", "Configure", "MCU", "FC7xxx", "enable", "FTU", "FCLP"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "MSC Channel Demo"
- `path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `physical_page_start`: `47`
- `physical_page_end`: `50`
- `printed_page_start`: `47`
- `printed_page_end`: `50`
- `keywords`: ["MSC", "PWM", "Msc", "Configure", "FC7xxx", "MCU", "FTU", "enable"]
- `anchor`: "4.2"

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
- `content_types`: ["text", "toc", "table", "image", "config"]
- `anchors`: ["Table of Contents", "Chapter 1 MSC Introduction ........................................................................…", "1.1", "Requirements ......................................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image"]
- `anchors`: ["4.2", "MSC Channel Demo ..................................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 MSC Introduction / 1.1 Requirements"
- `content_types`: ["text", "api"]
- `anchors`: ["Chapter 1 MSC Introduction", "1.1", "Requirements", "The design of this module follows the specifications of the Msc driver specified in AUTOSAR Classic…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "N/A."]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define MSC_SW_MAJOR_VERSION 0", "MSC_SW_MAJOR_VERSION definition.", "#define MSC_SW_MINOR_VERSION 1", "MSC_SW_MINOR_VERSION definition."]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 CDD_Msc_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define MSC_E_RX_BUSY ((uint8)0x0BU)", "API service used whilertx channel is in invalid status.", "#define MSC_UNINIT 0x01U", "MSC driver states."]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.1 Msc_TransmissionTriggerType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define MSC_TRANS_SOURCE_DATA_ALTIN_INV 0x3U", "SSL[x] is taken from the ALTINL input line x in inverted state.", "2.3.3", "CDD_Msc_PBCfg.h"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.3 Msc_FclActiveType"
- `content_types`: ["text", "table"]
- `anchors`: ["Values", "Value", "Description", "MSC_TX_NORMAL_POLARITY"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.7 Msc_ENxActiveType"
- `content_types`: ["text", "table"]
- `anchors`: ["MSC_BAUDRATE_FMSC_DIV64", "Baud rate=fmsc/64.", "MSC_BAUDRATE_FMSC_DIV128", "Baud rate=fmsc/128."]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.2 MSC_RDRxIndexType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["MSC_CHANNEL_NOT_STARTED", "Channel is not started.", "MSC_TX_BUSY", "Command transmission in progress."]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Msc_TransmissionSourceConfigType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["2.5", "Structures", "2.5.1", "Msc_TransmissionSourceConfigType"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["uint8 u8InjEnable1. Injection1 enable.", "uint8 u8InjPosition1. Injection1 Position.", "Msc_TransmissionSourceConfigType tTransSelConfig..", "2.5.3"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.6.1.4", "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);", "Function", "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Requirements", "SWS_CDD_Msc_00048", "2.6.1.8", "Msc_StatusType Msc_GetTxStatus(uint8 Channel);"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["RxDataBufferPtr", "RxDataBufferPtr pointer to pointer to a shadow buffer or memory", "mapped MSC Hardware receive buffer where the current SDU is stored.", "Returns"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.1 void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `content_types`: ["text", "table", "api", "config"]
- `anchors`: ["2.7", "Hardware Functions", "2.7.1", "Functions in CDD_Msc_LLD.h"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.6 Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.7.1.6", "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)", "Function", "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.11 Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.7.1.11", "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)", "Function", "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.3 LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Returns", "N/A", "2.8.1.3", "LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.9 LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["pMsc", "MSCInstance", "Returns", "N/A"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.14 LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Returns", "N/A", "2.8.1.14", "LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.20 LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "pMsc"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.25 LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["2.8.1.25", "LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)", "Function", "LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Requirements", "2.8.1.31", "LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)", "Function"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.2", "Frame Reception", "The following use case shows the reception of a MSC frame. When the Msc receives upstream data fram…", "to use interrupts to process the data. If polling mode is enabled, then the Data needs to be read f…"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 29"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The container inclusion relation is shown below:"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.2 Provide Msc VersionInfo Api"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "MscDevErrorDetect Switches the Development Error Detection and Notification ON or OFF.", "Screenshot", "Properties"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.6 Msc Use Polling"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "MscDisableDemReportErrorStatus Switches the Diagnostic Error Reporting and Notification OFF.", "Screenshot", "Properties"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["3.2.1.8.1", "Msc Timeout Dem Error", "Variable", "MSC_E_TIMEOUT"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Origin", "Flagchip", "3.2.2.1.4.3", "Msc SRH Data Selection Bit"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["3.2.2.1.4.6", "Msc SRL data length", "Variable", "SRLDataLength"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["3.2.2.1.4.9", "Msc Transmission Trigger", "Variable", "MscTransmissionTrigger"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Description", "MscRxClockRatio Rx clock ratio is derived from the synchronous Tx baud rate, dividing it by 2 exp n.", "Screenshot", "Properties"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2.2.1.6", "IOConfiguration", "Container", "IOConfiguration"]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Range", "[MSC_EN_SELECTION_0, MSC_EN_SELECTION_1, MSC_EN_SELECTION_2,", "MSC_EN_SELECTION_3]", "3.2.2.1.6.4"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `content_types`: ["text", "image", "config"]
- `anchors`: ["SynmbolicName", "false", "Default", "false"]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.1 AUTOSAR Major Version"
- `content_types`: ["text"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.5 Software Major Version"
- `content_types`: ["text", "image"]
- `anchors`: ["Default", "Origin", "Flagchip", "3.2.3.5"]

### PAGE-0046
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.9 Vendor ID"
- `content_types`: ["text", "image"]
- `anchors`: ["<ModuleName>_>VendorId>_<VendorApiInfix><Api name from SWS>. E.g. assuming that the VendorId", "of the implementor is 123 and the implementer chose a VendorApiInfix of \"v11r456\" a api name", "Can_Write defined in the SWS will translate to Can_123_v11r456Write. This parameter is mandatory for", "all modules with upper multiplicity > 1. It shall not be used for modules with upper multiplicity =…"]

### PAGE-0047
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 MSC Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "MSC Usage Common Steps", "Basically, the MSC module can be configured by following the below 3 steps:"]

### PAGE-0048
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3)", "Configure PWM if the transmission source is FTU channels.", "4)", "Configure MSC general configurations."]

### PAGE-0049
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["c)", "Config Rx Configuration, IO Configuration and Interrupt Configuration."]

### PAGE-0050
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["d)", "Choose the SRL source is pwm.", "5)", "Generate Configuration files."]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx MSC User Manual"
- `keywords`: ["MSC", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx MSC User Manual; Revision History; 0.1"
- `keywords`: ["MSC", "FC7xxx", "MCAL", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx MSC User Manual; Table of Contents; Chapter 1 MSC Introduction ............................................................................................................................................ 5"
- `keywords`: ["MSC", "CDD_Msc", "CDD_Msc_Cfg", "FC7xxx", "CDD_Msc_PBCfg", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "Msc_ConfigType", "CDD_Msc_LLD", "CDD_Msc_Hw"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Chapter 1 MSC Introduction ................................................................................................................…"
  - `p3`: "1.1"
  - `p3`: "Requirements ..............................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image"]
- `summary`: "Table of Contents: FC7xxx MSC User Manual; 4.2; MSC Channel Demo ....................................................................................................................................... 47"
- `keywords`: ["MSC", "FC7xxx", "Channel", "Demo"]
- `anchors`:
  - `p4`: "4.2"
  - `p4`: "MSC Channel Demo ..........................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 MSC Introduction / 1.1 Requirements"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 1 MSC Introduction / 1.1 Requirements: FC7xxx MSC User Manual; Chapter 1 MSC Introduction; 1.1"
- `keywords`: ["MSC", "SEL", "Msc", "data", "channel", "serial", "FC7300", "FC7xxx", "AUTOSAR", "interface"]
- `anchors`:
  - `p5`: "Chapter 1 MSC Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirements"
  - `p5`: "The design of this module follows the specifications of the Msc driver specified in AUTOSAR Classic Platform Release 4.6.0."

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h: FC7xxx MSC User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["MSC", "CDD_Msc", "define", "definition", "MSC_VENDOR_ID", "MSC_MODULE_ID", "MSC_AR_RELEASE_MAJOR_VERSION", "MSC_AR_RELEASE_MINOR_VERSION", "MSC_AR_RELEASE_REVISION_VERSION", "FC7xxx"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "Rejected Requirements"
  - `p6`: "N/A."

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h: FC7xxx MSC User Manual; #define MSC_SW_MAJOR_VERSION 0; MSC_SW_MAJOR_VERSION definition."
- `keywords`: ["MSC", "define", "called", "MSC_SW_MAJOR_VERSION", "MSC_SW_MINOR_VERSION", "invalid", "FC7xxx", "definition", "MSC_SW_PATCH_VERSION", "SC_SW_PATCH_VERSION"]
- `anchors`:
  - `p7`: "#define MSC_SW_MAJOR_VERSION 0"
  - `p7`: "MSC_SW_MAJOR_VERSION definition."
  - `p7`: "#define MSC_SW_MINOR_VERSION 1"
  - `p7`: "MSC_SW_MINOR_VERSION definition."

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 CDD_Msc_Cfg.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 CDD_Msc_Cfg.h: FC7xxx MSC User Manual; #define MSC_E_RX_BUSY ((uint8)0x0BU); API service used whilertx channel is in invalid status."
- `keywords`: ["MSC", "Msc", "define", "MSC_UNINIT", "NULL_PTR", "states", "SSL", "FC7xxx", "MSC_E_RX_BUSY", "channel"]
- `anchors`:
  - `p8`: "#define MSC_E_RX_BUSY ((uint8)0x0BU)"
  - `p8`: "API service used whilertx channel is in invalid status."
  - `p8`: "#define MSC_UNINIT 0x01U"
  - `p8`: "MSC driver states."

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.1 Msc_TransmissionTriggerType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.1 Msc_TransmissionTriggerType: FC7xxx MSC User Manual; #define MSC_TRANS_SOURCE_DATA_ALTIN_INV 0x3U; SSL[x] is taken from the ALTINL input line x in inverted state."
- `keywords`: ["MSC", "PWM", "Msc", "define", "STD_ON", "OFF", "Msc_TransmissionTriggerType", "transmission", "Msc_TransmissionPolarityType", "FC7xxx"]
- `anchors`:
  - `p9`: "#define MSC_TRANS_SOURCE_DATA_ALTIN_INV 0x3U"
  - `p9`: "SSL[x] is taken from the ALTINL input line x in inverted state."
  - `p9`: "2.3.3"
  - `p9`: "CDD_Msc_PBCfg.h"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.3 Msc_FclActiveType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.3 Msc_FclActiveType: FC7xxx MSC User Manual; Values; Value"
- `keywords`: ["MSC", "FCL", "active", "ChipSelect", "Clock", "Data", "high", "low", "Values", "Msc_FclActiveType"]
- `anchors`:
  - `p10`: "Values"
  - `p10`: "Value"
  - `p10`: "Description"
  - `p10`: "MSC_TX_NORMAL_POLARITY"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.7 Msc_ENxActiveType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.7 Msc_ENxActiveType: FC7xxx MSC User Manual; MSC_BAUDRATE_FMSC_DIV64; Baud rate=fmsc/64."
- `keywords`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected", "Select", "Msc_ENxActiveType", "Enumeration", "Values", "Msc_ENxType"]
- `anchors`:
  - `p11`: "MSC_BAUDRATE_FMSC_DIV64"
  - `p11`: "Baud rate=fmsc/64."
  - `p11`: "MSC_BAUDRATE_FMSC_DIV128"
  - `p11`: "Baud rate=fmsc/128."

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.2 MSC_RDRxIndexType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.2 MSC_RDRxIndexType: FC7xxx MSC User Manual; MSC_CHANNEL_NOT_STARTED; Channel is not started."
- `keywords`: ["MSC", "reception", "register", "data", "MSC_RDRxIndexType", "Msc_APIFunctionIdsType", "Msc_Init", "FC7xxx", "MSC_CHANNEL_NOT_STARTED", "MSC_TX_BUSY"]
- `anchors`:
  - `p12`: "MSC_CHANNEL_NOT_STARTED"
  - `p12`: "Channel is not started."
  - `p12`: "MSC_TX_BUSY"
  - `p12`: "Command transmission in progress."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Msc_TransmissionSourceConfigType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Msc_TransmissionSourceConfigType: FC7xxx MSC User Manual; 2.5; Structures"
- `keywords`: ["MSC", "FCL", "Msc_ENxActiveType", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "SRH", "SRL", "seletion", "FC7xxx", "u8DataSource"]
- `anchors`:
  - `p13`: "2.5"
  - `p13`: "Structures"
  - `p13`: "2.5.1"
  - `p13`: "Msc_TransmissionSourceConfigType"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);: FC7xxx MSC User Manual; uint8 u8InjEnable1. Injection1 enable.; uint8 u8InjPosition1. Injection1 Position."
- `keywords`: ["MSC", "CDD_Msc", "Msc_ConfigType", "Msc_Init", "FC7xxx", "u8InjEnable1", "u8InjPosition1", "Msc_TransmissionSourceConfigType", "tTransSelConfig", "PartitionCoreId"]
- `anchors`:
  - `p14`: "uint8 u8InjEnable1. Injection1 enable."
  - `p14`: "uint8 u8InjPosition1. Injection1 Position."
  - `p14`: "Msc_TransmissionSourceConfigType tTransSelConfig.."
  - `p14`: "2.5.3"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);: FC7xxx MSC User Manual; Diagram; Parameters"
- `keywords`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType", "Msc_StartChannel", "FC7xxx", "Diagram", "Returns", "DeInitializes"]
- `anchors`:
  - `p15`: "Diagram"
  - `p15`: "Parameters"
  - `p15`: "Parameter"
  - `p15`: "Description"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);: FC7xxx MSC User Manual; 2.6.1.4; Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame", "Diagram", "channel"]
- `anchors`:
  - `p16`: "2.6.1.4"
  - `p16`: "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
  - `p16`: "Function"
  - `p16`: "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);: FC7xxx MSC User Manual; Requirements; SWS_CDD_Msc_00048"
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus", "Msc_GetRxStatus16BitFrame", "MSC_RDRxIndexType"]
- `anchors`:
  - `p17`: "Requirements"
  - `p17`: "SWS_CDD_Msc_00048"
  - `p17`: "2.6.1.8"
  - `p17`: "Msc_StatusType Msc_GetTxStatus(uint8 Channel);"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);: FC7xxx MSC User Manual; RxDataBufferPtr; RxDataBufferPtr pointer to pointer to a shadow buffer or memory"
- `keywords`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns", "Msc_ReturnType", "SDIChannel", "ENn", "RxDataBufferPtr", "Msc_SwitchSDIChannel"]
- `anchors`:
  - `p18`: "RxDataBufferPtr"
  - `p18`: "RxDataBufferPtr pointer to pointer to a shadow buffer or memory"
  - `p18`: "mapped MSC Hardware receive buffer where the current SDU is stored."
  - `p18`: "Returns"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.1 void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `content_types`: ["text", "table", "api", "config"]
- `summary`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.1 void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig): FC7xxx MSC User Manual; 2.7; Hardware Functions"
- `keywords`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr", "channel", "const", "Std_ReturnType", "data", "initialized"]
- `anchors`:
  - `p19`: "2.7"
  - `p19`: "Hardware Functions"
  - `p19`: "2.7.1"
  - `p19`: "Functions in CDD_Msc_LLD.h"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.6 Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.6 Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel): FC7xxx MSC User Manual; 2.7.1.6; Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `keywords`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType", "channel", "initialized", "Returns", "CommandBufferPtr", "CommandBufferBitLength"]
- `anchors`:
  - `p20`: "2.7.1.6"
  - `p20`: "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
  - `p20`: "Function"
  - `p20`: "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.11 Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.11 Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel): FC7xxx MSC User Manual; 2.7.1.11; Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `keywords`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE", "MSC_Type", "pMsc", "TCCTR", "eSDIChannel", "channel"]
- `anchors`:
  - `p21`: "2.7.1.11"
  - `p21`: "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
  - `p21`: "Function"
  - `p21`: "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.3 LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.3 LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc): FC7xxx MSC User Manual; Returns; N/A"
- `keywords`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type", "MSCInstance", "Returns", "register", "TCCTR", "DTS"]
- `anchors`:
  - `p22`: "Returns"
  - `p22`: "N/A"
  - `p22`: "2.8.1.3"
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.9 LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.9 LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value): FC7xxx MSC User Manual; pMsc; MSCInstance"
- `keywords`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type", "void", "const", "MSCInstance", "Returns", "Set"]
- `anchors`:
  - `p23`: "pMsc"
  - `p23`: "MSCInstance"
  - `p23`: "Returns"
  - `p23`: "N/A"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.14 LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.14 LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value): FC7xxx MSC User Manual; Returns; N/A"
- `keywords`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type", "void", "MSCInstance", "Returns", "IOCR", "msc"]
- `anchors`:
  - `p24`: "Returns"
  - `p24`: "N/A"
  - `p24`: "2.8.1.14"
  - `p24`: "LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.20 LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.20 LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value): FC7xxx MSC User Manual; Parameters; Parameter"
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register", "MSC_Type", "MSCInstance", "Returns", "u32Value", "RCCSR"]
- `anchors`:
  - `p25`: "Parameters"
  - `p25`: "Parameter"
  - `p25`: "Description"
  - `p25`: "pMsc"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.25 LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.25 LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx): FC7xxx MSC User Manual; 2.8.1.25; LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `keywords`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc", "MSC_Type", "volatile", "register", "Returns", "LAF"]
- `anchors`:
  - `p26`: "2.8.1.25"
  - `p26`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
  - `p26`: "Function"
  - `p26`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value): FC7xxx MSC User Manual; Requirements; 2.8.1.31"
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "void", "const", "u32Value", "MSCInstance", "MSC_HWA_SetRtor"]
- `anchors`:
  - `p27`: "Requirements"
  - `p27`: "2.8.1.31"
  - `p27`: "LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
  - `p27`: "Function"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception: FC7xxx MSC User Manual; 2.9.2; Frame Reception"
- `keywords`: ["MSC", "Msc", "Data", "Msc_GetRxStatus", "FC7xxx", "frame", "Frame", "data", "enabled", "calling"]
- `anchors`:
  - `p28`: "2.9.2"
  - `p28`: "Frame Reception"
  - `p28`: "The following use case shows the reception of a MSC frame. When the Msc receives upstream data frame, it can choose whether"
  - `p28`: "to use interrupts to process the data. If polling mode is enabled, then the Data needs to be read from the Rx Data register of"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception: FC7xxx MSC User Manual"
- `keywords`: ["MSC", "FC7xxx"]
- `anchors`:
  - `p29`: "no body anchor extracted"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection: FC7xxx MSC User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["MSC", "Msc", "MscGeneral", "FC7xxx", "IDENTIFIABLE", "MscDevErrorDetect", "Tresos", "Inclusion", "Relation", "inclusion"]
- `anchors`:
  - `p30`: "Chapter 3 Tresos Configuration Items"
  - `p30`: "3.1"
  - `p30`: "Container Inclusion Relation"
  - `p30`: "The container inclusion relation is shown below:"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.2 Provide Msc VersionInfo Api"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.2 Provide Msc VersionInfo Api: FC7xxx MSC User Manual; Description; MscDevErrorDetect Switches the Development Error Detection and Notification ON or OFF."
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property", "Default", "Origin"]
- `anchors`:
  - `p31`: "Description"
  - `p31`: "MscDevErrorDetect Switches the Development Error Detection and Notification ON or OFF."
  - `p31`: "Screenshot"
  - `p31`: "Properties"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.6 Msc Use Polling"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.6 Msc Use Polling: FC7xxx MSC User Manual; Description; MscDisableDemReportErrorStatus Switches the Diagnostic Error Reporting and Notification OFF."
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "BOOLEAN", "SynmbolicName", "MscPollingUse", "MscEcucPartitionRef", "MscDemEventParameterRefs"]
- `anchors`:
  - `p32`: "Description"
  - `p32`: "MscDisableDemReportErrorStatus Switches the Diagnostic Error Reporting and Notification OFF."
  - `p32`: "Screenshot"
  - `p32`: "Properties"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error: FC7xxx MSC User Manual; 3.2.1.8.1; Msc Timeout Dem Error"
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE", "FC7xxx", "Variable"]
- `anchors`:
  - `p33`: "3.2.1.8.1"
  - `p33`: "Msc Timeout Dem Error"
  - `p33`: "Variable"
  - `p33`: "MSC_E_TIMEOUT"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit): FC7xxx MSC User Manual; Properties; Property"
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength", "MscChannelEcucPartitionRef", "Screenshot"]
- `anchors`:
  - `p34`: "Properties"
  - `p34`: "Property"
  - `p34`: "Value"
  - `p34`: "Type"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit: FC7xxx MSC User Manual; Origin; Flagchip"
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain", "selection", "bit"]
- `anchors`:
  - `p35`: "Origin"
  - `p35`: "Flagchip"
  - `p35`: "3.2.2.1.4.3"
  - `p35`: "Msc SRH Data Selection Bit"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length: FC7xxx MSC User Manual; 3.2.2.1.4.6; Msc SRL data length"
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low", "SynmbolicName", "MSC_TX_NORMAL_POLARITY"]
- `anchors`:
  - `p36`: "3.2.2.1.4.6"
  - `p36`: "Msc SRL data length"
  - `p36`: "Variable"
  - `p36`: "SRLDataLength"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger: FC7xxx MSC User Manual; 3.2.2.1.4.9; Msc Transmission Trigger"
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties", "Property", "SynmbolicName"]
- `anchors`:
  - `p37`: "3.2.2.1.4.9"
  - `p37`: "Msc Transmission Trigger"
  - `p37`: "Variable"
  - `p37`: "MscTransmissionTrigger"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.2 Msc Channel Rx baudrate: FC7xxx MSC User Manual; Description; MscRxClockRatio Rx clock ratio is derived from the synchronous Tx baud rate, dividing it by 2 exp n."
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Screenshot", "Properties", "Property", "INTEGER", "Origin", "MscChannelRxBaudRate", "ENUMERATION"]
- `anchors`:
  - `p38`: "Description"
  - `p38`: "MscRxClockRatio Rx clock ratio is derived from the synchronous Tx baud rate, dividing it by 2 exp n."
  - `p38`: "Screenshot"
  - `p38`: "Properties"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection: FC7xxx MSC User Manual; 3.2.2.1.6; IOConfiguration"
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property", "SDI0", "SDI_POLARITY_INDENTICAL"]
- `anchors`:
  - `p39`: "3.2.2.1.6"
  - `p39`: "IOConfiguration"
  - `p39`: "Container"
  - `p39`: "IOConfiguration"

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL: FC7xxx MSC User Manual; Range; [MSC_EN_SELECTION_0, MSC_EN_SELECTION_1, MSC_EN_SELECTION_2,"
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2", "MSC_EN_SELECTION_3", "ChipSelect", "ENL", "ENUMERATION", "SynmbolicName"]
- `anchors`:
  - `p40`: "Range"
  - `p40`: "[MSC_EN_SELECTION_0, MSC_EN_SELECTION_1, MSC_EN_SELECTION_2,"
  - `p40`: "MSC_EN_SELECTION_3]"
  - `p40`: "3.2.2.1.6.4"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection: FC7xxx MSC User Manual; Screenshot; Properties"
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx", "Screenshot", "Properties"]
- `anchors`:
  - `p41`: "Screenshot"
  - `p41`: "Properties"
  - `p41`: "Property"
  - `p41`: "Value"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay: FC7xxx MSC User Manual; Screenshot; Properties"
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "InterruptConfiguration", "IDENTIFIABLE", "Injection", "INTEGER", "SynmbolicName"]
- `anchors`:
  - `p42`: "Screenshot"
  - `p42`: "Properties"
  - `p42`: "Property"
  - `p42`: "Value"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `content_types`: ["text", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value: FC7xxx MSC User Manual; SynmbolicName; false"
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING", "RxReceiveNotification", "CommonPublishedInformation"]
- `anchors`:
  - `p43`: "SynmbolicName"
  - `p43`: "false"
  - `p43`: "Default"
  - `p43`: "false"

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.1 AUTOSAR Major Version"
- `content_types`: ["text"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.1 AUTOSAR Major Version: FC7xxx MSC User Manual; Properties; Property"
- `keywords`: ["MSC", "AUTOSAR", "INTEGER_LABEL", "SynmbolicName", "Properties", "Property", "Variable", "Screenshot", "FC7xxx", "IDENTIFIABLE"]
- `anchors`:
  - `p44`: "Properties"
  - `p44`: "Property"
  - `p44`: "Value"
  - `p44`: "Type"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.5 Software Major Version"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.5 Software Major Version: FC7xxx MSC User Manual; Default; Origin"
- `keywords`: ["MSC", "specific", "vendor", "INTEGER_LABEL", "SynmbolicName", "Default", "Origin", "Variable", "implementation", "name"]
- `anchors`:
  - `p45`: "Default"
  - `p45`: "Origin"
  - `p45`: "Flagchip"
  - `p45`: "3.2.3.5"

### SEG-0046
- `physical_pages`: `46`
- `printed_pages`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.9 Vendor ID"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.9 Vendor ID: FC7xxx MSC User Manual; <ModuleName>_>VendorId>_<VendorApiInfix><Api name from SWS>. E.g. assuming that the VendorId; of the implementor is 123 and the implementer chose a VendorApiInfix of \"v11r…"
- `keywords`: ["MSC", "VendorId", "VendorApiInfix", "SWS", "SynmbolicName", "FC7xxx", "ModuleName", "Can_Write", "Can_123_v11r456Write", "STRING_LABEL"]
- `anchors`:
  - `p46`: "<ModuleName>_>VendorId>_<VendorApiInfix><Api name from SWS>. E.g. assuming that the VendorId"
  - `p46`: "of the implementor is 123 and the implementer chose a VendorApiInfix of \"v11r456\" a api name"
  - `p46`: "Can_Write defined in the SWS will translate to Can_123_v11r456Write. This parameter is mandatory for"
  - `p46`: "all modules with upper multiplicity > 1. It shall not be used for modules with upper multiplicity =1."

### SEG-0047
- `physical_pages`: `47`
- `printed_pages`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 MSC Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 MSC Usage Common Steps: FC7xxx MSC User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["MSC", "PWM", "Configure", "MCU", "FC7xxx", "enable", "FTU", "FCLP", "clock", "Enable"]
- `anchors`:
  - `p47`: "Chapter 4 Configuration Guides"
  - `p47`: "4.1"
  - `p47`: "MSC Usage Common Steps"
  - `p47`: "Basically, the MSC module can be configured by following the below 3 steps:"

### SEG-0048
- `physical_pages`: `48`
- `printed_pages`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo: FC7xxx MSC User Manual; 3); Configure PWM if the transmission source is FTU channels."
- `keywords`: ["MSC", "PWM", "Msc", "Configure", "FC7xxx", "FTU", "general", "transmission", "channels", "configurations"]
- `anchors`:
  - `p48`: "3)"
  - `p48`: "Configure PWM if the transmission source is FTU channels."
  - `p48`: "4)"
  - `p48`: "Configure MSC general configurations."

### SEG-0049
- `physical_pages`: `49`
- `printed_pages`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo: FC7xxx MSC User Manual; c); Config Rx Configuration, IO Configuration and Interrupt Configuration."
- `keywords`: ["MSC", "FC7xxx", "Config", "Interrupt"]
- `anchors`:
  - `p49`: "c)"
  - `p49`: "Config Rx Configuration, IO Configuration and Interrupt Configuration."

### SEG-0050
- `physical_pages`: `50`
- `printed_pages`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo: FC7xxx MSC User Manual; d); Choose the SRL source is pwm."
- `keywords`: ["MSC", "FC7xxx", "SRL", "Choose", "pwm", "Generate"]
- `anchors`:
  - `p50`: "d)"
  - `p50`: "Choose the SRL source is pwm."
  - `p50`: "5)"
  - `p50`: "Generate Configuration files."

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Revision History"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Revision History"
- `bbox`: `None`
- `key_fields`: ["Revision", "Date", "Changes"]
- `summary`: "Indexes table-like source content for Revision History; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Revision History"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0003-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0003-001"
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Rejected Requirement table-like panels; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Rejected Requirement table-like panels"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Rejected Requirement table-like panels; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Rejected Requirement table-like panels"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Table-like content on page 7"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `bbox`: `None`
- `key_fields`: ["MSC", "define", "called", "MSC_SW_MAJOR_VERSION", "MSC_SW_MINOR_VERSION"]
- `summary`: "Indexes table-like source content for Table-like content on page 7; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 7"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Table-like content on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 CDD_Msc_Cfg.h"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "define", "MSC_UNINIT", "NULL_PTR"]
- `summary`: "Indexes table-like source content for Table-like content on page 8; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 8"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Table-like content on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.1 Msc_TransmissionTriggerType"
- `bbox`: `None`
- `key_fields`: ["MSC", "PWM", "Msc", "define", "STD_ON"]
- `summary`: "Indexes table-like source content for Table-like content on page 9; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 9"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like content on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.3 Msc_FclActiveType"
- `bbox`: `None`
- `key_fields`: ["MSC", "FCL", "active", "ChipSelect", "Clock"]
- `summary`: "Indexes table-like source content for Table-like content on page 10; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 10"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0011-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-001"
- `caption`: "Table-like content on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_Msc_Cfg.h / 2.4.1.7 Msc_ENxActiveType"
- `bbox`: `None`
- `key_fields`: ["MSC", "CDD_Msc", "Msc", "SDI", "selected"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.2 Enums in CDD_Msc.h / 2.4.2.2 MSC_RDRxIndexType"
- `bbox`: `None`
- `key_fields`: ["MSC", "reception", "register", "data", "MSC_RDRxIndexType"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like content on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Msc_TransmissionSourceConfigType"
- `bbox`: `None`
- `key_fields`: ["MSC", "FCL", "Msc_ENxActiveType", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0014-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0014-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `14`
- `printed_pages`: ["14"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `bbox`: `None`
- `key_fields`: ["MSC", "CDD_Msc", "Msc_ConfigType", "Msc_Init", "FC7xxx"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Table-like content on page 15"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `bbox`: `None`
- `key_fields`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType"]
- `summary`: "Indexes table-like source content for Table-like content on page 15; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 15"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0016-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-001"
- `caption`: "Table-like content on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `bbox`: `None`
- `key_fields`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr"]
- `summary`: "Indexes table-like source content for Table-like content on page 16; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 16"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0017-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-001"
- `caption`: "Table-like content on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `bbox`: `None`
- `key_fields`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex"]
- `summary`: "Indexes table-like source content for Table-like content on page 17; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 17"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0018-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-001"
- `caption`: "Table-like content on page 18"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `bbox`: `None`
- `key_fields`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns"]
- `summary`: "Indexes table-like source content for Table-like content on page 18; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 18"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0019-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.1 void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `bbox`: `None`
- `key_fields`: ["MSC", "PWM", "u8Channel", "void", "DataBufferPtr"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0020-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-001"
- `caption`: "Table-like content on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.6 Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `bbox`: `None`
- `key_fields`: ["MSC", "PWM", "u8Channel", "Msc_StatusType", "MSC_RDRxIndexType"]
- `summary`: "Indexes table-like source content for Table-like content on page 20; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 20"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0021-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 2 Software Design / 2.7 Hardware Functions / 2.7.1 Functions in CDD_Msc_LLD.h / 2.7.1.11 Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `bbox`: `None`
- `key_fields`: ["MSC", "Std_ReturnType", "u8Channel", "void", "LOCAL_INLINE"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0022-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-001"
- `caption`: "Table-like content on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.3 LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
- `bbox`: `None`
- `key_fields`: ["MSC", "const", "pMsc", "LOCAL_INLINE", "MSC_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 22; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 22"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0023-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-001"
- `caption`: "Table-like content on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.9 LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["MSC", "pMsc", "u32Value", "LOCAL_INLINE", "MSC_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 23; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 23"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0024-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-001"
- `caption`: "Table-like content on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.14 LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["MSC", "pMsc", "const", "LOCAL_INLINE", "MSC_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 24; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 24"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Table-like content on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.20 LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["MSC", "LOCAL_INLINE", "const", "pMsc", "register"]
- `summary`: "Indexes table-like source content for Table-like content on page 25; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 25"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0026-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0026-001"
- `caption`: "Table-like content on page 26"
- `physical_pages`: `26`
- `printed_pages`: ["26"]
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.25 LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `bbox`: `None`
- `key_fields`: ["MSC", "LOCAL_INLINE", "const", "pRdrx", "pMsc"]
- `summary`: "Indexes table-like source content for Table-like content on page 26; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 26"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0027-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0027-001"
- `caption`: "Table-like content on page 27"
- `physical_pages`: `27`
- `printed_pages`: ["27"]
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type"]
- `summary`: "Indexes table-like source content for Table-like content on page 27; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 27"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0030-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0030-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `30`
- `printed_pages`: ["30"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "MscGeneral", "FC7xxx", "IDENTIFIABLE"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0033-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0033-001"
- `caption`: "Table-like content on page 33"
- `physical_pages`: `33`
- `printed_pages`: ["33"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig"]
- `summary`: "Indexes table-like source content for Table-like content on page 33; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 33"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0035-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0035-001"
- `caption`: "Table-like content on page 35"
- `physical_pages`: `35`
- `printed_pages`: ["35"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE"]
- `summary`: "Indexes table-like source content for Table-like content on page 35; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 35"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0036-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0036-001"
- `caption`: "Table-like content on page 36"
- `physical_pages`: `36`
- `printed_pages`: ["36"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "active", "ChipSelect", "Clock"]
- `summary`: "Indexes table-like source content for Table-like content on page 36; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 36"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0037-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0037-001"
- `caption`: "Table-like content on page 37"
- `physical_pages`: `37`
- `printed_pages`: ["37"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable"]
- `summary`: "Indexes table-like source content for Table-like content on page 37; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 37"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0038-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0038-001"
- `caption`: "Table-like content on page 38"
- `physical_pages`: `38`
- `printed_pages`: ["38"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "SynmbolicName", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 38; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 38"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0039-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0039-001"
- `caption`: "Table-like content on page 39"
- `physical_pages`: `39`
- `printed_pages`: ["39"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration"]
- `summary`: "Indexes table-like source content for Table-like content on page 39; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 39"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0040-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0040-001"
- `caption`: "Table-like content on page 40"
- `physical_pages`: `40`
- `printed_pages`: ["40"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `bbox`: `None`
- `key_fields`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2"]
- `summary`: "Indexes table-like source content for Table-like content on page 40; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 40"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0041-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0041-001"
- `caption`: "Table-like content on page 41"
- `physical_pages`: `41`
- `printed_pages`: ["41"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `bbox`: `None`
- `key_fields`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN"]
- `summary`: "Indexes table-like source content for Table-like content on page 41; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 41"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

## 7. Figure / Image Index

### FIG-0003-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0003-001"
- `caption`: "Generated visual anchor: Table of Contents"
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around Table of Contents; generated for retrieval because no formal figure number was detected."
- `keywords`: ["MSC", "CDD_Msc", "CDD_Msc_Cfg", "FC7xxx", "CDD_Msc_PBCfg", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "Msc_ConfigType"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0004-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0004-001"
- `caption`: "Generated visual anchor: Table of Contents"
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around Table of Contents; generated for retrieval because no formal figure number was detected."
- `keywords`: ["MSC", "FC7xxx", "Channel", "Demo"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0006-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "Image block near 2.3.1 CDD_Msc.h"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 CDD_Msc.h"
- `bbox`: `[36.0, 183.34, 559.3, 439.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 CDD_Msc.h; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "CDD_Msc", "define", "definition", "MSC_VENDOR_ID", "MSC_MODULE_ID", "MSC_AR_RELEASE_MAJOR_VERSION", "MSC_AR_RELEASE_MINOR_VERSION"]
- `anchor`: "Image block near 2.3.1 CDD_Msc.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0013-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-001"
- `caption`: "Image block near 2.5.1 Msc_TransmissionSourceConfigType"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures / 2.5.1 Msc_TransmissionSourceConfigType"
- `bbox`: `[116.3, 231.68, 301.85, 326.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.5.1 Msc_TransmissionSourceConfigType; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "FCL", "Msc_ENxActiveType", "Msc_TransmissionSourceConfigType", "Msc_ChannelConfigType", "SRH", "SRL", "seletion"]
- `anchor`: "Image block near 2.5.1 Msc_TransmissionSourceConfigType"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0014-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-001"
- `caption`: "Image block near 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `bbox`: `[116.3, 166.78, 301.85, 328.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "CDD_Msc", "Msc_ConfigType", "Msc_Init", "FC7xxx", "u8InjEnable1", "u8InjPosition1", "Msc_TransmissionSourceConfigType"]
- `anchor`: "Image block near 2.6.1.1 void Msc_Init(const Msc_ConfigType *Config);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-001"
- `caption`: "Image block near 2.6.1.2 void Msc_DeInit(void);"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `bbox`: `[119.4, 37.4, 432.3, 360.79]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.2 void Msc_DeInit(void);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType", "Msc_StartChannel", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.6.1.2 void Msc_DeInit(void);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0015-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-002"
- `caption`: "Image block near 2.6.1.2 void Msc_DeInit(void);"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `bbox`: `[119.4, 495.46, 457.26, 535.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.2 void Msc_DeInit(void);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType", "Msc_StartChannel", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.6.1.2 void Msc_DeInit(void);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0015-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-003"
- `caption`: "Image block near 2.6.1.2 void Msc_DeInit(void);"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.2 void Msc_DeInit(void);"
- `bbox`: `[119.4, 646.59, 426.71, 693.54]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.2 void Msc_DeInit(void);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "void", "Msc_DeInit", "Std_ReturnType", "Msc_StartChannel", "FC7xxx", "Diagram"]
- `anchor`: "Image block near 2.6.1.2 void Msc_DeInit(void);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `bbox`: `[119.4, 89.21, 422.82, 110.61]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-002"
- `caption`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `bbox`: `[119.4, 256.11, 440.92, 303.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-003"
- `caption`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `bbox`: `[119.4, 449.62, 426.06, 496.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-004"
- `caption`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `bbox`: `[118.75, 658.46, 418.64, 700.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Channel", "Std_ReturnType", "Msc_DataBufferPtr", "Msc_CommandBufferPtr", "Msc_CommandBufferBitLength", "Msc_SetDataFrame"]
- `anchor`: "Image block near 2.6.1.4 Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `bbox`: `[119.4, 130.08, 400.7, 171.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus"]
- `anchor`: "Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-002"
- `caption`: "Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `bbox`: `[119.4, 300.15, 393.47, 416.2]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus"]
- `anchor`: "Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-003"
- `caption`: "Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `bbox`: `[119.4, 612.52, 435.82, 727.42]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Channel", "Msc_StatusType", "RxDataBufferPtr", "RxIndex", "Msc_GetTxStatus", "Msc_ReturnType", "Msc_GetRxStatus"]
- `anchor`: "Image block near 2.6.1.8 Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `bbox`: `[119.4, 164.46, 422.18, 231.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns", "Msc_ReturnType", "SDIChannel", "ENn"]
- `anchor`: "Image block near 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.6 API Functions / 2.6.1 Functions in CDD_Msc.h / 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `bbox`: `[119.4, 377.46, 376.49, 510.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Std_ReturnType", "Channel", "channel", "Returns", "Msc_ReturnType", "SDIChannel", "ENn"]
- `anchor`: "Image block near 2.6.1.11 Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-001"
- `caption`: "Generated visual anchor: 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 2 Software Design / 2.8 Peripheral Functions / 2.8.1 Functions in CDD_Msc_Hw.h / 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value); generated for retrieval because no formal figure number was detected."
- `keywords`: ["MSC", "Msc", "pMsc", "LOCAL_INLINE", "MSC_Type", "void", "const", "u32Value"]
- `anchor`: "2.8.1.31 LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Image block near 2.9.2 Frame Reception"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `bbox`: `[110.9, 36.9, 484.1, 535.49]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.2 Frame Reception; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "Data", "Msc_GetRxStatus", "FC7xxx", "frame", "Frame", "data"]
- `anchor`: "Image block near 2.9.2 Frame Reception"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Image block near 2.9.2 Frame Reception"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Frame Reception"
- `bbox`: `[147.43, 36.89, 447.88, 439.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.2 Frame Reception; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "FC7xxx"]
- `anchor`: "Image block near 2.9.2 Frame Reception"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 3.2.1.1 Msc Development Error Detection"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection"
- `bbox`: `[93.65, 145.7, 501.64, 539.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.1 Msc Development Error Detection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MscGeneral", "FC7xxx", "IDENTIFIABLE", "MscDevErrorDetect", "Tresos", "Inclusion"]
- `anchor`: "Image block near 3.2.1.1 Msc Development Error Detection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-002"
- `caption`: "Image block near 3.2.1.1 Msc Development Error Detection"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.1 Msc Development Error Detection"
- `bbox`: `[125.65, 650.98, 378.25, 689.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.1 Msc Development Error Detection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MscGeneral", "FC7xxx", "IDENTIFIABLE", "MscDevErrorDetect", "Tresos", "Inclusion"]
- `anchor`: "Image block near 3.2.1.1 Msc Development Error Detection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 3.2.1.2 Provide Msc VersionInfo Api"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.2 Provide Msc VersionInfo Api"
- `bbox`: `[125.2, 56.12, 438.57, 72.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.2 Provide Msc VersionInfo Api; use the source PDF page for exact visual details."
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.1.2 Provide Msc VersionInfo Api"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-002"
- `caption`: "Image block near 3.2.1.2 Provide Msc VersionInfo Api"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.2 Provide Msc VersionInfo Api"
- `bbox`: `[124.25, 611.45, 493.11, 628.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.2 Provide Msc VersionInfo Api; use the source PDF page for exact visual details."
- `keywords`: ["Msc", "MSC", "SynmbolicName", "OFF", "BOOLEAN", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.1.2 Provide Msc VersionInfo Api"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 3.2.1.6 Msc Use Polling"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.6 Msc Use Polling"
- `bbox`: `[126.1, 431.53, 256.3, 482.53]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.6 Msc Use Polling; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "BOOLEAN", "SynmbolicName", "MscPollingUse"]
- `anchor`: "Image block near 3.2.1.6 Msc Use Polling"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-002"
- `caption`: "Image block near 3.2.1.6 Msc Use Polling"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.6 Msc Use Polling"
- `bbox`: `[125.8, 661.41, 345.21, 695.58]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.6 Msc Use Polling; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "BOOLEAN", "SynmbolicName", "MscPollingUse"]
- `anchor`: "Image block near 3.2.1.6 Msc Use Polling"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `bbox`: `[124.6, 106.15, 478.96, 124.18]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.8.1 Msc Timeout Dem Error; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-002"
- `caption`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `bbox`: `[125.85, 255.04, 332.63, 291.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.8.1 Msc Timeout Dem Error; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-003"
- `caption`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `bbox`: `[125.85, 420.1, 323.08, 475.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.8.1 Msc Timeout Dem Error; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-004"
- `caption`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 MscGeneral / 3.2.1.8 MscDemEventParameterRefs / 3.2.1.8.1 Msc Timeout Dem Error"
- `bbox`: `[125.0, 767.61, 412.23, 785.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1.8.1 Msc Timeout Dem Error; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MscChannel", "Screenshot", "MscGlobalConfig", "Properties", "Property", "IDENTIFIABLE"]
- `anchor`: "Image block near 3.2.1.8.1 Msc Timeout Dem Error"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `bbox`: `[125.8, 361.78, 330.1, 397.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit); use the source PDF page for exact visual details."
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength"]
- `anchor`: "Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-002"
- `caption`: "Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `bbox`: `[124.3, 514.64, 502.41, 528.98]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit); use the source PDF page for exact visual details."
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength"]
- `anchor`: "Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-003"
- `caption`: "Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `bbox`: `[124.35, 696.67, 499.3, 712.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit); use the source PDF page for exact visual details."
- `keywords`: ["Msc", "MSC", "Properties", "Property", "INTEGER", "SynmbolicName", "ECUC", "MscPassvieFrameLength"]
- `anchor`: "Image block near 3.2.2.1.4.1 Msc Passive Frame Length(bit)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `bbox`: `[122.4, 168.0, 528.89, 185.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain"]
- `anchor`: "Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-002"
- `caption`: "Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `bbox`: `[122.8, 386.25, 501.7, 403.61]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain"]
- `anchor`: "Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-003"
- `caption`: "Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `bbox`: `[121.65, 603.97, 531.03, 623.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "DataFrame", "data", "MSC_DATA_SELECTION_BIT_ENABLE", "MSC_DATA_SELECTION_BIT_DISABLE", "SRH", "contain"]
- `anchor`: "Image block near 3.2.2.1.4.3 Msc SRH Data Selection Bit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 3.2.2.1.4.6 Msc SRL data length"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `bbox`: `[124.1, 89.21, 507.5, 107.81]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.6 Msc SRL data length; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "Image block near 3.2.2.1.4.6 Msc SRL data length"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-002"
- `caption`: "Image block near 3.2.2.1.4.6 Msc SRL data length"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `bbox`: `[123.65, 393.55, 508.94, 410.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.6 Msc SRL data length; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "Image block near 3.2.2.1.4.6 Msc SRL data length"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-003"
- `caption`: "Image block near 3.2.2.1.4.6 Msc SRL data length"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.6 Msc SRL data length"
- `bbox`: `[124.0, 645.49, 510.63, 662.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.6 Msc SRL data length; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "active", "ChipSelect", "Clock", "Data", "high", "low"]
- `anchor`: "Image block near 3.2.2.1.4.6 Msc SRL data length"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `bbox`: `[123.6, 107.48, 511.2, 123.08]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.9 Msc Transmission Trigger; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `bbox`: `[124.1, 324.84, 497.61, 341.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.9 Msc Transmission Trigger; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-003"
- `caption`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `bbox`: `[121.45, 508.22, 540.05, 524.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.9 Msc Transmission Trigger; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-004"
- `caption`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.4 TxConfiguration / 3.2.2.1.4.9 Msc Transmission Trigger"
- `bbox`: `[125.8, 652.79, 334.87, 688.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.4.9 Msc Transmission Trigger; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "FCL", "MSC_TX_TRIGGER_SINGLE", "Variable", "MSC_TX_TRIGGER_CONTINUOUS", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.2.1.4.9 Msc Transmission Trigger"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.5 RxConfiguration / 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `bbox`: `[125.55, 405.15, 391.05, 424.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.5.2 Msc Channel Rx baudrate; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Screenshot", "Properties", "Property", "INTEGER", "Origin"]
- `anchor`: "Image block near 3.2.2.1.5.2 Msc Channel Rx baudrate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `bbox`: `[125.95, 89.21, 344.88, 130.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-002"
- `caption`: "Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `bbox`: `[125.45, 244.34, 414.9, 262.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-003"
- `caption`: "Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `bbox`: `[125.3, 648.18, 431.9, 670.38]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "ENUMERATION", "SynmbolicName", "IOConfiguration", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.2.1.6.1 Msc Serialized Input IO selection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `bbox`: `[125.45, 369.28, 413.12, 387.86]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.6.4 Msc ChipSelect For ENL; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2", "MSC_EN_SELECTION_3", "ChipSelect", "ENL"]
- `anchor`: "Image block near 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.6 IOConfiguration / 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `bbox`: `[125.6, 584.75, 327.76, 617.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.6.4 Msc ChipSelect For ENL; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "MSC_EN_SELECTION_0", "MSC_EN_SELECTION_1", "MSC_EN_SELECTION_2", "MSC_EN_SELECTION_3", "ChipSelect", "ENL"]
- `anchor`: "Image block near 3.2.2.1.6.4 Msc ChipSelect For ENL"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 3.2.2.1.7.2 Source Selection"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `bbox`: `[125.9, 37.4, 273.3, 103.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.7.2 Source Selection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1.7.2 Source Selection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-002"
- `caption`: "Image block near 3.2.2.1.7.2 Source Selection"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `bbox`: `[126.05, 287.77, 230.36, 350.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.7.2 Source Selection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1.7.2 Source Selection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-003"
- `caption`: "Image block near 3.2.2.1.7.2 Source Selection"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.7 MscTransSource / 3.2.2.1.7.2 Source Selection"
- `bbox`: `[126.05, 535.2, 308.87, 577.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.7.2 Source Selection; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "SOURCE_DATA_REG", "SynmbolicName", "ENUMERATION", "SOURCE_DATA_ALTIN", "SOURCE_DATA_ALTIN_INV", "MscInjection", "FC7xxx"]
- `anchor`: "Image block near 3.2.2.1.7.2 Source Selection"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 3.2.2.1.8.1 Msc Interrupt Delay"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay"
- `bbox`: `[125.8, 37.4, 348.72, 73.95]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.1 Msc Interrupt Delay; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "InterruptConfiguration", "IDENTIFIABLE", "Injection"]
- `anchor`: "Image block near 3.2.2.1.8.1 Msc Interrupt Delay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-002"
- `caption`: "Image block near 3.2.2.1.8.1 Msc Interrupt Delay"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay"
- `bbox`: `[125.8, 580.33, 343.6, 618.13]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.1 Msc Interrupt Delay; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "InterruptConfiguration", "IDENTIFIABLE", "Injection"]
- `anchor`: "Image block near 3.2.2.1.8.1 Msc Interrupt Delay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-003"
- `caption`: "Image block near 3.2.2.1.8.1 Msc Interrupt Delay"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.1 Msc Interrupt Delay"
- `bbox`: `[125.6, 732.76, 411.88, 750.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.1 Msc Interrupt Delay; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "Screenshot", "Properties", "Property", "InterruptConfiguration", "IDENTIFIABLE", "Injection"]
- `anchor`: "Image block near 3.2.2.1.8.1 Msc Interrupt Delay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `bbox`: `[123.8, 169.0, 506.5, 185.79]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.2 Msc Rx Timeout Value; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-002"
- `caption`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `bbox`: `[124.4, 352.84, 456.34, 371.99]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.2 Msc Rx Timeout Value; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-003"
- `caption`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `bbox`: `[124.65, 539.28, 458.11, 558.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.2 Msc Rx Timeout Value; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-004"
- `caption`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 MscGlobalConfig / 3.2.2.1 MscChannel / 3.2.2.1.8 InterruptConfiguration / 3.2.2.1.8.2 Msc Rx Timeout Value"
- `bbox`: `[125.8, 740.39, 339.9, 777.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1.8.2 Msc Rx Timeout Value; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "Msc", "SynmbolicName", "Default", "Origin", "Screenshot", "RxTimeoutNotification", "STRING"]
- `anchor`: "Image block near 3.2.2.1.8.2 Msc Rx Timeout Value"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 3.2.3.5 Software Major Version"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.5 Software Major Version"
- `bbox`: `[125.25, 363.22, 488.54, 378.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.5 Software Major Version; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "specific", "vendor", "INTEGER_LABEL", "SynmbolicName", "Default", "Origin", "Variable"]
- `anchor`: "Image block near 3.2.3.5 Software Major Version"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-001"
- `caption`: "Image block near 3.2.3.9 Vendor ID"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.9 Vendor ID"
- `bbox`: `[125.8, 107.59, 487.14, 122.47]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.9 Vendor ID; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "VendorId", "VendorApiInfix", "SWS", "SynmbolicName", "FC7xxx", "ModuleName", "Can_Write"]
- `anchor`: "Image block near 3.2.3.9 Vendor ID"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0046-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0046-002"
- `caption`: "Image block near 3.2.3.9 Vendor ID"
- `physical_page`: `46`
- `printed_page`: `46`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 CommonPublishedInformation / 3.2.3.9 Vendor ID"
- `bbox`: `[126.0, 269.43, 465.63, 285.47]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.9 Vendor ID; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "VendorId", "VendorApiInfix", "SWS", "SynmbolicName", "FC7xxx", "ModuleName", "Can_Write"]
- `anchor`: "Image block near 3.2.3.9 Vendor ID"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-001"
- `caption`: "Image block near 4.1 MSC Usage Common Steps"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 MSC Usage Common Steps"
- `bbox`: `[36.0, 280.03, 559.3, 557.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 MSC Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Configure", "MCU", "FC7xxx", "enable", "FTU", "FCLP"]
- `anchor`: "Image block near 4.1 MSC Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0047-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0047-002"
- `caption`: "Image block near 4.1 MSC Usage Common Steps"
- `physical_page`: `47`
- `printed_page`: `47`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 MSC Usage Common Steps"
- `bbox`: `[36.0, 597.41, 559.3, 752.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 MSC Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Configure", "MCU", "FC7xxx", "enable", "FTU", "FCLP"]
- `anchor`: "Image block near 4.1 MSC Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-001"
- `caption`: "Image block near 4.2 MSC Channel Demo"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `bbox`: `[36.0, 53.83, 559.3, 292.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 MSC Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Msc", "Configure", "FC7xxx", "FTU", "general", "transmission"]
- `anchor`: "Image block near 4.2 MSC Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0048-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0048-002"
- `caption`: "Image block near 4.2 MSC Channel Demo"
- `physical_page`: `48`
- `printed_page`: `48`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `bbox`: `[36.0, 361.55, 559.3, 627.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 MSC Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "PWM", "Msc", "Configure", "FC7xxx", "FTU", "general", "transmission"]
- `anchor`: "Image block near 4.2 MSC Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-001"
- `caption`: "Image block near 4.2 MSC Channel Demo"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `bbox`: `[36.0, 36.9, 559.3, 372.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 MSC Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "FC7xxx", "Config", "Interrupt"]
- `anchor`: "Image block near 4.2 MSC Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0049-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0049-002"
- `caption`: "Image block near 4.2 MSC Channel Demo"
- `physical_page`: `49`
- `printed_page`: `49`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `bbox`: `[36.0, 423.97, 559.3, 731.72]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 MSC Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "FC7xxx", "Config", "Interrupt"]
- `anchor`: "Image block near 4.2 MSC Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0050-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0050-001"
- `caption`: "Image block near 4.2 MSC Channel Demo"
- `physical_page`: `50`
- `printed_page`: `50`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 MSC Channel Demo"
- `bbox`: `[104.15, 59.83, 490.51, 352.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 MSC Channel Demo; use the source PDF page for exact visual details."
- `keywords`: ["MSC", "FC7xxx", "SRL", "Choose", "pwm", "Generate"]
- `anchor`: "Image block near 4.2 MSC Channel Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-MSC-INIT
- `name`: "Msc_Init"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,14,27`
- `brief`: "api index entry for `Msc_Init`."
- `anchors`:
  - `p12`: "Msc_Init()ID"
  - `p14`: "void Msc_Init(const Msc_ConfigType *Config);"
  - `p27`: "In Continuous Mode, the Msc_Init function is first called to initialize the Msc peripheral, and then Msc_SetDataFrame is called"
- `aliases`: []

### API-MSC-GETRXSTATUS
- `name`: "Msc_GetRxStatus"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,17,28`
- `brief`: "api index entry for `Msc_GetRxStatus`."
- `anchors`:
  - `p12`: "Msc_GetRxStatus() ID."
  - `p17`: "Msc_StatusType Msc_GetRxStatus(uint8 Channel, uint16 **RxDataBufferPtr);"
  - `p28`: "the Msc by calling Msc_GetRxStatus from the upper application. If the interrupt is enabled, the Data Frame is copied into the"
- `aliases`: []

### API-MSC-GETVERSIONINFO
- `name`: "Msc_GetVersionInfo"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,18,31`
- `brief`: "api index entry for `Msc_GetVersionInfo`."
- `anchors`:
  - `p12`: "Msc_GetVersionInfo() ID."
  - `p18`: "void Msc_GetVersionInfo(Std_VersionInfoType *versioninfo);"
  - `p31`: "MscVersionInfoApi Switches the Msc_GetVersionInfo function ON or OFF."
- `aliases`: []

### API-MSC-SENDCOMMANDFRAME
- `name`: "Msc_SendCommandFrame"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,16,27`
- `brief`: "api index entry for `Msc_SendCommandFrame`."
- `anchors`:
  - `p12`: "Msc_SendCommandFrame() ID."
  - `p16`: "Msc_SendCommandFrame(uint8"
  - `p27`: "sends the Command frame after calling Msc_SendCommandFrame. If it is Trigger Mode, then the Msc will not actively send"
- `aliases`: []

### API-MSC-SENDDATAFRAME
- `name`: "Msc_SendDataFrame"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,16,27`
- `brief`: "api index entry for `Msc_SendDataFrame`."
- `anchors`:
  - `p12`: "Msc_SendDataFrame() ID."
  - `p16`: "Std_ReturnType Msc_SendDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
  - `p27`: "Data frames until the upper layer calls Msc_SendDataFrame."
- `aliases`: []

### API-MSC-SETDATAFRAME
- `name`: "Msc_SetDataFrame"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,16,27`
- `brief`: "api index entry for `Msc_SetDataFrame`."
- `anchors`:
  - `p12`: "Msc_SetDataFrame() ID."
  - `p16`: "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
  - `p27`: "In Continuous Mode, the Msc_Init function is first called to initialize the Msc peripheral, and then Msc_SetDataFrame is called"
- `aliases`: []

### API-MSC-STARTCHANNEL
- `name`: "Msc_StartChannel"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,15,27`
- `brief`: "api index entry for `Msc_StartChannel`."
- `anchors`:
  - `p12`: "Msc_StartChannel() ID."
  - `p15`: "Std_ReturnType Msc_StartChannel(uint8 Channel);"
  - `p27`: "to set the Data register. After calling Msc_StartChannel, the Msc starts periodic transmission of Data frames. The upper layer"
- `aliases`: []

### API-MSC-GETRXSTATUS16BITFRAME
- `name`: "Msc_GetRxStatus16BitFrame"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,17`
- `brief`: "api index entry for `Msc_GetRxStatus16BitFrame`."
- `anchors`:
  - `p12`: "Msc_GetRxStatus16BitFrame() ID."
  - `p17`: "Msc_GetRxStatus16BitFrame(uint8"
- `aliases`: []

### API-MSC-GETTXSTATUS
- `name`: "Msc_GetTxStatus"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,17`
- `brief`: "api index entry for `Msc_GetTxStatus`."
- `anchors`:
  - `p12`: "Msc_GetTxStatus() ID."
  - `p17`: "Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
- `aliases`: []

### API-MSC-STOPCHANNEL
- `name`: "Msc_StopChannel"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,16`
- `brief`: "api index entry for `Msc_StopChannel`."
- `anchors`:
  - `p12`: "Msc_StopChannel() ID."
  - `p16`: "Std_ReturnType Msc_StopChannel(uint8 Channel);"
- `aliases`: []

### API-MSC-SWITCHEN
- `name`: "Msc_SwitchEN"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,18`
- `brief`: "api index entry for `Msc_SwitchEN`."
- `anchors`:
  - `p12`: "Msc_SwitchEN() ID."
  - `p18`: "Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn);"
- `aliases`: []

### API-MSC-SWITCHSDICHANNEL
- `name`: "Msc_SwitchSDIChannel"
- `type`: `api`
- `primary_page`: `12`
- `physical_pages`: `12,18`
- `brief`: "api index entry for `Msc_SwitchSDIChannel`."
- `anchors`:
  - `p12`: "Msc_SwitchSDIChannel() ID."
  - `p18`: "Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
- `aliases`: []

### API-MSC-HWA-CLEARCRFI
- `name`: "MSC_HWA_ClearCrfi"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `MSC_HWA_ClearCrfi`."
- `anchors`:
  - `p24`: "LOCAL_INLINE void MSC_HWA_ClearCrfi(MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-CLEARRDRXVLD
- `name`: "MSC_HWA_ClearRdrxVld"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `MSC_HWA_ClearRdrxVld`."
- `anchors`:
  - `p26`: "LOCAL_INLINE void MSC_HWA_ClearRdrxVld(volatile uint32 *pRdrx)"
- `aliases`: []

### API-MSC-HWA-CLEARRTORTOF
- `name`: "MSC_HWA_ClearRtorTof"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `MSC_HWA_ClearRtorTof`."
- `anchors`:
  - `p26`: "LOCAL_INLINE void MSC_HWA_ClearRtorTof(MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-CLEARTCDIS
- `name`: "MSC_HWA_ClearTcdis"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `MSC_HWA_ClearTcdis`."
- `anchors`:
  - `p24`: "LOCAL_INLINE void MSC_HWA_ClearTcdis(MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETCFB
- `name`: "MSC_HWA_GetCfb"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `MSC_HWA_GetCfb`."
- `anchors`:
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetCfb(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETCMDNEEDSEND
- `name`: "MSC_HWA_GetCmdNeedSend"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `MSC_HWA_GetCmdNeedSend`."
- `anchors`:
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetCmdNeedSend(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETDATANEEDSEND
- `name`: "MSC_HWA_GetDataNeedSend"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `MSC_HWA_GetDataNeedSend`."
- `anchors`:
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETDFB
- `name`: "MSC_HWA_GetDfb"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `MSC_HWA_GetDfb`."
- `anchors`:
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetDfb(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETIOCR
- `name`: "MSC_HWA_GetIocr"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `MSC_HWA_GetIocr`."
- `anchors`:
  - `p24`: "LOCAL_INLINE uint32 MSC_HWA_GetIocr(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETRCCSRRC
- `name`: "MSC_HWA_GetRccsrRc"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `MSC_HWA_GetRccsrRc`."
- `anchors`:
  - `p25`: "LOCAL_INLINE uint8 MSC_HWA_GetRccsrRc(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETRDRXADDR
- `name`: "MSC_HWA_GetRdrxAddr"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `MSC_HWA_GetRdrxAddr`."
- `anchors`:
  - `p26`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxAddr(const volatile uint32 *pRdrx)"
- `aliases`: []

### API-MSC-HWA-GETRDRXDATA
- `name`: "MSC_HWA_GetRdrxData"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `MSC_HWA_GetRdrxData`."
- `anchors`:
  - `p25`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxData(const volatile uint32 *pRdrx)"
- `aliases`: []

### API-MSC-HWA-GETRDRXRERR
- `name`: "MSC_HWA_GetRdrxRerr"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `MSC_HWA_GetRdrxRerr`."
- `anchors`:
  - `p25`: "LOCAL_INLINE uint32 MSC_HWA_GetRdrxRerr(const volatile uint32 *pRdrx)"
- `aliases`: []

### API-MSC-HWA-GETRDRXVLD
- `name`: "MSC_HWA_GetRdrxVld"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `MSC_HWA_GetRdrxVld`."
- `anchors`:
  - `p26`: "LOCAL_INLINE uint8 MSC_HWA_GetRdrxVld(const volatile uint32 *pRdrx)"
- `aliases`: []

### API-MSC-HWA-GETRFI
- `name`: "MSC_HWA_GetRfi"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `MSC_HWA_GetRfi`."
- `anchors`:
  - `p24`: "LOCAL_INLINE uint8 MSC_HWA_GetRfi(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETRTORTOF
- `name`: "MSC_HWA_GetRtorTof"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `MSC_HWA_GetRtorTof`."
- `anchors`:
  - `p26`: "LOCAL_INLINE uint8 MSC_HWA_GetRtorTof(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-GETRTORTOIE
- `name`: "MSC_HWA_GetRtorToie"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `MSC_HWA_GetRtorToie`."
- `anchors`:
  - `p26`: "LOCAL_INLINE uint8 MSC_HWA_GetRtorToie(const MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-SETDATANEEDSEND
- `name`: "MSC_HWA_SetDataNeedSend"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `MSC_HWA_SetDataNeedSend`."
- `anchors`:
  - `p22`: "LOCAL_INLINE void MSC_HWA_SetDataNeedSend(MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-SETINCR
- `name`: "MSC_HWA_SetIncr"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `MSC_HWA_SetIncr`."
- `anchors`:
  - `p25`: "LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETIOCR
- `name`: "MSC_HWA_SetIocr"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `MSC_HWA_SetIocr`."
- `anchors`:
  - `p24`: "LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETMSCENABLE
- `name`: "MSC_HWA_SetMscEnable"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `MSC_HWA_SetMscEnable`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void MSC_HWA_SetMscEnable(MSC_Type *const pMsc, uint8 u8Enable)"
- `aliases`: []

### API-MSC-HWA-SETNP
- `name`: "MSC_HWA_SetNp"
- `type`: `api`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "api index entry for `MSC_HWA_SetNp`."
- `anchors`:
  - `p22`: "LOCAL_INLINE void MSC_HWA_SetNp(MSC_Type *const pMsc, uint8 u8Np)"
- `aliases`: []

### API-MSC-HWA-SETRCCSR
- `name`: "MSC_HWA_SetRccsr"
- `type`: `api`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "api index entry for `MSC_HWA_SetRccsr`."
- `anchors`:
  - `p25`: "LOCAL_INLINE void MSC_HWA_SetRccsr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETRTOR
- `name`: "MSC_HWA_SetRtor"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `MSC_HWA_SetRtor`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void MSC_HWA_SetRtor(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCCOR
- `name`: "MSC_HWA_SetTccor"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `MSC_HWA_SetTccor`."
- `anchors`:
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTccor(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCCTR
- `name`: "MSC_HWA_SetTcctr"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `MSC_HWA_SetTcctr`."
- `anchors`:
  - `p21`: "LOCAL_INLINE void MSC_HWA_SetTcctr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCCTR1
- `name`: "MSC_HWA_SetTcctr1"
- `type`: `api`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "api index entry for `MSC_HWA_SetTcctr1`."
- `anchors`:
  - `p27`: "LOCAL_INLINE void MSC_HWA_SetTcctr1(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCCTRNBS
- `name`: "MSC_HWA_SetTcctrNbs"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `MSC_HWA_SetTcctrNbs`."
- `anchors`:
  - `p21`: "LOCAL_INLINE void MSC_HWA_SetTcctrNbs(MSC_Type *const pMsc, uint8 u8Value)"
- `aliases`: []

### API-MSC-HWA-SETTCDAR
- `name`: "MSC_HWA_SetTcdar"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `MSC_HWA_SetTcdar`."
- `anchors`:
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCDIS
- `name`: "MSC_HWA_SetTcdis"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `MSC_HWA_SetTcdis`."
- `anchors`:
  - `p24`: "LOCAL_INLINE void MSC_HWA_SetTcdis(MSC_Type *const pMsc)"
- `aliases`: []

### API-MSC-HWA-SETTCELR
- `name`: "MSC_HWA_SetTcelr"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `MSC_HWA_SetTcelr`."
- `anchors`:
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTcelr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCSHR
- `name`: "MSC_HWA_SetTcshr"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `MSC_HWA_SetTcshr`."
- `anchors`:
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTcshr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-HWA-SETTCSLR
- `name`: "MSC_HWA_SetTcslr"
- `type`: `api`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "api index entry for `MSC_HWA_SetTcslr`."
- `anchors`:
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTcslr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### API-MSC-DEINIT
- `name`: "Msc_DeInit"
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "api index entry for `Msc_DeInit`."
- `anchors`:
  - `p15`: "void Msc_DeInit(void);"
- `aliases`: []

### API-MSC-LLD-DEINITCHANNEL
- `name`: "Msc_LLD_DeInitChannel"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Msc_LLD_DeInitChannel`."
- `anchors`:
  - `p19`: "void Msc_LLD_DeInitChannel(uint8 u8Channel)"
- `aliases`: []

### API-MSC-LLD-GETRXERRORSTATUS
- `name`: "Msc_LLD_GetRxErrorStatus"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `Msc_LLD_GetRxErrorStatus`."
- `anchors`:
  - `p20`: "Msc_StatusType Msc_LLD_GetRxErrorStatus(uint8 u8Channel, MSC_RDRxIndexType eRxindex)"
- `aliases`: []

### API-MSC-LLD-GETRXSTATUS
- `name`: "Msc_LLD_GetRxStatus"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `Msc_LLD_GetRxStatus`."
- `anchors`:
  - `p20`: "Msc_LLD_GetRxStatus(uint8"
- `aliases`: []

### API-MSC-LLD-GETTXSTATUS
- `name`: "Msc_LLD_GetTxStatus"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `Msc_LLD_GetTxStatus`."
- `anchors`:
  - `p20`: "Msc_StatusType Msc_LLD_GetTxStatus(uint8 u8Channel)"
- `aliases`: []

### API-MSC-LLD-INITCHANNEL
- `name`: "Msc_LLD_InitChannel"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Msc_LLD_InitChannel`."
- `anchors`:
  - `p19`: "void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `aliases`: []

### API-MSC-LLD-RXINTERRUPTHANDLER
- `name`: "Msc_LLD_RxInterruptHandler"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `Msc_LLD_RxInterruptHandler`."
- `anchors`:
  - `p21`: "static void Msc_LLD_RxInterruptHandler(uint8 u8Channel)"
- `aliases`: []

### API-MSC-LLD-SENDCOMMAND
- `name`: "Msc_LLD_SendCommand"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `Msc_LLD_SendCommand`."
- `anchors`:
  - `p20`: "Msc_LLD_SendCommand(uint8"
- `aliases`: []

### API-MSC-LLD-SENDDATA
- `name`: "Msc_LLD_SendData"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Msc_LLD_SendData`."
- `anchors`:
  - `p19`: "void Msc_LLD_SendData(uint8 u8Channel, const uint32 *DataBufferPtr)"
- `aliases`: []

### API-MSC-LLD-SETDATA
- `name`: "Msc_LLD_SetData"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Msc_LLD_SetData`."
- `anchors`:
  - `p19`: "void Msc_LLD_SetData(uint8 u8Channel, const uint32 *DataBufferPtr)"
- `aliases`: []

### API-MSC-LLD-STARTCHANNEL
- `name`: "Msc_LLD_StartChannel"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `Msc_LLD_StartChannel`."
- `anchors`:
  - `p19`: "Std_ReturnType Msc_LLD_StartChannel(uint8 u8Channel)"
- `aliases`: []

### API-MSC-LLD-STOPCHANNEL
- `name`: "Msc_LLD_StopChannel"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `Msc_LLD_StopChannel`."
- `anchors`:
  - `p20`: "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `aliases`: []

### API-MSC-LLD-SWITCHEN
- `name`: "Msc_LLD_SwitchEN"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `Msc_LLD_SwitchEN`."
- `anchors`:
  - `p21`: "Std_ReturnType Msc_LLD_SwitchEN(uint8 u8Channel, Msc_ENxType eEnx, Msc_ENxActiveType eENn)"
- `aliases`: []

### API-MSC-LLD-SWITCHSDICHANNEL
- `name`: "Msc_LLD_SwitchSDIChannel"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `Msc_LLD_SwitchSDIChannel`."
- `anchors`:
  - `p21`: "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `aliases`: []

### API-MSC-GETCOREID
- `name`: "MSC_GetCoreID"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "api index entry for `MSC_GetCoreID`."
- `anchors`:
  - `p9`: "#define MSC_GetCoreID() GET_CPU_ID()"
- `aliases`: []

### API-CHANNEL
- `name`: "Channel"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Channel`."
- `anchors`:
  - `p5`: "There are two Micro Second Channel (MSC) interface instances for the FC7300. The acceptable maximum frequency of the"
- `aliases`: []

### API-CONTROLLER
- `name`: "Controller"
- `type`: `api`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "api index entry for `Controller`."
- `anchors`:
  - `p33`: "This container contains the configuration (parameters) of the MSC Controller(s). Note:\"User should use"
- `aliases`: []

### API-FREQUENCY
- `name`: "Frequency"
- `type`: `api`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "api index entry for `Frequency`."
- `anchors`:
  - `p37`: "Msc Channel Tx Frequency (Hz)"
- `aliases`: []

### API-LENGTH
- `name`: "Length"
- `type`: `api`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "api index entry for `Length`."
- `anchors`:
  - `p34`: "Msc Passive Frame Length(bit)"
- `aliases`: []

### CFG-MSCGENERAL
- `name`: "MscGeneral"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,30`
- `brief`: "config index entry for `MscGeneral`."
- `anchors`:
  - `p3`: "MscGeneral ................................................................................................................................…"
  - `p30`: "MscGeneral"
- `aliases`: []

### CFG-MSCGLOBALCONFIG
- `name`: "MscGlobalConfig"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,33`
- `brief`: "config index entry for `MscGlobalConfig`."
- `anchors`:
  - `p3`: "MscGlobalConfig ...........................................................................................................................…"
  - `p33`: "MscGlobalConfig"
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,43`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p3`: "CommonPublishedInformation ................................................................................................................…"
  - `p43`: "CommonPublishedInformation"
- `aliases`: []

### CFG-DEMEVENTPARAMETER
- `name`: "DemEventParameter"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,33`
- `brief`: "config index entry for `DemEventParameter`."
- `anchors`:
  - `p32`: "MscDemEventParameterRefs"
  - `p33`: "Reference to the DemEventParameter which shall be issued when the error \"Timeout caused by"
- `aliases`: []

### CFG-MSCCHANNEL
- `name`: "MscChannel"
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "config index entry for `MscChannel`."
- `anchors`:
  - `p33`: "MscChannel"
- `aliases`: []

### CFG-MSCCHANNELECUCPARTITIONREF
- `name`: "MscChannelEcucPartitionRef"
- `type`: `config`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "config index entry for `MscChannelEcucPartitionRef`."
- `anchors`:
  - `p34`: "MscChannelEcucPartitionRef"
- `aliases`: []

### CFG-MSCCHANNELRXBAUDRATE
- `name`: "MscChannelRxBaudRate"
- `type`: `config`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "config index entry for `MscChannelRxBaudRate`."
- `anchors`:
  - `p38`: "MscChannelRxBaudRate"
- `aliases`: []

### CFG-MSCCHANNELTXFREQUENCY
- `name`: "MscChannelTxFrequency"
- `type`: `config`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "config index entry for `MscChannelTxFrequency`."
- `anchors`:
  - `p37`: "Msc Channel Tx Frequency (Hz)"
- `aliases`: []

### CFG-MSCDEMEVENTPARAMETERREFS
- `name`: "MscDemEventParameterRefs"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "config index entry for `MscDemEventParameterRefs`."
- `anchors`:
  - `p32`: "MscDemEventParameterRefs"
- `aliases`: []

### CFG-DEMCONF-DEMEVENTPARAMETER-DEMEVENTPARAMETER-MSCTIMEOUT
- `name`: "DemConf_DemEventParameter_DemEventParameter_MscTimeout"
- `type`: `config`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "config index entry for `DemConf_DemEventParameter_DemEventParameter_MscTimeout`."
- `anchors`:
  - `p9`: "#define MSC_E_TIMEOUT_VALUE DemConf_DemEventParameter_DemEventParameter_MscTimeout"
- `aliases`: []

### CFG-DEMEVENTID
- `name`: "DemEventId"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "config index entry for `DemEventId`."
- `anchors`:
  - `p32`: "referenced DemEventParameter's DemEventId value. The standardized errors are provided in the"
- `aliases`: []

### CFG-MSCCHANNELID
- `name`: "MscChannelId"
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "config index entry for `MscChannelId`."
- `anchors`:
  - `p33`: "MscChannelId"
- `aliases`: []

### CFG-MSCHWCHANNEL
- `name`: "MscHwChannel"
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "config index entry for `MscHwChannel`."
- `anchors`:
  - `p33`: "Msc Hw Channel Index"
- `aliases`: []

### CFG-MSC-CHANNEL
- `name`: "Msc_Channel"
- `type`: `config`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "config index entry for `Msc_Channel`."
- `anchors`:
  - `p14`: "Msc_ChannelConfigType *const Msc_Channel[MSC_HW_MAX_MODULES]. Channel configs."
- `aliases`: []

### MACRO-LOCAL-INLINE
- `name`: "LOCAL_INLINE"
- `type`: `macro`
- `primary_page`: `21`
- `physical_pages`: `21,22,23,24,25,26,27`
- `brief`: "macro index entry for `LOCAL_INLINE`."
- `anchors`:
  - `p21`: "LOCAL_INLINE void MSC_HWA_SetTcctr(MSC_Type *const pMsc, uint32 u32Value)"
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
  - `p24`: "LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
  - `p25`: "LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### MACRO-MSC-EN-SELECTION-0
- `name`: "MSC_EN_SELECTION_0"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,39,40`
- `brief`: "macro index entry for `MSC_EN_SELECTION_0`."
- `anchors`:
  - `p11`: "MSC_EN_SELECTION_0"
  - `p39`: "MSC_EN_SELECTION_0"
  - `p40`: "[MSC_EN_SELECTION_0, MSC_EN_SELECTION_1, MSC_EN_SELECTION_2,"
- `aliases`: []

### MACRO-INTEGER-LABEL
- `name`: "INTEGER_LABEL"
- `type`: `macro`
- `primary_page`: `44`
- `physical_pages`: `44,45,46`
- `brief`: "macro index entry for `INTEGER_LABEL`."
- `anchors`:
  - `p44`: "INTEGER_LABEL"
  - `p45`: "INTEGER_LABEL"
  - `p46`: "INTEGER_LABEL"
- `aliases`: []

### MACRO-MSC-EN-SELECTION-1
- `name`: "MSC_EN_SELECTION_1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `MSC_EN_SELECTION_1`."
- `anchors`:
  - `p11`: "MSC_EN_SELECTION_1"
  - `p40`: "[MSC_EN_SELECTION_0, MSC_EN_SELECTION_1, MSC_EN_SELECTION_2,"
- `aliases`: []

### MACRO-MSC-EN-SELECTION-2
- `name`: "MSC_EN_SELECTION_2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `MSC_EN_SELECTION_2`."
- `anchors`:
  - `p11`: "MSC_EN_SELECTION_2"
  - `p40`: "[MSC_EN_SELECTION_0, MSC_EN_SELECTION_1, MSC_EN_SELECTION_2,"
- `aliases`: []

### MACRO-MSC-EN-SELECTION-3
- `name`: "MSC_EN_SELECTION_3"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,40`
- `brief`: "macro index entry for `MSC_EN_SELECTION_3`."
- `anchors`:
  - `p11`: "MSC_EN_SELECTION_3"
  - `p40`: "MSC_EN_SELECTION_3]"
- `aliases`: []

### MACRO-MSC-TX-NORMAL-POLARITY
- `name`: "MSC_TX_NORMAL_POLARITY"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_NORMAL_POLARITY`."
- `anchors`:
  - `p10`: "MSC_TX_NORMAL_POLARITY"
  - `p36`: "Select the TX output polarity. MSC_TX_NORMAL_POLARITY: Clock ChipSelect and Data are active high."
- `aliases`: []

### MACRO-MSC-TX-TRIGGER-SINGLE
- `name`: "MSC_TX_TRIGGER_SINGLE"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,37`
- `brief`: "macro index entry for `MSC_TX_TRIGGER_SINGLE`."
- `anchors`:
  - `p9`: "MSC_TX_TRIGGER_SINGLE"
  - `p37`: "Defines the trigger for the Data transmission. MSC_TX_TRIGGER_SINGLE: Data transmission is triggered"
- `aliases`: []

### MACRO-MSC-RX-12-BIT-LENGTH
- `name`: "MSC_RX_12_BIT_LENGTH"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,38`
- `brief`: "macro index entry for `MSC_RX_12_BIT_LENGTH`."
- `anchors`:
  - `p10`: "MSC_RX_12_BIT_LENGTH"
  - `p38`: "MSC_RX_12_BIT_LENGTH"
- `aliases`: []

### MACRO-MSC-RX-PARITY-EVEN
- `name`: "MSC_RX_PARITY_EVEN"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,38`
- `brief`: "macro index entry for `MSC_RX_PARITY_EVEN`."
- `anchors`:
  - `p10`: "MSC_RX_PARITY_EVEN"
  - `p38`: "MSC_RX_PARITY_EVEN"
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-EN
- `name`: "MSC_TX_INVERTED_POLARITY_EN"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_EN`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_EN"
  - `p36`: "MSC_TX_INVERTED_POLARITY_EN: Clock and Data are active high, ChipSelect is active low."
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-FSC
- `name`: "MSC_TX_INVERTED_POLARITY_FSC"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_FSC`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_FSC"
  - `p36`: "MSC_TX_INVERTED_POLARITY_FSC: ChipSelect and Data are active high, Clock is active low."
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-FSC-EN
- `name`: "MSC_TX_INVERTED_POLARITY_FSC_EN"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_FSC_EN`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_FSC_EN"
  - `p36`: "MSC_TX_INVERTED_POLARITY_FSC_EN: Data is active high, Clock and ChipSelect are active low."
- `aliases`: []

### MACRO-MSC-TX-TRIGGER-CONTINUOUS
- `name`: "MSC_TX_TRIGGER_CONTINUOUS"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,37`
- `brief`: "macro index entry for `MSC_TX_TRIGGER_CONTINUOUS`."
- `anchors`:
  - `p9`: "MSC_TX_TRIGGER_CONTINUOUS"
  - `p37`: "by SW. MSC_TX_TRIGGER_CONTINUOUS: Data is transmited continuously based on bus capacity."
- `aliases`: []

### MACRO-MSC-HW-MAX-MODULES
- `name`: "MSC_HW_MAX_MODULES"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8,14`
- `brief`: "macro index entry for `MSC_HW_MAX_MODULES`."
- `anchors`:
  - `p8`: "#define MSC_HW_MAX_MODULES 2U"
  - `p14`: "Msc_ChannelConfigType *const Msc_Channel[MSC_HW_MAX_MODULES]. Channel configs."
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8,9`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p8`: "#define MSC_PRECOMPILE_SUPPORT (STD_ON)"
  - `p9`: "#define MSC_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-AUTOSAR-ECUC
- `name`: "AUTOSAR_ECUC"
- `type`: `macro`
- `primary_page`: `32`
- `physical_pages`: `32,34`
- `brief`: "macro index entry for `AUTOSAR_ECUC`."
- `anchors`:
  - `p32`: "AUTOSAR_ECUC"
  - `p34`: "AUTOSAR_ECUC"
- `aliases`: []

### MACRO-MSC-E-TIMEOUT
- `name`: "MSC_E_TIMEOUT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,33`
- `brief`: "macro index entry for `MSC_E_TIMEOUT`."
- `anchors`:
  - `p9`: "Number of loops before returning MSC_E_TIMEOUT."
  - `p33`: "MSC_E_TIMEOUT"
- `aliases`: []

### MACRO-MSC-RX-16-BIT-LENGTH
- `name`: "MSC_RX_16_BIT_LENGTH"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,38`
- `brief`: "macro index entry for `MSC_RX_16_BIT_LENGTH`."
- `anchors`:
  - `p10`: "MSC_RX_16_BIT_LENGTH"
  - `p38`: "[MSC_RX_12_BIT_LENGTH, MSC_RX_16_BIT_LENGTH]"
- `aliases`: []

### MACRO-MSC-RX-PARITY-ODD
- `name`: "MSC_RX_PARITY_ODD"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,38`
- `brief`: "macro index entry for `MSC_RX_PARITY_ODD`."
- `anchors`:
  - `p10`: "MSC_RX_PARITY_ODD"
  - `p38`: "[MSC_RX_PARITY_EVEN, MSC_RX_PARITY_ODD]"
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-EN-SO
- `name`: "MSC_TX_INVERTED_POLARITY_EN_SO"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_EN_SO`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_EN_SO"
  - `p36`: "MSC_TX_INVERTED_POLARITY_EN_SO: Clock is active high, ChipSelect and Data are active low."
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-FSC-EN-SO
- `name`: "MSC_TX_INVERTED_POLARITY_FSC_EN_SO"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_FSC_EN_SO`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_FSC_EN_SO"
  - `p36`: "MSC_TX_INVERTED_POLARITY_FSC_EN_SO: Clock ChipSelect and Data are active low."
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-FSC-SO
- `name`: "MSC_TX_INVERTED_POLARITY_FSC_SO"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_FSC_SO`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_FSC_SO"
  - `p36`: "MSC_TX_INVERTED_POLARITY_FSC_SO: ChipSelectis active high, Clock and Data are active low."
- `aliases`: []

### MACRO-MSC-TX-INVERTED-POLARITY-SO
- `name`: "MSC_TX_INVERTED_POLARITY_SO"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,36`
- `brief`: "macro index entry for `MSC_TX_INVERTED_POLARITY_SO`."
- `anchors`:
  - `p10`: "MSC_TX_INVERTED_POLARITY_SO"
  - `p36`: "MSC_TX_INVERTED_POLARITY_SO: ChipSelect and Clock are active high, Data is active low."
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8,43`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p8`: "#define MSC_CFG_PTR_INIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR}"
  - `p43`: "NULL_PTR"
- `aliases`: []

### MACRO-MSC-DATA-SELECTION-BIT-DISABLE
- `name`: "MSC_DATA_SELECTION_BIT_DISABLE"
- `type`: `macro`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "macro index entry for `MSC_DATA_SELECTION_BIT_DISABLE`."
- `anchors`:
  - `p35`: "DataFrame contain a data selection bit. MSC_DATA_SELECTION_BIT_DISABLE: DataFrame does not"
- `aliases`: []

### MACRO-MSC-DATA-SELECTION-BIT-ENABLE
- `name`: "MSC_DATA_SELECTION_BIT_ENABLE"
- `type`: `macro`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "macro index entry for `MSC_DATA_SELECTION_BIT_ENABLE`."
- `anchors`:
  - `p35`: "Select if the SRH DataFrame contain a data selection bit. MSC_DATA_SELECTION_BIT_ENABLE:"
- `aliases`: []

### MACRO-MSC-UNINIT
- `name`: "MSC_UNINIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_UNINIT`."
- `anchors`:
  - `p8`: "#define MSC_UNINIT 0x01U"
- `aliases`: []

### MACRO-MSC-TX-SYNCHRONOUS
- `name`: "MSC_TX_SYNCHRONOUS"
- `type`: `macro`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "macro index entry for `MSC_TX_SYNCHRONOUS`."
- `anchors`:
  - `p36`: "Select TX clock mode for the RX. MSC_TX_SYNCHRONOUS: Tx clock is transmited always."
- `aliases`: []

### MACRO-MSC-AR-RELEASE-MAJOR-VERSION
- `name`: "MSC_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `MSC_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p6`: "#define MSC_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-MSC-AR-RELEASE-MINOR-VERSION
- `name`: "MSC_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `MSC_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p6`: "#define MSC_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-MSC-AR-RELEASE-REVISION-VERSION
- `name`: "MSC_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `MSC_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p6`: "#define MSC_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-MSC-MODULE-ID
- `name`: "MSC_MODULE_ID"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `MSC_MODULE_ID`."
- `anchors`:
  - `p6`: "#define MSC_MODULE_ID 253"
- `aliases`: []

### MACRO-MSC-SW-MAJOR-VERSION
- `name`: "MSC_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_SW_MAJOR_VERSION`."
- `anchors`:
  - `p7`: "#define MSC_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-MSC-SW-MINOR-VERSION
- `name`: "MSC_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_SW_MINOR_VERSION`."
- `anchors`:
  - `p7`: "#define MSC_SW_MINOR_VERSION 1"
- `aliases`: []

### MACRO-MSC-VENDOR-ID
- `name`: "MSC_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `MSC_VENDOR_ID`."
- `anchors`:
  - `p6`: "#define MSC_VENDOR_ID 174"
- `aliases`: []

### MACRO-MSC-DEV-ERROR-DETECT
- `name`: "MSC_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_DEV_ERROR_DETECT`."
- `anchors`:
  - `p9`: "#define MSC_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-MSC-DISABLE-DEM-REPORT-ERROR-STATUS
- `name`: "MSC_DISABLE_DEM_REPORT_ERROR_STATUS"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_DISABLE_DEM_REPORT_ERROR_STATUS`."
- `anchors`:
  - `p9`: "#define MSC_DISABLE_DEM_REPORT_ERROR_STATUS (STD_OFF)"
- `aliases`: []

### MACRO-MSC-E-CHANNEL-ACTIVE
- `name`: "MSC_E_CHANNEL_ACTIVE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_CHANNEL_ACTIVE`."
- `anchors`:
  - `p7`: "#define MSC_E_CHANNEL_ACTIVE ((uint8)0x05U)"
- `aliases`: []

### MACRO-MSC-E-CHANNEL-NOT-STARTED
- `name`: "MSC_E_CHANNEL_NOT_STARTED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_CHANNEL_NOT_STARTED`."
- `anchors`:
  - `p7`: "#define MSC_E_CHANNEL_NOT_STARTED ((uint8)0x06U)"
- `aliases`: []

### MACRO-MSC-E-CONFIG-VALUE
- `name`: "MSC_E_CONFIG_VALUE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_CONFIG_VALUE`."
- `anchors`:
  - `p7`: "#define MSC_E_CONFIG_VALUE ((uint8)0x08U)"
- `aliases`: []

### MACRO-MSC-E-INVALID-CHANNEL
- `name`: "MSC_E_INVALID_CHANNEL"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_INVALID_CHANNEL`."
- `anchors`:
  - `p7`: "#define MSC_E_INVALID_CHANNEL ((uint8)0x07U)"
- `aliases`: []

### MACRO-MSC-E-INVALID-POINTER
- `name`: "MSC_E_INVALID_POINTER"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_INVALID_POINTER`."
- `anchors`:
  - `p7`: "#define MSC_E_INVALID_POINTER ((uint8)0x01U)"
- `aliases`: []

### MACRO-MSC-E-INVALID-RXINDEX
- `name`: "MSC_E_INVALID_RXINDEX"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_INVALID_RXINDEX`."
- `anchors`:
  - `p7`: "#define MSC_E_INVALID_RXINDEX ((uint8)0x09U)"
- `aliases`: []

### MACRO-MSC-E-PARAM-VALUE
- `name`: "MSC_E_PARAM_VALUE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_PARAM_VALUE`."
- `anchors`:
  - `p7`: "#define MSC_E_PARAM_VALUE ((uint8)0x00U)"
- `aliases`: []

### MACRO-MSC-E-RX-BUSY
- `name`: "MSC_E_RX_BUSY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_E_RX_BUSY`."
- `anchors`:
  - `p8`: "#define MSC_E_RX_BUSY ((uint8)0x0BU)"
- `aliases`: []

### MACRO-MSC-E-STATE-TRANSITION
- `name`: "MSC_E_STATE_TRANSITION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_STATE_TRANSITION`."
- `anchors`:
  - `p7`: "#define MSC_E_STATE_TRANSITION ((uint8)0x04U)"
- `aliases`: []

### MACRO-MSC-E-TX-BUSY
- `name`: "MSC_E_TX_BUSY"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_TX_BUSY`."
- `anchors`:
  - `p7`: "#define MSC_E_TX_BUSY ((uint8)0x0AU)"
- `aliases`: []

### MACRO-MSC-E-UNINIT
- `name`: "MSC_E_UNINIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_E_UNINIT`."
- `anchors`:
  - `p7`: "#define MSC_E_UNINIT ((uint8)0x03U)"
- `aliases`: []

### MACRO-MSC-INSTANCE-ID
- `name`: "MSC_INSTANCE_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_INSTANCE_ID`."
- `anchors`:
  - `p7`: "#define MSC_INSTANCE_ID (15U)"
- `aliases`: []

### MACRO-MSC-MAX-PARTITIONS
- `name`: "MSC_MAX_PARTITIONS"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_MAX_PARTITIONS`."
- `anchors`:
  - `p8`: "#define MSC_MAX_PARTITIONS ((uint32)3U)"
- `aliases`: []

### MACRO-MSC-MULTICORE-SUPPORT
- `name`: "MSC_MULTICORE_SUPPORT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_MULTICORE_SUPPORT`."
- `anchors`:
  - `p9`: "#define MSC_MULTICORE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-MSC-POLARITY-IDENTICAL
- `name`: "MSC_POLARITY_IDENTICAL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_POLARITY_IDENTICAL`."
- `anchors`:
  - `p8`: "#define MSC_POLARITY_IDENTICAL (0U)"
- `aliases`: []

### MACRO-MSC-POLARITY-INVERTED
- `name`: "MSC_POLARITY_INVERTED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_POLARITY_INVERTED`."
- `anchors`:
  - `p8`: "#define MSC_POLARITY_INVERTED (1U)"
- `aliases`: []

### MACRO-MSC-POLLING-USED
- `name`: "MSC_POLLING_USED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_POLLING_USED`."
- `anchors`:
  - `p9`: "#define MSC_POLLING_USED (STD_ON)"
- `aliases`: []

### MACRO-MSC-PRECOMPILE-SUPPORT
- `name`: "MSC_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p8`: "#define MSC_PRECOMPILE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-MSC-TX-ASYNCHRONOUS
- `name`: "MSC_TX_ASYNCHRONOUS"
- `type`: `macro`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "macro index entry for `MSC_TX_ASYNCHRONOUS`."
- `anchors`:
  - `p36`: "MSC_TX_ASYNCHRONOUS: Tx clock is transmited only on Tx."
- `aliases`: []

### MACRO-MSC-VERSION-INFO-API
- `name`: "MSC_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_VERSION_INFO_API`."
- `anchors`:
  - `p9`: "#define MSC_VERSION_INFO_API (STD_ON)"
- `aliases`: []

### MACRO-SOURCE-DATA-REG
- `name`: "SOURCE_DATA_REG"
- `type`: `macro`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "macro index entry for `SOURCE_DATA_REG`."
- `anchors`:
  - `p41`: "SOURCE_DATA_REG"
- `aliases`: []

### MACRO-MSC-CFG-PTR-INIT-ARRAY
- `name`: "MSC_CFG_PTR_INIT_ARRAY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_CFG_PTR_INIT_ARRAY`."
- `anchors`:
  - `p8`: "#define MSC_CFG_PTR_INIT_ARRAY {NULL_PTR, NULL_PTR, NULL_PTR}"
- `aliases`: []

### MACRO-MSC-CHANNEL-ACTIVE
- `name`: "MSC_CHANNEL_ACTIVE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_CHANNEL_ACTIVE`."
- `anchors`:
  - `p8`: "#define MSC_CHANNEL_ACTIVE 0x03U"
- `aliases`: []

### MACRO-MSC-CHANNEL-IDLE
- `name`: "MSC_CHANNEL_IDLE"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_CHANNEL_IDLE`."
- `anchors`:
  - `p8`: "#define MSC_CHANNEL_IDLE 0x04U"
- `aliases`: []

### MACRO-MSC-E-TIMEOUT-VALUE
- `name`: "MSC_E_TIMEOUT_VALUE"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_E_TIMEOUT_VALUE`."
- `anchors`:
  - `p9`: "#define MSC_E_TIMEOUT_VALUE DemConf_DemEventParameter_DemEventParameter_MscTimeout"
- `aliases`: []

### MACRO-MSC-INIT
- `name`: "MSC_INIT"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_INIT`."
- `anchors`:
  - `p8`: "#define MSC_INIT 0x02U"
- `aliases`: []

### MACRO-MSC-SW-PATCH-VERSION
- `name`: "MSC_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `MSC_SW_PATCH_VERSION`."
- `anchors`:
  - `p7`: "#define MSC_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-MSC-TIMEOUT-LOOPS
- `name`: "MSC_TIMEOUT_LOOPS"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_TIMEOUT_LOOPS`."
- `anchors`:
  - `p9`: "#define MSC_TIMEOUT_LOOPS 10000U"
- `aliases`: []

### MACRO-MSC-TRANS-SOURCE-DATA-ALTIN
- `name`: "MSC_TRANS_SOURCE_DATA_ALTIN"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_TRANS_SOURCE_DATA_ALTIN`."
- `anchors`:
  - `p8`: "#define MSC_TRANS_SOURCE_DATA_ALTIN 0x2U"
- `aliases`: []

### MACRO-MSC-TRANS-SOURCE-DATA-ALTIN-INV
- `name`: "MSC_TRANS_SOURCE_DATA_ALTIN_INV"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `MSC_TRANS_SOURCE_DATA_ALTIN_INV`."
- `anchors`:
  - `p9`: "#define MSC_TRANS_SOURCE_DATA_ALTIN_INV 0x3U"
- `aliases`: []

### MACRO-MSC-TRANS-SOURCE-DATA-REG
- `name`: "MSC_TRANS_SOURCE_DATA_REG"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_TRANS_SOURCE_DATA_REG`."
- `anchors`:
  - `p8`: "#define MSC_TRANS_SOURCE_DATA_REG 0x0U"
- `aliases`: []

### MACRO-MSC-UNINIT-ARRAY
- `name`: "MSC_UNINIT_ARRAY"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `MSC_UNINIT_ARRAY`."
- `anchors`:
  - `p8`: "#define MSC_UNINIT_ARRAY {MSC_UNINIT, MSC_UNINIT, MSC_UNINIT}"
- `aliases`: []

### MACRO-GET-CPU-ID
- `name`: "GET_CPU_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `GET_CPU_ID`."
- `anchors`:
  - `p9`: "#define MSC_GetCoreID() GET_CPU_ID()"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV128
- `name`: "MSC_BAUDRATE_FMSC_DIV128"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV128`."
- `anchors`:
  - `p11`: "MSC_BAUDRATE_FMSC_DIV128"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV16
- `name`: "MSC_BAUDRATE_FMSC_DIV16"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV16`."
- `anchors`:
  - `p10`: "MSC_BAUDRATE_FMSC_DIV16"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV256
- `name`: "MSC_BAUDRATE_FMSC_DIV256"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV256`."
- `anchors`:
  - `p11`: "MSC_BAUDRATE_FMSC_DIV256"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV32
- `name`: "MSC_BAUDRATE_FMSC_DIV32"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV32`."
- `anchors`:
  - `p10`: "MSC_BAUDRATE_FMSC_DIV32"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV4
- `name`: "MSC_BAUDRATE_FMSC_DIV4"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV4`."
- `anchors`:
  - `p10`: "MSC_BAUDRATE_FMSC_DIV4"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV64
- `name`: "MSC_BAUDRATE_FMSC_DIV64"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV64`."
- `anchors`:
  - `p11`: "MSC_BAUDRATE_FMSC_DIV64"
- `aliases`: []

### MACRO-MSC-BAUDRATE-FMSC-DIV8
- `name`: "MSC_BAUDRATE_FMSC_DIV8"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_BAUDRATE_FMSC_DIV8`."
- `anchors`:
  - `p10`: "MSC_BAUDRATE_FMSC_DIV8"
- `aliases`: []

### MACRO-MSC-CHANNEL-NOT-STARTED
- `name`: "MSC_CHANNEL_NOT_STARTED"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_CHANNEL_NOT_STARTED`."
- `anchors`:
  - `p12`: "MSC_CHANNEL_NOT_STARTED"
- `aliases`: []

### MACRO-MSC-DE-INIT-ID
- `name`: "MSC_DE_INIT_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_DE_INIT_ID`."
- `anchors`:
  - `p12`: "MSC_DE_INIT_ID = 0xCU"
- `aliases`: []

### MACRO-MSC-ENC
- `name`: "MSC_ENC"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_ENC`."
- `anchors`:
  - `p11`: "MSC_ENC"
- `aliases`: []

### MACRO-MSC-ENH
- `name`: "MSC_ENH"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_ENH`."
- `anchors`:
  - `p11`: "MSC_ENH"
- `aliases`: []

### MACRO-MSC-ENL
- `name`: "MSC_ENL"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_ENL`."
- `anchors`:
  - `p11`: "MSC_ENL"
- `aliases`: []

### MACRO-MSC-E-NOT-OK
- `name`: "MSC_E_NOT_OK"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_NOT_OK`."
- `anchors`:
  - `p11`: "MSC_E_NOT_OK"
- `aliases`: []

### MACRO-MSC-E-OK
- `name`: "MSC_E_OK"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_E_OK`."
- `anchors`:
  - `p11`: "MSC_E_OK"
- `aliases`: []

### MACRO-MSC-FCL-ALWAYS-ACTIVE
- `name`: "MSC_FCL_ALWAYS_ACTIVE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_FCL_ALWAYS_ACTIVE`."
- `anchors`:
  - `p10`: "MSC_FCL_ALWAYS_ACTIVE"
- `aliases`: []

### MACRO-MSC-FCL-PARTITION-ACTIVE
- `name`: "MSC_FCL_PARTITION_ACTIVE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_FCL_PARTITION_ACTIVE`."
- `anchors`:
  - `p10`: "MSC_FCL_PARTITION_ACTIVE"
- `aliases`: []

### MACRO-MSC-GETVERSIONINFO-ID
- `name`: "MSC_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_GETVERSIONINFO_ID`."
- `anchors`:
  - `p12`: "MSC_GETVERSIONINFO_ID = 0xBU"
- `aliases`: []

### MACRO-MSC-GET-RX-16BIT-STATUS-ID
- `name`: "MSC_GET_RX_16BIT_STATUS_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_GET_RX_16BIT_STATUS_ID`."
- `anchors`:
  - `p12`: "MSC_GET_RX_16BIT_STATUS_ID"
- `aliases`: []

### MACRO-MSC-GET-RX-STATUS-ID
- `name`: "MSC_GET_RX_STATUS_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_GET_RX_STATUS_ID`."
- `anchors`:
  - `p12`: "MSC_GET_RX_STATUS_ID = 0x7U"
- `aliases`: []

### MACRO-MSC-GET-TX-STATUS-ID
- `name`: "MSC_GET_TX_STATUS_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_GET_TX_STATUS_ID`."
- `anchors`:
  - `p12`: "MSC_GET_TX_STATUS_ID = 0x6U"
- `aliases`: []

### MACRO-MSC-INIT-ID
- `name`: "MSC_INIT_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_INIT_ID`."
- `anchors`:
  - `p12`: "MSC_INIT_ID = 0x0U"
- `aliases`: []

### MACRO-MSC-RDR0
- `name`: "MSC_RDR0"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RDR0`."
- `anchors`:
  - `p12`: "MSC_RDR0 = 0U"
- `aliases`: []

### MACRO-MSC-RDR1
- `name`: "MSC_RDR1"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RDR1`."
- `anchors`:
  - `p12`: "MSC_RDR1 = 1U"
- `aliases`: []

### MACRO-MSC-RDR2
- `name`: "MSC_RDR2"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RDR2`."
- `anchors`:
  - `p12`: "MSC_RDR2 = 2U"
- `aliases`: []

### MACRO-MSC-RDR3
- `name`: "MSC_RDR3"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RDR3`."
- `anchors`:
  - `p12`: "MSC_RDR3 = 3U"
- `aliases`: []

### MACRO-MSC-RECEIVE-DISABLED
- `name`: "MSC_RECEIVE_DISABLED"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `MSC_RECEIVE_DISABLED`."
- `anchors`:
  - `p10`: "MSC_RECEIVE_DISABLED"
- `aliases`: []

### MACRO-MSC-RX-BUSY
- `name`: "MSC_RX_BUSY"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RX_BUSY`."
- `anchors`:
  - `p12`: "MSC_RX_BUSY"
- `aliases`: []

### MACRO-MSC-RX-ERROR
- `name`: "MSC_RX_ERROR"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RX_ERROR`."
- `anchors`:
  - `p12`: "MSC_RX_ERROR"
- `aliases`: []

### MACRO-MSC-RX-IDLE
- `name`: "MSC_RX_IDLE"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RX_IDLE`."
- `anchors`:
  - `p12`: "MSC_RX_IDLE"
- `aliases`: []

### MACRO-MSC-RX-OK
- `name`: "MSC_RX_OK"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RX_OK`."
- `anchors`:
  - `p12`: "MSC_RX_OK"
- `aliases`: []

### MACRO-MSC-RX-OVERFLOW
- `name`: "MSC_RX_OVERFLOW"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RX_OVERFLOW`."
- `anchors`:
  - `p12`: "MSC_RX_OVERFLOW"
- `aliases`: []

### MACRO-MSC-RX-TIMEOUT
- `name`: "MSC_RX_TIMEOUT"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_RX_TIMEOUT`."
- `anchors`:
  - `p12`: "MSC_RX_TIMEOUT"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI0
- `name`: "MSC_SDI_SEL_SDI0"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI0`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI0"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI1
- `name`: "MSC_SDI_SEL_SDI1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI1`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI1"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI2
- `name`: "MSC_SDI_SEL_SDI2"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI2`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI2"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI3
- `name`: "MSC_SDI_SEL_SDI3"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI3`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI3"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI4
- `name`: "MSC_SDI_SEL_SDI4"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI4`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI4"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI5
- `name`: "MSC_SDI_SEL_SDI5"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI5`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI5"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI6
- `name`: "MSC_SDI_SEL_SDI6"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI6`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI6"
- `aliases`: []

### MACRO-MSC-SDI-SEL-SDI7
- `name`: "MSC_SDI_SEL_SDI7"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `MSC_SDI_SEL_SDI7`."
- `anchors`:
  - `p11`: "MSC_SDI_SEL_SDI7"
- `aliases`: []

### MACRO-MSC-SEND-COMMAND-FRAME-ID
- `name`: "MSC_SEND_COMMAND_FRAME_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_SEND_COMMAND_FRAME_ID`."
- `anchors`:
  - `p12`: "MSC_SEND_COMMAND_FRAME_ID ="
- `aliases`: []

### MACRO-MSC-SEND-DATA-FRAME-ID
- `name`: "MSC_SEND_DATA_FRAME_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_SEND_DATA_FRAME_ID`."
- `anchors`:
  - `p12`: "MSC_SEND_DATA_FRAME_ID = 0x3U"
- `aliases`: []

### MACRO-MSC-SET-DATA-FRAME-ID
- `name`: "MSC_SET_DATA_FRAME_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_SET_DATA_FRAME_ID`."
- `anchors`:
  - `p12`: "MSC_SET_DATA_FRAME_ID = 0x2U"
- `aliases`: []

### MACRO-MSC-START-CHANNEL-ID
- `name`: "MSC_START_CHANNEL_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_START_CHANNEL_ID`."
- `anchors`:
  - `p12`: "MSC_START_CHANNEL_ID = 0x1U"
- `aliases`: []

### MACRO-MSC-STOP-CHANNEL-ID
- `name`: "MSC_STOP_CHANNEL_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_STOP_CHANNEL_ID`."
- `anchors`:
  - `p12`: "MSC_STOP_CHANNEL_ID = 0x4U"
- `aliases`: []

### MACRO-MSC-SWITCH-EN-ID
- `name`: "MSC_SWITCH_EN_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_SWITCH_EN_ID`."
- `anchors`:
  - `p12`: "MSC_SWITCH_EN_ID = 0xAU"
- `aliases`: []

### MACRO-MSC-SWITCH-SDI-ID
- `name`: "MSC_SWITCH_SDI_ID"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_SWITCH_SDI_ID`."
- `anchors`:
  - `p12`: "MSC_SWITCH_SDI_ID = 0x9U"
- `aliases`: []

### MACRO-MSC-TX-BUSY
- `name`: "MSC_TX_BUSY"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_TX_BUSY`."
- `anchors`:
  - `p12`: "MSC_TX_BUSY"
- `aliases`: []

### MACRO-MSC-TX-ERROR
- `name`: "MSC_TX_ERROR"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_TX_ERROR`."
- `anchors`:
  - `p12`: "MSC_TX_ERROR"
- `aliases`: []

### MACRO-MSC-TX-OK
- `name`: "MSC_TX_OK"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `MSC_TX_OK`."
- `anchors`:
  - `p12`: "MSC_TX_OK"
- `aliases`: []

### MACRO-SDI-POLARITY-INDENTICAL
- `name`: "SDI_POLARITY_INDENTICAL"
- `type`: `macro`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "macro index entry for `SDI_POLARITY_INDENTICAL`."
- `anchors`:
  - `p39`: "SDI_POLARITY_INDENTICAL"
- `aliases`: []

### MACRO-SOURCE-DATA-ALTIN
- `name`: "SOURCE_DATA_ALTIN"
- `type`: `macro`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "macro index entry for `SOURCE_DATA_ALTIN`."
- `anchors`:
  - `p41`: "[SOURCE_DATA_REG, SOURCE_DATA_ALTIN, SOURCE_DATA_ALTIN_INV]"
- `aliases`: []

### MACRO-SOURCE-DATA-ALTIN-INV
- `name`: "SOURCE_DATA_ALTIN_INV"
- `type`: `macro`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "macro index entry for `SOURCE_DATA_ALTIN_INV`."
- `anchors`:
  - `p41`: "[SOURCE_DATA_REG, SOURCE_DATA_ALTIN, SOURCE_DATA_ALTIN_INV]"
- `aliases`: []

### MACRO-NULL-PRT
- `name`: "NULL_PRT"
- `type`: `macro`
- `primary_page`: `43`
- `physical_pages`: `43`
- `brief`: "macro index entry for `NULL_PRT`."
- `anchors`:
  - `p43`: "NULL_PRT"
- `aliases`: []

### MACRO-SC-SW-PATCH-VERSION
- `name`: "SC_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SC_SW_PATCH_VERSION`."
- `anchors`:
  - `p7`: "#define MSC_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-SDI-POLARITY-INVERTED
- `name`: "SDI_POLARITY_INVERTED"
- `type`: `macro`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "macro index entry for `SDI_POLARITY_INVERTED`."
- `anchors`:
  - `p39`: "[SDI_POLARITY_INDENTICAL, SDI_POLARITY_INVERTED]"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p9`: "#define MSC_DISABLE_DEM_REPORT_ERROR_STATUS (STD_OFF)"
- `aliases`: []

### MACRO-STRING-LABEL
- `name`: "STRING_LABEL"
- `type`: `macro`
- `primary_page`: `46`
- `physical_pages`: `46`
- `brief`: "macro index entry for `STRING_LABEL`."
- `anchors`:
  - `p46`: "STRING_LABEL"
- `aliases`: []

### TYPE-MSC-TYPE
- `name`: "MSC_Type"
- `type`: `type`
- `primary_page`: `21`
- `physical_pages`: `21,22,23,24,25,26,27`
- `brief`: "type index entry for `MSC_Type`."
- `anchors`:
  - `p21`: "LOCAL_INLINE void MSC_HWA_SetTcctr(MSC_Type *const pMsc, uint32 u32Value)"
  - `p22`: "LOCAL_INLINE uint8 MSC_HWA_GetDataNeedSend(const MSC_Type *const pMsc)"
  - `p23`: "LOCAL_INLINE void MSC_HWA_SetTcdar(MSC_Type *const pMsc, uint32 u32Value)"
  - `p24`: "LOCAL_INLINE void MSC_HWA_SetIocr(MSC_Type *const pMsc, uint32 u32Value)"
  - `p25`: "LOCAL_INLINE void MSC_HWA_SetIncr(MSC_Type *const pMsc, uint32 u32Value)"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `15`
- `physical_pages`: `15,16,18,19,20,21`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p15`: "Std_ReturnType Msc_StartChannel(uint8 Channel);"
  - `p16`: "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
  - `p18`: "Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
  - `p19`: "Std_ReturnType."
  - `p20`: "Std_ReturnType Msc_LLD_StopChannel(uint8 u8Channel)"
- `aliases`: []

### TYPE-MSC-ENXACTIVETYPE
- `name`: "Msc_ENxActiveType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,13,18,21`
- `brief`: "type index entry for `Msc_ENxActiveType`."
- `anchors`:
  - `p11`: "Msc_ENxActiveType"
  - `p13`: "Msc_ENxActiveType eENC. ENC seletion."
  - `p18`: "Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn);"
  - `p21`: "Std_ReturnType Msc_LLD_SwitchEN(uint8 u8Channel, Msc_ENxType eEnx, Msc_ENxActiveType eENn)"
- `aliases`: []

### TYPE-MSC-SDISELECTIONTYPE
- `name`: "MSC_SDISelectionType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,13,18,21`
- `brief`: "type index entry for `MSC_SDISelectionType`."
- `anchors`:
  - `p11`: "MSC_SDISelectionType"
  - `p13`: "MSC_SDISelectionType eSDIsel. SDI seletion."
  - `p18`: "Std_ReturnType Msc_SwitchSDIChannel(uint8 Channel, MSC_SDISelectionType SDIChannel);"
  - `p21`: "Std_ReturnType Msc_LLD_SwitchSDIChannel(uint8 u8Channel, MSC_SDISelectionType eSDIChannel)"
- `aliases`: []

### TYPE-MSC-CHANNELCONFIGTYPE
- `name`: "Msc_ChannelConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13,14,19`
- `brief`: "type index entry for `Msc_ChannelConfigType`."
- `anchors`:
  - `p3`: "Msc_ChannelConfigType .....................................................................................................................…"
  - `p13`: "Msc_ChannelConfigType"
  - `p14`: "Msc_ChannelConfigType *const Msc_Channel[MSC_HW_MAX_MODULES]. Channel configs."
  - `p19`: "void Msc_LLD_InitChannel(const Msc_ChannelConfigType *pChannelConfig)"
- `aliases`: []

### TYPE-MSC-STATUSTYPE
- `name`: "Msc_StatusType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,17,20`
- `brief`: "type index entry for `Msc_StatusType`."
- `anchors`:
  - `p11`: "Msc_StatusType"
  - `p17`: "Msc_StatusType Msc_GetTxStatus(uint8 Channel);"
  - `p20`: "Msc_StatusType Msc_LLD_GetTxStatus(uint8 u8Channel)"
- `aliases`: []

### TYPE-MSC-RDRXINDEXTYPE
- `name`: "MSC_RDRxIndexType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,17,20`
- `brief`: "type index entry for `MSC_RDRxIndexType`."
- `anchors`:
  - `p12`: "MSC_RDRxIndexType"
  - `p17`: "MSC_RDRxIndexType"
  - `p20`: "MSC_RDRxIndexType"
- `aliases`: []

### TYPE-MSC-ENXTYPE
- `name`: "Msc_ENxType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,18,21`
- `brief`: "type index entry for `Msc_ENxType`."
- `anchors`:
  - `p11`: "Msc_ENxType"
  - `p18`: "Std_ReturnType Msc_SwitchEN(uint8 Channel, Msc_ENxType Enx, Msc_ENxActiveType ENn);"
  - `p21`: "Std_ReturnType Msc_LLD_SwitchEN(uint8 u8Channel, Msc_ENxType eEnx, Msc_ENxActiveType eENn)"
- `aliases`: []

### TYPE-MSC-TRANSMISSIONSOURCECONFIGTYPE
- `name`: "Msc_TransmissionSourceConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13,14`
- `brief`: "type index entry for `Msc_TransmissionSourceConfigType`."
- `anchors`:
  - `p3`: "Msc_TransmissionSourceConfigType ...................................................................................................... 13"
  - `p13`: "Msc_TransmissionSourceConfigType"
  - `p14`: "Msc_TransmissionSourceConfigType tTransSelConfig.."
- `aliases`: []

### TYPE-MSC-CONFIGTYPE
- `name`: "Msc_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,14`
- `brief`: "type index entry for `Msc_ConfigType`."
- `anchors`:
  - `p3`: "Msc_ConfigType ............................................................................................................................…"
  - `p14`: "Msc_ConfigType"
- `aliases`: []

### TYPE-MSC-RETURNTYPE
- `name`: "Msc_ReturnType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17,18`
- `brief`: "type index entry for `Msc_ReturnType`."
- `anchors`:
  - `p17`: "Msc_ReturnType ."
  - `p18`: "Msc_ReturnType ."
- `aliases`: []

### TYPE-MSC-RECEIVEBAUDDIVTYPE
- `name`: "MSC_ReceiveBaudDivType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `MSC_ReceiveBaudDivType`."
- `anchors`:
  - `p10`: "MSC_ReceiveBaudDivType"
  - `p13`: "MSC_ReceiveBaudDivType eBaudDiv. Baudrate."
- `aliases`: []

### TYPE-MSC-RECEIVEFRAMETYPE
- `name`: "MSC_ReceiveFrameType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `MSC_ReceiveFrameType`."
- `anchors`:
  - `p10`: "MSC_ReceiveFrameType"
  - `p13`: "MSC_ReceiveFrameType eRsvFrameType. Frame type."
- `aliases`: []

### TYPE-MSC-FCLACTIVETYPE
- `name`: "Msc_FclActiveType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `Msc_FclActiveType`."
- `anchors`:
  - `p10`: "Msc_FclActiveType"
  - `p13`: "Msc_FclActiveType eFclCtrl. FCL Control."
- `aliases`: []

### TYPE-MSC-RXDATAPARITYTYPE
- `name`: "Msc_RxDataParityType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `Msc_RxDataParityType`."
- `anchors`:
  - `p10`: "Msc_RxDataParityType"
  - `p13`: "Msc_RxDataParityType eParity. Parity mode."
- `aliases`: []

### TYPE-MSC-TRANSMISSIONPOLARITYTYPE
- `name`: "Msc_TransmissionPolarityType"
- `type`: `type`
- `primary_page`: `9`
- `physical_pages`: `9,13`
- `brief`: "type index entry for `Msc_TransmissionPolarityType`."
- `anchors`:
  - `p9`: "Msc_TransmissionPolarityType"
  - `p13`: "Msc_TransmissionPolarityType ePolarity. Polarity."
- `aliases`: []

### TYPE-MSC-TRANSMISSIONTRIGGERTYPE
- `name`: "Msc_TransmissionTriggerType"
- `type`: `type`
- `primary_page`: `9`
- `physical_pages`: `9,13`
- `brief`: "type index entry for `Msc_TransmissionTriggerType`."
- `anchors`:
  - `p9`: "Msc_TransmissionTriggerType"
  - `p13`: "Msc_TransmissionTriggerType eWorkMode. MSC work mode."
- `aliases`: []

### TYPE-STD-TYPE
- `name`: "Std_Type"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "type index entry for `Std_Type`."
- `anchors`:
  - `p10`: "failure/error Std_Type return code."
  - `p11`: "Success Std_Type return code."
- `aliases`: []

### TYPE-MSC-APIFUNCTIONIDSTYPE
- `name`: "Msc_APIFunctionIdsType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "type index entry for `Msc_APIFunctionIdsType`."
- `anchors`:
  - `p12`: "Msc_APIFunctionIdsType"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p18`: "void Msc_GetVersionInfo(Std_VersionInfoType *versioninfo);"
- `aliases`: []

### FILE-CDD-MSC-H
- `name`: "CDD_Msc.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,6,11,14`
- `brief`: "file index entry for `CDD_Msc.h`."
- `anchors`:
  - `p3`: "CDD_Msc.h .................................................................................................................................…"
  - `p6`: "CDD_Msc.h"
  - `p11`: "Enums in CDD_Msc.h"
  - `p14`: "Functions in CDD_Msc.h"
- `aliases`: []

### FILE-CDD-MSC-CFG-H
- `name`: "CDD_Msc_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,8,9`
- `brief`: "file index entry for `CDD_Msc_Cfg.h`."
- `anchors`:
  - `p3`: "CDD_Msc_Cfg.h .............................................................................................................................…"
  - `p8`: "CDD_Msc_Cfg.h"
  - `p9`: "Enums in CDD_Msc_Cfg.h"
- `aliases`: []

### FILE-CDD-MSC-HW-H
- `name`: "CDD_Msc_Hw.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "file index entry for `CDD_Msc_Hw.h`."
- `anchors`:
  - `p3`: "Functions in CDD_Msc_Hw.h .................................................................................................................…"
  - `p21`: "Functions in CDD_Msc_Hw.h"
- `aliases`: []

### FILE-CDD-MSC-LLD-H
- `name`: "CDD_Msc_LLD.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "file index entry for `CDD_Msc_LLD.h`."
- `anchors`:
  - `p3`: "Functions in CDD_Msc_LLD.h ................................................................................................................…"
  - `p19`: "Functions in CDD_Msc_LLD.h"
- `aliases`: []

### FILE-CDD-MSC-PBCFG-H
- `name`: "CDD_Msc_PBCfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "file index entry for `CDD_Msc_PBCfg.h`."
- `anchors`:
  - `p3`: "CDD_Msc_PBCfg.h ...........................................................................................................................…"
  - `p9`: "CDD_Msc_PBCfg.h"
- `aliases`: []

### TERM-MSC
- `name`: "MSC"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `MSC`."
- `anchors`:
  - `p1`: "MSC"
  - `p2`: "MSC"
  - `p3`: "MSC"
  - `p4`: "MSC"
  - `p5`: "MSC"
- `aliases`: []

### TERM-MSCINSTANCE
- `name`: "MSCInstance"
- `type`: `term`
- `primary_page`: `21`
- `physical_pages`: `21,22,23,24,25,26,27`
- `brief`: "term index entry for `MSCInstance`."
- `anchors`:
  - `p21`: "MSCInstance"
  - `p22`: "MSCInstance"
  - `p23`: "MSCInstance"
  - `p24`: "MSCInstance"
  - `p25`: "MSCInstance"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,9,31,32,33,47`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p4`: "Dem"
  - `p9`: "Dem"
  - `p31`: "Dem"
  - `p32`: "Dem"
  - `p33`: "Dem"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,32,34,44,46`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p32`: "AUTOSAR"
  - `p34`: "AUTOSAR"
  - `p44`: "AUTOSAR"
  - `p46`: "AUTOSAR"
- `aliases`: []

### TERM-CDD-MSC-CFG
- `name`: "CDD_Msc_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,8,9`
- `brief`: "term index entry for `CDD_Msc_Cfg`."
- `anchors`:
  - `p3`: "CDD_Msc_Cfg.h .............................................................................................................................…"
  - `p8`: "CDD_Msc_Cfg.h"
  - `p9`: "Enums in CDD_Msc_Cfg.h"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,30,31`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p9`: "Switches the Development Error Detection and Notification ON or OFF."
  - `p30`: "Msc Development Error Detection"
  - `p31`: "MscDevErrorDetect Switches the Development Error Detection and Notification ON or OFF."
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `9`
- `physical_pages`: `9,30,31`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p9`: "Det"
  - `p30`: "Det"
  - `p31`: "Det"
- `aliases`: []

### TERM-CDD-MSC-HW
- `name`: "CDD_Msc_Hw"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "term index entry for `CDD_Msc_Hw`."
- `anchors`:
  - `p3`: "Functions in CDD_Msc_Hw.h .................................................................................................................…"
  - `p21`: "Functions in CDD_Msc_Hw.h"
- `aliases`: []

### TERM-CDD-MSC-LLD
- `name`: "CDD_Msc_LLD"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "term index entry for `CDD_Msc_LLD`."
- `anchors`:
  - `p3`: "Functions in CDD_Msc_LLD.h ................................................................................................................…"
  - `p19`: "Functions in CDD_Msc_LLD.h"
- `aliases`: []

### TERM-CDD-MSC-PBCFG
- `name`: "CDD_Msc_PBCfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,9`
- `brief`: "term index entry for `CDD_Msc_PBCfg`."
- `anchors`:
  - `p3`: "CDD_Msc_PBCfg.h ...........................................................................................................................…"
  - `p9`: "CDD_Msc_PBCfg.h"
- `aliases`: []

### TERM-MSCDEVERRORDETECT
- `name`: "MscDevErrorDetect"
- `type`: `term`
- `primary_page`: `30`
- `physical_pages`: `30,31`
- `brief`: "term index entry for `MscDevErrorDetect`."
- `anchors`:
  - `p30`: "MscDevErrorDetect"
  - `p31`: "MscDevErrorDetect Switches the Development Error Detection and Notification ON or OFF."
- `aliases`: []

### TERM-MSCDISABLEDEMREPORTERRORSTATUS
- `name`: "MscDisableDemReportErrorStatus"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31,32`
- `brief`: "term index entry for `MscDisableDemReportErrorStatus`."
- `anchors`:
  - `p31`: "MscDisableDemReportErrorStatus"
  - `p32`: "MscDisableDemReportErrorStatus Switches the Diagnostic Error Reporting and Notification OFF."
- `aliases`: []

### TERM-MSCRXCLOCKRATIO
- `name`: "MscRxClockRatio"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37,38`
- `brief`: "term index entry for `MscRxClockRatio`."
- `anchors`:
  - `p37`: "Msc Rx Clock Ratio"
  - `p38`: "MscRxClockRatio Rx clock ratio is derived from the synchronous Tx baud rate, dividing it by 2 exp n."
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,5`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
  - `p5`: "MCAL"
- `aliases`: []

### TERM-MSC-DATABUFFERPTR
- `name`: "Msc_DataBufferPtr"
- `type`: `term`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "term index entry for `Msc_DataBufferPtr`."
- `anchors`:
  - `p16`: "Std_ReturnType Msc_SetDataFrame(uint8 Channel, uint32 *Msc_DataBufferPtr);"
- `aliases`: []

### TERM-MSCPASSVIEFRAMELENGTH
- `name`: "MscPassvieFrameLength"
- `type`: `term`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "term index entry for `MscPassvieFrameLength`."
- `anchors`:
  - `p34`: "MscPassvieFrameLength"
- `aliases`: []

### TERM-MSC-COMMANDBUFFERBITLENGTH
- `name`: "Msc_CommandBufferBitLength"
- `type`: `term`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "term index entry for `Msc_CommandBufferBitLength`."
- `anchors`:
  - `p16`: "Msc_CommandBufferBitLength);"
- `aliases`: []

### TERM-MSC-COMMANDBUFFERPTR
- `name`: "Msc_CommandBufferPtr"
- `type`: `term`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "term index entry for `Msc_CommandBufferPtr`."
- `anchors`:
  - `p16`: "*Msc_CommandBufferPtr,"
- `aliases`: []

### TERM-MSCDOWNSTREAMCLOCKREF
- `name`: "MscDownstreamClockRef"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `MscDownstreamClockRef`."
- `anchors`:
  - `p37`: "MscDownstreamClockRef"
- `aliases`: []

### TERM-MSCECUCPARTITIONREF
- `name`: "MscEcucPartitionRef"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "term index entry for `MscEcucPartitionRef`."
- `anchors`:
  - `p32`: "MscEcucPartitionRef"
- `aliases`: []

### TERM-MSCINJECTION
- `name`: "MscInjection"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `MscInjection`."
- `anchors`:
  - `p41`: "MscInjection"
- `aliases`: []

### TERM-MSCMULTICORESUPPORT
- `name`: "MscMultiCoreSupport"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "term index entry for `MscMultiCoreSupport`."
- `anchors`:
  - `p31`: "Msc MultiCore Support"
- `aliases`: []

### TERM-MSCPOLLINGUSE
- `name`: "MscPollingUse"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "term index entry for `MscPollingUse`."
- `anchors`:
  - `p32`: "MscPollingUse"
- `aliases`: []

### TERM-MSCTIMEOUTDURATION
- `name`: "MscTimeoutDuration"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "term index entry for `MscTimeoutDuration`."
- `anchors`:
  - `p31`: "Msc Timeout Duration"
- `aliases`: []

### TERM-MSCTRANSSOURCE
- `name`: "MscTransSource"
- `type`: `term`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "term index entry for `MscTransSource`."
- `anchors`:
  - `p40`: "MscTransSource"
- `aliases`: []

### TERM-MSCVERSIONINFOAPI
- `name`: "MscVersionInfoApi"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "term index entry for `MscVersionInfoApi`."
- `anchors`:
  - `p31`: "Provide Msc VersionInfo Api"
- `aliases`: []

### TERM-DEM-SETEVENTSTATUS
- `name`: "Dem_SetEventStatus"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "term index entry for `Dem_SetEventStatus`."
- `anchors`:
  - `p32`: "Dem_SetEventStatus API in case the corresponding error occurs. The EventId is taken from the"
- `aliases`: []

### TERM-EB-TRESOS
- `name`: "EB tresos"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `EB tresos`."
- `anchors`:
  - `p1`: "EB tresos"
- `aliases`: []

### TERM-MSC-RDRX-COUNT
- `name`: "MSC_RDRx_COUNT"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `MSC_RDRx_COUNT`."
- `anchors`:
  - `p12`: "MSC_RDRx_COUNT = 4U"
- `aliases`: []

### TERM-MSC-RECEIVE
- `name`: "MSC_receive"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `MSC_receive`."
- `anchors`:
  - `p10`: "MSC_receive baudrate division."
- `aliases`: []

### TERM-MICRO-SECOND-CHANNEL-COMPLEX-DEVICE-DRIVER
- `name`: "Micro Second Channel Complex Device Driver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Micro Second Channel Complex Device Driver`."
- `anchors`:
  - `p5`: "Micro Second Channel Complex Device Driver"
- `aliases`: []

### TERM-MSCENCSELECT
- `name`: "MscENCSelect"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `MscENCSelect`."
- `anchors`:
  - `p39`: "MscENCSelect"
- `aliases`: []

### TERM-MSCENHSELECT
- `name`: "MscENHSelect"
- `type`: `term`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "term index entry for `MscENHSelect`."
- `anchors`:
  - `p40`: "MscENHSelect"
- `aliases`: []

### TERM-MSCENLSELECT
- `name`: "MscENLSelect"
- `type`: `term`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "term index entry for `MscENLSelect`."
- `anchors`:
  - `p40`: "MscENLSelect"
- `aliases`: []

### TERM-MSCEMERGENCYLOAD
- `name`: "MscEmergencyLoad"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `MscEmergencyLoad`."
- `anchors`:
  - `p41`: "MscEmergencyLoad"
- `aliases`: []

### TERM-MSCPASSVIEFRAMENUMBER
- `name`: "MscPassvieFrameNumber"
- `type`: `term`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "term index entry for `MscPassvieFrameNumber`."
- `anchors`:
  - `p34`: "MscPassvieFrameNumber"
- `aliases`: []

### TERM-MSCRXDATAPARITY
- `name`: "MscRxDataParity"
- `type`: `term`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "term index entry for `MscRxDataParity`."
- `anchors`:
  - `p38`: "Msc Rx Data Parity"
- `aliases`: []

### TERM-MSCRXDATASIZE
- `name`: "MscRxDataSize"
- `type`: `term`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "term index entry for `MscRxDataSize`."
- `anchors`:
  - `p38`: "Msc Rx Data Size"
- `aliases`: []

### TERM-MSCSRHSELECTIONBIT
- `name`: "MscSRHSelectionBit"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `MscSRHSelectionBit`."
- `anchors`:
  - `p35`: "MscSRHSelectionBit"
- `aliases`: []

### TERM-MSCSRLDATASELECTIONBIT
- `name`: "MscSRLDataSelectionBit"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `MscSRLDataSelectionBit`."
- `anchors`:
  - `p35`: "Msc SRL Data Selection Bit"
- `aliases`: []

### TERM-MSCSERIALIZEDINPUTIOPOLARITY
- `name`: "MscSerializedInputIOPolarity"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `MscSerializedInputIOPolarity`."
- `anchors`:
  - `p39`: "Msc Serialized Input IO Polarity"
- `aliases`: []

### TERM-MSCSERIALIZEDINPUTIOSELECTION
- `name`: "MscSerializedInputIOSelection"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `MscSerializedInputIOSelection`."
- `anchors`:
  - `p39`: "MscSerializedInputIOSelection"
- `aliases`: []

### TERM-MSCSERIALIZEDINPUTPOLARITY
- `name`: "MscSerializedInputPolarity"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `MscSerializedInputPolarity`."
- `anchors`:
  - `p39`: "MscSerializedInputPolarity Define the input polarity."
- `aliases`: []

### TERM-MSCSERIALIZEDINPUTSELECTION
- `name`: "MscSerializedInputSelection"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `MscSerializedInputSelection`."
- `anchors`:
  - `p39`: "MscSerializedInputSelection Define."
- `aliases`: []

### TERM-MSCTRANSSOURCESRH
- `name`: "MscTransSourceSRH"
- `type`: `term`
- `primary_page`: `41`
- `physical_pages`: `41`
- `brief`: "term index entry for `MscTransSourceSRH`."
- `anchors`:
  - `p41`: "MscTransSourceSRH"
- `aliases`: []

### TERM-MSCTRANSSOURCESRL
- `name`: "MscTransSourceSRL"
- `type`: `term`
- `primary_page`: `40`
- `physical_pages`: `40`
- `brief`: "term index entry for `MscTransSourceSRL`."
- `anchors`:
  - `p40`: "MscTransSourceSRL"
- `aliases`: []

### TERM-MSCTRANSMISSIONPOLARITY
- `name`: "MscTransmissionPolarity"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `MscTransmissionPolarity`."
- `anchors`:
  - `p36`: "Msc Transmission Polarity"
- `aliases`: []

### TERM-MSCTRANSMISSIONTRIGGER
- `name`: "MscTransmissionTrigger"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `MscTransmissionTrigger`."
- `anchors`:
  - `p37`: "Msc Transmission Trigger"
- `aliases`: []

### TERM-MSCTXCLOCKMODE
- `name`: "MscTxClockMode"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `MscTxClockMode`."
- `anchors`:
  - `p36`: "MscTxClockMode"
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

## 9. Search Aliases

### ALIAS-MSC
- `canonical`: "MSC"
- `aliases`: ["Micro Second Channel Complex Device Driver", "MSC 微秒通道 / 外部功率器件串行接口复杂驱动", "MSC module", "MSC driver", "MSC User Manual", "MSC Integration Manual", "Msc", "CDD_Msc", "Micro Second Channel", "MSC模块", "微秒通道"]
- `related_ids`: ["TERM-MSC"]

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

### ALIAS-MSC-FRAME
- `canonical`: "MSC frame"
- `aliases`: ["command frame", "data frame", "passive frame", "downstream channel", "upstream channel", "MSC帧"]
- `related_ids`: []

### ALIAS-MSC-CHANNEL
- `canonical`: "MSC channel"
- `aliases`: ["Msc_ChannelConfigType", "MscGlobalConfig", "MscGeneral", "MscChannel", "channel demo", "MSC通道"]
- `related_ids`: []

### ALIAS-MSC-TRIGGER
- `canonical`: "MSC trigger"
- `aliases`: ["Trgsel", "PWM trigger", "trigger mode", "repetition mode", "Pwm reference"]
- `related_ids`: []

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between MSC_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `MSC_User_Manual.pdf`
- `source_pdf_sha256`: `a16ab5a9a18656bf77d045cea7f6bf6f22904830746d0d5ed72fb1bf0f134040`
- `generated_at`: `2026-06-20T08:18:58Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `291`
- `technical_missing_terms_added`: `5`
- `pages_with_added_terms`: `49`
- `supplemented_missing_token_count`: `291`
- `supplemented_missing_technical_token_count`: `5`
- `supplemented_physical_pages_count`: `49`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "Asynchronous"
  - "Confidential"
  - "Interface"
  - "Its"
  - "MHz"
  - "Optional"
  - "Parallel"
  - "Proprietary"
  - "Sequential"
  - "Spiker"
  - "Synchronous"
  - "Three"
  - "abstraction"
  - "access"
  - "address"
  - "asynchronous"
  - "belong"
  - "capability"
  - "chip"
  - "connected"
  - "connecting"
  - "connections"
  - "dedicated"
  - "designed"
  - "device"
  - "devices"
  - "diagnosis"
  - "divided"
  - "each"
  - "execution"
  - "external"
  - "facilitated"
  - "feature"
  - "field"
  - "filter"
  - "handle"
  - "includes"
  - "independent"
  - "information"
  - "intervention"
  - "long"
  - "master"
  - "means"
  - "microcontroller"
  - "modes"
  - "more"
  - "offers"
  - "one"
  - "out"
  - "parallel"
  - "parity"
  - "part"
  - "performing"
  - "pins"
  - "power"
  - "protocol"
  - "provides"
  - "receiving"
  - "reduces"
  - "requests"
  - "required"
  - "same"
  - "selector"
  - "special"
  - "specifically"
  - "speed"
  - "stop"
  - "stream"
  - "such"
  - "support"
  - "supported"
  - "system"
  - "than"
  - "they"
  - "through"
  - "transfer"
  - "transmitted"
  - "transmitting"
  - "unit"
  - "uses"
  - "without"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Instance"
  - "Invalid"
  - "Proprietary"
  - "allowed"
  - "inactive"
  - "initialization"
  - "transition"
  - "while"
  - "without"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "All"
  - "Channels"
  - "Confidential"
  - "CoreIDs"
  - "Precompile"
  - "Proprietary"
  - "TCDAR"
  - "array"
  - "identical"
  - "init"
  - "interted"
  - "signal"
  - "support"
  - "supported"
  - "uninit"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Core"
  - "Get"
  - "Proprietary"
  - "Single"
  - "report"
  - "transfer"
  - "using"
  - "version"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Even"
  - "Indicate"
  - "Indicates"
  - "Proprietary"
  - "Receiving"
  - "disabled"
  - "parity"
  - "present"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Confidential"
  - "EN0"
  - "EN1"
  - "EN2"
  - "EN3"
  - "Proprietary"
  - "operation"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "0x5"
  - "0x8"
  - "Confidential"
  - "Previous"
  - "Proprietary"
  - "Waiting"
  - "count"
  - "functions"
  - "max"
  - "overwritten"
  - "successful"
  - "timeout"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Fields"
  - "Injection0"
  - "Proprietary"
  - "Receive"
  - "Sourece"
  - "Transmisson"
  - "Uint8"
  - "allocated"
  - "between"
  - "core"
  - "eENH"
  - "eENL"
  - "inserted"
  - "load"
  - "partition"
  - "time"
  - "timeout"
  - "u16TimeoutValue"
  - "u32ChannelCoreId"
  - "u32Emergencyload"
  - "u8AllocatedPartition"
  - "u8ChannelId"
  - "u8DelayControl"
  - "u8InjEnable0"
  - "u8InjPosition0"
  - "u8PTFNumber"
  - "u8PassiveLength"
  - "u8SDIPolarity"
  - "u8SRHDataBitLength"
  - "u8SRLDataBitLength"
  - "u8SelSRH"
  - "u8SelSRL"
  - "u8TOIntEnable"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Fields"
  - "Initializes"
  - "Partition"
  - "Proprietary"
  - "Uint32"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Pointer"
  - "Proprietary"
  - "Start"
  - "serialized"
  - "transmit"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Pointer"
  - "Proprietary"
  - "Send"
  - "Stop"
  - "bits"
  - "serialized"
  - "transmitter"
  - "transmitting"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Get"
  - "LogicAddr"
  - "Proprietary"
  - "checked"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "EN0"
  - "EN1"
  - "EN2"
  - "EN3"
  - "ENx"
  - "Pointer"
  - "Proprietary"
  - "checked"
  - "information"
  - "storing"
  - "version"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "DeInitialize"
  - "Initialize"
  - "Pointer"
  - "Proprietary"
  - "Send"
  - "Start"
  - "serialized"
  - "transmit"
  - "transmitter"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Get"
  - "Pointer"
  - "Proprietary"
  - "Send"
  - "Stop"
  - "bits"
  - "pLogicAddr"
  - "pRxDataBufferPtr"
  - "received"
  - "serialized"
  - "transmitter"
  - "transmitting"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "BaseAdress"
  - "Change"
  - "Confidential"
  - "Get"
  - "LINFlex"
  - "NBS"
  - "Proprietary"
  - "addressed"
  - "changed"
  - "eENx"
  - "handler"
  - "logical"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "CFB"
  - "CTS"
  - "Confidential"
  - "DFB"
  - "Get"
  - "Proprietary"
  - "TCSTR"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "TCCOR"
  - "TCDAR"
  - "TCELR"
  - "TCSHR"
  - "TCSLR"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "CRFI"
  - "Clear"
  - "Confidential"
  - "Get"
  - "INSR"
  - "Proprietary"
  - "RFI"
  - "TCDIS"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Get"
  - "INCR"
  - "INSR"
  - "Proprietary"
  - "RDATA"
  - "RDRx"
  - "RERR"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Clear"
  - "Confidential"
  - "Get"
  - "Proprietary"
  - "RDRx"
  - "VLD"
  - "flag"
  - "reset"
  - "timeout"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "GCR"
  - "Proprietary"
  - "RTOR"
  - "TCCTR1"
  - "bEnable"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "during"
  - "obtains"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "Unit"
  - "each"
  - "related"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Multi"
  - "Proprietary"
  - "Specifies"
  - "blocking"
  - "core"
  - "raised"
  - "timeout"
  - "wait"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Maps"
  - "Proprietary"
  - "REFERENCE"
  - "available"
  - "each"
  - "elements"
  - "extended"
  - "independent"
  - "instance"
  - "instead"
  - "invoked"
  - "make"
  - "multiple"
  - "operate"
  - "partition"
  - "partitions"
  - "references"
  - "using"
  - "zero"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Identifies"
  - "NAME"
  - "Proprietary"
  - "REFERENCE"
  - "SYMBOLIC"
  - "Sets"
  - "different"
  - "global"
  - "logical"
  - "names"
  - "naming"
  - "occured"
  - "unique"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Maps"
  - "Proprietary"
  - "REFERENCE"
  - "Specifies"
  - "one"
  - "partition"
  - "partitions"
  - "single"
  - "subset"
  - "zero"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "SRHDataLength"
  - "Specifies"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "ChipSelec"
  - "Confidential"
  - "Proprietary"
  - "SRHDataLength"
  - "Specifies"
  - "ock"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Downstream"
  - "Proprietary"
  - "REFERENCE"
  - "Specifies"
  - "bisecting"
  - "obtained"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Even"
  - "Odd"
  - "Proprietary"
  - "bits"
  - "parity"
  - "size"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "EN0"
  - "Proprietary"
  - "select"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "select"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "DelayInterrupt"
  - "InjectionPosition0"
  - "InjectionPosition1"
  - "Proprietary"
  - "position"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Callback"
  - "Confidential"
  - "Proprietary"
  - "RxTimeoutInterruptVal"
  - "about"
  - "aggregated"
  - "bits"
  - "indicate"
  - "information"
  - "published"
  - "timeout"
  - "unit"
  - "versions"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "ArReleaseMajorVersion"
  - "ArReleaseMinorVersion"
  - "ArReleaseRevisionVersion"
  - "Confidential"
  - "List"
  - "ModuleId"
  - "Proprietary"
  - "appropriate"
  - "specification"
  - "version"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "BSW00347"
  - "Confidential"
  - "ECU"
  - "Proprietary"
  - "SwMajorVersion"
  - "SwMinorVersion"
  - "SwPatchVersion"
  - "extended"
  - "implementat"
  - "instantiated"
  - "ion"
  - "level"
  - "numbering"
  - "requires"
  - "several"
  - "single"
  - "specify"
  - "times"
  - "total"
  - "version"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "according"
  - "dedicated"
  - "list"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "Confidential"
  - "Port"
  - "Proprietary"
  - "example"
  - "pins"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0049
- `physical_page`: `49`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50`
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
- `physical_pages`: `2,3,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,30,33,35,36,37,38`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0023-001", "TBL-0024-001", "TBL-0025-001", "TBL-0026-001", "TBL-0027-001", "TBL-0030-001", "TBL-0033-001", "TBL-0035-001", "TBL-0036-001", "TBL-0037-001", "TBL-0038-001"]
- `message`: "33 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,27`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0027-001"]
- `message`: "3 generated visual anchors have no formal source figure number."
- `recommended_action`: "Use source PDF page to inspect vector graphics or screenshots."

### WARN-0006
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `50`
- `indexed_physical_pages_count`: `50`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `165`
- `table_index_count`: `33`
- `figure_index_count`: `69`
- `symbol_index_count`: `282`
- `alias_index_count`: `10`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `a16ab5a9a18656bf77d045cea7f6bf6f22904830746d0d5ed72fb1bf0f134040`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:18:58Z`
- `text_layer_search_supplement_terms`: `291`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->