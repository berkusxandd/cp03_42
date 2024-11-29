#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    this->name = name;
    std::cout << "diamondTrap initialized with name: " << name << " hitPoints: " << this->getHitPoints() << " energyPoints: " << this->getEnergyPoints() << " attackDamage: " << this->getAttackDamage() << std::endl;

}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src), name(src.name)
{
    std::cout << "DiamondTrap " << this->name << " copied!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    if (this != &src)
    {
        ClapTrap::operator=(src);
        FragTrap::operator=(src);
        ScavTrap::operator=(src);
        this->name = src.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "its diamond trap -" << this->name << "- and ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}
