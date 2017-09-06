/*
 *
 * Copyright 2017 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.7-dev at Fri Jan 20 16:14:22 2017. */

#ifndef GRPC_CORE_EXT_CENSUS_GEN_TRACE_CONTEXT_PB_H
#define GRPC_CORE_EXT_CENSUS_GEN_TRACE_CONTEXT_PB_H
#include "third_party/nanopb/pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _google_trace_TraceContext {
    bool has_trace_id_hi;
    uint64_t trace_id_hi;
    bool has_trace_id_lo;
    uint64_t trace_id_lo;
    bool has_span_id;
    uint64_t span_id;
    bool has_span_options;
    uint32_t span_options;
/* @@protoc_insertion_point(struct:google_trace_TraceContext) */
} google_trace_TraceContext;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_trace_TraceContext_init_default   {false, 0, false, 0, false, 0, false, 0}
#define google_trace_TraceContext_init_zero      {false, 0, false, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define google_trace_TraceContext_trace_id_hi_tag 1
#define google_trace_TraceContext_trace_id_lo_tag 2
#define google_trace_TraceContext_span_id_tag    3
#define google_trace_TraceContext_span_options_tag 4

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_trace_TraceContext_fields[5];

/* Maximum encoded size of messages (where known) */
#define google_trace_TraceContext_size           32

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TRACE_CONTEXT_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif /* GRPC_CORE_EXT_CENSUS_GEN_TRACE_CONTEXT_PB_H */
