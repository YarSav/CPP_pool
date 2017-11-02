//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_PLASMARIFLE_HPP
#define CPP_POLL_PLASMARIFLE_HPP

#include "AWeapon.hpp"
class PlasmaRifle :public AWeapon{
public:
    PlasmaRifle();
    ~PlasmaRifle();
    PlasmaRifle &operator=(PlasmaRifle const&weapon);
    PlasmaRifle(PlasmaRifle const&weapon);
    void	attack() const ;
};


#endif //CPP_POLL_PLASMARIFLE_HPP
