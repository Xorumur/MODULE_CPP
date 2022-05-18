#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
// #include "HumanA.hpp"
// #include "HumanB.hpp"

class	Weapon {
	private :
		std::string type;
	public :
		Weapon(std::string weapon);
		~Weapon();
		void	setType(std::string weapon);
		std::string getType();
};

#endif