//
// Created by ysavenko on 01.11.17.
//

#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap() {
    this->armor = 3;
    this->level = 1;
    this->energy_p = 50;
    this->m_energy = 50;
    this->hit_points = 100;
    this->m_hit_points = 100;
    this->m_attack = 20;
    this->r_attack = 15;
}
ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->armor = 3;
    this->level = 1;
    this->energy_p = 50;
    this->m_energy = 50;
    this->hit_points = 100;
    this->m_hit_points = 100;
    this->m_attack = 20;
    this->r_attack = 15;
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

    return *this;
}
ScavTrap::ScavTrap(ScavTrap const &src) {
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
void ScavTrap::meleeAttack(std::string const &target) {
    std::cout<<"Scavtrap"<<this->name<<" attacks "<<target<<" and deal melee damage "<<this->m_attack<<std::endl;
}
void ScavTrap::rangedAttack(std::string const &target) {
    std::cout<<"Scavtrap"<<this->name<<" attacks "<<target<<" and deal range damage "<<this->r_attack<<std::endl;
}
void ScavTrap::beRepaired(unsigned int amount) {
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
            std::cout<<"+"<<this->m_hit_points - this->hit_points<<"->50"<<std::endl;
            this->hit_points = this->m_hit_points;
        }
    }
}
void ScavTrap::takeDamage(unsigned int amount) {
    if (this->hit_points - amount <= 0)
    {
        std::cout<<"Scavtrap "<<this->name<<" takes "<<amount<<" damage, and been destroyed"<<std::endl;
        this->hit_points = 0;
    } else
    {
        std::cout<<"Scavtrap "<<this->name<<" takes "<<amount<<" damage"<<std::endl;
        this->hit_points -= amount;
    }
}
void ScavTrap::challengeNewcomer() {
    std::string challenges[5] = {"1st challenge", "2st challenge", "3st challenge", "4st challenge", "5st challenge"};
    std::cout<<"Scavtrap "<<challenges[rand()%4]<<std::endl;
}