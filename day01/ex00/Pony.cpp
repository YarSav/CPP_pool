
#include "Pony.hpp"

void Pony::hello() {
    std::cout<<"Hi, my name is "<<this->name<<", i am "<<this->age<<" years old"<<std::endl;
}
Pony::Pony(std::string name, std::string color, int age) {
    this->name = name;
    this->color = color;
    this->age = age;
    std::cout<<"Pony "<<name<<"been created"<<std::endl;
}
Pony::~Pony() {
    std::cout<<"Pony "<<this->name<<" destroyed"<<std::endl;
}
