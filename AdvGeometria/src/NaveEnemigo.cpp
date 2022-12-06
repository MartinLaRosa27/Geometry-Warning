#include "NaveEnemigo.h"

// ------------------------------------------------------------------------------------------------------------------------
NaveEnemigo::NaveEnemigo(int velocidad):Enemigo(velocidad)
{
    this->texturaEnemigo = new Texture;
    if(!this->texturaEnemigo->loadFromFile("./image/NaveEnemigo.png"))
    {
        throw "NaveEnemigo no encontrado";
    }
    this->spriteEnemigo = new Sprite(*this->texturaEnemigo);
    this->spriteEnemigo->setPosition(this->RESOLUCION_X, this->RESOLUCION_Y*0.45);
    // Left / Top / Ancho / Alto
    this->spriteEnemigo->setTextureRect(IntRect(0, 0, 180, 120));
}

// ------------------------------------------------------------------------------------------------------------------------
void NaveEnemigo::aproximarse()
{
    this->spriteEnemigo->move(this->velocidad*2.8, 0);
}
