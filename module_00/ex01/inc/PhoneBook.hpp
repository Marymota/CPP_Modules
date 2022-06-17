#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstdlib>
#include <iostream> 	
#include <iomanip>							
#include <string>
#include <ios>

#include "Contact.hpp"

class PhoneBook{
private:
	int index;
public:
	Contact contact_list[8];
	int	get_index();
	int set_index(int i);
};

#endif