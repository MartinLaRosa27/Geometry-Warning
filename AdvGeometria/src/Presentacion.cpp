#include "Presentacion.h"

// ------------------------------------------------------------------------------------------------------------------------
Presentacion::Presentacion()
{
    this->presentacion = new RenderWindow(VideoMode(RESOLUCION_X, RESOLUCION_Y), TITULO);
    this->presentacion->setFramerateLimit(60);
    this->evento = new Event;
    this->texturaPresentacion = new Texture;
    this->texturaPresentacion->loadFromFile("./image/presentacion.png");
    this->spritePresentacion = new Sprite(*this->texturaPresentacion);
    this->spritePresentacion->setScale(RESOLUCION_X/this->spritePresentacion->getTexture()->getSize().x, RESOLUCION_Y/this->spritePresentacion->getTexture()->getSize().y);
}

// ------------------------------------------------------------------------------------------------------------------------
RenderWindow * Presentacion::getPresentacion()
{
    return this->presentacion;
}

// ------------------------------------------------------------------------------------------------------------------------
void Presentacion::procesarEvento()
{
    while(this->presentacion->pollEvent(*this->evento))
    {
        switch(this->evento->type)
        {
        case Event::Closed:
            exit(0);
        case Event::KeyPressed:
            if(Keyboard::isKeyPressed(Keyboard::Escape))
            {
                exit(0);
            }
            else if(Keyboard::isKeyPressed(Keyboard::A))
            {
                this->presentacion->close();
                break;
            }
        }
    }
}

// ------------------------------------------------------------------------------------------------------------------------
void Presentacion::iniciar()
{
    this->presentacion->clear(Color::White);
    this->presentacion->draw(*this->spritePresentacion);
    this->presentacion->display();
}

