// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/localization/proto/pose.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2fpose_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2fpose_2eproto

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
#include "modules/common/proto/geometry.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2flocalization_2fproto_2fpose_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2flocalization_2fproto_2fpose_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2flocalization_2fproto_2fpose_2eproto;
namespace apollo {
namespace localization {
class Pose;
class PoseDefaultTypeInternal;
extern PoseDefaultTypeInternal _Pose_default_instance_;
}  // namespace localization
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::localization::Pose* Arena::CreateMaybeMessage<::apollo::localization::Pose>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace localization {

// ===================================================================

class Pose :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.localization.Pose) */ {
 public:
  Pose();
  virtual ~Pose();

  Pose(const Pose& from);
  Pose(Pose&& from) noexcept
    : Pose() {
    *this = ::std::move(from);
  }

  inline Pose& operator=(const Pose& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pose& operator=(Pose&& from) noexcept {
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
  static const Pose& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Pose* internal_default_instance() {
    return reinterpret_cast<const Pose*>(
               &_Pose_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Pose& a, Pose& b) {
    a.Swap(&b);
  }
  inline void Swap(Pose* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Pose* New() const final {
    return CreateMaybeMessage<Pose>(nullptr);
  }

  Pose* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Pose>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Pose& from);
  void MergeFrom(const Pose& from);
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
  void InternalSwap(Pose* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.localization.Pose";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2flocalization_2fproto_2fpose_2eproto);
    return ::descriptor_table_modules_2flocalization_2fproto_2fpose_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPositionFieldNumber = 1,
    kOrientationFieldNumber = 2,
    kLinearVelocityFieldNumber = 3,
    kLinearAccelerationFieldNumber = 4,
    kAngularVelocityFieldNumber = 5,
    kLinearAccelerationVrfFieldNumber = 7,
    kAngularVelocityVrfFieldNumber = 8,
    kEulerAnglesFieldNumber = 9,
    kHeadingFieldNumber = 6,
  };
  // optional .apollo.common.PointENU position = 1;
  bool has_position() const;
  private:
  bool _internal_has_position() const;
  public:
  void clear_position();
  const ::apollo::common::PointENU& position() const;
  ::apollo::common::PointENU* release_position();
  ::apollo::common::PointENU* mutable_position();
  void set_allocated_position(::apollo::common::PointENU* position);
  private:
  const ::apollo::common::PointENU& _internal_position() const;
  ::apollo::common::PointENU* _internal_mutable_position();
  public:

  // optional .apollo.common.Quaternion orientation = 2;
  bool has_orientation() const;
  private:
  bool _internal_has_orientation() const;
  public:
  void clear_orientation();
  const ::apollo::common::Quaternion& orientation() const;
  ::apollo::common::Quaternion* release_orientation();
  ::apollo::common::Quaternion* mutable_orientation();
  void set_allocated_orientation(::apollo::common::Quaternion* orientation);
  private:
  const ::apollo::common::Quaternion& _internal_orientation() const;
  ::apollo::common::Quaternion* _internal_mutable_orientation();
  public:

  // optional .apollo.common.Point3D linear_velocity = 3;
  bool has_linear_velocity() const;
  private:
  bool _internal_has_linear_velocity() const;
  public:
  void clear_linear_velocity();
  const ::apollo::common::Point3D& linear_velocity() const;
  ::apollo::common::Point3D* release_linear_velocity();
  ::apollo::common::Point3D* mutable_linear_velocity();
  void set_allocated_linear_velocity(::apollo::common::Point3D* linear_velocity);
  private:
  const ::apollo::common::Point3D& _internal_linear_velocity() const;
  ::apollo::common::Point3D* _internal_mutable_linear_velocity();
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

  // optional .apollo.common.Point3D linear_acceleration_vrf = 7;
  bool has_linear_acceleration_vrf() const;
  private:
  bool _internal_has_linear_acceleration_vrf() const;
  public:
  void clear_linear_acceleration_vrf();
  const ::apollo::common::Point3D& linear_acceleration_vrf() const;
  ::apollo::common::Point3D* release_linear_acceleration_vrf();
  ::apollo::common::Point3D* mutable_linear_acceleration_vrf();
  void set_allocated_linear_acceleration_vrf(::apollo::common::Point3D* linear_acceleration_vrf);
  private:
  const ::apollo::common::Point3D& _internal_linear_acceleration_vrf() const;
  ::apollo::common::Point3D* _internal_mutable_linear_acceleration_vrf();
  public:

  // optional .apollo.common.Point3D angular_velocity_vrf = 8;
  bool has_angular_velocity_vrf() const;
  private:
  bool _internal_has_angular_velocity_vrf() const;
  public:
  void clear_angular_velocity_vrf();
  const ::apollo::common::Point3D& angular_velocity_vrf() const;
  ::apollo::common::Point3D* release_angular_velocity_vrf();
  ::apollo::common::Point3D* mutable_angular_velocity_vrf();
  void set_allocated_angular_velocity_vrf(::apollo::common::Point3D* angular_velocity_vrf);
  private:
  const ::apollo::common::Point3D& _internal_angular_velocity_vrf() const;
  ::apollo::common::Point3D* _internal_mutable_angular_velocity_vrf();
  public:

  // optional .apollo.common.Point3D euler_angles = 9;
  bool has_euler_angles() const;
  private:
  bool _internal_has_euler_angles() const;
  public:
  void clear_euler_angles();
  const ::apollo::common::Point3D& euler_angles() const;
  ::apollo::common::Point3D* release_euler_angles();
  ::apollo::common::Point3D* mutable_euler_angles();
  void set_allocated_euler_angles(::apollo::common::Point3D* euler_angles);
  private:
  const ::apollo::common::Point3D& _internal_euler_angles() const;
  ::apollo::common::Point3D* _internal_mutable_euler_angles();
  public:

  // optional double heading = 6;
  bool has_heading() const;
  private:
  bool _internal_has_heading() const;
  public:
  void clear_heading();
  double heading() const;
  void set_heading(double value);
  private:
  double _internal_heading() const;
  void _internal_set_heading(double value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.localization.Pose)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::common::PointENU* position_;
  ::apollo::common::Quaternion* orientation_;
  ::apollo::common::Point3D* linear_velocity_;
  ::apollo::common::Point3D* linear_acceleration_;
  ::apollo::common::Point3D* angular_velocity_;
  ::apollo::common::Point3D* linear_acceleration_vrf_;
  ::apollo::common::Point3D* angular_velocity_vrf_;
  ::apollo::common::Point3D* euler_angles_;
  double heading_;
  friend struct ::TableStruct_modules_2flocalization_2fproto_2fpose_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pose

// optional .apollo.common.PointENU position = 1;
inline bool Pose::_internal_has_position() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || position_ != nullptr);
  return value;
}
inline bool Pose::has_position() const {
  return _internal_has_position();
}
inline const ::apollo::common::PointENU& Pose::_internal_position() const {
  const ::apollo::common::PointENU* p = position_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::PointENU*>(
      &::apollo::common::_PointENU_default_instance_);
}
inline const ::apollo::common::PointENU& Pose::position() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.position)
  return _internal_position();
}
inline ::apollo::common::PointENU* Pose::release_position() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.position)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::PointENU* temp = position_;
  position_ = nullptr;
  return temp;
}
inline ::apollo::common::PointENU* Pose::_internal_mutable_position() {
  _has_bits_[0] |= 0x00000001u;
  if (position_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::PointENU>(GetArenaNoVirtual());
    position_ = p;
  }
  return position_;
}
inline ::apollo::common::PointENU* Pose::mutable_position() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.position)
  return _internal_mutable_position();
}
inline void Pose::set_allocated_position(::apollo::common::PointENU* position) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_);
  }
  if (position) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      position = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.position)
}

