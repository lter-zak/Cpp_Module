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

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out<<obj.toFloat();
    return out;
}

Fixed::Fixed(const int num)
{
    std::cout<<"Int constructor called"<<std::endl;
   // std::cout<<"INT NUM ="<<(num << this-> _fixedPoint)<<std::endl;
    setRawBits(num << this-> _fractionalBits);
}

//float number into fixed-point number
Fixed::Fixed(const float num)
{
    std::cout<<"Float constructor called"<<std::endl;
    //std::cout<<"FLOAT NUM ="<<(int)roundf(num * (1 << this->_fractionalBits))<<std::endl;
    this->setRawBits((int)roundf(num * (1 << this->_fractionalBits)));
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

int Fixed::getRawBits() const
{
    return ( _fixedPoint);
}

void Fixed::setRawBits(const int num)
{
    _fixedPoint = num;
}

//fixed point to floatg
float   Fixed::toFloat(void) const
{
   // std::cout<<"fixed num == "<<(float)(this-> _fixedPoint) / (1 << this->_fractionalBits)<<std::endl;
    return (float)(this-> _fixedPoint) / (1 << this->_fractionalBits);
}

int     Fixed::toInt(void) const
{
    return (this->_fixedPoint>>this->_fractionalBits);
}