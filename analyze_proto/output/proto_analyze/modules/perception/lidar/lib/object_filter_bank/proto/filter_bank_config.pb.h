// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/object_filter_bank/proto/filter_bank_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto;
namespace apollo {
namespace perception {
namespace lidar {
class FilterBankConfig;
class FilterBankConfigDefaultTypeInternal;
extern FilterBankConfigDefaultTypeInternal _FilterBankConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::perception::lidar::FilterBankConfig* Arena::CreateMaybeMessage<::apollo::perception::lidar::FilterBankConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

class FilterBankConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.lidar.FilterBankConfig) */ {
 public:
  FilterBankConfig();
  virtual ~FilterBankConfig();

  FilterBankConfig(const FilterBankConfig& from);
  FilterBankConfig(FilterBankConfig&& from) noexcept
    : FilterBankConfig() {
    *this = ::std::move(from);
  }

  inline FilterBankConfig& operator=(const FilterBankConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline FilterBankConfig& operator=(FilterBankConfig&& from) noexcept {
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
  static const FilterBankConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FilterBankConfig* internal_default_instance() {
    return reinterpret_cast<const FilterBankConfig*>(
               &_FilterBankConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FilterBankConfig& a, FilterBankConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(FilterBankConfig* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FilterBankConfig* New() const final {
    return CreateMaybeMessage<FilterBankConfig>(nullptr);
  }

  FilterBankConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FilterBankConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FilterBankConfig& from);
  void MergeFrom(const FilterBankConfig& from);
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
  void InternalSwap(FilterBankConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.lidar.FilterBankConfig";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto);
    return ::descriptor_table_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFilterNameFieldNumber = 1,
  };
  // repeated string filter_name = 1;
  int filter_name_size() const;
  private:
  int _internal_filter_name_size() const;
  public:
  void clear_filter_name();
  const std::string& filter_name(int index) const;
  std::string* mutable_filter_name(int index);
  void set_filter_name(int index, const std::string& value);
  void set_filter_name(int index, std::string&& value);
  void set_filter_name(int index, const char* value);
  void set_filter_name(int index, const char* value, size_t size);
  std::string* add_filter_name();
  void add_filter_name(const std::string& value);
  void add_filter_name(std::string&& value);
  void add_filter_name(const char* value);
  void add_filter_name(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& filter_name() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_filter_name();
  private:
  const std::string& _internal_filter_name(int index) const;
  std::string* _internal_add_filter_name();
  public:

  // @@protoc_insertion_point(class_scope:apollo.perception.lidar.FilterBankConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> filter_name_;
  friend struct ::TableStruct_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FilterBankConfig

// repeated string filter_name = 1;
inline int FilterBankConfig::_internal_filter_name_size() const {
  return filter_name_.size();
}
inline int FilterBankConfig::filter_name_size() const {
  return _internal_filter_name_size();
}
inline void FilterBankConfig::clear_filter_name() {
  filter_name_.Clear();
}
inline std::string* FilterBankConfig::add_filter_name() {
  // @@protoc_insertion_point(field_add_mutable:apollo.perception.lidar.FilterBankConfig.filter_name)
  return _internal_add_filter_name();
}
inline const std::string& FilterBankConfig::_internal_filter_name(int index) const {
  return filter_name_.Get(index);
}
inline const std::string& FilterBankConfig::filter_name(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.lidar.FilterBankConfig.filter_name)
  return _internal_filter_name(index);
}
inline std::string* FilterBankConfig::mutable_filter_name(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.perception.lidar.FilterBankConfig.filter_name)
  return filter_name_.Mutable(index);
}
inline void FilterBankConfig::set_filter_name(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:apollo.perception.lidar.FilterBankConfig.filter_name)
  filter_name_.Mutable(index)->assign(value);
}
inline void FilterBankConfig::set_filter_name(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:apollo.perception.lidar.FilterBankConfig.filter_name)
  filter_name_.Mutable(index)->assign(std::move(value));
}
inline void FilterBankConfig::set_filter_name(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  filter_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:apollo.perception.lidar.FilterBankConfig.filter_name)
}
inline void FilterBankConfig::set_filter_name(int index, const char* value, size_t size) {
  filter_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.lidar.FilterBankConfig.filter_name)
}
inline std::string* FilterBankConfig::_internal_add_filter_name() {
  return filter_name_.Add();
}
inline void FilterBankConfig::add_filter_name(const std::string& value) {
  filter_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:apollo.perception.lidar.FilterBankConfig.filter_name)
}
inline void FilterBankConfig::add_filter_name(std::string&& value) {
  filter_name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:apollo.perception.lidar.FilterBankConfig.filter_name)
}
inline void FilterBankConfig::add_filter_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  filter_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:apollo.perception.lidar.FilterBankConfig.filter_name)
}
inline void FilterBankConfig::add_filter_name(const char* value, size_t size) {
  filter_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:apollo.perception.lidar.FilterBankConfig.filter_name)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
FilterBankConfig::filter_name() const {
  // @@protoc_insertion_point(field_list:apollo.perception.lidar.FilterBankConfig.filter_name)
  return filter_name_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
FilterBankConfig::mutable_filter_name() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.lidar.FilterBankConfig.filter_name)
  return &filter_name_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace lidar
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2flidar_2flib_2fobject_5ffilter_5fbank_2fproto_2ffilter_5fbank_5fconfig_2eproto
