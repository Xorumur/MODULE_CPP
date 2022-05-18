#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void randomChump(std::string name) {
	Zombie	*SCH = newZombie(name);
	SCH->announce();
	delete (SCH);
}