#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    _fixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed &oldObj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this == &oldObj)
        return (*this);
    setRawBits(oldObj.getRawBits());
    return (*this);
}

Fixed::Fixed(const Fixed &oldObj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    _fixedPoint = oldObj.getRawBits();
}




//copy constructor

// A copy constructor is a member function that initializes an object using another
//  object of the same class. In simple terms, a constructor which creates an object
//   by initializing it with an object of the
//  same class, which has been created previously is known as a copy constructor.

int Fixed::getRawBits() const
{
    return ( _fixedPoint);
}

void Fixed::setRawBits(const int num)
{
    _fixedPoint = num;
}