#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("A");
    ClapTrap B("B");

    A.setAttackDamage(11);
    A.setEnergyPoints(1);
    A.setHitPoints(5);
    
    B.setAttackDamage(5);
    A.setEnergyPoints(3);
    A.setHitPoints(5);

    A.attack("B");
    B.takeDamage(A.getAttackDamage());
    B.attack("A");
    B.beRepaired(1);
    B.attack("A");
    A.takeDamage(B.getAttackDamage());
    A.beRepaired(3);
}