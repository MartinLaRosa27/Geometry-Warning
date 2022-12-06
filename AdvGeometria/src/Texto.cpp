#include "Texto.h"

// ------------------------------------------------------------------------------------------------------------------------
Texto::Texto()
{
    Font* font = new Font;
    if(!font->loadFromFile("font/Font.ttf"))
    {
        throw "Tipografia no encontrada";
    }
    this->texto = new Text();
    this->texto->setFont(*font);
}

// ------------------------------------------------------------------------------------------------------------------------
void Texto::escribirTexto(String texto, int tamanio)
{
    this->texto->setString(texto);
    this->texto->setCharacterSize(tamanio);
    this->texto->setFillColor(Color::White);
}

// ------------------------------------------------------------------------------------------------------------------------
Text* Texto::getTexto()
{
    return this->texto;
}
