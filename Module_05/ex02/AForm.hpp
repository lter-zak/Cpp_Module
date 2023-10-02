#ifndef AFORM_HPP
#define AFORM_HPP


#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string name, int signGrade, int executeGrade);
		virtual ~AForm();
		AForm(const AForm& oldobj); //copy constructor  
		AForm& operator=(const AForm& oldobj);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSigGrade() const;
		int			getExecuteGrade() const;

		void		beSigned(Bureaucrat& Bur);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		//virtual std::string	getTarget();
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

		class itIsNotSind : public std::exception
		{
			public:
				const char* what() const throw();
		};

	protected:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;  
};

std::ostream& operator<<(std::ostream& cout, const AForm& AForm);

#endif