---
manifest_schema_version: "1.0"
source_pdf: "Arm_Cortex-M7_Software_Developer_Errata_Notice.pdf"
source_pdf_sha256: "c4e31658732e82f79d47c42c008daf937e2aee96f04d378caa9942f0c3c35df5"
source_pdf_size_bytes: 447605
pdf_page_count: 63
source_document_id: "SDEN-1068427"
source_document_revision: "Document version 11.0"
source_document_issue_date: "May 28, 2024"
generated_at: "2026-06-11T01:23:07.963443+00:00"
generator_name: "chatgpt-pdf-manifest-generator"
generator_version: "0.6.0"
page_numbering_policy: "physical_page is 1-based PDF physical page index; printed_page is auxiliary only"
ocr_status: "not_run_text_layer_available"
pdf_outline_count: 43
text_layer_search_supplement: "present"
text_layer_search_supplement_generated_at: "2026-06-20T11:56:13Z"
text_layer_search_supplement_terms: 458
text_layer_search_supplement_technical_terms: 27
text_layer_search_supplement_pages: 63
post_supplement_text_token_recall: "1.000"
post_supplement_technical_token_recall: "1.000"
overall_status: "pass_with_warnings"
---
# PDF Manifest: Arm_Cortex-M7_Software_Developer_Errata_Notice.pdf

## Retrieval Usage Contract

- `physical_page` is the primary locator and is always the 1-based PDF physical page number.
- `printed_page` is auxiliary. In this PDF, pages 3-63 visibly use `Page n of 63`; pages 1-2 have no explicit printed page footer.
- This Manifest is an index, not a substitute for the source PDF. Verify factual claims against the referenced source page.
- Use `9A. Text-Layer Search Supplement` for exact keyword lookup gaps; verify exact wording, screenshots, tables, commands and diagrams against the PDF.
- Important index entries include a short `anchor`; use the anchor to confirm the relevant source location.
- Tables and images include `confidence`, `bbox`, or `bbox_by_page` where available; use these fields to decide whether visual/source-page verification is required.
- Treat this Manifest as stale if `source_pdf_sha256` does not match the current source PDF.

## 1. Document Metadata

- `source_pdf`: "Arm_Cortex-M7_Software_Developer_Errata_Notice.pdf"
- `source_pdf_sha256`: "c4e31658732e82f79d47c42c008daf937e2aee96f04d378caa9942f0c3c35df5"
- `source_pdf_size_bytes`: 447605
- `pdf_page_count`: 63
- `text_layer_search_supplement`: present
- `text_layer_search_supplement_generated_at`: 2026-06-20T11:56:13Z
- `text_layer_search_supplement_terms`: 458
- `text_layer_search_supplement_technical_terms`: 27
- `text_layer_search_supplement_pages`: 63
- `post_supplement_text_token_recall`: 1.000
- `post_supplement_technical_token_recall`: 1.000
- `source_document_id`: "SDEN-1068427"
- `source_document_revision`: "Document version 11.0"
- `source_document_issue_date`: "May 28, 2024"
- `pdf_format`: "PDF 1.4"
- `pdf_title_metadata`: "Cortex-M7 (AT610) and Cortex-M7 with FPU (AT611) SDEN-1068427 Version: Date of issue:May 28, 2024"
- `pdf_author_metadata`: ""
- `pdf_creator_metadata`: "wkhtmltopdf 0.12.6"
- `pdf_producer_metadata`: "Qt 4.8.7"
- `pdf_creation_date_metadata`: "D:20240530135738Z"
- `pdf_modification_date_metadata`: ""
- `pdf_outline_count`: 43
- `generated_at_utc`: "2026-06-11T01:23:07.963443+00:00"
- `generator`: "chatgpt-pdf-manifest-generator 0.6.0"
- `manifest_schema_version`: "1.0"
- `page_numbering_policy`: "physical_page is 1-based PDF physical page index; printed_page is auxiliary only"

### Extraction Engines

- `text_extraction`: PyMuPDF text layer extraction
- `layout_detection`: PyMuPDF page dimensions, outline, image info, and table detection
- `table_detection`: PyMuPDF `find_tables()` for table bbox/structure; manual grouping for logical cross-page summary table
- `image_detection`: PyMuPDF raster image info; only cover page raster images detected
- `ocr`: not executed because all pages have an extractable text layer

## 2. Global Summary

- `topic`: Arm Cortex-M7 (AT610) and Cortex-M7 with FPU (AT611) Software Developer Errata Notice.
- `document_scope`: All known errata since the r0p1 release of the product; includes severity taxonomy, change control, errata summary table, detailed erratum status/description/configurations/conditions/implications/workaround, proprietary notice, and product/document status.
- `product_scope`: Cortex-M7 (AT610) and Cortex-M7 with FPU (AT611).
- `key_chapters`: Introduction; Change Control; Errata summary table; Errata descriptions by Category A, Category B, Category B (rare), and Category C; Proprietary notice; Product and document information.
- `errata_count`: 26
- `errata_category_counts`: {'Category A': 1, 'Category B': 6, 'Category B (rare)': 1, 'Category C': 18}
- `open_errata_ids`: 565285, 1013783, 2328489, 636315, 1267980, 1313001, 1315869, 1518990, 3092511
- `fixed_errata_ids`: 1259864, 412512, 426115, 440977, 443753, 399743, 408519, 416915, 421025, 422825, 423541, 431216, 449383, 486321, 505438, 513195, 702596
- `key_terms`: Cortex-M7, AT610, AT611, Write-Through, Write-Back, MPU, FAULTMASK, BASEPRI, AXI, PLD, TCM, AHBS, TPIU, ETM, ITM, DWT, BFHFNMIGN, HFSR.FORCED, FPCCR.ASPEN, MBIST, I-Cache, D-Cache, ECC, Store-Exclusive, Load-Exclusive, breakpoint.
- `summary`: This PDF is an Arm errata notice organized around programmer-visible errata. It gives release/version changes, a cross-revision summary table, and detailed sections for each erratum. The Manifest uses PDF physical pages as the primary locator and keeps only summaries, keywords, captions/anchors, and quality data for source-page retrieval.

## 3. Table of Contents Index

### SEC-0001-COVER
- `number`: null
- `title`: "Cover"
- `path`: "Cover"
- `physical_page_start`: 1
- `physical_page_end`: 1
- `printed_page_start`: "cover"
- `printed_page_end`: "cover"
- `keywords`: ["Cortex-M7", "AT610", "AT611", "SDEN-1068427", "version 11.0"]
- `anchor`: "Software Developer Errata Notice"

### SEC-0002-NOTICES
- `number`: null
- `title`: "Copyright, proprietary reference, inclusive language, and feedback"
- `path`: "Front Matter / Copyright and Feedback Notice"
- `physical_page_start`: 2
- `physical_page_end`: 2
- `printed_page_start`: "notice"
- `printed_page_end`: "notice"
- `keywords`: ["copyright", "proprietary notice", "inclusive language", "feedback"]
- `anchor`: "This document (SDEN_1068427_11.0_en) was issued on May 28, 2024"

### SEC-CONTENTS
- `number`: null
- `title`: "Contents"
- `path`: "Front Matter / Contents"
- `physical_page_start`: 3
- `physical_page_end`: 4
- `printed_page_start`: "3"
- `printed_page_end`: "4"
- `keywords`: []
- `anchor`: "Contents"

### SEC-INTRODUCTION
- `number`: null
- `title`: "Introduction"
- `path`: "Introduction"
- `physical_page_start`: 5
- `physical_page_end`: 5
- `printed_page_start`: "5"
- `printed_page_end`: "5"
- `keywords`: []
- `anchor`: "Introduction"

### SEC-SCOPE
- `number`: null
- `title`: "Scope"
- `path`: "Introduction / Scope"
- `physical_page_start`: 5
- `physical_page_end`: 5
- `printed_page_start`: "5"
- `printed_page_end`: "5"
- `keywords`: []
- `anchor`: "Scope"

### SEC-CATEGORIZATION-OF-ERRATA
- `number`: null
- `title`: "Categorization of errata"
- `path`: "Introduction / Categorization of errata"
- `physical_page_start`: 5
- `physical_page_end`: 5
- `printed_page_start`: "5"
- `printed_page_end`: "5"
- `keywords`: []
- `anchor`: "Categorization of errata"

### SEC-CHANGE-CONTROL
- `number`: null
- `title`: "Change Control"
- `path`: "Change Control"
- `physical_page_start`: 6
- `physical_page_end`: 8
- `printed_page_start`: "6"
- `printed_page_end`: "8"
- `keywords`: []
- `anchor`: "Change Control"

### SEC-ERRATA-SUMMARY-TABLE
- `number`: null
- `title`: "Errata summary table"
- `path`: "Errata summary table"
- `physical_page_start`: 9
- `physical_page_end`: 10
- `printed_page_start`: "9"
- `printed_page_end`: "10"
- `keywords`: []
- `anchor`: "Errata summary table"

### SEC-ERRATA-DESCRIPTIONS
- `number`: null
- `title`: "Errata descriptions"
- `path`: "Errata descriptions"
- `physical_page_start`: 11
- `physical_page_end`: 60
- `printed_page_start`: "11"
- `printed_page_end`: "60"
- `keywords`: []
- `anchor`: "Errata descriptions"

### SEC-CAT-A
- `number`: null
- `title`: "Category A"
- `path`: "Errata descriptions / Category A"
- `physical_page_start`: 11
- `physical_page_end`: 12
- `printed_page_start`: "11"
- `printed_page_end`: "12"
- `keywords`: []
- `anchor`: "Category A"

### SEC-ERR-1259864
- `number`: "1259864"
- `title`: "Data corruption in a sequence of Write-Through stores and loads"
- `path`: "Errata descriptions / Category A / 1259864 Data corruption in a sequence of Write-Through stores and loads"
- `physical_page_start`: 11
- `physical_page_end`: 12
- `printed_page_start`: "11"
- `printed_page_end`: "12"
- `keywords`: ["1259864", "Write-Through", "data cache", "MPU", "FORCEWT", "SIWT", "linefill"]
- `anchor`: "1259864 Data corruption in a sequence of Write-Through stores and loads"

### SEC-CAT-A-RARE
- `number`: null
- `title`: "Category A (rare)"
- `path`: "Errata descriptions / Category A (rare)"
- `physical_page_start`: 12
- `physical_page_end`: 12
- `printed_page_start`: "12"
- `printed_page_end`: "12"
- `keywords`: []
- `anchor`: "Category A (rare)"

### SEC-CAT-B
- `number`: null
- `title`: "Category B"
- `path`: "Errata descriptions / Category B"
- `physical_page_start`: 13
- `physical_page_end`: 24
- `printed_page_start`: "13"
- `printed_page_end`: "24"
- `keywords`: []
- `anchor`: "Category B"

### SEC-ERR-412512
- `number`: "412512"
- `title`: "Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `path`: "Errata descriptions / Category B / 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `physical_page_start`: 13
- `physical_page_end`: 14
- `printed_page_start`: "13"
- `printed_page_end`: "14"
- `keywords`: ["412512", "TPIU", "ETM", "ITM", "DSYNC", "trace data", "partial frames"]
- `anchor`: "412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"

### SEC-ERR-426115
- `number`: "426115"
- `title`: "Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `path`: "Errata descriptions / Category B / 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `physical_page_start`: 15
- `physical_page_end`: 16
- `printed_page_start`: "15"
- `printed_page_end`: "16"
- `keywords`: ["426115", "FAULTMASK", "MPU_CTRL.HFNMIENA", "MPU", "CPS", "MSR", "asynchronous exception"]
- `anchor`: "426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"

### SEC-ERR-440977
- `number`: "440977"
- `title`: "Increasing priority using a write to BASEPRI does not take effect immediately"
- `path`: "Errata descriptions / Category B / 440977 Increasing priority using a write to BASEPRI does not take effect immediately"
- `physical_page_start`: 17
- `physical_page_end`: 18
- `printed_page_start`: "17"
- `printed_page_end`: "18"
- `keywords`: ["440977", "BASEPRI", "priority", "interrupt", "exception", "ISB"]
- `anchor`: "440977 Increasing priority using a write to BASEPRI does not take effect immediately"

### SEC-ERR-565285
- `number`: "565285"
- `title`: "Core can send AXI transactions that permit reordering when it should not"
- `path`: "Errata descriptions / Category B / 565285 Core can send AXI transactions that permit reordering when it should not"
- `physical_page_start`: 19
- `physical_page_end`: 20
- `printed_page_start`: "19"
- `printed_page_end`: "20"
- `keywords`: ["565285", "AXI", "reordering", "strongly-ordered", "device memory", "barrier"]
- `anchor`: "565285 Core can send AXI transactions that permit reordering when it should not"

### SEC-ERR-1013783
- `number`: "1013783"
- `title`: "PLD might perform linefill to address that would generate a MemManage Fault"
- `path`: "Errata descriptions / Category B / 1013783 PLD might perform linefill to address that would generate a MemManage Fault"
- `physical_page_start`: 21
- `physical_page_end`: 22
- `printed_page_start`: "21"
- `printed_page_end`: "22"
- `keywords`: ["1013783", "PLD", "linefill", "MemManage Fault", "MPU", "cache"]
- `anchor`: "1013783 PLD might perform linefill to address that would generate a MemManage Fault"

### SEC-ERR-2328489
- `number`: "2328489"
- `title`: "TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `path`: "Errata descriptions / Category B / 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `physical_page_start`: 23
- `physical_page_end`: 24
- `printed_page_start`: "23"
- `printed_page_end`: "24"
- `keywords`: ["2328489", "TCM", "AHBS", "software stores", "wait states", "bandwidth sharing"]
- `anchor`: "2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"

### SEC-CAT-B-RARE
- `number`: null
- `title`: "Category B (rare)"
- `path`: "Errata descriptions / Category B (rare)"
- `physical_page_start`: 25
- `physical_page_end`: 26
- `printed_page_start`: "25"
- `printed_page_end`: "26"
- `keywords`: []
- `anchor`: "Category B (rare)"

### SEC-ERR-443753
- `number`: "443753"
- `title`: "A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `path`: "Errata descriptions / Category B (rare) / 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `physical_page_start`: 25
- `physical_page_end`: 26
- `printed_page_start`: "25"
- `printed_page_end`: "26"
- `keywords`: ["443753", "cacheable stores", "bus faults", "deadlock", "write buffer"]
- `anchor`: "443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"

### SEC-CAT-C
- `number`: null
- `title`: "Category C"
- `path`: "Errata descriptions / Category C"
- `physical_page_start`: 27
- `physical_page_end`: 60
- `printed_page_start`: "27"
- `printed_page_end`: "60"
- `keywords`: []
- `anchor`: "Category C"

### SEC-ERR-399743
- `number`: "399743"
- `title`: "The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `path`: "Errata descriptions / Category C / 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `physical_page_start`: 27
- `physical_page_end`: 28
- `printed_page_start`: "27"
- `printed_page_end`: "28"
- `keywords`: ["399743", "FAR", "BFHFNMIGN", "BusFault", "HardFault", "NMI"]
- `anchor`: "399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"

### SEC-ERR-408519
- `number`: "408519"
- `title`: "Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `path`: "Errata descriptions / Category C / 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `physical_page_start`: 29
- `physical_page_end`: 30
- `printed_page_start`: "29"
- `printed_page_end`: "30"
- `keywords`: ["408519", "GTS", "ITM", "global timestamp", "debug", "trace"]
- `anchor`: "408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"

### SEC-ERR-416915
- `number`: "416915"
- `title`: "HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `path`: "Errata descriptions / Category C / 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `physical_page_start`: 31
- `physical_page_end`: 32
- `printed_page_start`: "31"
- `printed_page_end`: "32"
- `keywords`: ["416915", "HFSR.FORCED", "LOCKUP", "configurable priority faults", "HardFault"]
- `anchor`: "416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"

### SEC-ERR-421025
- `number`: "421025"
- `title`: "Early forwarding from load is incorrectly cancelled inside IT block"
- `path`: "Errata descriptions / Category C / 421025 Early forwarding from load is incorrectly cancelled inside IT block"
- `physical_page_start`: 33
- `physical_page_end`: 34
- `printed_page_start`: "33"
- `printed_page_end`: "34"
- `keywords`: ["421025", "load forwarding", "IT block", "conditional execution"]
- `anchor`: "421025 Early forwarding from load is incorrectly cancelled inside IT block"

### SEC-ERR-422825
- `number`: "422825"
- `title`: "MPU fetch attributes might transiently be incorrect after an exception return"
- `path`: "Errata descriptions / Category C / 422825 MPU fetch attributes might transiently be incorrect after an exception return"
- `physical_page_start`: 35
- `physical_page_end`: 36
- `printed_page_start`: "35"
- `printed_page_end`: "36"
- `keywords`: ["422825", "MPU", "fetch attributes", "exception return", "transient"]
- `anchor`: "422825 MPU fetch attributes might transiently be incorrect after an exception return"

### SEC-ERR-423541
- `number`: "423541"
- `title`: "Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `path`: "Errata descriptions / Category C / 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `physical_page_start`: 37
- `physical_page_end`: 38
- `printed_page_start`: "37"
- `printed_page_end`: "38"
- `keywords`: ["423541", "strongly-ordered", "device load", "stack pointer", "exception stacking"]
- `anchor`: "423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"

### SEC-ERR-431216
- `number`: "431216"
- `title`: "Unimplemented bits of BASEPRI do not read-as-zero"
- `path`: "Errata descriptions / Category C / 431216 Unimplemented bits of BASEPRI do not read-as-zero"
- `physical_page_start`: 39
- `physical_page_end`: 40
- `printed_page_start`: "39"
- `printed_page_end`: "40"
- `keywords`: ["431216", "BASEPRI", "unimplemented bits", "read-as-zero"]
- `anchor`: "431216 Unimplemented bits of BASEPRI do not read-as-zero"

### SEC-ERR-449383
- `number`: "449383"
- `title`: "Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `path`: "Errata descriptions / Category C / 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `physical_page_start`: 41
- `physical_page_end`: 42
- `printed_page_start`: "41"
- `printed_page_end`: "42"
- `keywords`: ["449383", "FPCCR.ASPEN", "FP MAC", "FPU", "register bank"]
- `anchor`: "449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"

### SEC-ERR-486321
- `number`: "486321"
- `title`: "Incorrect behavior of profiling counters"
- `path`: "Errata descriptions / Category C / 486321 Incorrect behavior of profiling counters"
- `physical_page_start`: 43
- `physical_page_end`: 44
- `printed_page_start`: "43"
- `printed_page_end`: "44"
- `keywords`: ["486321", "profiling counters", "LSUCNT", "FOLDCNT", "CYCCNT", "EXCCNT", "SLEEPCNT"]
- `anchor`: "486321 Incorrect behavior of profiling counters"

### SEC-ERR-505438
- `number`: "505438"
- `title`: "TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `path`: "Errata descriptions / Category C / 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `physical_page_start`: 45
- `physical_page_end`: 46
- `printed_page_start`: "45"
- `printed_page_end`: "46"
- `keywords`: ["505438", "TPIU", "Debug state", "ATB", "flush", "ACTLR.DISITMATBFLUSH", "deprecated ID 850725"]
- `anchor`: "505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"

### SEC-ERR-513195
- `number`: "513195"
- `title`: "Lock Status Indication incorrectly reads as one for debugger reads"
- `path`: "Errata descriptions / Category C / 513195 Lock Status Indication incorrectly reads as one for debugger reads"
- `physical_page_start`: 47
- `physical_page_end`: 48
- `printed_page_start`: "47"
- `printed_page_end`: "48"
- `keywords`: ["513195", "Lock Status", "debugger reads", "lock", "debug"]
- `anchor`: "513195 Lock Status Indication incorrectly reads as one for debugger reads"

### SEC-ERR-636315
- `number`: "636315"
- `title`: "Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `path`: "Errata descriptions / Category C / 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `physical_page_start`: 49
- `physical_page_end`: 50
- `printed_page_start`: "49"
- `printed_page_end`: "50"
- `keywords`: ["636315", "MBIST", "I-Cache", "MBISTERR[0]", "online MBIST", "D-Cache", "ITCM"]
- `anchor`: "636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"

### SEC-ERR-702596
- `number`: "702596"
- `title`: "Single stepping Cortex-M7 enters pending exception handler"
- `path`: "Errata descriptions / Category C / 702596 Single stepping Cortex-M7 enters pending exception handler"
- `physical_page_start`: 51
- `physical_page_end`: 52
- `printed_page_start`: "51"
- `printed_page_end`: "52"
- `keywords`: ["702596", "single stepping", "DHCSR.C_MASKINTS", "Debug state", "PendSV", "SysTick", "interrupt"]
- `anchor`: "702596 Single stepping Cortex-M7 enters pending exception handler"

### SEC-ERR-1267980
- `number`: "1267980"
- `title`: "ECC error causes data corruption when the data cache error bank registers are locked"
- `path`: "Errata descriptions / Category C / 1267980 ECC error causes data corruption when the data cache error bank registers are locked"
- `physical_page_start`: 53
- `physical_page_end`: 53
- `printed_page_start`: "53"
- `printed_page_end`: "53"
- `keywords`: ["1267980", "ECC", "D-cache", "DEBR0", "DEBR1", "error bank registers", "cacheable store"]
- `anchor`: "1267980 ECC error causes data corruption when the data cache error bank registers are locked"

### SEC-ERR-1313001
- `number`: "1313001"
- `title`: "Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `path`: "Errata descriptions / Category C / 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `physical_page_start`: 54
- `physical_page_end`: 55
- `printed_page_start`: "54"
- `printed_page_end`: "55"
- `keywords`: ["1313001", "cache invalidate", "DMB", "DSB", "Write-Through", "linefill", "DCCIMVAC"]
- `anchor`: "1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"

### SEC-ERR-1315869
- `number`: "1315869"
- `title`: "Data corruption for load following Store-Exclusive"
- `path`: "Errata descriptions / Category C / 1315869 Data corruption for load following Store-Exclusive"
- `physical_page_start`: 56
- `physical_page_end`: 57
- `printed_page_start`: "56"
- `printed_page_end`: "57"
- `keywords`: ["1315869", "Store-Exclusive", "Load-Exclusive", "STREX", "STREXB", "STREXH", "Shareable memory"]
- `anchor`: "1315869 Data corruption for load following Store-Exclusive"

### SEC-ERR-1518990
- `number`: "1518990"
- `title`: "Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
- `path`: "Errata descriptions / Category C / 1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
- `physical_page_start`: 58
- `physical_page_end`: 58
- `printed_page_start`: "58"
- `printed_page_end`: "58"
- `keywords`: ["1518990", "DWT", "DWT_COMPn", "DWTFUNCTIONn", "big-endian", "little-endian", "watchpoint"]
- `anchor`: "1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"

### SEC-ERR-3092511
- `number`: "3092511"
- `title`: "Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `path`: "Errata descriptions / Category C / 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `physical_page_start`: 59
- `physical_page_end`: 60
- `printed_page_start`: "59"
- `printed_page_end`: "60"
- `keywords`: ["3092511", "breakpoint", "exception", "BKPT", "DFSR", "halt mode debug", "debugger"]
- `anchor`: "3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"

### SEC-PROPRIETARY-NOTICE
- `number`: null
- `title`: "Proprietary notice"
- `path`: "Proprietary notice"
- `physical_page_start`: 61
- `physical_page_end`: 62
- `printed_page_start`: "61"
- `printed_page_end`: "62"
- `keywords`: []
- `anchor`: "Proprietary notice"

### SEC-PRODUCT-DOCUMENT-INFORMATION
- `number`: null
- `title`: "Product and document information"
- `path`: "Product and document information"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: []
- `anchor`: "Product and document information"

### SEC-PRODUCT-STATUS
- `number`: null
- `title`: "Product status"
- `path`: "Product and document information / Product status"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: []
- `anchor`: "Product status"

