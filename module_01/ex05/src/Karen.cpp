#include "../inc/Karen.hpp"

void Karen::debug( void ) {
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. \
You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. \
I've been coming for years whereas you started working here since last month!" << std::endl;
}

void Karen::error( void ) {
	std::cout << "Thio is unnacceptable! I want to speak with the manager now!" << std::endl;
}

void Karen::complain( std::string level ) {
	
	// create an array with the possible levels
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 

	// member function pointers 
	MSG msgs[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; 	

	for (int i = 0; i < 4; i++) 	// iterate through levels to confirm which one was passed
		if (levels[i] == level) 		// if they match
			(this->*(msgs[i]))();			// Call the method using the pointer in the array msg[] 
	std::cout << std::endl;				// When aplicable, std::invoke is recomended

	/* All this Pointers-to-member-functions mess is avoidable.
	If the member functions pointed to are static,
	then normal pointers can be used.

	When possible use std::invoke instead of (this->*msg[i]))(). (not in c++98 version)
	Possible calls:
		(this->*(msgs[i]))();
		(*this.*msgs[i])();
	*/
}																