//
// Created by ysavenko on 04.11.17.
//

#include "SpaceTrash.hpp"

SpaceTrash::SpaceTrash() :SpaceObj() {
    this->destructable = 1;
    this->c = 't';
}
SpaceTrash::~SpaceTrash() {

}
SpaceTrash& SpaceTrash::operator=(SpaceTrash const &trash) {
    SpaceObj::operator=(trash);
    return *this;
}
SpaceTrash::SpaceTrash(SpaceTrash const &trash) {
    *this = trash;
}
