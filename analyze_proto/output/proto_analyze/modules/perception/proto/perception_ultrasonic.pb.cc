// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/perception_ultrasonic.proto

#include "modules/perception/proto/perception_ultrasonic.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2fcommon_2fproto_2fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Point3D_modules_2fcommon_2fproto_2fgeometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto;
namespace apollo {
namespace perception {
class ImpendingCollisionEdgeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ImpendingCollisionEdge> _instance;
} _ImpendingCollisionEdge_default_instance_;
class ImpendingCollisionEdgesDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ImpendingCollisionEdges> _instance;
} _ImpendingCollisionEdges_default_instance_;
}  // namespace perception
}  // namespace apollo
static void InitDefaultsscc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::perception::_ImpendingCollisionEdge_default_instance_;
    new (ptr) ::apollo::perception::ImpendingCollisionEdge();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::ImpendingCollisionEdge::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto}, {
      &scc_info_Point3D_modules_2fcommon_2fproto_2fgeometry_2eproto.base,}};

static void InitDefaultsscc_info_ImpendingCollisionEdges_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::perception::_ImpendingCollisionEdges_default_instance_;
    new (ptr) ::apollo::perception::ImpendingCollisionEdges();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::perception::ImpendingCollisionEdges::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ImpendingCollisionEdges_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ImpendingCollisionEdges_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto}, {
      &scc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base,
      &scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdge, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdge, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdge, id_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdge, cone_id_list_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdge, point_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdge, tracking_time_),
  1,
  ~0u,
  ~0u,
  0,
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdges, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdges, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdges, impending_collision_edge_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::ImpendingCollisionEdges, header_),
  ~0u,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::apollo::perception::ImpendingCollisionEdge)},
  { 13, 20, sizeof(::apollo::perception::ImpendingCollisionEdges)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::_ImpendingCollisionEdge_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::perception::_ImpendingCollisionEdges_default_instance_),
};

const char descriptor_table_protodef_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n4modules/perception/proto/perception_ul"
  "trasonic.proto\022\021apollo.perception\032!modul"
  "es/common/proto/header.proto\032#modules/co"
  "mmon/proto/geometry.proto\"|\n\026ImpendingCo"
  "llisionEdge\022\n\n\002id\030\001 \001(\005\022\030\n\014cone_id_list\030"
  "\002 \003(\005B\002\030\001\022%\n\005point\030\003 \003(\0132\026.apollo.common"
  ".Point3D\022\025\n\rtracking_time\030\004 \001(\001\"\215\001\n\027Impe"
  "ndingCollisionEdges\022K\n\030impending_collisi"
  "on_edge\030\001 \003(\0132).apollo.perception.Impend"
  "ingCollisionEdge\022%\n\006header\030\002 \001(\0132\025.apoll"
  "o.common.Header"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_deps[2] = {
  &::descriptor_table_modules_2fcommon_2fproto_2fgeometry_2eproto,
  &::descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_sccs[2] = {
  &scc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base,
  &scc_info_ImpendingCollisionEdges_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_once;
static bool descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto = {
  &descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_initialized, descriptor_table_protodef_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto, "modules/perception/proto/perception_ultrasonic.proto", 415,
  &descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_once, descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_sccs, descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto::offsets,
  file_level_metadata_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto, 2, file_level_enum_descriptors_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto, file_level_service_descriptors_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto), true);
namespace apollo {
namespace perception {

// ===================================================================

void ImpendingCollisionEdge::InitAsDefaultInstance() {
}
class ImpendingCollisionEdge::_Internal {
 public:
  using HasBits = decltype(std::declval<ImpendingCollisionEdge>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_tracking_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

void ImpendingCollisionEdge::clear_point() {
  point_.Clear();
}
ImpendingCollisionEdge::ImpendingCollisionEdge()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.ImpendingCollisionEdge)
}
ImpendingCollisionEdge::ImpendingCollisionEdge(const ImpendingCollisionEdge& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      cone_id_list_(from.cone_id_list_),
      point_(from.point_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&tracking_time_, &from.tracking_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&tracking_time_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:apollo.perception.ImpendingCollisionEdge)
}

void ImpendingCollisionEdge::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base);
  ::memset(&tracking_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&tracking_time_)) + sizeof(id_));
}

ImpendingCollisionEdge::~ImpendingCollisionEdge() {
  // @@protoc_insertion_point(destructor:apollo.perception.ImpendingCollisionEdge)
  SharedDtor();
}

void ImpendingCollisionEdge::SharedDtor() {
}

void ImpendingCollisionEdge::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ImpendingCollisionEdge& ImpendingCollisionEdge::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ImpendingCollisionEdge_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base);
  return *internal_default_instance();
}


void ImpendingCollisionEdge::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.ImpendingCollisionEdge)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cone_id_list_.Clear();
  point_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&tracking_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&id_) -
        reinterpret_cast<char*>(&tracking_time_)) + sizeof(id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ImpendingCollisionEdge::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 cone_id_list = 2 [deprecated = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_cone_id_list(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_cone_id_list(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.common.Point3D point = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_point(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // optional double tracking_time = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_tracking_time(&has_bits);
          tracking_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ImpendingCollisionEdge::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.ImpendingCollisionEdge)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // repeated int32 cone_id_list = 2 [deprecated = true];
  for (int i = 0, n = this->_internal_cone_id_list_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_cone_id_list(i), target);
  }

  // repeated .apollo.common.Point3D point = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_point_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_point(i), target, stream);
  }

  // optional double tracking_time = 4;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_tracking_time(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.ImpendingCollisionEdge)
  return target;
}

size_t ImpendingCollisionEdge::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.ImpendingCollisionEdge)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 cone_id_list = 2 [deprecated = true];
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->cone_id_list_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_cone_id_list_size());
    total_size += data_size;
  }

  // repeated .apollo.common.Point3D point = 3;
  total_size += 1UL * this->_internal_point_size();
  for (const auto& msg : this->point_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional double tracking_time = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional int32 id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_id());
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

