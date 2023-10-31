#pragma once 
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include<Vector.hpp>

class Proyectil : public Dibujo, public Actualizable
{
private:
    int tiempoVida;

public:

    Proyectil(Vector posicion) : 
    Dibujo(posicion.LeerX() + 7,posicion.LeerY()+1,"proyectil")
    {

        this->tiempoVida = 100;
    }
    void Actualizar()
    {
        this->posicion.DesplazarX(1);
    }
    ~Proyectil() {}
};