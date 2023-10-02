#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>

class Intern
{
    public:
        Intern();
		~Intern();
		Intern(const Intern& oldobj); //copy constructor  
		Intern& operator=(const Intern& oldobj);

        AForm*  makeForm(const std::string name , const std::string &target);
        AForm*  NewShrubberyCreationForm(const std::string &target);
        AForm*  NewRobotomyRequestForm(const std::string &target);
        AForm*  NewPresidentialPardonForm(const std::string &target);

		class NotValidName : public std::exception
		{
			public:
				const char* what() const throw();
		};
    private:

};

#endif