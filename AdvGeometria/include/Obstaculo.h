#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <SFML/Graphics.hpp>
#include "Enemigo.h"
using namespace sf;

class Obstaculo:public Enemigo
{
public:
    Obstaculo(int velocidad);
    void aproximarse();
};

#endif // OBSTACULO_H
