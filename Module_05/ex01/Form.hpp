#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int signGrade, int executeGrade);
		~Form();
		Form(const Form& oldobj); //copy constructor  
		Form& operator=(const Form& oldobj);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSigGrade() const;
		int			getExecuteGrade() const;

		void		beSigned(Bureaucrat& Bur);

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
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;
};

std::ostream& operator<<(std::ostream& cout, const Form& Form);

#endif