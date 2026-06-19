---
manifest_schema_version: "1.0"
source_pdf: "Mcal_User_Manual.pdf"
source_pdf_sha256: "efd89b76f5b5672b16f921153a11c62f4a5bc5ced7f5e0889e947a6b5152e803"
source_pdf_size_bytes: 3106544
pdf_page_count: 50
generated_at_utc: "2026-06-10T05:09:57+00:00"
generator_name: "pdf-manifest-generator"
generator_version: "0.2.0-openai-structured-manual-index"
generation_mode: "text-layer extraction + rendered-page/visual review + structured manual curation"
page_numbering_policy: "physical_page is the 1-based PDF page index; printed_page is auxiliary only"
bbox_coordinate_policy: "PDF points [x0, y0, x1, y1], PyMuPDF top-left origin, page size 595.276 x 841.890 pt"
source_pdf_page_size: "595.276 x 841.890 pt"
source_pdf_encrypted: false
source_pdf_outline_items: 0
source_pdf_annotations_count: 82
ocr_performed: false
text_layer_available: true
manifest_doc_id: "DOC-efd89b76f5b5"
---

# PDF Manifest: Mcal_User_Manual.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always the 1-based PDF physical page number.
- `printed_page` is auxiliary and must not be used as the primary locator.
- This Manifest is an index and evidence map, not a replacement for the source PDF.
- For factual answers, first use this Manifest to locate `source_pdf`, `physical_page`, `section_path`, and `anchor`, then verify against the source PDF page.
- Treat entries with `confidence < 0.70` or non-empty `quality_flags` as requiring source-page verification.
- Treat this Manifest as stale if the current PDF SHA256 does not equal `source_pdf_sha256`.

## 1. Document Metadata

- `manifest_doc_id`: DOC-efd89b76f5b5
- `source_pdf`: Mcal_User_Manual.pdf
- `pdf_page_count`: 50
- `source_pdf_sha256`: efd89b76f5b5672b16f921153a11c62f4a5bc5ced7f5e0889e947a6b5152e803
- `source_pdf_size_bytes`: 3106544
- `generated_at_utc`: 2026-06-10T05:09:57+00:00
- `generator_name`: pdf-manifest-generator
- `generator_version`: 0.2.0-openai-structured-manual-index
- `generation_mode`: text-layer extraction + rendered-page/visual review + structured manual curation
- `source_pdf_page_size`: 595.276 x 841.890 pt
- `page_numbering_policy`: physical_page is the 1-based PDF page index; printed_page is auxiliary only
- `bbox_coordinate_policy`: PDF points [x0, y0, x1, y1], PyMuPDF top-left origin, page size 595.276 x 841.890 pt
- `source_pdf_encrypted`: False
- `source_pdf_outline_items`: 0
- `source_pdf_annotations_count`: 82
- `ocr_performed`: False
- `text_layer_available`: True
- `pdf_metadata_title`: empty
- `pdf_metadata_author`: empty
- `pdf_metadata_producer`: empty
- `extraction_engines`: PyMuPDF 1.26.7 table/text/image inspection; PDF skill preflight; manual semantic curation from rendered pages

## 2. Global Summary

- `topic`: FC7xxx MCAL User Manual for integrating Flagchip AUTOSAR Microcontroller Abstraction Layer software.
- `revision_on_cover`: Rev: 1.5.1
- `document_date_on_cover`: April 2026
- `target_devices_on_cover`: FC7300F8MDQxXxxxT1B, FC7300F8MDTxXxxxT1B, FC7300F4MDDxXxxxT1B/T1C, FC7300F4MDSxXxxxT1B/T1C, FC7240F2MDSxXxxxT1A
- `module_scope`: MCAL component scope, production/stub modules, package structure, EB tresos usage, plugin/project workflow, integration/build/debug, extra APIs/configuration items, ECU system environment, multicore/cache considerations, AUTOSAR ecosystem, safety mechanisms, known issues, deviations and revision history.
- `key_chapters`: Chapter 2 Safety MCAL Package; Chapter 3 MCAL Usage; Chapter 4 Extra Feature beyond AUTOSAR R20-11; Chapter 5 ECU System Environment; Chapter 7/8 safety mechanisms.
- `key_terms`: MCAL, AUTOSAR R20-11, ISO 26262 ASIL D, EB tresos, EB Client License Administrator, EB_Plugins, DemoBoard, DET, DEM, EcuC, Os, multicore, cache line, LDREX/STREX, Wdg_Service, Fls_ECC_Handler.
- `summary`: The manual explains how to integrate the FC7XXX MCAL package, install and license EB tresos tooling, install/update MCAL plugins, create/import EB tresos projects, integrate generated configuration with source/static code and BSW, build/debug demo projects, understand extra non-AUTOSAR features, and handle system-level safety/multicore/cache obligations. Detailed module behavior is delegated to module-specific user and integration manuals.

## 3. Table of Contents Index

### SEC-FRONT-0001
- `number`: null
- `title`: Cover
- `path`: Front Matter / Cover
- `physical_page_start`: 1
- `physical_page_end`: 1
- `physical_pages`: 1
- `printed_page_start`: none
- `printed_page_end`: none
- `keywords`: cover, title, revision, target devices
- `anchor`: FC7xxx MCAL User Manual

### SEC-FRONT-0002
- `number`: null
- `title`: About This Document
- `path`: Front Matter / About This Document
- `physical_page_start`: 2
- `physical_page_end`: 2
- `physical_pages`: 2
- `printed_page_start`: I
- `printed_page_end`: I
- `keywords`: about, introduction, intended audience, MCAL integration
- `anchor`: About This Document

### SEC-FRONT-0003
- `number`: null
- `title`: Table of Contents
- `path`: Front Matter / Table of Contents
- `physical_page_start`: 3
- `physical_page_end`: 4
- `physical_pages`: 3-4
- `printed_page_start`: II
- `printed_page_end`: III
- `keywords`: toc, chapters, page map
- `anchor`: Table of Contents

### SEC-001
- `number`: "Chapter 1"
- `title`: Introduction
- `path`: Chapter 1. Introduction
- `physical_page_start`: 5
- `physical_page_end`: 8
- `physical_pages`: 5-8
- `printed_page_start`: 1/46
- `printed_page_end`: 4/46
- `keywords`: manual scope, conventions, acronyms, target IC variants
- `anchor`: Chapter 1. Introduction

### SEC-001-001
- `number`: "1.1"
- `title`: About This Manual
- `path`: Chapter 1. Introduction / 1.1 About This Manual
- `physical_page_start`: 5
- `physical_page_end`: 5
- `physical_pages`: 5
- `printed_page_start`: 1/46
- `printed_page_end`: 1/46
- `keywords`: Flagchip, AUTOSAR, MCAL software driver
- `anchor`: About This Manual

### SEC-001-002
- `number`: "1.2"
- `title`: Document Conventions
- `path`: Chapter 1. Introduction / 1.2 Document Conventions
- `physical_page_start`: 5
- `physical_page_end`: 5
- `physical_pages`: 5
- `printed_page_start`: 1/46
- `printed_page_end`: 1/46
- `keywords`: bold, italic, monospace, notification, warning
- `anchor`: Document Conventions

### SEC-001-003
- `number`: "1.3"
- `title`: Acronyms and Abbreviations
- `path`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `physical_page_start`: 5
- `physical_page_end`: 6
- `physical_pages`: 5-6
- `printed_page_start`: 1/46
- `printed_page_end`: 2/46
- `keywords`: acronyms, MCAL, BSW, DET, DEM, drivers
- `anchor`: Acronyms and Abbreviations

### SEC-001-004
- `number`: "1.4"
- `title`: Purpose
- `path`: Chapter 1. Introduction / 1.4 Purpose
- `physical_page_start`: 7
- `physical_page_end`: 7
- `physical_pages`: 7
- `printed_page_start`: 3/46
- `printed_page_end`: 3/46
- `keywords`: purpose, safety objectives, AoU, integrator
- `anchor`: Purpose

### SEC-001-005
- `number`: "1.5"
- `title`: Scope
- `path`: Chapter 1. Introduction / 1.5 Scope
- `physical_page_start`: 7
- `physical_page_end`: 8
- `physical_pages`: 7-8
- `printed_page_start`: 3/46
- `printed_page_end`: 4/46
- `keywords`: scope, FC7300, FC7240, target IC variants, common module
- `anchor`: Scope

### SEC-002
- `number`: "Chapter 2"
- `title`: Safety MCAL Package
- `path`: Chapter 2. Safety MCAL Package
- `physical_page_start`: 9
- `physical_page_end`: 13
- `physical_pages`: 9-13
- `printed_page_start`: 5/46
- `printed_page_end`: 9/46
- `keywords`: ASIL D, MCAL package, production modules, stub modules, file structure
- `anchor`: Chapter 2. Safety MCAL Package

### SEC-002-001
- `number`: "2.1"
- `title`: MCAL Component
- `path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component
- `physical_page_start`: 9
- `physical_page_end`: 11
- `physical_pages`: 9-11
- `printed_page_start`: 5/46
- `printed_page_end`: 7/46
- `keywords`: MCAL scope, module list, production modules, stub modules, ASIL D
- `anchor`: MCAL Component

### SEC-002-002
- `number`: "2.2"
- `title`: SW package Content
- `path`: Chapter 2. Safety MCAL Package / 2.2 SW package Content
- `physical_page_start`: 11
- `physical_page_end`: 13
- `physical_pages`: 11-13
- `printed_page_start`: 7/46
- `printed_page_end`: 9/46
- `keywords`: package content, MCAL folder, DemoBoard, EB_Plugins, Src, tools
- `anchor`: SW package Content

### SEC-003
- `number`: "Chapter 3"
- `title`: MCAL Usage
- `path`: Chapter 3. MCAL Usage
- `physical_page_start`: 14
- `physical_page_end`: 31
- `physical_pages`: 14-31
- `printed_page_start`: 10/46
- `printed_page_end`: 27/46
- `keywords`: EB tresos, license activation, plugins, project creation, integration, build debug
- `anchor`: Chapter 3. MCAL Usage

### SEC-003-001
- `number`: "3.1"
- `title`: Configuration Tools Installation
- `path`: Chapter 3. MCAL Usage / 3.1 Configuration Tools Installation
- `physical_page_start`: 14
- `physical_page_end`: 20
- `physical_pages`: 14-20
- `printed_page_start`: 10/46
- `printed_page_end`: 16/46
- `keywords`: EB tresos, installation, activation, plugins, cache
- `anchor`: Configuration Tools Installation

### SEC-003-001-001
- `number`: "3.1.1"
- `title`: EB tresos Installation
- `path`: Chapter 3. MCAL Usage / 3.1.1 EB tresos Installation
- `physical_page_start`: 14
- `physical_page_end`: 15
- `physical_pages`: 14-15
- `printed_page_start`: 10/46
- `printed_page_end`: 11/46
- `keywords`: EB tresos, setup.exe, components
- `anchor`: EB tresos Installation

### SEC-003-001-002
- `number`: "3.1.2"
- `title`: EB Client License Administrator Installation
- `path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation
- `physical_page_start`: 15
- `physical_page_end`: 16
- `physical_pages`: 15-16
- `printed_page_start`: 11/46
- `printed_page_end`: 12/46
- `keywords`: EB Client License Administrator, FlexLM, activation codes
- `anchor`: EB Client License Administrator Installation

### SEC-003-001-003
- `number`: "3.1.3"
- `title`: EB License Activation
- `path`: Chapter 3. MCAL Usage / 3.1.3 EB License Activation
- `physical_page_start`: 16
- `physical_page_end`: 18
- `physical_pages`: 16-18
- `printed_page_start`: 12/46
- `printed_page_end`: 14/46
- `keywords`: activation code, online activation, offline activation
- `anchor`: EB License Activation

### SEC-003-001-003-001
- `number`: "3.1.3.1"
- `title`: Online Activation
- `path`: Chapter 3. MCAL Usage / 3.1.3.1 Online Activation
- `physical_page_start`: 16
- `physical_page_end`: 16
- `physical_pages`: 16
- `printed_page_start`: 12/46
- `printed_page_end`: 12/46
- `keywords`: online activation, Activation Code, Activate button
- `anchor`: Online Activation

### SEC-003-001-003-002
- `number`: "3.1.3.2"
- `title`: Offline Activation
- `path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation
- `physical_page_start`: 17
- `physical_page_end`: 18
- `physical_pages`: 17-18
- `printed_page_start`: 13/46
- `printed_page_end`: 14/46
- `keywords`: offline activation, request file, response file
- `anchor`: Offline Activation

### SEC-003-001-004
- `number`: "3.1.4"
- `title`: MCAL Plugins Installation
- `path`: Chapter 3. MCAL Usage / 3.1.4 MCAL Plugins Installation
- `physical_page_start`: 18
- `physical_page_end`: 19
- `physical_pages`: 18-19
- `printed_page_start`: 14/46
- `printed_page_end`: 15/46
- `keywords`: MCAL plugins, EB_Plugins, link file, FC7xxx_MCAL.link
- `anchor`: MCAL Plugins Installation

### SEC-003-001-005
- `number`: "3.1.5"
- `title`: MCAL Plugins Update
- `path`: Chapter 3. MCAL Usage / 3.1.5 MCAL Plugins Update
- `physical_page_start`: 20
- `physical_page_end`: 20
- `physical_pages`: 20
- `printed_page_start`: 16/46
- `printed_page_end`: 16/46
- `keywords`: plugins update, EB tresos cache, configuration folder
- `anchor`: MCAL Plugins Update

### SEC-003-002
- `number`: "3.2"
- `title`: MCAL Project Creation
- `path`: Chapter 3. MCAL Usage / 3.2 MCAL Project Creation
- `physical_page_start`: 20
- `physical_page_end`: 25
- `physical_pages`: 20-25
- `printed_page_start`: 16/46
- `printed_page_end`: 21/46
- `keywords`: configuration project, import project, module configuration, generate project
- `anchor`: MCAL Project Creation

### SEC-003-002-001
- `number`: "3.2.1"
- `title`: Create an EB tresos Project from Scratch
- `path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch
- `physical_page_start`: 20
- `physical_page_end`: 23
- `physical_pages`: 20-23
- `printed_page_start`: 16/46
- `printed_page_end`: 19/46
- `keywords`: New Configuration Project, ECU ID, Target FC/FC7300, Common module, Recommended Configuration
- `anchor`: Creat an EB tresos Project from Scratch

### SEC-003-002-002
- `number`: "3.2.2"
- `title`: Import an Existing EB tresos Project
- `path`: Chapter 3. MCAL Usage / 3.2.2 Import an Existing EB tresos Project
- `physical_page_start`: 23
- `physical_page_end`: 25
- `physical_pages`: 23-25
- `printed_page_start`: 19/46
- `printed_page_end`: 21/46
- `keywords`: Import, Existing Projects into Workspace, workspace
- `anchor`: Import an Existing EB tresos Project

### SEC-003-003
- `number`: "3.3"
- `title`: MCAL Project Integration
- `path`: Chapter 3. MCAL Usage / 3.3 MCAL Project Integration
- `physical_page_start`: 25
- `physical_page_end`: 31
- `physical_pages`: 25-31
- `printed_page_start`: 21/46
- `printed_page_end`: 27/46
- `keywords`: static code, generated configuration, BSW, compiler safety, FC_IDE, IAR
- `anchor`: MCAL Project Integration

### SEC-003-003-001
- `number`: "3.3.1"
- `title`: Integration of Configurations with Static Code
- `path`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code
- `physical_page_start`: 25
- `physical_page_end`: 26
- `physical_pages`: 25-26
- `printed_page_start`: 21/46
- `printed_page_end`: 22/46
- `keywords`: static code, integration manual, BSW, OS, startup code
- `anchor`: Integration of Configurations with Static Code

### SEC-003-003-002
- `number`: "3.3.2"
- `title`: Build and Debug
- `path`: Chapter 3. MCAL Usage / 3.3.2 Build and Debug
- `physical_page_start`: 26
- `physical_page_end`: 31
- `physical_pages`: 26-31
- `printed_page_start`: 22/46
- `printed_page_end`: 27/46
- `keywords`: build, debug, FC_IDE, IAR, J-Link, I-jet
- `anchor`: Build and Debug

### SEC-003-003-002-001
- `number`: "3.3.2.1"
- `title`: Build and Debug with Flagchip FC_IDE
- `path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `physical_page_start`: 26
- `physical_page_end`: 29
- `physical_pages`: 26-29
- `printed_page_start`: 22/46
- `printed_page_end`: 25/46
- `keywords`: Flagchip FC_IDE, GNU compiler, import, Build Project, J-Link
- `anchor`: Build and Debug with Flagchip FC_IDE

### SEC-003-003-002-002
- `number`: "3.3.2.2"
- `title`: Build and Debug with IAR Embedded Workbench
- `path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `physical_page_start`: 29
- `physical_page_end`: 31
- `physical_pages`: 29-31
- `printed_page_start`: 25/46
- `printed_page_end`: 27/46
- `keywords`: IAR, I-jet, J-Link/J-Trace, PE micro, multi-core debug
- `anchor`: Build and Debug with IAR Embedded Workbench

