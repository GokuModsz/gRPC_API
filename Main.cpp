#include <iostream>
#include <string>
#include <memory>

// Includes para el Servidor.
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

// Includes para los Servicios.
#include <grpc++/grpc++.h>
#include "Protos/AllServices.grpc.pb.h"
#include "Protos/Client_Facture.grpc.pb.h"
#include "Protos/Client_Invoice.grpc.pb.h"
#include "Protos/Client_Product.grpc.pb.h"
#include "Protos/Client_Register.grpc.pb.h"

// Clase para Base de Datos .proto




using std::cout;

auto main() -> int32_t
{
  cout << "**** SERVIDOR INVENTARIO DE COMPRAS MINIMMRKET **** " << std::endl;

  // Inicializar Servidor.
  const std::string server_address = "0.0.0.0:8001";
  grpc::EnableDefaultHealthCheckService(true); // TODO: Investigar

  grpc::ServerBuilder server_builder;
  server_builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

  
  return EXIT_SUCCESS;
}