#ifndef CONTACT_H
#define CONTACT_H

#include <iostream> 								// preprocerror directive
#include <string>

using namespace std;

class Contact{										// class
 private:											// access specifier: private attributes		
	string first_name;					
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;
 public:											// access specifier: public attributes
	Contact();										// constructor: no parameters
	Contact(string, string, string, int, string);	// constructor: object with all the requirements
	Contact(const Contact&);						// constructor: copy object

	string getFirstName();							// "get" method to access a private attribute 
	string getLastName();
	string getNickname();
	string getPhoneNumber();
	string getDarkestSecret();
	bool setFirstName(string);							// "set" method to access a private attribute 
	bool setLastName(string);								// Implemented to return false if they fail															
	bool setNickname(string);	
	bool setPhoneNumber(string);
	bool setDarkestSecret(string);
};

#endif /* CONTACT_H */