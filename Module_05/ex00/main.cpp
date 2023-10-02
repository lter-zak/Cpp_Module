#include "Bureaucrat.hpp"

int main(void)
{
	//The try statement allows you to define a block of code to 
	//be tested for errors while it is being executed
	try
	{
		Bureaucrat Bur("Janik", 150);
		std::cout<<Bur;
		Bur.decrementGrade();
		std::cout<<Bur;
		Bur.incrementGrade();
		std::cout<<Bur;
	}
	catch(std::exception& e)// e - n obj na 
	{
		std::cout<<e.what()<<std::endl;
	}
	try
	{
		Bureaucrat Bur("Arev", 42);
		std::cout<<Bur;
		Bur.decrementGrade();
		std::cout<<Bur;
		Bur.incrementGrade();
		std::cout<<Bur;
	}
	catch(std::exception& e)// e - n obj na 
	{
		std::cout<<e.what()<<std::endl;
	}
}