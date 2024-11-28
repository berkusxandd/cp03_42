#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap st("ST");
    ClapTrap ct("CT");

    ct.setHitPoints(100);
    st.attack("CT");
    ct.takeDamage(ST.getAttackDamage());
    st.guardGate();
    ct.attack("ST");
    ct.beRepaired(3);
}