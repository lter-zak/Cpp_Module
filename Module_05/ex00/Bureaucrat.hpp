#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& oldobj); //copy constructor  
		Bureaucrat& operator=(const Bureaucrat& oldobj);

		std::string	getName() const;
		int			getGrade() const;

		void		incrementGrade();
		void		decrementGrade();
		// Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& Bureaucrat);

#endif
