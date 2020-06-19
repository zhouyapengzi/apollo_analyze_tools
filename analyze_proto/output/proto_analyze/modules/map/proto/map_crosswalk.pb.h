// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/proto/map_crosswalk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "modules/map/proto/map_geometry.pb.h"
#include "modules/map/proto/map_id.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto;
namespace apollo {
namespace hdmap {
class Crosswalk;
class CrosswalkDefaultTypeInternal;
extern CrosswalkDefaultTypeInternal _Crosswalk_default_instance_;
}  // namespace hdmap
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::hdmap::Crosswalk* Arena::CreateMaybeMessage<::apollo::hdmap::Crosswalk>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace hdmap {

// ===================================================================

class Crosswalk :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.Crosswalk) */ {
 public:
  Crosswalk();
  virtual ~Crosswalk();

  Crosswalk(const Crosswalk& from);
  Crosswalk(Crosswalk&& from) noexcept
    : Crosswalk() {
    *this = ::std::move(from);
  }

  inline Crosswalk& operator=(const Crosswalk& from) {
    CopyFrom(from);
    return *this;
  }
  inline Crosswalk& operator=(Crosswalk&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Crosswalk& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Crosswalk* internal_default_instance() {
    return reinterpret_cast<const Crosswalk*>(
               &_Crosswalk_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Crosswalk& a, Crosswalk& b) {
    a.Swap(&b);
  }
  inline void Swap(Crosswalk* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Crosswalk* New() const final {
    return CreateMaybeMessage<Crosswalk>(nullptr);
  }

  Crosswalk* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Crosswalk>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Crosswalk& from);
  void MergeFrom(const Crosswalk& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Crosswalk* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.hdmap.Crosswalk";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto);
    return ::descriptor_table_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOverlapIdFieldNumber = 3,
    kIdFieldNumber = 1,
    kPolygonFieldNumber = 2,
  };
  // repeated .apollo.hdmap.Id overlap_id = 3;
  int overlap_id_size() const;
  private:
  int _internal_overlap_id_size() const;
  public:
  void clear_overlap_id();
  ::apollo::hdmap::Id* mutable_overlap_id(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >*
      mutable_overlap_id();
  private:
  const ::apollo::hdmap::Id& _internal_overlap_id(int index) const;
  ::apollo::hdmap::Id* _internal_add_overlap_id();
  public:
  const ::apollo::hdmap::Id& overlap_id(int index) const;
  ::apollo::hdmap::Id* add_overlap_id();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >&
      overlap_id() const;

  // optional .apollo.hdmap.Id id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  const ::apollo::hdmap::Id& id() const;
  ::apollo::hdmap::Id* release_id();
  ::apollo::hdmap::Id* mutable_id();
  void set_allocated_id(::apollo::hdmap::Id* id);
  private:
  const ::apollo::hdmap::Id& _internal_id() const;
  ::apollo::hdmap::Id* _internal_mutable_id();
  public:

  // optional .apollo.hdmap.Polygon polygon = 2;
  bool has_polygon() const;
  private:
  bool _internal_has_polygon() const;
  public:
  void clear_polygon();
  const ::apollo::hdmap::Polygon& polygon() const;
  ::apollo::hdmap::Polygon* release_polygon();
  ::apollo::hdmap::Polygon* mutable_polygon();
  void set_allocated_polygon(::apollo::hdmap::Polygon* polygon);
  private:
  const ::apollo::hdmap::Polygon& _internal_polygon() const;
  ::apollo::hdmap::Polygon* _internal_mutable_polygon();
  public:

  // @@protoc_insertion_point(class_scope:apollo.hdmap.Crosswalk)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id > overlap_id_;
  ::apollo::hdmap::Id* id_;
  ::apollo::hdmap::Polygon* polygon_;
  friend struct ::TableStruct_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Crosswalk

// optional .apollo.hdmap.Id id = 1;
inline bool Crosswalk::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || id_ != nullptr);
  return value;
}
inline bool Crosswalk::has_id() const {
  return _internal_has_id();
}
inline const ::apollo::hdmap::Id& Crosswalk::_internal_id() const {
  const ::apollo::hdmap::Id* p = id_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::hdmap::Id*>(
      &::apollo::hdmap::_Id_default_instance_);
}
inline const ::apollo::hdmap::Id& Crosswalk::id() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Crosswalk.id)
  return _internal_id();
}
inline ::apollo::hdmap::Id* Crosswalk::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Crosswalk.id)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::hdmap::Id* temp = id_;
  id_ = nullptr;
  return temp;
}
inline ::apollo::hdmap::Id* Crosswalk::_internal_mutable_id() {
  _has_bits_[0] |= 0x00000001u;
  if (id_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::hdmap::Id>(GetArenaNoVirtual());
    id_ = p;
  }
  return id_;
}
inline ::apollo::hdmap::Id* Crosswalk::mutable_id() {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Crosswalk.id)
  return _internal_mutable_id();
}
inline void Crosswalk::set_allocated_id(::apollo::hdmap::Id* id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_);
  }
  if (id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  id_ = id;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Crosswalk.id)
}

