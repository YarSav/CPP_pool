//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_SORCERER_HPP
#define CPP_POLL_SORCERER_HPP

#include "iostream"
#include "Victim.hpp"
class Sorcerer {
protected:
    std::string name;
    std::string title;
public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    Sorcerer &operator=(Sorcerer const &src);
    Sorcerer(Sorcerer const &src);
    std::string getName()const;
    std::string getTitle()const;
    void polymorph(Victim const &victim) const;
};
std::ostream &operator<<(std::ostream &ostream1, Sorcerer const &sorcerer);

#endif //CPP_POLL_SORCERER_HPP
