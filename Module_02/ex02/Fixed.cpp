#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixedPoint = 0;
}

Fixed::~Fixed(){}

Fixed& Fixed::operator=(const Fixed &oldObj)
{
    //std::cout<<"Copy assignment operator called"<<std::endl;
    if (this == &oldObj)
        return (*this);
    setRawBits(oldObj.getRawBits());
    return (*this);
}

Fixed::Fixed(const Fixed &oldObj)
{
   // std::cout<<"Copy constructor called"<<std::endl;
    _fixedPoint = oldObj.getRawBits();
}


Fixed::Fixed(const int num)
{
   // std::cout<<"Int constructor called"<<std::endl;
   // std::cout<<"INT NUM ="<<(num << this-> _fixedPoint)<<std::endl;
    setRawBits(num << this-> _fractionalBits);
}

//float number into fixed-point number
Fixed::Fixed(const float num)
{
    //std::cout<<"Float constructor called"<<std::endl;
    //std::cout<<"FLOAT NUM ="<<(int)roundf(num * (1 << this->_fractionalBits))<<std::endl;
    this->setRawBits((int)roundf(num * (1 << this->_fractionalBits)));
}

int Fixed::getRawBits() const{return ( _fixedPoint);}

void Fixed::setRawBits(const int num){ _fixedPoint = num;}

float   Fixed::toFloat(void) const
{
    return (float)(this-> _fixedPoint) / (1 << this->_fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out<<obj.toFloat();
    return out;
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
    return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return (toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return(toFloat() / other.toFloat());
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

//////////////////////////////min / max ///////////////////////////////////

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}