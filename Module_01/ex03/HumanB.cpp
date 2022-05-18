#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : club(NULL), name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& weapon) {
	this->club = weapon;
}

void	HumanB::attack() {
	std::cout << "attacks with their " << this->club.getType() << std::endl;
}