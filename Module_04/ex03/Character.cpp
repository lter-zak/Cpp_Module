#include "Character.hpp"

Character::Character()
{
	std::cout<<"Character default constructor called"<<std::endl;
	_name = "name";
	for (int i = 0; i < 4; i++)
	{
		Materias[i] = NULL;
		leftMaterias[i] = NULL;
	}
}

Character::Character(std::string name)
{
	std::cout<<"Character parameter constructor called"<<std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)	
	{
		Materias[i] = NULL;
		leftMaterias[i] = NULL;
	}
}

Character::~Character()
{
	std::cout<<"Character Destructor called"<<std::endl;
}

Character::Character(const Character& t)
{
	std::cout<<"Character Copy constructor called"<<std::endl;
	this->_name = t._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] != NULL)
			this->Materias[i] = t.Materias[i]->clone();
	}
}

Character& Character::operator=(const Character& t)
{
	std::cout<<"Character Copy assignment operator called"<<std::endl;
	if (this != &t)
	{
		this->_name = t._name;
		for (int i = 0; i < 4; i++)
		{
				delete this->Materias[i];
			if (t.Materias[i] != NULL)
				this->Materias[i] = t.Materias[i]->clone();
			else
				this->Materias[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}


void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (Materias[i] == NULL)
		{
			Materias[i] = m;
			return ;
		}
	}
	std::cout<<"[equip] -> Character can't equip"<<std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout<<"[unequip] -> Index number is not correct";
	else 
		if (Materias[idx] == NULL)
			std::cout<<"[unequip] -> Character does not have materias in this index"<<std::endl;
	for (int j = 0; j < 4; j++)
	{
		if (leftMaterias[j] == NULL)
		{
			leftMaterias[j] = Materias[idx];
			Materias[idx] = NULL;
			return ;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && Materias[idx] != NULL)
		Materias[idx]->use(target);
}