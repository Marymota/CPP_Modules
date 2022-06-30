// Demystify reference
#include <iostream>

int main ()
{
	std::string			STR = "HI THIS IS BRAIN"; 	// A string variable initialized to "HI THIS IS BRAIN"
	std::string*		stringPTR = &STR;						// stringPTR: A pointer to the string
	std::string&		stringREF = STR;						// stringREF: A reference to the string
																					// Print:
	std::cout 	<<	&STR << std::endl;					// The memory address of the string variable
	std::cout 	<<	stringPTR << std::endl;			// The memory address held by stringPTR
	std::cout 	<<	&stringREF << std::endl;		// The memory address held by stringREF	
	std::cout 	<<	STR << std::endl;						// The value of the string variable
	std::cout 	<<	*stringPTR << std::endl;		// The value pointed to by stringPTR
	std::cout 	<<	stringREF << std::endl;			// The value pointed to by stringREF

	return 0;
}