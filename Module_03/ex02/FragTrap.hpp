#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class FragTrap : public ClapTrap
{
	 public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& other);//Copy constractor
        FragTrap&   operator=(const FragTrap &oldObj);//Copy assignment operator

		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif