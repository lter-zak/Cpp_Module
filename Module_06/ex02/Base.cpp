#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    Base *j;
    std::srand(std::time(nullptr));
    int random_variable = std::rand();
    if(random_variable % 3 == 0)
		j = new A();
	else if(random_variable % 3 == 1)
		j = new B();
    else 
        j = new C();
    return j;
}

void identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    if (a != NULL)
        std::cout << "The actual type of the object is 'A'" << std::endl;
    else if(b != NULL)
        std::cout << "The actual type of the object is 'B'" << std::endl;
    else if(c != NULL)
        std::cout << "The actual type of the object is 'C'" << std::endl;
}

void identify(Base& p)
{
    try {
       (void)dynamic_cast<A&>(p);
        std::cout << "The actual type of the object is 'A'" << std::endl;
    }
    catch (std::exception& e) {}

    try {
       (void)dynamic_cast<B&>(p);
       std::cout << "The actual type of the object is 'B'" << std::endl;
    }
    catch (std::exception& e) {}

    try {
       (void)dynamic_cast<C&>(p);
       std::cout << "The actual type of the object is 'C'" << std::endl;
    }
    catch (std::exception& e) {}
}

Base::Base()
{

}

Base::~Base()
{
    
}