// optional .apollo.common.Quaternion orientation = 2;
inline bool Pose::_internal_has_orientation() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || orientation_ != nullptr);
  return value;
}
inline bool Pose::has_orientation() const {
  return _internal_has_orientation();
}
inline const ::apollo::common::Quaternion& Pose::_internal_orientation() const {
  const ::apollo::common::Quaternion* p = orientation_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Quaternion*>(
      &::apollo::common::_Quaternion_default_instance_);
}
inline const ::apollo::common::Quaternion& Pose::orientation() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.orientation)
  return _internal_orientation();
}
inline ::apollo::common::Quaternion* Pose::release_orientation() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.orientation)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::common::Quaternion* temp = orientation_;
  orientation_ = nullptr;
  return temp;
}
inline ::apollo::common::Quaternion* Pose::_internal_mutable_orientation() {
  _has_bits_[0] |= 0x00000002u;
  if (orientation_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Quaternion>(GetArenaNoVirtual());
    orientation_ = p;
  }
  return orientation_;
}
inline ::apollo::common::Quaternion* Pose::mutable_orientation() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.orientation)
  return _internal_mutable_orientation();
}
inline void Pose::set_allocated_orientation(::apollo::common::Quaternion* orientation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(orientation_);
  }
  if (orientation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      orientation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, orientation, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  orientation_ = orientation;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.orientation)
}

