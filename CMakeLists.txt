cmake_minimum_required(VERSION 3.24)

set(NAME TEST_API_GRPC)

project(
  TEST_API_GRPC
  DESCRIPTION "Test Api Created in gRPC with C++23"
  VERSION 1.0.0.0
  LANGUAGES C CXX
  HOMEPAGE_URL "https://github.com/GokuModsz"
)

include(CMake/GenerateProtobuf.cmake)

find_package(Protobuf CONFIG REQUIRED) # FindProtobuf.cmake pero de CMake, ProtobufConfig.cmake
find_package(gRPC CONFIG REQUIRED) # FindProtobuf, pero propio del GRPC, gRPCConfig.cmake
find_program(grpc_cpp_plugin_executable grpc_cpp_plugin)

# Generar .h, .cpp de .protos modelos.
GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos                  # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/generated_protos # --cpp_out / --grpc_out
  models/Client.proto                         # Client.proto a compilar
  models/Products.proto                       # Products.proto a compilar
  models/Invoices.proto                       # Invoices.proto a compilar
  models/InvoiceDetails.proto                 # InvoiceDetails.proto a compilar.
  models/ServiceStatus.proto                  # ServiceStatus.proto a compilar.
)

# generar .h, .cpp de servicios a usar de .protos.
GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos                           # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/generated_protos_services # --cpp_out / --grpc_out
  model_services/ClientService.proto                   # ClientService.proto a compilar
  model_services/ProductsService.proto                 # ProductsService.proto a compilar
  model_services/InvoicesService.proto                 # InvoicesService.proto a compilar
  model_services/InvoiceDetailsService.proto           # InvoiceDetailsService.proto a compilar.
)

add_executable(${PROJECT_NAME}
  Sources/server_init.cpp                                    # server_init add.

  # Client.
  Protos/generated_protos/models/Client.pb.h         # Client.pb.h add.
  Protos/generated_protos/models/Client.pb.cc        # Client.pb.cc add.

  # ClientService.
  Protos/generated_protos_services/model_services/ClientService.grpc.pb.h   # ClientService.grpc.pb.h add.
  Protos/generated_protos_services/model_services/ClientService.grpc.pb.cc  # ClientService.grpc.pb.cc add.

  # Products
  Protos/generated_protos/models/Products.pb.h
  Protos/generated_protos/models/Products.pb.cc
  
  # ProductsService.
  Protos/generated_protos_services/model_services/ProductsService.grpc.pb.h   # ProductsService.grpc.pb.h add.
  Protos/generated_protos_services/model_services/ProductsService.grpc.pb.cc  # ProductsService.grpc.pb.cc add.

  # Invoices.
  Protos/generated_protos/models/Invoices.pb.h
  Protos/generated_protos/models/Invoices.pb.cc
 
  #InvoicesService.
  Protos/generated_protos_services/model_services/InvoicesService.grpc.pb.h  # InvoicesService.grpc.pb.h add.
  Protos/generated_protos_services/model_services/InvoicesService.grpc.pb.cc # InvoicesService.grpc.pb.cc add.

  # InvoiceDetails.
  Protos/generated_protos/models/InvoiceDetails.pb.h
  Protos/generated_protos/models/InvoiceDetails.pb.cc
  
  # InvoiceDetailsService.
  Protos/generated_protos_services/model_services/InvoiceDetailsService.grpc.pb.h   # InvoiceDetailsService.grpc.pb.h add.
  Protos/generated_protos_services/model_services/InvoiceDetailsService.grpc.pb.cc  # InvoiceDetailsService.grpc.pb.cc add.
)

target_include_directories(
  ${PROJECT_NAME}
    PRIVATE
      ${CMAKE_SOURCE_DIR}/ 
      ${CMAKE_SOURCE_DIR}/Protos/ 
      ${CMAKE_SOURCE_DIR}/Protos/generated_protos
      ${CMAKE_SOURCE_DIR}/Protos/generated_protos_services
)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    protobuf::libprotobuf
    gRPC::grpc++
    gRPC::grpc++_reflection
)

target_compile_features(${PROJECT_NAME} PUBLIC c_std_23 cxx_std_23)