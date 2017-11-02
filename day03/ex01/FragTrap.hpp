//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_FRAGTRAP_HPP
#define CPP_POLL_FRAGTRAP_HPP

#include "iostream"

class FragTrap {
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

    FragTrap(std::string name);
    FragTrap();
    FragTrap(FragTrap const & src);
    FragTrap &operator=(FragTrap const &src);
    ~FragTrap();

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
};


#endif
