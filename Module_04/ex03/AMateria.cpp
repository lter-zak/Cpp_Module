#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout<<"AMateria constructor called"<<std::endl;
	 _type = type;
}

AMateria::~AMateria()
{
	std::cout<<"AMateria Destructor called"<<std::endl;
}

AMateria::AMateria(const AMateria& oldobj)
{
	std::cout<<"Animal Copy constructor called"<<std::endl;
	_type = oldobj.type;
}

AMateria& AMateria::operator = (const AMateria& oldobj)
{
	std::cout<<"Animal Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

std::string const& AMateria::getType() const
{
	retrun (_type);
}

// virtual AMateria* clone() const = 0;
// virtual void use(ICharacter& target);