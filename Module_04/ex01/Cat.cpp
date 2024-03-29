#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default constructor called"<<std::endl;
    _type = "Cat";
    _CatBrain = new Brain();
}

Cat::Cat(std::string type)
{
     std::cout<<"Cat Default parameter constructor called"<<std::endl;
    _type = type;
	_CatBrain = new Brain();
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor called"<<std::endl;
    delete _CatBrain;
	_CatBrain = NULL;
}

Cat::Cat(const Cat& oldobj)
{
    std::cout<<"Cat Copy constructor called"<<std::endl;
    _type = oldobj._type;
	_CatBrain = new Brain(*oldobj._CatBrain);
}

Cat& Cat::operator=(const Cat& oldobj)
{
	std::cout<<"Cat Copy assignment operator called"<<std::endl;
	if (this == &oldobj)
		return (*this);
		delete _CatBrain;
    this->_type = oldobj._type;
	this->_CatBrain = new Brain(*oldobj._CatBrain); // Brain operator constructor
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout<<"The Cat making sound - mew mew mew"<<std::endl;
}