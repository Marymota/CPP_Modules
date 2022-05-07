#include "../inc/PhoneBook.hpp"
// The user Input needs to be converted to strings insted of 1, 2, 3;

void	printOptions()
{
	cout << "\n--------------------------------------";
	cout << "\nChoose an option:\n\n";
	cout << "1) Add a contact\n";
	cout << "2) Search for contacts\n";
	cout << "3) Exit\n";	
}

void	printIntro()
{
	cout << "**************************************\n";
	cout << "*                                    *\n";
	cout << "*             PHONEBOOK              *\n";
	cout << "*                                    *\n";
	cout << "**************************************\n";
	cout << "Choose an option:\n\n";
	cout << "ADD\n";
	cout << "SEARCH\n";
	cout << "EXIT\n";
}

int main(void)
{
	int index = 0;
	string option;
	PhoneBook phonebook;
	Contact newContact;

	printIntro();
	while (1)
	{
		cin >> option;
		if (option.compare("ADD") == 0)
		{
			if (index == 8)
				--index;
			cout << "\nAdd a contact\n";
			newContact.addcontact();
			phonebook.contact_list[index++] = newContact;
			cout << "\nNew contact added!\n";
		}
		else if (option.compare("SEARCH") == 0)
			cout << "\nSearch for a contact selected\n";
		else if (option.compare("EXIT") == 0)
			break;
		else
		{
			cout << "\nInvalid option. Please select again.\n";
			printOptions();
		}
		printOptions();
	}
	cout << "\nExiting program;\n";
	return 0;		
}