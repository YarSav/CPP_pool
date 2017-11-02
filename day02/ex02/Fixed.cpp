//
// Created by ysavenko on 01.11.17.
//

#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed() {
    this->_fixed = 0;
}
Fixed::Fixed(Fixed const &fx) {
    this->_fixed = fx._fixed;

}
Fixed::~Fixed() {
}
int Fixed::getRawBits() const {
    return this->_fixed;
}
void Fixed::setRawBits(int const raw) {
    this->_fixed = raw;
}
Fixed& Fixed::operator=(Fixed const &as) {
    this->_fixed = as.getRawBits();
    return *this;
}
Fixed::Fixed(int i) {
    this->_fixed = i*32*8;
}
Fixed::Fixed(float f) {
    this->_fixed = roundf(f*32*8);
}
int Fixed::toInt() const {
    return this->_fixed/32*8;
}
float Fixed::toFloat() const {
    return this->_fixed/32.0*8;
}
std::ostream& operator<<(std::ostream& os, Fixed const & src){
    os<<src.getRawBits()/(32.0*8);
    return os;
}
bool Fixed::operator!=(Fixed const &src) {
    if (this->_fixed == src.getRawBits())
        return false;
    return true;
}
bool Fixed::operator==(Fixed const &src) {
    if (this->_fixed == src.getRawBits())
        return true;
    return false;
}
bool Fixed::operator<=(Fixed const &src) {
    if (this->_fixed <= src.getRawBits())
        return true;
    return false;
}
bool Fixed::operator<(Fixed const &src) {
    if (this->_fixed < src.getRawBits())
        return true;
    return false;
}
bool Fixed::operator>(Fixed const &src) {
    if (this->_fixed > src.getRawBits())
        return true;
    return false;
}
bool Fixed::operator>=(Fixed const &src) {
    if (this->_fixed == src.getRawBits())
        return true;
    return false;
}
Fixed Fixed::operator+(Fixed const &src) const {
    Fixed fixed;
    fixed._fixed = this->_fixed + src.getRawBits();
    return fixed;
}
Fixed Fixed::operator-(Fixed const &src) const {
    Fixed fixed;
    fixed._fixed = this->_fixed - src.getRawBits();
    return fixed;
}
Fixed Fixed::operator*(Fixed const &src) const {
    Fixed fixed;
    fixed._fixed = this->_fixed * src.getRawBits() / (32 * 8);
    return fixed;
}
Fixed Fixed::operator/(Fixed const &src) const {
    Fixed fixed;
    fixed._fixed = this->_fixed / src.getRawBits();
    return fixed;
}
Fixed& Fixed::operator++() {
    this->_fixed++;
    return *this;
}
Fixed Fixed::operator++(int a) {
    Fixed buff(*this);
    ++(*this);
    return buff;
}
Fixed Fixed::min(Fixed f1, Fixed f2) {
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    else
        return f2;
}
Fixed Fixed::max(Fixed f1, Fixed f2) {
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    else
        return f2;
}
const int Fixed::_bits = 8;
