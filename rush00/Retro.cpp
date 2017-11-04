//
// Created by ysavenko on 04.11.17.
//
#include <sys/time.h>
#include "Retro.hpp"

void Retro::take_key(int key) {
    if (key == 27)
        this->play = 0;
    if (key == 97)
        this->hero.move(this->x_size, this->y_size, -1, 0);
    if (key == 100)
        this->hero.move(this->x_size, this->y_size, 1, 0);
    if (key == 119)
        this->hero.move(this->x_size, this->y_size, 0, -1);
    if (key == 115)
        this->hero.move(this->x_size, this->y_size, 0, 1);


}

Retro::Retro(int x, int y) {
    this->x_size = x;
    this->y_size = y;
    this->play = 1;
}
Retro::Retro() {
    this->x_size = 60;
    this->y_size = 50;
    this->play = 1;
}
Retro::~Retro() {

}
Retro& Retro::operator=(Retro const &retro) {
    this->y_size = retro.y_size;
    this->x_size = retro.x_size;
    this->play = retro.play;
    this->ncurs = retro.ncurs;
    return *this;
}
Retro::Retro(Retro const &retro) {
    *this = retro;
}
void Retro::move_obj() {
    this->obj.move(this->y_size);
}
void Retro::draw_objects() {
    ncurs.draw_obj(this->hero);
    ncurs.draw_obj(this->obj);
}

long getTime()
{
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    return ms;
}