#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
		try
	{
        Intern someRandomIntern;
        AForm* rrf;
		std::string a = "Bender";
        rrf = someRandomIntern.makeForm("Robotomy Request", a);
		delete rrf;
	}
	catch(std::exception& e)// e - n obj na 
	{
		std::cout<<e.what()<<std::endl;
	}
    return(0);
}
