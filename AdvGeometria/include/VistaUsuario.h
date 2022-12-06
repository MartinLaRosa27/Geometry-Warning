#ifndef VISTAUSUARIO_H
#define VISTAUSUARIO_H
#include<iostream>
#include<string>

class VistaUsuario
{
public:
    VistaUsuario();
    std::string ingresarNombreUsuario();
    void imprimirNombreUsuario(std::string nombreUsuario);
};

#endif // VISTAUSUARIO_H
