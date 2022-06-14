#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <unistd.h>
#include <cstdlib>
#include <iostream> 	
#include <iomanip>							
#include <string>

#include "Contact.hpp"

class PhoneBook{
public:
	Contact contact_list[8];
	int index;
};

#endif