//
// Created by ysavenko on 01.11.17.
//

#ifndef CPP_POLL_FIXED_HPP
#define CPP_POLL_FIXED_HPP


class Fixed {
private:
    int _fixed;
    static const int _bits;
public:
    Fixed();
    Fixed(Fixed const& fx);
    Fixed& operator=(Fixed &as);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};



#endif //CPP_POLL_FIXED_HPP
