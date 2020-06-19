// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/routing/proto/poi.proto

#include "modules/routing/proto/poi.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2frouting_2fproto_2fpoi_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_modules_2frouting_2fproto_2frouting_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LaneWaypoint_modules_2frouting_2fproto_2frouting_2eproto;
namespace apollo {
namespace routing {
class LandmarkDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Landmark> _instance;
} _Landmark_default_instance_;
class POIDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<POI> _instance;
} _POI_default_instance_;
}  // namespace routing
}  // namespace apollo
static void InitDefaultsscc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::routing::_Landmark_default_instance_;
    new (ptr) ::apollo::routing::Landmark();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::routing::Landmark::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto}, {
      &scc_info_LaneWaypoint_modules_2frouting_2fproto_2frouting_2eproto.base,}};

static void InitDefaultsscc_info_POI_modules_2frouting_2fproto_2fpoi_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::routing::_POI_default_instance_;
    new (ptr) ::apollo::routing::POI();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::routing::POI::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_POI_modules_2frouting_2fproto_2fpoi_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_POI_modules_2frouting_2fproto_2fpoi_2eproto}, {
      &scc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2frouting_2fproto_2fpoi_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2frouting_2fproto_2fpoi_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2frouting_2fproto_2fpoi_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2frouting_2fproto_2fpoi_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::routing::Landmark, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::routing::Landmark, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::routing::Landmark, name_),
  PROTOBUF_FIELD_OFFSET(::apollo::routing::Landmark, waypoint_),
  PROTOBUF_FIELD_OFFSET(::apollo::routing::Landmark, parking_space_id_),
  0,
  ~0u,
  1,
  PROTOBUF_FIELD_OFFSET(::apollo::routing::POI, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::routing::POI, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::routing::POI, landmark_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::apollo::routing::Landmark)},
  { 11, 17, sizeof(::apollo::routing::POI)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::routing::_Landmark_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::routing::_POI_default_instance_),
};

const char descriptor_table_protodef_modules_2frouting_2fproto_2fpoi_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037modules/routing/proto/poi.proto\022\016apoll"
  "o.routing\032#modules/routing/proto/routing"
  ".proto\"b\n\010Landmark\022\014\n\004name\030\001 \001(\t\022.\n\010wayp"
  "oint\030\002 \003(\0132\034.apollo.routing.LaneWaypoint"
  "\022\030\n\020parking_space_id\030\003 \001(\t\"1\n\003POI\022*\n\010lan"
  "dmark\030\001 \003(\0132\030.apollo.routing.Landmark"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_deps[1] = {
  &::descriptor_table_modules_2frouting_2fproto_2frouting_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_sccs[2] = {
  &scc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto.base,
  &scc_info_POI_modules_2frouting_2fproto_2fpoi_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_once;
static bool descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto = {
  &descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_initialized, descriptor_table_protodef_modules_2frouting_2fproto_2fpoi_2eproto, "modules/routing/proto/poi.proto", 237,
  &descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_once, descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_sccs, descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_modules_2frouting_2fproto_2fpoi_2eproto::offsets,
  file_level_metadata_modules_2frouting_2fproto_2fpoi_2eproto, 2, file_level_enum_descriptors_modules_2frouting_2fproto_2fpoi_2eproto, file_level_service_descriptors_modules_2frouting_2fproto_2fpoi_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2frouting_2fproto_2fpoi_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2frouting_2fproto_2fpoi_2eproto), true);
namespace apollo {
namespace routing {

// ===================================================================

void Landmark::InitAsDefaultInstance() {
}
class Landmark::_Internal {
 public:
  using HasBits = decltype(std::declval<Landmark>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_parking_space_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

void Landmark::clear_waypoint() {
  waypoint_.Clear();
}
Landmark::Landmark()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.routing.Landmark)
}
Landmark::Landmark(const Landmark& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      waypoint_(from.waypoint_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  parking_space_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_parking_space_id()) {
    parking_space_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.parking_space_id_);
  }
  // @@protoc_insertion_point(copy_constructor:apollo.routing.Landmark)
}

void Landmark::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  parking_space_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Landmark::~Landmark() {
  // @@protoc_insertion_point(destructor:apollo.routing.Landmark)
  SharedDtor();
}

void Landmark::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  parking_space_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Landmark::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Landmark& Landmark::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Landmark_modules_2frouting_2fproto_2fpoi_2eproto.base);
  return *internal_default_instance();
}


