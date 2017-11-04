//
// Created by ysavenko on 04.11.17.
//

#include "Ncurs.hpp"

Ncurs::Ncurs(int x, int y) {
    this->x_size = x;
    this->y_size = y;
    initscr();
    cbreak();
    start_color();
    noecho();
    nodelay(stdscr, TRUE);
}
Ncurs::Ncurs() {
    this->x_size = 60;
    this->y_size = 50;
    initscr();
    cbreak();
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLUE);
    wbkgd(stdscr, COLOR_PAIR(1));
    noecho();
    nodelay(stdscr, TRUE);
}
Ncurs::~Ncurs() {

}
Ncurs& Ncurs::operator=(Ncurs const &src) {
    this->y_size = src.y_size;
    this->x_size = src.x_size;
    return *this;
}
Ncurs::Ncurs(Ncurs const &src) {
    *this = src;
}

void Ncurs::draw_border() {
    mvwhline(stdscr, 0, 0, '-', this->x_size + 2);
    mvwhline(stdscr, this->y_size + 2, 0, '-', this->x_size + 2);
    mvwvline(stdscr, 0, 0, '|', this->y_size + 2);
    mvwvline(stdscr, 0, this->x_size + 2, '|', this->y_size + 2);
    mvwaddch(stdscr, 0, this->x_size + 2, '+');
    mvwaddch(stdscr, 0, 0, '+');
    mvwaddch(stdscr, this->y_size + 2, 0, '+');
    mvwaddch(stdscr, this->y_size + 2, this->x_size + 2, '+');
}

void Ncurs::draw_obj(SpaceObj obj) {
    mvwaddch(stdscr, obj.y, obj.x, obj.c);
}