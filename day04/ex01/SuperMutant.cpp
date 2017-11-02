//
// Created by ysavenko on 02.11.17.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
    std::cout<<"Gaaah. Me want smash heads !"<<std::endl;
}
SuperMutant::~SuperMutant()
{
    std::cout<<"Aaargh ..."<<std::endl;
}
SuperMutant::SuperMutant(SuperMutant const &src): Enemy(170, "Super Mutant")
{
    *this = src;
    std::cout<<"Gaaah. Me want smash heads !"<<std::endl;
}
SuperMutant	&SuperMutant::operator=(SuperMutant const &mutant)
{
    Enemy::operator=(mutant);
    return *this;
}
void SuperMutant::takeDamage(int damage)
{
    if (this->_hp > 0)
    {
        this->_hp = this->_hp - damage + 3;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}