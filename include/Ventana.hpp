#pragma once
#include <curses.h>
#include <unistd.h>
#include <Actualizable.hpp>
#include <Dibujo.hpp>
#include <list>

using namespace std;
class Ventana
{
private:
    int x, y;

public:
    bool cerrar;
    Ventana(/* args */)
    {
        initscr();
        noecho();
        curs_set(FALSE);
        cbreak();
        timeout(10);
        keypad(stdscr, TRUE);

        //  int x, y;
        getmaxyx(stdscr, y, x);
        cerrar = false;
    }
    void Actualizar(list<Actualizable *> listaActualizables)
    {
        for (auto &&iterador : listaActualizables)
        {
            iterador->Actualizar();
        }

        usleep(41000);
    }

    void Dibujar(list<Dibujo*> listaDibujos)
    {
        clear();
        //  d.Dibujar();

        box(stdscr, 'G', '*');
        for (auto &&dibujo : listaDibujos)
        {
            dibujo->Dibujar();
        }

        refresh();
    }

    bool Debocerrar()
    {
        return this->cerrar;
    }

    void Cerrar()
    {
        this->cerrar = true;
    }

    ~Ventana()
    {
        keypad(stdscr, TRUE);
        endwin();
    }
};