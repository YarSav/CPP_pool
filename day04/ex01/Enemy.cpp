//
// Created by ysavenko on 02.11.17.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) {
    this->_hp = hp;
    this->_type = type;
}
Enemy::~Enemy() {}
Enemy& Enemy::operator=(Enemy const &enemy) {
    this->_type = enemy._type;
    this->_hp = enemy._hp;
    return *this;
}
void Enemy::takeDamage(int damage) {
    if (damage>0)
    {
        this->_hp -=damage;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}
Enemy::Enemy(Enemy const &enemy) {
    *this = enemy;
}
std::string Enemy::getType() const {
    return this->_type;
}
int Enemy::getHp() const {
    return this->_hp;
}

