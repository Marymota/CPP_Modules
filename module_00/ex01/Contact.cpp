#include "./inc/PhoneBook.hpp"

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

void	Contact::addcontact() 
{

	std::cout	<< "First name: \n";
	std::cin 	>> first_name;
	std::cout	<< "Last name: \n";
	std::cin 	>> last_name;
	std::cout	<< "Nickname: \n";
	std::cin 	>> nickname;
	std::cout	<< "Phone number: \n";
	std::cin 	>> phone_number;
	while (!valid_phone(phone_number))
		std::cin >> phone_number;
	std::cout	<< "Darkest Secret: \n";
	std::cin 	>> darkest_secret;
}

void	Contact::getall() 
{
	std::cout << first_name 	<<	std::endl;
	std::cout << last_name 		<<	std::endl;
	std::cout << nickname 		<<	std::endl;
	std::cout << phone_number 	<<	std::endl;
	std::cout << darkest_secret <<	std::endl;
}

std::string	Contact::getcontact(std::string value)
{
	if (value.compare("first") == 0)
	{
		if (first_name.size() > 10)
			return (first_name.substr(0, 9) + ".");
		else
			return (first_name);
	}
	else if (value.compare("last") == 0)
	{
		if (last_name.size() > 10)
			return (last_name.substr(0, 9) + ".");
		else
			return (last_name);
	}
	else if (nickname.size() > 10)
			return (nickname.substr(0, 9) + ".");
		else
			return (nickname);
	return (0);
}