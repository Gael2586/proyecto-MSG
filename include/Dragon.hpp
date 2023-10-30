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

class Dragon : public Dibujo, public Actualizable
{
private:
    int direccion_x;
    fstream archivo;
    string directorio;

public:
    Dragon() : Dibujo("dragon")
    {

        this->posicion = Vector();
        this->posicion.LeerX();
        // this->posicion.DesplazarX();
    }

    Dragon(int x) : Dibujo("dragon")
    {
        this->posicion.DesplazarX(x);
    }
    // void Actualizar()
    // {

    //     this->posicion.DesplazarX(1);
    //     this->posicion.DesplazarY(1);
    //     // this->posicion.CambiarDireccionX();
    // }

    ~Dragon()
    {
    }
};
