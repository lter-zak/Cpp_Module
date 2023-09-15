
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog(const Dog& oldobj);
        Dog& operator = (const Dog& oldobj);
		
		void makeSound() const;  
};

# endif