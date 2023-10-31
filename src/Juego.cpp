#include <Ventana.hpp>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <Dibujo.hpp>
#include <Dragon.hpp>
#include <curses.h>
#include <Proyectil.hpp>
#include <list>
#include <Dan.hpp>
#include <Soldado.hpp>
#include <Plataforma.hpp>

using namespace std;
int main(int argc, char const *argv[])
{
  Dragon *dragon = new Dragon(5,1);
  Plataforma *plataforma = new Plataforma(60,70);
  Soldado *soldado = new Soldado(50,50);
  Dan *dan = new Dan(0,0);
 
  Ventana *ventana = new Ventana();
  list<Dibujo *> dibujos;
  dibujos.push_back(dragon);
  dibujos.push_back(plataforma);
  dibujos.push_back(soldado);
  dibujos.push_back(dan);

  list<Actualizable *> actualizables;
  actualizables.push_back(dragon);
  actualizables.push_back(dan);
  actualizables.push_back(soldado);
   actualizables.push_back(plataforma);


  while (!ventana->Debocerrar())
  {
    int key = getch();
    if (key == 'a' || key == KEY_LEFT)
    {

      dan->Avanzar();
    }

    if (key == 'd' || key == KEY_RIGHT)
    {

      dan->Retroceder();
    }
    if (key == 'w' || key == KEY_UP)
    {

      dan->Subir();
    }

    if (key == 's' || key == KEY_DOWN)
    {

      dan->Bajar();
    }
    if (key == ' ')
    {

      Proyectil *p = new Proyectil(dan->LeerPosicion());
      dibujos.push_back(p);
      actualizables.push_back(p);
    }

    ventana->Dibujar(dibujos);
    ventana->Actualizar(actualizables);
  }

  return 0;
}    