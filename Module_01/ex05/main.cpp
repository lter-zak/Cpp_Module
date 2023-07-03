#include "Harl.hpp"

int main()
{
    Harl        obj;
    std::string level;
    while(true)
    {
        getline(std::cin, level);
        obj.complain(level);
    }
}