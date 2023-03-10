// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: model_services/InvoiceDetailsService.proto
// Original file comments:
// InvoiceDetailsService.proto
#ifndef GRPC_model_5fservices_2fInvoiceDetailsService_2eproto__INCLUDED
#define GRPC_model_5fservices_2fInvoiceDetailsService_2eproto__INCLUDED

#include "model_services/InvoiceDetailsService.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace TestApiGrpc {
namespace Protos {
namespace models {

// Servicio InvoiceDetailsService.
class InvoiceDetailsService final {
 public:
  static constexpr char const* service_full_name() {
    return "TestApiGrpc.Protos.models.InvoiceDetailsService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::TestApiGrpc::Protos::models::ServiceStatus* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>> AsyncCreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>>(AsyncCreateInvoiceDetailsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>> PrepareAsyncCreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>>(PrepareAsyncCreateInvoiceDetailsRaw(context, request, cq));
    }
    virtual ::grpc::Status ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>> AsyncListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>>(AsyncListInvoiceDetailsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>> PrepareAsyncListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>>(PrepareAsyncListInvoiceDetailsRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>* AsyncCreateInvoiceDetailsRaw(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>* PrepareAsyncCreateInvoiceDetailsRaw(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* AsyncListInvoiceDetailsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* PrepareAsyncListInvoiceDetailsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::TestApiGrpc::Protos::models::ServiceStatus* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>> AsyncCreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>>(AsyncCreateInvoiceDetailsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>> PrepareAsyncCreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>>(PrepareAsyncCreateInvoiceDetailsRaw(context, request, cq));
    }
    ::grpc::Status ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>> AsyncListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>>(AsyncListInvoiceDetailsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>> PrepareAsyncListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>>(PrepareAsyncListInvoiceDetailsRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response, std::function<void(::grpc::Status)>) override;
      void CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) override;
      void ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response, std::function<void(::grpc::Status)>) override;
      void ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>* AsyncCreateInvoiceDetailsRaw(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>* PrepareAsyncCreateInvoiceDetailsRaw(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* AsyncListInvoiceDetailsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* PrepareAsyncListInvoiceDetailsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateInvoiceDetails_;
    const ::grpc::internal::RpcMethod rpcmethod_ListInvoiceDetails_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response);
    virtual ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_CreateInvoiceDetails() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateInvoiceDetails(::grpc::ServerContext* context, ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::grpc::ServerAsyncResponseWriter< ::TestApiGrpc::Protos::models::ServiceStatus>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ListInvoiceDetails() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ListInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListInvoiceDetails(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateInvoiceDetails<WithAsyncMethod_ListInvoiceDetails<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_CreateInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_CreateInvoiceDetails() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response) { return this->CreateInvoiceDetails(context, request, response); }));}
    void SetMessageAllocatorFor_CreateInvoiceDetails(
        ::grpc::MessageAllocator< ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_CreateInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CreateInvoiceDetails(
      ::grpc::CallbackServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_ListInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_ListInvoiceDetails() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response) { return this->ListInvoiceDetails(context, request, response); }));}
    void SetMessageAllocatorFor_ListInvoiceDetails(
        ::grpc::MessageAllocator< ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_ListInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListInvoiceDetails(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_CreateInvoiceDetails<WithCallbackMethod_ListInvoiceDetails<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_CreateInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_CreateInvoiceDetails() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ListInvoiceDetails() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ListInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CreateInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_CreateInvoiceDetails() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CreateInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateInvoiceDetails(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_ListInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ListInvoiceDetails() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_ListInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListInvoiceDetails(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_CreateInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_CreateInvoiceDetails() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->CreateInvoiceDetails(context, request, response); }));
    }
    ~WithRawCallbackMethod_CreateInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CreateInvoiceDetails(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_ListInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_ListInvoiceDetails() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ListInvoiceDetails(context, request, response); }));
    }
    ~WithRawCallbackMethod_ListInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListInvoiceDetails(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_CreateInvoiceDetails() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus>* streamer) {
                       return this->StreamedCreateInvoiceDetails(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_CreateInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateInvoiceDetails(::grpc::ServerContext* /*context*/, const ::TestApiGrpc::Protos::models::InvoiceDetails* /*request*/, ::TestApiGrpc::Protos::models::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateInvoiceDetails(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::TestApiGrpc::Protos::models::InvoiceDetails,::TestApiGrpc::Protos::models::ServiceStatus>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListInvoiceDetails : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ListInvoiceDetails() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* streamer) {
                       return this->StreamedListInvoiceDetails(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ListInvoiceDetails() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListInvoiceDetails(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListInvoiceDetails(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateInvoiceDetails<WithStreamedUnaryMethod_ListInvoiceDetails<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateInvoiceDetails<WithStreamedUnaryMethod_ListInvoiceDetails<Service > > StreamedService;
};

}  // namespace models
}  // namespace Protos
}  // namespace TestApiGrpc


#endif  // GRPC_model_5fservices_2fInvoiceDetailsService_2eproto__INCLUDED
