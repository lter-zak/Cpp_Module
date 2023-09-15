#include "Cure.hpp"

Ice::Cure()
{
	std::cout<<"Cure Default constructor called"<<std::endl;
	_type = "type";
}
Cure::Cure(const Cure& cure)
{
	std::cout<<"Cure Copy constructor called"<<std::endl;
	_type = cure._type;
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

AMateria* clone() const
{
	retrun( new Cure(*this) );
}

void use(ICharacter& target)
{
	std::cout<<"* heals "<<_name<<"s wounds *";
}