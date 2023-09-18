#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout<<"AMateria default constructor called"<<std::endl;
	_type = "type";
}

AMateria::AMateria(std::string const &type)
{
	std::cout<<"AMateria parameter constructor called"<<std::endl;
	 _type = type;
}

AMateria::~AMateria()
{
	std::cout<<"AMateria Destructor called"<<std::endl;
}

AMateria::AMateria(const AMateria& oldobj)
{
	std::cout<<"Animal Copy constructor called"<<std::endl;
	_type = oldobj._type;
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
	return (_type);
}

void use(ICharacter& target)
{
	(void)target;
	std::cout<<"[use] -> This type does not exists"<<std::endl;
}