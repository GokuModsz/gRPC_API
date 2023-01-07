// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AllServices.proto

#include "AllServices.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace TEST_API_GRPC {
PROTOBUF_CONSTEXPR ServiceStatus::ServiceStatus(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.error_message_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.is_success_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ServiceStatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ServiceStatusDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ServiceStatusDefaultTypeInternal() {}
  union {
    ServiceStatus _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ServiceStatusDefaultTypeInternal _ServiceStatus_default_instance_;
}  // namespace TEST_API_GRPC
static ::_pb::Metadata file_level_metadata_AllServices_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_AllServices_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_AllServices_2eproto = nullptr;

const uint32_t TableStruct_AllServices_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TEST_API_GRPC::ServiceStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TEST_API_GRPC::ServiceStatus, _impl_.is_success_),
  PROTOBUF_FIELD_OFFSET(::TEST_API_GRPC::ServiceStatus, _impl_.error_message_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::TEST_API_GRPC::ServiceStatus)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::TEST_API_GRPC::_ServiceStatus_default_instance_._instance,
};

const char descriptor_table_protodef_AllServices_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021AllServices.proto\022\rTEST_API_GRPC\032\033goog"
  "le/protobuf/empty.proto\032\025Client_Register"
  ".proto\032\024Client_Product.proto\032\024Client_Fac"
  "ture.proto\032\024Client_Invoice.proto\":\n\rServ"
  "iceStatus\022\022\n\nis_success\030\001 \001(\010\022\025\n\rerror_m"
  "essage\030\002 \001(\t2\205\001\n\rClientService\0227\n\014Create"
  "Client\022\007.Client\032\034.TEST_API_GRPC.ServiceS"
  "tatus\"\000\022;\n\nListClient\022\026.google.protobuf."
  "Empty\032\023.ListClientResponse\"\0002\212\001\n\016Product"
  "Service\0229\n\rCreateProduct\022\010.Product\032\034.TES"
  "T_API_GRPC.ServiceStatus\"\000\022=\n\013ListProduc"
  "t\022\026.google.protobuf.Empty\032\024.ListProductR"
  "esponse\"\0002\212\001\n\016FactureService\0229\n\rCreateFa"
  "cture\022\010.Facture\032\034.TEST_API_GRPC.ServiceS"
  "tatus\"\000\022=\n\013ListFacture\022\026.google.protobuf"
  ".Empty\032\024.ListFactureResponse\"\0002\212\001\n\016Invoi"
  "ceService\0229\n\rCreateInvoice\022\010.Invoice\032\034.T"
  "EST_API_GRPC.ServiceStatus\"\000\022=\n\013ListInvo"
  "ice\022\026.google.protobuf.Empty\032\024.ListInvoic"
  "eResponse\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_AllServices_2eproto_deps[5] = {
  &::descriptor_table_Client_5fFacture_2eproto,
  &::descriptor_table_Client_5fInvoice_2eproto,
  &::descriptor_table_Client_5fProduct_2eproto,
  &::descriptor_table_Client_5fRegister_2eproto,
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_AllServices_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_AllServices_2eproto = {
    false, false, 779, descriptor_table_protodef_AllServices_2eproto,
    "AllServices.proto",
    &descriptor_table_AllServices_2eproto_once, descriptor_table_AllServices_2eproto_deps, 5, 1,
    schemas, file_default_instances, TableStruct_AllServices_2eproto::offsets,
    file_level_metadata_AllServices_2eproto, file_level_enum_descriptors_AllServices_2eproto,
    file_level_service_descriptors_AllServices_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_AllServices_2eproto_getter() {
  return &descriptor_table_AllServices_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_AllServices_2eproto(&descriptor_table_AllServices_2eproto);
namespace TEST_API_GRPC {

// ===================================================================

class ServiceStatus::_Internal {
 public:
};

ServiceStatus::ServiceStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:TEST_API_GRPC.ServiceStatus)
}
ServiceStatus::ServiceStatus(const ServiceStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ServiceStatus* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.error_message_){}
    , decltype(_impl_.is_success_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.error_message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.error_message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_error_message().empty()) {
    _this->_impl_.error_message_.Set(from._internal_error_message(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.is_success_ = from._impl_.is_success_;
  // @@protoc_insertion_point(copy_constructor:TEST_API_GRPC.ServiceStatus)
}

inline void ServiceStatus::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.error_message_){}
    , decltype(_impl_.is_success_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.error_message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.error_message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ServiceStatus::~ServiceStatus() {
  // @@protoc_insertion_point(destructor:TEST_API_GRPC.ServiceStatus)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ServiceStatus::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.error_message_.Destroy();
}

void ServiceStatus::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ServiceStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:TEST_API_GRPC.ServiceStatus)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.error_message_.ClearToEmpty();
  _impl_.is_success_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServiceStatus::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool is_success = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.is_success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string error_message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_error_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TEST_API_GRPC.ServiceStatus.error_message"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ServiceStatus::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TEST_API_GRPC.ServiceStatus)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_success = 1;
  if (this->_internal_is_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_is_success(), target);
  }

  // string error_message = 2;
  if (!this->_internal_error_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_error_message().data(), static_cast<int>(this->_internal_error_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TEST_API_GRPC.ServiceStatus.error_message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_error_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TEST_API_GRPC.ServiceStatus)
  return target;
}

size_t ServiceStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TEST_API_GRPC.ServiceStatus)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string error_message = 2;
  if (!this->_internal_error_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_error_message());
  }

  // bool is_success = 1;
  if (this->_internal_is_success() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ServiceStatus::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ServiceStatus::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ServiceStatus::GetClassData() const { return &_class_data_; }


void ServiceStatus::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ServiceStatus*>(&to_msg);
  auto& from = static_cast<const ServiceStatus&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:TEST_API_GRPC.ServiceStatus)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_error_message().empty()) {
    _this->_internal_set_error_message(from._internal_error_message());
  }
  if (from._internal_is_success() != 0) {
    _this->_internal_set_is_success(from._internal_is_success());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ServiceStatus::CopyFrom(const ServiceStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TEST_API_GRPC.ServiceStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceStatus::IsInitialized() const {
  return true;
}

void ServiceStatus::InternalSwap(ServiceStatus* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.error_message_, lhs_arena,
      &other->_impl_.error_message_, rhs_arena
  );
  swap(_impl_.is_success_, other->_impl_.is_success_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ServiceStatus::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_AllServices_2eproto_getter, &descriptor_table_AllServices_2eproto_once,
      file_level_metadata_AllServices_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace TEST_API_GRPC
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TEST_API_GRPC::ServiceStatus*
Arena::CreateMaybeMessage< ::TEST_API_GRPC::ServiceStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TEST_API_GRPC::ServiceStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>