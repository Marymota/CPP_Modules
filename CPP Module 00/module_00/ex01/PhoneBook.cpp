#include "./inc/PhoneBook.hpp"

void	search(PhoneBook phonebook) {
	int i = 0;
	int index = phonebook.index;

	while (i < phonebook.index)
	{
		cout << phonebook.contact_list[i].getcontact("first") << " | "
		<< phonebook.contact_list[i].getcontact("last") << " | " 
		<< phonebook.contact_list[i].getcontact("nick") << endl;
		++i;
	}

	cout << "Please insert the contact place in the phonebook from 1 to 8\n";
	cin >> index;
	while (index < 1 || index > 8)
	{
		cout << "Please indert a valid numbert from 1 to 8\n";
		cin >> index;
	}
	if (index > phonebook.index)
		cout << "\nThe " << index << " contact place was not filled yet" << endl;
	else
		phonebook.contact_list[index - 1].getall();
	sleep(1);
	system("clear");
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
	phonebook.index = 0;
	while (1)
	{
		cin >> option;
		if (option.compare("ADD") == 0 || option.compare("add") == 0)
		{
			if (phonebook.index == 8)
				--phonebook.index;
			cout << "\nAdd a contact\n";
			newContact.addcontact();
			phonebook.contact_list[phonebook.index] = newContact;
			if (phonebook.index != 8)
				phonebook.index++;
			cout << "\nNew contact added!\n";
		}
		else if (option.compare("SEARCH") == 0 || option.compare("search") == 0)
		{
			if (phonebook.index != 0)
				search(phonebook);
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