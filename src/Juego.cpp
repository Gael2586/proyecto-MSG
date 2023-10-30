#include <iostream>
#include <Jugador.hpp>
#include <Personaje.hpp>
#include <Pantalla.hpp>
#include <Escenario.hpp>
#include <Armas.hpp>
#include <ArmaBasica.hpp>
#include <ArmaEspecial.hpp>
#include <Vida.hpp>
#include <Proyectil.hpp>
#include <Proyectil.hpp>
#include <Marco.hpp>
#include <Dan.hpp>
#include <Puntaje.hpp>
#include <ObjetosEspeciales.hpp>
#include <Vehiculo.hpp>
#include <Plataforma.hpp>
#include <Enemigos.hpp>
#include <Soldado.hpp>
#include <JefeFinal.hpp>
#include <Pollo.hpp>
#include <Prisionero.hpp>
#include <Frutas.hpp>
#include <Nivel.hpp>
#include <Ventana.hpp>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <Vaca.hpp>
#include <Dibujo.hpp>
#include <Dragon.hpp>
#include <curses.h>
#include <Proyectil.hpp>

using namespace std;
int main(int argc, char const *argv[])
{
  Dragon *dragon = new Dragon();
  Vaca *vaca = new Vaca(9, 50);
  // Vaca *vaca2 = new Vaca();
  Ventana *ventana = new Ventana();
  list<Dibujo *> dibujos;
  dibujos.push_back(dragon);
  dibujos.push_back(vaca);
  // dibujos.push_back(vaca2);
  list<Actualizable *> actualizables;
  actualizables.push_back(dragon);
  actualizables.push_back(vaca);
  // actualizables.push_back(vaca2);

  while (!ventana->Debocerrar())
  {
    int key = getch();
    if (key == 'a' || key == KEY_LEFT)
    {

      vaca->Avanzar();
    }

    if (key == 'd' || key == KEY_RIGHT)
    {

      vaca->CambiarDireccion();
    }
    if (key == ' ')
    {

      Proyectil* p = 
      new Proyectil(vaca->LeerPosicion());
      dibujos.push_back(p);
      actualizables.push_back(p);
    }

    ventana->Dibujar(dibujos);
     ventana->Actualizar(actualizables);
  }

  return 0;
}
