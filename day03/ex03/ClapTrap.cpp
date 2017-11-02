//
// Created by ysavenko on 01.11.17.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int m_hit, int m_energ, int arm, int mele, int range) {
    std::cout<<"CLAP-TP constructor"<<std::endl;
    this->level = 1;
    this->hit_points = m_hit;
    this->m_hit_points = m_hit;
    this->energy_p = m_energ;
    this->m_energy = m_energ;
    this->armor = arm;
    this->m_attack = mele;
    this->r_attack = range;
}
ClapTrap::ClapTrap(std::string name, int m_hit, int m_energ, int arm, int mele, int range) {
    std::cout<<"CLAP-TP constructor"<<std::endl;
    this->name = name;
    this->level = 1;
    this->hit_points = m_hit;
    this->m_hit_points = m_hit;
    this->energy_p = m_energ;
    this->m_energy = m_energ;
    this->armor = arm;
    this->m_attack = mele;
    this->r_attack = range;
}
//ClapTrap::ClapTrap(int m_hit, int m_energ, int arm, int mele, int range) :
//        hit_points(m_hit), m_hit_points(m_hit), name(""), armor(arm), level(1), energy_p(m_energ),m_energy(m_energ),
//        m_attack(mele), r_attack(range)
//{
//    std::cout<<"CLAP-TP constructor"<<std::endl;
//}
//ClapTrap::ClapTrap(std::string name, int m_hit, int m_energ, int arm, int mele, int range) :
//    hit_points(m_hit), m_hit_points(m_hit), name(name), armor(arm), level(1), energy_p(m_energ),m_energy(m_energ),
//    m_attack(mele), r_attack(range)
//{
//    std::cout<<"CLAP-TP constructor"<<std::endl;
//}
ClapTrap& ClapTrap::operator=(ClapTrap const &src) {
    this->name = src.name;
    this->armor = src.armor;
    this->level = src.level;
    this->energy_p = src.energy_p;
    this->m_energy = src.m_energy;
    this->hit_points = src.hit_points;
    this->m_hit_points = src.m_hit_points;
    this->m_attack = src.m_attack;
    this->r_attack = src.r_attack;
    std::cout<<"CLAP-TP = operator"<<std::endl;
    return *this;
}
ClapTrap::~ClapTrap() {
    std::cout<<"CLAP-TP destroyed"<<std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src) {
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
    std::cout<<"CLAP-TP copy"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hit_points + armor - amount <= 0)
    {
        std::cout<<"CLAP-TP "<<this->name<<" takes "<<amount - armor<<" damage, and been destroyed"<<std::endl;
        this->hit_points = 0;
    } else
    {
        std::cout<<"CLAP-TP "<<this->name<<" takes "<<amount - armor<<" damage"<<std::endl;
        this->hit_points -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
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
            std::cout<<"+"<<this->m_hit_points - this->hit_points<<"->"<<this->m_hit_points<<std::endl;
            this->hit_points = this->m_hit_points;
        }
    }
}
void ClapTrap::meleeAttack(std::string const &target) {
    std::cout<<"CLAP-TP"<<this->name<<" attacks "<<target<<" and deal melee damage "<<this->m_attack<<std::endl;
}
void ClapTrap::rangedAttack(std::string const &target) {
    std::cout<<"CLAP-TP "<<this->name<<" attacks "<<target<<" and deal range damage "<<this->r_attack<<std::endl;
}
std::string ClapTrap::getName() const {
    return this->name;
}