
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Default constructor called"<<std::endl;
	_name = "Smt";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDemege = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap Default parameter constructor called"<<std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDemege = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Destructor called"<<std::endl;
}


void    ScavTrap::attack(const std::string& target)
{
    (void)target;
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<" , causing ";
        std::cout<<_attackDemege<<" points of damage!"<<std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout<<"ScavTrap "<<_name<<" can't attack"<<std::endl;
    }
}

void	ScavTrap::guardGate()
{
	std::cout<<_name<<" guard Gate"<<std::endl;
}