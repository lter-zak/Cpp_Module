#include "Serializer.hpp"

int main()
{
    Data ex1;
    ex1.name = "Janik";
    ex1.age = 26; 

    uintptr_t uint_ex1 = Serializer::serialize(&ex1); 
    Data *ex2 = Serializer::deserialize(uint_ex1);     

    std::cout<<"Data struct name -> "<<ex1.name<<" "<<"age -> "<<ex1.age<<std::endl;
    std::cout<<"Data2 struct name -> "<<ex2->name<<" "<<"age -> "<<ex2->age<<std::endl;

    return 0;
}   