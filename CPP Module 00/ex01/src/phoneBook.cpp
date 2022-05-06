#include "../inc/phoneBook.hpp"

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
	cout << "1) Add a contact\n";
	cout << "2) Search for contacts\n";
	cout << "3) Exit\n";
}

int main(void)
{
	int option = 0;

	printIntro();
	while (option != 3)
	{
		cin >> option;
		if (option == 1)
			cout << "\nAdd a contact\n";
		else if (option == 2)
			cout << "\nSearch for a contact selected\n";
		else if (option > 3 || option < 1)
		{
			cout << "\nInvalid option. Please select again.\n";
			printOptions();
		}
	}
	cout << "\nExiting program;\n";
	return (0);		
}