#include "Base.hpp"
#include "A.hpp"

int main()
{
    A ex1;
    Base* base1 = generate();
    identify(base1);
    identify(*base1);
    return (0);
}