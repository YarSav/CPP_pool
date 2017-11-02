//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_NINJATRAP_HPP
#define CPP_POLL_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class NinjaTrap: public ClapTrap {
    NinjaTrap();
public:
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    NinjaTrap &operator=(NinjaTrap const &src);
    ~NinjaTrap();

    void	ninjaShoebox(NinjaTrap const &trap);
    void	ninjaShoebox(ScavTrap const &trap);
    void	ninjaShoebox(FragTrap const &trap);

};


#endif //CPP_POLL_NINJATRAP_HPP
