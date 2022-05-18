#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name) {
	Zombie *Z = new Zombie(name);
	return (Z);
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie	*Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].setName(name);
	return (Horde);
}