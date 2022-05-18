#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact_Class.hpp"

class Phonebook {
	private : 
		int	i;
		Contact	tab[8];
	public :
		Phonebook();
		~Phonebook();
		void	add();
		void	search();
};

#endif