### SEC-PRODUCT-COMPLETENESS-STATUS
- `number`: null
- `title`: "Product completeness status"
- `path`: "Product and document information / Product status / Product completeness status"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: []
- `anchor`: "Product completeness status"

### SEC-PRODUCT-REVISION-STATUS
- `number`: null
- `title`: "Product revision status"
- `path`: "Product and document information / Product status / Product revision status"
- `physical_page_start`: 63
- `physical_page_end`: 63
- `printed_page_start`: "63"
- `printed_page_end`: "63"
- `keywords`: []
- `anchor`: "Product revision status"

## 4. Page Locator Map

| physical_page | printed_page | section_path | primary_anchor | content_types | quality_flags |
|---:|---|---|---|---|---|
| 1 | cover | Cover | Cortex-M7 (AT610) and Cortex-M7 with FPU (AT611) Software Developer Errata Notice | cover, image, text | cover_page, no_explicit_printed_page_footer |
| 2 | notice | Front Matter / Copyright and Feedback Notice | This document is Non-Confidential. | notice, feedback, text | no_explicit_printed_page_footer |
| 3 | 3 | Front Matter / Contents | Contents | toc, text |  |
| 4 | 4 | Front Matter / Contents | 513195 Lock Status Indication incorrectly reads as one for debugger reads | toc, text |  |
| 5 | 5 | Introduction / Scope | Introduction | introduction, severity_categories, text |  |
| 6 | 6 | Change Control | Change Control | change_control, table, text | contains_table_like_layout |
| 7 | 7 | Change Control | October 25, 2021: Changes in document version v10.0 | change_control, table, text | contains_table_like_layout |
| 8 | 8 | Change Control | December 04, 2014: Changes in document version v4.0 | change_control, table, text | contains_table_like_layout |
| 9 | 9 | Errata summary table | Errata summary table | errata_summary, table, text | contains_table_like_layout |
| 10 | 10 | Errata summary table | Programmer | errata_summary, table, text | contains_table_like_layout |
| 11 | 11 | Errata descriptions / Category A / 1259864 Data corruption in a sequence of Write-Through stores and loads | 1259864 Data corruption in a sequence of Write-Through stores and loads | erratum, text |  |
| 12 | 12 | Errata descriptions / Category A / 1259864 Data corruption in a sequence of Write-Through stores and loads | Category A (rare) | erratum, text |  |
| 13 | 13 | Errata descriptions / Category B / 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM | 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM | erratum, text |  |
| 14 | 14 | Errata descriptions / Category B / 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM | There is no workaround for this erratum. | erratum, text | low_text_density_continuation_page |
| 15 | 15 | Errata descriptions / Category B / 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes | 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes | erratum, text |  |
| 16 | 16 | Errata descriptions / Category B / 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes | Incorrect attributes on the AXI interface that could cause system-specific effects, for example, if | erratum, text |  |
| 17 | 17 | Errata descriptions / Category B / 440977 Increasing priority using a write to BASEPRI does not take effect immediately | 440977 Increasing priority using a write to BASEPRI does not take effect immediately | erratum, text |  |
| 18 | 18 | Errata descriptions / Category B / 440977 Increasing priority using a write to BASEPRI does not take effect immediately | This erratum means that the instruction after an MSR to boost BASEPRI might incorrectly be pre-empted | erratum, text |  |
| 19 | 19 | Errata descriptions / Category B / 565285 Core can send AXI transactions that permit reordering when it should not | 565285 Core can send AXI transactions that permit reordering when it should not | erratum, text |  |
| 20 | 20 | Errata descriptions / Category B / 565285 Core can send AXI transactions that permit reordering when it should not | In order for the lookup to get an ECC error, the core must be configured with cache ECC, and it must be | erratum, text |  |
| 21 | 21 | Errata descriptions / Category B / 1013783 PLD might perform linefill to address that would generate a MemManage Fault | 1013783 PLD might perform linefill to address that would generate a MemManage Fault | erratum, text |  |
| 22 | 22 | Errata descriptions / Category B / 1013783 PLD might perform linefill to address that would generate a MemManage Fault | Processor execution is not affected by this erratum. The data returned from the linefill is not directly | erratum, text |  |
| 23 | 23 | Errata descriptions / Category B / 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states | 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states | erratum, text |  |
| 24 | 24 | Errata descriptions / Category B / 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states | Either one of the following workarounds can be used: | erratum, text |  |
| 25 | 25 | Errata descriptions / Category B (rare) / 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock | 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock | erratum, text |  |
| 26 | 26 | Errata descriptions / Category B (rare) / 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock | When in this deadlock state, the processor will not be able to enter halt state or service debugger | erratum, text |  |
| 27 | 27 | Errata descriptions / Category C / 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set | 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set | erratum, text |  |
| 28 | 28 | Errata descriptions / Category C / 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set | including all access disabled, then this failure mode cannot occur. | erratum, text |  |
| 29 | 29 | Errata descriptions / Category C / 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM | 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM | erratum, text |  |
| 30 | 30 | Errata descriptions / Category C / 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM | To work around this erratum, a dummy write to the ITM_TCR register should be performed immediately | erratum, text |  |
| 31 | 31 | Errata descriptions / Category C / 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP | 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP | erratum, text |  |
| 32 | 32 | Errata descriptions / Category C / 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP | This bit has no internal function in the processor and is only used to help handler SW or a debugger to | erratum, text |  |
| 33 | 33 | Errata descriptions / Category C / 421025 Early forwarding from load is incorrectly cancelled inside IT block | 421025 Early forwarding from load is incorrectly cancelled inside IT block | erratum, text |  |
| 34 | 34 | Errata descriptions / Category C / 421025 Early forwarding from load is incorrectly cancelled inside IT block | The code sequence must be amended to remove the redundant load operation. | erratum, text |  |
| 35 | 35 | Errata descriptions / Category C / 422825 MPU fetch attributes might transiently be incorrect after an exception return | 422825 MPU fetch attributes might transiently be incorrect after an exception return | erratum, text |  |
| 36 | 36 | Errata descriptions / Category C / 422825 MPU fetch attributes might transiently be incorrect after an exception return | If the affected instructions are on ITCM, then all MPU attributes are ignored except for the xN attribute. | erratum, text |  |
| 37 | 37 | Errata descriptions / Category C / 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking | 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking | erratum, text |  |
| 38 | 38 | Errata descriptions / Category C / 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking | Note that loads to Device and Strongly-ordered memory are unlikely to update the stack pointer in real | erratum, text |  |
| 39 | 39 | Errata descriptions / Category C / 431216 Unimplemented bits of BASEPRI do not read-as-zero | 431216 Unimplemented bits of BASEPRI do not read-as-zero | erratum, text |  |
| 40 | 40 | Errata descriptions / Category C / 431216 Unimplemented bits of BASEPRI do not read-as-zero | SW should use another priority register to deduce how many priority bits are implemented and should | erratum, text |  |
| 41 | 41 | Errata descriptions / Category C / 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank | 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank | erratum, text |  |
| 42 | 42 | Errata descriptions / Category C / 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank | In general, it is not anticipated that the conditions and sequence described will occur in real code. | erratum, text |  |
| 43 | 43 | Errata descriptions / Category C / 486321 Incorrect behavior of profiling counters | 486321 Incorrect behavior of profiling counters | erratum, text |  |
| 44 | 44 | Errata descriptions / Category C / 486321 Incorrect behavior of profiling counters | There is no workaround for this erratum. | erratum, text | low_text_density_continuation_page |
| 45 | 45 | Errata descriptions / Category C / 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used | 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used | erratum, text |  |
| 46 | 46 | Errata descriptions / Category C / 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used | Please note that this erratum is now published as ID 505438. The previous ID 850725 is deprecated. | erratum, text | low_text_density_continuation_page |
| 47 | 47 | Errata descriptions / Category C / 513195 Lock Status Indication incorrectly reads as one for debugger reads | 513195 Lock Status Indication incorrectly reads as one for debugger reads | erratum, text |  |
| 48 | 48 | Errata descriptions / Category C / 513195 Lock Status Indication incorrectly reads as one for debugger reads | External debuggers should ignore the SLI field of the FPB_LSR, DWT_LSR and ITM_LSR registers. | erratum, text |  |
| 49 | 49 | Errata descriptions / Category C / 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache | 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache | erratum, text |  |
| 50 | 50 | Errata descriptions / Category C / 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache | Note that this erratum only affects the MBIST software assisted use case error indication for the I-Cache | erratum, text |  |
| 51 | 51 | Errata descriptions / Category C / 702596 Single stepping Cortex-M7 enters pending exception handler | 702596 Single stepping Cortex-M7 enters pending exception handler | erratum, text |  |
| 52 | 52 | Errata descriptions / Category C / 702596 Single stepping Cortex-M7 enters pending exception handler | The debugger can reduce the likelihood of an interrupt being taken when DHCSR.C_MASKINTS is set | erratum, text |  |
| 53 | 53 | Errata descriptions / Category C / 1267980 ECC error causes data corruption when the data cache error bank registers are locked | 1267980 ECC error causes data corruption when the data cache error bank registers are locked | erratum, text |  |
| 54 | 54 | Errata descriptions / Category C / 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view | 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view | erratum, text |  |
| 55 | 55 | Errata descriptions / Category C / 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view | A DMB must be inserted between the cache maintenance operation and the store. | erratum, text |  |
| 56 | 56 | Errata descriptions / Category C / 1315869 Data corruption for load following Store-Exclusive | 1315869 Data corruption for load following Store-Exclusive | erratum, text |  |
| 57 | 57 | Errata descriptions / Category C / 1315869 Data corruption for load following Store-Exclusive | No workaround is necessary. | erratum, text | low_text_density_continuation_page |
| 58 | 58 | Errata descriptions / Category C / 1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian | 1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian | erratum, text |  |
| 59 | 59 | Errata descriptions / Category C / 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously | 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously | erratum, text |  |
| 60 | 60 | Errata descriptions / Category C / 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously | Workaround: | erratum, text |  |
| 61 | 61 | Proprietary notice | Proprietary notice | legal_notice, text |  |
| 62 | 62 | Proprietary notice | The Arm corporate logo and words marked with ® or ™ are registered trademarks or trademarks of Arm Limited | legal_notice, text |  |
| 63 | 63 | Product and document information / Product status / Product completeness status | Product and document information | product_status, text |  |

## 5. Page Segment Index

### SEG-0001
- `physical_pages`: [1]
- `printed_pages`: ["cover"]
- `section_path`: "Cover"
- `content_types`: ["cover", "image", "text"]
- `summary`: "Cover page identifying the document as the Cortex-M7 (AT610) and Cortex-M7 with FPU (AT611) Software Developer Errata Notice, document version 11.0 and document ID SDEN-1068427."
- `keywords`: ["AT611", "ID", "SDEN", "1068427", "SDEN-1068427"]
- `anchors`:
  - `p1`: "Cortex-M7 (AT610) and Cortex-M7 with FPU (AT611) Software Developer Errata Notice"
- `quality_flags`: ["cover_page", "no_explicit_printed_page_footer"]

### SEG-0002
- `physical_pages`: [2]
- `printed_pages`: ["notice"]
- `section_path`: "Front Matter / Copyright and Feedback Notice"
- `content_types`: ["notice", "feedback", "text"]
- `summary`: "Copyright, proprietary notice reference, issue identifier SDEN_1068427_11.0_en, possible later-issue URL, inclusive language commitment, and feedback channels."
- `keywords`: ["ARM", "Arm", "Cortex-M7", "AT610", "AT611", "FPU", "ITM", "SDEN_1068427_11", "SDEN", "1068427", "Non-Confidential", "SDEN-1068427"]
- `anchors`:
  - `p2`: "This document is Non-Confidential."
- `quality_flags`: ["no_explicit_printed_page_footer"]

### SEG-0003
- `physical_pages`: [3]
- `printed_pages`: ["3"]
- `section_path`: "Front Matter / Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Contents page listing Introduction, Change Control, Errata summary table, Category A/B/C errata, and early errata description entries."
- `keywords`: ["Cortex-M7", "MPU", "FAULTMASK", "BASEPRI", "AXI", "AHBS", "TPIU", "ETM", "ITM", "GTS", "FAR", "BFHFNMIGN", "HFSR.FORCED", "LOCKUP", "IT block", "FPCCR.ASPEN", "FP MAC", "TCM"]
- `anchors`:
  - `p3`: "Contents"
- `quality_flags`: []

### SEG-0004
- `physical_pages`: [4]
- `printed_pages`: ["4"]
- `section_path`: "Front Matter / Contents"
- `content_types`: ["toc", "text"]
- `summary`: "Contents continuation listing remaining Category C errata, Proprietary notice, Product and document information, and product status subsections."
- `keywords`: ["Cortex-M7", "DWT", "MBIST", "I-Cache", "ECC", "Store-Exclusive", "little-endian", "Debug", "exception", "513195", "636315", "702596", "1267980", "1313001", "1315869", "1518990", "3092511"]
- `anchors`:
  - `p4`: "513195 Lock Status Indication incorrectly reads as one for debugger reads"
- `quality_flags`: []

### SEG-0005
- `physical_pages`: [5]
- `printed_pages`: ["5"]
- `section_path`: "Introduction / Scope"
- `content_types`: ["introduction", "severity_categories", "text"]
- `summary`: "Introduction defines document scope and explains Category A, Category A (rare), Category B, Category B (rare), and Category C severity classifications."
- `keywords`: []
- `anchors`:
  - `p5`: "Introduction"
- `quality_flags`: []

### SEG-0006
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: "Change Control"
- `content_types`: ["change_control", "table", "text"]
- `summary`: "Change Control table for v11.0, marking multiple programmer errata as updated and 3092511 as new."
- `keywords`: ["Cortex-M7", "MPU", "FAULTMASK", "BASEPRI", "AXI", "TPIU", "ETM", "ITM", "GTS", "FAR", "BFHFNMIGN", "HFSR.FORCED", "LOCKUP", "IT block", "FPCCR.ASPEN", "FP MAC", "Debug state", "Debug"]
- `anchors`:
  - `p6`: "Change Control"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0007
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Change Control"
- `content_types`: ["change_control", "table", "text"]
- `summary`: "Change Control tables for v10.0, v9.0, v8.0, v7.0, v6.0, and v5.0."
- `keywords`: ["Cortex-M7", "AXI", "AHBS", "TPIU", "DWT", "HFSR.FORCED", "LOCKUP", "IT block", "MBIST", "I-Cache", "ECC", "TCM", "PLD", "Write-Through", "Store-Exclusive", "little-endian", "AHB", "Debug state"]
- `anchors`:
  - `p7`: "October 25, 2021: Changes in document version v10.0"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0008
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: "Change Control"
- `content_types`: ["change_control", "table", "text"]
- `summary`: "Change Control tables for v4.0, v3.0, v2.0, and v1.0."
- `keywords`: ["Cortex-M7", "MPU", "FAULTMASK", "BASEPRI", "TPIU", "ETM", "ITM", "GTS", "FAR", "BFHFNMIGN", "HFSR.FORCED", "LOCKUP", "IT block", "FPCCR.ASPEN", "FP MAC", "Debug", "interrupt", "exception"]
- `anchors`:
  - `p8`: "December 04, 2014: Changes in document version v4.0"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0009
- `physical_pages`: [9]
- `printed_pages`: ["9"]
- `section_path`: "Errata summary table"
- `content_types`: ["errata_summary", "table", "text"]
- `summary`: "Errata summary table begins, listing Category A, Category B, Category B (rare), and early Category C errata with found/fixed product revisions."
- `keywords`: ["Cortex-M7", "MPU", "FAULTMASK", "BASEPRI", "AXI", "AHBS", "TPIU", "ETM", "ITM", "GTS", "FAR", "BFHFNMIGN", "HFSR.FORCED", "LOCKUP", "TCM", "PLD", "MemManage Fault", "Write-Through"]
- `anchors`:
  - `p9`: "Errata summary table"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0010
- `physical_pages`: [10]
- `printed_pages`: ["10"]
- `section_path`: "Errata summary table"
- `content_types`: ["errata_summary", "table", "text"]
- `summary`: "Errata summary table continues with Category C errata 422825 through 3092511 and found/fixed product revisions."
- `keywords`: ["Cortex-M7", "MPU", "BASEPRI", "TPIU", "DWT", "FPCCR.ASPEN", "FP MAC", "MBIST", "I-Cache", "ECC", "Store-Exclusive", "Debug", "interrupt", "exception", "422825", "423541", "431216", "449383"]
- `anchors`:
  - `p10`: "Programmer"
- `quality_flags`: ["contains_table_like_layout"]

### SEG-0011
- `physical_pages`: [11]
- `printed_pages`: ["11"]
- `section_path`: "Errata descriptions / Category A / 1259864 Data corruption in a sequence of Write-Through stores and loads"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1259864 begins: Write-Through store/load sequence can cause a load to return incorrect data under cache/timing conditions."
- `keywords`: ["Cortex-M7", "FPU", "MPU", "ECC", "CACR", "CM7_CACR.FORCEWT", "CM7_CACR.SIWT", "Write-Through", "DSB", "1259864", "CM7_CACR", "FORCEWT", "SIWT"]
- `anchors`:
  - `p11`: "1259864 Data corruption in a sequence of Write-Through stores and loads"
- `quality_flags`: []

### SEG-0012
- `physical_pages`: [12]
- `printed_pages`: ["12"]
- `section_path`: "Errata descriptions / Category A / 1259864 Data corruption in a sequence of Write-Through stores and loads"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1259864 conclusion: describes incorrect-load implication and recommends Write-Back memory or disabling cache where possible; Category A (rare) has no errata."
- `keywords`: ["ARM", "Arm", "MPU", "Write-Through", "Write-Back"]
- `anchors`:
  - `p12`: "Category A (rare)"
- `quality_flags`: []

### SEG-0013
- `physical_pages`: [13]
- `printed_pages`: ["13"]
- `section_path`: "Errata descriptions / Category B / 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 412512 begins: Cortex-M7 TPIU can lose final trace bytes when ETM is present, ITM absent, and TPIU partial frames are not completed."
- `keywords`: ["Cortex-M7", "FPU", "AXI", "TPIU", "ETM", "ITM", "DWT", "DSYNC", "Debug", "412512", "CoreSight"]
- `anchors`:
  - `p13`: "412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `quality_flags`: []

### SEG-0014
- `physical_pages`: [14]
- `printed_pages`: ["14"]
- `section_path`: "Errata descriptions / Category B / 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 412512 concludes with no workaround and notes deprecated previous ID 839170."
- `keywords`: ["ID", "412512", "839170"]
- `anchors`:
  - `p14`: "There is no workaround for this erratum."
- `quality_flags`: ["low_text_density_continuation_page"]

### SEG-0015
- `physical_pages`: [15]
- `printed_pages`: ["15"]
- `section_path`: "Errata descriptions / Category B / 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 426115 begins: interrupting a FAULTMASK-setting instruction can cause incorrect MPU instruction attributes when MPU_CTRL.HFNMIENA is clear."
- `keywords`: ["Cortex-M7", "FPU", "MPU", "MPU_CTRL.HFNMIENA", "FAULTMASK", "MPU_CTRL", "interrupt", "exception", "426115", "NMI", "CPS", "MSR", "FAULTMASK-setting", "HFNMIENA", "HardFault"]
- `anchors`:
  - `p15`: "426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `quality_flags`: []

### SEG-0016
- `physical_pages`: [16]
- `printed_pages`: ["16"]
- `section_path`: "Errata descriptions / Category B / 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 426115 concludes with implication and workaround requiring ISB after setting FAULTMASK before code whose attributes can differ under HardFault/NMI priority."
- `keywords`: ["FAULTMASK", "AXI", "PRIMASK", "CPS", "MSR", "CPSID", "ID", "426115", "834922"]
- `anchors`:
  - `p16`: "Incorrect attributes on the AXI interface that could cause system-specific effects, for example, if"
- `quality_flags`: []

### SEG-0017
- `physical_pages`: [17]
- `printed_pages`: ["17"]
- `section_path`: "Errata descriptions / Category B / 440977 Increasing priority using a write to BASEPRI does not take effect immediately"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 440977 begins: increasing priority by writing BASEPRI might not take effect immediately if an interrupt is already pending."
- `keywords`: ["Cortex-M7", "FPU", "BASEPRI", "interrupt", "exception", "440977", "MSR", "BASEPRI_MAX", "SysTick", "PendSV"]
- `anchors`:
  - `p17`: "440977 Increasing priority using a write to BASEPRI does not take effect immediately"
- `quality_flags`: []

### SEG-0018
- `physical_pages`: [18]
- `printed_pages`: ["18"]
- `section_path`: "Errata descriptions / Category B / 440977 Increasing priority using a write to BASEPRI does not take effect immediately"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 440977 concludes with workaround to place an ISB after raising BASEPRI."
- `keywords`: ["FAULTMASK", "BASEPRI", "exception", "MSR", "BASEPRI_MAX", "CPS", "PRIMASK", "CPSID", "CPSIE", "ID", "440977", "837070"]
- `anchors`:
  - `p18`: "This erratum means that the instruction after an MSR to boost BASEPRI might incorrectly be pre-empted"
- `quality_flags`: []

### SEG-0019
- `physical_pages`: [19]
- `printed_pages`: ["19"]
- `section_path`: "Errata descriptions / Category B / 565285 Core can send AXI transactions that permit reordering when it should not"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 565285 begins: core can send AXI transactions that permit reordering when it should not for certain memory types or access sequences."
- `keywords`: ["Cortex-M7", "FPU", "AXI", "ECC", "Write-Back", "565285", "IDs", "ID", "BVALID", "WDATA", "Write-Allocate"]
- `anchors`:
  - `p19`: "565285 Core can send AXI transactions that permit reordering when it should not"
- `quality_flags`: []

### SEG-0020
- `physical_pages`: [20]
- `printed_pages`: ["20"]
- `section_path`: "Errata descriptions / Category B / 565285 Core can send AXI transactions that permit reordering when it should not"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 565285 concludes with implications and workaround guidance involving memory attributes and barriers."
- `keywords`: ["MPU", "ECC", "Write-Back", "ACTLR.DISRAMODE", "Write-Allocate", "ACTLR", "DISRAMODE"]
- `anchors`:
  - `p20`: "In order for the lookup to get an ECC error, the core must be configured with cache ECC, and it must be"
- `quality_flags`: []

### SEG-0021
- `physical_pages`: [21]
- `printed_pages`: ["21"]
- `section_path`: "Errata descriptions / Category B / 1013783 PLD might perform linefill to address that would generate a MemManage Fault"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1013783 begins: PLD might perform a linefill to an address that would generate a MemManage Fault."
- `keywords`: ["Cortex-M7", "FPU", "MPU", "PLD", "MemManage Fault", "1013783", "MemManage"]
- `anchors`:
  - `p21`: "1013783 PLD might perform linefill to address that would generate a MemManage Fault"
- `quality_flags`: []

### SEG-0022
- `physical_pages`: [22]
- `printed_pages`: ["22"]
- `section_path`: "Errata descriptions / Category B / 1013783 PLD might perform linefill to address that would generate a MemManage Fault"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1013783 concludes with affected configurations, implications, and workaround notes."
- `keywords`: ["MPU", "PLD", "MPU_RASR0", "MPU_RASR0.ENABLE", "MPU_RASR0.SIZE", "MPU_RASR0.SRD", "MPU_RASR0.XN", "MPU_RASR0.AP", "MPU_RASR0.TEX", "MPU_RASR0.C", "MPU_RASR0.B", "ENABLE", "SIZE"]
- `anchors`:
  - `p22`: "Processor execution is not affected by this erratum. The data returned from the linefill is not directly"
- `quality_flags`: []

