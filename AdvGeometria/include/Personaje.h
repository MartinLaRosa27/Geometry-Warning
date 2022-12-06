#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Personaje
{
protected:
    Texture* texturaPersonaje;
    Sprite* spritePersonaje;
    bool saltar=false;
    const double RESOLUCION_X = 800.00;
    const double RESOLUCION_Y = 600.00;

public:
    Personaje();
    Sprite* getSpritePersonaje();
    bool setSaltar(bool saltar);
    virtual void realizarSalto()=0;
};

#endif // PERSONAJE_H
