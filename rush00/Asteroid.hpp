//
// Created by ysavenko on 04.11.17.
//

#ifndef RUSH00_ASTEROID_HPP
#define RUSH00_ASTEROID_HPP

#include "SpaceObj.hpp"

class Asteroid :public SpaceObj{
    Asteroid();
    ~Asteroid();
    Asteroid &operator=(Asteroid const&asteroid);
    Asteroid(Asteroid const&asteroid);
};


#endif //RUSH00_ASTEROID_HPP
