// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: model_services/InvoicesService.proto

#include "model_services/InvoicesService.pb.h"
#include "model_services/InvoicesService.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace TestApiGrpc {
namespace Protos {
namespace models {

class MockInvoicesServiceStub : public InvoicesService::StubInterface {
 public:
  MOCK_METHOD3(CreateInvoices, ::grpc::Status(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::Invoices& request, ::TestApiGrpc::Protos::models::ServiceStatus* response));
  MOCK_METHOD3(AsyncCreateInvoicesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>*(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::Invoices& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateInvoicesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ServiceStatus>*(::grpc::ClientContext* context, const ::TestApiGrpc::Protos::models::Invoices& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(ListInvoices, ::grpc::Status(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::TestApiGrpc::Protos::models::ListInvoicesResponse* response));
  MOCK_METHOD3(AsyncListInvoicesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoicesResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListInvoicesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::TestApiGrpc::Protos::models::ListInvoicesResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
};

} // namespace TestApiGrpc
} // namespace Protos
} // namespace models
