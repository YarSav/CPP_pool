//
// Created by ysavenko on 01.11.17.
//

#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->armor = 5;
    this->level = 1;
    this->energy_p = 100;
    this->m_energy = 100;
    this->hit_points = 100;
    this->m_hit_points = 100;
    this->m_attack = 30;
    this->r_attack = 20;
}
FragTrap::FragTrap() {
    this->armor = 5;
    this->level = 1;
    this->energy_p = 100;
    this->m_energy = 100;
    this->hit_points = 100;
    this->m_hit_points = 100;
    this->m_attack = 30;
    this->r_attack = 20;
}
FragTrap::~FragTrap() {
std::cout<<"FR4G-TP destroyed"<<std::endl;
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

    return *this;
}
FragTrap::FragTrap(FragTrap const &src) {
    *this = src;
    this->name = src.name;
    this->armor = src.armor;
    this->level = src.level;
    this->energy_p = src.energy_p;
    this->m_energy = src.m_energy;
    this->hit_points = src.hit_points;
    this->m_hit_points = src.m_hit_points;
    this->m_attack = src.m_attack;
    this->r_attack = src.r_attack;
}
void FragTrap::meleeAttack(std::string const &target) {
    std::cout<<"FR4G-TP"<<this->name<<" attacks "<<target<<" and deal melee damage "<<this->m_attack<<std::endl;
}
void FragTrap::rangedAttack(std::string const &target) {
    std::cout<<"FR4G-TP "<<this->name<<" attacks "<<target<<" and deal range damage "<<this->r_attack<<std::endl;
}
void FragTrap::beRepaired(unsigned int amount) {
    if(this->hit_points == this->m_hit_points)
        std::cout<<"Repairing not needed"<<std::endl;
    else
    {
        std::cout<<"Repairing..."<<std::endl;
        std::cout<<"..."<<this->hit_points;
        if (this->hit_points + amount <= this->m_hit_points)
        {
            std::cout<<"+"<<amount<<"->";
            this->hit_points += amount;
            std::cout<<this->hit_points<<std::endl;
        } else
        {
            std::cout<<"+"<<this->m_hit_points - this->hit_points<<"->100"<<std::endl;
            this->hit_points = this->m_hit_points;
        }
    }
}
void FragTrap::takeDamage(unsigned int amount) {
    if (this->hit_points + this->armor - amount <= 0)
    {
        std::cout<<"FR4G-TP "<<this->name<<" takes "<<amount<<" damage, and been destroyed"<<std::endl;
        this->hit_points = 0;
    } else
    {
        std::cout<<"FR4G-TP "<<this->name<<" takes "<<amount - this->armor<<" damage"<<std::endl;
        this->hit_points = this->hit_points + this->armor - amount;
    }
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
