#include "./inc/PhoneBook.hpp"

void	print_contacts(PhoneBook phonebook)
{
	int i = -1;

	std::cout << "|     index|" << " firstname|" << "  lastname|" << "  nickname|" << std::endl;
	while (++i < phonebook.index)
	{
		std::cout << "|" << std::right << std::setw(10) << i + 1 << std::right
		<< "|" << std::setw(10) << std::right << phonebook.contact_list[i].getcontact("first")
		<< "|" << std::setw(10) << std::right << phonebook.contact_list[i].getcontact("last") 
		<< "|" << std::setw(10) << std::right << phonebook.contact_list[i].getcontact("nick") 
		<< "|" << std::endl;
	}	
}

void	search(PhoneBook phonebook)
{
	int index = phonebook.index;

	print_contacts(phonebook);
	std::cout << "Please insert the contact place in the phonebook from 1 to 8\n";
	std::cin >> index;
	while (index < 1 || index > 8)
	{
		std::cout << "Please indert a valid numbert from 1 to 8\n";
		std::cin >> index;
	}
	if (index > phonebook.index)
		std::cout << "\nThe " << index << " contact place was not filled yet" << std::endl;
	else
		phonebook.contact_list[index - 1].getall();
}

void	printOptions()
{
	std::cout << "\nChoose an option:\n\n";
	std::cout << "ADD\n";
	std::cout << "SEARCH\n";
	std::cout << "EXIT\n";
}

void	printIntro()
{
	std::cout << "**************************************\n";
	std::cout << "*                                    *\n";
	std::cout << "*             PHONEBOOK              *\n";
	std::cout << "*                                    *\n";
	std::cout << "**************************************\n";
}

int main(void)
{
	std::string option;
	PhoneBook phonebook;
	Contact newContact;

	printIntro();
	phonebook.index = 0;
	while (1)
	{
		printOptions();
		std::cin >> option;
		if (option.compare("ADD") == 0 || option.compare("add") == 0)
		{
			if (phonebook.index == 8)
				--phonebook.index;
			std::cout << "\nAdd a contact\n";
			newContact.addcontact();
			phonebook.contact_list[phonebook.index] = newContact;
			if (phonebook.index != 8)
				phonebook.index++;
			std::cout << "\nNew contact added!\n";
		}
		else if (option.compare("SEARCH") == 0 || option.compare("search") == 0)
		{
			if (phonebook.index != 0)
				search(phonebook);
			else
				std::cout << "\nThere are no contacts!\n";
		}
		else if (option.compare("EXIT") == 0 || option.compare("exit") == 0)
			break;
		else
			std::cout << "\nInvalid option. Please select again.\n";
	}
	std::cout << "\nExiting program;\n";
	return 0;		
}