//
// Created by ysavenko on 01.11.17.
//


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap fr("qwer");
    fr.rangedAttack("enemy");
    fr.meleeAttack("enemy");
    fr.takeDamage(32);
    fr.beRepaired(30);
    fr.beRepaired(30);
    fr.vaulthunter_dot_exe("target");

    ScavTrap scavTrap("asdf");
    scavTrap.rangedAttack("enemy2");
    scavTrap.meleeAttack("enemy2");
    scavTrap.takeDamage(44);
    scavTrap.beRepaired(30);
    scavTrap.beRepaired(30);
    scavTrap.challengeNewcomer();

}