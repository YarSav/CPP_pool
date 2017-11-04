//
// Created by ysavenko on 04.11.17.
//

#include "Asteroid.hpp"

Asteroid::Asteroid() :SpaceObj() {
    this->c = 'A';
}
Asteroid::~Asteroid() {

}
Asteroid& Asteroid::operator=(Asteroid const &asteroid) {
    SpaceObj::operator=(asteroid);
    return *this;
}
Asteroid::Asteroid(Asteroid const &asteroid) {
    *this =asteroid;
}