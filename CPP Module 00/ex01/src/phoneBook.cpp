#include "../inc/phoneBook.hpp"
using namespace std;

/* 	NAMING CONVENCTIONS: 
	User-defined class names and functions starts with a capital letter 
	and has a capital letter for each new word, with no underscores. 
	Variable names are all lowercase, with underscores between words.

	STEP-BY-STEP
		Add libraries
		Create the contact class
			Class name
			Access specifier
			Constructor
			Attributes
			Method functions "setters & getters"
*/

bool Contact::setFirstName(string name) {
	if (name == "") {
		return false;
	}
	first_name = name;
	return true;
}

bool Contact::setLastName(string name) {
	if (name == "") {
		return false;
	}
	last_name = name;
	return true;
}

bool Contact::setNickname(string name) {
	if (name == "") {
		return false;
	}
	last_name = name;
	return true;
}

bool Contact::setPhoneNumber(string name) {
	if (name == "") {
		return false;
	}
	last_name = name;
	return true;
}

bool Contact::setDarkestSecret(string name) {
	if (name == "") {
		return false;
	}
	last_name = name;
	return true;
}

int main(){
	Contact contact1;	// Create an object of class Contact
	return 0;
}