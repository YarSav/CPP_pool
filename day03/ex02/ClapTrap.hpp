//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_CLAPTRAP_HPP
#define CPP_POLL_CLAPTRAP_HPP

#include "iostream"

class ClapTrap {
protected:
    int hit_points;
    int m_hit_points;
    int energy_p;
    int m_energy;
    int level;
    std::string name;
    int m_attack;
    int r_attack;
    int armor;
    ClapTrap(int m_hit, int m_energ, int arm, int mele, int range);
public:
    ClapTrap(std::string name, int m_hit, int m_energ, int arm, int mele, int range);

    ClapTrap(ClapTrap const & src);
    ClapTrap &operator=(ClapTrap const &src);
   ~ClapTrap();

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //CPP_POLL_CLAPTRAP_HPP
