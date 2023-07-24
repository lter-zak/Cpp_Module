#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default constructor called"<<std::endl;
    _type = "Cat";
    _CatBrain = new Brain;
}

Cat::Cat(std::string type)
{
     std::cout<<"Cat Default parameter constructor called"<<std::endl;
    _type = type;
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor called"<<std::endl;
    delete _CatBrain;
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

void Cat::makeSound(void)
{
    std::cout<<"The Cat making sound - mew mew mew"<<std::endl;
}