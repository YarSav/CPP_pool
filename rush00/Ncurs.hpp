//
// Created by ysavenko on 04.11.17.
//

#ifndef RUSH00_NCURS_HPP
#define RUSH00_NCURS_HPP

#include "ncurses.h"
#include "SpaceObj.hpp"
class Ncurs {
public:
    int x_size;
    int y_size;


    Ncurs();
    Ncurs(int x, int y);
    Ncurs &operator=(Ncurs const &src);
    Ncurs(Ncurs const &src);
    ~Ncurs();


    void draw_border();
    void draw_obj(SpaceObj obj);

};


#endif //RUSH00_NCURS_HPP
