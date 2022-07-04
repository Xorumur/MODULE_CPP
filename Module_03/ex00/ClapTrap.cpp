#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->dmg = 0;
	this->pdv = 10;
	this->mana = 10;
	this->dead = false;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Desctructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->dead == true)
		std::cout << this->name << " can't attack because he's dead" << std::endl;
	else if (this->mana < 1) 
		std::cout << this->name << " have not enought mana" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->dmg << " damage" << std::endl;
		this->mana -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->dead == true)
		std::cout << this->name << " can't take any damage because he's dead" << std::endl;
	else {
		std::cout << this->name << " has taken " << amount << " damages" << std::endl;
		this->pdv -= amount;
		if (this->pdv < 1) {
			std::cout << this->name << " just died" << std::endl;
			this->dead = true;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->dead == true) {
		std::cout << this->name << " is dead and cannot do action anymore" << std::endl;
		return ;
	}

	if (this->mana < 1) {
		std::cout << this->name << " have not enought mana" << std::endl;
		return ;
	}
	std::cout << this->name << " has been repaired and get healed the amount of " << amount << " HP" << std::endl;
	this->pdv += amount;
	if (pdv > 0)
		this->dead = false;
}

int ClapTrap::getPdv(void) {
	return (this->pdv);
}
int ClapTrap::getMana(void) {
	return (this->mana);
}
int ClapTrap::getDmg(void) {
	return (this->dmg);
}
std::string ClapTrap::getName(void) {
	return (this->name);
}

void ClapTrap::setPdv(int New) {
	this->pdv = New;
}
void ClapTrap::setMana(int New) {
	this->mana = New;
}
void ClapTrap::setDmg(int New) {
	this->dmg = New;
}
void ClapTrap::setName(std::string New) {
	this->name = New;
}

