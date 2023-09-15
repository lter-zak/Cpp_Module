#include "Ice.hpp"

Ice::Ice()
{
	std::cout<<"Ice Default constructor called"<<std::endl;
	_type = "type";
}

Ice::Ice(const Ice& ice)
{
	std::cout<<"Ice Copy constructor called"<<std::endl;
	_type = ice._type;
}

Ice::~Ice()
{
	std::cout<<"Ice Destructor called"<<std::endl;
}

Ice::Ice(const AMateria& oldobj)
{
	std::cout<<"Ice Copy constructor called"<<std::endl;
	_type = oldobj.type;
}

Ice& Ice::operator = (const AMateria& oldobj)
{
	std::cout<<"Ice Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

AMateria* clone() const
{
	retrun( new Ice(*this) );
}