//
// Created by ysavenko on 03.11.17.
//

#include "Character.hpp"

Character::Character(std::string const &name)
{
    this->_name = name;
    this->_ap = 40;
    this->_weapon = NULL;
}
Character::Character(Character const &src)
{
    *this = src;
}
Character::~Character(void)
{}
Character &Character::operator=(Character const	&character)
{
   this->_name = character._name;
    this->_ap = character._ap;
    this->_weapon = character._weapon;
    return *this;
}
std::ostream		&operator<<(std::ostream &ostream1, Character const &character)
{
    ostream1<<character.getName()<<" has "<<character.getAP()<< " AP and ";
    if (character.getWeapon())
        ostream1<< "wields a "<<character.getWeapon()->getName();
    else
        ostream1<<"is unarmed";
    ostream1<<std::endl;
    return ostream1;
}
void Character::recoverAP(void)
{
    this->_ap += 10;
    if(this->_ap > 40)
        this->_ap = 40;
}
void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (this->_weapon)
    {
        int a;
        a = this->_weapon->getApcost();
        if (this->_ap > a)
        {
            std::cout<<this->_name<<" attacks "<<enemy->getType()<<" with a "<<this->_weapon->getName()<<std::endl;
            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
            if (enemy->getHp() <= 0)
                delete enemy;
            this->_ap -= a;
        }
    }
}

std::string	const &Character::getName() const
{
    return (this->_name);
}
int	Character::getAP() const
{
    return this->_ap;
}
AWeapon const*Character::getWeapon() const
{
    return (this->_weapon);
}