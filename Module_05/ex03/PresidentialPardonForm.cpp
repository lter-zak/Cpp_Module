#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("President", 25, 5), _target("sometarget")
{
	std::cout<<"PresidentialPardonForm --> Default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("President", 25, 5)
{
	std::cout<<"PresidentialPardonForm --> Parameter Constructor called"<<std::endl;
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<"PresidentialPardonForm --> Destructor called"<<std::endl;
}
		
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& oldobj) //copy constructor
{
	std::cout<<"PresidentialPardonForm --> Copy constructor called"<<std::endl;
	*this = oldobj;
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& oldobj)
{
	std::cout<<"PresidentialPardonForm --> Copy assignment operator called"<<std::endl;
	if (this != &oldobj)
	{
		_target = oldobj._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw AForm::itIsNotSind();
	else if (executor.getGrade() > _executeGrade)
		throw AForm::GradeTooLowException();
	std::cout<<_target<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
}