#include "./inc/PhoneBook.hpp"

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

void	Contact::getall() 
{
	cout << first_name << endl;
	cout << last_name << endl;
	cout << nickname << endl;
	cout << phone_number << endl;
	cout << darkest_secret << endl;
}

string	Contact::getcontact(string value)
{
	if (value.compare("first") == 0)
		return (first_name);
	else if (value.compare("last") == 0)
		return (last_name);
	else if (value.compare("nick") == 0)
		return (nickname);
	return (0);
}