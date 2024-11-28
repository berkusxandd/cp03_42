#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap initialized with name: " << name << " hitPoints: " << this->getHitPoints() << " energyPoints: " << this->getEnergyPoints() << " attackDamage: " << this->getAttackDamage() << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    (*this) = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
    if (this != &src)
    {
        this->setHitPoints(src.getHitPoints());
        this->setEnergyPoints(src.getEnergyPoints());
        this->setAttackDamage(getAttackDamage());
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap -" << this->getName() << "- destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap -" << this->getName() << "- is in guard mode!" << std::endl;
}