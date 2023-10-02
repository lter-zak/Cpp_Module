#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& oldobj); //copy constructor  
		RobotomyRequestForm& operator=(const RobotomyRequestForm& oldobj);

		void		execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif