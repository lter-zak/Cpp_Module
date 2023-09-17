#include "Character.hpp"

Character::Character()
{
	std::cout<<"Character constructor called"<<std::endl;
}

Character::Character(std::string name)
{
	std::cout<<"Character parameter constructor called"<<std::endl;
	_name = name;
}
Character::~Character()
{
	std::cout<<"Character Destructor called"<<std::endl;
}
Character::Character(const Character& t)
{
	std::cout<<"Animal Copy constructor called"<<std::endl;
	
}
Character::Character& operator=(const Character& t);

void Character::use(int idx, ICharacter& target);

	