### SEG-0023
- `physical_pages`: [23]
- `printed_pages`: ["23"]
- `section_path`: "Errata descriptions / Category B / 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 2328489 begins: TCM bandwidth sharing between AHBS writes and software stores may malfunction when TCM wait states are used."
- `keywords`: ["Cortex-M7", "AHBS", "TCM", "AHB", "2328489", "TCU", "SQ", "FIFO", "STRD", "STM", "PUSH", "VPUSH", "VSTR.64", "VSTM", "VSTR"]
- `anchors`:
  - `p23`: "2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `quality_flags`: []

### SEG-0024
- `physical_pages`: [24]
- `printed_pages`: ["24"]
- `section_path`: "Errata descriptions / Category B / 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 2328489 concludes with conditions, implications, and workaround guidance for avoiding simultaneous AHBS/software write hazards under wait states."
- `keywords`: ["AXI", "AHBS", "TCM", "AHB", "CM7_AHBSCR", "CTL", "INIT", "BUSY", "IDLE", "SEQ", "NONSEQ"]
- `anchors`:
  - `p24`: "Either one of the following workarounds can be used:"
- `quality_flags`: []

### SEG-0025
- `physical_pages`: [25]
- `printed_pages`: ["25"]
- `section_path`: "Errata descriptions / Category B (rare) / 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 443753 begins: cacheable stores to memory locations that always return bus faults might cause deadlock."
- `keywords`: ["Cortex-M7", "FPU", "MPU", "AXI", "D-Cache", "LDREX", "STREX", "DSB", "DMB", "AHB", "interrupt", "exception", "443753", "WBWA", "AHBD", "STB"]
- `anchors`:
  - `p25`: "443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `quality_flags`: []

### SEG-0026
- `physical_pages`: [26]
- `printed_pages`: ["26"]
- `section_path`: "Errata descriptions / Category B (rare) / 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 443753 concludes with workaround guidance for ensuring cacheable store bus faults do not deadlock the system."
- `keywords`: ["MPU", "AXI", "CACR", "Write-Through", "Debug", "SW", "CACR.FORCEWT", "ID", "443753", "838169", "FORCEWT"]
- `anchors`:
  - `p26`: "When in this deadlock state, the processor will not be able to enter halt state or service debugger"
- `quality_flags`: []

### SEG-0027
- `physical_pages`: [27]
- `printed_pages`: ["27"]
- `section_path`: "Errata descriptions / Category C / 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 399743 begins: Fault Address Register can be corrupted when BFHFNMIGN is set and faults occur under handler conditions."
- `keywords`: ["Cortex-M7", "FPU", "FAULTMASK", "FAR", "BFHFNMIGN", "MemManage Fault", "exception", "399743", "BFAR", "MMFAR", "CCR.BFHFNMIGN", "NMI", "PC", "VFP", "NOCP", "CPACR", "MemManage", "HardFault"]
- `anchors`:
  - `p27`: "399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `quality_flags`: []

### SEG-0028
- `physical_pages`: [28]
- `printed_pages`: ["28"]
- `section_path`: "Errata descriptions / Category C / 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 399743 concludes with implications and workaround notes for fault-address register handling."
- `keywords`: ["MPU", "FAR", "BFHFNMIGN", "SW", "CCR.BFHFNMIGN", "PC", "ID", "399743", "830969", "load-to-PC"]
- `anchors`:
  - `p28`: "including all access disabled, then this failure mode cannot occur."
- `quality_flags`: []

### SEG-0029
- `physical_pages`: [29]
- `printed_pages`: ["29"]
- `section_path`: "Errata descriptions / Category C / 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 408519 begins: incorrect GTS packet generation when global timestamps are enabled during debug using the ITM."
- `keywords`: ["Cortex-M7", "FPU", "ITM", "GTS", "PPB", "Debug", "408519", "GTS1", "GTS2", "ITM_TCR", "GTSFREQ"]
- `anchors`:
  - `p29`: "408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `quality_flags`: []

### SEG-0030
- `physical_pages`: [30]
- `printed_pages`: ["30"]
- `section_path`: "Errata descriptions / Category C / 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 408519 concludes with workaround notes for handling ITM global timestamp trace packets."
- `keywords`: ["ITM", "GTS", "Debug", "ITM_TCR", "SW", "ID", "408519", "839169"]
- `anchors`:
  - `p30`: "To work around this erratum, a dummy write to the ITM_TCR register should be performed immediately"
- `quality_flags`: []

### SEG-0031
- `physical_pages`: [31]
- `printed_pages`: ["31"]
- `section_path`: "Errata descriptions / Category C / 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 416915 begins: HFSR.FORCED bit is not set for configurable priority faults that result in LOCKUP."
- `keywords`: ["Cortex-M7", "FPU", "HFSR.FORCED", "LOCKUP", "exception", "416915", "NMI", "FSR", "HFSR", "FORCED", "HardFault", "MemManage", "BusFault"]
- `anchors`:
  - `p31`: "416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `quality_flags`: []

### SEG-0032
- `physical_pages`: [32]
- `printed_pages`: ["32"]
- `section_path`: "Errata descriptions / Category C / 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 416915 concludes with implications and workaround notes for lockup diagnosis."
- `keywords`: ["LOCKUP", "Debug", "SW", "ID", "416915", "834971"]
- `anchors`:
  - `p32`: "This bit has no internal function in the processor and is only used to help handler SW or a debugger to"
- `quality_flags`: []

### SEG-0033
- `physical_pages`: [33]
- `printed_pages`: ["33"]
- `section_path`: "Errata descriptions / Category C / 421025 Early forwarding from load is incorrectly cancelled inside IT block"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 421025 begins: early forwarding from load is incorrectly cancelled inside an IT block."
- `keywords`: ["ARM", "Arm", "Cortex-M7", "FPU", "MPU", "IT block", "421025", "IT", "ITTTE", "IAR", "EWARM"]
- `anchors`:
  - `p33`: "421025 Early forwarding from load is incorrectly cancelled inside IT block"
- `quality_flags`: []

### SEG-0034
- `physical_pages`: [34]
- `printed_pages`: ["34"]
- `section_path`: "Errata descriptions / Category C / 421025 Early forwarding from load is incorrectly cancelled inside IT block"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 421025 concludes with no direct workaround and notes conditional execution/load-forwarding conditions."
- `keywords`: ["ID", "421025", "833872"]
- `anchors`:
  - `p34`: "The code sequence must be amended to remove the redundant load operation."
- `quality_flags`: []

### SEG-0035
- `physical_pages`: [35]
- `printed_pages`: ["35"]
- `section_path`: "Errata descriptions / Category C / 422825 MPU fetch attributes might transiently be incorrect after an exception return"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 422825 begins: MPU fetch attributes can be transiently incorrect after an exception return."
- `keywords`: ["Cortex-M7", "FPU", "MPU", "MPU_CTRL.HFNMIENA", "AHBS", "MBIST", "ITCM", "TCM", "MPU_CTRL", "AHB", "exception", "422825", "NMI", "HFNMIENA", "HardFault"]
- `anchors`:
  - `p35`: "422825 MPU fetch attributes might transiently be incorrect after an exception return"
- `quality_flags`: []

### SEG-0036
- `physical_pages`: [36]
- `printed_pages`: ["36"]
- `section_path`: "Errata descriptions / Category C / 422825 MPU fetch attributes might transiently be incorrect after an exception return"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 422825 concludes with workaround notes for memory attributes and exception return sequences."
- `keywords`: ["MPU", "AXI", "ITCM", "TCM", "ID", "422825", "834923"]
- `anchors`:
  - `p36`: "If the affected instructions are on ITCM, then all MPU attributes are ignored except for the xN attribute."
- `quality_flags`: []

### SEG-0037
- `physical_pages`: [37]
- `printed_pages`: ["37"]
- `section_path`: "Errata descriptions / Category C / 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 423541 begins: interrupts on bus-aborting strongly-ordered or device loads to the stack pointer can cause incorrect exception stacking."
- `keywords`: ["Cortex-M7", "FPU", "AXI", "TCM", "Write-Back", "AHB", "PPB", "interrupt", "exception", "423541", "VFP", "AHBP", "EPPB", "NMI", "FPCAR", "SysTick", "PendSV"]
- `anchors`:
  - `p37`: "423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `quality_flags`: []

### SEG-0038
- `physical_pages`: [38]
- `printed_pages`: ["38"]
- `section_path`: "Errata descriptions / Category C / 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 423541 concludes with implication/workaround notes for avoiding faulting device/strongly-ordered stack-pointer loads."
- `keywords`: ["ID", "423541", "834924"]
- `anchors`:
  - `p38`: "Note that loads to Device and Strongly-ordered memory are unlikely to update the stack pointer in real"
- `quality_flags`: []

### SEG-0039
- `physical_pages`: [39]
- `printed_pages`: ["39"]
- `section_path`: "Errata descriptions / Category C / 431216 Unimplemented bits of BASEPRI do not read-as-zero"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 431216 begins: unimplemented bits of BASEPRI do not read-as-zero."
- `keywords`: ["Cortex-M7", "FPU", "BASEPRI", "Debug", "exception", "431216", "BASEPRI_MAX", "MSR", "MRS"]
- `anchors`:
  - `p39`: "431216 Unimplemented bits of BASEPRI do not read-as-zero"
- `quality_flags`: []

### SEG-0040
- `physical_pages`: [40]
- `printed_pages`: ["40"]
- `section_path`: "Errata descriptions / Category C / 431216 Unimplemented bits of BASEPRI do not read-as-zero"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 431216 concludes with workaround guidance to mask unimplemented BASEPRI bits in software."
- `keywords`: ["BASEPRI", "SW", "BASEPRI_MAX", "ID", "431216", "837069"]
- `anchors`:
  - `p40`: "SW should use another priority register to deduce how many priority bits are implemented and should"
- `quality_flags`: []

### SEG-0041
- `physical_pages`: [41]
- `printed_pages`: ["41"]
- `section_path`: "Errata descriptions / Category C / 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 449383 begins: writing FPCCR.ASPEN while a single-precision FP MAC completes can corrupt the FP register bank."
- `keywords`: ["Cortex-M7", "FPU", "FPCCR.ASPEN", "FP MAC", "DSB", "exception", "449383", "FP", "MAC", "MACs", "CONTROL.FPCA", "FPDSCR", "FPSCR", "VMLA", "VMLS", "VNMLA", "VNMLS", "VFMA"]
- `anchors`:
  - `p41`: "449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `quality_flags`: []

### SEG-0042
- `physical_pages`: [42]
- `printed_pages`: ["42"]
- `section_path`: "Errata descriptions / Category C / 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 449383 concludes with FPU configuration/conditions and workaround notes."
- `keywords`: ["DSB", "ISB", "FPCCR", "FP", "ID", "449383", "839269"]
- `anchors`:
  - `p42`: "In general, it is not anticipated that the conditions and sequence described will occur in real code."
- `quality_flags`: []

### SEG-0043
- `physical_pages`: [43]
- `printed_pages`: ["43"]
- `section_path`: "Errata descriptions / Category C / 486321 Incorrect behavior of profiling counters"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 486321 begins: profiling counters can report incorrect behavior for folded instructions, loads/stores, exceptions, or sleep cycles."
- `keywords`: ["Cortex-M7", "FPU", "DWT", "LSUCNT", "EXCCNT", "486321", "DWT_LSUCNT", "DWT_CPICNT", "DWT_EXCCNT", "VFP", "DEMCR.TRCENA", "DWT_CTRL.LSUEVTENA", "DWT_CTRL.CPICNT", "DWT_CTRL.EXCCNT", "DEMCR", "TRCENA", "DWT_CTRL", "LSUEVTENA"]
- `anchors`:
  - `p43`: "486321 Incorrect behavior of profiling counters"
- `quality_flags`: []

### SEG-0044
- `physical_pages`: [44]
- `printed_pages`: ["44"]
- `section_path`: "Errata descriptions / Category C / 486321 Incorrect behavior of profiling counters"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 486321 concludes with no workaround and notes deprecated previous ID 850724."
- `keywords`: ["ID", "486321", "850724"]
- `anchors`:
  - `p44`: "There is no workaround for this erratum."
- `quality_flags`: ["low_text_density_continuation_page"]

### SEG-0045
- `physical_pages`: [45]
- `printed_pages`: ["45"]
- `section_path`: "Errata descriptions / Category C / 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 505438 begins: TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used."
- `keywords`: ["Cortex-M7", "FPU", "AXI", "TPIU", "ETM", "ITM", "DWT", "DWT_CYCCNT", "DSYNC", "CYCCNT", "Debug state", "Debug", "505438"]
- `anchors`:
  - `p45`: "505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `quality_flags`: []

### SEG-0046
- `physical_pages`: [46]
- `printed_pages`: ["46"]
- `section_path`: "Errata descriptions / Category C / 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 505438 concludes and notes deprecated previous ID 850725."
- `keywords`: ["ID", "505438", "850725"]
- `anchors`:
  - `p46`: "Please note that this erratum is now published as ID 505438. The previous ID 850725 is deprecated."
- `quality_flags`: ["low_text_density_continuation_page"]

### SEG-0047
- `physical_pages`: [47]
- `printed_pages`: ["47"]
- `section_path`: "Errata descriptions / Category C / 513195 Lock Status Indication incorrectly reads as one for debugger reads"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 513195 begins: lock status indication incorrectly reads as one for debugger reads."
- `keywords`: ["Cortex-M7", "FPU", "ITM", "DWT", "Debug", "513195", "FPB", "LSR.LSI", "RAZ", "LSR.SLK", "FPB_LSR", "DWT_LSR", "ITM_LSR", "LSR", "CoreSight"]
- `anchors`:
  - `p47`: "513195 Lock Status Indication incorrectly reads as one for debugger reads"
- `quality_flags`: []

### SEG-0048
- `physical_pages`: [48]
- `printed_pages`: ["48"]
- `section_path`: "Errata descriptions / Category C / 513195 Lock Status Indication incorrectly reads as one for debugger reads"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 513195 concludes with conditions, implications, and workaround notes for debugger access to lock status."
- `keywords`: ["ITM", "DWT", "Debug", "SLI", "FPB_LSR", "DWT_LSR", "ITM_LSR", "FPB_LAR", "DWT_LAR", "ITM_LAR", "ID", "513195", "851031"]
- `anchors`:
  - `p48`: "External debuggers should ignore the SLI field of the FPB_LSR, DWT_LSR and ITM_LSR registers."
- `quality_flags`: []

### SEG-0049
- `physical_pages`: [49]
- `printed_pages`: ["49"]
- `section_path`: "Errata descriptions / Category C / 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 636315 begins: software programming errors may not be reported for online MBIST access to I-Cache."
- `keywords`: ["Cortex-M7", "FPU", "MBIST", "I-Cache", "ECC", "TCM", "MBISTERR[0]", "636315", "RAMs", "MBISTERR", "TCMs", "MVA"]
- `anchors`:
  - `p49`: "636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `quality_flags`: []

### SEG-0050
- `physical_pages`: [50]
- `printed_pages`: ["50"]
- `section_path`: "Errata descriptions / Category C / 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 636315 concludes with I-Cache MBIST conditions, implications, and no workaround."
- `keywords`: ["Cortex-M7", "MBIST", "I-Cache", "D-Cache", "ITCM", "DTCM", "TCM", "MBISTERR[0]", "MBISTERR", "RAMs"]
- `anchors`:
  - `p50`: "Note that this erratum only affects the MBIST software assisted use case error indication for the I-Cache"
- `quality_flags`: []

### SEG-0051
- `physical_pages`: [51]
- `printed_pages`: ["51"]
- `section_path`: "Errata descriptions / Category C / 702596 Single stepping Cortex-M7 enters pending exception handler"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 702596 begins: single stepping can enter a pending exception handler despite DHCSR.C_MASKINTS masking intent."
- `keywords`: ["Cortex-M7", "FPU", "DHCSR.C_MASKINTS", "Debug state", "Debug", "interrupt", "exception", "702596", "C_MASKINTS", "DHCSR", "PendSV", "SysTick"]
- `anchors`:
  - `p51`: "702596 Single stepping Cortex-M7 enters pending exception handler"
- `quality_flags`: []

### SEG-0052
- `physical_pages`: [52]
- `printed_pages`: ["52"]
- `section_path`: "Errata descriptions / Category C / 702596 Single stepping Cortex-M7 enters pending exception handler"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 702596 concludes with debugger-side mitigation to set DHCSR.C_MASKINTS promptly and avoid clearing it while stepping."
- `keywords`: ["DHCSR.C_MASKINTS", "Debug state", "Debug", "interrupt", "DHCSR", "C_MASKINTS"]
- `anchors`:
  - `p52`: "The debugger can reduce the likelihood of an interrupt being taken when DHCSR.C_MASKINTS is set"
- `quality_flags`: []

### SEG-0053
- `physical_pages`: [53]
- `printed_pages`: ["53"]
- `section_path`: "Errata descriptions / Category C / 1267980 ECC error causes data corruption when the data cache error bank registers are locked"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1267980: ECC error can corrupt data when both data cache error bank registers DEBR0 and DEBR1 are locked."
- `keywords`: ["Cortex-M7", "FPU", "ECC", "DEBR0", "DEBR1", "1267980", "DEBR"]
- `anchors`:
  - `p53`: "1267980 ECC error causes data corruption when the data cache error bank registers are locked"
- `quality_flags`: []

### SEG-0054
- `physical_pages`: [54]
- `printed_pages`: ["54"]
- `section_path`: "Errata descriptions / Category C / 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1313001 begins: store after cache invalidate without an intervening barrier can cause an inconsistent memory view."
- `keywords`: ["Cortex-M7", "FPU", "ECC", "Write-Through", "DSB", "DMB", "DCCIMVAC", "DCCISW", "DCIMVAC", "DCISW", "1313001"]
- `anchors`:
  - `p54`: "1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `quality_flags`: []

### SEG-0055
- `physical_pages`: [55]
- `printed_pages`: ["55"]
- `section_path`: "Errata descriptions / Category C / 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1313001 concludes with workaround requiring DMB between cache maintenance and Write-Through store."
- `keywords`: ["DSB", "DMB"]
- `anchors`:
  - `p55`: "A DMB must be inserted between the cache maintenance operation and the store."
- `quality_flags`: []

### SEG-0056
- `physical_pages`: [56]
- `printed_pages`: ["56"]
- `section_path`: "Errata descriptions / Category C / 1315869 Data corruption for load following Store-Exclusive"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1315869 begins: data corruption for a load following Store-Exclusive to the same address under specific shareable memory sequence."
- `keywords`: ["Cortex-M7", "FPU", "Store-Exclusive", "Load-Exclusive", "STREX", "STREXB", "STREXH", "1315869"]
- `anchors`:
  - `p56`: "1315869 Data corruption for load following Store-Exclusive"
- `quality_flags`: []

### SEG-0057
- `physical_pages`: [57]
- `printed_pages`: ["57"]
- `section_path`: "Errata descriptions / Category C / 1315869 Data corruption for load following Store-Exclusive"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1315869 concludes: no workaround is necessary."
- `keywords`: []
- `anchors`:
  - `p57`: "No workaround is necessary."
- `quality_flags`: ["low_text_density_continuation_page"]

### SEG-0058
- `physical_pages`: [58]
- `printed_pages`: ["58"]
- `section_path`: "Errata descriptions / Category C / 1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 1518990: DWT data value comparison uses memory-endianness format, not little-endian, in affected big-endian configurations."
- `keywords`: ["Cortex-M7", "FPU", "DWT", "DWT_COMPn", "DWTFUNCTIONn", "big-endian", "little-endian", "1518990", "FUNCTIOn", "DATAVMATCH", "DWT_FUNCTIONn", "DATAVSIZE"]
- `anchors`:
  - `p58`: "1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
- `quality_flags`: []

### SEG-0059
- `physical_pages`: [59]
- `printed_pages`: ["59"]
- `section_path`: "Errata descriptions / Category C / 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 3092511 begins: Cortex-M7 can halt at an incorrect address when breakpoint and asynchronous exception occur simultaneously."
- `keywords`: ["Cortex-M7", "FPU", "BKPT", "DFSR", "Debug", "exception", "3092511"]
- `anchors`:
  - `p59`: "3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `quality_flags`: []

### SEG-0060
- `physical_pages`: [60]
- `printed_pages`: ["60"]
- `section_path`: "Errata descriptions / Category C / 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `content_types`: ["erratum", "text"]
- `summary`: "Erratum 3092511 concludes with debugger-oriented workaround and expected immediate re-halt behavior after resuming."
- `keywords`: ["Debug", "interrupt"]
- `anchors`:
  - `p60`: "Workaround:"
- `quality_flags`: []

### SEG-0061
- `physical_pages`: [61]
- `printed_pages`: ["61"]
- `section_path`: "Proprietary notice"
- `content_types`: ["legal_notice", "text"]
- `summary`: "Proprietary notice begins, covering copyright, patent, warranty, liability, and use restrictions."
- `keywords`: ["ARM", "Arm", "IS", "PROVIDED", "AS", "PROVIDES", "NO", "REPRESENTATIONS", "WARRANTIES", "EXPRESS", "IMPLIED", "OR", "STATUTORY", "INCLUDING", "WITHOUT", "LIMITATION", "OF", "MERCHANTABILITY"]
- `anchors`:
  - `p61`: "Proprietary notice"
- `quality_flags`: []

### SEG-0062
- `physical_pages`: [62]
- `printed_pages`: ["62"]
- `section_path`: "Proprietary notice"
- `content_types`: ["legal_notice", "text"]
- `summary`: "Proprietary notice concludes with trademarks, Arm Limited company address, and notice identifier PRE-1121-V1.0."
- `keywords`: ["ARM", "Arm", "US", "02557590", "CB1", "PRE", "V1.0", "PRE-1121-V1"]
- `anchors`:
  - `p62`: "The Arm corporate logo and words marked with ® or ™ are registered trademarks or trademarks of Arm Limited"
- `quality_flags`: []

### SEG-0063
- `physical_pages`: [63]
- `printed_pages`: ["63"]
- `section_path`: "Product and document information / Product status / Product completeness status"
- `content_types`: ["product_status", "text"]
- `summary`: "Product and document information: product status is Final; describes product completeness status and product revision identifier semantics."
- `keywords`: ["ARM", "Arm"]
- `anchors`:
  - `p63`: "Product and document information"
- `quality_flags`: []

## 6. Table Index

### TBL-0003-0004-TOC
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0003-0004-TOC"
- `caption`: "Contents"
- `physical_pages`: [3, 4]
- `printed_pages`: ["3", "4"]
- `section_path`: "Front Matter / Contents"
- `bbox_by_page`: {3: "multiple text/table-like columns", 4: "multiple text/table-like rows"}
- `key_fields`: ["section title", "erratum ID", "page number"]
- `summary`: "Table-of-contents layout listing sections and errata entries with target pages."
- `anchor`: "Contents"
- `confidence`: 0.78
- `quality_flags`: ["toc_table_like_layout", "not_a_formal_numbered_table"]

