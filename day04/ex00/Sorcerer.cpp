//
// Created by ysavenko on 02.11.17.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
    this->name = name;
    this->title = title;
    std::cout<<name<<", "<<title<<", is born"<<std::endl;
}
Sorcerer::~Sorcerer() {
    std::cout<<name<<", "<<title<<", is dead. Consequences will never be the same !"<<std::endl;
}
Sorcerer& Sorcerer::operator=(Sorcerer const &src) {
    this->name = src.name;
    this->title = src.title;
    std::cout<<name<<", "<<title<<", is born"<<std::endl;
    return *this;
}
Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
}
std::ostream &operator<<(std::ostream &ostream1, Sorcerer const &sorcerer)
{
    ostream1<<"I am "<<sorcerer.getName()<<", "<<sorcerer.getTitle()<<", and I like ponies!"<<std::endl;
    return ostream1;
}
std::string Sorcerer::getName() const {
    return this->name;
}
std::string Sorcerer::getTitle() const{
    return this->title;
}
void Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolimorphed();
}