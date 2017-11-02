//
// Created by ysavenko on 02.11.17.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
    std::cout<<"* click click click *"<<std::endl;
}
RadScorpion::~RadScorpion()
{
    std::cout<<"* SPROTCH *"<<std::endl;
}
RadScorpion::RadScorpion(RadScorpion const &src): Enemy(80, "RadScorpion")
{
    *this=src;
    std::cout<< "* click click click *"<<std::endl;
}
RadScorpion &RadScorpion::operator=(RadScorpion const &scorpion)
{
    Enemy::operator=(scorpion);
    return *this;
}