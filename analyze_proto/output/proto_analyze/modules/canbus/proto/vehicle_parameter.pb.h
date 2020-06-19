// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/canbus/proto/vehicle_parameter.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "modules/canbus/proto/chassis.pb.h"
#include "modules/common/configs/proto/vehicle_config.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto;
namespace apollo {
namespace canbus {
class VehicleParameter;
class VehicleParameterDefaultTypeInternal;
extern VehicleParameterDefaultTypeInternal _VehicleParameter_default_instance_;
}  // namespace canbus
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::canbus::VehicleParameter* Arena::CreateMaybeMessage<::apollo::canbus::VehicleParameter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace canbus {

// ===================================================================

class VehicleParameter :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.canbus.VehicleParameter) */ {
 public:
  VehicleParameter();
  virtual ~VehicleParameter();

  VehicleParameter(const VehicleParameter& from);
  VehicleParameter(VehicleParameter&& from) noexcept
    : VehicleParameter() {
    *this = ::std::move(from);
  }

  inline VehicleParameter& operator=(const VehicleParameter& from) {
    CopyFrom(from);
    return *this;
  }
  inline VehicleParameter& operator=(VehicleParameter&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const VehicleParameter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VehicleParameter* internal_default_instance() {
    return reinterpret_cast<const VehicleParameter*>(
               &_VehicleParameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VehicleParameter& a, VehicleParameter& b) {
    a.Swap(&b);
  }
  inline void Swap(VehicleParameter* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VehicleParameter* New() const final {
    return CreateMaybeMessage<VehicleParameter>(nullptr);
  }

  VehicleParameter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VehicleParameter>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VehicleParameter& from);
  void MergeFrom(const VehicleParameter& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VehicleParameter* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.canbus.VehicleParameter";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto);
    return ::descriptor_table_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMaxEnginePedalFieldNumber = 2,
    kBrandFieldNumber = 1,
    kMaxEnableFailAttemptFieldNumber = 3,
    kDrivingModeFieldNumber = 4,
  };
  // optional double max_engine_pedal = 2;
  bool has_max_engine_pedal() const;
  private:
  bool _internal_has_max_engine_pedal() const;
  public:
  void clear_max_engine_pedal();
  double max_engine_pedal() const;
  void set_max_engine_pedal(double value);
  private:
  double _internal_max_engine_pedal() const;
  void _internal_set_max_engine_pedal(double value);
  public:

  // optional .apollo.common.VehicleBrand brand = 1;
  bool has_brand() const;
  private:
  bool _internal_has_brand() const;
  public:
  void clear_brand();
  ::apollo::common::VehicleBrand brand() const;
  void set_brand(::apollo::common::VehicleBrand value);
  private:
  ::apollo::common::VehicleBrand _internal_brand() const;
  void _internal_set_brand(::apollo::common::VehicleBrand value);
  public:

  // optional int32 max_enable_fail_attempt = 3;
  bool has_max_enable_fail_attempt() const;
  private:
  bool _internal_has_max_enable_fail_attempt() const;
  public:
  void clear_max_enable_fail_attempt();
  ::PROTOBUF_NAMESPACE_ID::int32 max_enable_fail_attempt() const;
  void set_max_enable_fail_attempt(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_max_enable_fail_attempt() const;
  void _internal_set_max_enable_fail_attempt(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 4;
  bool has_driving_mode() const;
  private:
  bool _internal_has_driving_mode() const;
  public:
  void clear_driving_mode();
  ::apollo::canbus::Chassis_DrivingMode driving_mode() const;
  void set_driving_mode(::apollo::canbus::Chassis_DrivingMode value);
  private:
  ::apollo::canbus::Chassis_DrivingMode _internal_driving_mode() const;
  void _internal_set_driving_mode(::apollo::canbus::Chassis_DrivingMode value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.canbus.VehicleParameter)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double max_engine_pedal_;
  int brand_;
  ::PROTOBUF_NAMESPACE_ID::int32 max_enable_fail_attempt_;
  int driving_mode_;
  friend struct ::TableStruct_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VehicleParameter

// optional .apollo.common.VehicleBrand brand = 1;
inline bool VehicleParameter::_internal_has_brand() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool VehicleParameter::has_brand() const {
  return _internal_has_brand();
}
inline void VehicleParameter::clear_brand() {
  brand_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::common::VehicleBrand VehicleParameter::_internal_brand() const {
  return static_cast< ::apollo::common::VehicleBrand >(brand_);
}
inline ::apollo::common::VehicleBrand VehicleParameter::brand() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.brand)
  return _internal_brand();
}
inline void VehicleParameter::_internal_set_brand(::apollo::common::VehicleBrand value) {
  assert(::apollo::common::VehicleBrand_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  brand_ = value;
}
inline void VehicleParameter::set_brand(::apollo::common::VehicleBrand value) {
  _internal_set_brand(value);
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.brand)
}

// optional double max_engine_pedal = 2;
inline bool VehicleParameter::_internal_has_max_engine_pedal() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool VehicleParameter::has_max_engine_pedal() const {
  return _internal_has_max_engine_pedal();
}
inline void VehicleParameter::clear_max_engine_pedal() {
  max_engine_pedal_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double VehicleParameter::_internal_max_engine_pedal() const {
  return max_engine_pedal_;
}
inline double VehicleParameter::max_engine_pedal() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_engine_pedal)
  return _internal_max_engine_pedal();
}
inline void VehicleParameter::_internal_set_max_engine_pedal(double value) {
  _has_bits_[0] |= 0x00000001u;
  max_engine_pedal_ = value;
}
inline void VehicleParameter::set_max_engine_pedal(double value) {
  _internal_set_max_engine_pedal(value);
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_engine_pedal)
}

// optional int32 max_enable_fail_attempt = 3;
inline bool VehicleParameter::_internal_has_max_enable_fail_attempt() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool VehicleParameter::has_max_enable_fail_attempt() const {
  return _internal_has_max_enable_fail_attempt();
}
inline void VehicleParameter::clear_max_enable_fail_attempt() {
  max_enable_fail_attempt_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VehicleParameter::_internal_max_enable_fail_attempt() const {
  return max_enable_fail_attempt_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VehicleParameter::max_enable_fail_attempt() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.max_enable_fail_attempt)
  return _internal_max_enable_fail_attempt();
}
inline void VehicleParameter::_internal_set_max_enable_fail_attempt(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  max_enable_fail_attempt_ = value;
}
inline void VehicleParameter::set_max_enable_fail_attempt(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_max_enable_fail_attempt(value);
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.max_enable_fail_attempt)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 4;
inline bool VehicleParameter::_internal_has_driving_mode() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool VehicleParameter::has_driving_mode() const {
  return _internal_has_driving_mode();
}
inline void VehicleParameter::clear_driving_mode() {
  driving_mode_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::apollo::canbus::Chassis_DrivingMode VehicleParameter::_internal_driving_mode() const {
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
inline ::apollo::canbus::Chassis_DrivingMode VehicleParameter::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.canbus.VehicleParameter.driving_mode)
  return _internal_driving_mode();
}
inline void VehicleParameter::_internal_set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  assert(::apollo::canbus::Chassis_DrivingMode_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  driving_mode_ = value;
}
inline void VehicleParameter::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  _internal_set_driving_mode(value);
  // @@protoc_insertion_point(field_set:apollo.canbus.VehicleParameter.driving_mode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace canbus
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto