#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {
	this->type = weapon;
}

Weapon::~Weapon() {}

void	Weapon::setType(std::string weapon) {
	this->type = weapon;
}

std::string Weapon::getType() {
	return (this->type);
}