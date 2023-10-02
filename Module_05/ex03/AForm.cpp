#include "AForm.hpp"

AForm::AForm():_name("Janik"), _isSigned(0), _signGrade(42), _executeGrade(42)
{
	std::cout<<"AForm default constructor called"<<std::endl;
}

AForm::AForm(std::string name, int signGrade, int executeGrade):_name(name), _isSigned(0), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout<<"AForm constructor called"<<std::endl;
		if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{
	std::cout<<"AForm destructor called"<<std::endl;
}

AForm::AForm(const AForm& oldobj):_name(oldobj._name), _signGrade(oldobj._signGrade), _executeGrade(oldobj._executeGrade) //copy constructor  
{
	std::cout<<"AForm copy constructor called"<<std::endl;
	_isSigned = oldobj._isSigned;
}

AForm& AForm::operator=(const AForm& oldobj)
{
	std::cout<<"AForm copy assignment operator called"<<std::endl;
	if (this == &oldobj)
		return (*this);
	
	return (*this);
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return (" Form -> Grade too high\n");
}
const char* AForm::GradeTooLowException::what(void) const throw()
{
	return (" Form -> Grade too low\n");
}

const char* AForm::itIsNotSind::what(void) const throw()
{
	return (" Form -> is not sind\n");
}
void		AForm::beSigned(Bureaucrat& Bur)
{
	if (Bur.getGrade() <= _signGrade )
		_isSigned = 1;
	else 
		throw GradeTooLowException();
}
std::string	AForm::getName() const {return _name;}
bool		AForm::getIsSigned() const {return _isSigned;}
int			AForm::getSigGrade() const {return _signGrade;}
int			AForm::getExecuteGrade() const {return _executeGrade;}

std::ostream& operator<<(std::ostream& cout, const AForm& AForm)
{
	std::cout<<"\nName          -->"<<AForm.getName()<<
				"\nSign          -->"<<AForm.getIsSigned()<<
				"\nSigned Grade  -->"<<AForm.getSigGrade()<<
				"\nExecute Grade -->"<<AForm.getExecuteGrade()<<"\n"<<std::endl;
	return (cout);
}
