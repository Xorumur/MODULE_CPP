#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
	private :
		std :: string first_name;
		std :: string last_name;
		std :: string nickname;
		std :: string phone;
		std :: string secret;
	public :
		~Contact();
		void set_data();
		std :: string search_data(std :: string str);
};

#endif