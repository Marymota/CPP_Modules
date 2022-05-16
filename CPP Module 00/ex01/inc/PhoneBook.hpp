#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <stdlib.h>
#include <iostream> 								
#include <string.h>
#include "Contact.hpp"
#include <unistd.h>

using namespace std;

class PhoneBook{
public:
	Contact contact_list[8];
	int index;
};

#endif