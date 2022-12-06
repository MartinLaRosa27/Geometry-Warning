#include "Juego.h"

// ------------------------------------------------------------------------------------------------------------------------
Juego::Juego()
{
    /*
    this->modelo = new Usuario();
    this->vista = new VistaUsuario();
    this->controlador = new ControladorUsuario(*this->modelo, *this->vista);
    */
    this->gameLoop();
}

// ------------------------------------------------------------------------------------------------------------------------
void Juego::gameLoop()
{
    // Datos del usuario:
    /*
    this->controlador->ingresarNombreUsuario();
    this->controlador->imprimirNombreUsuario();
    */
    // Presentacion:
    this->presentacion = new Presentacion;
    while(this->presentacion->getPresentacion()->isOpen())
    {
        this->presentacion->procesarEvento();
        this->presentacion->iniciar();
    }
    // Principal:
    this->principal = new Principal;
    while(this->principal->getPrincipal()->isOpen())
    {
        this->principal->procesarEvento();
        this->principal->iniciar();
    }
}
