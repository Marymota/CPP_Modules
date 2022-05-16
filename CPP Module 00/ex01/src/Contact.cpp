#include "../inc/PhoneBook.hpp"

void	Contact::addcontact() 
{
	cout << "First name: \n";
	cin >> first_name;
	cout << "Last name: \n";
	cin >> last_name;
	cout << "Nickname: \n";
	cin >> nickname;
	cout << "Phone number: \n";
	cin >> phone_number;
	cout << "Darkest Secret: \n";
	cin >> darkest_secret;
}

// need to implement truncate if more than 10 characters

void	Contact::getcontactinfo(int index) 
{
	cout << " | " << index + 1;
	cout << " | " << first_name;
	cout << " | " << last_name;
	cout << " | " << nickname << " |" << endl;
}