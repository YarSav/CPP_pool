//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_PEON_HPP
#define CPP_POLL_PEON_HPP

#include "Victim.hpp"
class Peon : public Victim {
public:
    Peon(std::string name);
    ~Peon();
    Peon(Peon const & peon);
    Peon &operator=(Peon const&peon);

    virtual void getPolimorphed() const;
};

#endif //CPP_POLL_PEON_HPP
