//
// Created by ysavenko on 30.10.17.
//

#ifndef CPP_POLL_PONY_HPP
#define CPP_POLL_PONY_HPP

#include "iostream"

class Pony {
public:
    std::string name;
    std::string color;
    int age;
    void hello();
    Pony(std::string name, std::string color, int age);
    ~Pony();
};


#endif //CPP_POLL_PONY_HPP
