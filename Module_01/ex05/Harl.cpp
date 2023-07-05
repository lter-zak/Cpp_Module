#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void Harl::debug()
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple\n"
            <<" -pickle-special- ketchup burger. I really do!"<<std::endl;
}

void Harl::info()
{
    std::cout<<"I cannot believe adding extra bacon costs more money.\n"
            <<"You didn’t put enough bacon in my burger! If you did, I wouldn’t\n"
            <<"be asking for more!"<<std::endl;

}

void Harl::warning()
{
    std::cout<<"I think I deserve to have some extra bacon for free.\n"
            <<"I’ve been coming for years whereas you started working\n"
            <<"here since last month."<<std::endl;
}

void Harl::error()
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}


void Harl::complain(std::string level)
{
    //return_type (class_name::*pointer_name) (parameter types)

    void        (Harl::*memberFuncPtr[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string chLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i = 0;

    for ( ; i <4 && chLevel[i].compare(level) != 0; i++);
    (this->*memberFuncPtr[i])();
}
    