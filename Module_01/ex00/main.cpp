#include "Zombie.hpp"

int main()
{
	Zombie randomZombie;
	Zombie* newZombie = NULL;

	randomZombie.randomChump("ASHOT");
	newZombie = newZombie->newZombie("VAZGEN");
	newZombie->announce();
	//std::cout<<std::endl;
	delete newZombie;
	return (0);
}