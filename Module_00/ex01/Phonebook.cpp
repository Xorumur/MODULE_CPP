#include "Contact_Class.hpp"
#include "Phonebook_Class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Phonebook::Phonebook() {i = 0;} // std :: cout << "Get called" << std :: endl;}

Phonebook::~Phonebook() {}

void	Phonebook::add() {
	this->tab[i++].set_data();
}

void	n_char_of_str(std :: string str) {
	if (str.length() > 10) {
		for (int i = 0; i < 9; i++)
			std :: cout << str[i];
		std :: cout << ".";
	}
	else {
		std :: cout << str;
		for (int i = 0; i < 10 - (int)str.length(); i++)
			std :: cout << " ";
	}
	std :: cout << "|";
}

void	Phonebook::search(void) {
	std :: string Name;
	std :: string n;
	for (int i = 0; i < this->i; i++) {
		std :: cout << i;
		for (int j = 0; j < 9; j++)
			std :: cout << " ";
		std :: cout << "|";
	}
	std :: cout << std :: endl;
	for (int j = 0; j < this->i; j++)
		n_char_of_str(this->tab[j].search_data("firstname"));
	std :: cout << std :: endl;
	for (int j = 0; j < this->i; j++)
		n_char_of_str(this->tab[j].search_data("lastname"));
	std :: cout << std :: endl;
	for (int j = 0; j < this->i; j++)
		n_char_of_str(this->tab[j].search_data("nickname"));
	std :: cout << std :: endl;
	std :: string Index;
	std :: cout << "Wich ? ";
	std :: cin >> Index;
	for (int i = 0; i < (int)Index.length(); i++)
		if (!(std::isdigit(Index[i])))
			std :: cout << "Not a valable index" << std :: endl;
	int	wich = (int)std::stod(Index);
	if (wich >= 0 && wich <= this->i - 1) {
		std :: cout << wich;
		for (int j = 0; j < 9; j++)
			std :: cout << " ";
		std :: cout << "|";
		n_char_of_str(this->tab[wich].search_data("firstname"));
		n_char_of_str(this->tab[wich].search_data("lastname"));
		n_char_of_str(this->tab[wich].search_data("nickname"));
		std :: cout << std :: endl;
	}
	else
		std :: cout << "Not a valable index" << std :: endl;
}