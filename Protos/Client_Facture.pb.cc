// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Client_Facture.proto

#include "Client_Facture.pb.h"

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

PROTOBUF_CONSTEXPR Facture::Facture(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.facture_details_)*/{}
  , /*decltype(_impl_.name_of_facture_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.dir_of_facture_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.ref_to_client_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.type_id_facture_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FactureDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FactureDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FactureDefaultTypeInternal() {}
  union {
    Facture _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FactureDefaultTypeInternal _Facture_default_instance_;
PROTOBUF_CONSTEXPR FactureId::FactureId(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.facture_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FactureIdDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FactureIdDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FactureIdDefaultTypeInternal() {}
  union {
    FactureId _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FactureIdDefaultTypeInternal _FactureId_default_instance_;
static ::_pb::Metadata file_level_metadata_Client_5fFacture_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Client_5fFacture_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Client_5fFacture_2eproto = nullptr;

const uint32_t TableStruct_Client_5fFacture_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Facture, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Facture, _impl_.type_id_facture_),
  PROTOBUF_FIELD_OFFSET(::Facture, _impl_.name_of_facture_),
  PROTOBUF_FIELD_OFFSET(::Facture, _impl_.dir_of_facture_),
  PROTOBUF_FIELD_OFFSET(::Facture, _impl_.ref_to_client_),
  PROTOBUF_FIELD_OFFSET(::Facture, _impl_.facture_details_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FactureId, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::FactureId, _impl_.facture_id_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Facture)},
  { 11, -1, -1, sizeof(::FactureId)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Facture_default_instance_._instance,
  &::_FactureId_default_instance_._instance,
};

const char descriptor_table_protodef_Client_5fFacture_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024Client_Facture.proto\"\203\001\n\007Facture\022\027\n\017ty"
  "pe_id_facture\030\001 \001(\r\022\027\n\017name_of_facture\030\002"
  " \001(\t\022\026\n\016dir_of_facture\030\003 \001(\t\022\025\n\rref_to_c"
  "lient\030\004 \001(\t\022\027\n\017facture_details\030\005 \003(\t\"\037\n\t"
  "FactureId\022\022\n\nfacture_id\030\001 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Client_5fFacture_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Client_5fFacture_2eproto = {
    false, false, 197, descriptor_table_protodef_Client_5fFacture_2eproto,
    "Client_Facture.proto",
    &descriptor_table_Client_5fFacture_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Client_5fFacture_2eproto::offsets,
    file_level_metadata_Client_5fFacture_2eproto, file_level_enum_descriptors_Client_5fFacture_2eproto,
    file_level_service_descriptors_Client_5fFacture_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Client_5fFacture_2eproto_getter() {
  return &descriptor_table_Client_5fFacture_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Client_5fFacture_2eproto(&descriptor_table_Client_5fFacture_2eproto);

// ===================================================================

class Facture::_Internal {
 public:
};

Facture::Facture(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Facture)
}
Facture::Facture(const Facture& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Facture* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.facture_details_){from._impl_.facture_details_}
    , decltype(_impl_.name_of_facture_){}
    , decltype(_impl_.dir_of_facture_){}
    , decltype(_impl_.ref_to_client_){}
    , decltype(_impl_.type_id_facture_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_of_facture_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_of_facture_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name_of_facture().empty()) {
    _this->_impl_.name_of_facture_.Set(from._internal_name_of_facture(), 
      _this->GetArenaForAllocation());
  }
  _impl_.dir_of_facture_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.dir_of_facture_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_dir_of_facture().empty()) {
    _this->_impl_.dir_of_facture_.Set(from._internal_dir_of_facture(), 
      _this->GetArenaForAllocation());
  }
  _impl_.ref_to_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ref_to_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_ref_to_client().empty()) {
    _this->_impl_.ref_to_client_.Set(from._internal_ref_to_client(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.type_id_facture_ = from._impl_.type_id_facture_;
  // @@protoc_insertion_point(copy_constructor:Facture)
}

inline void Facture::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.facture_details_){arena}
    , decltype(_impl_.name_of_facture_){}
    , decltype(_impl_.dir_of_facture_){}
    , decltype(_impl_.ref_to_client_){}
    , decltype(_impl_.type_id_facture_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_of_facture_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_of_facture_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.dir_of_facture_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.dir_of_facture_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.ref_to_client_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ref_to_client_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Facture::~Facture() {
  // @@protoc_insertion_point(destructor:Facture)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Facture::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.facture_details_.~RepeatedPtrField();
  _impl_.name_of_facture_.Destroy();
  _impl_.dir_of_facture_.Destroy();
  _impl_.ref_to_client_.Destroy();
}

void Facture::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Facture::Clear() {
// @@protoc_insertion_point(message_clear_start:Facture)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.facture_details_.Clear();
  _impl_.name_of_facture_.ClearToEmpty();
  _impl_.dir_of_facture_.ClearToEmpty();
  _impl_.ref_to_client_.ClearToEmpty();
  _impl_.type_id_facture_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Facture::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 type_id_facture = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.type_id_facture_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name_of_facture = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name_of_facture();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Facture.name_of_facture"));
        } else
          goto handle_unusual;
        continue;
      // string dir_of_facture = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_dir_of_facture();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Facture.dir_of_facture"));
        } else
          goto handle_unusual;
        continue;
      // string ref_to_client = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_ref_to_client();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Facture.ref_to_client"));
        } else
          goto handle_unusual;
        continue;
      // repeated string facture_details = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_facture_details();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Facture.facture_details"));
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

uint8_t* Facture::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Facture)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 type_id_facture = 1;
  if (this->_internal_type_id_facture() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_type_id_facture(), target);
  }

  // string name_of_facture = 2;
  if (!this->_internal_name_of_facture().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name_of_facture().data(), static_cast<int>(this->_internal_name_of_facture().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Facture.name_of_facture");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name_of_facture(), target);
  }

  // string dir_of_facture = 3;
  if (!this->_internal_dir_of_facture().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_dir_of_facture().data(), static_cast<int>(this->_internal_dir_of_facture().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Facture.dir_of_facture");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_dir_of_facture(), target);
  }

  // string ref_to_client = 4;
  if (!this->_internal_ref_to_client().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ref_to_client().data(), static_cast<int>(this->_internal_ref_to_client().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Facture.ref_to_client");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_ref_to_client(), target);
  }

  // repeated string facture_details = 5;
  for (int i = 0, n = this->_internal_facture_details_size(); i < n; i++) {
    const auto& s = this->_internal_facture_details(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Facture.facture_details");
    target = stream->WriteString(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Facture)
  return target;
}

size_t Facture::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Facture)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string facture_details = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.facture_details_.size());
  for (int i = 0, n = _impl_.facture_details_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.facture_details_.Get(i));
  }

  // string name_of_facture = 2;
  if (!this->_internal_name_of_facture().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name_of_facture());
  }

  // string dir_of_facture = 3;
  if (!this->_internal_dir_of_facture().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_dir_of_facture());
  }

  // string ref_to_client = 4;
  if (!this->_internal_ref_to_client().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ref_to_client());
  }

  // uint32 type_id_facture = 1;
  if (this->_internal_type_id_facture() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_type_id_facture());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Facture::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Facture::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Facture::GetClassData() const { return &_class_data_; }


void Facture::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Facture*>(&to_msg);
  auto& from = static_cast<const Facture&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Facture)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.facture_details_.MergeFrom(from._impl_.facture_details_);
  if (!from._internal_name_of_facture().empty()) {
    _this->_internal_set_name_of_facture(from._internal_name_of_facture());
  }
  if (!from._internal_dir_of_facture().empty()) {
    _this->_internal_set_dir_of_facture(from._internal_dir_of_facture());
  }
  if (!from._internal_ref_to_client().empty()) {
    _this->_internal_set_ref_to_client(from._internal_ref_to_client());
  }
  if (from._internal_type_id_facture() != 0) {
    _this->_internal_set_type_id_facture(from._internal_type_id_facture());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Facture::CopyFrom(const Facture& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Facture)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Facture::IsInitialized() const {
  return true;
}

void Facture::InternalSwap(Facture* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.facture_details_.InternalSwap(&other->_impl_.facture_details_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_of_facture_, lhs_arena,
      &other->_impl_.name_of_facture_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.dir_of_facture_, lhs_arena,
      &other->_impl_.dir_of_facture_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.ref_to_client_, lhs_arena,
      &other->_impl_.ref_to_client_, rhs_arena
  );
  swap(_impl_.type_id_facture_, other->_impl_.type_id_facture_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Facture::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Client_5fFacture_2eproto_getter, &descriptor_table_Client_5fFacture_2eproto_once,
      file_level_metadata_Client_5fFacture_2eproto[0]);
}

// ===================================================================

class FactureId::_Internal {
 public:
};

FactureId::FactureId(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:FactureId)
}
FactureId::FactureId(const FactureId& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FactureId* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.facture_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.facture_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.facture_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_facture_id().empty()) {
    _this->_impl_.facture_id_.Set(from._internal_facture_id(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:FactureId)
}

inline void FactureId::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.facture_id_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.facture_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.facture_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

FactureId::~FactureId() {
  // @@protoc_insertion_point(destructor:FactureId)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FactureId::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.facture_id_.Destroy();
}

void FactureId::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FactureId::Clear() {
// @@protoc_insertion_point(message_clear_start:FactureId)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.facture_id_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FactureId::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string facture_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_facture_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "FactureId.facture_id"));
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

uint8_t* FactureId::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FactureId)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string facture_id = 1;
  if (!this->_internal_facture_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_facture_id().data(), static_cast<int>(this->_internal_facture_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FactureId.facture_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_facture_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FactureId)
  return target;
}

size_t FactureId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FactureId)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string facture_id = 1;
  if (!this->_internal_facture_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_facture_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FactureId::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FactureId::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FactureId::GetClassData() const { return &_class_data_; }


void FactureId::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FactureId*>(&to_msg);
  auto& from = static_cast<const FactureId&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:FactureId)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_facture_id().empty()) {
    _this->_internal_set_facture_id(from._internal_facture_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FactureId::CopyFrom(const FactureId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FactureId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FactureId::IsInitialized() const {
  return true;
}

void FactureId::InternalSwap(FactureId* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.facture_id_, lhs_arena,
      &other->_impl_.facture_id_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata FactureId::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Client_5fFacture_2eproto_getter, &descriptor_table_Client_5fFacture_2eproto_once,
      file_level_metadata_Client_5fFacture_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Facture*
Arena::CreateMaybeMessage< ::Facture >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Facture >(arena);
}
template<> PROTOBUF_NOINLINE ::FactureId*
Arena::CreateMaybeMessage< ::FactureId >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FactureId >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>