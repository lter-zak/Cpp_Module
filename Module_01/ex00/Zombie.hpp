#ifndef ZOMBIR_HPP
#define ZOMBIR_HPP

#include <iostream>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	announce();
		Zombie* newZombie(std::string name);
		void	randomChump(std::string name);
	private:
		std::string _name;
};

# endif