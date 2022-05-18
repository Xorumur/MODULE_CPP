#include "Contact_Class.hpp"
#include "Phonebook_Class.hpp"
#include <iostream>

Contact::~Contact() {}

void	Contact::set_data() {
	std :: string data;
	std :: cout << "First name : ";
	std :: cin >> data;
	std :: cout << data << std :: endl;
	this->first_name = data;
	std :: cout << "test" << std :: endl;
	std :: cout << "Last name : ";
	std :: cin >> data;
	this->last_name = data;
	std :: cout << "Nickname : ";
	std :: cin >> data;
	this->nickname = data;
	std :: cout << "PhoneNumber : ";
	std :: cin >> data;
	this->phone = data;
	std :: cout << "DarkestSecret : ";
	std :: cin >> data;
	this->secret = data;
}

std::string Contact::search_data(std :: string str)
{
	if (str == "firstname")
		return (this->first_name);
	if (str == "lastname")
		return (this->last_name);
	if (str == "nickname")
		return (this->nickname);
	if (str == "phone")
		return (this->phone);
	if (str == "secret")
		return (this->secret);
	return (str);
}