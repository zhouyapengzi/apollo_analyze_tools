// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/lidar/lib/segmentation/cnnseg/proto/cnnseg_config.proto

#include "modules/perception/lidar/lib/segmentation/cnnseg/proto/cnnseg_config.pb.h"

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
class CNNSegConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CNNSegConfig> _instance;
} _CNNSegConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
static void InitDefaultsscc_info_CNNSegConfig_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get_mutable() = std::string("./data/models/cnnseg/param.conf", 31);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get_mutable());
  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get_mutable() = std::string("./data/models/cnnseg/deploy.prototxt", 36);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get_mutable());
  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get_mutable() = std::string("./data/models/cnnseg/deploy.caffemodel", 38);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get_mutable());
  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get_mutable() = std::string("./data/models/cnnseg/engine.conf", 32);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get_mutable());
  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get_mutable() = std::string("./data/models/cnnseg/paddle_param.conf", 38);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get_mutable());
  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get_mutable() = std::string("./data/models/cnnseg/model", 26);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get_mutable());
  ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.DefaultConstruct();
  *::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get_mutable() = std::string("./data/models/cnnseg/params", 27);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get_mutable());
  {
    void* ptr = &::apollo::perception::lidar::_CNNSegConfig_default_instance_;
    new (ptr) ::apollo::perception::lidar::CNNSegConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::lidar::CNNSegConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CNNSegConfig_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CNNSegConfig_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, param_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, proto_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, weight_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, engine_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, paddle_param_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, paddle_proto_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, paddle_weight_file_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::lidar::CNNSegConfig, use_paddle_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::apollo::perception::lidar::CNNSegConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::lidar::_CNNSegConfig_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nJmodules/perception/lidar/lib/segmentat"
  "ion/cnnseg/proto/cnnseg_config.proto\022\027ap"
  "ollo.perception.lidar\"\277\003\n\014CNNSegConfig\0223"
  "\n\nparam_file\030\001 \001(\t:\037./data/models/cnnseg"
  "/param.conf\0228\n\nproto_file\030\002 \001(\t:$./data/"
  "models/cnnseg/deploy.prototxt\022;\n\013weight_"
  "file\030\003 \001(\t:&./data/models/cnnseg/deploy."
  "caffemodel\0225\n\013engine_file\030\004 \001(\t: ./data/"
  "models/cnnseg/engine.conf\022A\n\021paddle_para"
  "m_file\030\005 \001(\t:&./data/models/cnnseg/paddl"
  "e_param.conf\0225\n\021paddle_proto_file\030\006 \001(\t:"
  "\032./data/models/cnnseg/model\0227\n\022paddle_we"
  "ight_file\030\007 \001(\t:\033./data/models/cnnseg/pa"
  "rams\022\031\n\nuse_paddle\030\010 \001(\010:\005false"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_sccs[1] = {
  &scc_info_CNNSegConfig_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_once;
static bool descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto = {
  &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_initialized, descriptor_table_protodef_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto, "modules/perception/lidar/lib/segmentation/cnnseg/proto/cnnseg_config.proto", 551,
  &descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_once, descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_sccs, descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto::offsets,
  file_level_metadata_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto, 1, file_level_enum_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto, file_level_service_descriptors_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto), true);
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

void CNNSegConfig::InitAsDefaultInstance() {
}
class CNNSegConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<CNNSegConfig>()._has_bits_);
  static void set_has_param_file(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_proto_file(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_weight_file(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_engine_file(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_paddle_param_file(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_paddle_proto_file(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_paddle_weight_file(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_use_paddle(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
};

::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_;
CNNSegConfig::CNNSegConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.lidar.CNNSegConfig)
}
CNNSegConfig::CNNSegConfig(const CNNSegConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  param_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get());
  if (from._internal_has_param_file()) {
    param_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get(), from.param_file_);
  }
  proto_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get());
  if (from._internal_has_proto_file()) {
    proto_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get(), from.proto_file_);
  }
  weight_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get());
  if (from._internal_has_weight_file()) {
    weight_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get(), from.weight_file_);
  }
  engine_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get());
  if (from._internal_has_engine_file()) {
    engine_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get(), from.engine_file_);
  }
  paddle_param_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get());
  if (from._internal_has_paddle_param_file()) {
    paddle_param_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get(), from.paddle_param_file_);
  }
  paddle_proto_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get());
  if (from._internal_has_paddle_proto_file()) {
    paddle_proto_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get(), from.paddle_proto_file_);
  }
  paddle_weight_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get());
  if (from._internal_has_paddle_weight_file()) {
    paddle_weight_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get(), from.paddle_weight_file_);
  }
  use_paddle_ = from.use_paddle_;
  // @@protoc_insertion_point(copy_constructor:apollo.perception.lidar.CNNSegConfig)
}

void CNNSegConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CNNSegConfig_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto.base);
  param_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get());
  proto_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get());
  weight_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get());
  engine_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get());
  paddle_param_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get());
  paddle_proto_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get());
  paddle_weight_file_.UnsafeSetDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get());
  use_paddle_ = false;
}

CNNSegConfig::~CNNSegConfig() {
  // @@protoc_insertion_point(destructor:apollo.perception.lidar.CNNSegConfig)
  SharedDtor();
}

void CNNSegConfig::SharedDtor() {
  param_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get());
  proto_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get());
  weight_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get());
  engine_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get());
  paddle_param_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get());
  paddle_proto_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get());
  paddle_weight_file_.DestroyNoArena(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get());
}

void CNNSegConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CNNSegConfig& CNNSegConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CNNSegConfig_modules_2fperception_2flidar_2flib_2fsegmentation_2fcnnseg_2fproto_2fcnnseg_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void CNNSegConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.lidar.CNNSegConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      param_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get());
    }
    if (cached_has_bits & 0x00000002u) {
      proto_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get());
    }
    if (cached_has_bits & 0x00000004u) {
      weight_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get());
    }
    if (cached_has_bits & 0x00000008u) {
      engine_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get());
    }
    if (cached_has_bits & 0x00000010u) {
      paddle_param_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get());
    }
    if (cached_has_bits & 0x00000020u) {
      paddle_proto_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get());
    }
    if (cached_has_bits & 0x00000040u) {
      paddle_weight_file_.UnsafeMutablePointer()->assign(*&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get());
    }
  }
  use_paddle_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* CNNSegConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string param_file = 1 [default = "./data/models/cnnseg/param.conf"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_param_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.param_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string proto_file = 2 [default = "./data/models/cnnseg/deploy.prototxt"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_proto_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.proto_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string weight_file = 3 [default = "./data/models/cnnseg/deploy.caffemodel"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_weight_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.weight_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string engine_file = 4 [default = "./data/models/cnnseg/engine.conf"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_engine_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.engine_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string paddle_param_file = 5 [default = "./data/models/cnnseg/paddle_param.conf"];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_paddle_param_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.paddle_param_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string paddle_proto_file = 6 [default = "./data/models/cnnseg/model"];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_paddle_proto_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.paddle_proto_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string paddle_weight_file = 7 [default = "./data/models/cnnseg/params"];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_paddle_weight_file();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.lidar.CNNSegConfig.paddle_weight_file");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool use_paddle = 8 [default = false];
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_use_paddle(&has_bits);
          use_paddle_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* CNNSegConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.lidar.CNNSegConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string param_file = 1 [default = "./data/models/cnnseg/param.conf"];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_param_file().data(), static_cast<int>(this->_internal_param_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.param_file");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_param_file(), target);
  }

  // optional string proto_file = 2 [default = "./data/models/cnnseg/deploy.prototxt"];
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_proto_file().data(), static_cast<int>(this->_internal_proto_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.proto_file");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_proto_file(), target);
  }

  // optional string weight_file = 3 [default = "./data/models/cnnseg/deploy.caffemodel"];
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_weight_file().data(), static_cast<int>(this->_internal_weight_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.weight_file");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_weight_file(), target);
  }

  // optional string engine_file = 4 [default = "./data/models/cnnseg/engine.conf"];
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_engine_file().data(), static_cast<int>(this->_internal_engine_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.engine_file");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_engine_file(), target);
  }

  // optional string paddle_param_file = 5 [default = "./data/models/cnnseg/paddle_param.conf"];
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_paddle_param_file().data(), static_cast<int>(this->_internal_paddle_param_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.paddle_param_file");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_paddle_param_file(), target);
  }

  // optional string paddle_proto_file = 6 [default = "./data/models/cnnseg/model"];
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_paddle_proto_file().data(), static_cast<int>(this->_internal_paddle_proto_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.paddle_proto_file");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_paddle_proto_file(), target);
  }

  // optional string paddle_weight_file = 7 [default = "./data/models/cnnseg/params"];
  if (cached_has_bits & 0x00000040u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_paddle_weight_file().data(), static_cast<int>(this->_internal_paddle_weight_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.lidar.CNNSegConfig.paddle_weight_file");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_paddle_weight_file(), target);
  }

  // optional bool use_paddle = 8 [default = false];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_use_paddle(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.lidar.CNNSegConfig)
  return target;
}

size_t CNNSegConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.lidar.CNNSegConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string param_file = 1 [default = "./data/models/cnnseg/param.conf"];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_param_file());
    }

    // optional string proto_file = 2 [default = "./data/models/cnnseg/deploy.prototxt"];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_proto_file());
    }

    // optional string weight_file = 3 [default = "./data/models/cnnseg/deploy.caffemodel"];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_weight_file());
    }

    // optional string engine_file = 4 [default = "./data/models/cnnseg/engine.conf"];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_engine_file());
    }

    // optional string paddle_param_file = 5 [default = "./data/models/cnnseg/paddle_param.conf"];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_paddle_param_file());
    }

    // optional string paddle_proto_file = 6 [default = "./data/models/cnnseg/model"];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_paddle_proto_file());
    }

    // optional string paddle_weight_file = 7 [default = "./data/models/cnnseg/params"];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_paddle_weight_file());
    }

    // optional bool use_paddle = 8 [default = false];
    if (cached_has_bits & 0x00000080u) {
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

void CNNSegConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.lidar.CNNSegConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const CNNSegConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CNNSegConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.lidar.CNNSegConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.lidar.CNNSegConfig)
    MergeFrom(*source);
  }
}

