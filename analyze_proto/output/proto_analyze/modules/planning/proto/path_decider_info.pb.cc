// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/path_decider_info.proto

#include "modules/planning/proto/path_decider_info.pb.h"

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
class PathDeciderInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PathDeciderInfo> _instance;
} _PathDeciderInfo_default_instance_;
}  // namespace planning
}  // namespace apollo
static void InitDefaultsscc_info_PathDeciderInfo_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::planning::_PathDeciderInfo_default_instance_;
    new (ptr) ::apollo::planning::PathDeciderInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::planning::PathDeciderInfo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PathDeciderInfo_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PathDeciderInfo_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, front_static_obstacle_cycle_counter_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, able_to_use_self_lane_counter_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, is_in_path_lane_borrow_scenario_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, front_static_obstacle_id_),
  PROTOBUF_FIELD_OFFSET(::apollo::planning::PathDeciderInfo, decided_side_pass_direction_),
  1,
  2,
  3,
  0,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::apollo::planning::PathDeciderInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::planning::_PathDeciderInfo_default_instance_),
};

const char descriptor_table_protodef_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.modules/planning/proto/path_decider_in"
  "fo.proto\022\017apollo.planning\"\347\001\n\017PathDecide"
  "rInfo\022.\n#front_static_obstacle_cycle_cou"
  "nter\030\001 \001(\005:\0010\022(\n\035able_to_use_self_lane_c"
  "ounter\030\002 \001(\005:\0010\022.\n\037is_in_path_lane_borro"
  "w_scenario\030\003 \001(\010:\005false\022\"\n\030front_static_"
  "obstacle_id\030\004 \001(\t:\000\022&\n\033decided_side_pass"
  "_direction\030\005 \001(\005:\0010"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_sccs[1] = {
  &scc_info_PathDeciderInfo_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_once;
static bool descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto = {
  &descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_initialized, descriptor_table_protodef_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto, "modules/planning/proto/path_decider_info.proto", 299,
  &descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_once, descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_sccs, descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto::offsets,
  file_level_metadata_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto, 1, file_level_enum_descriptors_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto, file_level_service_descriptors_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto), true);
namespace apollo {
namespace planning {

// ===================================================================

void PathDeciderInfo::InitAsDefaultInstance() {
}
class PathDeciderInfo::_Internal {
 public:
  using HasBits = decltype(std::declval<PathDeciderInfo>()._has_bits_);
  static void set_has_front_static_obstacle_cycle_counter(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_able_to_use_self_lane_counter(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_is_in_path_lane_borrow_scenario(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_front_static_obstacle_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_decided_side_pass_direction(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

PathDeciderInfo::PathDeciderInfo()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.planning.PathDeciderInfo)
}
PathDeciderInfo::PathDeciderInfo(const PathDeciderInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  front_static_obstacle_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_front_static_obstacle_id()) {
    front_static_obstacle_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.front_static_obstacle_id_);
  }
  ::memcpy(&front_static_obstacle_cycle_counter_, &from.front_static_obstacle_cycle_counter_,
    static_cast<size_t>(reinterpret_cast<char*>(&decided_side_pass_direction_) -
    reinterpret_cast<char*>(&front_static_obstacle_cycle_counter_)) + sizeof(decided_side_pass_direction_));
  // @@protoc_insertion_point(copy_constructor:apollo.planning.PathDeciderInfo)
}

void PathDeciderInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PathDeciderInfo_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto.base);
  front_static_obstacle_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&front_static_obstacle_cycle_counter_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&decided_side_pass_direction_) -
      reinterpret_cast<char*>(&front_static_obstacle_cycle_counter_)) + sizeof(decided_side_pass_direction_));
}

PathDeciderInfo::~PathDeciderInfo() {
  // @@protoc_insertion_point(destructor:apollo.planning.PathDeciderInfo)
  SharedDtor();
}

void PathDeciderInfo::SharedDtor() {
  front_static_obstacle_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PathDeciderInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PathDeciderInfo& PathDeciderInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PathDeciderInfo_modules_2fplanning_2fproto_2fpath_5fdecider_5finfo_2eproto.base);
  return *internal_default_instance();
}


void PathDeciderInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.planning.PathDeciderInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    front_static_obstacle_id_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&front_static_obstacle_cycle_counter_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&decided_side_pass_direction_) -
        reinterpret_cast<char*>(&front_static_obstacle_cycle_counter_)) + sizeof(decided_side_pass_direction_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PathDeciderInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 front_static_obstacle_cycle_counter = 1 [default = 0];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_front_static_obstacle_cycle_counter(&has_bits);
          front_static_obstacle_cycle_counter_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 able_to_use_self_lane_counter = 2 [default = 0];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_able_to_use_self_lane_counter(&has_bits);
          able_to_use_self_lane_counter_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool is_in_path_lane_borrow_scenario = 3 [default = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_is_in_path_lane_borrow_scenario(&has_bits);
          is_in_path_lane_borrow_scenario_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string front_static_obstacle_id = 4 [default = ""];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_front_static_obstacle_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.planning.PathDeciderInfo.front_static_obstacle_id");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 decided_side_pass_direction = 5 [default = 0];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_decided_side_pass_direction(&has_bits);
          decided_side_pass_direction_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PathDeciderInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.planning.PathDeciderInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 front_static_obstacle_cycle_counter = 1 [default = 0];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_front_static_obstacle_cycle_counter(), target);
  }

  // optional int32 able_to_use_self_lane_counter = 2 [default = 0];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_able_to_use_self_lane_counter(), target);
  }

  // optional bool is_in_path_lane_borrow_scenario = 3 [default = false];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_is_in_path_lane_borrow_scenario(), target);
  }

  // optional string front_static_obstacle_id = 4 [default = ""];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_front_static_obstacle_id().data(), static_cast<int>(this->_internal_front_static_obstacle_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.planning.PathDeciderInfo.front_static_obstacle_id");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_front_static_obstacle_id(), target);
  }

  // optional int32 decided_side_pass_direction = 5 [default = 0];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_decided_side_pass_direction(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.planning.PathDeciderInfo)
  return target;
}

size_t PathDeciderInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.planning.PathDeciderInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string front_static_obstacle_id = 4 [default = ""];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_front_static_obstacle_id());
    }

    // optional int32 front_static_obstacle_cycle_counter = 1 [default = 0];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_front_static_obstacle_cycle_counter());
    }

    // optional int32 able_to_use_self_lane_counter = 2 [default = 0];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_able_to_use_self_lane_counter());
    }

    // optional bool is_in_path_lane_borrow_scenario = 3 [default = false];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional int32 decided_side_pass_direction = 5 [default = 0];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_decided_side_pass_direction());
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

void PathDeciderInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.planning.PathDeciderInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const PathDeciderInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PathDeciderInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.planning.PathDeciderInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.planning.PathDeciderInfo)
    MergeFrom(*source);
  }
}

void PathDeciderInfo::MergeFrom(const PathDeciderInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.planning.PathDeciderInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      front_static_obstacle_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.front_static_obstacle_id_);
    }
    if (cached_has_bits & 0x00000002u) {
      front_static_obstacle_cycle_counter_ = from.front_static_obstacle_cycle_counter_;
    }
    if (cached_has_bits & 0x00000004u) {
      able_to_use_self_lane_counter_ = from.able_to_use_self_lane_counter_;
    }
    if (cached_has_bits & 0x00000008u) {
      is_in_path_lane_borrow_scenario_ = from.is_in_path_lane_borrow_scenario_;
    }
    if (cached_has_bits & 0x00000010u) {
      decided_side_pass_direction_ = from.decided_side_pass_direction_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PathDeciderInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.planning.PathDeciderInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PathDeciderInfo::CopyFrom(const PathDeciderInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.planning.PathDeciderInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PathDeciderInfo::IsInitialized() const {
  return true;
}

void PathDeciderInfo::InternalSwap(PathDeciderInfo* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  front_static_obstacle_id_.Swap(&other->front_static_obstacle_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(front_static_obstacle_cycle_counter_, other->front_static_obstacle_cycle_counter_);
  swap(able_to_use_self_lane_counter_, other->able_to_use_self_lane_counter_);
  swap(is_in_path_lane_borrow_scenario_, other->is_in_path_lane_borrow_scenario_);
  swap(decided_side_pass_direction_, other->decided_side_pass_direction_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PathDeciderInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace planning
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::planning::PathDeciderInfo* Arena::CreateMaybeMessage< ::apollo::planning::PathDeciderInfo >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::planning::PathDeciderInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
