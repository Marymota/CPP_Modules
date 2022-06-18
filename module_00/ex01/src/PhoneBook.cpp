#include "../inc/PhoneBook.hpp"

void	PhoneBook::set_contact(Contact contact, int index)
{
	contact_list[index] = contact;
}

Contact PhoneBook::get_contact(int index)
{
	return (contact_list[index]);
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
