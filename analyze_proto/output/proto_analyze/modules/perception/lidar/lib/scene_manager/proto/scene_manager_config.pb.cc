// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/scene_manager/proto/scene_manager_config.proto

#include "modules/perception/lidar/lib/scene_manager/proto/scene_manager_config.pb.h"

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
class SceneManagerConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SceneManagerConfig> _instance;
} _SceneManagerConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static void InitDefaultsscc_info_SceneManagerConfig_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::perception::lidar::_SceneManagerConfig_default_instance_;
    new (ptr) ::apollo::perception::lidar::SceneManagerConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::lidar::SceneManagerConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SceneManagerConfig_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SceneManagerConfig_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::SceneManagerConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::SceneManagerConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::SceneManagerConfig, service_name_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::apollo::perception::lidar::SceneManagerConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_SceneManagerConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nKmodules/perception/lidar/lib/scene_man"
  "ager/proto/scene_manager_config.proto\022\027a"
  "pollo.perception.lidar\"*\n\022SceneManagerCo"
  "nfig\022\024\n\014service_name\030\001 \003(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_sccs[1] = {
  &scc_info_SceneManagerConfig_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto = {
  &descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto, "modules/perception/lidar/lib/scene_manager/proto/scene_manager_config.proto", 146,
  &descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_once, descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_sccs, descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto, 1, file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto), true);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

void SceneManagerConfig::InitAsDefaultInstance() {
}
class SceneManagerConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<SceneManagerConfig>()._has_bits_);
};

SceneManagerConfig::SceneManagerConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.lidar.SceneManagerConfig)
}
SceneManagerConfig::SceneManagerConfig(const SceneManagerConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      service_name_(from.service_name_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.SceneManagerConfig)
}

void SceneManagerConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SceneManagerConfig_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto.base);
}

SceneManagerConfig::~SceneManagerConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.SceneManagerConfig)
  SharedDtor();
}

void SceneManagerConfig::SharedDtor() {
}

void SceneManagerConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SceneManagerConfig& SceneManagerConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SceneManagerConfig_modules_2fperception_2flidar_2flib_2fscene_5fmanager_2fproto_2fscene_5fmanager_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void SceneManagerConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.SceneManagerConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  service_name_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* SceneManagerConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string service_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_service_name();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.SceneManagerConfig.service_name");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SceneManagerConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.SceneManagerConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string service_name = 1;
  for (int i = 0, n = this->_internal_service_name_size(); i < n; i++) {
    const auto& s = this->_internal_service_name(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.SceneManagerConfig.service_name");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.SceneManagerConfig)
  return target;
}

size_t SceneManagerConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.SceneManagerConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string service_name = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(service_name_.size());
  for (int i = 0, n = service_name_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      service_name_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SceneManagerConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.SceneManagerConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const SceneManagerConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SceneManagerConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.SceneManagerConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.SceneManagerConfig)
    MergeFrom(*source);
  }
}

void SceneManagerConfig::MergeFrom(const SceneManagerConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.SceneManagerConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  service_name_.MergeFrom(from.service_name_);
}

void SceneManagerConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.SceneManagerConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SceneManagerConfig::CopyFrom(const SceneManagerConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.SceneManagerConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SceneManagerConfig::IsInitialized() const {
  return true;
}

void SceneManagerConfig::InternalSwap(SceneManagerConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  service_name_.InternalSwap(&other->service_name_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SceneManagerConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::SceneManagerConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::SceneManagerConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::lidar::SceneManagerConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