### TBL-0006-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0006-001"
- `caption`: "May 28, 2024: Changes in document version v11.0"
- `physical_pages`: [6]
- `printed_pages`: ["6"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 194.2, 554.1, 666.2]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table listing updated/new errata for document version 11.0."
- `anchor`: "May 28, 2024: Changes in document version v11.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0007-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-001"
- `caption`: "October 25, 2021: Changes in document version v10.0"
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 90.7, 554.1, 139.6]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v10.0 showing erratum 2328489 as new."
- `anchor`: "October 25, 2021: Changes in document version v10.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0007-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-002"
- `caption`: "December 04, 2019: Changes in document version v9.0"
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 158.5, 554.1, 207.4]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v9.0 showing erratum 1518990 as new."
- `anchor`: "December 04, 2019: Changes in document version v9.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0007-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-003"
- `caption`: "November 28, 2018: Changes in document version v8.0"
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 226.4, 554.1, 353.9]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v8.0 covering 1013783, 1267980, 1313001, and 1315869."
- `anchor`: "November 28, 2018: Changes in document version v8.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0007-004
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-004"
- `caption`: "November 09, 2018: Changes in document version v7.0"
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 372.9, 554.1, 508.4]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v7.0 covering 1259864, 565285, 1013783, 636315, and 702596."
- `anchor`: "November 09, 2018: Changes in document version v7.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0007-005
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0007-005"
- `caption`: "July 16, 2015: Changes in document version v6.0"
- `physical_pages`: [7]
- `printed_pages`: ["7"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 527.3, 554.1, 681.7]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v6.0 covering 443753, 416915, 421025, 486321, 505438, and 513195."
- `anchor`: "July 16, 2015: Changes in document version v6.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0008-001
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-001"
- `caption`: "December 04, 2014: Changes in document version v4.0"
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 90.7, 554.1, 259.1]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v4.0 covering 412512, 440977, 443753, 408519, and 449383."
- `anchor`: "December 04, 2014: Changes in document version v4.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0008-002
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-002"
- `caption`: "November 11, 2014: Changes in document version v3.0"
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 278.0, 554.1, 424.5]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v3.0 covering 426115, 416915, 422825, 423541, and 431216."
- `anchor`: "November 11, 2014: Changes in document version v3.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0008-003
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0008-003"
- `caption`: "September 12, 2014: Changes in document version v2.0"
- `physical_pages`: [8]
- `printed_pages`: ["8"]
- `section_path`: "Change Control"
- `bbox`: [57.9, 443.5, 554.1, 500.3]
- `key_fields`: ["ID", "Status", "Area", "Category", "Summary"]
- `summary`: "Change-control table for v2.0 covering 399743 and 421025."
- `anchor`: "September 12, 2014: Changes in document version v2.0"
- `confidence`: 0.91
- `quality_flags`: ["generated_internal_table_id", "no_source_table_number"]

### TBL-0009-0010-ERRATA-SUMMARY
- `source_table_number`: null
- `generated_table_number`: "Internal Table TBL-0009-0010-ERRATA-SUMMARY"
- `caption`: "Errata summary table"
- `physical_pages`: [9, 10]
- `printed_pages`: ["9", "10"]
- `section_path`: "Errata summary table"
- `bbox_by_page`: {9: [57.9, 149.2, 554.1, 702.4], 10: [57.9, 71.9, 554.1, 641.0]}
- `key_fields`: ["ID", "Area", "Category", "Summary", "Found in versions", "Fixed in version"]
- `summary`: "Cross-page errata summary listing 26 errata with category, affected product revisions, and fixed/open status."
- `anchor`: "Errata summary table"
- `confidence`: 0.94
- `quality_flags`: ["cross_page_table", "generated_internal_table_id", "no_source_table_number"]

## 7. Figure / Image Index

### FIG-0001-001
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0001-001"
- `caption`: "Cover decorative background"
- `physical_page`: 1
- `printed_page`: "cover"
- `section_path`: "Cover"
- `bbox`: [57.6, 72.0, 554.4, 695.5]
- `image_object`: "Im8"
- `image_pixel_size`: [2352, 2952]
- `image_type`: "cover_art"
- `semantic_description`: "Cover decorative image/background with grid and turquoise blocks."
- `keywords`: ["cover", "decorative image"]
- `anchor`: "Cover decorative background"
- `confidence`: 0.88
- `quality_flags`: ["cover_image", "not_a_numbered_technical_figure"]

### FIG-0001-002
- `source_figure_number`: null
- `generated_figure_number`: "Internal Figure FIG-0001-002"
- `caption`: "Arm logo"
- `physical_page`: 1
- `printed_page`: "cover"
- `section_path`: "Cover"
- `bbox`: [72.5, 72.0, 170.6, 103.5]
- `image_object`: "Im12"
- `image_pixel_size`: [131, 42]
- `image_type`: "logo"
- `semantic_description`: "Arm corporate logo image on the cover."
- `keywords`: ["Arm", "logo", "cover"]
- `anchor`: "Arm logo"
- `confidence`: 0.88
- `quality_flags`: ["cover_image", "not_a_numbered_technical_figure"]

### FIG-NONE-FORMAL
- `source_figure_number`: null
- `caption`: "No formal numbered technical figures detected"
- `physical_pages`: []
- `semantic_description`: "The PDF contains only cover raster images; no numbered technical figures or diagrams were detected in the body pages."
- `confidence`: 0.95
- `quality_flags`: ["no_formal_figures_detected"]

## 8. Erratum Index

### ERR-1259864
- `name`: "1259864"
- `type`: "erratum_id"
- `title`: "Data corruption in a sequence of Write-Through stores and loads"
- `category`: "Category A"
- `area`: "Programmer"
- `primary_page`: 11
- `physical_pages`: [11, 12]
- `printed_pages`: ["11", "12"]
- `section_path`: "Errata descriptions / Category A / 1259864 Data corruption in a sequence of Write-Through stores and loads"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category A"
- `fault_status`: "Present in r0p1, r0p2, r1p0 and r1p1. Fixed in r1p2."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1"
- `fixed_in_version`: "r1p2"
- `brief`: "Data corruption in a sequence of Write-Through stores and loads"
- `anchors`:
  - `section`: "1259864 Data corruption in a sequence of Write-Through stores and loads"
  - `description`: "If a particular sequence of stores and loads is performed to Write-Through memory, and some timing- based internal conditions are met, then a load might not get the last data..."
  - `configurations`: "All configurations with a data cache are affected."
  - `conditions`: "This erratum can only occur if the loads and stores are to Write-Through memory. This could be because of any of the following: 1. The Memory Protection Unit (MPU) has been..."
  - `implications`: "A load can return incorrect data."
  - `workaround`: "There is no direct workaround for this erratum. Where possible, Arm recommends that you use the MPU to change the attributes on any Write-Through memory to Write-Back memory. If..."
- `keywords`: ["Write-Through", "data cache", "MPU", "FORCEWT", "SIWT", "linefill", "ECC", "DSB", "ARM", "Arm", "Cortex-M7", "FPU", "CACR", "CM7_CACR.FORCEWT"]
- `quality_flags`: []

### ERR-412512
- `name`: "412512"
- `type`: "erratum_id"
- `title`: "Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `category`: "Category B"
- `area`: "Programmer"
- `primary_page`: 13
- `physical_pages`: [13, 14]
- `printed_pages`: ["13", "14"]
- `section_path`: "Errata descriptions / Category B / 412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category B"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `anchors`:
  - `section`: "412512 Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
  - `description`: "The Cortex-M7 TPIU outputs ETM and ITM trace data in 16-byte frames as specified by the CoreSight architecture. To complete each frame the TPIU must either wait for sufficient..."
  - `configurations`: "This affects configurations with: an ETM present AND an ITM not present AND the Cortex-M7 TPIU."
  - `conditions`: "An affected configuration will always suffer from this erratum when the TPIU is enabled."
  - `implications`: "This erratum can cause loss of the final bytes of trace data in a tracing session. This applies to a maximum of 15 bytes. Additionally, when the processor enters halt, it is..."
  - `workaround`: "There is no workaround for this erratum. Please note that this erratum is now published as ID 412512. The previous ID 839170 is deprecated. This is done to work around a document..."
