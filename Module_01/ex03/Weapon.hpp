#ifndef WEAPON_HPP
#define WEAPON_HPP

// #include "HumanA.hpp"
// #include "HumanB.hpp"

#include <iostream>

class Weapon{
	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string str);
		const std::string& getType();
	private:
		std::string _type;
};

# endif