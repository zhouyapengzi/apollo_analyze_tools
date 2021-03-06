// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/fusion/lib/gatekeeper/pbf_gatekeeper/proto/pbf_gatekeeper_config.proto

#include "modules/perception/fusion/lib/gatekeeper/pbf_gatekeeper/proto/pbf_gatekeeper_config.pb.h"

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
namespace fusion {
class PbfGatekeeperConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PbfGatekeeperConfig> _instance;
} _PbfGatekeeperConfig_default_instance_;
}  // namespace fusion
}  // namespace perception
}  // namespace apollo
static void InitDefaultsscc_info_PbfGatekeeperConfig_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::perception::fusion::_PbfGatekeeperConfig_default_instance_;
    new (ptr) ::apollo::perception::fusion::PbfGatekeeperConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::fusion::PbfGatekeeperConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PbfGatekeeperConfig_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PbfGatekeeperConfig_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, publish_if_has_lidar_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, publish_if_has_radar_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, publish_if_has_camera_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, use_camera_3d_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, min_radar_confident_distance_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, max_radar_confident_angle_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, min_camera_publish_distance_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, invisible_period_threshold_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, toic_threshold_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, use_track_time_pub_strategy_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, pub_track_time_thresh_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, existance_threshold_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::fusion::PbfGatekeeperConfig, radar_existance_threshold_),
  9,
  10,
  11,
  12,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 18, sizeof(::apollo::perception::fusion::PbfGatekeeperConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::fusion::_PbfGatekeeperConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nYmodules/perception/fusion/lib/gatekeep"
  "er/pbf_gatekeeper/proto/pbf_gatekeeper_c"
  "onfig.proto\022\030apollo.perception.fusion\"\315\003"
  "\n\023PbfGatekeeperConfig\022\"\n\024publish_if_has_"
  "lidar\030\001 \001(\010:\004true\022\"\n\024publish_if_has_rada"
  "r\030\002 \001(\010:\004true\022#\n\025publish_if_has_camera\030\003"
  " \001(\010:\004true\022\033\n\ruse_camera_3d\030\004 \001(\010:\004true\022"
  "$\n\034min_radar_confident_distance\030\005 \001(\001\022!\n"
  "\031max_radar_confident_angle\030\006 \001(\001\022#\n\033min_"
  "camera_publish_distance\030\007 \001(\001\022\"\n\032invisib"
  "le_period_threshold\030\010 \001(\001\022\026\n\016toic_thresh"
  "old\030\t \001(\001\022#\n\033use_track_time_pub_strategy"
  "\030\n \001(\010\022\035\n\025pub_track_time_thresh\030\013 \001(\005\022\033\n"
  "\023existance_threshold\030\014 \001(\001\022!\n\031radar_exis"
  "tance_threshold\030\r \001(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_sccs[1] = {
  &scc_info_PbfGatekeeperConfig_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto = {
  &descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto, "modules/perception/fusion/lib/gatekeeper/pbf_gatekeeper/proto/pbf_gatekeeper_config.proto", 581,
  &descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_once, descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_sccs, descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto, 1, file_level_enum_descriptors_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto), true);