### SEC-004
- `number`: "Chapter 4"
- `title`: Extra Feature beyond AUTOSAR R20-11
- `path`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `physical_page_start`: 32
- `physical_page_end`: 33
- `physical_pages`: 32-33
- `printed_page_start`: 28/46
- `printed_page_end`: 29/46
- `keywords`: extra features, added APIs, configuration items, AUTOSAR R20-11
- `anchor`: Chapter 4. Extra Feature beyond AUTOSAR R20-11

### SEC-005
- `number`: "Chapter 5"
- `title`: ECU System Environment
- `path`: Chapter 5. ECU System Environment
- `physical_page_start`: 34
- `physical_page_end`: 41
- `physical_pages`: 34-41
- `printed_page_start`: 30/46
- `printed_page_end`: 37/46
- `keywords`: safe state, system architecture, multicore, cache, data consistency
- `anchor`: Chapter 5. ECU System Environment

### SEC-005-001
- `number`: "5.1"
- `title`: MCAL Version and Variant
- `path`: Chapter 5. ECU System Environment / 5.1 MCAL Version and Variant
- `physical_page_start`: 34
- `physical_page_end`: 34
- `physical_pages`: 34
- `printed_page_start`: 30/46
- `printed_page_end`: 30/46
- `keywords`: AUTOSAR R20-11, IC variant, Common module
- `anchor`: MCAL Version and Variant

### SEC-005-002
- `number`: "5.2"
- `title`: System Safe State
- `path`: Chapter 5. ECU System Environment / 5.2 System Safe State
- `physical_page_start`: 34
- `physical_page_end`: 34
- `physical_pages`: 34
- `printed_page_start`: 30/46
- `printed_page_end`: 30/46
- `keywords`: safe state, reset, power off, diagnostic event
- `anchor`: System Safe State

### SEC-005-003
- `number`: "5.3"
- `title`: ECU System Software Architecture
- `path`: Chapter 5. ECU System Environment / 5.3 ECU System Software Architecture
- `physical_page_start`: 34
- `physical_page_end`: 35
- `physical_pages`: 34-35
- `printed_page_start`: 30/46
- `printed_page_end`: 31/46
- `keywords`: DFA, ASIL decomposition, E2E, NVM CRC, WdgM, HwIOAbs, RTE, DET, DEM
- `anchor`: ECU System Software Architecture

### SEC-005-004
- `number`: "5.4"
- `title`: Multicore Considerations
- `path`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations
- `physical_page_start`: 36
- `physical_page_end`: 41
- `physical_pages`: 36-41
- `printed_page_start`: 32/46
- `printed_page_end`: 37/46
- `keywords`: multicore, EcuC, Os, startup, interrupts, cache, shared data
- `anchor`: Multicore Considerations

### SEC-005-004-001
- `number`: "5.4.1"
- `title`: Multicore Startup Procedure
- `path`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure
- `physical_page_start`: 37
- `physical_page_end`: 37
- `physical_pages`: 37
- `printed_page_start`: 33/46
- `printed_page_end`: 33/46
- `keywords`: Mcu_Init, Port_Init, Dma_Init, TrgSel_Init, Pwm_Init
- `anchor`: Multicore Startup Procedure

### SEC-005-004-002
- `number`: "5.4.2"
- `title`: Multicore De-Initialization
- `path`: Chapter 5. ECU System Environment / 5.4.2 Multicore De-Initialization
- `physical_page_start`: 37
- `physical_page_end`: 38
- `physical_pages`: 37-38
- `printed_page_start`: 33/46
- `printed_page_end`: 34/46
- `keywords`: de-initialization, core context, dependent modules
- `anchor`: Multicore De-Initialization

### SEC-005-004-003
- `number`: "5.4.3"
- `title`: Multicore Interrupts
- `path`: Chapter 5. ECU System Environment / 5.4.3 Multicore Interrupts
- `physical_page_start`: 38
- `physical_page_end`: 38
- `physical_pages`: 38
- `printed_page_start`: 34/46
- `printed_page_end`: 34/46
- `keywords`: interrupt routing, NVIC, SCM_INT_ROUTERn, PORT_PCRn
- `anchor`: Multicore Interrupts

### SEC-005-004-004
- `number`: "5.4.4"
- `title`: Data Consistency in Multicore System
- `path`: Chapter 5. ECU System Environment / 5.4.4 Data Consistency in Multicore System
- `physical_page_start`: 38
- `physical_page_end`: 41
- `physical_pages`: 38-41
- `printed_page_start`: 34/46
- `printed_page_end`: 37/46
- `keywords`: LDREX, STREX, Mailbox, spinlocks, MPU, cache
- `anchor`: Data Consistency in Multicore System

### SEC-005-004-004-001
- `number`: "5.4.4.1"
- `title`: Multicore Shared Data Consistency
- `path`: Chapter 5. ECU System Environment / 5.4.4.1 Multicore Shared Data Consistency
- `physical_page_start`: 38
- `physical_page_end`: 39
- `physical_pages`: 38-39
- `printed_page_start`: 34/46
- `printed_page_end`: 35/46
- `keywords`: shared memory, Strongly-ordered, Device, Normal, dsb, ITCM, DTCM
- `anchor`: Multicore Shared Data Consistency

### SEC-005-004-004-002
- `number`: "5.4.4.2"
- `title`: Data Consistency when Cache Enabled
- `path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled
- `physical_page_start`: 39
- `physical_page_end`: 41
- `physical_pages`: 39-41
- `printed_page_start`: 35/46
- `printed_page_end`: 37/46
- `keywords`: cache line, write back, write through, .mcal_data, .mcal_bss, nocacheable
- `anchor`: Data Consistency when Cache Enabled

### SEC-006
- `number`: "Chapter 6"
- `title`: AUTOSAR Ecosystem
- `path`: Chapter 6. AUTOSAR Ecosystem
- `physical_page_start`: 42
- `physical_page_end`: 45
- `physical_pages`: 42-45
- `printed_page_start`: 38/46
- `printed_page_end`: 41/46
- `keywords`: AUTOSAR BSW, MCU safety library, MICROSAR, Hirain, CECT, NeuSAR, ZhiCong
- `anchor`: Chapter 6. AUTOSAR Ecosystem

### SEC-006-001
- `number`: "6.1"
- `title`: AUTOSAR BASIC SW Package
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.1 AUTOSAR BASIC SW Package
- `physical_page_start`: 42
- `physical_page_end`: 44
- `physical_pages`: 42-44
- `printed_page_start`: 38/46
- `printed_page_end`: 40/46
- `keywords`: BSW package, MICROSAR, INTEWORK, ORIENTAIS, NeuSAR
- `anchor`: AUTOSAR BASIC SW Package

### SEC-006-001-001
- `number`: "6.1.1"
- `title`: MICROSAR Classic Vector SLP4
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.1.1 MICROSAR Classic Vector SLP4
- `physical_page_start`: 42
- `physical_page_end`: 42
- `physical_pages`: 42
- `printed_page_start`: 38/46
- `printed_page_end`: 38/46
- `keywords`: MICROSAR, Vector, DaVinci Configurator, Green Hills
- `anchor`: MICROSAR Classic Vector SLP4

### SEC-006-001-002
- `number`: "6.1.2"
- `title`: INTEWORK-EAS-CP
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.1.2 INTEWORK-EAS-CP
- `physical_page_start`: 43
- `physical_page_end`: 43
- `physical_pages`: 43
- `printed_page_start`: 39/46
- `printed_page_end`: 39/46
- `keywords`: Hirain, INTEWORK-EAS-CP, IAR, GreenHills, ASIL-D
- `anchor`: INTEWORK-EAS-CP

### SEC-006-001-003
- `number`: "6.1.3"
- `title`: ORIENTAIS Classic AUTOSAR (CECT)
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.1.3 ORIENTAIS Classic AUTOSAR (CECT)
- `physical_page_start`: 43
- `physical_page_end`: 44
- `physical_pages`: 43-44
- `printed_page_start`: 39/46
- `printed_page_end`: 40/46
- `keywords`: CECT, ORIENTAIS, Safety OS, ISO 26262
- `anchor`: ORIENTAIS Classic AUTOSAR

### SEC-006-001-004
- `number`: "6.1.4"
- `title`: NeuSAR cCore (Neusoft REACH)
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.1.4 NeuSAR cCore (Neusoft REACH)
- `physical_page_start`: 44
- `physical_page_end`: 44
- `physical_pages`: 44
- `printed_page_start`: 40/46
- `printed_page_end`: 40/46
- `keywords`: NeuSAR, Neusoft REACH, OS, RTE, WDG, E2E
- `anchor`: NeuSAR cCore

### SEC-006-002
- `number`: "6.2"
- `title`: MCU Safety Library
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.2 MCU Safety Library
- `physical_page_start`: 45
- `physical_page_end`: 45
- `physical_pages`: 45
- `printed_page_start`: 41/46
- `printed_page_end`: 41/46
- `keywords`: MCU safety library, Safety Frame, ZhiCong, SEooC, SPFM, LFM
- `anchor`: MCU Safety Library

### SEC-006-002-001
- `number`: "6.2.1"
- `title`: FC7XXX Safety Frame (ZhiCong)
- `path`: Chapter 6. AUTOSAR Ecosystem / 6.2.1 FC7XXX Safety Frame (ZhiCong)
- `physical_page_start`: 45
- `physical_page_end`: 45
- `physical_pages`: 45
- `printed_page_start`: 41/46
- `printed_page_end`: 41/46
- `keywords`: ZhiCong, Safety Frame, complex driver, safety mechanism
- `anchor`: FC7XXX Safety Frame

### SEC-007
- `number`: "Chapter 7"
- `title`: MCAL safety mechanisms
- `path`: Chapter 7. MCAL safety mechanisms
- `physical_page_start`: 46
- `physical_page_end`: 46
- `physical_pages`: 46
- `printed_page_start`: 42/46
- `printed_page_end`: 42/46
- `keywords`: DET, DEM, configuration constraints, code generation errors, Module_Init
- `anchor`: Chapter 7. MCAL safety mechanisms

### SEC-008
- `number`: "Chapter 8"
- `title`: MCU safety mechanisms
- `path`: Chapter 8. MCU safety mechanisms
- `physical_page_start`: 47
- `physical_page_end`: 47
- `physical_pages`: 47
- `printed_page_start`: 43/46
- `printed_page_end`: 43/46
- `keywords`: ASR, assumptions, FMEDA, CMU, SR-AD, safety manual
- `anchor`: Chapter 8. MCU safety mechanisms

### SEC-009
- `number`: "Chapter 9"
- `title`: Known Issues
- `path`: Chapter 9. Known Issues
- `physical_page_start`: 48
- `physical_page_end`: 48
- `physical_pages`: 48
- `printed_page_start`: 44/46
- `printed_page_end`: 44/46
- `keywords`: known issues, no notable known issues
- `anchor`: Chapter 9. Known Issues

### SEC-010
- `number`: "Chapter 10"
- `title`: Deviations and Limitations
- `path`: Chapter 10. Deviations and Limitations
- `physical_page_start`: 49
- `physical_page_end`: 49
- `physical_pages`: 49
- `printed_page_start`: 45/46
- `printed_page_end`: 45/46
- `keywords`: deviations, limitations, module user manuals
- `anchor`: Chapter 10. Deviations and Limitations

### SEC-011
- `number`: "Chapter 11"
- `title`: Revision History
- `path`: Chapter 11. Revision History
- `physical_page_start`: 50
- `physical_page_end`: 50
- `physical_pages`: 50
- `printed_page_start`: 46/46
- `printed_page_end`: 46/46
- `keywords`: revision history, versions, release changes
- `anchor`: Chapter 11. Revision History

## 4. Page Segment Index

### 4.0 Physical Page Coverage Map

- `PAGE-0001`: `physical_page`: 1; `printed_page`: none; `segment_id`: SEG-0001; `section_path`: Front Matter / Cover; `content_types`: cover, text, graphic; `anchor`: FC7xxx MCAL User Manual
- `PAGE-0002`: `physical_page`: 2; `printed_page`: I; `segment_id`: SEG-0002-0004; `section_path`: Front Matter / About This Document; `content_types`: text, notification; `anchor`: This User Manual is intended to enable users to integrate the Microcontroller Abstraction Layer
- `PAGE-0003`: `physical_page`: 3; `printed_page`: II; `segment_id`: SEG-0002-0004; `section_path`: Front Matter / Table of Contents; `content_types`: toc, text; `anchor`: Chapter 3. MCAL Usage
- `PAGE-0004`: `physical_page`: 4; `printed_page`: III; `segment_id`: SEG-0002-0004; `section_path`: Front Matter / Table of Contents; `content_types`: toc, text; `anchor`: Chapter 11. Revision History
- `PAGE-0005`: `physical_page`: 5; `printed_page`: 1/46; `segment_id`: SEG-0005-0006; `section_path`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations; `content_types`: text, notification, warning, table; `anchor`: Table 1: Acronyms and Abbreviations
- `PAGE-0006`: `physical_page`: 6; `printed_page`: 2/46; `segment_id`: SEG-0005-0006; `section_path`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations; `content_types`: text, table; `anchor`: ECU Electronic Control Unit
- `PAGE-0007`: `physical_page`: 7; `printed_page`: 3/46; `segment_id`: SEG-0007-0008; `section_path`: Chapter 1. Introduction / 1.4 Purpose / 1.5 Scope; `content_types`: text, table; `anchor`: Target IC Variants
- `PAGE-0008`: `physical_page`: 8; `printed_page`: 4/46; `segment_id`: SEG-0007-0008; `section_path`: Chapter 1. Introduction / 1.5 Scope; `content_types`: text, table-continuation; `anchor`: FC7300F8MDQ1A257T1A
- `PAGE-0009`: `physical_page`: 9; `printed_page`: 5/46; `segment_id`: SEG-0009-0011; `section_path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component; `content_types`: text, figure, architecture-diagram; `anchor`: Figure 1: MCAL Scope
- `PAGE-0010`: `physical_page`: 10; `printed_page`: 6/46; `segment_id`: SEG-0009-0011; `section_path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component; `content_types`: text, table; `anchor`: Table 2: List of Production Modules
- `PAGE-0011`: `physical_page`: 11; `printed_page`: 7/46; `segment_id`: SEG-0009-0011; `section_path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component / 2.2 SW package Content; `content_types`: text, table; `anchor`: Detailed stub modules list as following
- `PAGE-0012`: `physical_page`: 12; `printed_page`: 8/46; `segment_id`: SEG-0012-0013; `section_path`: Chapter 2. Safety MCAL Package / 2.2 SW package Content; `content_types`: text, figure, file-tree; `anchor`: Figure 2: File Structure
- `PAGE-0013`: `physical_page`: 13; `printed_page`: 9/46; `segment_id`: SEG-0012-0013; `section_path`: Chapter 2. Safety MCAL Package / 2.2 SW package Content; `content_types`: text, notification; `anchor`: Please do not put the MCAL/EB_Plugins in the folder which is managed by SCM tools
- `PAGE-0014`: `physical_page`: 14; `printed_page`: 10/46; `segment_id`: SEG-0014-0016; `section_path`: Chapter 3. MCAL Usage / 3.1 Configuration Tools Installation / 3.1.1 EB tresos Installation; `content_types`: text, screenshot; `anchor`: Components of the FC7XXX MCAL have been developed as plugins of EB tresos 28.1.0
- `PAGE-0015`: `physical_page`: 15; `printed_page`: 11/46; `segment_id`: SEG-0014-0016; `section_path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation; `content_types`: text, screenshot; `anchor`: EB Client License Administrator v1.4.3 and above
- `PAGE-0016`: `physical_page`: 16; `printed_page`: 12/46; `segment_id`: SEG-0014-0016; `section_path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation / 3.1.3 EB License Activation / 3.1.3.1 Online Activation; `content_types`: text, screenshot; `anchor`: Online Activation
- `PAGE-0017`: `physical_page`: 17; `printed_page`: 13/46; `segment_id`: SEG-0017-0019; `section_path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation; `content_types`: text, screenshot; `anchor`: Offline Activation
- `PAGE-0018`: `physical_page`: 18; `printed_page`: 14/46; `segment_id`: SEG-0017-0019; `section_path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation / 3.1.4 MCAL Plugins Installation; `content_types`: text, screenshot; `anchor`: MCAL Plugins Installation
- `PAGE-0019`: `physical_page`: 19; `printed_page`: 15/46; `segment_id`: SEG-0017-0019; `section_path`: Chapter 3. MCAL Usage / 3.1.4 MCAL Plugins Installation; `content_types`: text, screenshot, figure; `anchor`: path=C:/Flagchip/FC7XXX_MCAL/MCAL/EB_Plugins
- `PAGE-0020`: `physical_page`: 20; `printed_page`: 16/46; `segment_id`: SEG-0020-0022; `section_path`: Chapter 3. MCAL Usage / 3.1.5 MCAL Plugins Update / 3.2 MCAL Project Creation / 3.2.1 Create an EB tresos Project from Scratch; `content_types`: text, screenshot, figure; `anchor`: Figure 4: EB Cache Files
- `PAGE-0021`: `physical_page`: 21; `printed_page`: 17/46; `segment_id`: SEG-0020-0022; `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch; `content_types`: text, screenshot; `anchor`: In the Configuration Project Data tab
- `PAGE-0022`: `physical_page`: 22; `printed_page`: 18/46; `segment_id`: SEG-0020-0022; `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch; `content_types`: text, screenshot, notification; `anchor`: Module Configuration tab
- `PAGE-0023`: `physical_page`: 23; `printed_page`: 19/46; `segment_id`: SEG-0023-0025; `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch / 3.2.2 Import an Existing EB tresos Project; `content_types`: text, screenshot; `anchor`: Generate Project
- `PAGE-0024`: `physical_page`: 24; `printed_page`: 20/46; `segment_id`: SEG-0023-0025; `section_path`: Chapter 3. MCAL Usage / 3.2.2 Import an Existing EB tresos Project; `content_types`: text, screenshot; `anchor`: Existing Projects into Workspace
- `PAGE-0025`: `physical_page`: 25; `printed_page`: 21/46; `segment_id`: SEG-0023-0025; `section_path`: Chapter 3. MCAL Usage / 3.2.2 Import an Existing EB tresos Project / 3.3 MCAL Project Integration / 3.3.1 Integration of Configurations with Static Code; `content_types`: text, screenshot; `anchor`: Integration of Configurations with Static Code
- `PAGE-0026`: `physical_page`: 26; `printed_page`: 22/46; `segment_id`: SEG-0026-0028; `section_path`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE; `content_types`: text, figure, screenshot; `anchor`: compiler meeting TCL 3, ASIL-D scenario
- `PAGE-0027`: `physical_page`: 27; `printed_page`: 23/46; `segment_id`: SEG-0026-0028; `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE; `content_types`: text, screenshot; `anchor`: DemoBoard/<Chip_Variant>/tools/FC_Project
- `PAGE-0028`: `physical_page`: 28; `printed_page`: 24/46; `segment_id`: SEG-0026-0028; `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE; `content_types`: text, screenshot; `anchor`: Build Project
- `PAGE-0029`: `physical_page`: 29; `printed_page`: 25/46; `segment_id`: SEG-0029-0031; `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE / 3.3.2.2 Build and Debug with IAR Embedded Workbench; `content_types`: text, screenshot; `anchor`: GDB SEGGER J-Link Debugging
- `PAGE-0030`: `physical_page`: 30; `printed_page`: 26/46; `segment_id`: SEG-0029-0031; `section_path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench; `content_types`: text, screenshot; `anchor`: Debugger tab and choose I-jet, J-Link/J-Trace or PE micro
- `PAGE-0031`: `physical_page`: 31; `printed_page`: 27/46; `segment_id`: SEG-0029-0031; `section_path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench; `content_types`: text, screenshot, notification; `anchor`: IAR embedded workbench supports multi-core debug only when you uses I-jet
- `PAGE-0032`: `physical_page`: 32; `printed_page`: 28/46; `segment_id`: SEG-0032-0033; `section_path`: Chapter 4. Extra Feature beyond AUTOSAR R20-11; `content_types`: text, table; `anchor`: Table 4: MCAL Added Features
- `PAGE-0033`: `physical_page`: 33; `printed_page`: 29/46; `segment_id`: SEG-0032-0033; `section_path`: Chapter 4. Extra Feature beyond AUTOSAR R20-11; `content_types`: text, table-continuation; `anchor`: Fls_ECC_Handler
- `PAGE-0034`: `physical_page`: 34; `printed_page`: 30/46; `segment_id`: SEG-0034-0035; `section_path`: Chapter 5. ECU System Environment / 5.1 MCAL Version and Variant / 5.2 System Safe State / 5.3 ECU System Software Architecture; `content_types`: text; `anchor`: System Safe State
- `PAGE-0035`: `physical_page`: 35; `printed_page`: 31/46; `segment_id`: SEG-0034-0035; `section_path`: Chapter 5. ECU System Environment / 5.3 ECU System Software Architecture; `content_types`: text; `anchor`: Integrator shall perform CRC check for NVM data
- `PAGE-0036`: `physical_page`: 36; `printed_page`: 32/46; `segment_id`: SEG-0036-0038; `section_path`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations; `content_types`: text, figure, configuration-screenshot; `anchor`: Figure 6: EcuC Configurations
- `PAGE-0037`: `physical_page`: 37; `printed_page`: 33/46; `segment_id`: SEG-0036-0038; `section_path`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization; `content_types`: text, figure, sequence-diagram; `anchor`: Figure 8: Multicore Initialization
- `PAGE-0038`: `physical_page`: 38; `printed_page`: 34/46; `segment_id`: SEG-0036-0038; `section_path`: Chapter 5. ECU System Environment / 5.4.2 Multicore De-Initialization / 5.4.3 Multicore Interrupts / 5.4.4 Data Consistency in Multicore System / 5.4.4.1 Multicore Shared Data Consistency; `content_types`: text, notification; `anchor`: LDREX and STREX
- `PAGE-0039`: `physical_page`: 39; `printed_page`: 35/46; `segment_id`: SEG-0039-0041; `section_path`: Chapter 5. ECU System Environment / 5.4.4.1 Multicore Shared Data Consistency / 5.4.4.2 Data Consistency when Cache Enabled; `content_types`: text, figure, memory-diagram; `anchor`: Figure 9: Data Modified by Core0
- `PAGE-0040`: `physical_page`: 40; `printed_page`: 36/46; `segment_id`: SEG-0039-0041; `section_path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled; `content_types`: text, figure, memory-diagram; `anchor`: Figure 10: Data Modified by Core1
- `PAGE-0041`: `physical_page`: 41; `printed_page`: 37/46; `segment_id`: SEG-0039-0041; `section_path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled; `content_types`: text, figure, memory-diagram; `anchor`: Figure 12: Data Write Back by Core1
- `PAGE-0042`: `physical_page`: 42; `printed_page`: 38/46; `segment_id`: SEG-0042-0044; `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1 AUTOSAR BASIC SW Package / 6.1.1 MICROSAR Classic Vector SLP4; `content_types`: text, notification, figure; `anchor`: Figure 13: MICROSAR Classic Vector SLP4 Modules
- `PAGE-0043`: `physical_page`: 43; `printed_page`: 39/46; `segment_id`: SEG-0042-0044; `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1.2 INTEWORK-EAS-CP / 6.1.3 ORIENTAIS Classic AUTOSAR (CECT); `content_types`: text, figure; `anchor`: Figure 14: Hirain INTEWORK-EAS-CP Modules
- `PAGE-0044`: `physical_page`: 44; `printed_page`: 40/46; `segment_id`: SEG-0042-0044; `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1.3 ORIENTAIS Classic AUTOSAR (CECT) / 6.1.4 NeuSAR cCore (Neusoft REACH); `content_types`: text, figure; `anchor`: Figure 16: Neusoft NeuSAR Modules
- `PAGE-0045`: `physical_page`: 45; `printed_page`: 41/46; `segment_id`: SEG-0045; `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.2 MCU Safety Library / 6.2.1 FC7XXX Safety Frame (ZhiCong); `content_types`: text, figure; `anchor`: Figure 17: ZhiCong Safety Library Modules
- `PAGE-0046`: `physical_page`: 46; `printed_page`: 42/46; `segment_id`: SEG-0046; `section_path`: Chapter 7. MCAL safety mechanisms; `content_types`: text; `anchor`: MCAL module initialization function (<Module>_Init)
- `PAGE-0047`: `physical_page`: 47; `printed_page`: 43/46; `segment_id`: SEG-0047; `section_path`: Chapter 8. MCU safety mechanisms; `content_types`: text; `anchor`: Assumption (ASR)
- `PAGE-0048`: `physical_page`: 48; `printed_page`: 44/46; `segment_id`: SEG-0048; `section_path`: Chapter 9. Known Issues; `content_types`: text; `anchor`: There are no notable known issues in this version
- `PAGE-0049`: `physical_page`: 49; `printed_page`: 45/46; `segment_id`: SEG-0049; `section_path`: Chapter 10. Deviations and Limitations; `content_types`: text; `anchor`: There are no limitations which are common to all the MCAL modules
- `PAGE-0050`: `physical_page`: 50; `printed_page`: 46/46; `segment_id`: SEG-0050; `section_path`: Chapter 11. Revision History; `content_types`: text, table; `anchor`: Major changes since the last release

