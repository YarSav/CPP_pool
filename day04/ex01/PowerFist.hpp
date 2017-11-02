//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_POWERFIST_HPP
#define CPP_POLL_POWERFIST_HPP

#include "AWeapon.hpp"
class PowerFist :public AWeapon{
public:
    PowerFist();
    ~PowerFist();
    PowerFist &operator=(PowerFist const&weapon);
    PowerFist(PowerFist const&weapon);
    void	attack() const ;
};


#endif //CPP_POLL_POWERFIST_HPP
