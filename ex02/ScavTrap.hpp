#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        ScavTrap& operator=(ScavTrap const &src);
        ~ScavTrap();
        void guardGate();
};

#endif