- `keywords`: ["TPIU", "ETM", "ITM", "DSYNC", "trace data", "partial frames", "deprecated ID 839170", "Cortex-M7", "FPU", "AXI", "DWT", "Debug", "412512", "ID"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-426115
- `name`: "426115"
- `type`: "erratum_id"
- `title`: "Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `category`: "Category B"
- `area`: "Programmer"
- `primary_page`: 15
- `physical_pages`: [15, 16]
- `printed_pages`: ["15", "16"]
- `section_path`: "Errata descriptions / Category B / 426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category B"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Interrupting a FAULTMASK- setting instruction might cause incorrect MPU instruction attributes"
- `anchors`:
  - `section`: "426115 Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"
  - `description`: "When the MPU_CTRL.HFNMIENA is clear the MPU uses the default memory map instead of the programmed regions when executing at HardFault or NMI priority. This includes code where..."
  - `configurations`: "This erratum affects all configurations of the processor that include an MPU."
  - `conditions`: "The following conditions are required for this erratum to occur: The MPU is enabled and the MPU_CTRL.HFNMIENA bit is b0. The processor is executing at priority >0. Execution of a..."
  - `implications`: "This erratum only affects instruction fetches. The MPU attributes returned will be incorrect. This could result in: xN faults not taken when they should be Spurious xN faults..."
  - `workaround`: "The instruction to attempt to set FAULTMASK should only be executed with PRIMASK set. So the sequence: <CPS/MSR to set FAULTMASK> should be replaced by: CPSID i <CPS/MSR to set..."
- `keywords`: ["FAULTMASK", "MPU_CTRL.HFNMIENA", "MPU", "CPS", "MSR", "asynchronous exception", "Cortex-M7", "FPU", "AXI", "MPU_CTRL", "interrupt", "exception", "426115", "NMI"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-440977
- `name`: "440977"
- `type`: "erratum_id"
- `title`: "Increasing priority using a write to BASEPRI does not take effect immediately"
- `category`: "Category B"
- `area`: "Programmer"
- `primary_page`: 17
- `physical_pages`: [17, 18]
- `printed_pages`: ["17", "18"]
- `section_path`: "Errata descriptions / Category B / 440977 Increasing priority using a write to BASEPRI does not take effect immediately"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category B"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Increasing priority using a write to BASEPRI does not take effect immediately"
- `anchors`:
  - `section`: "440977 Increasing priority using a write to BASEPRI does not take effect immediately"
  - `description`: "An MSR to BASEPRI or BASEPRI_MAX can be used to boost current execution priority. This update is required to be serialised to the instruction stream meaning that after this update..."
  - `configurations`: "This erratum affects all configurations of the processor."
  - `conditions`: "The following scenario is required to hit this erratum: 1. An MSR to BASEPRI or BASEPRI_MAX is executed to increase current execution priority. 2. An asynchronous exception..."
  - `implications`: "This erratum means that the instruction after an MSR to boost BASEPRI might incorrectly be pre-empted by an insufficiently high priority exception. Note that this erratum only..."
  - `workaround`: "To work around this problem, the MSR to boost BASEPRI can be replaced by the following code sequence: CPSID i MSR to BASEPRI CPSIE i <critical region code> Please note that this..."
- `keywords`: ["BASEPRI", "priority", "interrupt", "exception", "ISB", "Cortex-M7", "FPU", "FAULTMASK", "440977", "MSR", "BASEPRI_MAX", "CPS", "PRIMASK", "CPSID"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-565285
- `name`: "565285"
- `type`: "erratum_id"
- `title`: "Core can send AXI transactions that permit reordering when it should not"
- `category`: "Category B"
- `area`: "Programmer"
- `primary_page`: 19
- `physical_pages`: [19, 20]
- `printed_pages`: ["19", "20"]
- `section_path`: "Errata descriptions / Category B / 565285 Core can send AXI transactions that permit reordering when it should not"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category B"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open"
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "Core can send AXI transactions that permit reordering when it should not"
- `anchors`:
  - `section`: "565285 Core can send AXI transactions that permit reordering when it should not"
  - `description`: "The AXI protocol allows transactions on different write IDs to be reordered with respect to one another. Because of this erratum, the core might output a write transaction using..."
  - `configurations`: "All configurations that include a data cache are affected."
  - `conditions`: "This erratum requires an eviction followed by a cacheable store to an address that was present in the eviction. There are two scenarios when this can happen. In the first..."
  - `implications`: "If the slave or interconnect does reorder the transactions, the older eviction will overwrite the result of the younger store, causing data corruption."
  - `workaround`: "If the core is operating in an system that is susceptible to this erratum, and the core is not configured with cache ECC, or cache ECC is disabled, the following workaround can be..."
- `keywords`: ["AXI", "reordering", "strongly-ordered", "device memory", "barrier", "Cortex-M7", "FPU", "MPU", "ECC", "Write-Back", "565285", "IDs", "ID", "BVALID"]
- `quality_flags`: ["open_erratum"]

### ERR-1013783
- `name`: "1013783"
- `type`: "erratum_id"
- `title`: "PLD might perform linefill to address that would generate a MemManage Fault"
- `category`: "Category B"
- `area`: "Programmer"
- `primary_page`: 21
- `physical_pages`: [21, 22]
- `printed_pages`: ["21", "22"]
- `section_path`: "Errata descriptions / Category B / 1013783 PLD might perform linefill to address that would generate a MemManage Fault"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Cat B"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1, and r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "PLD might perform linefill to address that would generate a MemManage Fault"
- `anchors`:
  - `section`: "1013783 PLD might perform linefill to address that would generate a MemManage Fault"
  - `description`: "If the MPU is present and enabled, then it can be programmed so that loads to certain addresses generate a MemManage Fault. This could be because: The address is unmapped, that..."
  - `configurations`: "This erratum affects all configurations that include an MPU and a data cache."
  - `conditions`: "1. The data cache is enabled and the MPU is enabled. 2. A PLD is executed, and either: a. The PLD is to an address not mapped in the MPU, which requires that: i. The MPU is..."
  - `implications`: "Processor execution is not affected by this erratum. The data returned from the linefill is not directly consumed by the PLD. Any subsequent load to that address can only access..."
  - `workaround`: "Accesses to memory that is not mapped in the MPU can be avoided by using MPU region 0 to cover all unmapped memory and make this region execute-never and inaccessible. That is..."
- `keywords`: ["PLD", "linefill", "MemManage Fault", "MPU", "cache", "Cortex-M7", "FPU", "1013783", "MPU_RASR0", "MPU_RASR0.ENABLE", "MPU_RASR0.SIZE", "MPU_RASR0.SRD", "MPU_RASR0.XN", "MPU_RASR0.AP"]
- `quality_flags`: ["open_erratum"]

### ERR-2328489
- `name`: "2328489"
- `type`: "erratum_id"
- `title`: "TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `category`: "Category B"
- `area`: "Programmer"
- `primary_page`: 23
- `physical_pages`: [23, 24]
- `printed_pages`: ["23", "24"]
- `section_path`: "Errata descriptions / Category B / 2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `affects`: "Cortex-M7"
- `fault_type`: "Programmer Category B"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1, r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `anchors`:
  - `section`: "2328489 TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
  - `description`: "The TCM Control Unit (TCU) contains a Store Queue (SQ) FIFO that buffers Tightly Coupled Memory (TCM) writes. Software stores and AHBS writes both go through the SQ. A round-robin..."
  - `configurations`: "This erratum affects all configurations of the Cortex-M7 processor."
  - `conditions`: "This erratum can occur when either an STRD, STM, PUSH, VPUSH, VSTR.64, or VSTM instruction is executed targeting TCM during a long stream of back-to-back AHBS write transfers and..."
  - `implications`: "This erratum only affects the performance of the Cortex-M7 processor. It can cause the processor's execution pipeline to stall when executing a 64-bit store instruction while..."
  - `workaround`: "Either one of the following workarounds can be used: 1. Use AHBS priority demotion by setting the CM7_AHBSCR register CTL field to 0b00 and set the INIT field value to N. 2..."
- `keywords`: ["TCM", "AHBS", "software stores", "wait states", "bandwidth sharing", "Cortex-M7", "AXI", "AHB", "2328489", "TCU", "SQ", "FIFO", "STRD", "STM"]
- `quality_flags`: ["open_erratum"]

### ERR-443753
- `name`: "443753"
- `type`: "erratum_id"
- `title`: "A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `category`: "Category B (rare)"
- `area`: "Programmer"
- `primary_page`: 25
- `physical_pages`: [25, 26]
- `printed_pages`: ["25", "26"]
- `section_path`: "Errata descriptions / Category B (rare) / 443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category B (rare)"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `anchors`:
  - `section`: "443753 A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
  - `description`: "Because of this erratum, after a specific sequence of cacheable stores, the processor might deadlock."
  - `configurations`: "This erratum affects all configurations of the processor that include a D-cache."
  - `conditions`: "The following code sequence is required to hit this erratum: 1. A cacheable WBWA store, that misses in the cache. 2. At least one of the following: A LDREX, STREX, DSB, or AHBD..."
  - `implications`: "This erratum results in the processor deadlocking. An exception will break the deadlock, but cannot prevent the processor from deadlocking again if another store to AXI, DSB or..."
  - `workaround`: "Systems that do not implement permanently bus-aborting regions of the AXI interface are not affected by this erratum and need no workaround. For systems that are affected, the..."
- `keywords`: ["cacheable stores", "bus faults", "deadlock", "write buffer", "Cortex-M7", "FPU", "MPU", "AXI", "D-Cache", "CACR", "Write-Through", "LDREX", "STREX", "DSB"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-399743
- `name`: "399743"
- `type`: "erratum_id"
- `title`: "The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `printed_pages`: ["27", "28"]
- `section_path`: "Errata descriptions / Category C / 399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `anchors`:
  - `section`: "399743 The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
  - `description`: "Cortex-M7 implements a single physical register (FAR) for both the Bus Fault Address Register (BFAR) and the MemManage Fault Address Register (MMFAR). Because of this erratum this..."
  - `configurations`: "This erratum affects all configurations of the processor."
  - `conditions`: "There are two sets of conditions for this erratum. The first set is: 1. The CCR.BFHFNMIGN bit is set. 2. The processor is executing at HardFault or NMI priority - that is, either..."
  - `implications`: "Corruption of the FAR can cause confusion in the fault handling code as to what the source of the fault was, but is not otherwise expected to affect SW operation. Additionally..."
  - `workaround`: "To work around this erratum, SW should ensure that the CCR.BFHFNMIGN bit is only set when executing in privileged mode and should avoid executing load-to-PC instructions to..."
- `keywords`: ["FAR", "BFHFNMIGN", "BusFault", "HardFault", "NMI", "Cortex-M7", "FPU", "MPU", "FAULTMASK", "MemManage Fault", "exception", "399743", "BFAR", "MMFAR"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-408519
- `name`: "408519"
- `type`: "erratum_id"
- `title`: "Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 29
- `physical_pages`: [29, 30]
- `printed_pages`: ["29", "30"]
- `section_path`: "Errata descriptions / Category C / 408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `anchors`:
  - `section`: "408519 Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
  - `description`: "A full global timestamp packet sequence should be generated whenever the GTS feature is enabled in the ITM. This packet sequence consists of a GTS1 packet followed by a GTS2..."
  - `configurations`: "This erratum affects all configurations of the processor that include an ITM."
  - `conditions`: "The following condition is required to hit this erratum: A write to the ITM_TCR register setting the GTSFREQ bits to a non-zero value. This should cause a single request for a..."
  - `implications`: "This erratum results in wastage of ITM trace bandwidth because of the unnecessary GTS1 packets output, together with the loss of global timestamp information because of the..."
  - `workaround`: "To work around this erratum, a dummy write to the ITM_TCR register should be performed immediately after the GTS feature is enabled. The simplest way to do this is to perform the..."
- `keywords`: ["GTS", "ITM", "global timestamp", "debug", "trace", "Cortex-M7", "FPU", "PPB", "Debug", "408519", "GTS1", "GTS2", "ITM_TCR", "GTSFREQ"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-416915
- `name`: "416915"
- `type`: "erratum_id"
- `title`: "HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 31
- `physical_pages`: [31, 32]
- `printed_pages`: ["31", "32"]
- `section_path`: "Errata descriptions / Category C / 416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `anchors`:
  - `section`: "416915 HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
  - `description`: "Configurable priority faults can escalate to HardFault when they are not high enough priority to preempt the current executing context. In this situation, they should set the..."
  - `configurations`: "This erratum affects all configurations of the processor."
  - `conditions`: "The following conditions are required to hit this erratum. 1. The processor should be executing at HardFault or NMI priority. 2. Any of the following faults are raised: MemManage..."
  - `implications`: "This erratum only affects the value of the HFSR.FORCED bit in an unrecoverable scenario and has no other effects on processor operation. This bit has no internal function in the..."
  - `workaround`: "There is no workaround for this erratum. In general, it is not anticipated that the conditions and sequence described will occur in real code. Please note that this erratum is now..."
- `keywords`: ["HFSR.FORCED", "LOCKUP", "configurable priority faults", "HardFault", "Cortex-M7", "FPU", "Debug", "exception", "416915", "NMI", "FSR", "SW", "ID", "834971"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-421025
- `name`: "421025"
- `type`: "erratum_id"
- `title`: "Early forwarding from load is incorrectly cancelled inside IT block"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 33
- `physical_pages`: [33, 34]
- `printed_pages`: ["33", "34"]
- `section_path`: "Errata descriptions / Category C / 421025 Early forwarding from load is incorrectly cancelled inside IT block"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Early forwarding from load is incorrectly cancelled inside IT block"
- `anchors`:
  - `section`: "421025 Early forwarding from load is incorrectly cancelled inside IT block"
  - `description`: "Because of this erratum, a specific sequence of instructions inside an IT block might cause an incorrect result to be computed in the integer registers."
  - `configurations`: "This erratum affects all configurations of the processor."
  - `conditions`: "The following code sequence is required to hit this erratum: 1. ITTTE with the first three instructions passing their condition code checks. 2. A word-aligned single word load to..."
  - `implications`: "This erratum results in data corruption of the integer registers. Note that this code sequence is not expected to be generated by C compilers because the first load in the code..."
  - `workaround`: "The code sequence must be amended to remove the redundant load operation. Please note that this erratum is now published as ID 421025. The previous ID 833872 is deprecated. This..."
- `keywords`: ["load forwarding", "IT block", "conditional execution", "ARM", "Arm", "Cortex-M7", "FPU", "MPU", "421025", "IT", "ITTTE", "IAR", "EWARM", "ID"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-422825
- `name`: "422825"
- `type`: "erratum_id"
- `title`: "MPU fetch attributes might transiently be incorrect after an exception return"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 35
- `physical_pages`: [35, 36]
- `printed_pages`: ["35", "36"]
- `section_path`: "Errata descriptions / Category C / 422825 MPU fetch attributes might transiently be incorrect after an exception return"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "MPU fetch attributes might transiently be incorrect after an exception return"
- `anchors`:
  - `section`: "422825 MPU fetch attributes might transiently be incorrect after an exception return"
  - `description`: "When the MPU_CTRL.HFNMIENA is clear, the MPU uses the default memory map instead of the programmed regions when executing at HardFault or NMI priority. Because of this erratum..."
  - `configurations`: "This erratum affects all configurations of the processor that include an MPU."
  - `conditions`: "The following conditions are required for this erratum to occur: The MPU is enabled and the MPU_CTRL.HFNMIENA bit is b0. An exception return is executed in a handler at HardFault..."
  - `implications`: "If the affected instructions are on ITCM, then all MPU attributes are ignored except for the xN attribute. If the affected instructions are on AXI, then the attributes on the AXI..."
  - `workaround`: "No workaround is required for this erratum. Please note that this erratum is now published as ID 422825. The previous ID 834923 is deprecated. This is done to work around a..."
- `keywords`: ["MPU", "fetch attributes", "exception return", "transient", "Cortex-M7", "FPU", "MPU_CTRL.HFNMIENA", "AXI", "AHBS", "MBIST", "ITCM", "TCM", "MPU_CTRL", "AHB"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-423541
- `name`: "423541"
- `type`: "erratum_id"
- `title`: "Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 37
- `physical_pages`: [37, 38]
- `printed_pages`: ["37", "38"]
- `section_path`: "Errata descriptions / Category C / 423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `anchors`:
  - `section`: "423541 Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
  - `description`: "A load-single instruction subject to a bus-abort should leave the processor in a state that allows the load to be re-executed on return from the bus-abort handler. Because of this..."
  - `configurations`: "The erratum affects all configurations of the processor that include an FPU."
  - `conditions`: "The following scenario is required to hit this erratum: A data processing VFP instruction is dual-issued with a load-single instruction. The load instruction needs to be..."
  - `implications`: "This erratum might result in data corruption in memory and in the integer register file. Note that loads to Device and Strongly-ordered memory are unlikely to update the stack..."
  - `workaround`: "This erratum is not considered to need a workaround. Code should avoid this scenario. Please note that this erratum is now published as ID 423541. The previous ID 834924 is..."
- `keywords`: ["strongly-ordered", "device load", "stack pointer", "exception stacking", "Cortex-M7", "FPU", "AXI", "TCM", "Write-Back", "AHB", "PPB", "interrupt", "exception", "423541"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-431216
- `name`: "431216"
- `type`: "erratum_id"
- `title`: "Unimplemented bits of BASEPRI do not read-as-zero"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 39
- `physical_pages`: [39, 40]
- `printed_pages`: ["39", "40"]
- `section_path`: "Errata descriptions / Category C / 431216 Unimplemented bits of BASEPRI do not read-as-zero"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Unimplemented bits of BASEPRI do not read-as-zero"
- `anchors`:
  - `section`: "431216 Unimplemented bits of BASEPRI do not read-as-zero"
  - `description`: "The number of implemented bits of BASEPRI is configurable with all unimplemented bits defined as read-as-zero. Because of this erratum, unimplemented bits do not read as zero and..."
  - `configurations`: "This erratum affects all configurations of the processor where the number of supported exception priority bits is less than 8."
  - `conditions`: "The following sequence is required to hit this erratum: 1. A write to BASEPRI or BASEPRI_MAX, either by debugger or MSR instruction. A 1 must be written to any of the..."
  - `implications`: "The read value of BASEPRI and BASEPRI_MAX is incorrect and software using either of these registers to identify how many priority bits are implemented will get the wrong result..."
  - `workaround`: "SW should use another priority register to deduce how many priority bits are implemented and should mask unimplemented bits on BASEPRI and BASEPRI_MAX reads. Please note that this..."
- `keywords`: ["BASEPRI", "unimplemented bits", "read-as-zero", "Cortex-M7", "FPU", "Debug", "exception", "431216", "BASEPRI_MAX", "MSR", "MRS", "SW", "ID", "837069"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-449383
- `name`: "449383"
- `type`: "erratum_id"
- `title`: "Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 41
- `physical_pages`: [41, 42]
- `printed_pages`: ["41", "42"]
- `section_path`: "Errata descriptions / Category C / 449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `anchors`:
  - `section`: "449383 Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
  - `description`: "Single-precision floating-point multiply-accumulates (MACs) require a number of cycles to execute. If during this time, the FPCCR.ASPEN is changed to enable automatic FP state..."
  - `configurations`: "This erratum affects all configurations of the processor that include the floating-point unit (FPU)."
  - `conditions`: "The following sequence is required to hit this erratum: 1. The processor is not currently in automatic FP state-preservation mode and the default and current FP rounding, NaN or..."
  - `implications`: "After this sequence, provided certain timing specific conditions are met, the result of either of the FP instructions might be incorrect."
  - `workaround`: "In general, it is not anticipated that the conditions and sequence described will occur in real code. In the case where a workaround is required, ensuring the FPCCR write is..."
- `keywords`: ["FPCCR.ASPEN", "FP MAC", "FPU", "register bank", "Cortex-M7", "DSB", "ISB", "exception", "449383", "FP", "MAC", "MACs", "CONTROL.FPCA"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-486321
- `name`: "486321"
- `type`: "erratum_id"
- `title`: "Incorrect behavior of profiling counters"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 43
- `physical_pages`: [43, 44]
- `printed_pages`: ["43", "44"]
- `section_path`: "Errata descriptions / Category C / 486321 Incorrect behavior of profiling counters"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1, r0p2 and r1p0. Fixed in r1p1."
- `found_in_versions`: "r0p1, r0p2, r1p0"
- `fixed_in_version`: "r1p1"
- `brief`: "Incorrect behavior of profiling counters"
- `anchors`:
  - `section`: "486321 Incorrect behavior of profiling counters"
  - `description`: "The profiling counters are provided to enable non-intrusive counting of events with limited accuracy. Due to this erratum, some events update the wrong event counter. The..."
  - `configurations`: "This erratum affects all configurations of the processor."
  - `conditions`: "The following conditions are required to hit this erratum: The DEMCR.TRCENA bit is set Any or all of the following bits are set: DWT_CTRL.LSUEVTENA to enable the DWT_LSUCNT..."
  - `implications`: "This erratum results in incorrect values in the profiling counters. It has no other functional impact."
  - `workaround`: "There is no workaround for this erratum. Please note that this erratum is now published as ID 486321. The previous ID 850724 is deprecated. This is done to work around a document..."
- `keywords`: ["profiling counters", "LSUCNT", "FOLDCNT", "CYCCNT", "EXCCNT", "SLEEPCNT", "deprecated ID 850724", "Cortex-M7", "FPU", "DWT", "486321", "DWT_LSUCNT", "DWT_CPICNT", "DWT_EXCCNT"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-505438
- `name`: "505438"
- `type`: "erratum_id"
- `title`: "TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 45
- `physical_pages`: [45, 46]
- `printed_pages`: ["45", "46"]
- `section_path`: "Errata descriptions / Category C / 505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p2 and r1p0. Fixed in r1p1."
- `found_in_versions`: "r0p2, r1p0"
- `fixed_in_version`: "r1p1"
- `brief`: "TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `anchors`:
  - `section`: "505438 TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
  - `description`: "The Cortex-M7 TPIU requires a DSYNC to flush any trace data that does not form a full frame and to allow trace synchronization. A write to the DWT_CYCCNT register in the DWT is..."
  - `configurations`: "This affects configurations with: An ITM present, or an ETM present, or both present, and The Cortex-M7 TPIU."
  - `conditions`: "An affected configuration will always suffer from this erratum when the TPIU is enabled."
  - `implications`: "This erratum can cause loss of the final bytes in a trace session. This applies to a maximum of 14 bytes. Additionally, it leaves an external debugger no way to flush out any..."
  - `workaround`: "The DSYNC signal can be manually triggered, under the same conditions as the disabled method, by causing the processor to leave halted state and then halting the processor a..."
- `keywords`: ["TPIU", "Debug state", "ATB", "flush", "ACTLR.DISITMATBFLUSH", "deprecated ID 850725", "Cortex-M7", "FPU", "AXI", "ETM", "ITM", "DWT", "DWT_CYCCNT", "DSYNC"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-513195
- `name`: "513195"
- `type`: "erratum_id"
- `title`: "Lock Status Indication incorrectly reads as one for debugger reads"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 47
- `physical_pages`: [47, 48]
- `printed_pages`: ["47", "48"]
- `section_path`: "Errata descriptions / Category C / 513195 Lock Status Indication incorrectly reads as one for debugger reads"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in: r0p1, r0p2 and r1p0. Fixed in r1p1."
- `found_in_versions`: "r0p1, r0p2, r1p0"
- `fixed_in_version`: "r1p1"
- `brief`: "Lock Status Indication incorrectly reads as one for debugger reads"
- `anchors`:
  - `section`: "513195 Lock Status Indication incorrectly reads as one for debugger reads"
  - `description`: "The FPB, DWT, and ITM components each implement a CoreSight lock mechanism. This lock is intended to prevent accidental software writes to control registers and is not required..."
  - `configurations`: "This erratum affects all configurations of Cortex-M7."
  - `conditions`: "An external debugger read to any of the following registers will observe this erratum: FPB_LSR DWT_LSR ITM_LSR"
  - `implications`: "An external debugger reading the LSR might be mislead by the incorrect LSR.LSI value and attempt to obtain the lock. If the debugger polls until LSR.SLK reads as one, then the..."
  - `workaround`: "External debuggers should ignore the SLI field of the FPB_LSR, DWT_LSR and ITM_LSR registers. External tools should not attempt to lock or unlock the lock by writing to FPB_LAR..."
- `keywords`: ["Lock Status", "debugger reads", "lock", "debug", "Cortex-M7", "FPU", "ITM", "DWT", "Debug", "513195", "FPB", "LSR.LSI", "RAZ", "LSR.SLK"]
- `quality_flags`: ["has_deprecated_previous_id_alias"]

### ERR-636315
- `name`: "636315"
- `type`: "erratum_id"
- `title`: "Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 49
- `physical_pages`: [49, 50]
- `printed_pages`: ["49", "50"]
- `section_path`: "Errata descriptions / Category C / 636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Cat C"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `anchors`:
  - `section`: "636315 Software programming errors might not be reported for on-line MBIST access to the I-Cache"
  - `description`: "The on-line MBIST interface provides access to the cache and TCM RAMs to allow in-field memory testing during normal operation of the processor. Because of this erratum, errors in..."
  - `configurations`: "This erratum affects configurations of the processor that include I-Cache RAMs."
  - `conditions`: "The following conditions are required to cause this erratum: The software intends to use the software assisted on-line MBIST use case. The I-Cache is not disabled by software..."
  - `implications`: "This erratum could result in an error not being indicated back to the MBIST controller on the MBISTERR[0] output signal when software assisted use case is used and the I-Cache is..."
  - `workaround`: "There is no workaround for this erratum."
- `keywords`: ["MBIST", "I-Cache", "MBISTERR[0]", "online MBIST", "D-Cache", "ITCM", "DTCM", "Cortex-M7", "FPU", "ECC", "TCM", "636315", "RAMs"]
- `quality_flags`: ["open_erratum"]

### ERR-702596
- `name`: "702596"
- `type`: "erratum_id"
- `title`: "Single stepping Cortex-M7 enters pending exception handler"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 51
- `physical_pages`: [51, 52]
- `printed_pages`: ["51", "52"]
- `section_path`: "Errata descriptions / Category C / 702596 Single stepping Cortex-M7 enters pending exception handler"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Cat C"
- `fault_status`: "Present in r0p1. Fixed in r0p2."
- `found_in_versions`: "r0p1"
- `fixed_in_version`: "r0p2"
- `brief`: "Single stepping Cortex-M7 enters pending exception handler"
- `anchors`:
  - `section`: "702596 Single stepping Cortex-M7 enters pending exception handler"
  - `description`: "Setting the DHCSR.C_MASKINTS bit to 1 by the debugger should prevent the interrupts from being taken. This functionality can be used by the debugger to prevent the processor from..."
  - `configurations`: "All configurations are affected."
  - `conditions`: "An enabled interrupt is either pending when the processor enters Debug state, or becomes pending while the processor is in Debug state. This includes PendSV, SysTick and external..."
  - `implications`: "Because of this erratum the debugger will enter the exception handler of a pending interrupt while single stepping through the code regardless of the value of DHCSR.C_MASKINTS..."
  - `workaround`: "There is no complete workaround for this erratum. The debugger can reduce the likelihood of an interrupt being taken when DHCSR.C_MASKINTS is set by: On detecting that the..."
- `keywords`: ["single stepping", "DHCSR.C_MASKINTS", "Debug state", "PendSV", "SysTick", "interrupt", "Cortex-M7", "FPU", "Debug", "exception", "702596", "C_MASKINTS", "DHCSR"]
- `quality_flags`: []

### ERR-1267980
- `name`: "1267980"
- `type`: "erratum_id"
- `title`: "ECC error causes data corruption when the data cache error bank registers are locked"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 53
- `physical_pages`: [53]
- `printed_pages`: ["53"]
- `section_path`: "Errata descriptions / Category C / 1267980 ECC error causes data corruption when the data cache error bank registers are locked"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "ECC error causes data corruption when the data cache error bank registers are locked"
- `anchors`:
  - `section`: "1267980 ECC error causes data corruption when the data cache error bank registers are locked"
  - `description`: "The data cache contains two error bank registers, DEBR0 and DEBR1. These registers store the locations in the cache that Error Correcting Code (ECC) errors affect and prevent..."
  - `configurations`: "All configurations with a data cache and ECC are affected."
  - `conditions`: "DEBR0 and DEBR1 are locked. The wanted address has been allocated to the cache. A cacheable store to the wanted address looks up in the cache, and an ECC error is found in the..."
  - `implications`: "This erratum can cause data corruption in the data cache."
  - `workaround`: "Software must avoid locking both error bank registers."
- `keywords`: ["ECC", "D-cache", "DEBR0", "DEBR1", "error bank registers", "cacheable store", "Cortex-M7", "FPU", "1267980", "DEBR"]
- `quality_flags`: ["open_erratum"]

### ERR-1313001
- `name`: "1313001"
- `type`: "erratum_id"
- `title`: "Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 54
- `physical_pages`: [54, 55]
- `printed_pages`: ["54", "55"]
- `section_path`: "Errata descriptions / Category C / 1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `anchors`:
  - `section`: "1313001 Store after cache invalidate without intervening barrier might cause inconsistent memory view"
  - `description`: "If a cache invalidate operation is followed by a Write-Through store to an address affected by that operation and a linefill to that address occurs, then the linefill might..."
  - `configurations`: "All configurations with a data cache and without Error Correcting Code (ECC) are affected."
  - `conditions`: "The following sequence is required for this erratum to occur: 1. The address of interest is in the cache. 2. One of the following data cache maintenance operations that affects..."
  - `implications`: "A subsequent load to the same address of the store might observe stale data in the cache."
  - `workaround`: "A DMB must be inserted between the cache maintenance operation and the store. It is expected that all code should already have this DMB or DSB because there is no implicit..."
- `keywords`: ["cache invalidate", "DMB", "DSB", "Write-Through", "linefill", "DCCIMVAC", "DCISW", "Cortex-M7", "FPU", "ECC", "DCCISW", "DCIMVAC", "1313001"]
- `quality_flags`: ["open_erratum"]

### ERR-1315869
- `name`: "1315869"
- `type`: "erratum_id"
- `title`: "Data corruption for load following Store-Exclusive"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 56
- `physical_pages`: [56, 57]
- `printed_pages`: ["56", "57"]
- `section_path`: "Errata descriptions / Category C / 1315869 Data corruption for load following Store-Exclusive"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "Data corruption for load following Store-Exclusive"
- `anchors`:
  - `section`: "1315869 Data corruption for load following Store-Exclusive"
  - `description`: "A load that follows a Store-Exclusive to the same address might forward data from an earlier store, situated between the Load-Exclusive and the Store-Exclusive, and not the data..."
  - `configurations`: "All configurations are affected."
  - `conditions`: "The following sequence is required for this erratum to occur: 1. A load exclusive sets the local monitor. 2. A store to the wanted address 3. Any of the following instructions to..."
  - `implications`: "Data corruption occurs when the load returns data from the older store instead of the newer Store- Exclusive. Stores between a Load-Exclusive and Store-Exclusive are not expected..."
  - `workaround`: "No workaround is necessary."
- `keywords`: ["Store-Exclusive", "Load-Exclusive", "STREX", "STREXB", "STREXH", "Shareable memory", "Cortex-M7", "FPU", "1315869"]
- `quality_flags`: ["open_erratum"]

### ERR-1518990
- `name`: "1518990"
- `type`: "erratum_id"
- `title`: "Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 58
- `physical_pages`: [58]
- `printed_pages`: ["58"]
- `section_path`: "Errata descriptions / Category C / 1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open."
- `found_in_versions`: "r0p1, r0p2, r1p0, r1p1, r1p2"
- `fixed_in_version`: "Open"
- `brief`: "Value used for DWT Data Value Comparison is in memory- endianness format, not little- endian"
- `anchors`:
  - `section`: "1518990 Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian"
  - `description`: "The DWT comparators can be configured to match, and generate a trace event, when data is loaded or stored, and the value of the data matches the value programmed into the..."
  - `configurations`: "Only big-endian configurations with a DWT are affected."
  - `conditions`: "A DWT comparator must be: Enabled and either generating a trace packet or triggering a watchpoint (DWTFUNCTIONn.FUNCTIOn is 0b0101, 0b0110, 0b0111, 0b1001, 0b1010 or 0b1011)..."
  - `implications`: "The DWT might not generate a match when it should, or generate a match when it should not. This might result in incorrect data trace, or incorrect watchpoint generation."
  - `workaround`: "In a big-endian system, the value programmed into DWT_COMPn should be in the big-endian format, that is the order of bytes in each chunk should be swapped, with the size of each..."
- `keywords`: ["DWT", "DWT_COMPn", "DWTFUNCTIONn", "big-endian", "little-endian", "watchpoint", "Cortex-M7", "FPU", "1518990", "FUNCTIOn", "DATAVMATCH", "DWT_FUNCTIONn", "DATAVSIZE"]
- `quality_flags`: ["open_erratum"]

### ERR-3092511
- `name`: "3092511"
- `type`: "erratum_id"
- `title`: "Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `category`: "Category C"
- `area`: "Programmer"
- `primary_page`: 59
- `physical_pages`: [59, 60]
- `printed_pages`: ["59", "60"]
- `section_path`: "Errata descriptions / Category C / 3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `affects`: "Cortex-M7, Cortex-M7 with FPU"
- `fault_type`: "Programmer Category C"
- `fault_status`: "Present in r0p1, r0p2, r1p0, r1p1 and r1p2. Open"
- `found_in_versions`: "REL, r0px , r1p0, r1p1"
- `fixed_in_version`: "Open"
- `brief`: "Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `anchors`:
  - `section`: "3092511 Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
  - `description`: "When an asynchronous exception occurs at the same time as a breakpoint event (either hardware breakpoint or software breakpoint), it is possible for the processor to halt at the..."
  - `configurations`: "This erratum affects all configurations of Cortex-M7. When this happens: The BKPT bit in Debug Fault Status Register (DFSR) is set, indicating that a breakpoint event has..."
  - `implications`: "A debugger connected to the Cortex-M7 can detect the processor is halted after a breakpoint is hit, but might not be able to determine which breakpoint has triggered the halting..."
- `keywords`: ["breakpoint", "exception", "BKPT", "DFSR", "halt mode debug", "debugger", "Cortex-M7", "FPU", "Debug", "interrupt", "3092511"]
- `quality_flags`: ["open_erratum"]

## 9. Term / API / Register / Requirement Index

### TERM-INDEX-NOTE
- `type`: "index_note"
- `summary`: "This PDF is an errata notice, not an API reference. No C function declarations or formal SWS/REQ-style requirement IDs were detected. Erratum IDs are indexed as requirement-like navigation IDs, but they are source erratum IDs, not software requirements."
- `quality_flags`: ["NO_API_DECLARATIONS_DETECTED", "NO_FORMAL_REQUIREMENT_IDS_DETECTED"]

### TERM-ERR-ID-1013783
- `name`: "1013783"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 21]
- `brief`: "PLD might perform linefill to address that would generate a MemManage Fault"
- `anchor`: "1013783"
- `aliases`: []

### TERM-ERR-ID-1259864
- `name`: "1259864"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 11]
- `brief`: "Data corruption in a sequence of Write-Through stores and loads"
- `anchor`: "1259864"
- `aliases`: []

### TERM-ERR-ID-1267980
- `name`: "1267980"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 53]
- `brief`: "ECC error causes data corruption when the data cache error bank registers are locked"
- `anchor`: "1267980"
- `aliases`: []

### TERM-ERR-ID-1313001
- `name`: "1313001"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 54]
- `brief`: "Store after cache invalidate without intervening barrier might cause inconsistent memory view"
- `anchor`: "1313001"
- `aliases`: []

### TERM-ERR-ID-1315869
- `name`: "1315869"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 56]
- `brief`: "Data corruption for load following Store-Exclusive"
- `anchor`: "1315869"
- `aliases`: []

### TERM-ERR-ID-1518990
- `name`: "1518990"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 58]
- `brief`: "Value used for DWT Data Value Comparison is in memory- endianness format, not little- endian"
- `anchor`: "1518990"
- `aliases`: []

### TERM-ERR-ID-2328489
- `name`: "2328489"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 23]
- `brief`: "TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states"
- `anchor`: "2328489"
- `aliases`: []

### TERM-ERR-ID-3092511
- `name`: "3092511"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 6, 10, 59]
- `brief`: "Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously"
- `anchor`: "3092511"
- `aliases`: []

### TERM-ERR-ID-399743
- `name`: "399743"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 27, 28]
- `brief`: "The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"
- `anchor`: "399743"
- `aliases`: []

### TERM-ERR-ID-408519
- `name`: "408519"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 29, 30]
- `brief`: "Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"
- `anchor`: "408519"
- `aliases`: []

### TERM-ERR-ID-412512
- `name`: "412512"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 13, 14]
- `brief`: "Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"
- `anchor`: "412512"
- `aliases`: []

### TERM-ERR-ID-416915
- `name`: "416915"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 9, 31, 32]
- `brief`: "HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"
- `anchor`: "416915"
- `aliases`: []

### TERM-ERR-ID-421025
- `name`: "421025"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 9, 33, 34]
- `brief`: "Early forwarding from load is incorrectly cancelled inside IT block"
- `anchor`: "421025"
- `aliases`: []

### TERM-ERR-ID-422825
- `name`: "422825"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 10, 35, 36]
- `brief`: "MPU fetch attributes might transiently be incorrect after an exception return"
- `anchor`: "422825"
- `aliases`: []

### TERM-ERR-ID-423541
- `name`: "423541"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 10, 37, 38]
- `brief`: "Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"
- `anchor`: "423541"
- `aliases`: []

### TERM-ERR-ID-426115
- `name`: "426115"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 15, 16]
- `brief`: "Interrupting a FAULTMASK- setting instruction might cause incorrect MPU instruction attributes"
- `anchor`: "426115"
- `aliases`: []

### TERM-ERR-ID-431216
- `name`: "431216"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 10, 39, 40]
- `brief`: "Unimplemented bits of BASEPRI do not read-as-zero"
- `anchor`: "431216"
- `aliases`: []

### TERM-ERR-ID-440977
- `name`: "440977"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 17, 18]
- `brief`: "Increasing priority using a write to BASEPRI does not take effect immediately"
- `anchor`: "440977"
- `aliases`: []

### TERM-ERR-ID-443753
- `name`: "443753"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 9, 25, 26]
- `brief`: "A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"
- `anchor`: "443753"
- `aliases`: []

### TERM-ERR-ID-449383
- `name`: "449383"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 10, 41, 42]
- `brief`: "Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"
- `anchor`: "449383"
- `aliases`: []

### TERM-ERR-ID-486321
- `name`: "486321"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 10, 43, 44]
- `brief`: "Incorrect behavior of profiling counters"
- `anchor`: "486321"
- `aliases`: []

### TERM-ERR-ID-505438
- `name`: "505438"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 10, 45, 46]
- `brief`: "TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"
- `anchor`: "505438"
- `aliases`: []

### TERM-ERR-ID-513195
- `name`: "513195"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 6, 7, 10, 47, 48]
- `brief`: "Lock Status Indication incorrectly reads as one for debugger reads"
- `anchor`: "513195"
- `aliases`: []

### TERM-ERR-ID-565285
- `name`: "565285"
- `type`: "erratum_id"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 9, 19]
- `brief`: "Core can send AXI transactions that permit reordering when it should not"
- `anchor`: "565285"
- `aliases`: []

### TERM-ERR-ID-636315
- `name`: "636315"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 49]
- `brief`: "Software programming errors might not be reported for on-line MBIST access to the I-Cache"
- `anchor`: "636315"
- `aliases`: []

### TERM-ERR-ID-702596
- `name`: "702596"
- `type`: "erratum_id"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 51]
- `brief`: "Single stepping Cortex-M7 enters pending exception handler"
- `anchor`: "702596"
- `aliases`: []

### TERM-AHBS
- `name`: "AHBS"
- `type`: "interface"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 23, 24, 35]
- `brief`: "Technical symbol or term found in the source PDF: AHBS."
- `anchor`: "AHBS"
- `aliases`: []

