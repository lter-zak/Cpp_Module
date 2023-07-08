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


int Fixed::getRawBits() const
{
     std::cout<<"getRawBits member function called"<<std::endl;
    return ( _fixedPoint);
}

void Fixed::setRawBits(const int num)
{
    _fixedPoint = num;
}

//////////////////////////////comparison operators/////////////////////////////////////

bool Fixed::operator>(const Fixed& other) const
{
    return (_fixedPoint > other._fixedPoint);
}

bool Fixed::operator<(const Fixed& other)  const
{
    return (_fixedPoint < other._fixedPoint);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (_fixedPoint >= other._fixedPoint);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (_fixedPoint <= other._fixedPoint);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (_fixedPoint == other._fixedPoint);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (_fixedPoint != other._fixedPoint);
}

//////////////////////////////arithmetic operators////////////////////////////////////

Fixed Fixed::operator+(const Fixed& other)  const
{
    return (this->_fixedPoint + other._fixedPoint);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return (_fixedPoint - other._fixedPoint);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return(_fixedPoint * other._fixedPoint);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return(_fixedPoint / other._fixedPoint);
}

//tofloat na petq grel u ogt

//////////////////////////////increment/decrement///////////////////////////////////

Fixed&  Fixed::operator++(void) // pre; ++i
{
    _fixedPoint += 1;
    return(*this);
}

Fixed   Fixed::operator++(int) //post; i++
{
    Fixed tmp(*this);

    _fixedPoint += 1; 
    return(tmp);

}
Fixed&  Fixed::operator--(void) //pre; --i
{
    _fixedPoint -= 1;
    return(*this);
}

Fixed  Fixed::operator--(int) //post; i++
{
    Fixed tmp(*this);

    _fixedPoint -= 1; 
    return(tmp);
}