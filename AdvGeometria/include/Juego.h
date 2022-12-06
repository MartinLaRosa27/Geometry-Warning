#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Graphics.hpp>
#include "Presentacion.h"
#include "Principal.h"
#include "ControladorUsuario.h"
#include "VistaUsuario.h"
#include "Usuario.h"
using namespace sf;

class Juego
{
private:
    Usuario* modelo;
    VistaUsuario* vista;
    ControladorUsuario* controlador;
    Presentacion * presentacion;
    Principal * principal;
    const double RESOLUCION_X = 800.00;
    const double RESOLUCION_Y = 600.00;

public:
    Juego();
    void gameLoop();
};

#endif // JUEGO_H
