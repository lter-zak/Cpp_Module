#include "Zombie.hpp"

int main()
{
	Zombie *newZombie = NULL;

	zombieHorde(3, "Valodik");
	delete[] newZombie;
	return (0);
}