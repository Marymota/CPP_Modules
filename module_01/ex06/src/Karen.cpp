#include "../inc/Karen.hpp"

void Karen::debug( void ) {
	std::cout << "I love having extra bacon for my\
7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money.\n\
You didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}

void Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free.\n\
I've been coming for years whereas you started working here since last month!" << std::endl;
}

void Karen::error( void ) {
	std::cout << "This is unnacceptable!\n\
I want to speak with the manager now!" << std::endl;
}

int get_index(std::string level, std::string *levels)
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0) 
			return (i);
	}
	return (-1);
}

void Karen::complain( std::string level ) 
{	
	// create an array with the possible levels
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 

	int index = get_index(level, levels) + 1;

	switch (index)
	{
		case 1:
			std::cout << "[" << level << "]" << std::endl;
			debug();
			break;
		case 2:
			std::cout << "[" << level << "]" << std::endl;
			info();
			break;
		case 3:
			std::cout << "[" << level << "]" << std::endl;
			warning();
			break;
		case 4:
			std::cout << "[" << level << "]" << std::endl;
			error();
			break;
		default:
			std::cout << "[Probably complainning about insignificant problems]" << std::endl;
	}
}