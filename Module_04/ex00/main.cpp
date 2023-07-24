// #include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout<<"\n-----WrongAnimal-----"<<std::endl;

    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* Wrongj = new WrongCat();

    std::cout << Wrongj->getType() << " " << std::endl;

    Wrongmeta->makeSound();
    Wrongj->makeSound();

    delete Wrongmeta;
    delete Wrongj;

    return 0;
}