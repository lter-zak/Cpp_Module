
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Default constructor called"<<std::endl;
	_name = "Smt";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap Default parameter constructor called"<<std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Destructor called"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout<<"ScavTrap Copy constructor called"<<std::endl;
    this->_name         = other._name;
    this->_hitPoints    = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
}

void    ScavTrap::attack(const std::string& target)
{
    (void)target;
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<" , causing ";
        std::cout<<_attackDamage<<" points of damage!"<<std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout<<"ScavTrap "<<_name<<" can't attack"<<std::endl;
    }
}

ScavTrap& ScavTrap::operator=(const ScavTrap &oldObj)
{
	if (this != &oldObj)
	{
		std::cout<<"ScavTrap Copy assignment operator called"<<std::endl;
		this->_name         = oldObj._name;
		this->_hitPoints    = oldObj._hitPoints;
		this->_energyPoints = oldObj._energyPoints;
		this->_attackDamage = oldObj._attackDamage;
	}
    return (*this);
}
void	ScavTrap::guardGate()
{
	std::cout<<_name<<" guard Gate"<<std::endl;
}
