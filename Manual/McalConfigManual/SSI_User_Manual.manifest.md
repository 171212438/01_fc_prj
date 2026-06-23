---
manifest_schema_version: "1.1"
source_pdf: "SSI_User_Manual.pdf"
source_pdf_sha256: "4f8c75eef4dc9d2eed39c63c7c61900caf24c05c46338a77fae2fbbf98f91118"
source_pdf_size_bytes: 752154
pdf_page_count: 25
generated_at: "2026-06-19T14:31:25Z"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.1-batch-patched-spi-ssi-trgsel-uart"
source_document_id: null
source_document_revision: "Rev: 1.2.0"
page_numbering_policy: "physical_page is 1-based PDF page index; printed_page is a source-visible footer label only"
overall_status: "pass_with_warnings"
---

# PDF Manifest: SSI_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always a 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index, not a replacement for the source PDF.
- Important entries include short anchors so ChatGPT/Codex can verify claims against the source PDF.
- Tables and figures are indexed for navigation; entries with `quality_flags` or lower confidence require source-PDF verification.
- Treat this Manifest as stale if the SHA256 of the local PDF differs from `source_pdf_sha256`.

## 1. Document Metadata

- `source_pdf`: `SSI_User_Manual.pdf`
- `source_pdf_sha256`: `4f8c75eef4dc9d2eed39c63c7c61900caf24c05c46338a77fae2fbbf98f91118`
- `source_pdf_size_bytes`: `752154`
- `pdf_page_count`: `25`
- `source_document_id`: `null`
- `source_document_revision`: `Rev: 1.2.0`
- `visible_cover_title`: `User's Manual Ssi User's Manual for FC7300F8MDQ`
- `visible_cover_revision`: `Rev: 1.2.0`
- `revision_history_latest_row`: `None`
- `generated_at`: `2026-06-19T14:31:25Z`
- `generator_name`: `chatgpt-pdf-manifest-generator`
- `generator_version`: `0.6.1-batch-patched-spi-ssi-trgsel-uart`
- `manifest_schema_version`: `1.1`
- `pdf_format`: `PDF 1.7`
- `pdf_encrypted`: `False`
- `pdf_outline_items`: `0`
- `pdf_internal_link_annotations`: `78`
- `ocr_status`: `not_run_text_layer_available`
- `text_extraction_engine`: `PyMuPDF 1.26.7 / MuPDF`
- `image_extraction_policy`: `index embedded image blocks and generated visual anchors; do not OCR screenshots by default`

## 2. Global Summary

- `topic`: "FC7xxx AUTOSAR MCAL SSI module - User Manual"
- `module_scope`: "SSI driver user-facing design, requirement tracing, hardware summary, APIs, macros/types/structures, sequence diagrams, Tresos configuration containers and configuration guides."
- `key_chapters`: ["Chapter 1 Ssi Introduction", "Chapter 1 Ssi Introduction", "Chapter 2 Software Design", "Chapter 2 Software Design", "Chapter 2 Software Design", "Chapter 2 Software Design", "Chapter 2 Software Design", "Chapter 2 Software Design", "Chapter 3 Tresos Configuration Items", "Chapter 3 Tresos Configuration Items", "Chapter 3 Tresos Configuration Items", "Chapter 3 Tresos Configuration Items"]
- `key_terms`: ["SSI", "Synchronous Serial Interface / Sensor Serial Interface Complex Device Driver", "Complex Device Driver / vendor-specific SSI driver", "MCAL", "AUTOSAR", "EB tresos", "Det", "Dem", "Rte", "Ssi", "CDD_Ssi", "CDD_SSI", "LLD_Ssi", "SSI_"]
- `summary`: "This 25-page user manual indexes SSI content across source physical pages 1-25, including sections, page segments, tables/table-like regions, figures/visual anchors, technical symbols and aliases."
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
- `keywords`: ["Ssi", "FC7300F8MDQ", "Rev", "Target", "Devices", "Semiconductors", "April"]
- `anchor`: "User's Manual Ssi User's Manual for FC7300F8MDQ"

### SEC-0002-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `2`
- `physical_page_end`: `2`
- `printed_page_start`: `2`
- `printed_page_end`: `2`
- `keywords`: ["CDD_Ssi", "Ssi", "reference", "FC7300F8MDQ", "CDD", "Ssi_StatusType", "Ssi_ReturnType", "Ssi_ProtocolModeType"]
- `anchor`: "Table of Contents"

### SEC-0003-TOC
- `source_number`: `None`
- `title`: "Table of Contents"
- `path`: "Table of Contents"
- `physical_page_start`: `3`
- `physical_page_end`: `3`
- `printed_page_start`: `3`
- `printed_page_end`: `3`
- `keywords`: ["SsiControllerConfig", "SsiControllerId", "SsiHWInstance", "SsiControllerEcucPartitionRef", "SsiModuleClockRef", "SsiModuleClock", "SsiPrescaler", "SsiLowGlobalCounterWindows"]
- `anchor`: "Table of Contents"

### SEC-001
- `source_number`: `Chapter 1`
- `title`: "Ssi Introduction"
- `path`: "Chapter 1 Ssi Introduction"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SSI", "Ssi", "CDD", "PWM", "AUTOSAR", "speed", "can", "interface"]
- `anchor`: "Chapter 1. Ssi Introduction"

### SEC-001-001
- `source_number`: `1.1`
- `title`: "Requirements"
- `path`: "Chapter 1 Ssi Introduction / 1.1 Requirements"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SSI", "Ssi", "CDD", "PWM", "AUTOSAR", "speed", "can", "interface"]
- `anchor`: "1.1. Requirements"

### SEC-001-002
- `source_number`: `1.2`
- `title`: "Introduction to CDD"
- `path`: "Chapter 1 Ssi Introduction / 1.2 Introduction to CDD"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SSI", "Ssi", "CDD", "PWM", "AUTOSAR", "speed", "can", "interface"]
- `anchor`: "1.2. Introduction to CDD"

### SEC-001-003
- `source_number`: `1.3`
- `title`: "Hardware Summary"
- `path`: "Chapter 1 Ssi Introduction / 1.3 Hardware Summary"
- `physical_page_start`: `4`
- `physical_page_end`: `4`
- `printed_page_start`: `4`
- `printed_page_end`: `4`
- `keywords`: ["SSI", "Ssi", "CDD", "PWM", "AUTOSAR", "speed", "can", "interface"]
- `anchor`: "1.3. Hardware Summary"

### SEC-001-02
- `source_number`: `Chapter 1`
- `title`: "Ssi Introduction"
- `path`: "Chapter 1 Ssi Introduction"
- `physical_page_start`: `5`
- `physical_page_end`: `5`
- `printed_page_start`: `5`
- `printed_page_end`: `5`
- `keywords`: ["Ssi", "PWM", "flag", "set", "end", "current", "ADC", "protocol"]
- `anchor`: "Chapter 1. Ssi Introduction"

### SEC-002
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "Chapter 2. Software Design"

### SEC-002-001
- `source_number`: `2.1`
- `title`: "Deviation form Requirements"
- `path`: "Chapter 2 Software Design / 2.1 Deviation form Requirements"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.1. Deviation form Requirements"

### SEC-002-002
- `source_number`: `2.2`
- `title`: "File Structure"
- `path`: "Chapter 2 Software Design / 2.2 File Structure"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.2. File Structure"

### SEC-002-003
- `source_number`: `2.3`
- `title`: "Define and Macro reference"
- `path`: "Chapter 2 Software Design / 2.3 Define and Macro reference"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.3. Define and Macro reference"

### SEC-002-003-001
- `source_number`: `2.3.1`
- `title`: "Macros in CDD_Ssi.c"
- `path`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.1 Macros in CDD_Ssi.c"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.3.1. Macros in CDD_Ssi.c"

### SEC-002-003-002
- `source_number`: `2.3.2`
- `title`: "Macros in CDD_Ssi.h"
- `path`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.2 Macros in CDD_Ssi.h"
- `physical_page_start`: `6`
- `physical_page_end`: `6`
- `printed_page_start`: `6`
- `printed_page_end`: `6`
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "2.3.2. Macros in CDD_Ssi.h"

### SEC-002-02
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "Ssi", "define", "called", "protocol", "Ssi_StatusType", "Defines", "typedef"]
- `anchor`: "Chapter 2. Software Design"

### SEC-002-004
- `source_number`: `2.4`
- `title`: "Enum reference"
- `path`: "Chapter 2 Software Design / 2.4 Enum reference"
- `physical_page_start`: `7`
- `physical_page_end`: `8`
- `printed_page_start`: `7`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "Ssi", "define", "called", "protocol", "Ssi_StatusType", "Defines", "typedef"]
- `anchor`: "2.4. Enum reference"

### SEC-002-004-001
- `source_number`: `2.4.1`
- `title`: "Ssi_StatusType"
- `path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.1 Ssi_StatusType"
- `physical_page_start`: `7`
- `physical_page_end`: `7`
- `printed_page_start`: `7`
- `printed_page_end`: `7`
- `keywords`: ["SSI", "define", "called", "SSI_SW_PATCH_VERSION", "SSI_E_ALREADY_UNINITIALIZED_U8", "SSI_Ssi_DeInit", "SSI_E_UNINIT_U8", "SSI_E_PARAM_U8"]
- `anchor`: "2.4.1. Ssi_StatusType"

### SEC-002-004-002
- `source_number`: `2.4.2`
- `title`: "Ssi_ReturnType"
- `path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "Ssi", "protocol", "SSI_INITIALIZED", "Ssi_ReturnType", "SSI_OK", "SSI_NOT_OK", "Ssi_ProtocolModeType"]
- `anchor`: "2.4.2. Ssi_ReturnType"

### SEC-002-004-003
- `source_number`: `2.4.3`
- `title`: "Ssi_ProtocolModeType"
- `path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.3 Ssi_ProtocolModeType"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "Ssi", "protocol", "SSI_INITIALIZED", "Ssi_ReturnType", "SSI_OK", "SSI_NOT_OK", "Ssi_ProtocolModeType"]
- `anchor`: "2.4.3. Ssi_ProtocolModeType"

### SEC-002-004-004
- `source_number`: `2.4.4`
- `title`: "Ssi_ChnnlSelType"
- `path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.4 Ssi_ChnnlSelType"
- `physical_page_start`: `8`
- `physical_page_end`: `8`
- `printed_page_start`: `8`
- `printed_page_end`: `8`
- `keywords`: ["SSI", "Ssi", "protocol", "SSI_INITIALIZED", "Ssi_ReturnType", "SSI_OK", "SSI_NOT_OK", "Ssi_ProtocolModeType"]
- `anchor`: "2.4.4. Ssi_ChnnlSelType"

### SEC-002-03
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["SSI", "Ssi", "mode", "boolean", "Ssi_ResSelType", "typedef", "Ssi_ChnnlSwitchType", "Ssi_MessageDataType"]
- `anchor`: "Chapter 2. Software Design"

### SEC-002-004-005
- `source_number`: `2.4.5`
- `title`: "Ssi_ResSelType"
- `path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SSI", "mode", "SSI_DIGITAL_PAD", "SSI_ONCHIP_CMP", "SSI_TRGSEL", "Ssi_ResSelType", "SSI_RES_50OHM", "SSI_RES_30OHM"]
- `anchor`: "2.4.5. Ssi_ResSelType"

### SEC-002-004-006
- `source_number`: `2.4.6`
- `title`: "Ssi_ChnnlSwitchType"
- `path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType / 2.4.6 Ssi_ChnnlSwitchType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SSI", "mode", "SSI_DIGITAL_PAD", "SSI_ONCHIP_CMP", "SSI_TRGSEL", "Ssi_ResSelType", "SSI_RES_50OHM", "SSI_RES_30OHM"]
- `anchor`: "2.4.6. Ssi_ChnnlSwitchType"

### SEC-002-005
- `source_number`: `2.5`
- `title`: "Structures and typedefs reference"
- `path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference"
- `physical_page_start`: `9`
- `physical_page_end`: `10`
- `printed_page_start`: `9`
- `printed_page_end`: `10`
- `keywords`: ["SSI", "Ssi", "mode", "boolean", "Ssi_ResSelType", "typedef", "Ssi_ChnnlSwitchType", "Ssi_MessageDataType"]
- `anchor`: "2.5. Structures and typedefs reference"

### SEC-002-005-001
- `source_number`: `2.5.1`
- `title`: "Ssi_MessageDataType"
- `path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.1 Ssi_MessageDataType"
- `physical_page_start`: `9`
- `physical_page_end`: `9`
- `printed_page_start`: `9`
- `printed_page_end`: `9`
- `keywords`: ["SSI", "mode", "SSI_DIGITAL_PAD", "SSI_ONCHIP_CMP", "SSI_TRGSEL", "Ssi_ResSelType", "SSI_RES_50OHM", "SSI_RES_30OHM"]
- `anchor`: "2.5.1. Ssi_MessageDataType"

### SEC-002-005-002
- `source_number`: `2.5.2`
- `title`: "Ssi_NotifactionType"
- `path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.2 Ssi_NotifactionType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SSI", "Ssi", "boolean", "Ssi_NotifactionType", "U32Whlval", "Ssi_MessageDataType", "message", "u8SubInstanceLogicId"]
- `anchor`: "2.5.2. Ssi_NotifactionType"

### SEC-002-005-003
- `source_number`: `2.5.3`
- `title`: "Ssi_SubInstanceConfigType"
- `path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.3 Ssi_SubInstanceConfigType"
- `physical_page_start`: `10`
- `physical_page_end`: `10`
- `printed_page_start`: `10`
- `printed_page_end`: `10`
- `keywords`: ["SSI", "Ssi", "boolean", "Ssi_NotifactionType", "U32Whlval", "Ssi_MessageDataType", "message", "u8SubInstanceLogicId"]
- `anchor`: "2.5.3. Ssi_SubInstanceConfigType"

### SEC-002-04
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `11`
- `physical_page_end`: `12`
- `printed_page_start`: `11`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "boolean", "instance", "enable", "flag", "Ssi_InstanceConfigType", "Ssi_ConfigType"]
- `anchor`: "Chapter 2. Software Design"

### SEC-002-005-004
- `source_number`: `2.5.4`
- `title`: "Ssi_InstanceConfigType"
- `path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType"
- `physical_page_start`: `11`
- `physical_page_end`: `11`
- `printed_page_start`: `11`
- `printed_page_end`: `11`
- `keywords`: ["SSI", "boolean", "enable", "flag", "instance", "PWM", "mode", "Ssi_InstanceConfigType"]
- `anchor`: "2.5.4. Ssi_InstanceConfigType"

### SEC-002-005-005
- `source_number`: `2.5.5`
- `title`: "Ssi_ConfigType"
- `path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType / 2.5.5 Ssi_ConfigType"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "Ssi_ConfigType", "u8InstanceCount", "Ssi_InstanceConfigType", "pSSIInstanceCfg", "SSI_CoresMappingPtr", "SSI_CtrlCoresMappingPtr"]
- `anchor`: "2.5.5. Ssi_ConfigType"

### SEC-002-006
- `source_number`: `2.6`
- `title`: "Function reference"
- `path`: "Chapter 2 Software Design / 2.6 Function reference"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "Ssi_ConfigType", "u8InstanceCount", "Ssi_InstanceConfigType", "pSSIInstanceCfg", "SSI_CoresMappingPtr", "SSI_CtrlCoresMappingPtr"]
- `anchor`: "2.6. Function reference"

### SEC-002-006-001
- `source_number`: `2.6.1`
- `title`: "Ssi_Init"
- `path`: "Chapter 2 Software Design / 2.6 Function reference / 2.6.1 Ssi_Init"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "Ssi_ConfigType", "u8InstanceCount", "Ssi_InstanceConfigType", "pSSIInstanceCfg", "SSI_CoresMappingPtr", "SSI_CtrlCoresMappingPtr"]
- `anchor`: "2.6.1. Ssi_Init"

