// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/path_assessment_decider_config.proto

#include "modules/planning/proto/path_assessment_decider_config.pb.h"

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
namespace planning {
class PathAssessmentDeciderConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PathAssessmentDeciderConfig> _instance;
} _PathAssessmentDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace apollo
static void InitDefaultsscc_info_PathAssessmentDeciderConfig_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::planning::_PathAssessmentDeciderConfig_default_instance_;
    new (ptr) ::apollo::planning::PathAssessmentDeciderConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::planning::PathAssessmentDeciderConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PathAssessmentDeciderConfig_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PathAssessmentDeciderConfig_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathAssessmentDeciderConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathAssessmentDeciderConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::apollo::planning::PathAssessmentDeciderConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::planning::_PathAssessmentDeciderConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n;modules/planning/proto/path_assessment"
  "_decider_config.proto\022\017apollo.planning\"\035"
  "\n\033PathAssessmentDeciderConfig"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_sccs[1] = {
  &scc_info_PathAssessmentDeciderConfig_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto = {
  &descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto, "modules/planning/proto/path_assessment_decider_config.proto", 109,
  &descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_once, descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_sccs, descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto, 1, file_level_enum_descriptors_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto, file_level_service_descriptors_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto), true);
namespace apollo {
namespace planning {

// ===================================================================

void PathAssessmentDeciderConfig::InitAsDefaultInstance() {
}
class PathAssessmentDeciderConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<PathAssessmentDeciderConfig>()._has_bits_);
};

PathAssessmentDeciderConfig::PathAssessmentDeciderConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.planning.PathAssessmentDeciderConfig)
}
PathAssessmentDeciderConfig::PathAssessmentDeciderConfig(const PathAssessmentDeciderConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:apollo.planning.PathAssessmentDeciderConfig)
}

void PathAssessmentDeciderConfig::SharedCtor() {
}

PathAssessmentDeciderConfig::~PathAssessmentDeciderConfig() {
  // @@protoc_insertion_point(destructor:apollo.planning.PathAssessmentDeciderConfig)
  SharedDtor();
}

void PathAssessmentDeciderConfig::SharedDtor() {
}

void PathAssessmentDeciderConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PathAssessmentDeciderConfig& PathAssessmentDeciderConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PathAssessmentDeciderConfig_modules_2fplanning_2fproto_2fpath_5fassessment_5fdecider_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void PathAssessmentDeciderConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.planning.PathAssessmentDeciderConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PathAssessmentDeciderConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PathAssessmentDeciderConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.planning.PathAssessmentDeciderConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.planning.PathAssessmentDeciderConfig)
  return target;
}

size_t PathAssessmentDeciderConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.planning.PathAssessmentDeciderConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PathAssessmentDeciderConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.planning.PathAssessmentDeciderConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const PathAssessmentDeciderConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PathAssessmentDeciderConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.planning.PathAssessmentDeciderConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.planning.PathAssessmentDeciderConfig)
    MergeFrom(*source);
  }
}

void PathAssessmentDeciderConfig::MergeFrom(const PathAssessmentDeciderConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.planning.PathAssessmentDeciderConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void PathAssessmentDeciderConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.planning.PathAssessmentDeciderConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PathAssessmentDeciderConfig::CopyFrom(const PathAssessmentDeciderConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.planning.PathAssessmentDeciderConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PathAssessmentDeciderConfig::IsInitialized() const {
  return true;
}

void PathAssessmentDeciderConfig::InternalSwap(PathAssessmentDeciderConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata PathAssessmentDeciderConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace planning
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::planning::PathAssessmentDeciderConfig* Arena::CreateMaybeMessage< ::apollo::planning::PathAssessmentDeciderConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::planning::PathAssessmentDeciderConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>