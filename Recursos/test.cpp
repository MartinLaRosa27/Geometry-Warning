#include <tau/tau.h>
#include "Usuario.h"
#include "VistaUsuario.h"
#include "ControladorUsuario.h"
#include "Puntaje.h"

TAU_MAIN()

TEST(Test, UsuarioTest)
{
    Usuario usuario;
    usuario.setNombreUsuario("Luna");
    CHECK(usuario.getNombreUsuario() == "Luna");
}

TEST(Test, VistaUsuarioTest)
{
    VistaUsuario vistaUsuario;
    CHECK(vistaUsuario.ingresarNombreUsuario() == "Luna"); // Depende del valor ingresado.
}

TEST(Test, ControladorUsuarioTest)
{
    Usuario usuario;
    VistaUsuario vistaUsuario;
    ControladorUsuario controladorUsuario(usuario, vistaUsuario);
    controladorUsuario.setNombreUsuario("Luna");
    CHECK(controladorUsuario.getNombreUsuario() == "Luna");
    CHECK(vistaUsuario.ingresarNombreUsuario() == "Luna"); // Depende del valor ingresado.
    CHECK(controladorUsuario.getNombreUsuario() == "Luna");
    controladorUsuario.setNombreUsuario("Luna 2.0");
    CHECK(controladorUsuario.getNombreUsuario() == "Luna 2.0");
}

TEST(Test, PuntajeTest)
{
    Puntaje puntaje;
    CHECK(puntaje.getPuntaje() == 0);
    CHECK(puntaje.calcularPuntaje() == false);
}