// optional .apollo.common.Point3D linear_velocity = 3;
inline bool Pose::_internal_has_linear_velocity() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || linear_velocity_ != nullptr);
  return value;
}
inline bool Pose::has_linear_velocity() const {
  return _internal_has_linear_velocity();
}
inline const ::apollo::common::Point3D& Pose::_internal_linear_velocity() const {
  const ::apollo::common::Point3D* p = linear_velocity_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Pose::linear_velocity() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.linear_velocity)
  return _internal_linear_velocity();
}
inline ::apollo::common::Point3D* Pose::release_linear_velocity() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.linear_velocity)
  _has_bits_[0] &= ~0x00000004u;
  ::apollo::common::Point3D* temp = linear_velocity_;
  linear_velocity_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Pose::_internal_mutable_linear_velocity() {
  _has_bits_[0] |= 0x00000004u;
  if (linear_velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_velocity_ = p;
  }
  return linear_velocity_;
}
inline ::apollo::common::Point3D* Pose::mutable_linear_velocity() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.linear_velocity)
  return _internal_mutable_linear_velocity();
}
inline void Pose::set_allocated_linear_velocity(::apollo::common::Point3D* linear_velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(linear_velocity_);
  }
  if (linear_velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      linear_velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, linear_velocity, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  linear_velocity_ = linear_velocity;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.linear_velocity)
}

// optional .apollo.common.Point3D linear_acceleration = 4;
inline bool Pose::_internal_has_linear_acceleration() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || linear_acceleration_ != nullptr);
  return value;
}
inline bool Pose::has_linear_acceleration() const {
  return _internal_has_linear_acceleration();
}
inline const ::apollo::common::Point3D& Pose::_internal_linear_acceleration() const {
  const ::apollo::common::Point3D* p = linear_acceleration_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Pose::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.linear_acceleration)
  return _internal_linear_acceleration();
}
inline ::apollo::common::Point3D* Pose::release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.linear_acceleration)
  _has_bits_[0] &= ~0x00000008u;
  ::apollo::common::Point3D* temp = linear_acceleration_;
  linear_acceleration_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Pose::_internal_mutable_linear_acceleration() {
  _has_bits_[0] |= 0x00000008u;
  if (linear_acceleration_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_acceleration_ = p;
  }
  return linear_acceleration_;
}
inline ::apollo::common::Point3D* Pose::mutable_linear_acceleration() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.linear_acceleration)
  return _internal_mutable_linear_acceleration();
}
inline void Pose::set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration) {
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
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  linear_acceleration_ = linear_acceleration;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.linear_acceleration)
}

// optional .apollo.common.Point3D angular_velocity = 5;
inline bool Pose::_internal_has_angular_velocity() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || angular_velocity_ != nullptr);
  return value;
}
inline bool Pose::has_angular_velocity() const {
  return _internal_has_angular_velocity();
}
inline const ::apollo::common::Point3D& Pose::_internal_angular_velocity() const {
  const ::apollo::common::Point3D* p = angular_velocity_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Pose::angular_velocity() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.angular_velocity)
  return _internal_angular_velocity();
}
inline ::apollo::common::Point3D* Pose::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.angular_velocity)
  _has_bits_[0] &= ~0x00000010u;
  ::apollo::common::Point3D* temp = angular_velocity_;
  angular_velocity_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Pose::_internal_mutable_angular_velocity() {
  _has_bits_[0] |= 0x00000010u;
  if (angular_velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    angular_velocity_ = p;
  }
  return angular_velocity_;
}
inline ::apollo::common::Point3D* Pose::mutable_angular_velocity() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.angular_velocity)
  return _internal_mutable_angular_velocity();
}
inline void Pose::set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity) {
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
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  angular_velocity_ = angular_velocity;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.angular_velocity)
}

// optional double heading = 6;
inline bool Pose::_internal_has_heading() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool Pose::has_heading() const {
  return _internal_has_heading();
}
inline void Pose::clear_heading() {
  heading_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double Pose::_internal_heading() const {
  return heading_;
}
inline double Pose::heading() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.heading)
  return _internal_heading();
}
inline void Pose::_internal_set_heading(double value) {
  _has_bits_[0] |= 0x00000100u;
  heading_ = value;
}
inline void Pose::set_heading(double value) {
  _internal_set_heading(value);
  // @@protoc_insertion_point(field_set:apollo.localization.Pose.heading)
}

