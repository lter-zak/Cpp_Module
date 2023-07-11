#ifndef ZOMBIR_HPP
#define ZOMBIR_HPP

#include <iostream>

class Zombie{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	randomChump(std::string name);
	private:
		std::string _name;
};
	
Zombie* newZombie(std::string name);

# endif