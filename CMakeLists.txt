cmake_minimum_required(VERSION 3.24)

project(TEST_API_GRPC C CXX)

include(CMake/GenerateProtobuf.cmake)

find_package(Protobuf CONFIG REQUIRED) # FindProtobuf.cmake pero de CMake, ProtobufConfig.cmake
find_package(gRPC CONFIG REQUIRED) # FindProtobuf, pero propio del GRPC, gRPCConfig.cmake

find_program(grpc_cpp_plugin_executable grpc_cpp_plugin)

message(STATUS "-----------> ${grpc_cpp_plugin_executable}")
message(STATUS "-----------> ${Protobuf_PROTOC_EXECUTABLE}")
message(STATUS "-----------> ${Protobuf_INCLUDE_DIRS}")
message(STATUS "-----------> ${Protobuf_LIBRARIES}")

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos # --cpp_out / --grpc_out
  Client_Register.proto              # Client_Register.proto a compilar
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos # --cpp_out / --grpc_out
  Client_Product.proto              # Client_Product.proto a compilar
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos # --cpp_out / --grpc_out
  Client_Facture.proto              # Client_Facture.proto a compilar
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos # --cpp_out / --grpc_out
  Client_Invoice.proto              # Client_Invoice.proto a compilar
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos # --cpp_out / --grpc_out
  AllServices.proto              # AllServices.proto a compilar
)

add_executable(TEST_API_GRPC
  Main.cpp

  Protos/Client_Facture.pb.h
  Protos/Client_Facture.pb.cc
  Protos/Client_Facture.grpc.pb.h
  Protos/Client_Facture.grpc.pb.cc

  Protos/Client_Invoice.pb.h
  Protos/Client_Invoice.pb.cc
  Protos/Client_Invoice.grpc.pb.h
  Protos/Client_Invoice.grpc.pb.cc

  Protos/Client_Product.pb.h
  Protos/Client_Product.pb.cc
  Protos/Client_Product.grpc.pb.h
  Protos/Client_Product.grpc.pb.cc

  Protos/AllServices.pb.h
  Protos/AllServices.pb.cc
  Protos/AllServices.grpc.pb.h
  Protos/AllServices.grpc.pb.cc

  Protos/Client_Register.pb.h
  Protos/Client_Register.pb.cc
  Protos/Client_Register.grpc.pb.h
  Protos/Client_Register.grpc.pb.cc

)

#target_include_directories(TEST_API_GRPC PUBLIC ${Protobuf_INCLUDE_DIRS})

target_link_libraries(TEST_API_GRPC
  PUBLIC
    gRPC::grpc++
    protobuf::libprotobuf
    gRPC::grpc++_reflection
)

target_compile_features(TEST_API_GRPC PUBLIC c_std_23 cxx_std_23)