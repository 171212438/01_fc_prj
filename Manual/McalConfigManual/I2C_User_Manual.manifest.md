---
manifest_schema_version: "1.1"
source_pdf: "I2C_User_Manual.pdf"
source_pdf_sha256: "835fee225f76b8e229023deeb8425d1ffc4242c38fe1ba1bcc6bfe8f6349d62b"
source_pdf_size_bytes: 1986262
pdf_page_count: 45
generated_at: "2026-06-19T13:04:01Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.7.0"
source_document_id: null
source_document_revision: "Rev.0.4"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: I2C_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `I2C_User_Manual.pdf`
- `source_pdf_sha256`: `835fee225f76b8e229023deeb8425d1ffc4242c38fe1ba1bcc6bfe8f6349d62b`
- `source_pdf_size_bytes`: `1986262`
- `pdf_page_count`: `45`
- `source_document_id`: `null`
- `source_document_revision`: `Rev.0.4`
- `visible_cover_title`: `FC7xxx I2C User Manual`
- `visible_cover_revision`: `Rev.0.4`
- `revision_history_latest_row`: `0.4 / 2023/11/22 / Updated for MCAL V0.4.0`
- `generated_at`: `2026-06-19T13:04:01Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.7.0`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `46`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL I2C module - User Manual"
- `module_scope`: "I2C driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 I2C Introduction", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 4 Configuration Guides"]
- `key_terms`: ["I2C", "Inter-Integrated Circuit / I2C Complex Device Driver", "vendor-specific AUTOSAR Complex Device Driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "I2c", "CDD_I2c", "FCIIC", "FCI2C", "IIC"]
- `summary`: "This 45-page user manual indexes I2C content across source physical pages 1-45, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["I2C", "FC7xxx", "Rev"]
- `anchor`: "FC7xxx I2C User Manual"

### SEC-0002-REVISION-HISTORY
- `source_number`: `None`
- `title`: "Revision History"
- `path`: "Revision History"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["I2C", "MCAL", "FC7xxx", "Date"]
- `anchor`: "Revision History"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `4`
- `printed_page_start`: `3`
- `printed_page_end`: `4`
- `keywords`: ["I2C", "CDD_I2c", "FC7xxx", "CDD_I2c_Types", "I2c_version", "CDD_I2c_Cfg", "I2c_ConfigType", "I2c_InitChannelConfigType"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "I2C Introduction"
- `path`: "Chapter 1 I2C Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["I2C", "FCI2C", "I2c", "AUTOSAR", "FC7xxx", "CDD", "data", "DMA"]
- `anchor`: "Chapter 1 I2C Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirement Tracing"
- `path`: "Chapter 1 I2C Introduction / 1.1 Requirement Tracing"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["I2C", "FCI2C", "I2c", "AUTOSAR", "FC7xxx", "CDD", "data", "DMA"]
- `anchor`: "1.1"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 I2C Introduction / 1.2 Hardware Summary"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["I2C", "FCI2C", "I2c", "AUTOSAR", "FC7xxx", "CDD", "data", "DMA"]
- `anchor`: "1.2"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `24`
- `printed_page_start`: `6`
- `printed_page_end`: `24`
- `keywords`: ["IIC", "define", "I2C", "u8I2cIdx", "void", "Diagram", "u8Channel", "Std_ReturnType"]
- `anchor`: "Chapter 2 Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Rejected Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Rejected Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["I2C", "CDD_I2c", "define", "called", "wrong", "FC7xxx", "I2C_E_PARAM_JOB", "I2C_E_PARAM_SEQUENCE"]
- `anchor`: "2.1"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["I2C", "CDD_I2c", "define", "called", "wrong", "FC7xxx", "I2C_E_PARAM_JOB", "I2C_E_PARAM_SEQUENCE"]
- `anchor`: "2.2"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Macros"
- `path`: "Chapter 2 Software Design / 2.3 Macros"
- `physical_page_start`: `6`
- `physical_page_end`: `10`
- `printed_page_start`: `6`
- `printed_page_end`: `10`
- `keywords`: ["define", "I2C", "IIC", "CDD_I2c", "called", "FC7xxx", "wrong", "STD_ON"]
- `anchor`: "2.3"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in CDD_I2c.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `physical_page_start`: `6`
- `physical_page_end`: `7`
- `printed_page_start`: `6`
- `printed_page_end`: `7`
- `keywords`: ["I2C", "CDD_I2c", "define", "called", "wrong", "FC7xxx", "Error", "reported"]
- `anchor`: "2.3.1"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in I2c_version.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in I2c_version.h"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["I2C", "define", "FC7xxx", "I2c_AsyncTransmit", "I2C_GETSTATUS_ID", "I2c_GetStatus", "I2C_STARTLISTENING_ID", "I2c_StartListening"]
- `anchor`: "2.3.2"

### SEC-002-003-003
- `source_number`: `2.3.3`
- `title`: "Macros in CDD_I2c_Cfg.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.3 Macros in CDD_I2c_Cfg.h"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["I2C", "define", "FC7xxx", "I2c_AsyncTransmit", "I2C_GETSTATUS_ID", "I2c_GetStatus", "I2C_STARTLISTENING_ID", "I2c_StartListening"]
- `anchor`: "2.3.3"

### SEC-002-003-004
- `source_number`: `2.3.4`
- `title`: "Macros in CDD_I2c_Types.h"
- `path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["I2C", "define", "IIC", "STD_ON", "Master", "FC7xxx", "I2C_CFG_SW_MAJOR_VERSION", "I2C_CFG_SW_MINOR_VERSION"]
- `anchor`: "2.3.4"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enums"
- `path`: "Chapter 2 Software Design / 2.4 Enums"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "2.4"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Enums in CDD_I2c_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "2.4.1"

### SEC-002-002-006-001
- `source_number`: `2.2.6.1`
- `title`: "Enums in CDD_I2c_Types.h"
- `path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "2.2.6.1"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Structures"
- `path`: "Chapter 2 Software Design / 2.6 Structures"
- `physical_page_start`: `11`
- `physical_page_end`: `14`
- `printed_page_start`: `11`
- `printed_page_end`: `14`
- `keywords`: ["I2C", "IIC", "FCIIC", "I2c", "offset", "Master", "Slave", "channel"]
- `anchor`: "2.6"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "I2c_ConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.1 I2c_ConfigType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "2.6.1"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "I2c_InitChannelConfigType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.2 I2c_InitChannelConfigType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "2.6.2"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "FCIIC_InitType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 FCIIC_InitType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["IIC", "I2C", "I2c", "Master", "FCIIC_InitType", "FCIIC_RegCfgType", "bMasterMode", "MDER"]
- `anchor`: "2.6.3"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "FCIIC_RegCfgType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.4 FCIIC_RegCfgType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["IIC", "I2C", "I2c", "Master", "FCIIC_InitType", "FCIIC_RegCfgType", "bMasterMode", "MDER"]
- `anchor`: "2.6.4"

### SEC-002-006-005
- `source_number`: `2.6.5`
- `title`: "I2c_RequestType"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 I2c_RequestType"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["I2C", "IIC", "FCIIC", "Master", "offset", "DMA", "I2c_RequestType", "FCIIC_Type"]
- `anchor`: "2.6.5"

### SEC-002-006-006
- `source_number`: `2.6.6`
- `title`: "FCIIC_Type"
- `path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 FCIIC_Type"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["I2C", "IIC", "FCIIC", "offset", "Master", "Slave", "Reserved", "bits"]
- `anchor`: "2.6.6"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Functions"
- `path`: "Chapter 2 Software Design / 2.7 API Functions"
- `physical_page_start`: `15`
- `physical_page_end`: `17`
- `printed_page_start`: `15`
- `printed_page_end`: `17`
- `keywords`: ["void", "IIC", "I2C", "CDD_I2c", "I2c", "Diagram", "Returns", "u8Channel"]
- `anchor`: "2.7"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Functions in CDD_I2c.h"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h"
- `physical_page_start`: `15`
- `physical_page_end`: `17`
- `printed_page_start`: `15`
- `printed_page_end`: `17`
- `keywords`: ["void", "IIC", "I2C", "CDD_I2c", "I2c", "Diagram", "Returns", "u8Channel"]
- `anchor`: "2.7.1"

### SEC-002-002-006-001-02
- `source_number`: `2.2.6.1`
- `title`: "void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["IIC", "I2C", "CDD_I2c", "I2c", "void", "pI2cCfg", "Slave", "offset"]
- `anchor`: "2.2.6.1"

### SEC-002-002-006-002
- `source_number`: `2.2.6.2`
- `title`: "void I2c_DeInit (void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.2 void I2c_DeInit (void)"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["IIC", "I2C", "CDD_I2c", "I2c", "void", "pI2cCfg", "Slave", "offset"]
- `anchor`: "2.2.6.2"

### SEC-002-002-006-003
- `source_number`: `2.2.6.3`
- `title`: "I2c_ChannelStatusType I2c _GetStatus(uint8 u8Channel)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.3 I2c_ChannelStatusType I2c _GetStatus(uint8 u8Channel)"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["IIC", "I2C", "CDD_I2c", "I2c", "void", "pI2cCfg", "Slave", "offset"]
- `anchor`: "2.2.6.3"

### SEC-002-002-006-004
- `source_number`: `2.2.6.4`
- `title`: "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const"]
- `anchor`: "2.2.6.4"

### SEC-002-002-006-005
- `source_number`: `2.2.6.5`
- `title`: "Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.5 Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const"]
- `anchor`: "2.2.6.5"

### SEC-002-002-006-006
- `source_number`: `2.2.6.6`
- `title`: "Std_ReturnType I2c_AsyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.6 Std_ReturnType I2c_AsyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const"]
- `anchor`: "2.2.6.6"

### SEC-002-002-006-007
- `source_number`: `2.2.6.7`
- `title`: "Std_ReturnType I2c_StartListening(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.7 Std_ReturnType I2c_StartListening(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const"]
- `anchor`: "2.2.6.7"

### SEC-002-002-006-008
- `source_number`: `2.2.6.8`
- `title`: "void FCI2C_0_ISR(void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.8 void FCI2C_0_ISR(void)"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const"]
- `anchor`: "2.2.6.8"

### SEC-002-002-006-009
- `source_number`: `2.2.6.9`
- `title`: "void FCI2C_1_ISR(void)"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.9 void FCI2C_1_ISR(void)"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1"]
- `anchor`: "2.2.6.9"

### SEC-002-002-006-010
- `source_number`: `2.2.6.10`
- `title`: "void FCIIC0_DMATxIsr(void);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.10 void FCIIC0_DMATxIsr(void);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1"]
- `anchor`: "2.2.6.10"

### SEC-002-002-006-011
- `source_number`: `2.2.6.11`
- `title`: "void FCIIC0_DMARxIsr(void);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.11 void FCIIC0_DMARxIsr(void);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1"]
- `anchor`: "2.2.6.11"

### SEC-002-002-006-012
- `source_number`: `2.2.6.12`
- `title`: "void FCIIC1_DMATxIsr(void);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.12 void FCIIC1_DMATxIsr(void);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1"]
- `anchor`: "2.2.6.12"

### SEC-002-002-006-013
- `source_number`: `2.2.6.13`
- `title`: "void FCIIC1_DMARxIsr(void);"
- `path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.13 void FCIIC1_DMARxIsr(void);"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1"]
- `anchor`: "2.2.6.13"

### SEC-002-008
- `source_number`: `2.8`
- `title`: "Hardware Functions"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions"
- `physical_page_start`: `18`
- `physical_page_end`: `20`
- `printed_page_start`: `18`
- `printed_page_end`: `20`
- `keywords`: ["IIC", "u8I2cIdx", "I2C", "Std_ReturnType", "u8Channel", "pRequest", "const", "I2c_RequestType"]
- `anchor`: "2.8"

### SEC-002-008-001
- `source_number`: `2.8.1`
- `title`: "Functions in CDD_I2c_Hw.h"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h"
- `physical_page_start`: `18`
- `physical_page_end`: `20`
- `printed_page_start`: `18`
- `printed_page_end`: `20`
- `keywords`: ["IIC", "u8I2cIdx", "I2C", "Std_ReturnType", "u8Channel", "pRequest", "const", "I2c_RequestType"]
- `anchor`: "2.8.1"

### SEC-002-002-006-001-03
- `source_number`: `2.2.6.1`
- `title`: "Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId", "FCIIC_RegCfgType", "pInitReg", "E_OK"]
- `anchor`: "2.2.6.1"

### SEC-002-002-006-002-02
- `source_number`: `2.2.6.2`
- `title`: "Std_ReturnType FCIIC_DeInit_Master(uint8 u8I2cIdx)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.2 Std_ReturnType FCIIC_DeInit_Master(uint8 u8I2cIdx)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId", "FCIIC_RegCfgType", "pInitReg", "E_OK"]
- `anchor`: "2.2.6.2"

### SEC-002-002-006-003-02
- `source_number`: `2.2.6.3`
- `title`: "Std_ReturnType FCIIC_Init_Slave(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.3 Std_ReturnType FCIIC_Init_Slave(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId", "FCIIC_RegCfgType", "pInitReg", "E_OK"]
- `anchor`: "2.2.6.3"

### SEC-002-002-006-004-02
- `source_number`: `2.2.6.4`
- `title`: "Std_ReturnType FCIIC_DeInit_Slave(uint8 u8I2cIdx)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.4 Std_ReturnType FCIIC_DeInit_Slave(uint8 u8I2cIdx)"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId", "FCIIC_RegCfgType", "pInitReg", "E_OK"]
- `anchor`: "2.2.6.4"

### SEC-002-002-006-005-02
- `source_number`: `2.2.6.5`
- `title`: "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest", "Std_ReturnType", "I2c_RequestType", "const"]
- `anchor`: "2.2.6.5"

### SEC-002-002-006-006-02
- `source_number`: `2.2.6.6`
- `title`: "Std_ReturnType FCIIC_MasterSyncReceive(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.6 Std_ReturnType FCIIC_MasterSyncReceive(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest", "Std_ReturnType", "I2c_RequestType", "const"]
- `anchor`: "2.2.6.6"

### SEC-002-002-006-007-02
- `source_number`: `2.2.6.7`
- `title`: "Std_ReturnType FCIIC_MasterAsyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.7 Std_ReturnType FCIIC_MasterAsyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest", "Std_ReturnType", "I2c_RequestType", "const"]
- `anchor`: "2.2.6.7"

### SEC-002-002-006-008-02
- `source_number`: `2.2.6.8`
- `title`: "Std_ReturnType FCIIC_MasterAsyncReceive(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.8 Std_ReturnType FCIIC_MasterAsyncReceive(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest", "Std_ReturnType", "I2c_RequestType", "const"]
- `anchor`: "2.2.6.8"

### SEC-002-002-006-009-02
- `source_number`: `2.2.6.9`
- `title`: "Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel", "index", "pRequest", "Returns"]
- `anchor`: "2.2.6.9"

### SEC-002-002-006-010-02
- `source_number`: `2.2.6.10`
- `title`: "I2c_ChannelStatusType FCIIC_GetChannelStatus(uint8 u8I2cIdx)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.10 I2c_ChannelStatusType FCIIC_GetChannelStatus(uint8 u8I2cIdx)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel", "index", "pRequest", "Returns"]
- `anchor`: "2.2.6.10"

### SEC-002-002-006-011-02
- `source_number`: `2.2.6.11`
- `title`: "void FCIIC_LL_IRQnHandler(uint8 u8I2cIdx)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.11 void FCIIC_LL_IRQnHandler(uint8 u8I2cIdx)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel", "index", "pRequest", "Returns"]
- `anchor`: "2.2.6.11"