### 4.1 Page Segments

### SEG-0001
- `physical_pages`: 1
- `printed_pages`: none
- `section_path`: Front Matter / Cover
- `content_types`: cover, title, graphic
- `summary`: Cover identifies the document as FC7xxx MCAL User Manual, revision 1.5.1, for FC7300/FC7240 target devices.
- `keywords`: FC7xxx, MCAL, Rev 1.5.1, target devices
- `anchors`:
  - `FC7xxx MCAL User Manual`
  - `Rev: 1.5.1`
- `quality_flags`: []

### SEG-0002-0004
- `physical_pages`: 2-4
- `printed_pages`: I..III
- `section_path`: Front Matter / About This Document / Table of Contents
- `content_types`: text, toc, notification
- `summary`: Front matter states the manual purpose and audience, then lists the full document outline from About This Document through Revision History.
- `keywords`: about, intended audience, table of contents, chapters
- `anchors`:
  - `About This Document`
  - `Chapter 1. Introduction`
  - `Chapter 11. Revision History`
- `quality_flags`: []

### SEG-0005-0006
- `physical_pages`: 5-6
- `printed_pages`: 1/46..2/46
- `section_path`: Chapter 1. Introduction / 1.1-1.3
- `content_types`: text, table, notification, warning
- `summary`: Introduces manual conventions and provides the two-page acronym/abbreviation table covering MCAL modules, AUTOSAR terms, interfaces and driver abbreviations.
- `keywords`: acronyms, abbreviations, document conventions, MCAL, DET, DEM
- `anchors`:
  - `Table 1: Acronyms and Abbreviations`
  - `Notification`
  - `Warning`
- `quality_flags`: []

### SEG-0007-0008
- `physical_pages`: 7-8
- `printed_pages`: 3/46..4/46
- `section_path`: Chapter 1. Introduction / 1.4-1.5
- `content_types`: text, table
- `summary`: Explains the product-wide purpose, safety objectives/AoUs, and scope for FC7300/FC7240 series variants; includes a target IC variants table.
- `keywords`: purpose, scope, ASIL D, FC7300, FC7240, target IC variants
- `anchors`:
  - `Project Name FC7XXX MCAL`
  - `Target IC Variants`
  - `FC7300F8MDQ1A257T1A`
- `quality_flags`: []

### SEG-0009-0011
- `physical_pages`: 9-11
- `printed_pages`: 5/46..7/46
- `section_path`: Chapter 2. Safety MCAL Package / 2.1-2.2
- `content_types`: text, figure, table
- `summary`: Defines MCAL package scope in AUTOSAR layered architecture, lists production modules, and identifies stub BSW modules that integrators must replace.
- `keywords`: ASIL D, production modules, stub modules, MCAL scope, BSW
- `anchors`:
  - `Figure 1: MCAL Scope`
  - `Table 2: List of Production Modules`
  - `Detailed stub modules list as following`
- `quality_flags`: []

### SEG-0012-0013
- `physical_pages`: 12-13
- `printed_pages`: 8/46..9/46
- `section_path`: Chapter 2. Safety MCAL Package / 2.2
- `content_types`: text, file-tree, notification
- `summary`: Shows FC7xxx MCAL package directory structure and explains MCAL/EB_Plugins, MCAL/Src, DemoBoard, tool project folders, and SCM/signature cautions.
- `keywords`: package structure, EB_Plugins, MCAL/Src, DemoBoard, SCM, signature
- `anchors`:
  - `Figure 2: File Structure`
  - `Please do not put the MCAL/EB_Plugins`
  - `tools/IAR_Project`
- `quality_flags`: []

### SEG-0014-0016
- `physical_pages`: 14-16
- `printed_pages`: 10/46..12/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.1-3.1.3.1
- `content_types`: text, screenshot
- `summary`: Covers EB tresos version compatibility, EB Client License Administrator installation, FlexLM activation-code mode, and online license activation.
- `keywords`: EB tresos, license administrator, FlexLM, online activation, activation code
- `anchors`:
  - `EB tresos 28.1.0`
  - `EB_Client_License_Administrator_1_4_3_Setup.exe`
  - `Online Activation`
- `quality_flags`: []

### SEG-0017-0019
- `physical_pages`: 17-19
- `printed_pages`: 13/46..15/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.3.2-3.1.4
- `content_types`: text, screenshot, figure
- `summary`: Covers offline license activation workflow and MCAL plugin installation using an EB tresos link file pointing to MCAL/EB_Plugins.
- `keywords`: offline activation, activation request, activation response, MCAL plugins, link file
- `anchors`:
  - `Create Activation Request`
  - `Process Activation`
  - `path=C:/Flagchip/FC7XXX_MCAL/MCAL/EB_Plugins`
- `quality_flags`: []

### SEG-0020-0022
- `physical_pages`: 20-22
- `printed_pages`: 16/46..18/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.5-3.2.1
- `content_types`: text, screenshot, notification
- `summary`: Explains plugin update/cache cleanup and creating a new EB tresos configuration project, including ECU ID, target selection, module selection, Common/Mcu/Port recommendations and compiler-module warning.
- `keywords`: plugin update, cache files, Configuration Project, ECU ID, Target FC/FC7300, Common module
- `anchors`:
  - `Figure 4: EB Cache Files`
  - `File > New > Configuration Project`
  - `Module Configuration tab`
- `quality_flags`: []

### SEG-0023-0025
- `physical_pages`: 23-25
- `printed_pages`: 19/46..21/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.1-3.3.1
- `content_types`: text, screenshot
- `summary`: Finishes project creation/generation, describes importing existing EB tresos projects, and starts project integration with static code, generated configuration, BSW, OS and startup/link scripts.
- `keywords`: Generate Project, Import, Existing Projects into Workspace, integration, static code, BSW
- `anchors`:
  - `Generate Project`
  - `Existing Projects into Workspace`
  - `Integration of Configurations with Static Code`
- `quality_flags`: []

### SEG-0026-0028
- `physical_pages`: 26-28
- `printed_pages`: 22/46..24/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.1-3.3.2.1
- `content_types`: text, figure, screenshot
- `summary`: Shows integration manual guidance, compiler functional-safety constraints, recommended FuSa compilers, FC_IDE/GNU limitation, and FC_IDE import/build/debug flow.
- `keywords`: integration manual, TCL 3, ASIL-D compiler, FC_IDE, GNU compiler, Build Project
- `anchors`:
  - `Figure 5: Integration Manual Guidance`
  - `compiler meeting TCL 3`
  - `Build Project`
- `quality_flags`: []

### SEG-0029-0031
- `physical_pages`: 29-31
- `printed_pages`: 25/46..27/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1-3.3.2.2
- `content_types`: text, screenshot, notification
- `summary`: Completes FC_IDE/J-Link debug setup and explains IAR Embedded Workbench build/debug workflow, debugger driver choices, download/debug button and I-jet multicore debug note.
- `keywords`: J-Link, GDB SEGGER, IAR, I-jet, J-Link/J-Trace, PE micro, multi-core debug
- `anchors`:
  - `GDB SEGGER J-Link Debugging`
  - `Debugger tab and choose I-jet`
  - `IAR embedded workbench supports multi-core debug only when you uses I-jet`
- `quality_flags`: []

### SEG-0032-0033
- `physical_pages`: 32-33
- `printed_pages`: 28/46..29/46
- `section_path`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `content_types`: text, table
- `summary`: Lists FC7XXX MCAL features beyond AUTOSAR R20-11 and maps affected modules to added APIs and configuration items.
- `keywords`: AUTOSAR R20-11, added features, added APIs, configuration items, Eth_WriteMmd, Fls_ECC_Handler
- `anchors`:
  - `Table 4: MCAL Added Features`
  - `Table 5: MCAL Added APIs and Configuration Items`
  - `Fls_ECC_Handler`
- `quality_flags`: []

### SEG-0034-0035
- `physical_pages`: 34-35
- `printed_pages`: 30/46..31/46
- `section_path`: Chapter 5. ECU System Environment / 5.1-5.3
- `content_types`: text
- `summary`: Describes AUTOSAR version/variant usage, system safe-state handling, and integrator obligations around DFA, ASIL decomposition, E2E, NVM CRC, watchdog feeding, interrupt flooding, exceptions and notifications.
- `keywords`: safe state, AUTOSAR R20-11, DFA, ASIL decomposition, E2E, NVM, CRC, watchdog, DET, DEM
- `anchors`:
  - `System Safe State`
  - `Integrator shall perform CRC check for NVM data`
  - `Integrator shall detect and handle interrupt flooding`
- `quality_flags`: []

