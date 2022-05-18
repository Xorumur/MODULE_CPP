#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : club(weapon) {
	this->name = name;
	this->club = weapon;
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << this->name <<" attacks with their " << this->club.getType() << std::endl;
}