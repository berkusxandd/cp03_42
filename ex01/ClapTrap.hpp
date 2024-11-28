#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
class ClapTrap
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ClapTrap &operator=(ClapTrap const &src);
        ~ClapTrap();
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        std::string getName();
        void setHitPoints(int amount);
        void setEnergyPoints(int amount);
        void setAttackDamage(int amount);
        std::string getName() const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif