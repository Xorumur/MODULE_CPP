#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string newZ) {this->name = newZ;}

Zombie::~Zombie(void) {}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std :: cout << this->name << std :: endl;
}