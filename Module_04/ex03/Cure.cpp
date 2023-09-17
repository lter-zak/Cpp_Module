#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout<<"Cure Default constructor called"<<std::endl;
	_type = "cure";
}
Cure::Cure(const Cure& oldCure)
{
	std::cout<<"Cure Copy constructor called"<<std::endl;
	_type = oldCure._type;
}

Cure::~Cure()
{
	std::cout<<"Cure Destructor called"<<std::endl;
}


Cure& Cure::operator=(const Cure& oldobj)
{
	std::cout<<"Cure Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

Cure* clone() const
{
	return( new Cure(*this) );
}

void use(ICharacter& target)
{
	std::cout<<"* heals "<<target.getName()<<"s wounds *"<<std::endl;
}