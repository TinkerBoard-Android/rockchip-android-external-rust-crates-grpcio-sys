/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/collection_entry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_CORE_V1_COLLECTION_ENTRY_PROTO_UPB_H_
#define UDPA_CORE_V1_COLLECTION_ENTRY_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_core_v1_CollectionEntry;
struct udpa_core_v1_CollectionEntry_InlineEntry;
typedef struct udpa_core_v1_CollectionEntry udpa_core_v1_CollectionEntry;
typedef struct udpa_core_v1_CollectionEntry_InlineEntry udpa_core_v1_CollectionEntry_InlineEntry;
extern const upb_msglayout udpa_core_v1_CollectionEntry_msginit;
extern const upb_msglayout udpa_core_v1_CollectionEntry_InlineEntry_msginit;
struct google_protobuf_Any;
struct udpa_core_v1_ResourceLocator;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout udpa_core_v1_ResourceLocator_msginit;


/* udpa.core.v1.CollectionEntry */

UPB_INLINE udpa_core_v1_CollectionEntry *udpa_core_v1_CollectionEntry_new(upb_arena *arena) {
  return (udpa_core_v1_CollectionEntry *)_upb_msg_new(&udpa_core_v1_CollectionEntry_msginit, arena);
}
UPB_INLINE udpa_core_v1_CollectionEntry *udpa_core_v1_CollectionEntry_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_core_v1_CollectionEntry *ret = udpa_core_v1_CollectionEntry_new(arena);
  return (ret && upb_decode(buf, size, ret, &udpa_core_v1_CollectionEntry_msginit, arena)) ? ret : NULL;
}
UPB_INLINE udpa_core_v1_CollectionEntry *udpa_core_v1_CollectionEntry_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  udpa_core_v1_CollectionEntry *ret = udpa_core_v1_CollectionEntry_new(arena);
  return (ret && _upb_decode(buf, size, ret, &udpa_core_v1_CollectionEntry_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *udpa_core_v1_CollectionEntry_serialize(const udpa_core_v1_CollectionEntry *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_core_v1_CollectionEntry_msginit, arena, len);
}

typedef enum {
  udpa_core_v1_CollectionEntry_resource_specifier_locator = 1,
  udpa_core_v1_CollectionEntry_resource_specifier_inline_entry = 2,
  udpa_core_v1_CollectionEntry_resource_specifier_NOT_SET = 0
} udpa_core_v1_CollectionEntry_resource_specifier_oneofcases;
UPB_INLINE udpa_core_v1_CollectionEntry_resource_specifier_oneofcases udpa_core_v1_CollectionEntry_resource_specifier_case(const udpa_core_v1_CollectionEntry* msg) { return (udpa_core_v1_CollectionEntry_resource_specifier_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(4, 8), int32_t); }

UPB_INLINE bool udpa_core_v1_CollectionEntry_has_locator(const udpa_core_v1_CollectionEntry *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 1; }
UPB_INLINE const struct udpa_core_v1_ResourceLocator* udpa_core_v1_CollectionEntry_locator(const udpa_core_v1_CollectionEntry *msg) { return UPB_READ_ONEOF(msg, const struct udpa_core_v1_ResourceLocator*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 1, NULL); }
UPB_INLINE bool udpa_core_v1_CollectionEntry_has_inline_entry(const udpa_core_v1_CollectionEntry *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 2; }
UPB_INLINE const udpa_core_v1_CollectionEntry_InlineEntry* udpa_core_v1_CollectionEntry_inline_entry(const udpa_core_v1_CollectionEntry *msg) { return UPB_READ_ONEOF(msg, const udpa_core_v1_CollectionEntry_InlineEntry*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 2, NULL); }

UPB_INLINE void udpa_core_v1_CollectionEntry_set_locator(udpa_core_v1_CollectionEntry *msg, struct udpa_core_v1_ResourceLocator* value) {
  UPB_WRITE_ONEOF(msg, struct udpa_core_v1_ResourceLocator*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 1);
}
UPB_INLINE struct udpa_core_v1_ResourceLocator* udpa_core_v1_CollectionEntry_mutable_locator(udpa_core_v1_CollectionEntry *msg, upb_arena *arena) {
  struct udpa_core_v1_ResourceLocator* sub = (struct udpa_core_v1_ResourceLocator*)udpa_core_v1_CollectionEntry_locator(msg);
  if (sub == NULL) {
    sub = (struct udpa_core_v1_ResourceLocator*)_upb_msg_new(&udpa_core_v1_ResourceLocator_msginit, arena);
    if (!sub) return NULL;
    udpa_core_v1_CollectionEntry_set_locator(msg, sub);
  }
  return sub;
}
UPB_INLINE void udpa_core_v1_CollectionEntry_set_inline_entry(udpa_core_v1_CollectionEntry *msg, udpa_core_v1_CollectionEntry_InlineEntry* value) {
  UPB_WRITE_ONEOF(msg, udpa_core_v1_CollectionEntry_InlineEntry*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 2);
}
UPB_INLINE struct udpa_core_v1_CollectionEntry_InlineEntry* udpa_core_v1_CollectionEntry_mutable_inline_entry(udpa_core_v1_CollectionEntry *msg, upb_arena *arena) {
  struct udpa_core_v1_CollectionEntry_InlineEntry* sub = (struct udpa_core_v1_CollectionEntry_InlineEntry*)udpa_core_v1_CollectionEntry_inline_entry(msg);
  if (sub == NULL) {
    sub = (struct udpa_core_v1_CollectionEntry_InlineEntry*)_upb_msg_new(&udpa_core_v1_CollectionEntry_InlineEntry_msginit, arena);
    if (!sub) return NULL;
    udpa_core_v1_CollectionEntry_set_inline_entry(msg, sub);
  }
  return sub;
}

/* udpa.core.v1.CollectionEntry.InlineEntry */

UPB_INLINE udpa_core_v1_CollectionEntry_InlineEntry *udpa_core_v1_CollectionEntry_InlineEntry_new(upb_arena *arena) {
  return (udpa_core_v1_CollectionEntry_InlineEntry *)_upb_msg_new(&udpa_core_v1_CollectionEntry_InlineEntry_msginit, arena);
}
UPB_INLINE udpa_core_v1_CollectionEntry_InlineEntry *udpa_core_v1_CollectionEntry_InlineEntry_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_core_v1_CollectionEntry_InlineEntry *ret = udpa_core_v1_CollectionEntry_InlineEntry_new(arena);
  return (ret && upb_decode(buf, size, ret, &udpa_core_v1_CollectionEntry_InlineEntry_msginit, arena)) ? ret : NULL;
}
UPB_INLINE udpa_core_v1_CollectionEntry_InlineEntry *udpa_core_v1_CollectionEntry_InlineEntry_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  udpa_core_v1_CollectionEntry_InlineEntry *ret = udpa_core_v1_CollectionEntry_InlineEntry_new(arena);
  return (ret && _upb_decode(buf, size, ret, &udpa_core_v1_CollectionEntry_InlineEntry_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *udpa_core_v1_CollectionEntry_InlineEntry_serialize(const udpa_core_v1_CollectionEntry_InlineEntry *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_core_v1_CollectionEntry_InlineEntry_msginit, arena, len);
}

UPB_INLINE upb_strview udpa_core_v1_CollectionEntry_InlineEntry_name(const udpa_core_v1_CollectionEntry_InlineEntry *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE upb_strview udpa_core_v1_CollectionEntry_InlineEntry_version(const udpa_core_v1_CollectionEntry_InlineEntry *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), upb_strview); }
UPB_INLINE bool udpa_core_v1_CollectionEntry_InlineEntry_has_resource(const udpa_core_v1_CollectionEntry_InlineEntry *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Any* udpa_core_v1_CollectionEntry_InlineEntry_resource(const udpa_core_v1_CollectionEntry_InlineEntry *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(20, 40), const struct google_protobuf_Any*); }

UPB_INLINE void udpa_core_v1_CollectionEntry_InlineEntry_set_name(udpa_core_v1_CollectionEntry_InlineEntry *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void udpa_core_v1_CollectionEntry_InlineEntry_set_version(udpa_core_v1_CollectionEntry_InlineEntry *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), upb_strview) = value;
}
UPB_INLINE void udpa_core_v1_CollectionEntry_InlineEntry_set_resource(udpa_core_v1_CollectionEntry_InlineEntry *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* udpa_core_v1_CollectionEntry_InlineEntry_mutable_resource(udpa_core_v1_CollectionEntry_InlineEntry *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)udpa_core_v1_CollectionEntry_InlineEntry_resource(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    udpa_core_v1_CollectionEntry_InlineEntry_set_resource(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_CORE_V1_COLLECTION_ENTRY_PROTO_UPB_H_ */
