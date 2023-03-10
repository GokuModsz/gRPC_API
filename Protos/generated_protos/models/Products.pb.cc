// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: models/Products.proto

#include "models/Products.pb.h"

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

namespace TestApiGrpc {
namespace Protos {
namespace models {
PROTOBUF_CONSTEXPR Product::Product(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.product_details_)*/{}
  , /*decltype(_impl_.id_product_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_product_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.price_product_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ProductDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProductDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProductDefaultTypeInternal() {}
  union {
    Product _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProductDefaultTypeInternal _Product_default_instance_;
}  // namespace models
}  // namespace Protos
}  // namespace TestApiGrpc
static ::_pb::Metadata file_level_metadata_models_2fProducts_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_models_2fProducts_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_models_2fProducts_2eproto = nullptr;

const uint32_t TableStruct_models_2fProducts_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestApiGrpc::Protos::models::Product, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TestApiGrpc::Protos::models::Product, _impl_.id_product_),
  PROTOBUF_FIELD_OFFSET(::TestApiGrpc::Protos::models::Product, _impl_.name_product_),
  PROTOBUF_FIELD_OFFSET(::TestApiGrpc::Protos::models::Product, _impl_.price_product_),
  PROTOBUF_FIELD_OFFSET(::TestApiGrpc::Protos::models::Product, _impl_.product_details_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::TestApiGrpc::Protos::models::Product)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::TestApiGrpc::Protos::models::_Product_default_instance_._instance,
};

const char descriptor_table_protodef_models_2fProducts_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025models/Products.proto\022\031TestApiGrpc.Pro"
  "tos.models\"c\n\007Product\022\022\n\nid_product\030\001 \001("
  "\t\022\024\n\014name_product\030\002 \001(\t\022\025\n\rprice_product"
  "\030\003 \001(\005\022\027\n\017product_details\030\004 \003(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_models_2fProducts_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_models_2fProducts_2eproto = {
    false, false, 159, descriptor_table_protodef_models_2fProducts_2eproto,
    "models/Products.proto",
    &descriptor_table_models_2fProducts_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_models_2fProducts_2eproto::offsets,
    file_level_metadata_models_2fProducts_2eproto, file_level_enum_descriptors_models_2fProducts_2eproto,
    file_level_service_descriptors_models_2fProducts_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_models_2fProducts_2eproto_getter() {
  return &descriptor_table_models_2fProducts_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_models_2fProducts_2eproto(&descriptor_table_models_2fProducts_2eproto);
namespace TestApiGrpc {
namespace Protos {
namespace models {

// ===================================================================

class Product::_Internal {
 public:
};

Product::Product(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:TestApiGrpc.Protos.models.Product)
}
Product::Product(const Product& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Product* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.product_details_){from._impl_.product_details_}
    , decltype(_impl_.id_product_){}
    , decltype(_impl_.name_product_){}
    , decltype(_impl_.price_product_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.id_product_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_product_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_id_product().empty()) {
    _this->_impl_.id_product_.Set(from._internal_id_product(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_product_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_product_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name_product().empty()) {
    _this->_impl_.name_product_.Set(from._internal_name_product(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.price_product_ = from._impl_.price_product_;
  // @@protoc_insertion_point(copy_constructor:TestApiGrpc.Protos.models.Product)
}

inline void Product::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.product_details_){arena}
    , decltype(_impl_.id_product_){}
    , decltype(_impl_.name_product_){}
    , decltype(_impl_.price_product_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.id_product_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_product_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_product_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_product_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Product::~Product() {
  // @@protoc_insertion_point(destructor:TestApiGrpc.Protos.models.Product)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Product::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.product_details_.~RepeatedPtrField();
  _impl_.id_product_.Destroy();
  _impl_.name_product_.Destroy();
}

void Product::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Product::Clear() {
// @@protoc_insertion_point(message_clear_start:TestApiGrpc.Protos.models.Product)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.product_details_.Clear();
  _impl_.id_product_.ClearToEmpty();
  _impl_.name_product_.ClearToEmpty();
  _impl_.price_product_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Product::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string id_product = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id_product();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TestApiGrpc.Protos.models.Product.id_product"));
        } else
          goto handle_unusual;
        continue;
      // string name_product = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name_product();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TestApiGrpc.Protos.models.Product.name_product"));
        } else
          goto handle_unusual;
        continue;
      // int32 price_product = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.price_product_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string product_details = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_product_details();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "TestApiGrpc.Protos.models.Product.product_details"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

uint8_t* Product::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestApiGrpc.Protos.models.Product)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string id_product = 1;
  if (!this->_internal_id_product().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id_product().data(), static_cast<int>(this->_internal_id_product().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TestApiGrpc.Protos.models.Product.id_product");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id_product(), target);
  }

  // string name_product = 2;
  if (!this->_internal_name_product().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name_product().data(), static_cast<int>(this->_internal_name_product().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TestApiGrpc.Protos.models.Product.name_product");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name_product(), target);
  }

  // int32 price_product = 3;
  if (this->_internal_price_product() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_price_product(), target);
  }

  // repeated string product_details = 4;
  for (int i = 0, n = this->_internal_product_details_size(); i < n; i++) {
    const auto& s = this->_internal_product_details(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TestApiGrpc.Protos.models.Product.product_details");
    target = stream->WriteString(4, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestApiGrpc.Protos.models.Product)
  return target;
}

size_t Product::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestApiGrpc.Protos.models.Product)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string product_details = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.product_details_.size());
  for (int i = 0, n = _impl_.product_details_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.product_details_.Get(i));
  }

  // string id_product = 1;
  if (!this->_internal_id_product().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id_product());
  }

  // string name_product = 2;
  if (!this->_internal_name_product().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name_product());
  }

  // int32 price_product = 3;
  if (this->_internal_price_product() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_price_product());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Product::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Product::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Product::GetClassData() const { return &_class_data_; }


void Product::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Product*>(&to_msg);
  auto& from = static_cast<const Product&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:TestApiGrpc.Protos.models.Product)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.product_details_.MergeFrom(from._impl_.product_details_);
  if (!from._internal_id_product().empty()) {
    _this->_internal_set_id_product(from._internal_id_product());
  }
  if (!from._internal_name_product().empty()) {
    _this->_internal_set_name_product(from._internal_name_product());
  }
  if (from._internal_price_product() != 0) {
    _this->_internal_set_price_product(from._internal_price_product());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Product::CopyFrom(const Product& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestApiGrpc.Protos.models.Product)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Product::IsInitialized() const {
  return true;
}

void Product::InternalSwap(Product* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.product_details_.InternalSwap(&other->_impl_.product_details_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.id_product_, lhs_arena,
      &other->_impl_.id_product_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_product_, lhs_arena,
      &other->_impl_.name_product_, rhs_arena
  );
  swap(_impl_.price_product_, other->_impl_.price_product_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Product::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_models_2fProducts_2eproto_getter, &descriptor_table_models_2fProducts_2eproto_once,
      file_level_metadata_models_2fProducts_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace models
}  // namespace Protos
}  // namespace TestApiGrpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TestApiGrpc::Protos::models::Product*
Arena::CreateMaybeMessage< ::TestApiGrpc::Protos::models::Product >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TestApiGrpc::Protos::models::Product >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