### SEC-002-002-006-012-02
- `source_number`: `2.2.6.12`
- `title`: "void FCIIC_LL_DMA_IRQnHandler(uint8 u8I2cIdx)"
- `path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.12 void FCIIC_LL_DMA_IRQnHandler(uint8 u8I2cIdx)"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel", "index", "pRequest", "Returns"]
- `anchor`: "2.2.6.12"

### SEC-002-009
- `source_number`: `2.9`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram"
- `physical_page_start`: `21`
- `physical_page_end`: `24`
- `printed_page_start`: `21`
- `printed_page_end`: `24`
- `keywords`: ["I2C", "IIC", "FC7xxx", "u8I2cIdx", "DMA_Callback", "ECU", "EcuM", "DeInit"]
- `anchor`: "2.9"

### SEC-002-009-001
- `source_number`: `2.9.1`
- `title`: "Initialization of the I2C Driver"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the I2C Driver"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["I2C", "IIC", "FC7xxx", "u8I2cIdx", "DMA_Callback", "ECU", "EcuM", "DeInit"]
- `anchor`: "2.9.1"

### SEC-002-009-002
- `source_number`: `2.9.2`
- `title`: "Modes transitions"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.2 Modes transitions"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["I2C", "IIC", "FC7xxx", "u8I2cIdx", "DMA_Callback", "ECU", "EcuM", "DeInit"]
- `anchor`: "2.9.2"

### SEC-002-009-003
- `source_number`: `2.9.3`
- `title`: "SyncTransmit"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 SyncTransmit"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["I2C", "FC7xxx", "SyncTransmit"]
- `anchor`: "2.9.3"

### SEC-002-009-004
- `source_number`: `2.9.4`
- `title`: "AsyncTransmit"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 AsyncTransmit"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["I2C", "FC7xxx", "AsyncTransmit"]
- `anchor`: "2.9.4"

### SEC-002-009-005
- `source_number`: `2.9.5`
- `title`: "StartListening"
- `path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 StartListening"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["I2C", "FC7xxx", "StartListening"]
- `anchor`: "2.9.5"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `25`
- `physical_page_end`: `41`
- `printed_page_start`: `25`
- `printed_page_end`: `41`
- `keywords`: ["Screenshot", "Properties", "Property", "Origin", "I2c", "I2C", "INTEGER", "Configures"]
- `anchor`: "Chapter 3 Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["I2C", "FC7xxx", "Tresos", "Inclusion", "Relation", "contain", "inclusion", "relation"]
- `anchor`: "3.1"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `26`
- `physical_page_end`: `41`
- `printed_page_start`: `26`
- `printed_page_end`: `41`
- `keywords`: ["Screenshot", "Properties", "Property", "Origin", "I2c", "I2C", "INTEGER", "Configures"]
- `anchor`: "3.2"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `26`
- `physical_page_end`: `26`
- `printed_page_start`: `26`
- `printed_page_end`: `26`
- `keywords`: ["I2C", "I2c", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GeneralConfiguration", "FC7xxx", "ENUMERATION", "VariantPreCompile"]
- `anchor`: "3.2.1"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "GeneralConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration"
- `physical_page_start`: `26`
- `physical_page_end`: `28`
- `printed_page_start`: `26`
- `printed_page_end`: `28`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Default", "Origin", "OFF"]
- `anchor`: "3.2.2"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "I2cDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "3.2.2.1"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "I2cMulticoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.2 I2cMulticoreSupport"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "3.2.2.2"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "I2cTimeoutDuration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.3 I2cTimeoutDuration"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "3.2.2.3"

### SEC-003-002-002-004
- `source_number`: `3.2.2.4`
- `title`: "I2cVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.4 I2cVersionInfoApi"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "3.2.2.4"

### SEC-003-002-002-005
- `source_number`: `3.2.2.5`
- `title`: "I2cDmaUsed"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.5 I2cDmaUsed"
- `physical_page_start`: `27`
- `physical_page_end`: `27`
- `printed_page_start`: `27`
- `printed_page_end`: `27`
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "3.2.2.5"

### SEC-003-002-002-006
- `source_number`: `3.2.2.6`
- `title`: "I2cErrorNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "3.2.2.6"

### SEC-003-002-002-007
- `source_number`: `3.2.2.7`
- `title`: "I2cMasterTransmitCompleteNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.7 I2cMasterTransmitCompleteNotification"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "3.2.2.7"

### SEC-003-002-002-008
- `source_number`: `3.2.2.8`
- `title`: "I2cMasterReceiveCompleteNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.8 I2cMasterReceiveCompleteNotification"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "3.2.2.8"

### SEC-003-002-002-009
- `source_number`: `3.2.2.9`
- `title`: "I2cSlaveAddressMatchNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.9 I2cSlaveAddressMatchNotification"
- `physical_page_start`: `28`
- `physical_page_end`: `28`
- `printed_page_start`: `28`
- `printed_page_end`: `28`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "3.2.2.9"

### SEC-003-002-002-010
- `source_number`: `3.2.2.10`
- `title`: "I2cSlaveTransmitCompleteNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "3.2.2.10"

### SEC-003-002-002-011
- `source_number`: `3.2.2.11`
- `title`: "I2cSlaveReceiveCompleteNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.11 I2cSlaveReceiveCompleteNotification"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "3.2.2.11"

### SEC-003-002-002-012
- `source_number`: `3.2.2.12`
- `title`: "I2cSlaveByteReceiveNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.12 I2cSlaveByteReceiveNotification"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "3.2.2.12"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "I2cEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.3 I2cEcucPartitionRef"
- `physical_page_start`: `29`
- `physical_page_end`: `29`
- `printed_page_start`: `29`
- `printed_page_end`: `29`
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "3.2.3"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "I2cChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "3.2.4"

### SEC-003-002-006-001
- `source_number`: `3.2.6.1`
- `title`: "I2cChannelId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002
- `source_number`: `3.2.6.2`
- `title`: "I2cHwChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.2 I2cHwChannel"
- `physical_page_start`: `30`
- `physical_page_end`: `30`
- `printed_page_start`: `30`
- `printed_page_end`: `30`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003
- `source_number`: `3.2.6.3`
- `title`: "I2cMasterSlaveConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004
- `source_number`: `3.2.6.4`
- `title`: "I2cPinConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.4 I2cPinConfiguration"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005
- `source_number`: `3.2.6.5`
- `title`: "I2cCtrlEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.5 I2cCtrlEcucPartitionRef"
- `physical_page_start`: `31`
- `physical_page_end`: `31`
- `printed_page_start`: `31`
- `printed_page_end`: `31`
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "3.2.6.5"

### SEC-003-002-005
- `source_number`: `3.2.5`
- `title`: "I2cMasterConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration"
- `physical_page_start`: `31`
- `physical_page_end`: `35`
- `printed_page_start`: `31`
- `printed_page_end`: `35`
- `keywords`: ["I2c", "I2C", "FCI2C", "Screenshot", "Properties", "Property", "Origin", "Configures"]
- `anchor`: "3.2.5"

### SEC-003-002-005-001
- `source_number`: `3.2.5.1`
- `title`: "I2cMasterEnabledInDebug"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "3.2.5.1"

### SEC-003-002-005-002
- `source_number`: `3.2.5.2`
- `title`: "I2cClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.2 I2cClockRef"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "3.2.5.2"

### SEC-003-002-005-003
- `source_number`: `3.2.5.3`
- `title`: "I2cAsyncMode"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.3 I2cAsyncMode"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "3.2.5.3"

### SEC-003-002-005-004
- `source_number`: `3.2.5.4`
- `title`: "I2cTxDmaChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.4 I2cTxDmaChannel"
- `physical_page_start`: `32`
- `physical_page_end`: `32`
- `printed_page_start`: `32`
- `printed_page_end`: `32`
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "3.2.5.4"

### SEC-003-002-005-005
- `source_number`: `3.2.5.5`
- `title`: "I2cRxDmaChannel"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel", "FILTSDA", "REF", "ASPathDataOfSchema"]
- `anchor`: "3.2.5.5"

### SEC-003-002-005-006
- `source_number`: `3.2.5.6`
- `title`: "I2cPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.6 I2cPrescaler"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel", "FILTSDA", "REF", "ASPathDataOfSchema"]
- `anchor`: "3.2.5.6"

### SEC-003-002-005-007
- `source_number`: `3.2.5.7`
- `title`: "I2cGlitchFilterSDA"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.7 I2cGlitchFilterSDA"
- `physical_page_start`: `33`
- `physical_page_end`: `33`
- `printed_page_start`: `33`
- `printed_page_end`: `33`
- `keywords`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel", "FILTSDA", "REF", "ASPathDataOfSchema"]
- `anchor`: "3.2.5.7"

### SEC-003-002-005-008
- `source_number`: `3.2.5.8`
- `title`: "I2cGlitchFilterSCL"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "3.2.5.8"

### SEC-003-002-005-009
- `source_number`: `3.2.5.9`
- `title`: "I2cBusIdleTimeout"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.9 I2cBusIdleTimeout"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "3.2.5.9"

### SEC-003-002-005-010
- `source_number`: `3.2.5.10`
- `title`: "I2cPinLowTimeout"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.10 I2cPinLowTimeout"
- `physical_page_start`: `34`
- `physical_page_end`: `34`
- `printed_page_start`: `34`
- `printed_page_end`: `34`
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "3.2.5.10"

### SEC-003-002-005-011
- `source_number`: `3.2.5.11`
- `title`: "I2cDataValidDelay"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "3.2.5.11"

### SEC-003-002-005-012
- `source_number`: `3.2.5.12`
- `title`: "I2cSetupHoldDelay"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.12 I2cSetupHoldDelay"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "3.2.5.12"

### SEC-003-002-005-013
- `source_number`: `3.2.5.13`
- `title`: "I2cClockHighPeriod"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.13 I2cClockHighPeriod"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "3.2.5.13"

### SEC-003-002-005-014
- `source_number`: `3.2.5.14`
- `title`: "I2cClockLowPeriod"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.14 I2cClockLowPeriod"
- `physical_page_start`: `35`
- `physical_page_end`: `35`
- `printed_page_start`: `35`
- `printed_page_end`: `35`
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "3.2.5.14"

### SEC-003-002-005-015
- `source_number`: `3.2.5.15`
- `title`: "I2cBaudRate"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "3.2.5.15"

### SEC-003-002-006
- `source_number`: `3.2.6`
- `title`: "I2cSlaveConfiguration"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration"
- `physical_page_start`: `36`
- `physical_page_end`: `38`
- `printed_page_start`: `36`
- `printed_page_end`: `38`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "SCL", "stretching"]
- `anchor`: "3.2.6"

### SEC-003-002-006-001-02
- `source_number`: `3.2.6.1`
- `title`: "I2cSlaveAddress"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.1 I2cSlaveAddress"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "3.2.6.1"

### SEC-003-002-006-002-02
- `source_number`: `3.2.6.2`
- `title`: "I2cSlaveFilterEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.2 I2cSlaveFilterEnable"
- `physical_page_start`: `36`
- `physical_page_end`: `36`
- `printed_page_start`: `36`
- `printed_page_end`: `36`
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "3.2.6.2"

### SEC-003-002-006-003-02
- `source_number`: `3.2.6.3`
- `title`: "I2cSlaveAckStall"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.3 I2cSlaveAckStall"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["I2C", "I2cSlaveAckStall", "BOOLEAN", "stretching", "FCI2C_SCFGR1", "SCL", "Origin", "Default"]
- `anchor`: "3.2.6.3"

### SEC-003-002-006-004-02
- `source_number`: `3.2.6.4`
- `title`: "I2cSlaveTxStall"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.4 I2cSlaveTxStall"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["I2C", "I2cSlaveAckStall", "BOOLEAN", "stretching", "FCI2C_SCFGR1", "SCL", "Origin", "Default"]
- `anchor`: "3.2.6.4"

### SEC-003-002-006-005-02
- `source_number`: `3.2.6.5`
- `title`: "I2cSlaveRxStall"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.5 I2cSlaveRxStall"
- `physical_page_start`: `37`
- `physical_page_end`: `37`
- `printed_page_start`: `37`
- `printed_page_end`: `37`
- `keywords`: ["I2C", "I2cSlaveAckStall", "BOOLEAN", "stretching", "FCI2C_SCFGR1", "SCL", "Origin", "Default"]
- `anchor`: "3.2.6.5"

### SEC-003-002-006-006
- `source_number`: `3.2.6.6`
- `title`: "I2cSlaveAdrStall"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "3.2.6.6"

### SEC-003-002-006-007
- `source_number`: `3.2.6.7`
- `title`: "I2cGlitchFilterSDA"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.7 I2cGlitchFilterSDA"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "3.2.6.7"

### SEC-003-002-006-008
- `source_number`: `3.2.6.8`
- `title`: "I2cGlitchFilterSCL"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.8 I2cGlitchFilterSCL"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "3.2.6.8"

### SEC-003-002-006-009
- `source_number`: `3.2.6.9`
- `title`: "I2cDataValidDelay"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.9 I2cDataValidDelay"
- `physical_page_start`: `38`
- `physical_page_end`: `38`
- `printed_page_start`: `38`
- `printed_page_end`: `38`
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "3.2.6.9"

### SEC-003-002-006-010
- `source_number`: `3.2.6.10`
- `title`: "I2cClockHoldPeriod"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave"]
- `anchor`: "3.2.6.10"

### SEC-003-002-007
- `source_number`: `3.2.7`
- `title`: "CommonPublishedInformation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation"
- `physical_page_start`: `39`
- `physical_page_end`: `41`
- `printed_page_start`: `39`
- `printed_page_end`: `41`
- `keywords`: ["I2C", "I2c", "INTEGER", "Screenshot", "Properties", "Property", "Origin", "vendor"]
- `anchor`: "3.2.7"

### SEC-003-002-007-001
- `source_number`: `3.2.7.1`
- `title`: "ArReleaseMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.1 ArReleaseMajorVersion"
- `physical_page_start`: `39`
- `physical_page_end`: `39`
- `printed_page_start`: `39`
- `printed_page_end`: `39`
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave"]
- `anchor`: "3.2.7.1"

### SEC-003-002-007-002
- `source_number`: `3.2.7.2`
- `title`: "ArReleaseMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "3.2.7.2"

### SEC-003-002-007-003
- `source_number`: `3.2.7.3`
- `title`: "ArReleaseRevisionVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.3 ArReleaseRevisionVersion"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "3.2.7.3"

### SEC-003-002-007-004
- `source_number`: `3.2.7.4`
- `title`: "SwMajorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.4 SwMajorVersion"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "3.2.7.4"

### SEC-003-002-007-005
- `source_number`: `3.2.7.5`
- `title`: "SwMinorVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.5 SwMinorVersion"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "3.2.7.5"

### SEC-003-002-007-006
- `source_number`: `3.2.7.6`
- `title`: "SwPatchVersion"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.6 SwPatchVersion"
- `physical_page_start`: `40`
- `physical_page_end`: `40`
- `printed_page_start`: `40`
- `printed_page_end`: `40`
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "3.2.7.6"

### SEC-003-002-007-007
- `source_number`: `3.2.7.7`
- `title`: "ModuleId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["I2C", "INTEGER", "ModuleId", "VendorId", "FC7xxx", "Properties", "Property", "Origin"]
- `anchor`: "3.2.7.7"

### SEC-003-002-007-008
- `source_number`: `3.2.7.8`
- `title`: "VendorId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.8 VendorId"
- `physical_page_start`: `41`
- `physical_page_end`: `41`
- `printed_page_start`: `41`
- `printed_page_end`: `41`
- `keywords`: ["I2C", "INTEGER", "ModuleId", "VendorId", "FC7xxx", "Properties", "Property", "Origin"]
- `anchor`: "3.2.7.8"

### SEC-004
- `source_number`: `Chapter 4`
- `title`: "Configuration Guides"
- `path`: "Chapter 4 Configuration Guides"
- `physical_page_start`: `42`
- `physical_page_end`: `45`
- `printed_page_start`: `42`
- `printed_page_end`: `45`
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "you", "mode", "item", "needed"]
- `anchor`: "Chapter 4 Configuration Guides"

### SEC-004-001
- `source_number`: `4.1`
- `title`: "Configuration Item Constraint"
- `path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `physical_page_start`: `42`
- `physical_page_end`: `43`
- `printed_page_start`: `42`
- `printed_page_end`: `43`
- `keywords`: ["I2C", "I2c", "FC7xxx", "DMA", "needed", "you", "should", "NULL_PTR"]
- `anchor`: "4.1"

### SEC-004-002
- `source_number`: `4.2`
- `title`: "I2C Usage Common Steps"
- `path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `physical_page_start`: `44`
- `physical_page_end`: `45`
- `printed_page_start`: `44`
- `printed_page_end`: `45`
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "mode", "I2cChannel", "item", "select"]
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
- `content_types`: ["text", "revision_history", "toc", "table", "image"]
- `anchors`: ["Table of Contents", "Revision History ..................................................................................…", "Table of Contents .................................................................................…", "Chapter 1 I2C Introduction ........................................................................…"]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2", "Containers and Variables ..........................................................................…", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT .....................................................................…"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 I2C Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 1 I2C Introduction", "1.1", "Requirement Tracing", "I2c is a Complex Device Driver (CDD), so there are no AUTOSAR requirements regarding this module. I…"]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Chapter 2 Software Design", "2.1", "Rejected Requirements", "None"]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define I2C_E_UNINIT ((uint8)0x07U)", "API service used without module initialization.", "#define I2C_E_BUSY ((uint8)0x08U)", "API service used while the I2C Driver is busy."]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in I2c_version.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["API service ID for I2c_AsyncTransmit function.", "#define I2C_GETSTATUS_ID ((uint8)0x04U)", "API service ID for I2c_GetStatus function.", "#define I2C_STARTLISTENING_ID ((uint8)0x06U)"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define I2C_CFG_SW_MAJOR_VERSION 0", "#define I2C_CFG_SW_MINOR_VERSION 4", "#define I2C_CFG_SW_PATCH_VERSION 0", "#define I2C_PRECOMPILE_SUPPORT (STD_OFF)"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["#define I2C_E_MASTER_FIFO_ERROR ((uint8)0x02U)", "Master transmit or receive fifo full.", "#define I2C_E_MASTER_ARBITRATION_LOST ((uint8)0x03U)", "Master bus arbitration error."]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.4", "Enums", "2.4.1", "Enums in CDD_I2c_Types.h"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 FCIIC_InitType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Reference ECU partition.", "const FCIIC_InitType * tFCI2c_Config", "Incidates init mode.", "const FCIIC_RegCfgType * tFCI2c_reg"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 I2c_RequestType"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Slave Configuration 2.", "uint32 SAMR", "Slave Address Match", "uint8 u8TxDmaChannel."]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 FCIIC_Type"
- `content_types`: ["text"]
- `anchors`: ["Master Configuration 3, offset: 0x2C.", "uint8 RESERVED_1 [16]", "Reserved bits.", "__IO uint32 MDMR"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Reserved bits.", "__I uint32 SASR", "Slave Address Status, offset: 0x150.", "__IO uint32 STAR"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.2.6.4", "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)", "Function", "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.9 void FCI2C_1_ISR(void)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "N/A", "Parameters", "N/A"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.8", "Hardware Functions", "2.8.1", "Functions in CDD_I2c_Hw.h"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["2.2.6.5", "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pReques…", "Function", "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Diagram", "N/A", "Parameters", "Parameter"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the I2C Driver"
- `content_types`: ["text", "table", "image", "api", "figure"]
- `anchors`: ["Diagram", "N/A", "Parameters", "Parameter"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 SyncTransmit"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.3", "SyncTransmit"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 AsyncTransmit"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.4", "AsyncTransmit"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 StartListening"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["2.9.5", "StartListening"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 3 Tresos Configuration Items", "3.1", "Container Inclusion Relation", "The contain inclusion relation is shown as below:"]

### PAGE-0026
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2", "Containers and Variables", "3.2.1", "IMPLEMENTATION_CONFIG_VARIANT"]

### PAGE-0027
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect"
- `content_types`: ["text", "image"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0028
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `content_types`: ["text", "image"]
- `anchors`: ["Description", "Switches the I2c DMA function ON or OFF.", "Screenshot", "Properties"]

### PAGE-0029
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Type", "FUNCTION-NAME", "Origin", "Flagchip"]

### PAGE-0030
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Screenshot", "Properties", "Property", "Value"]

### PAGE-0031
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["3.2.6.3", "I2cMasterSlaveConfiguration", "Variable", "I2cMasterSlaveConfiguration"]

### PAGE-0032
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["3.2.5.1", "I2cMasterEnabledInDebug", "Container", "I2cMasterEnabledInDebug"]

### PAGE-0033
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["REF", "ASPathDataOfSchema:/AUTOSAR/TOP-LEVEL", "PACKAGES/I2c/ELEMENTS/I2c/I2cGlobalConfig/I2cChannel/I2cChannel", "_0/I2cMasterConfiguration/I2cTxDmaChannel"]

### PAGE-0034
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["The glitch filter cycle count is not affected by the PRESCALE configuration and is automatically by…", "in High Speed mode.", "Screenshot", "Properties"]

### PAGE-0035
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Origin", "Flagchip", "3.2.5.11", "I2cDataValidDelay"]

### PAGE-0036
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["This value is also used for the minimum bus free time between a STOP and a START condition", "Screenshot", "Properties", "Property"]

### PAGE-0037
- `physical_page`: `37`
- `printed_page`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.3 I2cSlaveAckStall"
- `content_types`: ["text", "api"]
- `anchors`: ["Type", "BOOLEAN", "Origin", "Flagchip"]

### PAGE-0038
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall"
- `content_types`: ["text", "image"]
- `anchors`: ["3.2.6.6", "I2cSlaveAdrStall", "Container", "I2cSlaveAdrStall"]

### PAGE-0039
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `content_types`: ["text", "image", "api", "config"]
- `anchors`: ["Description", "Data Valid Delay: Configures FCI2C_SCFGR2[DATAVD]", "Configures the SDA data valid delay time for the I2c slave equal to FILTSCL+DATAVD+3 cycles.", "This data valid delay must be configured to less than the minimum SCL low period."]

### PAGE-0040
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `anchors`: ["Origin", "Flagchip", "3.2.7.2", "ArReleaseMinorVersion"]

### PAGE-0041
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId"
- `content_types`: ["text", "image"]
- `anchors`: ["Properties", "Property", "Value", "Type"]

### PAGE-0042
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `anchors`: ["Chapter 4 Configuration Guides", "4.1", "Configuration Item Constraint", "1)"]

### PAGE-0043
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3)", "If i2c is needed to use for multicore, you should enable the item \"I2c Multicore Support\"."]

### PAGE-0044
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["4.2", "I2C Usage Common Steps", "Basically, the I2C module can be configured by following the below steps:", "1)"]

### PAGE-0045
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["3)", "If master mode and item \"I2c DMA Used\" are enabled, you can select DMA mode for item \"I2c Async Mod…", "select DMA channel which is set in the DMA module.", "4)"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: FC7xxx I2C User Manual"
- `keywords`: ["I2C", "FC7xxx", "Rev"]
- `anchors`:
  - `p1`: "no body anchor extracted"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Revision History"
- `content_types`: ["text", "revision_history", "table"]
- `summary`: "Revision History: FC7xxx I2C User Manual; Revision History; 0.1"
- `keywords`: ["I2C", "MCAL", "FC7xxx", "Date"]
- `anchors`:
  - `p2`: "Revision History"
  - `p2`: "Revision"
  - `p2`: "Date"
  - `p2`: "Changes"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "revision_history", "toc", "table", "image"]
- `summary`: "Table of Contents: FC7xxx I2C User Manual; Table of Contents; Revision History ................................................................................................................................................... 2"
- `keywords`: ["I2C", "CDD_I2c", "CDD_I2c_Types", "FC7xxx", "I2c_version", "CDD_I2c_Cfg", "I2c_ConfigType", "I2c_InitChannelConfigType", "FCIIC_InitType", "FCIIC_RegCfgType"]
- `anchors`:
  - `p3`: "Table of Contents"
  - `p3`: "Revision History ..........................................................................................................................…"
  - `p3`: "Table of Contents .........................................................................................................................…"
  - `p3`: "Chapter 1 I2C Introduction ................................................................................................................…"

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Table of Contents: FC7xxx I2C User Manual; 3.2; Containers and Variables .............................................................................................................................. 26"
- `keywords`: ["I2C", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "GeneralConfiguration", "I2cEcucPartitionRef", "I2cChannel", "I2cMasterConfiguration", "I2cSlaveConfiguration", "CommonPublishedInformation", "Guides"]
- `anchors`:
  - `p4`: "3.2"
  - `p4`: "Containers and Variables ..................................................................................................................…"
  - `p4`: "3.2.1"
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 26"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 I2C Introduction / 1.1 Requirement Tracing"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 1 I2C Introduction / 1.1 Requirement Tracing: FC7xxx I2C User Manual; Chapter 1 I2C Introduction; 1.1"
- `keywords`: ["I2C", "FCI2C", "I2c", "AUTOSAR", "FC7xxx", "CDD", "data", "DMA", "Autosar", "master"]
- `anchors`:
  - `p5`: "Chapter 1 I2C Introduction"
  - `p5`: "1.1"
  - `p5`: "Requirement Tracing"
  - `p5`: "I2c is a Complex Device Driver (CDD), so there are no AUTOSAR requirements regarding this module. It has vendor-specific"

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h: FC7xxx I2C User Manual; Chapter 2 Software Design; 2.1"
- `keywords`: ["I2C", "CDD_I2c", "define", "called", "wrong", "FC7xxx", "I2C_E_PARAM_JOB", "I2C_E_PARAM_SEQUENCE", "I2C_E_PARAM_LENGTH", "I2C_E_PARAM_UNIT"]
- `anchors`:
  - `p6`: "Chapter 2 Software Design"
  - `p6`: "2.1"
  - `p6`: "Rejected Requirements"
  - `p6`: "None"

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h: FC7xxx I2C User Manual; #define I2C_E_UNINIT ((uint8)0x07U); API service used without module initialization."
- `keywords`: ["I2C", "define", "Error", "reported", "FC7xxx", "I2C_E_UNINIT", "I2C_E_BUSY", "I2C_E_ALREADY_INITIALIZED", "I2C_Init", "I2C_E_INV_CTRL_IDX"]
- `anchors`:
  - `p7`: "#define I2C_E_UNINIT ((uint8)0x07U)"
  - `p7`: "API service used without module initialization."
  - `p7`: "#define I2C_E_BUSY ((uint8)0x08U)"
  - `p7`: "API service used while the I2C Driver is busy."

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in I2c_version.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in I2c_version.h: FC7xxx I2C User Manual; API service ID for I2c_AsyncTransmit function.; #define I2C_GETSTATUS_ID ((uint8)0x04U)"
- `keywords`: ["I2C", "define", "FC7xxx", "I2c_AsyncTransmit", "I2C_GETSTATUS_ID", "I2c_GetStatus", "I2C_STARTLISTENING_ID", "I2c_StartListening", "I2C_GETVERSIONINFO_ID", "I2c_GetVersionInfo"]
- `anchors`:
  - `p8`: "API service ID for I2c_AsyncTransmit function."
  - `p8`: "#define I2C_GETSTATUS_ID ((uint8)0x04U)"
  - `p8`: "API service ID for I2c_GetStatus function."
  - `p8`: "#define I2C_STARTLISTENING_ID ((uint8)0x06U)"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h: FC7xxx I2C User Manual; #define I2C_CFG_SW_MAJOR_VERSION 0; #define I2C_CFG_SW_MINOR_VERSION 4"
- `keywords`: ["I2C", "define", "STD_ON", "FC7xxx", "I2C_CFG_SW_MAJOR_VERSION", "I2C_CFG_SW_MINOR_VERSION", "I2C_CFG_SW_PATCH_VERSION", "I2C_PRECOMPILE_SUPPORT", "STD_OFF", "I2C_MAX_MODULES"]
- `anchors`:
  - `p9`: "#define I2C_CFG_SW_MAJOR_VERSION 0"
  - `p9`: "#define I2C_CFG_SW_MINOR_VERSION 4"
  - `p9`: "#define I2C_CFG_SW_PATCH_VERSION 0"
  - `p9`: "#define I2C_PRECOMPILE_SUPPORT (STD_OFF)"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h: FC7xxx I2C User Manual; #define I2C_E_MASTER_FIFO_ERROR ((uint8)0x02U); Master transmit or receive fifo full."
- `keywords`: ["IIC", "I2C", "define", "Master", "FC7xxx", "I2C_E_MASTER_FIFO_ERROR", "fifo", "I2C_E_MASTER_ARBITRATION_LOST", "I2C_E_MASTER_UNEXPECTED_NACK", "NACK"]
- `anchors`:
  - `p10`: "#define I2C_E_MASTER_FIFO_ERROR ((uint8)0x02U)"
  - `p10`: "Master transmit or receive fifo full."
  - `p10`: "#define I2C_E_MASTER_ARBITRATION_LOST ((uint8)0x03U)"
  - `p10`: "Master bus arbitration error."

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h: FC7xxx I2C User Manual; 2.4; Enums"
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx", "I2c_ChannelStatusType", "I2C_CH_IDLE"]
- `anchors`:
  - `p11`: "2.4"
  - `p11`: "Enums"
  - `p11`: "2.4.1"
  - `p11`: "Enums in CDD_I2c_Types.h"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 FCIIC_InitType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 FCIIC_InitType: FC7xxx I2C User Manual; Reference ECU partition.; const FCIIC_InitType * tFCI2c_Config"
- `keywords`: ["IIC", "I2C", "I2c", "Master", "FCIIC_InitType", "FCIIC_RegCfgType", "bMasterMode", "MDER", "MFCR", "FC7xxx"]
- `anchors`:
  - `p12`: "Reference ECU partition."
  - `p12`: "const FCIIC_InitType * tFCI2c_Config"
  - `p12`: "Incidates init mode."
  - `p12`: "const FCIIC_RegCfgType * tFCI2c_reg"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 I2c_RequestType"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 I2c_RequestType: FC7xxx I2C User Manual; Slave Configuration 2.; uint32 SAMR"
- `keywords`: ["I2C", "IIC", "FCIIC", "Master", "offset", "DMA", "I2c_RequestType", "FCIIC_Type", "FC7xxx", "Slave"]
- `anchors`:
  - `p13`: "Slave Configuration 2."
  - `p13`: "uint32 SAMR"
  - `p13`: "Slave Address Match"
  - `p13`: "uint8 u8TxDmaChannel."

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 FCIIC_Type"
- `content_types`: ["text"]
- `summary`: "Chapter 2 Software Design / 2.6 Structures / 2.6.6 FCIIC_Type: FC7xxx I2C User Manual; Master Configuration 3, offset: 0x2C.; uint8 RESERVED_1 [16]"
- `keywords`: ["I2C", "offset", "Reserved", "bits", "Master", "Slave", "FIFO", "FC7xxx", "RESERVED_1", "MDMR"]
- `anchors`:
  - `p14`: "Master Configuration 3, offset: 0x2C."
  - `p14`: "uint8 RESERVED_1 [16]"
  - `p14`: "Reserved bits."
  - `p14`: "__IO uint32 MDMR"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg): FC7xxx I2C User Manual; Reserved bits.; __I uint32 SASR"
