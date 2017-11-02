//
// Created by ysavenko on 02.11.17.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) {
    this->_name = name;
    this->_damage = damage;
    this->_apcost = apcost;
}
AWeapon::~AWeapon() {

}
AWeapon& AWeapon::operator=(AWeapon const &weapon) {
    this->_apcost = weapon._apcost;
    this->_damage = weapon._damage;
    this->_name = weapon._name;

    return *this;
}
AWeapon::AWeapon(AWeapon const &weapon) {
    *this = weapon;
}
int AWeapon::getApcost() const {
    return _apcost;
}
std::string AWeapon::getName() const {
    return _name;
}
int AWeapon::getDamage() const {
    return _damage;
}
void AWeapon::attack() const {

}