#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
    std::cout<<"Animal Default constructor called"<<std::endl;
}

Animal::~Animal()
{
    std::cout<<"Animal Destructor called"<<std::endl;
}

//For reference
// In C++, copy constructors should generally take their argument
//  by reference to avoid unnecessary copying of objects.

//For const
// we should use const in C++ wherever 
//possible so that objects are not accidentally modified

Animal::Animal(const Animal& oldobj)
{
    std::cout<<"Animal Copy constructor called"<<std::endl;
    _type = oldobj._type;
}

// a = b = c;
// //This is what the compiler does to this statement:

// a.operator=(b.operator=(c));
Animal& Animal::operator=(const Animal& oldobj)
{
    std::cout<<"Animal Copy assignment operator called"<<std::endl;
    if (this == &oldobj)
        return (*this);
    this->_type = oldobj._type;
    return (*this);
}

// void Animal::makeSound(void) const
// {
//     std::cout<<"The animal making sound - ? ? ?"<<std::endl;
// }

const std::string& Animal::getType(void) const
{
    return(this->_type);
}