//
// Created by ysavenko on 04.11.17.
//

#include "Hero.hpp"

Hero::Hero(int x, int y) {
    this->x = x;
    this->y = y;
    this->c = 'O';
}
Hero::Hero() {
    this->x = 30;
    this->y = 48;
    this->c = 'O';
}
Hero::~Hero() {

}
Hero& Hero::operator=(Hero const &hero) {
    SpaceObj::operator=(hero);
    return *this;
}
Hero::Hero(Hero const &hero) {
    *this = hero;
}
void Hero::move(int x, int y, int x_m, int y_m) {
    if (x_m)
    {
        if (this->x + x_m > 0 && this->x + x_m < x+2)
            this->x += x_m;
    }
    if (y_m)
    {
        if (this->y + y_m > 15 && this->y + y_m < y+2)
            this->y += y_m;
    }
}