// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Client_Register.proto

#include "Client_Register.pb.h"

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

PROTOBUF_CONSTEXPR Client::Client(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.clients_details_)*/{}
  , /*decltype(_impl_.name_of_client_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.cellphone_of_client_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.email_of_client_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.type_id_client_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ClientDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClientDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClientDefaultTypeInternal() {}
  union {
    Client _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClientDefaultTypeInternal _Client_default_instance_;
PROTOBUF_CONSTEXPR ClienteId::ClienteId(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.client_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ClienteIdDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClienteIdDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClienteIdDefaultTypeInternal() {}
  union {
    ClienteId _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClienteIdDefaultTypeInternal _ClienteId_default_instance_;
static ::_pb::Metadata file_level_metadata_Client_5fRegister_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Client_5fRegister_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Client_5fRegister_2eproto = nullptr;

const uint32_t TableStruct_Client_5fRegister_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Client, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Client, _impl_.type_id_client_),
  PROTOBUF_FIELD_OFFSET(::Client, _impl_.name_of_client_),
  PROTOBUF_FIELD_OFFSET(::Client, _impl_.cellphone_of_client_),
  PROTOBUF_FIELD_OFFSET(::Client, _impl_.email_of_client_),
  PROTOBUF_FIELD_OFFSET(::Client, _impl_.clients_details_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ClienteId, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ClienteId, _impl_.client_id_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Client)},
  { 11, -1, -1, sizeof(::ClienteId)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Client_default_instance_._instance,
  &::_ClienteId_default_instance_._instance,
};

const char descriptor_table_protodef_Client_5fRegister_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025Client_Register.proto\"\207\001\n\006Client\022\026\n\016ty"
  "pe_id_client\030\001 \001(\r\022\026\n\016name_of_client\030\002 \001"
  "(\t\022\033\n\023cellphone_of_client\030\003 \001(\t\022\027\n\017email"
  "_of_client\030\004 \001(\t\022\027\n\017clients_details\030\005 \003("
  "\t\"\036\n\tClienteId\022\021\n\tclient_id\030\001 \001(\tb\006proto"
  "3"
  ;
static ::_pbi::once_flag descriptor_table_Client_5fRegister_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Client_5fRegister_2eproto = {
    false, false, 201, descriptor_table_protodef_Client_5fRegister_2eproto,
    "Client_Register.proto",
    &descriptor_table_Client_5fRegister_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Client_5fRegister_2eproto::offsets,
    file_level_metadata_Client_5fRegister_2eproto, file_level_enum_descriptors_Client_5fRegister_2eproto,
    file_level_service_descriptors_Client_5fRegister_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Client_5fRegister_2eproto_getter() {
  return &descriptor_table_Client_5fRegister_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Client_5fRegister_2eproto(&descriptor_table_Client_5fRegister_2eproto);

// ===================================================================

class Client::_Internal {
 public:
};

Client::Client(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Client)
}
Client::Client(const Client& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Client* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.clients_details_){from._impl_.clients_details_}
    , decltype(_impl_.name_of_client_){}
    , decltype(_impl_.cellphone_of_client_){}
    , decltype(_impl_.email_of_client_){}
    , decltype(_impl_.type_id_client_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_of_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_of_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name_of_client().empty()) {
    _this->_impl_.name_of_client_.Set(from._internal_name_of_client(), 
      _this->GetArenaForAllocation());
  }
  _impl_.cellphone_of_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.cellphone_of_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_cellphone_of_client().empty()) {
    _this->_impl_.cellphone_of_client_.Set(from._internal_cellphone_of_client(), 
      _this->GetArenaForAllocation());
  }
  _impl_.email_of_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_of_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_email_of_client().empty()) {
    _this->_impl_.email_of_client_.Set(from._internal_email_of_client(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.type_id_client_ = from._impl_.type_id_client_;
  // @@protoc_insertion_point(copy_constructor:Client)
}

inline void Client::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.clients_details_){arena}
    , decltype(_impl_.name_of_client_){}
    , decltype(_impl_.cellphone_of_client_){}
    , decltype(_impl_.email_of_client_){}
    , decltype(_impl_.type_id_client_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_of_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_of_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.cellphone_of_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.cellphone_of_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.email_of_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_of_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Client::~Client() {
  // @@protoc_insertion_point(destructor:Client)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Client::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.clients_details_.~RepeatedPtrField();
  _impl_.name_of_client_.Destroy();
  _impl_.cellphone_of_client_.Destroy();
  _impl_.email_of_client_.Destroy();
}

void Client::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Client::Clear() {
// @@protoc_insertion_point(message_clear_start:Client)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.clients_details_.Clear();
  _impl_.name_of_client_.ClearToEmpty();
  _impl_.cellphone_of_client_.ClearToEmpty();
  _impl_.email_of_client_.ClearToEmpty();
  _impl_.type_id_client_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Client::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 type_id_client = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.type_id_client_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name_of_client = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name_of_client();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Client.name_of_client"));
        } else
          goto handle_unusual;
        continue;
      // string cellphone_of_client = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_cellphone_of_client();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Client.cellphone_of_client"));
        } else
          goto handle_unusual;
        continue;
      // string email_of_client = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_email_of_client();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Client.email_of_client"));
        } else
          goto handle_unusual;
        continue;
      // repeated string clients_details = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_clients_details();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Client.clients_details"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
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

uint8_t* Client::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Client)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 type_id_client = 1;
  if (this->_internal_type_id_client() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_type_id_client(), target);
  }

  // string name_of_client = 2;
  if (!this->_internal_name_of_client().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name_of_client().data(), static_cast<int>(this->_internal_name_of_client().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Client.name_of_client");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name_of_client(), target);
  }

  // string cellphone_of_client = 3;
  if (!this->_internal_cellphone_of_client().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_cellphone_of_client().data(), static_cast<int>(this->_internal_cellphone_of_client().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Client.cellphone_of_client");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_cellphone_of_client(), target);
  }

  // string email_of_client = 4;
  if (!this->_internal_email_of_client().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_email_of_client().data(), static_cast<int>(this->_internal_email_of_client().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Client.email_of_client");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_email_of_client(), target);
  }

  // repeated string clients_details = 5;
  for (int i = 0, n = this->_internal_clients_details_size(); i < n; i++) {
    const auto& s = this->_internal_clients_details(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Client.clients_details");
    target = stream->WriteString(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Client)
  return target;
}

size_t Client::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Client)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string clients_details = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.clients_details_.size());
  for (int i = 0, n = _impl_.clients_details_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.clients_details_.Get(i));
  }

  // string name_of_client = 2;
  if (!this->_internal_name_of_client().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name_of_client());
  }

  // string cellphone_of_client = 3;
  if (!this->_internal_cellphone_of_client().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_cellphone_of_client());
  }

  // string email_of_client = 4;
  if (!this->_internal_email_of_client().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_email_of_client());
  }

  // uint32 type_id_client = 1;
  if (this->_internal_type_id_client() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_type_id_client());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Client::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Client::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Client::GetClassData() const { return &_class_data_; }


void Client::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Client*>(&to_msg);
  auto& from = static_cast<const Client&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Client)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.clients_details_.MergeFrom(from._impl_.clients_details_);
  if (!from._internal_name_of_client().empty()) {
    _this->_internal_set_name_of_client(from._internal_name_of_client());
  }
  if (!from._internal_cellphone_of_client().empty()) {
    _this->_internal_set_cellphone_of_client(from._internal_cellphone_of_client());
  }
  if (!from._internal_email_of_client().empty()) {
    _this->_internal_set_email_of_client(from._internal_email_of_client());
  }
  if (from._internal_type_id_client() != 0) {
    _this->_internal_set_type_id_client(from._internal_type_id_client());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Client::CopyFrom(const Client& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Client)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Client::IsInitialized() const {
  return true;
}

void Client::InternalSwap(Client* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.clients_details_.InternalSwap(&other->_impl_.clients_details_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_of_client_, lhs_arena,
      &other->_impl_.name_of_client_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.cellphone_of_client_, lhs_arena,
      &other->_impl_.cellphone_of_client_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.email_of_client_, lhs_arena,
      &other->_impl_.email_of_client_, rhs_arena
  );
  swap(_impl_.type_id_client_, other->_impl_.type_id_client_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Client::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Client_5fRegister_2eproto_getter, &descriptor_table_Client_5fRegister_2eproto_once,
      file_level_metadata_Client_5fRegister_2eproto[0]);
}

// ===================================================================

class ClienteId::_Internal {
 public:
};

ClienteId::ClienteId(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:ClienteId)
}
ClienteId::ClienteId(const ClienteId& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ClienteId* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.client_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.client_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.client_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_client_id().empty()) {
    _this->_impl_.client_id_.Set(from._internal_client_id(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:ClienteId)
}

inline void ClienteId::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.client_id_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.client_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.client_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ClienteId::~ClienteId() {
  // @@protoc_insertion_point(destructor:ClienteId)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ClienteId::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.client_id_.Destroy();
}

void ClienteId::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ClienteId::Clear() {
// @@protoc_insertion_point(message_clear_start:ClienteId)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.client_id_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClienteId::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string client_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_client_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "ClienteId.client_id"));
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

uint8_t* ClienteId::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClienteId)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string client_id = 1;
  if (!this->_internal_client_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_client_id().data(), static_cast<int>(this->_internal_client_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ClienteId.client_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_client_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClienteId)
  return target;
}

size_t ClienteId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClienteId)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string client_id = 1;
  if (!this->_internal_client_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_client_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClienteId::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ClienteId::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClienteId::GetClassData() const { return &_class_data_; }


void ClienteId::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ClienteId*>(&to_msg);
  auto& from = static_cast<const ClienteId&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:ClienteId)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_client_id().empty()) {
    _this->_internal_set_client_id(from._internal_client_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClienteId::CopyFrom(const ClienteId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClienteId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClienteId::IsInitialized() const {
  return true;
}

void ClienteId::InternalSwap(ClienteId* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.client_id_, lhs_arena,
      &other->_impl_.client_id_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ClienteId::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Client_5fRegister_2eproto_getter, &descriptor_table_Client_5fRegister_2eproto_once,
      file_level_metadata_Client_5fRegister_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Client*
Arena::CreateMaybeMessage< ::Client >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Client >(arena);
}
template<> PROTOBUF_NOINLINE ::ClienteId*
Arena::CreateMaybeMessage< ::ClienteId >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ClienteId >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
