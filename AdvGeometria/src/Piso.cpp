#include "Piso.h"

// ------------------------------------------------------------------------------------------------------------------------
Piso::Piso()
{
    this->texturaPiso = new Texture;
    this->texturaBackground = new Texture;
    if(!this->texturaPiso->loadFromFile("./image/piso.png") || !this->texturaBackground->loadFromFile("./image/background.png"))
    {
        throw "Background no encontrado";
    }
    this->spriteBackground = new Sprite(*this->texturaBackground);
    this->spriteBackground->setScale(this->RESOLUCION_X/this->spriteBackground->getTexture()->getSize().x, this->RESOLUCION_Y/this->spriteBackground->getTexture()->getSize().y);
    this->spritePiso = new Sprite(*this->texturaPiso);
    this->spritePiso->setPosition(1, RESOLUCION_Y*0.85);
    this->spritePiso->setScale(this->RESOLUCION_X/this->spritePiso->getTexture()->getSize().x, 1);
}

// ------------------------------------------------------------------------------------------------------------------------
Sprite* Piso::getSpritePiso()
{
    return this->spritePiso;
}

// ------------------------------------------------------------------------------------------------------------------------
Sprite* Piso::getSpriteBackground()
{
    return this->spriteBackground;
}
