#include "FragTrap.hpp"
int main()
{
	FragTrap Frag("Karenchik");
	FragTrap Frag1(Frag);
	FragTrap Frag2;

	Frag2 = Frag;
	
	Frag.printAttributes();
	Frag.attack("Mekin");

	Frag.printAttributes();
	Frag.takeDamage(10);

	Frag.printAttributes();
	Frag.beRepaired(5);

	Frag.printAttributes();
	Frag.highFivesGuys();
    return (0);
}