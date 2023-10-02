#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
		try
	{
		Bureaucrat highGradeBureaucrat("John", 100);
		Bureaucrat lowGradeBureaucrat("Bob", 46);

        ShrubberyCreationForm shrubberyForm("Home");
       RobotomyRequestForm robotomyForm("Target");
       PresidentialPardonForm pardonForm("Target");

        highGradeBureaucrat.signForm(shrubberyForm);
        highGradeBureaucrat.executeForm(shrubberyForm);

       lowGradeBureaucrat.signForm(robotomyForm);
       lowGradeBureaucrat.executeForm(robotomyForm);

        highGradeBureaucrat.signForm(robotomyForm);
       highGradeBureaucrat.executeForm(robotomyForm);

        highGradeBureaucrat.signForm(pardonForm);
        highGradeBureaucrat.executeForm(pardonForm);
	}
	catch(std::exception& e)// e - n obj na 
	{
		std::cout<<e.what()<<std::endl;
	}
    return(0);
}
