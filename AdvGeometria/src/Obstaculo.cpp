#include "Obstaculo.h"

// ------------------------------------------------------------------------------------------------------------------------
Obstaculo::Obstaculo(int velocidad):Enemigo(velocidad)
{
    this->texturaEnemigo = new Texture;
    if(!this->texturaEnemigo->loadFromFile("./image/Obstaculo.png"))
    {
        throw "Obstaculo no encontrado";
    }
    this->spriteEnemigo = new Sprite(*this->texturaEnemigo);
    this->spriteEnemigo->setPosition(this->RESOLUCION_X, this->RESOLUCION_Y*0.70);
    // Left / Top / Ancho px / Alto px
    this->spriteEnemigo->setTextureRect(IntRect(0, 0, 120, 110));
}

// ------------------------------------------------------------------------------------------------------------------------
void Obstaculo::aproximarse()
{
    this->spriteEnemigo->move(this->velocidad*2, 0);
}
