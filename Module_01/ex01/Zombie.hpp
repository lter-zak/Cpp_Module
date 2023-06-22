
#ifndef ZOMBIR_HPP
#define ZOMBIR_HPP

#include <iostream>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	setName(std::string _name);
		
	private:
		std::string _name;
};
	Zombie* zombieHorde(int N, std::string name);

# endif