### SEC-002-006-002
- `source_number`: `2.6.2`
- `title`: "Ssi_DeInit"
- `path`: "Chapter 2 Software Design / 2.6 Function reference / 2.6.2 Ssi_DeInit"
- `physical_page_start`: `12`
- `physical_page_end`: `12`
- `printed_page_start`: `12`
- `printed_page_end`: `12`
- `keywords`: ["SSI", "Ssi", "Ssi_ConfigType", "u8InstanceCount", "Ssi_InstanceConfigType", "pSSIInstanceCfg", "SSI_CoresMappingPtr", "SSI_CtrlCoresMappingPtr"]
- `anchor`: "2.6.2. Ssi_DeInit"

### SEC-002-05
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Initialization", "mode", "Ssi_DeInit"]
- `anchor`: "Chapter 2. Software Design"

### SEC-002-006-003
- `source_number`: `2.6.3`
- `title`: "Ssi_GetVersionInfo"
- `path`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Ssi_DeInit", "Returns", "MsgReadType"]
- `anchor`: "2.6.3. Ssi_GetVersionInfo"

### SEC-002-006-004
- `source_number`: `2.6.4`
- `title`: "Ssi_MainFunctionMessageRead"
- `path`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo / 2.6.4 Ssi_MainFunctionMessageRead"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Ssi_DeInit", "Returns", "MsgReadType"]
- `anchor`: "2.6.4. Ssi_MainFunctionMessageRead"

### SEC-002-007
- `source_number`: `2.7`
- `title`: "API Sequence Diagram"
- `path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram"
- `physical_page_start`: `13`
- `physical_page_end`: `14`
- `printed_page_start`: `13`
- `printed_page_end`: `14`
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Initialization", "mode", "Ssi_DeInit"]
- `anchor`: "2.7. API Sequence Diagram"

### SEC-002-007-001
- `source_number`: `2.7.1`
- `title`: "Initialization"
- `path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.1 Initialization"
- `physical_page_start`: `13`
- `physical_page_end`: `13`
- `printed_page_start`: `13`
- `printed_page_end`: `13`
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Ssi_DeInit", "Returns", "MsgReadType"]
- `anchor`: "2.7.1. Initialization"

### SEC-002-007-002
- `source_number`: `2.7.2`
- `title`: "De-Initialization"
- `path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling"]
- `anchor`: "2.7.2. De-Initialization"

### SEC-002-007-003
- `source_number`: `2.7.3`
- `title`: "Interrupt mode"
- `path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.3 Interrupt mode"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling"]
- `anchor`: "2.7.3. Interrupt mode"

### SEC-002-007-004
- `source_number`: `2.7.4`
- `title`: "Polling mode"
- `path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.4 Polling mode"
- `physical_page_start`: `14`
- `physical_page_end`: `14`
- `printed_page_start`: `14`
- `printed_page_end`: `14`
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling"]
- `anchor`: "2.7.4. Polling mode"

### SEC-002-06
- `source_number`: `Chapter 2`
- `title`: "Software Design"
- `path`: "Chapter 2 Software Design"
- `physical_page_start`: `15`
- `physical_page_end`: `15`
- `printed_page_start`: `15`
- `printed_page_end`: `15`
- `keywords`: ["Rev"]
- `anchor`: "Chapter 2. Software Design"

### SEC-003
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "Chapter 3. Tresos Configuration Items"

### SEC-003-001
- `source_number`: `3.1`
- `title`: "Container Inclusion Relation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.1 Container Inclusion Relation"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "3.1. Container Inclusion Relation"

### SEC-003-002
- `source_number`: `3.2`
- `title`: "Containers and Variables"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "3.2. Containers and Variables"

### SEC-003-002-001
- `source_number`: `3.2.1`
- `title`: "IMPLEMENTATION_CONFIG_VARIANT"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "3.2.1. IMPLEMENTATION_CONFIG_VARIANT"

### SEC-003-002-002
- `source_number`: `3.2.2`
- `title`: "SsiGeneral"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.2 SsiGeneral"
- `physical_page_start`: `16`
- `physical_page_end`: `16`
- `printed_page_start`: `16`
- `printed_page_end`: `16`
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "3.2.2. SsiGeneral"

### SEC-003-02
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `17`
- `physical_page_end`: `18`
- `printed_page_start`: `17`
- `printed_page_end`: `18`
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "BOOLEAN", "SsiMulticoreSupport"]
- `anchor`: "Chapter 3. Tresos Configuration Items"

### SEC-003-002-002-001
- `source_number`: `3.2.2.1`
- `title`: "SsiDevErrorDetect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect"]
- `anchor`: "3.2.2.1. SsiDevErrorDetect"

### SEC-003-002-002-002
- `source_number`: `3.2.2.2`
- `title`: "SsiMulticoreSupport"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect"]
- `anchor`: "3.2.2.2. SsiMulticoreSupport"

### SEC-003-002-002-003
- `source_number`: `3.2.2.3`
- `title`: "SsiDeInitApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.3 SsiDeInitApi"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect"]
- `anchor`: "3.2.2.3. SsiDeInitApi"

### SEC-003-002-002-004
- `source_number`: `3.2.2.4`
- `title`: "SsiVersionInfoApi"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.4 SsiVersionInfoApi"
- `physical_page_start`: `17`
- `physical_page_end`: `17`
- `printed_page_start`: `17`
- `printed_page_end`: `17`
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect"]
- `anchor`: "3.2.2.4. SsiVersionInfoApi"

### SEC-003-002-002-005
- `source_number`: `3.2.2.5`
- `title`: "SsiIndex"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "3.2.2.5. SsiIndex"

### SEC-003-002-003
- `source_number`: `3.2.3`
- `title`: "SsiEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.3 SsiEcucPartitionRef"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "3.2.3. SsiEcucPartitionRef"

### SEC-003-002-004
- `source_number`: `3.2.4`
- `title`: "SsiConfigSet"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.4 SsiConfigSet"
- `physical_page_start`: `18`
- `physical_page_end`: `18`
- `printed_page_start`: `18`
- `printed_page_end`: `18`
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "3.2.4. SsiConfigSet"

### SEC-003-03
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `19`
- `physical_page_end`: `20`
- `printed_page_start`: `19`
- `printed_page_end`: `20`
- `keywords`: ["Ssi", "SSI", "Screenshot", "Property", "Label", "Properties", "Default", "INTEGER"]
- `anchor`: "Chapter 3. Tresos Configuration Items"

### SEC-003-002-004-001
- `source_number`: `3.2.4.1`
- `title`: "SsiControllerConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "3.2.4.1. SsiControllerConfig"

### SEC-003-002-004-002
- `source_number`: `3.2.4.2`
- `title`: "SsiControllerId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "3.2.4.2. SsiControllerId"

### SEC-003-002-004-003
- `source_number`: `3.2.4.3`
- `title`: "SsiHWInstance"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.3 SsiHWInstance"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "3.2.4.3. SsiHWInstance"

### SEC-003-002-004-004
- `source_number`: `3.2.4.4`
- `title`: "SsiControllerEcucPartitionRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.4 SsiControllerEcucPartitionRef"
- `physical_page_start`: `19`
- `physical_page_end`: `19`
- `printed_page_start`: `19`
- `printed_page_end`: `19`
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "3.2.4.4. SsiControllerEcucPartitionRef"

### SEC-003-002-004-005
- `source_number`: `3.2.4.5`
- `title`: "SsiModuleClockRef"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "3.2.4.5. SsiModuleClockRef"

### SEC-003-002-004-006
- `source_number`: `3.2.4.6`
- `title`: "SsiModuleClock"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.6 SsiModuleClock"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "3.2.4.6. SsiModuleClock"

### SEC-003-002-004-007
- `source_number`: `3.2.4.7`
- `title`: "SsiPrescaler"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.7 SsiPrescaler"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "3.2.4.7. SsiPrescaler"

### SEC-003-002-004-008
- `source_number`: `3.2.4.8`
- `title`: "SsiLowGlobalCounterWindows"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.8 SsiLowGlobalCounterWindows"
- `physical_page_start`: `20`
- `physical_page_end`: `20`
- `printed_page_start`: `20`
- `printed_page_end`: `20`
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "3.2.4.8. SsiLowGlobalCounterWindows"

### SEC-003-04
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `21`
- `physical_page_end`: `22`
- `printed_page_start`: `21`
- `printed_page_end`: `22`
- `keywords`: ["SSI", "Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "INTEGER"]
- `anchor`: "Chapter 3. Tresos Configuration Items"

### SEC-003-002-004-009
- `source_number`: `3.2.4.9`
- `title`: "SsiHighGlobalCounterWindows"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "3.2.4.9. SsiHighGlobalCounterWindows"

### SEC-003-002-004-010
- `source_number`: `3.2.4.10`
- `title`: "SsiControllerActivation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "3.2.4.10. SsiControllerActivation"

### SEC-003-002-004-011
- `source_number`: `3.2.4.11`
- `title`: "SsiSubinstanceConfig"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.11 SsiSubinstanceConfig"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "3.2.4.11. SsiSubinstanceConfig"

### SEC-003-002-004-012
- `source_number`: `3.2.4.12`
- `title`: "SsiSubinstanceId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.12 SsiSubinstanceId"
- `physical_page_start`: `21`
- `physical_page_end`: `21`
- `printed_page_start`: `21`
- `printed_page_end`: `21`
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "3.2.4.12. SsiSubinstanceId"

### SEC-003-002-004-013
- `source_number`: `3.2.4.13`
- `title`: "SsiSubinstanceActivation"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "3.2.4.13. SsiSubinstanceActivation"

### SEC-003-002-004-014
- `source_number`: `3.2.4.14`
- `title`: "SsiHWSubinstance"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.14 SsiHWSubinstance"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "3.2.4.14. SsiHWSubinstance"

### SEC-003-002-004-015
- `source_number`: `3.2.4.15`
- `title`: "FilterEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.15 FilterEnable"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "3.2.4.15. FilterEnable"

### SEC-003-002-004-016
- `source_number`: `3.2.4.16`
- `title`: "FilterWidth"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.16 FilterWidth"
- `physical_page_start`: `22`
- `physical_page_end`: `22`
- `printed_page_start`: `22`
- `printed_page_end`: `22`
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "3.2.4.16. FilterWidth"

### SEC-003-05
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `23`
- `physical_page_end`: `24`
- `printed_page_start`: `23`
- `printed_page_end`: `24`
- `keywords`: ["Ssi", "Default", "Screenshot", "Property", "Properties", "Label", "STRING", "PWM"]
- `anchor`: "Chapter 3. Tresos Configuration Items"

### SEC-003-002-004-017
- `source_number`: `3.2.4.17`
- `title`: "ProtocolSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "3.2.4.17. ProtocolSelect"

### SEC-003-002-004-018
- `source_number`: `3.2.4.18`
- `title`: "ChannelSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "3.2.4.18. ChannelSelect"

### SEC-003-002-004-019
- `source_number`: `3.2.4.19`
- `title`: "ResistanceSelect"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.19 ResistanceSelect"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "3.2.4.19. ResistanceSelect"

### SEC-003-002-004-020
- `source_number`: `3.2.4.20`
- `title`: "ChannelSwitch"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.20 ChannelSwitch"
- `physical_page_start`: `23`
- `physical_page_end`: `23`
- `printed_page_start`: `23`
- `printed_page_end`: `23`
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "3.2.4.20. ChannelSwitch"

### SEC-003-002-004-021
- `source_number`: `3.2.4.21`
- `title`: "WindowsRangeCheckEnable"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "3.2.4.21. WindowsRangeCheckEnable"

### SEC-003-002-004-022
- `source_number`: `3.2.4.22`
- `title`: "GeneralPWMTimeoutCounter"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.22 GeneralPWMTimeoutCounter"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "3.2.4.22. GeneralPWMTimeoutCounter"

### SEC-003-002-004-023
- `source_number`: `3.2.4.23`
- `title`: "GeneralPWMPolarity"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.23 GeneralPWMPolarity"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "3.2.4.23. GeneralPWMPolarity"

### SEC-003-002-004-024
- `source_number`: `3.2.4.24`
- `title`: "MsgReadType"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.24 MsgReadType"
- `physical_page_start`: `24`
- `physical_page_end`: `24`
- `printed_page_start`: `24`
- `printed_page_end`: `24`
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "3.2.4.24. MsgReadType"

### SEC-003-06
- `source_number`: `Chapter 3`
- `title`: "Tresos Configuration Items"
- `path`: "Chapter 3 Tresos Configuration Items"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["Ssi", "SsiNotification", "STRING", "QDTControllerId", "Default", "QDT", "IDENTIFIABLE", "Label"]
- `anchor`: "Chapter 3. Tresos Configuration Items"

### SEC-003-002-004-025
- `source_number`: `3.2.4.25`
- `title`: "SsiNotification"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["Ssi", "SsiNotification", "STRING", "QDTControllerId", "Default", "QDT", "IDENTIFIABLE", "Label"]
- `anchor`: "3.2.4.25. SsiNotification"

### SEC-003-002-004-026
- `source_number`: `3.2.4.26`
- `title`: "QDTControllerId"
- `path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification / 3.2.4.26 QDTControllerId"
- `physical_page_start`: `25`
- `physical_page_end`: `25`
- `printed_page_start`: `25`
- `printed_page_end`: `25`
- `keywords`: ["Ssi", "SsiNotification", "STRING", "QDTControllerId", "Default", "QDT", "IDENTIFIABLE", "Label"]
- `anchor`: "3.2.4.26. QDTControllerId"

## 4. Page Locator Map

### PAGE-0001
- `physical_page`: `1`
- `printed_page`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `anchors`: ["User's Manual", "Ssi User's Manual for", "FC7300F8MDQ", "Rev: 1.2.0"]

### PAGE-0002
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "image", "config"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "Table of Contents", "Chapter 1. Ssi Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…", "1.1. Requirements . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"]

### PAGE-0003
- `physical_page`: `3`
- `printed_page`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "config"]
- `anchors`: ["Chapter 0. Table of Contents", "3.2.4.1.", "SsiControllerConfig . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…", "3.2.4.2."]

### PAGE-0004
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Ssi Introduction / 1.1 Requirements"
- `content_types`: ["text", "image", "api"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "Chapter 1. Ssi Introduction", "1.1. Requirements", "The design of this module follows the specifications of the complex driver specified"]

### PAGE-0005
- `physical_page`: `5`
- `printed_page`: `5`
- `section_path`: "Chapter 1 Ssi Introduction"
- `content_types`: ["text"]
- `anchors`: ["Chapter 1. Ssi Introduction", "4. External resistors are selectable and support 30, 50 ohms for AK protocol and 30, 50, 60 and 100", "ohms for PWM and Standard protocols.", "5. The output of the internal comparator can be observed."]

### PAGE-0006
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.1 Macros in CDD_Ssi.c"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "Chapter 2. Software Design", "2.1. Deviation form Requirements", "N/A."]

### PAGE-0007
- `physical_page`: `7`
- `printed_page`: `7`
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.1 Ssi_StatusType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Chapter 2. Software Design", "#define SSI_SW_PATCH_VERSION 0", "#define SSI_E_ALREADY_UNINITIALIZED_U8 ((uint8)0x0A)", "API SSI_Ssi_DeInit service called when the SSI driver and the Hardware are already uninitialized"]

### PAGE-0008
- `physical_page`: `8`
- `printed_page`: `8`
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType"
- `content_types`: ["text", "table"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "SSI_INITIALIZED", "} Ssi_StatusType;", "Value Meaning"]