// optional .apollo.common.Point3D linear_acceleration_vrf = 7;
inline bool Pose::_internal_has_linear_acceleration_vrf() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  PROTOBUF_ASSUME(!value || linear_acceleration_vrf_ != nullptr);
  return value;
}
inline bool Pose::has_linear_acceleration_vrf() const {
  return _internal_has_linear_acceleration_vrf();
}
inline const ::apollo::common::Point3D& Pose::_internal_linear_acceleration_vrf() const {
  const ::apollo::common::Point3D* p = linear_acceleration_vrf_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Pose::linear_acceleration_vrf() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.linear_acceleration_vrf)
  return _internal_linear_acceleration_vrf();
}
inline ::apollo::common::Point3D* Pose::release_linear_acceleration_vrf() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.linear_acceleration_vrf)
  _has_bits_[0] &= ~0x00000020u;
  ::apollo::common::Point3D* temp = linear_acceleration_vrf_;
  linear_acceleration_vrf_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Pose::_internal_mutable_linear_acceleration_vrf() {
  _has_bits_[0] |= 0x00000020u;
  if (linear_acceleration_vrf_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_acceleration_vrf_ = p;
  }
  return linear_acceleration_vrf_;
}
inline ::apollo::common::Point3D* Pose::mutable_linear_acceleration_vrf() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.linear_acceleration_vrf)
  return _internal_mutable_linear_acceleration_vrf();
}
inline void Pose::set_allocated_linear_acceleration_vrf(::apollo::common::Point3D* linear_acceleration_vrf) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(linear_acceleration_vrf_);
  }
  if (linear_acceleration_vrf) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      linear_acceleration_vrf = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, linear_acceleration_vrf, submessage_arena);
    }
    _has_bits_[0] |= 0x00000020u;
  } else {
    _has_bits_[0] &= ~0x00000020u;
  }
  linear_acceleration_vrf_ = linear_acceleration_vrf;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.linear_acceleration_vrf)
}

// optional .apollo.common.Point3D angular_velocity_vrf = 8;
inline bool Pose::_internal_has_angular_velocity_vrf() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  PROTOBUF_ASSUME(!value || angular_velocity_vrf_ != nullptr);
  return value;
}
inline bool Pose::has_angular_velocity_vrf() const {
  return _internal_has_angular_velocity_vrf();
}
inline const ::apollo::common::Point3D& Pose::_internal_angular_velocity_vrf() const {
  const ::apollo::common::Point3D* p = angular_velocity_vrf_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Pose::angular_velocity_vrf() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.angular_velocity_vrf)
  return _internal_angular_velocity_vrf();
}
inline ::apollo::common::Point3D* Pose::release_angular_velocity_vrf() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.angular_velocity_vrf)
  _has_bits_[0] &= ~0x00000040u;
  ::apollo::common::Point3D* temp = angular_velocity_vrf_;
  angular_velocity_vrf_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Pose::_internal_mutable_angular_velocity_vrf() {
  _has_bits_[0] |= 0x00000040u;
  if (angular_velocity_vrf_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    angular_velocity_vrf_ = p;
  }
  return angular_velocity_vrf_;
}
inline ::apollo::common::Point3D* Pose::mutable_angular_velocity_vrf() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.angular_velocity_vrf)
  return _internal_mutable_angular_velocity_vrf();
}
inline void Pose::set_allocated_angular_velocity_vrf(::apollo::common::Point3D* angular_velocity_vrf) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(angular_velocity_vrf_);
  }
  if (angular_velocity_vrf) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      angular_velocity_vrf = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, angular_velocity_vrf, submessage_arena);
    }
    _has_bits_[0] |= 0x00000040u;
  } else {
    _has_bits_[0] &= ~0x00000040u;
  }
  angular_velocity_vrf_ = angular_velocity_vrf;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.angular_velocity_vrf)
}

// optional .apollo.common.Point3D euler_angles = 9;
inline bool Pose::_internal_has_euler_angles() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  PROTOBUF_ASSUME(!value || euler_angles_ != nullptr);
  return value;
}
inline bool Pose::has_euler_angles() const {
  return _internal_has_euler_angles();
}
inline const ::apollo::common::Point3D& Pose::_internal_euler_angles() const {
  const ::apollo::common::Point3D* p = euler_angles_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline const ::apollo::common::Point3D& Pose::euler_angles() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.euler_angles)
  return _internal_euler_angles();
}
inline ::apollo::common::Point3D* Pose::release_euler_angles() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.euler_angles)
  _has_bits_[0] &= ~0x00000080u;
  ::apollo::common::Point3D* temp = euler_angles_;
  euler_angles_ = nullptr;
  return temp;
}
inline ::apollo::common::Point3D* Pose::_internal_mutable_euler_angles() {
  _has_bits_[0] |= 0x00000080u;
  if (euler_angles_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    euler_angles_ = p;
  }
  return euler_angles_;
}
inline ::apollo::common::Point3D* Pose::mutable_euler_angles() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.euler_angles)
  return _internal_mutable_euler_angles();
}
inline void Pose::set_allocated_euler_angles(::apollo::common::Point3D* euler_angles) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(euler_angles_);
  }
  if (euler_angles) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      euler_angles = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, euler_angles, submessage_arena);
    }
    _has_bits_[0] |= 0x00000080u;
  } else {
    _has_bits_[0] &= ~0x00000080u;
  }
  euler_angles_ = euler_angles;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.euler_angles)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace localization
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2fpose_2eproto
