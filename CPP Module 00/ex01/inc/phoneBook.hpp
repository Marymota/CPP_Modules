#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> 								
#include <string>
#include <vector>

using namespace std;

class Contact{
	string first_name;					
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;

 public:
	void ADD (string first_name, string last_name, string nickname, string phone_number, string darkest_secret);
	string SEARCH();
	void EXIT(); 

};

class PhoneBook{
	vector<Contact> contact_list[8];
	int index;
};

#endif /* PHONEBOOK_HPP */