### SEG-0036-0038
- `physical_pages`: 36-38
- `printed_pages`: 32/46..34/46
- `section_path`: Chapter 5. ECU System Environment / 5.4-5.4.4.1
- `content_types`: text, figure, notification
- `summary`: Explains multicore configuration with EcuC/Os, multicore startup/de-init, interrupt routing, and data consistency limitations around LDREX/STREX, S bit, Mailbox spinlocks and MPU settings.
- `keywords`: multicore, EcuC, Os, Mcu_Init, Port_Init, LDREX, STREX, Mailbox, NVIC, SCM_INT_ROUTERn
- `anchors`:
  - `Figure 6: EcuC Configurations`
  - `Figure 8: Multicore Initialization`
  - `LDREX, STREX and S bit are not supported`
- `quality_flags`: []

### SEG-0039-0041
- `physical_pages`: 39-41
- `printed_pages`: 35/46..37/46
- `section_path`: Chapter 5. ECU System Environment / 5.4.4.1-5.4.4.2
- `content_types`: text, figure
- `summary`: Details shared memory/cache consistency, write-buffer dsb usage, ITCM/DTCM access, write-back cache-line conflict examples, write-through mitigation and MCAL data section cache policies.
- `keywords`: cache line, write back, write through, dsb, ITCM, DTCM, .mcal_data, .mcal_bss, mcal_nocacheable_data
- `anchors`:
  - `Figure 9: Data Modified by Core0`
  - `Figure 12: Data Write Back by Core1`
  - `.mcal_nocacheable_data`
- `quality_flags`: []

### SEG-0042-0044
- `physical_pages`: 42-44
- `printed_pages`: 38/46..40/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1
- `content_types`: text, figure, notification
- `summary`: Introduces AUTOSAR BSW ecosystem partners and summarizes MICROSAR Classic Vector SLP4, Hirain INTEWORK-EAS-CP, CECT ORIENTAIS Classic AUTOSAR and NeuSAR cCore.
- `keywords`: AUTOSAR BSW, MICROSAR, INTEWORK-EAS-CP, ORIENTAIS, NeuSAR, ASIL-D
- `anchors`:
  - `Figure 13: MICROSAR Classic Vector SLP4 Modules`
  - `Figure 14: Hirain INTEWORK-EAS-CP Modules`
  - `Figure 16: Neusoft NeuSAR Modules`
- `quality_flags`: []

### SEG-0045
- `physical_pages`: 45
- `printed_pages`: 41/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.2-6.2.1
- `content_types`: text, figure
- `summary`: Describes the ZhiCong FC7XXX Safety Frame / MCU Safety Library, integration modes, ISO 26262 metrics and software-allocated safety mechanisms.
- `keywords`: ZhiCong, Safety Frame, MCU safety library, SEooC, SPFM, LFM
- `anchors`:
  - `Figure 17: ZhiCong Safety Library Modules`
  - `Can be integrated into AUTOSAR as a complex driver`
- `quality_flags`: []

### SEG-0046
- `physical_pages`: 46
- `printed_pages`: 42/46
- `section_path`: Chapter 7. MCAL safety mechanisms
- `content_types`: text
- `summary`: Describes MCAL internal safety mechanisms at configuration and runtime, DET/DEM reporting, configuration constraints, code generation error handling and mandatory <Module>_Init call order.
- `keywords`: DET, DEM, configuration constraints, code generation errors, Module_Init, API call sequence
- `anchors`:
  - `MCAL driver has internal safety mechanism`
  - `MCAL module initialization function (<Module>_Init)`
- `quality_flags`: []

### SEG-0047
- `physical_pages`: 47
- `printed_pages`: 43/46
- `section_path`: Chapter 8. MCU safety mechanisms
- `content_types`: text
- `summary`: Summarizes MCU safety assumptions, ASR validation, change management, FMEDA metrics, SR-AD mechanisms, CMU consideration, OS-based protection and peripheral safety examples.
- `keywords`: ASR, safety assumptions, FMEDA, SFF, SPFM, LFM, CMU, SR-AD
- `anchors`:
  - `Assumption (ASR)`
  - `System developer should consider enabling CMU`
  - `FC7XXX safety manual`
- `quality_flags`: []

### SEG-0048
- `physical_pages`: 48
- `printed_pages`: 44/46
- `section_path`: Chapter 9. Known Issues
- `content_types`: text
- `summary`: States that there are no notable known issues in this version.
- `keywords`: known issues, none
- `anchors`:
  - `There are no notable known issues in this version`
- `quality_flags`: []

### SEG-0049
- `physical_pages`: 49
- `printed_pages`: 45/46
- `section_path`: Chapter 10. Deviations and Limitations
- `content_types`: text
- `summary`: States that specification deviations are in module-specific user manuals and no limitations are common to all MCAL modules.
- `keywords`: deviations, limitations, module user manual
- `anchors`:
  - `There are no limitations which are common to all the MCAL modules`
- `quality_flags`: []

### SEG-0050
- `physical_pages`: 50
- `printed_pages`: 46/46
- `section_path`: Chapter 11. Revision History
- `content_types`: text, table
- `summary`: Contains revision history table with entries 1.0.0, 1.1.0 and 1.2.0.
- `keywords`: revision history, 1.0.0, 1.1.0, 1.2.0
- `anchors`:
  - `Major changes since the last release`
  - `Added section Multicore Considerations`
- `quality_flags`: []

## 5. Table Index

### TBL-0005-0006-001
- `source_table_number`: Table 1
- `generated_table_number`: null
- `caption`: Acronyms and Abbreviations
- `physical_pages`: 5-6
- `printed_pages`: 1/46..2/46
- `section_path`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `bbox_pdf_points`: {"5": [54.0, 483.4, 541.3, 770.5], "6": [53.8, 68.3, 536.0, 767.5]}
- `caption_bbox_pdf_points`: {"5": [205.6, 463.7, 389.7, 479.6]}
- `key_fields`: Acronym, Abbreviation
- `summary`: Two-page glossary of MCAL, AUTOSAR, BSW, driver-module and interface acronyms.
- `anchor`: Table 1: Acronyms and Abbreviations
- `confidence`: 0.92
- `quality_flags`: ["multi_page_table_continuation"]

### TBL-0007-0008-001
- `source_table_number`: null
- `generated_table_number`: Internal Table: Target IC Variants
- `caption`: Project summary and Target IC Variants
- `physical_pages`: 7-8
- `printed_pages`: 3/46..4/46
- `section_path`: Chapter 1. Introduction / 1.5 Scope
- `bbox_pdf_points`: {"7": [53.9, 470.4, 541.5, 788.1], "8": [53.8, 68.2, 535.8, 165.1]}
- `caption_bbox_pdf_points`: null
- `key_fields`: Project Name, Project Brief, Target IC Variants
- `summary`: Lists FC7XXX MCAL project name/brief and supported FC7240F2MDS, FC7300F4MDD, FC7300F4MDS, FC7300F8MDT and FC7300F8MDQ variants.
- `anchor`: Target IC Variants This FC7XXX MCAL SW package apply to FC7XXX MCU series
- `confidence`: 0.82
- `quality_flags`: ["generated_table_id", "caption_missing_in_source", "multi_page_table_continuation"]

### TBL-0010-0011-001
- `source_table_number`: Table 2
- `generated_table_number`: null
- `caption`: List of Production Modules
- `physical_pages`: 10-11
- `printed_pages`: 6/46..7/46
- `section_path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component
- `bbox_pdf_points`: {"10": [100.4, 524.2, 432.5, 775.4], "11": [120.5, 68.3, 494.9, 373.3]}
- `caption_bbox_pdf_points`: {"10": [210.5, 504.5, 384.8, 520.4]}
- `key_fields`: No, Modules, Multi-Core Type, Functional Group, ASIL Level
- `summary`: Production MCAL modules by multi-core type, functional group and ASIL D level; includes MCU, WDG, GPT, FLS, Crypto, CAN, LIN, SPI, ENET, ADC, DIO, PORT, PWM, ICU, OCU, DMA, I2C, TrgSel, MB, MSC, SENT, UART, OSPI, SDADC, SSI, QDT, PFLS, CRC and FEE.
- `anchor`: Table 2: List of Production Modules
- `confidence`: 0.90
- `quality_flags`: ["multi_page_table_continuation"]

### TBL-0011-002
- `source_table_number`: null
- `generated_table_number`: Internal Table: Stub Modules
- `caption`: Detailed stub modules list
- `physical_pages`: 11
- `printed_pages`: 7/46
- `section_path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component
- `bbox_pdf_points`: {"11": [120.5, 531.6, 475.6, 675.3]}
- `caption_bbox_pdf_points`: null
- `key_fields`: No, Modules, Module Type, Functional Group
- `summary`: Stub modules provided for configuration/code bring-up: WdgIf, CryIf, EthIf, EthTrcv, LinIf, Dem and Os.
- `anchor`: Detailed stub modules list as following
- `confidence`: 0.86
- `quality_flags`: ["generated_table_id", "caption_missing_in_source"]

### TBL-0032-001
- `source_table_number`: Table 4
- `generated_table_number`: null
- `caption`: MCAL Added Features
- `physical_pages`: 32
- `printed_pages`: 28/46
- `section_path`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `bbox_pdf_points`: {"32": [53.8, 173.1, 536.5, 608.6]}
- `caption_bbox_pdf_points`: {"32": [223.0, 153.4, 372.3, 169.3]}
- `key_fields`: Module, Feature, Description
- `summary`: Added features beyond AUTOSAR R20-11 for ADC, SPI, ETH, CAN, PWM, ICU, GPT, WDG, Fee and Fls.
- `anchor`: Table 4: MCAL Added Features
- `confidence`: 0.91
- `quality_flags`: []

### TBL-0032-0033-001
- `source_table_number`: Table 5
- `generated_table_number`: null
- `caption`: MCAL Added APIs and Configuration Items
- `physical_pages`: 32-33
- `printed_pages`: 28/46..29/46
- `section_path`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `bbox_pdf_points`: {"32": [53.8, 667.9, 536.5, 787.1], "33": [53.9, 68.3, 541.4, 355.7]}
- `caption_bbox_pdf_points`: {"32": [172.2, 648.2, 423.1, 664.1]}
- `key_fields`: Module, Feature, Added API, Added Configuration Item
- `summary`: Maps added features to APIs/configuration items, including Eth_WriteMmd, Eth_ReadMmd, Pwm/Gpt/Icu global-time APIs, Wdg_Service, Fls_ECC_Handler, AdcChannelDelay, SpiHwUnitMode, EthCtrlEnableMmd and WdgEnableDirectService.
- `anchor`: Table 5: MCAL Added APIs and Configuration Items
- `confidence`: 0.87
- `quality_flags`: ["multi_page_table_continuation"]

### TBL-0050-001
- `source_table_number`: null
- `generated_table_number`: Internal Table: Revision History
- `caption`: Revision History
- `physical_pages`: 50
- `printed_pages`: 46/46
- `section_path`: Chapter 11. Revision History
- `bbox_pdf_points`: {"50": [53.8, 115.7, 536.0, 219.2]}
- `caption_bbox_pdf_points`: null
- `key_fields`: Version, Date, Description
- `summary`: Revision history table lists 1.0.0, 1.1.0 and 1.2.0 changes.
- `anchor`: Major changes since the last release
- `confidence`: 0.93
- `quality_flags`: ["generated_table_id", "caption_missing_in_source", "source_revision_history_may_not_cover_cover_revision"]

## 6. Figure / Image Index

### FIG-0001-COVER
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: Cover layout
- `caption`: Cover page
- `physical_page`: 1
- `printed_page`: none
- `section_path`: Front Matter / Cover
- `bbox_pdf_points`: [0.0, 0.0, 595.3, 841.9]
- `image_type`: cover
- `semantic_description`: Cover layout for FC7xxx MCAL User Manual with revision 1.5.1, target device families and Flagchip Semiconductors date April 2026.
- `keywords`: cover, revision, target devices, Flagchip
- `anchor`: FC7xxx MCAL User Manual
- `confidence`: 0.78
- `quality_flags`: ["generated_figure_id", "full_page_graphic_region"]

### FIG-0009-001
- `source_figure_number`: Figure 1
- `generated_figure_number`: null
- `caption`: MCAL Scope
- `physical_page`: 9
- `printed_page`: 5/46
- `section_path`: Chapter 2. Safety MCAL Package / 2.1 MCAL Component
- `bbox_pdf_points`: [60.0, 143.0, 542.0, 500.0]
- `image_type`: architecture-diagram
- `semantic_description`: AUTOSAR layered architecture diagram showing RTE, system services, MCAL driver groups, hardware abstraction, complex drivers and libraries; colored modules distinguish production-tested versus stub modules.
- `keywords`: MCAL scope, AUTOSAR layered architecture, RTE, BSW, drivers, stub modules
- `anchor`: Figure 1: MCAL Scope
- `confidence`: 0.73
- `quality_flags`: ["vector_diagram_bbox_approximate"]

### FIG-0012-001
- `source_figure_number`: Figure 2
- `generated_figure_number`: null
- `caption`: File Structure
- `physical_page`: 12
- `printed_page`: 8/46
- `section_path`: Chapter 2. Safety MCAL Package / 2.2 SW package Content
- `bbox_pdf_points`: [54.0, 68.0, 542.0, 574.0]
- `image_type`: file-tree
- `semantic_description`: Directory tree for FC7xxx MCAL package, separating MCAL/EB_Plugins, MCAL/Src and DemoBoard variant folders with generated files, App, Include, Middleware, Source and Tools.
- `keywords`: file structure, MCAL, EB_Plugins, DemoBoard, Src, Tools
- `anchor`: Figure 2: File Structure
- `confidence`: 0.86
- `quality_flags`: ["text_tree_not_raster_image"]

### FIG-0019-001
- `source_figure_number`: Figure 3
- `generated_figure_number`: null
- `caption`: FC7xxx MCAL Package
- `physical_page`: 19
- `printed_page`: 15/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.4 MCAL Plugins Installation
- `bbox_pdf_points`: [151.5, 125.8, 443.8, 229.6]
- `image_type`: screenshot
- `semantic_description`: Windows folder screenshot showing extracted FC7XXX_MCAL package containing DemoBoard and MCAL folders.
- `keywords`: FC7xxx MCAL package, DemoBoard, MCAL, plugins
- `anchor`: Figure 3: FC7xxx MCAL Package
- `confidence`: 0.88
- `quality_flags`: []

### FIG-0020-001
- `source_figure_number`: Figure 4
- `generated_figure_number`: null
- `caption`: EB Cache Files
- `physical_page`: 20
- `printed_page`: 16/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.5 MCAL Plugins Update
- `bbox_pdf_points`: [151.5, 272.6, 443.8, 456.1]
- `image_type`: screenshot
- `semantic_description`: Windows folder screenshot highlighting EB tresos configuration cache folders to remove after MCAL plugin updates.
- `keywords`: EB cache, plugins update, configuration folder, cache cleanup
- `anchor`: Figure 4: EB Cache Files
- `confidence`: 0.89
- `quality_flags`: []

### FIG-0026-001
- `source_figure_number`: Figure 5
- `generated_figure_number`: null
- `caption`: Integration Manual Guidance
- `physical_page`: 26
- `printed_page`: 22/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code
- `bbox_pdf_points`: [190.1, 68.4, 405.2, 378.5]
- `image_type`: document-outline-screenshot
- `semantic_description`: Example integration manual chapter tree showing items such as building, dependencies, files required for compile, add plug-ins, ISR, error reporting, function calls and macros.
- `keywords`: integration manual, chapter tree, compile, plug-ins, ISR, error reporting
- `anchor`: Figure 5: Integration Manual Guidance
- `confidence`: 0.87
- `quality_flags`: []

### FIG-0036-001
- `source_figure_number`: Figure 6
- `generated_figure_number`: null
- `caption`: EcuC Configurations
- `physical_page`: 36
- `printed_page`: 32/46
- `section_path`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations
- `bbox_pdf_points`: [54.0, 360.0, 541.3, 488.5]
- `image_type`: configuration-screenshot
- `semantic_description`: Two EB tresos screenshots showing EcuC Core Definition and EcuC Partition Definition for multicore configuration.
- `keywords`: EcuC, core definition, partition definition, multicore configuration
- `anchor`: Figure 6: EcuC Configurations
- `confidence`: 0.87
- `quality_flags`: []

### FIG-0036-002
- `source_figure_number`: Figure 7
- `generated_figure_number`: null
- `caption`: Os Application Configurations
- `physical_page`: 36
- `printed_page`: 32/46
- `section_path`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations
- `bbox_pdf_points`: [147.6, 579.6, 447.6, 686.4]
- `image_type`: configuration-screenshot
- `semantic_description`: Os module screenshot correlating core reference and trusted function start, used for multicore Os application configuration.
- `keywords`: Os, application, multicore, partition reference
- `anchor`: Figure 7: Os Application Configurations
- `confidence`: 0.87
- `quality_flags`: []

### FIG-0037-001
- `source_figure_number`: Figure 8
- `generated_figure_number`: null
- `caption`: Multicore Initialization
- `physical_page`: 37
- `printed_page`: 33/46
- `section_path`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure
- `bbox_pdf_points`: [88.0, 205.0, 507.0, 679.0]
- `image_type`: sequence-diagram
- `semantic_description`: Sequence diagram for multicore Pwm initialization, showing master core Mcu/Port/Dma/Eftu/TrgSel initialization, slave-core activation and per-core Pwm_Init calls.
- `keywords`: multicore startup, Mcu_Init, Mcu_InitClock, Port_Init, Dma_Init, TrgSel_Init, Pwm_Init
- `anchor`: Figure 8: Multicore Initialization
- `confidence`: 0.74
- `quality_flags`: ["vector_diagram_bbox_approximate", "table_detector_false_positive_filtered"]