### TERM-ARM
- `name`: "ARM"
- `type`: "term"
- `primary_page`: 2
- `physical_pages`: [2, 12, 33, 61, 62, 63]
- `brief`: "Technical symbol or term found in the source PDF: ARM."
- `anchor`: "ARM"
- `aliases`: []

### TERM-AT610
- `name`: "AT610"
- `type`: "product"
- `primary_page`: 2
- `physical_pages`: [2]
- `brief`: "Technical symbol or term found in the source PDF: AT610."
- `anchor`: "AT610"
- `aliases`: []

### TERM-AT611
- `name`: "AT611"
- `type`: "product"
- `primary_page`: 1
- `physical_pages`: [1, 2]
- `brief`: "Technical symbol or term found in the source PDF: AT611."
- `anchor`: "AT611"
- `aliases`: []

### TERM-AXI
- `name`: "AXI"
- `type`: "interface"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 9, 13, 16, 19, 24, 25, 26, 36, 37, 45]
- `brief`: "Technical symbol or term found in the source PDF: AXI."
- `anchor`: "AXI"
- `aliases`: []

### TERM-ARM-P0002
- `name`: "Arm"
- `type`: "term"
- `primary_page`: 2
- `physical_pages`: [2, 12, 33, 61, 62, 63]
- `brief`: "Technical symbol or term found in the source PDF: Arm."
- `anchor`: "Arm"
- `aliases`: []

### REG-BASEPRI
- `name`: "BASEPRI"
- `type`: "register"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 10, 17, 18, 39, 40]
- `brief`: "Base priority register; referenced by errata 440977 and 431216."
- `anchor`: "BASEPRI"
- `aliases`: []

### REGFIELD-BFHFNMIGN
- `name`: "BFHFNMIGN"
- `type`: "register_field"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 27, 28]
- `brief`: "Technical symbol or term found in the source PDF: BFHFNMIGN."
- `anchor`: "BFHFNMIGN"
- `aliases`: []

### INSN-BKPT
- `name`: "BKPT"
- `type`: "instruction"
- `primary_page`: 59
- `physical_pages`: [59]
- `brief`: "Technical symbol or term found in the source PDF: BKPT."
- `anchor`: "BKPT"
- `aliases`: []

### REGFIELD-CM7-CACR-FORCEWT
- `name`: "CM7_CACR.FORCEWT"
- `type`: "register_field"
- `primary_page`: 11
- `physical_pages`: [11]
- `brief`: "Technical symbol or term found in the source PDF: CM7_CACR.FORCEWT."
- `anchor`: "CM7_CACR.FORCEWT"
- `aliases`: []

### REGFIELD-CM7-CACR-SIWT
- `name`: "CM7_CACR.SIWT"
- `type`: "register_field"
- `primary_page`: 11
- `physical_pages`: [11]
- `brief`: "Technical symbol or term found in the source PDF: CM7_CACR.SIWT."
- `anchor`: "CM7_CACR.SIWT"
- `aliases`: []

### CTR-CYCCNT
- `name`: "CYCCNT"
- `type`: "counter"
- `primary_page`: 45
- `physical_pages`: [45]
- `brief`: "Technical symbol or term found in the source PDF: CYCCNT."
- `anchor`: "CYCCNT"
- `aliases`: []

### TERM-CORTEX-M7
- `name`: "Cortex-M7"
- `type`: "term"
- `primary_page`: 2
- `physical_pages`: [2, 3, 4, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 50, 51, 53, 54, 56, 58, 59]
- `brief`: "Technical symbol or term found in the source PDF: Cortex-M7."
- `anchor`: "Cortex-M7"
- `aliases`: []

### TERM-D-CACHE
- `name`: "D-Cache"
- `type`: "cache"
- `primary_page`: 25
- `physical_pages`: [25, 50]
- `brief`: "Technical symbol or term found in the source PDF: D-Cache."
- `anchor`: "D-Cache"
- `aliases`: []

### INSN-DCCIMVAC
- `name`: "DCCIMVAC"
- `type`: "cache_maintenance"
- `primary_page`: 54
- `physical_pages`: [54]
- `brief`: "Technical symbol or term found in the source PDF: DCCIMVAC."
- `anchor`: "DCCIMVAC"
- `aliases`: []

### INSN-DCCISW
- `name`: "DCCISW"
- `type`: "cache_maintenance"
- `primary_page`: 54
- `physical_pages`: [54]
- `brief`: "Technical symbol or term found in the source PDF: DCCISW."
- `anchor`: "DCCISW"
- `aliases`: []

### INSN-DCIMVAC
- `name`: "DCIMVAC"
- `type`: "cache_maintenance"
- `primary_page`: 54
- `physical_pages`: [54]
- `brief`: "Technical symbol or term found in the source PDF: DCIMVAC."
- `anchor`: "DCIMVAC"
- `aliases`: []

### INSN-DCISW
- `name`: "DCISW"
- `type`: "cache_maintenance"
- `primary_page`: 54
- `physical_pages`: [54]
- `brief`: "Technical symbol or term found in the source PDF: DCISW."
- `anchor`: "DCISW"
- `aliases`: []

### REG-DEBR0
- `name`: "DEBR0"
- `type`: "register"
- `primary_page`: 53
- `physical_pages`: [53]
- `brief`: "Technical symbol or term found in the source PDF: DEBR0."
- `anchor`: "DEBR0"
- `aliases`: []

### REG-DEBR1
- `name`: "DEBR1"
- `type`: "register"
- `primary_page`: 53
- `physical_pages`: [53]
- `brief`: "Technical symbol or term found in the source PDF: DEBR1."
- `anchor`: "DEBR1"
- `aliases`: []

### REG-DFSR
- `name`: "DFSR"
- `type`: "register"
- `primary_page`: 59
- `physical_pages`: [59]
- `brief`: "Technical symbol or term found in the source PDF: DFSR."
- `anchor`: "DFSR"
- `aliases`: []

### REGFIELD-DHCSR-C-MASKINTS
- `name`: "DHCSR.C_MASKINTS"
- `type`: "register_field"
- `primary_page`: 51
- `physical_pages`: [51, 52]
- `brief`: "Technical symbol or term found in the source PDF: DHCSR.C_MASKINTS."
- `anchor`: "DHCSR.C_MASKINTS"
- `aliases`: []

### INSN-DMB
- `name`: "DMB"
- `type`: "instruction"
- `primary_page`: 25
- `physical_pages`: [25, 54, 55]
- `brief`: "Technical symbol or term found in the source PDF: DMB."
- `anchor`: "DMB"
- `aliases`: []

### INSN-DSB
- `name`: "DSB"
- `type`: "instruction"
- `primary_page`: 11
- `physical_pages`: [11, 25, 41, 42, 54, 55]
- `brief`: "Technical symbol or term found in the source PDF: DSB."
- `anchor`: "DSB"
- `aliases`: []

### SIG-DSYNC
- `name`: "DSYNC"
- `type`: "signal"
- `primary_page`: 13
- `physical_pages`: [13, 45]
- `brief`: "Technical symbol or term found in the source PDF: DSYNC."
- `anchor`: "DSYNC"
- `aliases`: []

### TERM-DTCM
- `name`: "DTCM"
- `type`: "memory"
- `primary_page`: 50
- `physical_pages`: [50]
- `brief`: "Technical symbol or term found in the source PDF: DTCM."
- `anchor`: "DTCM"
- `aliases`: []

### TERM-DWT
- `name`: "DWT"
- `type`: "module"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 13, 43, 45, 47, 48, 58]
- `brief`: "Data Watchpoint and Trace unit referenced by timestamp, data comparison, profiling, and debug errata."
- `anchor`: "DWT"
- `aliases`: []

### REG-DWTFUNCTIONN
- `name`: "DWTFUNCTIONn"
- `type`: "register"
- `primary_page`: 58
- `physical_pages`: [58]
- `brief`: "Technical symbol or term found in the source PDF: DWTFUNCTIONn."
- `anchor`: "DWTFUNCTIONn"
- `aliases`: []

### REG-DWT-COMPN
- `name`: "DWT_COMPn"
- `type`: "register"
- `primary_page`: 58
- `physical_pages`: [58]
- `brief`: "Technical symbol or term found in the source PDF: DWT_COMPn."
- `anchor`: "DWT_COMPn"
- `aliases`: []

### REG-DWT-CYCCNT
- `name`: "DWT_CYCCNT"
- `type`: "register"
- `primary_page`: 45
- `physical_pages`: [45]
- `brief`: "Technical symbol or term found in the source PDF: DWT_CYCCNT."
- `anchor`: "DWT_CYCCNT"
- `aliases`: []

### TERM-DEBUG-STATE
- `name`: "Debug state"
- `type`: "state"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 45, 51, 52]
- `brief`: "Technical symbol or term found in the source PDF: Debug state."
- `anchor`: "Debug state"
- `aliases`: []

### TERM-ECC
- `name`: "ECC"
- `type`: "safety_feature"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 11, 19, 20, 49, 53, 54]
- `brief`: "Error Correcting Code; referenced by cache and MBIST-related errata."
- `anchor`: "ECC"
- `aliases`: []

### TERM-ETM
- `name`: "ETM"
- `type`: "module"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 13, 45]
- `brief`: "Technical symbol or term found in the source PDF: ETM."
- `anchor`: "ETM"
- `aliases`: []

### CTR-EXCCNT
- `name`: "EXCCNT"
- `type`: "counter"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: EXCCNT."
- `anchor`: "EXCCNT"
- `aliases`: []

### REG-FAR
- `name`: "FAR"
- `type`: "register"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 27, 28]
- `brief`: "Technical symbol or term found in the source PDF: FAR."
- `anchor`: "FAR"
- `aliases`: []

### REG-FAULTMASK
- `name`: "FAULTMASK"
- `type`: "register"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 15, 16, 18, 27]
- `brief`: "Fault masking control; referenced by erratum 426115."
- `anchor`: "FAULTMASK"
- `aliases`: []

### TERM-FP-MAC
- `name`: "FP MAC"
- `type`: "operation"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 10, 41]
- `brief`: "Technical symbol or term found in the source PDF: FP MAC."
- `anchor`: "FP MAC"
- `aliases`: []

### REGFIELD-FPCCR-ASPEN
- `name`: "FPCCR.ASPEN"
- `type`: "register_field"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 10, 41]
- `brief`: "Technical symbol or term found in the source PDF: FPCCR.ASPEN."
- `anchor`: "FPCCR.ASPEN"
- `aliases`: []

### TERM-FPU
- `name`: "FPU"
- `type`: "module"
- `primary_page`: 2
- `physical_pages`: [2, 11, 13, 15, 17, 19, 21, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 54, 56, 58, 59]
- `brief`: "Floating-point unit; referenced by FPCCR.ASPEN and FP MAC errata."
- `anchor`: "FPU"
- `aliases`: []

### TERM-GTS
- `name`: "GTS"
- `type`: "trace_packet"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 29, 30]
- `brief`: "Technical symbol or term found in the source PDF: GTS."
- `anchor`: "GTS"
- `aliases`: []

### REGFIELD-HFSR-FORCED
- `name`: "HFSR.FORCED"
- `type`: "register_field"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 9, 31]
- `brief`: "Technical symbol or term found in the source PDF: HFSR.FORCED."
- `anchor`: "HFSR.FORCED"
- `aliases`: []

### TERM-I-CACHE
- `name`: "I-Cache"
- `type`: "cache"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 49, 50]
- `brief`: "Technical symbol or term found in the source PDF: I-Cache."
- `anchor`: "I-Cache"
- `aliases`: []

### INSN-ISB
- `name`: "ISB"
- `type`: "instruction"
- `primary_page`: 42
- `physical_pages`: [42]
- `brief`: "Technical symbol or term found in the source PDF: ISB."
- `anchor`: "ISB"
- `aliases`: []

### TERM-IT-BLOCK
- `name`: "IT block"
- `type`: "instruction_state"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 33]
- `brief`: "Technical symbol or term found in the source PDF: IT block."
- `anchor`: "IT block"
- `aliases`: []

### TERM-ITCM
- `name`: "ITCM"
- `type`: "memory"
- `primary_page`: 35
- `physical_pages`: [35, 36, 50]
- `brief`: "Technical symbol or term found in the source PDF: ITCM."
- `anchor`: "ITCM"
- `aliases`: []

### TERM-ITM
- `name`: "ITM"
- `type`: "module"
- `primary_page`: 2
- `physical_pages`: [2, 3, 6, 8, 9, 13, 29, 30, 45, 47, 48]
- `brief`: "Technical symbol or term found in the source PDF: ITM."
- `anchor`: "ITM"
- `aliases`: []

### INSN-LDREX
- `name`: "LDREX"
- `type`: "instruction"
- `primary_page`: 25
- `physical_pages`: [25]
- `brief`: "Technical symbol or term found in the source PDF: LDREX."
- `anchor`: "LDREX"
- `aliases`: []

### TERM-LOCKUP
- `name`: "LOCKUP"
- `type`: "state"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 9, 31, 32]
- `brief`: "Technical symbol or term found in the source PDF: LOCKUP."
- `anchor`: "LOCKUP"
- `aliases`: []

### CTR-LSUCNT
- `name`: "LSUCNT"
- `type`: "counter"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: LSUCNT."
- `anchor`: "LSUCNT"
- `aliases`: []

### TERM-LOAD-EXCLUSIVE
- `name`: "Load-Exclusive"
- `type`: "instruction_class"
- `primary_page`: 56
- `physical_pages`: [56]
- `brief`: "Exclusive load sequence paired with Store-Exclusive in erratum 1315869."
- `anchor`: "Load-Exclusive"
- `aliases`: []

### TERM-MBIST
- `name`: "MBIST"
- `type`: "test_feature"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 35, 49, 50]
- `brief`: "Technical symbol or term found in the source PDF: MBIST."
- `anchor`: "MBIST"
- `aliases`: []

### SIG-MBISTERR-0
- `name`: "MBISTERR[0]"
- `type`: "signal"
- `primary_page`: 49
- `physical_pages`: [49, 50]
- `brief`: "Technical symbol or term found in the source PDF: MBISTERR[0]."
- `anchor`: "MBISTERR[0]"
- `aliases`: []

### TERM-MPU
- `name`: "MPU"
- `type`: "module"
- `primary_page`: 3
- `physical_pages`: [3, 6, 8, 9, 10, 11, 12, 15, 20, 21, 22, 25, 26, 28, 33, 35, 36]
- `brief`: "Memory Protection Unit referenced by multiple errata involving memory attributes and exception priority."
- `anchor`: "MPU"
- `aliases`: []

### REGFIELD-MPU-CTRL-HFNMIENA
- `name`: "MPU_CTRL.HFNMIENA"
- `type`: "register_field"
- `primary_page`: 15
- `physical_pages`: [15, 35]
- `brief`: "Technical symbol or term found in the source PDF: MPU_CTRL.HFNMIENA."
- `anchor`: "MPU_CTRL.HFNMIENA"
- `aliases`: []

### TERM-MEMMANAGE-FAULT
- `name`: "MemManage Fault"
- `type`: "fault"
- `primary_page`: 3
- `physical_pages`: [3, 9, 21, 27]
- `brief`: "Technical symbol or term found in the source PDF: MemManage Fault."
- `anchor`: "MemManage Fault"
- `aliases`: []

### INSN-PLD
- `name`: "PLD"
- `type`: "instruction"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 21, 22]
- `brief`: "Technical symbol or term found in the source PDF: PLD."
- `anchor`: "PLD"
- `aliases`: []

### TERM-PPB
- `name`: "PPB"
- `type`: "address_space"
- `primary_page`: 29
- `physical_pages`: [29, 37]
- `brief`: "Technical symbol or term found in the source PDF: PPB."
- `anchor`: "PPB"
- `aliases`: []

### INSN-STREX
- `name`: "STREX"
- `type`: "instruction"
- `primary_page`: 25
- `physical_pages`: [25, 56]
- `brief`: "Technical symbol or term found in the source PDF: STREX."
- `anchor`: "STREX"
- `aliases`: []

### INSN-STREXB
- `name`: "STREXB"
- `type`: "instruction"
- `primary_page`: 56
- `physical_pages`: [56]
- `brief`: "Technical symbol or term found in the source PDF: STREXB."
- `anchor`: "STREXB"
- `aliases`: []

### INSN-STREXH
- `name`: "STREXH"
- `type`: "instruction"
- `primary_page`: 56
- `physical_pages`: [56]
- `brief`: "Technical symbol or term found in the source PDF: STREXH."
- `anchor`: "STREXH"
- `aliases`: []

### TERM-STORE-EXCLUSIVE
- `name`: "Store-Exclusive"
- `type`: "instruction_class"
- `primary_page`: 4
- `physical_pages`: [4, 7, 10, 56]
- `brief`: "Exclusive store sequence involved in erratum 1315869."
- `anchor`: "Store-Exclusive"
- `aliases`: []

### TERM-TCM
- `name`: "TCM"
- `type`: "memory"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 23, 24, 35, 36, 37, 49, 50]
- `brief`: "Technical symbol or term found in the source PDF: TCM."
- `anchor`: "TCM"
- `aliases`: []

### TERM-TPIU
- `name`: "TPIU"
- `type`: "module"
- `primary_page`: 3
- `physical_pages`: [3, 6, 7, 8, 9, 10, 13, 45]
- `brief`: "Trace Port Interface Unit referenced by trace-loss and debug-state flush errata."
- `anchor`: "TPIU"
- `aliases`: []

### TERM-WRITE-BACK
- `name`: "Write-Back"
- `type`: "memory_attribute"
- `primary_page`: 12
- `physical_pages`: [12, 19, 20, 37]
- `brief`: "Technical symbol or term found in the source PDF: Write-Back."
- `anchor`: "Write-Back"
- `aliases`: []

### TERM-WRITE-THROUGH
- `name`: "Write-Through"
- `type`: "memory_attribute"
- `primary_page`: 3
- `physical_pages`: [3, 7, 9, 11, 12, 26, 54]
- `brief`: "Technical symbol or term found in the source PDF: Write-Through."
- `anchor`: "Write-Through"
- `aliases`: []

### TERM-BIG-ENDIAN
- `name`: "big-endian"
- `type`: "endianness"
- `primary_page`: 58
- `physical_pages`: [58]
- `brief`: "Technical symbol or term found in the source PDF: big-endian."
- `anchor`: "big-endian"
- `aliases`: []

### TERM-LITTLE-ENDIAN
- `name`: "little-endian"
- `type`: "endianness"
- `primary_page`: 4
- `physical_pages`: [4, 7, 58]
- `brief`: "Technical symbol or term found in the source PDF: little-endian."
- `anchor`: "little-endian"
- `aliases`: []

### TERM-ACTLR-DISRAMODE
- `name`: "ACTLR.DISRAMODE"
- `type`: "technical_symbol"
- `primary_page`: 20
- `physical_pages`: [20]
- `brief`: "Technical symbol or term found in the source PDF: ACTLR.DISRAMODE."
- `anchor`: "ACTLR.DISRAMODE"
- `aliases`: []

### TERM-BASEPRI-MAX
- `name`: "BASEPRI_MAX"
- `type`: "technical_symbol"
- `primary_page`: 17
- `physical_pages`: [17, 18, 39, 40]
- `brief`: "Technical symbol or term found in the source PDF: BASEPRI_MAX."
- `anchor`: "BASEPRI_MAX"
- `aliases`: []

### TERM-CACR-FORCEWT
- `name`: "CACR.FORCEWT"
- `type`: "technical_symbol"
- `primary_page`: 26
- `physical_pages`: [26]
- `brief`: "Technical symbol or term found in the source PDF: CACR.FORCEWT."
- `anchor`: "CACR.FORCEWT"
- `aliases`: []

### TERM-CCR-BFHFNMIGN
- `name`: "CCR.BFHFNMIGN"
- `type`: "technical_symbol"
- `primary_page`: 27
- `physical_pages`: [27, 28]
- `brief`: "Technical symbol or term found in the source PDF: CCR.BFHFNMIGN."
- `anchor`: "CCR.BFHFNMIGN"
- `aliases`: []

### TERM-CM7-AHBSCR
- `name`: "CM7_AHBSCR"
- `type`: "technical_symbol"
- `primary_page`: 24
- `physical_pages`: [24]
- `brief`: "Technical symbol or term found in the source PDF: CM7_AHBSCR."
- `anchor`: "CM7_AHBSCR"
- `aliases`: []

### TERM-CONTROL-FPCA
- `name`: "CONTROL.FPCA"
- `type`: "technical_symbol"
- `primary_page`: 41
- `physical_pages`: [41]
- `brief`: "Technical symbol or term found in the source PDF: CONTROL.FPCA."
- `anchor`: "CONTROL.FPCA"
- `aliases`: []

### TERM-C-MASKINTS
- `name`: "C_MASKINTS"
- `type`: "technical_symbol"
- `primary_page`: 51
- `physical_pages`: [51]
- `brief`: "Technical symbol or term found in the source PDF: C_MASKINTS."
- `anchor`: "C_MASKINTS"
- `aliases`: []

### TERM-DEMCR-TRCENA
- `name`: "DEMCR.TRCENA"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DEMCR.TRCENA."
- `anchor`: "DEMCR.TRCENA"
- `aliases`: []

### TERM-DWT-CPICNT
- `name`: "DWT_CPICNT"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DWT_CPICNT."
- `anchor`: "DWT_CPICNT"
- `aliases`: []

### TERM-DWT-CTRL-CPICNT
- `name`: "DWT_CTRL.CPICNT"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DWT_CTRL.CPICNT."
- `anchor`: "DWT_CTRL.CPICNT"
- `aliases`: []

### TERM-DWT-CTRL-EXCCNT
- `name`: "DWT_CTRL.EXCCNT"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DWT_CTRL.EXCCNT."
- `anchor`: "DWT_CTRL.EXCCNT"
- `aliases`: []

### TERM-DWT-CTRL-LSUEVTENA
- `name`: "DWT_CTRL.LSUEVTENA"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DWT_CTRL.LSUEVTENA."
- `anchor`: "DWT_CTRL.LSUEVTENA"
- `aliases`: []

### TERM-DWT-EXCCNT
- `name`: "DWT_EXCCNT"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DWT_EXCCNT."
- `anchor`: "DWT_EXCCNT"
- `aliases`: []

### TERM-DWT-LAR
- `name`: "DWT_LAR"
- `type`: "technical_symbol"
- `primary_page`: 48
- `physical_pages`: [48]
- `brief`: "Technical symbol or term found in the source PDF: DWT_LAR."
- `anchor`: "DWT_LAR"
- `aliases`: []

### TERM-DWT-LSR
- `name`: "DWT_LSR"
- `type`: "technical_symbol"
- `primary_page`: 47
- `physical_pages`: [47, 48]
- `brief`: "Technical symbol or term found in the source PDF: DWT_LSR."
- `anchor`: "DWT_LSR"
- `aliases`: []

### TERM-DWT-LSUCNT
- `name`: "DWT_LSUCNT"
- `type`: "technical_symbol"
- `primary_page`: 43
- `physical_pages`: [43]
- `brief`: "Technical symbol or term found in the source PDF: DWT_LSUCNT."
- `anchor`: "DWT_LSUCNT"
- `aliases`: []

### TERM-FPB-LAR
- `name`: "FPB_LAR"
- `type`: "technical_symbol"
- `primary_page`: 48
- `physical_pages`: [48]
- `brief`: "Technical symbol or term found in the source PDF: FPB_LAR."
- `anchor`: "FPB_LAR"
- `aliases`: []

### TERM-FPB-LSR
- `name`: "FPB_LSR"
- `type`: "technical_symbol"
- `primary_page`: 47
- `physical_pages`: [47, 48]
- `brief`: "Technical symbol or term found in the source PDF: FPB_LSR."
- `anchor`: "FPB_LSR"
- `aliases`: []

