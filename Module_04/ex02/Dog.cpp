#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Default constructor called"<<std::endl;
    _type = "Dog";
     _DogBrain = new Brain();
}

Dog::Dog(std::string type)
{
     std::cout<<"Dog Default parameter constructor called"<<std::endl;
    _type = type;
}

Dog::~Dog()
{
    std::cout<<"Dog Destructor called"<<std::endl;
    delete _DogBrain;
	_DogBrain = NULL;
}

Dog::Dog(const Dog& oldobj)
{
    std::cout<<"Dog Copy constructor called"<<std::endl;
    _type = oldobj._type;
	_DogBrain = new Brain(*oldobj._DogBrain);
}

Dog& Dog::operator=(const Dog& oldobj)
{
     std::cout<<"Dog Copy assignment operator called"<<std::endl;
     if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout<<"The Dog making sound - bark bark bark"<<std::endl;
}