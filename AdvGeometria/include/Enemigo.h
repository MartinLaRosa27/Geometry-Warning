#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Enemigo
{
protected:
    Texture* texturaEnemigo;
    Sprite* spriteEnemigo;
    int velocidad;
    const double RESOLUCION_X = 800.00;
    const double RESOLUCION_Y = 600.00;

public:
    Enemigo(int velocidad);
    Sprite* getSpriteEnemigo();
    void incrementarVelocidad();
    int getVelocidad();
    virtual void aproximarse()=0;
};

#endif // ENEMIGO_H
