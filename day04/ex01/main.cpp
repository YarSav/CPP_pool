//
// Created by ysavenko on 02.11.17.
//

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
int main()
{
   PlasmaRifle aWeapon;
    std::cout<<aWeapon.getName()<<std::endl;
    aWeapon.attack();

    PowerFist powerFist;
    std::cout<<powerFist.getName()<<std::endl;
    powerFist.attack();

}