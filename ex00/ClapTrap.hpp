#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap
// • Energy points (10)
// • Attack damage (0)
// Add the following public member functions so the ClapTrap looks more realistic:
// • void attack(const std::string& target);
// • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);
// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
// cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
// or energy points left.

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
        void setHitPoints(int amount);
        void setEnergyPoints(int amount);
        void setAttackDamage(int amount);
        std::string getName() const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif