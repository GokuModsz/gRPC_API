// Incluir Database.hpp
#include "Database.hpp"

// Namespace TestApiGrpc
namespace TestApiGrpc
{
  Database::Database() { }

  // Metodo GetPointer.
  std::shared_ptr<Database> Database::GetPointer() { return shared_from_this(); }

  // Metodo Database::Create()
  std::shared_ptr<Database> Database::Create() { return std::make_shared<Database>(); }

  // Metodo Database::Clients()
  std::shared_ptr<ClientRepository> Database::Clients() { return m_Clients->GetPointer(); }

  // Metodo inicializar Repository.
  auto InitRepository() noexcept -> void
  {
    m_Clients = ClientRepository::Create(GetPointer());
  }

}