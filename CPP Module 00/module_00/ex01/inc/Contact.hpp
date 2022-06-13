#ifndef CONTACT_H
#define CONTACT_H

#include <string>

using namespace std;

class Contact{
	string first_name;					
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;
public:
	void	addcontact();
	void	getall();
	string	getcontact(string value);
};

#endif