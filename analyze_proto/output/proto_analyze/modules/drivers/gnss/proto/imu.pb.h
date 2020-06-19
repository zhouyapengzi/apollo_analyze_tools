// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/drivers/gnss/proto/imu.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto

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
#include "modules/common/proto/header.pb.h"
#include "modules/common/proto/geometry.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto;
namespace apollo {
namespace drivers {
namespace gnss {
class Imu;
class ImuDefaultTypeInternal;
extern ImuDefaultTypeInternal _Imu_default_instance_;
}  // namespace gnss
}  // namespace drivers
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::drivers::gnss::Imu* Arena::CreateMaybeMessage<::apollo::drivers::gnss::Imu>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace drivers {
namespace gnss {

// ===================================================================

class Imu :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.drivers.gnss.Imu) */ {
 public:
  Imu();
  virtual ~Imu();

  Imu(const Imu& from);
  Imu(Imu&& from) noexcept
    : Imu() {
    *this = ::std::move(from);
  }

  inline Imu& operator=(const Imu& from) {
    CopyFrom(from);
    return *this;
  }
  inline Imu& operator=(Imu&& from) noexcept {
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
  static const Imu& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Imu* internal_default_instance() {
    return reinterpret_cast<const Imu*>(
               &_Imu_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Imu& a, Imu& b) {
    a.Swap(&b);
  }
  inline void Swap(Imu* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Imu* New() const final {
    return CreateMaybeMessage<Imu>(nullptr);
  }

  Imu* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Imu>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Imu& from);
  void MergeFrom(const Imu& from);
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
  void InternalSwap(Imu* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.drivers.gnss.Imu";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto);
    return ::descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kLinearAccelerationFieldNumber = 4,
    kAngularVelocityFieldNumber = 5,
    kMeasurementTimeFieldNumber = 2,
    kMeasurementSpanFieldNumber = 3,
  };
  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* release_header();
  ::apollo::common::Header* mutable_header();
  void set_allocated_header(::apollo::common::Header* header);
  private:
  const ::apollo::common::Header& _internal_header() const;
  ::apollo::common::Header* _internal_mutable_header();
  public:

  // optional .apollo.common.Point3D linear_acceleration = 4;
  bool has_linear_acceleration() const;
  private:
  bool _internal_has_linear_acceleration() const;
  public:
  void clear_linear_acceleration();
  const ::apollo::common::Point3D& linear_acceleration() const;
  ::apollo::common::Point3D* release_linear_acceleration();
  ::apollo::common::Point3D* mutable_linear_acceleration();
  void set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration);
  private:
  const ::apollo::common::Point3D& _internal_linear_acceleration() const;
  ::apollo::common::Point3D* _internal_mutable_linear_acceleration();
  public:

  // optional .apollo.common.Point3D angular_velocity = 5;
  bool has_angular_velocity() const;
  private:
  bool _internal_has_angular_velocity() const;
  public:
  void clear_angular_velocity();
  const ::apollo::common::Point3D& angular_velocity() const;
  ::apollo::common::Point3D* release_angular_velocity();
  ::apollo::common::Point3D* mutable_angular_velocity();
  void set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity);
  private:
  const ::apollo::common::Point3D& _internal_angular_velocity() const;
  ::apollo::common::Point3D* _internal_mutable_angular_velocity();
  public:

  // optional double measurement_time = 2;
  bool has_measurement_time() const;
  private:
  bool _internal_has_measurement_time() const;
  public:
  void clear_measurement_time();
  double measurement_time() const;
  void set_measurement_time(double value);
  private:
  double _internal_measurement_time() const;
  void _internal_set_measurement_time(double value);
  public:

  // optional float measurement_span = 3 [default = 0];
  bool has_measurement_span() const;
  private:
  bool _internal_has_measurement_span() const;
  public:
  void clear_measurement_span();
  float measurement_span() const;
  void set_measurement_span(float value);
  private:
  float _internal_measurement_span() const;
  void _internal_set_measurement_span(float value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.drivers.gnss.Imu)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::common::Header* header_;
  ::apollo::common::Point3D* linear_acceleration_;
  ::apollo::common::Point3D* angular_velocity_;
  double measurement_time_;
  float measurement_span_;
  friend struct ::TableStruct_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Imu

// optional .apollo.common.Header header = 1;
inline bool Imu::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool Imu::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& Imu::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Header*>(
      &::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& Imu::header() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.header)
  return _internal_header();
}
inline ::apollo::common::Header* Imu::release_header() {
  // @@protoc_insertion_point(field_release:apollo.drivers.gnss.Imu.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* Imu::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* Imu::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.gnss.Imu.header)
  return _internal_mutable_header();
}
inline void Imu::set_allocated_header(::apollo::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.gnss.Imu.header)
}

// optional double measurement_time = 2;
inline bool Imu::_internal_has_measurement_time() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Imu::has_measurement_time() const {
  return _internal_has_measurement_time();
}
inline void Imu::clear_measurement_time() {
  measurement_time_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Imu::_internal_measurement_time() const {
  return measurement_time_;
}
inline double Imu::measurement_time() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.measurement_time)
  return _internal_measurement_time();
}
inline void Imu::_internal_set_measurement_time(double value) {
  _has_bits_[0] |= 0x00000008u;
  measurement_time_ = value;
}
inline void Imu::set_measurement_time(double value) {
  _internal_set_measurement_time(value);
  // @@protoc_insertion_point(field_set:apollo.drivers.gnss.Imu.measurement_time)
}

