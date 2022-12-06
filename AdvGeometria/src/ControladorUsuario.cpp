#include "ControladorUsuario.h"

// ------------------------------------------------------------------------------------------------------------------------
ControladorUsuario::ControladorUsuario(Usuario& modelo, VistaUsuario& vista)
{
    this->modelo = &modelo;
    this->vista = &vista;
}

// ------------------------------------------------------------------------------------------------------------------------
void ControladorUsuario::setNombreUsuario(std::string nombreUsuario)
{
    this->modelo->setNombreUsuario(nombreUsuario);
}

// ------------------------------------------------------------------------------------------------------------------------
std::string ControladorUsuario::getNombreUsuario()
{
    return this->modelo->getNombreUsuario();
}

// ------------------------------------------------------------------------------------------------------------------------
void ControladorUsuario::ingresarNombreUsuario()
{
    this->modelo->setNombreUsuario(this->vista->ingresarNombreUsuario());
}

// ------------------------------------------------------------------------------------------------------------------------
void ControladorUsuario::imprimirNombreUsuario()
{
    this->vista->imprimirNombreUsuario(this->modelo->getNombreUsuario());
}
