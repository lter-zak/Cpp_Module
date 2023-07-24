#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<<"Default constructor called"<<std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout<<"Default parameter constructor called"<<std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<<"Destructor called"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->_name         = other._name;
    this->_hitPoints    = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap &oldObj)
{
	if (this != &oldObj)
	{
		std::cout<<"Copy assignment operator called"<<std::endl;
		this->_name         = oldObj._name;
		this->_hitPoints    = oldObj._hitPoints;
		this->_energyPoints = oldObj._energyPoints;
		this->_attackDamage = oldObj._attackDamage;
	}
    return (*this);
}


void    FragTrap::attack(const std::string& target)
{
    (void)target;
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout<<"FragTrap "<<_name<<" attacks "<<target<<" , causing ";
        std::cout<<_attackDamage<<" points of damage!"<<std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout<<"FragTrap "<<_name<<" can't attack"<<std::endl;
    }

}


void FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap is giving high fives"<<std::endl;
}