namespace apollo {
namespace perception {
namespace fusion {

// ===================================================================

void PbfGatekeeperConfig::InitAsDefaultInstance() {
}
class PbfGatekeeperConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<PbfGatekeeperConfig>()._has_bits_);
  static void set_has_publish_if_has_lidar(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_publish_if_has_radar(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_publish_if_has_camera(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_use_camera_3d(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
  static void set_has_min_radar_confident_distance(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_max_radar_confident_angle(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_min_camera_publish_distance(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_invisible_period_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_toic_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_use_track_time_pub_strategy(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_pub_track_time_thresh(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_existance_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_radar_existance_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
};

PbfGatekeeperConfig::PbfGatekeeperConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.fusion.PbfGatekeeperConfig)
}
PbfGatekeeperConfig::PbfGatekeeperConfig(const PbfGatekeeperConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&min_radar_confident_distance_, &from.min_radar_confident_distance_,
    static_cast<size_t>(reinterpret_cast<char*>(&use_camera_3d_) -
    reinterpret_cast<char*>(&min_radar_confident_distance_)) + sizeof(use_camera_3d_));
  // @@protoc_insertion_point(copy_constructor:apollo.perception.fusion.PbfGatekeeperConfig)
}

void PbfGatekeeperConfig::SharedCtor() {
  ::memset(&min_radar_confident_distance_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&radar_existance_threshold_) -
      reinterpret_cast<char*>(&min_radar_confident_distance_)) + sizeof(radar_existance_threshold_));
  publish_if_has_lidar_ = true;
  publish_if_has_radar_ = true;
  publish_if_has_camera_ = true;
  use_camera_3d_ = true;
}

PbfGatekeeperConfig::~PbfGatekeeperConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.fusion.PbfGatekeeperConfig)
  SharedDtor();
}

void PbfGatekeeperConfig::SharedDtor() {
}

void PbfGatekeeperConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PbfGatekeeperConfig& PbfGatekeeperConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PbfGatekeeperConfig_modules_2fperception_2ffusion_2flib_2fgatekeeper_2fpbf_5fgatekeeper_2fproto_2fpbf_5fgatekeeper_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void PbfGatekeeperConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.fusion.PbfGatekeeperConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&min_radar_confident_distance_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&existance_threshold_) -
        reinterpret_cast<char*>(&min_radar_confident_distance_)) + sizeof(existance_threshold_));
  }
  if (cached_has_bits & 0x00001f00u) {
    radar_existance_threshold_ = 0;
    publish_if_has_lidar_ = true;
    publish_if_has_radar_ = true;
    publish_if_has_camera_ = true;
    use_camera_3d_ = true;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PbfGatekeeperConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool publish_if_has_lidar = 1 [default = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_publish_if_has_lidar(&has_bits);
          publish_if_has_lidar_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool publish_if_has_radar = 2 [default = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_publish_if_has_radar(&has_bits);
          publish_if_has_radar_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool publish_if_has_camera = 3 [default = true];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_publish_if_has_camera(&has_bits);
          publish_if_has_camera_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool use_camera_3d = 4 [default = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_use_camera_3d(&has_bits);
          use_camera_3d_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double min_radar_confident_distance = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_min_radar_confident_distance(&has_bits);
          min_radar_confident_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double max_radar_confident_angle = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_max_radar_confident_angle(&has_bits);
          max_radar_confident_angle_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double min_camera_publish_distance = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          _Internal::set_has_min_camera_publish_distance(&has_bits);
          min_camera_publish_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double invisible_period_threshold = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          _Internal::set_has_invisible_period_threshold(&has_bits);
          invisible_period_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double toic_threshold = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 73)) {
          _Internal::set_has_toic_threshold(&has_bits);
          toic_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional bool use_track_time_pub_strategy = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          _Internal::set_has_use_track_time_pub_strategy(&has_bits);
          use_track_time_pub_strategy_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 pub_track_time_thresh = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          _Internal::set_has_pub_track_time_thresh(&has_bits);
          pub_track_time_thresh_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double existance_threshold = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 97)) {
          _Internal::set_has_existance_threshold(&has_bits);
          existance_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double radar_existance_threshold = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 105)) {
          _Internal::set_has_radar_existance_threshold(&has_bits);
          radar_existance_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PbfGatekeeperConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.fusion.PbfGatekeeperConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool publish_if_has_lidar = 1 [default = true];
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_publish_if_has_lidar(), target);
  }

  // optional bool publish_if_has_radar = 2 [default = true];
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_publish_if_has_radar(), target);
  }

  // optional bool publish_if_has_camera = 3 [default = true];
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_publish_if_has_camera(), target);
  }

  // optional bool use_camera_3d = 4 [default = true];
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_use_camera_3d(), target);
  }

  // optional double min_radar_confident_distance = 5;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_min_radar_confident_distance(), target);
  }

  // optional double max_radar_confident_angle = 6;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_max_radar_confident_angle(), target);
  }

  // optional double min_camera_publish_distance = 7;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_min_camera_publish_distance(), target);
  }

  // optional double invisible_period_threshold = 8;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->_internal_invisible_period_threshold(), target);
  }

  // optional double toic_threshold = 9;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(9, this->_internal_toic_threshold(), target);
  }

  // optional bool use_track_time_pub_strategy = 10;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(10, this->_internal_use_track_time_pub_strategy(), target);
  }

  // optional int32 pub_track_time_thresh = 11;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(11, this->_internal_pub_track_time_thresh(), target);
  }

  // optional double existance_threshold = 12;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(12, this->_internal_existance_threshold(), target);
  }

  // optional double radar_existance_threshold = 13;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(13, this->_internal_radar_existance_threshold(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.fusion.PbfGatekeeperConfig)
  return target;
}

size_t PbfGatekeeperConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.fusion.PbfGatekeeperConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional double min_radar_confident_distance = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double max_radar_confident_angle = 6;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double min_camera_publish_distance = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double invisible_period_threshold = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double toic_threshold = 9;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional bool use_track_time_pub_strategy = 10;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

    // optional int32 pub_track_time_thresh = 11;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_pub_track_time_thresh());
    }

    // optional double existance_threshold = 12;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 8;
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional double radar_existance_threshold = 13;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 8;
    }

    // optional bool publish_if_has_lidar = 1 [default = true];
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 1;
    }

    // optional bool publish_if_has_radar = 2 [default = true];
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 + 1;
    }

    // optional bool publish_if_has_camera = 3 [default = true];
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 + 1;
    }

    // optional bool use_camera_3d = 4 [default = true];
    if (cached_has_bits & 0x00001000u) {
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

void PbfGatekeeperConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.fusion.PbfGatekeeperConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const PbfGatekeeperConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PbfGatekeeperConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.fusion.PbfGatekeeperConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.fusion.PbfGatekeeperConfig)
    MergeFrom(*source);
  }
}

void PbfGatekeeperConfig::MergeFrom(const PbfGatekeeperConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.fusion.PbfGatekeeperConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      min_radar_confident_distance_ = from.min_radar_confident_distance_;
    }
    if (cached_has_bits & 0x00000002u) {
      max_radar_confident_angle_ = from.max_radar_confident_angle_;
    }
    if (cached_has_bits & 0x00000004u) {
      min_camera_publish_distance_ = from.min_camera_publish_distance_;
    }
    if (cached_has_bits & 0x00000008u) {
      invisible_period_threshold_ = from.invisible_period_threshold_;
    }
    if (cached_has_bits & 0x00000010u) {
      toic_threshold_ = from.toic_threshold_;
    }
    if (cached_has_bits & 0x00000020u) {
      use_track_time_pub_strategy_ = from.use_track_time_pub_strategy_;
    }
    if (cached_has_bits & 0x00000040u) {
      pub_track_time_thresh_ = from.pub_track_time_thresh_;
    }
    if (cached_has_bits & 0x00000080u) {
      existance_threshold_ = from.existance_threshold_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      radar_existance_threshold_ = from.radar_existance_threshold_;
    }
    if (cached_has_bits & 0x00000200u) {
      publish_if_has_lidar_ = from.publish_if_has_lidar_;
    }
    if (cached_has_bits & 0x00000400u) {
      publish_if_has_radar_ = from.publish_if_has_radar_;
    }
    if (cached_has_bits & 0x00000800u) {
      publish_if_has_camera_ = from.publish_if_has_camera_;
    }
    if (cached_has_bits & 0x00001000u) {
      use_camera_3d_ = from.use_camera_3d_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PbfGatekeeperConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.fusion.PbfGatekeeperConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbfGatekeeperConfig::CopyFrom(const PbfGatekeeperConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.fusion.PbfGatekeeperConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbfGatekeeperConfig::IsInitialized() const {
  return true;
}

void PbfGatekeeperConfig::InternalSwap(PbfGatekeeperConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(min_radar_confident_distance_, other->min_radar_confident_distance_);
  swap(max_radar_confident_angle_, other->max_radar_confident_angle_);
  swap(min_camera_publish_distance_, other->min_camera_publish_distance_);
  swap(invisible_period_threshold_, other->invisible_period_threshold_);
  swap(toic_threshold_, other->toic_threshold_);
  swap(use_track_time_pub_strategy_, other->use_track_time_pub_strategy_);
  swap(pub_track_time_thresh_, other->pub_track_time_thresh_);
  swap(existance_threshold_, other->existance_threshold_);
  swap(radar_existance_threshold_, other->radar_existance_threshold_);
  swap(publish_if_has_lidar_, other->publish_if_has_lidar_);
  swap(publish_if_has_radar_, other->publish_if_has_radar_);
  swap(publish_if_has_camera_, other->publish_if_has_camera_);
  swap(use_camera_3d_, other->use_camera_3d_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PbfGatekeeperConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace fusion
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::fusion::PbfGatekeeperConfig* Arena::CreateMaybeMessage< ::apollo::perception::fusion::PbfGatekeeperConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::fusion::PbfGatekeeperConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