### FIG-0039-001
- `source_figure_number`: Figure 9
- `generated_figure_number`: null
- `caption`: Data Modified by Core0
- `physical_page`: 39
- `printed_page`: 35/46
- `section_path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled
- `bbox_pdf_points`: [115.0, 600.0, 485.0, 750.0]
- `image_type`: memory-diagram
- `semantic_description`: Cache-line example where core 0 modifies a variable and marks its cache line dirty while core 1 cache is unknown.
- `keywords`: cache line, core 0, write back, dirty cache, data consistency
- `anchor`: Figure 9: Data Modified by Core0
- `confidence`: 0.73
- `quality_flags`: ["vector_diagram_bbox_approximate"]

### FIG-0040-001
- `source_figure_number`: Figure 10
- `generated_figure_number`: null
- `caption`: Data Modified by Core1
- `physical_page`: 40
- `printed_page`: 36/46
- `section_path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled
- `bbox_pdf_points`: [116.0, 72.0, 485.0, 315.0]
- `image_type`: memory-diagram
- `semantic_description`: Cache-line example where core 1 fills its cache line from stale memory and modifies its own variable, unaware of core 0 dirty-cache change.
- `keywords`: cache line, core 1, stale memory, write back
- `anchor`: Figure 10: Data Modified by Core1
- `confidence`: 0.73
- `quality_flags`: ["vector_diagram_bbox_approximate"]