void CNNSegConfig::MergeFrom(const CNNSegConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.lidar.CNNSegConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      param_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get(), from.param_file_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      proto_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get(), from.proto_file_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      weight_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get(), from.weight_file_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      engine_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get(), from.engine_file_);
    }
    if (cached_has_bits & 0x00000010u) {
      _has_bits_[0] |= 0x00000010u;
      paddle_param_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get(), from.paddle_param_file_);
    }
    if (cached_has_bits & 0x00000020u) {
      _has_bits_[0] |= 0x00000020u;
      paddle_proto_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get(), from.paddle_proto_file_);
    }
    if (cached_has_bits & 0x00000040u) {
      _has_bits_[0] |= 0x00000040u;
      paddle_weight_file_.AssignWithDefault(&::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get(), from.paddle_weight_file_);
    }
    if (cached_has_bits & 0x00000080u) {
      use_paddle_ = from.use_paddle_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CNNSegConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.lidar.CNNSegConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CNNSegConfig::CopyFrom(const CNNSegConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.lidar.CNNSegConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CNNSegConfig::IsInitialized() const {
  return true;
}

void CNNSegConfig::InternalSwap(CNNSegConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  param_file_.Swap(&other->param_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_param_file_.get(),
    GetArenaNoVirtual());
  proto_file_.Swap(&other->proto_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_proto_file_.get(),
    GetArenaNoVirtual());
  weight_file_.Swap(&other->weight_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_weight_file_.get(),
    GetArenaNoVirtual());
  engine_file_.Swap(&other->engine_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_engine_file_.get(),
    GetArenaNoVirtual());
  paddle_param_file_.Swap(&other->paddle_param_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_param_file_.get(),
    GetArenaNoVirtual());
  paddle_proto_file_.Swap(&other->paddle_proto_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_proto_file_.get(),
    GetArenaNoVirtual());
  paddle_weight_file_.Swap(&other->paddle_weight_file_, &::apollo::perception::lidar::CNNSegConfig::_i_give_permission_to_break_this_code_default_paddle_weight_file_.get(),
    GetArenaNoVirtual());
  swap(use_paddle_, other->use_paddle_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CNNSegConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::lidar::CNNSegConfig* Arena::CreateMaybeMessage< ::apollo::perception::lidar::CNNSegConfig >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::lidar::CNNSegConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
