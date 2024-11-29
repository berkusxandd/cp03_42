#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
    public:
       FragTrap(std::string name);
       FragTrap(const FragTrap &src);
       FragTrap& operator=(FragTrap const &src);
        ~FragTrap();
        void highFivesGuys();
};

#endif