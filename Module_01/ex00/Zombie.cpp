#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string newZ) {this->name = newZ;}

Zombie::~Zombie(void) {}

void	Zombie::announce(void) {
	std :: cout << this->name << std :: endl;
}