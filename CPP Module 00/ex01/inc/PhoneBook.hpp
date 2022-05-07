#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> 								
#include <string.h>
#include "Contact.hpp"

using namespace std;

class PhoneBook{
public:
	Contact contact_list[8];
	int index;
};

#endif