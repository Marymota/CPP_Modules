#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstdlib>
#include <iostream> 	
#include <iomanip>							
#include <string>
#include <ios>

#include "Contact.hpp"

class PhoneBook{
public:
	int	get_index();
	int set_index(int i);
	Contact get_contact(int index);
	void set_contact(Contact contact, int index);
private:
	int index;
	Contact contact_list[8];
};

#endif