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

class Plataforma : public Dibujo, public Actualizable
{
private:
    int direccion_x;
    fstream archivo;
    string directorio;

public:
    Plataforma() : Dibujo("plataforma")
    {

        this->posicion = Vector();
        this->posicion.LeerX();
        // this->posicion.DesplazarX();
    }

    Plataforma(int x, int y) : Dibujo("plataforma")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    // void Actualizar()
    // {

    //     this->posicion.DesplazarX(1);
    //     this->posicion.DesplazarY(1);
    //     // this->posicion.CambiarDireccionX();
    // }

    ~Plataforma()
    {
    }
};
