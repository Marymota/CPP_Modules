#include "./inc/PhoneBook.hpp"

void	search(PhoneBook phonebook) {
	int index = phonebook.index + 1;

	cout << "Please insert the contact place in the phonebook from 1 to 8\n";
	cin >> index;
	while (index < 1 || index > 8)
	{
		cout << "Please indert a valid numbert from 1 to 8\n";
		cin >> index;
	}
	if (index > phonebook.index + 1)
		cout << "\nThe " << index << " contact place was not filled yet";
	phonebook.contact_list[index - 1].getcontact();
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
	int index = 0;
	string option;
	PhoneBook phonebook;
	Contact newContact;

	printIntro();
	while (1)
	{
		cin >> option;
		if (option.compare("ADD") == 0 || option.compare("add") == 0)
		{
			if (index == 8)
				--index;
			cout << "\nAdd a contact\n";
			newContact.addcontact();
			phonebook.contact_list[index++] = newContact;
			cout << "\nNew contact added!\n";
		}
		else if (option.compare("SEARCH") == 0 || option.compare("search") == 0)
		{
			if (index != 0)
			{
				cout << "\nSearch for a contact selected\n";
				search(phonebook);
			}
			else
				cout << "\nThere are no contacts!\n";
		}
		else if (option.compare("EXIT") == 0 || option.compare("exit") == 0)
			break;
		else
		{
			cout << "\nInvalid option. Please select again.\n";
			system("clear");
			printOptions();
		} 
		sleep(1);
		system("clear");
		printOptions();
	}
	cout << "\nExiting program;\n";
	return 0;		
}