//
// Created by ysavenko on 01.11.17.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    FragTrap nf("df");
    nf.hit_points = 80;
    nf.beRepaired(72);
    nf.takeDamage(12);
    nf.vaulthunter_dot_exe("a");
    nf.vaulthunter_dot_exe("b");
    nf.vaulthunter_dot_exe("c");

    ScavTrap scavTrap("sfff");
    scavTrap.hit_points = 22;
    scavTrap.beRepaired(34);
    scavTrap.takeDamage(21);
    scavTrap.challengeNewcomer();
}