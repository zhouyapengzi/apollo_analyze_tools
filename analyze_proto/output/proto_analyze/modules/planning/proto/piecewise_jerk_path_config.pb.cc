// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/piecewise_jerk_path_config.proto

#include "modules/planning/proto/piecewise_jerk_path_config.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto;
namespace apollo {
namespace planning {
class PiecewiseJerkPathConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PiecewiseJerkPathConfig> _instance;
} _PiecewiseJerkPathConfig_default_instance_;
class PiecewiseJerkPathWeightsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PiecewiseJerkPathWeights> _instance;
} _PiecewiseJerkPathWeights_default_instance_;
}  // namespace planning
}  // namespace apollo
static void InitDefaultsscc_info_PiecewiseJerkPathConfig_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::planning::_PiecewiseJerkPathConfig_default_instance_;
    new (ptr) ::apollo::planning::PiecewiseJerkPathConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::planning::PiecewiseJerkPathConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PiecewiseJerkPathConfig_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PiecewiseJerkPathConfig_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto}, {
      &scc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto.base,}};

static void InitDefaultsscc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::planning::_PiecewiseJerkPathWeights_default_instance_;
    new (ptr) ::apollo::planning::PiecewiseJerkPathWeights();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::planning::PiecewiseJerkPathWeights::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathConfig, default_path_config_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathConfig, lane_change_path_config_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathWeights, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathWeights, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathWeights, l_weight_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathWeights, dl_weight_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathWeights, ddl_weight_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PiecewiseJerkPathWeights, dddl_weight_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::planning::PiecewiseJerkPathConfig)},
  { 9, 18, sizeof(::apollo::planning::PiecewiseJerkPathWeights)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::planning::_PiecewiseJerkPathConfig_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::planning::_PiecewiseJerkPathWeights_default_instance_),
};

const char descriptor_table_protodef_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n7modules/planning/proto/piecewise_jerk_"
  "path_config.proto\022\017apollo.planning\"\255\001\n\027P"
  "iecewiseJerkPathConfig\022F\n\023default_path_c"
  "onfig\030\001 \001(\0132).apollo.planning.PiecewiseJ"
  "erkPathWeights\022J\n\027lane_change_path_confi"
  "g\030\002 \001(\0132).apollo.planning.PiecewiseJerkP"
  "athWeights\"}\n\030PiecewiseJerkPathWeights\022\023"
  "\n\010l_weight\030\001 \001(\001:\0011\022\026\n\tdl_weight\030\002 \001(\001:\003"
  "100\022\030\n\nddl_weight\030\003 \001(\001:\0041000\022\032\n\013dddl_we"
  "ight\030\004 \001(\001:\00510000"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_sccs[2] = {
  &scc_info_PiecewiseJerkPathConfig_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto.base,
  &scc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto = {
  &descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto, "modules/planning/proto/piecewise_jerk_path_config.proto", 377,
  &descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_once, descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_sccs, descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto, 2, file_level_enum_descriptors_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto, file_level_service_descriptors_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto), true);
namespace apollo {
namespace planning {

// ===================================================================

void PiecewiseJerkPathConfig::InitAsDefaultInstance() {
  ::apollo::planning::_PiecewiseJerkPathConfig_default_instance_._instance.get_mutable()->default_path_config_ = const_cast< ::apollo::planning::PiecewiseJerkPathWeights*>(
      ::apollo::planning::PiecewiseJerkPathWeights::internal_default_instance());
  ::apollo::planning::_PiecewiseJerkPathConfig_default_instance_._instance.get_mutable()->lane_change_path_config_ = const_cast< ::apollo::planning::PiecewiseJerkPathWeights*>(
      ::apollo::planning::PiecewiseJerkPathWeights::internal_default_instance());
}
class PiecewiseJerkPathConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<PiecewiseJerkPathConfig>()._has_bits_);
  static const ::apollo::planning::PiecewiseJerkPathWeights& default_path_config(const PiecewiseJerkPathConfig* msg);
  static void set_has_default_path_config(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::apollo::planning::PiecewiseJerkPathWeights& lane_change_path_config(const PiecewiseJerkPathConfig* msg);
  static void set_has_lane_change_path_config(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::apollo::planning::PiecewiseJerkPathWeights&
PiecewiseJerkPathConfig::_Internal::default_path_config(const PiecewiseJerkPathConfig* msg) {
  return *msg->default_path_config_;
}
const ::apollo::planning::PiecewiseJerkPathWeights&
PiecewiseJerkPathConfig::_Internal::lane_change_path_config(const PiecewiseJerkPathConfig* msg) {
  return *msg->lane_change_path_config_;
}
PiecewiseJerkPathConfig::PiecewiseJerkPathConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.planning.PiecewiseJerkPathConfig)
}
PiecewiseJerkPathConfig::PiecewiseJerkPathConfig(const PiecewiseJerkPathConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_default_path_config()) {
    default_path_config_ = new ::apollo::planning::PiecewiseJerkPathWeights(*from.default_path_config_);
  } else {
    default_path_config_ = nullptr;
  }
  if (from._internal_has_lane_change_path_config()) {
    lane_change_path_config_ = new ::apollo::planning::PiecewiseJerkPathWeights(*from.lane_change_path_config_);
  } else {
    lane_change_path_config_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.planning.PiecewiseJerkPathConfig)
}

void PiecewiseJerkPathConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PiecewiseJerkPathConfig_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto.base);
  ::memset(&default_path_config_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lane_change_path_config_) -
      reinterpret_cast<char*>(&default_path_config_)) + sizeof(lane_change_path_config_));
}

PiecewiseJerkPathConfig::~PiecewiseJerkPathConfig() {
  // @@protoc_insertion_point(destructor:apollo.planning.PiecewiseJerkPathConfig)
  SharedDtor();
}

void PiecewiseJerkPathConfig::SharedDtor() {
  if (this != internal_default_instance()) delete default_path_config_;
  if (this != internal_default_instance()) delete lane_change_path_config_;
}

void PiecewiseJerkPathConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PiecewiseJerkPathConfig& PiecewiseJerkPathConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PiecewiseJerkPathConfig_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void PiecewiseJerkPathConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.planning.PiecewiseJerkPathConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(default_path_config_ != nullptr);
      default_path_config_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(lane_change_path_config_ != nullptr);
      lane_change_path_config_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PiecewiseJerkPathConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.planning.PiecewiseJerkPathWeights default_path_config = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_default_path_config(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.planning.PiecewiseJerkPathWeights lane_change_path_config = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_lane_change_path_config(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PiecewiseJerkPathConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.planning.PiecewiseJerkPathConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.planning.PiecewiseJerkPathWeights default_path_config = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::default_path_config(this), target, stream);
  }

  // optional .apollo.planning.PiecewiseJerkPathWeights lane_change_path_config = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::lane_change_path_config(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.planning.PiecewiseJerkPathConfig)
  return target;
}

size_t PiecewiseJerkPathConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.planning.PiecewiseJerkPathConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .apollo.planning.PiecewiseJerkPathWeights default_path_config = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *default_path_config_);
    }

    // optional .apollo.planning.PiecewiseJerkPathWeights lane_change_path_config = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *lane_change_path_config_);
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

void PiecewiseJerkPathConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.planning.PiecewiseJerkPathConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const PiecewiseJerkPathConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PiecewiseJerkPathConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.planning.PiecewiseJerkPathConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.planning.PiecewiseJerkPathConfig)
    MergeFrom(*source);
  }
}

void PiecewiseJerkPathConfig::MergeFrom(const PiecewiseJerkPathConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.planning.PiecewiseJerkPathConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_default_path_config()->::apollo::planning::PiecewiseJerkPathWeights::MergeFrom(from._internal_default_path_config());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_lane_change_path_config()->::apollo::planning::PiecewiseJerkPathWeights::MergeFrom(from._internal_lane_change_path_config());
    }
  }
}

void PiecewiseJerkPathConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.planning.PiecewiseJerkPathConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PiecewiseJerkPathConfig::CopyFrom(const PiecewiseJerkPathConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.planning.PiecewiseJerkPathConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PiecewiseJerkPathConfig::IsInitialized() const {
  return true;
}

void PiecewiseJerkPathConfig::InternalSwap(PiecewiseJerkPathConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(default_path_config_, other->default_path_config_);
  swap(lane_change_path_config_, other->lane_change_path_config_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PiecewiseJerkPathConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void PiecewiseJerkPathWeights::InitAsDefaultInstance() {
}
class PiecewiseJerkPathWeights::_Internal {
 public:
  using HasBits = decltype(std::declval<PiecewiseJerkPathWeights>()._has_bits_);
  static void set_has_l_weight(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_dl_weight(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_ddl_weight(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_dddl_weight(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

PiecewiseJerkPathWeights::PiecewiseJerkPathWeights()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.planning.PiecewiseJerkPathWeights)
}
PiecewiseJerkPathWeights::PiecewiseJerkPathWeights(const PiecewiseJerkPathWeights& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&l_weight_, &from.l_weight_,
    static_cast<size_t>(reinterpret_cast<char*>(&dddl_weight_) -
    reinterpret_cast<char*>(&l_weight_)) + sizeof(dddl_weight_));
  // @@protoc_insertion_point(copy_constructor:apollo.planning.PiecewiseJerkPathWeights)
}

void PiecewiseJerkPathWeights::SharedCtor() {
  l_weight_ = 1;
  dl_weight_ = 100;
  ddl_weight_ = 1000;
  dddl_weight_ = 10000;
}

PiecewiseJerkPathWeights::~PiecewiseJerkPathWeights() {
  // @@protoc_insertion_point(destructor:apollo.planning.PiecewiseJerkPathWeights)
  SharedDtor();
}

void PiecewiseJerkPathWeights::SharedDtor() {
}

void PiecewiseJerkPathWeights::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PiecewiseJerkPathWeights& PiecewiseJerkPathWeights::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PiecewiseJerkPathWeights_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fpath_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void PiecewiseJerkPathWeights::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.planning.PiecewiseJerkPathWeights)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    l_weight_ = 1;
    dl_weight_ = 100;
    ddl_weight_ = 1000;
    dddl_weight_ = 10000;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PiecewiseJerkPathWeights::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double l_weight = 1 [default = 1];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_l_weight(&has_bits);
          l_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double dl_weight = 2 [default = 100];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_dl_weight(&has_bits);
          dl_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double ddl_weight = 3 [default = 1000];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_ddl_weight(&has_bits);
          ddl_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double dddl_weight = 4 [default = 10000];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_dddl_weight(&has_bits);
          dddl_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PiecewiseJerkPathWeights::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.planning.PiecewiseJerkPathWeights)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double l_weight = 1 [default = 1];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_l_weight(), target);
  }

  // optional double dl_weight = 2 [default = 100];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_dl_weight(), target);
  }

  // optional double ddl_weight = 3 [default = 1000];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_ddl_weight(), target);
  }

  // optional double dddl_weight = 4 [default = 10000];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_dddl_weight(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.planning.PiecewiseJerkPathWeights)
  return target;
}

size_t PiecewiseJerkPathWeights::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.planning.PiecewiseJerkPathWeights)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional double l_weight = 1 [default = 1];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double dl_weight = 2 [default = 100];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double ddl_weight = 3 [default = 1000];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double dddl_weight = 4 [default = 10000];
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

void PiecewiseJerkPathWeights::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.planning.PiecewiseJerkPathWeights)
  GOOGLE_DCHECK_NE(&from, this);
  const PiecewiseJerkPathWeights* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PiecewiseJerkPathWeights>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.planning.PiecewiseJerkPathWeights)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.planning.PiecewiseJerkPathWeights)
    MergeFrom(*source);
  }
}

void PiecewiseJerkPathWeights::MergeFrom(const PiecewiseJerkPathWeights& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.planning.PiecewiseJerkPathWeights)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      l_weight_ = from.l_weight_;
    }
    if (cached_has_bits & 0x00000002u) {
      dl_weight_ = from.dl_weight_;
    }
    if (cached_has_bits & 0x00000004u) {
      ddl_weight_ = from.ddl_weight_;
    }
    if (cached_has_bits & 0x00000008u) {
      dddl_weight_ = from.dddl_weight_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PiecewiseJerkPathWeights::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.planning.PiecewiseJerkPathWeights)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PiecewiseJerkPathWeights::CopyFrom(const PiecewiseJerkPathWeights& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.planning.PiecewiseJerkPathWeights)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PiecewiseJerkPathWeights::IsInitialized() const {
  return true;
}

void PiecewiseJerkPathWeights::InternalSwap(PiecewiseJerkPathWeights* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(l_weight_, other->l_weight_);
  swap(dl_weight_, other->dl_weight_);
  swap(ddl_weight_, other->ddl_weight_);
  swap(dddl_weight_, other->dddl_weight_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PiecewiseJerkPathWeights::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace planning
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::planning::PiecewiseJerkPathConfig* Arena::CreateMaybeMessage< ::apollo::planning::PiecewiseJerkPathConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::planning::PiecewiseJerkPathConfig >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::planning::PiecewiseJerkPathWeights* Arena::CreateMaybeMessage< ::apollo::planning::PiecewiseJerkPathWeights >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::planning::PiecewiseJerkPathWeights >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
