// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/relative_map/proto/navigator_config.proto

#include "modules/map/relative_map/proto/navigator_config.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto;
namespace apollo {
namespace relative_map {
class SampleParamDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SampleParam> _instance;
} _SampleParam_default_instance_;
class NavigatorConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<NavigatorConfig> _instance;
} _NavigatorConfig_default_instance_;
}  // namespace relative_map
}  // namespace apollo
static void InitDefaultsscc_info_NavigatorConfig_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::relative_map::_NavigatorConfig_default_instance_;
    new (ptr) ::apollo::relative_map::NavigatorConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::relative_map::NavigatorConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_NavigatorConfig_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_NavigatorConfig_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto}, {
      &scc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto.base,}};

static void InitDefaultsscc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::relative_map::_SampleParam_default_instance_;
    new (ptr) ::apollo::relative_map::SampleParam();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::relative_map::SampleParam::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, straight_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, small_kappa_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, middle_kappa_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, large_kappa_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, small_kappa_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, middle_kappa_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, large_kappa_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, enable_navigator_downsample_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, sample_param_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::apollo::relative_map::SampleParam)},
  { 19, 26, sizeof(::apollo::relative_map::NavigatorConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::relative_map::_SampleParam_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::relative_map::_NavigatorConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n5modules/map/relative_map/proto/navigat"
  "or_config.proto\022\023apollo.relative_map\"\203\002\n"
  "\013SampleParam\022#\n\030straight_sample_interval"
  "\030\001 \001(\001:\0013\022&\n\033small_kappa_sample_interval"
  "\030\002 \001(\001:\0011\022)\n\034middle_kappa_sample_interva"
  "l\030\003 \001(\001:\0030.4\022(\n\033large_kappa_sample_inter"
  "val\030\004 \001(\001:\0030.1\022\032\n\013small_kappa\030\005 \001(\001:\0050.0"
  "02\022\033\n\014middle_kappa\030\006 \001(\001:\0050.008\022\031\n\013large"
  "_kappa\030\007 \001(\001:\0040.02\"t\n\017NavigatorConfig\022)\n"
  "\033enable_navigator_downsample\030\001 \001(\010:\004true"
  "\0226\n\014sample_param\030\002 \001(\0132 .apollo.relative"
  "_map.SampleParam"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_sccs[2] = {
  &scc_info_NavigatorConfig_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto.base,
  &scc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = {
  &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto, "modules/map/relative_map/proto/navigator_config.proto", 456,
  &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_once, descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_sccs, descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto, 2, file_level_enum_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto, file_level_service_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto), true);
namespace apollo {
namespace relative_map {

// ===================================================================

void SampleParam::InitAsDefaultInstance() {
}
class SampleParam::_Internal {
 public:
  using HasBits = decltype(std::declval<SampleParam>()._has_bits_);
  static void set_has_straight_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_small_kappa_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_middle_kappa_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_large_kappa_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_small_kappa(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_middle_kappa(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_large_kappa(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

SampleParam::SampleParam()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.relative_map.SampleParam)
}
SampleParam::SampleParam(const SampleParam& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&straight_sample_interval_, &from.straight_sample_interval_,
    static_cast<size_t>(reinterpret_cast<char*>(&large_kappa_) -
    reinterpret_cast<char*>(&straight_sample_interval_)) + sizeof(large_kappa_));
  // @@protoc_insertion_point(copy_constructor:apollo.relative_map.SampleParam)
}

void SampleParam::SharedCtor() {
  straight_sample_interval_ = 3;
  small_kappa_sample_interval_ = 1;
  middle_kappa_sample_interval_ = 0.4;
  large_kappa_sample_interval_ = 0.1;
  small_kappa_ = 0.002;
  middle_kappa_ = 0.008;
  large_kappa_ = 0.02;
}

SampleParam::~SampleParam() {
  // @@protoc_insertion_point(destructor:apollo.relative_map.SampleParam)
  SharedDtor();
}

void SampleParam::SharedDtor() {
}

void SampleParam::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SampleParam& SampleParam::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SampleParam_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void SampleParam::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.relative_map.SampleParam)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    straight_sample_interval_ = 3;
    small_kappa_sample_interval_ = 1;
    middle_kappa_sample_interval_ = 0.4;
    large_kappa_sample_interval_ = 0.1;
    small_kappa_ = 0.002;
    middle_kappa_ = 0.008;
    large_kappa_ = 0.02;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* SampleParam::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double straight_sample_interval = 1 [default = 3];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_straight_sample_interval(&has_bits);
          straight_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double small_kappa_sample_interval = 2 [default = 1];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_small_kappa_sample_interval(&has_bits);
          small_kappa_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double middle_kappa_sample_interval = 3 [default = 0.4];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_middle_kappa_sample_interval(&has_bits);
          middle_kappa_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double large_kappa_sample_interval = 4 [default = 0.1];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_large_kappa_sample_interval(&has_bits);
          large_kappa_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double small_kappa = 5 [default = 0.002];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_small_kappa(&has_bits);
          small_kappa_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double middle_kappa = 6 [default = 0.008];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_middle_kappa(&has_bits);
          middle_kappa_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double large_kappa = 7 [default = 0.02];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          _Internal::set_has_large_kappa(&has_bits);
          large_kappa_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SampleParam::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.relative_map.SampleParam)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double straight_sample_interval = 1 [default = 3];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_straight_sample_interval(), target);
  }

  // optional double small_kappa_sample_interval = 2 [default = 1];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_small_kappa_sample_interval(), target);
  }

  // optional double middle_kappa_sample_interval = 3 [default = 0.4];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_middle_kappa_sample_interval(), target);
  }

  // optional double large_kappa_sample_interval = 4 [default = 0.1];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_large_kappa_sample_interval(), target);
  }

  // optional double small_kappa = 5 [default = 0.002];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_small_kappa(), target);
  }

  // optional double middle_kappa = 6 [default = 0.008];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_middle_kappa(), target);
  }

  // optional double large_kappa = 7 [default = 0.02];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_large_kappa(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.relative_map.SampleParam)
  return target;
}

