#ifndef PISO_H
#define PISO_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Piso
{
private:
    Texture* texturaBackground;
    Texture* texturaPiso;
    Sprite* spriteBackground;
    Sprite* spritePiso;
    const double RESOLUCION_X = 800.00;
    const double RESOLUCION_Y = 600.00;

public:
    Piso();
    Sprite* getSpritePiso();
    Sprite* getSpriteBackground();
};

#endif // PISO_H
