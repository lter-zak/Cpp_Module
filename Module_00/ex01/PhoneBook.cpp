#include "PhoneBook.hpp"

PhoneBook :: PhoneBook()
{
    index = 0;
}

PhoneBook :: ~PhoneBook(){}

void PhoneBook::Add()
{
    std::string str;
    
    std::cout<<"[ Please Input Fist Name ]--> ";
    std::cin>>str;
    contact[index].set_first_name(str);
    str.clear();
    std::cout<<"[ Please Input Last Name ]--> ";
    std::cin>>str;
    contact[index].set_last_name(str);
    str.clear();
    std::cout<<"[ Please Input Nickname ]--> ";
    std::cin>>str;
    contact[index].set_last_name(str);
    str.clear();
    std::cout<<"[ Please Input Phone Number ]--> ";
    std::cin>>str;
    contact[index].set_last_name(str);
    str.clear();
    std::cout<<"[ Please Input Darkest Secret ]--> ";
    std::cin>>str;
    contact[index].set_last_name(str);
    str.clear();
    std::cout<<PhoneBook::index++<<std::endl;
}

void PhoneBook::Search()
{
    std::string str;
    int         index;

    std::cout<<"[ Please input Index ]--> ";
    std::cin>>str;
    index = atoi(str.c_str());
    str.clear();
    std::cout<<"[ Fist Name ]--> "<<contact[index].get_first_name()<<std::endl;
}