#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("jigyar"), _grade(42)
{
	std::cout<<"Bureaucrat Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	std::cout<<"Bureaucrat constructor called"<<std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout<<"Bureaucrat destructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& oldobj):_name(oldobj._name) //copy constructor  
{
	std::cout<<"Bureaucrat copy constructor called"<<std::endl;
	_grade = oldobj._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& oldobj)
{
	std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
	if (this == &oldobj)
        return (*this);
    const_cast<std::string&>(_name) = oldobj._name;
	this->_grade = oldobj._grade;
    return (*this);
}

std::string Bureaucrat::getName() const{ return (_name); }

int	Bureaucrat::getGrade() const { return (_grade); }

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	--_grade;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException(); //parametor constructor
	++_grade;
}
const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}
const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& Bureaucrat)
{
	std::cout<<Bureaucrat.getName()<<", bureaucrat grade "<<Bureaucrat.getGrade()<<std::endl;
	return (cout);
}

void		Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout<<_name<<" signed "<<form.getName()<<std::endl;
	}
	catch (std::exception& e)
	{
		std::cout<<_name<<" couldn’t sign "<<form.getName()
		<<" because "<<e.what();
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout<<_name<<"  executed "<<form.getName()<<std::endl;
    }
	catch (const std::exception& e)
	{
		std::cout << _name << " couldn't execute Form because " << e.what();
    }
}