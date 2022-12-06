#include "VistaUsuario.h"

// ------------------------------------------------------------------------------------------------------------------------
VistaUsuario::VistaUsuario()
{
}

// ------------------------------------------------------------------------------------------------------------------------
void VistaUsuario::imprimirNombreUsuario(std::string nombreUsuario)
{
    std::cout<<"Esta jugando: "<<nombreUsuario<<std::endl;
}

// ------------------------------------------------------------------------------------------------------------------------
std::string VistaUsuario::ingresarNombreUsuario()
{
    std::string nombreUsuario;
    std::cout<<"Ingrese su nombre: "<<nombreUsuario;
    std::cin>>nombreUsuario;
    return nombreUsuario;
}
