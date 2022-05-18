#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void 	randomChump(std::string name);

int	main(void)
{
	Zombie Mathieu("Mathieu");
	Mathieu.announce();

	Zombie	*test = newZombie("Un essai");
	test->announce();

	randomChump("Je sors le RS");
	
	delete(test);
}