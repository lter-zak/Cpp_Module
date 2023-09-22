#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default constructor called"<<std::endl;
    _type = "Cat";
}

Cat::Cat(std::string type)
{
     std::cout<<"Cat Default parameter constructor called"<<std::endl;
    _type = type;
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor called"<<std::endl;
}

Cat::Cat(const Cat& oldobj)
{
     std::cout<<"Cat Copy constructor called"<<std::endl;
     _type = oldobj._type;
}

Cat& Cat::operator=(const Cat& oldobj)
{
     std::cout<<"Cat Copy assignment operator called"<<std::endl;
     if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

void Cat::makeSound(void) const 
{
    std::cout<<"The Cat making sound - mew mew mew"<<std::endl;
}