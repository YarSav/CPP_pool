//
// Created by ysavenko on 07.11.17.
//

#ifndef CPP_POLL_SCALAR_HPP
#define CPP_POLL_SCALAR_HPP

#include "iostream"
#include <cstdlib>
#include <iomanip>
class Scalar {
private:
    std::string  _s_char;
    int _s_int;
    float _s_float;
    double _s_double;
    Scalar();
public:
    Scalar(const char *number);
   Scalar &operator=(Scalar const&scalar);
    Scalar(Scalar const&scalar);
    ~Scalar();
    void toString();
    void toInt();
    void toFloat();
    void toDouble();
    std::string getChar();
    int getInt();
    float getFloat();
    double getDouble();
};


#endif //CPP_POLL_SCALAR_HPP
