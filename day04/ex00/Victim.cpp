//
// Created by ysavenko on 02.11.17.
//

#include "Victim.hpp"

Victim::Victim(std::string name) {
    this->name = name;
    std::cout<<"Some random voctim called "<<name<<" popped !"<<std::endl;
}
Victim::~Victim() {
    std::cout<<"Victim "<<this->name<<" just died for no apperent reason !"<<std::endl;
}
std::string Victim::getName() const{

    return this->name;
}
Victim& Victim::operator=(Victim const &src) {
    this->name = src.name;
    std::cout<<"Some random voctim called "<<name<<" popped !"<<std::endl;
    return *this;
}
Victim::Victim(Victim const &src) {
    *this = src;
}

std::ostream &operator<<(std::ostream &ostream1, Victim const &victim)
{
    ostream1<<"I'm "<<victim.getName()<<" and I like otters!"<<std::endl;
    return ostream1;
}
void Victim::getPolimorphed() const {
    std::cout<<this->name<<" has been turned into a cute little sheep !"<<std::endl;
}