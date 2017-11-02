//
// Created by ysavenko on 02.11.17.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){}
PlasmaRifle::~PlasmaRifle() {}
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &weapon) {
    AWeapon::operator=(weapon);
    return *this;
}
PlasmaRifle::PlasmaRifle(PlasmaRifle const &weapon): AWeapon("Plasma Rifle", 5, 21) {
    *this = weapon;
}
void PlasmaRifle::attack() const {
    std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}