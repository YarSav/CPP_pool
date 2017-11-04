//
// Created by ysavenko on 04.11.17.
//

#ifndef RUSH00_RETRO_HPP
#define RUSH00_RETRO_HPP

#include "Ncurs.hpp"
#include "Enemy.hpp"
#include "SpaceShip.hpp"
class Retro {
public:
    int x_size;
    int y_size;
    Ncurs ncurs;
    int play;
    Enemy obj;
    SpaceShip hero;


    Retro(int x, int y);
    Retro();
    ~Retro();
    Retro &operator=(Retro const&retro);
    Retro(Retro const&retro);
    void take_key(int key);
    void move_obj();
    void draw_objects();
};

long getTime();
#endif //RUSH00_RETRO_HPP
