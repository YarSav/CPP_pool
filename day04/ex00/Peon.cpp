//
// Created by ysavenko on 02.11.17.
//

#include "Peon.hpp"

Peon::Peon(std::string name):Victim(name) {
    std::cout<<"Zog zog."<<std::endl;
}
Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}
Peon& Peon::operator=(Peon const &peon) {
    this->name = peon.name;
    return *this;
}
Peon::Peon(Peon const &peon) :Victim(peon) {
    std::cout<<"Zog zog."<<std::endl;
    *this = peon;
}
void Peon::getPolimorphed() const {
    std::cout<<this->name<<" has been turned into a pinky pony !"<<std::endl;
}
