
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& gun) :  _weapon(gun)
{
	//std::cout<<"gun == "<<gun<<std::endl;
	// _weapon = gun;
	 _name = name;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout<<_name<<" attacks with their "<<_weapon.getType()<<std::endl;
}