#ifndef VOLADOR_H
#define VOLADOR_H
#include <SFML/Graphics.hpp>
#include "Enemigo.h"
using namespace sf;

class Volador:public Enemigo
{
public:
    Volador(int velocidad);
    void aproximarse();
};

#endif // VOLADOR_H
