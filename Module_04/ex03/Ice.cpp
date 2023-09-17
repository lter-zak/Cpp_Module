#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout<<"Ice Default constructor called"<<std::endl;
	_type = "ice";
}

Ice::Ice(const Ice& oldIce)
{
	std::cout<<"Ice Copy constructor called"<<std::endl;
	_type = oldIce._type;
}

Ice::~Ice()
{
	std::cout<<"Ice Destructor called"<<std::endl;
}

Ice& Ice::operator=(const Ice &oldobj)
{
	std::cout<<"Ice Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

Ice* clone() const
{
	return( new Ice(*this) );
}

void use(ICharacter& target)
{
	std::cout<<"* shoots an ice bolt at "<< target.getName()<<" *"<<std::endl;
}