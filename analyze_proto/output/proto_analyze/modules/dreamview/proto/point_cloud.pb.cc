// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/dreamview/proto/point_cloud.proto

#include "modules/dreamview/proto/point_cloud.pb.h"

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
namespace dreamview {
class PointCloudDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PointCloud> _instance;
} _PointCloud_default_instance_;
}  // namespace dreamview
}  // namespace apollo
static void InitDefaultsscc_info_PointCloud_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::dreamview::_PointCloud_default_instance_;
    new (ptr) ::apollo::dreamview::PointCloud();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::dreamview::PointCloud::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PointCloud_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PointCloud_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::dreamview::PointCloud, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::dreamview::PointCloud, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::dreamview::PointCloud, num_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::apollo::dreamview::PointCloud)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::dreamview::_PointCloud_default_instance_),
};

const char descriptor_table_protodef_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n)modules/dreamview/proto/point_cloud.pr"
  "oto\022\020apollo.dreamview\"\035\n\nPointCloud\022\017\n\003n"
  "um\030\001 \003(\002B\002\020\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_sccs[1] = {
  &scc_info_PointCloud_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_once;
static bool descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto = {
  &descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_initialized, descriptor_table_protodef_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto, "modules/dreamview/proto/point_cloud.proto", 92,
  &descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_once, descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_sccs, descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto::offsets,
  file_level_metadata_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto, 1, file_level_enum_descriptors_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto, file_level_service_descriptors_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto), true);
namespace apollo {
namespace dreamview {

// ===================================================================

void PointCloud::InitAsDefaultInstance() {
}
class PointCloud::_Internal {
 public:
  using HasBits = decltype(std::declval<PointCloud>()._has_bits_);
};

PointCloud::PointCloud()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.dreamview.PointCloud)
}
PointCloud::PointCloud(const PointCloud& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      num_(from.num_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:apollo.dreamview.PointCloud)
}

void PointCloud::SharedCtor() {
}

PointCloud::~PointCloud() {
  // @@protoc_insertion_point(destructor:apollo.dreamview.PointCloud)
  SharedDtor();
}

void PointCloud::SharedDtor() {
}

void PointCloud::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PointCloud& PointCloud::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PointCloud_modules_2fdreamview_2fproto_2fpoint_5fcloud_2eproto.base);
  return *internal_default_instance();
}


void PointCloud::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.dreamview.PointCloud)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  num_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PointCloud::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated float num = 1 [packed = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_num(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13) {
          _internal_add_num(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
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

::PROTOBUF_NAMESPACE_ID::uint8* PointCloud::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.dreamview.PointCloud)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float num = 1 [packed = true];
  if (this->_internal_num_size() > 0) {
    target = stream->WriteFixedPacked(1, _internal_num(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.dreamview.PointCloud)
  return target;
}

size_t PointCloud::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.dreamview.PointCloud)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float num = 1 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_num_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _num_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PointCloud::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.dreamview.PointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  const PointCloud* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PointCloud>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.dreamview.PointCloud)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.dreamview.PointCloud)
    MergeFrom(*source);
  }
}

void PointCloud::MergeFrom(const PointCloud& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.dreamview.PointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  num_.MergeFrom(from.num_);
}

void PointCloud::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.dreamview.PointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PointCloud::CopyFrom(const PointCloud& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.dreamview.PointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PointCloud::IsInitialized() const {
  return true;
}

void PointCloud::InternalSwap(PointCloud* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  num_.InternalSwap(&other->num_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PointCloud::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dreamview
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::dreamview::PointCloud* Arena::CreateMaybeMessage< ::apollo::dreamview::PointCloud >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::dreamview::PointCloud >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