- `keywords`: ["IIC", "I2C", "CDD_I2c", "I2c", "void", "pI2cCfg", "Slave", "offset", "I2c_Init", "I2c_ConfigType"]
- `anchors`:
  - `p15`: "Reserved bits."
  - `p15`: "__I uint32 SASR"
  - `p15`: "Slave Address Status, offset: 0x150."
  - `p15`: "__IO uint32 STAR"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo): FC7xxx I2C User Manual; 2.2.6.4; void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const", "data", "pVersionInfo"]
- `anchors`:
  - `p16`: "2.2.6.4"
  - `p16`: "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
  - `p16`: "Function"
  - `p16`: "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.9 void FCI2C_1_ISR(void)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.9 void FCI2C_1_ISR(void): FC7xxx I2C User Manual; Diagram; N/A"
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1", "FCI2C_1_ISR", "FCIIC0_DMATxIsr"]
- `anchors`:
  - `p17`: "Diagram"
  - `p17`: "N/A"
  - `p17`: "Parameters"
  - `p17`: "N/A"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg): FC7xxx I2C User Manual; 2.8; Hardware Functions"
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId", "FCIIC_RegCfgType", "pInitReg", "E_OK", "FCIIC_Init_Master", "const"]
- `anchors`:
  - `p18`: "2.8"
  - `p18`: "Hardware Functions"
  - `p18`: "2.8.1"
  - `p18`: "Functions in CDD_I2c_Hw.h"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest): FC7xxx I2C User Manual; 2.2.6.5; Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestTy…"
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest", "Std_ReturnType", "I2c_RequestType", "const", "E_OK", "FCIIC_MasterSyncSend"]
- `anchors`:
  - `p19`: "2.2.6.5"
  - `p19`: "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
  - `p19`: "Function"
  - `p19`: "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest): FC7xxx I2C User Manual; Diagram; N/A"
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel", "index", "pRequest", "Returns", "E_OK", "Referenced"]
- `anchors`:
  - `p20`: "Diagram"
  - `p20`: "N/A"
  - `p20`: "Parameters"
  - `p20`: "Parameter"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the I2C Driver"
