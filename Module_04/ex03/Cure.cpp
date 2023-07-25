#include "Cure.hpp"

Cure::Cure(std::string const &type)
{
	std::cout<<"Cure Copy constructor called"<<std::endl;
	_type = type;
}

Cure::~Cure()
{
	std::cout<<"Cure Destructor called"<<std::endl;
}

Cure::Cure(const AMateria& oldobj)
{
	std::cout<<"Cure Copy constructor called"<<std::endl;
	_type = oldobj.type;
}

Cure& Cure::operator = (const AMateria& oldobj)
{
	std::cout<<"Cure Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}