#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook :: PhoneBook()
{
    index = 0;
}

PhoneBook :: ~PhoneBook(){}

void PhoneBook::Add()
{
    std::string str;
    
    std::cout<<std::endl;
    std::cout<<"[ Please Input Fist Name      ]--> ";
    std::cin>>str;
    contact[index].set_first_name(str);
    str.clear();
    std::cout<<"[ Please Input Last Name      ]--> ";
    std::cin>>str;
    contact[index].set_last_name(str);
    str.clear();
    std::cout<<"[ Please Input Nickname       ]--> ";
    std::cin>>str;
    contact[index].set_nickname(str);
    str.clear();
    std::cout<<"[ Please Input Phone Number   ]--> ";
    std::cin>>str;
    contact[index].set_phone_number(str);
    str.clear();
    std::cout<<"[ Please Input Darkest Secret ]--> ";
    std::cin>>str;
    contact[index].set_dark_sec(str);
    str.clear();
    PhoneBook::index++;
    if (PhoneBook::index > 7)
        PhoneBook::index = 0;
}

void PhoneBook::Search()
{
    std::string str;
    int         index;

    std::cout<<std::endl;
    std::cout<<"[ Please insert the contact Index ]--> ";
    std::cin>>str;
    index = atoi(str.c_str());
    str.clear();
    std::cout<<"\n[ Fist Name      ]--> "<<contact[index].get_first_name()<<std::endl;
    std::cout<<"[ Fist Last Name ]--> "<<contact[index].get_last_name()<<std::endl;
    std::cout<<"[ Fist Nickame   ]--> "<<contact[index].get_nickname()<<std::endl;
    std::cout<<"[ Phone Number   ]--> "<<contact[index].get_phone_number()<<std::endl;
    std::cout<<"[ Darkest Secret ]--> "<<contact[index].get_dark_sec()<<std::endl<<std::endl;

}