### PAGE-0009
- `physical_page`: `9`
- `printed_page`: `9`
- `section_path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 2. Software Design", "SSI_DIGITAL_PAD = 0x1U,", "SSI_ONCHIP_CMP = 0x2U,", "SSI_TRGSEL = 0x3U"]

### PAGE-0010
- `physical_page`: `10`
- `printed_page`: `10`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.2 Ssi_NotifactionType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "typedef struct", "{", "uint8 u8Subidx;"]

### PAGE-0011
- `physical_page`: `11`
- `printed_page`: `11`
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType"
- `content_types`: ["text", "table"]
- `anchors`: ["Chapter 2. Software Design", "Type", "Member", "Description"]

### PAGE-0012
- `physical_page`: `12`
- `printed_page`: `12`
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType / 2.5.5 Ssi_ConfigType"
- `content_types`: ["text", "table", "api"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "2.5.5. Ssi_ConfigType", "Data structure containing the set of configuration parameters required for initializing.", "typedef struct"]

### PAGE-0013
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Chapter 2. Software Design", "void Ssi_DeInit(void)", "Parameters", "void"]

### PAGE-0014
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization"
- `content_types`: ["text", "image", "figure"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "2.7.2. De-Initialization", "Ssi Driver De-Initialization.", "2.7.3. Interrupt mode"]

### PAGE-0015
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design"
- `content_types`: ["text", "image"]
- `anchors`: ["Chapter 2. Software Design", "14/24", "Rev: 1.2.0"]

### PAGE-0016
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "config"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "Chapter 3. Tresos Configuration Items", "3.1. Container Inclusion Relation", "The contain inclusion relation is shown as below:"]

### PAGE-0017
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `content_types`: ["text", "table", "image"]
- `anchors`: ["Chapter 3. Tresos Configuration Items", "Screenshot", "Property", "Value"]

### PAGE-0018
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "Description", "Switches the Ssi_GetVersionInfo() API: ON or OFF.", "Screenshot"]

### PAGE-0019
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Chapter 3. Tresos Configuration Items", "3.2.4.1. SsiControllerConfig", "Container", "SsiControllerConfig"]

### PAGE-0020
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "3.2.4.5. SsiModuleClockRef", "Container", "SsiModuleClockRef"]

### PAGE-0021
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `content_types`: ["text", "table", "image", "api", "config"]
- `anchors`: ["Chapter 3. Tresos Configuration Items", "3.2.4.9. SsiHighGlobalCounterWindows", "Container", "SsiHighGlobalCounterWindows"]

### PAGE-0022
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "3.2.4.13. SsiSubinstanceActivation", "Container", "SsiSubinstanceActivation"]

### PAGE-0023
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Chapter 3. Tresos Configuration Items", "Default", "3.2.4.17. ProtocolSelect", "Container"]

### PAGE-0024
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Ssi User's Manual for FC7300F8MDQ", "Type", "STRING(RANGE)", "Label"]

### PAGE-0025
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `content_types`: ["text", "table", "image", "api"]
- `anchors`: ["Chapter 3. Tresos Configuration Items", "Type", "STRING(RANGE)", "Label"]

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: `1`
- `printed_pages`: `cover`
- `section_path`: "Cover"
- `content_types`: ["text", "cover"]
- `summary`: "Cover: User's Manual; Ssi User's Manual for; FC7300F8MDQ"
- `keywords`: ["Ssi", "FC7300F8MDQ", "Rev", "Target", "Devices", "Semiconductors", "April"]
- `anchors`:
  - `p1`: "User's Manual"
  - `p1`: "Ssi User's Manual for"
  - `p1`: "FC7300F8MDQ"
  - `p1`: "Rev: 1.2.0"

### SEG-0002
- `physical_pages`: `2`
- `printed_pages`: `2`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "table", "image", "config"]
- `summary`: "Table of Contents: Ssi User's Manual for FC7300F8MDQ; Table of Contents; Chapter 1. Ssi Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 3"
- `keywords`: ["CDD_Ssi", "Ssi", "reference", "FC7300F8MDQ", "CDD", "Ssi_StatusType", "Ssi_ReturnType", "Ssi_ProtocolModeType", "Ssi_ChnnlSelType", "Ssi_ResSelType"]
- `anchors`:
  - `p2`: "Ssi User's Manual for FC7300F8MDQ"
  - `p2`: "Table of Contents"
  - `p2`: "Chapter 1. Ssi Introduction . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p2`: "1.1. Requirements . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"

### SEG-0003
- `physical_pages`: `3`
- `printed_pages`: `3`
- `section_path`: "Table of Contents"
- `content_types`: ["text", "toc", "config"]
- `summary`: "Table of Contents: Chapter 0. Table of Contents; 3.2.4.1.; SsiControllerConfig . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 18"
- `keywords`: ["SsiControllerConfig", "SsiControllerId", "SsiHWInstance", "SsiControllerEcucPartitionRef", "SsiModuleClockRef", "SsiModuleClock", "SsiPrescaler", "SsiLowGlobalCounterWindows", "SsiHighGlobalCounterWindows", "SsiControllerActivation"]
- `anchors`:
  - `p3`: "Chapter 0. Table of Contents"
  - `p3`: "3.2.4.1."
  - `p3`: "SsiControllerConfig . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 18"
  - `p3`: "3.2.4.2."

### SEG-0004
- `physical_pages`: `4`
- `printed_pages`: `4`
- `section_path`: "Chapter 1 Ssi Introduction / 1.1 Requirements"
- `content_types`: ["text", "image", "api"]
- `summary`: "Chapter 1 Ssi Introduction / 1.1 Requirements: Ssi User's Manual for FC7300F8MDQ; Chapter 1. Ssi Introduction; 1.1. Requirements"
- `keywords`: ["SSI", "Ssi", "CDD", "PWM", "AUTOSAR", "speed", "can", "interface", "wheel", "inm"]
- `anchors`:
  - `p4`: "Ssi User's Manual for FC7300F8MDQ"
  - `p4`: "Chapter 1. Ssi Introduction"
  - `p4`: "1.1. Requirements"
  - `p4`: "The design of this module follows the specifications of the complex driver specified"

### SEG-0005
- `physical_pages`: `5`
- `printed_pages`: `5`
- `section_path`: "Chapter 1 Ssi Introduction"
- `content_types`: ["text"]
- `summary`: "Chapter 1 Ssi Introduction: Chapter 1. Ssi Introduction; 4. External resistors are selectable and support 30, 50 ohms for AK protocol and 30, 50, 60 and 100; ohms for PWM and Standard protocols."
- `keywords`: ["Ssi", "PWM", "flag", "set", "end", "current", "ADC", "protocol", "Protocol", "trans"]
- `anchors`:
  - `p5`: "Chapter 1. Ssi Introduction"
  - `p5`: "4. External resistors are selectable and support 30, 50 ohms for AK protocol and 30, 50, 60 and 100"
  - `p5`: "ohms for PWM and Standard protocols."
  - `p5`: "5. The output of the internal comparator can be observed."

### SEG-0006
- `physical_pages`: `6`
- `printed_pages`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.1 Macros in CDD_Ssi.c"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.1 Macros in CDD_Ssi.c: Ssi User's Manual for FC7300F8MDQ; Chapter 2. Software Design; 2.1. Deviation form Requirements"
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C", "SSI_AR_RELEASE_REVISION_VERSION_C", "SSI_VENDOR_ID"]
- `anchors`:
  - `p6`: "Ssi User's Manual for FC7300F8MDQ"
  - `p6`: "Chapter 2. Software Design"
  - `p6`: "2.1. Deviation form Requirements"
  - `p6`: "N/A."

### SEG-0007
- `physical_pages`: `7`
- `printed_pages`: `7`
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.1 Ssi_StatusType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.1 Ssi_StatusType: Chapter 2. Software Design; #define SSI_SW_PATCH_VERSION 0; #define SSI_E_ALREADY_UNINITIALIZED_U8 ((uint8)0x0A)"
- `keywords`: ["SSI", "define", "called", "SSI_SW_PATCH_VERSION", "SSI_E_ALREADY_UNINITIALIZED_U8", "SSI_Ssi_DeInit", "SSI_E_UNINIT_U8", "SSI_E_PARAM_U8", "wrong", "SSI_E_ALREADY_INITIALIZED_U8"]
- `anchors`:
  - `p7`: "Chapter 2. Software Design"
  - `p7`: "#define SSI_SW_PATCH_VERSION 0"
  - `p7`: "#define SSI_E_ALREADY_UNINITIALIZED_U8 ((uint8)0x0A)"
  - `p7`: "API SSI_Ssi_DeInit service called when the SSI driver and the Hardware are already uninitialized"

### SEG-0008
- `physical_pages`: `8`
- `printed_pages`: `8`
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType: Ssi User's Manual for FC7300F8MDQ; SSI_INITIALIZED; } Ssi_StatusType;"
- `keywords`: ["SSI", "Ssi", "protocol", "SSI_INITIALIZED", "Ssi_ReturnType", "SSI_OK", "SSI_NOT_OK", "Ssi_ProtocolModeType", "SSI_NORMAL", "SSI_PWM"]
- `anchors`:
  - `p8`: "Ssi User's Manual for FC7300F8MDQ"
  - `p8`: "SSI_INITIALIZED"
  - `p8`: "} Ssi_StatusType;"
  - `p8`: "Value Meaning"

### SEG-0009
- `physical_pages`: `9`
- `printed_pages`: `9`
- `section_path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType: Chapter 2. Software Design; SSI_DIGITAL_PAD = 0x1U,; SSI_ONCHIP_CMP = 0x2U,"
- `keywords`: ["SSI", "mode", "SSI_DIGITAL_PAD", "SSI_ONCHIP_CMP", "SSI_TRGSEL", "Ssi_ResSelType", "SSI_RES_50OHM", "SSI_RES_30OHM", "Ssi_ChnnlSwitchType", "SSI_INM_VLD"]
- `anchors`:
  - `p9`: "Chapter 2. Software Design"
  - `p9`: "SSI_DIGITAL_PAD = 0x1U,"
  - `p9`: "SSI_ONCHIP_CMP = 0x2U,"
  - `p9`: "SSI_TRGSEL = 0x3U"

### SEG-0010
- `physical_pages`: `10`
- `printed_pages`: `10`
- `section_path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.2 Ssi_NotifactionType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.2 Ssi_NotifactionType: Ssi User's Manual for FC7300F8MDQ; typedef struct; uint8 u8Subidx;"
- `keywords`: ["SSI", "Ssi", "boolean", "Ssi_NotifactionType", "U32Whlval", "Ssi_MessageDataType", "message", "u8SubInstanceLogicId", "FC7300F8MDQ", "typedef"]
- `anchors`:
  - `p10`: "Ssi User's Manual for FC7300F8MDQ"
  - `p10`: "typedef struct"
  - `p10`: "{"
  - `p10`: "uint8 u8Subidx;"

### SEG-0011
- `physical_pages`: `11`
- `printed_pages`: `11`
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType"
- `content_types`: ["text", "table"]
- `summary`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType: Chapter 2. Software Design; Type; Member"
- `keywords`: ["SSI", "boolean", "enable", "flag", "instance", "PWM", "mode", "Ssi_InstanceConfigType", "u8InstanceLogicIndex", "u8InstanceHwIndex"]
- `anchors`:
  - `p11`: "Chapter 2. Software Design"
  - `p11`: "Type"
  - `p11`: "Member"
  - `p11`: "Description"

### SEG-0012
- `physical_pages`: `12`
- `printed_pages`: `12`
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType / 2.5.5 Ssi_ConfigType"
- `content_types`: ["text", "table", "api"]
- `summary`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType / 2.5.5 Ssi_ConfigType: Ssi User's Manual for FC7300F8MDQ; 2.5.5. Ssi_ConfigType; Data structure containing the set of configuration parameters required for initializing."
- `keywords`: ["SSI", "Ssi", "Ssi_ConfigType", "u8InstanceCount", "Ssi_InstanceConfigType", "pSSIInstanceCfg", "SSI_CoresMappingPtr", "SSI_CtrlCoresMappingPtr", "Pointer", "Ssi_Init"]
- `anchors`:
  - `p12`: "Ssi User's Manual for FC7300F8MDQ"
  - `p12`: "2.5.5. Ssi_ConfigType"
  - `p12`: "Data structure containing the set of configuration parameters required for initializing."
  - `p12`: "typedef struct"

### SEG-0013
- `physical_pages`: `13`
- `printed_pages`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo: Chapter 2. Software Design; void Ssi_DeInit(void); Parameters"
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Ssi_DeInit", "Returns", "MsgReadType", "pVersioninfo", "Initialization"]
- `anchors`:
  - `p13`: "Chapter 2. Software Design"
  - `p13`: "void Ssi_DeInit(void)"
  - `p13`: "Parameters"
  - `p13`: "void"

### SEG-0014
- `physical_pages`: `14`
- `printed_pages`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization"
- `content_types`: ["text", "image", "figure"]
- `summary`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization: Ssi User's Manual for FC7300F8MDQ; 2.7.2. De-Initialization; Ssi Driver De-Initialization."
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling", "polling", "Rev"]
- `anchors`:
  - `p14`: "Ssi User's Manual for FC7300F8MDQ"
  - `p14`: "2.7.2. De-Initialization"
  - `p14`: "Ssi Driver De-Initialization."
  - `p14`: "2.7.3. Interrupt mode"

### SEG-0015
- `physical_pages`: `15`
- `printed_pages`: `15`
- `section_path`: "Chapter 2 Software Design"
- `content_types`: ["text", "image"]
- `summary`: "Chapter 2 Software Design: Chapter 2. Software Design; 14/24; Rev: 1.2.0"
- `keywords`: ["Rev"]
- `anchors`:
  - `p15`: "Chapter 2. Software Design"
  - `p15`: "14/24"
  - `p15`: "Rev: 1.2.0"

