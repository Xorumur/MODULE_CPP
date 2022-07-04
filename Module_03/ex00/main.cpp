#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Darius("Darius");

	for (int i = 0; i < 11; i++)
		Darius.attack("Garen");
	Darius.takeDamage(9);
	Darius.beRepaired(5);
	Darius.setMana(10);
	Darius.beRepaired(5);
}