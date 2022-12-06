#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <time.h>
#include <SFML/Graphics.hpp>
#include "Piso.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Obstaculo.h"
#include "Volador.h"
#include "Texto.h"
#include "Puntaje.h"
#include "NaveEnemigo.h"
#include "GeometryPersonaje.h"
using namespace sf;

class Principal
{
private:
    RenderWindow* principal;
    Event* evento;
    Piso* piso;
    Personaje* personaje;
    Enemigo* enemigo;
    Texto* texto;
    Puntaje* puntaje;
    bool partidaFinalizada;
    const double RESOLUCION_X = 800.00;
    const double RESOLUCION_Y = 600.00;
    const std::string TITULO = "Geometry Warning";
    const int CANTIDAD_ENEMIGOS = 3;

public:
    Principal();
    RenderWindow* getPrincipal();
    void detercarColision();
    void reiniciarEnemigo();
    void acciones();
    void calcularPuntaje();
    void generarTexto();
    void comenzarJuego();
    void procesarEvento();
    void iniciar();
};

#endif // PRINCIPAL_H
