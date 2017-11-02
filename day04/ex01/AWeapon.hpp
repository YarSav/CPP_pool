//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_AWEAPON_HPP
#define CPP_POLL_AWEAPON_HPP

#include "iostream"

class AWeapon {
private:
    std::string _name;
    int _apcost;
    int _damage;
public:
    AWeapon(std::string const&name, int apcost, int damage);
    ~AWeapon();
    AWeapon &operator=(AWeapon const&weapon);
    AWeapon(AWeapon const&weapon);
    int getApcost() const;
    int getDamage() const;
    std::string getName() const;
    virtual void	attack() const = 0;
};


#endif //CPP_POLL_AWEAPON_HPP
