#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"
//class  <derived_class_name> : <access-specifier> <base_class_name>

class ScavTrap : private ClapTrap
{
	public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& other);//Copy constractor
        ScavTrap&   operator=(const ScavTrap &oldObj);//Copy assignment operator

        void        attack(const std::string& target);
		void		guardGate();
};

#endif