size_t SampleParam::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.relative_map.SampleParam)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional double straight_sample_interval = 1 [default = 3];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double small_kappa_sample_interval = 2 [default = 1];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double middle_kappa_sample_interval = 3 [default = 0.4];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double large_kappa_sample_interval = 4 [default = 0.1];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double small_kappa = 5 [default = 0.002];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double middle_kappa = 6 [default = 0.008];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional double large_kappa = 7 [default = 0.02];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SampleParam::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.relative_map.SampleParam)
  GOOGLE_DCHECK_NE(&from, this);
  const SampleParam* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SampleParam>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.relative_map.SampleParam)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.relative_map.SampleParam)
    MergeFrom(*source);
  }
}

void SampleParam::MergeFrom(const SampleParam& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.relative_map.SampleParam)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      straight_sample_interval_ = from.straight_sample_interval_;
    }
    if (cached_has_bits & 0x00000002u) {
      small_kappa_sample_interval_ = from.small_kappa_sample_interval_;
    }
    if (cached_has_bits & 0x00000004u) {
      middle_kappa_sample_interval_ = from.middle_kappa_sample_interval_;
    }
    if (cached_has_bits & 0x00000008u) {
      large_kappa_sample_interval_ = from.large_kappa_sample_interval_;
    }
    if (cached_has_bits & 0x00000010u) {
      small_kappa_ = from.small_kappa_;
    }
    if (cached_has_bits & 0x00000020u) {
      middle_kappa_ = from.middle_kappa_;
    }
    if (cached_has_bits & 0x00000040u) {
      large_kappa_ = from.large_kappa_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SampleParam::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.relative_map.SampleParam)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SampleParam::CopyFrom(const SampleParam& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.relative_map.SampleParam)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SampleParam::IsInitialized() const {
  return true;
}

