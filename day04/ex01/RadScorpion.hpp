//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_RADSCORPION_HPP
#define CPP_POLL_RADSCORPION_HPP

#include "iostream"
#include "Enemy.hpp"
class RadScorpion {
public:
    RadScorpion();
    ~RadScorpion();
    RadScorpion(RadScorpion const &scorpion);
    RadScorpion &operator=(RadScorpion const &scorpion);
};


#endif //CPP_POLL_RADSCORPION_HPP
