#include "GeometryPersonaje.h"

// ------------------------------------------------------------------------------------------------------------------------
GeometryPersonaje::GeometryPersonaje():Personaje()
{
    this->texturaPersonaje = new Texture;
    if(!this->texturaPersonaje->loadFromFile("./image/GeometryPersonaje.png"))
    {
        throw "Personaje no encontrado";
    }
    this->spritePersonaje = new Sprite(*this->texturaPersonaje);
    this->spritePersonaje->setPosition(this->RESOLUCION_X*0.06, this->RESOLUCION_Y*0.73);
    // left, top, right, bottom
    this->spritePersonaje->setTextureRect(IntRect(0, 0, 90, 90));
}

// ------------------------------------------------------------------------------------------------------------------------
void GeometryPersonaje::realizarSalto()
{
        if(this->saltar)
        {
            if(this->spritePersonaje->getPosition().y>this->RESOLUCION_Y*0.25)
            {
                this->spritePersonaje->move(0,-3);
            }
            else
            {
                this->saltar=false;
            }
        }
        if(this->spritePersonaje->getPosition().y<this->RESOLUCION_Y*0.73 && !this->saltar)
        {
            this->spritePersonaje->move(0,+3);
        }
}
