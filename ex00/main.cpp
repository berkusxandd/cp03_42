#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct1("CT1");
    ClapTrap ct2("CT2");

    ct1.setAttackDamage(11);
    ct1.setEnergyPoints(1);
    ct1.setHitPoints(5);
    
    ct2.setAttackDamage(5);
    ct2.setEnergyPoints(3);
    ct2.setHitPoints(5);

    ct1.attack("B");
    ct2.takeDamage(A.getAttackDamage());
    ct2.attack("A");
    ct2.beRepaired(1);
    ct2.attack("A");
    ct1.takeDamage(B.getAttackDamage());
    ct1.beRepaired(3);
}