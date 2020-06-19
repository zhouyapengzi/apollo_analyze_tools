// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/proceed_with_caution_speed_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto;
namespace apollo {
namespace planning {
class ProceedWithCautionSpeedConfig;
class ProceedWithCautionSpeedConfigDefaultTypeInternal;
extern ProceedWithCautionSpeedConfigDefaultTypeInternal _ProceedWithCautionSpeedConfig_default_instance_;
}  // namespace planning
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::planning::ProceedWithCautionSpeedConfig* Arena::CreateMaybeMessage<::apollo::planning::ProceedWithCautionSpeedConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace planning {

// ===================================================================

class ProceedWithCautionSpeedConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.planning.ProceedWithCautionSpeedConfig) */ {
 public:
  ProceedWithCautionSpeedConfig();
  virtual ~ProceedWithCautionSpeedConfig();

  ProceedWithCautionSpeedConfig(const ProceedWithCautionSpeedConfig& from);
  ProceedWithCautionSpeedConfig(ProceedWithCautionSpeedConfig&& from) noexcept
    : ProceedWithCautionSpeedConfig() {
    *this = ::std::move(from);
  }

  inline ProceedWithCautionSpeedConfig& operator=(const ProceedWithCautionSpeedConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProceedWithCautionSpeedConfig& operator=(ProceedWithCautionSpeedConfig&& from) noexcept {
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
  static const ProceedWithCautionSpeedConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProceedWithCautionSpeedConfig* internal_default_instance() {
    return reinterpret_cast<const ProceedWithCautionSpeedConfig*>(
               &_ProceedWithCautionSpeedConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProceedWithCautionSpeedConfig& a, ProceedWithCautionSpeedConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(ProceedWithCautionSpeedConfig* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ProceedWithCautionSpeedConfig* New() const final {
    return CreateMaybeMessage<ProceedWithCautionSpeedConfig>(nullptr);
  }

  ProceedWithCautionSpeedConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProceedWithCautionSpeedConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ProceedWithCautionSpeedConfig& from);
  void MergeFrom(const ProceedWithCautionSpeedConfig& from);
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
  void InternalSwap(ProceedWithCautionSpeedConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.planning.ProceedWithCautionSpeedConfig";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto);
    return ::descriptor_table_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMaxDistanceFieldNumber = 1,
  };
  // optional double max_distance = 1 [default = 5];
  bool has_max_distance() const;
  private:
  bool _internal_has_max_distance() const;
  public:
  void clear_max_distance();
  double max_distance() const;
  void set_max_distance(double value);
  private:
  double _internal_max_distance() const;
  void _internal_set_max_distance(double value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.planning.ProceedWithCautionSpeedConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double max_distance_;
  friend struct ::TableStruct_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProceedWithCautionSpeedConfig

// optional double max_distance = 1 [default = 5];
inline bool ProceedWithCautionSpeedConfig::_internal_has_max_distance() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ProceedWithCautionSpeedConfig::has_max_distance() const {
  return _internal_has_max_distance();
}
inline void ProceedWithCautionSpeedConfig::clear_max_distance() {
  max_distance_ = 5;
  _has_bits_[0] &= ~0x00000001u;
}
inline double ProceedWithCautionSpeedConfig::_internal_max_distance() const {
  return max_distance_;
}
inline double ProceedWithCautionSpeedConfig::max_distance() const {
  // @@protoc_insertion_point(field_get:apollo.planning.ProceedWithCautionSpeedConfig.max_distance)
  return _internal_max_distance();
}
inline void ProceedWithCautionSpeedConfig::_internal_set_max_distance(double value) {
  _has_bits_[0] |= 0x00000001u;
  max_distance_ = value;
}
inline void ProceedWithCautionSpeedConfig::set_max_distance(double value) {
  _internal_set_max_distance(value);
  // @@protoc_insertion_point(field_set:apollo.planning.ProceedWithCautionSpeedConfig.max_distance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fproceed_5fwith_5fcaution_5fspeed_5fconfig_2eproto
