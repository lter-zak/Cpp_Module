#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& oldobj); //copy constructor  
		PresidentialPardonForm& operator=(const PresidentialPardonForm& oldobj);

		void		execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif