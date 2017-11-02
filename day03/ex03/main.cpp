//
// Created by ysavenko on 01.11.17.
//


#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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

    NinjaTrap ninjaTrap("nnn");
    ninjaTrap.rangedAttack("enemy3");
    ninjaTrap.meleeAttack("enemy3");
    ninjaTrap.takeDamage(30);
    ninjaTrap.beRepaired(22);
    ninjaTrap.ninjaShoebox(scavTrap);

}