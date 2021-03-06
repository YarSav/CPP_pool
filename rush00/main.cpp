#include <iostream>
#include <unistd.h>
#include "Ncurs.hpp"
#include "Retro.hpp"
#include "Enemy.hpp"

int main() {

    Retro retro(100, 50);
    Ncurs ncurs(100, 50);

//    Hero hero(20, 20);
//    retro.hero = hero;
    retro.ncurs = ncurs;
    Enemy enemy(30, 30);
    retro.obj = enemy;

    SpaceShip spaceShip(30, 38);
    retro.hero = spaceShip;
    long time = getTime();
    while(retro.play)
    {
        clear();
        retro.ncurs.draw_border();
        retro.take_key(getch());
        retro.draw_objects();
        if (getTime() - time >= 300)
        {
            retro.move_obj();
            time = getTime();
        }
        refresh();
    }
    endwin();
    return 0;
}