#include "Personaje.h"

// ------------------------------------------------------------------------------------------------------------------------
Personaje::Personaje()
{
}

// ------------------------------------------------------------------------------------------------------------------------
Sprite* Personaje::getSpritePersonaje()
{
    return this->spritePersonaje;
}

// ------------------------------------------------------------------------------------------------------------------------
bool Personaje::setSaltar(bool saltar)
{
    this->saltar = saltar;
}