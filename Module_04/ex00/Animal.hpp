
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& oldobj);
        Animal& operator = (const Animal& oldobj);

        const std::string& getType() const;
        virtual void        makeSound() const;

    protected:
        std::string _type;
};

#endif