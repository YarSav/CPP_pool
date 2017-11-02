//
// Created by ysavenko on 01.11.17.
//

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(std::string name):ClapTrap(name,  100, 100,5, 30, 20) {
    std::cout<<"FRAG-TP constructor"<<std::endl;
}
FragTrap::FragTrap():ClapTrap("", 100, 100,3, 30, 20) {
    std::cout<<"FRAG-TP constructor"<<std::endl;
}
FragTrap::~FragTrap() {
std::cout<<"FRAG-TP destroyed"<<std::endl;
}
FragTrap& FragTrap::operator=(FragTrap const &src) {
    this->name = src.name;
    this->armor = src.armor;
    this->level = src.level;
    this->energy_p = src.energy_p;
    this->m_energy = src.m_energy;
    this->hit_points = src.hit_points;
    this->m_hit_points = src.m_hit_points;
    this->m_attack = src.m_attack;
    this->r_attack = src.r_attack;
    std::cout<<"FragTrap-TP = operator"<<std::endl;
    return *this;
}
FragTrap::FragTrap(FragTrap const &src):ClapTrap(src) {
    std::cout<<"FragTrap-TP copy"<<std::endl;
    *this = src;
}
void FragTrap::vaulthunter_dot_exe(std::string const &target) {
    std::string names[5] = {"1st", "2nd", "3rd", "4th", "5th"};
    if (this->energy_p >= 25)
    {
        this->energy_p -= 25;
        std::cout<<"FR4G-TP "<<this->name<<"haunt "<<names[rand()%4]<<target<<std::endl;
    }
    else
        std::cout<<"FR4G-TP "<<this->name<<"not enough energy"<<std::endl;
}