void ImpendingCollisionEdge::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.ImpendingCollisionEdge)
  GOOGLE_DCHECK_NE(&from, this);
  const ImpendingCollisionEdge* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ImpendingCollisionEdge>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.ImpendingCollisionEdge)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.ImpendingCollisionEdge)
    MergeFrom(*source);
  }
}

void ImpendingCollisionEdge::MergeFrom(const ImpendingCollisionEdge& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.ImpendingCollisionEdge)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cone_id_list_.MergeFrom(from.cone_id_list_);
  point_.MergeFrom(from.point_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      tracking_time_ = from.tracking_time_;
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ImpendingCollisionEdge::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.ImpendingCollisionEdge)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImpendingCollisionEdge::CopyFrom(const ImpendingCollisionEdge& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.ImpendingCollisionEdge)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImpendingCollisionEdge::IsInitialized() const {
  return true;
}

void ImpendingCollisionEdge::InternalSwap(ImpendingCollisionEdge* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  cone_id_list_.InternalSwap(&other->cone_id_list_);
  point_.InternalSwap(&other->point_);
  swap(tracking_time_, other->tracking_time_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ImpendingCollisionEdge::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ImpendingCollisionEdges::InitAsDefaultInstance() {
  ::apollo::perception::_ImpendingCollisionEdges_default_instance_._instance.get_mutable()->header_ = const_cast< ::apollo::common::Header*>(
      ::apollo::common::Header::internal_default_instance());
}
class ImpendingCollisionEdges::_Internal {
 public:
  using HasBits = decltype(std::declval<ImpendingCollisionEdges>()._has_bits_);
  static const ::apollo::common::Header& header(const ImpendingCollisionEdges* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::common::Header&
ImpendingCollisionEdges::_Internal::header(const ImpendingCollisionEdges* msg) {
  return *msg->header_;
}
void ImpendingCollisionEdges::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
ImpendingCollisionEdges::ImpendingCollisionEdges()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.perception.ImpendingCollisionEdges)
}
ImpendingCollisionEdges::ImpendingCollisionEdges(const ImpendingCollisionEdges& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      impending_collision_edge_(from.impending_collision_edge_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.perception.ImpendingCollisionEdges)
}

void ImpendingCollisionEdges::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ImpendingCollisionEdges_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base);
  header_ = nullptr;
}

ImpendingCollisionEdges::~ImpendingCollisionEdges() {
  // @@protoc_insertion_point(destructor:apollo.perception.ImpendingCollisionEdges)
  SharedDtor();
}

void ImpendingCollisionEdges::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void ImpendingCollisionEdges::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ImpendingCollisionEdges& ImpendingCollisionEdges::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ImpendingCollisionEdges_modules_2fperception_2fproto_2fperception_5fultrasonic_2eproto.base);
  return *internal_default_instance();
}


void ImpendingCollisionEdges::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.ImpendingCollisionEdges)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  impending_collision_edge_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(header_ != nullptr);
    header_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ImpendingCollisionEdges::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .apollo.perception.ImpendingCollisionEdge impending_collision_edge = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_impending_collision_edge(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Header header = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ImpendingCollisionEdges::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.ImpendingCollisionEdges)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .apollo.perception.ImpendingCollisionEdge impending_collision_edge = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_impending_collision_edge_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_impending_collision_edge(i), target, stream);
  }

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::header(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.ImpendingCollisionEdges)
  return target;
}

size_t ImpendingCollisionEdges::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.ImpendingCollisionEdges)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.perception.ImpendingCollisionEdge impending_collision_edge = 1;
  total_size += 1UL * this->_internal_impending_collision_edge_size();
  for (const auto& msg : this->impending_collision_edge_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional .apollo.common.Header header = 2;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ImpendingCollisionEdges::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.perception.ImpendingCollisionEdges)
  GOOGLE_DCHECK_NE(&from, this);
  const ImpendingCollisionEdges* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ImpendingCollisionEdges>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.perception.ImpendingCollisionEdges)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.perception.ImpendingCollisionEdges)
    MergeFrom(*source);
  }
}

void ImpendingCollisionEdges::MergeFrom(const ImpendingCollisionEdges& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.ImpendingCollisionEdges)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  impending_collision_edge_.MergeFrom(from.impending_collision_edge_);
  if (from._internal_has_header()) {
    _internal_mutable_header()->::apollo::common::Header::MergeFrom(from._internal_header());
  }
}

void ImpendingCollisionEdges::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.perception.ImpendingCollisionEdges)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImpendingCollisionEdges::CopyFrom(const ImpendingCollisionEdges& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.ImpendingCollisionEdges)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImpendingCollisionEdges::IsInitialized() const {
  return true;
}

void ImpendingCollisionEdges::InternalSwap(ImpendingCollisionEdges* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  impending_collision_edge_.InternalSwap(&other->impending_collision_edge_);
  swap(header_, other->header_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ImpendingCollisionEdges::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::ImpendingCollisionEdge* Arena::CreateMaybeMessage< ::apollo::perception::ImpendingCollisionEdge >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::ImpendingCollisionEdge >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::perception::ImpendingCollisionEdges* Arena::CreateMaybeMessage< ::apollo::perception::ImpendingCollisionEdges >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::perception::ImpendingCollisionEdges >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
