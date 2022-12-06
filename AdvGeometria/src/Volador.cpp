#include "Volador.h"

// ------------------------------------------------------------------------------------------------------------------------
Volador::Volador(int velocidad):Enemigo(velocidad)
{
    this->texturaEnemigo = new Texture;
    if(!this->texturaEnemigo->loadFromFile("./image/Volador.png"))
    {
        throw "Volador no encontrado";
    }
    this->spriteEnemigo = new Sprite(*this->texturaEnemigo);
    this->spriteEnemigo->setPosition(this->RESOLUCION_X, this->RESOLUCION_Y*0.51);
    // Left / Top / Ancho / Alto
    this->spriteEnemigo->setTextureRect(IntRect(0, 0, 160, 100));
}

// ------------------------------------------------------------------------------------------------------------------------
void Volador::aproximarse()
{
    this->spriteEnemigo->move(this->velocidad*2.5, 0);
}
