//
// Created by ysavenko on 01.11.17.
//

#include "FragTrap.hpp"

int main()
{
    FragTrap nf("df");
    nf.hit_points = 80;
    nf.beRepaired(72);
    nf.takeDamage(12);
    nf.vaulthunter_dot_exe("a");
    nf.vaulthunter_dot_exe("b");
    nf.vaulthunter_dot_exe("c");
}