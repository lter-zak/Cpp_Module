#include "Harl.hpp"

int main()
{
    Harl        obj;
    std::string level;
    while(true)
    {
        //if (std::cin.eof()){return (0);};
        if(getline(std::cin, level))
            obj.complain(level);
        else return(0);
    }
}