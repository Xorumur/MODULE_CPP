#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *horde = zombieHorde(10, "Rondounet");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
}