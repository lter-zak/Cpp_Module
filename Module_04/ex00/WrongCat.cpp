#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat Default constructor called"<<std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
     std::cout<<"WrongCat Default parameter constructor called"<<std::endl;
    _type = type;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat Destructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& oldobj)
{
     std::cout<<"WrongCat Copy constructor called"<<std::endl;
     _type = oldobj._type;
}

WrongCat& WrongCat::operator=(const WrongCat& oldobj)
{
     std::cout<<"WrongCat Copy assignment operator called"<<std::endl;
     if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout<<"The WrongCat making sound - mew mew mew"<<std::endl;
}