// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/data/tools/smart_recorder/proto/smart_recorder_status.proto

#include "modules/data/tools/smart_recorder/proto/smart_recorder_status.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2fcommon_2fproto_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto;
namespace apollo {
namespace data {
class SmartRecorderStatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SmartRecorderStatus> _instance;
} _SmartRecorderStatus_default_instance_;
}  // namespace data
}  // namespace apollo
static void InitDefaultsscc_info_SmartRecorderStatus_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::data::_SmartRecorderStatus_default_instance_;
    new (ptr) ::apollo::data::SmartRecorderStatus();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::data::SmartRecorderStatus::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SmartRecorderStatus_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SmartRecorderStatus_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto}, {
      &scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::data::SmartRecorderStatus, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::data::SmartRecorderStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::data::SmartRecorderStatus, header_),
  PROTOBUF_FIELD_OFFSET(::apollo::data::SmartRecorderStatus, recording_state_),
  PROTOBUF_FIELD_OFFSET(::apollo::data::SmartRecorderStatus, state_message_),
  1,
  2,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::apollo::data::SmartRecorderStatus)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::data::_SmartRecorderStatus_default_instance_),
};

const char descriptor_table_protodef_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nCmodules/data/tools/smart_recorder/prot"
  "o/smart_recorder_status.proto\022\013apollo.da"
  "ta\032!modules/common/proto/header.proto\"\211\001"
  "\n\023SmartRecorderStatus\022%\n\006header\030\001 \001(\0132\025."
  "apollo.common.Header\0224\n\017recording_state\030"
  "\002 \001(\0162\033.apollo.data.RecordingState\022\025\n\rst"
  "ate_message\030\003 \001(\t*=\n\016RecordingState\022\013\n\007S"
  "TOPPED\020\000\022\r\n\tRECORDING\020\001\022\017\n\013TERMINATING\020\002"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_deps[1] = {
  &::descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_sccs[1] = {
  &scc_info_SmartRecorderStatus_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_once;
static bool descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto = {
  &descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_initialized, descriptor_table_protodef_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto, "modules/data/tools/smart_recorder/proto/smart_recorder_status.proto", 320,
  &descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_once, descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_sccs, descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto::offsets,
  file_level_metadata_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto, 1, file_level_enum_descriptors_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto, file_level_service_descriptors_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto), true);
namespace apollo {
namespace data {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RecordingState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto);
  return file_level_enum_descriptors_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto[0];
}
bool RecordingState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void SmartRecorderStatus::InitAsDefaultInstance() {
  ::apollo::data::_SmartRecorderStatus_default_instance_._instance.get_mutable()->header_ = const_cast< ::apollo::common::Header*>(
      ::apollo::common::Header::internal_default_instance());
}
class SmartRecorderStatus::_Internal {
 public:
  using HasBits = decltype(std::declval<SmartRecorderStatus>()._has_bits_);
  static const ::apollo::common::Header& header(const SmartRecorderStatus* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_recording_state(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_state_message(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::common::Header&
SmartRecorderStatus::_Internal::header(const SmartRecorderStatus* msg) {
  return *msg->header_;
}
void SmartRecorderStatus::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
SmartRecorderStatus::SmartRecorderStatus()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.data.SmartRecorderStatus)
}
SmartRecorderStatus::SmartRecorderStatus(const SmartRecorderStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  state_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_state_message()) {
    state_message_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.state_message_);
  }
  if (from._internal_has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  recording_state_ = from.recording_state_;
  // @@protoc_insertion_point(copy_constructor:apollo.data.SmartRecorderStatus)
}

void SmartRecorderStatus::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SmartRecorderStatus_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto.base);
  state_message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&recording_state_) -
      reinterpret_cast<char*>(&header_)) + sizeof(recording_state_));
}

SmartRecorderStatus::~SmartRecorderStatus() {
  // @@protoc_insertion_point(destructor:apollo.data.SmartRecorderStatus)
  SharedDtor();
}

void SmartRecorderStatus::SharedDtor() {
  state_message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void SmartRecorderStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SmartRecorderStatus& SmartRecorderStatus::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SmartRecorderStatus_modules_2fdata_2ftools_2fsmart_5frecorder_2fproto_2fsmart_5frecorder_5fstatus_2eproto.base);
  return *internal_default_instance();
}


void SmartRecorderStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.data.SmartRecorderStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      state_message_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(header_ != nullptr);
      header_->Clear();
    }
  }
  recording_state_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* SmartRecorderStatus::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.common.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.data.RecordingState recording_state = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::data::RecordingState_IsValid(val))) {
            _internal_set_recording_state(static_cast<::apollo::data::RecordingState>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional string state_message = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_state_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.data.SmartRecorderStatus.state_message");
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

::PROTOBUF_NAMESPACE_ID::uint8* SmartRecorderStatus::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.data.SmartRecorderStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // optional .apollo.data.RecordingState recording_state = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_recording_state(), target);
  }

  // optional string state_message = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_state_message().data(), static_cast<int>(this->_internal_state_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.data.SmartRecorderStatus.state_message");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_state_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.data.SmartRecorderStatus)
  return target;
}

size_t SmartRecorderStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.data.SmartRecorderStatus)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string state_message = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_state_message());
    }

    // optional .apollo.common.Header header = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *header_);
    }

    // optional .apollo.data.RecordingState recording_state = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_recording_state());
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

void SmartRecorderStatus::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.data.SmartRecorderStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const SmartRecorderStatus* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SmartRecorderStatus>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.data.SmartRecorderStatus)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.data.SmartRecorderStatus)
    MergeFrom(*source);
  }
}

void SmartRecorderStatus::MergeFrom(const SmartRecorderStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.data.SmartRecorderStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      state_message_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.state_message_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_header()->::apollo::common::Header::MergeFrom(from._internal_header());
    }
    if (cached_has_bits & 0x00000004u) {
      recording_state_ = from.recording_state_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SmartRecorderStatus::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.data.SmartRecorderStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SmartRecorderStatus::CopyFrom(const SmartRecorderStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.data.SmartRecorderStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SmartRecorderStatus::IsInitialized() const {
  return true;
}

void SmartRecorderStatus::InternalSwap(SmartRecorderStatus* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  state_message_.Swap(&other->state_message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(recording_state_, other->recording_state_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SmartRecorderStatus::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::data::SmartRecorderStatus* Arena::CreateMaybeMessage< ::apollo::data::SmartRecorderStatus >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::data::SmartRecorderStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
