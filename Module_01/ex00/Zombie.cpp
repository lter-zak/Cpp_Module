#include "Zombie.hpp"

Zombie :: Zombie(std::string name)
{
	std::cout << "constructor\n";
	_name = name;
}
Zombie :: Zombie(){
	std::cout << "constructor\n";

}

Zombie :: ~Zombie() {
	std::cout << "destructor\n";
}

void Zombie::announce()
{
	std::cout<<_name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}