void SampleParam::InternalSwap(SampleParam* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(straight_sample_interval_, other->straight_sample_interval_);
  swap(small_kappa_sample_interval_, other->small_kappa_sample_interval_);
  swap(middle_kappa_sample_interval_, other->middle_kappa_sample_interval_);
  swap(large_kappa_sample_interval_, other->large_kappa_sample_interval_);
  swap(small_kappa_, other->small_kappa_);
  swap(middle_kappa_, other->middle_kappa_);
  swap(large_kappa_, other->large_kappa_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SampleParam::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void NavigatorConfig::InitAsDefaultInstance() {
  ::apollo::relative_map::_NavigatorConfig_default_instance_._instance.get_mutable()->sample_param_ = const_cast< ::apollo::relative_map::SampleParam*>(
      ::apollo::relative_map::SampleParam::internal_default_instance());
}
class NavigatorConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<NavigatorConfig>()._has_bits_);
  static void set_has_enable_navigator_downsample(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::apollo::relative_map::SampleParam& sample_param(const NavigatorConfig* msg);
  static void set_has_sample_param(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::relative_map::SampleParam&
NavigatorConfig::_Internal::sample_param(const NavigatorConfig* msg) {
  return *msg->sample_param_;
}
NavigatorConfig::NavigatorConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.relative_map.NavigatorConfig)
}
NavigatorConfig::NavigatorConfig(const NavigatorConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_sample_param()) {
    sample_param_ = new ::apollo::relative_map::SampleParam(*from.sample_param_);
  } else {
    sample_param_ = nullptr;
  }
  enable_navigator_downsample_ = from.enable_navigator_downsample_;
  // @@protoc_insertion_point(copy_constructor:apollo.relative_map.NavigatorConfig)
}

void NavigatorConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_NavigatorConfig_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto.base);
  sample_param_ = nullptr;
  enable_navigator_downsample_ = true;
}

NavigatorConfig::~NavigatorConfig() {
  // @@protoc_insertion_point(destructor:apollo.relative_map.NavigatorConfig)
  SharedDtor();
}

void NavigatorConfig::SharedDtor() {
  if (this != internal_default_instance()) delete sample_param_;
}

void NavigatorConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const NavigatorConfig& NavigatorConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_NavigatorConfig_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void NavigatorConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.relative_map.NavigatorConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(sample_param_ != nullptr);
      sample_param_->Clear();
    }
    enable_navigator_downsample_ = true;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* NavigatorConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool enable_navigator_downsample = 1 [default = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_enable_navigator_downsample(&has_bits);
          enable_navigator_downsample_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.relative_map.SampleParam sample_param = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_sample_param(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* NavigatorConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.relative_map.NavigatorConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool enable_navigator_downsample = 1 [default = true];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_enable_navigator_downsample(), target);
  }

  // optional .apollo.relative_map.SampleParam sample_param = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::sample_param(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.relative_map.NavigatorConfig)
  return target;
}

size_t NavigatorConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.relative_map.NavigatorConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .apollo.relative_map.SampleParam sample_param = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *sample_param_);
    }

    // optional bool enable_navigator_downsample = 1 [default = true];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavigatorConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.relative_map.NavigatorConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const NavigatorConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NavigatorConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.relative_map.NavigatorConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.relative_map.NavigatorConfig)
    MergeFrom(*source);
  }
}

void NavigatorConfig::MergeFrom(const NavigatorConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.relative_map.NavigatorConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_sample_param()->::apollo::relative_map::SampleParam::MergeFrom(from._internal_sample_param());
    }
    if (cached_has_bits & 0x00000002u) {
      enable_navigator_downsample_ = from.enable_navigator_downsample_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void NavigatorConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.relative_map.NavigatorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavigatorConfig::CopyFrom(const NavigatorConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.relative_map.NavigatorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavigatorConfig::IsInitialized() const {
  return true;
}

void NavigatorConfig::InternalSwap(NavigatorConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(sample_param_, other->sample_param_);
  swap(enable_navigator_downsample_, other->enable_navigator_downsample_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NavigatorConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace relative_map
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::relative_map::SampleParam* Arena::CreateMaybeMessage< ::apollo::relative_map::SampleParam >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::relative_map::SampleParam >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::relative_map::NavigatorConfig* Arena::CreateMaybeMessage< ::apollo::relative_map::NavigatorConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::relative_map::NavigatorConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>