#include "Zombie.hpp"

int main()
{
	Zombie *newZombie = NULL;

	zombieHorde(5, "Valodik");
	delete[] newZombie;
	return (0);
}