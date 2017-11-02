//
// Created by ysavenko on 02.11.17.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name,  60, 120, 0, 60, 0) {
    std::cout<<"Ninja-TP constructor"<<std::endl;
}
NinjaTrap::NinjaTrap():ClapTrap("", 60, 120, 0, 60, 0) {
    std::cout<<"Ninja-TP constructor"<<std::endl;
}
NinjaTrap::~NinjaTrap() {
    std::cout<<"Ninja-TP destroyed"<<std::endl;
}
NinjaTrap& NinjaTrap::operator=(NinjaTrap const &src) {
    this->name = src.name;
    this->armor = src.armor;
    this->level = src.level;
    this->energy_p = src.energy_p;
    this->m_energy = src.m_energy;
    this->hit_points = src.hit_points;
    this->m_hit_points = src.m_hit_points;
    this->m_attack = src.m_attack;
    this->r_attack = src.r_attack;
    std::cout<<"Ninja-TP = operator"<<std::endl;
    return *this;
}
NinjaTrap::NinjaTrap(NinjaTrap const &src):ClapTrap(src) {
    std::cout<<"Ninja-TP copy"<<std::endl;
    *this = src;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &trap){
    std::cout<<"Ninja-TP make trap for "<<trap.getName()<<std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap const &trap) {
    std::cout<<"Ninja-TP make trap for "<<trap.getName()<<std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap const &trap) {
    std::cout<<"Ninja-TP make trap for "<<trap.getName()<<std::endl;
}