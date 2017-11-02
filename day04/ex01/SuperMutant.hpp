//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_SUPERMUTANT_HPP
#define CPP_POLL_SUPERMUTANT_HPP

#include "Enemy.hpp"
#include "iostream"

class SuperMutant : public Enemy{
public:
    SuperMutant();
    ~SuperMutant();
    SuperMutant(SuperMutant const &mutant);
    SuperMutant	&operator=(SuperMutant const &mutant);
    virtual void takeDamage(int damage);
};


#endif //CPP_POLL_SUPERMUTANT_HPP
