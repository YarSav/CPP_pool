//
// Created by ysavenko on 02.11.17.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){}
PowerFist::~PowerFist() {}
PowerFist& PowerFist::operator=(PowerFist const &weapon) {
    AWeapon::operator=(weapon);
    return *this;
}
PowerFist::PowerFist(PowerFist const &weapon): AWeapon("Plasma Rifle", 5, 21) {
    *this = weapon;
}
void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM *" << std::endl;
}