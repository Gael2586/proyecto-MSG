#pragma once
#include <Ventana.hpp>
#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

using namespace std;

class Vaca : public Dibujo, public Actualizable
{

private:
    // int x;
    // int y;
    // int direccion_x;
    // int direccion_y;
    // // bool is_open;
    // // fstream archivo;
    // // string directorio;

public:
    Vaca() : Dibujo("cow")
    {
    }

    Vaca(int x, int y) : Dibujo("cow")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    void Actualizar()
    {
        // this->posicion.DesplazarX(1);
        // this->posicion.DesplazarY(0);
        // // this->posicion.CambiarDireccionX();
    }
    void Avanzar()
    {
        this->posicion.DesplazarX(1);
    }

    void CambiarDireccion()
    {
        this->posicion.CambiarDireccionX();
    }
    Vector LeerPosicion()
    {
        return this->posicion;
    }
    ~Vaca()
    {
    }
};