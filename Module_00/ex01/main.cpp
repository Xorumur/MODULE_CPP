#include <iostream>
#include "Phonebook_Class.hpp"
#include "Contact_Class.hpp"

int main (void) {
	Phonebook repo;

	while (1) {
		std :: string str;
		std :: cin >> str;
		if (str == "ADD")
			repo.add();
		if (str == "SEARCH")
			repo.search();
		if (str == "EXIT")
			exit(1);
	}
}