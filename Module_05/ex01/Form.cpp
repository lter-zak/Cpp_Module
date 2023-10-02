#include "Form.hpp"

Form::Form():_name("Janik"), _isSigned(0), _signGrade(42), _executeGrade(42)
{
	std::cout<<"Form default constructor called"<<std::endl;
}

Form::Form(std::string name, int signGrade, int executeGrade):_name(name), _isSigned(0), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout<<"Form constructor called"<<std::endl;
		if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
	std::cout<<"Form destructor called"<<std::endl;
}

Form::Form(const Form& oldobj):_name(oldobj._name), _signGrade(oldobj._signGrade), _executeGrade(oldobj._executeGrade) //copy constructor  
{
	std::cout<<"Form copy constructor called"<<std::endl;
	_isSigned = oldobj._isSigned;
}

Form& Form::operator=(const Form& oldobj)
{
	std::cout<<"Form copy assignment operator called"<<std::endl;
	if (this == &oldobj)
		return (*this);
	const_cast<std::string&>(_name) = oldobj._name;
	_isSigned = oldobj	._isSigned;
	return (*this);
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("Form -> Grade is too high\n");
}
const char*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form -> Grade is too low\n");
}

void		Form::beSigned(Bureaucrat& Bur)
{
	if (Bur.getGrade() <= _signGrade )
		_isSigned = 1;
	else 
		throw GradeTooLowException();
}
std::string	Form::getName() const {return _name;}
bool		Form::getIsSigned() const {return _isSigned;}
int			Form::getSigGrade() const {return _signGrade;}
int			Form::getExecuteGrade() const {return _executeGrade;}

std::ostream& operator<<(std::ostream& cout, const Form& Form)
{
	std::cout<<"\nName          -->"<<Form.getName()<<
				"\nSign          -->"<<Form.getIsSigned()<<
				"\nSigned Grade  -->"<<Form.getSigGrade()<<
				"\nExecute Grade -->"<<Form.getExecuteGrade()<<"\n"<<std::endl;
	return (cout);
}
