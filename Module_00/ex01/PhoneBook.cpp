#include "PhoneBook.hpp"

PhoneBook :: PhoneBook()
{
    index = 0;
    count = 0;
}

PhoneBook :: ~PhoneBook(){}

int PhoneBook::if_smt_wrong(std::string str, int index)
{
    if (index == 1)
    {
        if(all_char(str) || str.length() == 0)
        {
            std::cout<<"\n[ ☹︎ Input is not correct , please try again ]  --> ";
            return (1);
        }
        return (0);
    }
    if (index == 2)
    {
         if(all_digit(str) || str.length() == 0)
        {
            std::cout<<"\n[ ☹︎ Input is not correct , please try again ]  --> ";
            return (1);
        }
        return (0);
    }
    else 
    {
        if (str.length() == 0)
        {
            std::cout<<"\n[ ☹︎ Input is not correct , please try again ] --> ";
            return (1);
        }
        return (0);
    }
}

void PhoneBook::Add()
{
    std::string str;
    
    std::cout<<std::endl;
    std::cout<<"[ Please Input Fist Name      ]-->  ";
    label1 :
        std::getline(std::cin,str);
        if(std::cin.eof()){return ;}
        if (if_smt_wrong(str, 1)){goto label1;}
    contact[index].set_first_name(str);
    str.clear();

    std::cout<<"[ Please Input Last Name      ]-->  ";
     label2:
        std::getline(std::cin, str); 
        if(std::cin.eof()){return ;}   
        if (if_smt_wrong(str, 1)){goto label2;}
    contact[index].set_last_name(str);
    str.clear();

    std::cout<<"[ Please Input Nickname       ]-->  ";
    label3:
        std::getline (std::cin,str);
        if(std::cin.eof()){return ;}   
        if (if_smt_wrong(str, 3)){goto label3;}
    contact[index].set_nickname(str);
    str.clear();

    std::cout<<"[ Please Input Phone Number   ]-->  ";
    label4:
        std::getline (std::cin,str);
        if(std::cin.eof()){return ;}   
        if (if_smt_wrong(str, 2)){goto label4;}
    contact[index].set_phone_number(str);
    str.clear();

    std::cout<<"[ Please Input Darkest Secret ]-->  ";
    label5:
        std::getline (std::cin,str);
        if(std::cin.eof()){return ;}   
        if (if_smt_wrong(str, 3)){goto label5;}
    contact[index].set_dark_sec(str);
    str.clear();
    index++;
    count++;
    if (index > 7)
       index = 0;
}

void PhoneBook::print_all_contacts()
{
     int i = 0;
    int true_len = 10;
    int smt = 0;
    while((contact[i].get_first_name()).length() !=0)
    { 
        std::cout<<BLUE<<"         ";
        std::cout<<i;
        std::cout<<"|";
        if((contact[i].get_first_name()).length() <=10)
        {
            print_space(true_len - contact[i].get_first_name().length());
            std::cout<<contact[i].get_first_name()<<"|";
        }
        else 
        {
            print_part_str(contact[i].get_first_name());
            std::cout<<"|";
        }
        if(contact[i].get_last_name().length() < 10)
        {
            print_space(true_len - (contact[i].get_last_name()).length());
            std::cout<<contact[i].get_last_name()<<"|";
        }
        else 
        {
            print_part_str(contact[i].get_last_name());
        std::cout<<"|";
        }
        if((contact[i].get_nickname()).length() < 10)
        {
            smt = true_len - (contact[i].get_nickname()).length();
            print_space(smt);
            std::cout<<contact[i].get_nickname();
        }
         else print_part_str(contact[i].get_nickname());
           std::cout<<std::endl;
        i++;
    }
}

void PhoneBook::Search()
{
    std::string str;
    int         index;

    std::cout<<std::endl;
    print_all_contacts();
    std::cout<<MAGENTA<<"[ Please insert the contact Index ]--> ";
    std::cin>>str;
    if(str.length() == 1 && str[0]>='0' && str[0] <= '7')
    {
        index = atoi(str.c_str());
        str.clear();
        if(index >= 0 && index <= 7 && index < count)
        {
            std::cout<<"\n[ Fist Name      ]--> "<<contact[index].get_first_name()<<std::endl;
            std::cout<<"[ Fist Last Name ]--> "<<contact[index].get_last_name()<<std::endl;
            std::cout<<"[ Fist Nickame   ]--> "<<contact[index].get_nickname()<<std::endl;
            std::cout<<"[ Phone Number   ]--> "<<contact[index].get_phone_number()<<std::endl;
            std::cout<<"[ Darkest Secret ]--> "<<contact[index].get_dark_sec()<<std::endl<<std::endl;
        }
        else 
            std::cout<<"This contact does not exist "<<std::endl;
    }
    else 
      std::cout<<"invalid index"<<std::endl;
    if(std::cin.eof()){return ;} 
}