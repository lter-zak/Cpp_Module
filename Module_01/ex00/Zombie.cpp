#include "Zombie.hpp"

Zombie :: Zombie(){}

Zombie :: ~Zombie(){}

void Zombie::announce()
{
	std::cout<<_name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}