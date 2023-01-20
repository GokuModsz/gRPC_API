#include <iostream>
#include <string>
#include <memory>

// Incluir Servidor gRCP.


// Incluir Servicios .protos.
// Servicios ClientSerices


using std::cout;

auto main() -> int32_t
{
  cout << "\n**** SERVIDOR INVENTARIO DE COMPRAS MINIMARKET **** \n" << std::endl;

  /*
  const std::string server_address = "0.0.0.0:8001";
  grpc::EnableDefaultHealthCheckService(true);

  grpc::ServerBuilder server_builder;  server_builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

  std::unique_ptr<grpc::Server> server{server_builder.BuildAndStart()};
  std::clog << "Server Mini-Market API is Open:  " << server_address << std::endl;
  
  server->Wait();
  */
  return EXIT_SUCCESS;
}