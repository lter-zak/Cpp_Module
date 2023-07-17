#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"ClapTrap Default constructor called"<<std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDemege = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"ClapTrap Default parameter constructor called"<<std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDemege = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Destructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout<<"ClapTrap Copy constructor called"<<std::endl;
    this->_name         = other._name;
    this->_name         = other._name;
    this->_hitPoints    = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDemege = other._attackDemege;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &oldObj)
{
    std::cout<<"ClapTrap Copy assignment operator called"<<std::endl;
    this->_name         = oldObj._name;
    this->_hitPoints    = oldObj._hitPoints;
    this->_energyPoints = oldObj._energyPoints;
    this->_attackDemege = oldObj._attackDemege;
    return (*this);
}


void    ClapTrap::attack(const std::string& target)
{
    (void)target;
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout<<"ClapTrap "<<_name<<" attacks "<<target<<" , causing ";
        std::cout<<_attackDemege<<" points of damage!"<<std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout<<"ClapTrap "<<_name<<" can't attack"<<std::endl;
    }

}

void	ClapTrap::setAttackDemege(int nb)
{
		_attackDemege = nb;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= amount || _hitPoints == 0)
    {
        _hitPoints = 0;
         std::cout<<"ClapTrap "<<_name<<" lose the game"<<std::endl;
    }
    else
    {
        _hitPoints -= amount; 
        std::cout<<"ClapTrap "<<_name<<" lost "<<amount<<" of points"<<std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout<<"ClapTrap "<<_name<<" was successfully Repaired"<<std::endl;
    }
    else
        std::cout<<"ClapTrap "<<_name<<" can't be Repaired"<<std::endl;
}

void ClapTrap::printAttributes()
{
    std::cout<<std::endl;
    std::cout<<BOLD<<CYAN<<"Name : "<<_name<<std::endl;
    std::cout<<"Hitint Points : "<<_hitPoints<<std::endl;
    std::cout<<"Hitint Points : "<<_energyPoints<<std::endl;
    std::cout<<"Hitint Points : "<<_attackDemege<<RESET<<std::endl;
    std::cout<<std::endl;
}