### SEG-0016
- `physical_pages`: `16`
- `printed_pages`: `16`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `content_types`: ["text", "table", "image", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT: Ssi User's Manual for FC7300F8MDQ; Chapter 3. Tresos Configuration Items; 3.1. Container Inclusion Relation"
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion", "Relation", "contain"]
- `anchors`:
  - `p16`: "Ssi User's Manual for FC7300F8MDQ"
  - `p16`: "Chapter 3. Tresos Configuration Items"
  - `p16`: "3.1. Container Inclusion Relation"
  - `p16`: "The contain inclusion relation is shown as below:"

### SEG-0017
- `physical_pages`: `17`
- `printed_pages`: `17`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `content_types`: ["text", "table", "image"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect: Chapter 3. Tresos Configuration Items; Screenshot; Property"
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect", "SsiDeInitApi", "SsiVersionInfoApi"]
- `anchors`:
  - `p17`: "Chapter 3. Tresos Configuration Items"
  - `p17`: "Screenshot"
  - `p17`: "Property"
  - `p17`: "Value"

### SEG-0018
- `physical_pages`: `18`
- `printed_pages`: `18`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex: Ssi User's Manual for FC7300F8MDQ; Description; Switches the Ssi_GetVersionInfo() API: ON or OFF."
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef", "SsiConfigSet", "FC7300F8MDQ"]
- `anchors`:
  - `p18`: "Ssi User's Manual for FC7300F8MDQ"
  - `p18`: "Description"
  - `p18`: "Switches the Ssi_GetVersionInfo() API: ON or OFF."
  - `p18`: "Screenshot"

### SEG-0019
- `physical_pages`: `19`
- `printed_pages`: `19`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig: Chapter 3. Tresos Configuration Items; 3.2.4.1. SsiControllerConfig; Container"
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchors`:
  - `p19`: "Chapter 3. Tresos Configuration Items"
  - `p19`: "3.2.4.1. SsiControllerConfig"
  - `p19`: "Container"
  - `p19`: "SsiControllerConfig"

### SEG-0020
- `physical_pages`: `20`
- `printed_pages`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef: Ssi User's Manual for FC7300F8MDQ; 3.2.4.5. SsiModuleClockRef; Container"
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label", "Properties", "Default"]
- `anchors`:
  - `p20`: "Ssi User's Manual for FC7300F8MDQ"
  - `p20`: "3.2.4.5. SsiModuleClockRef"
  - `p20`: "Container"
  - `p20`: "SsiModuleClockRef"

### SEG-0021
- `physical_pages`: `21`
- `printed_pages`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `content_types`: ["text", "table", "image", "api", "config"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows: Chapter 3. Tresos Configuration Items; 3.2.4.9. SsiHighGlobalCounterWindows; Container"
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties", "Default", "SsiControllerActivation"]
- `anchors`:
  - `p21`: "Chapter 3. Tresos Configuration Items"
  - `p21`: "3.2.4.9. SsiHighGlobalCounterWindows"
  - `p21`: "Container"
  - `p21`: "SsiHighGlobalCounterWindows"

### SEG-0022
- `physical_pages`: `22`
- `printed_pages`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation: Ssi User's Manual for FC7300F8MDQ; 3.2.4.13. SsiSubinstanceActivation; Container"
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties", "SsiHWSubinstance", "controller"]
- `anchors`:
  - `p22`: "Ssi User's Manual for FC7300F8MDQ"
  - `p22`: "3.2.4.13. SsiSubinstanceActivation"
  - `p22`: "Container"
  - `p22`: "SsiSubinstanceActivation"

### SEG-0023
- `physical_pages`: `23`
- `printed_pages`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect: Chapter 3. Tresos Configuration Items; Default; 3.2.4.17. ProtocolSelect"
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property", "Properties", "ChannelSelect"]
- `anchors`:
  - `p23`: "Chapter 3. Tresos Configuration Items"
  - `p23`: "Default"
  - `p23`: "3.2.4.17. ProtocolSelect"
  - `p23`: "Container"

### SEG-0024
- `physical_pages`: `24`
- `printed_pages`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable: Ssi User's Manual for FC7300F8MDQ; Type; STRING(RANGE)"
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN", "Properties", "GeneralPWMTimeoutCounter"]
- `anchors`:
  - `p24`: "Ssi User's Manual for FC7300F8MDQ"
  - `p24`: "Type"
  - `p24`: "STRING(RANGE)"
  - `p24`: "Label"

### SEG-0025
- `physical_pages`: `25`
- `printed_pages`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `content_types`: ["text", "table", "image", "api"]
- `summary`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification: Chapter 3. Tresos Configuration Items; Type; STRING(RANGE)"
- `keywords`: ["Ssi", "SsiNotification", "STRING", "QDTControllerId", "Default", "QDT", "IDENTIFIABLE", "Label", "Screenshot", "Property"]
- `anchors`:
  - `p25`: "Chapter 3. Tresos Configuration Items"
  - `p25`: "Type"
  - `p25`: "STRING(RANGE)"
  - `p25`: "Label"

## 6. Table Index

### TBL-0002-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0002-001"
- `caption`: "Container inclusion relation table/diagram"
- `physical_pages`: `2`
- `printed_pages`: ["2"]
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `key_fields`: ["CDD_Ssi", "Ssi", "reference", "FC7300F8MDQ", "CDD"]
- `summary`: "Indexes table-like source content for Container inclusion relation table/diagram; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Container inclusion relation table/diagram"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "Macro definition table-like blocks"
- `physical_pages`: `6`
- `printed_pages`: ["6"]
- `section_path`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.1 Macros in CDD_Ssi.c"
- `bbox`: `None`
- `key_fields`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ"]
- `summary`: "Indexes table-like source content for Macro definition table-like blocks; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Macro definition table-like blocks"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "Table-like content on page 7"
- `physical_pages`: `7`
- `printed_pages`: ["7"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.1 Ssi_StatusType"
- `bbox`: `None`
- `key_fields`: ["SSI", "define", "called", "SSI_SW_PATCH_VERSION", "SSI_E_ALREADY_UNINITIALIZED_U8"]
- `summary`: "Indexes table-like source content for Table-like content on page 7; table cell grid was not reconstructed as authoritative data."
- `anchor`: "Table-like content on page 7"
- `confidence`: `0.62`
- `quality_flags`: ["generated_table_like_index", "cell_grid_not_reconstructed"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "Table-like region on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType"
- `bbox`: `[53.83, 130.89, 297.2, 184.8]`
- `key_fields`: ["Value", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 8."
- `anchor`: "Table-like region on page 8"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0008-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-002"
- `caption`: "Table-like region on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType"
- `bbox`: `[53.83, 350.29, 223.36, 404.2]`
- `key_fields`: ["Value", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 8."
- `anchor`: "Table-like region on page 8"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0008-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-003"
- `caption`: "Table-like region on page 8"
- `physical_pages`: `8`
- `printed_pages`: ["8"]
- `section_path`: "Chapter 2 Software Design / 2.4 Enum reference / 2.4.2 Ssi_ReturnType"
- `bbox`: `[53.83, 594.81, 254.8, 684.51]`
- `key_fields`: ["Value", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 8."
- `anchor`: "Table-like region on page 8"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0009-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-001"
- `caption`: "Table-like region on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType"
- `bbox`: `[53.83, 156.0, 311.31, 245.7]`
- `key_fields`: ["Value", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 9."
- `anchor`: "Table-like region on page 9"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0009-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-002"
- `caption`: "Table-like region on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType"
- `bbox`: `[53.83, 411.2, 279.19, 465.1]`
- `key_fields`: ["Value", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 9."
- `anchor`: "Table-like region on page 9"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0009-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-003"
- `caption`: "Table-like region on page 9"
- `physical_pages`: `9`
- `printed_pages`: ["9"]
- `section_path`: "Chapter 2 Software Design / 2.4.5 Ssi_ResSelType"
- `bbox`: `[53.83, 630.6, 234.31, 684.51]`
- `key_fields`: ["Value", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 9."
- `anchor`: "Table-like region on page 9"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0010-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-001"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.2 Ssi_NotifactionType"
- `bbox`: `[53.83, 218.81, 311.25, 344.28]`
- `key_fields`: ["Type", "Member", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 10."
- `anchor`: "Table-like region on page 10"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0010-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0010-002"
- `caption`: "Table-like region on page 10"
- `physical_pages`: `10`
- `printed_pages`: ["10"]
- `section_path`: "Chapter 2 Software Design / 2.5 Structures and typedefs reference / 2.5.2 Ssi_NotifactionType"
- `bbox`: `[53.83, 744.94, 513.67, 780.92]`
- `key_fields`: ["Type", "Member", "Description"]
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
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType"
- `bbox`: `[53.83, 68.3, 513.67, 336.93]`
- `key_fields`: ["Type", "Member", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 11."
- `anchor`: "Table-like region on page 11"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0011-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0011-002"
- `caption`: "Table-like region on page 11"
- `physical_pages`: `11`
- `printed_pages`: ["11"]
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType"
- `bbox`: `[53.83, 577.8, 541.44, 754.75]`
- `key_fields`: ["Type", "Member", "Description"]
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
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType / 2.5.5 Ssi_ConfigType"
- `bbox`: `[53.83, 239.12, 541.44, 407.28]`
- `key_fields`: ["Type", "Member", "Description"]
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
- `section_path`: "Chapter 2 Software Design / 2.5.4 Ssi_InstanceConfigType / 2.5.5 Ssi_ConfigType"
- `bbox`: `[53.83, 552.11, 541.44, 603.77]`
- `key_fields`: ["Type", "Name", "Direction", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 12."
- `anchor`: "Table-like region on page 12"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0013-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0013-001"
- `caption`: "Table-like region on page 13"
- `physical_pages`: `13`
- `printed_pages`: ["13"]
- `section_path`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo"
- `bbox`: `[53.83, 293.55, 478.02, 329.52]`
- `key_fields`: ["Type", "Name", "Direction", "Description"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 13."
- `anchor`: "Table-like region on page 13"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0016-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-001"
- `caption`: "Table-like region on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[53.9, 539.74, 527.48, 683.14]`
- `key_fields`: ["Container", "IMPLEMENTATION CONFIG VARIANT _ _"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 16."
- `anchor`: "Table-like region on page 16"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0016-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0016-002"
- `caption`: "Table-like region on page 16"
- `physical_pages`: `16`
- `printed_pages`: ["16"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[53.9, 722.61, 527.48, 758.65]`
- `key_fields`: ["Container", "SsiGeneral"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 16."
- `anchor`: "Table-like region on page 16"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0017-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-001"
- `caption`: "Table-like region on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[53.9, 68.28, 527.48, 194.49]`
- `key_fields`: ["Screenshot"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 17."
- `anchor`: "Table-like region on page 17"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0017-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-002"
- `caption`: "Table-like region on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[53.9, 231.12, 527.48, 369.72]`
- `key_fields`: ["Container", "SsiDevErrorDetect"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 17."
- `anchor`: "Table-like region on page 17"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0017-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-003"
- `caption`: "Table-like region on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[53.9, 406.35, 527.48, 549.15]`
- `key_fields`: ["Container", "SsiMulticoreSupport"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 17."
- `anchor`: "Table-like region on page 17"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0017-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-004"
- `caption`: "Table-like region on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[53.9, 585.78, 527.48, 724.99]`
- `key_fields`: ["Container", "SsiDeInitApi"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 17."
- `anchor`: "Table-like region on page 17"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0017-005
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0017-005"
- `caption`: "Table-like region on page 17"
- `physical_pages`: `17`
- `printed_pages`: ["17"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[53.9, 761.62, 527.48, 779.76]`
- `key_fields`: ["Container", "SsiVersionInfoApi"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 17."
- `anchor`: "Table-like region on page 17"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0018-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-001"
- `caption`: "Table-like region on page 18"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[53.91, 68.28, 527.47, 190.78]`
- `key_fields`: ["Description", "Switches the Ssi GetVersionInfo() API:…"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 18."
- `anchor`: "Table-like region on page 18"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0018-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-002"
- `caption`: "Table-like region on page 18"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[53.91, 227.41, 527.47, 369.28]`
- `key_fields`: ["Container", "SsiIndex"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 18."
- `anchor`: "Table-like region on page 18"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0018-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-003"
- `caption`: "Table-like region on page 18"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[53.91, 408.74, 527.47, 561.15]`
- `key_fields`: ["Container", "SsiEcucPartitionRef"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 18."
- `anchor`: "Table-like region on page 18"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0018-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0018-004"
- `caption`: "Table-like region on page 18"
- `physical_pages`: `18`
- `printed_pages`: ["18"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[53.91, 600.61, 527.47, 761.42]`
- `key_fields`: ["Container", "SsiConfigSet"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 18."
- `anchor`: "Table-like region on page 18"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0019-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-001"
- `caption`: "Table-like region on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[53.92, 86.41, 527.46, 229.21]`
- `key_fields`: ["Container", "SsiControllerConfig"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 19."
- `anchor`: "Table-like region on page 19"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0019-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-002"
- `caption`: "Table-like region on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[53.92, 265.84, 527.46, 401.36]`
- `key_fields`: ["Container", "SsiControllerId"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 19."
- `anchor`: "Table-like region on page 19"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0019-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-003"
- `caption`: "Table-like region on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[53.92, 437.99, 527.46, 589.25]`
- `key_fields`: ["Container", "SsiHWInstance"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 19."
- `anchor`: "Table-like region on page 19"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0019-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0019-004"
- `caption`: "Table-like region on page 19"
- `physical_pages`: `19`
- `printed_pages`: ["19"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[53.92, 625.88, 527.46, 775.18]`
- `key_fields`: ["Container", "SsiControllerEcucPartitionRef"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 19."
- `anchor`: "Table-like region on page 19"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0020-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-001"
- `caption`: "Table-like region on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[53.92, 86.41, 527.46, 232.81]`
- `key_fields`: ["Container", "SsiModuleClockRef"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 20."
- `anchor`: "Table-like region on page 20"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0020-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-002"
- `caption`: "Table-like region on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[53.92, 269.44, 527.46, 419.83]`
- `key_fields`: ["Container", "SsiModuleClock"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 20."
- `anchor`: "Table-like region on page 20"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0020-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-003"
- `caption`: "Table-like region on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[53.92, 456.46, 527.46, 594.0]`
- `key_fields`: ["Container", "SsiPrescaler"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 20."
- `anchor`: "Table-like region on page 20"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0020-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0020-004"
- `caption`: "Table-like region on page 20"
- `physical_pages`: `20`
- `printed_pages`: ["20"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[53.92, 630.63, 527.46, 764.03]`
- `key_fields`: ["Container", "SsiLowGlobalCounterWindows"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 20."
- `anchor`: "Table-like region on page 20"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0021-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-001"
- `caption`: "Table-like region on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[53.92, 86.41, 527.46, 220.61]`
- `key_fields`: ["Container", "SsiHighGlobalCounterWindows"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 21."
- `anchor`: "Table-like region on page 21"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0021-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-002"
- `caption`: "Table-like region on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[53.92, 257.24, 527.46, 398.84]`
- `key_fields`: ["Container", "SsiControllerActivation"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 21."
- `anchor`: "Table-like region on page 21"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0021-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-003"
- `caption`: "Table-like region on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[53.92, 435.47, 527.46, 572.27]`
- `key_fields`: ["Container", "SsiSubinstanceConfig"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 21."
- `anchor`: "Table-like region on page 21"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0021-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0021-004"
- `caption`: "Table-like region on page 21"
- `physical_pages`: `21`
- `printed_pages`: ["21"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[53.92, 608.9, 527.46, 764.83]`
- `key_fields`: ["Container", "SsiSubinstanceId"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 21."
- `anchor`: "Table-like region on page 21"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0022-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-001"
- `caption`: "Table-like region on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[53.92, 86.41, 527.47, 228.61]`
- `key_fields`: ["Container", "SsiSubinstanceActivation"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 22."
- `anchor`: "Table-like region on page 22"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0022-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-002"
- `caption`: "Table-like region on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[53.92, 265.24, 527.47, 418.74]`
- `key_fields`: ["Container", "SsiHWSubinstance"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 22."
- `anchor`: "Table-like region on page 22"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0022-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-003"
- `caption`: "Table-like region on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[53.92, 455.37, 527.47, 613.87]`
- `key_fields`: ["Container", "FilterEnable"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 22."
- `anchor`: "Table-like region on page 22"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0022-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0022-004"
- `caption`: "Table-like region on page 22"
- `physical_pages`: `22`
- `printed_pages`: ["22"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[53.92, 650.5, 527.47, 770.81]`
- `key_fields`: ["Container", "FilterWidth"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 22."
- `anchor`: "Table-like region on page 22"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0023-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-001"
- `caption`: "Table-like region on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[53.91, 68.3, 527.48, 86.4]`
- `key_fields`: ["Default", "1"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 23."
- `anchor`: "Table-like region on page 23"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0023-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-002"
- `caption`: "Table-like region on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[53.91, 123.03, 527.48, 261.71]`
- `key_fields`: ["Container", "ProtocolSelect"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 23."
- `anchor`: "Table-like region on page 23"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0023-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-003"
- `caption`: "Table-like region on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[53.91, 298.34, 527.48, 438.09]`
- `key_fields`: ["Container", "ChannelSelect"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 23."
- `anchor`: "Table-like region on page 23"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0023-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-004"
- `caption`: "Table-like region on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[53.91, 474.72, 527.48, 627.73]`
- `key_fields`: ["Container", "ResistanceSelect"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 23."
- `anchor`: "Table-like region on page 23"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0023-005
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0023-005"
- `caption`: "Table-like region on page 23"
- `physical_pages`: `23`
- `printed_pages`: ["23"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[53.91, 664.36, 527.48, 781.39]`
- `key_fields`: ["Container", "ChannelSwitch"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 23."
- `anchor`: "Table-like region on page 23"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0024-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-001"
- `caption`: "Table-like region on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[53.91, 68.3, 527.47, 122.19]`
- `key_fields`: ["Type", "STRING(RANGE)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 24."
- `anchor`: "Table-like region on page 24"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0024-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-002"
- `caption`: "Table-like region on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[53.91, 158.82, 527.47, 297.42]`
- `key_fields`: ["Container", "WindowsRangeCheckEnable"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 24."
- `anchor`: "Table-like region on page 24"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0024-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-003"
- `caption`: "Table-like region on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[53.91, 334.05, 527.47, 488.03]`
- `key_fields`: ["Container", "GeneralPWMTimeoutCounter"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 24."
- `anchor`: "Table-like region on page 24"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0024-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-004"
- `caption`: "Table-like region on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[53.91, 524.66, 527.47, 666.26]`
- `key_fields`: ["Container", "GeneralPWMPolarity"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 24."
- `anchor`: "Table-like region on page 24"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0024-005
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0024-005"
- `caption`: "Table-like region on page 24"
- `physical_pages`: `24`
- `printed_pages`: ["24"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[53.91, 702.89, 527.47, 787.56]`
- `key_fields`: ["Container", "MsgReadType"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 24."
- `anchor`: "Table-like region on page 24"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0025-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-001"
- `caption`: "Table-like region on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `bbox`: `[53.9, 68.3, 527.47, 122.19]`
- `key_fields`: ["Type", "STRING(RANGE)"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 25."
- `anchor`: "Table-like region on page 25"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0025-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-002"
- `caption`: "Table-like region on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `bbox`: `[53.9, 158.82, 527.47, 313.37]`
- `key_fields`: ["Container", "SsiNotification"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 25."
- `anchor`: "Table-like region on page 25"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

### TBL-0025-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0025-003"
- `caption`: "Table-like region on page 25"
- `physical_pages`: `25`
- `printed_pages`: ["25"]
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `bbox`: `[53.9, 350.0, 527.47, 522.45]`
- `key_fields`: ["Container", "QDTControllerId"]
- `summary`: "Indexes a table or table-like region related to Table-like region on page 25."
- `anchor`: "Table-like region on page 25"
- `confidence`: `0.66`
- `quality_flags`: ["generated_table_id", "table_like_region"]

## 7. Figure / Image Index

### FIG-0002-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0002-001"
- `caption`: "Generated visual anchor: Table of Contents"
- `physical_page`: `2`
- `printed_page`: `2`
- `section_path`: "Table of Contents"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around Table of Contents; generated for retrieval because no formal figure number was detected."
- `keywords`: ["CDD_Ssi", "Ssi", "reference", "FC7300F8MDQ", "CDD", "Ssi_StatusType", "Ssi_ReturnType", "Ssi_ProtocolModeType"]
- `anchor`: "Table of Contents"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0004-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0004-001"
- `caption`: "Image block near 1.1 Requirements"
- `physical_page`: `4`
- `printed_page`: `4`
- `section_path`: "Chapter 1 Ssi Introduction / 1.1 Requirements"
- `bbox`: `[54.0, 318.41, 472.24, 568.63]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 1.1 Requirements; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "CDD", "PWM", "AUTOSAR", "speed", "can", "interface"]
- `anchor`: "Image block near 1.1 Requirements"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0006-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0006-001"
- `caption`: "Image block near 2.3.1 Macros in CDD_Ssi.c"
- `physical_page`: `6`
- `printed_page`: `6`
- `section_path`: "Chapter 2 Software Design / 2.3 Define and Macro reference / 2.3.1 Macros in CDD_Ssi.c"
- `bbox`: `[54.0, 166.95, 435.03, 336.76]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.3.1 Macros in CDD_Ssi.c; use the source PDF page for exact visual details."
- `keywords`: ["CDD_Ssi", "Ssi", "define", "SSI_SW_MAJOR_VERSION_C", "FC7300F8MDQ", "SSI_VENDOR_ID_C", "SSI_AR_RELEASE_MAJOR_VERSION_C", "SSI_AR_RELEASE_MINOR_VERSION_C"]
- `anchor`: "Image block near 2.3.1 Macros in CDD_Ssi.c"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0013-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0013-001"
- `caption`: "Generated visual anchor: 2.6.3 Ssi_GetVersionInfo"
- `physical_page`: `13`
- `printed_page`: `13`
- `section_path`: "Chapter 2 Software Design / 2.6.3 Ssi_GetVersionInfo"
- `bbox`: `None`
- `image_type`: "vector_or_layout_anchor"
- `semantic_description`: "Page contains a figure-like, sequence-diagram, file-structure, configuration, or screenshot region around 2.6.3 Ssi_GetVersionInfo; generated for retrieval because no formal figure number was detected."
- `keywords`: ["Ssi", "void", "Ssi_GetVersionInfo", "Std_VersionInfoType", "Ssi_MainFunctionMessageRead", "Ssi_DeInit", "Returns", "MsgReadType"]
- `anchor`: "2.6.3 Ssi_GetVersionInfo"
- `confidence`: `0.62`
- `quality_flags`: ["generated_visual_anchor", "full_vector_bbox_not_reconstructed"]

### FIG-0014-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-001"
- `caption`: "Image block near 2.7.2 De-Initialization"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization"
- `bbox`: `[54.0, 68.4, 347.43, 223.21]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.2 De-Initialization; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling"]
- `anchor`: "Image block near 2.7.2 De-Initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0014-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-002"
- `caption`: "Image block near 2.7.2 De-Initialization"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization"
- `bbox`: `[54.0, 288.8, 326.42, 439.41]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.2 De-Initialization; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling"]
- `anchor`: "Image block near 2.7.2 De-Initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0014-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0014-003"
- `caption`: "Image block near 2.7.2 De-Initialization"
- `physical_page`: `14`
- `printed_page`: `14`
- `section_path`: "Chapter 2 Software Design / 2.7 API Sequence Diagram / 2.7.2 De-Initialization"
- `bbox`: `[54.0, 505.0, 472.84, 725.82]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 2.7.2 De-Initialization; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "mode", "FC7300F8MDQ", "Initialization", "work", "Interrupt", "interrupt", "Polling"]
- `anchor`: "Image block near 2.7.2 De-Initialization"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0015-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0015-001"
- `caption`: "Image block near Chapter 2 Software Design"
- `physical_page`: `15`
- `printed_page`: `15`
- `section_path`: "Chapter 2 Software Design"
- `bbox`: `[54.0, 68.4, 472.84, 292.22]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near Chapter 2 Software Design; use the source PDF page for exact visual details."
- `keywords`: ["Rev"]
- `anchor`: "Image block near Chapter 2 Software Design"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-001"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[54.0, 145.43, 472.84, 470.65]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0016-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0016-002"
- `caption`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `physical_page`: `16`
- `printed_page`: `16`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2 Containers and Variables / 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `bbox`: `[132.41, 580.66, 419.23, 606.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "IMPLEMENTATION_CONFIG_VARIANT", "SsiGeneral", "FC7300F8MDQ", "ENUMERATION", "VariantPreCompile", "Tresos", "Inclusion"]
- `anchor`: "Image block near 3.2.1 IMPLEMENTATION_CONFIG_VARIANT"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-001"
- `caption`: "Image block near 3.2.2.1 SsiDevErrorDetect"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[132.41, 73.4, 392.23, 117.8]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 SsiDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect"]
- `anchor`: "Image block near 3.2.2.1 SsiDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0017-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0017-002"
- `caption`: "Image block near 3.2.2.1 SsiDevErrorDetect"
- `physical_page`: `17`
- `printed_page`: `17`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect"
- `bbox`: `[132.41, 272.04, 403.03, 293.04]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.1 SsiDevErrorDetect; use the source PDF page for exact visual details."
- `keywords`: ["BOOLEAN", "SsiMulticoreSupport", "Screenshot", "Property", "Label", "Properties", "Default", "SsiDevErrorDetect"]
- `anchor`: "Image block near 3.2.2.1 SsiDevErrorDetect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-001"
- `caption`: "Image block near 3.2.2.5 SsiIndex"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[132.41, 91.3, 401.83, 114.1]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SsiIndex; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "Image block near 3.2.2.5 SsiIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-002"
- `caption`: "Image block near 3.2.2.5 SsiIndex"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[132.41, 268.33, 522.41, 292.6]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SsiIndex; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "Image block near 3.2.2.5 SsiIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-003"
- `caption`: "Image block near 3.2.2.5 SsiIndex"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[132.41, 449.66, 283.02, 484.46]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SsiIndex; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "Image block near 3.2.2.5 SsiIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0018-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0018-004"
- `caption`: "Image block near 3.2.2.5 SsiIndex"
- `physical_page`: `18`
- `printed_page`: `18`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.2.1 SsiDevErrorDetect / 3.2.2.2 SsiMulticoreSupport / 3.2.2.5 SsiIndex"
- `bbox`: `[132.41, 641.53, 380.23, 684.73]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.2.5 SsiIndex; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "Screenshot", "Property", "Label", "Properties", "Default", "SsiIndex", "SsiEcucPartitionRef"]
- `anchor`: "Image block near 3.2.2.5 SsiIndex"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-001"
- `caption`: "Image block near 3.2.4.1 SsiControllerConfig"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[132.41, 127.33, 379.03, 152.53]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1 SsiControllerConfig; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1 SsiControllerConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-002"
- `caption`: "Image block near 3.2.4.1 SsiControllerConfig"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[132.41, 306.76, 522.41, 324.67]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1 SsiControllerConfig; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1 SsiControllerConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-003"
- `caption`: "Image block near 3.2.4.1 SsiControllerConfig"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[132.41, 494.6, 522.41, 512.57]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1 SsiControllerConfig; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1 SsiControllerConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0019-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0019-004"
- `caption`: "Image block near 3.2.4.1 SsiControllerConfig"
- `physical_page`: `19`
- `printed_page`: `19`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig"
- `bbox`: `[132.41, 682.5, 522.41, 698.5]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.1 SsiControllerConfig; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "controller", "SsiControllerEcucPartitionRef", "SsiControllerConfig", "Screenshot", "Property", "INTEGER"]
- `anchor`: "Image block near 3.2.4.1 SsiControllerConfig"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-001"
- `caption`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[132.41, 143.02, 522.41, 156.12]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 SsiModuleClockRef; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-002"
- `caption`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[132.41, 326.05, 522.41, 343.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 SsiModuleClockRef; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-003"
- `caption`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[132.41, 497.38, 522.41, 517.31]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 SsiModuleClockRef; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0020-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0020-004"
- `caption`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `physical_page`: `20`
- `printed_page`: `20`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.1 SsiControllerConfig / 3.2.4.2 SsiControllerId / 3.2.4.5 SsiModuleClockRef"
- `bbox`: `[132.41, 671.55, 522.41, 687.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.5 SsiModuleClockRef; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "SsiModuleClockRef", "CPU", "MCU", "Screenshot", "Property", "REFERENCE", "Label"]
- `anchor`: "Image block near 3.2.4.5 SsiModuleClockRef"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-001"
- `caption`: "Image block near 3.2.4.9 SsiHighGlobalCounterWindows"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[132.41, 127.33, 522.41, 143.92]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 SsiHighGlobalCounterWindows; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.9 SsiHighGlobalCounterWindows"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-002"
- `caption`: "Image block near 3.2.4.9 SsiHighGlobalCounterWindows"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[132.41, 298.15, 522.41, 322.15]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 SsiHighGlobalCounterWindows; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.9 SsiHighGlobalCounterWindows"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0021-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0021-003"
- `caption`: "Image block near 3.2.4.9 SsiHighGlobalCounterWindows"
- `physical_page`: `21`
- `printed_page`: `21`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows"
- `bbox`: `[132.41, 665.51, 522.41, 688.14]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.9 SsiHighGlobalCounterWindows; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiHighGlobalCounterWindows", "Screenshot", "Property", "INTEGER", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.9 SsiHighGlobalCounterWindows"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-001"
- `caption`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[132.41, 127.33, 479.24, 151.93]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 SsiSubinstanceActivation; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-002"
- `caption`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[132.41, 321.86, 522.41, 342.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 SsiSubinstanceActivation; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-003"
- `caption`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[132.41, 511.98, 473.84, 537.18]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 SsiSubinstanceActivation; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0022-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0022-004"
- `caption`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `physical_page`: `22`
- `printed_page`: `22`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.9 SsiHighGlobalCounterWindows / 3.2.4.10 SsiControllerActivation / 3.2.4.13 SsiSubinstanceActivation"
- `bbox`: `[132.41, 691.41, 522.41, 712.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.13 SsiSubinstanceActivation; use the source PDF page for exact visual details."
- `keywords`: ["SSI", "Ssi", "SsiSubinstanceActivation", "Screenshot", "Property", "BOOLEAN", "Label", "Properties"]
- `anchor`: "Image block near 3.2.4.13 SsiSubinstanceActivation"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-001"
- `caption`: "Image block near 3.2.4.17 ProtocolSelect"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[132.41, 163.94, 522.41, 185.02]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.17 ProtocolSelect; use the source PDF page for exact visual details."
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "Image block near 3.2.4.17 ProtocolSelect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-002"
- `caption`: "Image block near 3.2.4.17 ProtocolSelect"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[132.41, 339.26, 522.41, 361.4]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.17 ProtocolSelect; use the source PDF page for exact visual details."
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "Image block near 3.2.4.17 ProtocolSelect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-003"
- `caption`: "Image block near 3.2.4.17 ProtocolSelect"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[132.41, 531.33, 522.41, 551.05]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.17 ProtocolSelect; use the source PDF page for exact visual details."
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "Image block near 3.2.4.17 ProtocolSelect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0023-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0023-004"
- `caption`: "Image block near 3.2.4.17 ProtocolSelect"
- `physical_page`: `23`
- `printed_page`: `23`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect"
- `bbox`: `[132.41, 736.67, 522.41, 758.39]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.17 ProtocolSelect; use the source PDF page for exact visual details."
- `keywords`: ["STRING", "Default", "ProtocolSelect", "Specifies", "which", "associated", "Screenshot", "Property"]
- `anchor`: "Image block near 3.2.4.17 ProtocolSelect"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-001"
- `caption`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[132.41, 199.74, 485.84, 220.74]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 WindowsRangeCheckEnable; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-002"
- `caption`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[132.41, 390.66, 522.41, 411.35]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 WindowsRangeCheckEnable; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-003
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-003"
- `caption`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[132.41, 565.58, 485.84, 589.58]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 WindowsRangeCheckEnable; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0024-004
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0024-004"
- `caption`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `physical_page`: `24`
- `printed_page`: `24`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.17 ProtocolSelect / 3.2.4.18 ChannelSelect / 3.2.4.21 WindowsRangeCheckEnable"
- `bbox`: `[132.41, 743.81, 522.41, 764.56]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.21 WindowsRangeCheckEnable; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "PWM", "Label", "Default", "WindowsRangeCheckEnable", "Screenshot", "Property", "BOOLEAN"]
- `anchor`: "Image block near 3.2.4.21 WindowsRangeCheckEnable"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-001"
- `caption`: "Image block near 3.2.4.25 SsiNotification"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `bbox`: `[132.41, 215.43, 522.41, 236.69]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.25 SsiNotification; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "SsiNotification", "STRING", "QDTControllerId", "Default", "QDT", "IDENTIFIABLE", "Label"]
- `anchor`: "Image block near 3.2.4.25 SsiNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

### FIG-0025-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0025-002"
- `caption`: "Image block near 3.2.4.25 SsiNotification"
- `physical_page`: `25`
- `printed_page`: `25`
- `section_path`: "Chapter 3 Tresos Configuration Items / 3.2.4.25 SsiNotification"
- `bbox`: `[132.41, 406.61, 522.41, 427.87]`
- `image_type`: "screenshot"
- `semantic_description`: "Visual/image region associated with Image block near 3.2.4.25 SsiNotification; use the source PDF page for exact visual details."
- `keywords`: ["Ssi", "SsiNotification", "STRING", "QDTControllerId", "Default", "QDT", "IDENTIFIABLE", "Label"]
- `anchor`: "Image block near 3.2.4.25 SsiNotification"
- `confidence`: `0.66`
- `quality_flags`: ["generated_figure_id", "image_text_not_ocr_verified"]

## 8. Term / API / Config / Requirement Index

### API-SSI-DEINIT
- `name`: "Ssi_DeInit"
- `type`: `api`
- `primary_page`: `2`
- `physical_pages`: `2,7,12,13,17`
- `brief`: "api index entry for `Ssi_DeInit`."
- `anchors`:
  - `p2`: "2.6.2. Ssi_DeInit . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p7`: "API SSI_Ssi_DeInit service called when the SSI driver and the Hardware are already uninitialized"
  - `p12`: "2.6.2. Ssi_DeInit"
  - `p13`: "void Ssi_DeInit(void)"
  - `p17`: "Vendor specific: Enables/Disables the Ssi_DeInit API."
- `aliases`: []

### API-SSI-GETVERSIONINFO
- `name`: "Ssi_GetVersionInfo"
- `type`: `api`
- `primary_page`: `2`
- `physical_pages`: `2,7,13,18`
- `brief`: "api index entry for `Ssi_GetVersionInfo`."
- `anchors`:
  - `p2`: "2.6.3. Ssi_GetVersionInfo . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p7`: "API service ID for Ssi_GetVersionInfo function."
  - `p13`: "2.6.3. Ssi_GetVersionInfo"
  - `p18`: "Switches the Ssi_GetVersionInfo() API: ON or OFF."
- `aliases`: []

### API-SSI-INIT
- `name`: "Ssi_Init"
- `type`: `api`
- `primary_page`: `2`
- `physical_pages`: `2,7,12`
- `brief`: "api index entry for `Ssi_Init`."
- `anchors`:
  - `p2`: "2.6.1. Ssi_Init . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p7`: "API SSI_Ssi_Init service called when the SSI driver and the Hardware are already initialized."
  - `p12`: "2.6.1. Ssi_Init"
- `aliases`: []

### API-SSI-MAINFUNCTIONMESSAGEREAD
- `name`: "Ssi_MainFunctionMessageRead"
- `type`: `api`
- `primary_page`: `2`
- `physical_pages`: `2,13`
- `brief`: "api index entry for `Ssi_MainFunctionMessageRead`."
- `anchors`:
  - `p2`: "2.6.4. Ssi_MainFunctionMessageRead . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 12"
  - `p13`: "2.6.4. Ssi_MainFunctionMessageRead"
- `aliases`: []

### API-WINDOWS
- `name`: "Windows"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20,21`
- `brief`: "api index entry for `Windows`."
- `anchors`:
  - `p20`: "3.2.4.8. SsiLowGlobalCounterWindows"
  - `p21`: "3.2.4.9. SsiHighGlobalCounterWindows"
- `aliases`: []

### API-COUNTER
- `name`: "Counter"
- `type`: `api`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "api index entry for `Counter`."
- `anchors`:
  - `p24`: "3.2.4.22. GeneralPWMTimeoutCounter"
- `aliases`: []

### API-PRESCALER
- `name`: "Prescaler"
- `type`: `api`
- `primary_page`: `20`
- `physical_pages`: `20`
- `brief`: "api index entry for `Prescaler`."
- `anchors`:
  - `p20`: "3.2.4.7. SsiPrescaler"
- `aliases`: []

### CFG-SSINOTIFICATION
- `name`: "SsiNotification"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,25`
- `brief`: "config index entry for `SsiNotification`."
- `anchors`:
  - `p3`: "3.2.4.25. SsiNotification . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 24"
  - `p25`: "3.2.4.25. SsiNotification"
- `aliases`: []

### CFG-SSICONFIGSET
- `name`: "SsiConfigSet"
- `type`: `config`
- `primary_page`: `2`
- `physical_pages`: `2,18`
- `brief`: "config index entry for `SsiConfigSet`."
- `anchors`:
  - `p2`: "3.2.4. SsiConfigSet . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p18`: "3.2.4. SsiConfigSet"
- `aliases`: []

### CFG-SSICONTROLLERCONFIG
- `name`: "SsiControllerConfig"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "config index entry for `SsiControllerConfig`."
- `anchors`:
  - `p3`: "SsiControllerConfig . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 18"
  - `p19`: "3.2.4.1. SsiControllerConfig"
- `aliases`: []

### CFG-SSIGENERAL
- `name`: "SsiGeneral"
- `type`: `config`
- `primary_page`: `2`
- `physical_pages`: `2,16`
- `brief`: "config index entry for `SsiGeneral`."
- `anchors`:
  - `p2`: "3.2.2. SsiGeneral . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p16`: "3.2.2. SsiGeneral"
- `aliases`: []

### CFG-SSISUBINSTANCECONFIG
- `name`: "SsiSubinstanceConfig"
- `type`: `config`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "config index entry for `SsiSubinstanceConfig`."
- `anchors`:
  - `p3`: "3.2.4.11. SsiSubinstanceConfig . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 20"
  - `p21`: "3.2.4.11. SsiSubinstanceConfig"
- `aliases`: []

### MACRO-SSI-INTERNAL-CMP
- `name`: "SSI_INTERNAL_CMP"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8,9,23`
- `brief`: "macro index entry for `SSI_INTERNAL_CMP`."
- `anchors`:
  - `p8`: "SSI_INTERNAL_CMP = 0x0U,"
  - `p9`: "SSI_INTERNAL_CMP"
  - `p23`: "SSI_INTERNAL_CMP"
- `aliases`: []

### MACRO-SSI-INM-VLD
- `name`: "SSI_INM_VLD"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,24`
- `brief`: "macro index entry for `SSI_INM_VLD`."
- `anchors`:
  - `p9`: "SSI_INM_VLD = 0x0U,"
  - `p24`: "SSI_INM_VLD"
- `aliases`: []

### MACRO-SSI-NORMAL
- `name`: "SSI_NORMAL"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8,23`
- `brief`: "macro index entry for `SSI_NORMAL`."
- `anchors`:
  - `p8`: "SSI_NORMAL = 0x0U,"
  - `p23`: "SSI_NORMAL"
- `aliases`: []

### MACRO-SSI-RES-50OHM
- `name`: "SSI_RES_50OHM"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9,23`
- `brief`: "macro index entry for `SSI_RES_50OHM`."
- `anchors`:
  - `p9`: "SSI_RES_50OHM = 0x0U,"
  - `p23`: "SSI_RES_50OHM"
- `aliases`: []

### MACRO-SSI-UNINIT
- `name`: "SSI_UNINIT"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7,8`
- `brief`: "macro index entry for `SSI_UNINIT`."
- `anchors`:
  - `p7`: "SSI_UNINIT = 0U,"
  - `p8`: "SSI_UNINIT"
- `aliases`: []

### MACRO-IMPLEMENTATION-CONFIG-VARIANT
- `name`: "IMPLEMENTATION_CONFIG_VARIANT"
- `type`: `macro`
- `primary_page`: `2`
- `physical_pages`: `2,16`
- `brief`: "macro index entry for `IMPLEMENTATION_CONFIG_VARIANT`."
- `anchors`:
  - `p2`: "3.2.1. IMPLEMENTATION_CONFIG_VARIANT . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 15"
  - `p16`: "3.2.1. IMPLEMENTATION_CONFIG_VARIANT"
- `aliases`: []

### MACRO-SSI-SW-MAJOR-VERSION-C
- `name`: "SSI_SW_MAJOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_SW_MAJOR_VERSION_C`."
- `anchors`:
  - `p6`: "#define SSI_SW_MAJOR_VERSION_C 1"
- `aliases`: []

### MACRO-SSI-AK
- `name`: "SSI_AK"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SSI_AK`."
- `anchors`:
  - `p8`: "SSI_AK = 0x2U,"
- `aliases`: []

### MACRO-SSI-DEINIT-ID-U8
- `name`: "SSI_DEINIT_ID_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_DEINIT_ID_U8`."
- `anchors`:
  - `p7`: "#define SSI_DEINIT_ID_U8 ((uint8)0x2U)"
- `aliases`: []

### MACRO-SSI-DIGITAL-PAD
- `name`: "SSI_DIGITAL_PAD"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SSI_DIGITAL_PAD`."
- `anchors`:
  - `p9`: "SSI_DIGITAL_PAD = 0x1U,"
- `aliases`: []

### MACRO-SSI-E-ALREADY-INITIALIZED-U8
- `name`: "SSI_E_ALREADY_INITIALIZED_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_ALREADY_INITIALIZED_U8`."
- `anchors`:
  - `p7`: "#define SSI_E_ALREADY_INITIALIZED_U8 ((uint8)0x0D)"
- `aliases`: []

### MACRO-SSI-E-ALREADY-UNINITIALIZED-U8
- `name`: "SSI_E_ALREADY_UNINITIALIZED_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_ALREADY_UNINITIALIZED_U8`."
- `anchors`:
  - `p7`: "#define SSI_E_ALREADY_UNINITIALIZED_U8 ((uint8)0x0A)"
- `aliases`: []

### MACRO-SSI-E-INIT-FAILED-U8
- `name`: "SSI_E_INIT_FAILED_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_INIT_FAILED_U8`."
- `anchors`:
  - `p7`: "#define SSI_E_INIT_FAILED_U8 ((uint8)0x0EU)"
- `aliases`: []

### MACRO-SSI-E-PARAM-U8
- `name`: "SSI_E_PARAM_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_PARAM_U8`."
- `anchors`:
  - `p7`: "#define SSI_E_PARAM_U8 ((uint8)0x0C)"
- `aliases`: []

### MACRO-SSI-E-PARTITION-MAPPING
- `name`: "SSI_E_PARTITION_MAPPING"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_PARTITION_MAPPING`."
- `anchors`:
  - `p7`: "#define SSI_E_PARTITION_MAPPING ((uint8)0x0FU)"
- `aliases`: []

### MACRO-SSI-E-TIMEOUT-U8
- `name`: "SSI_E_TIMEOUT_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_TIMEOUT_U8`."
- `anchors`:
  - `p7`: "#define SSI_E_TIMEOUT_U8 ((uint8)0x10U)"
- `aliases`: []

### MACRO-SSI-E-UNINIT-U8
- `name`: "SSI_E_UNINIT_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_E_UNINIT_U8`."
- `anchors`:
  - `p7`: "#define SSI_E_UNINIT_U8 ((uint8)0x0B)"
- `aliases`: []

### MACRO-SSI-GETVERSIONINFO-ID-U8
- `name`: "SSI_GETVERSIONINFO_ID_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_GETVERSIONINFO_ID_U8`."
- `anchors`:
  - `p7`: "#define SSI_GETVERSIONINFO_ID_U8 ((uint8)0x3U)"
- `aliases`: []

### MACRO-SSI-GPWM
- `name`: "SSI_GPWM"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SSI_GPWM`."
- `anchors`:
  - `p8`: "SSI_GPWM = 0x3U"
- `aliases`: []

### MACRO-SSI-INH-VLD
- `name`: "SSI_INH_VLD"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SSI_INH_VLD`."
- `anchors`:
  - `p9`: "SSI_INH_VLD = 0x1U"
- `aliases`: []

### MACRO-SSI-INITIALIZED
- `name`: "SSI_INITIALIZED"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SSI_INITIALIZED`."
- `anchors`:
  - `p8`: "SSI_INITIALIZED"
- `aliases`: []

### MACRO-SSI-INIT-ID-U8
- `name`: "SSI_INIT_ID_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_INIT_ID_U8`."
- `anchors`:
  - `p7`: "#define SSI_INIT_ID_U8 ((uint8)0x1U)"
- `aliases`: []

### MACRO-SSI-MSG-READ-ID-U8
- `name`: "SSI_MSG_READ_ID_U8"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_MSG_READ_ID_U8`."
- `anchors`:
  - `p7`: "#define SSI_MSG_READ_ID_U8 ((uint8)0x4U)"
- `aliases`: []

### MACRO-SSI-NOT-OK
- `name`: "SSI_NOT_OK"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SSI_NOT_OK`."
- `anchors`:
  - `p8`: "SSI_NOT_OK"
- `aliases`: []

### MACRO-SSI-OK
- `name`: "SSI_OK"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SSI_OK`."
- `anchors`:
  - `p8`: "SSI_OK = 0U,"
- `aliases`: []

### MACRO-SSI-ONCHIP-CMP
- `name`: "SSI_ONCHIP_CMP"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SSI_ONCHIP_CMP`."
- `anchors`:
  - `p9`: "SSI_ONCHIP_CMP = 0x2U,"
- `aliases`: []

### MACRO-SSI-PWM
- `name`: "SSI_PWM"
- `type`: `macro`
- `primary_page`: `8`
- `physical_pages`: `8`
- `brief`: "macro index entry for `SSI_PWM`."
- `anchors`:
  - `p8`: "SSI_PWM = 0x1U,"
- `aliases`: []

### MACRO-SSI-RES-30OHM
- `name`: "SSI_RES_30OHM"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SSI_RES_30OHM`."
- `anchors`:
  - `p9`: "SSI_RES_30OHM = 0x1U"
- `aliases`: []

### MACRO-SSI-TRGSEL
- `name`: "SSI_TRGSEL"
- `type`: `macro`
- `primary_page`: `9`
- `physical_pages`: `9`
- `brief`: "macro index entry for `SSI_TRGSEL`."
- `anchors`:
  - `p9`: "SSI_TRGSEL = 0x3U"
- `aliases`: []

### MACRO-SSI-AR-RELEASE-MAJOR-VERSION
- `name`: "SSI_AR_RELEASE_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_AR_RELEASE_MAJOR_VERSION`."
- `anchors`:
  - `p6`: "#define SSI_AR_RELEASE_MAJOR_VERSION_C 4"
- `aliases`: []

### MACRO-SSI-AR-RELEASE-MAJOR-VERSION-C
- `name`: "SSI_AR_RELEASE_MAJOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_AR_RELEASE_MAJOR_VERSION_C`."
- `anchors`:
  - `p6`: "#define SSI_AR_RELEASE_MAJOR_VERSION_C 4"
- `aliases`: []

### MACRO-SSI-AR-RELEASE-MINOR-VERSION
- `name`: "SSI_AR_RELEASE_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_AR_RELEASE_MINOR_VERSION`."
- `anchors`:
  - `p6`: "#define SSI_AR_RELEASE_MINOR_VERSION_C 6"
- `aliases`: []

### MACRO-SSI-AR-RELEASE-MINOR-VERSION-C
- `name`: "SSI_AR_RELEASE_MINOR_VERSION_C"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_AR_RELEASE_MINOR_VERSION_C`."
- `anchors`:
  - `p6`: "#define SSI_AR_RELEASE_MINOR_VERSION_C 6"
- `aliases`: []

### MACRO-SSI-AR-RELEASE-REVISION-VERSION
- `name`: "SSI_AR_RELEASE_REVISION_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_AR_RELEASE_REVISION_VERSION`."
- `anchors`:
  - `p6`: "#define SSI_AR_RELEASE_REVISION_VERSION_C 0"
- `aliases`: []

### MACRO-SSI-AR-RELEASE-REVISION-VERSION-C
- `name`: "SSI_AR_RELEASE_REVISION_VERSION_C"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_AR_RELEASE_REVISION_VERSION_C`."
- `anchors`:
  - `p6`: "#define SSI_AR_RELEASE_REVISION_VERSION_C 0"
- `aliases`: []

### MACRO-SSI-MODULE-ID
- `name`: "SSI_MODULE_ID"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_MODULE_ID`."
- `anchors`:
  - `p6`: "#define SSI_MODULE_ID 255"
- `aliases`: []

### MACRO-SSI-SW-MAJOR-VERSION
- `name`: "SSI_SW_MAJOR_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_SW_MAJOR_VERSION`."
- `anchors`:
  - `p6`: "#define SSI_SW_MAJOR_VERSION_C 1"
- `aliases`: []

### MACRO-SSI-SW-MINOR-VERSION
- `name`: "SSI_SW_MINOR_VERSION"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_SW_MINOR_VERSION`."
- `anchors`:
  - `p6`: "#define SSI_SW_MINOR_VERSION 2"
- `aliases`: []

### MACRO-SSI-SW-PATCH-VERSION
- `name`: "SSI_SW_PATCH_VERSION"
- `type`: `macro`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "macro index entry for `SSI_SW_PATCH_VERSION`."
- `anchors`:
  - `p7`: "#define SSI_SW_PATCH_VERSION 0"
- `aliases`: []

### MACRO-SSI-VENDOR-ID
- `name`: "SSI_VENDOR_ID"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_VENDOR_ID`."
- `anchors`:
  - `p6`: "#define SSI_VENDOR_ID_C 174"
- `aliases`: []

### MACRO-SSI-VENDOR-ID-C
- `name`: "SSI_VENDOR_ID_C"
- `type`: `macro`
- `primary_page`: `6`
- `physical_pages`: `6`
- `brief`: "macro index entry for `SSI_VENDOR_ID_C`."
- `anchors`:
  - `p6`: "#define SSI_VENDOR_ID_C 174"
- `aliases`: []

### MACRO-GPWM-TOC
- `name`: "GPWM_TOC"
- `type`: `macro`
- `primary_page`: `24`
- `physical_pages`: `24`
- `brief`: "macro index entry for `GPWM_TOC`."
- `anchors`:
  - `p24`: "GPWM_TOC function clock period."
- `aliases`: []

### MACRO-NULL-PTR
- `name`: "NULL_PTR"
- `type`: `macro`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "macro index entry for `NULL_PTR`."
- `anchors`:
  - `p12`: "requires a NULL_PTR)."
- `aliases`: []

### TYPE-SSI-CHNNLSELTYPE
- `name`: "Ssi_ChnnlSelType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,8,9,10,11`
- `brief`: "type index entry for `Ssi_ChnnlSelType`."
- `anchors`:
  - `p2`: "2.4.4. Ssi_ChnnlSelType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p8`: "2.4.4. Ssi_ChnnlSelType"
  - `p9`: "} Ssi_ChnnlSelType;"
  - `p10`: "Ssi_ChnnlSelType eChnlSelect;"
  - `p11`: "Ssi_ChnnlSelType"
- `aliases`: []

### TYPE-SSI-CHNNLSWITCHTYPE
- `name`: "Ssi_ChnnlSwitchType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,9,10,11`
- `brief`: "type index entry for `Ssi_ChnnlSwitchType`."
- `anchors`:
  - `p2`: "2.4.6. Ssi_ChnnlSwitchType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p9`: "2.4.6. Ssi_ChnnlSwitchType"
  - `p10`: "Ssi_ChnnlSwitchType eChnlSwitch;"
  - `p11`: "Ssi_ChnnlSwitchType"
- `aliases`: []

### TYPE-SSI-PROTOCOLMODETYPE
- `name`: "Ssi_ProtocolModeType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,8,10,11`
- `brief`: "type index entry for `Ssi_ProtocolModeType`."
- `anchors`:
  - `p2`: "2.4.3. Ssi_ProtocolModeType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p8`: "2.4.3. Ssi_ProtocolModeType"
  - `p10`: "Ssi_ProtocolModeType eProtocolMode;"
  - `p11`: "Ssi_ProtocolModeType"
- `aliases`: []

### TYPE-SSI-RESSELTYPE
- `name`: "Ssi_ResSelType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,9,10,11`
- `brief`: "type index entry for `Ssi_ResSelType`."
- `anchors`:
  - `p2`: "2.4.5. Ssi_ResSelType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p9`: "2.4.5. Ssi_ResSelType"
  - `p10`: "Ssi_ResSelType eResSelect;"
  - `p11`: "Ssi_ResSelType"
- `aliases`: []

### TYPE-SSI-INSTANCECONFIGTYPE
- `name`: "Ssi_InstanceConfigType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,11,12`
- `brief`: "type index entry for `Ssi_InstanceConfigType`."
- `anchors`:
  - `p2`: "2.5.4. Ssi_InstanceConfigType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 10"
  - `p11`: "2.5.4. Ssi_InstanceConfigType"
  - `p12`: "Ssi_InstanceConfigType **pSSIInstanceCfg;"
- `aliases`: []

### TYPE-SSI-NOTIFACTIONTYPE
- `name`: "Ssi_NotifactionType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,10,11`
- `brief`: "type index entry for `Ssi_NotifactionType`."
- `anchors`:
  - `p2`: "2.5.2. Ssi_NotifactionType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p10`: "2.5.2. Ssi_NotifactionType"
  - `p11`: "Ssi_NotifactionType"
- `aliases`: []

### TYPE-SSI-MESSAGEDATATYPE
- `name`: "Ssi_MessageDataType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,9,10`
- `brief`: "type index entry for `Ssi_MessageDataType`."
- `anchors`:
  - `p2`: "2.5.1. Ssi_MessageDataType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p9`: "2.5.1. Ssi_MessageDataType"
  - `p10`: "} Ssi_MessageDataType;"
- `aliases`: []

### TYPE-SSI-STATUSTYPE
- `name`: "Ssi_StatusType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,7,8`
- `brief`: "type index entry for `Ssi_StatusType`."
- `anchors`:
  - `p2`: "2.4.1. Ssi_StatusType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p7`: "2.4.1. Ssi_StatusType"
  - `p8`: "} Ssi_StatusType;"
- `aliases`: []

### TYPE-SSI-CONFIGTYPE
- `name`: "Ssi_ConfigType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,12`
- `brief`: "type index entry for `Ssi_ConfigType`."
- `anchors`:
  - `p2`: "2.5.5. Ssi_ConfigType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p12`: "2.5.5. Ssi_ConfigType"
- `aliases`: []

### TYPE-SSI-RETURNTYPE
- `name`: "Ssi_ReturnType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,8`
- `brief`: "type index entry for `Ssi_ReturnType`."
- `anchors`:
  - `p2`: "2.4.2. Ssi_ReturnType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p8`: "2.4.2. Ssi_ReturnType"
- `aliases`: []

### TYPE-SSI-SUBINSTANCECONFIGTYPE
- `name`: "Ssi_SubinstanceConfigType"
- `type`: `type`
- `primary_page`: `10`
- `physical_pages`: `10,11`
- `brief`: "type index entry for `Ssi_SubinstanceConfigType`."
- `anchors`:
  - `p10`: "} Ssi_SubinstanceConfigType;"
  - `p11`: "Ssi_SubinstanceConfigType **pSSISubInstanceCfg;"
- `aliases`: []

### TYPE-SSI-SUBINSTANCECONFIGTYPE-2
- `name`: "Ssi_SubInstanceConfigType"
- `type`: `type`
- `primary_page`: `2`
- `physical_pages`: `2,10`
- `brief`: "type index entry for `Ssi_SubInstanceConfigType`."
- `anchors`:
  - `p2`: "2.5.3. Ssi_SubInstanceConfigType . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 9"
  - `p10`: "2.5.3. Ssi_SubInstanceConfigType"
- `aliases`: []

### TYPE-STD-VERSIONINFOTYPE
- `name`: "Std_VersionInfoType"
- `type`: `type`
- `primary_page`: `13`
- `physical_pages`: `13`
- `brief`: "type index entry for `Std_VersionInfoType`."
- `anchors`:
  - `p13`: "void Ssi_GetVersionInfo(Std_VersionInfoType *pVersioninfo)"
- `aliases`: []

### TYPE-SSI-INSTANCECONFIGTYPE-2
- `name`: "SSI_InstanceConfigType"
- `type`: `type`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "type index entry for `SSI_InstanceConfigType`."
- `anchors`:
  - `p12`: "SSI_InstanceConfigType"
- `aliases`: []

### FILE-CDD-SSI-C
- `name`: "CDD_Ssi.c"
- `type`: `file`
- `primary_page`: `2`
- `physical_pages`: `2,6`
- `brief`: "file index entry for `CDD_Ssi.c`."
- `anchors`:
  - `p2`: "2.3.1. Macros in CDD_Ssi.c . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p6`: "2.3.1. Macros in CDD_Ssi.c"
- `aliases`: []

### FILE-CDD-SSI-H
- `name`: "CDD_Ssi.h"
- `type`: `file`
- `primary_page`: `2`
- `physical_pages`: `2,6`
- `brief`: "file index entry for `CDD_Ssi.h`."
- `anchors`:
  - `p2`: "2.3.2. Macros in CDD_Ssi.h . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p6`: "2.3.2. Macros in CDD_Ssi.h"
- `aliases`: []

### FILE-AUTOSAR-EXP-CDDDESIGNANDINTEGRATIONGUIDELINE-PDF
- `name`: "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf"
- `type`: `file`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "file index entry for `AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf`."
- `anchors`:
  - `p4`: "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf."
- `aliases`: []

### TERM-SSI
- `name`: "SSI"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4,6,7,8,9,10,11,12,19,21`
- `brief`: "term index entry for `SSI`."
- `anchors`:
  - `p4`: "SSI"
  - `p6`: "SSI"
  - `p7`: "SSI"
  - `p8`: "SSI"
  - `p9`: "SSI"
- `aliases`: []

### TERM-SSICONTROLLERECUCPARTITIONREF
- `name`: "SsiControllerEcucPartitionRef"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "term index entry for `SsiControllerEcucPartitionRef`."
- `anchors`:
  - `p3`: "SsiControllerEcucPartitionRef . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 18"
  - `p19`: "3.2.4.4. SsiControllerEcucPartitionRef"
- `aliases`: []

### TERM-SSIMULTICORESUPPORT
- `name`: "SsiMulticoreSupport"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,17`
- `brief`: "term index entry for `SsiMulticoreSupport`."
- `anchors`:
  - `p2`: "SsiMulticoreSupport . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 16"
  - `p17`: "3.2.2.2. SsiMulticoreSupport"
- `aliases`: []

### TERM-SSICONTROLLERACTIVATION
- `name`: "SsiControllerActivation"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "term index entry for `SsiControllerActivation`."
- `anchors`:
  - `p3`: "3.2.4.10. SsiControllerActivation . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 20"
  - `p21`: "3.2.4.10. SsiControllerActivation"
- `aliases`: []

### TERM-SSICONTROLLERID
- `name`: "SsiControllerId"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "term index entry for `SsiControllerId`."
- `anchors`:
  - `p3`: "SsiControllerId . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 18"
  - `p19`: "3.2.4.2. SsiControllerId"
- `aliases`: []

### TERM-SSIDEINITAPI
- `name`: "SsiDeInitApi"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,17`
- `brief`: "term index entry for `SsiDeInitApi`."
- `anchors`:
  - `p2`: "SsiDeInitApi . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 16"
  - `p17`: "3.2.2.3. SsiDeInitApi"
- `aliases`: []

### TERM-SSIDEVERRORDETECT
- `name`: "SsiDevErrorDetect"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,17`
- `brief`: "term index entry for `SsiDevErrorDetect`."
- `anchors`:
  - `p2`: "SsiDevErrorDetect . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 16"
  - `p17`: "3.2.2.1. SsiDevErrorDetect"
- `aliases`: []

### TERM-SSIECUCPARTITIONREF
- `name`: "SsiEcucPartitionRef"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,18`
- `brief`: "term index entry for `SsiEcucPartitionRef`."
- `anchors`:
  - `p2`: "3.2.3. SsiEcucPartitionRef . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .…"
  - `p18`: "3.2.3. SsiEcucPartitionRef"
- `aliases`: []

### TERM-SSIHWINSTANCE
- `name`: "SsiHWInstance"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,19`
- `brief`: "term index entry for `SsiHWInstance`."
- `anchors`:
  - `p3`: "SsiHWInstance . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 18"
  - `p19`: "3.2.4.3. SsiHWInstance"
- `aliases`: []

### TERM-SSIHWSUBINSTANCE
- `name`: "SsiHWSubinstance"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,22`
- `brief`: "term index entry for `SsiHWSubinstance`."
- `anchors`:
  - `p3`: "3.2.4.14. SsiHWSubinstance . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 21"
  - `p22`: "3.2.4.14. SsiHWSubinstance"
- `aliases`: []

### TERM-SSIHIGHGLOBALCOUNTERWINDOWS
- `name`: "SsiHighGlobalCounterWindows"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "term index entry for `SsiHighGlobalCounterWindows`."
- `anchors`:
  - `p3`: "SsiHighGlobalCounterWindows . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 20"
  - `p21`: "3.2.4.9. SsiHighGlobalCounterWindows"
- `aliases`: []

### TERM-SSIINDEX
- `name`: "SsiIndex"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,18`
- `brief`: "term index entry for `SsiIndex`."
- `anchors`:
  - `p2`: "SsiIndex . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 17"
  - `p18`: "3.2.2.5. SsiIndex"
- `aliases`: []

### TERM-SSILOWGLOBALCOUNTERWINDOWS
- `name`: "SsiLowGlobalCounterWindows"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `brief`: "term index entry for `SsiLowGlobalCounterWindows`."
- `anchors`:
  - `p3`: "SsiLowGlobalCounterWindows . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 19"
  - `p20`: "3.2.4.8. SsiLowGlobalCounterWindows"
- `aliases`: []

### TERM-SSIMODULECLOCK
- `name`: "SsiModuleClock"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `brief`: "term index entry for `SsiModuleClock`."
- `anchors`:
  - `p3`: "SsiModuleClockRef . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 19"
  - `p20`: "3.2.4.5. SsiModuleClockRef"
- `aliases`: []

### TERM-SSIMODULECLOCKREF
- `name`: "SsiModuleClockRef"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `brief`: "term index entry for `SsiModuleClockRef`."
- `anchors`:
  - `p3`: "SsiModuleClockRef . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 19"
  - `p20`: "3.2.4.5. SsiModuleClockRef"
- `aliases`: []

### TERM-SSIPRESCALER
- `name`: "SsiPrescaler"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,20`
- `brief`: "term index entry for `SsiPrescaler`."
- `anchors`:
  - `p3`: "SsiPrescaler . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 19"
  - `p20`: "3.2.4.7. SsiPrescaler"
- `aliases`: []

### TERM-SSISUBINSTANCEACTIVATION
- `name`: "SsiSubinstanceActivation"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,22`
- `brief`: "term index entry for `SsiSubinstanceActivation`."
- `anchors`:
  - `p3`: "3.2.4.13. SsiSubinstanceActivation . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 21"
  - `p22`: "3.2.4.13. SsiSubinstanceActivation"
- `aliases`: []

### TERM-SSISUBINSTANCEID
- `name`: "SsiSubinstanceId"
- `type`: `term`
- `primary_page`: `3`
- `physical_pages`: `3,21`
- `brief`: "term index entry for `SsiSubinstanceId`."
- `anchors`:
  - `p3`: "3.2.4.12. SsiSubinstanceId . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 20"
  - `p21`: "3.2.4.12. SsiSubinstanceId"
- `aliases`: []

### TERM-SSIVERSIONINFOAPI
- `name`: "SsiVersionInfoApi"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,17`
- `brief`: "term index entry for `SsiVersionInfoApi`."
- `anchors`:
  - `p2`: "SsiVersionInfoApi . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 16"
  - `p17`: "3.2.2.4. SsiVersionInfoApi"
- `aliases`: []

### TERM-DET
- `name`: "Det"
- `type`: `term`
- `primary_page`: `2`
- `physical_pages`: `2,17`
- `brief`: "term index entry for `Det`."
- `anchors`:
  - `p2`: "Det"
  - `p17`: "Det"
- `aliases`: []

### TERM-SSI-CORESMAPPINGPTR
- `name`: "SSI_CoresMappingPtr"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `SSI_CoresMappingPtr`."
- `anchors`:
  - `p12`: "boolean *SSI_CoresMappingPtr;"
- `aliases`: []

### TERM-SSI-CTRLCORESMAPPINGPTR
- `name`: "SSI_CtrlCoresMappingPtr"
- `type`: `term`
- `primary_page`: `12`
- `physical_pages`: `12`
- `brief`: "term index entry for `SSI_CtrlCoresMappingPtr`."
- `anchors`:
  - `p12`: "uint32 *SSI_CtrlCoresMappingPtr;"
- `aliases`: []

### TERM-AUTOSAR
- `name`: "AUTOSAR"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `AUTOSAR`."
- `anchors`:
  - `p4`: "AUTOSAR"
- `aliases`: []

### TERM-AUTOSAR-EXP-CDDDESIGNANDINTEGRATIONGUIDELINE
- `name`: "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `AUTOSAR_EXP_CDDDesignAndIntegrationGuideline`."
- `anchors`:
  - `p4`: "AUTOSAR_EXP_CDDDesignAndIntegrationGuideline.pdf."
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

### TERM-DETECT
- `name`: "Detect"
- `type`: `term`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "term index entry for `Detect`."
- `anchors`:
  - `p17`: "3.2.2.1. SsiDevErrorDetect"
- `aliases`: []

### TERM-DETECTION
- `name`: "Detection"
- `type`: `term`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "term index entry for `Detection`."
- `anchors`:
  - `p17`: "Switches the Development Error Detection and Notification on or off."
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

### TERM-RTE
- `name`: "Rte"
- `type`: `term`
- `primary_page`: `4`
- `physical_pages`: `4`
- `brief`: "term index entry for `Rte`."
- `anchors`:
  - `p4`: "Rte"
- `aliases`: []

### TERM-SSI-INIT
- `name`: "SSI_Init"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SSI_Init`."
- `anchors`:
  - `p7`: "API SSI_Init service execution failed."
- `aliases`: []

### TERM-SSI-SSI-DEINIT
- `name`: "SSI_Ssi_DeInit"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SSI_Ssi_DeInit`."
- `anchors`:
  - `p7`: "API SSI_Ssi_DeInit service called when the SSI driver and the Hardware are already uninitialized"
- `aliases`: []

### TERM-SSI-SSI-INIT
- `name`: "SSI_Ssi_Init"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `SSI_Ssi_Init`."
- `anchors`:
  - `p7`: "API SSI_Ssi_Init service called when the SSI driver and the Hardware are already initialized."
- `aliases`: []

### TERM-SSIDEV
- `name`: "SsiDev"
- `type`: `term`
- `primary_page`: `17`
- `physical_pages`: `17`
- `brief`: "term index entry for `SsiDev`."
- `anchors`:
  - `p17`: "3.2.2.1. SsiDevErrorDetect"
- `aliases`: []

### TERM-SSI-REQUESTSPCPULSE
- `name`: "Ssi_RequestSpcPulse"
- `type`: `term`
- `primary_page`: `7`
- `physical_pages`: `7`
- `brief`: "term index entry for `Ssi_RequestSpcPulse`."
- `anchors`:
  - `p7`: "API service ID for Ssi_RequestSpcPulse function."
- `aliases`: []

### TERM-SSI-SUBINSTANCE0
- `name`: "Ssi_Subinstance0"
- `type`: `term`
- `primary_page`: `22`
- `physical_pages`: `22`
- `brief`: "term index entry for `Ssi_Subinstance0`."
- `anchors`:
  - `p22`: "Ssi_Subinstance0"
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
- `purpose`: `Close keyword lookup gaps between SSI_User_Manual.pdf extractable text and this Manifest without copying full PDF prose.`
- `source_pdf`: `SSI_User_Manual.pdf`
- `source_pdf_sha256`: `4f8c75eef4dc9d2eed39c63c7c61900caf24c05c46338a77fae2fbbf98f91118`
- `generated_at`: `2026-06-20T08:11:45Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals and dotted version tokens with length >= 3.`
- `scope`: `Text-layer token supplement only; screenshot text, vector drawing internals and table cell layout still require source PDF verification.`
- `unique_missing_terms_added`: `294`
- `technical_missing_terms_added`: `7`
- `pages_with_added_terms`: `25`
- `supplemented_missing_token_count`: `294`
- `supplemented_missing_technical_token_count`: `7`
- `supplemented_physical_pages_count`: `25`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact wording in the source PDF.`

### TEXTSUP-PAGE-0001
- `physical_page`: `1`
- `additional_text_terms`:
  - "Flagchip"

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
  - "According"
  - "Architecture"
  - "BSW"
  - "Basic"
  - "Confidential"
  - "Drivers"
  - "Each"
  - "Flagchip"
  - "For"
  - "Interfaces"
  - "Layered"
  - "Modules"
  - "Proprietary"
  - "R20"
  - "Release"
  - "Supports"
  - "able"
  - "access"
  - "accessed"
  - "also"
  - "analog"
  - "architecture"
  - "autosar"
  - "between"
  - "configurable"
  - "currents"
  - "cycle"
  - "decode"
  - "decoded"
  - "detailed"
  - "differ"
  - "directly"
  - "enabled"
  - "entiate"
  - "entity"
  - "first"
  - "general"
  - "ignored"
  - "independent"
  - "inh"
  - "input"
  - "inputs"
  - "instances"
  - "interacts"
  - "interrupts"
  - "layered"
  - "located"
  - "may"
  - "measurements"
  - "modules"
  - "multiple"
  - "need"
  - "outputs"
  - "pulse"
  - "query"
  - "read"
  - "recovers"
  - "refer"
  - "registers"
  - "results"
  - "sensor"
  - "sensors"
  - "signal"
  - "software"
  - "sources"
  - "standard"
  - "standardized"
  - "stop"
  - "sub"
  - "supported"
  - "supports"
  - "system"
  - "that"
  - "transmission"
  - "two"
  - "valid"
  - "value"
  - "via"
  - "well"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "BIST"
  - "Confidential"
  - "Configurable"
  - "Flagchip"
  - "General"
  - "Generation"
  - "Input"
  - "Previous"
  - "Proprietary"
  - "Supports"
  - "Wheel"
  - "allowable"
  - "assigned"
  - "bit"
  - "channels"
  - "completed"
  - "configuring"
  - "count"
  - "counter"
  - "cycle"
  - "decoding"
  - "each"
  - "exceeds"
  - "filters"
  - "fixed"
  - "general"
  - "input"
  - "instances"
  - "interval"
  - "logical"
  - "measurement"
  - "mission"
  - "pad"
  - "polarity"
  - "pulse"
  - "range"
  - "selection"
  - "self"
  - "series"
  - "setting"
  - "signal"
  - "stopped"
  - "supported"
  - "supports"
  - "tested"
  - "timeout"
  - "transfer"
  - "transmission"
  - "voltage"
  - "width"

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
  - "Proprietary"
  - "Status"
  - "core"
  - "enum"
  - "initialization"
  - "parameter"
  - "without"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "Call"
  - "Confidential"
  - "Correctly"
  - "Flagchip"
  - "Normal"
  - "Proprietary"
  - "Result"
  - "been"
  - "different"
  - "enum"
  - "modes"
  - "return"
  - "selection"
  - "supported"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "Confidential"
  - "Digital"
  - "Flagchip"
  - "Ohm"
  - "Proprietary"
  - "Trigger"
  - "buffer"
  - "chip"
  - "enum"
  - "pad"
  - "resistance"
  - "select"
  - "selection"
  - "switch"
  - "valid"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "Confidential"
  - "Fields"
  - "Flagchip"
  - "Logical"
  - "Message"
  - "Proprietary"
  - "Status"
  - "Sub"
  - "Wheel"
  - "bFilterEn"
  - "bGpwmInv"
  - "bIntCmpEn"
  - "bInterruptEn"
  - "bSubInstanceEn"
  - "bWindowsRangeCheck"
  - "callback"
  - "chosen"
  - "configure"
  - "data1"
  - "data2"
  - "implement"
  - "order"
  - "pMsg"
  - "pNotification"
  - "received"
  - "shall"
  - "slow"
  - "sub"
  - "u32Date1"
  - "u32Date2"
  - "u32FiltWidth"
  - "u8GpwmToc"
  - "u8Prot"
  - "u8Status"
  - "u8SubInstanceHwId"
  - "value"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "Controller"
  - "Divider"
  - "Fields"
  - "Filter"
  - "Flagchip"
  - "High"
  - "Invert"
  - "Logical"
  - "Low"
  - "Number"
  - "Proprietary"
  - "Resistance"
  - "SInternal"
  - "Sub"
  - "array"
  - "bControllerEn"
  - "bFilterEn"
  - "bGpwmInv"
  - "bIntCmpEn"
  - "bInterruptEn"
  - "bSubInstanceEn"
  - "bWindowsRangeCheck"
  - "check"
  - "comparison"
  - "configurations"
  - "configure"
  - "counter"
  - "general"
  - "global"
  - "input"
  - "instances"
  - "pNotification"
  - "pointer"
  - "range"
  - "selection"
  - "setting"
  - "stance"
  - "sub"
  - "switch"
  - "timeout"
  - "u32FiltWidth"
  - "u32HighGlobalCounterWindows"
  - "u32LowGlobalCounterWindows"
  - "u8DivClock"
  - "u8GpwmToc"
  - "u8SubInstanceCount"
  - "u8SubInstanceHwId"
  - "value"
  - "width"
  - "window"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "Confidential"
  - "ConfigPtr"
  - "Configptr"
  - "Fields"
  - "Flagchip"
  - "Initializes"
  - "Proprietary"
  - "Variant"
  - "all"
  - "array"
  - "comparable"
  - "const"
  - "core"
  - "counter"
  - "indicate"
  - "initialize"
  - "initializes"
  - "input"
  - "least"
  - "manage"
  - "map"
  - "mapping"
  - "means"
  - "need"
  - "non"
  - "one"
  - "ping"
  - "power"
  - "reentrant"
  - "reset"
  - "should"
  - "state"
  - "their"
  - "underlying"
  - "unit"
  - "value"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Initializes"
  - "Proprietary"
  - "location"
  - "performs"
  - "reading"
  - "store"
  - "unit"
  - "version"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Proprietary"
  - "VariantProperties"
  - "general"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "APIProperties"
  - "AProperties"
  - "Confidential"
  - "DetectProperties"
  - "Flagchip"
  - "Init"
  - "Proprietary"
  - "Provide"
  - "SsiMulticoreSupportProperties"
  - "false"
  - "multicore"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "APIProperties"
  - "AProperties"
  - "Confidential"
  - "Flagchip"
  - "IndexProperties"
  - "Info"
  - "InstanceId"
  - "LIST"
  - "Proprietary"
  - "Provide"
  - "Version"
  - "false"
  - "general"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "Confidential"
  - "Controller"
  - "ECUC"
  - "Flagchip"
  - "IDProperties"
  - "InstanceProperties"
  - "Maps"
  - "Proprietary"
  - "SSI0"
  - "SsiControllerEcucPartitionRefProperties"
  - "access"
  - "chip"
  - "container"
  - "each"
  - "entire"
  - "given"
  - "interfaces"
  - "limit"
  - "multiple"
  - "one"
  - "parameter"
  - "partitions"
  - "provides"
  - "unique"
  - "zero"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "Clock"
  - "ClockProperties"
  - "Confidential"
  - "Divider"
  - "Flagchip"
  - "Low"
  - "Module"
  - "Proprietary"
  - "Reference"
  - "uration"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "AProperties"
  - "ActivationProperties"
  - "Confidential"
  - "Controller"
  - "Flagchip"
  - "High"
  - "IDProperties"
  - "MAP"
  - "Proprietary"
  - "Subinstance"
  - "container"
  - "given"
  - "parameter"
  - "provides"
  - "subinstance"
  - "subinstances"
  - "unique"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "ActivationProperties"
  - "Confidential"
  - "ECUC"
  - "Enable"
  - "Filter"
  - "FilterProperties"
  - "Flagchip"
  - "Maps"
  - "Proprietary"
  - "Subinstance"
  - "SubinstanceProperties"
  - "TRUE"
  - "access"
  - "chip"
  - "filter"
  - "interfaces"
  - "limit"
  - "multiple"
  - "one"
  - "partitions"
  - "width"
  - "zero"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "Channel"
  - "Confidential"
  - "Flagchip"
  - "For"
  - "Proprietary"
  - "Resistance"
  - "ResistanceProperties"
  - "Select"
  - "SelectProperties"
  - "Selected"
  - "ValueProperties"
  - "double"
  - "external"
  - "invalid"
  - "non"
  - "resistance"
  - "selectProperties"
  - "should"
  - "subinstance"
  - "switch"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "Channel"
  - "CheckProperties"
  - "Confidential"
  - "Enable"
  - "Flagchip"
  - "General"
  - "Proprietary"
  - "Range"
  - "Switch"
  - "Timeout"
  - "ValueProperties"
  - "check"
  - "counter"
  - "enabled"
  - "false"
  - "general"
  - "how"
  - "input"
  - "inputProperties"
  - "invert"
  - "range"
  - "read"
  - "subinstance"
  - "timeout"
  - "value"
  - "will"
  - "windows"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "Confidential"
  - "Flagchip"
  - "Message"
  - "NotificationProperties"
  - "Origin"
  - "Proprietary"
  - "Read"
  - "Symbolic"
  - "after"
  - "callout"
  - "continue"
  - "defines"
  - "existence"
  - "gaps"
  - "given"
  - "parameter"
  - "provides"
  - "received"
  - "starts"
  - "that"
  - "unique"
  - "value"
  - "without"

## 10. Quality Warnings

### WARN-0001
- `severity`: `info`
- `category`: `ocr`
- `physical_pages`: `1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25`
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
- `severity`: `medium`
- `category`: `table_extraction`
- `physical_pages`: `2,6,7,8,8,8,9,9,9,10,10,11,11,12,12,13,16,16,17,17,17,17,17,18,18,18,18,19,19,19`
- `affected_ids`: ["TBL-0002-001", "TBL-0006-001", "TBL-0007-001", "TBL-0008-001", "TBL-0008-002", "TBL-0008-003", "TBL-0009-001", "TBL-0009-002", "TBL-0009-003", "TBL-0010-001", "TBL-0010-002", "TBL-0011-001", "TBL-0011-002", "TBL-0012-001", "TBL-0012-002", "TBL-0013-001", "TBL-0016-001", "TBL-0016-002", "TBL-0017-001", "TBL-0017-002", "TBL-0017-003", "TBL-0017-004", "TBL-0017-005", "TBL-0018-001", "TBL-0018-002", "TBL-0018-003", "TBL-0018-004", "TBL-0019-001", "TBL-0019-002", "TBL-0019-003"]
- `message`: "56 table/table-like entries are generated or low-confidence; complete cell grids were not reconstructed."
- `recommended_action`: "Use these entries for locating pages, not as authoritative table data."

### WARN-0004
- `severity`: `low`
- `category`: `figure_extraction`
- `physical_pages`: `2,13`
- `affected_ids`: ["FIG-0002-001", "FIG-0013-001"]
- `message`: "2 generated visual anchors have no formal source figure number."
- `recommended_action`: "Use source PDF page to inspect vector graphics or screenshots."

### WARN-0005
- `severity`: `info`
- `category`: `requirements`
- `physical_pages`: ``
- `affected_ids`: []
- `message`: "No formal SWS_* / SRS_* requirement identifiers were detected in this PDF."
- `recommended_action`: "Treat any internal REQ/SEC identifiers as navigation IDs only, not source requirement IDs."

### WARN-0006
- `severity`: `low`
- `category`: `revision_history`
- `physical_pages`: `2`
- `affected_ids`: []
- `message`: "No standalone revision-history table was detected in the front matter; the visible page 2 content is Table of Contents. Cover revision is therefore the primary visible revision anchor."
- `recommended_action`: "Use source PDF cover page and file SHA256 for freshness checks; verify revision status with the document owner if revision history is required."

## 11. Self Check Report

- `page_coverage_status`: `pass`
- `pdf_page_count`: `25`
- `indexed_physical_pages_count`: `25`
- `missing_physical_pages`: `[]`
- `duplicated_physical_pages`: `[]`
- `out_of_range_pages`: `[]`
- `section_index_count`: `85`
- `table_index_count`: `56`
- `figure_index_count`: `41`
- `symbol_index_count`: `109`
- `alias_index_count`: `9`
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `duplicate_ids`: []
- `source_sha256_match`: `true`
- `source_pdf_sha256`: `4f8c75eef4dc9d2eed39c63c7c61900caf24c05c46338a77fae2fbbf98f91118`
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `text_layer_search_supplement`: `present`
- `text_layer_search_supplement_generated_at`: `2026-06-20T08:11:45Z`
- `text_layer_search_supplement_terms`: `294`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `quality_warning_count`: `6`
- `overall_status`: `pass_with_warnings`

<!-- End of PDF Manifest. -->