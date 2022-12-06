#ifndef PUNTAJE_H
#define PUNTAJE_H

class Puntaje
{
private:
    int puntajeReal;
    int puntajeAux;
    int record;
    const int LIMITE=650;

public:
    Puntaje();
    int getPuntajeReal();
    int getRecord();
    bool calcularPuntaje();
    void reiniciarPuntaje();
};

#endif // PUNTAJE_H
