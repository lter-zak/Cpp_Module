#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
    std::cout<<"WrongAnimal Default constructor called"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal Destructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& oldobj)
{
     std::cout<<"WrongAnimal Copy constructor called"<<std::endl;
     _type = oldobj._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& oldobj)
{
     std::cout<<"WrongAnimal Copy assignment operator called"<<std::endl;
     if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout<<"The Wronganimal making sound - ? ? ?"<<std::endl;
}

const std::string& WrongAnimal::getType(void) const
{
    return(this->_type);
}