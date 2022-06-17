#include "../inc/PhoneBook.hpp"

int isvalid(int i)
{
	if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
		return (1);
	else
		return (0);
}

int PhoneBook::get_index()
{
	return (index);
}

int	PhoneBook::set_index(int i)
{
	index = i;
	return (index);
}

void	print_contacts(PhoneBook phonebook)
{
	int i = -1;

	std::cout << "|     index|" << " firstname|" << "  lastname|" << "  nickname|" << std::endl;
	while (++i < phonebook.get_index())
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1
		<< "|" << std::setw(10) << std::right << phonebook.contact_list[i].getcontact("first")
		<< "|" << std::setw(10) << std::right << phonebook.contact_list[i].getcontact("last") 
		<< "|" << std::setw(10) << std::right << phonebook.contact_list[i].getcontact("nick") 
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
	if (!isvalid(index))
	{
		std::cout << "invalid number!\n";
		exit(EXIT_FAILURE);
	}
	else if (index > phonebook.get_index())
		std::cout << "\nThe " << index << " contact place was not filled yet" << std::endl;
	else
		phonebook.contact_list[index - 1].getall();
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
			phonebook.contact_list[index] = newContact;
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