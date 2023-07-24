#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ScavTrap Scav("Gurgen");
	ScavTrap Scav1(Scav);
	ScavTrap Scav2;

	Scav2 = Scav1;
	
	Scav.printAttributes();
	Scav.attack("Mekin");

	Scav.printAttributes();
	Scav.takeDamage(10);

	Scav.printAttributes();
	Scav.beRepaired(5);

	Scav.printAttributes();
	Scav.guardGate();
    return (0);
}