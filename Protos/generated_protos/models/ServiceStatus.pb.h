// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: models/ServiceStatus.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_models_2fServiceStatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_models_2fServiceStatus_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_models_2fServiceStatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_models_2fServiceStatus_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_models_2fServiceStatus_2eproto;
namespace TestApiGrpc {
namespace Protos {
namespace models {
class ServiceStatus;
struct ServiceStatusDefaultTypeInternal;
extern ServiceStatusDefaultTypeInternal _ServiceStatus_default_instance_;
}  // namespace models
}  // namespace Protos
}  // namespace TestApiGrpc
PROTOBUF_NAMESPACE_OPEN
template<> ::TestApiGrpc::Protos::models::ServiceStatus* Arena::CreateMaybeMessage<::TestApiGrpc::Protos::models::ServiceStatus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TestApiGrpc {
namespace Protos {
namespace models {

// ===================================================================

class ServiceStatus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TestApiGrpc.Protos.models.ServiceStatus) */ {
 public:
  inline ServiceStatus() : ServiceStatus(nullptr) {}
  ~ServiceStatus() override;
  explicit PROTOBUF_CONSTEXPR ServiceStatus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ServiceStatus(const ServiceStatus& from);
  ServiceStatus(ServiceStatus&& from) noexcept
    : ServiceStatus() {
    *this = ::std::move(from);
  }

  inline ServiceStatus& operator=(const ServiceStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline ServiceStatus& operator=(ServiceStatus&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ServiceStatus& default_instance() {
    return *internal_default_instance();
  }
  static inline const ServiceStatus* internal_default_instance() {
    return reinterpret_cast<const ServiceStatus*>(
               &_ServiceStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ServiceStatus& a, ServiceStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(ServiceStatus* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ServiceStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ServiceStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ServiceStatus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ServiceStatus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ServiceStatus& from) {
    ServiceStatus::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ServiceStatus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TestApiGrpc.Protos.models.ServiceStatus";
  }
  protected:
  explicit ServiceStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorMessageFieldNumber = 2,
    kIsSuccessFieldNumber = 1,
  };
  // string error_message = 2;
  void clear_error_message();
  const std::string& error_message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_error_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_error_message();
  PROTOBUF_NODISCARD std::string* release_error_message();
  void set_allocated_error_message(std::string* error_message);
  private:
  const std::string& _internal_error_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_error_message(const std::string& value);
  std::string* _internal_mutable_error_message();
  public:

  // bool is_success = 1;
  void clear_is_success();
  bool is_success() const;
  void set_is_success(bool value);
  private:
  bool _internal_is_success() const;
  void _internal_set_is_success(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TestApiGrpc.Protos.models.ServiceStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_message_;
    bool is_success_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_models_2fServiceStatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ServiceStatus

// bool is_success = 1;
inline void ServiceStatus::clear_is_success() {
  _impl_.is_success_ = false;
}
inline bool ServiceStatus::_internal_is_success() const {
  return _impl_.is_success_;
}
inline bool ServiceStatus::is_success() const {
  // @@protoc_insertion_point(field_get:TestApiGrpc.Protos.models.ServiceStatus.is_success)
  return _internal_is_success();
}
inline void ServiceStatus::_internal_set_is_success(bool value) {
  
  _impl_.is_success_ = value;
}
inline void ServiceStatus::set_is_success(bool value) {
  _internal_set_is_success(value);
  // @@protoc_insertion_point(field_set:TestApiGrpc.Protos.models.ServiceStatus.is_success)
}

// string error_message = 2;
inline void ServiceStatus::clear_error_message() {
  _impl_.error_message_.ClearToEmpty();
}
inline const std::string& ServiceStatus::error_message() const {
  // @@protoc_insertion_point(field_get:TestApiGrpc.Protos.models.ServiceStatus.error_message)
  return _internal_error_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ServiceStatus::set_error_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.error_message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:TestApiGrpc.Protos.models.ServiceStatus.error_message)
}
inline std::string* ServiceStatus::mutable_error_message() {
  std::string* _s = _internal_mutable_error_message();
  // @@protoc_insertion_point(field_mutable:TestApiGrpc.Protos.models.ServiceStatus.error_message)
  return _s;
}
inline const std::string& ServiceStatus::_internal_error_message() const {
  return _impl_.error_message_.Get();
}
inline void ServiceStatus::_internal_set_error_message(const std::string& value) {
  
  _impl_.error_message_.Set(value, GetArenaForAllocation());
}
inline std::string* ServiceStatus::_internal_mutable_error_message() {
  
  return _impl_.error_message_.Mutable(GetArenaForAllocation());
}
inline std::string* ServiceStatus::release_error_message() {
  // @@protoc_insertion_point(field_release:TestApiGrpc.Protos.models.ServiceStatus.error_message)
  return _impl_.error_message_.Release();
}
inline void ServiceStatus::set_allocated_error_message(std::string* error_message) {
  if (error_message != nullptr) {
    
  } else {
    
  }
  _impl_.error_message_.SetAllocated(error_message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.error_message_.IsDefault()) {
    _impl_.error_message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:TestApiGrpc.Protos.models.ServiceStatus.error_message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace models
}  // namespace Protos
}  // namespace TestApiGrpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_models_2fServiceStatus_2eproto
