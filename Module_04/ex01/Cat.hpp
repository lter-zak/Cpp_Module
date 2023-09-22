#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat(const Cat& oldobj);
        Cat& operator = (const Cat& oldobj);

        void makeSound() const;

        private:
            Brain* _CatBrain;
};

# endif 