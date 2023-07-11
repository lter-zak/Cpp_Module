#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj;
    ClapTrap obj1("Vazgenchik");

    obj.printAttributes();
	obj.setAttackDemege(2);
    obj.attack("Karenchik");
	obj.takeDamage(5);
	obj.printAttributes();
	obj.beRepaired(2);
    return (0);
}