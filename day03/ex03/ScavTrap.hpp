//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_SCAVTRAP_HPP
#define CPP_POLL_SCAVTRAP_HPP

#include "iostream"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    ScavTrap();
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ScavTrap &operator=(ScavTrap const &src);
    ~ScavTrap();

    void challengeNewcomer(void);

};


#endif //CPP_POLL_SCAVTRAP_HPP