// optional float measurement_span = 3 [default = 0];
inline bool Imu::_internal_has_measurement_span() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Imu::has_measurement_span() const {
  return _internal_has_measurement_span();
}
inline void Imu::clear_measurement_span() {
  measurement_span_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline float Imu::_internal_measurement_span() const {
  return measurement_span_;
}
inline float Imu::measurement_span() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.measurement_span)
  return _internal_measurement_span();
}
inline void Imu::_internal_set_measurement_span(float value) {
  _has_bits_[0] |= 0x00000010u;
  measurement_span_ = value;
}
inline void Imu::set_measurement_span(float value) {
  _internal_set_measurement_span(value);
  // @@protoc_insertion_point(field_set:apollo.drivers.gnss.Imu.measurement_span)
}

// optional .apollo.common.Point3D linear_acceleration = 4;
inline bool Imu::_internal_has_linear_acceleration() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || linear_acceleration_ != nullptr);
  return value;
}
inline bool Imu::has_linear_acceleration() const {
  return _internal_has_linear_acceleration();
}
inline const ::apollo::common::Point3D& Imu::_internal_linear_acceleration() const {
  const ::apollo::common::Point3D* p = linear_acceleration_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Imu::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.linear_acceleration)
  return _internal_linear_acceleration();
}
inline ::apollo::common::Point3D* Imu::release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:apollo.drivers.gnss.Imu.linear_acceleration)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::common::Point3D* temp = linear_acceleration_;
  linear_acceleration_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Imu::_internal_mutable_linear_acceleration() {
  _has_bits_[0] |= 0x00000002u;
  if (linear_acceleration_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_acceleration_ = p;
  }
  return linear_acceleration_;
}
inline ::apollo::common::Point3D* Imu::mutable_linear_acceleration() {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.gnss.Imu.linear_acceleration)
  return _internal_mutable_linear_acceleration();
}
inline void Imu::set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(linear_acceleration_);
  }
  if (linear_acceleration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      linear_acceleration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, linear_acceleration, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  linear_acceleration_ = linear_acceleration;
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.gnss.Imu.linear_acceleration)
}

// optional .apollo.common.Point3D angular_velocity = 5;
inline bool Imu::_internal_has_angular_velocity() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || angular_velocity_ != nullptr);
  return value;
}
inline bool Imu::has_angular_velocity() const {
  return _internal_has_angular_velocity();
}
inline const ::apollo::common::Point3D& Imu::_internal_angular_velocity() const {
  const ::apollo::common::Point3D* p = angular_velocity_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Imu::angular_velocity() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.gnss.Imu.angular_velocity)
  return _internal_angular_velocity();
}
inline ::apollo::common::Point3D* Imu::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:apollo.drivers.gnss.Imu.angular_velocity)
  _has_bits_[0] &= ~0x00000004u;
  ::apollo::common::Point3D* temp = angular_velocity_;
  angular_velocity_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Imu::_internal_mutable_angular_velocity() {
  _has_bits_[0] |= 0x00000004u;
  if (angular_velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    angular_velocity_ = p;
  }
  return angular_velocity_;
}
inline ::apollo::common::Point3D* Imu::mutable_angular_velocity() {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.gnss.Imu.angular_velocity)
  return _internal_mutable_angular_velocity();
}
inline void Imu::set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(angular_velocity_);
  }
  if (angular_velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      angular_velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, angular_velocity, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  angular_velocity_ = angular_velocity;
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.gnss.Imu.angular_velocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace gnss
}  // namespace drivers
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto
