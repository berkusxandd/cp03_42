#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap st("ST");
    ClapTrap ct("CT");
    FragTrap ft("FT");

    st.attack("FT");
    ft.takeDamage(st.getAttackDamage());
    ft.highFivesGuys();
    ft.attack("ST");
    st.takeDamage(ft.getAttackDamage());
    st.beRepaired(10);
    ct.attack("ST");
    st.takeDamage(ct.getAttackDamage());
    st.guardGate();
}