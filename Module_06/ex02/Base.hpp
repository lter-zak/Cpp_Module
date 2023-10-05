#ifndef BASE_HPP
#define BASE_HPP

#include <fstream>
#include <iostream>

class Base
{
    public:
        Base();
        virtual ~Base();
    private:
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif