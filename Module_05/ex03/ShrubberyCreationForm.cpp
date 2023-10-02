#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 145, 137), _target("sometarget")
{
	std::cout<<"ShrubberyCreationForm --> Default constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
  std::cout<<"ShrubberyCreationForm --> Parameter Cnstructor called"<<std::endl;
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout<<"ShrubberyCreationForm --> Destructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& oldobj) //copy constructor  
{
  std::cout<<"ShrubberyCreationForm --> Copy constructor called"<<std::endl;
	*this = oldobj;
}
		
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& oldobj)
{
	std::cout<<"ShrubberyCreationForm --> Copy assignment operator called"<<std::endl;
	if (this != &oldobj)
	{
		_target = oldobj._target;
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(){return _target;}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout<<"sigGrade "<<executor.getGrade()<<" executeGrade "<<_executeGrade<<std::endl;
	if (!getIsSigned())
		throw AForm::itIsNotSind();
	else if (executor.getGrade() > _executeGrade)
		throw AForm::GradeTooLowException();
	std::cout<<"target name --->"<<_target<<std::endl;
	std::ofstream MyFile(_target+ "_shrubbery");
     MyFile <<"                   ___\n"
        <<"               _,-'""   """"`--.\n"
        <<"             ,-'      __,,-- )\n"
        <<"           ,'    __,--""""dF      )\n"
        <<"          (   .-'_,--''dF'      )\n"
    	<<"        ,'      '_Hb ___dF'-._,-)\n"
    	<<"      ,'      _,-""""   ""--..__       )\n"
    	<<"     (     ,-'                  `.\n"
    	<<"      `._,'     _   _             ;\n"
    	<<"       ,'     ,' `-'Hb-.___..._,-'\n"
    	<<"       ('    ,''Hb.-'HH`-.dHF'\n"
        <<"        `--'   'Hb  HH  dF'\n"
        <<"              'Hb HH dF'\n"
        <<"               'HbHHdF'\n"
        <<"                |HHH|\n"
        <<"                |HHH|\n"
        <<"                |HHH|\n"
        <<"                |HHH|\n"
        <<"                |HHH|\n"
        <<"                dHHHb\n"
        <<"              .dFd|bHb.               o\n"
		<<"      o      .dHFdH|HbTHb.          o )\n"
		<<"  Y  |  )__,dHHFdHH|HHhoHHb.__Krogg  Y \n";
	MyFile.close();
 }