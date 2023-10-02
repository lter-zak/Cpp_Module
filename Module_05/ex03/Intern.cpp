#include "Intern.hpp"

Intern::Intern()
{
	std::cout<<"Intern constructor called"<<std::endl;
}

Intern::~Intern()
{
	std::cout<<"Intern destructor called"<<std::endl;
}

Intern::Intern(const Intern& oldobj) //copy constructor  
{
	std::cout<<"Intern copy constructor called"<<std::endl;
	*this = oldobj;
}

Intern& Intern::operator=(const Intern& oldobj)
{
	std::cout<<"Intern copy assignment operator called"<<std::endl;
	if (this != &oldobj)
        *this = oldobj;
    return (*this);
}

const char* Intern::NotValidName::what(void) const throw()
{
	return ("Parameter doesn’t exist");
}

AForm*  Intern::NewShrubberyCreationForm(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm*   Intern::NewRobotomyRequestForm(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}

AForm*   Intern::NewPresidentialPardonForm( const std::string &target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string name, const std::string &target)
{
    try
    {
		
       AForm* (Intern::*ptr[3])(const std::string &) = 
	   {
			&Intern::NewShrubberyCreationForm,
			&Intern::NewPresidentialPardonForm,
			&Intern::NewRobotomyRequestForm
		};
       std::string NameArr[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

       for (int i = 0 ; i < 3; i++)
       {
            if (NameArr[i].compare(name) == 0)
            {
                return ((this->*ptr[i])(target));
            }
       }
	   throw NotValidName();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (NULL);
}