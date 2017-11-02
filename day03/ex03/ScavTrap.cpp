//
// Created by ysavenko on 01.11.17.
//

#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap() :ClapTrap("", 100, 50,3, 20, 15) {
    std::cout<<"Scavtrap constructor"<<std::endl;
}
ScavTrap::ScavTrap(std::string name):ClapTrap( 100, 50,3, 20, 15) {
    this->name = name;
    std::cout<<"Scavtrap constructor"<<std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout<<"Scavtrap destroyed"<<std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &src) {
    this->name = src.name;
    this->armor = src.armor;
    this->level = src.level;
    this->energy_p = src.energy_p;
    this->m_energy = src.m_energy;
    this->hit_points = src.hit_points;
    this->m_hit_points = src.m_hit_points;
    this->m_attack = src.m_attack;
    this->r_attack = src.r_attack;
    std::cout<<"Scavtrap-TP = operator"<<std::endl;
    return *this;
}
ScavTrap::ScavTrap(ScavTrap const &src):ClapTrap(src) {
    std::cout<<"Scavtrap-TP = operator"<<std::endl;
    *this = src;
}
void ScavTrap::challengeNewcomer() {
    std::string challenges[5] = {"1st challenge", "2st challenge", "3st challenge", "4st challenge", "5st challenge"};
    std::cout<<"Scavtrap "<<challenges[rand()%4]<<std::endl;
}