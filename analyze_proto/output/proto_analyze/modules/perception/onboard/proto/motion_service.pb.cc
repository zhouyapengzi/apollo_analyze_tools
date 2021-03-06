// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/onboard/proto/motion_service.proto

#include "modules/perception/onboard/proto/motion_service.pb.h"

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
namespace onboard {
class MotionServiceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MotionService> _instance;
} _MotionService_default_instance_;
}  // namespace onboard
}  // namespace perception
}  // namespace apollo
static void InitDefaultsscc_info_MotionService_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.DefaultConstruct();
  *::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get_mutable() = std::string("front_6mm", 9);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get_mutable());
  ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.DefaultConstruct();
  *::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get_mutable() = std::string("/apollo/sensor/camera/front_6mm/image", 37);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get_mutable());
  ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.DefaultConstruct();
  *::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get_mutable() = std::string("/apollo/localization/pose", 25);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get_mutable());
  ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.DefaultConstruct();
  *::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get_mutable() = std::string("/apollo/perception/motion_service", 33);
  ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyString(
      ::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get_mutable());
  {
    void* ptr = &::apollo::perception::onboard::_MotionService_default_instance_;
    new (ptr) ::apollo::perception::onboard::MotionService();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::onboard::MotionService::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MotionService_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MotionService_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::onboard::MotionService, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::onboard::MotionService, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::onboard::MotionService, camera_names_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::onboard::MotionService, input_camera_channel_names_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::onboard::MotionService, input_localization_channel_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::onboard::MotionService, output_topic_channel_name_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::apollo::perception::onboard::MotionService)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::onboard::_MotionService_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n5modules/perception/onboard/proto/motio"
  "n_service.proto\022\031apollo.perception.onboa"
  "rd\"\205\002\n\rMotionService\022\037\n\014camera_names\030\001 \001"
  "(\t:\tfront_6mm\022I\n\032input_camera_channel_na"
  "mes\030\002 \001(\t:%/apollo/sensor/camera/front_6"
  "mm/image\022B\n\037input_localization_channel_n"
  "ame\030\003 \001(\t:\031/apollo/localization/pose\022D\n\031"
  "output_topic_channel_name\030\004 \001(\t:!/apollo"
  "/perception/motion_service"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_sccs[1] = {
  &scc_info_MotionService_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_once;
static bool descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto = {
  &descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_initialized, descriptor_table_protodef_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto, "modules/perception/onboard/proto/motion_service.proto", 346,
  &descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_once, descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_sccs, descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto::offsets,
  file_level_metadata_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto, 1, file_level_enum_descriptors_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto, file_level_service_descriptors_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto), true);
namespace apollo {
namespace perception {
namespace onboard {

// ===================================================================

void MotionService::InitAsDefaultInstance() {
}
class MotionService::_Internal {
 public:
  using HasBits = decltype(std::declval<MotionService>()._has_bits_);
  static void set_has_camera_names(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_input_camera_channel_names(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_input_localization_channel_name(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_output_topic_channel_name(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> MotionService::_i_give_permission_to_break_this_code_default_camera_names_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_;
::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_;
MotionService::MotionService()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.onboard.MotionService)
}
MotionService::MotionService(const MotionService& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  camera_names_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get());
  if (from._internal_has_camera_names()) {
    camera_names_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get(), from.camera_names_);
  }
  input_camera_channel_names_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get());
  if (from._internal_has_input_camera_channel_names()) {
    input_camera_channel_names_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get(), from.input_camera_channel_names_);
  }
  input_localization_channel_name_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get());
  if (from._internal_has_input_localization_channel_name()) {
    input_localization_channel_name_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get(), from.input_localization_channel_name_);
  }
  output_topic_channel_name_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get());
  if (from._internal_has_output_topic_channel_name()) {
    output_topic_channel_name_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get(), from.output_topic_channel_name_);
  }
  // @@protoc_insertion_point(copy_constructor:apollo.perception.onboard.MotionService)
}

void MotionService::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MotionService_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto.base);
  camera_names_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get());
  input_camera_channel_names_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get());
  input_localization_channel_name_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get());
  output_topic_channel_name_.UnsafeSetDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get());
}

MotionService::~MotionService() {
  // @@protoc_insertion_point(destructor:apollo.perception.onboard.MotionService)
  SharedDtor();
}

void MotionService::SharedDtor() {
  camera_names_.DestroyNoArena(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get());
  input_camera_channel_names_.DestroyNoArena(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get());
  input_localization_channel_name_.DestroyNoArena(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get());
  output_topic_channel_name_.DestroyNoArena(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get());
}

void MotionService::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MotionService& MotionService::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MotionService_modules_2fperception_2fonboard_2fproto_2fmotion_5fservice_2eproto.base);
  return *internal_default_instance();
}


