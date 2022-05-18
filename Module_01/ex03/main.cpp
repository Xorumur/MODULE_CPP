#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		std::cout << "test" << std::endl;
		Weapon club = Weapon("crude spiked club");
		std::cout << "test" << std::endl;
		HumanB jim("Jim");
		std::cout << "test" << std::endl;
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}