#include "ClapTrap.hpp"
#include <iostream>
ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap initialized with name: " << name << " hitPoints: " << hitPoints << " energyPoints: " << energyPoints << " attackDamage: " << attackDamage << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap copied" << std::endl;
    *(this) = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
    std::cout << "ClapTrap copied with overload" << std::endl;
    if (this != &src)
    {
        this->hitPoints = src.getHitPoints();
        this->energyPoints = src.getEnergyPoints();
        this->attackDamage = src.getAttackDamage();
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap -" << this->name <<"- destroyed" <<std::endl;
}

int ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}

int ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

void ClapTrap::attack(const std::string &name)
{
    if (this->energyPoints >= 1 && this->hitPoints >= 1)
    {
        std::cout << "ClapTrap -" << this->name << "- attacks " << name << " causing " << this->attackDamage << " of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else if (this->hitPoints >= 1)
        std::cout << "ClapTrap -" << this->name << "- cannot attack to " << name << " because it has no energy points left" << std::endl;
    else
        std::cout << "ClapTrap -" << this->name << "- cannot attack to " << name << " because it has no hit points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap -" << this->name << "- got " << amount << " damage.";
    if ((unsigned int)this->hitPoints < amount)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount; 
    std::cout << " New hit points: " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints >= 1)
    {
        std::cout << "ClapTrap -" << this->name << "- is repaired.";
        this->energyPoints--;
        this->hitPoints+=amount;
        std::cout << " New hit point: " << this->hitPoints << std::endl;
    }
    else if (this->hitPoints >= 1)
        std::cout << "ClapTrap -" << this->name << "- cannot be repaired because it has no energy points left" << std::endl;
}

void ClapTrap::setAttackDamage(int amount)
{
    this->attackDamage = amount;
}

void ClapTrap::setEnergyPoints(int amount)
{
    this->energyPoints = amount;
}

void ClapTrap::setHitPoints(int amount)
{
    this->hitPoints = amount;
}

