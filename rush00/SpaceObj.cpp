//
// Created by ysavenko on 04.11.17.
//

#include "SpaceObj.hpp"
#include "Retro.hpp"

SpaceObj::SpaceObj() {
    this->y = 18;
    this->x = 30;
    this->c = 'x';
    this->alive = 1;
    this->destructable = 0;
}
SpaceObj::~SpaceObj() {

}
SpaceObj& SpaceObj::operator=(SpaceObj const &spaceObj) {
    this->y = spaceObj.y;
    this->x = spaceObj.x;
    this->c = spaceObj.c;
    this->destructable = spaceObj.destructable;
    this->alive = spaceObj.alive;
    return *this;
}
SpaceObj::SpaceObj(SpaceObj const &spaceObj) {
    *this = spaceObj;
}

void SpaceObj::move(int y) {
    if (this->y == y + 1)
        this->alive = 0;
    else
        this->y += 1;

}