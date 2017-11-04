//
// Created by ysavenko on 04.11.17.
//

#ifndef RUSH00_HERO_HPP
#define RUSH00_HERO_HPP

#include "SpaceObj.hpp"
class Hero :public SpaceObj{
public:
    Hero(int x, int y);
    Hero();
    ~Hero();
    Hero &operator=(Hero const&hero);
    Hero(Hero const&hero);

    void move(int x, int y, int x_m, int y_m);

};


#endif //RUSH00_HERO_HPP
