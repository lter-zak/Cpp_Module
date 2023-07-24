#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class  WrongAnimal
{
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& oldobj);
        WrongAnimal& operator = (const WrongAnimal& oldobj);

        const std::string& getType() const;
        virtual void        makeSound() const;
    protected:
        std::string _type;
};

#endif