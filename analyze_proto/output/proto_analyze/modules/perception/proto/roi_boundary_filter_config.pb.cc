// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/roi_boundary_filter_config.proto

#include "modules/perception/proto/roi_boundary_filter_config.pb.h"

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
namespace apollo {
namespace perception {
namespace lidar {
class ROIBoundaryFilterConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ROIBoundaryFilterConfig> _instance;
} _ROIBoundaryFilterConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static void InitDefaultsscc_info_ROIBoundaryFilterConfig_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::perception::lidar::_ROIBoundaryFilterConfig_default_instance_;
    new (ptr) ::apollo::perception::lidar::ROIBoundaryFilterConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::lidar::ROIBoundaryFilterConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ROIBoundaryFilterConfig_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ROIBoundaryFilterConfig_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::ROIBoundaryFilterConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::ROIBoundaryFilterConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::ROIBoundaryFilterConfig, distance_to_boundary_threshold_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::ROIBoundaryFilterConfig, confidence_threshold_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::ROIBoundaryFilterConfig, cross_roi_threshold_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::ROIBoundaryFilterConfig, inside_threshold_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::apollo::perception::lidar::ROIBoundaryFilterConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_ROIBoundaryFilterConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n9modules/perception/proto/roi_boundary_"
  "filter_config.proto\022\027apollo.perception.l"
  "idar\"\246\001\n\027ROIBoundaryFilterConfig\022)\n\036dist"
  "ance_to_boundary_threshold\030\001 \001(\001:\0011\022!\n\024c"
  "onfidence_threshold\030\002 \001(\002:\0030.5\022 \n\023cross_"
  "roi_threshold\030\003 \001(\002:\0030.6\022\033\n\020inside_thres"
  "hold\030\004 \001(\001:\0011"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_sccs[1] = {
  &scc_info_ROIBoundaryFilterConfig_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto = {
  &descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto, "modules/perception/proto/roi_boundary_filter_config.proto", 253,
  &descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_once, descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_sccs, descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto, 1, file_level_enum_descriptors_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto), true);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

void ROIBoundaryFilterConfig::InitAsDefaultInstance() {
}
class ROIBoundaryFilterConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<ROIBoundaryFilterConfig>()._has_bits_);
  static void set_has_distance_to_boundary_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_confidence_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_cross_roi_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_inside_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

ROIBoundaryFilterConfig::ROIBoundaryFilterConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.lidar.ROIBoundaryFilterConfig)
}
ROIBoundaryFilterConfig::ROIBoundaryFilterConfig(const ROIBoundaryFilterConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&distance_to_boundary_threshold_, &from.distance_to_boundary_threshold_,
    static_cast<size_t>(reinterpret_cast<char*>(&inside_threshold_) -
    reinterpret_cast<char*>(&distance_to_boundary_threshold_)) + sizeof(inside_threshold_));
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.ROIBoundaryFilterConfig)
}

void ROIBoundaryFilterConfig::SharedCtor() {
  distance_to_boundary_threshold_ = 1;
  confidence_threshold_ = 0.5f;
  cross_roi_threshold_ = 0.6f;
  inside_threshold_ = 1;
}

ROIBoundaryFilterConfig::~ROIBoundaryFilterConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.ROIBoundaryFilterConfig)
  SharedDtor();
}

void ROIBoundaryFilterConfig::SharedDtor() {
}

void ROIBoundaryFilterConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ROIBoundaryFilterConfig& ROIBoundaryFilterConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ROIBoundaryFilterConfig_modules_2fperception_2fproto_2froi_5fboundary_5ffilter_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void ROIBoundaryFilterConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    distance_to_boundary_threshold_ = 1;
    confidence_threshold_ = 0.5f;
    cross_roi_threshold_ = 0.6f;
    inside_threshold_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ROIBoundaryFilterConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double distance_to_boundary_threshold = 1 [default = 1];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_distance_to_boundary_threshold(&has_bits);
          distance_to_boundary_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional float confidence_threshold = 2 [default = 0.5];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_confidence_threshold(&has_bits);
          confidence_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float cross_roi_threshold = 3 [default = 0.6];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_cross_roi_threshold(&has_bits);
          cross_roi_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional double inside_threshold = 4 [default = 1];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_inside_threshold(&has_bits);
          inside_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ROIBoundaryFilterConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double distance_to_boundary_threshold = 1 [default = 1];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_distance_to_boundary_threshold(), target);
  }

  // optional float confidence_threshold = 2 [default = 0.5];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_confidence_threshold(), target);
  }

  // optional float cross_roi_threshold = 3 [default = 0.6];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_cross_roi_threshold(), target);
  }

  // optional double inside_threshold = 4 [default = 1];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_inside_threshold(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.ROIBoundaryFilterConfig)
  return target;
}

size_t ROIBoundaryFilterConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional double distance_to_boundary_threshold = 1 [default = 1];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional float confidence_threshold = 2 [default = 0.5];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 4;
    }

    // optional float cross_roi_threshold = 3 [default = 0.6];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 4;
    }

    // optional double inside_threshold = 4 [default = 1];
    if (cached_has_bits & 0x00000008u) {
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

void ROIBoundaryFilterConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const ROIBoundaryFilterConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ROIBoundaryFilterConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.ROIBoundaryFilterConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.ROIBoundaryFilterConfig)
    MergeFrom(*source);
  }
}

void ROIBoundaryFilterConfig::MergeFrom(const ROIBoundaryFilterConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      distance_to_boundary_threshold_ = from.distance_to_boundary_threshold_;
    }
    if (cached_has_bits & 0x00000002u) {
      confidence_threshold_ = from.confidence_threshold_;
    }
    if (cached_has_bits & 0x00000004u) {
      cross_roi_threshold_ = from.cross_roi_threshold_;
    }
    if (cached_has_bits & 0x00000008u) {
      inside_threshold_ = from.inside_threshold_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ROIBoundaryFilterConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ROIBoundaryFilterConfig::CopyFrom(const ROIBoundaryFilterConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.ROIBoundaryFilterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ROIBoundaryFilterConfig::IsInitialized() const {
  return true;
}

void ROIBoundaryFilterConfig::InternalSwap(ROIBoundaryFilterConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(distance_to_boundary_threshold_, other->distance_to_boundary_threshold_);
  swap(confidence_threshold_, other->confidence_threshold_);
  swap(cross_roi_threshold_, other->cross_roi_threshold_);
  swap(inside_threshold_, other->inside_threshold_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ROIBoundaryFilterConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::ROIBoundaryFilterConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::ROIBoundaryFilterConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::lidar::ROIBoundaryFilterConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
