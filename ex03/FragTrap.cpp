#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap initialized with name: " << name << " hitPoints: " << this->getHitPoints() << " energyPoints: " << this->getEnergyPoints() << " attackDamage: " << this->getAttackDamage() << std::endl;

}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    (*this) = src;
}

FragTrap& FragTrap::operator=(FragTrap const &src)
{
    if (this != &src)
    {
        this->setHitPoints(src.getHitPoints());
        this->setEnergyPoints(src.getEnergyPoints());
        this->setAttackDamage(getAttackDamage());
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap -" << this->getName() << "- destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap -" << this->getName() << "- lifted its arm!" << std::endl;
}