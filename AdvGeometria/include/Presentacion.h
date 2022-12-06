#ifndef PRESENTACION_H
#define PRESENTACION_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Presentacion
{
private:
    RenderWindow * presentacion;
    Event * evento;
    Texture * texturaPresentacion;
    Sprite * spritePresentacion;
    const double RESOLUCION_X = 800.00;
    const double RESOLUCION_Y = 600.00;
    const std::string TITULO = "Bienvenido";

public:
    Presentacion();
    RenderWindow * getPresentacion();
    void procesarEvento();
    void iniciar();
};

#endif // PRESENTACION_H
