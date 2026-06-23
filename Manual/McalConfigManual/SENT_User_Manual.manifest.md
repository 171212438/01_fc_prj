---
manifest_schema_version: "1.1"
source_pdf: "SENT_User_Manual.pdf"
source_pdf_sha256: "9214d822f47e57119e69a56779ac9b9ec2a40b829e669dc2bbc2d8da384c9970"
source_pdf_size_bytes: 2319317
pdf_page_count: 41
generated_at: "2026-06-19T14:01:29Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched"
source_document_id: null
source_document_revision: "Rev.0.1"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: SENT_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `SENT_User_Manual.pdf`
- `source_pdf_sha256`: `9214d822f47e57119e69a56779ac9b9ec2a40b829e669dc2bbc2d8da384c9970`
- `source_pdf_size_bytes`: `2319317`
- `pdf_page_count`: `41`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.1`
- `visible_cover_title`: `FC7xxx SENT User Manual`
- `visible_cover_revision`: `Rev.0.1`
- `revision_history_latest_row`: `0.1 / 2023/12/15 / Initial release`
- `generated_at`: `2026-06-19T14:01:29Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `36`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL SENT module - User Manual"
- `module_scope`: "SENT driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 SENT Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["SENT", "Single Edge Nibble Transmission Driver", "AUTOSAR_SWS_SENTDriver or vendor-specific SENT driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Sent", "FC_SENT", "FCSENT", "SENT_", "Sent_"]
- `summary`: "This 41-page user manual indexes SENT content across source physical pages 1-41, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["SENT", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx SENT User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["SENT", "FC7xxx", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SENT", "Sent", "CDD_Sent", "SentGeneral", "FC7xxx", "CDD", "Sent_SpcConfigType", "Sent_ChannelConfigType"]
- `anchor`: "Table of Contents"

### SEC-0004-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SENT", "Sent", "FC7xxx", "Usage", "Demo"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "SENT Introduction"
- `path`: "Chapter 1 SENT Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["SENT", "CDD", "sensor", "AUTOSAR", "data", "signal", "mode", "Detection"]
- `anchor`: "Chapter 1 SENT Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirement Tracing"
- `path`: "Chapter 1 SENT Introduction / 1.1 Requirement Tracing"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SENT", "CDD", "AUTOSAR", "sensor", "FC7xxx", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "APIs", "BSW"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Introduction to CDD"
- `path`: "Chapter 1 SENT Introduction / 1.2 Introduction to CDD"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["SENT", "CDD", "AUTOSAR", "sensor", "FC7xxx", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "APIs", "BSW"]
- `anchor`: "1.2"

### SEC-001-003
- `source_number`: `1.3`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 SENT Introduction / 1.3 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `6`
- `printed_page_start`: `5`
- `printed_page_end`: `6`
- `keywords`: ["SENT", "CDD", "sensor", "AUTOSAR", "data", "signal", "mode", "Detection"]
- `anchor`: "1.3"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `7`
- `physical_page_end`: `19`
- `printed_page_start`: `7`
- `printed_page_end`: `19`
- `keywords`: ["SENT", "define", "void", "message", "Sent", "boolean", "SPC", "FC7xxx"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "CDD_Sent", "FC7xxx", "SENT_VENDOR_ID_C", "SENT_AR_RELEASE_MAJOR_VERSION_C", "SENT_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "CDD_Sent", "FC7xxx", "SENT_VENDOR_ID_C", "SENT_AR_RELEASE_MAJOR_VERSION_C", "SENT_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "FC7xxx", "CDD_Sent", "called", "Sent_Init", "SENT_VENDOR_ID_C"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in CDD_Sent.c"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Sent.c"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "CDD_Sent", "FC7xxx", "SENT_VENDOR_ID_C", "SENT_AR_RELEASE_MAJOR_VERSION_C", "SENT_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in CDD_Sent.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Sent.h"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "FC7xxx", "CDD_Sent", "called", "Sent_Init", "SENT_VENDOR_ID_C"]
- `anchor`: "2.3.2"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `9`
- `physical_page_end`: `11`
- `printed_page_start`: `9`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "bus", "idle", "Enumeration", "Values", "message", "Frame", "format"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enumerations in CDD_Sent.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h"
- `physical_page_start`: `9`
- `physical_page_end`: `11`
- `printed_page_start`: `9`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "bus", "idle", "Enumeration", "Values", "message", "Frame", "format"]
- `anchor`: "2.4.1"

### SEC-002-004-001-001
- `source_number`: `2.4.1.1`
- `title`: "Sent_StatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.1 Sent_StatusType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SENT", "Sent_StatusType", "Sent_ReturnType", "Sent_DataNibbleModeType", "Frame", "format", "FC7xxx", "define"]
- `anchor`: "2.4.1.1"

### SEC-002-004-001-002
- `source_number`: `2.4.1.2`
- `title`: "Sent_ReturnType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.2 Sent_ReturnType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SENT", "Sent_StatusType", "Sent_ReturnType", "Sent_DataNibbleModeType", "Frame", "format", "FC7xxx", "define"]
- `anchor`: "2.4.1.2"

### SEC-002-004-001-003
- `source_number`: `2.4.1.3`
- `title`: "Sent_DataNibbleModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.3 Sent_DataNibbleModeType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SENT", "Sent_StatusType", "Sent_ReturnType", "Sent_DataNibbleModeType", "Frame", "format", "FC7xxx", "define"]
- `anchor`: "2.4.1.3"

### SEC-002-004-001-004
- `source_number`: `2.4.1.4`
- `title`: "Sent_CalibrationValidType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.4 Sent_CalibrationValidType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SENT", "bus", "idle", "Option", "calibration", "SAE", "Frame", "format"]
- `anchor`: "2.4.1.4"

### SEC-002-004-001-005
- `source_number`: `2.4.1.5`
- `title`: "Sent_CalDiagOptionType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.5 Sent_CalDiagOptionType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SENT", "bus", "idle", "Option", "calibration", "SAE", "Frame", "format"]
- `anchor`: "2.4.1.5"

### SEC-002-004-001-006
- `source_number`: `2.4.1.6`
- `title`: "Sent_IdleCountType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.6 Sent_IdleCountType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SENT", "bus", "idle", "Option", "calibration", "SAE", "Frame", "format"]
- `anchor`: "2.4.1.6"

### SEC-002-004-001-007
- `source_number`: `2.4.1.7`
- `title`: "Sent_SerialMessageType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.7 Sent_SerialMessageType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "message", "SPC", "data", "bus", "idle", "Sent_SerialMessageType", "SENT_SERIAL_MESSAGE_ENHANCE_1"]
- `anchor`: "2.4.1.7"

### SEC-002-004-001-008
- `source_number`: `2.4.1.8`
- `title`: "Sent_SpcTriggerType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.8 Sent_SpcTriggerType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "message", "SPC", "data", "bus", "idle", "Sent_SerialMessageType", "SENT_SERIAL_MESSAGE_ENHANCE_1"]
- `anchor`: "2.4.1.8"

