#ifndef NAVEENEMIGO_H
#define NAVEENEMIGO_H
#include <SFML/Graphics.hpp>
#include "Enemigo.h"
using namespace sf;

class NaveEnemigo:public Enemigo
{
public:
    NaveEnemigo(int velocidad);
    void aproximarse();
};

#endif // NAVEENEMIGO_H
