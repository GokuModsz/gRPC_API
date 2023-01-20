#ifndef C3A9E192_7210_41DB_A2C0_A011F4CB64F7
#define C3A9E192_7210_41DB_A2C0_A011F4CB64F7

// Icluir los Repositories.
#include "ClientRepository.hpp"  // ClientRepository.hpp

// Namespace TestApiGrpc
namespace TestApiGrpc
{
  // Clase Database -> Base de datos de los repositories.
  class Database : public std::enable_shared_from_this<Database>
  {
    // Metodos Publicos de la Clase Database.
    public:
        Database();
        std::shared_ptr<Database> GetPointer();
        static std::shared_ptr<Database> Create();

        // ClientRepository shared_ptr
        std::shared_ptr<ClientRepository> Clients();

        // Metodo inicializar Repository.
        auto InitRepository() -> void;

    // Privados.
    private:
        // ClientRepository.
        std::shared_ptr<ClientRepository> m_Clients;
  };
}

#endif /* C3A9E192_7210_41DB_A2C0_A011F4CB64F7 */
