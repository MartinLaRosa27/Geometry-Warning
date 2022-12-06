#include "Principal.h"

// ------------------------------------------------------------------------------------------------------------------------
Principal::Principal()
{
    this->principal = new RenderWindow(VideoMode(RESOLUCION_X, RESOLUCION_Y), TITULO);
    this->principal->setFramerateLimit(60);
    this->evento = new Event;
    this->texto = new Texto;
    this->puntaje = new Puntaje;
    this->piso = new Piso;
    this->comenzarJuego();
}

// ------------------------------------------------------------------------------------------------------------------------
RenderWindow * Principal::getPrincipal()
{
    return this->principal;
}

// ------------------------------------------------------------------------------------------------------------------------
void Principal::procesarEvento()
{
    while(this->principal->pollEvent(*this->evento))
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
            else if (Keyboard::isKeyPressed(Keyboard::Space)&&!this->partidaFinalizada)
            {
                if(this->personaje->getSpritePersonaje()->getPosition().y==this->RESOLUCION_Y*0.73)
                {
                    this->personaje->setSaltar(true);
                }
            }
            else if (Keyboard::isKeyPressed(Keyboard::A))
            {
                this->comenzarJuego();
            }
            else if (Keyboard::isKeyPressed(Keyboard::Right))
            {
                if(this->personaje->getSpritePersonaje()->getPosition().x<this->RESOLUCION_X && !this->partidaFinalizada)
                {
                    this->personaje->getSpritePersonaje()->move(+5,0);
                }
            }
            else if (Keyboard::isKeyPressed(Keyboard::Left))
            {
                if(this->personaje->getSpritePersonaje()->getPosition().x>0 && !this->partidaFinalizada)
                {
                    this->personaje->getSpritePersonaje()->move(-5,0);
                }
            }
            else if (Keyboard::isKeyPressed(Keyboard::Up))
            {
                if(this->personaje->getSpritePersonaje()->getPosition().y==this->RESOLUCION_Y*0.73)
                {
                    this->personaje->setSaltar(true);
                }
            }
            break;
        }
    }
}

// ------------------------------------------------------------------------------------------------------------------------
void Principal::iniciar()
{
    this->principal->clear(Color::White);
    this->principal->draw(*this->piso->getSpriteBackground());
    this->principal->draw(*this->piso->getSpritePiso());
    this->principal->draw(*this->personaje->getSpritePersonaje());
    this->principal->draw(*this->enemigo->getSpriteEnemigo());
    this->acciones();
    this->principal->display();
}

// ------------------------------------------------------------------------------------------------------------------------
void Principal::acciones()
{
    if(!this->partidaFinalizada)
    {
        this->enemigo->aproximarse();
        this->personaje->realizarSalto();
        this->detercarColision();
        this->reiniciarEnemigo();
    }
    this->generarTexto();
}

// -------------------------------------------------------------------------------------------------------------------------------------
void Principal::detercarColision()
{
    if(this->enemigo->getSpriteEnemigo()->getGlobalBounds().intersects(this->personaje->getSpritePersonaje()->getGlobalBounds()))
    {
        this->generarTexto();
        this->partidaFinalizada=true;
        this->personaje->getSpritePersonaje()->setColor(Color::Red);
    }
    else
    {
        this->calcularPuntaje();
    }
}

// -------------------------------------------------------------------------------------------------------------------------------------
void Principal::reiniciarEnemigo()
{
    if(this->enemigo->getSpriteEnemigo()->getPosition().x<0)
    {
        int num, velocidadActual = this->enemigo->getVelocidad();
        srand (time (NULL));
        num = 1 + rand() % (this->CANTIDAD_ENEMIGOS - 0);
        switch(num)
        {
        case 1:
            this->enemigo = new Volador(velocidadActual);
            break;
        case 2:
            this->enemigo = new Obstaculo(velocidadActual);
            break;
        case 3:
            this->enemigo = new NaveEnemigo(velocidadActual);
            break;
        default:
            this->enemigo = new Volador(velocidadActual);
            break;
        }
    }
}

// -------------------------------------------------------------------------------------------------------------------------------------
void Principal::calcularPuntaje()
{
    if(this->puntaje->calcularPuntaje())
    {
        this->enemigo->incrementarVelocidad();
    }
}

// -------------------------------------------------------------------------------------------------------------------------------------
void Principal::generarTexto()
{
    std::string mensajeMostrar="";
    if(this->partidaFinalizada)
    {
        mensajeMostrar+="El puntaje final es de ";
        mensajeMostrar+=std::to_string(this->puntaje->getPuntajeReal());
        mensajeMostrar+="\nPulsa A para jugar nuevamente";
        this->texto->getTexto()->setPosition(this->RESOLUCION_X*0.125, this->RESOLUCION_Y*0.50);
    }
    else
    {
        mensajeMostrar+="Puntaje Actual: ";
        mensajeMostrar+=std::to_string(this->puntaje->getPuntajeReal());
        mensajeMostrar+="\nPuntaje Maximo: ";
        mensajeMostrar+=std::to_string(this->puntaje->getRecord());
        mensajeMostrar+="\nPulsa A para reiniciar la partida";
        this->texto->getTexto()->setPosition(this->RESOLUCION_X*0.03, this->RESOLUCION_Y*0.04);
    }
    this->texto->escribirTexto(mensajeMostrar, 20);
    this->principal->draw(*this->texto->getTexto());
}

// -------------------------------------------------------------------------------------------------------------------------------------
void Principal::comenzarJuego()
{
    this->partidaFinalizada=false;
    this->personaje = new GeometryPersonaje;
    this->enemigo = new Obstaculo(-1);
    this->puntaje->reiniciarPuntaje();
}
