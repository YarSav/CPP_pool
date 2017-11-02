//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_FIXED_HPP
#define CPP_POLL_FIXED_HPP

#include "cmath"
#include "iostream"
class Fixed {
private:
    int _fixed;
    static const int _bits;
public:
    Fixed();
    Fixed(int f);
    Fixed(float d);
    Fixed(Fixed const& fx);
    Fixed& operator=(Fixed const &src);
    Fixed operator/(Fixed const &src) const ;
    Fixed operator+(Fixed const &src) const ;
    Fixed operator-(Fixed const &src) const ;
    Fixed operator* (Fixed const &src) const ;
    bool operator<(Fixed const &src);
    bool operator>(Fixed const &src);
    bool operator>=(Fixed const &src);
    bool operator<=(Fixed const &src);
    bool operator==(Fixed const &src);
    bool operator!=(Fixed const &src);
    Fixed& operator++ ();
    Fixed  operator++ (int a);
    static Fixed min(Fixed f1, Fixed f2);
    static Fixed max(Fixed f1, Fixed f2);

    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const & src);

#endif //CPP_POLL_FIXED_HPP
