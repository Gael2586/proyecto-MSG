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

class Dan : public Dibujo, public Actualizable
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
    Dan() : Dibujo("dan")
    {
    }

    Dan(int x, int y) : Dibujo("dan")
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
        if (this->posicion.MostraDireccionX() == 1){
            this->posicion.CambiarDireccionX();
        }
        this->posicion.DesplazarX(1);
    }

    void Retroceder()
    {
        if (this->posicion.MostraDireccionX() == -1){
            this->posicion.CambiarDireccionX();
        }
         this->posicion.DesplazarX(1);
        
    }
        void Subir()
    {
        if (this->posicion.MostraDireccionY() == 1){
            this->posicion.CambiarDireccionY();
        }
        this->posicion.DesplazarY(1);
    }

    void Bajar()
    {
        if (this->posicion.MostraDireccionY() == -1){
            this->posicion.CambiarDireccionY();
        }
         this->posicion.DesplazarY(1);
        
    }
    
    Vector LeerPosicion()
    {
        return this->posicion;
    }
    ~Dan()
    {
    }
};