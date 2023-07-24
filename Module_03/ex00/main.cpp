#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj;
    ClapTrap obj1("Vazgenchik");
	ClapTrap obj2(obj1);

	obj2 = obj1;

	obj2.printAttributes();
    obj1.printAttributes();
	obj1.setAttackDamage(2);
	obj1.printAttributes();
    obj1.attack("Karenchik");
	obj1.takeDamage(5);
	obj1.printAttributes();
	obj1.beRepaired(2);
	obj1.printAttributes();

    return (0);
}