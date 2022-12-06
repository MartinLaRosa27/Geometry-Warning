#ifndef TEXTO_H
#define TEXTO_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Texto
{
private:
    Text * texto;

public:
    Texto();
    void escribirTexto(String texto, int tamanio);
    Text* getTexto();
};

#endif // TEXTO_H
