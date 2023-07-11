#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombieArr;

	if (N < 0)
		return 0;
	zombieArr = new Zombie[N];
	for(int i = 0; i < N ; i++)
	{
		zombieArr[i].setName(name);
		zombieArr[i].announce();
	}
	return (zombieArr);
}