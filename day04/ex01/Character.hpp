    //
// Created by ysavenko on 03.11.17.
//

#ifndef CPP_POLL_CHARACTER_HPP
#define CPP_POLL_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
class Character
{
protected:
    std::string	_name;
    int	_ap;
    AWeapon	*_weapon;

public:
    Character(std::string const &name);
    ~Character();
    Character(Character const &character);
    Character &operator=(Character const &character);
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);
    std::string	const &getName() const;
    int	getAP() const;
    AWeapon const *getWeapon() const;
};

std::ostream &operator<<(std::ostream &ostream1, Character const &character);
#endif //CPP_POLL_CHARACTER_HPP
