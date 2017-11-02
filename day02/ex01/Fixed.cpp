//
// Created by ysavenko on 01.11.17.
//

#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed() {
    std::cout<<"Default constructor called"<<std::endl;
    this->_fixed = 0;
}
Fixed::Fixed(Fixed const &fx) {
    std::cout<<"Copy constructor called"<<std::endl;
    this->_fixed = fx._fixed;

}
Fixed::~Fixed() {
    std::cout<<"Destructor called"<<std::endl;
}
int Fixed::getRawBits() const {
    return this->_fixed;
}
void Fixed::setRawBits(int const raw) {
    this->_fixed = raw;
}
Fixed& Fixed::operator=(Fixed const &as) {
    std::cout<<"Assignation operator called"<<std::endl;
    this->_fixed = as.getRawBits();
    return *this;
}
Fixed::Fixed(int i) {
    std::cout<<"Int constructor called"<<std::endl;
    this->_fixed = i*32*4;
}
Fixed::Fixed(float f) {
    std::cout<<"Float constructor called"<<std::endl;
    this->_fixed = roundf(f*32*4);
}
int Fixed::toInt() const {
    return this->_fixed/32*4;
}
float Fixed::toFloat() const {
    return this->_fixed/32.0*4;
}

std::ostream& operator<<(std::ostream& os, Fixed const & src){
    os<<src.getRawBits()/(32.0*4);
    return os;
}
const int Fixed::_bits = 8;
