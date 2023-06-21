#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie newZombie;

	newZombie._name = name;
	newZombie.announce();
}