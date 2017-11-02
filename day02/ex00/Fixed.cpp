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
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->_fixed;
}
void Fixed::setRawBits(int const raw) {
    this->_fixed = raw;
}
Fixed& Fixed::operator=(Fixed &as) {
    std::cout<<"Assignation operator called"<<std::endl;
    this->_fixed = as.getRawBits();
    return *this;
}
const int Fixed::_bits = 8;