// optional .apollo.hdmap.Polygon polygon = 2;
inline bool Crosswalk::_internal_has_polygon() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || polygon_ != nullptr);
  return value;
}
inline bool Crosswalk::has_polygon() const {
  return _internal_has_polygon();
}
inline const ::apollo::hdmap::Polygon& Crosswalk::_internal_polygon() const {
  const ::apollo::hdmap::Polygon* p = polygon_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::hdmap::Polygon*>(
      &::apollo::hdmap::_Polygon_default_instance_);
}
inline const ::apollo::hdmap::Polygon& Crosswalk::polygon() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Crosswalk.polygon)
  return _internal_polygon();
}
inline ::apollo::hdmap::Polygon* Crosswalk::release_polygon() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Crosswalk.polygon)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::hdmap::Polygon* temp = polygon_;
  polygon_ = nullptr;
  return temp;
}
inline ::apollo::hdmap::Polygon* Crosswalk::_internal_mutable_polygon() {
  _has_bits_[0] |= 0x00000002u;
  if (polygon_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::hdmap::Polygon>(GetArenaNoVirtual());
    polygon_ = p;
  }
  return polygon_;
}
inline ::apollo::hdmap::Polygon* Crosswalk::mutable_polygon() {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Crosswalk.polygon)
  return _internal_mutable_polygon();
}
inline void Crosswalk::set_allocated_polygon(::apollo::hdmap::Polygon* polygon) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(polygon_);
  }
  if (polygon) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      polygon = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, polygon, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  polygon_ = polygon;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Crosswalk.polygon)
}

// repeated .apollo.hdmap.Id overlap_id = 3;
inline int Crosswalk::_internal_overlap_id_size() const {
  return overlap_id_.size();
}
inline int Crosswalk::overlap_id_size() const {
  return _internal_overlap_id_size();
}
inline ::apollo::hdmap::Id* Crosswalk::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Crosswalk.overlap_id)
  return overlap_id_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >*
Crosswalk::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.Crosswalk.overlap_id)
  return &overlap_id_;
}
inline const ::apollo::hdmap::Id& Crosswalk::_internal_overlap_id(int index) const {
  return overlap_id_.Get(index);
}
inline const ::apollo::hdmap::Id& Crosswalk::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Crosswalk.overlap_id)
  return _internal_overlap_id(index);
}
inline ::apollo::hdmap::Id* Crosswalk::_internal_add_overlap_id() {
  return overlap_id_.Add();
}
inline ::apollo::hdmap::Id* Crosswalk::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.Crosswalk.overlap_id)
  return _internal_add_overlap_id();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >&
Crosswalk::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.Crosswalk.overlap_id)
  return overlap_id_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fmap_2fproto_2fmap_5fcrosswalk_2eproto