- `content_types`: ["text", "table", "image", "api", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the I2C Driver: FC7xxx I2C User Manual; Diagram; N/A"
- `keywords`: ["I2C", "IIC", "FC7xxx", "u8I2cIdx", "DMA_Callback", "ECU", "EcuM", "DeInit", "Diagram", "index"]
- `anchors`:
  - `p21`: "Diagram"
  - `p21`: "N/A"
  - `p21`: "Parameters"
  - `p21`: "Parameter"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 SyncTransmit"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 SyncTransmit: FC7xxx I2C User Manual; 2.9.3; SyncTransmit"
- `keywords`: ["I2C", "FC7xxx", "SyncTransmit"]
- `anchors`:
  - `p22`: "2.9.3"
  - `p22`: "SyncTransmit"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 AsyncTransmit"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 AsyncTransmit: FC7xxx I2C User Manual; 2.9.4; AsyncTransmit"
- `keywords`: ["I2C", "FC7xxx", "AsyncTransmit"]
- `anchors`:
  - `p23`: "2.9.4"
  - `p23`: "AsyncTransmit"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 StartListening"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 StartListening: FC7xxx I2C User Manual; 2.9.5; StartListening"
- `keywords`: ["I2C", "FC7xxx", "StartListening"]
- `anchors`:
  - `p24`: "2.9.5"
  - `p24`: "StartListening"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation: FC7xxx I2C User Manual; Chapter 3 Tresos Configuration Items; 3.1"
- `keywords`: ["I2C", "FC7xxx", "Tresos", "Inclusion", "Relation", "contain", "inclusion", "relation", "shown", "below"]
- `anchors`:
  - `p25`: "Chapter 3 Tresos Configuration Items"
  - `p25`: "3.1"
  - `p25`: "Container Inclusion Relation"
  - `p25`: "The contain inclusion relation is shown as below:"

### SEG-0026
- `physical_pages`: `26`
- `printed_pages`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT: FC7xxx I2C User Manual; 3.2; Containers and Variables"
- `keywords`: ["I2C", "I2c", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GeneralConfiguration", "FC7xxx", "ENUMERATION", "VariantPreCompile", "Screenshot", "Properties"]
- `anchors`:
  - `p26`: "3.2"
  - `p26`: "Containers and Variables"
  - `p26`: "3.2.1"
  - `p26`: "IMPLEMENTATION_CONFIG_VARIANT"

### SEG-0027
- `physical_pages`: `27`
- `printed_pages`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect: FC7xxx I2C User Manual; Properties; Property"
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin", "I2cMulticoreSupport", "I2cTimeoutDuration"]
- `anchors`:
  - `p27`: "Properties"
  - `p27`: "Property"
  - `p27`: "Value"
  - `p27`: "Type"

### SEG-0028
- `physical_pages`: `28`
- `printed_pages`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification: FC7xxx I2C User Manual; Description; Switches the I2c DMA function ON or OFF."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin", "Default", "I2cErrorNotification"]
- `anchors`:
  - `p28`: "Description"
  - `p28`: "Switches the I2c DMA function ON or OFF."
  - `p28`: "Screenshot"
  - `p28`: "Properties"

### SEG-0029
- `physical_pages`: `29`
- `printed_pages`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification: FC7xxx I2C User Manual; Type; FUNCTION-NAME"
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification", "I2cSlaveByteReceiveNotification", "I2cEcucPartitionRef"]
- `anchors`:
  - `p29`: "Type"
  - `p29`: "FUNCTION-NAME"
  - `p29`: "Origin"
  - `p29`: "Flagchip"

### SEG-0030
- `physical_pages`: `30`
- `printed_pages`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId: FC7xxx I2C User Manual; Screenshot; Properties"
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId", "I2cHwChannel", "FCI2C_0"]
- `anchors`:
  - `p30`: "Screenshot"
  - `p30`: "Properties"
  - `p30`: "Property"
  - `p30`: "Value"

### SEG-0031
- `physical_pages`: `31`
- `printed_pages`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration: FC7xxx I2C User Manual; 3.2.6.3; I2cMasterSlaveConfiguration"
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE", "I2cPinConfiguration", "PINCFG_2PIN_OPEN_DRAIN"]
- `anchors`:
  - `p31`: "3.2.6.3"
  - `p31`: "I2cMasterSlaveConfiguration"
  - `p31`: "Variable"
  - `p31`: "I2cMasterSlaveConfiguration"

### SEG-0032
- `physical_pages`: `32`
- `printed_pages`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug: FC7xxx I2C User Manual; 3.2.5.1; I2cMasterEnabledInDebug"
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef", "REFERENCE", "I2cAsyncMode"]
- `anchors`:
  - `p32`: "3.2.5.1"
  - `p32`: "I2cMasterEnabledInDebug"
  - `p32`: "Container"
  - `p32`: "I2cMasterEnabledInDebug"

### SEG-0033
- `physical_pages`: `33`
- `printed_pages`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel: FC7xxx I2C User Manual; REF; ASPathDataOfSchema:/AUTOSAR/TOP-LEVEL"
- `keywords`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel", "FILTSDA", "REF", "ASPathDataOfSchema", "AUTOSAR", "TOP"]
- `anchors`:
  - `p33`: "REF"
  - `p33`: "ASPathDataOfSchema:/AUTOSAR/TOP-LEVEL"
  - `p33`: "PACKAGES/I2c/ELEMENTS/I2c/I2cGlobalConfig/I2cChannel/I2cChannel"
  - `p33`: "_0/I2cMasterConfiguration/I2cTxDmaChannel"

### SEG-0034
- `physical_pages`: `34`
- `printed_pages`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL: FC7xxx I2C User Manual; The glitch filter cycle count is not affected by the PRESCALE configuration and is automatically bypassed; in High Speed mode."
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL", "filter", "PRESCALE"]
- `anchors`:
  - `p34`: "The glitch filter cycle count is not affected by the PRESCALE configuration and is automatically bypassed"
  - `p34`: "in High Speed mode."
  - `p34`: "Screenshot"
  - `p34`: "Properties"

### SEG-0035
- `physical_pages`: `35`
- `printed_pages`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay: FC7xxx I2C User Manual; Origin; Flagchip"
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay", "Configures", "Minimum"]
- `anchors`:
  - `p35`: "Origin"
  - `p35`: "Flagchip"
  - `p35`: "3.2.5.11"
  - `p35`: "I2cDataValidDelay"

### SEG-0036
- `physical_pages`: `36`
- `printed_pages`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate: FC7xxx I2C User Manual; This value is also used for the minimum bus free time between a STOP and a START condition; Screenshot"
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration", "I2cSlaveAddress", "FC7xxx"]
- `anchors`:
  - `p36`: "This value is also used for the minimum bus free time between a STOP and a START condition"
  - `p36`: "Screenshot"
  - `p36`: "Properties"
  - `p36`: "Property"

### SEG-0037
- `physical_pages`: `37`
- `printed_pages`: `37`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.3 I2cSlaveAckStall"
- `content_types`: ["text", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.3 I2cSlaveAckStall: FC7xxx I2C User Manual; Type; BOOLEAN"
- `keywords`: ["I2C", "I2cSlaveAckStall", "BOOLEAN", "stretching", "FCI2C_SCFGR1", "SCL", "Origin", "Default", "ACKSTALL", "slave"]
- `anchors`:
  - `p37`: "Type"
  - `p37`: "BOOLEAN"
  - `p37`: "Origin"
  - `p37`: "Flagchip"

### SEG-0038
- `physical_pages`: `38`
- `printed_pages`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall: FC7xxx I2C User Manual; 3.2.6.6; I2cSlaveAdrStall"
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL", "I2cGlitchFilterSDA", "SDA"]
- `anchors`:
  - `p38`: "3.2.6.6"
  - `p38`: "I2cSlaveAdrStall"
  - `p38`: "Container"
  - `p38`: "I2cSlaveAdrStall"

### SEG-0039
- `physical_pages`: `39`
- `printed_pages`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `content_types`: ["text", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod: FC7xxx I2C User Manual; Description; Data Valid Delay: Configures FCI2C_SCFGR2[DATAVD]"
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave", "SCL", "PRESCALE"]
- `anchors`:
  - `p39`: "Description"
  - `p39`: "Data Valid Delay: Configures FCI2C_SCFGR2[DATAVD]"
  - `p39`: "Configures the SDA data valid delay time for the I2c slave equal to FILTSCL+DATAVD+3 cycles."
  - `p39`: "This data valid delay must be configured to less than the minimum SCL low period."

### SEG-0040
- `physical_pages`: `40`
- `printed_pages`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion: FC7xxx I2C User Manual; Origin; Flagchip"
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number", "implementation", "Screenshot"]
- `anchors`:
  - `p40`: "Origin"
  - `p40`: "Flagchip"
  - `p40`: "3.2.7.2"
  - `p40`: "ArReleaseMinorVersion"

### SEG-0041
- `physical_pages`: `41`
- `printed_pages`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId: FC7xxx I2C User Manual; Properties; Property"
- `keywords`: ["I2C", "INTEGER", "ModuleId", "VendorId", "FC7xxx", "Properties", "Property", "Origin", "AUTOSAR", "Variable"]
- `anchors`:
  - `p41`: "Properties"
  - `p41`: "Property"
  - `p41`: "Value"
  - `p41`: "Type"

### SEG-0042
- `physical_pages`: `42`
- `printed_pages`: `42`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "table", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx I2C User Manual; Chapter 4 Configuration Guides; 4.1"
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "NULL_PTR", "notification", "needed", "you", "should", "Guides"]
- `anchors`:
  - `p42`: "Chapter 4 Configuration Guides"
  - `p42`: "4.1"
  - `p42`: "Configuration Item Constraint"
  - `p42`: "1)"

### SEG-0043
- `physical_pages`: `43`
- `printed_pages`: `43`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint: FC7xxx I2C User Manual; 3); If i2c is needed to use for multicore, you should enable the item \"I2c Multicore Support\"."
- `keywords`: ["I2C", "I2c", "FC7xxx", "i2c", "needed", "multicore", "you", "should", "enable", "item"]
- `anchors`:
  - `p43`: "3)"
  - `p43`: "If i2c is needed to use for multicore, you should enable the item \"I2c Multicore Support\"."

### SEG-0044
- `physical_pages`: `44`
- `printed_pages`: `44`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps: FC7xxx I2C User Manual; 4.2; I2C Usage Common Steps"
- `keywords`: ["I2C", "FC7xxx", "I2cChannel", "Usage", "Basically", "can", "configured", "below", "Configure", "channels"]
- `anchors`:
  - `p44`: "4.2"
  - `p44`: "I2C Usage Common Steps"
  - `p44`: "Basically, the I2C module can be configured by following the below steps:"
  - `p44`: "1)"

### SEG-0045
- `physical_pages`: `45`
- `printed_pages`: `45`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps: FC7xxx I2C User Manual; 3); If master mode and item \"I2c DMA Used\" are enabled, you can select DMA mode for item \"I2c Async Mode\" and"
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "mode", "item", "you", "select", "set", "slave"]
- `anchors`:
  - `p45`: "3)"
  - `p45`: "If master mode and item \"I2c DMA Used\" are enabled, you can select DMA mode for item \"I2c Async Mode\" and"
  - `p45`: "select DMA channel which is set in the DMA module."
  - `p45`: "4)"

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
- `caption`: "Revision History"
- `physical_pages`: `3`
- `printed_pages`: ["3"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["Rejected Requirement", "Description", "Rejection Reason"]
- `summary`: "Indexes table-like source content for Revision History; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Revision History"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0004-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0004-001"
- `caption`: "Table-like content on page 4"
- `physical_pages`: `4`
- `printed_pages`: ["4"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["I2C", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "GeneralConfiguration", "I2cEcucPartitionRef"]
- `summary`: "Indexes table-like source content for Table-like content on page 4; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 4"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0005-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0005-001"
- `caption`: "Table-like content on page 5"
- `physical_pages`: `5`
- `printed_pages`: ["5"]
- `section_path`: "Chapter 1 I2C Introduction / 1.1 Requirement Tracing"
- `bbox`: `None`
- `key_fields`: ["I2C", "FCI2C", "I2c", "AUTOSAR", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 5; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 5"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Rejected Requirement table-like panels"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
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
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `bbox`: `None`
- `key_fields`: ["I2C", "define", "Error", "reported", "FC7xxx"]
- `summary`: "Indexes table-like source content for Table-like content on page 7; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 7"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.2 Macros in I2c_version.h"
- `bbox`: `None`
- `key_fields`: ["I2C", "define", "FC7xxx", "I2c_AsyncTransmit", "I2C_GETSTATUS_ID"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `bbox`: `None`
- `key_fields`: ["I2C", "define", "STD_ON", "FC7xxx", "I2C_CFG_SW_MAJOR_VERSION"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like content on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.4 Macros in CDD_I2c_Types.h"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "define", "Master", "FC7xxx"]
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
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h"
- `bbox`: `None`
- `key_fields`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 FCIIC_InitType"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "I2c", "Master", "FCIIC_InitType"]
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
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 I2c_RequestType"
- `bbox`: `None`
- `key_fields`: ["I2C", "IIC", "FCIIC", "Master", "offset"]
- `summary`: "Indexes table-like source content for Table-like content on page 13; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 13"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0015-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0015-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `15`
- `printed_pages`: ["15"]
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "CDD_I2c", "I2c", "void"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType"]
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
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.9 void FCI2C_1_ISR(void)"
- `bbox`: `None`
- `key_fields`: ["I2C", "void", "Diagram", "Returns", "DMA"]
- `summary`: "Indexes table-like source content for Table-like content on page 17; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 17"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0018-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-001"
- `caption`: "Function reference table-like blocks"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId"]
- `summary`: "Indexes table-like source content for Function reference table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Function reference table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0019-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-001"
- `caption`: "Table-like content on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest"]
- `summary`: "Indexes table-like source content for Table-like content on page 19; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 19"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0020-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-001"
- `caption`: "Table-like content on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `bbox`: `None`
- `key_fields`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel"]
- `summary`: "Indexes table-like source content for Table-like content on page 20; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 20"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0021-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-001"
- `caption`: "Table-like content on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the I2C Driver"
- `bbox`: `None`
- `key_fields`: ["I2C", "IIC", "FC7xxx", "u8I2cIdx", "DMA_Callback"]
- `summary`: "Indexes table-like source content for Table-like content on page 21; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 21"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `None`
- `key_fields`: ["I2C", "FC7xxx", "Tresos", "Inclusion", "Relation"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0026-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0026-001"
- `caption`: "Table-like content on page 26"
- `physical_pages`: `26`
- `printed_pages`: ["26"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `None`
- `key_fields`: ["I2C", "I2c", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GeneralConfiguration"]
- `summary`: "Indexes table-like source content for Table-like content on page 26; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 26"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0030-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0030-001"
- `caption`: "Table-like content on page 30"
- `physical_pages`: `30`
- `printed_pages`: ["30"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `bbox`: `None`
- `key_fields`: ["I2C", "I2c", "Screenshot", "Properties", "Property"]
- `summary`: "Indexes table-like source content for Table-like content on page 30; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 30"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0031-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0031-001"
- `caption`: "Table-like content on page 31"
- `physical_pages`: `31`
- `printed_pages`: ["31"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `bbox`: `None`
- `key_fields`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 31; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 31"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0032-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0032-001"
- `caption`: "Table-like content on page 32"
- `physical_pages`: `32`
- `printed_pages`: ["32"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `bbox`: `None`
- `key_fields`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties"]
- `summary`: "Indexes table-like source content for Table-like content on page 32; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 32"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0033-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0033-001"
- `caption`: "Table-like content on page 33"
- `physical_pages`: `33`
- `printed_pages`: ["33"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel"
- `bbox`: `None`
- `key_fields`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel"]
- `summary`: "Indexes table-like source content for Table-like content on page 33; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 33"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0036-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0036-001"
- `caption`: "Table-like content on page 36"
- `physical_pages`: `36`
- `printed_pages`: ["36"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `bbox`: `None`
- `key_fields`: ["I2C", "I2c", "Screenshot", "Properties", "Property"]
- `summary`: "Indexes table-like source content for Table-like content on page 36; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 36"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0042-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0042-001"
- `caption`: "Table-like content on page 42"
- `physical_pages`: `42`
- `printed_pages`: ["42"]
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `None`
- `key_fields`: ["I2C", "I2c", "DMA", "FC7xxx", "NULL_PTR"]
- `summary`: "Indexes table-like source content for Table-like content on page 42; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 42"
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
- `keywords`: ["I2C", "CDD_I2c", "CDD_I2c_Types", "FC7xxx", "I2c_version", "CDD_I2c_Cfg", "I2c_ConfigType", "I2c_InitChannelConfigType"]
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
- `keywords`: ["I2C", "FC7xxx", "IMPLEMENTATION_CONFIG_VARIANT", "GeneralConfiguration", "I2cEcucPartitionRef", "I2cChannel", "I2cMasterConfiguration", "I2cSlaveConfiguration"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0006-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "Image block near 2.3.1 Macros in CDD_I2c.h"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Macros / 2.3.1 Macros in CDD_I2c.h"
- `bbox`: `[36.0, 166.4, 559.3, 352.7]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in CDD_I2c.h; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "CDD_I2c", "define", "called", "wrong", "FC7xxx", "I2C_E_PARAM_JOB", "I2C_E_PARAM_SEQUENCE"]
- `anchor`: "Image block near 2.3.1 Macros in CDD_I2c.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0011-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0011-001"
- `caption`: "Image block near 2.2.6.1 Enums in CDD_I2c_Types.h"
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h"
- `bbox`: `[116.3, 414.7, 293.94, 547.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.2.6.1 Enums in CDD_I2c_Types.h; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "Image block near 2.2.6.1 Enums in CDD_I2c_Types.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0011-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0011-002"
- `caption`: "Image block near 2.2.6.1 Enums in CDD_I2c_Types.h"
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.4 Enums / 2.4.1 Enums in CDD_I2c_Types.h / 2.2.6.1 Enums in CDD_I2c_Types.h"
- `bbox`: `[116.3, 693.87, 281.38, 763.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.2.6.1 Enums in CDD_I2c_Types.h; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "IIC", "I2c", "channel", "I2c_InitChannelConfigType", "CDD_I2c_Types", "I2c_ConfigType", "FC7xxx"]
- `anchor`: "Image block near 2.2.6.1 Enums in CDD_I2c_Types.h"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0012-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0012-001"
- `caption`: "Generated visual anchor: 2.6.3 FCIIC_InitType"
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.3 FCIIC_InitType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.3 FCIIC_InitType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["IIC", "I2C", "I2c", "Master", "FCIIC_InitType", "FCIIC_RegCfgType", "bMasterMode", "MDER"]
- `anchor`: "2.6.3 FCIIC_InitType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0013-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-001"
- `caption`: "Generated visual anchor: 2.6.5 I2c_RequestType"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6 Structures / 2.6.5 I2c_RequestType"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.5 I2c_RequestType; generated for retrieval because no formal figure number was detected."
- `keywords`: ["I2C", "IIC", "FCIIC", "Master", "offset", "DMA", "I2c_RequestType", "FCIIC_Type"]
- `anchor`: "2.6.5 I2c_RequestType"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-001"
- `caption`: "Generated visual anchor: 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg); generated for retrieval because no formal figure number was detected."
- `keywords`: ["IIC", "I2C", "CDD_I2c", "I2c", "void", "pI2cCfg", "Slave", "offset"]
- `anchor`: "2.2.6.1 void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Generated visual anchor: 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo); generated for retrieval because no formal figure number was detected."
- `keywords`: ["IIC", "I2C", "pRequestPtr", "u8Channel", "Std_ReturnType", "I2c_RequestType", "void", "const"]
- `anchor`: "2.2.6.4 void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Generated visual anchor: 2.2.6.9 void FCI2C_1_ISR(void)"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 2 Software Design / 2.7 API Functions / 2.7.1 Functions in CDD_I2c.h / 2.2.6.9 void FCI2C_1_ISR(void)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.6.9 void FCI2C_1_ISR(void); generated for retrieval because no formal figure number was detected."
- `keywords`: ["I2C", "void", "Diagram", "Returns", "DMA", "process", "interrupt", "FCIIC1"]
- `anchor`: "2.2.6.9 void FCI2C_1_ISR(void)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Generated visual anchor: 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg); generated for retrieval because no formal figure number was detected."
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Std_ReturnType", "u8CoreId", "FCIIC_RegCfgType", "pInitReg", "E_OK"]
- `anchor`: "2.2.6.1 Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Generated visual anchor: 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest); generated for retrieval because no formal figure number was detected."
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "u8Channel", "pRequest", "Std_ReturnType", "I2c_RequestType", "const"]
- `anchor`: "2.2.6.5 Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Generated visual anchor: 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 2 Software Design / 2.8 Hardware Functions / 2.8.1 Functions in CDD_I2c_Hw.h / 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest); generated for retrieval because no formal figure number was detected."
- `keywords`: ["IIC", "I2C", "u8I2cIdx", "Diagram", "u8Channel", "index", "pRequest", "Returns"]
- `anchor`: "2.2.6.9 Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 2.9.1 Initialization of the I2C Driver"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.1 Initialization of the I2C Driver"
- `bbox`: `[36.0, 216.92, 559.3, 430.32]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.1 Initialization of the I2C Driver; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "IIC", "FC7xxx", "u8I2cIdx", "DMA_Callback", "ECU", "EcuM", "DeInit"]
- `anchor`: "Image block near 2.9.1 Initialization of the I2C Driver"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 2.9.3 SyncTransmit"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 SyncTransmit"
- `bbox`: `[36.0, 36.9, 559.3, 341.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3 SyncTransmit; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "SyncTransmit"]
- `anchor`: "Image block near 2.9.3 SyncTransmit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-002"
- `caption`: "Image block near 2.9.3 SyncTransmit"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.3 SyncTransmit"
- `bbox`: `[50.15, 390.44, 573.45, 731.59]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.3 SyncTransmit; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "SyncTransmit"]
- `anchor`: "Image block near 2.9.3 SyncTransmit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 2.9.4 AsyncTransmit"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.4 AsyncTransmit"
- `bbox`: `[50.15, 56.66, 573.45, 408.36]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.4 AsyncTransmit; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "AsyncTransmit"]
- `anchor`: "Image block near 2.9.4 AsyncTransmit"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 2.9.5 StartListening"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 2 Software Design / 2.9 API Sequence Diagram / 2.9.5 StartListening"
- `bbox`: `[50.15, 56.66, 573.45, 399.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.9.5 StartListening; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "StartListening"]
- `anchor`: "Image block near 2.9.5 StartListening"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-001"
- `caption`: "Image block near 3.1 Container Inclusion Relation"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `bbox`: `[81.65, 145.7, 513.12, 396.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.1 Container Inclusion Relation; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "Tresos", "Inclusion", "Relation", "contain", "inclusion", "relation"]
- `anchor`: "Image block near 3.1 Container Inclusion Relation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-001"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[100.23, 36.9, 495.08, 427.97]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GeneralConfiguration", "FC7xxx", "ENUMERATION", "VariantPreCompile"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-002"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[116.3, 538.77, 399.3, 560.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GeneralConfiguration", "FC7xxx", "ENUMERATION", "VariantPreCompile"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0026-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0026-003"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `26`
- `printed_page`: `26`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[116.3, 760.46, 415.55, 782.96]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "IMPLEMENTATION_CONFIG_VARIANT", "VariantPostBuild", "GeneralConfiguration", "FC7xxx", "ENUMERATION", "VariantPreCompile"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-001"
- `caption`: "Image block near 3.2.2.1 I2cDevErrorDetect"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect"
- `bbox`: `[116.3, 147.52, 445.96, 165.28]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 I2cDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "Image block near 3.2.2.1 I2cDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-002"
- `caption`: "Image block near 3.2.2.1 I2cDevErrorDetect"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect"
- `bbox`: `[116.3, 490.41, 544.92, 509.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 I2cDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "Image block near 3.2.2.1 I2cDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0027-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0027-003"
- `caption`: "Image block near 3.2.2.1 I2cDevErrorDetect"
- `physical_page`: `27`
- `printed_page`: `27`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.1 I2cDevErrorDetect"
- `bbox`: `[116.3, 637.97, 469.93, 658.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 I2cDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "Properties", "Property", "OFF", "BOOLEAN", "I2cDevErrorDetect", "Screenshot", "Origin"]
- `anchor`: "Image block near 3.2.2.1 I2cDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-001"
- `caption`: "Image block near 3.2.2.6 I2cErrorNotification"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `bbox`: `[116.3, 224.34, 512.34, 242.17]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.6 I2cErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "Image block near 3.2.2.6 I2cErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-002"
- `caption`: "Image block near 3.2.2.6 I2cErrorNotification"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `bbox`: `[116.3, 404.78, 512.3, 422.0]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.6 I2cErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "Image block near 3.2.2.6 I2cErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-003"
- `caption`: "Image block near 3.2.2.6 I2cErrorNotification"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `bbox`: `[116.3, 585.36, 512.46, 602.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.6 I2cErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "Image block near 3.2.2.6 I2cErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0028-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0028-004"
- `caption`: "Image block near 3.2.2.6 I2cErrorNotification"
- `physical_page`: `28`
- `printed_page`: `28`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.6 I2cErrorNotification"
- `bbox`: `[116.3, 749.25, 513.09, 764.86]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.6 I2cErrorNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "NAME", "NULL_PTR", "Origin"]
- `anchor`: "Image block near 3.2.2.6 I2cErrorNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-001"
- `caption`: "Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `bbox`: `[116.3, 181.9, 512.1, 199.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-002"
- `caption`: "Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `bbox`: `[116.3, 362.6, 512.98, 380.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0029-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0029-003"
- `caption`: "Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `physical_page`: `29`
- `printed_page`: `29`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 GeneralConfiguration / 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `bbox`: `[116.3, 543.44, 512.99, 560.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "NAME", "NULL_PTR", "Origin", "Default", "I2cSlaveTransmitCompleteNotification", "I2cSlaveReceiveCompleteNotification"]
- `anchor`: "Image block near 3.2.2.10 I2cSlaveTransmitCompleteNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-001"
- `caption`: "Image block near 3.2.6.1 I2cChannelId"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `bbox`: `[106.15, 37.39, 523.71, 152.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 I2cChannelId; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "Image block near 3.2.6.1 I2cChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-002"
- `caption`: "Image block near 3.2.6.1 I2cChannelId"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `bbox`: `[110.4, 284.08, 553.44, 364.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 I2cChannelId; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "Image block near 3.2.6.1 I2cChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-003"
- `caption`: "Image block near 3.2.6.1 I2cChannelId"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `bbox`: `[116.3, 492.75, 427.86, 510.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 I2cChannelId; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "Image block near 3.2.6.1 I2cChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0030-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0030-004"
- `caption`: "Image block near 3.2.6.1 I2cChannelId"
- `physical_page`: `30`
- `printed_page`: `30`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.1 I2cChannelId"
- `bbox`: `[116.3, 638.82, 428.01, 657.09]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.1 I2cChannelId; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "Origin", "I2cChannel", "I2cChannelId"]
- `anchor`: "Image block near 3.2.6.1 I2cChannelId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-001"
- `caption`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `bbox`: `[116.3, 106.15, 452.3, 125.33]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.3 I2cMasterSlaveConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-002"
- `caption`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `bbox`: `[116.3, 322.46, 452.25, 342.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.3 I2cMasterSlaveConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-003"
- `caption`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `bbox`: `[116.3, 525.68, 563.35, 538.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.3 I2cMasterSlaveConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0031-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0031-004"
- `caption`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `physical_page`: `31`
- `printed_page`: `31`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.4 I2cChannel / 3.2.6.3 I2cMasterSlaveConfiguration"
- `bbox`: `[116.3, 670.07, 355.2, 714.89]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.3 I2cMasterSlaveConfiguration; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterSlaveConfiguration", "Screenshot", "Properties", "Property", "ENUMERATION", "MASTER_MODE"]
- `anchor`: "Image block near 3.2.6.3 I2cMasterSlaveConfiguration"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-001"
- `caption`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `bbox`: `[116.3, 106.15, 511.88, 125.75]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 I2cMasterEnabledInDebug; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-002"
- `caption`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `bbox`: `[116.3, 285.79, 540.7, 299.84]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 I2cMasterEnabledInDebug; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-003"
- `caption`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `bbox`: `[116.3, 471.92, 540.67, 488.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 I2cMasterEnabledInDebug; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0032-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0032-004"
- `caption`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `physical_page`: `32`
- `printed_page`: `32`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.1 I2cMasterEnabledInDebug"
- `bbox`: `[116.3, 670.43, 533.5, 685.3]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.1 I2cMasterEnabledInDebug; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "I2cMasterEnabledInDebug", "Screenshot", "Properties", "Property", "Origin", "I2cClockRef"]
- `anchor`: "Image block near 3.2.5.1 I2cMasterEnabledInDebug"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-001"
- `caption`: "Image block near 3.2.5.5 I2cRxDmaChannel"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel"
- `bbox`: `[116.3, 167.3, 536.47, 181.04]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.5 I2cRxDmaChannel; use the source PDF page for exact visual details."
- `keywords`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel", "FILTSDA", "REF", "ASPathDataOfSchema"]
- `anchor`: "Image block near 3.2.5.5 I2cRxDmaChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0033-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0033-002"
- `caption`: "Image block near 3.2.5.5 I2cRxDmaChannel"
- `physical_page`: `33`
- `printed_page`: `33`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.5 I2cRxDmaChannel"
- `bbox`: `[116.3, 377.22, 541.36, 394.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.5 I2cRxDmaChannel; use the source PDF page for exact visual details."
- `keywords`: ["I2c", "I2C", "FCI2C", "I2cChannel", "I2cRxDmaChannel", "FILTSDA", "REF", "ASPathDataOfSchema"]
- `anchor`: "Image block near 3.2.5.5 I2cRxDmaChannel"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-001"
- `caption`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `bbox`: `[116.3, 71.77, 540.45, 88.88]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.8 I2cGlitchFilterSCL; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-002"
- `caption`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `bbox`: `[116.3, 328.2, 540.62, 346.71]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.8 I2cGlitchFilterSCL; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-003"
- `caption`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `bbox`: `[116.3, 535.32, 540.51, 552.77]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.8 I2cGlitchFilterSCL; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0034-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0034-004"
- `caption`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `physical_page`: `34`
- `printed_page`: `34`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.8 I2cGlitchFilterSCL"
- `bbox`: `[122.4, 724.0, 546.86, 741.85]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.8 I2cGlitchFilterSCL; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "INTEGER", "Configures", "cycles", "glitch", "FILTSCL"]
- `anchor`: "Image block near 3.2.5.8 I2cGlitchFilterSCL"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-001"
- `caption`: "Image block near 3.2.5.11 I2cDataValidDelay"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay"
- `bbox`: `[116.3, 166.87, 540.54, 185.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.11 I2cDataValidDelay; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "Image block near 3.2.5.11 I2cDataValidDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-002"
- `caption`: "Image block near 3.2.5.11 I2cDataValidDelay"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay"
- `bbox`: `[116.3, 390.13, 541.29, 408.43]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.11 I2cDataValidDelay; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "Image block near 3.2.5.11 I2cDataValidDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0035-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0035-003"
- `caption`: "Image block near 3.2.5.11 I2cDataValidDelay"
- `physical_page`: `35`
- `printed_page`: `35`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.11 I2cDataValidDelay"
- `bbox`: `[116.3, 612.98, 541.24, 630.06]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.11 I2cDataValidDelay; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "SCL", "time", "FCI2C_MCCR0", "cycles", "INTEGER", "Origin", "I2cDataValidDelay"]
- `anchor`: "Image block near 3.2.5.11 I2cDataValidDelay"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-001"
- `caption`: "Image block near 3.2.5.15 I2cBaudRate"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `bbox`: `[116.3, 54.83, 540.6, 73.48]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.15 I2cBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "Image block near 3.2.5.15 I2cBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-002"
- `caption`: "Image block near 3.2.5.15 I2cBaudRate"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `bbox`: `[116.3, 227.22, 557.49, 249.47]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.15 I2cBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "Image block near 3.2.5.15 I2cBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-003"
- `caption`: "Image block near 3.2.5.15 I2cBaudRate"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `bbox`: `[116.3, 389.35, 320.81, 426.19]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.15 I2cBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "Image block near 3.2.5.15 I2cBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-004"
- `caption`: "Image block near 3.2.5.15 I2cBaudRate"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `bbox`: `[116.3, 563.48, 512.66, 579.51]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.15 I2cBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "Image block near 3.2.5.15 I2cBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0036-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0036-005"
- `caption`: "Image block near 3.2.5.15 I2cBaudRate"
- `physical_page`: `36`
- `printed_page`: `36`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.5 I2cMasterConfiguration / 3.2.5.15 I2cBaudRate"
- `bbox`: `[116.3, 733.72, 411.99, 752.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.5.15 I2cBaudRate; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "Screenshot", "Properties", "Property", "I2cSlaveFilterEnable", "INTEGER", "I2cSlaveConfiguration"]
- `anchor`: "Image block near 3.2.5.15 I2cBaudRate"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-001"
- `caption`: "Image block near 3.2.6.6 I2cSlaveAdrStall"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall"
- `bbox`: `[116.3, 146.02, 428.36, 163.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 I2cSlaveAdrStall; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "Image block near 3.2.6.6 I2cSlaveAdrStall"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-002"
- `caption`: "Image block near 3.2.6.6 I2cSlaveAdrStall"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall"
- `bbox`: `[116.3, 388.93, 515.48, 406.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 I2cSlaveAdrStall; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "Image block near 3.2.6.6 I2cSlaveAdrStall"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0038-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0038-003"
- `caption`: "Image block near 3.2.6.6 I2cSlaveAdrStall"
- `physical_page`: `38`
- `printed_page`: `38`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.6 I2cSlaveAdrStall"
- `bbox`: `[116.3, 645.36, 540.56, 663.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.6 I2cSlaveAdrStall; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "SCL", "glitch", "I2cSlaveAdrStall", "FILTSDA", "filter", "FILTSCL"]
- `anchor`: "Image block near 3.2.6.6 I2cSlaveAdrStall"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-001"
- `caption`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `bbox`: `[116.3, 122.58, 509.05, 139.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.10 I2cClockHoldPeriod; use the source PDF page for exact visual details."
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave"]
- `anchor`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-002"
- `caption`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `bbox`: `[116.3, 362.08, 541.31, 381.16]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.10 I2cClockHoldPeriod; use the source PDF page for exact visual details."
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave"]
- `anchor`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-003"
- `caption`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `bbox`: `[116.3, 538.14, 350.27, 613.64]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.10 I2cClockHoldPeriod; use the source PDF page for exact visual details."
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave"]
- `anchor`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0039-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0039-004"
- `caption`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `physical_page`: `39`
- `printed_page`: `39`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.6 I2cSlaveConfiguration / 3.2.6.10 I2cClockHoldPeriod"
- `bbox`: `[116.3, 726.21, 456.7, 741.68]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.6.10 I2cClockHoldPeriod; use the source PDF page for exact visual details."
- `keywords`: ["I2c", "I2C", "time", "INTEGER", "Configures", "FCI2C_SCFGR2", "DATAVD", "slave"]
- `anchor`: "Image block near 3.2.6.10 I2cClockHoldPeriod"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-001"
- `caption`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 131.42, 499.55, 147.11]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-002"
- `caption`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 275.53, 494.79, 291.98]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-003"
- `caption`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 438.97, 456.34, 454.52]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-004"
- `caption`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 599.41, 499.55, 615.91]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0040-005
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0040-005"
- `caption`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `physical_page`: `40`
- `printed_page`: `40`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.2 ArReleaseMinorVersion"
- `bbox`: `[116.3, 761.35, 456.03, 777.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.2 ArReleaseMinorVersion; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "vendor", "specific", "Origin", "Variable", "version", "number"]
- `anchor`: "Image block near 3.2.7.2 ArReleaseMinorVersion"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-001"
- `caption`: "Image block near 3.2.7.7 ModuleId"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId"
- `bbox`: `[116.3, 166.75, 456.51, 182.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.7 ModuleId; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "ModuleId", "VendorId", "FC7xxx", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.7.7 ModuleId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0041-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0041-002"
- `caption`: "Image block near 3.2.7.7 ModuleId"
- `physical_page`: `41`
- `printed_page`: `41`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.7 CommonPublishedInformation / 3.2.7.7 ModuleId"
- `bbox`: `[116.3, 311.3, 455.93, 327.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.7.7 ModuleId; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "INTEGER", "ModuleId", "VendorId", "FC7xxx", "Properties", "Property", "Origin"]
- `anchor`: "Image block near 3.2.7.7 ModuleId"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0042-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0042-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `42`
- `printed_page`: `42`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[70.9, 145.7, 524.4, 533.9]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "NULL_PTR", "notification", "needed", "you"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0043-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0043-001"
- `caption`: "Image block near 4.1 Configuration Item Constraint"
- `physical_page`: `43`
- `printed_page`: `43`
- `section_path`: "Chapter 4 Configuration Guides / 4.1 Configuration Item Constraint"
- `bbox`: `[70.9, 36.89, 524.4, 428.78]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.1 Configuration Item Constraint; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "FC7xxx", "i2c", "needed", "multicore", "you", "should"]
- `anchor`: "Image block near 4.1 Configuration Item Constraint"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-001"
- `caption`: "Image block near 4.2 I2C Usage Common Steps"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `bbox`: `[70.9, 36.9, 524.39, 422.45]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 I2C Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "I2cChannel", "Usage", "Basically", "can", "configured", "below"]
- `anchor`: "Image block near 4.2 I2C Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0044-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0044-002"
- `caption`: "Image block near 4.2 I2C Usage Common Steps"
- `physical_page`: `44`
- `printed_page`: `44`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `bbox`: `[54.0, 514.5, 577.3, 576.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 I2C Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "FC7xxx", "I2cChannel", "Usage", "Basically", "can", "configured", "below"]
- `anchor`: "Image block near 4.2 I2C Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-001"
- `caption`: "Image block near 4.2 I2C Usage Common Steps"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `bbox`: `[136.4, 36.9, 476.48, 235.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 I2C Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "mode", "item", "you", "select"]
- `anchor`: "Image block near 4.2 I2C Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-002"
- `caption`: "Image block near 4.2 I2C Usage Common Steps"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `bbox`: `[79.9, 297.37, 533.34, 417.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 I2C Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "mode", "item", "you", "select"]
- `anchor`: "Image block near 4.2 I2C Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0045-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0045-003"
- `caption`: "Image block near 4.2 I2C Usage Common Steps"
- `physical_page`: `45`
- `printed_page`: `45`
- `section_path`: "Chapter 4 Configuration Guides / 4.2 I2C Usage Common Steps"
- `bbox`: `[79.9, 458.87, 533.54, 670.03]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 4.2 I2C Usage Common Steps; use the source PDF page for exact visual details."
- `keywords`: ["I2C", "I2c", "DMA", "FC7xxx", "mode", "item", "you", "select"]
- `anchor`: "Image block near 4.2 I2C Usage Common Steps"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-I2C-ASYNCTRANSMIT
- `name`: "I2c_AsyncTransmit"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16,19,20`
- `brief`: "api index entry for `I2c_AsyncTransmit`."
- `anchors`:
  - `p8`: "API service ID for I2c_AsyncTransmit function."
  - `p16`: "Std_ReturnType I2c_AsyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
  - `p19`: "I2c_AsyncTransmit()"
  - `p20`: "I2c_AsyncTransmit()"
- `aliases`: []

### API-I2C-DEINIT
- `name`: "I2c_DeInit"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7,15,18`
- `brief`: "api index entry for `I2c_DeInit`."
- `anchors`:
  - `p7`: "API service ID for I2c_DeInit function."
  - `p15`: "void I2c_DeInit (void)"
  - `p18`: "I2c_DeInit()"
- `aliases`: []

### API-I2C-INIT
- `name`: "I2c_Init"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7,15,18`
- `brief`: "api index entry for `I2c_Init`."
- `anchors`:
  - `p7`: "API service ID for I2c_Init function."
  - `p15`: "void I2c_Init(const I2c_ConfigType * pI2cCfg)"
  - `p18`: "I2c_Init()"
- `aliases`: []

### API-I2C-SYNCTRANSMIT
- `name`: "I2c_SyncTransmit"
- `type`: `api`
- `primary_page`: `7`
- `physical_pages`: `7,16,19`
- `brief`: "api index entry for `I2c_SyncTransmit`."
- `anchors`:
  - `p7`: "API service ID for I2c_SyncTransmit function."
  - `p16`: "Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
  - `p19`: "I2c_SyncTransmit()"
- `aliases`: []

### API-I2C-STARTLISTENING
- `name`: "I2c_StartListening"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16,20`
- `brief`: "api index entry for `I2c_StartListening`."
- `anchors`:
  - `p8`: "API service ID for I2c_StartListening function."
  - `p16`: "Std_ReturnType I2c_StartListening(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
  - `p20`: "I2c_StartListening()"
- `aliases`: []

### API-I2C-GETVERSIONINFO
- `name`: "I2c_GetVersionInfo"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,16,27`
- `brief`: "api index entry for `I2c_GetVersionInfo`."
- `anchors`:
  - `p8`: "API service ID for I2c_GetVersionInfo function."
  - `p16`: "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
  - `p27`: "Switches the I2c_GetVersionInfo function ON or OFF."
- `aliases`: []

### API-I2C-GETSTATUS
- `name`: "I2c_GetStatus"
- `type`: `api`
- `primary_page`: `8`
- `physical_pages`: `8,15,20`
- `brief`: "api index entry for `I2c_GetStatus`."
- `anchors`:
  - `p8`: "API service ID for I2c_GetStatus function."
  - `p15`: "I2c_ChannelStatusType I2c _GetStatus(uint8 u8Channel)"
  - `p20`: "I2c_GetStatus()"
- `aliases`: []

### API-I2C-INITCHANNELCONFIGTYPE
- `name`: "I2c_InitChannelConfigType"
- `type`: `api`
- `primary_page`: `3`
- `physical_pages`: `3,11`
- `brief`: "api index entry for `I2c_InitChannelConfigType`."
- `anchors`:
  - `p3`: "I2c_InitChannelConfigType .................................................................................................................…"
  - `p11`: "const I2c_InitChannelConfigType(* I2c_pParmConfig)[]"
- `aliases`: []

### API-FCIIC0-DMARXISR
- `name`: "FCIIC0_DMARxIsr"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "api index entry for `FCIIC0_DMARxIsr`."
- `anchors`:
  - `p17`: "void FCIIC0_DMARxIsr(void);"
- `aliases`: []

### API-FCIIC0-DMATXISR
- `name`: "FCIIC0_DMATxIsr"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "api index entry for `FCIIC0_DMATxIsr`."
- `anchors`:
  - `p17`: "void FCIIC0_DMATxIsr(void);"
- `aliases`: []

### API-FCIIC1-DMARXISR
- `name`: "FCIIC1_DMARxIsr"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "api index entry for `FCIIC1_DMARxIsr`."
- `anchors`:
  - `p17`: "void FCIIC1_DMARxIsr(void);"
- `aliases`: []

### API-FCIIC1-DMATXISR
- `name`: "FCIIC1_DMATxIsr"
- `type`: `api`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "api index entry for `FCIIC1_DMATxIsr`."
- `anchors`:
  - `p17`: "void FCIIC1_DMATxIsr(void);"
- `aliases`: []

### API-FCIIC-DEINIT-MASTER
- `name`: "FCIIC_DeInit_Master"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `FCIIC_DeInit_Master`."
- `anchors`:
  - `p18`: "Std_ReturnType FCIIC_DeInit_Master(uint8 u8I2cIdx)"
- `aliases`: []

### API-FCIIC-DEINIT-SLAVE
- `name`: "FCIIC_DeInit_Slave"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `FCIIC_DeInit_Slave`."
- `anchors`:
  - `p18`: "Std_ReturnType FCIIC_DeInit_Slave(uint8 u8I2cIdx)"
- `aliases`: []

### API-FCIIC-GETCHANNELSTATUS
- `name`: "FCIIC_GetChannelStatus"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `FCIIC_GetChannelStatus`."
- `anchors`:
  - `p20`: "I2c_ChannelStatusType FCIIC_GetChannelStatus(uint8 u8I2cIdx)"
- `aliases`: []

### API-FCIIC-INIT-MASTER
- `name`: "FCIIC_Init_Master"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `FCIIC_Init_Master`."
- `anchors`:
  - `p18`: "Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `aliases`: []

### API-FCIIC-INIT-SLAVE
- `name`: "FCIIC_Init_Slave"
- `type`: `api`
- `primary_page`: `18`
- `physical_pages`: `18`
- `brief`: "api index entry for `FCIIC_Init_Slave`."
- `anchors`:
  - `p18`: "Std_ReturnType FCIIC_Init_Slave(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `aliases`: []

### API-FCIIC-LL-DMA-IRQNHANDLER
- `name`: "FCIIC_LL_DMA_IRQnHandler"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `FCIIC_LL_DMA_IRQnHandler`."
- `anchors`:
  - `p20`: "void FCIIC_LL_DMA_IRQnHandler(uint8 u8I2cIdx)"
- `aliases`: []

### API-FCIIC-LL-IRQNHANDLER
- `name`: "FCIIC_LL_IRQnHandler"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `FCIIC_LL_IRQnHandler`."
- `anchors`:
  - `p20`: "void FCIIC_LL_IRQnHandler(uint8 u8I2cIdx)"
- `aliases`: []

### API-FCIIC-MASTERASYNCRECEIVE
- `name`: "FCIIC_MasterAsyncReceive"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `FCIIC_MasterAsyncReceive`."
- `anchors`:
  - `p19`: "Std_ReturnType FCIIC_MasterAsyncReceive(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### API-FCIIC-MASTERASYNCSEND
- `name`: "FCIIC_MasterAsyncSend"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `FCIIC_MasterAsyncSend`."
- `anchors`:
  - `p19`: "Std_ReturnType FCIIC_MasterAsyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### API-FCIIC-MASTERSYNCRECEIVE
- `name`: "FCIIC_MasterSyncReceive"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `FCIIC_MasterSyncReceive`."
- `anchors`:
  - `p19`: "Std_ReturnType FCIIC_MasterSyncReceive(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### API-FCIIC-MASTERSYNCSEND
- `name`: "FCIIC_MasterSyncSend"
- `type`: `api`
- `primary_page`: `19`
- `physical_pages`: `19`
- `brief`: "api index entry for `FCIIC_MasterSyncSend`."
- `anchors`:
  - `p19`: "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### API-FCIIC-STARTLISTENING
- `name`: "FCIIC_StartListening"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `FCIIC_StartListening`."
- `anchors`:
  - `p20`: "Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### API-I2C-FCIIC0-ISR
- `name`: "I2c_FCIIC0_Isr"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `I2c_FCIIC0_Isr`."
- `anchors`:
  - `p20`: "I2c_FCIIC0_Isr()/I2c_FCIIC1_Isr()"
- `aliases`: []

### API-I2C-FCIIC1-ISR
- `name`: "I2c_FCIIC1_Isr"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `I2c_FCIIC1_Isr`."
- `anchors`:
  - `p20`: "I2c_FCIIC0_Isr()/I2c_FCIIC1_Isr()"
- `aliases`: []

### API-CONTROLLER
- `name`: "Controller"
- `type`: `api`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "api index entry for `Controller`."
- `anchors`:
  - `p30`: "This container contains the configuration (parameters) of the I2c Controller(s)."
- `aliases`: []

### API-DMA-CALLBACK
- `name`: "DMA_Callback"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `DMA_Callback`."
- `anchors`:
  - `p21`: "DMA_Callback()"
- `aliases`: []

### API-MANAGER
- `name`: "Manager"
- `type`: `api`
- `primary_page`: `21`
- `physical_pages`: `21`
- `brief`: "api index entry for `Manager`."
- `anchors`:
  - `p21`: "The ECU State Manager (EcuM) is responsible for calling the initialization function."
- `aliases`: []

### API-GETSTATUS
- `name`: "_GetStatus"
- `type`: `api`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "api index entry for `_GetStatus`."
- `anchors`:
  - `p15`: "I2c_ChannelStatusType I2c _GetStatus(uint8 u8Channel)"
- `aliases`: []

### CFG-I2CCHANNEL
- `name`: "I2cChannel"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,30,33,44`
- `brief`: "config index entry for `I2cChannel`."
- `anchors`:
  - `p4`: "I2cChannel ................................................................................................................................…"
  - `p30`: "I2cChannel"
  - `p33`: "PACKAGES/I2c/ELEMENTS/I2c/I2cGlobalConfig/I2cChannel/I2cChannel"
  - `p44`: "Configure I2C channels in tab \"I2cChannel\"."
- `aliases`: []

### CFG-I2CMASTERCONFIGURATION
- `name`: "I2cMasterConfiguration"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,31,33`
- `brief`: "config index entry for `I2cMasterConfiguration`."
- `anchors`:
  - `p4`: "I2cMasterConfiguration ....................................................................................................................…"
  - `p31`: "I2cMasterConfiguration"
  - `p33`: "_0/I2cMasterConfiguration/I2cTxDmaChannel"
- `aliases`: []

### CFG-COMMONPUBLISHEDINFORMATION
- `name`: "CommonPublishedInformation"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,39`
- `brief`: "config index entry for `CommonPublishedInformation`."
- `anchors`:
  - `p4`: "CommonPublishedInformation ................................................................................................................…"
  - `p39`: "CommonPublishedInformation"
- `aliases`: []

### CFG-I2CSLAVECONFIGURATION
- `name`: "I2cSlaveConfiguration"
- `type`: `config`
- `primary_page`: `4`
- `physical_pages`: `4,36`
- `brief`: "config index entry for `I2cSlaveConfiguration`."
- `anchors`:
  - `p4`: "I2cSlaveConfiguration .....................................................................................................................…"
  - `p36`: "I2cSlaveConfiguration"
- `aliases`: []

### CFG-I2CTXDMACHANNEL
- `name`: "I2cTxDmaChannel"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32,33`
- `brief`: "config index entry for `I2cTxDmaChannel`."
- `anchors`:
  - `p32`: "I2cTxDmaChannel"
  - `p33`: "_0/I2cMasterConfiguration/I2cTxDmaChannel"
- `aliases`: []

### CFG-I2CRXDMACHANNEL
- `name`: "I2cRxDmaChannel"
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "config index entry for `I2cRxDmaChannel`."
- `anchors`:
  - `p33`: "I2cRxDmaChannel"
- `aliases`: []

### CFG-I2CCHANNELID
- `name`: "I2cChannelId"
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "config index entry for `I2cChannelId`."
- `anchors`:
  - `p30`: "I2cChannelId"
- `aliases`: []

### CFG-I2CERRORNOTIFICATION
- `name`: "I2cErrorNotification"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `I2cErrorNotification`."
- `anchors`:
  - `p28`: "I2cErrorNotification"
- `aliases`: []

### CFG-I2CGLOBALCONFIG
- `name`: "I2cGlobalConfig"
- `type`: `config`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "config index entry for `I2cGlobalConfig`."
- `anchors`:
  - `p33`: "PACKAGES/I2c/ELEMENTS/I2c/I2cGlobalConfig/I2cChannel/I2cChannel"
- `aliases`: []

### CFG-I2CHWCHANNEL
- `name`: "I2cHwChannel"
- `type`: `config`
- `primary_page`: `30`
- `physical_pages`: `30`
- `brief`: "config index entry for `I2cHwChannel`."
- `anchors`:
  - `p30`: "I2cHwChannel"
- `aliases`: []

### CFG-I2CMASTERRECEIVECOMPLETENOTIFICATION
- `name`: "I2cMasterReceiveCompleteNotification"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `I2cMasterReceiveCompleteNotification`."
- `anchors`:
  - `p28`: "I2cMasterReceiveCompleteNotification"
- `aliases`: []

### CFG-I2CMASTERSLAVECONFIGURATION
- `name`: "I2cMasterSlaveConfiguration"
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "config index entry for `I2cMasterSlaveConfiguration`."
- `anchors`:
  - `p31`: "I2cMasterSlaveConfiguration"
- `aliases`: []

### CFG-I2CMASTERTRANSMITCOMPLETENOTIFICATION
- `name`: "I2cMasterTransmitCompleteNotification"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `I2cMasterTransmitCompleteNotification`."
- `anchors`:
  - `p28`: "I2cMasterTransmitCompleteNotification"
- `aliases`: []

### CFG-I2CPINCONFIGURATION
- `name`: "I2cPinConfiguration"
- `type`: `config`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "config index entry for `I2cPinConfiguration`."
- `anchors`:
  - `p31`: "I2cPinConfiguration"
- `aliases`: []

### CFG-I2CSLAVEADDRESSMATCHNOTIFICATION
- `name`: "I2cSlaveAddressMatchNotification"
- `type`: `config`
- `primary_page`: `28`
- `physical_pages`: `28`
- `brief`: "config index entry for `I2cSlaveAddressMatchNotification`."
- `anchors`:
  - `p28`: "I2cSlaveAddressMatchNotification"
- `aliases`: []

### CFG-I2CSLAVEBYTERECEIVENOTIFICATION
- `name`: "I2cSlaveByteReceiveNotification"
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "config index entry for `I2cSlaveByteReceiveNotification`."
- `anchors`:
  - `p29`: "I2cSlaveByteReceiveNotification"
- `aliases`: []

### CFG-I2CSLAVERECEIVECOMPLETENOTIFICATION
- `name`: "I2cSlaveReceiveCompleteNotification"
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "config index entry for `I2cSlaveReceiveCompleteNotification`."
- `anchors`:
  - `p29`: "I2cSlaveReceiveCompleteNotification"
- `aliases`: []

### CFG-I2CSLAVETRANSMITCOMPLETENOTIFICATION
- `name`: "I2cSlaveTransmitCompleteNotification"
- `type`: `config`
- `primary_page`: `29`
- `physical_pages`: `29`
- `brief`: "config index entry for `I2cSlaveTransmitCompleteNotification`."
- `anchors`:
  - `p29`: "I2cSlaveTransmitCompleteNotification"
- `aliases`: []

### CFG-I2C-PPARMCONFIG
- `name`: "I2c_pParmConfig"
- `type`: `config`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "config index entry for `I2c_pParmConfig`."
- `anchors`:
  - `p11`: "const I2c_InitChannelConfigType(* I2c_pParmConfig)[]"
- `aliases`: []

### CFG-MCUCLOCKSETTINGCONFIG
- `name`: "McuClockSettingConfig"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "config index entry for `McuClockSettingConfig`."
- `anchors`:
  - `p32`: "tion/McuClockSettingConfig/McuClockReferencePoint"
- `aliases`: []

### CFG-MCUMODULECONFIGURA
- `name`: "McuModuleConfigura"
- `type`: `config`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "config index entry for `McuModuleConfigura`."
- `anchors`:
  - `p32`: "ASPathDataOfSchema:/AUTOSAR/EcucDefs/Mcu/McuModuleConfigura"
- `aliases`: []

### MACRO-FCI2C-MCFGR2
- `name`: "FCI2C_MCFGR2"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33,34,38`
- `brief`: "macro index entry for `FCI2C_MCFGR2`."
- `anchors`:
  - `p33`: "Glitch Filter SDA: Configures FCI2C_MCFGR2[FILTSDA]"
  - `p34`: "Glitch Filter SCL: Configures FCI2C_MCFGR2[FILTSCL]"
  - `p38`: "Glitch Filter SDA: Configures FCI2C_MCFGR2[FILTSDA]"
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `28`
- `physical_pages`: `28,29,42`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p28`: "NULL_PTR"
  - `p29`: "NULL_PTR"
  - `p42`: "If the I2C notification is needed, you should not set notification pointer to NULL_PTR."
- `aliases`: []

### MACRO-FCI2C-SCFGR1
- `name`: "FCI2C_SCFGR1"
- `type`: `macro`
- `primary_page`: `37`
- `physical_pages`: `37,38`
- `brief`: "macro index entry for `FCI2C_SCFGR1`."
- `anchors`:
  - `p37`: "I2cSlaveAckStall configures FCI2C_SCFGR1[ACKSTALL]"
  - `p38`: "I2cSlaveAdrStall configures FCI2C_SCFGR1[ADRSTALL]"
- `aliases`: []

### MACRO-FCI2C-0
- `name`: "FCI2C_0"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,30`
- `brief`: "macro index entry for `FCI2C_0`."
- `anchors`:
  - `p9`: "#define FCI2C_0 0U"
  - `p30`: "FCI2C_0"
- `aliases`: []

### MACRO-FCI2C-1
- `name`: "FCI2C_1"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,30`
- `brief`: "macro index entry for `FCI2C_1`."
- `anchors`:
  - `p9`: "#define FCI2C_1 1U"
  - `p30`: "FCI2C_1"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `4`
- `physical_pages`: `4,26`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p4`: "IMPLEMENTATION_CONFIG_VARIANT ...................................................................................................... 26"
  - `p26`: "IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-FCI2C-MCCR0
- `name`: "FCI2C_MCCR0"
- `type`: `macro`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "macro index entry for `FCI2C_MCCR0`."
- `anchors`:
  - `p35`: "Data Valid Delay: Configures FCI2C_MCCR0[DATAVD]"
- `aliases`: []

### MACRO-FCI2C-0-ISR
- `name`: "FCI2C_0_ISR"
- `type`: `macro`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "macro index entry for `FCI2C_0_ISR`."
- `anchors`:
  - `p16`: "void FCI2C_0_ISR(void)"
- `aliases`: []

### MACRO-FCI2C-1-ISR
- `name`: "FCI2C_1_ISR"
- `type`: `macro`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "macro index entry for `FCI2C_1_ISR`."
- `anchors`:
  - `p17`: "void FCI2C_1_ISR(void)"
- `aliases`: []

### MACRO-FCI2C-SCFGR2
- `name`: "FCI2C_SCFGR2"
- `type`: `macro`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "macro index entry for `FCI2C_SCFGR2`."
- `anchors`:
  - `p39`: "Data Valid Delay: Configures FCI2C_SCFGR2[DATAVD]"
- `aliases`: []

### MACRO-I2C-ASYNCTRANSMIT-ID
- `name`: "I2C_ASYNCTRANSMIT_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_ASYNCTRANSMIT_ID`."
- `anchors`:
  - `p7`: "#define I2C_ASYNCTRANSMIT_ID ((uint8)0x03U)"
- `aliases`: []

### MACRO-I2C-DEINIT-ID
- `name`: "I2C_DEINIT_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_DEINIT_ID`."
- `anchors`:
  - `p7`: "#define I2C_DEINIT_ID ((uint8)0x01U)"
- `aliases`: []

### MACRO-I2C-DEV-ERROR-DETECT
- `name`: "I2C_DEV_ERROR_DETECT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_DEV_ERROR_DETECT`."
- `anchors`:
  - `p9`: "#define I2C_DEV_ERROR_DETECT (STD_ON)"
- `aliases`: []

### MACRO-I2C-DIR-MASK
- `name`: "I2C_DIR_MASK"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_DIR_MASK`."
- `anchors`:
  - `p10`: "#define I2C_DIR_MASK (0x1U)"
- `aliases`: []

### MACRO-I2C-DIR-READ
- `name`: "I2C_DIR_READ"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_DIR_READ`."
- `anchors`:
  - `p10`: "#define I2C_DIR_READ (0x1U)"
- `aliases`: []

### MACRO-I2C-DIR-WRITE
- `name`: "I2C_DIR_WRITE"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_DIR_WRITE`."
- `anchors`:
  - `p10`: "#define I2C_DIR_WRITE (0x0U)"
- `aliases`: []

### MACRO-I2C-DMA-USED
- `name`: "I2C_DMA_USED"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_DMA_USED`."
- `anchors`:
  - `p9`: "#define I2C_DMA_USED (STD_ON)"
- `aliases`: []

### MACRO-I2C-E-ALREADY-INITIALIZED
- `name`: "I2C_E_ALREADY_INITIALIZED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_ALREADY_INITIALIZED`."
- `anchors`:
  - `p7`: "#define I2C_E_ALREADY_INITIALIZED ((uint8)0x09U)"
- `aliases`: []

### MACRO-I2C-E-ARBITRATION-FAILURE
- `name`: "I2C_E_ARBITRATION_FAILURE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_ARBITRATION_FAILURE`."
- `anchors`:
  - `p7`: "#define I2C_E_ARBITRATION_FAILURE ((uint8)0x03U)"
- `aliases`: []

### MACRO-I2C-E-BUSY
- `name`: "I2C_E_BUSY"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_BUSY`."
- `anchors`:
  - `p7`: "#define I2C_E_BUSY ((uint8)0x08U)"
- `aliases`: []

### MACRO-I2C-E-BUS-FAILURE
- `name`: "I2C_E_BUS_FAILURE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_BUS_FAILURE`."
- `anchors`:
  - `p7`: "#define I2C_E_BUS_FAILURE ((uint8)0x05U)"
- `aliases`: []

### MACRO-I2C-E-FIFO-HANDLING
- `name`: "I2C_E_FIFO_HANDLING"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_FIFO_HANDLING`."
- `anchors`:
  - `p7`: "#define I2C_E_FIFO_HANDLING ((uint8)0x04U)"
- `aliases`: []

### MACRO-I2C-E-INV-CTRL-IDX
- `name`: "I2C_E_INV_CTRL_IDX"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_INV_CTRL_IDX`."
- `anchors`:
  - `p7`: "#define I2C_E_INV_CTRL_IDX ((uint8)0x0AU)"
- `aliases`: []

### MACRO-I2C-E-MASTER-ARBITRATION-LOST
- `name`: "I2C_E_MASTER_ARBITRATION_LOST"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_E_MASTER_ARBITRATION_LOST`."
- `anchors`:
  - `p10`: "#define I2C_E_MASTER_ARBITRATION_LOST ((uint8)0x03U)"
- `aliases`: []

### MACRO-I2C-E-MASTER-FIFO-ERROR
- `name`: "I2C_E_MASTER_FIFO_ERROR"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_E_MASTER_FIFO_ERROR`."
- `anchors`:
  - `p10`: "#define I2C_E_MASTER_FIFO_ERROR ((uint8)0x02U)"
- `aliases`: []

### MACRO-I2C-E-MASTER-RX-OVERFLOW
- `name`: "I2C_E_MASTER_RX_OVERFLOW"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_E_MASTER_RX_OVERFLOW`."
- `anchors`:
  - `p10`: "#define I2C_E_MASTER_RX_OVERFLOW ((uint8)0x05U)"
- `aliases`: []

### MACRO-I2C-E-MASTER-TX-UNDERFLOW
- `name`: "I2C_E_MASTER_TX_UNDERFLOW"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_E_MASTER_TX_UNDERFLOW`."
- `anchors`:
  - `p10`: "#define I2C_E_MASTER_TX_UNDERFLOW ((uint8)0x06U)"
- `aliases`: []

### MACRO-I2C-E-MASTER-UNEXPECTED-NACK
- `name`: "I2C_E_MASTER_UNEXPECTED_NACK"
- `type`: `macro`
- `primary_page`: `10`
- `physical_pages`: `10`
- `brief`: "macro index entry for `I2C_E_MASTER_UNEXPECTED_NACK`."
- `anchors`:
  - `p10`: "#define I2C_E_MASTER_UNEXPECTED_NACK ((uint8)0x04U)"
- `aliases`: []

### MACRO-I2C-E-NACK-RECEIVED
- `name`: "I2C_E_NACK_RECEIVED"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_NACK_RECEIVED`."
- `anchors`:
  - `p7`: "#define I2C_E_NACK_RECEIVED ((uint8)0x02U)"
- `aliases`: []

### MACRO-I2C-E-PARAM-ADDRESS
- `name`: "I2C_E_PARAM_ADDRESS"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `I2C_E_PARAM_ADDRESS`."
- `anchors`:
  - `p6`: "#define I2C_E_PARAM_ADDRESS ((uint8)0x05U)"
- `aliases`: []

### MACRO-I2C-E-PARAM-JOB
- `name`: "I2C_E_PARAM_JOB"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `I2C_E_PARAM_JOB`."
- `anchors`:
  - `p6`: "#define I2C_E_PARAM_JOB ((uint8)0x01U)"
- `aliases`: []

### MACRO-I2C-E-PARAM-LENGTH
- `name`: "I2C_E_PARAM_LENGTH"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `I2C_E_PARAM_LENGTH`."
- `anchors`:
  - `p6`: "#define I2C_E_PARAM_LENGTH ((uint8)0x03U)"
- `aliases`: []

### MACRO-I2C-E-PARAM-POINTER
- `name`: "I2C_E_PARAM_POINTER"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `I2C_E_PARAM_POINTER`."
- `anchors`:
  - `p6`: "#define I2C_E_PARAM_POINTER ((uint8)0x06U)"
- `aliases`: []

### MACRO-I2C-E-PARAM-SEQUENCE
- `name`: "I2C_E_PARAM_SEQUENCE"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `I2C_E_PARAM_SEQUENCE`."
- `anchors`:
  - `p6`: "#define I2C_E_PARAM_SEQUENCE ((uint8)0x02U)"
- `aliases`: []

### MACRO-I2C-E-PARAM-UNIT
- `name`: "I2C_E_PARAM_UNIT"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `I2C_E_PARAM_UNIT`."
- `anchors`:
  - `p6`: "#define I2C_E_PARAM_UNIT ((uint8)0x04U)"
- `aliases`: []

### MACRO-I2C-E-PIN-LOW-TIMEOUT
- `name`: "I2C_E_PIN_LOW_TIMEOUT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_E_PIN_LOW_TIMEOUT`."
- `anchors`:
  - `p9`: "#define I2C_E_PIN_LOW_TIMEOUT ((uint8)0x01U)"
- `aliases`: []

### MACRO-I2C-E-TIMEOUT-FAILURE
- `name`: "I2C_E_TIMEOUT_FAILURE"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_TIMEOUT_FAILURE`."
- `anchors`:
  - `p7`: "#define I2C_E_TIMEOUT_FAILURE ((uint8)0x01U)"
- `aliases`: []

### MACRO-I2C-E-UNINIT
- `name`: "I2C_E_UNINIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_E_UNINIT`."
- `anchors`:
  - `p7`: "#define I2C_E_UNINIT ((uint8)0x07U)"
- `aliases`: []

### MACRO-I2C-GETSTATUS-ID
- `name`: "I2C_GETSTATUS_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_GETSTATUS_ID`."
- `anchors`:
  - `p8`: "#define I2C_GETSTATUS_ID ((uint8)0x04U)"
- `aliases`: []

### MACRO-I2C-GETVERSIONINFO-ID
- `name`: "I2C_GETVERSIONINFO_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_GETVERSIONINFO_ID`."
- `anchors`:
  - `p8`: "#define I2C_GETVERSIONINFO_ID ((uint8)0x0AU)"
- `aliases`: []

### MACRO-I2C-INIT-ID
- `name`: "I2C_INIT_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_INIT_ID`."
- `anchors`:
  - `p7`: "#define I2C_INIT_ID ((uint8)0x00U)"
- `aliases`: []

### MACRO-I2C-MASTER-MODE
- `name`: "I2C_MASTER_MODE"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_MASTER_MODE`."
- `anchors`:
  - `p9`: "#define I2C_MASTER_MODE ((uint8)0x01U)"
- `aliases`: []

### MACRO-I2C-MODE-UNINIT
- `name`: "I2C_MODE_UNINIT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_MODE_UNINIT`."
- `anchors`:
  - `p9`: "#define I2C_MODE_UNINIT ((uint8)0x02U)"
- `aliases`: []

### MACRO-I2C-MULTICORE-SUPPORT
- `name`: "I2C_MULTICORE_SUPPORT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_MULTICORE_SUPPORT`."
- `anchors`:
  - `p9`: "#define I2C_MULTICORE_SUPPORT (STD_ON)"
- `aliases`: []

### MACRO-I2C-PRECOMPILE-SUPPORT
- `name`: "I2C_PRECOMPILE_SUPPORT"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_PRECOMPILE_SUPPORT`."
- `anchors`:
  - `p9`: "#define I2C_PRECOMPILE_SUPPORT (STD_OFF)"
- `aliases`: []

### MACRO-I2C-SLAVE-MODE
- `name`: "I2C_SLAVE_MODE"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_SLAVE_MODE`."
- `anchors`:
  - `p9`: "#define I2C_SLAVE_MODE ((uint8)0x00U)"
- `aliases`: []

### MACRO-I2C-STARTLISTENING-ID
- `name`: "I2C_STARTLISTENING_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_STARTLISTENING_ID`."
- `anchors`:
  - `p8`: "#define I2C_STARTLISTENING_ID ((uint8)0x06U)"
- `aliases`: []

### MACRO-I2C-SYNCTRANSMIT-ID
- `name`: "I2C_SYNCTRANSMIT_ID"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `I2C_SYNCTRANSMIT_ID`."
- `anchors`:
  - `p7`: "#define I2C_SYNCTRANSMIT_ID ((uint8)0x02U)"
- `aliases`: []

### MACRO-I2C-VERSION-INFO-API
- `name`: "I2C_VERSION_INFO_API"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_VERSION_INFO_API`."
- `anchors`:
  - `p9`: "#define I2C_VERSION_INFO_API (STD_ON)"
- `aliases`: []

### MACRO-STD-ON
- `name`: "STD_ON"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `STD_ON`."
- `anchors`:
  - `p9`: "#define I2C_DMA_USED (STD_ON)"
- `aliases`: []

### MACRO-I2C-AR-RELEASE-MAJOR-VERSION
- `name`: "I2C_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p8`: "#define I2C_AR_RELEASE_MAJOR_VERSION 4"
- `aliases`: []

### MACRO-I2C-AR-RELEASE-MINOR-VERSION
- `name`: "I2C_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p8`: "#define I2C_AR_RELEASE_MINOR_VERSION 6"
- `aliases`: []

### MACRO-I2C-AR-RELEASE-REVISION-VERSION
- `name`: "I2C_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p8`: "#define I2C_AR_RELEASE_REVISION_VERSION 0"
- `aliases`: []

### MACRO-I2C-CFG-AR-RELEASE-MAJOR-VERSION-C
- `name`: "I2C_CFG_AR_RELEASE_MAJOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_CFG_AR_RELEASE_MAJOR_VERSION_C`."
- `anchors`:
  - `p8`: "#define I2C_CFG_AR_RELEASE_MAJOR_VERSION_C 4"
- `aliases`: []

### MACRO-I2C-CFG-AR-RELEASE-MINOR-VERSION-C
- `name`: "I2C_CFG_AR_RELEASE_MINOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_CFG_AR_RELEASE_MINOR_VERSION_C`."
- `anchors`:
  - `p8`: "#define I2C_CFG_AR_RELEASE_MINOR_VERSION_C 6"
- `aliases`: []

### MACRO-I2C-CFG-AR-RELEASE-REVISION-VERSION-C
- `name`: "I2C_CFG_AR_RELEASE_REVISION_VERSION_C"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_CFG_AR_RELEASE_REVISION_VERSION_C`."
- `anchors`:
  - `p8`: "#define I2C_CFG_AR_RELEASE_REVISION_VERSION_C 0"
- `aliases`: []

### MACRO-I2C-CFG-SW-MAJOR-VERSION
- `name`: "I2C_CFG_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_CFG_SW_MAJOR_VERSION`."
- `anchors`:
  - `p9`: "#define I2C_CFG_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-I2C-CFG-SW-MINOR-VERSION
- `name`: "I2C_CFG_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_CFG_SW_MINOR_VERSION`."
- `anchors`:
  - `p9`: "#define I2C_CFG_SW_MINOR_VERSION 4"
- `aliases`: []

### MACRO-I2C-CFG-SW-PATCH-VERSION
- `name`: "I2C_CFG_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_CFG_SW_PATCH_VERSION`."
- `anchors`:
  - `p9`: "#define I2C_CFG_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-I2C-CFG-VENDOR-ID-C
- `name`: "I2C_CFG_VENDOR_ID_C"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_CFG_VENDOR_ID_C`."
- `anchors`:
  - `p8`: "#define I2C_CFG_VENDOR_ID_C 174"
- `aliases`: []

### MACRO-I2C-MAX-CORE-ID
- `name`: "I2C_MAX_CORE_ID"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_MAX_CORE_ID`."
- `anchors`:
  - `p9`: "#define I2C_MAX_CORE_ID 3"
- `aliases`: []

### MACRO-I2C-MAX-MODULES
- `name`: "I2C_MAX_MODULES"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_MAX_MODULES`."
- `anchors`:
  - `p9`: "#define I2C_MAX_MODULES 2"
- `aliases`: []

### MACRO-I2C-MODULE-ID
- `name`: "I2C_MODULE_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_MODULE_ID`."
- `anchors`:
  - `p8`: "#define I2C_MODULE_ID 255"
- `aliases`: []

### MACRO-I2C-SW-MAJOR-VERSION
- `name`: "I2C_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_SW_MAJOR_VERSION`."
- `anchors`:
  - `p8`: "#define I2C_SW_MAJOR_VERSION 0"
- `aliases`: []

### MACRO-I2C-SW-MINOR-VERSION
- `name`: "I2C_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_SW_MINOR_VERSION`."
- `anchors`:
  - `p8`: "#define I2C_SW_MINOR_VERSION 4"
- `aliases`: []

### MACRO-I2C-SW-PATCH-VERSION
- `name`: "I2C_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_SW_PATCH_VERSION`."
- `anchors`:
  - `p8`: "#define I2C_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-I2C-TIMEOUT-LOOPS
- `name`: "I2C_TIMEOUT_LOOPS"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `I2C_TIMEOUT_LOOPS`."
- `anchors`:
  - `p9`: "#define I2C_TIMEOUT_LOOPS 1000U"
- `aliases`: []

### MACRO-I2C-VENDOR-ID
- `name`: "I2C_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `I2C_VENDOR_ID`."
- `anchors`:
  - `p8`: "#define I2C_VENDOR_ID 174"
- `aliases`: []

### MACRO-DIVIDE-BY-1
- `name`: "DIVIDE_BY_1"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_1`."
- `anchors`:
  - `p33`: "DIVIDE_BY_1"
- `aliases`: []

### MACRO-FCI2C-MCFGR1
- `name`: "FCI2C_MCFGR1"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `FCI2C_MCFGR1`."
- `anchors`:
  - `p33`: "PRESCALE: Configures FCI2C_MCFGR1[PRESCALE]"
- `aliases`: []

### MACRO-FCI2C-MCFGR3
- `name`: "FCI2C_MCFGR3"
- `type`: `macro`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "macro index entry for `FCI2C_MCFGR3`."
- `anchors`:
  - `p34`: "Pin Low Timeout: Configures FCI2C_MCFGR3[PINLOW]"
- `aliases`: []

### MACRO-FCI2C-MCR
- `name`: "FCI2C_MCR"
- `type`: `macro`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "macro index entry for `FCI2C_MCR`."
- `anchors`:
  - `p32`: "I2cMasterEnabledInDebug configures FCI2C_MCR[DBGEN]"
- `aliases`: []

### MACRO-FCI2C-SAMR
- `name`: "FCI2C_SAMR"
- `type`: `macro`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "macro index entry for `FCI2C_SAMR`."
- `anchors`:
  - `p36`: "The address of the slave: Configures FCI2C_SAMR[ADDR0]"
- `aliases`: []

### MACRO-FCI2C-SCR
- `name`: "FCI2C_SCR"
- `type`: `macro`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "macro index entry for `FCI2C_SCR`."
- `anchors`:
  - `p36`: "I2cSlaveFilterEnable configures FCI2C_SCR[FILTEN]"
- `aliases`: []

### MACRO-I2C-CH-CLOSED
- `name`: "I2C_CH_CLOSED"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `I2C_CH_CLOSED`."
- `anchors`:
  - `p11`: "I2C_CH_CLOSED = 5"
- `aliases`: []

### MACRO-I2C-CH-ERROR-PRESENT
- `name`: "I2C_CH_ERROR_PRESENT"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `I2C_CH_ERROR_PRESENT`."
- `anchors`:
  - `p11`: "I2C_CH_ERROR_PRESENT = 4"
- `aliases`: []

### MACRO-I2C-CH-IDLE
- `name`: "I2C_CH_IDLE"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `I2C_CH_IDLE`."
- `anchors`:
  - `p11`: "I2C_CH_IDLE = 0"
- `aliases`: []

### MACRO-I2C-CH-LISTENING
- `name`: "I2C_CH_LISTENING"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `I2C_CH_LISTENING`."
- `anchors`:
  - `p11`: "I2C_CH_LISTENING = 3"
- `aliases`: []

### MACRO-I2C-CH-RECEIVING
- `name`: "I2C_CH_RECEIVING"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `I2C_CH_RECEIVING`."
- `anchors`:
  - `p11`: "I2C_CH_RECEIVING = 2"
- `aliases`: []

### MACRO-I2C-CH-SENDING
- `name`: "I2C_CH_SENDING"
- `type`: `macro`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "macro index entry for `I2C_CH_SENDING`."
- `anchors`:
  - `p11`: "I2C_CH_SENDING = 1"
- `aliases`: []

### MACRO-MASTER-MODE
- `name`: "MASTER_MODE"
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "macro index entry for `MASTER_MODE`."
- `anchors`:
  - `p31`: "MASTER_MODE"
- `aliases`: []

### MACRO-PINCFG-2PIN-OPEN-DRAIN
- `name`: "PINCFG_2PIN_OPEN_DRAIN"
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "macro index entry for `PINCFG_2PIN_OPEN_DRAIN`."
- `anchors`:
  - `p31`: "PINCFG_2PIN_OPEN_DRAIN"
- `aliases`: []

### MACRO-DIVIDE-BY-128
- `name`: "DIVIDE_BY_128"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_128`."
- `anchors`:
  - `p33`: "DIVIDE_BY_128"
- `aliases`: []

### MACRO-DIVIDE-BY-16
- `name`: "DIVIDE_BY_16"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_16`."
- `anchors`:
  - `p33`: "DIVIDE_BY_16"
- `aliases`: []

### MACRO-DIVIDE-BY-2
- `name`: "DIVIDE_BY_2"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_2`."
- `anchors`:
  - `p33`: "DIVIDE_BY_2"
- `aliases`: []

### MACRO-DIVIDE-BY-32
- `name`: "DIVIDE_BY_32"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_32`."
- `anchors`:
  - `p33`: "DIVIDE_BY_32"
- `aliases`: []

### MACRO-DIVIDE-BY-4
- `name`: "DIVIDE_BY_4"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_4`."
- `anchors`:
  - `p33`: "DIVIDE_BY_4"
- `aliases`: []

### MACRO-DIVIDE-BY-64
- `name`: "DIVIDE_BY_64"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_64`."
- `anchors`:
  - `p33`: "DIVIDE_BY_64"
- `aliases`: []

### MACRO-DIVIDE-BY-8
- `name`: "DIVIDE_BY_8"
- `type`: `macro`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "macro index entry for `DIVIDE_BY_8`."
- `anchors`:
  - `p33`: "DIVIDE_BY_8"
- `aliases`: []

### MACRO-PINCFG-2PIN-PUSH-PULL
- `name`: "PINCFG_2PIN_PUSH_PULL"
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "macro index entry for `PINCFG_2PIN_PUSH_PULL`."
- `anchors`:
  - `p31`: "PINCFG_2PIN_PUSH_PULL"
- `aliases`: []

### MACRO-RESERVED-0
- `name`: "RESERVED_0"
- `type`: `macro`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "macro index entry for `RESERVED_0`."
- `anchors`:
  - `p13`: "uint8 RESERVED_0 [16]"
- `aliases`: []

### MACRO-RESERVED-1
- `name`: "RESERVED_1"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_1`."
- `anchors`:
  - `p14`: "uint8 RESERVED_1 [16]"
- `aliases`: []

### MACRO-RESERVED-10
- `name`: "RESERVED_10"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `RESERVED_10`."
- `anchors`:
  - `p15`: "uint8 RESERVED_10 [8]"
- `aliases`: []

### MACRO-RESERVED-11
- `name`: "RESERVED_11"
- `type`: `macro`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "macro index entry for `RESERVED_11`."
- `anchors`:
  - `p15`: "uint8 RESERVED_11 [12]"
- `aliases`: []

### MACRO-RESERVED-2
- `name`: "RESERVED_2"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_2`."
- `anchors`:
  - `p14`: "uint8 RESERVED_2 [4]"
- `aliases`: []

### MACRO-RESERVED-3
- `name`: "RESERVED_3"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_3`."
- `anchors`:
  - `p14`: "uint8 RESERVED_3 [12]"
- `aliases`: []

### MACRO-RESERVED-4
- `name`: "RESERVED_4"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_4`."
- `anchors`:
  - `p14`: "uint8 RESERVED_4 [12]"
- `aliases`: []

### MACRO-RESERVED-5
- `name`: "RESERVED_5"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_5`."
- `anchors`:
  - `p14`: "uint8 RESERVED_5 [16]"
- `aliases`: []

### MACRO-RESERVED-6
- `name`: "RESERVED_6"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_6`."
- `anchors`:
  - `p14`: "uint8 RESERVED_6 [140]"
- `aliases`: []

### MACRO-RESERVED-7
- `name`: "RESERVED_7"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_7`."
- `anchors`:
  - `p14`: "uint8 RESERVED_7 [4]"
- `aliases`: []

### MACRO-RESERVED-8
- `name`: "RESERVED_8"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_8`."
- `anchors`:
  - `p14`: "uint8 RESERVED_8 [20]"
- `aliases`: []

### MACRO-RESERVED-9
- `name`: "RESERVED_9"
- `type`: `macro`
- `primary_page`: `14`
- `physical_pages`: `14`
- `brief`: "macro index entry for `RESERVED_9`."
- `anchors`:
  - `p14`: "uint8 RESERVED_9 [12]"
- `aliases`: []

### MACRO-SLAVE-MODE
- `name`: "SLAVE_MODE"
- `type`: `macro`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "macro index entry for `SLAVE_MODE`."
- `anchors`:
  - `p31`: "SLAVE_MODE"
- `aliases`: []

### MACRO-STD-OFF
- `name`: "STD_OFF"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `STD_OFF`."
- `anchors`:
  - `p9`: "#define I2C_PRECOMPILE_SUPPORT (STD_OFF)"
- `aliases`: []

### TYPE-I2C-REQUESTTYPE
- `name`: "I2c_RequestType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13,16,19,20`
- `brief`: "type index entry for `I2c_RequestType`."
- `anchors`:
  - `p3`: "I2c_RequestType ...........................................................................................................................…"
  - `p13`: "I2c_RequestType"
  - `p16`: "Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
  - `p19`: "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
  - `p20`: "Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### TYPE-STD-RETURNTYPE
- `name`: "Std_ReturnType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16,18,19,20`
- `brief`: "type index entry for `Std_ReturnType`."
- `anchors`:
  - `p16`: "Std_ReturnType I2c_SyncTransmit(uint8 u8Channel, const I2c_RequestType *pRequestPtr)"
  - `p18`: "Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
  - `p19`: "Std_ReturnType FCIIC_MasterSyncSend(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
  - `p20`: "Std_ReturnType FCIIC_StartListening(uint8 u8Channel, uint8 u8I2cIdx, const I2c_RequestType *pRequest)"
- `aliases`: []

### TYPE-FCIIC-REGCFGTYPE
- `name`: "FCIIC_RegCfgType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12,18`
- `brief`: "type index entry for `FCIIC_RegCfgType`."
- `anchors`:
  - `p3`: "FCIIC_RegCfgType ..........................................................................................................................…"
  - `p12`: "const FCIIC_RegCfgType * tFCI2c_reg"
  - `p18`: "Std_ReturnType FCIIC_Init_Master(uint8 u8I2cIdx, uint8 u8CoreId, const FCIIC_RegCfgType *pInitReg)"
- `aliases`: []

### TYPE-I2C-CHANNELSTATUSTYPE
- `name`: "I2c_ChannelStatusType"
- `type`: `type`
- `primary_page`: `11`
- `physical_pages`: `11,15,20`
- `brief`: "type index entry for `I2c_ChannelStatusType`."
- `anchors`:
  - `p11`: "I2c_ChannelStatusType"
  - `p15`: "I2c_ChannelStatusType I2c _GetStatus(uint8 u8Channel)"
  - `p20`: "I2c_ChannelStatusType FCIIC_GetChannelStatus(uint8 u8I2cIdx)"
- `aliases`: []

### TYPE-I2C-CONFIGTYPE
- `name`: "I2c_ConfigType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,11,15`
- `brief`: "type index entry for `I2c_ConfigType`."
- `anchors`:
  - `p3`: "I2c_ConfigType ............................................................................................................................…"
  - `p11`: "I2c_ConfigType"
  - `p15`: "void I2c_Init(const I2c_ConfigType * pI2cCfg)"
- `aliases`: []

### TYPE-FCIIC-INITTYPE
- `name`: "FCIIC_InitType"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,12`
- `brief`: "type index entry for `FCIIC_InitType`."
- `anchors`:
  - `p3`: "FCIIC_InitType ............................................................................................................................…"
  - `p12`: "const FCIIC_InitType * tFCI2c_Config"
- `aliases`: []

### TYPE-FCIIC-TYPE
- `name`: "FCIIC_Type"
- `type`: `type`
- `primary_page`: `3`
- `physical_pages`: `3,13`
- `brief`: "type index entry for `FCIIC_Type`."
- `anchors`:
  - `p3`: "FCIIC_Type ................................................................................................................................…"
  - `p13`: "FCIIC_Type"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `16`
- `physical_pages`: `16`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p16`: "void I2c_GetVersionInfo (Std_VersionInfoType *pVersionInfo)"
- `aliases`: []

### FILE-CDD-I2C-TYPES-H
- `name`: "CDD_I2c_Types.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,9,11`
- `brief`: "file index entry for `CDD_I2c_Types.h`."
- `anchors`:
  - `p3`: "Macros in CDD_I2c_Types.h .................................................................................................................…"
  - `p9`: "Macros in CDD_I2c_Types.h"
  - `p11`: "Enums in CDD_I2c_Types.h"
- `aliases`: []

### FILE-CDD-I2C-H
- `name`: "CDD_I2c.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,6,15`
- `brief`: "file index entry for `CDD_I2c.h`."
- `anchors`:
  - `p3`: "Macros in CDD_I2c.h .......................................................................................................................…"
  - `p6`: "Macros in CDD_I2c.h"
  - `p15`: "Functions in CDD_I2c.h"
- `aliases`: []

### FILE-CDD-I2C-CFG-H
- `name`: "CDD_I2c_Cfg.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,8`
- `brief`: "file index entry for `CDD_I2c_Cfg.h`."
- `anchors`:
  - `p3`: "Macros in CDD_I2c_Cfg.h ...................................................................................................................…"
  - `p8`: "Macros in CDD_I2c_Cfg.h"
- `aliases`: []

### FILE-CDD-I2C-HW-H
- `name`: "CDD_I2c_Hw.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,18`
- `brief`: "file index entry for `CDD_I2c_Hw.h`."
- `anchors`:
  - `p3`: "Functions in CDD_I2c_Hw.h .................................................................................................................…"
  - `p18`: "Functions in CDD_I2c_Hw.h"
- `aliases`: []

### FILE-I2C-VERSION-H
- `name`: "I2c_version.h"
- `type`: `file`
- `primary_page`: `3`
- `physical_pages`: `3,8`
- `brief`: "file index entry for `I2c_version.h`."
- `anchors`:
  - `p3`: "Macros in I2c_version.h ...................................................................................................................…"
  - `p8`: "Macros in I2c_version.h"
- `aliases`: []

### FILE-CDD-I2C-PBCFG-C
- `name`: "CDD_I2c_PBcfg.c"
- `type`: `file`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "file index entry for `CDD_I2c_PBcfg.c`."
- `anchors`:
  - `p15`: "parameter is generated by CDD_I2c_PBcfg.c file"
- `aliases`: []

### TERM-I2C
- `name`: "I2C"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10`
- `brief`: "term index entry for `I2C`."
- `anchors`:
  - `p1`: "I2C"
  - `p2`: "I2C"
  - `p3`: "I2C"
  - `p4`: "I2C"
  - `p5`: "I2C"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `5`
- `physical_pages`: `5,32,33,39,40,41`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p5`: "AUTOSAR"
  - `p32`: "AUTOSAR"
  - `p33`: "AUTOSAR"
  - `p39`: "AUTOSAR"
  - `p40`: "AUTOSAR"
- `aliases`: []

### TERM-CDD-I2C-TYPES
- `name`: "CDD_I2c_Types"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,9,11`
- `brief`: "term index entry for `CDD_I2c_Types`."
- `anchors`:
  - `p3`: "Macros in CDD_I2c_Types.h .................................................................................................................…"
  - `p9`: "Macros in CDD_I2c_Types.h"
  - `p11`: "Enums in CDD_I2c_Types.h"
- `aliases`: []

### TERM-I2CDATAVALIDDELAY
- `name`: "I2cDataValidDelay"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35,38`
- `brief`: "term index entry for `I2cDataValidDelay`."
- `anchors`:
  - `p35`: "I2cDataValidDelay"
  - `p38`: "I2cDataValidDelay"
- `aliases`: []

### TERM-I2CGLITCHFILTERSCL
- `name`: "I2cGlitchFilterSCL"
- `type`: `term`
- `primary_page`: `34`
- `physical_pages`: `34,38`
- `brief`: "term index entry for `I2cGlitchFilterSCL`."
- `anchors`:
  - `p34`: "I2cGlitchFilterSCL"
  - `p38`: "I2cGlitchFilterSCL"
- `aliases`: []

### TERM-I2CGLITCHFILTERSDA
- `name`: "I2cGlitchFilterSDA"
- `type`: `term`
- `primary_page`: `33`
- `physical_pages`: `33,38`
- `brief`: "term index entry for `I2cGlitchFilterSDA`."
- `anchors`:
  - `p33`: "I2cGlitchFilterSDA"
  - `p38`: "I2cGlitchFilterSDA"
- `aliases`: []

### TERM-I2CCLOCKREF
- `name`: "I2cClockRef"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32,36`
- `brief`: "term index entry for `I2cClockRef`."
- `anchors`:
  - `p32`: "I2cClockRef"
  - `p36`: "I2cClockRef"
- `aliases`: []

### TERM-I2CECUCPARTITIONREF
- `name`: "I2cEcucPartitionRef"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,29`
- `brief`: "term index entry for `I2cEcucPartitionRef`."
- `anchors`:
  - `p4`: "I2cEcucPartitionRef .......................................................................................................................…"
  - `p29`: "I2cEcucPartitionRef"
- `aliases`: []

### TERM-CDD-I2C-CFG
- `name`: "CDD_I2c_Cfg"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,8`
- `brief`: "term index entry for `CDD_I2c_Cfg`."
- `anchors`:
  - `p3`: "Macros in CDD_I2c_Cfg.h ...................................................................................................................…"
  - `p8`: "Macros in CDD_I2c_Cfg.h"
- `aliases`: []

### TERM-CDD-I2C-HW
- `name`: "CDD_I2c_Hw"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,18`
- `brief`: "term index entry for `CDD_I2c_Hw`."
- `anchors`:
  - `p3`: "Functions in CDD_I2c_Hw.h .................................................................................................................…"
  - `p18`: "Functions in CDD_I2c_Hw.h"
- `aliases`: []

### TERM-I2C-VERSION
- `name`: "I2c_version"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,8`
- `brief`: "term index entry for `I2c_version`."
- `anchors`:
  - `p3`: "Macros in I2c_version.h ...................................................................................................................…"
  - `p8`: "Macros in I2c_version.h"
- `aliases`: []

### TERM-I2CSLAVEACKSTALL
- `name`: "I2cSlaveAckStall"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `I2cSlaveAckStall`."
- `anchors`:
  - `p37`: "I2cSlaveAckStall"
- `aliases`: []

### TERM-I2CMASTERENABLEDINDEBUG
- `name`: "I2cMasterEnabledInDebug"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "term index entry for `I2cMasterEnabledInDebug`."
- `anchors`:
  - `p32`: "I2cMasterEnabledInDebug"
- `aliases`: []

### TERM-I2CSLAVEADRSTALL
- `name`: "I2cSlaveAdrStall"
- `type`: `term`
- `primary_page`: `38`
- `physical_pages`: `38`
- `brief`: "term index entry for `I2cSlaveAdrStall`."
- `anchors`:
  - `p38`: "I2cSlaveAdrStall"
- `aliases`: []

### TERM-I2CSLAVEFILTERENABLE
- `name`: "I2cSlaveFilterEnable"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `I2cSlaveFilterEnable`."
- `anchors`:
  - `p36`: "I2cSlaveFilterEnable"
- `aliases`: []

### TERM-I2CASYNCMODE
- `name`: "I2cAsyncMode"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "term index entry for `I2cAsyncMode`."
- `anchors`:
  - `p32`: "I2cAsyncMode"
- `aliases`: []

### TERM-I2CBUSIDLETIMEOUT
- `name`: "I2cBusIdleTimeout"
- `type`: `term`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "term index entry for `I2cBusIdleTimeout`."
- `anchors`:
  - `p34`: "I2cBusIdleTimeout"
- `aliases`: []

### TERM-I2CCLOCKHIGHPERIOD
- `name`: "I2cClockHighPeriod"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `I2cClockHighPeriod`."
- `anchors`:
  - `p35`: "I2cClockHighPeriod"
- `aliases`: []

### TERM-I2CCLOCKHOLDPERIOD
- `name`: "I2cClockHoldPeriod"
- `type`: `term`
- `primary_page`: `39`
- `physical_pages`: `39`
- `brief`: "term index entry for `I2cClockHoldPeriod`."
- `anchors`:
  - `p39`: "I2cClockHoldPeriod"
- `aliases`: []

### TERM-I2CCLOCKLOWPERIOD
- `name`: "I2cClockLowPeriod"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `I2cClockLowPeriod`."
- `anchors`:
  - `p35`: "I2cClockLowPeriod"
- `aliases`: []

### TERM-I2CCTRLECUCPARTITIONREF
- `name`: "I2cCtrlEcucPartitionRef"
- `type`: `term`
- `primary_page`: `31`
- `physical_pages`: `31`
- `brief`: "term index entry for `I2cCtrlEcucPartitionRef`."
- `anchors`:
  - `p31`: "I2cCtrlEcucPartitionRef"
- `aliases`: []

### TERM-I2CDEVERRORDETECT
- `name`: "I2cDevErrorDetect"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `I2cDevErrorDetect`."
- `anchors`:
  - `p27`: "I2cDevErrorDetect"
- `aliases`: []

### TERM-I2CDMAUSED
- `name`: "I2cDmaUsed"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `I2cDmaUsed`."
- `anchors`:
  - `p27`: "I2cDmaUsed"
- `aliases`: []

### TERM-I2CMULTICORESUPPORT
- `name`: "I2cMulticoreSupport"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `I2cMulticoreSupport`."
- `anchors`:
  - `p27`: "I2cMulticoreSupport"
- `aliases`: []

### TERM-I2CPINLOWTIMEOUT
- `name`: "I2cPinLowTimeout"
- `type`: `term`
- `primary_page`: `34`
- `physical_pages`: `34`
- `brief`: "term index entry for `I2cPinLowTimeout`."
- `anchors`:
  - `p34`: "I2cPinLowTimeout"
- `aliases`: []

### TERM-I2CPRESCALER
- `name`: "I2cPrescaler"
- `type`: `term`
- `primary_page`: `33`
- `physical_pages`: `33`
- `brief`: "term index entry for `I2cPrescaler`."
- `anchors`:
  - `p33`: "I2cPrescaler"
- `aliases`: []

### TERM-I2CSETUPHOLDDELAY
- `name`: "I2cSetupHoldDelay"
- `type`: `term`
- `primary_page`: `35`
- `physical_pages`: `35`
- `brief`: "term index entry for `I2cSetupHoldDelay`."
- `anchors`:
  - `p35`: "I2cSetupHoldDelay"
- `aliases`: []

### TERM-I2CSLAVEADDRESS
- `name`: "I2cSlaveAddress"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `I2cSlaveAddress`."
- `anchors`:
  - `p36`: "I2cSlaveAddress"
- `aliases`: []

### TERM-I2CSLAVERXSTALL
- `name`: "I2cSlaveRxStall"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `I2cSlaveRxStall`."
- `anchors`:
  - `p37`: "I2cSlaveRxStall"
- `aliases`: []

### TERM-I2CSLAVETXSTALL
- `name`: "I2cSlaveTxStall"
- `type`: `term`
- `primary_page`: `37`
- `physical_pages`: `37`
- `brief`: "term index entry for `I2cSlaveTxStall`."
- `anchors`:
  - `p37`: "I2cSlaveTxStall"
- `aliases`: []

### TERM-I2CTIMEOUTDURATION
- `name`: "I2cTimeoutDuration"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `I2cTimeoutDuration`."
- `anchors`:
  - `p27`: "I2cTimeoutDuration"
- `aliases`: []

### TERM-I2CVERSIONINFOAPI
- `name`: "I2cVersionInfoApi"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `I2cVersionInfoApi`."
- `anchors`:
  - `p27`: "I2cVersionInfoApi"
- `aliases`: []

### TERM-CDD-I2C-PBCFG
- `name`: "CDD_I2c_PBcfg"
- `type`: `term`
- `primary_page`: `15`
- `physical_pages`: `15`
- `brief`: "term index entry for `CDD_I2c_PBcfg`."
- `anchors`:
  - `p15`: "parameter is generated by CDD_I2c_PBcfg.c file"
- `aliases`: []

### TERM-DEM
- `name`: "Dem"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Dem`."
- `anchors`:
  - `p1`: "Dem"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p27`: "Det"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `27`
- `physical_pages`: `27`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p27`: "Switches the Development Error Detection and Notification ON or OFF."
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

### TERM-I2C-INIT
- `name`: "I2C_Init"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `I2C_Init`."
- `anchors`:
  - `p7`: "API I2C_Init service called while the I2C Driver has already been initialized."
- `aliases`: []

### TERM-I2CBAUDRATE
- `name`: "I2cBaudRate"
- `type`: `term`
- `primary_page`: `36`
- `physical_pages`: `36`
- `brief`: "term index entry for `I2cBaudRate`."
- `anchors`:
  - `p36`: "I2cBaudRate"
- `aliases`: []

### TERM-I2C-COREID
- `name`: "I2c_CoreId"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `I2c_CoreId`."
- `anchors`:
  - `p11`: "uint8 I2c_CoreId"
- `aliases`: []

### TERM-I2C-MAXHWUNIT
- `name`: "I2c_MaxHwUnit"
- `type`: `term`
- `primary_page`: `11`
- `physical_pages`: `11`
- `brief`: "term index entry for `I2c_MaxHwUnit`."
- `anchors`:
  - `p11`: "uint8 I2c_MaxHwUnit"
- `aliases`: []

### TERM-INTER-INTEGRATED-CIRCUIT-I2C-COMPLEX-DEVICE-DRIVER
- `name`: "Inter-Integrated Circuit / I2C Complex Device Driver"
- `type`: `term`
- `primary_page`: `1`
- `physical_pages`: `1`
- `brief`: "term index entry for `Inter-Integrated Circuit / I2C Complex Device Driver`."
- `anchors`:
  - `p1`: "Inter-Integrated Circuit / I2C Complex Device Driver"
- `aliases`: []

### TERM-MCAL
- `name`: "MCAL"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2`
- `brief`: "term index entry for `MCAL`."
- `anchors`:
  - `p2`: "MCAL"
- `aliases`: []

### TERM-MCUCLOCKREFERENCEPOINT
- `name`: "McuClockReferencePoint"
- `type`: `term`
- `primary_page`: `32`
- `physical_pages`: `32`
- `brief`: "term index entry for `McuClockReferencePoint`."
- `anchors`:
  - `p32`: "tion/McuClockSettingConfig/McuClockReferencePoint"
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

### ALIAS-I2C
- `canonical`: "I2C"
- `aliases`: ["Inter-Integrated Circuit / I2C Complex Device Driver", "I2C 总线 / 复杂设备驱动", "I2C module", "I2C driver", "I2C User Manual", "I2C Integration Manual", "I2c", "IIC", "Inter-Integrated Circuit", "FCIIC", "FCI2C", "I2C CDD", "I2C 总线"]
- `related_ids`: ["TERM-I2C"]

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

### ALIAS-I2C-TRANSFER
- `canonical`: "I2C transfer"
- `aliases`: ["SyncTransmit", "AsyncTransmit", "I2c_SyncTransmit", "I2c_AsyncTransmit", "StartListening"]
- `related_ids`: []

### ALIAS-I2C-MASTER-SLAVE
- `canonical`: "I2C master/slave"
- `aliases`: ["master mode", "slave mode", "I2cMasterConfiguration", "I2cSlaveConfiguration"]
- `related_ids`: []


## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: `Close keyword lookup gaps between I2C_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `I2C_User_Manual.pdf`
- `source_pdf_sha256`: `835fee225f76b8e229023deeb8425d1ffc4242c38fe1ba1bcc6bfe8f6349d62b`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `325`
- `technical_missing_terms_added`: `29`
- `pages_with_added_terms`: `44`
- `supplemented_missing_token_count`: `325`
- `supplemented_missing_technical_token_count`: `29`
- `supplemented_physical_pages_count`: `44`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "0.3"
  - "1.0"
  - "3.0"
  - "Confidential"
  - "Initial"
  - "Proprietary"
  - "release"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "2.5"
  - "Confidential"
  - "Proprietary"
  - "Typedefs"

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
  - "Proprietary"
  - "asynchronous"
  - "both"
  - "complex"
  - "configure"
  - "defined"
  - "device"
  - "either"
  - "errors"
  - "implemented"
  - "implementing"
  - "implements"
  - "independent"
  - "information"
  - "initiate"
  - "interrupts"
  - "manager"
  - "may"
  - "offers"
  - "operates"
  - "peripherals"
  - "protocol"
  - "provides"
  - "reports"
  - "required"
  - "sent"
  - "settings"
  - "software"
  - "standard"
  - "support"
  - "synchronous"
  - "that"
  - "transfers"
  - "upper"
  - "uses"
  - "using"
  - "will"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "job"
  - "length"
  - "unexpected"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "Bus"
  - "Confidential"
  - "Proprietary"
  - "another"
  - "case"
  - "core"
  - "happens"
  - "larger"
  - "line"
  - "loses"
  - "overflow"
  - "procedure"
  - "received"
  - "stuck"
  - "timeout"
  - "underflow"
  - "won"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "pin"
  - "timeout"
  - "uninit"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "direction"
  - "empty"
  - "mask"
  - "read"
  - "write"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "2.5"
  - "Confidential"
  - "Enumeration"
  - "Fields"
  - "Pointer"
  - "Proprietary"
  - "Typedefs"
  - "Values"
  - "closed"
  - "current"
  - "enum"
  - "idle"
  - "listening"
  - "maximum"
  - "present"
  - "receiving"
  - "send"
  - "sending"
  - "status"
  - "unit"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Clock"
  - "Confidential"
  - "Control"
  - "Define"
  - "Fields"
  - "Init"
  - "MCCR"
  - "MCFGR0"
  - "Proprietary"
  - "Receive"
  - "Watermark"
  - "bit"
  - "dma"
  - "ended"
  - "format"
  - "initial"
  - "register"
  - "registers"
  - "struct"
  - "u8HwIndex"
  - "u8MasterMode"
  - "u8SlaveAddr"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "0x10"
  - "0x14"
  - "0x18"
  - "0x1C"
  - "0x20"
  - "0x24"
  - "0x28"
  - "BufferPtr"
  - "Confidential"
  - "Control"
  - "Enable"
  - "Fields"
  - "Interrupt"
  - "MCFGR0"
  - "MIER"
  - "MSR"
  - "Pointer"
  - "Proprietary"
  - "Read"
  - "bit"
  - "buffer"
  - "bytes"
  - "direction"
  - "layout"
  - "length"
  - "read"
  - "registers"
  - "request"
  - "struct"
  - "u8Direction"
  - "u8Len"
  - "u8RxDmaChannel"
  - "u8SlaveAddress"
  - "write"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "0x110"
  - "0x114"
  - "0x118"
  - "0x11C"
  - "0x124"
  - "0x128"
  - "0x140"
  - "0x40"
  - "0x48"
  - "0x58"
  - "0x5C"
  - "0x60"
  - "0x70"
  - "Clock"
  - "Confidential"
  - "Control"
  - "Enable"
  - "Interrupt"
  - "MCCR"
  - "MFSR"
  - "MRDR"
  - "MTDR"
  - "Proprietary"
  - "Receive"
  - "SDER"
  - "SIER"
  - "SSR"
  - "Transmit"
  - "__O"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "0x154"
  - "0x160"
  - "0x170"
  - "ACK"
  - "Channel"
  - "Confidential"
  - "PostBuid"
  - "Proprietary"
  - "Receive"
  - "SRDR"
  - "STDR"
  - "Transmit"
  - "Variant"
  - "__O"
  - "enum"
  - "get"
  - "initial"
  - "initialize"
  - "reserved"
  - "status"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Pointer"
  - "Proprietary"
  - "Synchronous"
  - "asynchronous"
  - "buffer"
  - "communication"
  - "direction"
  - "get"
  - "information"
  - "instance"
  - "length"
  - "others"
  - "out"
  - "send"
  - "store"
  - "where"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "Confidential"
  - "Core"
  - "Proprietary"
  - "corresponding"
  - "initialize"
  - "need"
  - "others"
  - "pInitCfg"
  - "registers"
  - "unit"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Asynchronous"
  - "Confidential"
  - "Proprietary"
  - "inout"
  - "others"
  - "request"
  - "send"
  - "synchronous"
  - "u8Index"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "Proprietary"
  - "current"
  - "enum"
  - "get"
  - "handler"
  - "inout"
  - "others"
  - "request"
  - "status"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "Confidential"
  - "Init"
  - "Proprietary"
  - "calls"
  - "example"
  - "running"
  - "shows"
  - "transition"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "Confidential"
  - "Label"
  - "Non"
  - "Proprietary"
  - "Range"
  - "Variant"
  - "global"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "Confidential"
  - "FALSE"
  - "Proprietary"
  - "Specifies"
  - "blocking"
  - "loops"
  - "maximum"
  - "raised"
  - "support"
  - "timeout"
  - "until"
  - "wait"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "Confidential"
  - "FALSE"
  - "Only"
  - "Proprietary"
  - "applicable"
  - "callout"
  - "completes"
  - "matching"
  - "reception"
  - "transmission"
  - "when"
  - "will"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "Confidential"
  - "ECUC"
  - "List"
  - "Maps"
  - "Only"
  - "Proprietary"
  - "after"
  - "applicable"
  - "available"
  - "byte"
  - "callout"
  - "completes"
  - "each"
  - "every"
  - "independent"
  - "instance"
  - "make"
  - "multiple"
  - "operate"
  - "partitions"
  - "received"
  - "reception"
  - "transmission"
  - "when"
  - "will"
  - "zero"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "Identifies"
  - "LIST"
  - "List"
  - "Proprietary"
  - "Range"
  - "SYMBOLIC"
  - "Selects"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "Confidential"
  - "ECUC"
  - "Maps"
  - "Proprietary"
  - "Range"
  - "Select"
  - "Selects"
  - "controller"
  - "one"
  - "pin"
  - "selected"
  - "wether"
  - "will"
  - "zero"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "Confidential"
  - "FALSE"
  - "INTERRUPT"
  - "MCU"
  - "Proprietary"
  - "Range"
  - "Select"
  - "Selects"
  - "Uncheck"
  - "clock"
  - "debug"
  - "disable"
  - "logical"
  - "transive"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "Confidential"
  - "Glitches"
  - "Proprietary"
  - "Range"
  - "Select"
  - "all"
  - "clock"
  - "digital"
  - "disable"
  - "except"
  - "filtered"
  - "filters"
  - "high"
  - "ignored"
  - "input"
  - "latency"
  - "logic"
  - "logical"
  - "long"
  - "out"
  - "prescaler"
  - "through"
  - "will"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "BUSIDLE"
  - "Bus"
  - "Confidential"
  - "Glitches"
  - "Idle"
  - "PLTF"
  - "Proprietary"
  - "When"
  - "assumed"
  - "both"
  - "clock"
  - "digital"
  - "disable"
  - "disabled"
  - "feature"
  - "filtered"
  - "filters"
  - "flag"
  - "generate"
  - "high"
  - "idle"
  - "ignored"
  - "input"
  - "latency"
  - "long"
  - "longer"
  - "out"
  - "pin"
  - "through"
  - "timeout"
  - "will"
  - "zero"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "CLKHI"
  - "CLKLO"
  - "Clock"
  - "Confidential"
  - "Hold"
  - "Ignoring"
  - "Must"
  - "Period"
  - "Proprietary"
  - "SETHOLD"
  - "Setup"
  - "additional"
  - "board"
  - "clock"
  - "detect"
  - "driven"
  - "due"
  - "edge"
  - "extended"
  - "external"
  - "high"
  - "hold"
  - "loading"
  - "minus"
  - "one"
  - "pin"
  - "repeated"
  - "rising"
  - "setup"
  - "takes"
  - "that"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "CLKHI"
  - "CLKLO"
  - "Calculated"
  - "Channel"
  - "Confidential"
  - "FLOAT"
  - "Frequency"
  - "PRESCALER"
  - "Proprietary"
  - "bandwidth"
  - "clock"
  - "counter"
  - "digital"
  - "faster"
  - "functional"
  - "least"
  - "output"
  - "times"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "ACK"
  - "Clock"
  - "Confidential"
  - "Enables"
  - "FALSE"
  - "Proprietary"
  - "RXSTALL"
  - "Register"
  - "TRUE"
  - "TXSTALL"
  - "Transmit"
  - "When"
  - "allow"
  - "before"
  - "bit"
  - "byte"
  - "clock"
  - "compatible"
  - "during"
  - "either"
  - "flag"
  - "high"
  - "need"
  - "occurs"
  - "receiver"
  - "software"
  - "speed"
  - "therefore"
  - "transmitted"
  - "transmitting"
  - "when"
  - "write"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "Clock"
  - "Confidential"
  - "Enables"
  - "FALSE"
  - "Glitches"
  - "Proprietary"
  - "asserted"
  - "bit"
  - "clock"
  - "compatible"
  - "digital"
  - "disable"
  - "filtered"
  - "filters"
  - "flag"
  - "high"
  - "ignored"
  - "input"
  - "latency"
  - "long"
  - "occurs"
  - "out"
  - "speed"
  - "therefore"
  - "through"
  - "when"
  - "will"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "CLKHOLD"
  - "Clock"
  - "Confidential"
  - "Hold"
  - "Major"
  - "Period"
  - "Proprietary"
  - "about"
  - "aggregated"
  - "all"
  - "appropriate"
  - "clock"
  - "disabled"
  - "driven"
  - "high"
  - "hold"
  - "information"
  - "minus"
  - "modules"
  - "one"
  - "published"
  - "specification"
  - "speed"
  - "that"
  - "versions"
  - "when"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "Confidential"
  - "Major"
  - "Minor"
  - "Patch"
  - "Proprietary"
  - "appropriate"
  - "level"
  - "numbering"
  - "specification"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "Confidential"
  - "List"
  - "Module"
  - "Proprietary"
  - "Vendor"
  - "according"
  - "dedicated"
  - "list"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"
  - "async"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "Confidential"
  - "Proprietary"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "Confidential"
  - "Double"
  - "Proprietary"
  - "click"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "Confidential"
  - "Generate"
  - "Proprietary"
  - "files"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45`
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
- `physical_pages`: `2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20,21,25,26,30,31,32,33,36,42`
- `affected_ids`: ["TBL-0002-001", "TBL-0003-001", "TBL-0004-001", "TBL-0005-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0009-001", "TBL-0010-001", "TBL-0011-001", "TBL-0012-001", "TBL-0013-001", "TBL-0015-001", "TBL-0016-001", "TBL-0017-001", "TBL-0018-001", "TBL-0019-001", "TBL-0020-001", "TBL-0021-001", "TBL-0025-001", "TBL-0026-001", "TBL-0030-001", "TBL-0031-001", "TBL-0032-001", "TBL-0033-001", "TBL-0036-001", "TBL-0042-001"]
- `message`: "27 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0005
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `3,4,12,13,15,16,17,18,19,20`
- `affected_ids`: ["FIG-0003-001", "FIG-0004-001", "FIG-0012-001", "FIG-0013-001", "FIG-0015-001", "FIG-0016-001", "FIG-0017-001", "FIG-0018-001", "FIG-0019-001", "FIG-0020-001"]
- `message`: "10 generated visual anchors have no formal source figure number."
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
- `pdf_page_count`: `45`
- `indexed_physical_pages_count`: `45`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `122`
- `table_index_count`: `27`
- `figure_index_count`: `79`
- `symbol_index_count`: `214`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `835fee225f76b8e229023deeb8425d1ffc4242c38fe1ba1bcc6bfe8f6349d62b`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `325`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->