void Landmark::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.routing.Landmark)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  waypoint_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      parking_space_id_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Landmark::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.routing.Landmark.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.routing.LaneWaypoint waypoint = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_waypoint(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // optional string parking_space_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_parking_space_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.routing.Landmark.parking_space_id");
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

::PROTOBUF_NAMESPACE_ID::uint8* Landmark::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.routing.Landmark)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.routing.Landmark.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // repeated .apollo.routing.LaneWaypoint waypoint = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_waypoint_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_waypoint(i), target, stream);
  }

  // optional string parking_space_id = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_parking_space_id().data(), static_cast<int>(this->_internal_parking_space_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.routing.Landmark.parking_space_id");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_parking_space_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.routing.Landmark)
  return target;
}

size_t Landmark::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.routing.Landmark)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.routing.LaneWaypoint waypoint = 2;
  total_size += 1UL * this->_internal_waypoint_size();
  for (const auto& msg : this->waypoint_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional string parking_space_id = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_parking_space_id());
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

void Landmark::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.routing.Landmark)
  GOOGLE_DCHECK_NE(&from, this);
  const Landmark* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Landmark>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.routing.Landmark)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.routing.Landmark)
    MergeFrom(*source);
  }
}

void Landmark::MergeFrom(const Landmark& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.routing.Landmark)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  waypoint_.MergeFrom(from.waypoint_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      parking_space_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.parking_space_id_);
    }
  }
}

void Landmark::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.routing.Landmark)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Landmark::CopyFrom(const Landmark& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.routing.Landmark)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Landmark::IsInitialized() const {
  return true;
}

void Landmark::InternalSwap(Landmark* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  waypoint_.InternalSwap(&other->waypoint_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  parking_space_id_.Swap(&other->parking_space_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Landmark::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void POI::InitAsDefaultInstance() {
}
class POI::_Internal {
 public:
  using HasBits = decltype(std::declval<POI>()._has_bits_);
};

POI::POI()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.routing.POI)
}
POI::POI(const POI& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      landmark_(from.landmark_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:apollo.routing.POI)
}

void POI::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_POI_modules_2frouting_2fproto_2fpoi_2eproto.base);
}

POI::~POI() {
  // @@protoc_insertion_point(destructor:apollo.routing.POI)
  SharedDtor();
}

void POI::SharedDtor() {
}

void POI::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const POI& POI::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_POI_modules_2frouting_2fproto_2fpoi_2eproto.base);
  return *internal_default_instance();
}


void POI::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.routing.POI)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  landmark_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* POI::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .apollo.routing.Landmark landmark = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_landmark(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* POI::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.routing.POI)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .apollo.routing.Landmark landmark = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_landmark_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_landmark(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.routing.POI)
  return target;
}

size_t POI::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.routing.POI)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.routing.Landmark landmark = 1;
  total_size += 1UL * this->_internal_landmark_size();
  for (const auto& msg : this->landmark_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void POI::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.routing.POI)
  GOOGLE_DCHECK_NE(&from, this);
  const POI* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<POI>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.routing.POI)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.routing.POI)
    MergeFrom(*source);
  }
}

void POI::MergeFrom(const POI& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.routing.POI)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  landmark_.MergeFrom(from.landmark_);
}

void POI::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.routing.POI)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void POI::CopyFrom(const POI& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.routing.POI)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool POI::IsInitialized() const {
  return true;
}

void POI::InternalSwap(POI* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  landmark_.InternalSwap(&other->landmark_);
}

::PROTOBUF_NAMESPACE_ID::Metadata POI::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace routing
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::routing::Landmark* Arena::CreateMaybeMessage< ::apollo::routing::Landmark >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::routing::Landmark >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::routing::POI* Arena::CreateMaybeMessage< ::apollo::routing::POI >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::routing::POI >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
