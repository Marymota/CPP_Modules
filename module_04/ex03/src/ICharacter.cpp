#include "../inc/ICharacter.hpp"

ICharacter::ICharacter() {
	std::cout << "ICharacter default constructor" << std::endl;
};

ICharacter::ICharacter(const ICharacter& obj) {
	std::cout << "ICharacter copy constructor" << std::endl;
	*this = obj;
};

ICharacter& ICharacter::operator=(const ICharacter& ) {
	std::cout << "ICharacter copy assignment operator" << std::endl;
	return (*this);
};
