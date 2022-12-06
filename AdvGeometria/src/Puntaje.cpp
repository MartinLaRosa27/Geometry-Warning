#include "Puntaje.h"

// -------------------------------------------------------------------------------------------------------------------------------------
Puntaje::Puntaje()
{
    this->puntajeReal=0;
    this->puntajeAux=0;
    this->record=0;
}

// -------------------------------------------------------------------------------------------------------------------------------------
int Puntaje::getPuntajeReal()
{
    return this->puntajeReal;
}

// -------------------------------------------------------------------------------------------------------------------------------------
int Puntaje::getRecord()
{
    return this->record;
}

// -------------------------------------------------------------------------------------------------------------------------------------
bool Puntaje::calcularPuntaje()
{
    this->puntajeAux++;
    if(this->puntajeAux/this->LIMITE==1)
    {
        this->puntajeReal+=100;
        this->puntajeAux=0;
        if(this->puntajeReal>this->record)
        {
            this->record=this->puntajeReal;
        }
        return true;
    }
    return false;
}

// -------------------------------------------------------------------------------------------------------------------------------------
void Puntaje::reiniciarPuntaje()
{
    this->puntajeReal=0;
    this->puntajeAux=0;
}
