#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name; // DiamondTrap's specific name

    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &src);
        DiamondTrap &operator=(const DiamondTrap &src);
        ~DiamondTrap();

        void whoAmI();
        using ScavTrap::attack;
};

#endif