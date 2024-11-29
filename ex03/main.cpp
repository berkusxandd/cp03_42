#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
int main()
{
    DiamondTrap dt("dt");
    dt.attack("air");
    dt.whoAmI();
    dt.takeDamage(10);
    dt.guardGate();
}