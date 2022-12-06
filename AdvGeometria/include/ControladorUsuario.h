#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H
#include<string>
#include "VistaUsuario.h"
#include "Usuario.h"

class ControladorUsuario
{
private:
    Usuario* modelo;
    VistaUsuario* vista;

public:
    ControladorUsuario(Usuario& modelo, VistaUsuario& vista);
    void setNombreUsuario(std::string nombreUsuario);
    std::string getNombreUsuario();
    void ingresarNombreUsuario();
    void imprimirNombreUsuario();
};

#endif // CONTROLADORUSUARIO_H
