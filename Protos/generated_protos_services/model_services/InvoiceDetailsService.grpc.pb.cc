// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: model_services/InvoiceDetailsService.proto

#include "model_services/InvoiceDetailsService.pb.h"
#include "model_services/InvoiceDetailsService.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace TestApiGrpc {
namespace Protos {
namespace models {

static const char* InvoiceDetailsService_method_names[] = {
  "/TestApiGrpc.Protos.models.InvoiceDetailsService/CreateInvoiceDetails",
  "/TestApiGrpc.Protos.models.InvoiceDetailsService/ListInvoiceDetails",
};

std::unique_ptr< InvoiceDetailsService::Stub> InvoiceDetailsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< InvoiceDetailsService::Stub> stub(new InvoiceDetailsService::Stub(channel, options));
  return stub;
}

InvoiceDetailsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CreateInvoiceDetails_(InvoiceDetailsService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListInvoiceDetails_(InvoiceDetailsService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status InvoiceDetailsService::Stub::CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::TestApiGrpc::Protos::models::ServiceStatus* response) {
  return ::grpc::internal::BlockingUnaryCall< ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateInvoiceDetails_, context, request, response);
}

void InvoiceDetailsService::Stub::async::CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateInvoiceDetails_, context, request, response, std::move(f));
}

void InvoiceDetailsService::Stub::async::CreateInvoiceDetails(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateInvoiceDetails_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>* InvoiceDetailsService::Stub::PrepareAsyncCreateInvoiceDetailsRaw(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::TestApiGrpc::Protos::models::ServiceStatus, ::TestApiGrpc::Protos::models::InvoiceDetails, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateInvoiceDetails_, context, request);
}

::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ServiceStatus>* InvoiceDetailsService::Stub::AsyncCreateInvoiceDetailsRaw(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateInvoiceDetailsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceDetailsService::Stub::ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListInvoiceDetails_, context, request, response);
}

void InvoiceDetailsService::Stub::async::ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListInvoiceDetails_, context, request, response, std::move(f));
}

void InvoiceDetailsService::Stub::async::ListInvoiceDetails(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListInvoiceDetails_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* InvoiceDetailsService::Stub::PrepareAsyncListInvoiceDetailsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListInvoiceDetails_, context, request);
}

::grpc::ClientAsyncResponseReader< ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse>* InvoiceDetailsService::Stub::AsyncListInvoiceDetailsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListInvoiceDetailsRaw(context, request, cq);
  result->StartCall();
  return result;
}

InvoiceDetailsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceDetailsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceDetailsService::Service, ::TestApiGrpc::Protos::models::InvoiceDetails, ::TestApiGrpc::Protos::models::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceDetailsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::TestApiGrpc::Protos::models::InvoiceDetails* req,
             ::TestApiGrpc::Protos::models::ServiceStatus* resp) {
               return service->CreateInvoiceDetails(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceDetailsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceDetailsService::Service, ::google::protobuf::Empty, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceDetailsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* resp) {
               return service->ListInvoiceDetails(ctx, req, resp);
             }, this)));
}

InvoiceDetailsService::Service::~Service() {
}

::grpc::Status InvoiceDetailsService::Service::CreateInvoiceDetails(::grpc::ServerContext* context, const ::TestApiGrpc::Protos::models::InvoiceDetails* request, ::TestApiGrpc::Protos::models::ServiceStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceDetailsService::Service::ListInvoiceDetails(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListInvoiceDetailsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace TestApiGrpc
}  // namespace Protos
}  // namespace models

