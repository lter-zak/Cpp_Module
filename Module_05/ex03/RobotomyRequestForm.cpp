#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("President", 72, 45), _target("sometarget")
{
	std::cout<<"RobotomyRequestForm --> Default constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", 72, 45)
{
	std::cout<<"RobotomyRequestForm --> Parameter constructor called"<<std::endl;
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"RobotomyRequestForm --> Destructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& oldobj) //copy constructor 
{
	std::cout<<"RobotomyRequestForm --> Copy constructor called"<<std::endl;
	*this = oldobj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& oldobj)
{
	std::cout<<"RobotomyRequestForm --> Copy assignment operator called"<<std::endl;
	if (this != &oldobj)
	{
		_target = oldobj._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw AForm::itIsNotSind();
	else if (executor.getGrade() > _executeGrade)
		throw AForm::GradeTooLowException();
	std::cout<<"....drilling noises...."<<std::endl;
	//if (random(0,1))
	srand(time(NULL));
	int randNum = (rand() % 3) + 1;
	if (randNum == 1)
		std::cout<<_target<<" has been robotomized successfully "<<std::endl;
}