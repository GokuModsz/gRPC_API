#ifndef E7E722C2_0D18_4219_A8A2_1DF473D4CE22
#define E7E722C2_0D18_4219_A8A2_1DF473D4CE22

// Incluir ClientService.
#include "generated_protos_services/model_services/ClientService.grpc.pb.h";

// Clase ClientService.
class ClientService
{

  // Metodo CrearClient.
  virtual ::grpc::Status CreateClient(::grpc::ServerContext* context, const ::TestApiGrpc::Protos::models::Client* request, ::TestApiGrpc::Protos::models::ServiceStatus* response);

  // Metodo ListClient.
  virtual ::grpc::Status ListClient(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::TestApiGrpc::Protos::models::ListClientResponse* response);

};


#endif /* E7E722C2_0D18_4219_A8A2_1DF473D4CE22 */
