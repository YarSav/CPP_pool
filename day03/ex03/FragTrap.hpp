//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_FRAGTRAP_HPP
#define CPP_POLL_FRAGTRAP_HPP

#include "iostream"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    FragTrap();
public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    FragTrap &operator=(FragTrap const &src);
     ~FragTrap();

    void vaulthunter_dot_exe(std::string const & target);
};
#endif
