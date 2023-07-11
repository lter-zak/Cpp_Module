#include "Zombie.hpp"

int main()
{
	Zombie randomZombie;
	Zombie* newZombied;

	randomZombie.randomChump("ASHOT");
	newZombied = newZombie("VAZGEN");
	newZombied->announce();
	delete newZombied;
	return (0);
}