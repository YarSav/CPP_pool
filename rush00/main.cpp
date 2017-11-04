#include <iostream>
#include <unistd.h>
#include "Ncurs.hpp"
#include "Retro.hpp"
#include "Hero.hpp"
int main() {

    Retro retro(60, 50);
    Ncurs ncurs(60, 50);
    Hero hero(20, 20);
    retro.hero = hero;
    retro.ncurs = ncurs;
    SpaceObj spaceObj;
    retro.obj = spaceObj;


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