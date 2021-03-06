#include "Bullet.hpp"

Bullet::Bullet() : SpaceObject(0, 0, 0, 0, 0, '.') {}

Bullet::Bullet(const Bullet &bullet) {
    *this = bullet;
}

Bullet::Bullet(int x, int y, int damage) : SpaceObject(x, y, 0, damage, damage, '.') {}

Bullet::~Bullet() {

}
std::ostream &operator<<(std::ostream &os, const Bullet &s) {
    os << "Bullet    => x: " << s.getX() << " y: " << s.getY() << " hp: " << s.getHP();
    return os;
}

void Bullet::moveUp(int distance) {
    //SpaceObject::moveUp(distance);
    if (this->_y <= 2)
        this->_hp = 0;
    else
        this->_y -= 2;
}
