#include "../inc/PhoneBook.hpp"

void search(PhoneBook phonebook)
{
	int i = -1;
	Contact new_contact;
	cout << "\nSearch for a contact selected\n";
	cout << phonebook.index << endl
	;
	while (++i < phonebook.index)
	{
		new_contact = phonebook.contact_list[i];
		new_contact.getcontactinfo(i);
	}
}

void	printOptions()
{
	cout << "\n--------------------------------------";
	cout << "\nChoose an option:\n\n";
	cout << "ADD\n";
	cout << "SEARCH\n";
	cout << "EXIT\n";
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
	string option;
	PhoneBook phonebook;
	Contact newContact;

	printIntro();
	while (1)
	{
		cin >> option;
		if (option.compare("ADD") == 0 || option.compare("add") == 0)
		{
			if (phonebook.index == 8)
				--phonebook.index;
			cout << "\nAdd a contact\n";
			newContact.addcontact();
			phonebook.contact_list[phonebook.index++] = newContact;
			system("clear");
			cout << "\nNew contact added!\n";
		}
		else if (option.compare("SEARCH") == 0 || option.compare("search") == 0)
		{
			system("clear");
			search(phonebook);
			// to implement: need to search for a contact and print all info
		}
		else if (option.compare("EXIT") == 0 || option.compare("exit") == 0)
			break;
		else
		{
			system("clear");
			cout << "\nInvalid option. Please select again.\n";
			printOptions();
		}
		printOptions();
	}
	cout << "\nExiting program;\n";
	return 0;		
}