### FIG-0040-002
- `source_figure_number`: Figure 11
- `generated_figure_number`: null
- `caption`: Data Write Back by Core0
- `physical_page`: 40
- `printed_page`: 36/46
- `section_path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled
- `bbox_pdf_points`: [116.0, 343.0, 485.0, 579.0]
- `image_type`: memory-diagram
- `semantic_description`: Cache-line example showing core 0 cache eviction and write-back to memory by full cache line.
- `keywords`: write back, core 0, cache eviction, memory consistency
- `anchor`: Figure 11: Data Write Back by Core0
- `confidence`: 0.73
- `quality_flags`: ["vector_diagram_bbox_approximate"]

### FIG-0041-001
- `source_figure_number`: Figure 12
- `generated_figure_number`: null
- `caption`: Data Write Back by Core1
- `physical_page`: 41
- `printed_page`: 37/46
- `section_path`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled
- `bbox_pdf_points`: [116.0, 70.0, 485.0, 258.0]
- `image_type`: memory-diagram
- `semantic_description`: Cache-line example showing core 1 write-back overwriting core 0 data, causing unexpected memory inconsistency.
- `keywords`: write back, core 1, data inconsistency, cache line
- `anchor`: Figure 12: Data Write Back by Core1
- `confidence`: 0.73
- `quality_flags`: ["vector_diagram_bbox_approximate"]

### FIG-0042-001
- `source_figure_number`: Figure 13
- `generated_figure_number`: null
- `caption`: MICROSAR Classic Vector SLP4 Modules
- `physical_page`: 42
- `printed_page`: 38/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1.1 MICROSAR Classic Vector SLP4
- `bbox_pdf_points`: [54.0, 486.6, 541.3, 735.2]
- `image_type`: module-map
- `semantic_description`: MICROSAR Classic BSW module map from Vector, grouped into AUTOSAR basic software products.
- `keywords`: MICROSAR, Vector, BSW modules, DaVinci Configurator
- `anchor`: Figure 13: MICROSAR Classic Vector SLP4 Modules
- `confidence`: 0.86
- `quality_flags`: []

### FIG-0043-001
- `source_figure_number`: Figure 14
- `generated_figure_number`: null
- `caption`: Hirain INTEWORK-EAS-CP Modules
- `physical_page`: 43
- `printed_page`: 39/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1.2 INTEWORK-EAS-CP
- `bbox_pdf_points`: [54.0, 296.3, 541.3, 531.1]
- `image_type`: module-map
- `semantic_description`: Hirain INTEWORK-EAS-CP AUTOSAR module map, presented as layered product/modules overview.
- `keywords`: Hirain, INTEWORK-EAS-CP, AUTOSAR modules, ASIL-D
- `anchor`: Figure 14: Hirain INTEWORK-EAS-CP Modules
- `confidence`: 0.86
- `quality_flags`: []

### FIG-0044-001
- `source_figure_number`: Figure 15
- `generated_figure_number`: null
- `caption`: CECT ORIENTAIS Modules
- `physical_page`: 44
- `printed_page`: 40/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1.3 ORIENTAIS Classic AUTOSAR (CECT)
- `bbox_pdf_points`: [87.6, 68.4, 507.6, 287.3]
- `image_type`: module-map
- `semantic_description`: CECT ORIENTAIS Classic AUTOSAR module map.
- `keywords`: CECT, ORIENTAIS, Classic AUTOSAR, module map
- `anchor`: Figure 15: CECT ORIENTAIS Modules
- `confidence`: 0.85
- `quality_flags`: []

### FIG-0044-002
- `source_figure_number`: Figure 16
- `generated_figure_number`: null
- `caption`: Neusoft NeuSAR Modules
- `physical_page`: 44
- `printed_page`: 40/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.1.4 NeuSAR cCore (Neusoft REACH)
- `bbox_pdf_points`: [147.6, 509.5, 447.6, 752.8]
- `image_type`: module-map
- `semantic_description`: Neusoft NeuSAR module map for AUTOSAR Classic platform core software.
- `keywords`: Neusoft, NeuSAR, cCore, AUTOSAR modules
- `anchor`: Figure 16: Neusoft NeuSAR Modules
- `confidence`: 0.85
- `quality_flags`: []

### FIG-0045-001
- `source_figure_number`: Figure 17
- `generated_figure_number`: null
- `caption`: ZhiCong Safety Library Modules
- `physical_page`: 45
- `printed_page`: 41/46
- `section_path`: Chapter 6. AUTOSAR Ecosystem / 6.2.1 FC7XXX Safety Frame (ZhiCong)
- `bbox_pdf_points`: [117.6, 368.7, 477.6, 577.3]
- `image_type`: safety-library-diagram
- `semantic_description`: ZhiCong Safety Frame module diagram showing software-allocated MCU safety mechanisms.
- `keywords`: ZhiCong, Safety Library, Safety Frame, MCU safety mechanisms
- `anchor`: Figure 17: ZhiCong Safety Library Modules
- `confidence`: 0.85
- `quality_flags`: []

### FIG-0014-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p14 screenshot 1
- `caption`: EB tresos installer component selection
- `physical_page`: 14
- `printed_page`: 10/46
- `section_path`: Chapter 3. MCAL Usage / 3.1 Configuration Tools Installation / 3.1.1 EB tresos Installation
- `bbox_pdf_points`: [107.5, 410.2, 415.5, 686.7]
- `image_type`: screenshot
- `semantic_description`: EB tresos installer page selecting components and install folder.
- `keywords`: EB tresos, installer, components, setup.exe
- `anchor`: Select the components and folder to install
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0015-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p15 screenshot 1
- `caption`: EB tresos installation completion dialog
- `physical_page`: 15
- `printed_page`: 11/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation
- `bbox_pdf_points`: [107.5, 68.4, 415.5, 344.9]
- `image_type`: screenshot
- `semantic_description`: Installer completion dialog after EB tresos installation process.
- `keywords`: EB tresos, installation, completion
- `anchor`: Wait the installation process to finish
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0015-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p15 screenshot 2
- `caption`: EB Client License Administrator setup destination
- `physical_page`: 15
- `printed_page`: 11/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation
- `bbox_pdf_points`: [162.9, 457.9, 444.7, 679.2]
- `image_type`: screenshot
- `semantic_description`: Setup dialog selecting destination folder for EB Client License Administrator.
- `keywords`: EB Client License Administrator, setup, destination folder
- `anchor`: Select the installation folder
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0016-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p16 screenshot 1
- `caption`: FlexLM activation-code license mode
- `physical_page`: 16
- `printed_page`: 12/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation / 3.1.3 EB License Activation / 3.1.3.1 Online Activation
- `bbox_pdf_points`: [162.9, 68.4, 444.7, 289.8]
- `image_type`: screenshot
- `semantic_description`: FlexLM license information tab with Use License Activation Codes selected.
- `keywords`: FlexLM, activation codes, license administrator
- `anchor`: Use License Activation Codes
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0016-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p16 screenshot 2
- `caption`: Online activation screen
- `physical_page`: 16
- `printed_page`: 12/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation / 3.1.3 EB License Activation / 3.1.3.1 Online Activation
- `bbox_pdf_points`: [102.7, 463.4, 492.5, 736.2]
- `image_type`: screenshot
- `semantic_description`: License activation screen showing activation code input and Activate button.
- `keywords`: online activation, activation code, Activate button
- `anchor`: Online Activation
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0017-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p17 screenshot 1
- `caption`: Offline activation request screen
- `physical_page`: 17
- `printed_page`: 13/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation
- `bbox_pdf_points`: [116.2, 159.8, 494.0, 423.4]
- `image_type`: screenshot
- `semantic_description`: License activation screen using Create Activation Request button.
- `keywords`: offline activation, activation request
- `anchor`: Create Activation Request
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0017-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p17 screenshot 2
- `caption`: Activation request file icon
- `physical_page`: 17
- `printed_page`: 13/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation
- `bbox_pdf_points`: [281.5, 457.1, 328.7, 529.1]
- `image_type`: screenshot
- `semantic_description`: Generated activation request file icon shown in offline activation workflow.
- `keywords`: offline activation, request file
- `anchor`: activation request file
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0018-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p18 screenshot 1
- `caption`: EB offline activation web page
- `physical_page`: 18
- `printed_page`: 14/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation / 3.1.4 MCAL Plugins Installation
- `bbox_pdf_points`: [116.2, 68.4, 494.0, 379.7]
- `image_type`: screenshot
- `semantic_description`: Offline license handling web page for upload and Process action.
- `keywords`: offline activation, website, upload, Process
- `anchor`: offline activation website
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0018-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p18 screenshot 2
- `caption`: Process activation response screen
- `physical_page`: 18
- `printed_page`: 14/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation / 3.1.4 MCAL Plugins Installation
- `bbox_pdf_points`: [116.2, 444.9, 494.0, 708.5]
- `image_type`: screenshot
- `semantic_description`: License administrator screen selecting response file with Process Activation action.
- `keywords`: offline activation, response file, Process Activation
- `anchor`: Process Activation
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0019-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p19 screenshot 2
- `caption`: EB tresos links folder location
- `physical_page`: 19
- `printed_page`: 15/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.4 MCAL Plugins Installation
- `bbox_pdf_points`: [116.2, 289.2, 494.0, 557.5]
- `image_type`: screenshot
- `semantic_description`: Windows Explorer screenshot showing EB tresos root folder and links directory.
- `keywords`: EB tresos, links folder, plugins
- `anchor`: Create a links folder
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0019-UI03
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p19 screenshot 3
- `caption`: FC7xxx_MCAL.link file in links folder
- `physical_page`: 19
- `printed_page`: 15/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.4 MCAL Plugins Installation
- `bbox_pdf_points`: [116.2, 591.3, 494.0, 681.8]
- `image_type`: screenshot
- `semantic_description`: Windows Explorer screenshot showing FC7xxx_MCAL.link file.
- `keywords`: link file, FC7xxx_MCAL.link, EB_Plugins
- `anchor`: Make a .link file
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0020-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p20 screenshot 2
- `caption`: New Configuration Project menu
- `physical_page`: 20
- `printed_page`: 16/46
- `section_path`: Chapter 3. MCAL Usage / 3.1.5 MCAL Plugins Update / 3.2 MCAL Project Creation / 3.2.1 Create an EB tresos Project from Scratch
- `bbox_pdf_points`: [116.2, 567.4, 494.0, 751.0]
- `image_type`: screenshot
- `semantic_description`: EB tresos File > New > Configuration Project menu path.
- `keywords`: Configuration Project, EB tresos, new project
- `anchor`: File > New > Configuration Project
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0021-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p21 screenshot 1
- `caption`: New Project Wizard page
- `physical_page`: 21
- `printed_page`: 17/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch
- `bbox_pdf_points`: [116.2, 68.4, 494.0, 338.0]
- `image_type`: screenshot
- `semantic_description`: Wizard page for project name/location.
- `keywords`: New Project Wizard, project name, location
- `anchor`: New Project Wizard
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0021-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p21 screenshot 2
- `caption`: Configuration Project Data tab
- `physical_page`: 21
- `printed_page`: 17/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch
- `bbox_pdf_points`: [116.2, 434.6, 494.0, 704.3]
- `image_type`: screenshot
- `semantic_description`: Wizard page showing ECU ID and target options.
- `keywords`: ECU ID, Target FC/FC7300, Configuration Project Data
- `anchor`: Configuration Project Data tab
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0022-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p22 screenshot 1
- `caption`: Module Configuration tab
- `physical_page`: 22
- `printed_page`: 18/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch
- `bbox_pdf_points`: [116.2, 315.2, 494.0, 601.3]
- `image_type`: screenshot
- `semantic_description`: Module Configuration tab showing Common, Mcu, Port and recommended configuration selection.
- `keywords`: Common module, Mcu, Port, Recommended Configuration
- `anchor`: Module Configuration tab
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0023-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p23 screenshot 1
- `caption`: Common module chip variant setting
- `physical_page`: 23
- `printed_page`: 19/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch / 3.2.2 Import an Existing EB tresos Project
- `bbox_pdf_points`: [116.2, 68.4, 494.0, 255.1]
- `image_type`: screenshot
- `semantic_description`: Common module configuration screen used to change chip variant.
- `keywords`: Common module, chip variant, FC7300
- `anchor`: change the chip variant in the Common module
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0023-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p23 screenshot 2
- `caption`: Module Configurations context menu
- `physical_page`: 23
- `printed_page`: 19/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.1 Create an EB tresos Project from Scratch / 3.2.2 Import an Existing EB tresos Project
- `bbox_pdf_points`: [139.8, 320.2, 470.4, 509.5]
- `image_type`: screenshot
- `semantic_description`: Project context menu showing Module Configurations and Generate Project.
- `keywords`: Module Configurations, Generate Project, EB tresos
- `anchor`: Generate Project
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0024-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p24 screenshot 1
- `caption`: EB tresos Import menu
- `physical_page`: 24
- `printed_page`: 20/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.2 Import an Existing EB tresos Project
- `bbox_pdf_points`: [116.2, 68.4, 494.0, 284.9]
- `image_type`: screenshot
- `semantic_description`: EB tresos File > Import menu for importing existing projects.
- `keywords`: Import, EB tresos, File menu
- `anchor`: File > Import
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0024-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p24 screenshot 2
- `caption`: Import Wizard Existing Projects
- `physical_page`: 24
- `printed_page`: 20/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.2 Import an Existing EB tresos Project
- `bbox_pdf_points`: [163.4, 318.6, 446.8, 619.8]
- `image_type`: screenshot
- `semantic_description`: Import Wizard showing General > Existing Projects into Workspace.
- `keywords`: Import Wizard, Existing Projects into Workspace
- `anchor`: Existing Projects into Workspace
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0025-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p25 screenshot 1
- `caption`: Import Projects directory selection
- `physical_page`: 25
- `printed_page`: 21/46
- `section_path`: Chapter 3. MCAL Usage / 3.2.2 Import an Existing EB tresos Project / 3.3 MCAL Project Integration / 3.3.1 Integration of Configurations with Static Code
- `bbox_pdf_points`: [139.8, 68.4, 470.4, 397.6]
- `image_type`: screenshot
- `semantic_description`: Import Projects dialog selecting project folder and Finish.
- `keywords`: Import Projects, Finish, workspace
- `anchor`: Browse to the folder containing the EB tresos project
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0027-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p27 screenshot 1
- `caption`: FC_IDE File Import menu
- `physical_page`: 27
- `printed_page`: 23/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `bbox_pdf_points`: [155.1, 68.4, 455.1, 410.1]
- `image_type`: screenshot
- `semantic_description`: Flagchip FC_IDE screenshot with File > Import menu for demo project.
- `keywords`: FC_IDE, Import, demo project
- `anchor`: Click File > Import
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0027-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p27 screenshot 2
- `caption`: FC_IDE Import Wizard
- `physical_page`: 27
- `printed_page`: 23/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `bbox_pdf_points`: [185.1, 443.8, 425.1, 698.8]
- `image_type`: screenshot
- `semantic_description`: Import Wizard screenshot selecting Existing Projects into Workspace.
- `keywords`: FC_IDE, Import Wizard, Existing Projects into Workspace
- `anchor`: select Existing Projects into Workspace
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0028-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p28 screenshot 1
- `caption`: FC_Project folder selection
- `physical_page`: 28
- `printed_page`: 24/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `bbox_pdf_points`: [185.1, 68.4, 425.1, 304.0]
- `image_type`: screenshot
- `semantic_description`: Import project dialog browsing DemoBoard/<Chip_Variant>/tools/FC_Project.
- `keywords`: FC_Project, DemoBoard, Chip_Variant
- `anchor`: DemoBoard/<Chip_Variant>/tools/FC_Project
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0028-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p28 screenshot 2
- `caption`: Build Project context menu
- `physical_page`: 28
- `printed_page`: 24/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `bbox_pdf_points`: [185.1, 369.2, 425.1, 690.8]
- `image_type`: screenshot
- `semantic_description`: FC_IDE Project Explorer context menu for Build Project.
- `keywords`: Build Project, elf, hex, map
- `anchor`: Build Project
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0029-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p29 screenshot 1
- `caption`: Debug Configurations menu
- `physical_page`: 29
- `printed_page`: 25/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [215.1, 68.4, 395.1, 160.2]
- `image_type`: screenshot
- `semantic_description`: Toolbar drop-down showing Debug Configurations.
- `keywords`: debug, Debug Configurations
- `anchor`: Debug Configurations
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0029-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p29 screenshot 2
- `caption`: GDB SEGGER J-Link Debugging configuration
- `physical_page`: 29
- `printed_page`: 25/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [155.1, 209.6, 455.1, 449.3]
- `image_type`: screenshot
- `semantic_description`: Debug Configurations wizard with GDB SEGGER J-Link Debugging profile.
- `keywords`: J-Link, GDB SEGGER, debug profile
- `anchor`: GDB SEGGER J-Link Debugging
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0029-UI03
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p29 screenshot 3
- `caption`: IAR workspace/project icons
- `physical_page`: 29
- `printed_page`: 25/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [245.1, 559.4, 365.1, 621.7]
- `image_type`: screenshot
- `semantic_description`: IAR workspace file and project icons for opening IAR build environment.
- `keywords`: IAR, workspace, project
- `anchor`: Open the IAR workspace file
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0030-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p30 screenshot 1
- `caption`: IAR project Make menu
- `physical_page`: 30
- `printed_page`: 26/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [197.1, 68.4, 413.1, 329.3]
- `image_type`: screenshot
- `semantic_description`: IAR Embedded Workbench project context menu with Make.
- `keywords`: IAR, Make, build
- `anchor`: select Make
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0030-UI02
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p30 screenshot 2
- `caption`: IAR Debugger options dialog
- `physical_page`: 30
- `printed_page`: 26/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [155.1, 394.5, 455.1, 680.3]
- `image_type`: screenshot
- `semantic_description`: IAR Options dialog Debugger tab showing driver selection.
- `keywords`: IAR, Debugger, I-jet, J-Link/J-Trace, PE micro
- `anchor`: Debugger tab and choose I-jet
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0030-UI03
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p30 screenshot 3
- `caption`: IAR Download and Debug button
- `physical_page`: 30
- `printed_page`: 26/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [215.1, 714.0, 395.1, 764.2]
- `image_type`: screenshot
- `semantic_description`: Toolbar image showing Download and Debug button.
- `keywords`: IAR, Download and Debug, debug
- `anchor`: Download and Debug button
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

### FIG-0031-UI01
- `source_figure_number`: null
- `generated_figure_number`: Internal Figure: p31 screenshot 1
- `caption`: IAR debug window
- `physical_page`: 31
- `printed_page`: 27/46
- `section_path`: Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `bbox_pdf_points`: [125.1, 68.4, 485.1, 260.3]
- `image_type`: screenshot
- `semantic_description`: IAR debug session window after program starts; page note states multicore debug needs I-jet.
- `keywords`: IAR, debug window, multi-core debug, I-jet
- `anchor`: IAR embedded workbench supports multi-core debug only when you uses I-jet
- `confidence`: 0.76
- `quality_flags`: ["generated_figure_id", "source_caption_missing", "semantic_description_from_surrounding_text"]

## 7. Term / API / Config / Requirement Index

> `REQ-*` entries in this Manifest are generated requirement-like navigation IDs, not formal source requirement IDs, because no explicit SWS_xxx-style requirement IDs were detected in the PDF.

### TERM-MCAL
- `name`: MCAL
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Microcontroller Abstraction Layer
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层"]
- `confidence`: 0.95

### TERM-SWS
- `name`: SWS
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Software Specification
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-API
- `name`: API
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Application Programming Interface
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["接口", "function API"]
- `confidence`: 0.95

### TERM-BSW
- `name`: BSW
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Basic Software
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["AUTOSAR BSW", "基础软件"]
- `confidence`: 0.95

### TERM-EB
- `name`: EB
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Elektrobit; sometimes EB tresos
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Elektrobit", "EB tresos"]
- `confidence`: 0.95

### TERM-IDE
- `name`: IDE
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Integrated Development Environment
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-ADC
- `name`: ADC
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Analog to Digital Converter
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["ADC driver"]
- `confidence`: 0.95

### TERM-CAN
- `name`: CAN
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Controller Area Network
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["CAN driver"]
- `confidence`: 0.95

### TERM-COMMON
- `name`: Common
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Resource and Common files for all modules
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Common module"]
- `confidence`: 0.95

### TERM-CRYPTO
- `name`: CRYPTO
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Crypto module
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Crypto driver"]
- `confidence`: 0.95

### TERM-CRYIF
- `name`: CRYIF
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Crypto Interface
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["CryIf"]
- `confidence`: 0.95

### TERM-DEM
- `name`: DEM
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Diagnostic Event Manager
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Dem", "diagnostic event"]
- `confidence`: 0.95

### TERM-DET
- `name`: DET
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Default Error Tracer
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Det", "development error tracer"]
- `confidence`: 0.95

### TERM-DIO
- `name`: DIO
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Digital Input Output
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["DIO driver"]
- `confidence`: 0.95

### TERM-DMA
- `name`: DMA
- `type`: acronym
- `primary_page`: 5
- `physical_pages`: 5
- `section_paths`: Chapter 1. Introduction / 1.1 About This Manual / 1.2 Document Conventions / 1.3 Acronyms and Abbreviations
- `brief`: Direct Memory Access
- `anchors`:
  - `p5`: Table 1: Acronyms and Abbreviations
- `aliases`: ["DMA driver"]
- `confidence`: 0.95

### TERM-ECU
- `name`: ECU
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Electronic Control Unit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-EEPROM
- `name`: EEPROM
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Electrically Erasable Programmable Read-Only Memory
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-ETH
- `name`: ETH
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Ethernet Controller Driver
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["ENET", "Ethernet driver"]
- `confidence`: 0.95

### TERM-ETHIF
- `name`: ETHIF
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Ethernet Interface
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["EthIf"]
- `confidence`: 0.95

### TERM-ETHTRCV
- `name`: ETHTRCV
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Ethernet Transceiver Driver
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["EthTrcv"]
- `confidence`: 0.95

### TERM-FEE
- `name`: FEE
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Flash EEPROM Emulation
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Fee"]
- `confidence`: 0.95

### TERM-FLS
- `name`: FLS
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Flash Loader System
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Fls"]
- `confidence`: 0.95

### TERM-PFLS
- `name`: PFLS
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Programming Flash Loader System
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Programmable Flash Loader"]
- `confidence`: 0.95

### TERM-GPT
- `name`: GPT
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: General Purpose Timer
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["GPT driver"]
- `confidence`: 0.95

### TERM-I2C
- `name`: I2C
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Inter-Integrated Circuit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["IIC", "I2C driver"]
- `confidence`: 0.95

### TERM-I2S
- `name`: I2S
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Inter-IC Sound
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-ICU
- `name`: ICU
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Input Capture Unit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["ICU driver"]
- `confidence`: 0.95

### TERM-IOHWAB
- `name`: IoHwAb
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: I/O Hardware Abstraction
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["HwIOAbs", "IoHwAbs"]
- `confidence`: 0.95

### TERM-IRQ
- `name`: IRQ
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Interrupt Request
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-ISR
- `name`: ISR
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Interrupt Service Routine
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-LIN
- `name`: LIN
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Local Interconnect Network
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["LIN driver"]
- `confidence`: 0.95

### TERM-LINIF
- `name`: LINIF
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: LIN Interface
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["LinIf"]
- `confidence`: 0.95

### TERM-MB
- `name`: MB
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Mailbox interface for multiple cores to communicate and synchronize
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Mailbox", "Mb module"]
- `confidence`: 0.95

### TERM-MCU
- `name`: MCU
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Microcontroller Unit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Mcu module"]
- `confidence`: 0.95

### TERM-MPU
- `name`: MPU
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Memory Protection Unit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["MPU settings"]
- `confidence`: 0.95

### TERM-MSC
- `name`: MSC
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Micro Second Channel
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["MSC driver"]
- `confidence`: 0.95

### TERM-NVM
- `name`: NVM
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Non-Volatile Memory Manager
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["NvM", "NVM module"]
- `confidence`: 0.95

### TERM-OCU
- `name`: OCU
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Output Compare Unit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["OCU driver"]
- `confidence`: 0.95

### TERM-OS
- `name`: OS
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Operating System
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["AUTOSAR OS", "Os module"]
- `confidence`: 0.95

### TERM-PB-VARIANT
- `name`: PB Variant
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Post Build Variant
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["post-build variant"]
- `confidence`: 0.95

### TERM-PC-VARIANT
- `name`: PC Variant
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Pre-Compile Variant
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["pre-compile variant"]
- `confidence`: 0.95

### TERM-PDU
- `name`: PDU
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Protocol Data Unit
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-PORT
- `name`: PORT
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Module for configuration of port and Pinmux
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Port module", "Pinmux"]
- `confidence`: 0.95

### TERM-PWM
- `name`: PWM
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Pulse Width Modulation
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["PWM driver"]
- `confidence`: 0.95

### TERM-SDADC
- `name`: SDADC
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Sigma Delta Analog to Digital Converter
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["SDADC driver"]
- `confidence`: 0.95

### TERM-SENT
- `name`: SENT
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Single Edge Nibble Transmission
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["SENT driver"]
- `confidence`: 0.95

### TERM-SPI
- `name`: SPI
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Serial Peripheral Interface
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["SPI driver"]
- `confidence`: 0.95

### TERM-SSI
- `name`: SSI
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Speed and Sensor Interface
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["SSI driver"]
- `confidence`: 0.95

### TERM-TRGSEL
- `name`: TRGSEL
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Trigger Select
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["TrgSel"]
- `confidence`: 0.95

### TERM-TRNG
- `name`: TRNG
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: True Random Number Generator
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: []
- `confidence`: 0.95

### TERM-UART
- `name`: UART
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Universal Asynchronous Receiver/Transmitter
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["UART driver"]
- `confidence`: 0.95

### TERM-WDG
- `name`: WDG
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Watchdog
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["Wdg module"]
- `confidence`: 0.95

### TERM-WDGIF
- `name`: WDGIF
- `type`: acronym
- `primary_page`: 6
- `physical_pages`: 6
- `section_paths`: Chapter 1. Introduction / 1.3 Acronyms and Abbreviations
- `brief`: Watchdog Interface
- `anchors`:
  - `p6`: Table 1: Acronyms and Abbreviations
- `aliases`: ["WdgIf"]
- `confidence`: 0.95

### TERM-FC7XXX-MCAL
- `name`: FC7XXX MCAL
- `type`: term
- `primary_page`: 1
- `physical_pages`: 1, 7, 9, 14
- `section_paths`: Front Matter / Cover; Chapter 1. Introduction / 1.4 Purpose / 1.5 Scope; Chapter 2. Safety MCAL Package / 2.1 MCAL Component
- `brief`: Flagchip MCAL software package and manual scope for FC7XXX MCU series.
- `anchors`:
  - `p1`: FC7xxx MCAL User Manual
  - `p14`: Project Name FC7XXX MCAL
- `aliases`: ["FC7xxx MCAL", "FC7300/FC7240 MCAL", "Flagchip MCAL"]
- `confidence`: 0.88

### TERM-AUTOSAR-R20-11
- `name`: AUTOSAR R20-11
- `type`: standard
- `primary_page`: 32
- `physical_pages`: 32, 34
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11; Chapter 5. ECU System Environment / 5.1 MCAL Version and Variant / 5.2 System Safe State / 5.3 ECU System Software Architecture
- `brief`: AUTOSAR release targeted by MCAL version/variant and extra-feature comparison.
- `anchors`:
  - `p32`: Extra Feature beyond AUTOSAR R20-11
  - `p34`: MCAL apply to AUTOSAR R20-11
- `aliases`: ["R20-11", "AUTOSAR 4.6.0"]
- `confidence`: 0.88

### TERM-ISO26262-ASIL-D
- `name`: ISO 26262 ASIL D
- `type`: safety-term
- `primary_page`: 7
- `physical_pages`: 7, 9, 10, 26, 43, 45
- `section_paths`: Chapter 1. Introduction / 1.4 Purpose / 1.5 Scope; Chapter 2. Safety MCAL Package / 2.1 MCAL Component
- `brief`: Functional safety level referenced for MCAL package, compilers and ecosystem components.
- `anchors`:
  - `p7`: ISO26262 function safety ASIL D
  - `p45`: ASIL D level drivers
- `aliases`: ["ASIL-D", "ASIL D", "功能安全ASIL D"]
- `confidence`: 0.88

### TOOL-EB-TRESOS
- `name`: EB tresos Studio
- `type`: tool
- `primary_page`: 14
- `physical_pages`: 14, 19, 20, 21, 22
- `section_paths`: Chapter 3. MCAL Usage / 3.1 Configuration Tools Installation / 3.1.1 EB tresos Installation; Chapter 3. MCAL Usage / 3.1.4 MCAL Plugins Installation; Chapter 3. MCAL Usage / 3.1.5 MCAL Plugins Update / 3.2 MCAL Project Creation / 3.2.1 Create an EB tresos Project from Scratch
- `brief`: Configuration tool used to install plugins, create projects and generate MCAL configuration code.
- `anchors`:
  - `p14`: EB tresos 28.1.0
  - `p22`: EB tresos project
- `aliases`: ["Tresos", "EB tresos", "EB Tresos Studio", "配置工具"]
- `confidence`: 0.88

### TOOL-EB-CLIENT-LICENSE-ADMIN
- `name`: EB Client License Administrator
- `type`: tool
- `primary_page`: 15
- `physical_pages`: 15-18
- `section_paths`: Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation; Chapter 3. MCAL Usage / 3.1.2 EB Client License Administrator Installation / 3.1.3 EB License Activation / 3.1.3.1 Online Activation; Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation
- `brief`: License administrator v1.4.3+ required for FC7XXX MCAL module activation.
- `anchors`:
  - `p15`: EB Client License Administrator v1.4.3 and above
  - `p18`: Use License Activation Codes
- `aliases`: ["EB license admin", "FlexLM admin"]
- `confidence`: 0.88

### TOOL-FC-IDE
- `name`: Flagchip FC_IDE
- `type`: tool
- `primary_page`: 26
- `physical_pages`: 26-29
- `section_paths`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE; Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `brief`: Flagchip IDE using arm-gcc for non-functional-safety demo build/debug.
- `anchors`:
  - `p26`: Build and Debug with Flagchip FC_IDE
  - `p29`: FC_IDE provided by Flagchip uses arm-gcc
- `aliases`: ["FC_IDE", "Flagchip IDE"]
- `confidence`: 0.88

### TOOL-IAR-EWARM
- `name`: IAR Embedded Workbench
- `type`: tool
- `primary_page`: 26
- `physical_pages`: 26, 29, 30, 31, 43, 45
- `section_paths`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE; Chapter 3. MCAL Usage / 3.3.2.1 Build and Debug with Flagchip FC_IDE / 3.3.2.2 Build and Debug with IAR Embedded Workbench; Chapter 3. MCAL Usage / 3.3.2.2 Build and Debug with IAR Embedded Workbench
- `brief`: Recommended FuSa compiler/workbench; I-jet required for multicore debug.
- `anchors`:
  - `p26`: IAR Embedded Workbench
  - `p45`: IAR embedded workbench supports multi-core debug only when you uses I-jet
- `aliases`: ["IAR", "EWARM", "IAR Workbench"]
- `confidence`: 0.88

### TOOL-GREENHILLS
- `name`: GreenHills Compiler/IDE
- `type`: tool
- `primary_page`: 13
- `physical_pages`: 13, 26, 42, 43, 45
- `section_paths`: Chapter 2. Safety MCAL Package / 2.2 SW package Content; Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE; Chapter 6. AUTOSAR Ecosystem / 6.1 AUTOSAR BASIC SW Package / 6.1.1 MICROSAR Classic Vector SLP4
- `brief`: Recommended compiler/toolchain and ecosystem compiler support.
- `anchors`:
  - `p13`: GreenHills Compiler for ARM
  - `p45`: tools/GHS_Project
- `aliases`: ["Green Hills", "GHS", "GreenHills"]
- `confidence`: 0.88

### TOOL-HIGHTEC
- `name`: HighTec ARM Development Platform
- `type`: tool
- `primary_page`: 13
- `physical_pages`: 13, 26
- `section_paths`: Chapter 2. Safety MCAL Package / 2.2 SW package Content; Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `brief`: Recommended compiler/tool project folder for MCAL demo integration.
- `anchors`:
  - `p13`: HighTec ARM Development Platform
  - `p26`: tools/HighTec_Project
- `aliases`: ["HighTec"]
- `confidence`: 0.88

### TOOL-TASKING
- `name`: Tasking VX-toolset for ARM
- `type`: tool
- `primary_page`: 26
- `physical_pages`: 26
- `section_paths`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `brief`: Recommended functional-safety compiler in integration section.
- `anchors`:
  - `p26`: Tasking VX-toolset for ARM
- `aliases`: ["TASKING", "VX-toolset"]
- `confidence`: 0.88

### FILE-MCAL-EB-PLUGINS
- `name`: MCAL/EB_Plugins
- `type`: file-path
- `primary_page`: 12
- `physical_pages`: 12, 13, 18, 19
- `section_paths`: Chapter 2. Safety MCAL Package / 2.2 SW package Content; Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation / 3.1.4 MCAL Plugins Installation
- `brief`: Package folder containing EB tresos plugins, docs, module configuration files and templates.
- `anchors`:
  - `p12`: MCAL/EB_Plugins
  - `p19`: path=C:/Flagchip/FC7XXX_MCAL/MCAL/EB_Plugins
- `aliases`: ["EB_Plugins", "plugins folder"]
- `confidence`: 0.88

### FILE-MCAL-SRC
- `name`: MCAL/Src
- `type`: file-path
- `primary_page`: 12
- `physical_pages`: 12
- `section_paths`: Chapter 2. Safety MCAL Package / 2.2 SW package Content
- `brief`: Package folder containing static source code of all MCAL modules.
- `anchors`:
  - `p12`: MCAL/Src: Static source code of all MCAL modules
- `aliases`: ["MCAL source", "static source code"]
- `confidence`: 0.88

### FILE-DEMOBOARD
- `name`: DemoBoard
- `type`: file-path
- `primary_page`: 12
- `physical_pages`: 12, 13, 18, 25, 27
- `section_paths`: Chapter 2. Safety MCAL Package / 2.2 SW package Content; Chapter 3. MCAL Usage / 3.1.3.2 Offline Activation / 3.1.4 MCAL Plugins Installation
- `brief`: Demo and example folder for chip variants and tool projects; non-productive source warning applies.
- `anchors`:
  - `p12`: DemoBoard folder
  - `p27`: DemoBoard/<Chip_Variant>/tools/FC_Project
- `aliases`: ["Demo Board", "DemoBoard folder"]
- `confidence`: 0.88

### CFG-ADCCHANNELDELAY
- `name`: AdcChannelDelay
- `type`: config
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added ADC configuration container for channel delay feature.
- `anchors`:
  - `p32`: add container: AdcChannelDelay
- `aliases`: ["ADC Channel Delay"]
- `confidence`: 0.88

### CFG-SPIHWUNITMODE
- `name`: SpiHwUnitMode
- `type`: config
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added SPI configuration node for slave mode support.
- `anchors`:
  - `p32`: add node: SpiHwUnitMode
- `aliases`: ["SPI Slave mode"]
- `confidence`: 0.88

### CFG-ETHCTRLENABLEMMD
- `name`: EthCtrlEnableMmd
- `type`: config
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: ETH configuration node enabling MII clause 45 MMD access.
- `anchors`:
  - `p32`: add node: EthCtrlEnableMmd
- `aliases`: ["ETH MMD", "clause 45"]
- `confidence`: 0.88

### CFG-WDGENABLEDIRECTSERVICE
- `name`: WdgEnableDirectService
- `type`: config
- `primary_page`: 32
- `physical_pages`: 32-33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Watchdog configuration switch for direct service behavior.
- `anchors`:
  - `p32`: WdgEnableDirectService
- `aliases`: ["WDG direct service"]
- `confidence`: 0.88

### CFG-FEE-SWAP-FOREIGN-BLOCKS-SUPPORT
- `name`: Fee Swap Foreign Blocks Support
- `type`: config
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Fee foreign-block configuration node for sharing blocks between bootloader and application.
- `anchors`:
  - `p33`: Fee Swap Foreign Blocks Support
- `aliases`: ["Fee foreign block"]
- `confidence`: 0.88

### CFG-FEE-CONFIGURATION-ASSIGNMENT
- `name`: Fee Configuration Assignment
- `type`: config
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Fee foreign-block configuration assignment node.
- `anchors`:
  - `p33`: Fee Configuration Assignment
- `aliases`: []
- `confidence`: 0.88

### CFG-FEE-MAXIMUM-NUMBER-OF-BLOCKS
- `name`: Fee Maximum Number of Blocks
- `type`: config
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Fee foreign-block maximum block count node.
- `anchors`:
  - `p33`: Fee Maximum Number of Blocks
- `aliases`: []
- `confidence`: 0.88

### CFG-FEE-BLOCK-ASSIGNMENT
- `name`: Fee Block Assignment
- `type`: config
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Fee foreign-block assignment node.
- `anchors`:
  - `p33`: Fee Block Assignment
- `aliases`: []
- `confidence`: 0.88

### CFG-ECUC-CORES
- `name`: EcuC Cores
- `type`: config
- `primary_page`: 36
- `physical_pages`: 36
- `section_paths`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations
- `brief`: EcuC core definition required for MCAL multicore feature configuration.
- `anchors`:
  - `p36`: EcuC Cores
  - `p36`: Figure 6: EcuC Configurations
- `aliases`: ["EcuC Core Definition"]
- `confidence`: 0.88

### CFG-ECUC-PARTITIONS
- `name`: EcuC Partitions
- `type`: config
- `primary_page`: 36
- `physical_pages`: 36
- `section_paths`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations
- `brief`: EcuC partition definition referenced by multicore-capable modules.
- `anchors`:
  - `p36`: EcuC Partitions
  - `p36`: Figure 6: EcuC Configurations
- `aliases`: ["EcuC Partition Definition"]
- `confidence`: 0.88

### CFG-OS-APPLICATION
- `name`: Os Application
- `type`: config
- `primary_page`: 36
- `physical_pages`: 36
- `section_paths`: Chapter 5. ECU System Environment / 5.4 Multicore Considerations
- `brief`: Os module configuration correlating core with partition.
- `anchors`:
  - `p36`: Figure 7: Os Application Configurations
- `aliases`: ["OsApplication", "OS application"]
- `confidence`: 0.88

### API-ETH-WRITEMMD
- `name`: Eth_WriteMmd
- `type`: api
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added ETH API for MII clause 45 write access.
- `anchors`:
  - `p32`: Eth_WriteMmd
- `aliases`: ["MII clause 45 write"]
- `confidence`: 0.88

### API-ETH-READMMD
- `name`: Eth_ReadMmd
- `type`: api
- `primary_page`: 32
- `physical_pages`: 32
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added ETH API for MII clause 45 read access.
- `anchors`:
  - `p32`: Eth_ReadMmd
- `aliases`: ["MII clause 45 read"]
- `confidence`: 0.88

### API-PWM-STARTGLOBALTIME
- `name`: Pwm_StartGlobalTime
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added PWM API for FTU global time-base start.
- `anchors`:
  - `p33`: Pwm_StartGlobalTime
- `aliases`: ["PWM global time"]
- `confidence`: 0.88

### API-PWM-STOPGLOBALTIME
- `name`: Pwm_StopGlobalTime
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added PWM API for FTU global time-base stop.
- `anchors`:
  - `p33`: Pwm_StopGlobalTime
- `aliases`: []
- `confidence`: 0.88

### API-ICU-GETINPUTLEVEL
- `name`: Icu_GetInputLevel
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added ICU API to read real-time input level of relative HW channel.
- `anchors`:
  - `p33`: Icu_GetInputLevel
- `aliases`: ["ICU input level"]
- `confidence`: 0.88

### API-ICU-STARTGLOBALTIME
- `name`: Icu_StartGlobalTime
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added ICU API for FTU global time-base start.
- `anchors`:
  - `p33`: Icu_StartGlobalTime
- `aliases`: []
- `confidence`: 0.88

### API-ICU-STOPGLOBALTIME
- `name`: Icu_StopGlobalTime
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added ICU API for FTU global time-base stop.
- `anchors`:
  - `p33`: Icu_StopGlobalTime
- `aliases`: []
- `confidence`: 0.88

### API-GPT-STARTGLOBALTIME
- `name`: Gpt_StartGlobalTime
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added GPT API for FTU global time-base start.
- `anchors`:
  - `p33`: Gpt_StartGlobalTime
- `aliases`: []
- `confidence`: 0.88

### API-GPT-STOPGLOBALTIME
- `name`: Gpt_StopGlobalTime
- `type`: api
- `primary_page`: 33
- `physical_pages`: 33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added GPT API for FTU global time-base stop.
- `anchors`:
  - `p33`: Gpt_StopGlobalTime
- `aliases`: []
- `confidence`: 0.88

### API-WDG-SERVICE
- `name`: Wdg_Service
- `type`: api
- `primary_page`: 32
- `physical_pages`: 32-33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added watchdog direct-service API when WDG direct service is configured.
- `anchors`:
  - `p32`: Wdg_Service
- `aliases`: ["watchdog service"]
- `confidence`: 0.88

### API-FLS-ECC-HANDLER
- `name`: Fls_ECC_Handler
- `type`: api
- `primary_page`: 32
- `physical_pages`: 32-33
- `section_paths`: Chapter 4. Extra Feature beyond AUTOSAR R20-11
- `brief`: Added Fls API for handling flash ECC error during runtime.
- `anchors`:
  - `p32`: Fls_ECC_Handler
- `aliases`: ["FLS ECC handler"]
- `confidence`: 0.88

### API-MCU-INIT
- `name`: Mcu_Init
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37, 46
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization; Chapter 7. MCAL safety mechanisms
- `brief`: MCU initialization API shown in multicore startup; initialization must precede other module APIs.
- `anchors`:
  - `p37`: Mcu_Init()
  - `p46`: <Module>_Init
- `aliases`: ["MCU init"]
- `confidence`: 0.88

### API-MCU-INITCLOCK
- `name`: Mcu_InitClock
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization
- `brief`: MCU clock initialization API shown in master-core startup procedure.
- `anchors`:
  - `p37`: Mcu_InitClock()
- `aliases`: ["MCU clock init"]
- `confidence`: 0.88

### API-PORT-INIT
- `name`: Port_Init
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization
- `brief`: Port initialization API shown before slave-core activation in multicore startup.
- `anchors`:
  - `p37`: Port_Init()
- `aliases`: ["Port init"]
- `confidence`: 0.88

### API-DMA-INIT
- `name`: Dma_Init
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization
- `brief`: DMA initialization API shown in master and slave contexts for multicore startup.
- `anchors`:
  - `p37`: Dma_Init()
- `aliases`: ["DMA init"]
- `confidence`: 0.88

### API-EFTU-INIT
- `name`: Eftu_Init
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization
- `brief`: Eftu initialization API shown as infrastructure initialization before slave-core activation.
- `anchors`:
  - `p37`: Eftu_Init()
- `aliases`: ["EFTU init"]
- `confidence`: 0.88

### API-TRGSEL-INIT
- `name`: TrgSel_Init
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization
- `brief`: Trigger Select initialization API shown in master-core startup procedure.
- `anchors`:
  - `p37`: TrgSel_Init()
- `aliases`: ["Trigger Select init"]
- `confidence`: 0.88

### API-PWM-INIT
- `name`: Pwm_Init
- `type`: api
- `primary_page`: 37
- `physical_pages`: 37
- `section_paths`: Chapter 5. ECU System Environment / 5.4.1 Multicore Startup Procedure / 5.4.2 Multicore De-Initialization
- `brief`: PWM initialization API shown per core in multicore startup sequence.
- `anchors`:
  - `p37`: Pwm_Init()
- `aliases`: ["PWM init"]
- `confidence`: 0.88

### REG-SCM-INT-ROUTERN
- `name`: SCM_INT_ROUTERn
- `type`: register
- `primary_page`: 38
- `physical_pages`: 38
- `section_paths`: Chapter 5. ECU System Environment / 5.4.2 Multicore De-Initialization / 5.4.3 Multicore Interrupts / 5.4.4 Data Consistency in Multicore System / 5.4.4.1 Multicore Shared Data Consistency
- `brief`: SCM module interrupt-router registers used to route interrupts to specific cores.
- `anchors`:
  - `p38`: SCM_INT_ROUTERn registers
- `aliases`: ["SCM interrupt router"]
- `confidence`: 0.88

### REG-PORT-PCRN-DWP
- `name`: PORT_PCRn DWP
- `type`: register-field
- `primary_page`: 38
- `physical_pages`: 38
- `section_paths`: Chapter 5. ECU System Environment / 5.4.2 Multicore De-Initialization / 5.4.3 Multicore Interrupts / 5.4.4 Data Consistency in Multicore System / 5.4.4.1 Multicore Shared Data Consistency
- `brief`: PORT_PCRn DWP field affecting interrupt router for Port interrupts.
- `anchors`:
  - `p38`: DWP field of PORT_PCRn registers
- `aliases`: ["PORT PCR DWP"]
- `confidence`: 0.88

### REG-CM7-CAPR-SWIT
- `name`: CM7_CAPR SWIT
- `type`: register-field
- `primary_page`: 38
- `physical_pages`: 38
- `section_paths`: Chapter 5. ECU System Environment / 5.4.2 Multicore De-Initialization / 5.4.3 Multicore Interrupts / 5.4.4 Data Consistency in Multicore System / 5.4.4.1 Multicore Shared Data Consistency
- `brief`: CM7_CAPR SWIT bit changes behavior for memory region cacheability when S bit is set.
- `anchors`:
  - `p38`: SWIT bit of the CM7_CAPR regiser
- `aliases`: ["SWIT bit", "CM7_CAPR"]
- `confidence`: 0.88

### ASM-LDREX-STREX
- `name`: LDREX/STREX
- `type`: instruction
- `primary_page`: 38
- `physical_pages`: 38
- `section_paths`: Chapter 5. ECU System Environment / 5.4.2 Multicore De-Initialization / 5.4.3 Multicore Interrupts / 5.4.4 Data Consistency in Multicore System / 5.4.4.1 Multicore Shared Data Consistency
- `brief`: Exclusive instructions not supported by FC7xxx MCU; behave as LDR/STR and can cause BusFault in shareable memory.
- `anchors`:
  - `p38`: LDREX and STREX
- `aliases`: ["exclusive instructions"]
- `confidence`: 0.88

### ASM-DSB
- `name`: dsb instruction
- `type`: instruction
- `primary_page`: 39
- `physical_pages`: 39
- `section_paths`: Chapter 5. ECU System Environment / 5.4.4.1 Multicore Shared Data Consistency / 5.4.4.2 Data Consistency when Cache Enabled
- `brief`: Used to force immediate write to memory for Normal memory shared between masters.
- `anchors`:
  - `p39`: the dsb instruction could force an immediate write into memory
- `aliases`: ["DSB", "data synchronization barrier"]
- `confidence`: 0.88

### MEM-MCAL-DATA-SECTIONS
- `name`: MCAL data sections
- `type`: memory-section
- `primary_page`: 41
- `physical_pages`: 41
- `section_paths`: Chapter 5. ECU System Environment / 5.4.4.2 Data Consistency when Cache Enabled
- `brief`: MCAL sections grouped into .mcal_data, .mcal_bss, .mcal_nocacheable_data, mcal_nocacheable_bss, mcal_shareable_data and mcal_shareable_bss with cache policy constraints.
- `anchors`:
  - `p41`: .mcal_data, .mcal_bss, .mcal_nocacheable_data
- `aliases`: ["mcal_shareable_bss", "mcal_nocacheable_bss"]
- `confidence`: 0.88

### REQ-SAFE-STATE
- `name`: System safe state handling
- `type`: requirement-like
- `primary_page`: 34
- `physical_pages`: 34
- `section_paths`: Chapter 5. ECU System Environment / 5.1 MCAL Version and Variant / 5.2 System Safe State / 5.3 ECU System Software Architecture
- `brief`: System must be able to enter safe state and handle continuous reset cycling as unsafe; MCAL reports errors but does not switch system state.
- `anchors`:
  - `p34`: System shall be able to bring itself into a system safe state
- `aliases`: ["safe state requirement"]
- `confidence`: 0.88

### REQ-E2E-COMMUNICATION
- `name`: E2E protection for communication drivers
- `type`: requirement-like
- `primary_page`: 34
- `physical_pages`: 34-35
- `section_paths`: Chapter 5. ECU System Environment / 5.1 MCAL Version and Variant / 5.2 System Safe State / 5.3 ECU System Software Architecture; Chapter 5. ECU System Environment / 5.3 ECU System Software Architecture
- `brief`: Integrator shall perform E2E protection with rolling counter, checksum and CRC for ENET/SPI/LIN/CAN data transmission.
- `anchors`:
  - `p34`: Integrators shall perform E2E protection on data transmission
- `aliases`: ["E2E", "communication CRC"]
- `confidence`: 0.88

### REQ-NVM-CRC
- `name`: CRC check for NVM data
- `type`: requirement-like
- `primary_page`: 35
- `physical_pages`: 35
- `section_paths`: Chapter 5. ECU System Environment / 5.3 ECU System Software Architecture
- `brief`: Integrator shall add/check CRC for NVM data managed through NVM/MemIf/FEE/FLS.
- `anchors`:
  - `p35`: Integrator shall perform CRC check for NVM data
- `aliases`: ["NVM CRC"]
- `confidence`: 0.88

### REQ-WATCHDOG-FEED
- `name`: Watchdog periodic servicing
- `type`: requirement-like
- `primary_page`: 35
- `physical_pages`: 35
- `section_paths`: Chapter 5. ECU System Environment / 5.3 ECU System Software Architecture
- `brief`: Integrator shall feed watchdog in preconfigured cyclic period to avoid system reset.
- `anchors`:
  - `p35`: Integrator shall feed the watchdog in preconfigured cyclic period
- `aliases`: ["watchdog feeding"]
- `confidence`: 0.88

### REQ-COMPILER-TCL3-ASILD
- `name`: Compiler TCL 3 ASIL-D scenario
- `type`: requirement-like
- `primary_page`: 26
- `physical_pages`: 26
- `section_paths`: Chapter 3. MCAL Usage / 3.3.1 Integration of Configurations with Static Code / 3.3.2 Build and Debug / 3.3.2.1 Build and Debug with Flagchip FC_IDE
- `brief`: Compiler used for functional safety should meet TCL 3, ASIL-D scenario and C library safety requirements.
- `anchors`:
  - `p26`: compiler meeting TCL 3, ASIL-D scenario
- `aliases`: ["TCL3", "FuSa compiler"]
- `confidence`: 0.88

### REQ-PLUGIN-SCM-AVOID
- `name`: Do not store EB_Plugins in SCM-managed folder
- `type`: requirement-like
- `primary_page`: 13
- `physical_pages`: 13
- `section_paths`: Chapter 2. Safety MCAL Package / 2.2 SW package Content
- `brief`: SCM tools such as Git/SVN may change line endings and corrupt plugin signatures.
- `anchors`:
  - `p13`: Please do not put the MCAL/EB_Plugins in the folder which is managed by SCM tools
- `aliases`: ["Git SVN signature issue"]
- `confidence`: 0.88

### REQ-INIT-CALL-SEQUENCE
- `name`: <Module>_Init before other APIs
- `type`: requirement-like
- `primary_page`: 46
- `physical_pages`: 46
- `section_paths`: Chapter 7. MCAL safety mechanisms
- `brief`: MCAL module initialization function must be called first before other APIs of that module.
- `anchors`:
  - `p46`: MCAL module initialization function (<Module>_Init)
- `aliases`: ["API call sequence"]
- `confidence`: 0.88

### REQ-MCU-SAFETY-ASR
- `name`: MCU safety assumptions validation
- `type`: requirement-like
- `primary_page`: 47
- `physical_pages`: 47
- `section_paths`: Chapter 8. MCU safety mechanisms
- `brief`: Safety system developer must validate MCU assumptions against the specific safety-related system and trigger change management if unmet.
- `anchors`:
  - `p47`: Assumption (ASR)
- `aliases`: ["ASR", "MCU assumption"]
- `confidence`: 0.88

## 8. Search Aliases

### ALIAS-MCAL
- `canonical`: MCAL
- `aliases`: ["Microcontroller Abstraction Layer", "微控制器抽象层", "AUTOSAR MCAL", "Flagchip MCAL", "FC7XXX MCAL"]
- `related_ids`: ["TERM-MCAL", "TERM-FC7XXX-MCAL"]

### ALIAS-FC7XXX
- `canonical`: FC7XXX
- `aliases`: ["FC7xxx", "FC7300", "FC7240", "FC7300F8MDQ", "FC7300F8MDT", "FC7300F4MDD", "FC7300F4MDS", "FC7240F2MDS"]
- `related_ids`: ["TERM-FC7XXX-MCAL", "TBL-0007-0008-001"]

### ALIAS-AUTOSAR
- `canonical`: AUTOSAR
- `aliases`: ["AutoSAR", "AUTOSAR Classic", "AUTOSAR Classic Platform", "R20-11", "Rxx-11", "CP"]
- `related_ids`: ["TERM-AUTOSAR-R20-11", "SEC-006"]

### ALIAS-EB-TRESOS
- `canonical`: EB tresos Studio
- `aliases`: ["EB tresos", "Tresos", "Elektrobit tresos", "EB工具", "配置工具", "EB configuration project"]
- `related_ids`: ["TOOL-EB-TRESOS"]

### ALIAS-EB-LICENSE
- `canonical`: EB Client License Administrator
- `aliases`: ["EB license admin", "FlexLM", "activation code", "online activation", "offline activation", "license activation"]
- `related_ids`: ["TOOL-EB-CLIENT-LICENSE-ADMIN", "SEC-003-001-003"]

### ALIAS-PLUGIN
- `canonical`: MCAL plugins
- `aliases`: ["EB_Plugins", "plugins folder", "FC7xxx_MCAL.link", "link file", "MCAL plugin installation", "插件安装"]
- `related_ids`: ["FILE-MCAL-EB-PLUGINS", "SEC-003-001-004"]

### ALIAS-PROJECT-CREATION
- `canonical`: EB tresos project creation
- `aliases`: ["Configuration Project", "New Project Wizard", "ECU ID", "Target FC/FC7300", "CORTEXM/FC7300", "Common module", "Recommended Configuration"]
- `related_ids`: ["SEC-003-002-001"]

### ALIAS-INTEGRATION
- `canonical`: MCAL integration
- `aliases`: ["static code", "generated configuration", "BSW", "OS", "startup code", "link script", "integration manual"]
- `related_ids`: ["SEC-003-003-001", "FIG-0026-001"]

### ALIAS-BUILD-DEBUG
- `canonical`: Build and Debug
- `aliases`: ["FC_IDE", "IAR", "J-Link", "I-jet", "GDB SEGGER", "Download and Debug", "Build Project"]
- `related_ids`: ["SEC-003-003-002", "TOOL-FC-IDE", "TOOL-IAR-EWARM"]

### ALIAS-EXTRA-FEATURES
- `canonical`: extra features beyond AUTOSAR R20-11
- `aliases`: ["added APIs", "added configuration items", "Channel Delay", "Slave mode", "MII clause 45", "global time base", "foreign block", "ECC handler"]
- `related_ids`: ["SEC-004", "TBL-0032-001", "TBL-0032-0033-001"]

### ALIAS-ETH-MMD
- `canonical`: ETH MII clause 45
- `aliases`: ["MMD", "Eth_WriteMmd", "Eth_ReadMmd", "EthCtrlEnableMmd", "MII read write via clause 45 protocol"]
- `related_ids`: ["API-ETH-WRITEMMD", "API-ETH-READMMD", "CFG-ETHCTRLENABLEMMD"]

### ALIAS-GLOBAL-TIME
- `canonical`: FTU global time base
- `aliases`: ["Pwm_StartGlobalTime", "Pwm_StopGlobalTime", "Icu_StartGlobalTime", "Icu_StopGlobalTime", "Gpt_StartGlobalTime", "Gpt_StopGlobalTime"]
- `related_ids`: ["API-PWM-STARTGLOBALTIME", "API-GPT-STARTGLOBALTIME"]

### ALIAS-WDG-DIRECT
- `canonical`: WDG direct service
- `aliases`: ["Wdg_Service", "WdgEnableDirectService", "watchdog direct service"]
- `related_ids`: ["API-WDG-SERVICE", "CFG-WDGENABLEDIRECTSERVICE"]

### ALIAS-SAFE-STATE
- `canonical`: safe state
- `aliases`: ["system safe state", "MCU safe state", "reset state", "power off", "unsafe reset loop", "安全状态"]
- `related_ids`: ["REQ-SAFE-STATE", "SEC-005-002"]

### ALIAS-DET-DEM
- `canonical`: DET/DEM error reporting
- `aliases`: ["Default Error Tracer", "Diagnostic Event Manager", "Det", "Dem", "development errors", "diagnostic event errors"]
- `related_ids`: ["TERM-DET", "TERM-DEM", "SEC-007"]

### ALIAS-MULTICORE
- `canonical`: multicore configuration
- `aliases`: ["multi-core", "EcuC Cores", "EcuC Partitions", "Os Application", "core partition", "slave core", "master core"]
- `related_ids`: ["SEC-005-004", "CFG-ECUC-CORES", "FIG-0036-001"]

### ALIAS-CACHE
- `canonical`: cache/data consistency
- `aliases`: ["cache line", "write back", "write through", "shared memory", "dsb", "LDREX", "STREX", "Mailbox spinlocks", "数据一致性"]
- `related_ids`: ["SEC-005-004-004", "ASM-LDREX-STREX", "ASM-DSB"]

### ALIAS-SAFETY-LIB
- `canonical`: MCU Safety Library
- `aliases`: ["ZhiCong", "Safety Frame", "FC7XXX Safety Frame", "SEooC", "SPFM", "LFM", "safety mechanisms"]
- `related_ids`: ["SEC-006-002", "FIG-0045-001"]

### ALIAS-KNOWN-ISSUES
- `canonical`: Known Issues
- `aliases`: ["no notable known issues", "known problems", "已知问题"]
- `related_ids`: ["SEC-009"]

### ALIAS-DEVIATIONS-LIMITATIONS
- `canonical`: Deviations and Limitations
- `aliases`: ["software specification deviations", "limitations", "module specific user manual"]
- `related_ids`: ["SEC-010"]

## 9. Quality Warnings

### WARN-0001
- `severity`: low
- `category`: ocr
- `physical_pages`: 1-50
- `affected_ids`: ["DOC-efd89b76f5b5"]
- `message`: PDF has a usable text layer and was not treated as a scanned-only PDF; OCR was not run. UI screenshots and vector diagrams were indexed semantically rather than OCR-transcribed in full.
- `recommended_action`: Use source PDF page images when exact screenshot text is required.

### WARN-0002
- `severity`: medium
- `category`: figure_extraction
- `physical_pages`: 9, 37, 39, 40, 41
- `affected_ids`: ["FIG-0009-001", "FIG-0037-001", "FIG-0039-001", "FIG-0040-001", "FIG-0040-002", "FIG-0041-001"]
- `message`: Some numbered figures are vector drawings/text layouts, not raster image objects; their bboxes are approximate visual regions.
- `recommended_action`: Verify diagrams against source PDF physical pages before relying on spatial details.

### WARN-0003
- `severity`: medium
- `category`: table_extraction
- `physical_pages`: 5, 6, 7, 8, 10, 11, 32, 33
- `affected_ids`: ["TBL-0005-0006-001", "TBL-0007-0008-001", "TBL-0010-0011-001", "TBL-0032-0033-001"]
- `message`: Several tables span pages; extracted key fields and summaries are reliable for retrieval but not a replacement for source table content.
- `recommended_action`: Use table index to locate PDF pages, then read the original table in the PDF.

### WARN-0004
- `severity`: low
- `category`: source_numbering
- `physical_pages`: 32
- `affected_ids`: ["TBL-0032-001", "TBL-0032-0033-001"]
- `message`: Source table numbering jumps from Table 2 to Table 4/Table 5; no Table 3 caption was detected in the source PDF.
- `recommended_action`: Do not infer a missing table; use physical page and caption anchors.

### WARN-0005
- `severity`: medium
- `category`: source_metadata
- `physical_pages`: 1, 50
- `affected_ids`: ["SEC-FRONT-0001", "TBL-0050-001"]
- `message`: Cover states Rev: 1.5.1, but revision history table visible on physical page 50 lists versions only up to 1.2.0. This appears to be a source-document inconsistency, not a manifest generation error.
- `recommended_action`: Confirm revision information with the document owner if release traceability matters.

### WARN-0006
- `severity`: low
- `category`: text_extraction
- `physical_pages`: 5, 7, 12, 13, 18, 26, 37, 38, 39
- `affected_ids`: ["SEG-0005-0006", "SEG-0007-0008", "SEG-0012-0013", "SEG-0026-0028", "SEG-0036-0038", "SEG-0039-0041"]
- `message`: Extracted text contains line-break hyphenation and occasional glyph artifacts from the PDF text layer; anchors were kept short to reduce risk.
- `recommended_action`: When exact spelling matters, verify against the source PDF page.

### WARN-0007
- `severity`: low
- `category`: captioning
- `physical_pages`: 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31
- `affected_ids`: ["FIG-0014-UI01", "FIG-0015-UI01", "FIG-0015-UI02", "FIG-0016-UI01", "FIG-0016-UI02", "FIG-0017-UI01", "FIG-0017-UI02", "FIG-0018-UI01", "FIG-0018-UI02", "FIG-0019-UI02", "FIG-0019-UI03", "FIG-0020-UI02", "FIG-0021-UI01", "FIG-0021-UI02", "FIG-0022-UI01", "FIG-0023-UI01", "FIG-0023-UI02", "FIG-0024-UI01", "FIG-0024-UI02", "FIG-0025-UI01", "FIG-0027-UI01", "FIG-0027-UI02", "FIG-0028-UI01", "FIG-0028-UI02", "FIG-0029-UI01", "FIG-0029-UI02", "FIG-0029-UI03", "FIG-0030-UI01", "FIG-0030-UI02", "FIG-0030-UI03", "FIG-0031-UI01"]
- `message`: Many procedural UI screenshots are not numbered/captioned in the source. Internal stable IDs and generated captions were assigned from page-local step text.
- `recommended_action`: Treat generated screenshot captions as navigation aids, not source captions.

### WARN-0008
- `severity`: info
- `category`: requirements
- `physical_pages`: 1-50
- `affected_ids`: ["REQ-SAFE-STATE", "REQ-E2E-COMMUNICATION", "REQ-NVM-CRC", "REQ-COMPILER-TCL3-ASILD", "REQ-INIT-CALL-SEQUENCE", "REQ-MCU-SAFETY-ASR"]
- `message`: No formal requirement IDs such as SWS_xxx were detected. Requirement-like entries were generated from mandatory/shall statements and safety assumptions.
- `recommended_action`: Do not cite generated REQ-* IDs as source requirement identifiers.

## 10. Self Check Report

### SELF-CHECK-PAGE-COVERAGE
- `pdf_page_count`: 50
- `indexed_physical_pages_count`: 50
- `indexed_page_ranges`: ['SEG-0001:1', 'SEG-0002-0004:2-4', 'SEG-0005-0006:5-6', 'SEG-0007-0008:7-8', 'SEG-0009-0011:9-11', 'SEG-0012-0013:12-13', 'SEG-0014-0016:14-16', 'SEG-0017-0019:17-19', 'SEG-0020-0022:20-22', 'SEG-0023-0025:23-25', 'SEG-0026-0028:26-28', 'SEG-0029-0031:29-31', 'SEG-0032-0033:32-33', 'SEG-0034-0035:34-35', 'SEG-0036-0038:36-38', 'SEG-0039-0041:39-41', 'SEG-0042-0044:42-44', 'SEG-0045:45', 'SEG-0046:46', 'SEG-0047:47', 'SEG-0048:48', 'SEG-0049:49', 'SEG-0050:50']
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `coverage_status`: pass

### SELF-CHECK-SECTION-RANGES
- `invalid_ranges`: []
- `sections_without_pages`: []
- `overlapping_ranges`: expected for nested sections only
- `status`: pass

### SELF-CHECK-SOURCE-INTEGRITY
- `source_pdf`: Mcal_User_Manual.pdf
- `source_pdf_sha256`: efd89b76f5b5672b16f921153a11c62f4a5bc5ced7f5e0889e947a6b5152e803
- `manifest_source_pdf_sha256`: efd89b76f5b5672b16f921153a11c62f4a5bc5ced7f5e0889e947a6b5152e803
- `sha256_match_current_generation`: true
- `staleness_rule`: regenerate Manifest if the source PDF SHA256 differs from the value above
- `status`: pass

### SELF-CHECK-INDEX-INTEGRITY
- `total_ids`: 270
- `duplicate_ids`: []
- `entries_without_physical_page`: []
- `entries_without_anchor`: []
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `symbols_without_primary_page`: []
- `status`: pass

### SELF-CHECK-TABLE-FIGURE-INTEGRITY
- `table_count`: 7
- `figure_image_count`: 49
- `tables_with_generated_ids`: TBL-0007-0008-001, TBL-0011-002, TBL-0050-001
- `figures_with_generated_ids`: FIG-0001-COVER and all FIG-xxxx-UIxx screenshot entries
- `low_confidence_figures`: FIG-0009-001, FIG-0037-001, FIG-0039-001, FIG-0040-001, FIG-0040-002, FIG-0041-001
- `status`: pass_with_warnings

### SELF-CHECK-OVERALL
- `overall_status`: pass_with_warnings
- `reason`: Page coverage, source SHA256, ID uniqueness, table confidence, figure confidence and anchor presence all pass; warnings remain for approximate vector-figure bboxes, generated captions for unnumbered screenshots, multi-page tables, and source revision-history inconsistency.
