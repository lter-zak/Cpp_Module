// #include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
//----------------------------
	Dog s;
	Dog b;
	s = b;
	
//----------------------------

//    int AnimalNumber = 8;
//    Animal* AnimalArr[AnimalNumber];

//    for (int i = 0; i < AnimalNumber; i++)
//    {
//      if (i > 0 && i <= AnimalNumber/2)
//         AnimalArr[i] = new Cat();
//     else 
//          AnimalArr[i] = new Dog();
//    }
//    for (int i = 0; i < AnimalNumber; i++)
//         delete AnimalArr[i];

	//system("leaks Animal");
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
    // std::cout<<"\n-----WrongAnimal-----"<<std::endl;

    // const WrongAnimal* Wrongmeta = new WrongAnimal();
    // const WrongAnimal* Wrongj = new WrongCat();

    // std::cout << Wrongj->getType() << " " << std::endl;

    // Wrongmeta->makeSound();
    // Wrongj->makeSound();

    // delete Wrongmeta;
    // delete Wrongj;
    return 0;
}