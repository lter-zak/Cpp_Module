#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(){
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

}