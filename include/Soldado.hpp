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

class Soldado : public Dibujo, public Actualizable
{
private:
    int direccion_x;
    fstream archivo;
    string directorio;

public:
    Soldado() : Dibujo("soldado")
    {

        this->posicion = Vector();
        this->posicion.LeerX();
        // this->posicion.DesplazarX();
    }

    Soldado(int x, int y) : Dibujo("soldado")
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

    ~Soldado()
    {
    }
};