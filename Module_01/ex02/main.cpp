#include <iostream>

int main()
{
	std::string Brain = "HI THIS IS BRAIN";
	std::string &refBrain = Brain;
	std::string *ptrBrain;
	
	ptrBrain = &Brain;

	//	memory address of the string
	std::cout<<"memory address of the string variable "<<&Brain<<std::endl;
	std::cout<<"memory address held by string pointer"<<ptrBrain<<std::endl;
	std::cout<<"memory address held by string reference"<<&refBrain<<std::endl<<std::endl;

	std::cout<<"value of the string variable "<<Brain<<std::endl;
	std::cout<<"value of the string pointer "<<*ptrBrain<<std::endl;
	std::cout<<"value of the string reference "<<refBrain<<std::endl<<std::endl;
	return (0);
}