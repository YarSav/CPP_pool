//
// Created by ysavenko on 07.11.17.
//

#include "Scalar.hpp"

Scalar::Scalar() {

}
Scalar::Scalar(const char *string) {
    this->_s_char = string;
    this->_s_int = atoi(string);
    this->_s_float = atof(string);
    this->_s_double = atof(string);
    toString();
    toInt();
    toFloat();
    toDouble();
}
Scalar& Scalar::operator=(Scalar const &scalar) {
    this->_s_char = scalar.getChar();
    this->_s_int = scalar.getInt();
    this->_s_double = scalar.getDouble();
    this->_s_float = scalar.getFloat();

    return *this;
}
Scalar::Scalar(Scalar const &scalar) {
    *this = scalar;
}
std::string Scalar::getChar() {
    return this->_s_char;
}
double Scalar::getDouble() {
    return this->_s_double;
}
float Scalar::getFloat() {
    return this->_s_float;
}
int Scalar::getInt() {
    return this->_s_int;
}
void Scalar::toFloat() {
    if (this->_s_char != "0" && this->_s_int == 0)
        std::cout<<"float: "<<this->_s_char<<"f"<<std::endl;
    else
    {
        std::cout<<"float: "<< std::fixed << std::setprecision(1)<<static_cast<float>(this->_s_float<<"f"<<std::endl);
    }
}
void Scalar::toDouble() {
    if (this->_s_char != "0" && this->_s_int == 0)
        std::cout<<"double: "<<this->_s_char<<std::endl;
    else
    {
        std::cout<<"double: "<< std::fixed << std::setprecision(1)<<static_cast<double>(this->_s_float<<std::endl);
    }
}
void Scalar::toInt() {
    if (this->_s_char != "0" && this->_s_int == 0)
        std::cout<<"int: impossible"<<std::endl;
    else
    {
        std::cout<<"int: "<<this->_s_int<<std::endl;
    }
}
void Scalar::toString() {
    if (this->_s_int  < 33)
        std::cout<<"char: Non displayable"<<std::endl;
    else if ((this->_s_char != "0" && this->_s_int == 0) || this->_s_int  >126)
        std::cout<<"char: impossible"<<std::endl;
    else
        std::cout<<"char: "<<static_cast<char>(this->_s_int)<<std::endl;
}
Scalar::~Scalar() {

}