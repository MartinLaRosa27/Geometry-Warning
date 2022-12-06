#ifndef USUARIO_H
#define USUARIO_H
#include<string>

class Usuario
{
private:
    std::string nombreUsuario;

public:
    Usuario();
    std::string getNombreUsuario();
    void setNombreUsuario(std::string nombreUsuario);
};

#endif // USUARIO_H
