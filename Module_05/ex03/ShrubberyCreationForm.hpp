#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"


class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& oldobj); //copy constructor  
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& oldobj);

		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget();
	private:
		std::string _target;
};

#endif