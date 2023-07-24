#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        ~WrongCat();
        WrongCat(const WrongCat& oldobj);
        WrongCat& operator = (const WrongCat& oldobj);

        void makeSound();
};

# endif 