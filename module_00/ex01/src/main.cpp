/*	Classe implementation;
	 	Public and private arguments;
		Set and get arguments; 
*/

#include "../inc/PhoneBook.hpp"

int	valid_phone(std::string phone_number)
{
	int i;
	int size;

	i = -1;
	size = phone_number.length();
	while (++i < size)
	{
		if (phone_number[i] - 48 < 0 || phone_number[i] - 48 > 9)
		{
			i = -1;
			std::cout << "Invalid number. Try again" << std::endl;
			return (0);
		}
	}
	return (1);
}

void	print_contacts(PhoneBook phonebook)
{
	int i = -1;

	std::cout << "|     index|" << " firstname|" << "  lastname|" << "  nickname|" << std::endl;
	while (++i < phonebook.get_index())
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1
		<< "|" << std::setw(10) << std::right << phonebook.get_contact(i).getcontact("first")
		<< "|" << std::setw(10) << std::right << phonebook.get_contact(i).getcontact("last") 
		<< "|" << std::setw(10) << std::right << phonebook.get_contact(i).getcontact("nick") 
		<< "|" << std::endl;
	}	
}

// How to check index without exit the program if a letter is given instead of a number?
int	search(PhoneBook phonebook)
{
	int index = 0;

	print_contacts(phonebook);
	std::cout << "Choose a contact from 1 to 8\n";
	std::cin >> index;
	if (index > 8)
		std::cout << "\nThe contact place is not valid: " << index << std::endl;
	else if (index <= 0)
	{
		std::cout << "\nThe contact place is not valid!" << std::endl;
		exit(EXIT_FAILURE);
	}
	else if (index > phonebook.get_index())
		std::cout << "\nThe " << index << " contact place was not filled yet" << std::endl;
	else
		phonebook.get_contact(index - 1).getall();
	return (0);
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
	int index;

	printIntro();
	index =	phonebook.set_index(0);
	while (1)
	{
		printOptions();
		std::cin >> option;
		if (option.compare("ADD") == 0 || option.compare("add") == 0)
		{
			if (index == 8)
				phonebook.set_index(--index);
			std::cout << "\nAdd a contact\n";
			newContact.addcontact();
			phonebook.set_contact(newContact, index);
			if (index != 8)
				phonebook.set_index(++index);
			std::cout << "\nNew contact added!\n";
		}
		else if (option.compare("SEARCH") == 0 || option.compare("search") == 0)
		{
			if (index != 0)
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