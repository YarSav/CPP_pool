//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_SCAVTRAP_HPP
#define CPP_POLL_SCAVTRAP_HPP

#include "iostream"

class ScavTrap {
public:
    int hit_points;
    int m_hit_points;
    int energy_p;
    int m_energy;
    int level;
    std::string name;
    int m_attack;
    int r_attack;
    int armor;

    ScavTrap(std::string name);
    ScavTrap();
    ScavTrap(ScavTrap const & src);
    ScavTrap &operator=(ScavTrap const &src);
    ~ScavTrap();

    void challengeNewcomer(void);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif //CPP_POLL_SCAVTRAP_HPP
