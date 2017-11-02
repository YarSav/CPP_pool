//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_VICTIM_HPP
#define CPP_POLL_VICTIM_HPP

#include "iostream"

class Victim {
protected:
    std::string name;
public:
    Victim(std::string name);
    ~Victim();
    Victim &operator=(Victim const&src);
    Victim(Victim const&src);
    std::string getName() const;

    virtual void getPolimorphed() const;
};

std::ostream &operator<<(std::ostream &ostream1, Victim const&victim);

#endif //CPP_POLL_VICTIM_HPP
