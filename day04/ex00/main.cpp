//
// Created by ysavenko on 02.11.17.
//

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
int main()
{
    Sorcerer sorcerer("Gendalf", "white mag");
    Victim victim("dno");
    Peon peon("dfg");


    std::cout<<sorcerer<<victim<<peon;
    sorcerer.polymorph(victim);
    sorcerer.polymorph(peon);


}