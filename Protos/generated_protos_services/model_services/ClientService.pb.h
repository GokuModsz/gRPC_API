// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_services/ClientService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_5fservices_2fClientService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_model_5fservices_2fClientService_2eproto

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
#include "models/Client.pb.h"
#include "models/ServiceStatus.pb.h"
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_model_5fservices_2fClientService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_model_5fservices_2fClientService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_5fservices_2fClientService_2eproto;
namespace TestApiGrpc {
namespace Protos {
namespace models {
class ListClientResponse;
struct ListClientResponseDefaultTypeInternal;
extern ListClientResponseDefaultTypeInternal _ListClientResponse_default_instance_;
}  // namespace models
}  // namespace Protos
}  // namespace TestApiGrpc
PROTOBUF_NAMESPACE_OPEN
template<> ::TestApiGrpc::Protos::models::ListClientResponse* Arena::CreateMaybeMessage<::TestApiGrpc::Protos::models::ListClientResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TestApiGrpc {
namespace Protos {
namespace models {

// ===================================================================

class ListClientResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TestApiGrpc.Protos.models.ListClientResponse) */ {
 public:
  inline ListClientResponse() : ListClientResponse(nullptr) {}
  ~ListClientResponse() override;
  explicit PROTOBUF_CONSTEXPR ListClientResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ListClientResponse(const ListClientResponse& from);
  ListClientResponse(ListClientResponse&& from) noexcept
    : ListClientResponse() {
    *this = ::std::move(from);
  }

  inline ListClientResponse& operator=(const ListClientResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ListClientResponse& operator=(ListClientResponse&& from) noexcept {
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
  static const ListClientResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ListClientResponse* internal_default_instance() {
    return reinterpret_cast<const ListClientResponse*>(
               &_ListClientResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ListClientResponse& a, ListClientResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ListClientResponse* other) {
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
  void UnsafeArenaSwap(ListClientResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ListClientResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ListClientResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ListClientResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ListClientResponse& from) {
    ListClientResponse::MergeImpl(*this, from);
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
  void InternalSwap(ListClientResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TestApiGrpc.Protos.models.ListClientResponse";
  }
  protected:
  explicit ListClientResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClientFieldNumber = 1,
  };
  // repeated .TestApiGrpc.Protos.models.Client client = 1;
  int client_size() const;
  private:
  int _internal_client_size() const;
  public:
  void clear_client();
  ::TestApiGrpc::Protos::models::Client* mutable_client(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TestApiGrpc::Protos::models::Client >*
      mutable_client();
  private:
  const ::TestApiGrpc::Protos::models::Client& _internal_client(int index) const;
  ::TestApiGrpc::Protos::models::Client* _internal_add_client();
  public:
  const ::TestApiGrpc::Protos::models::Client& client(int index) const;
  ::TestApiGrpc::Protos::models::Client* add_client();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TestApiGrpc::Protos::models::Client >&
      client() const;

  // @@protoc_insertion_point(class_scope:TestApiGrpc.Protos.models.ListClientResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TestApiGrpc::Protos::models::Client > client_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_5fservices_2fClientService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ListClientResponse

// repeated .TestApiGrpc.Protos.models.Client client = 1;
inline int ListClientResponse::_internal_client_size() const {
  return _impl_.client_.size();
}
inline int ListClientResponse::client_size() const {
  return _internal_client_size();
}
inline ::TestApiGrpc::Protos::models::Client* ListClientResponse::mutable_client(int index) {
  // @@protoc_insertion_point(field_mutable:TestApiGrpc.Protos.models.ListClientResponse.client)
  return _impl_.client_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TestApiGrpc::Protos::models::Client >*
ListClientResponse::mutable_client() {
  // @@protoc_insertion_point(field_mutable_list:TestApiGrpc.Protos.models.ListClientResponse.client)
  return &_impl_.client_;
}
inline const ::TestApiGrpc::Protos::models::Client& ListClientResponse::_internal_client(int index) const {
  return _impl_.client_.Get(index);
}
inline const ::TestApiGrpc::Protos::models::Client& ListClientResponse::client(int index) const {
  // @@protoc_insertion_point(field_get:TestApiGrpc.Protos.models.ListClientResponse.client)
  return _internal_client(index);
}
inline ::TestApiGrpc::Protos::models::Client* ListClientResponse::_internal_add_client() {
  return _impl_.client_.Add();
}
inline ::TestApiGrpc::Protos::models::Client* ListClientResponse::add_client() {
  ::TestApiGrpc::Protos::models::Client* _add = _internal_add_client();
  // @@protoc_insertion_point(field_add:TestApiGrpc.Protos.models.ListClientResponse.client)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TestApiGrpc::Protos::models::Client >&
ListClientResponse::client() const {
  // @@protoc_insertion_point(field_list:TestApiGrpc.Protos.models.ListClientResponse.client)
  return _impl_.client_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_model_5fservices_2fClientService_2eproto