### TERM-ITM-LAR
- `name`: "ITM_LAR"
- `type`: "technical_symbol"
- `primary_page`: 48
- `physical_pages`: [48]
- `brief`: "Technical symbol or term found in the source PDF: ITM_LAR."
- `anchor`: "ITM_LAR"
- `aliases`: []

### TERM-ITM-LSR
- `name`: "ITM_LSR"
- `type`: "technical_symbol"
- `primary_page`: 47
- `physical_pages`: [47, 48]
- `brief`: "Technical symbol or term found in the source PDF: ITM_LSR."
- `anchor`: "ITM_LSR"
- `aliases`: []

### TERM-ITM-TCR
- `name`: "ITM_TCR"
- `type`: "technical_symbol"
- `primary_page`: 29
- `physical_pages`: [29, 30]
- `brief`: "Technical symbol or term found in the source PDF: ITM_TCR."
- `anchor`: "ITM_TCR"
- `aliases`: []

### TERM-LSR-LSI
- `name`: "LSR.LSI"
- `type`: "technical_symbol"
- `primary_page`: 47
- `physical_pages`: [47]
- `brief`: "Technical symbol or term found in the source PDF: LSR.LSI."
- `anchor`: "LSR.LSI"
- `aliases`: []

### TERM-LSR-SLK
- `name`: "LSR.SLK"
- `type`: "technical_symbol"
- `primary_page`: 47
- `physical_pages`: [47]
- `brief`: "Technical symbol or term found in the source PDF: LSR.SLK."
- `anchor`: "LSR.SLK"
- `aliases`: []

### TERM-MPU-RASR0
- `name`: "MPU_RASR0"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0."
- `anchor`: "MPU_RASR0"
- `aliases`: []

### TERM-MPU-RASR0-AP
- `name`: "MPU_RASR0.AP"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.AP."
- `anchor`: "MPU_RASR0.AP"
- `aliases`: []

### TERM-MPU-RASR0-B
- `name`: "MPU_RASR0.B"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.B."
- `anchor`: "MPU_RASR0.B"
- `aliases`: []

### TERM-MPU-RASR0-C
- `name`: "MPU_RASR0.C"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.C."
- `anchor`: "MPU_RASR0.C"
- `aliases`: []

### TERM-MPU-RASR0-ENABLE
- `name`: "MPU_RASR0.ENABLE"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.ENABLE."
- `anchor`: "MPU_RASR0.ENABLE"
- `aliases`: []

### TERM-MPU-RASR0-SIZE
- `name`: "MPU_RASR0.SIZE"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.SIZE."
- `anchor`: "MPU_RASR0.SIZE"
- `aliases`: []

### TERM-MPU-RASR0-SRD
- `name`: "MPU_RASR0.SRD"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.SRD."
- `anchor`: "MPU_RASR0.SRD"
- `aliases`: []

### TERM-MPU-RASR0-TEX
- `name`: "MPU_RASR0.TEX"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.TEX."
- `anchor`: "MPU_RASR0.TEX"
- `aliases`: []

### TERM-MPU-RASR0-XN
- `name`: "MPU_RASR0.XN"
- `type`: "technical_symbol"
- `primary_page`: 22
- `physical_pages`: [22]
- `brief`: "Technical symbol or term found in the source PDF: MPU_RASR0.XN."
- `anchor`: "MPU_RASR0.XN"
- `aliases`: []

### TERM-SDEN-1068427-11
- `name`: "SDEN_1068427_11"
- `type`: "technical_symbol"
- `primary_page`: 2
- `physical_pages`: [2]
- `brief`: "Technical symbol or term found in the source PDF: SDEN_1068427_11."
- `anchor`: "SDEN_1068427_11"
- `aliases`: []

### TERM-V1-0
- `name`: "V1.0"
- `type`: "technical_symbol"
- `primary_page`: 62
- `physical_pages`: [62]
- `brief`: "Technical symbol or term found in the source PDF: V1.0."
- `anchor`: "V1.0"
- `aliases`: []

### TERM-VSTR-64
- `name`: "VSTR.64"
- `type`: "technical_symbol"
- `primary_page`: 23
- `physical_pages`: [23]
- `brief`: "Technical symbol or term found in the source PDF: VSTR.64."
- `anchor`: "VSTR.64"
- `aliases`: []

## 10. Search Aliases

### ALIAS-CORTEX-M7
- `canonical`: "Cortex-M7"
- `aliases`: ["Arm Cortex-M7", "CM7", "Cortex M7", "Cortex-M7 (AT610)", "Cortex-M7 with FPU (AT611)", "Cortex-M7 内核"]
- `related_ids`: ["TERM-CORTEX-M7"]

### ALIAS-SOFTWARE-DEVELOPER-ERRATA-NOTICE
- `canonical`: "Software Developer Errata Notice"
- `aliases`: ["SDEN", "SDEN-1068427", "Errata Notice", "软件开发者勘误", "Arm errata"]
- `related_ids`: ["TERM-SDEN-1068427"]

### ALIAS-ERRATUM
- `canonical`: "erratum"
- `aliases`: ["errata", "silicon erratum", "勘误", "缺陷说明", "已知问题"]
- `related_ids`: ["TERM-ERRATUM"]

### ALIAS-CATEGORY-A
- `canonical`: "Category A"
- `aliases`: ["critical erratum", "critical no workaround", "A 类严重勘误"]
- `related_ids`: ["TERM-CATEGORY-A"]

### ALIAS-CATEGORY-B
- `canonical`: "Category B"
- `aliases`: ["significant erratum", "acceptable workaround", "B 类勘误"]
- `related_ids`: ["TERM-CATEGORY-B"]

### ALIAS-CATEGORY-C
- `canonical`: "Category C"
- `aliases`: ["minor erratum", "C 类勘误"]
- `related_ids`: ["TERM-CATEGORY-C"]

### ALIAS-WRITE-THROUGH
- `canonical`: "Write-Through"
- `aliases`: ["WT", "write through", "写穿", "写直达"]
- `related_ids`: ["TERM-WRITE-THROUGH"]

### ALIAS-WRITE-BACK
- `canonical`: "Write-Back"
- `aliases`: ["WB", "write back", "写回"]
- `related_ids`: ["TERM-WRITE-BACK"]

### ALIAS-DATA-CACHE
- `canonical`: "data cache"
- `aliases`: ["D-cache", "DCache", "D-Cache", "数据缓存"]
- `related_ids`: ["TERM-D-CACHE"]

### ALIAS-INSTRUCTION-CACHE
- `canonical`: "instruction cache"
- `aliases`: ["I-cache", "ICache", "I-Cache", "指令缓存"]
- `related_ids`: ["TERM-I-CACHE"]

### ALIAS-MPU
- `canonical`: "MPU"
- `aliases`: ["Memory Protection Unit", "内存保护单元", "MPU_CTRL", "MPU_CTRL.HFNMIENA"]
- `related_ids`: ["TERM-MPU"]

### ALIAS-TPIU
- `canonical`: "TPIU"
- `aliases`: ["Trace Port Interface Unit", "trace port", "跟踪端口接口单元"]
- `related_ids`: ["TERM-TPIU"]

### ALIAS-ETM
- `canonical`: "ETM"
- `aliases`: ["Embedded Trace Macrocell", "ETM trace", "嵌入式跟踪宏单元"]
- `related_ids`: ["TERM-ETM"]

### ALIAS-ITM
- `canonical`: "ITM"
- `aliases`: ["Instrumentation Trace Macrocell", "instrumentation trace", "仪器化跟踪宏单元"]
- `related_ids`: ["TERM-ITM"]

### ALIAS-DWT
- `canonical`: "DWT"
- `aliases`: ["Data Watchpoint and Trace", "DWT comparator", "DWT_CYCCNT", "数据观察点与跟踪"]
- `related_ids`: ["TERM-DWT"]

### ALIAS-AXI
- `canonical`: "AXI"
- `aliases`: ["AXIM", "Advanced eXtensible Interface", "AXI transactions", "AXI 总线"]
- `related_ids`: ["TERM-AXI"]

### ALIAS-TCM
- `canonical`: "TCM"
- `aliases`: ["Tightly-Coupled Memory", "ITCM", "DTCM", "紧耦合存储器"]
- `related_ids`: ["TERM-TCM"]

### ALIAS-AHBS
- `canonical`: "AHBS"
- `aliases`: ["AHB slave", "AHB-Lite slave", "AHBS writes", "AHBS 接口"]
- `related_ids`: ["TERM-AHBS"]

### ALIAS-STORE-EXCLUSIVE
- `canonical`: "Store-Exclusive"
- `aliases`: ["STREX", "STREXB", "STREXH", "exclusive store", "独占存储"]
- `related_ids`: ["TERM-STORE-EXCLUSIVE"]

### ALIAS-LOAD-EXCLUSIVE
- `canonical`: "Load-Exclusive"
- `aliases`: ["LDREX", "exclusive load", "独占加载"]
- `related_ids`: ["TERM-LOAD-EXCLUSIVE"]

### ALIAS-BARRIER
- `canonical`: "barrier"
- `aliases`: ["DMB", "DSB", "ISB", "memory barrier", "内存屏障"]
- `related_ids`: ["TERM-BARRIER"]

### ALIAS-FAULTMASK
- `canonical`: "FAULTMASK"
- `aliases`: ["CPS FAULTMASK", "MSR FAULTMASK", "fault mask", "故障屏蔽"]
- `related_ids`: ["TERM-FAULTMASK"]

### ALIAS-BASEPRI
- `canonical`: "BASEPRI"
- `aliases`: ["base priority", "priority mask", "基础优先级"]
- `related_ids`: ["TERM-BASEPRI"]

### ALIAS-BFHFNMIGN
- `canonical`: "BFHFNMIGN"
- `aliases`: ["CCR.BFHFNMIGN", "BusFault handler ignore", "总线故障忽略位"]
- `related_ids`: ["TERM-BFHFNMIGN"]

### ALIAS-FPCCR-ASPEN
- `canonical`: "FPCCR.ASPEN"
- `aliases`: ["ASPEN", "Floating-point Context Control Register", "FPU lazy stacking", "浮点上下文"]
- `related_ids`: ["TERM-FPCCR-ASPEN"]

### ALIAS-MBIST
- `canonical`: "MBIST"
- `aliases`: ["Memory Built-in Self Test", "online MBIST", "存储器内建自测试"]
- `related_ids`: ["TERM-MBIST"]

### ALIAS-ECC
- `canonical`: "ECC"
- `aliases`: ["Error Correcting Code", "error correction", "纠错码"]
- `related_ids`: ["TERM-ECC"]

### ALIAS-BREAKPOINT
- `canonical`: "breakpoint"
- `aliases`: ["BKPT", "hardware breakpoint", "software breakpoint", "断点"]
- `related_ids`: ["TERM-BREAKPOINT"]

### ALIAS-ERR-839170-TO-412512
- `canonical`: "412512"
- `aliases`: ["839170", "previous ID 839170", "deprecated ID 839170"]
- `related_ids`: ["ERR-412512"]

### ALIAS-ERR-834922-TO-426115
- `canonical`: "426115"
- `aliases`: ["834922", "previous ID 834922", "deprecated ID 834922"]
- `related_ids`: ["ERR-426115"]

### ALIAS-ERR-837070-TO-440977
- `canonical`: "440977"
- `aliases`: ["837070", "previous ID 837070", "deprecated ID 837070"]
- `related_ids`: ["ERR-440977"]

### ALIAS-ERR-838169-TO-443753
- `canonical`: "443753"
- `aliases`: ["838169", "previous ID 838169", "deprecated ID 838169"]
- `related_ids`: ["ERR-443753"]

### ALIAS-ERR-830969-TO-399743
- `canonical`: "399743"
- `aliases`: ["830969", "previous ID 830969", "deprecated ID 830969"]
- `related_ids`: ["ERR-399743"]

### ALIAS-ERR-839169-TO-408519
- `canonical`: "408519"
- `aliases`: ["839169", "previous ID 839169", "deprecated ID 839169"]
- `related_ids`: ["ERR-408519"]

### ALIAS-ERR-834971-TO-416915
- `canonical`: "416915"
- `aliases`: ["834971", "previous ID 834971", "deprecated ID 834971"]
- `related_ids`: ["ERR-416915"]

### ALIAS-ERR-833872-TO-421025
- `canonical`: "421025"
- `aliases`: ["833872", "previous ID 833872", "deprecated ID 833872"]
- `related_ids`: ["ERR-421025"]

### ALIAS-ERR-834923-TO-422825
- `canonical`: "422825"
- `aliases`: ["834923", "previous ID 834923", "deprecated ID 834923"]
- `related_ids`: ["ERR-422825"]

### ALIAS-ERR-834924-TO-423541
- `canonical`: "423541"
- `aliases`: ["834924", "previous ID 834924", "deprecated ID 834924"]
- `related_ids`: ["ERR-423541"]

### ALIAS-ERR-837069-TO-431216
- `canonical`: "431216"
- `aliases`: ["837069", "previous ID 837069", "deprecated ID 837069"]
- `related_ids`: ["ERR-431216"]

### ALIAS-ERR-839269-TO-449383
- `canonical`: "449383"
- `aliases`: ["839269", "previous ID 839269", "deprecated ID 839269"]
- `related_ids`: ["ERR-449383"]

### ALIAS-ERR-850724-TO-486321
- `canonical`: "486321"
- `aliases`: ["850724", "previous ID 850724", "deprecated ID 850724"]
- `related_ids`: ["ERR-486321"]

### ALIAS-ERR-850725-TO-505438
- `canonical`: "505438"
- `aliases`: ["850725", "previous ID 850725", "deprecated ID 850725"]
- `related_ids`: ["ERR-505438"]

### ALIAS-ERR-851031-TO-513195
- `canonical`: "513195"
- `aliases`: ["851031", "previous ID 851031", "deprecated ID 851031"]
- `related_ids`: ["ERR-513195"]

### ALIAS-ERR-1259864
- `canonical`: "1259864"
- `aliases`: ["1259864", "Erratum 1259864", "Data corruption in a sequence of Write-Through stores and loads"]
- `related_ids`: ["ERR-1259864"]

### ALIAS-ERR-412512
- `canonical`: "412512"
- `aliases`: ["412512", "Erratum 412512", "Cortex-M7 TPIU might lose trace data in configurations with an ETM but no ITM"]
- `related_ids`: ["ERR-412512"]

### ALIAS-ERR-426115
- `canonical`: "426115"
- `aliases`: ["426115", "Erratum 426115", "Interrupting a FAULTMASK-setting instruction might cause incorrect MPU instruction attributes"]
- `related_ids`: ["ERR-426115"]

### ALIAS-ERR-440977
- `canonical`: "440977"
- `aliases`: ["440977", "Erratum 440977", "Increasing priority using a write to BASEPRI does not take effect immediately"]
- `related_ids`: ["ERR-440977"]

### ALIAS-ERR-565285
- `canonical`: "565285"
- `aliases`: ["565285", "Erratum 565285", "Core can send AXI transactions that permit reordering when it should not", "open erratum 565285"]
- `related_ids`: ["ERR-565285"]

### ALIAS-ERR-1013783
- `canonical`: "1013783"
- `aliases`: ["1013783", "Erratum 1013783", "PLD might perform linefill to address that would generate a MemManage Fault", "open erratum 1013783"]
- `related_ids`: ["ERR-1013783"]

### ALIAS-ERR-2328489
- `canonical`: "2328489"
- `aliases`: ["2328489", "Erratum 2328489", "TCM bandwidth sharing between AHBS writes and software stores might not function correctly when using TCM wait states", "open erratum 2328489"]
- `related_ids`: ["ERR-2328489"]

### ALIAS-ERR-443753
- `canonical`: "443753"
- `aliases`: ["443753", "Erratum 443753", "A sequence of cacheable stores to memory locations that always return bus faults might cause deadlock"]
- `related_ids`: ["ERR-443753"]

### ALIAS-ERR-399743
- `canonical`: "399743"
- `aliases`: ["399743", "Erratum 399743", "The Fault Address Register (FAR) might be corrupted when BFHFNMIGN is set"]
- `related_ids`: ["ERR-399743"]

### ALIAS-ERR-408519
- `canonical`: "408519"
- `aliases`: ["408519", "Erratum 408519", "Incorrect GTS packet generation when global timestamps are enabled during debug using the ITM"]
- `related_ids`: ["ERR-408519"]

### ALIAS-ERR-416915
- `canonical`: "416915"
- `aliases`: ["416915", "Erratum 416915", "HFSR.FORCED bit is not set for configurable priority faults which result in LOCKUP"]
- `related_ids`: ["ERR-416915"]

### ALIAS-ERR-421025
- `canonical`: "421025"
- `aliases`: ["421025", "Erratum 421025", "Early forwarding from load is incorrectly cancelled inside IT block"]
- `related_ids`: ["ERR-421025"]

### ALIAS-ERR-422825
- `canonical`: "422825"
- `aliases`: ["422825", "Erratum 422825", "MPU fetch attributes might transiently be incorrect after an exception return"]
- `related_ids`: ["ERR-422825"]

### ALIAS-ERR-423541
- `canonical`: "423541"
- `aliases`: ["423541", "Erratum 423541", "Interrupts on a bus-aborting strongly-ordered or device load to the stack pointer might cause incorrect exception stacking"]
- `related_ids`: ["ERR-423541"]

### ALIAS-ERR-431216
- `canonical`: "431216"
- `aliases`: ["431216", "Erratum 431216", "Unimplemented bits of BASEPRI do not read-as-zero"]
- `related_ids`: ["ERR-431216"]

### ALIAS-ERR-449383
- `canonical`: "449383"
- `aliases`: ["449383", "Erratum 449383", "Write to FPCCR.ASPEN while a Single-precision FP MAC is completing might corrupt the FP register bank"]
- `related_ids`: ["ERR-449383"]

### ALIAS-ERR-486321
- `canonical`: "486321"
- `aliases`: ["486321", "Erratum 486321", "Incorrect behavior of profiling counters"]
- `related_ids`: ["ERR-486321"]

### ALIAS-ERR-505438
- `canonical`: "505438"
- `aliases`: ["505438", "Erratum 505438", "TPIU cannot be flushed in Debug state if Cortex-M7 TPIU is used"]
- `related_ids`: ["ERR-505438"]

### ALIAS-ERR-513195
- `canonical`: "513195"
- `aliases`: ["513195", "Erratum 513195", "Lock Status Indication incorrectly reads as one for debugger reads"]
- `related_ids`: ["ERR-513195"]

### ALIAS-ERR-636315
- `canonical`: "636315"
- `aliases`: ["636315", "Erratum 636315", "Software programming errors might not be reported for on-line MBIST access to the I-Cache", "open erratum 636315"]
- `related_ids`: ["ERR-636315"]

### ALIAS-ERR-702596
- `canonical`: "702596"
- `aliases`: ["702596", "Erratum 702596", "Single stepping Cortex-M7 enters pending exception handler"]
- `related_ids`: ["ERR-702596"]

### ALIAS-ERR-1267980
- `canonical`: "1267980"
- `aliases`: ["1267980", "Erratum 1267980", "ECC error causes data corruption when the data cache error bank registers are locked", "open erratum 1267980"]
- `related_ids`: ["ERR-1267980"]

### ALIAS-ERR-1313001
- `canonical`: "1313001"
- `aliases`: ["1313001", "Erratum 1313001", "Store after cache invalidate without intervening barrier might cause inconsistent memory view", "open erratum 1313001"]
- `related_ids`: ["ERR-1313001"]

### ALIAS-ERR-1315869
- `canonical`: "1315869"
- `aliases`: ["1315869", "Erratum 1315869", "Data corruption for load following Store-Exclusive", "open erratum 1315869"]
- `related_ids`: ["ERR-1315869"]

### ALIAS-ERR-1518990
- `canonical`: "1518990"
- `aliases`: ["1518990", "Erratum 1518990", "Value used for DWT Data Value Comparison is in memory-endianness format, not little-endian", "open erratum 1518990"]
- `related_ids`: ["ERR-1518990"]

### ALIAS-ERR-3092511
- `canonical`: "3092511"
- `aliases`: ["3092511", "Erratum 3092511", "Cortex-M7 can halt in an incorrect address when breakpoint and exception occurs simultaneously", "open erratum 3092511"]
- `related_ids`: ["ERR-3092511"]

## 9A. Text-Layer Search Supplement

### TEXTSUP-SUMMARY
- `purpose`: "Close keyword lookup gaps between Arm_Cortex-M7_Software_Developer_Errata_Notice.pdf extractable text and this Manifest without copying full PDF prose."
- `source`: `local pypdf text extraction from Arm_Cortex-M7_Software_Developer_Errata_Notice.pdf`
- `source_pdf_sha256`: `c4e31658732e82f79d47c42c008daf937e2aee96f04d378caa9942f0c3c35df5`
- `source_pdf_size_bytes`: `447605`
- `pdf_page_count`: `63`
- `generated_at`: `2026-06-20T11:56:13Z`
- `tokenization_rule`: `ASCII identifiers, alphanumeric technical tokens, hex literals, dotted section/version values, register fields, instruction/API symbols, GUI/menu tokens and numeric unit tokens with length >= 3.`
- `normalization`: `Ligatures, soft hyphen variants, Unicode dash variants and known Private Use Area digit glyphs are normalized before token comparison.`
- `scope`: `Text-layer token supplement only; source PDF remains authoritative for erratum wording, affected configurations, implications, workarounds and status.`
- `unique_missing_terms_added`: `458`
- `technical_missing_terms_added`: `27`
- `pages_with_added_terms`: `63`
- `supplemented_page_term_entries`: `752`
- `post_supplement_text_token_recall`: `1.000`
- `post_supplement_technical_token_recall`: `1.000`
- `usage`: `Search terms here to locate physical pages, then verify exact erratum IDs, affected configurations, conditions, implications and workaround wording in the source PDF.`

### TEXTSUP-PAGE-0001
- `physical_page`: `1`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0002
- `physical_page`: `2`
- `additional_text_terms`:
  - "accepted"
  - "affiliates"
  - "arm.com"
  - "communities"
  - "create"
  - "email"
  - "http://developer.arm.com/documentation/SDEN-1068427"
  - "https://developer.arm.com/documentation-feedback-survey"
  - "https://support.developer.arm.com"
  - "industry"
  - "intellectual"
  - "offensive"
  - "permits"
  - "property"
  - "protected"
  - "recognizes"
  - "reserved"
  - "reviewed"
  - "rights"
  - "strives"
  - "survey"
  - "ticket"
  - "welcomes"

### TEXTSUP-PAGE-0003
- `physical_page`: `3`
- `additional_text_terms`:
  - "affiliates"
  - "ContentsIntroduction"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0004
- `physical_page`: `4`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0005
- `physical_page`: `5`
- `additional_text_terms`:
  - "affiliates"
  - "analysis"
  - "application"
  - "applications"
  - "categorized"
  - "common"
  - "determined"
  - "deviates"
  - "erroneous"
  - "further"
  - "impactful"
  - "implementation"
  - "IntroductionScope"
  - "level"
  - "levels"
  - "limitations"
  - "most"
  - "qualified"
  - "reserved"
  - "rights"
  - "specification"
  - "split"
  - "typical"

### TEXTSUP-PAGE-0006
- `physical_page`: `6`
- `additional_text_terms`:
  - "affiliates"
  - "identifies"
  - "listed"
  - "reserved"
  - "rights"
  - "shown"
  - "unless"

### TEXTSUP-PAGE-0007
- `physical_page`: `7`
- `additional_text_terms`:
  - "affiliates"
  - "March"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0008
- `physical_page`: `8`
- `additional_text_terms`:
  - "affiliates"
  - "April"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0009
- `physical_page`: `9`
- `additional_text_terms`:
  - "affiliates"
  - "associated"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0010
- `physical_page`: `10`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0011
- `physical_page`: `11`
- `additional_text_terms`:
  - "affiliates"
  - "allocates"
  - "anywhere"
  - "cacheline"
  - "double-word"
  - "observed"
  - "reserved"
  - "rights"
  - "shared"
  - "started"

### TEXTSUP-PAGE-0012
- `physical_page`: `12`
- `additional_text_terms`:
  - "affiliates"
  - "gets"
  - "reserved"
  - "rights"
  - "second"

### TEXTSUP-PAGE-0013
- `physical_page`: `13`
- `additional_text_terms`:
  - "affiliates"
  - "completion"
  - "decompression"
  - "entry"
  - "halts"
  - "inactive"
  - "misinterpretation"
  - "periodically"
  - "presented"
  - "preventing"
  - "receive"
  - "reserved"
  - "rights"
  - "thereby"

### TEXTSUP-PAGE-0014
- `physical_page`: `14`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0015
- `physical_page`: `15`
- `additional_text_terms`:
  - "affiliates"
  - "attempted"
  - "attempting"
  - "interrupted"
  - "killed"
  - "lookups"
  - "performs"
  - "recognised"
  - "reserved"
  - "rights"
  - "such"

### TEXTSUP-PAGE-0016
- `physical_page`: `16`
- `additional_text_terms`:
  - "absence"
  - "affiliates"
  - "appropriate"
  - "caches"
  - "caching"
  - "clean"
  - "however"
  - "modifying"
  - "reserved"
  - "rights"
  - "self-"
  - "self-modifying"
  - "still"
  - "violation"

### TEXTSUP-PAGE-0017
- `physical_page`: `17`
- `additional_text_terms`:
  - "Affects:Cortex-M7"
  - "affiliates"
  - "allowing"
  - "boosted"
  - "boosting"
  - "guaranteed"
  - "higher"
  - "interrupted"
  - "lower"
  - "next"
  - "reserved"
  - "rights"
  - "see"
  - "stacked"
  - "takes"
  - "window"

### TEXTSUP-PAGE-0018
- `physical_page`: `18`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0019
- `physical_page`: `19`
- `additional_text_terms`:
  - "affiliates"
  - "asserts"
  - "attempts"
  - "caused"
  - "correctable"
  - "dirty"
  - "dynamic"
  - "entered"
  - "evictions"
  - "fatal"
  - "gets"
  - "reason"
  - "reasons"
  - "reserved"
  - "rights"
  - "second"
  - "storing"
  - "write-after-write"

### TEXTSUP-PAGE-0020
- `physical_page`: `20`
- `additional_text_terms`:
  - "affiliates"
  - "also"
  - "Dynamic"
  - "reserved"
  - "rights"
  - "small"

### TEXTSUP-PAGE-0021
- `physical_page`: `21`
- `additional_text_terms`:
  - "accessed"
  - "affiliates"
  - "branch"
  - "cases"
  - "decodes"
  - "hits"
  - "iii"
  - "level"
  - "literal"
  - "meet"
  - "mispredicted"
  - "permission"
  - "reserved"
  - "rights"
  - "shadow"
  - "speculatively"
  - "such"
  - "theoretically"
  - "unprivileged"

### TEXTSUP-PAGE-0022
- `physical_page`: `22`
- `additional_text_terms`:
  - "accessed"
  - "affiliates"
  - "b000"
  - "b00000000"
  - "b11111"
  - "entire"
  - "itself"
  - "level"
  - "making"
  - "non-cacheable"
  - "permissions"
  - "reserved"
  - "response"
  - "rights"
  - "side-effects"
  - "sub-regions"

### TEXTSUP-PAGE-0023
- `physical_page`: `23`
- `additional_text_terms`:
  - "accepted"
  - "adequate"
  - "affiliates"
  - "ahead"
  - "Also"
  - "closely"
  - "contention"
  - "discarded"
  - "exacerbate"
  - "fairly"
  - "further"
  - "Hence"
  - "ingress"
  - "ongoing"
  - "repeated"
  - "reserved"
  - "rights"
  - "scheme"
  - "stalled"
  - "stalling"
  - "stalls"
  - "still"
  - "stop"
  - "therefore"

### TEXTSUP-PAGE-0024
- `physical_page`: `24`
- `additional_text_terms`:
  - "affiliates"
  - "consecutive"
  - "every"
  - "reserved"
  - "rights"
  - "T/2"
  - "takes"

### TEXTSUP-PAGE-0025
- `physical_page`: `25`
- `additional_text_terms`:
  - "affiliates"
  - "attempts"
  - "drain"
  - "four"
  - "interrupted"
  - "management"
  - "next"
  - "reprogrammed"
  - "reserved"
  - "rights"
  - "such"

### TEXTSUP-PAGE-0026
- `physical_page`: `26`
- `additional_text_terms`:
  - "affiliates"
  - "allowed"
  - "areas"
  - "degradation"
  - "reserved"
  - "rights"
  - "such"

### TEXTSUP-PAGE-0027
- `physical_page`: `27`
- `additional_text_terms`:
  - "affiliates"
  - "cases"
  - "destination"
  - "handlers"
  - "load/store"
  - "reserved"
  - "rights"
  - "second"
  - "Thread"
  - "unprivileged"
  - "UsageFault"

### TEXTSUP-PAGE-0028
- `physical_page`: `28`
- `additional_text_terms`:
  - "affiliates"
  - "allowed"
  - "flow"
  - "however"
  - "load/store"
  - "majority"
  - "potentially"
  - "requests"
  - "reserved"
  - "restricted"
  - "rights"
  - "such"
  - "Therefore"
  - "thread"
  - "unpredictable"
  - "unprivileged"
  - "very"

### TEXTSUP-PAGE-0029
- `physical_page`: `29`
- `additional_text_terms`:
  - "affiliates"
  - "continuously"
  - "enabling"
  - "held"
  - "however"
  - "next"
  - "prevents"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0030
- `physical_page`: `30`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"
  - "twice"

### TEXTSUP-PAGE-0031
- `physical_page`: `31`
- `additional_text_terms`:
  - "affiliates"
  - "also"
  - "apply"
  - "appropriate"
  - "configurable-priority"
  - "Entering"
  - "escalated"
  - "every"
  - "fails"
  - "handles"
  - "original"
  - "reserved"
  - "resulting"
  - "rights"
  - "situations"
  - "thus"

### TEXTSUP-PAGE-0032
- `physical_page`: `32`
- `additional_text_terms`:
  - "affiliates"
  - "difficult"
  - "faulty"
  - "more"
  - "reserved"
  - "rights"
  - "Therefore"
  - "understand"

### TEXTSUP-PAGE-0033
- `physical_page`: `33`
- `additional_text_terms`:
  - "4.9"
  - "5.03"
  - "7.40"
  - "affiliates"
  - "changing"
  - "code-alignment"
  - "completely"
  - "dependency"
  - "destination"
  - "gcc"
  - "operand"
  - "Passes"
  - "q1-update"
  - "reserved"
  - "rights"
  - "second"
  - "therefore"
  - "trunk"
  - "verified"

### TEXTSUP-PAGE-0034
- `physical_page`: `34`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0035
- `physical_page`: `35`
- `additional_text_terms`:
  - "accessing"
  - "affiliates"
  - "Alternatively"
  - "aspects"
  - "executes"
  - "few"
  - "guaranteed"
  - "lookups"
  - "more"
  - "near"
  - "reserved"
  - "rights"
  - "running"
  - "stalled"
  - "therefore"
  - "traffic"
  - "wait-states"

### TEXTSUP-PAGE-0036
- `physical_page`: `36`
- `additional_text_terms`:
  - "affiliates"
  - "caches"
  - "circumvent"
  - "level"
  - "reserved"
  - "rights"
  - "themselves"
  - "therefore"

### TEXTSUP-PAGE-0037
- `physical_page`: `37`
- `additional_text_terms`:
  - "active"
  - "affiliates"
  - "entry"
  - "loading"
  - "made"
  - "recognized"
  - "reserved"
  - "rights"
  - "separate"
  - "such"

### TEXTSUP-PAGE-0038
- `physical_page`: `38`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0039
- `physical_page`: `39`
- `additional_text_terms`:
  - "affiliates"
  - "aspects"
  - "lower"
  - "reserved"
  - "rights"
  - "them"

### TEXTSUP-PAGE-0040
- `physical_page`: `40`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0041
- `physical_page`: `41`
- `additional_text_terms`:
  - "affiliates"
  - "controls"
  - "differs"
  - "eight"
  - "flush-to-zero"
  - "modes"
  - "next"
  - "reserved"
  - "rights"
  - "settings"
  - "VFNMA"
  - "VFNMS"
  - "Within"

### TEXTSUP-PAGE-0042
- `physical_page`: `42`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0043
- `physical_page`: `43`
- `additional_text_terms`:
  - "affiliates"
  - "counted"
  - "double"
  - "entirely"
  - "increment"
  - "incremented"
  - "load-store"
  - "missed"
  - "non-stalled"
  - "reserved"
  - "rights"
  - "spends"
  - "spent"
  - "whilst"

### TEXTSUP-PAGE-0044
- `physical_page`: `44`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0045
- `physical_page`: `45`
- `additional_text_terms`:
  - "affiliates"
  - "buffered"
  - "entry"
  - "model"
  - "reserved"
  - "rights"
  - "second"
  - "standard"
  - "such"

### TEXTSUP-PAGE-0046
- `physical_page`: `46`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0047
- `physical_page`: `47`
- `additional_text_terms`:
  - "affiliates"
  - "assumes"
  - "carries"
  - "livelock"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0048
- `physical_page`: `48`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0049
- `physical_page`: `49`
- `additional_text_terms`:
  - "affiliates"
  - "algorithms"
  - "allocation"
  - "asserted"
  - "attempts"
  - "automatically"
  - "aware"
  - "bursts"
  - "carried"
  - "cases"
  - "clock"
  - "commences"
  - "conjunction"
  - "details"
  - "disables"
  - "gap"
  - "helps"
  - "large"
  - "line-fill"
  - "memories"
  - "more"
  - "performs"
  - "period"
  - "prevents"
  - "production"
  - "reason"
  - "reserved"
  - "rights"
  - "running"
  - "See"
  - "still"
  - "tested"
  - "tests"
  - "transparent"
  - "very"
  - "works"

### TEXTSUP-PAGE-0050
- `physical_page`: `50`
- `additional_text_terms`:
  - "affiliates"
  - "array"
  - "commences"
  - "functions"
  - "memories"
  - "period"
  - "progress"
  - "reason"
  - "reserved"
  - "rights"
  - "running"
  - "selects"
  - "stalling"
  - "unexpectedly"

### TEXTSUP-PAGE-0051
- `physical_page`: `51`
- `additional_text_terms`:
  - "affiliates"
  - "cleared"
  - "entered"
  - "entering"
  - "exits"
  - "invoked"
  - "kept"
  - "masked"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0052
- `physical_page`: `52`
- `additional_text_terms`:
  - "affiliates"
  - "entered"
  - "entering"
  - "leaving"
  - "performs"
  - "previously"
  - "prone"
  - "requests"
  - "reserved"
  - "rights"
  - "rules"
  - "soon"
  - "steps"
  - "Subsequently"
  - "user"
  - "window"

### TEXTSUP-PAGE-0053
- `physical_page`: `53`
- `additional_text_terms`:
  - "affiliates"
  - "allocations"
  - "automatically"
  - "containing"
  - "future"
  - "onto"
  - "prevents"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0054
- `physical_page`: `54`
- `additional_text_terms`:
  - "affiliates"
  - "merged"
  - "occurred"
  - "reason"
  - "reserved"
  - "rights"
  - "Subsequently"
  - "very"

### TEXTSUP-PAGE-0055
- `physical_page`: `55`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0056
- `physical_page`: `56`
- `additional_text_terms`:
  - "affiliates"
  - "implementations"
  - "most"
  - "reserved"
  - "rights"
  - "such"

### TEXTSUP-PAGE-0057
- `physical_page`: `57`
- `additional_text_terms`:
  - "affiliates"
  - "reserved"
  - "rights"

### TEXTSUP-PAGE-0058
- `physical_page`: `58`
- `additional_text_terms`:
  - "affiliates"
  - "DWT_FUNCTIONn.DATAVSIZE"
  - "DWTFUNCTIONn.DATAVMATCH"
  - "given"
  - "halfword"
  - "Performing"
  - "reserved"
  - "rights"
  - "sensitive"

### TEXTSUP-PAGE-0059
- `physical_page`: `59`
- `additional_text_terms`:
  - "affiliates"
  - "authentication"
  - "beginning"
  - "cases"
  - "clears"
  - "followings"
  - "invoked"
  - "occurred"
  - "permitted"
  - "pointed"
  - "reach"
  - "reaches"
  - "reserved"
  - "rights"
  - "see"
  - "servicing"
  - "taking"

### TEXTSUP-PAGE-0060
- `physical_page`: `60`
- `additional_text_terms`:
  - "affiliates"
  - "optionally"
  - "reason"
  - "reserved"
  - "resume"
  - "resumed"
  - "rights"
  - "serviced"
  - "unknown"

### TEXTSUP-PAGE-0061
- `physical_page`: `61`
- `additional_text_terms`:
  - "acceptance"
  - "acknowledge"
  - "adequate"
  - "ADVISED"
  - "affiliates"
  - "agree"
  - "analysis"
  - "applications"
  - "approval"
  - "ARISING"
  - "assure"
  - "avoidance"
  - "CAUSED"
  - "changing"
  - "commercial"
  - "compliance"
  - "complies"
  - "concerning"
  - "conflict"
  - "conjunction"
  - "CONSEQUENTIAL"
  - "contained"
  - "convenience"
  - "copyrights"
  - "create"
  - "customers"
  - "DAMAGES"
  - "design"
  - "determining"
  - "disclosure"
  - "doubt"
  - "duplication"
  - "efforts"
  - "endorsement"
  - "English"
  - "estoppel"
  - "exceed"
  - "expertise"
  - "export"
  - "exported"
  - "EXTENT"
  - "FITNESS"
  - "fully"
  - "further"
  - "governed"
  - "granted"
  - "herein"
  - "HOWEVER"
  - "implementation"
  - "inaccuracies"
  - "INCIDENTAL"
  - "INDIRECT"
  - "indirectly"
  - "informational"
  - "infringes"
  - "intellectual"
  - "items"
  - "languages"
  - "LAW"
  - "laws"
  - "LIABLE"
  - "license"
  - "makes"
  - "merely"
  - "minimize"
  - "more"
  - "NON-INFRINGEMENT"
  - "notwithstanding"
  - "obligations"
  - "others"
  - "partner"
  - "partnership"
  - "party"
  - "patents"
  - "permission"
  - "permitted"
  - "portion"
  - "possess"
  - "POSSIBILITY"
  - "presented"
  - "prevail"
  - "produced"
  - "products"
  - "PROHIBITED"
  - "property"
  - "protected"
  - "PUNITIVE"
  - "PURPOSE"
  - "purposes"
  - "reasonable"
  - "recipient"
  - "regulations"
  - "regulatory"
  - "relationship"
  - "reproduced"
  - "reserved"
  - "responsible"
  - "rights"
  - "safeguards"
  - "SATISFACTORY"
  - "secrets"
  - "security"
  - "services"
  - "shall"
  - "solely"
  - "solutions"
  - "SPECIAL"
  - "specifically"
  - "stated"
  - "such"
  - "technology"
  - "THEORY"
  - "thereof"
  - "third"
  - "translated"
  - "translation"
  - "typographical"
  - "understand"
  - "undertaken"
  - "unless"
  - "upon"
  - "validity"
  - "violation"
  - "within"
  - "Your"

### TEXTSUP-PAGE-0062
- `physical_page`: `62`
- `additional_text_terms`:
  - "9NJ"
  - "affiliates"
  - "and/or"
  - "brands"
  - "Cambridge"
  - "elsewhere"
  - "England"
  - "Fulbourn"
  - "guidelines"
  - "https://www.arm.com/company/policies/trademarks"
  - "mentioned"
  - "names"
  - "owners"
  - "reserved"
  - "respective"
  - "rights"
  - "Road"

### TEXTSUP-PAGE-0063
- `physical_page`: `63`
- `additional_text_terms`:
  - "0x0"
  - "affiliates"
  - "appropriate"
  - "associated"
  - "conventions"
  - "deliverables"
  - "developed"
  - "documents"
  - "Identifies"
  - "indicates"
  - "level"
  - "levels"
  - "made"
  - "major"
  - "prepared"
  - "products"
  - "reserved"
  - "rights"
  - "Services"
  - "understand"

## 11. Quality Warnings

### WARN-0001-OCR-NOT-RUN
- `severity`: "info"
- `category`: "ocr"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63]
- `message`: "OCR was not executed because all pages have an extractable text layer."
- `affected_ids`: []
- `recommended_action`: "Use source PDF rendering for visual confirmation of cover graphics and table layout."

### WARN-0002-PRINTED-PAGE-FOOTER-MISSING
- `severity`: "low"
- `category`: "page_numbering"
- `physical_pages`: [1, 2]
- `message`: "Pages 1-2 do not show an explicit printed \"Page n of 63\" footer; physical_page remains the primary locator."
- `affected_ids`: ["SEG-0001", "SEG-0002"]
- `recommended_action`: "Use physical_page values for all retrieval."

### WARN-0003-NO-FORMAL-FIGURES
- `severity`: "info"
- `category`: "figure_index"
- `physical_pages`: [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63]
- `message`: "No numbered technical figures were detected; only cover raster images were indexed."
- `affected_ids`: ["FIG-NONE-FORMAL"]
- `recommended_action`: "Do not infer missing technical diagrams from this Manifest."

### WARN-0004-GENERATED-TABLE-IDS
- `severity`: "low"
- `category`: "table_index"
- `physical_pages`: [3, 4, 6, 7, 8, 9, 10]
- `message`: "The source PDF does not number its tables; Manifest table IDs are generated internal stable IDs."
- `affected_ids`: ["TBL-0009-0010-ERRATA-SUMMARY"]
- `recommended_action`: "Use captions, bboxes, and physical_pages to verify table location."

### WARN-0005-TABLE-CELL-EXTRACTION-LIMITED
- `severity`: "medium"
- `category`: "table_extraction"
- `physical_pages`: [6, 7, 8, 9, 10]
- `message`: "Tables are indexed for retrieval and layout location, but complete cell-grid reconstruction is not treated as authoritative."
- `affected_ids`: ["TBL-0006-001", "TBL-0009-0010-ERRATA-SUMMARY"]
- `recommended_action`: "Verify exact cells and revision/fixed-version values against the source PDF table."

### WARN-0006-POSSIBLE-LATER-ISSUE-SOURCE-NOTE
- `severity`: "info"
- `category`: "source_freshness"
- `physical_pages`: [2]
- `message`: "The source PDF states that there might be a later issue at the Arm documentation URL. This Manifest indexes only the uploaded PDF hash."
- `affected_ids`: ["SEC-0002-NOTICES"]
- `recommended_action`: "Treat the Manifest as a fingerprinted index for this exact PDF, not as a live status check."

### WARN-0007-DEPRECATED-ERRATA-ID-ALIASES
- `severity`: "info"
- `category`: "erratum_alias"
- `physical_pages`: [14, 16, 18, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48]
- `message`: "The source text notes deprecated previous IDs for selected errata; alias entries map those deprecated IDs to current IDs."
- `affected_ids`: ["ALIAS-ERR-839170-TO-412512", "ALIAS-ERR-834922-TO-426115", "ALIAS-ERR-837070-TO-440977", "ALIAS-ERR-838169-TO-443753", "ALIAS-ERR-830969-TO-399743", "ALIAS-ERR-839169-TO-408519", "ALIAS-ERR-834971-TO-416915", "ALIAS-ERR-833872-TO-421025", "ALIAS-ERR-834923-TO-422825", "ALIAS-ERR-834924-TO-423541", "ALIAS-ERR-837069-TO-431216", "ALIAS-ERR-839269-TO-449383", "ALIAS-ERR-850724-TO-486321", "ALIAS-ERR-850725-TO-505438", "ALIAS-ERR-851031-TO-513195"]
- `recommended_action`: "Use current source IDs as canonical IDs."

### WARN-0008-NO-FORMAL-REQUIREMENT-IDS
- `severity`: "info"
- `category`: "requirements"
- `physical_pages`: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63]
- `message`: "No formal SWS_* or REQ_* requirement IDs were detected. Erratum IDs are not converted into software requirements."
- `affected_ids`: ["TERM-INDEX-NOTE"]
- `recommended_action`: "Do not treat internal section IDs as source requirement IDs."

## 12. Self Check Report

### Page Coverage
- `pdf_page_count`: 63
- `indexed_physical_pages_count`: 63
- `missing_physical_pages`: []
- `duplicated_physical_pages`: []
- `out_of_range_pages`: []
- `coverage_status`: "pass"

### Section Range Integrity
- `section_count`: 45
- `pdf_outline_section_count`: 43
- `invalid_ranges`: []
- `sections_without_pages`: []
- `status`: "pass"

### Source Integrity
- `source_pdf_sha256`: "c4e31658732e82f79d47c42c008daf937e2aee96f04d378caa9942f0c3c35df5"
- `manifest_source_pdf_sha256`: "c4e31658732e82f79d47c42c008daf937e2aee96f04d378caa9942f0c3c35df5"
- `sha256_match`: true
- `status`: "pass"

### Text-Layer Search Supplement
- `status`: "pass"
- `generated_at`: "2026-06-20T11:56:13Z"
- `unique_missing_terms_added`: 458
- `technical_missing_terms_added`: 27
- `pages_with_added_terms`: 63
- `supplemented_page_term_entries`: 752
- `post_supplement_text_token_recall`: "1.000"
- `post_supplement_technical_token_recall`: "1.000"

### Index Integrity
- `stable_id_policy`: "DOC, SEC, SEG, TBL, FIG, ERR, TERM, ALIAS, WARN IDs are deterministic and non-random."
- `duplicate_ids`: []
- `entries_without_physical_page`: ["FIG-NONE-FORMAL sentinel intentionally has no physical_pages because no formal technical figures were detected"]
- `entries_without_anchor`: []
- `invalid_ids`: []
- `status`: "pass_with_notes"

### Table and Figure Integrity
- `tables_indexed_count`: 11
- `figures_indexed_count`: 2
- `tables_without_confidence`: []
- `figures_without_confidence`: []
- `tables_without_caption_or_anchor`: []
- `figures_without_caption_or_anchor`: []
- `status`: "pass_with_warnings"

### Erratum Index Integrity
- `errata_indexed_count`: 26
- `errata_ids_indexed`: ["1259864", "412512", "426115", "440977", "565285", "1013783", "2328489", "443753", "399743", "408519", "416915", "421025", "422825", "423541", "431216", "449383", "486321", "505438", "513195", "636315", "702596", "1267980", "1313001", "1315869", "1518990", "3092511"]
- `open_errata_ids`: ["565285", "1013783", "2328489", "636315", "1267980", "1313001", "1315869", "1518990", "3092511"]
- `deprecated_previous_id_aliases`: ["839170->412512", "834922->426115", "837070->440977", "838169->443753", "830969->399743", "839169->408519", "834971->416915", "833872->421025", "834923->422825", "834924->423541", "837069->431216", "839269->449383", "850724->486321", "850725->505438", "851031->513195"]
- `status`: "pass"

### Overall
- `overall_status`: "pass_with_warnings"
- `primary_risks`: ["table cell-grid extraction not authoritative", "no OCR performed", "source notes possible later issue", "no formal technical figures in body"]
- `recommended_use`: "Search Manifest for erratum ID, category, term, or alias; use physical_page and anchor to verify in the source PDF."
