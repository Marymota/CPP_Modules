#include "../inc/PhoneBook.hpp"

void	Contact::addcontact() {
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