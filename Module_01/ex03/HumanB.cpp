#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	//std::cout<<"gun == "<<gun<<std::endl;
	_name = name;
}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& gun)
{
	_weapon = &gun;
}

void HumanB::attack()
{
	
	std::cout<<_name<<" attacks with their "<<_weapon->getType()<<std::endl;
}