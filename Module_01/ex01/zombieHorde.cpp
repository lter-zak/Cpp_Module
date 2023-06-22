#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombieArr;
	zombieArr = new Zombie[N];

	for(int i = 0; i < N ; i++)
	{
		zombieArr[i].setName(name);
		zombieArr[i].announce();
	}
	return (zombieArr);
}