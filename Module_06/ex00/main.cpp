#include "ScalarConverter.hpp"


int main(int argc, char** argv) 
{
    try
    {
    if(argc == 2)
        {
            ScalarConverter::convert(argv[1]);
        } 
        else 
            std::cout<<"Must be one argument"<<std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}