### SEC-002-004-001-009
- `source_number`: `2.4.1.9`
- `title`: "Sent_SpcTickBaseType"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.9 Sent_SpcTickBaseType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SENT", "message", "SPC", "data", "bus", "idle", "Sent_SerialMessageType", "SENT_SERIAL_MESSAGE_ENHANCE_1"]
- `anchor`: "2.4.1.9"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `12`
- `physical_page_end`: `14`
- `printed_page_start`: `12`
- `printed_page_end`: `14`
- `keywords`: ["SENT", "Sent", "boolean", "message", "Enable", "SPC", "Fast", "data"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Sent_SpcConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Sent_SpcConfigType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SENT", "SPC", "Sent_SpcConfigType", "Sent_ChannelConfigType", "FC7xxx", "Sent_FastErrorNotifactionType", "received", "Sent_SlowErrorNotifactionType"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Sent_ChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Sent_ChannelConfigType"
- `physical_page_start`: `12`
- `physical_page_end`: `13`
- `printed_page_start`: `12`
- `printed_page_end`: `13`
- `keywords`: ["SENT", "boolean", "message", "Enable", "SPC", "CRC", "Fast", "pulse"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Sent_InstanceConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Sent_InstanceConfigType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SENT", "Sent", "Sent_InstanceConfigType", "Pointer", "instance", "boolean", "FIFO", "data"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Sent_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 Sent_ConfigType"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["SENT", "Sent", "Sent_InstanceConfigType", "Pointer", "instance", "boolean", "FIFO", "data"]
- `anchor`: "2.6.4"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `15`
- `physical_page_end`: `18`
- `printed_page_start`: `15`
- `printed_page_end`: `18`
- `keywords`: ["SENT", "void", "Returns", "FC7xxx", "Diagram", "sent", "pConfigPtr", "version"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in Cdd_Sent.c"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c"
- `physical_page_start`: `15`
- `physical_page_end`: `18`
- `printed_page_start`: `15`
- `printed_page_end`: `18`
- `keywords`: ["SENT", "void", "Returns", "FC7xxx", "Diagram", "sent", "pConfigPtr", "version"]
- `anchor`: "2.7.1"

### SEC-002-007-001-001
- `source_number`: `2.7.1.1`
- `title`: "void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.1 void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["SENT", "Sent_Init", "Sent_ConfigType", "pConfigPtr", "FC7xxx", "Cdd_Sent", "sent", "instance"]
- `anchor`: "2.7.1.1"

### SEC-002-007-001-002
- `source_number`: `2.7.1.2`
- `title`: "void Sent_DeInit (void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.2 void Sent_DeInit (void)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["SENT", "void", "Sent_DeInit", "FC7xxx", "pConfigPtr", "Diagram", "pointer", "sent"]
- `anchor`: "2.7.1.2"

### SEC-002-007-001-003
- `source_number`: `2.7.1.3`
- `title`: "void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["SENT", "void", "version", "SPC", "Returns", "state", "Sent_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "2.7.1.3"

### SEC-002-007-001-004
- `source_number`: `2.7.1.4`
- `title`: "void Sent_RequestSpcPulse"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.4 void Sent_RequestSpcPulse"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["SENT", "void", "version", "SPC", "Returns", "state", "Sent_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "2.7.1.4"

### SEC-002-007-001-005
- `source_number`: `2.7.1.5`
- `title`: "void Sent_MainFunctionFastMessageRead(void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["SENT", "void", "Sent_MainFunctionFastMessageRead", "Sent_MainFunctionSlowMessageRead", "FC7xxx", "u8ControllerID", "u8ChannelID", "Returns"]
- `anchor`: "2.7.1.5"

### SEC-002-007-001-006
- `source_number`: `2.7.1.6`
- `title`: "void Sent_MainFunctionSlowMessageRead(void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.6 void Sent_MainFunctionSlowMessageRead(void)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["SENT", "void", "Sent_MainFunctionFastMessageRead", "Sent_MainFunctionSlowMessageRead", "FC7xxx", "u8ControllerID", "u8ChannelID", "Returns"]
- `anchor`: "2.7.1.6"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SENT", "Sent", "FC7xxx", "Initialization", "Mode", "Sequence", "Diagram", "Interrupt"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Sent Initialization with Interrupt Mode"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Sent Initialization with Interrupt Mode"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SENT", "Sent", "FC7xxx", "Initialization", "Mode", "Sequence", "Diagram", "Interrupt"]
- `anchor`: "2.8.1"

### SEC-002-008-002
- `source_number`: `2.8.2`
- `title`: "Sent Initialization with Polling Mode"
- `path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.2 Sent Initialization with Polling Mode"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SENT", "Sent", "FC7xxx", "Initialization", "Mode", "Sequence", "Diagram", "Interrupt"]
- `anchor`: "2.8.2"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `20`
- `physical_page_end`: `36`
- `printed_page_start`: `20`
- `printed_page_end`: `36`
- `keywords`: ["Screenshot", "Properties", "Property", "Label", "Default", "SENT", "Sent", "BOOLEAN"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["SENT", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `21`
- `physical_page_end`: `28`
- `printed_page_start`: `21`
- `printed_page_end`: `28`
- `keywords`: ["SENT", "Screenshot", "Properties", "Property", "Label", "Default", "Sent", "BOOLEAN"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "SentGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "DmaDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.1 DmaDevErrorDetect"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "SentMulticoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.2 SentMulticoreSupport"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.2.2"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "SentDeInitApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties", "Property", "BOOLEAN", "Label"]
- `anchor`: "3.2.2.3"

### SEC-003-002-002-004
- `source_number`: `3.2.2.4`
- `title`: "SentVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.4 SentVersionInfoApi"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties", "Property", "BOOLEAN", "Label"]
- `anchor`: "3.2.2.4"

### SEC-003-002-002-005
- `source_number`: `3.2.2.5`
- `title`: "SentIndex"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.5 SentIndex"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties", "Property", "BOOLEAN", "Label"]
- `anchor`: "3.2.2.5"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "SentGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral"
- `physical_page_start`: `22`
- `physical_page_end`: `24`
- `printed_page_start`: `22`
- `printed_page_end`: `24`
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "Label", "Default", "DMA"]
- `anchor`: "3.2.3"

### SEC-003-002-003-001
- `source_number`: `3.2.3.1`
- `title`: "SentControllerId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "3.2.3.1"

### SEC-003-002-003-002
- `source_number`: `3.2.3.2`
- `title`: "SentHWInstance"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.2 SentHWInstance"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "3.2.3.2"

### SEC-003-002-003-003
- `source_number`: `3.2.3.3`
- `title`: "SentControllerEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.3 SentControllerEcucPartitionRef"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "3.2.3.3"

### SEC-003-002-003-004
- `source_number`: `3.2.3.4`
- `title`: "SentModuleClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.4 SentModuleClockRef"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "3.2.3.4"

### SEC-003-002-003-005
- `source_number`: `3.2.3.5`
- `title`: "SentDMASupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.5 SentDMASupport"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "3.2.3.5"

### SEC-003-002-003-006
- `source_number`: `3.2.3.6`
- `title`: "DMAWaterMark"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.6 DMAWaterMark"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["SENT", "Sent", "DMA", "SentTimestampPrescaller", "FIFO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.3.6"

### SEC-003-002-003-007
- `source_number`: `3.2.3.7`
- `title`: "FIFOOverflowIntEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.7 FIFOOverflowIntEn"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["SENT", "Sent", "DMA", "SentTimestampPrescaller", "FIFO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.3.7"

### SEC-003-002-003-008
- `source_number`: `3.2.3.8`
- `title`: "SentTimestampPrescaller"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.8 SentTimestampPrescaller"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["SENT", "Sent", "DMA", "SentTimestampPrescaller", "FIFO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.3.8"

### SEC-003-002-003-009
- `source_number`: `3.2.3.9`
- `title`: "SentDebugEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.9 SentDebugEn"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["SENT", "Sent", "DMA", "SentTimestampPrescaller", "FIFO", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.3.9"

### SEC-003-002-003-010
- `source_number`: `3.2.3.10`
- `title`: "AutoClearReadyFlag"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.10 AutoClearReadyFlag"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["SENT", "Sent", "Screenshot", "BOOLEAN", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.3.10"

### SEC-003-002-003-011
- `source_number`: `3.2.3.11`
- `title`: "SentControllerActivation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.11 SentControllerActivation"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["SENT", "Sent", "Screenshot", "BOOLEAN", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.3.11"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "SentChannelConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig"
- `physical_page_start`: `25`
- `physical_page_end`: `28`
- `printed_page_start`: `25`
- `printed_page_end`: `28`
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "Label", "BOOLEAN", "Default"]
- `anchor`: "3.2.4"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "SentChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.1 SentChannelId"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["SENT", "Sent", "Screenshot", "BOOLEAN", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.4.1"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "SentChannelActivation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.2 SentChannelActivation"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SENT", "Sent", "Channel", "Properties", "Property", "Label", "BOOLEAN", "Default"]
- `anchor`: "3.2.4.2"

### SEC-003-002-004-003
- `source_number`: `3.2.4.3`
- `title`: "SentHWChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.3 SentHWChannel"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SENT", "Sent", "Channel", "Properties", "Property", "Label", "BOOLEAN", "Default"]
- `anchor`: "3.2.4.3"

### SEC-003-002-004-004
- `source_number`: `3.2.4.4`
- `title`: "EnableHwFiFo"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.4 EnableHwFiFo"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SENT", "Sent", "Channel", "Properties", "Property", "Label", "BOOLEAN", "Default"]
- `anchor`: "3.2.4.4"

### SEC-003-002-004-005
- `source_number`: `3.2.4.5`
- `title`: "TickCompensateEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.5 TickCompensateEn"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["SENT", "Sent", "Channel", "Properties", "Property", "Label", "BOOLEAN", "Default"]
- `anchor`: "3.2.4.5"

### SEC-003-002-004-006
- `source_number`: `3.2.4.6`
- `title`: "UseAlternativeCrc"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.6 UseAlternativeCrc"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SENT", "CRC", "BOOLEAN", "Default", "Enable", "Fast", "UseAlternativeCrc", "Screenshot"]
- `anchor`: "3.2.4.6"

### SEC-003-002-004-007
- `source_number`: `3.2.4.7`
- `title`: "FastMsgCRCCheckEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.7 FastMsgCRCCheckEn"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SENT", "CRC", "BOOLEAN", "Default", "Enable", "Fast", "UseAlternativeCrc", "Screenshot"]
- `anchor`: "3.2.4.7"

### SEC-003-002-004-008
- `source_number`: `3.2.4.8`
- `title`: "FastMsgDataChangeEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.8 FastMsgDataChangeEn"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SENT", "CRC", "BOOLEAN", "Default", "Enable", "Fast", "UseAlternativeCrc", "Screenshot"]
- `anchor`: "3.2.4.8"

### SEC-003-002-004-009
- `source_number`: `3.2.4.9`
- `title`: "FastMsgCRCAugEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.9 FastMsgCRCAugEn"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SENT", "CRC", "BOOLEAN", "Default", "Enable", "Fast", "UseAlternativeCrc", "Screenshot"]
- `anchor`: "3.2.4.9"

### SEC-003-002-004-010
- `source_number`: `3.2.4.10`
- `title`: "FastMsgCRCWithSCEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.10 FastMsgCRCWithSCEn"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["SENT", "CRC", "BOOLEAN", "Default", "Enable", "Fast", "UseAlternativeCrc", "Screenshot"]
- `anchor`: "3.2.4.10"

### SEC-003-002-004-011
- `source_number`: `3.2.4.11`
- `title`: "SlowMsgCRCAugEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.11 SlowMsgCRCAugEn"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SENT", "BOOLEAN", "CRC", "DMA", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.4.11"

### SEC-003-002-004-012
- `source_number`: `3.2.4.12`
- `title`: "PausePulseEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.12 PausePulseEn"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SENT", "BOOLEAN", "CRC", "DMA", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.4.12"

### SEC-003-002-004-013
- `source_number`: `3.2.4.13`
- `title`: "FastMsgDmaEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.13 FastMsgDmaEn"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SENT", "BOOLEAN", "CRC", "DMA", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.4.13"

### SEC-003-002-004-014
- `source_number`: `3.2.4.14`
- `title`: "SlowMsgDmaEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.14 SlowMsgDmaEn"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["SENT", "BOOLEAN", "CRC", "DMA", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "3.2.4.14"

### SEC-003-002-004-015
- `source_number`: `3.2.4.15`
- `title`: "DataNibbleNumber"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.15"

### SEC-003-002-004-016
- `source_number`: `3.2.4.16`
- `title`: "DigitalFilterCount"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.16 DigitalFilterCount"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.16"

### SEC-003-002-004-017
- `source_number`: `3.2.4.17`
- `title`: "SentModuleClock"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.17 SentModuleClock"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.17"

### SEC-003-002-004-018
- `source_number`: `3.2.4.18`
- `title`: "SentClockTickMin"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.18 SentClockTickMin"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.18"

### SEC-002-000
- `source_number`: `2.0`
- `title`: "3.2.4.19"
- `path`: "Chapter 3 Tresos Configuration Items / 2.0 3.2.4.19"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "2.0"

### SEC-003-088
- `source_number`: `3.88`
- `title`: "3.2.4.20"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20"
- `physical_page_start`: `30`
- `physical_page_end`: `36`
- `printed_page_start`: `30`
- `printed_page_end`: `36`
- `keywords`: ["Sent", "SENT", "Screenshot", "Properties", "Property", "Label", "Default", "SPC"]
- `anchor`: "3.88"

### SEC-003-002-004-021
- `source_number`: `3.2.4.21`
- `title`: "CalDiagOption"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "3.2.4.21"

### SEC-003-002-004-022
- `source_number`: `3.2.4.22`
- `title`: "DataNibbleMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.22 DataNibbleMode"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "3.2.4.22"

### SEC-003-002-004-023
- `source_number`: `3.2.4.23`
- `title`: "CalValid"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.23 CalValid"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "3.2.4.23"

### SEC-003-002-004-024
- `source_number`: `3.2.4.24`
- `title`: "IdleCount"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.24 IdleCount"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot"]
- `anchor`: "3.2.4.24"

### SEC-003-002-004-025
- `source_number`: `3.2.4.25`
- `title`: "SentFastCRCErrorNotificationEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.25 SentFastCRCErrorNotificationEnable"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot"]
- `anchor`: "3.2.4.25"

### SEC-003-002-004-026
- `source_number`: `3.2.4.26`
- `title`: "SentFastCRCErrorNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.26 SentFastCRCErrorNotification"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot"]
- `anchor`: "3.2.4.26"

### SEC-003-002-004-027
- `source_number`: `3.2.4.27`
- `title`: "SentSlowCRCErrorNotificationEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.27 SentSlowCRCErrorNotificationEnable"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot"]
- `anchor`: "3.2.4.27"

### SEC-003-002-004-028
- `source_number`: `3.2.4.28`
- `title`: "SentSlowCRCErrorNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.28"

### SEC-003-002-004-029
- `source_number`: `3.2.4.29`
- `title`: "FastMsgReadType"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.29 FastMsgReadType"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.29"

### SEC-003-002-004-030
- `source_number`: `3.2.4.30`
- `title`: "SentFastNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.30 SentFastNotification"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.30"

### SEC-003-002-004-031
- `source_number`: `3.2.4.31`
- `title`: "SlowMsgReadType"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.31 SlowMsgReadType"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.31"

### SEC-003-002-004-032
- `source_number`: `3.2.4.32`
- `title`: "SentSlowNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.32 SentSlowNotification"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.4.32"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "SentSPCmode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "SentSPCModeEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.5.1"

### SEC-003-002-005-002
- `source_number`: `3.2.5.2`
- `title`: "CalDiagEn"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.2 CalDiagEn"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.5.2"

### SEC-003-002-005-003
- `source_number`: `3.2.5.3`
- `title`: "PulseWidth"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.3 PulseWidth"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "3.2.5.3"

### SEC-003-002-005-004
- `source_number`: `3.2.5.4`
- `title`: "PulseDelay"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "3.2.5.4"

### SEC-003-002-005-005
- `source_number`: `3.2.5.5`
- `title`: "SpcTickBase"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.5 SpcTickBase"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "3.2.5.5"

### SEC-003-002-005-006
- `source_number`: `3.2.5.6`
- `title`: "SpcTrigger"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.6 SpcTrigger"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "3.2.5.6"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation"
- `physical_page_start`: `34`
- `physical_page_end`: `36`
- `printed_page_start`: `34`
- `printed_page_end`: `36`
- `keywords`: ["SENT", "Label", "Default", "Screenshot", "Properties", "Property", "AUTOSAR", "Version"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "AUTOSAR Major Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.1 AUTOSAR Major Version"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["SENT", "AUTOSAR", "Version", "Major", "INTEGER_LABEL", "Default", "version", "number"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "AUTOSAR Minor Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.2 AUTOSAR Minor Version"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["SENT", "AUTOSAR", "Version", "Major", "INTEGER_LABEL", "Default", "version", "number"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "AUTOSAR Patch Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.3 AUTOSAR Patch Version"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["SENT", "AUTOSAR", "Version", "Major", "INTEGER_LABEL", "Default", "version", "number"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "Software Major Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.4 Software Major Version"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["SENT", "AUTOSAR", "Version", "Major", "INTEGER_LABEL", "Default", "version", "number"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "Software Minor Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.5"

### SEC-003-002-006-006
- `source_number`: `3.2.6.6`
- `title`: "Software Patch Version"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.6 Software Patch Version"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.6"

### SEC-003-002-006-007
- `source_number`: `3.2.6.7`
- `title`: "Module ID"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.7 Module ID"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.7"

### SEC-003-002-006-008
- `source_number`: `3.2.6.8`
- `title`: "Vendor ID"
- `path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.8 Vendor ID"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "3.2.6.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `37`
- `physical_page_end`: `41`
- `printed_page_start`: `37`
- `printed_page_end`: `41`
- `keywords`: ["Sent", "SENT", "FC7xxx", "can", "tag", "users", "configured", "Configure"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "SENT Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.1 SENT Usage Common Steps"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["Sent", "SENT", "FC7xxx", "Configure", "PortContainer", "McuClockReferencepoint_PCC", "Usage", "clock"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "Sent Usage Demo"
- `path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `physical_page_start`: `37`
- `physical_page_end`: `41`
- `printed_page_start`: `37`
- `printed_page_end`: `41`
- `keywords`: ["Sent", "SENT", "FC7xxx", "can", "tag", "users", "configured", "Configure"]
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
- `anchors`: ["Table of Contents", "Chapter 1 SENT Introduction .......................................................................…", "1.1", "Requirement Tracing ...............................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image"]
- `anchors`: ["4.2", "Sent Usage Demo ...................................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 SENT Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Chapter 1 SENT Introduction", "1.1", "Requirement Tracing", "The design of this module follows the specifications of the complex driver specified in AUTOSAR Cla…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 1 SENT Introduction / 1.3 Hardware Summary"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["In addition to standard protocols, the SENT also supports Short PWM Code (SPC) mode. In this mode,…", "receive a coordination signal from the controller and then start transmitting the messages. Apart f…", "a unidirectional communications scheme from the sensor to the controller which does not include a c…", "the controller. The sensor signal is transmitted as a series of pulses with data encoded as falling…"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Sent.c"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "N/A"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Sent.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define SENT_AR_RELEASE_MAJOR_VERSION 4", "#define SENT_AR_RELEASE_MINOR_VERSION 6", "#define SENT_AR_RELEASE_REVISION_VERSION 0", "#define SENT_SW_MAJOR_VERSION 0"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.1 Sent_StatusType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define SENT_REQUEST_SPC_ID_U8 ((uint8)0x4U)", "API service ID for Sent_RequestSpcPulse function.", "#define SENT_FAST_MSG_READ_ID_U8 ((uint8)0x5U)", "API service ID for Sent_MainFunctionFastMessageRead function."]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.4 Sent_CalibrationValidType"
- `content_types`: ["text", "table"]
- `anchors`: ["SENT_DATA_NIBBLE_MODE_H4", "=", "0x4U", "Frame format H4"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.7 Sent_SerialMessageType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["SENT_IDLE_COUNT_FLAG_1016_TICK", "S = 0x4U", "The bus is idle for more than 508*2 ticks, then the bus idle", "flag will assert"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Sent_SpcConfigType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["typedef void (*Sent_FastErrorNotifactionType)(uint32 u32Status)", "This type shall be chosen in order to implement fast message received callback function prototype.", "typedef void (*Sent_SlowErrorNotifactionType)(uint32 u32Status)", "This type shall be chosen in order to implement slow message received callback function prototype."]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Sent_ChannelConfigType"
- `content_types`: ["text"]
- `anchors`: ["boolean bTickCompensateEn", "Enable the tick period compensate function.", "boolean bUseAlternativeCrc", "Use alternative 4-bit CRC algorithm instead of SAE CRC algorithm."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Sent_InstanceConfigType"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["The Pointer of the Sent_SpcConfigType", "2.6.3", "Sent_InstanceConfigType", "Structure"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.1 void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["The Pointer array of the controller mapping, the value indicate which core should manage the sent", "instance", "2.7", "API Functions"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.2 void Sent_DeInit (void)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "Parameters", "Parameter", "Description"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "This function de-initializes the SENT driver.", "This service is a non reentrant function. Returns all underlying hardware to a state comparable to…", "power on reset state, and de-initialize the SENT driver. This service is a non-reentrant function.…"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Parameters", "Parameter", "Description", "u8ControllerID"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Sent Initialization with Interrupt Mode"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.8", "API Sequence Diagram", "2.8.1", "Sent Initialization with Interrupt Mode"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The container inclusion relation is shown as below:"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.1 DmaDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["3.2.2.3", "SentDeInitApi", "Container", "SentDeInitApi"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["3.2.3.1", "SentControllerId", "Container", "SentControllerId"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.6 DMAWaterMark"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "The logic switch for DMA support", "Screenshot", "Properties"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.10 AutoClearReadyFlag"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.2 SentChannelActivation"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.6 UseAlternativeCrc"
- `content_types`: ["text"]
- `anchors`: ["Default", "false", "3.2.4.6", "UseAlternativeCrc"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.11 SlowMsgCRCAugEn"
- `content_types`: ["text", "image"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Default", "false", "3.2.4.15", "DataNibbleNumber"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.24 IdleCount"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Label", "valid Calibration pulse range", "Default", "SENT_CALIBRATION_VALID_DISABLE"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["3.2.4.28", "SentSlowCRCErrorNotification", "Container", "3.2.4.28 SentSlowCRCErrorNotification"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Description", "This parameter defines the existence and the name of a callout function that is called after a slow", "message is received.", "Screenshot"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["Type", "INTEGER", "Label", "Width Of The SPC Pulse"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.1 AUTOSAR Major Version"
- `content_types`: ["text", "image"]
- `anchors`: ["Default", "N/A", "3.2.6.1", "AUTOSAR Major Version"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.6.5", "Software Minor Version", "Container", "Software Minor Version"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 SENT Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "SENT Usage Common Steps", "Basically, the Sent module can be configured in 4 steps:"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3)", "In Sent General configuration tag, users can configure if SentMulticoreSupport is used. If Det isn'…", "Development Error Detection checkbox has no need to be checked.", "4)"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "config", "figure"]
- `anchors`: ["5)", "In SentControllerConfig tag, users can select what sent controller would be configured and used.", "6)", "In SentChannelConfig tag, users can select what sent channel would be configured and used."]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["7)", "Click the Generate Project to generate relevant code."]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["physical_page 41"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx SENT User Manual"
- `keywords`: ["SENT", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx SENT User Manual; Revision History; 0.1"
- `keywords`: ["SENT", "FC7xxx", "Date"]
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
- `summary`: "Table of Contents: FC7xxx SENT User Manual; Table of Contents; Chapter 1 SENT Introduction .............................................................................................................................. 5"
- `keywords`: ["SENT", "Sent", "CDD_Sent", "SentGeneral", "FC7xxx", "CDD", "Sent_SpcConfigType", "Sent_ChannelConfigType", "Sent_InstanceConfigType", "Sent_ConfigType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Chapter 1 SENT Introduction ...............................................................................................................…"
  - `p3`: "1.1"
  - `p3`: "Requirement Tracing .......................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "image"]
- `summary`: "Table of Contents: FC7xxx SENT User Manual; 4.2; Sent Usage Demo ........................................................................................................................................... 37"
- `keywords`: ["SENT", "Sent", "FC7xxx", "Usage", "Demo"]
- `anchors`:
  - `p4`: "4.2"
  - `p4`: "Sent Usage Demo ...........................................................................................................................…"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 SENT Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 1 SENT Introduction / 1.1 Requirement Tracing: FC7xxx SENT User Manual; Chapter 1 SENT Introduction; 1.1"
- `keywords`: ["SENT", "CDD", "AUTOSAR", "sensor", "FC7xxx", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "APIs", "BSW", "may", "need"]
- `anchors`:
  - `p5`: "Chapter 1 SENT Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirement Tracing"
  - `p5`: "The design of this module follows the specifications of the complex driver specified in AUTOSAR Classic Platform Release 4.6.0."

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 1 SENT Introduction / 1.3 Hardware Summary"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 1 SENT Introduction / 1.3 Hardware Summary: FC7xxx SENT User Manual; In addition to standard protocols, the SENT also supports Short PWM Code (SPC) mode. In this mode, the sensor needs to; receive a coordination signal from the controller and then start transmitting the messages. Apart from this mode, the SENT…"
- `keywords`: ["SENT", "mode", "Detection", "errors", "SPC", "signal", "data", "FC7xxx", "PWM", "sensor"]
- `anchors`:
  - `p6`: "In addition to standard protocols, the SENT also supports Short PWM Code (SPC) mode. In this mode, the sensor needs to"
  - `p6`: "receive a coordination signal from the controller and then start transmitting the messages. Apart from this mode, the SENT is"
  - `p6`: "a unidirectional communications scheme from the sensor to the controller which does not include a coordination signal from"
  - `p6`: "the controller. The sensor signal is transmitted as a series of pulses with data encoded as falling to falling edge periods."

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Sent.c"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Sent.c: FC7xxx SENT User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "CDD_Sent", "FC7xxx", "SENT_VENDOR_ID_C", "SENT_AR_RELEASE_MAJOR_VERSION_C", "SENT_AR_RELEASE_MINOR_VERSION_C", "SENT_AR_RELEASE_REVISION_VERSION_C", "SENT_VENDOR_ID"]
- `anchors`:
  - `p7`: "Chapter 2 Software Design"
  - `p7`: "2.1"
  - `p7`: "Rejected Requirements"
  - `p7`: "N/A"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Sent.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Sent.h: FC7xxx SENT User Manual; #define SENT_AR_RELEASE_MAJOR_VERSION 4; #define SENT_AR_RELEASE_MINOR_VERSION 6"
- `keywords`: ["SENT", "define", "called", "Sent_Init", "FC7xxx", "SENT_AR_RELEASE_MAJOR_VERSION", "SENT_AR_RELEASE_MINOR_VERSION", "SENT_AR_RELEASE_REVISION_VERSION", "SENT_SW_MAJOR_VERSION", "SENT_SW_MINOR_VERSION"]
- `anchors`:
  - `p8`: "#define SENT_AR_RELEASE_MAJOR_VERSION 4"
  - `p8`: "#define SENT_AR_RELEASE_MINOR_VERSION 6"
  - `p8`: "#define SENT_AR_RELEASE_REVISION_VERSION 0"
  - `p8`: "#define SENT_SW_MAJOR_VERSION 0"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.1 Sent_StatusType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.1 Sent_StatusType: FC7xxx SENT User Manual; #define SENT_REQUEST_SPC_ID_U8 ((uint8)0x4U); API service ID for Sent_RequestSpcPulse function."
- `keywords`: ["SENT", "Sent_StatusType", "Sent_ReturnType", "Sent_DataNibbleModeType", "Frame", "format", "FC7xxx", "define", "SENT_REQUEST_SPC_ID_U8", "Sent_RequestSpcPulse"]
- `anchors`:
  - `p9`: "#define SENT_REQUEST_SPC_ID_U8 ((uint8)0x4U)"
  - `p9`: "API service ID for Sent_RequestSpcPulse function."
  - `p9`: "#define SENT_FAST_MSG_READ_ID_U8 ((uint8)0x5U)"
  - `p9`: "API service ID for Sent_MainFunctionFastMessageRead function."

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.4 Sent_CalibrationValidType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.4 Sent_CalibrationValidType: FC7xxx SENT User Manual; SENT_DATA_NIBBLE_MODE_H4; 0x4U"
- `keywords`: ["SENT", "bus", "idle", "Option", "calibration", "SAE", "Frame", "format", "Sent_CalibrationValidType", "than"]
- `anchors`:
  - `p10`: "SENT_DATA_NIBBLE_MODE_H4"
  - `p10`: "="
  - `p10`: "0x4U"
  - `p10`: "Frame format H4"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.7 Sent_SerialMessageType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.7 Sent_SerialMessageType: FC7xxx SENT User Manual; SENT_IDLE_COUNT_FLAG_1016_TICK; S = 0x4U"
- `keywords`: ["SENT", "message", "SPC", "data", "bus", "idle", "Sent_SerialMessageType", "SENT_SERIAL_MESSAGE_ENHANCE_1", "bit", "Sent_SpcTriggerType"]
- `anchors`:
  - `p11`: "SENT_IDLE_COUNT_FLAG_1016_TICK"
  - `p11`: "S = 0x4U"
  - `p11`: "The bus is idle for more than 508*2 ticks, then the bus idle"
  - `p11`: "flag will assert"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Sent_SpcConfigType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Sent_SpcConfigType: FC7xxx SENT User Manual; typedef void (*Sent_FastErrorNotifactionType)(uint32 u32Status); This type shall be chosen in order to implement fast message received callback function prototype."
- `keywords`: ["SENT", "SPC", "Sent_SpcConfigType", "Sent_ChannelConfigType", "FC7xxx", "Sent_FastErrorNotifactionType", "received", "Sent_SlowErrorNotifactionType", "Structure", "boolean"]
- `anchors`:
  - `p12`: "typedef void (*Sent_FastErrorNotifactionType)(uint32 u32Status)"
  - `p12`: "This type shall be chosen in order to implement fast message received callback function prototype."
  - `p12`: "typedef void (*Sent_SlowErrorNotifactionType)(uint32 u32Status)"
  - `p12`: "This type shall be chosen in order to implement slow message received callback function prototype."

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Sent_ChannelConfigType"
- `content_types`: ["text"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 Sent_ChannelConfigType: FC7xxx SENT User Manual; boolean bTickCompensateEn; Enable the tick period compensate function."
- `keywords`: ["SENT", "boolean", "message", "Enable", "CRC", "Fast", "SAE", "Slow", "DMA", "feature"]
- `anchors`:
  - `p13`: "boolean bTickCompensateEn"
  - `p13`: "Enable the tick period compensate function."
  - `p13`: "boolean bUseAlternativeCrc"
  - `p13`: "Use alternative 4-bit CRC algorithm instead of SAE CRC algorithm."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Sent_InstanceConfigType"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Sent_InstanceConfigType: FC7xxx SENT User Manual; The Pointer of the Sent_SpcConfigType; 2.6.3"
- `keywords`: ["SENT", "Sent", "Sent_InstanceConfigType", "Pointer", "instance", "boolean", "FIFO", "data", "Sent_ChannelConfigType", "Sent_ConfigType"]
- `anchors`:
  - `p14`: "The Pointer of the Sent_SpcConfigType"
  - `p14`: "2.6.3"
  - `p14`: "Sent_InstanceConfigType"
  - `p14`: "Structure"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.1 void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.1 void Sent_Init(const Sent_ConfigType * pConfigPtr): FC7xxx SENT User Manual; The Pointer array of the controller mapping, the value indicate which core should manage the sent; instance"
- `keywords`: ["SENT", "Sent_Init", "Sent_ConfigType", "pConfigPtr", "FC7xxx", "Cdd_Sent", "sent", "instance", "void", "const"]
- `anchors`:
  - `p15`: "The Pointer array of the controller mapping, the value indicate which core should manage the sent"
  - `p15`: "instance"
  - `p15`: "2.7"
  - `p15`: "API Functions"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.2 void Sent_DeInit (void)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.2 void Sent_DeInit (void): FC7xxx SENT User Manual; Diagram; Parameters"
- `keywords`: ["SENT", "void", "Sent_DeInit", "FC7xxx", "pConfigPtr", "Diagram", "pointer", "sent", "instance", "structure"]
- `anchors`:
  - `p16`: "Diagram"
  - `p16`: "Parameters"
  - `p16`: "Parameter"
  - `p16`: "Description"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo): FC7xxx SENT User Manual; Description; This function de-initializes the SENT driver."
- `keywords`: ["SENT", "void", "version", "SPC", "Returns", "state", "Sent_GetVersionInfo", "Std_VersionInfoType", "information", "Sent_RequestSpcPulse"]
- `anchors`:
  - `p17`: "Description"
  - `p17`: "This function de-initializes the SENT driver."
  - `p17`: "This service is a non reentrant function. Returns all underlying hardware to a state comparable to their"
  - `p17`: "power on reset state, and de-initialize the SENT driver. This service is a non-reentrant function. Returns"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void): FC7xxx SENT User Manual; Parameters; Parameter"
- `keywords`: ["SENT", "void", "Sent_MainFunctionFastMessageRead", "Sent_MainFunctionSlowMessageRead", "FC7xxx", "u8ControllerID", "u8ChannelID", "Returns", "FastMsgReadType", "SlowMsgReadType"]
- `anchors`:
  - `p18`: "Parameters"
  - `p18`: "Parameter"
  - `p18`: "Description"
  - `p18`: "u8ControllerID"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Sent Initialization with Interrupt Mode"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Sent Initialization with Interrupt Mode: FC7xxx SENT User Manual; 2.8; API Sequence Diagram"
- `keywords`: ["SENT", "Sent", "FC7xxx", "Initialization", "Mode", "Sequence", "Diagram", "Interrupt", "Polling"]
- `anchors`:
  - `p19`: "2.8"
  - `p19`: "API Sequence Diagram"
  - `p19`: "2.8.1"
  - `p19`: "Sent Initialization with Interrupt Mode"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation: FC7xxx SENT User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["SENT", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown", "below"]
- `anchors`:
  - `p20`: "Chapter 3 Tresos Configuration Items"
  - `p20`: "3.1"
  - `p20`: "Container Inclusion Relation"
  - `p20`: "The container inclusion relation is shown as below:"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.1 DmaDevErrorDetect"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.1 DmaDevErrorDetect: FC7xxx SENT User Manual; 3.2; Containers and Variables"
- `keywords`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "Label", "Default", "SentGeneral"]
- `anchors`:
  - `p21`: "3.2"
  - `p21`: "Containers and Variables"
  - `p21`: "3.2.1"
  - `p21`: "IMPLEMENTATION_CONFIG_VARIANT"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi: FC7xxx SENT User Manual; 3.2.2.3; SentDeInitApi"
- `keywords`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties", "Property", "BOOLEAN", "Label", "Default", "SentVersionInfoApi"]
- `anchors`:
  - `p22`: "3.2.2.3"
  - `p22`: "SentDeInitApi"
  - `p22`: "Container"
  - `p22`: "SentDeInitApi"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId: FC7xxx SENT User Manual; 3.2.3.1; SentControllerId"
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties", "Property", "Label"]
- `anchors`:
  - `p23`: "3.2.3.1"
  - `p23`: "SentControllerId"
  - `p23`: "Container"
  - `p23`: "SentControllerId"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.6 DMAWaterMark"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.6 DMAWaterMark: FC7xxx SENT User Manual; Description; The logic switch for DMA support"
- `keywords`: ["SENT", "Sent", "DMA", "SentTimestampPrescaller", "FIFO", "Screenshot", "Properties", "Property", "BOOLEAN", "Label"]
- `anchors`:
  - `p24`: "Description"
  - `p24`: "The logic switch for DMA support"
  - `p24`: "Screenshot"
  - `p24`: "Properties"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.10 AutoClearReadyFlag"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.10 AutoClearReadyFlag: FC7xxx SENT User Manual; Screenshot; Properties"
- `keywords`: ["SENT", "Sent", "Screenshot", "BOOLEAN", "Properties", "Property", "Label", "Default", "AutoClearReadyFlag", "SentControllerActivation"]
- `anchors`:
  - `p25`: "Screenshot"
  - `p25`: "Properties"
  - `p25`: "Property"
  - `p25`: "Value"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.2 SentChannelActivation"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.2 SentChannelActivation: FC7xxx SENT User Manual; Properties; Property"
- `keywords`: ["SENT", "Sent", "Channel", "Properties", "Property", "Label", "BOOLEAN", "Default", "SentChannelActivation", "Screenshot"]
- `anchors`:
  - `p26`: "Properties"
  - `p26`: "Property"
  - `p26`: "Value"
  - `p26`: "Type"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.6 UseAlternativeCrc"
- `content_types`: ["text"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.6 UseAlternativeCrc: FC7xxx SENT User Manual; Default; false"
- `keywords`: ["SENT", "CRC", "BOOLEAN", "Default", "Enable", "Fast", "UseAlternativeCrc", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p27`: "Default"
  - `p27`: "false"
  - `p27`: "3.2.4.6"
  - `p27`: "UseAlternativeCrc"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.11 SlowMsgCRCAugEn"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.11 SlowMsgCRCAugEn: FC7xxx SENT User Manual; Screenshot; Properties"
- `keywords`: ["SENT", "BOOLEAN", "CRC", "DMA", "Screenshot", "Properties", "Property", "Label", "Message", "calculation"]
- `anchors`:
  - `p28`: "Screenshot"
  - `p28`: "Properties"
  - `p28`: "Property"
  - `p28`: "Value"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber: FC7xxx SENT User Manual; Default; false"
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property", "Label", "DigitalFilterCount"]
- `anchors`:
  - `p29`: "Default"
  - `p29`: "false"
  - `p29`: "3.2.4.15"
  - `p29`: "DataNibbleNumber"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption: FC7xxx SENT User Manual; Screenshot; Properties"
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label", "Default", "TickScaler"]
- `anchors`:
  - `p30`: "Screenshot"
  - `p30`: "Properties"
  - `p30`: "Property"
  - `p30`: "Value"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.24 IdleCount"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.24 IdleCount: FC7xxx SENT User Manual; Label; valid Calibration pulse range"
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot", "Properties", "Property"]
- `anchors`:
  - `p31`: "Label"
  - `p31`: "valid Calibration pulse range"
  - `p31`: "Default"
  - `p31`: "SENT_CALIBRATION_VALID_DISABLE"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification: FC7xxx SENT User Manual; 3.2.4.28; SentSlowCRCErrorNotification"
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchors`:
  - `p32`: "3.2.4.28"
  - `p32`: "SentSlowCRCErrorNotification"
  - `p32`: "Container"
  - `p32`: "3.2.4.28 SentSlowCRCErrorNotification"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn: FC7xxx SENT User Manual; Description; This parameter defines the existence and the name of a callout function that is called after a slow"
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default", "SentSPCmode", "mode"]
- `anchors`:
  - `p33`: "Description"
  - `p33`: "This parameter defines the existence and the name of a callout function that is called after a slow"
  - `p33`: "message is received."
  - `p33`: "Screenshot"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay: FC7xxx SENT User Manual; Type; INTEGER"
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties", "Property", "SpcTickBase"]
- `anchors`:
  - `p34`: "Type"
  - `p34`: "INTEGER"
  - `p34`: "Label"
  - `p34`: "Width Of The SPC Pulse"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.1 AUTOSAR Major Version"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.1 AUTOSAR Major Version: FC7xxx SENT User Manual; Default; N/A"
- `keywords`: ["SENT", "AUTOSAR", "Version", "Major", "INTEGER_LABEL", "Default", "version", "number", "implementation", "Screenshot"]
- `anchors`:
  - `p35`: "Default"
  - `p35`: "N/A"
  - `p35`: "3.2.6.1"
  - `p35`: "AUTOSAR Major Version"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version: FC7xxx SENT User Manual; 3.2.6.5; Software Minor Version"
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchors`:
  - `p36`: "3.2.6.5"
  - `p36`: "Software Minor Version"
  - `p36`: "Container"
  - `p36`: "Software Minor Version"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 SENT Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 SENT Usage Common Steps: FC7xxx SENT User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["Sent", "SENT", "FC7xxx", "Configure", "PortContainer", "McuClockReferencepoint_PCC", "Usage", "clock", "set", "Guides"]
- `anchors`:
  - `p37`: "Chapter 4 Configuration Guides"
  - `p37`: "4.1"
  - `p37`: "SENT Usage Common Steps"
  - `p37`: "Basically, the Sent module can be configured in 4 steps:"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo: FC7xxx SENT User Manual; 3); In Sent General configuration tag, users can configure if SentMulticoreSupport is used. If Det isn't needed, the"
- `keywords`: ["SENT", "Sent", "FC7xxx", "SentMulticoreSupport", "SentEcucPartitionRef", "tag", "users", "can", "General", "configure"]
- `anchors`:
  - `p38`: "3)"
  - `p38`: "In Sent General configuration tag, users can configure if SentMulticoreSupport is used. If Det isn't needed, the"
  - `p38`: "Development Error Detection checkbox has no need to be checked."
  - `p38`: "4)"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "config", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo: FC7xxx SENT User Manual; 5); In SentControllerConfig tag, users can select what sent controller would be configured and used."
- `keywords`: ["SENT", "FC7xxx", "SentControllerConfig", "SentChannelConfig", "tag", "users", "can", "select", "what", "sent"]
- `anchors`:
  - `p39`: "5)"
  - `p39`: "In SentControllerConfig tag, users can select what sent controller would be configured and used."
  - `p39`: "6)"
  - `p39`: "In SentChannelConfig tag, users can select what sent channel would be configured and used."

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo: FC7xxx SENT User Manual; 7); Click the Generate Project to generate relevant code."
- `keywords`: ["SENT", "FC7xxx", "Click", "Generate", "Project", "generate", "relevant", "code"]
- `anchors`:
  - `p40`: "7)"
  - `p40`: "Click the Generate Project to generate relevant code."

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo: FC7xxx SENT User Manual"
- `keywords`: ["SENT", "FC7xxx"]
- `anchors`:
  - `p41`: "no body anchor extracted"

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

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Sent.c"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Rejected Requirement table-like panels; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Rejected Requirement table-like panels"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Table-like content on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in CDD_Sent.h"
- `bbox`: `None`
- `key_fields`: ["SENT", "define", "called", "Sent_Init", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.1 Sent_StatusType"
- `bbox`: `None`
- `key_fields`: ["SENT", "Sent_StatusType", "Sent_ReturnType", "Sent_DataNibbleModeType", "Frame"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.4 Sent_CalibrationValidType"
- `bbox`: `None`
- `key_fields`: ["SENT", "bus", "idle", "Option", "calibration"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enumerations in CDD_Sent.h / 2.4.1.7 Sent_SerialMessageType"
- `bbox`: `None`
- `key_fields`: ["SENT", "message", "SPC", "data", "bus"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Sent_SpcConfigType"
- `bbox`: `None`
- `key_fields`: ["SENT", "SPC", "Sent_SpcConfigType", "Sent_ChannelConfigType", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 12; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 12"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0014-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0014-001"
- `caption`: "Table-like content on page 14"
- `physical_pages`: `14`
- `printed_pages`: ["14"]
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Sent_InstanceConfigType"
- `bbox`: `None`
- `key_fields`: ["SENT", "Sent", "Sent_InstanceConfigType", "Pointer", "instance"]
- `summary`: "Indexes table-like source content for Table-like content on page 14; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 14"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.1 void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `bbox`: `None`
- `key_fields`: ["SENT", "Sent_Init", "Sent_ConfigType", "pConfigPtr", "FC7xxx"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0016-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-001"
- `caption`: "Table-like content on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.2 void Sent_DeInit (void)"
- `bbox`: `None`
- `key_fields`: ["SENT", "void", "Sent_DeInit", "FC7xxx", "pConfigPtr"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `bbox`: `None`
- `key_fields`: ["SENT", "void", "version", "SPC", "Returns"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `bbox`: `None`
- `key_fields`: ["SENT", "void", "Sent_MainFunctionFastMessageRead", "Sent_MainFunctionSlowMessageRead", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 18; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 18"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0020-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `None`
- `key_fields`: ["SENT", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0021-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-001"
- `caption`: "Table-like content on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.1 DmaDevErrorDetect"
- `bbox`: `None`
- `key_fields`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot"]
- `summary`: "Indexes table-like source content for Table-like content on page 21; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 21"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0022-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-001"
- `caption`: "Table-like content on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi"
- `bbox`: `None`
- `key_fields`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 22; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 22"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Table-like content on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.10 AutoClearReadyFlag"
- `bbox`: `None`
- `key_fields`: ["SENT", "Sent", "Screenshot", "BOOLEAN", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 25; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 25"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0033-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0033-001"
- `caption`: "Table-like content on page 33"
- `physical_pages`: `33`
- `printed_pages`: ["33"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `bbox`: `None`
- `key_fields`: ["Sent", "SENT", "SPC", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 33; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 33"
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
- `keywords`: ["SENT", "Sent", "CDD_Sent", "SentGeneral", "FC7xxx", "CDD", "Sent_SpcConfigType", "Sent_ChannelConfigType"]
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
- `keywords`: ["SENT", "Sent", "FC7xxx", "Usage", "Demo"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0005-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0005-001"
- `caption`: "Image block near 1.1 Requirement Tracing"
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 SENT Introduction / 1.1 Requirement Tracing"
- `bbox`: `[36.0, 331.91, 559.3, 644.66]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 1.1 Requirement Tracing; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "CDD", "AUTOSAR", "sensor", "FC7xxx", "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline", "APIs", "BSW"]
- `anchor`: "Image block near 1.1 Requirement Tracing"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0006-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "Generated visual anchor: 1.3 Hardware Summary"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 1 SENT Introduction / 1.3 Hardware Summary"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 1.3 Hardware Summary; generated for retrieval because no formal figure number was detected."
- `keywords`: ["SENT", "mode", "Detection", "errors", "SPC", "signal", "data", "FC7xxx"]
- `anchor`: "1.3 Hardware Summary"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0007-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0007-001"
- `caption`: "Image block near 2.3.1 Macros in CDD_Sent.c"
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_Sent.c"
- `bbox`: `[89.77, 166.41, 505.85, 395.25]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in CDD_Sent.c; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "define", "SENT_SW_MAJOR_VERSION_C", "CDD_Sent", "FC7xxx", "SENT_VENDOR_ID_C", "SENT_AR_RELEASE_MAJOR_VERSION_C", "SENT_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "Image block near 2.3.1 Macros in CDD_Sent.c"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0012-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0012-001"
- `caption`: "Generated visual anchor: 2.6.1 Sent_SpcConfigType"
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 Sent_SpcConfigType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.1 Sent_SpcConfigType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["SENT", "SPC", "Sent_SpcConfigType", "Sent_ChannelConfigType", "FC7xxx", "Sent_FastErrorNotifactionType", "received", "Sent_SlowErrorNotifactionType"]
- `anchor`: "2.6.1 Sent_SpcConfigType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0014-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-001"
- `caption`: "Generated visual anchor: 2.6.3 Sent_InstanceConfigType"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 Sent_InstanceConfigType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.3 Sent_InstanceConfigType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["SENT", "Sent", "Sent_InstanceConfigType", "Pointer", "instance", "boolean", "FIFO", "data"]
- `anchor`: "2.6.3 Sent_InstanceConfigType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 2.7.1.2 void Sent_DeInit (void)"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.2 void Sent_DeInit (void)"
- `bbox`: `[116.3, 37.4, 553.65, 672.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.2 void Sent_DeInit (void); use the source PDF page for exact visual details."
- `keywords`: ["SENT", "void", "Sent_DeInit", "FC7xxx", "pConfigPtr", "Diagram", "pointer", "sent"]
- `anchor`: "Image block near 2.7.1.2 void Sent_DeInit (void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `bbox`: `[116.3, 122.58, 553.65, 190.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo); use the source PDF page for exact visual details."
- `keywords`: ["SENT", "void", "version", "SPC", "Returns", "state", "Sent_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-002"
- `caption`: "Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `bbox`: `[116.3, 437.07, 413.3, 464.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo); use the source PDF page for exact visual details."
- `keywords`: ["SENT", "void", "version", "SPC", "Returns", "state", "Sent_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-003"
- `caption`: "Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `bbox`: `[116.3, 644.45, 553.65, 774.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo); use the source PDF page for exact visual details."
- `keywords`: ["SENT", "void", "version", "SPC", "Returns", "state", "Sent_GetVersionInfo", "Std_VersionInfoType"]
- `anchor`: "Image block near 2.7.1.3 void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `bbox`: `[116.3, 182.4, 553.65, 352.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Sent_MainFunctionFastMessageRead(void); use the source PDF page for exact visual details."
- `keywords`: ["SENT", "void", "Sent_MainFunctionFastMessageRead", "Sent_MainFunctionSlowMessageRead", "FC7xxx", "u8ControllerID", "u8ChannelID", "Returns"]
- `anchor`: "Image block near 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in Cdd_Sent.c / 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `bbox`: `[116.3, 480.56, 553.65, 660.86]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.1.5 void Sent_MainFunctionFastMessageRead(void); use the source PDF page for exact visual details."
- `keywords`: ["SENT", "void", "Sent_MainFunctionFastMessageRead", "Sent_MainFunctionSlowMessageRead", "FC7xxx", "u8ControllerID", "u8ChannelID", "Returns"]
- `anchor`: "Image block near 2.7.1.5 void Sent_MainFunctionFastMessageRead(void)"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 2.8.1 Sent Initialization with Interrupt Mode"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Sent Initialization with Interrupt Mode"
- `bbox`: `[36.0, 83.36, 531.85, 428.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1 Sent Initialization with Interrupt Mode; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "FC7xxx", "Initialization", "Mode", "Sequence", "Diagram", "Interrupt"]
- `anchor`: "Image block near 2.8.1 Sent Initialization with Interrupt Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-002"
- `caption`: "Image block near 2.8.1 Sent Initialization with Interrupt Mode"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 API Sequence Diagram / 2.8.1 Sent Initialization with Interrupt Mode"
- `bbox`: `[36.0, 477.66, 559.3, 765.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.8.1 Sent Initialization with Interrupt Mode; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "FC7xxx", "Initialization", "Mode", "Sequence", "Diagram", "Interrupt"]
- `anchor`: "Image block near 2.8.1 Sent Initialization with Interrupt Mode"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 3.1 Container Inclusion Relation"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `[36.0, 145.7, 559.3, 773.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1 Container Inclusion Relation; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "FC7xxx", "Tresos", "Inclusion", "Relation", "inclusion", "relation", "shown"]
- `anchor`: "Image block near 3.1 Container Inclusion Relation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 3.2.2.1 DmaDevErrorDetect"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.1 DmaDevErrorDetect"
- `bbox`: `[116.3, 284.0, 343.65, 322.8]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 DmaDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentMulticoreSupport", "IMPLEMENTATION_CONFIG_VARIANT", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "Image block near 3.2.2.1 DmaDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 3.2.2.3 SentDeInitApi"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi"
- `bbox`: `[116.3, 471.07, 450.42, 487.62]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3 SentDeInitApi; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties", "Property", "BOOLEAN", "Label"]
- `anchor`: "Image block near 3.2.2.3 SentDeInitApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-002"
- `caption`: "Image block near 3.2.2.3 SentDeInitApi"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SentGeneral / 3.2.2.3 SentDeInitApi"
- `bbox`: `[116.3, 636.35, 333.29, 671.53]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.3 SentDeInitApi; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentDeInitApi", "Screenshot", "Properties", "Property", "BOOLEAN", "Label"]
- `anchor`: "Image block near 3.2.2.3 SentDeInitApi"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 3.2.3.1 SentControllerId"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `bbox`: `[116.3, 106.15, 492.47, 124.04]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 SentControllerId; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.1 SentControllerId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 3.2.3.1 SentControllerId"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `bbox`: `[116.3, 269.84, 497.15, 286.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 SentControllerId; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.1 SentControllerId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-003"
- `caption`: "Image block near 3.2.3.1 SentControllerId"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `bbox`: `[116.3, 449.03, 389.36, 468.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 SentControllerId; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.1 SentControllerId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-004"
- `caption`: "Image block near 3.2.3.1 SentControllerId"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.1 SentControllerId"
- `bbox`: `[116.3, 632.31, 549.4, 647.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.1 SentControllerId; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "SentControllerEcucPartitionRef", "ECUC", "SentControllerId", "controller", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.3.1 SentControllerId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 3.2.3.6 DMAWaterMark"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.6 DMAWaterMark"
- `bbox`: `[116.3, 234.25, 480.55, 251.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.6 DMAWaterMark; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "DMA", "SentTimestampPrescaller", "FIFO", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.3.6 DMAWaterMark"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-001"
- `caption`: "Image block near 3.2.3.10 AutoClearReadyFlag"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 SentGeneral / 3.2.3.10 AutoClearReadyFlag"
- `bbox`: `[116.3, 758.8, 498.92, 776.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.3.10 AutoClearReadyFlag; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Screenshot", "BOOLEAN", "Properties", "Property", "Label", "Default"]
- `anchor`: "Image block near 3.2.3.10 AutoClearReadyFlag"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-001"
- `caption`: "Image block near 3.2.4.2 SentChannelActivation"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.2 SentChannelActivation"
- `bbox`: `[116.3, 363.07, 523.48, 379.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.2 SentChannelActivation; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Channel", "Properties", "Property", "Label", "BOOLEAN", "Default"]
- `anchor`: "Image block near 3.2.4.2 SentChannelActivation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Image block near 3.2.4.11 SlowMsgCRCAugEn"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.11 SlowMsgCRCAugEn"
- `bbox`: `[116.3, 37.4, 457.92, 54.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.11 SlowMsgCRCAugEn; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "BOOLEAN", "CRC", "DMA", "Screenshot", "Properties", "Property", "Label"]
- `anchor`: "Image block near 3.2.4.11 SlowMsgCRCAugEn"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Image block near 3.2.4.15 DataNibbleNumber"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `bbox`: `[116.3, 131.47, 474.6, 147.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.15 DataNibbleNumber; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.15 DataNibbleNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-002"
- `caption`: "Image block near 3.2.4.15 DataNibbleNumber"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `bbox`: `[116.3, 292.96, 501.32, 309.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.15 DataNibbleNumber; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.15 DataNibbleNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-003"
- `caption`: "Image block near 3.2.4.15 DataNibbleNumber"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `bbox`: `[116.3, 454.97, 502.64, 472.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.15 DataNibbleNumber; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.15 DataNibbleNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-004"
- `caption`: "Image block near 3.2.4.15 DataNibbleNumber"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 SentChannelConfig / 3.2.4.15 DataNibbleNumber"
- `bbox`: `[116.3, 618.47, 502.28, 636.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.15 DataNibbleNumber; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Default", "INTEGER", "DataNibbleNumber", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.15 DataNibbleNumber"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 3.2.4.21 CalDiagOption"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `bbox`: `[116.3, 37.58, 484.93, 54.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 CalDiagOption; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "Image block near 3.2.4.21 CalDiagOption"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-002"
- `caption`: "Image block near 3.2.4.21 CalDiagOption"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `bbox`: `[116.3, 200.13, 496.55, 216.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 CalDiagOption; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "Image block near 3.2.4.21 CalDiagOption"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-003"
- `caption`: "Image block near 3.2.4.21 CalDiagOption"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `bbox`: `[116.3, 396.15, 513.68, 415.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 CalDiagOption; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "Image block near 3.2.4.21 CalDiagOption"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-004"
- `caption`: "Image block near 3.2.4.21 CalDiagOption"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `bbox`: `[116.3, 561.6, 514.13, 577.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 CalDiagOption; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "Image block near 3.2.4.21 CalDiagOption"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-005"
- `caption`: "Image block near 3.2.4.21 CalDiagOption"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption"
- `bbox`: `[116.3, 723.6, 517.57, 742.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 CalDiagOption; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Screenshot", "Properties", "Property", "SAE", "STRING", "Label"]
- `anchor`: "Image block near 3.2.4.21 CalDiagOption"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 3.2.4.24 IdleCount"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.24 IdleCount"
- `bbox`: `[116.3, 147.52, 509.95, 166.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.24 IdleCount; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot"]
- `anchor`: "Image block near 3.2.4.24 IdleCount"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-002"
- `caption`: "Image block near 3.2.4.24 IdleCount"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.24 IdleCount"
- `bbox`: `[116.3, 491.91, 484.92, 509.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.24 IdleCount; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "Label", "Default", "Error", "Notification", "IdleCount", "Screenshot"]
- `anchor`: "Image block near 3.2.4.24 IdleCount"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `bbox`: `[116.3, 106.15, 503.25, 124.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.28 SentSlowCRCErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-002"
- `caption`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `bbox`: `[116.3, 269.65, 502.85, 287.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.28 SentSlowCRCErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-003"
- `caption`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `bbox`: `[116.3, 452.98, 486.47, 467.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.28 SentSlowCRCErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-004"
- `caption`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.4.21 CalDiagOption / 3.2.4.28 SentSlowCRCErrorNotification"
- `bbox`: `[116.3, 612.97, 495.58, 628.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.28 SentSlowCRCErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "STRING", "SentFastNotification", "SentSlowCRCErrorNotification", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.4.28 SentSlowCRCErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 3.2.5.1 SentSPCModeEn"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `bbox`: `[116.3, 71.91, 523.39, 88.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SentSPCModeEn; use the source PDF page for exact visual details."
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "Image block near 3.2.5.1 SentSPCModeEn"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-002"
- `caption`: "Image block near 3.2.5.1 SentSPCModeEn"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `bbox`: `[116.3, 237.04, 327.09, 270.29]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SentSPCModeEn; use the source PDF page for exact visual details."
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "Image block near 3.2.5.1 SentSPCModeEn"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-003"
- `caption`: "Image block near 3.2.5.1 SentSPCModeEn"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.1 SentSPCModeEn"
- `bbox`: `[116.3, 741.06, 468.8, 756.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 SentSPCModeEn; use the source PDF page for exact visual details."
- `keywords`: ["Sent", "SENT", "SPC", "Screenshot", "Properties", "Property", "Label", "Default"]
- `anchor`: "Image block near 3.2.5.1 SentSPCModeEn"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 3.2.5.4 PulseDelay"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `bbox`: `[116.3, 165.35, 494.12, 181.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.4 PulseDelay; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.5.4 PulseDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-002"
- `caption`: "Image block near 3.2.5.4 PulseDelay"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `bbox`: `[116.3, 327.4, 479.69, 344.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.4 PulseDelay; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.5.4 PulseDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-003"
- `caption`: "Image block near 3.2.5.4 PulseDelay"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `bbox`: `[116.3, 491.24, 513.19, 507.94]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.4 PulseDelay; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.5.4 PulseDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-004"
- `caption`: "Image block near 3.2.5.4 PulseDelay"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.5 SentSPCmode / 3.2.5.4 PulseDelay"
- `bbox`: `[116.3, 673.11, 399.67, 718.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.4 PulseDelay; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "SPC", "Label", "INTEGER", "Default", "PulseDelay", "Screenshot", "Properties"]
- `anchor`: "Image block near 3.2.5.4 PulseDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 3.2.6.1 AUTOSAR Major Version"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.1 AUTOSAR Major Version"
- `bbox`: `[116.3, 653.12, 463.33, 667.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 AUTOSAR Major Version; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "AUTOSAR", "Version", "Major", "INTEGER_LABEL", "Default", "version", "number"]
- `anchor`: "Image block near 3.2.6.1 AUTOSAR Major Version"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 3.2.6.5 Software Minor Version"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `bbox`: `[116.3, 106.58, 457.99, 123.08]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.5 Software Minor Version; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.5 Software Minor Version"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-002"
- `caption`: "Image block near 3.2.6.5 Software Minor Version"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `bbox`: `[116.3, 287.01, 469.87, 302.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.5 Software Minor Version; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.5 Software Minor Version"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-003"
- `caption`: "Image block near 3.2.6.5 Software Minor Version"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `bbox`: `[116.3, 447.97, 476.2, 466.07]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.5 Software Minor Version; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.5 Software Minor Version"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-004"
- `caption`: "Image block near 3.2.6.5 Software Minor Version"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.88 3.2.4.20 / 3.2.6 CommonPublishedInformation / 3.2.6.5 Software Minor Version"
- `bbox`: `[114.25, 612.76, 442.24, 628.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.5 Software Minor Version; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "INTEGER_LABEL", "vendor", "Version", "specific", "Screenshot", "Properties", "Property"]
- `anchor`: "Image block near 3.2.6.5 Software Minor Version"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-001"
- `caption`: "Image block near 4.1 SENT Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 SENT Usage Common Steps"
- `bbox`: `[70.9, 263.09, 524.36, 499.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 SENT Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Sent", "SENT", "FC7xxx", "Configure", "PortContainer", "McuClockReferencepoint_PCC", "Usage", "clock"]
- `anchor`: "Image block near 4.1 SENT Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0037-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0037-002"
- `caption`: "Image block near 4.1 SENT Usage Common Steps"
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 SENT Usage Common Steps"
- `bbox`: `[70.9, 529.03, 524.35, 755.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 SENT Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["Sent", "SENT", "FC7xxx", "Configure", "PortContainer", "McuClockReferencepoint_PCC", "Usage", "clock"]
- `anchor`: "Image block near 4.1 SENT Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[79.9, 76.77, 533.4, 329.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "FC7xxx", "SentMulticoreSupport", "SentEcucPartitionRef", "tag", "users", "can"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-002"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[79.93, 375.1, 533.38, 617.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "Sent", "FC7xxx", "SentMulticoreSupport", "SentEcucPartitionRef", "tag", "users", "can"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[75.0, 53.83, 528.46, 296.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "FC7xxx", "SentControllerConfig", "SentChannelConfig", "tag", "users", "can", "select"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-002"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[79.9, 319.77, 533.4, 543.27]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "FC7xxx", "SentControllerConfig", "SentChannelConfig", "tag", "users", "can", "select"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[54.0, 36.89, 507.5, 308.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "FC7xxx", "Click", "Generate", "Project", "generate", "relevant", "code"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[54.0, 325.88, 507.26, 629.42]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "FC7xxx", "Click", "Generate", "Project", "generate", "relevant", "code"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 4.2 Sent Usage Demo"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 Sent Usage Demo"
- `bbox`: `[161.15, 36.9, 450.45, 393.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 Sent Usage Demo; use the source PDF page for exact visual details."
- `keywords`: ["SENT", "FC7xxx"]
- `anchor`: "Image block near 4.2 Sent Usage Demo"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-SENT-GETVERSIONINFO
- `name`: "Sent_GetVersionInfo"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,17,22`
- `brief`: "api index entry for `Sent_GetVersionInfo`."
- `anchors`:
  - `p8`: "API service ID for Sent_GetVersionInfo function."
  - `p17`: "void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
  - `p22`: "Switches the Sent_GetVersionInfo() API: ON or OFF."
- `aliases`: []

### API-SENT-DEINIT
- `name`: "Sent_DeInit"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16,22`
- `brief`: "api index entry for `Sent_DeInit`."
- `anchors`:
  - `p8`: "API SENT_Sent_DeInit service called when the SENT driver and the Hardware are already uninitialized."
  - `p16`: "void Sent_DeInit (void)"
  - `p22`: "Vendor specific: Enables/Disables the Sent_DeInit API."
- `aliases`: []

### API-SENT-INIT
- `name`: "Sent_Init"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,15`
- `brief`: "api index entry for `Sent_Init`."
- `anchors`:
  - `p8`: "API SENT_Sent_Init service called when the SENT driver and the Hardware are already initialized."
  - `p15`: "void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `aliases`: []

### API-SENT-MAINFUNCTIONFASTMESSAGEREAD
- `name`: "Sent_MainFunctionFastMessageRead"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,18`
- `brief`: "api index entry for `Sent_MainFunctionFastMessageRead`."
- `anchors`:
  - `p9`: "API service ID for Sent_MainFunctionFastMessageRead function."
  - `p18`: "void Sent_MainFunctionFastMessageRead(void)"
- `aliases`: []

### API-SENT-MAINFUNCTIONSLOWMESSAGEREAD
- `name`: "Sent_MainFunctionSlowMessageRead"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,18`
- `brief`: "api index entry for `Sent_MainFunctionSlowMessageRead`."
- `anchors`:
  - `p9`: "API service ID for Sent_MainFunctionSlowMessageRead function."
  - `p18`: "void Sent_MainFunctionSlowMessageRead(void)"
- `aliases`: []

### API-SENT-REQUESTSPCPULSE
- `name`: "Sent_RequestSpcPulse"
- `type`: `api`
- `primary_page`: `9`
- `physical_pages`: `9,17`
- `brief`: "api index entry for `Sent_RequestSpcPulse`."
- `anchors`:
  - `p9`: "API service ID for Sent_RequestSpcPulse function."
  - `p17`: "void Sent_RequestSpcPulse"
- `aliases`: []

### API-CLOCK
- `name`: "Clock"
- `type`: `api`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "api index entry for `Clock`."
- `anchors`:
  - `p29`: "SentModuleClock"
- `aliases`: []

### API-CODE
- `name`: "Code"
- `type`: `api`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "api index entry for `Code`."
- `anchors`:
  - `p6`: "In addition to standard protocols, the SENT also supports Short PWM Code (SPC) mode. In this mode, the sensor needs to"
- `aliases`: []

### API-FIFO
- `name`: "FiFo"
- `type`: `api`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "api index entry for `FiFo`."
- `anchors`:
  - `p26`: "EnableHwFiFo"
- `aliases`: []

### API-PULSE
- `name`: "Pulse"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "api index entry for `Pulse`."
- `anchors`:
  - `p17`: "void Sent_RequestSpcPulse"
- `aliases`: []

### API-UNIT
- `name`: "Unit"
- `type`: `api`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "api index entry for `Unit`."
- `anchors`:
  - `p5`: "Control Unit (ECU). Also, it is used as a replacement for the lower resolution methods of 10-bit A/D's and PWM and as a simpler"
- `aliases`: []

### CFG-SENTGENERAL
- `name`: "SentGeneral"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,21,22`
- `brief`: "config index entry for `SentGeneral`."
- `anchors`:
  - `p3`: "SentGeneral ...............................................................................................................................…"
  - `p21`: "SentGeneral"
  - `p22`: "SentGeneral"
- `aliases`: []

### CFG-SENTCHANNELCONFIG
- `name`: "SentChannelConfig"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,25,39`
- `brief`: "config index entry for `SentChannelConfig`."
- `anchors`:
  - `p3`: "SentChannelConfig .........................................................................................................................…"
  - `p25`: "SentChannelConfig"
  - `p39`: "In SentChannelConfig tag, users can select what sent channel would be configured and used."
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,34`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p3`: "CommonPublishedInformation ................................................................................................................…"
  - `p34`: "CommonPublishedInformation"
- `aliases`: []

### CFG-SENTSLOWNOTIFICATION
- `name`: "SentSlowNotification"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,33`
- `brief`: "config index entry for `SentSlowNotification`."
- `anchors`:
  - `p32`: "SentSlowNotification"
  - `p33`: "Sent Slow Notification"
- `aliases`: []

### CFG-SENTFASTNOTIFICATION
- `name`: "SentFastNotification"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "config index entry for `SentFastNotification`."
- `anchors`:
  - `p32`: "SentFastNotification"
- `aliases`: []

### CFG-SENTCHANNELACTIVATION
- `name`: "SentChannelActivation"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `SentChannelActivation`."
- `anchors`:
  - `p26`: "SentChannelActivation"
- `aliases`: []

### CFG-SENTCHANNELID
- `name`: "SentChannelId"
- `type`: `config`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "config index entry for `SentChannelId`."
- `anchors`:
  - `p25`: "SentChannelId"
- `aliases`: []

### CFG-SENTFASTCRCERRORNOTIFICATION
- `name`: "SentFastCRCErrorNotification"
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "config index entry for `SentFastCRCErrorNotification`."
- `anchors`:
  - `p31`: "SentFastCRCErrorNotificationEnable"
- `aliases`: []

### CFG-SENTFASTCRCERRORNOTIFICATIONENABLE
- `name`: "SentFastCRCErrorNotificationEnable"
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "config index entry for `SentFastCRCErrorNotificationEnable`."
- `anchors`:
  - `p31`: "SentFastCRCErrorNotificationEnable"
- `aliases`: []

### CFG-SENTHWCHANNEL
- `name`: "SentHWChannel"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `SentHWChannel`."
- `anchors`:
  - `p26`: "SentHWChannel"
- `aliases`: []

### CFG-SENTSLOWCRCERRORNOTIFICATION
- `name`: "SentSlowCRCErrorNotification"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "config index entry for `SentSlowCRCErrorNotification`."
- `anchors`:
  - `p32`: "SentSlowCRCErrorNotification"
- `aliases`: []

### CFG-SENTSLOWCRCERRORNOTIFICATIONENABLE
- `name`: "SentSlowCRCErrorNotificationEnable"
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "config index entry for `SentSlowCRCErrorNotificationEnable`."
- `anchors`:
  - `p31`: "SentSlowCRCErrorNotificationEnable"
- `aliases`: []

### CFG-PORTCONTAINER
- `name`: "PortContainer"
- `type`: `config`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "config index entry for `PortContainer`."
- `anchors`:
  - `p37`: "Users should set the Sent pin mode in PortContainer firstly."
- `aliases`: []

### CFG-SENTCONTROLLERCONFIG
- `name`: "SentControllerConfig"
- `type`: `config`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "config index entry for `SentControllerConfig`."
- `anchors`:
  - `p39`: "In SentControllerConfig tag, users can select what sent controller would be configured and used."
- `aliases`: []

### CFG-SENT-CHANNEL0
- `name`: "Sent_Channel0"
- `type`: `config`
- `primary_page`: `26`
- `physical_pages`: `26`
- `brief`: "config index entry for `Sent_Channel0`."
- `anchors`:
  - `p26`: "Sent_Channel0"
- `aliases`: []

### CFG-SENT-SPCCONFIGTYPEP
- `name`: "Sent_SpcConfigTypep"
- `type`: `config`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "config index entry for `Sent_SpcConfigTypep`."
- `anchors`:
  - `p13`: "Sent_SpcConfigTypep *pSpcModeCfg"
- `aliases`: []

### MACRO-INTEGER-LABEL
- `name`: "INTEGER_LABEL"
- `type`: `macro`
- `primary_page`: `35`
- `physical_pages`: `35,36`
- `brief`: "macro index entry for `INTEGER_LABEL`."
- `anchors`:
  - `p35`: "INTEGER_LABEL"
  - `p36`: "INTEGER_LABEL"
- `aliases`: []

### MACRO-SENT-CALIBRATION-VALID-DISABLE
- `name`: "SENT_CALIBRATION_VALID_DISABLE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,31`
- `brief`: "macro index entry for `SENT_CALIBRATION_VALID_DISABLE`."
- `anchors`:
  - `p10`: "SENT_CALIBRATION_VALID_DISABLE"
  - `p31`: "SENT_CALIBRATION_VALID_DISABLE"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-A
- `name`: "SENT_DATA_NIBBLE_MODE_A"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,30`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_A`."
- `anchors`:
  - `p9`: "SENT_DATA_NIBBLE_MODE_A = 0x0U"
  - `p30`: "SENT_DATA_NIBBLE_MODE_A"
- `aliases`: []

### MACRO-SENT-IDLE-COUNT-FLAG-DISABLE
- `name`: "SENT_IDLE_COUNT_FLAG_DISABLE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10,31`
- `brief`: "macro index entry for `SENT_IDLE_COUNT_FLAG_DISABLE`."
- `anchors`:
  - `p10`: "SENT_IDLE_COUNT_FLAG_DISABLE"
  - `p31`: "SENT_IDLE_COUNT_FLAG_DISABLE"
- `aliases`: []

### MACRO-SENT-SPC-EXTERNAL-TRIGGER
- `name`: "SENT_SPC_EXTERNAL_TRIGGER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,34`
- `brief`: "macro index entry for `SENT_SPC_EXTERNAL_TRIGGER`."
- `anchors`:
  - `p11`: "SENT_SPC_EXTERNAL_TRIGGER"
  - `p34`: "SENT_SPC_EXTERNAL_TRIGGER"
- `aliases`: []

### MACRO-SENT-SPC-TICK-BASE-CONFIGURED
- `name`: "SENT_SPC_TICK_BASE_CONFIGURED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11,34`
- `brief`: "macro index entry for `SENT_SPC_TICK_BASE_CONFIGURED`."
- `anchors`:
  - `p11`: "SENT_SPC_TICK_BASE_CONFIGURED"
  - `p34`: "SENT_SPC_TICK_BASE_CONFIGURED"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p3`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 21"
  - `p21`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31,32`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p31`: "NULL_PTR"
  - `p32`: "NULL_PTR"
- `aliases`: []

### MACRO-SENT-SW-MAJOR-VERSION-C
- `name`: "SENT_SW_MAJOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_SW_MAJOR_VERSION_C`."
- `anchors`:
  - `p7`: "#define SENT_SW_MAJOR_VERSION_C 0"
- `aliases`: []

### MACRO-SENT-CALIBRATION-PULSE-DIAG-O
- `name`: "SENT_CALIBRATION_PULSE_DIAG_O"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_CALIBRATION_PULSE_DIAG_O`."
- `anchors`:
  - `p10`: "SENT_CALIBRATION_PULSE_DIAG_O"
- `aliases`: []

### MACRO-SENT-DEINIT-ID-U8
- `name`: "SENT_DEINIT_ID_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_DEINIT_ID_U8`."
- `anchors`:
  - `p8`: "#define SENT_DEINIT_ID_U8 ((uint8)0x2U)"
- `aliases`: []

### MACRO-SENT-E-ALREADY-INITIALIZED-U8
- `name`: "SENT_E_ALREADY_INITIALIZED_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_ALREADY_INITIALIZED_U8`."
- `anchors`:
  - `p8`: "#define SENT_E_ALREADY_INITIALIZED_U8 ((uint8)0x0D)"
- `aliases`: []

### MACRO-SENT-E-ALREADY-UNINITIALIZED-U8
- `name`: "SENT_E_ALREADY_UNINITIALIZED_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_ALREADY_UNINITIALIZED_U8`."
- `anchors`:
  - `p8`: "#define SENT_E_ALREADY_UNINITIALIZED_U8 ((uint8)0x0A)"
- `aliases`: []

### MACRO-SENT-E-INIT-FAILED-U8
- `name`: "SENT_E_INIT_FAILED_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_INIT_FAILED_U8`."
- `anchors`:
  - `p8`: "#define SENT_E_INIT_FAILED_U8 ((uint8)0x0FU)"
- `aliases`: []

### MACRO-SENT-E-INVALID-CHANNEL-U8
- `name`: "SENT_E_INVALID_CHANNEL_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_INVALID_CHANNEL_U8`."
- `anchors`:
  - `p8`: "#define SENT_E_INVALID_CHANNEL_U8 ((uint8)0x0B)"
- `aliases`: []

### MACRO-SENT-E-PARAM-U8
- `name`: "SENT_E_PARAM_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_PARAM_U8`."
- `anchors`:
  - `p8`: "#define SENT_E_PARAM_U8 ((uint8)0x0E)"
- `aliases`: []

### MACRO-SENT-E-PARTITION-MAPPING
- `name`: "SENT_E_PARTITION_MAPPING"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_PARTITION_MAPPING`."
- `anchors`:
  - `p8`: "#define SENT_E_PARTITION_MAPPING ((uint8)0x10U)"
- `aliases`: []

### MACRO-SENT-E-UNINIT-U8
- `name`: "SENT_E_UNINIT_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_E_UNINIT_U8`."
- `anchors`:
  - `p8`: "#define SENT_E_UNINIT_U8 ((uint8)0x0C)"
- `aliases`: []

### MACRO-SENT-FAST-MSG-READ-ID-U8
- `name`: "SENT_FAST_MSG_READ_ID_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_FAST_MSG_READ_ID_U8`."
- `anchors`:
  - `p9`: "#define SENT_FAST_MSG_READ_ID_U8 ((uint8)0x5U)"
- `aliases`: []

### MACRO-SENT-GETVERSIONINFO-ID-U8
- `name`: "SENT_GETVERSIONINFO_ID_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_GETVERSIONINFO_ID_U8`."
- `anchors`:
  - `p8`: "#define SENT_GETVERSIONINFO_ID_U8 ((uint8)0x3U)"
- `aliases`: []

### MACRO-SENT-INIT-ID-U8
- `name`: "SENT_INIT_ID_U8"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_INIT_ID_U8`."
- `anchors`:
  - `p8`: "#define SENT_INIT_ID_U8 ((uint8)0x1U)"
- `aliases`: []

### MACRO-SENT-REQUEST-SPC-ID-U8
- `name`: "SENT_REQUEST_SPC_ID_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_REQUEST_SPC_ID_U8`."
- `anchors`:
  - `p9`: "#define SENT_REQUEST_SPC_ID_U8 ((uint8)0x4U)"
- `aliases`: []

### MACRO-SENT-SERIAL-MESSAGE-ENHANCE-1
- `name`: "SENT_SERIAL_MESSAGE_ENHANCE_1"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_SERIAL_MESSAGE_ENHANCE_1`."
- `anchors`:
  - `p11`: "SENT_SERIAL_MESSAGE_ENHANCE_1"
- `aliases`: []

### MACRO-SENT-SLOW-MSG-READ-ID-U8
- `name`: "SENT_SLOW_MSG_READ_ID_U8"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_SLOW_MSG_READ_ID_U8`."
- `anchors`:
  - `p9`: "#define SENT_SLOW_MSG_READ_ID_U8 ((uint8)0x6U)"
- `aliases`: []

### MACRO-SENT-AR-RELEASE-MAJOR-VERSION
- `name`: "SENT_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p8`: "#define SENT_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-SENT-AR-RELEASE-MAJOR-VERSION-C
- `name`: "SENT_AR_RELEASE_MAJOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_AR_RELEASE_MAJOR_VERSION_C`."
- `anchors`:
  - `p7`: "#define SENT_AR_RELEASE_MAJOR_VERSION_C 4"
- `aliases`: []

### MACRO-SENT-AR-RELEASE-MINOR-VERSION
- `name`: "SENT_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p8`: "#define SENT_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-SENT-AR-RELEASE-MINOR-VERSION-C
- `name`: "SENT_AR_RELEASE_MINOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_AR_RELEASE_MINOR_VERSION_C`."
- `anchors`:
  - `p7`: "#define SENT_AR_RELEASE_MINOR_VERSION_C 6"
- `aliases`: []

### MACRO-SENT-AR-RELEASE-REVISION-VERSION
- `name`: "SENT_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p8`: "#define SENT_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-SENT-AR-RELEASE-REVISION-VERSION-C
- `name`: "SENT_AR_RELEASE_REVISION_VERSION_C"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_AR_RELEASE_REVISION_VERSION_C`."
- `anchors`:
  - `p7`: "#define SENT_AR_RELEASE_REVISION_VERSION_C 0"
- `aliases`: []

### MACRO-SENT-MODULE-ID
- `name`: "SENT_MODULE_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_MODULE_ID`."
- `anchors`:
  - `p7`: "#define SENT_MODULE_ID 255"
- `aliases`: []

### MACRO-SENT-SW-MAJOR-VERSION
- `name`: "SENT_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_SW_MAJOR_VERSION`."
- `anchors`:
  - `p8`: "#define SENT_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-SENT-SW-MINOR-VERSION
- `name`: "SENT_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_SW_MINOR_VERSION`."
- `anchors`:
  - `p8`: "#define SENT_SW_MINOR_VERSION 4"
- `aliases`: []

### MACRO-SENT-SW-PATCH-VERSION
- `name`: "SENT_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SENT_SW_PATCH_VERSION`."
- `anchors`:
  - `p8`: "#define SENT_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-SENT-VENDOR-ID
- `name`: "SENT_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_VENDOR_ID`."
- `anchors`:
  - `p7`: "#define SENT_VENDOR_ID_C 174"
- `aliases`: []

### MACRO-SENT-VENDOR-ID-C
- `name`: "SENT_VENDOR_ID_C"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SENT_VENDOR_ID_C`."
- `anchors`:
  - `p7`: "#define SENT_VENDOR_ID_C 174"
- `aliases`: []

### MACRO-SENT-BUSY
- `name`: "SENT_BUSY"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_BUSY`."
- `anchors`:
  - `p9`: "SENT_BUSY = 0x2U"
- `aliases`: []

### MACRO-SENT-CALIBRATION-PULSE-DIAG-OPTION1
- `name`: "SENT_CALIBRATION_PULSE_DIAG_OPTION1"
- `type`: `macro`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "macro index entry for `SENT_CALIBRATION_PULSE_DIAG_OPTION1`."
- `anchors`:
  - `p30`: "SENT_CALIBRATION_PULSE_DIAG_OPTION1"
- `aliases`: []

### MACRO-SENT-CALIBRATION-VALID-FROM-20
- `name`: "SENT_CALIBRATION_VALID_FROM_20"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_CALIBRATION_VALID_FROM_20`."
- `anchors`:
  - `p10`: "SENT_CALIBRATION_VALID_FROM_20"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H1
- `name`: "SENT_DATA_NIBBLE_MODE_H1"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H1`."
- `anchors`:
  - `p9`: "SENT_DATA_NIBBLE_MODE_H1"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H2
- `name`: "SENT_DATA_NIBBLE_MODE_H2"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H2`."
- `anchors`:
  - `p9`: "SENT_DATA_NIBBLE_MODE_H2"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H3
- `name`: "SENT_DATA_NIBBLE_MODE_H3"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H3`."
- `anchors`:
  - `p9`: "SENT_DATA_NIBBLE_MODE_H3"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H4
- `name`: "SENT_DATA_NIBBLE_MODE_H4"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H4`."
- `anchors`:
  - `p10`: "SENT_DATA_NIBBLE_MODE_H4"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H5
- `name`: "SENT_DATA_NIBBLE_MODE_H5"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H5`."
- `anchors`:
  - `p10`: "SENT_DATA_NIBBLE_MODE_H5"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H6
- `name`: "SENT_DATA_NIBBLE_MODE_H6"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H6`."
- `anchors`:
  - `p10`: "SENT_DATA_NIBBLE_MODE_H6"
- `aliases`: []

### MACRO-SENT-DATA-NIBBLE-MODE-H7
- `name`: "SENT_DATA_NIBBLE_MODE_H7"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_DATA_NIBBLE_MODE_H7`."
- `anchors`:
  - `p10`: "SENT_DATA_NIBBLE_MODE_H7"
- `aliases`: []

### MACRO-SENT-IDLE-COUNT-FLAG-1016-TICK
- `name`: "SENT_IDLE_COUNT_FLAG_1016_TICK"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_IDLE_COUNT_FLAG_1016_TICK`."
- `anchors`:
  - `p11`: "SENT_IDLE_COUNT_FLAG_1016_TICK"
- `aliases`: []

### MACRO-SENT-IDLE-COUNT-FLAG-2032-TICK
- `name`: "SENT_IDLE_COUNT_FLAG_2032_TICK"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_IDLE_COUNT_FLAG_2032_TICK`."
- `anchors`:
  - `p11`: "SENT_IDLE_COUNT_FLAG_2032_TICK"
- `aliases`: []

### MACRO-SENT-IDLE-COUNT-FLAG-254-TICKS
- `name`: "SENT_IDLE_COUNT_FLAG_254_TICKS"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_IDLE_COUNT_FLAG_254_TICKS`."
- `anchors`:
  - `p10`: "SENT_IDLE_COUNT_FLAG_254_TICKS"
- `aliases`: []

### MACRO-SENT-IDLE-COUNT-FLAG-508-TICKS
- `name`: "SENT_IDLE_COUNT_FLAG_508_TICKS"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_IDLE_COUNT_FLAG_508_TICKS`."
- `anchors`:
  - `p10`: "SENT_IDLE_COUNT_FLAG_508_TICKS"
- `aliases`: []

### MACRO-SENT-INITIALIZED
- `name`: "SENT_INITIALIZED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_INITIALIZED`."
- `anchors`:
  - `p9`: "SENT_INITIALIZED = 0x1U"
- `aliases`: []

### MACRO-SENT-NOT-OK
- `name`: "SENT_NOT_OK"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_NOT_OK`."
- `anchors`:
  - `p9`: "SENT_NOT_OK = 0x1U"
- `aliases`: []

### MACRO-SENT-OK
- `name`: "SENT_OK"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_OK`."
- `anchors`:
  - `p9`: "SENT_OK = 0x0U"
- `aliases`: []

### MACRO-SENT-SERIAL-MESSAGE-SHORT
- `name`: "SENT_SERIAL_MESSAGE_SHORT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_SERIAL_MESSAGE_SHORT`."
- `anchors`:
  - `p11`: "SENT_SERIAL_MESSAGE_SHORT"
- `aliases`: []

### MACRO-SENT-SPC-SOFTWARE-TRIGGER
- `name`: "SENT_SPC_SOFTWARE_TRIGGER"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_SPC_SOFTWARE_TRIGGER`."
- `anchors`:
  - `p11`: "SENT_SPC_SOFTWARE_TRIGGER"
- `aliases`: []

### MACRO-SENT-SPC-TICK-BASE-PRE-MSG
- `name`: "SENT_SPC_TICK_BASE_PRE_MSG"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `SENT_SPC_TICK_BASE_PRE_MSG`."
- `anchors`:
  - `p11`: "SENT_SPC_TICK_BASE_PRE_MSG"
- `aliases`: []

### MACRO-SENT-UNINIT
- `name`: "SENT_UNINIT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SENT_UNINIT`."
- `anchors`:
  - `p9`: "SENT_UNINIT = 0x0U"
- `aliases`: []

### MACRO-SENT-CALIBRATION-VALID-WITHIN
- `name`: "SENT_CALIBRATION_VALID_WITHIN_"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `SENT_CALIBRATION_VALID_WITHIN_`."
- `anchors`:
  - `p10`: "SENT_CALIBRATION_VALID_WITHIN_"
- `aliases`: []

### TYPE-SENT-CHANNELCONFIGTYPE
- `name`: "Sent_ChannelConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12,14`
- `brief`: "type index entry for `Sent_ChannelConfigType`."
- `anchors`:
  - `p3`: "Sent_ChannelConfigType.....................................................................................................................…"
  - `p12`: "Sent_ChannelConfigType"
  - `p14`: "Sent_ChannelConfigType **pSentChannelCfg"
- `aliases`: []

### TYPE-SENT-CONFIGTYPE
- `name`: "Sent_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,14,15`
- `brief`: "type index entry for `Sent_ConfigType`."
- `anchors`:
  - `p3`: "Sent_ConfigType............................................................................................................................…"
  - `p14`: "Sent_ConfigType"
  - `p15`: "void Sent_Init(const Sent_ConfigType * pConfigPtr)"
- `aliases`: []

### TYPE-SENT-SPCCONFIGTYPE
- `name`: "Sent_SpcConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12,14`
- `brief`: "type index entry for `Sent_SpcConfigType`."
- `anchors`:
  - `p3`: "Sent_SpcConfigType ........................................................................................................................…"
  - `p12`: "Sent_SpcConfigType"
  - `p14`: "The Pointer of the Sent_SpcConfigType"
- `aliases`: []

### TYPE-SENT-INSTANCECONFIGTYPE
- `name`: "Sent_InstanceConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,14`
- `brief`: "type index entry for `Sent_InstanceConfigType`."
- `anchors`:
  - `p3`: "Sent_InstanceConfigType ...................................................................................................................…"
  - `p14`: "Sent_InstanceConfigType"
- `aliases`: []

### TYPE-SENT-CALDIAGOPTIONTYPE
- `name`: "Sent_CalDiagOptionType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `Sent_CalDiagOptionType`."
- `anchors`:
  - `p10`: "Sent_CalDiagOptionType"
  - `p13`: "Sent_CalDiagOptionType eCalDiagOption"
- `aliases`: []

### TYPE-SENT-CALIBRATIONVALIDTYPE
- `name`: "Sent_CalibrationValidType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `Sent_CalibrationValidType`."
- `anchors`:
  - `p10`: "Sent_CalibrationValidType"
  - `p13`: "Sent_CalibrationValidType eCalValid"
- `aliases`: []

### TYPE-SENT-DATANIBBLEMODETYPE
- `name`: "Sent_DataNibbleModeType"
- `type`: `type`
- `primary_page`: `9`
- `physical_pages`: `9,13`
- `brief`: "type index entry for `Sent_DataNibbleModeType`."
- `anchors`:
  - `p9`: "Sent_DataNibbleModeType"
  - `p13`: "Sent_DataNibbleModeType eDataNibbleMode"
- `aliases`: []

### TYPE-SENT-IDLECOUNTTYPE
- `name`: "Sent_IdleCountType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,13`
- `brief`: "type index entry for `Sent_IdleCountType`."
- `anchors`:
  - `p10`: "Sent_IdleCountType"
  - `p13`: "Sent_IdleCountType eIdleCount"
- `aliases`: []

### TYPE-SENT-SPCTICKBASETYPE
- `name`: "Sent_SpcTickBaseType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "type index entry for `Sent_SpcTickBaseType`."
- `anchors`:
  - `p11`: "Sent_SpcTickBaseType"
  - `p12`: "Sent_SpcTickBaseType eSpcTickBase"
- `aliases`: []

### TYPE-SENT-SPCTRIGGERTYPE
- `name`: "Sent_SpcTriggerType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,12`
- `brief`: "type index entry for `Sent_SpcTriggerType`."
- `anchors`:
  - `p11`: "Sent_SpcTriggerType"
  - `p12`: "Sent_SpcTriggerType eSpcTrigger"
- `aliases`: []

### TYPE-SENT-FASTERRORNOTIFACTIONTYPE
- `name`: "Sent_FastErrorNotifactionType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "type index entry for `Sent_FastErrorNotifactionType`."
- `anchors`:
  - `p12`: "typedef void (*Sent_FastErrorNotifactionType)(uint32 u32Status)"
  - `p13`: "Sent_FastErrorNotifactionType pFastErrNotification"
- `aliases`: []

### TYPE-SENT-FASTMSGNOTIFACTIONTYPE
- `name`: "Sent_FastMsgNotifactionType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,13`
- `brief`: "type index entry for `Sent_FastMsgNotifactionType`."
- `anchors`:
  - `p11`: "typedef void (*Sent_FastMsgNotifactionType)(Sent_FastMessageDataType *pMsg)"
  - `p13`: "Sent_FastMsgNotifactionType pFastMsgNotification"
- `aliases`: []

### TYPE-SENT-SLOWERRORNOTIFACTIONTYPE
- `name`: "Sent_SlowErrorNotifactionType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12,13`
- `brief`: "type index entry for `Sent_SlowErrorNotifactionType`."
- `anchors`:
  - `p12`: "typedef void (*Sent_SlowErrorNotifactionType)(uint32 u32Status)"
  - `p13`: "Sent_SlowErrorNotifactionType pSlowErrNotification"
- `aliases`: []

### TYPE-SENT-SLOWMSGNOTIFACTIONTYPE
- `name`: "Sent_SlowMsgNotifactionType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,13`
- `brief`: "type index entry for `Sent_SlowMsgNotifactionType`."
- `anchors`:
  - `p11`: "typedef void (*Sent_SlowMsgNotifactionType)(Sent_SlowMessageDataType *pMsg)"
  - `p13`: "Sent_SlowMsgNotifactionType pSlowMsgNotification"
- `aliases`: []

### TYPE-SENT-RETURNTYPE
- `name`: "Sent_ReturnType"
- `type`: `type`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "type index entry for `Sent_ReturnType`."
- `anchors`:
  - `p9`: "Sent_ReturnType"
- `aliases`: []

### TYPE-SENT-SERIALMESSAGETYPE
- `name`: "Sent_SerialMessageType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Sent_SerialMessageType`."
- `anchors`:
  - `p11`: "Sent_SerialMessageType"
- `aliases`: []

### TYPE-SENT-STATUSTYPE
- `name`: "Sent_StatusType"
- `type`: `type`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "type index entry for `Sent_StatusType`."
- `anchors`:
  - `p9`: "Sent_StatusType"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p17`: "void Sent_GetVersionInfo(Std_VersionInfoType * pVersioninfo)"
- `aliases`: []

### TYPE-SENT-FASTMESSAGEDATATYPE
- `name`: "Sent_FastMessageDataType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Sent_FastMessageDataType`."
- `anchors`:
  - `p11`: "typedef void (*Sent_FastMsgNotifactionType)(Sent_FastMessageDataType *pMsg)"
- `aliases`: []

### TYPE-SENT-SLOWMESSAGEDATATYPE
- `name`: "Sent_SlowMessageDataType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "type index entry for `Sent_SlowMessageDataType`."
- `anchors`:
  - `p11`: "typedef void (*Sent_SlowMsgNotifactionType)(Sent_SlowMessageDataType *pMsg)"
- `aliases`: []

### FILE-CDD-SENT-H
- `name`: "CDD_Sent.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,7,9,11`
- `brief`: "file index entry for `CDD_Sent.h`."
- `anchors`:
  - `p3`: "Macros in CDD_Sent.h ......................................................................................................................…"
  - `p7`: "Macros in CDD_Sent.h"
  - `p9`: "Enumerations in CDD_Sent.h"
  - `p11`: "Typedefs in CDD_Sent.h"
- `aliases`: []

### FILE-CDD-SENT-C
- `name`: "CDD_Sent.c"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,7`
- `brief`: "file index entry for `CDD_Sent.c`."
- `anchors`:
  - `p3`: "Macros in CDD_Sent.c ......................................................................................................................…"
  - `p7`: "Macros in CDD_Sent.c"
- `aliases`: []

### FILE-CDD-SENT-C-2
- `name`: "Cdd_Sent.c"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,15`
- `brief`: "file index entry for `Cdd_Sent.c`."
- `anchors`:
  - `p3`: "Functions in Cdd_Sent.c ...................................................................................................................…"
  - `p15`: "Functions in Cdd_Sent.c"
- `aliases`: []

### FILE-AUTOSAR-EXP-CDDDESIGNANDINTEGRATIONGUIDELINE-PDF
- `name`: "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf"
- `type`: `file`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "file index entry for `AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf`."
- `anchors`:
  - `p5`: "For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf."
- `aliases`: []

### TERM-SENT
- `name`: "SENT"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `SENT`."
- `anchors`:
  - `p1`: "SENT"
  - `p2`: "SENT"
  - `p3`: "SENT"
  - `p4`: "SENT"
  - `p5`: "SENT"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,10,21,38`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p6`: "Det"
  - `p10`: "Det"
  - `p21`: "Det"
  - `p38`: "Det"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `6`
- `physical_pages`: `6,21,38`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p6`: " Detection of nibble value errors"
  - `p21`: "Switches the Development Error Detection and Notification on or off."
  - `p38`: "Development Error Detection checkbox has no need to be checked."
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,35,36`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p35`: "AUTOSAR"
  - `p36`: "AUTOSAR"
- `aliases`: []

### TERM-SENTMULTICORESUPPORT
- `name`: "SentMulticoreSupport"
- `type`: `term`
- `primary_page`: `21`
- `physical_pages`: `21,38`
- `brief`: "term index entry for `SentMulticoreSupport`."
- `anchors`:
  - `p21`: "SentMulticoreSupport"
  - `p38`: "In Sent General configuration tag, users can configure if SentMulticoreSupport is used. If Det isn't needed, the"
- `aliases`: []

### TERM-SENTECUCPARTITIONREF
- `name`: "SentEcucPartitionRef"
- `type`: `term`
- `primary_page`: `21`
- `physical_pages`: `21,38`
- `brief`: "term index entry for `SentEcucPartitionRef`."
- `anchors`:
  - `p21`: "False: For all variants, no EcucPartition shall be referenced in SentEcucPartitionRef."
  - `p38`: "In SentEcucPartitionRef tag, users can select what cores would use the sent controller."
- `aliases`: []

### TERM-SENTSPCMODE
- `name`: "SentSPCmode"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,33`
- `brief`: "term index entry for `SentSPCmode`."
- `anchors`:
  - `p3`: "SentSPCmode ...............................................................................................................................…"
  - `p33`: "SentSPCmode"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,37`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p4`: "Dem"
  - `p37`: "Dem"
- `aliases`: []

### TERM-SENTTIMESTAMPPRESCALLER
- `name`: "SentTimestampPrescaller"
- `type`: `term`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "term index entry for `SentTimestampPrescaller`."
- `anchors`:
  - `p24`: "SentTimestampPrescaller"
- `aliases`: []

### TERM-SENTCONTROLLERECUCPARTITIONREF
- `name`: "SentControllerEcucPartitionRef"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "term index entry for `SentControllerEcucPartitionRef`."
- `anchors`:
  - `p23`: "SentControllerEcucPartitionRef"
- `aliases`: []

### TERM-SENTCLOCKTICKMAX
- `name`: "SentClockTickMax"
- `type`: `term`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "term index entry for `SentClockTickMax`."
- `anchors`:
  - `p29`: "SentClockTickMax"
- `aliases`: []

### TERM-SENTCLOCKTICKMIN
- `name`: "SentClockTickMin"
- `type`: `term`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "term index entry for `SentClockTickMin`."
- `anchors`:
  - `p29`: "SentClockTickMin"
- `aliases`: []

### TERM-SENTCONTROLLERACTIVATION
- `name`: "SentControllerActivation"
- `type`: `term`
- `primary_page`: `25`
- `physical_pages`: `25`
- `brief`: "term index entry for `SentControllerActivation`."
- `anchors`:
  - `p25`: "SentControllerActivation"
- `aliases`: []

### TERM-SENTCONTROLLERID
- `name`: "SentControllerId"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "term index entry for `SentControllerId`."
- `anchors`:
  - `p23`: "SentControllerId"
- `aliases`: []

### TERM-SENTDMASUPPORT
- `name`: "SentDMASupport"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "term index entry for `SentDMASupport`."
- `anchors`:
  - `p23`: "SentDMASupport"
- `aliases`: []

### TERM-SENTDEINITAPI
- `name`: "SentDeInitApi"
- `type`: `term`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "term index entry for `SentDeInitApi`."
- `anchors`:
  - `p22`: "SentDeInitApi"
- `aliases`: []

### TERM-SENTDEBUGEN
- `name`: "SentDebugEn"
- `type`: `term`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "term index entry for `SentDebugEn`."
- `anchors`:
  - `p24`: "SentDebugEn"
- `aliases`: []

### TERM-SENTHWINSTANCE
- `name`: "SentHWInstance"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "term index entry for `SentHWInstance`."
- `anchors`:
  - `p23`: "SentHWInstance"
- `aliases`: []

### TERM-SENTINDEX
- `name`: "SentIndex"
- `type`: `term`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "term index entry for `SentIndex`."
- `anchors`:
  - `p22`: "SentIndex"
- `aliases`: []

### TERM-SENTMODULECLOCK
- `name`: "SentModuleClock"
- `type`: `term`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "term index entry for `SentModuleClock`."
- `anchors`:
  - `p29`: "SentModuleClock"
- `aliases`: []

### TERM-SENTMODULECLOCKREF
- `name`: "SentModuleClockRef"
- `type`: `term`
- `primary_page`: `23`
- `physical_pages`: `23`
- `brief`: "term index entry for `SentModuleClockRef`."
- `anchors`:
  - `p23`: "SentModuleClockRef"
- `aliases`: []

### TERM-SENTSPCMODEEN
- `name`: "SentSPCModeEn"
- `type`: `term`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "term index entry for `SentSPCModeEn`."
- `anchors`:
  - `p33`: "SentSPCModeEn"
- `aliases`: []

### TERM-SENTVERSIONINFOAPI
- `name`: "SentVersionInfoApi"
- `type`: `term`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "term index entry for `SentVersionInfoApi`."
- `anchors`:
  - `p22`: "SentVersionInfoApi"
- `aliases`: []

### TERM-AUTOSAR-EXP-CDDDESIGNANDINTEGRATIONGUIDELINE
- `name`: "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `AUTOSAR_EXP_CDDDesignAndIntegrationGuideline`."
- `anchors`:
  - `p5`: "For detailed requirements, refer to the AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf."
- `aliases`: []

### TERM-DETECT
- `name`: "Detect"
- `type`: `term`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "term index entry for `Detect`."
- `anchors`:
  - `p21`: "DmaDevErrorDetect"
- `aliases`: []

### TERM-DETERMINES
- `name`: "Determines"
- `type`: `term`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "term index entry for `Determines`."
- `anchors`:
  - `p10`: "Determines how long the bus idle flag will assert when SENT bus is idle"
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

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p1`: "MCAL"
- `aliases`: []

### TERM-MCUCLOCKREFERENCEPOINT-PCC
- `name`: "McuClockReferencepoint_PCC"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `McuClockReferencepoint_PCC`."
- `anchors`:
  - `p37`: "Then set the Sent clock in McuClockReferencepoint_PCC container."
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

### TERM-SENT-SENT-DEINIT
- `name`: "SENT_Sent_DeInit"
- `type`: `term`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "term index entry for `SENT_Sent_DeInit`."
- `anchors`:
  - `p8`: "API SENT_Sent_DeInit service called when the SENT driver and the Hardware are already uninitialized."
- `aliases`: []

### TERM-SENT-SENT-INIT
- `name`: "SENT_Sent_Init"
- `type`: `term`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "term index entry for `SENT_Sent_Init`."
- `anchors`:
  - `p8`: "API SENT_Sent_Init service called when the SENT driver and the Hardware are already initialized."
- `aliases`: []

### TERM-SENTDEV
- `name`: "SentDev"
- `type`: `term`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "term index entry for `SentDev`."
- `anchors`:
  - `p21`: "SentDevErrorDetect"
- `aliases`: []

### TERM-SENTDEVERRORDETECT
- `name`: "SentDevErrorDetect"
- `type`: `term`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "term index entry for `SentDevErrorDetect`."
- `anchors`:
  - `p21`: "SentDevErrorDetect"
- `aliases`: []

### TERM-SENT-CORESMAPPINGPTR
- `name`: "Sent_CoresMappingPtr"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Sent_CoresMappingPtr`."
- `anchors`:
  - `p14`: "Boolean *Sent_CoresMappingPtr"
- `aliases`: []

### TERM-SENT-CTRLCORESMAPPINGPTR
- `name`: "Sent_CtrlCoresMappingPtr"
- `type`: `term`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "term index entry for `Sent_CtrlCoresMappingPtr`."
- `anchors`:
  - `p14`: "uint32 *Sent_CtrlCoresMappingPtr"
- `aliases`: []

### TERM-SINGLE-EDGE-NIBBLE-TRANSMISSION-DRIVER
- `name`: "Single Edge Nibble Transmission Driver"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5`
- `brief`: "term index entry for `Single Edge Nibble Transmission Driver`."
- `anchors`:
  - `p5`: "Single Edge Nibble Transmission Driver"
- `aliases`: []

## 9. Search Aliases

### ALIAS-SENT
- `canonical`: "SENT"
- `aliases`: ["Single Edge Nibble Transmission Driver", "SENT 单边沿半字节传输驱动", "SENT module", "SENT driver", "SENT User Manual", "SENT Integration Manual"]
- `related_ids`: ["TERM-SENT"]

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
- `purpose`: `Close keyword lookup gaps between SENT_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `SENT_User_Manual.pdf`
- `source_pdf_sha256`: `9214d822f47e57119e69a56779ac9b9ec2a40b829e669dc2bbc2d8da384c9970`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `348`
- `technical_missing_terms_added`: `16`
- `pages_with_added_terms`: `40`
- `supplemented_missing_token_count`: `348`
- `supplemented_missing_technical_token_count`: `16`
- `supplemented_physical_pages_count`: `40`
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
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "Typedef"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "ASIC"
  - "According"
  - "Architecture"
  - "Basic"
  - "CAN"
  - "Complex"
  - "Confidential"
  - "Drivers"
  - "Electronic"
  - "Flagchip"
  - "Interfaces"
  - "J2716"
  - "LIN"
  - "Layered"
  - "Modules"
  - "Proprietary"
  - "access"
  - "accessed"
  - "applications"
  - "architecture"
  - "assumes"
  - "autosar"
  - "communicated"
  - "conforms"
  - "containing"
  - "cost"
  - "create"
  - "dedicated"
  - "device"
  - "encoding"
  - "entity"
  - "high"
  - "intended"
  - "interacts"
  - "interface"
  - "layered"
  - "located"
  - "microprocessor"
  - "modules"
  - "smart"
  - "software"
  - "standardized"
  - "via"
  - "where"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Configurable"
  - "Enhanced"
  - "Flagchip"
  - "Input"
  - "Optional"
  - "Proprietary"
  - "SOC"
  - "Serial"
  - "Support"
  - "Two"
  - "available"
  - "channels"
  - "compensation"
  - "diagnosis"
  - "difference"
  - "digital"
  - "each"
  - "filter"
  - "frame"
  - "independent"
  - "one"
  - "options"
  - "pause"
  - "receiving"
  - "software"
  - "successive"
  - "sync"
  - "time"
  - "triggers"
  - "variation"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "execution"
  - "failed"
  - "initialization"
  - "out"
  - "without"
  - "wrong"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Call"
  - "Confidential"
  - "Correctly"
  - "Defines"
  - "Flagchip"
  - "J2716"
  - "Proprietary"
  - "Refer"
  - "Result"
  - "Status"
  - "Transmit"
  - "available"
  - "been"
  - "control"
  - "could"
  - "definition"
  - "detail"
  - "object"
  - "processed"
  - "protocol"
  - "request"
  - "return"
  - "transmit"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "0x7"
  - "Confidential"
  - "Flagchip"
  - "High"
  - "Latency"
  - "Low"
  - "PTION1"
  - "PTION2"
  - "Preferred"
  - "Proprietary"
  - "Specification"
  - "Successive"
  - "_TO_25"
  - "deemed"
  - "difference"
  - "disabled"
  - "less"
  - "never"
  - "option"
  - "per"
  - "receiver"
  - "successive"
  - "within"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "0x8"
  - "2.5"
  - "2.5.1"
  - "Confidential"
  - "DATA_4ID"
  - "DATA_8ID"
  - "Flagchip"
  - "Previous"
  - "Proprietary"
  - "Select"
  - "Typedef"
  - "base"
  - "enhanced"
  - "external"
  - "method"
  - "serial"
  - "software"
  - "trigger"
  - "triggered"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "Proprietary"
  - "Select"
  - "Uint8"
  - "bCalDiagEn"
  - "bFastMessageFifoEn"
  - "bSpcModeEn"
  - "base"
  - "between"
  - "bigger"
  - "cycles"
  - "delay"
  - "diagnosis"
  - "digital"
  - "divide"
  - "filt_cnt"
  - "filter"
  - "finally"
  - "forbidden"
  - "function_clk"
  - "input"
  - "keep"
  - "plus"
  - "stable"
  - "through"
  - "trigger"
  - "u16TickScaler"
  - "u8ChannelHwId"
  - "u8ChannelLogicId"
  - "u8DataNibbleNumber"
  - "u8DigitalFilterCount"
  - "u8PulseDelay"
  - "u8PulseWidth"
  - "uint16"
  - "width"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Augmentation"
  - "Confidential"
  - "Flagchip"
  - "J2716"
  - "Proprietary"
  - "Receive"
  - "Refer"
  - "Select"
  - "Serial"
  - "Successive"
  - "appended"
  - "bChannelEn"
  - "bFastDmaEn"
  - "bFastInterruptEn"
  - "bFastMsgCRCAugEn"
  - "bFastMsgCRCCheckEn"
  - "bFastMsgCRCWithSCEn"
  - "bFastMsgDataChangeEn"
  - "bPausePulseEn"
  - "bSlowDmaEn"
  - "bSlowInterruptEn"
  - "bSlowMsgCRCAugEn"
  - "changed"
  - "check"
  - "compared"
  - "crc"
  - "definition"
  - "detail"
  - "enabled"
  - "end"
  - "frame"
  - "includes"
  - "notification"
  - "option"
  - "pause"
  - "previous"
  - "protocol"
  - "ready"
  - "selected"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Activation"
  - "Confidential"
  - "Controller"
  - "Data"
  - "Fields"
  - "Flagchip"
  - "Proprietary"
  - "When"
  - "bAutoClearReadyFlag"
  - "bControllerEn"
  - "bDebugModeEn"
  - "bFifoOverflowEn"
  - "containing"
  - "count"
  - "counter"
  - "crc"
  - "current"
  - "debug"
  - "divide"
  - "enable"
  - "enabled"
  - "initializing"
  - "interrupt"
  - "keep"
  - "least"
  - "means"
  - "one"
  - "overflow"
  - "pSentInstanceCfg"
  - "parameters"
  - "prevent"
  - "read"
  - "ready"
  - "register"
  - "request"
  - "required"
  - "running"
  - "timestamp"
  - "u8ChannelCount"
  - "u8InstanceCount"
  - "u8InstanceHwIndex"
  - "u8InstanceLogicIndex"
  - "u8Prescaller"
  - "u8WaterMark"
  - "under"
  - "watermark"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initialize"
  - "Proprietary"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Non"
  - "Proprietary"
  - "SOC"
  - "When"
  - "available"
  - "callee"
  - "caller"
  - "defined"
  - "depending"
  - "header"
  - "implemented"
  - "includes"
  - "modules"
  - "numbers"
  - "occurs"
  - "realized"
  - "receiver"
  - "receives"
  - "request"
  - "returns"
  - "starts"
  - "store"
  - "synchronization"
  - "transmission"
  - "where"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "performs"
  - "polling"
  - "reading"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Disabled"
  - "ENUMERATION"
  - "Enabled"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Proprietary"
  - "True"
  - "Variant"
  - "VariantPreCompile"
  - "general"
  - "least"
  - "multicore"
  - "one"
  - "parameters"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Info"
  - "Init"
  - "InstanceId"
  - "Proprietary"
  - "Provide"
  - "Specifies"
  - "When"
  - "each"
  - "getting"
  - "holds"
  - "one"
  - "option"
  - "parameters"
  - "present"
  - "related"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "CPU"
  - "Confidential"
  - "Controller"
  - "Flagchip"
  - "Instance"
  - "MCU"
  - "Maps"
  - "Proprietary"
  - "RANGE"
  - "REFERENCE"
  - "Reference"
  - "SENT0"
  - "Specifies"
  - "access"
  - "added"
  - "chip"
  - "continue"
  - "gaps"
  - "give"
  - "given"
  - "interfaces"
  - "limit"
  - "mapped"
  - "multiple"
  - "one"
  - "partitions"
  - "plugin"
  - "provides"
  - "starts"
  - "subset"
  - "unique"
  - "where"
  - "without"
  - "zero"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Frequency"
  - "High"
  - "Prescaller"
  - "Proprietary"
  - "Stamp"
  - "Support"
  - "Time"
  - "Watermark"
  - "When"
  - "above"
  - "asserts"
  - "control"
  - "debug"
  - "enable"
  - "enabled"
  - "field"
  - "fifo"
  - "formula"
  - "interrupt"
  - "least"
  - "overflow"
  - "register"
  - "request"
  - "running"
  - "software"
  - "stop"
  - "such"
  - "under"
  - "watermark"
  - "work"
  - "written"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Activation"
  - "Auto"
  - "Clear"
  - "Confidential"
  - "Controller"
  - "Deactivation"
  - "Debug"
  - "Defines"
  - "Flag"
  - "Flagchip"
  - "MAP"
  - "Proprietary"
  - "Ready"
  - "When"
  - "channels"
  - "continue"
  - "crc"
  - "enabled"
  - "equivalent"
  - "gaps"
  - "given"
  - "overflow"
  - "parameters"
  - "particular"
  - "prevent"
  - "provides"
  - "read"
  - "ready"
  - "register"
  - "starts"
  - "timestamp"
  - "unique"
  - "without"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Activation"
  - "Confidential"
  - "Controller"
  - "Deactivation"
  - "Defines"
  - "Flagchip"
  - "Proprietary"
  - "RANGE"
  - "Specifies"
  - "chip"
  - "disable"
  - "eanbled"
  - "equivalent"
  - "interfaces"
  - "node"
  - "one"
  - "particular"
  - "unused"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Add"
  - "Confidential"
  - "Data"
  - "Flagchip"
  - "Proprietary"
  - "augmentation"
  - "change"
  - "check"
  - "crc"
  - "enabled"
  - "includes"
  - "into"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Add"
  - "Append"
  - "Confidential"
  - "Flagchip"
  - "Include"
  - "Pause"
  - "Proprietary"
  - "added"
  - "appended"
  - "augmentation"
  - "enabled"
  - "end"
  - "frame"
  - "into"
  - "pause"
  - "selected"
  - "whether"
  - "zero"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "Count"
  - "Data"
  - "Digital"
  - "FLOAT"
  - "Filter"
  - "Flagchip"
  - "Max"
  - "Min"
  - "Nibbles"
  - "Number"
  - "Proprietary"
  - "Reselect"
  - "Specifies"
  - "Tick"
  - "change"
  - "cycles"
  - "digital"
  - "filt_cnt"
  - "filter"
  - "frequency"
  - "function_clk"
  - "input"
  - "keep"
  - "stable"
  - "supported"
  - "through"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Confidential"
  - "Data"
  - "FLOAT"
  - "Flagchip"
  - "High"
  - "J2716"
  - "Latency"
  - "Low"
  - "Max"
  - "Preferred"
  - "Proprietary"
  - "RANGE"
  - "Refer"
  - "Scaler"
  - "Select"
  - "Specification"
  - "Successive"
  - "Tick"
  - "definition"
  - "detail"
  - "divide"
  - "option"
  - "per"
  - "protocol"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Idle"
  - "Proprietary"
  - "RANGE"
  - "call"
  - "determines"
  - "enabled"
  - "field"
  - "interval"
  - "occur"
  - "occurred"
  - "time"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "RANGE"
  - "Read"
  - "call"
  - "enabled"
  - "occur"
  - "occurred"
  - "polling"
  - "read"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Defines"
  - "Flagchip"
  - "Proprietary"
  - "Support"
  - "diagnosis"
  - "parameters"
  - "width"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "Confidential"
  - "Delay"
  - "Flagchip"
  - "IDENTIFIABLE"
  - "Proprietary"
  - "RANGE"
  - "Select"
  - "Tick"
  - "about"
  - "aggregated"
  - "base"
  - "between"
  - "delay"
  - "finally"
  - "modules"
  - "published"
  - "temp"
  - "trigger"
  - "versions"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "appropriate"
  - "numbering"
  - "specification"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "List"
  - "Proprietary"
  - "according"
  - "dedicated"
  - "level"
  - "list"
  - "numbering"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Port"
  - "Proprietary"
  - "configurations"
  - "enable"
  - "files"
  - "general"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

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

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41`
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
- `physical_pages`: `2,3,7,8,9,10,11,12,14,15,16,17,18,20,21,22,25,33`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0014-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0020-001", "TBL-0021-001", "TBL-0022-001", "TBL-0025-001", "TBL-0033-001"]
- `message`: "18 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,6,12,14`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0006-001", "FIG-0012-001", "FIG-0014-001"]
- `message`: "5 generated visual anchors have no formal source figure number."
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
- `pdf_page_count`: `41`
- `indexed_physical_pages_count`: `41`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `115`
- `table_index_count`: `18`
- `figure_index_count`: `63`
- `symbol_index_count`: `146`
- `alias_index_count`: `7`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `9214d822f47e57119e69a56779ac9b9ec2a40b829e669dc2bbc2d8da384c9970`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `348`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->