#include "Enemy.hpp"

Enemy::Enemy() : SpaceObject(1, 1, 0, 2, 2, 'x') {}

Enemy::Enemy(int x, int y) : SpaceObject(x, y, 0, 2, 2, 'x') {}

Enemy::Enemy(int x, int y, int hp) : SpaceObject(x, y, 0, hp, hp, 'x') {}

Enemy::Enemy(Enemy &enemy) {
    *this = enemy;
}

Enemy::~Enemy() {}

void Enemy::moveDown(int distance) {
   // SpaceObject::moveDown(distance);
    if (this->_y == distance + 1)
        this->_hp = 0;
    else
        this->_y += 1;
}