void MotionService::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.onboard.MotionService)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      camera_names_.UnsafeMutablePointer()->assign(*&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get());
    }
    if (cached_has_bits & 0x00000002u) {
      input_camera_channel_names_.UnsafeMutablePointer()->assign(*&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get());
    }
    if (cached_has_bits & 0x00000004u) {
      input_localization_channel_name_.UnsafeMutablePointer()->assign(*&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get());
    }
    if (cached_has_bits & 0x00000008u) {
      output_topic_channel_name_.UnsafeMutablePointer()->assign(*&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get());
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* MotionService::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string camera_names = 1 [default = "front_6mm"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_camera_names();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.onboard.MotionService.camera_names");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string input_camera_channel_names = 2 [default = "/apollo/sensor/camera/front_6mm/image"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_input_camera_channel_names();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.onboard.MotionService.input_camera_channel_names");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string input_localization_channel_name = 3 [default = "/apollo/localization/pose"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_input_localization_channel_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.onboard.MotionService.input_localization_channel_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string output_topic_channel_name = 4 [default = "/apollo/perception/motion_service"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_output_topic_channel_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.perception.onboard.MotionService.output_topic_channel_name");
          #endif  // !NDEBUG
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

::PROTOBUF_NAMESPACE_ID::uint8* MotionService::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.onboard.MotionService)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string camera_names = 1 [default = "front_6mm"];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_camera_names().data(), static_cast<int>(this->_internal_camera_names().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.onboard.MotionService.camera_names");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_camera_names(), target);
  }

  // optional string input_camera_channel_names = 2 [default = "/apollo/sensor/camera/front_6mm/image"];
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_input_camera_channel_names().data(), static_cast<int>(this->_internal_input_camera_channel_names().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.onboard.MotionService.input_camera_channel_names");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_input_camera_channel_names(), target);
  }

  // optional string input_localization_channel_name = 3 [default = "/apollo/localization/pose"];
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_input_localization_channel_name().data(), static_cast<int>(this->_internal_input_localization_channel_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.onboard.MotionService.input_localization_channel_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_input_localization_channel_name(), target);
  }

  // optional string output_topic_channel_name = 4 [default = "/apollo/perception/motion_service"];
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_output_topic_channel_name().data(), static_cast<int>(this->_internal_output_topic_channel_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.onboard.MotionService.output_topic_channel_name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_output_topic_channel_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.onboard.MotionService)
  return target;
}

size_t MotionService::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.onboard.MotionService)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string camera_names = 1 [default = "front_6mm"];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_camera_names());
    }

    // optional string input_camera_channel_names = 2 [default = "/apollo/sensor/camera/front_6mm/image"];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_input_camera_channel_names());
    }

    // optional string input_localization_channel_name = 3 [default = "/apollo/localization/pose"];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_input_localization_channel_name());
    }

    // optional string output_topic_channel_name = 4 [default = "/apollo/perception/motion_service"];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_output_topic_channel_name());
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

void MotionService::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.onboard.MotionService)
  GOOGLE_DCHECK_NE(&from, this);
  const MotionService* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MotionService>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.onboard.MotionService)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.onboard.MotionService)
    MergeFrom(*source);
  }
}

void MotionService::MergeFrom(const MotionService& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.onboard.MotionService)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      camera_names_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get(), from.camera_names_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      input_camera_channel_names_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get(), from.input_camera_channel_names_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      input_localization_channel_name_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get(), from.input_localization_channel_name_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      output_topic_channel_name_.AssignWithDefault(&::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get(), from.output_topic_channel_name_);
    }
  }
}

void MotionService::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.onboard.MotionService)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MotionService::CopyFrom(const MotionService& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.onboard.MotionService)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MotionService::IsInitialized() const {
  return true;
}

void MotionService::InternalSwap(MotionService* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  camera_names_.Swap(&other->camera_names_, &::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_camera_names_.get(),
    GetArenaNoVirtual());
  input_camera_channel_names_.Swap(&other->input_camera_channel_names_, &::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_camera_channel_names_.get(),
    GetArenaNoVirtual());
  input_localization_channel_name_.Swap(&other->input_localization_channel_name_, &::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_input_localization_channel_name_.get(),
    GetArenaNoVirtual());
  output_topic_channel_name_.Swap(&other->output_topic_channel_name_, &::apollo::perception::onboard::MotionService::_i_give_permission_to_break_this_code_default_output_topic_channel_name_.get(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata MotionService::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace onboard
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::onboard::MotionService* Arena::CreateMaybeMessage< ::apollo::perception::onboard::MotionService >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::onboard::MotionService >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
