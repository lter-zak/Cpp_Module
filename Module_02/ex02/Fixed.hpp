#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed& other); //copy constructor  
    Fixed& operator=(const Fixed &oldObj);//Copy assignment operator
    ~Fixed();
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    //comparison operators
    bool    operator>(const Fixed& other) const;
    bool    operator<(const Fixed& other) const;
    bool    operator>=(const Fixed& other) const;
    bool    operator<=(const Fixed& other) const;
    bool    operator==(const Fixed& other) const;
    bool    operator!=(const Fixed& other) const;

    //arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // increment/decrement
    Fixed&  operator++(void); // pre; ++i
    Fixed   operator++(int); //post; i++
    Fixed&  operator--(void); //pre; --i
    Fixed   operator--(int); //post; i++

    private:
        int                 _fixedPoint;
        static const int    _fractionalBits = 8;


};
    std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif