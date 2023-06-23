#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
};

Weapon::~Weapon(){};


void Weapon::setType(std::string str)
{
	_type = str;
}

const std::string& Weapon::getType()
{
	return (_type);
}